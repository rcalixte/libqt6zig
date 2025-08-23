package main

import (
	"C"
	"fmt"
	"math"
	"reflect"
	"sort"
	"strconv"
	"strings"
	"unicode"
)
import "path/filepath"

// not language-reserved words, but binding-reserved words
func zigReservedWord(s string) bool {
	switch s {
	case "default", "const", "fn", "var", "type", "len", "new", "copy", "import",
		"error", "string", "map", "int", "select", "pub", "ret", "suspend",
		"opaque", "align", "self", "allocator":
		return true
	default:
		return false
	}
}

func getPageName(c string) string {
	pageName := strings.ToLower(c)
	if pageName == "qnamespace" {
		return "qt"
	}
	pageName = strings.ReplaceAll(pageName, "__", "-")
	return pageName
}

type PageType int

const (
	QtPage PageType = iota
	EnumPage
	DtorPage
)

var operatorLookup = map[rune]string{
	'!': "-not",
	'&': "-and",
	'(': "-28",
	')': "-29",
	'*': "-2a",
	'+': "-2b",
	'-': "-",
	'/': "-2f",
	'<': "-lt",
	'=': "-eq",
	'>': "-gt",
	'[': "-5b",
	']': "-5d",
	'^': "-5e",
	'|': "-7c",
	'~': "-7e",
}

func operatorToUrl(cmdUrl string) string {
	suffix := strings.TrimPrefix(cmdUrl, "operator")
	ret := "operator"

	for _, op := range suffix {
		if ch, ok := operatorLookup[op]; ok {
			ret += ch
		}
	}

	return ret
}

func getPageUrl(pageType PageType, pageName, cmdURL, className string) string {
	if strings.HasPrefix(pageName, "qsci") {
		if pageType == EnumPage {
			return ""
		}
		return "https://www.riverbankcomputing.com/static/Docs/QScintilla/class" + className + ".html"
	}

	if pageType == DtorPage && strings.Contains(className, "__") {
		return ""
	}

	if strings.HasPrefix(pageName, "qtermwidget") || strings.HasPrefix(className, "Konsole") {
		return "https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api"
	}

	qtUrl := "https://doc.qt.io/qt-6/"
	if len(className) > 0 && className[0] == 'K' || className[0] == 'k' {
		qtUrl = "https://api-staging.kde.org/"
	}

	pageName = strings.ReplaceAll(pageName, "__", "-")

	switch pageType {
	case QtPage:
		if strings.HasPrefix(cmdURL, "operator") {
			cmdURL = operatorToUrl(cmdURL)
		}

		return qtUrl + pageName + ".html" + ifv(cmdURL != "", "#"+cmdURL, "")
	case EnumPage:
		return qtUrl + pageName + ".html#types"
	case DtorPage:
		return qtUrl + pageName + ".html#dtor." + className
	}
	return ""
}

// cabiEnumName returns the Zig enum name for a Qt C++ class.
// Normally this is the same, except for class types that are nested inside another class definition.
func cabiEnumName(className string) string {
	// Many types are defined in qnamespace.h under Qt::
	// The Zig implementation instead prefixes e.g. qnamespace_enums.Foo and
	// where these names don't collide with anything, we strip the redundant prefix
	name := strings.Split(className, "::")
	enumName := name[len(name)-1]
	return strings.ReplaceAll(enumName, "::", "__")
}

func (p CppParameter) needsPointer(paramType string) bool {
	return IsKnownClass(p.ParameterType) && !strings.HasPrefix(paramType, "QtC.") &&
		!(strings.Contains(paramType, "anyopaque") || strings.Contains(paramType, "[]"))
}

func (p CppParameter) RenderTypeMapZig(zfs *zigFileState, isReturnType bool) string {
	baseType := p.RenderTypeZig(zfs, true, true)

	if e, ok := KnownEnums[p.ParameterType]; ok {
		baseType = e.EnumTypeZig
	}

	return mapParamToString(baseType)
}

func mapParamToString(param string) string {
	var result []rune

	maybeSlice := ""
	if strings.Contains(param, "[][]") {
		maybeSlice = "slice"
	}

	for _, char := range param {
		if unicode.IsLetter(char) || unicode.IsDigit(char) {
			result = append(result, char)
		}
	}
	return maybeSlice + strings.ToLower(string(result))
}

func (p CppParameter) RenderTypeZig(zfs *zigFileState, isReturnType, fullEnumName bool) string {
	if p.Pointer && p.ParameterType == "char" {
		return "[]const u8"
	}
	if p.ParameterType == "QString" || p.ParameterType == "QAnyStringView" ||
		p.ParameterType == "QByteArrayView" || p.ParameterType == "QStringView" {
		return "[]const u8"
	}
	if p.ParameterType == "QByteArray" {
		return "[]u8"
	}

	if t, _, ok := p.QListOf(); ok {
		tType := t.RenderTypeZig(zfs, isReturnType, fullEnumName)
		maybePointer := ifv(t.needsPointer(tType), "QtC.", "")

		if e, ok := KnownEnums[t.ParameterType]; ok && !fullEnumName {
			// e.g. QLocale::weekdays
			tType = e.EnumTypeZig
		}

		return "[]" + maybePointer + tType
	}

	if t, ok := p.QSetOf(); ok {
		zfs.imports["set_"+t.RenderTypeZig(zfs, isReturnType, false)] = struct{}{}
		return "set_" + t.RenderTypeMapZig(zfs, isReturnType)
	}

	if t1, t2, _, ok := p.QMapOf(); ok {
		var hashMapType, k string
		if t1.ParameterType == "QString" {
			k = "constu8"
			hashMapType = "StringHashMap,,"
		} else if t1.ParameterType == "QByteArray" {
			k = "u8"
			hashMapType = "AutoHashMap,u8,"
		} else {
			k = t1.RenderTypeZig(zfs, isReturnType, false)
			if e, ok := KnownEnums[t1.ParameterType]; ok {
				k = e.EnumTypeZig
			}
			hashMapType = "AutoHashMap," + k + ","
		}

		v := t2.RenderTypeZig(zfs, isReturnType, false)
		zfs.imports[hashMapType+v] = struct{}{}

		k = mapParamToString(k)
		v = mapParamToString(v)

		return ifv(p.Pointer, "*", "") + "map_" + k + "_" + v
	}

	if t1, t2, ok := p.QPairOf(); ok {
		// Design QPair using capital-named members, in case it gets passed
		// across packages
		f := t1.RenderTypeZig(zfs, isReturnType, false)
		s := t2.RenderTypeZig(zfs, isReturnType, false)

		zfs.imports["struct_"+f+"_"+s] = struct{}{}

		f = mapParamToString(f)
		s = mapParamToString(s)
		return "struct_" + f + "_" + s
	}

	if p.ParameterType == "void" && p.Pointer {
		return "?*anyopaque"
	}

	ret := ""

	if p.IsKnownEnum() {
		if strings.HasPrefix(p.ParameterType, "QFlags<") {
			enumClass := strings.TrimPrefix(p.ParameterType, "QFlags<")
			lastIndex := strings.LastIndex(enumClass, "::")
			if lastIndex == -1 {
				lastIndex = len(enumClass)
			}
			enumClass = enumClass[:lastIndex]

			if zigImport, ok := KnownImports[enumClass]; ok {
				if fullEnumName {
					ret = "flag of " + zigImport.Filename + "_enums." + cabiEnumName(p.ParameterType[7:len(p.ParameterType)-1])
					zfs.imports[zigImport.Filename+"_enums"] = struct{}{}
				} else {
					ret = ifv(p.Pointer || p.ByRef, "*", "") + ifv(p.Const && (p.Pointer || p.ByRef), "const ", "") + "i64"
				}
			}

			if ret != "" {
				return ret
			}
		}
	}

	switch p.ParameterType {
	case "bool":
		ret += ifv((p.Pointer || p.ByRef) && fullEnumName, "*", "") + "bool"
	case "unsigned char", "uchar", "quint8", "uint8_t":
		// Zig byte is unsigned
		ret += "u8"
	case "char", "qint8", "signed char":
		ret += "i8" // Signed
	case "short", "qint16", "int16_t":
		ret += "i16"
	case "ushort", "quint16", "unsigned short", "uint16_t":
		ret += "u16"
	case "long":
		// Windows ILP32 - 32-bits
		// Linux LP64 - 64-bits
		if C.sizeof_long == 4 {
			ret += "i32"
		} else {
			ret += "i64"
		}
	case "ulong", "unsigned long":
		if C.sizeof_long == 4 {
			ret += "u32"
		} else {
			ret += "u64"
		}

	case "unsigned int", "quint32", "uint":
		ret += "u32"
	case "qint32", "int":
		ret += "i32"
	case "qlonglong", "qint64", "long long":
		ret += "i64"
	case "qulonglong", "quint64", "unsigned long long":
		ret += "u64"
	case "float":
		ret += "f32"
	case "double", "qreal":
		ret += "f64"
	case "size_t": // size_t is unsigned
		if C.sizeof_size_t == 4 {
			ret += "u32"
		} else {
			ret += "u64"
		}
	case "qsizetype", "QIntegerForSizeof<std::size_t>::Signed", "qptrdiff", "ptrdiff_t": // all signed
		if C.sizeof_size_t == 4 {
			ret += "i32"
		} else {
			ret += "i64"
		}

	case "qintptr", "intptr_t", "QIntegerForSizeof<void *>::Signed":
		ret += "isize"
	case "uintptr_t", "quintptr", "QIntegerForSizeof<void *>::Unsigned":
		ret += "usize"

	default:
		if ft, ok := p.QFlagsOf(); ok {
			if enumInfo, ok := KnownEnums[ft.UnderlyingEnum.ParameterType]; ok && enumInfo.PackageName != zfs.currentPackageName {
				// Cross-package
				if fullEnumName {
					ret += "enums." + cabiEnumName(ft.UnderlyingEnum.ParameterType)
				} else {
					ret += enumInfo.EnumTypeZig
				}
				zfs.imports[enumInfo.PackageName] = struct{}{}
			} else {
				// Same package
				if fullEnumName {
					ret += cabiEnumName(ft.UnderlyingEnum.ParameterType)
				} else {
					ret += enumInfo.EnumTypeZig
				}
			}

		} else if e, ok := KnownEnums[p.ParameterType]; ok {
			enumName := cabiEnumName(p.ParameterType)
			if enumName == "" {
				enumName = cabiClassName(p.ParameterType)
			}

			lastIndex := strings.LastIndex(p.ParameterType, "::")
			if lastIndex == -1 {
				lastIndex = len(p.ParameterType)
			}
			enumClass := p.ParameterType[:lastIndex]

			if zigImport, ok := KnownImports[enumClass]; ok {
				if fullEnumName {
					ret += zigImport.Filename + "_enums." + enumName
				} else {
					ret += e.EnumTypeZig
				}

				var maybeDots string
				if zigImport.PackageName != zfs.currentPackageName {
					if zigImport.PackageName == "" {
						maybeDots = "../"
					} else {
						maybeDots = "../" + zigImport.PackageName + "/"
					}
				}
				zfs.imports[maybeDots+zigImport.Filename+"__enums"] = struct{}{}

			} else {
				panic("UNKNOWN IMPORT: p.ParameterType: " + p.ParameterType + "\tenumClass: " + enumClass + "\tenumName: " + enumName)
			}

		} else if strings.Contains(p.ParameterType, "::") && !strings.HasPrefix(p.ParameterType, "QFlags<") {
			// Inner class
			var maybePointer string
			cClassName := cabiClassName(p.ParameterType)
			if p.ByRef || !strings.HasPrefix(cClassName, "QtC.") {
				maybePointer = "QtC."
			}
			ret += maybePointer + cClassName

		} else if strings.HasPrefix(p.ParameterType, "QFlags<") {
			ret += "flag of enums." + cabiEnumName(p.ParameterType)
			zfs.imports[zfs.currentHeaderName+"_enums"] = struct{}{}

		} else {
			// Do not transform this type
			ret += p.ParameterType
		}
	}

	if p.needsPointer(ret) {
		ret = "QtC." + ret
	}

	if p.ByRef || p.Pointer {
		if isReturnType {
			if p.needsPointer(ret) {
				ret = "QtC." + ret
			}
		} else if p.QtClassType() {
			ret = "?*anyopaque"
		} else {
			ret = strings.Repeat("*", max(p.PointerCount, 1)) + ifv(p.Const, "const ", "") + ret
		}
	}

	switch ret {
	case "quint8":
		ret = "u8"
	case "unsigned int", "quint32", "uint":
		ret = "u32"
	case "int":
		ret = "i32"
	}

	return ret // ignore const
}

func (p CppParameter) renderReturnTypeZig(zfs *zigFileState, isSlot bool) string {
	ret := p.RenderTypeZig(zfs, true, false)
	maybeConst := ifv(p.Const, "const ", "")

	if e, ok := KnownEnums[ret]; ok {
		ret = maybeConst + e.EnumTypeZig
	}

	if ret == "void" {
		ret = maybeConst + "void"
	}

	if ret == "int" {
		ret = maybeConst + "i32"
	}

	if ret == "quint8" {
		ret = maybeConst + "u8"
	}

	if ret == "uint" {
		ret = maybeConst + "u32"
	}

	if p.needsPointer(ret) {
		ret = maybeConst + "QtC." + ret
	}

	if p.IntType() && (p.Pointer || p.ByRef) {
		ret = "?*" + maybeConst + ret
	}

	if p.Const && ret == "?*anyopaque" {
		ret = "?*const anyopaque"
	}

	if isSlot {
		// C calling convention limitations
		ret = strings.ReplaceAll(ret, "[][]const u8", "[*][*:0]const u8")
		ret = strings.ReplaceAll(ret, "[]const u8", "[*:0]const u8")
		ret = strings.ReplaceAll(ret, "[]u8", "[*:0]u8")
		ret = strings.ReplaceAll(ret, "[]i32", "[*:-1]i32")
		ret = strings.ReplaceAll(ret, "[]QtC", "[*:null]QtC")
		ret = strings.ReplaceAll(ret, "[]struct", "[*:null]struct")
	}

	return ret
}

func (p CppParameter) parameterTypeZig() string {
	if p.ParameterType == "QString" || p.ParameterType == "QByteArray" ||
		p.ParameterType == "QAnyStringView" {
		return "qtc.libqt_string"
	}

	if p.ParameterType == "QByteArrayView" || p.ParameterType == "QStringView" {
		return "qtc.libqt_strview"
	}

	if _, _, ok := p.QListOf(); ok {
		return "qtc.libqt_list"
	}

	if _, ok := p.QSetOf(); ok {
		return "qtc.libqt_list"
	}

	if _, _, _, ok := p.QMapOf(); ok {
		return "qtc.libqt_map"
	}

	if _, _, ok := p.QPairOf(); ok {
		return "qtc.libqt_pair"
	}

	if p.ParameterType == "int" {
		return "i32"
	}

	// Zig binds void* as ?*anyopaque
	if p.ParameterType == "void" && p.Pointer {
		return "?*anyopaque"
	}

	tmp := strings.ReplaceAll(p.RenderTypeCabi(false), "*", "")

	switch tmp {
	case "char":
		tmp = "u8"
	case "unsigned long long":
		tmp = "u64"
	case "long long":
		tmp = "i64"
	case "unsigned int":
		tmp = "u32"
	case "signed int":
		tmp = "i32"
	case "uint16_t":
		tmp = "u16"
	case "int":
		tmp = "i32"
	case "intptr_t":
		tmp = "isize"
	case "uintptr_t":
		tmp = "usize"
	case "unsigned char":
		tmp = "u8"
	case "double":
		tmp = "f64"
	}

	if p.QtClassType() || p.Pointer || p.ByRef {
		return "?*anyopaque"
	} else {
		return tmp
	}
}

func (zfs *zigFileState) emitCommentParametersZig(params []CppParameter, isSlot bool) string {
	tmp := make([]string, 0, len(params))

	for i := 0; i < len(params); i++ {
		p := params[i]
		if IsArgcArgv(params, i) {
			tmp = append(tmp, "argc: usize, argv: [*][*:0]u8")
			i++ // Skip the next parameter, already handled
		} else {
			// Ordinary parameter
			paramType := p.RenderTypeZig(zfs, true, true)
			if p.needsPointer(paramType) {
				paramType = "QtC." + paramType
			}
			if p.IntType() && (p.Pointer || p.ByRef) {
				paramType = strings.Repeat("*", max(p.PointerCount, 1)) + ifv(p.Const, "const ", "") + paramType
			}
			if isSlot {
				// C calling convention limitations
				paramType = strings.ReplaceAll(paramType, "[][]const u8", "[*][*:0]const u8")
				paramType = strings.ReplaceAll(paramType, "[]const u8", "[*:0]const u8")
				paramType = strings.ReplaceAll(paramType, "[]u8", "[*:0]u8")
				paramType = strings.ReplaceAll(paramType, "[]i32", "[*:-1]i32")
				paramType = strings.ReplaceAll(paramType, "[]QtC", "[*]QtC")
			}
			tmp = append(tmp, p.ParameterName+": "+paramType)
		}
	}
	return strings.Join(tmp, ", ")
}

func (zfs *zigFileState) emitParametersZig(params []CppParameter, isSlot bool) string {
	tmp := make([]string, 0, len(params))

	for i := 0; i < len(params); i++ {
		p := params[i]
		if IsArgcArgv(params, i) {
			tmp = append(tmp, "argc: usize, argv: [*][*:0]u8")
			i++ // Skip the next parameter, already handled
		} else {
			// Ordinary parameter
			param := p.ParameterName
			paramType := p.RenderTypeZig(zfs, false, false)
			if zigReservedWord(param) {
				param = "_" + param
			}
			if p.needsPointer(paramType) {
				paramType = "QtC." + paramType
			}
			if isSlot {
				// C calling convention limitations
				paramType = strings.ReplaceAll(paramType, "[][]const u8", "[*][*:0]const u8")
				paramType = strings.ReplaceAll(paramType, "[]const u8", "[*:0]const u8")
				paramType = strings.ReplaceAll(paramType, "[]u8", "[*:0]u8")
				paramType = strings.ReplaceAll(paramType, "[]i32", "[*:-1]i32")
				paramType = strings.ReplaceAll(paramType, "[]QtC", "[*]QtC")
				paramType = strings.ReplaceAll(paramType, "[]?*a", "[*]?*a")
				tmp = append(tmp, paramType)
			} else {
				tmp = append(tmp, param+": "+paramType)
			}
		}
	}
	return strings.Join(tmp, ", ")
}

type zigFileState struct {
	imports            map[string]struct{}
	currentPackageName string
	currentHeaderName  string
	currentClassName   string
	currentMethodName  string
}

func (zfs *zigFileState) emitReturnComment(rt CppParameter) string {
	var returnComment string

	if rt.IsKnownEnum() {
		if strings.HasPrefix(rt.ParameterType, "QFlags<") {
			enumClass := strings.TrimPrefix(rt.ParameterType, "QFlags<")
			lastIndex := strings.LastIndex(enumClass, "::")
			if lastIndex == -1 {
				lastIndex = len(enumClass)
			}
			enumClass = enumClass[:lastIndex]

			if zigImport, ok := KnownImports[enumClass]; ok {
				returnComment = "///\n/// Returns: ``` flag of " + zigImport.Filename + "_enums." + cabiEnumName(rt.ParameterType[7:len(rt.ParameterType)-1]) + " ```\n"
				var maybeDots string
				if zigImport.PackageName != zfs.currentPackageName {
					if zigImport.PackageName == "" {
						maybeDots = "../"
					} else {
						maybeDots = "../" + zigImport.PackageName + "/"
					}
				}
				zfs.imports[maybeDots+zigImport.Filename+"__enums"] = struct{}{}
			}
		} else {
			returnComment = "///\n/// Returns: ``` " + rt.RenderTypeZig(zfs, false, true) + " ```\n"
		}
	} else if t, containerType, ok := rt.QListOf(); ok {
		if _, ok := KnownEnums[t.ParameterType]; ok {
			enumClass := strings.TrimPrefix(t.ParameterType, containerType+"<")
			lastIndex := strings.LastIndex(enumClass, "::")
			if lastIndex == -1 {
				lastIndex = len(enumClass)
			}
			enumClass = enumClass[:lastIndex]

			if zigImport, ok := KnownImports[enumClass]; ok {
				returnComment = "///\n/// Returns: ``` []" + zigImport.Filename + "_enums." + cabiEnumName(t.ParameterType) + " ```\n"
				zfs.imports[zigImport.Filename+"_enums"] = struct{}{}
			}
		}
	}

	return returnComment
}

func (zfs *zigFileState) emitParametersZig2CABIForwarding(m CppMethod) (preamble, forwarding string) {
	tmp := make([]string, 0, len(m.Parameters)+2)

	if !m.IsStatic {
		tmp = append(tmp, "@ptrCast(self)")
	}

	for i := 0; i < len(m.Parameters); i++ {
		p := m.Parameters[i]
		if IsArgcArgv(m.Parameters, i) {
			// QApplication constructor. Convert 'args' into Qt's wanted types
			// Qt has a warning in the docs saying these pointers must be valid
			// for the entire lifetype of QApplication, so we pass by address
			// and never free the memory
			// This transformation only affects the Zig side. The C ABI side is
			// projected naturally.

			preamble += "var argc_param: c_int = @intCast(argc);\n"
			preamble += "const argv_param: [*c][*c]u8 = @ptrCast(@alignCast(&argv[0]));\n"

			tmp = append(tmp, "&argc_param, argv_param")
			i++ // Skip the next parameter, already handled

		} else {
			addPreamble, rvalue := zfs.emitParameterZig2CABIForwarding(p)

			preamble += addPreamble
			tmp = append(tmp, rvalue)
		}
	}
	return preamble, strings.Join(tmp, ", ")
}

func (zfs *zigFileState) emitParameterZig2CABIForwarding(p CppParameter) (preamble, rvalue string) {
	nameprefix := makeNamePrefix(p.ParameterName)
	if zigReservedWord(p.ParameterName) {
		p.ParameterName = "_" + p.ParameterName
	}

	lowerClass := strings.ToLower(zfs.currentClassName)

	if p.ParameterType == "QString" || p.ParameterType == "QByteArray" ||
		p.ParameterType == "QAnyStringView" {
		// Zig: convert [](const) u8 -> libqt_string
		// C ABI: convert libqt_string -> real QString

		preamble += "const " + nameprefix + "_str = qtc.libqt_string{\n"
		preamble += "    .len = " + p.ParameterName + ".len,\n"
		preamble += "    .data = " + p.ParameterName + ".ptr,\n"
		preamble += "};\n"

		rvalue = nameprefix + "_str"

	} else if p.ParameterType == "QByteArrayView" || p.ParameterType == "QStringView" {
		rvalue = p.ParameterName + ".ptr"

	} else if t, _, ok := p.QListOf(); ok {
		// QList<T>
		// Convert []T to C array without allocation if we can.
		// This is not always possible, e.g. for QString.
		// We need to use the C ABI type for that.
		zfs.imports["std"] = struct{}{}

		if t.ParameterType == "QString" || t.ParameterType == "QByteArray" {
			preamble += "var " + nameprefix + "_arr = allocator.alloc(qtc.libqt_string, " + p.ParameterName + `.len) catch @panic("` + lowerClass + "." + zfs.currentMethodName + `: Memory allocation failed");` + "\n"
			preamble += "defer allocator.free(" + nameprefix + "_arr);\n"
			preamble += "for (" + p.ParameterName + ", 0.." + p.ParameterName + ".len) |item, i| {\n"
			preamble += "    " + nameprefix + "_arr[i] = .{\n"
			preamble += "        .len = item.len,\n"
			preamble += "        .data = item.ptr,\n"
			preamble += "    };\n"
			preamble += "}\n"
		}
		preamble += "const " + nameprefix + "_list = qtc.libqt_list{\n"
		preamble += "    .len = " + p.ParameterName + ".len,\n"
		if t.ParameterType == "QString" || t.ParameterType == "QByteArray" {
			preamble += "    .data = " + nameprefix + "_arr.ptr,\n"
		} else if t.QtClassType() {
			preamble += "    .data = @ptrCast(" + p.ParameterName + ".ptr),\n"
		} else {
			preamble += "    .data = " + p.ParameterName + ".ptr,\n"
		}
		preamble += "};\n"
		rvalue = nameprefix + "_list"

	} else if _, ok := p.QSetOf(); ok {
		panic("QSet<> arguments are not yet implemented") // n.b. doesn't seem to exist in QtCore/QtGui/QtWidgets at all

	} else if kType, vType, _, ok := p.QMapOf(); ok {
		// QMap<K,V>
		zfs.imports["std"] = struct{}{}
		var hashMapType string
		if kType.ParameterType == "QString" {
			hashMapType = "StringHashMap,,"
		} else if kType.ParameterType == "QByteArray" {
			hashMapType = "AutoHashMap,u8,"
		} else {
			k := kType.RenderTypeZig(zfs, false, true)
			if e, ok := KnownEnums[kType.ParameterType]; ok {
				k = e.EnumTypeZig
			}
			hashMapType = "AutoHashMap," + k + ","
		}
		vParam := vType.RenderTypeZig(zfs, true, true)

		kTypeZig := kType.parameterTypeZig()

		zfs.imports[hashMapType+vParam] = struct{}{}
		// Allocate temporary space for keys and values
		preamble += "const " + nameprefix + "_keys = allocator.alloc(" + kTypeZig + ", " + p.ParameterName + `.count()) catch @panic("` + lowerClass + "." + zfs.currentMethodName + `: Memory allocation failed");` + "\n"
		preamble += "defer allocator.free(" + nameprefix + "_keys);\n"
		preamble += "const " + nameprefix + "_values = allocator.alloc(" + vParam + ", " + p.ParameterName + `.count()) catch @panic("` + lowerClass + "." + zfs.currentMethodName + `: Memory allocation failed");` + "\n"
		preamble += "defer allocator.free(" + nameprefix + "_values);\n"

		// Iterate map and fill
		preamble += "var i: usize = 0;\n"
		preamble += "var " + p.ParameterName + "_it = " + p.ParameterName + ".iterator();\n"
		preamble += "while (" + nameprefix + "_it.next()) |entry| {\n"
		preamble += "    const key = entry.key_ptr.*;\n"

		if strings.HasPrefix(hashMapType, "StringHashMap") {
			preamble += "    " + nameprefix + "_keys[i] = qtc.libqt_string{\n"
			preamble += "        .len = key.len,\n"
			preamble += "        .data = key.ptr,\n"
			preamble += "    };\n"
		} else {
			castType := "int"
			if kTypeZig == "f64" {
				castType = "float"
			}

			preamble += "    " + nameprefix + "_keys[i] = @" + castType + "Cast(key);\n"
		}
		preamble += "    " + nameprefix + "_values[i] = entry.value_ptr.*;\n"
		preamble += "    i += 1;\n"

		preamble += "}\n"

		// Create the map struct
		preamble += "const " + nameprefix + "_map = " + ifv(p.Pointer, "&", "") + "qtc.libqt_map {\n"
		preamble += "    .len = " + p.ParameterName + ".count(),\n"
		preamble += "    .keys = @ptrCast(" + nameprefix + "_keys.ptr),\n"
		preamble += "    .values = @ptrCast(" + nameprefix + "_values.ptr),\n"
		preamble += "};\n"
		rvalue = nameprefix + "_map"

	} else if kType, vType, ok := p.QPairOf(); ok {
		// QPair<K,V>
		zfs.imports["struct_"+kType.RenderTypeZig(zfs, false, true)+"_"+vType.RenderTypeZig(zfs, false, true)] = struct{}{}

		kCast := "@ptrCast("
		kClose := ")"
		if kType.parameterTypeZig() == "i32" {
			kCast = "@intCast(@intFromPtr("
			kClose = "))"
		}

		vCast := "@ptrCast("
		vClose := ")"
		if vType.parameterTypeZig() == "i32" {
			vCast = "@intCast(@intFromPtr("
			vClose = "))"
		}

		// Create the pair struct
		preamble += "const " + nameprefix + "_pair = qtc.libqt_pair {\n"
		preamble += "    .first = " + kCast + nameprefix + ".first" + kClose + ",\n"
		preamble += "    .second = " + vCast + nameprefix + ".second" + vClose + ",\n"
		preamble += "};\n"
		rvalue = nameprefix + "_pair"

	} else if p.Pointer && p.ParameterType == "char" {
		// Single char* argument
		preamble += "const " + nameprefix + "_Cstring = " + p.ParameterName + ".ptr;\n"
		rvalue = nameprefix + "_Cstring"

	} else if p.QtClassType() {
		// The C++ type is a pointer to Qt class
		// We want our functions to accept the Zig wrapper type, and forward as a pointer
		rvalue = "@ptrCast(" + p.ParameterName + ")"

	} else if p.IntType() || p.IsFlagType() || p.IsKnownEnum() {
		if p.Pointer || p.ByRef {
			rvalue = "@ptrCast(" + p.ParameterName + ")"
		} else {
			castType := "int"
			if p.ParameterType == "float" || p.ParameterType == "double" {
				castType = "float"
			}
			rvalue = "@" + castType + "Cast(" + p.ParameterName + ")"
		}

	} else if p.ParameterType == "bool" {
		if p.Pointer || p.ByRef {
			rvalue = "@ptrCast(" + p.ParameterName + ")" // n.b. This may not work if the integer type conversion was wrong
		} else {
			rvalue = p.ParameterName
		}
	} else {
		// Default
		rvalue = p.ParameterName
	}

	return preamble, rvalue
}

func (zfs *zigFileState) emitCabiToZig(assignExpr string, rt CppParameter, rvalue string) string {
	shouldReturn := assignExpr
	afterword := ""
	namePrefix := makeNamePrefix(rt.ParameterName)
	lowerClass := strings.ToLower(zfs.currentClassName)

	if rt.Void() {
		return rvalue + ";"
	} else if rt.ParameterType == "void" && rt.Pointer {
		return assignExpr + rvalue + ";"
	} else if rt.ParameterType == "char" && rt.Pointer {
		// Qt functions normally return QString - anything returning char*
		// is something like QByteArray.Data() where it returns an unsafe
		// internal pointer.
		// However in case this is a signal, we need to be able to marshal both
		// forwards and backwards with the same types, this has to be a string
		// in both cases.
		// This is not a libqt_string and therefore we did not allocate it
		// and therefore we don't have to free it either.
		zfs.imports["std"] = struct{}{}
		shouldReturn = "const " + namePrefix + "_ret = "
		afterword += assignExpr + " std.mem.span(" + namePrefix + "_ret);\n"
		return shouldReturn + " " + rvalue + ";\n" + afterword

	} else if rt.ParameterType == "QString" || rt.ParameterType == "QAnyStringView" ||
		rt.ParameterType == "QByteArrayView" || rt.ParameterType == "QStringView" {
		zfs.imports["std"] = struct{}{}

		shouldReturn = "const " + namePrefix + "_str ="
		afterword += "defer qtc.libqt_string_free(&" + namePrefix + "_str);\n"
		afterword += "const " + namePrefix + "_ret = allocator.alloc(u8, " + namePrefix + `_str.len) catch @panic("` + lowerClass + "." + zfs.currentMethodName + `: Memory allocation failed");` + "\n"
		afterword += "@memcpy(" + namePrefix + "_ret, " + namePrefix + "_str.data[0.." + namePrefix + "_str.len]);\n"
		afterword += assignExpr + " " + namePrefix + "_ret;\n"
		return shouldReturn + " " + rvalue + ";\n" + afterword

	} else if rt.ParameterType == "QByteArray" {
		// We receive the C ABI type of a libqt_string. Convert it into []byte
		// We must free the libqt_string data pointer - this is a data copy,
		// not an alias.
		zfs.imports["std"] = struct{}{}

		shouldReturn = "const " + namePrefix + "_bytearray: qtc.libqt_string = "
		afterword += "defer qtc.libqt_string_free(&" + namePrefix + "_bytearray);\n"
		afterword += "const " + namePrefix + "_ret = allocator.alloc(u8, " + namePrefix + `_bytearray.len) catch @panic("` + lowerClass + "." + zfs.currentMethodName + `: Memory allocation failed");` + "\n"
		afterword += "@memcpy(" + namePrefix + "_ret, " + namePrefix + "_bytearray.data[0.." + namePrefix + "_bytearray.len]);\n"
		afterword += assignExpr + " " + namePrefix + "_ret;\n"
		return shouldReturn + " " + rvalue + ";\n" + afterword

	} else if t, containerType, ok := rt.QListOf(); ok {
		// In the simplest QList case, the list is a slice of the inner type
		// e.g. QList<double>
		// In the intermediate case, the list is a slice of a struct
		// containing the inner type
		// e.g. QList<QString>
		// In the more complex QList case, the list is a slice of a struct
		// containing the inner type and/or a pointer to the inner type
		// e.g. QList<QPair<QString, QString>>
		//
		// In the simple case, clearing memory involves freeing the inner
		// type. In the intermediate case, the inner type is a struct, so
		// we need to free the struct. In the more complex case, the inner
		// type is a struct containing another inner type, so we need to
		// free the struct and the inner type.
		//
		// If the return type is a list of pointers to Qt objects, we don't
		// need to free the objects. This is because either the caller is
		// responsible for freeing the objects or they are owned by Qt.
		zfs.imports["std"] = struct{}{}
		shouldReturn = "const " + namePrefix + "_arr: qtc.libqt_list = "

		arrType := t.RenderTypeZig(zfs, true, true)

		if IsKnownClass(t.ParameterType) || IsKnownTypeDef(t.ParameterType) || t.IntType() {
			if t.needsPointer(arrType) {
				arrType = "QtC." + arrType
			}
			if e, ok := KnownEnums[t.ParameterType]; ok {
				// e.g. QLocale::weekdays
				arrType = e.EnumTypeZig
			}

			afterword += "defer qtc.libqt_free(" + namePrefix + "_arr.data);\n"
			afterword += "const " + namePrefix + "_ret = allocator.alloc(" + arrType + ", " + namePrefix + `_arr.len) catch @panic("` + lowerClass + "." + zfs.currentMethodName + `: Memory allocation failed");` + "\n"
			afterword += "const " + namePrefix + "_data: [*]" + arrType + " = @ptrCast(@alignCast(" + namePrefix + "_arr.data));\n"
			afterword += "@memcpy(" + namePrefix + "_ret, " + namePrefix + "_data[0.." + namePrefix + "_arr.len]);\n"

		} else if t.ParameterType == "char" {
			afterword += "const " + namePrefix + "_str: [*]?[*:0]const u8 = @ptrCast(@alignCast(" + namePrefix + "_arr.data));\n"
			afterword += "defer qtc.libqt_free(" + namePrefix + "_arr.data);\n"
			afterword += "const " + namePrefix + "_ret = allocator.alloc(" + arrType + ", " + namePrefix + `_arr.len) catch @panic("` + lowerClass + "." + zfs.currentMethodName + `: Memory allocation failed");` + "\n"
			afterword += "for (0.." + namePrefix + "_arr.len) |i| {\n"
			afterword += "    const " + namePrefix + "_cstr = " + namePrefix + "_str[i];\n"
			afterword += "    if (" + namePrefix + "_cstr) |cstr| {\n"
			afterword += "        const cstr_len = std.mem.len(cstr);\n"
			afterword += "        const " + namePrefix + "_buf = allocator.alloc(u8, cstr_len) catch @panic(\"" + lowerClass + "." + zfs.currentMethodName + ": Buffer allocation failed\");\n"
			afterword += "        @memcpy(" + namePrefix + "_buf, cstr[0..cstr_len]);\n"
			afterword += "        " + namePrefix + "_ret[i] = " + namePrefix + "_buf;\n"
			afterword += "    } else {\n"
			afterword += "        " + namePrefix + "_ret[i] = &[_]u8{};\n"
			afterword += "    }\n"
			afterword += "}\n"

		} else if strings.Contains(rt.ParameterType, "<QString>") || strings.Contains(rt.ParameterType, "<QByteArray>") {
			afterword += "const " + namePrefix + "_str: [*]qtc.libqt_string = @ptrCast(@alignCast(" + namePrefix + "_arr.data));\n"
			afterword += "defer {\n"
			afterword += "for (0.." + namePrefix + "_arr.len) |i| {\n"
			afterword += "qtc.libqt_string_free(@ptrCast(&" + namePrefix + "_str[i]));\n"
			afterword += "}\n"
			afterword += "qtc.libqt_free(" + namePrefix + "_arr.data);\n"
			afterword += "}\n"
			afterword += "const " + namePrefix + "_ret = allocator.alloc(" + arrType + ", " + namePrefix + `_arr.len) catch @panic("` + lowerClass + "." + zfs.currentMethodName + `: Memory allocation failed");` + "\n"
			afterword += "for (0.." + namePrefix + "_arr.len) |i| {\n"
			afterword += "    const " + namePrefix + "_data = " + namePrefix + "_str[i];\n"
			afterword += "    const " + namePrefix + "_buf = allocator.alloc(u8, " + namePrefix + `_data.len) catch @panic("` + lowerClass + "." + zfs.currentMethodName + `: Memory allocation failed");` + "\n"
			afterword += "    @memcpy(" + namePrefix + "_buf, " + namePrefix + "_data.data[0.." + namePrefix + "_data.len]);\n"
			afterword += "    " + namePrefix + "_ret[i] = " + namePrefix + "_buf;\n"
			afterword += "}\n"

		} else if strings.Contains(rt.ParameterType, "<QPair<") {
			pair := rt.ParameterType[len(containerType)+7 : len(rt.ParameterType)-2]
			switch pair {
			case "QByteArray, QByteArray", "QString, QString":
				afterword += "defer {\n"
				afterword += "const " + namePrefix + "_pair: [*]qtc.libqt_pair = @ptrCast(@alignCast(" + namePrefix + "_arr.data));\n"
				afterword += "for (0.." + namePrefix + "_arr.len) |i| {\n"
				afterword += "qtc.libqt_string_free(@ptrCast(&" + namePrefix + "_pair[i].first));\n"
				afterword += "qtc.libqt_free(" + namePrefix + "_pair[i].first);\n\n"
				afterword += "qtc.libqt_string_free(@ptrCast(&" + namePrefix + "_pair[i].second));\n"
				afterword += "qtc.libqt_free(" + namePrefix + "_pair[i].second);\n"
				afterword += "}\n"
				afterword += "qtc.libqt_free(" + namePrefix + "_arr.data);\n"
				afterword += "}\n"
			default:
				afterword += "defer {\n"
				afterword += "const " + namePrefix + "_pair: [*]qtc.libqt_pair = @ptrCast(@alignCast(" + namePrefix + "_arr.data));\n"
				afterword += "for (0.." + namePrefix + "_arr.len) |i| {\n"
				afterword += "qtc.libqt_free(" + namePrefix + "_pair[i].first);\n"
				afterword += "qtc.libqt_free(" + namePrefix + "_pair[i].second);\n"
				afterword += "}\n"
				afterword += "qtc.libqt_free(" + namePrefix + "_arr.data);\n"
				afterword += "}\n"
			}

			afterword += "const " + namePrefix + "_ret = allocator.alloc(" + arrType + ", " + namePrefix + `_arr.len) catch @panic("` + lowerClass + "." + zfs.currentMethodName + `: Memory allocation failed");` + "\n"
			afterword += "const " + namePrefix + "_data: [*]" + arrType + " = @ptrCast(@alignCast(" + namePrefix + "_arr.data));\n"
			afterword += "@memcpy(" + namePrefix + "_ret, " + namePrefix + "_data[0.." + namePrefix + "_arr.len]);\n"

		} else {
			panic("*UNHANDLED QLIST TYPE*\trt:" + rt.ParameterType + "\tarrType: " + arrType + "\tt: " + t.ParameterType)
		}

		afterword += assignExpr + " " + namePrefix + "_ret;"
		return shouldReturn + " " + rvalue + ";\n" + afterword

	} else if t, ok := rt.QSetOf(); ok {
		if t.ParameterType == "QString" || t.ParameterType == "QByteArray" {
			zfs.imports["std"] = struct{}{}
			shouldReturn = "const " + namePrefix + "_set: qtc.libqt_list = "

			afterword += "var " + namePrefix + "_ret: set_" + t.RenderTypeMapZig(zfs, false) + " = .empty;\n"
			afterword += "const " + namePrefix + "_data: [*]qtc.libqt_string = @ptrCast(@alignCast(" + namePrefix + "_set.data));\n"
			afterword += "for (0.." + namePrefix + "_set.len) |i| {\n"
			afterword += "    " + namePrefix + "_ret.put(allocator, " + namePrefix + "_data[i].data[0.." + namePrefix + "_data[i].len], {}) catch @panic(\"" + lowerClass + "." + zfs.currentMethodName + ": Map insertion failed\");\n"
			afterword += "}\n"

			afterword += assignExpr + " " + namePrefix + "_ret;"
			return shouldReturn + " " + rvalue + ";\n" + afterword
		} else {
			panic("*UNHANDLED QSET TYPE*\trt:" + rt.ParameterType + "\tt: " + t.ParameterType)
		}

	} else if kType, vType, _, ok := rt.QMapOf(); ok {
		// We deallocate QMap in a similar way to the QList,
		// depending on the type of the hash map (Auto vs String)
		zfs.imports["std"] = struct{}{}
		shouldReturn = "const " + namePrefix + "_map: qtc.libqt_map = "

		stringHashMap := false
		keyParam := kType.RenderTypeMapZig(zfs, false)
		kParam := keyParam
		if keyParam == "constu8" {
			kParam = "qtc.libqt_string"
			stringHashMap = true
		} else if e, ok := KnownEnums[kType.ParameterType]; ok {
			kParam = e.EnumTypeZig
		}

		keyType := kParam
		if _, ok := KnownClassnames[kType.ParameterType]; ok {
			keyType = "QtC." + kType.ParameterType
		}

		vParam := vType.RenderTypeZig(zfs, false, true)
		if _, ok := KnownClassnames[vParam]; ok {
			vParam = "QtC." + vParam
		}

		afterword += "var " + namePrefix + "_ret: map_" + keyParam + "_" + vType.RenderTypeMapZig(zfs, false) + "= .empty;\n"

		afterword += "defer {\n"
		if stringHashMap {
			afterword += "const " + namePrefix + "_keys: [*]" + kParam + " = @ptrCast(@alignCast(" + namePrefix + "_map.keys));\n"
			afterword += "for (0.." + namePrefix + "_map.len) |i| {\n"
			afterword += "qtc.libqt_free(" + namePrefix + "_keys[i].data);\n"
			afterword += "}\n"
		}
		afterword += "qtc.libqt_free(" + namePrefix + "_map.keys);\n"
		afterword += "qtc.libqt_free(" + namePrefix + "_map.values);\n"
		afterword += "}\n"

		afterword += "const " + namePrefix + "_keys: [*]" + keyType + " = @ptrCast(@alignCast(" + namePrefix + "_map.keys));\n"
		afterword += "const " + namePrefix + "_values: [*]" + vParam + " = @ptrCast(@alignCast(" + namePrefix + "_map.values));\n"

		afterword += "var i: usize = 0;\n"
		afterword += "while (i < " + namePrefix + "_map.len) : (i += 1) {\n"
		afterword += "const " + namePrefix + "_key = " + namePrefix + "_keys[i];\n"
		if stringHashMap {
			afterword += "const " + namePrefix + "_entry_slice = std.mem.span(" + namePrefix + "_key.data);\n"
			afterword += "const " + namePrefix + "_value = " + namePrefix + "_values[i];\n"
			afterword += namePrefix + "_ret.put(allocator, " + namePrefix + "_entry_slice, " + namePrefix + `_value) catch @panic("` + lowerClass + "." + zfs.currentMethodName + `: Memory allocation failed");` + "\n"
		} else {
			afterword += "const " + namePrefix + "_value = " + namePrefix + "_values[i];\n"
			afterword += namePrefix + "_ret.put(allocator, " + namePrefix + "_key, " + namePrefix + `_value) catch @panic("` + lowerClass + "." + zfs.currentMethodName + `: Memory allocation failed");` + "\n"
		}

		afterword += "}\n"
		afterword += assignExpr + " " + namePrefix + "_ret;\n"
		return shouldReturn + " " + rvalue + ";\n" + afterword

	} else if kType, vType, ok := rt.QPairOf(); ok {
		// QPair is a struct containing two pointers to the inner types
		// e.g. QPair<QString, QString>
		shouldReturn = "const " + namePrefix + "_pair: qtc.libqt_pair = "

		kCast := "@ptrCast("
		kClose := ")"
		kTypeZig := kType.RenderTypeZig(zfs, false, false)
		if kTypeZig == "i32" || kTypeZig == "f64" {
			kCast = "@as(*" + kTypeZig + ", @ptrCast(@alignCast("
			kClose = "))).*"
		}

		vCast := "@ptrCast("
		vClose := ")"
		vTypeZig := vType.RenderTypeZig(zfs, false, false)
		if vTypeZig == "i32" || vTypeZig == "f64" {
			vCast = "@as(*" + vTypeZig + ", @ptrCast(@alignCast("
			vClose = "))).*"
		} else if vType.ParameterType == "void" && vType.Pointer {
			vCast = ""
			vClose = ""
		}

		afterword += assignExpr + " " + rt.RenderTypeZig(zfs, true, true) + " { .first = " + kCast + namePrefix + "_pair.first" + kClose + ", .second = " + vCast + namePrefix + "_pair.second" + vClose + ", };\n"
		return shouldReturn + " " + rvalue + ";\n" + afterword

	} else if rt.QtClassType() {
		// Construct our Zig type based on this inner C ABI type
		shouldReturn = "return"

		_, ok := KnownClassnames[rt.ParameterType]
		if !ok {
			panic("emitCabiToZig: Encountered an unknown Qt class")
		}

		if rt.Pointer || rt.ByRef {
			return assignExpr + rvalue + ";"
		}

		return shouldReturn + " " + rvalue + ";"

	} else if rt.IntType() || rt.IsKnownEnum() || rt.IsFlagType() || rt.ParameterType == "bool" || rt.QtCppOriginalType != nil {

		if rt.Pointer || rt.ByRef {
			// ptrCast
			return shouldReturn + "@ptrCast(" + rvalue + ");"
		}

		return assignExpr + rvalue + ";"

	} else if reflect.TypeOf(rt.ParameterType).Kind() == reflect.String {
		// Single type conversion from C ABI State to Zig State type
		return shouldReturn + "@intCast(" + rvalue + ");"

	} else {
		panic(fmt.Sprintf("emitzig::emitCabiToZig missing type handler for parameter %+v", rt))
	}
}

// Helper function to recursively get methods from parent classes
func collectInheritedMethodsForZig(class string, seenMethods map[string]struct{}, zfs *zigFileState) []InheritedMethod {
	var methods []InheritedMethod
	if !strings.Contains(class, "<") {
		zfs.imports[strings.ToLower(class)] = struct{}{}
	}

	if pkg, ok := KnownClassnames[class]; ok {
		for _, m := range pkg.Class.Methods {
			if _, seen := seenMethods[m.MethodName]; !seen {
				if m.InheritedFrom != "" {
					continue
				}
				if m.IsConst && m.IsVirtual && m.IsProtected {
					continue
				}

				// Create a copy of the method to avoid modifying the original
				methodCopy := m
				// Apply typedefs to ensure proper type resolution
				applyTypedefs_Method(&methodCopy, pkg.Class.ClassName)
				if err := blocklist_MethodAllowed(&methodCopy); err != nil {
					continue
				}

				methods = append(methods, InheritedMethod{
					Method:      methodCopy,
					SourceClass: pkg.Class.ClassName,
				})
				seenMethods[m.MethodName] = struct{}{}
			}
		}

		for _, parentClass := range pkg.Class.DirectInherits {
			if parentMethods := collectInheritedMethodsForZig(parentClass, seenMethods, zfs); parentMethods != nil {
				methods = append(methods, parentMethods...)
			}
		}
	}

	return methods
}

// Helper function to recursively get private signals from parent classes
func collectInheritedPrivateSignals(class string, seenSignals map[string]struct{}, zfs *zigFileState) []InheritedMethod {
	var signals []InheritedMethod
	if !strings.Contains(class, "<") {
		zfs.imports[strings.ToLower(class)] = struct{}{}
	}

	if pkg, ok := KnownClassnames[class]; ok {
		for _, m := range pkg.Class.PrivateSignals {
			if _, seen := seenSignals[m.MethodName]; !seen {
				if m.InheritedFrom != "" {
					continue
				}

				// Create a copy of the method to avoid modifying the original
				methodCopy := m
				// Apply typedefs to ensure proper type resolution
				applyTypedefs_Method(&methodCopy, pkg.Class.ClassName)
				if err := blocklist_MethodAllowed(&methodCopy); err != nil {
					continue
				}

				signals = append(signals, InheritedMethod{
					Method:      methodCopy,
					SourceClass: pkg.Class.ClassName,
				})
				seenSignals[m.MethodName] = struct{}{}
			}
		}

		for _, parentClass := range pkg.Class.DirectInherits {
			if parentSignals := collectInheritedPrivateSignals(parentClass, seenSignals, zfs); parentSignals != nil {
				signals = append(signals, parentSignals...)
			}
		}
	}

	return signals
}

var (
	qtMethodUrlOverrides = map[string]string{
		"metaObject":  "qobject",
		"qt_metacast": "",
		"qt_metacall": "",
		"tr":          "qobject",
	}

	// We need to brute force these for now
	skipFunction = map[string]struct{}{
		"QFileDevice_Close":        {},
		"QPaintDevice_PaintEngine": {},
	}
)

func emitZig(src *CppParsedHeader, headerName, packageName string) (string, map[string]string, error) {
	if len(src.Classes) == 0 && len(src.Enums) == 0 {
		return "", nil, nil
	}

	ret := strings.Builder{}
	zigIncs := map[string]string{}
	dirRoot := strings.TrimPrefix(packageName, "src/")
	dirRoot = strings.TrimPrefix(dirRoot, "src")

	zfs := zigFileState{
		imports:            map[string]struct{}{},
		currentPackageName: dirRoot,
		currentHeaderName:  strings.TrimSuffix(headerName, ".h"),
	}

	if dirRoot != "" {
		dirRoot += "/"
	}

	ret.WriteString(`const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%% %%_STRUCTDEFS_%%
`)

	// Check if short-named enums are allowed.
	// We only allow short names if there are no conflicts anywhere in the whole
	// file. This doesn't fully defend against cross-file conflicts but those
	// should hopefully be rare enough
	preventShortNames := map[string]struct{}{}
	{
		nameTest := map[string]string{}
	nextEnum:
		for _, e := range src.Enums {

			shortEnumName := e.EnumValueName()

			// Disallow entry<-->entry collisions
			for _, ee := range e.Entries {
				if other, ok := nameTest[shortEnumName+"::"+ee.EntryName]; ok {
					preventShortNames[e.EnumName] = struct{}{} // Our full enum name
					preventShortNames[other] = struct{}{}      // Their full enum name
					continue nextEnum
				}
				nameTest[shortEnumName+"::"+ee.EntryName] = e.EnumName

				if _, ok := KnownClassnames[shortEnumName+"::"+ee.EntryName]; ok {
					preventShortNames[e.EnumName] = struct{}{}
					continue nextEnum
				}
				if _, ok := KnownEnums[shortEnumName+"::"+ee.EntryName]; ok {
					preventShortNames[e.EnumName] = struct{}{}
					continue nextEnum
				}
			}
		}
	}

	for _, c := range src.Classes {
		virtualMethods := c.VirtualMethods()
		zigStructName := cabiClassName(c.ClassName)
		zfs.currentClassName = c.ClassName

		// Embed all inherited classes to allow directly calling inherited methods.
		seenInheritedMethods := make(map[string]struct{})

		for _, base := range c.DirectInherits {
			if parentMethods := collectInheritedMethodsForZig(base, seenInheritedMethods, &zfs); parentMethods != nil {
				zfs.imports[strings.ToLower(base)] = struct{}{}
				for _, m := range parentMethods {
					seenInheritedMethods[m.Method.SafeMethodName()] = struct{}{}
				}
			}
			lowerClassName := strings.ToLower(cabiClassName(base))
			if lowerClassName == zfs.currentHeaderName {
				continue
			}
			if strings.HasPrefix(base, "QList<") {
				ret.WriteString("\n// Also inherits unprojectable " + base + "\n")
			} else {
				zfs.imports[lowerClassName] = struct{}{}
			}
		}

		footerNeeded := false
		if len(c.Ctors) > 0 || len(c.Methods) > 0 || len(virtualMethods) > 0 ||
			(len(c.DirectInherits) > 0 && len(collectInheritedMethodsForZig(c.DirectInherits[0], map[string]struct{}{c.ClassName: {}}, &zfs)) > 0) {
			footerNeeded = true
			maybeCharts := ifv(strings.Contains(src.Filename, "QtCharts"), "-qtcharts", "")
			pageName := getPageName(zigStructName) + maybeCharts
			zigStruct := strings.ToLower(zigStructName)
			zigIncs[zigStruct] = "pub const " + zigStruct + ` = @import("` + dirRoot + "lib" + zfs.currentHeaderName + `.zig").` + zigStruct + ";"
			ret.WriteString("\n/// " + getPageUrl(QtPage, pageName, "", zigStructName) +
				"\npub const " + zigStruct + " = struct {")
		}

		for i, ctor := range c.Ctors {
			if _, ok := moveCtorOnly[c.ClassName]; ok && !ctor.IsMoveCtor {
				continue
			}

			preamble, forwarding := zfs.emitParametersZig2CABIForwarding(ctor)

			allocatorParam := ifv(strings.Contains(preamble, "allocator"), "allocator: std.mem.Allocator", "")

			if ctor.LinuxOnly {
				zfs.imports["builtin"] = struct{}{}

				backticks := ifv(len(ctor.Parameters) > 0 || allocatorParam != "", "```", "")
				commaParams := ifv(len(ctor.Parameters) > 1, ", ", "")
				allocComma := ifv(allocatorParam != "", ", ", "")

				ret.WriteString("\n\n    /// New" + maybeSuffix(i) + " constructs a new " + c.ClassName +
					" object.\n    ///\n    /// " + backticks + " " +
					zfs.emitCommentParametersZig(ctor.Parameters, false) + commaParams + allocComma + allocatorParam + " " + backticks + "\n" +
					"    pub fn New" + maybeSuffix(i) + "(" + zfs.emitParametersZig(ctor.Parameters, false) + allocComma + allocatorParam + ") QtC." + zigStructName + ` {
        switch (builtin.target.os.tag) {
            .linux => {
                return qtc.` + zigStructName + "_new" + maybeSuffix(i) + "(" + forwarding + `);
            },
            else => @panic("Unsupported operating system"),
        }
    }

`)
			} else {
				maybeMoveCtor := ifv(ctor.IsMoveCtor, " object and invalidates the source "+c.ClassName, "")
				allocComma := ifv(len(ctor.Parameters) > 0 && allocatorParam != "", ", ", "")
				backticks := ifv(len(ctor.Parameters) > 0 || allocatorParam != "", "```", "")

				preamble = ifv(preamble != "", preamble+"\n", "")

				ret.WriteString("\n    /// New" + maybeSuffix(i) + " constructs a new " + c.ClassName + maybeMoveCtor +
					" object.\n    ///\n    /// " + backticks + " " +
					zfs.emitCommentParametersZig(ctor.Parameters, false) + allocComma + allocatorParam + " " + backticks + "\n" +
					"    pub fn New" + maybeSuffix(i) + "(" + zfs.emitParametersZig(ctor.Parameters, false) + allocComma + allocatorParam + ") QtC." + zigStructName + " {\n" +
					preamble + "        return qtc." + zigStructName + "_new" + maybeSuffix(i) + "(" + forwarding + ");\n}\n\n")
			}
		}

		if c.HasTrivialCopyAssign {
			ret.WriteString("/// CopyAssign shallow copies `other` into `self`.\n///\n" +
				"/// ``` self: QtC." + zigStructName + ", other: QtC." + zigStructName + " ```\n" +
				"pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {\n" +
				"qtc." + zigStructName + "_CopyAssign(@ptrCast(self), @ptrCast(other));\n}\n\n")
		}

		if c.HasTrivialMoveAssign {
			ret.WriteString("/// MoveAssign moves `other` into `self` and invalidates `other`.\n///\n" +
				"/// ``` self: QtC." + zigStructName + ", other: QtC." + zigStructName + " ```\n" +
				"pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {\n" +
				"qtc." + zigStructName + "_MoveAssign(@ptrCast(self), @ptrCast(other));\n}\n\n")
		}

		seenMethods := make(map[string]struct{})
		baseMethods := c.Methods
		protectedMethods := c.ProtectedMethods()
		virtualEligible := AllowVirtualForClass(c.ClassName)

		if virtualEligible && len(virtualMethods) > 0 {
			virtualMethods = append(virtualMethods, protectedMethods...)
		}

		for _, m := range c.Methods {
			if !m.IsProtected {
				continue
			}

			if _, ok := nonPolymorphicClasses[c.ClassName]; ok {
				continue
			}

			virtualMethods = append(virtualMethods, m)
		}

		for _, m := range baseMethods {
			seenMethods[m.MethodName] = struct{}{}
		}

		for _, m := range virtualMethods {
			seenMethods[m.MethodName] = struct{}{}
		}

		var inheritedMethods []InheritedMethod
		for _, base := range c.DirectInherits {
			inherited := collectInheritedMethodsForZig(base, seenMethods, &zfs)
			if inherited != nil {
				inheritedMethods = append(inheritedMethods, inherited...)
			}
		}

		for _, im := range inheritedMethods {
			im.Method.InheritedFrom = im.SourceClass
			baseMethods = append(baseMethods, im.Method)
		}

		privateSignals := c.PrivateSignals
		var inheritedPrivateSignals []InheritedMethod
		for _, base := range c.DirectInherits {
			inheritedS := collectInheritedPrivateSignals(base, seenMethods, &zfs)
			if inheritedS != nil {
				inheritedPrivateSignals = append(inheritedPrivateSignals, inheritedS...)
			}
		}

		for _, im := range inheritedPrivateSignals {
			im.Method.InheritedFrom = im.SourceClass
			privateSignals = append(privateSignals, im.Method)
		}

		previousMethods := map[string]struct{}{}
		seenMethodVariants := map[string]bool{}

		for _, m := range baseMethods {
			if m.IsProtected && m.InheritedFrom != "" {
				continue
			}

			if m.IsProtected && !virtualEligible {
				continue
			}

			mSafeMethodName := m.SafeMethodName()

			if _, ok := skippedMethods[c.ClassName+"_"+mSafeMethodName]; ok {
				if m.InheritedFrom == "" {
					continue
				}
			}

			var showHiddenParams bool
			if _, ok := seenMethodVariants[mSafeMethodName]; ok {
				continue
			}
			if b, ok := seenMethodVariants[m.MethodName]; ok {
				if b {
					continue
				} else {
					showHiddenParams = true
					seenMethodVariants[m.MethodName] = true
				}
			}
			seenMethodVariants[m.MethodName] = false
			seenMethodVariants[mSafeMethodName] = false

			zfs.currentMethodName = mSafeMethodName
			cSafeMethodName := mSafeMethodName

			if zigReservedWord(mSafeMethodName) {
				mSafeMethodName = "_" + mSafeMethodName
			}
			if _, ok := previousMethods[m.MethodName]; ok {
				continue
			}
			if _, ok := previousMethods[mSafeMethodName]; ok {
				continue
			}
			cmdStructName := zigStructName
			var inheritedFrom string
			if m.InheritedFrom != "" {
				inheritedFrom = "\n    /// Inherited from " + m.InheritedFrom + "\n    ///"
				cmdStructName = cabiClassName(m.InheritedFrom)
			}

			if m.InheritedInClass != "" {
				inheritedFrom = "\n    /// Inherited from " + m.InheritedInClass + "\n    ///"
			}

			ret.WriteString(inheritedFrom)

			var docCommentUrl string
			className := ifv(m.InheritedInClass == "", cmdStructName, cabiClassName(m.InheritedInClass))
			subjectURL := strings.ToLower(className)
			cmdURL := m.MethodName
			if m.OverrideMethodName != "" {
				cmdURL = m.OverrideMethodName
			}
			if newURL, ok := qtMethodUrlOverrides[cmdURL]; ok {
				subjectURL = newURL
			}
			if subjectURL != "" {
				maybeCharts := ifv(strings.Contains(src.Filename, "QtCharts") && inheritedFrom == "" && subjectURL != "qobject", "-qtcharts", "")
				pageURL := getPageUrl(QtPage, subjectURL+maybeCharts, cmdURL, className)
				docCommentUrl = "\n/// [Qt documentation](" + pageURL + ")\n///\n"
				ret.WriteString(docCommentUrl)
			}

			previousMethods[m.MethodName] = struct{}{}
			previousMethods[mSafeMethodName] = struct{}{}

			preamble, forwarding := zfs.emitParametersZig2CABIForwarding(m)
			returnTypeDecl := m.ReturnType.renderReturnTypeZig(&zfs, false)
			rvalue := "qtc." + cmdStructName + "_" + cSafeMethodName + "(" + forwarding + ")"
			returnFunc := zfs.emitCabiToZig("return ", m.ReturnType, rvalue)

			var backticks string
			allocatorParam := ifv(strings.Contains(returnFunc, "allocator") || strings.Contains(preamble, "allocator"), "allocator: std.mem.Allocator", "")
			commaParams := ifv(len(m.Parameters) > 0, ", ", "")
			allocComma := ifv(allocatorParam != "", ", ", "")
			commentParam := "self: QtC." + zigStructName + commaParams

			mTrim := mSafeMethodName[:len(mSafeMethodName)-1]
			fnMethod := mSafeMethodName + "(self: ?*anyopaque" + commaParams
			if m.IsStatic {
				commentParam = ""
				fnMethod = mSafeMethodName + "("
				if len(m.Parameters) == 0 {
					allocComma = ""
				}
			}

			if mSafeMethodName == "Tr" || mTrim == "Tr" {
				commentParam = ""
			}

			if commentParam != "" || len(m.Parameters) > 0 || allocatorParam != "" {
				backticks = "```"
			}

			returnComment := zfs.emitReturnComment(m.ReturnType)

			ret.WriteString("\n    /// " + backticks + " " +
				commentParam + zfs.emitCommentParametersZig(m.Parameters, false) +
				allocComma + allocatorParam + " " + backticks + "\n" + returnComment +
				"    pub fn " + fnMethod + zfs.emitParametersZig(m.Parameters, false) + allocComma + allocatorParam + ") " + returnTypeDecl + " {")

			if m.LinuxOnly {
				zfs.imports["builtin"] = struct{}{}
				ret.WriteString(`
    if (builtin.target.os.tag != .linux) {
        @panic("Unsupported operating system");
    }
`)
			}

			ret.WriteString("\n" + preamble + returnFunc + "\n}\n\n")

			// Add Connect() wrappers for signal functions
			if m.IsSignal {
				addConnect := true
				if _, ok := noQtConnect[cmdStructName]; ok {
					addConnect = false
				}

				if addConnect {
					slotComma := ifv(len(m.Parameters) != 0, ", ", "")
					ret.WriteString(inheritedFrom + docCommentUrl + "\n    /// ``` self: QtC." + zigStructName + ", slot: fn (self: QtC." +
						zigStructName + slotComma + zfs.emitCommentParametersZig(m.Parameters, true) + ") callconv(.c) void ```\n")

					ret.WriteString("    pub fn On" + mSafeMethodName + "(self: ?*anyopaque, slot: fn (?*anyopaque" +
						slotComma + zfs.emitParametersZig(m.Parameters, true) + ") callconv(.c) void) void {\n" +
						"qtc." + cmdStructName + "_Connect_" + cSafeMethodName + "(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));\n}\n")
				}
			}

			// We need to brute force these for now
			if _, ok := skipFunction[cmdStructName+"_"+mSafeMethodName]; ok {
				continue
			}

			if !AllowVirtual(m) {
				continue
			}

			if (m.IsVirtual || m.IsProtected) && len(virtualMethods) > 0 && virtualEligible {
				var maybeCommentStruct, maybeAnyopaque, maybeComma, maybeCommentSelf string
				if len(m.Parameters) != 0 {
					maybeCommentStruct = "QtC." + zigStructName + commaParams
					maybeAnyopaque = "?*anyopaque"
					maybeCommentSelf = "self: "
				}
				if showHiddenParams && len(m.HiddenParams) != 0 {
					maybeCommentStruct = "QtC." + zigStructName + commaParams
					maybeAnyopaque = "?*anyopaque"
					maybeCommentSelf = "self: "
				}
				if len(m.Parameters) > 0 {
					maybeComma = ", "
				}
				if showHiddenParams && (len(m.Parameters) > 0 || len(m.HiddenParams) > 0) {
					maybeComma = ", "
				}

				onDocComment := "\n/// Allows for overriding the related default method\n    ///"

				ret.WriteString(inheritedFrom + docCommentUrl + onDocComment + "\n    /// ``` self: QtC." +
					zigStructName + ", slot: fn (" + maybeCommentSelf + maybeCommentStruct + zfs.emitCommentParametersZig(m.Parameters, true) +
					") callconv(.c) " + m.ReturnType.renderReturnTypeZig(&zfs, true) + " ```\n" +
					"    pub fn On" + mSafeMethodName + "(self: ?*anyopaque, slot: fn (" + maybeAnyopaque + maybeComma +
					zfs.emitParametersZig(m.Parameters, true) + ") callconv(.c) " +
					m.ReturnType.renderReturnTypeZig(&zfs, true) + ") void {\n" +
					"qtc." + cmdStructName + "_On" + cSafeMethodName + "(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));\n}\n")

				qbaseDocComment := "\n/// Base class method implementation\n    ///"
				baseMethod := "QBase" + mSafeMethodName + "(self: ?*anyopaque" + commaParams
				baseCallTarget := "qtc." + cmdStructName + "_QBase" + cSafeMethodName + "(" + forwarding + ")"
				basereturnFunc := zfs.emitCabiToZig("return ", m.ReturnType, baseCallTarget)

				ret.WriteString(inheritedFrom + docCommentUrl + qbaseDocComment + "\n    /// " + backticks + " " +
					commentParam + zfs.emitCommentParametersZig(m.Parameters, false) +
					allocComma + allocatorParam + " " + backticks + "\n" + returnComment +
					"    pub fn " + baseMethod + zfs.emitParametersZig(m.Parameters, false) + allocComma + allocatorParam + ") " + returnTypeDecl + " {")

				if m.LinuxOnly {
					zfs.imports["builtin"] = struct{}{}
					ret.WriteString(`
			if (builtin.target.os.tag != .linux) {
				@panic("Unsupported operating system");
			}
		`)
				}

				ret.WriteString("\n" + preamble + basereturnFunc + "\n}\n")
			}
		}

		// 		if headerName == "qmetatype.h" {
		// 			ret.WriteString("\n    /// ``` f: ConverterFunction, from: QtC.QMetaType, to: QtC.QMetaType ```\n" +
		// 				`    pub fn RegisterConverterFunction(f: ConverterFunction, from: QtC.QMetaType, to: QtC.QMetaType) bool {
		//         return qtc.QMetaType_RegisterConverterFunction(@ptrCast(f), @ptrCast(from), @ptrCast(to));
		//     }` + "\n\n    /// ``` f: MutableViewFunction, from: QtC.QMetaType, to: QtC.QMetaType ```\n" +
		// 				`    pub fn RegisterMutableViewFunction(f: MutableViewFunction, from: QtC.QMetaType, to: QtC.QMetaType) bool {
		//         return qtc.QMetaType_RegisterMutableViewFunction(@ptrCast(f), @ptrCast(from), @ptrCast(to));
		//     }
		// `)
		// 		}

		seenVirtuals := map[string]bool{}

		for _, m := range virtualMethods {
			if !virtualEligible {
				continue
			}

			mSafeMethodName := m.SafeMethodName()

			if _, ok := skippedMethods[c.ClassName+"_"+mSafeMethodName]; ok {
				if m.InheritedFrom == "" {
					continue
				}
			}

			var showHiddenParams bool
			if _, ok := seenVirtuals[mSafeMethodName]; ok {
				continue
			}
			if b, ok := seenVirtuals[m.MethodName]; ok {
				if b {
					continue
				} else {
					showHiddenParams = true
					seenVirtuals[m.MethodName] = true
				}
			}
			seenVirtuals[m.MethodName] = false
			seenVirtuals[mSafeMethodName] = false

			if _, ok := previousMethods[m.MethodName]; ok {
				continue
			}
			previousMethods[m.MethodName] = struct{}{}
			previousMethods[mSafeMethodName] = struct{}{}

			zfs.currentMethodName = mSafeMethodName
			cSafeMethodName := mSafeMethodName

			if zigReservedWord(mSafeMethodName) {
				mSafeMethodName = "_" + mSafeMethodName
			}

			// Include inheritance information if we have it
			var inheritedFrom, maybeCommentStruct, maybeAnyopaque, maybeCommentSelf string
			cmdStructName := zigStructName
			commaParams := ifv(len(m.Parameters) > 0, ", ", "")
			if m.InheritedFrom != "" {
				inheritedFrom = "\n /// Inherited from " + m.InheritedFrom + "\n ///"
				cmdStructName = cabiClassName(m.InheritedFrom)
			}

			if m.InheritedInClass != "" {
				inheritedFrom = "\n /// Inherited from " + m.InheritedInClass + "\n ///"
			}

			className := ifv(m.InheritedInClass == "", cmdStructName, cabiClassName(m.InheritedInClass))
			subjectURL := strings.ToLower(className)
			cmdURL := m.MethodName
			if m.OverrideMethodName != "" {
				cmdURL = m.OverrideMethodName
			}
			maybeCharts := ifv(strings.Contains(src.Filename, "QtCharts") && inheritedFrom == "", "-qtcharts", "")
			pageURL := getPageUrl(QtPage, subjectURL+maybeCharts, cmdURL, className)
			documentationURL := "\n/// [Qt documentation](" + pageURL + ")\n///\n"

			// Add a package-private function to call the C++ base class method
			// QWidget_PaintEvent
			preamble, forwarding := zfs.emitParametersZig2CABIForwarding(m)
			forwarding = strings.TrimPrefix(forwarding, "self")
			returnTypeDecl := m.ReturnType.renderReturnTypeZig(&zfs, false)
			zfsParams := zfs.emitParametersZig(m.Parameters, showHiddenParams)
			returnFunc := zfs.emitCabiToZig("return ", m.ReturnType, "qtc."+cmdStructName+"_"+cSafeMethodName+"("+forwarding+")")
			allocatorParam := ifv(strings.Contains(returnFunc, "allocator") || strings.Contains(preamble, "allocator"), "allocator: std.mem.Allocator", "")
			allocComma := ifv(allocatorParam != "", ", ", "")
			returnComment := zfs.emitReturnComment(m.ReturnType)

			headerComment := " /// Wrapper to allow calling virtual or protected method\n ///\n"

			ret.WriteString(inheritedFrom + documentationURL + headerComment + "\n /// ``` self: QtC." +
				zigStructName + commaParams + zfs.emitCommentParametersZig(m.Parameters, false) + allocComma + allocatorParam + " ```\n" + returnComment +
				"    pub fn " + mSafeMethodName + "(self: ?*anyopaque" + commaParams + zfsParams + allocComma + allocatorParam + ") " + returnTypeDecl + " {\n" +
				preamble + returnFunc + "\n}\n")

			if !AllowVirtual(m) {
				continue
			}

			headerComment = "\n /// Wrapper to allow calling base class virtual or protected method\n ///\n"

			returnFunc = zfs.emitCabiToZig("return ", m.ReturnType, "qtc."+cmdStructName+"_QBase"+cSafeMethodName+"("+forwarding+")")

			ret.WriteString(inheritedFrom + documentationURL + headerComment + "\n /// ``` self: QtC." +
				zigStructName + commaParams + zfs.emitCommentParametersZig(m.Parameters, false) + allocComma + allocatorParam + " ```\n" + returnComment +
				"    pub fn QBase" + mSafeMethodName + "(self: ?*anyopaque" + commaParams + zfsParams + allocComma + allocatorParam + ") " + returnTypeDecl + " {\n" +
				preamble + returnFunc + "\n}\n")

			if len(m.Parameters) > 0 {
				commaParams = ", "
			}
			if showHiddenParams && (len(m.Parameters) > 0 || len(m.HiddenParams) > 0) {
				commaParams = ", "
			}
			if len(m.Parameters) != 0 {
				maybeCommentStruct = "QtC." + zigStructName + commaParams
				maybeAnyopaque = "?*anyopaque"
				maybeCommentSelf = "self: "
			}
			if showHiddenParams && len(m.HiddenParams) != 0 {
				maybeCommentStruct = "QtC." + zigStructName + commaParams
				maybeAnyopaque = "?*anyopaque"
				maybeCommentSelf = "self: "
			}

			headerComment = "\n /// Wrapper to allow overriding base class virtual or protected method\n ///\n"

			ret.WriteString(inheritedFrom + documentationURL + headerComment + "\n /// ``` self: QtC." +
				zigStructName + ", slot: fn (" + maybeCommentSelf + maybeCommentStruct + zfs.emitCommentParametersZig(m.Parameters, true) +
				") callconv(.c) " + m.ReturnType.renderReturnTypeZig(&zfs, true) + " ```\n" +
				"    pub fn On" + mSafeMethodName + "(self: ?*anyopaque, slot: fn (" + maybeAnyopaque + commaParams +
				zfs.emitParametersZig(m.Parameters, true) + ") callconv(.c) " +
				m.ReturnType.renderReturnTypeZig(&zfs, true) + ") void {\n" +
				"qtc." + cmdStructName + "_On" + cSafeMethodName + "(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));\n}\n")
		}

		for _, m := range privateSignals {
			mSafeMethodName := m.SafeMethodName()
			cSafeMethodName := mSafeMethodName

			if zigReservedWord(mSafeMethodName) {
				mSafeMethodName = "_" + mSafeMethodName
			}

			zfs.currentMethodName = mSafeMethodName

			cmdStructName := zigStructName
			var inheritedFrom string
			if m.InheritedFrom != "" {
				inheritedFrom = "\n    /// Inherited from " + m.InheritedFrom + "\n    ///"
				cmdStructName = cabiClassName(m.InheritedFrom)
			}

			if m.InheritedInClass != "" {
				inheritedFrom = "\n    /// Inherited from " + m.InheritedInClass + "\n    ///"
			}

			var docCommentUrl string
			className := ifv(m.InheritedInClass == "", cmdStructName, cabiClassName(m.InheritedInClass))
			subjectURL := strings.ToLower(className)
			cmdURL := m.MethodName
			if m.OverrideMethodName != "" {
				cmdURL = m.OverrideMethodName
			}
			if newURL, ok := qtMethodUrlOverrides[cmdURL]; ok {
				subjectURL = newURL
			}
			if subjectURL != "" {
				maybeCharts := ifv(strings.Contains(src.Filename, "QtCharts") && inheritedFrom == "" && subjectURL != "qobject", "-qtcharts", "")
				pageURL := getPageUrl(QtPage, subjectURL+maybeCharts, cmdURL, className)
				docCommentUrl = "\n/// [Qt documentation](" + pageURL + ")\n///\n"
			}

			slotComma := ifv(len(m.Parameters) != 0, ", ", "")
			headerComment := "/// Wrapper to allow calling private signal\n///"

			ret.WriteString(inheritedFrom + docCommentUrl + headerComment + "\n  /// ``` self: QtC." + zigStructName + ", slot: fn (self: QtC." +
				zigStructName + slotComma + zfs.emitCommentParametersZig(m.Parameters, true) + ") callconv(.c) void ```\n" +
				"    pub fn On" + mSafeMethodName + "(self: ?*anyopaque, slot: fn (?*anyopaque" +
				slotComma + zfs.emitParametersZig(m.Parameters, true) + ") callconv(.c) void) void {\n" +
				"qtc." + cmdStructName + "_Connect_" + cSafeMethodName + "(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));\n}\n")
		}

		if c.CanDelete && (len(c.Methods) > 0 || len(c.VirtualMethods()) > 0 || len(c.Ctors) > 0) {
			maybeCharts := ifv(strings.Contains(src.Filename, "QtCharts"), "-qtcharts", "")
			pageUrl := getPageUrl(DtorPage, getPageName(zigStructName)+maybeCharts, "", zigStructName)
			ret.WriteString(ifv(pageUrl != "", "\n/// [Qt documentation]("+pageUrl+")\n///\n", "\n") +
				"    /// Delete this object from C++ memory.\n///\n" +
				"    /// ``` self: QtC." + zigStructName + " ```\n" +
				"    pub fn QDelete(self: ?*anyopaque) void {\n" +
				"qtc." + zigStructName + "_Delete(@ptrCast(self));\n}")
		}
		if footerNeeded {
			ret.WriteString("\n};\n")
		}
	}

	closeEnums := false
	if len(src.Enums) > 0 {
		pageName := getPageName(zfs.currentHeaderName)
		zigIncs[zfs.currentHeaderName+"_enums"] = "pub const " + zfs.currentHeaderName + `_enums = @import("` + dirRoot + "lib" + zfs.currentHeaderName + `.zig").enums;`
		maybeCharts := ifv(strings.Contains(src.Filename, "QtCharts"), "-qtcharts", "")
		pageUrl := getPageUrl(EnumPage, pageName+maybeCharts, "", zfs.currentHeaderName)
		maybeUrl := ifv(pageUrl != "", "\n/// "+pageUrl, "")
		ret.WriteString(maybeUrl + "\npub const enums = struct {\n")
		closeEnums = true
	}
	seenEnums := map[string]struct{}{}
	for _, e := range src.Enums {
		if e.EnumName == "" {
			continue // Removed by transformRedundant AST pass
		}

		zigEnumName := cabiEnumName(e.EnumName) // Short name of the enum itself

		// Use the fully qualified name if the class *is* the enum name
		// or there are collisions
		if zigEnumName == "" || headerName == "qoperatingsystemversion.h" || headerName == "qstyleoption.h" {
			zigEnumName = cabiClassName(e.EnumName)
		}
		zigEnumName = strings.TrimSuffix(zigEnumName, "__")

		if len(e.Entries) > 0 {
			if _, ok := seenEnums[zigEnumName]; !ok {
				seenEnums[zigEnumName] = struct{}{}
			} else {
				continue
			}
			ret.WriteString("    pub const " + zigEnumName + " = enum {\n")

			for _, ee := range e.Entries {
				enumType := e.UnderlyingType.RenderTypeZig(&zfs, false, false)
				num, err := strconv.Atoi(ee.EntryValue)
				if err == nil {
					if float64(num) > math.MaxInt32 || float64(num) < math.MinInt32 {
						// need to use i64 to avoid overflow
						enumType = "i64"
					}
				}
				ret.WriteString("        pub const " + titleCase(cabiClassName(ee.EntryName)) + ": " + enumType + " = " + ee.EntryValue + ";\n")
			}

		} else {
			ret.WriteString("    pub const " + zigEnumName + " = enum(" + e.UnderlyingType.RenderTypeZig(&zfs, false, false) + ") {\n")
		}
		ret.WriteString("    };\n\n")
	}
	if closeEnums {
		ret.WriteString("};\n")
	}

	zigSrc := ret.String()

	// Fixup imports and struct definitions
	if len(zfs.imports) > 0 {
		allImports := make([]string, 0, len(zfs.imports))
		structDef := make([]string, 0, len(zfs.imports))
		seenEnumClasses := map[string]struct{}{}
		for k := range zfs.imports {
			if k == "std" {
				allImports = append(allImports, `const std = @import("std");`)
			} else if k == "builtin" {
				allImports = append(allImports, `const builtin = @import("builtin");`)
			}
			if strings.Contains(k, ",") {
				kSplit := strings.Split(k, ",")
				mapType := kSplit[0]
				keyType := kSplit[1]
				valueType := kSplit[2]

				var autoKeyType string
				switch keyType {
				case "u8":
					autoKeyType = "[]u8"
				default:
					autoKeyType = keyType
				}

				switch mapType {
				case "StringHashMap":
					structDef = append(structDef, "pub const map_constu8_"+mapParamToString(valueType)+" = std.StringHashMapUnmanaged("+valueType+");")
				case "AutoHashMap":
					keyType = mapParamToString(strings.ToLower(keyType))
					structDef = append(structDef, "pub const map_"+keyType+"_"+mapParamToString(valueType)+" = std.AutoHashMapUnmanaged("+autoKeyType+", "+valueType+");")
				}
			}
			if strings.Contains(k, "struct_") {
				kSplit := strings.Split(k, "_")
				keyType := kSplit[1]
				valueType := kSplit[2]
				if mapParamToString(keyType) != "anyopaque" {
					structDef = append(structDef, "pub const struct_"+mapParamToString(keyType)+"_"+mapParamToString(valueType)+" = extern struct { first: "+keyType+", second: "+valueType+" };")
				}
			}
			if strings.Contains(k, "__enums") {
				var enumPrefix string
				if strings.Contains(k, "/") {
					enumPrefix = filepath.Dir(k) + "/"
					k = filepath.Base(k)
				}
				enumClass := strings.Split(k, "__enums")[0]

				if _, ok := seenEnumClasses[enumClass]; ok {
					continue
				}
				seenEnumClasses[enumClass] = struct{}{}
				if enumClass == zfs.currentHeaderName {
					allImports = append(allImports, "const "+enumClass+"_enums = enums;")
				} else {
					allImports = append(allImports, "const "+enumClass+`_enums = @import("`+enumPrefix+"lib"+enumClass+`.zig").enums;`)
				}
			}
			if strings.HasPrefix(k, "set_") {
				kSplit := strings.Split(k, "_")
				keyType := kSplit[1]
				if mapParamToString(keyType) != "anyopaque" {
					structDef = append(structDef, "pub const set_"+mapParamToString(keyType)+" = std.StringHashMapUnmanaged(void);")
				}
			}
		}

		// if headerName == "qmetatype.h" {
		// 	allImports = append(allImports, `const ConverterFunction = fn (?*anyopaque, ?*anyopaque) callconv(.c) bool;`)
		// 	allImports = append(allImports, `const MutableViewFunction = fn (?*anyopaque, ?*anyopaque) callconv(.c) bool;`)
		// }

		sort.Strings(allImports)
		sort.Strings(structDef)
		zigSrc = strings.Replace(zigSrc, "%%_IMPORTLIBS_%%", "\n"+strings.Join(allImports, "\n"), 1)
		zigSrc = strings.ReplaceAll(zigSrc, "%%_STRUCTDEFS_%%", "\n"+strings.Join(structDef, "\n")+"\n")
	} else {
		zigSrc = strings.Replace(zigSrc, "%%_IMPORTLIBS_%%", "", 1)
		zigSrc = strings.ReplaceAll(zigSrc, "%%_STRUCTDEFS_%%", "")
	}

	return string(zigSrc), zigIncs, nil
}
