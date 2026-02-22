package main

import (
	"C"
	"fmt"
	"math"
	"path/filepath"
	"reflect"
	"slices"
	"sort"
	"strconv"
	"strings"
	"unicode"
)

// not language-reserved words, but binding-reserved words
func zigReservedWord(s string) bool {
	// block some Zig arbitrary width integers
	if len(s) > 0 && len(s) < 3 && (s[0] == 'i' || s[0] == 'u') {
		_, err := strconv.Atoi(s[1:])
		if err == nil {
			return true
		}
	}

	switch s {
	case "default", "const", "fn", "var", "type", "len", "new", "copy", "import",
		"error", "string", "map", "int", "select", "pub", "ret", "suspend",
		"opaque", "align", "self", "allocator", "URLs":
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
	'"': "-22",
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

const (
	preUrl           = "\n/// ### [Upstream resources]("
	postUrl          = ")"
	uniquePtrWarning = " (WARNING: The library takes ownership of this parameter's memory and attempting to access it will lead to a crash.)"
)

func (zfs *zigFileState) getPageUrl(pageType PageType, pageName, cmdURL, className string) string {
	if strings.HasPrefix(pageName, "qsci") {
		if pageType == EnumPage {
			return ""
		}
		return preUrl + "https://www.riverbankcomputing.com/static/Docs/QScintilla/class" + className + ".html" + postUrl
	}

	if strings.HasPrefix(pageName, "layershellqt") || (pageType == EnumPage && zfs.currentPackageName == "foss-extras-layershellqt") {
		return preUrl + "https://invent.kde.org/plasma/layer-shell-qt" + postUrl
	}

	if strings.HasPrefix(pageName, "kcolorpicker") {
		return preUrl + "https://github.com/ksnip/kcolorpicker" + postUrl
	}

	if strings.HasPrefix(pageName, "kimageannotator") {
		return preUrl + "https://github.com/ksnip/kImageAnnotator" + postUrl
	}

	if strings.HasPrefix(pageName, "packagekit") || (pageType == EnumPage && zfs.currentPackageName == "foss-extras-packagekitqt") {
		return preUrl + "https://github.com/PackageKit/PackageKit-Qt" + postUrl
	}

	if strings.HasPrefix(pageName, "qkeychain") || (pageType == EnumPage && zfs.currentPackageName == "extras-qtkeychain") {
		return preUrl + "https://github.com/frankosterfeld/qtkeychain" + postUrl
	}

	if strings.HasPrefix(pageName, "Accounts__") || (pageType == EnumPage && zfs.currentPackageName == "posix-extras-accounts") {
		classUrl := strings.TrimPrefix(pageName, "Accounts__")
		return preUrl + "https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1" + strings.ToUpper(classUrl[0:1]) + classUrl[1:] + ".html" + postUrl
	}

	if strings.HasPrefix(pageName, "SignOn__") || (pageType == EnumPage && zfs.currentPackageName == "posix-extras-signon") {
		classUrl := strings.TrimPrefix(pageName, "SignOn__")
		return preUrl + "https://accounts-sso.gitlab.io/signond/classSignOn_1_1" + strings.ToUpper(classUrl[0:1]) + classUrl[1:] + ".html" + postUrl
	}

	if pageType == DtorPage && strings.Contains(className, "__") {
		return ""
	}

	if strings.HasPrefix(pageName, "qtermwidget") || strings.HasPrefix(className, "Keyboard") ||
		strings.HasPrefix(className, "Konsole") || pageName == "emulation" || pageName == "filter" {
		return preUrl + "https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api" + postUrl
	}

	qtUrl := "https://doc.qt.io/qt-6/"
	types := ifv(pageName == "qt", "types", "public-types")
	if pageName == "question" || (pageName[0] != 'q' && zfs.currentPackageName != "designer" &&
		pageName != "partial_ordering" && pageName != "weak_ordering" && pageName != "strong_ordering") {
		qtUrl = "https://api.kde.org/"
		pageName = strings.TrimSuffix(pageName, "_1")
		if pageType == EnumPage {
			switch zfs.currentPackageName {
			case "extras-attica":
				pageName = "attica-" + pageName
			case "extras-kfilemetadata":
				pageName = "kfilemetadata-" + pageName
			case "extras-kio":
				if pageType == EnumPage && !strings.HasPrefix(pageName, "k") {
					pageName = "kio-" + pageName
				}
			case "extras-knewstuff":
				pageName = "knscore-" + pageName
			case "extras-kparts":
				pageName = "kparts-" + pageName
			case "extras-ksvg":
				pageName = "ksvg-" + pageName
			case "extras-ksyntaxhighlighting":
				pageName = "ksyntaxhighlighting-" + pageName
			case "extras-solid":
				pageName = "solid-" + pageName
			case "extras-sonnet":
				pageName = "sonnet-" + pageName
			}
		}
	}

	if pageName == "qcustomplot" || strings.HasPrefix(pageName, "QCP") {
		pageName = ifv(pageName == "qcustomplot", "QCustomPlot", pageName)
		prefix := ifv(pageName == "QCP", "namespace", "class")
		qtUrl = "https://www.qcustomplot.com/documentation/" + prefix
		types = "pub-types"
		cmdURL = ""
		if pageType == DtorPage {
			pageType = QtPage
		}
	}

	pageName = strings.ReplaceAll(pageName, "__", "-")
	pageName = strings.ReplaceAll(pageName, "_", "-")

	switch pageType {
	case QtPage:
		if strings.HasPrefix(cmdURL, "operator") {
			cmdURL = operatorToUrl(cmdURL)
		}

		return preUrl + qtUrl + pageName + ".html" + ifv(cmdURL != "", "#"+cmdURL, "") + postUrl
	case EnumPage:
		return preUrl + qtUrl + pageName + ".html#" + types + postUrl
	case DtorPage:
		return preUrl + qtUrl + pageName + ".html#dtor." + className + postUrl
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
	if strings.HasPrefix(param, "arraymap_") || strings.HasPrefix(param, "map_") || strings.HasPrefix(param, "struct_") {
		// e.g. QXYSeries::pointsConfigurationChanged
		// map with a map as value
		return param
	}

	var result []rune

	maybeSlice := ""
	if strings.Count(param, "[]") > 1 || strings.Contains(param, "[]QtC.") {
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
	if p.Pointer && (p.ParameterType == "char" || p.ParameterType == "GLchar") {
		maybeConst := ifv(p.Const, "const ", "")
		return strings.Repeat("[]"+maybeConst, p.PointerCount-1) + "[:0]" + maybeConst + "u8"
	}
	if p.ParameterType == "QString" || p.ParameterType == "QAnyStringView" || p.ParameterType == "QStringView" ||
		p.ParameterType == "SignOn::MethodName" {
		return "[]const u8"
	}
	if p.ParameterType == "QByteArray" || p.ParameterType == "QByteArrayView" {
		return "[]u8"
	}

	if t, _, ok := p.QListOf(); ok {
		tType := t.RenderTypeZig(zfs, isReturnType, fullEnumName)
		var maybeConstOrPointer string
		if t.needsPointer(tType) {
			maybeConstOrPointer = "QtC."
		} else if t.ParameterType == "QString" {
			maybeConstOrPointer = "const "
		}

		if e, ok := KnownEnums[t.ParameterType]; ok && !fullEnumName {
			// e.g. QLocale::weekdays
			tType = e.EnumTypeZig
		}

		return "[]" + maybeConstOrPointer + tType
	}

	if t, ok := p.QSetOf(); ok {
		zfs.imports["set_"+t.RenderTypeZig(zfs, isReturnType, false)] = struct{}{}
		return "set_" + t.RenderTypeMapZig(zfs, isReturnType)
	}

	if t1, t2, containerType, ok := p.QMapOf(); ok {
		var hashMapType, k string
		isQMulti := IsMultiHashMap(containerType)
		maybeArray := ifv(IsOrderedMap(containerType), "Array", "")

		switch t1.ParameterType {
		case "QString", "SignOn::MethodName":
			k = "constu8"
			hashMapType = "String" + maybeArray + "HashMap,constu8,"
		case "QByteArray":
			k = "u8"
			hashMapType = "String" + maybeArray + "HashMap,u8,"
		default:
			k = t1.RenderTypeZig(zfs, true, false)
			if e, ok := KnownEnums[t1.ParameterType]; ok {
				k = e.EnumTypeZig
			}
			hashMapType = "Auto" + maybeArray + "HashMap," + k + ","
		}
		maybeConst := ifv(t2.ParameterType == "QString", "const ", "")

		v := ifv(isQMulti, "[]"+maybeConst, "") + t2.RenderTypeZig(zfs, true, false)
		v = ifv(v == "QtC.SignOn__MechanismsList", "[]const []const u8", v)

		zfs.imports[hashMapType+v] = struct{}{}

		k = mapParamToString(k)
		v = mapParamToString(v)

		return strings.ToLower(maybeArray) + "map_" + k + "_" + v
	}

	if t1, t2, ok := p.QPairOf(); ok {
		// Design QPair using capital-named members, in case it gets passed
		// across packages
		f := t1.RenderTypeZig(zfs, true, false)
		s := t2.RenderTypeZig(zfs, true, false)

		zfs.imports["struct_"+f+"_"+s] = struct{}{}

		f = mapParamToString(f)
		s = mapParamToString(s)
		return "struct_" + f + "_" + s
	}

	ret := ""

	if p.IsKnownEnum() {
		if strings.HasPrefix(p.ParameterType, "QFlags<") {
			if zigImport, ok := KnownImports[p.ParameterType[7:len(p.ParameterType)-1]]; ok {
				if fullEnumName {
					ret = "flag of " + zigImport.Filename + "_enums." + cabiEnumName(p.ParameterType[7:len(p.ParameterType)-1])
					maybeDots := maybeDotsPath(zigImport.PackageName, zfs.currentPackageName)
					zfs.imports[maybeDots+zigImport.Filename+"_enums"] = struct{}{}
				} else {
					e, ok := KnownEnums[p.ParameterType]
					if ok {
						ret = ifv(p.Pointer || p.ByRef, "*", "") + ifv(p.Const && (p.Pointer || p.ByRef), "const ", "") + e.EnumTypeZig
					} else {
						ret = ifv(p.Pointer || p.ByRef, "*", "") + ifv(p.Const && (p.Pointer || p.ByRef), "const ", "") + "i64"
					}
				}
			}

			if ret != "" {
				return ret
			}
		}
	}

	if p.GlIntType() && p.Pointer {
		tmp := &p // copy
		tmp.Pointer = false
		ret = tmp.RenderTypeZig(zfs, isReturnType, fullEnumName)
		return "[]" + ifv(p.Const, "const ", "") + ret
	}

	switch p.ParameterType {
	case "GLvoid", "void":
		ret += ifv((p.Pointer || p.ByRef), ifv(p.PointerCount > 1, "*", "")+"?*"+ifv(p.Const, "const ", "")+"anyopaque", "void")
	case "bool":
		ret += ifv((p.Pointer || p.ByRef) && fullEnumName, "*", "") + "bool"
	case "char", "unsigned char", "uchar", "quint8", "uint8_t", "GLboolean", "GLubyte", "GLchar":
		// Zig byte is unsigned
		ret += "u8"
	case "qint8", "signed char", "GLbyte":
		ret += "i8" // Signed
	case "short", "qint16", "int16_t", "GLshort":
		ret += "i16"
	case "ushort", "quint16", "unsigned short", "uint16_t", "GLushort":
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

	case "unsigned int", "quint32", "uint32_t", "uint", "mode_t", "gid_t", "uid_t", "GL", "GLbitfield", "GLenum", "GLuint":
		ret += "u32"
	case "qint32", "int", "int32_t", "pid_t", "GLint", "GLsizei":
		ret += "i32"
	case "qlonglong", "qint64", "long long", "GLint64":
		ret += "i64"
	case "qulonglong", "quint64", "unsigned long long", "dev_t", "GLuint64":
		ret += "u64"
	case "float", "GLclampf", "GLfloat":
		ret += "f32"
	case "const double", "double", "qreal", "GLdouble":
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

	case "qintptr", "intptr_t", "QIntegerForSizeof<void *>::Signed", "GLintptr", "GLsizeiptr":
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

			if ret == "" {
				if ft, ok := p.QFlagsOf(); ok {
					ret = ft.ZigType
				}
			}

		} else if e, ok := KnownEnums[p.ParameterType]; ok {
			enumName := cabiEnumName(p.ParameterType)
			if enumName == "" {
				enumName = cabiClassName(p.ParameterType)
			}

			if zigImport, ok := KnownImports[p.ParameterType]; ok {
				if fullEnumName {
					ret += zigImport.Filename + "_enums." + enumName
				} else {
					ret += e.EnumTypeZig
				}

				maybeDots := maybeDotsPath(zigImport.PackageName, zfs.currentPackageName)
				zfs.imports[maybeDots+zigImport.Filename+"_enums"] = struct{}{}

			} else {
				panic("UNKNOWN IMPORT: p.ParameterType: " + p.ParameterType + "\tenumName: " + enumName)
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

		} else {
			// Do not transform this type
			ret += p.ParameterType
		}
	}

	if p.needsPointer(ret) {
		ret = "QtC." + ret
	}

	if p.IsChronoSeconds() {
		ret = "i64"
	}

	if p.ByRef || p.Pointer {
		if isReturnType {
			if p.needsPointer(ret) {
				ret = ifv(p.PointerCount > 1, "*", "") + "QtC." + ret
			}
		} else if p.QtClassType() {
			maybeExtraPointer := ifv(p.ByRef && p.Pointer, "*", "")
			ret = ifv(p.PointerCount > 1, "*", "") + "?*" + maybeExtraPointer + "anyopaque"
		} else if !(p.ParameterType == "GLvoid" || p.ParameterType == "void") {
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

	return ret
}

func maybeDotsPath(zigImport, zfsName string) string {
	if zigImport != zfsName {
		if zigImport == "" {
			return "../"
		} else {
			return "../" + zigImport + "/"
		}
	}

	return ""
}

func (p CppParameter) renderReturnTypeZig(zfs *zigFileState, isSlot bool) (string, string, string) {
	var returnStr, warningStr string
	ret := p.RenderTypeZig(zfs, true, false)
	maybeConst := ifv(p.Const, "const ", "")

	if e, ok := KnownEnums[ret]; ok {
		ret = maybeConst + e.EnumTypeZig
	}

	if ret == "void" || ret == "GLvoid" {
		ret = ifv(p.Pointer || p.ByRef, ifv(p.PointerCount > 1, "*", "")+"?*"+ifv(p.Const, "const ", "")+"anyopaque", "void")
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

	if p.GlIntType() && p.Pointer && !isSlot {
		return ret, "", ""
	}

	if p.IntType() && (p.Pointer || p.ByRef) {
		ret = "?*" + maybeConst + ret
	}

	if p.PointerCount > 1 {
		ret = "*" + ret
	}

	if isSlot {
		var hasWarning bool

		if t, _, ok := p.QListOf(); ok && (t.ParameterType != "QString" && t.ParameterType != "QByteArray") {
			returnStr = "\n/// ## Callback Returns:\n///\n/// ` C ABI representation of " + ret + " `\n///\n"
			ret = "qtc.libqt_list"
			hasWarning = true
		} else {
			// C calling convention limitations
			switch ret {
			case "[][]const u8", "[]const []const u8":
				ret = "?[*:null]?[*:0]const u8"
				hasWarning = true
			case "[][]u8":
				ret = "?[*:null]?[*:0]u8"
				hasWarning = true
			case "[]const u8", "[:0]const u8":
				ret = "[*:0]const u8"
				hasWarning = true
			case "[]u8", "[:0]u8":
				ret = "qtc.libqt_string"
			default:
				if strings.HasPrefix(ret, "arraymap_") || strings.HasPrefix(ret, "map_") {
					returnStr = "\n/// ## Callback Returns:\n///\n/// ` C ABI representation of " + ret + " `\n///\n"
					ret = "qtc.libqt_map"
				}
			}
		}

		if hasWarning {
			warningStr = "\n/// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.\n///\n"
		}
	}

	return ret, warningStr, returnStr
}

func (p CppParameter) parameterTypeZig() string {
	if p.ParameterType == "QString" || p.ParameterType == "QByteArray" ||
		p.ParameterType == "QAnyStringView" || p.ParameterType == "QByteArrayView" ||
		p.ParameterType == "QStringView" || p.ParameterType == "SignOn::MethodName" {
		return "qtc.libqt_string"
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

	// Zig binds void* as *anyopaque
	if (p.ParameterType == "void" || p.ParameterType == "GLvoid") && (p.Pointer || p.ByRef) {
		return ifv(p.Pointer || p.ByRef, ifv(p.PointerCount > 1, "*", "")+"?*", "") + ifv(p.Const, "const ", "") + "anyopaque"
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
		maybeExtraPointer := ifv(p.ByRef && p.Pointer, "*", "")
		return "?*" + maybeExtraPointer + "anyopaque"
	} else {
		return tmp
	}
}

func (zfs *zigFileState) emitCommentParametersZig(params []CppParameter, isSlot bool) string {
	if len(params) == 0 {
		return ""
	}

	tmp := make([]string, 0, len(params))

	for i := 0; i < len(params); i++ {
		p := params[i]
		if IsArgcArgv(params, i) {
			tmp = append(tmp, "argc: usize")
			tmp = append(tmp, "argv: [*][*:0]u8")
			i++ // Skip the next parameter, already handled
		} else {
			// Ordinary parameter
			paramType := p.RenderTypeZig(zfs, true, true)
			if p.needsPointer(paramType) {
				paramType = "QtC." + paramType
			}
			if strings.HasPrefix(paramType, "QtC.") && p.PointerCount > 1 {
				paramType = "*" + paramType
			}
			if p.IntType() && (p.Pointer || p.ByRef) {
				if !p.GlIntType() {
					paramType = strings.Repeat("*", max(p.PointerCount, 1)) + ifv(p.Const, "const ", "") + paramType
				}
			}
			if (p.ParameterType == "GLvoid" || p.ParameterType == "void") && (p.Pointer || p.ByRef) {
				paramType = ifv(p.PointerCount > 1, "*", "") + "?*" + ifv(p.Const, "const ", "") + "anyopaque"
			}
			if isSlot {
				if t, _, ok := p.QListOf(); ok && (t.ParameterType != "QString" && t.ParameterType != "QByteArray") {
					paramType = "qtc.libqt_list (" + paramType + ")"
				} else {
					// C calling convention limitations
					switch paramType {
					case "[][]const u8", "[]const []const u8", "[]const [:0]const u8":
						paramType = "?[*:null]?[*:0]const u8"
					case "[][]u8":
						paramType = "?[*:null]?[*:0]u8"
					case "[]const u8", "[:0]const u8":
						paramType = "[*:0]const u8"
					case "[]u8", "[:0]u8":
						paramType = "qtc.libqt_string"
					default:
						if strings.HasPrefix(paramType, "arraymap_") || strings.HasPrefix(paramType, "map_") {
							paramType = "qtc.libqt_map (" + paramType + ")"
						}
					}
				}
			} else if k, v, _, ok := p.QMapOf(); ok {
				var keyComment, valueComment string

				if _, ok := KnownEnums[k.ParameterType]; ok {
					if zigImport, ok := KnownImports[k.ParameterType]; ok {
						keyComment = " (key: " + zigImport.Filename + "_enums." + cabiEnumName(k.ParameterType) + ")"
						maybeDots := maybeDotsPath(zigImport.PackageName, zfs.currentPackageName)
						zfs.imports[maybeDots+zigImport.Filename+"_enums"] = struct{}{}
					}
				}
				if _, ok := KnownEnums[v.ParameterType]; ok {
					if zigImport, ok := KnownImports[v.ParameterType]; ok {
						valueComment = " (value: " + zigImport.Filename + "_enums." + cabiEnumName(v.ParameterType) + ")"
						maybeDots := maybeDotsPath(zigImport.PackageName, zfs.currentPackageName)
						zfs.imports[maybeDots+zigImport.Filename+"_enums"] = struct{}{}
					}
				}

				paramType += keyComment + valueComment

			} else if t, ok := p.QSetOf(); ok {
				if _, ok := KnownEnums[t.ParameterType]; ok {
					if zigImport, ok := KnownImports[t.ParameterType]; ok {
						paramType += " of " + zigImport.Filename + "_enums." + cabiEnumName(t.ParameterType)
						maybeDots := maybeDotsPath(zigImport.PackageName, zfs.currentPackageName)
						zfs.imports[maybeDots+zigImport.Filename+"_enums"] = struct{}{}
					}
				}

			} else if f, s, ok := p.QPairOf(); ok {
				var firstComment, secondComment string

				if _, ok := KnownEnums[f.ParameterType]; ok {
					if zigImport, ok := KnownImports[f.ParameterType]; ok {
						firstComment = " (first: " + zigImport.Filename + "_enums." + cabiEnumName(f.ParameterType) + ")"
						maybeDots := maybeDotsPath(zigImport.PackageName, zfs.currentPackageName)
						zfs.imports[maybeDots+zigImport.Filename+"_enums"] = struct{}{}
					}
				}

				if _, ok := KnownEnums[s.ParameterType]; ok {
					if zigImport, ok := KnownImports[s.ParameterType]; ok {
						secondComment = " (second: " + zigImport.Filename + "_enums." + cabiEnumName(s.ParameterType) + ")"
						maybeDots := maybeDotsPath(zigImport.PackageName, zfs.currentPackageName)
						zfs.imports[maybeDots+zigImport.Filename+"_enums"] = struct{}{}
					}
				}

				paramType += firstComment + secondComment

			} else if p.IsChronoSeconds() {
				secType := strings.Split(p.ParameterType, "::")[2]
				paramType += " of " + secType
			}

			if p.UniquePtr {
				paramType += uniquePtrWarning
			}

			tmp = append(tmp, p.ParameterName+": "+paramType)
		}
	}

	var ret string

	if isSlot {
		ret = strings.Join(tmp, ", ")
	} else if len(params) == 1 {
		ret = "\n///\n/// ` " + tmp[0] + " `"
	} else {
		for _, p := range tmp {
			ret += "\n///\n/// ` " + p + " `"
		}
	}

	return ret
}

func (zfs *zigFileState) emitParametersZig(params []CppParameter, isSlot bool) string {
	if len(params) == 0 {
		return ""
	}

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
				paramType = ifv(p.PointerCount > 1, "*", "") + "QtC." + paramType
			}
			if (p.ParameterType == "GLvoid" || p.ParameterType == "void") && (p.Pointer || p.ByRef) {
				paramType = ifv(p.PointerCount > 1, "*", "") + "?*" + ifv(p.Const, "const ", "") + "anyopaque"
			}
			if isSlot {
				if t, _, ok := p.QListOf(); ok && (t.ParameterType != "QString" && t.ParameterType != "QByteArray") {
					paramType = "qtc.libqt_list"
				} else {
					// C calling convention limitations
					switch paramType {
					case "[][]const u8", "[]const []const u8", "[]const [:0]const u8":
						paramType = "?[*:null]?[*:0]const u8"
					case "[][]u8":
						paramType = "?[*:null]?[*:0]u8"
					case "[]const u8", "[:0]const u8":
						paramType = "[*:0]const u8"
					case "[]u8", "[:0]u8":
						paramType = "qtc.libqt_string"
					default:
						if strings.HasPrefix(paramType, "arraymap_") || strings.HasPrefix(paramType, "map_") {
							paramType = "qtc.libqt_map"
						}
					}
				}
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
	currentClassName   string
	currentHeaderName  string
	currentMethodName  string
	currentPackageName string
}

func (zfs *zigFileState) emitReturnComment(rt CppParameter) string {
	var returnComment string

	if rt.IsKnownEnum() {
		if strings.HasPrefix(rt.ParameterType, "QFlags<") {
			if zigImport, ok := KnownImports[rt.ParameterType[7:len(rt.ParameterType)-1]]; ok {
				returnComment = "\n///\n/// ## Returns:\n///\n/// ` flag of " + zigImport.Filename + "_enums." + cabiEnumName(rt.ParameterType[7:len(rt.ParameterType)-1]) + " `"
				maybeDots := maybeDotsPath(zigImport.PackageName, zfs.currentPackageName)
				zfs.imports[maybeDots+zigImport.Filename+"_enums"] = struct{}{}
			}
		} else {
			returnComment = "\n///\n/// ## Returns:\n///\n/// ` " + rt.RenderTypeZig(zfs, false, true) + " `"
		}

	} else if t, _, ok := rt.QListOf(); ok {
		if _, ok := KnownEnums[t.ParameterType]; ok {
			if zigImport, ok := KnownImports[t.ParameterType]; ok {
				returnComment = "\n///\n/// ## Returns:\n///\n/// ` []" + zigImport.Filename + "_enums." + cabiEnumName(t.ParameterType) + " `"
				maybeDots := maybeDotsPath(zigImport.PackageName, zfs.currentPackageName)
				zfs.imports[maybeDots+zigImport.Filename+"_enums"] = struct{}{}
			}
		}

	} else if k, v, _, ok := rt.QMapOf(); ok {
		var keyComment, valueComment string

		if _, ok := KnownEnums[k.ParameterType]; ok {
			if zigImport, ok := KnownImports[k.ParameterType]; ok {
				keyComment = " (key: " + zigImport.Filename + "_enums." + cabiEnumName(k.ParameterType) + ")"
				maybeDots := maybeDotsPath(zigImport.PackageName, zfs.currentPackageName)
				zfs.imports[maybeDots+zigImport.Filename+"_enums"] = struct{}{}
			}
		}
		if _, ok := KnownEnums[v.ParameterType]; ok {
			if zigImport, ok := KnownImports[v.ParameterType]; ok {
				valueComment = " (value: " + zigImport.Filename + "_enums." + cabiEnumName(v.ParameterType) + ")"
				maybeDots := maybeDotsPath(zigImport.PackageName, zfs.currentPackageName)
				zfs.imports[maybeDots+zigImport.Filename+"_enums"] = struct{}{}
			}
		}

		if keyComment != "" || valueComment != "" {
			returnComment = "\n///\n/// ## Returns:\n///\n/// ` " + rt.RenderTypeZig(zfs, true, true) + keyComment + valueComment + " `"
		}

	} else if t, ok := rt.QSetOf(); ok {
		if _, ok := KnownEnums[t.ParameterType]; ok {
			if zigImport, ok := KnownImports[t.ParameterType]; ok {
				returnComment = "\n///\n/// ## Returns:\n///\n/// ` " + rt.RenderTypeZig(zfs, true, true) + " of " + zigImport.Filename + "_enums." + cabiEnumName(t.ParameterType) + " `"
				maybeDots := maybeDotsPath(zigImport.PackageName, zfs.currentPackageName)
				zfs.imports[maybeDots+zigImport.Filename+"_enums"] = struct{}{}
			}
		}

	} else if f, s, ok := rt.QPairOf(); ok {
		var firstComment, secondComment string

		if _, ok := KnownEnums[f.ParameterType]; ok {
			if zigImport, ok := KnownImports[f.ParameterType]; ok {
				firstComment = " (first: " + zigImport.Filename + "_enums." + cabiEnumName(f.ParameterType) + ")"
				maybeDots := maybeDotsPath(zigImport.PackageName, zfs.currentPackageName)
				zfs.imports[maybeDots+zigImport.Filename+"_enums"] = struct{}{}
			}
		}

		if _, ok := KnownEnums[s.ParameterType]; ok {
			if zigImport, ok := KnownImports[s.ParameterType]; ok {
				secondComment = " (second: " + zigImport.Filename + "_enums." + cabiEnumName(s.ParameterType) + ")"
				maybeDots := maybeDotsPath(zigImport.PackageName, zfs.currentPackageName)
				zfs.imports[maybeDots+zigImport.Filename+"_enums"] = struct{}{}
			}
		}

		if firstComment != "" || secondComment != "" {
			returnComment = "\n///\n/// ## Returns:\n///\n/// ` " + rt.RenderTypeZig(zfs, true, true) + firstComment + secondComment + " `"
		}

	} else if rt.IsChronoSeconds() {
		secType := strings.Split(rt.ParameterType, "::")[2]
		returnComment = "\n///\n/// ## Returns:\n///\n/// ` " + rt.RenderTypeZig(zfs, true, true) + " of " + secType + " `"

	}

	return returnComment
}

func (zfs *zigFileState) emitParametersZig2CABIForwarding(m CppMethod) (preamble, forwarding string) {
	tmp := make([]string, 0, len(m.Parameters)+2)

	if !(m.IsStatic && !m.IsProtected) {
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
			if (p.Pointer || p.ByRef) && (p.ParameterType == "GLvoid" || p.ParameterType == "void") {
				// void*, void**
				rvalue = "@ptrCast(" + rvalue + ")"
			}
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

	if p.ParameterType == "QString" || p.ParameterType == "QByteArray" || p.ParameterType == "QByteArrayView" ||
		p.ParameterType == "SignOn::MethodName" {
		// Zig: convert [](const) u8 -> libqt_string
		// C ABI: convert libqt_string -> real QString

		preamble += "const " + nameprefix + "_str = qtc.libqt_string{\n"
		preamble += "    .len = " + p.ParameterName + ".len,\n"
		preamble += "    .data = " + p.ParameterName + ".ptr,\n"
		preamble += "};\n"

		rvalue = nameprefix + "_str"

	} else if p.ParameterType == "QAnyStringView" || p.ParameterType == "QStringView" {
		rvalue = p.ParameterName + ".ptr"

	} else if t, _, ok := p.QListOf(); ok {
		// QList<T>
		// Convert []T to C array without allocation if we can.
		// This is not always possible, e.g. for QString.
		// We need to use the C ABI type for that.
		zfs.imports["std"] = struct{}{}

		if t.ParameterType == "QString" || t.ParameterType == "QByteArray" || t.ParameterType == "SignOn::MethodName" ||
			t.ParameterType == "QByteArrayView" {
			preamble += "const " + nameprefix + "_arr = allocator.alloc(qtc.libqt_string, " + p.ParameterName + `.len) catch @panic("` + lowerClass + "." + zfs.currentMethodName + `: Memory allocation failed");` + "\n"
			preamble += "defer allocator.free(" + nameprefix + "_arr);\n"
			preamble += "for (" + p.ParameterName + ", 0.." + p.ParameterName + ".len) |item, i| {\n"
			preamble += "    " + nameprefix + "_arr[i] = .{\n"
			preamble += "        .len = item.len,\n"
			preamble += "        .data = item.ptr,\n"
			preamble += "    };\n"
			preamble += "}\n"

		} else if t.ParameterType == "char" && t.PointerCount == 1 {
			preamble += "const " + nameprefix + "_cStr = allocator.alloc([*c]" + ifv(t.Const, "const ", "") + " u8, " + p.ParameterName + `.len) catch @panic("` + lowerClass + "." + zfs.currentMethodName + `: Memory allocation failed");` + "\n"
			preamble += "defer allocator.free(" + nameprefix + "_cStr);\n"
			preamble += "for (" + p.ParameterName + ", 0.." + p.ParameterName + ".len) |" + p.ParameterName + "_item, i| {\n"
			preamble += "    " + nameprefix + "_cStr[i] = @ptrCast(" + p.ParameterName + "_item.ptr);\n"
			preamble += "}\n"

		} else if _, _, ok := t.QListOf(); ok {
			preamble += "const " + nameprefix + "_arr = allocator.alloc(qtc.libqt_list, " + p.ParameterName + `.len) catch @panic("` + lowerClass + "." + zfs.currentMethodName + `: Memory allocation failed");` + "\n"
			preamble += "defer allocator.free(" + nameprefix + "_arr);\n"
			preamble += "for (" + p.ParameterName + ", 0.." + ") |" + nameprefix + "_inner, i| {\n"
			preamble += "    " + nameprefix + "_arr[i] = qtc.libqt_list{\n"
			preamble += "        .len = " + nameprefix + "_inner.len,\n"
			preamble += "        .data = @ptrCast(" + nameprefix + "_inner.ptr),\n"
			preamble += "    };\n"
			preamble += "}\n"

		} else if f, s, ok := t.QPairOf(); ok {
			if (f.ParameterType == "QString" || f.ParameterType == "QByteArray") && (s.ParameterType == "QString" || s.ParameterType == "QByteArray") {
				preamble += "const " + p.ParameterName + "_pairs = allocator.alloc(qtc.libqt_pair, " + p.ParameterName + `.len) catch @panic("` + lowerClass + "." + zfs.currentMethodName + `: Memory allocation failed");` + "\n"
				preamble += "defer allocator.free(" + p.ParameterName + "_pairs);\n"
				preamble += "const " + nameprefix + "_str = allocator.alloc(qtc.libqt_string, " + p.ParameterName + `.len * 2) catch @panic("` + lowerClass + "." + zfs.currentMethodName + `: Memory allocation failed");` + "\n"
				preamble += "defer allocator.free(" + nameprefix + "_str);\n"
				preamble += "for (" + p.ParameterName + ", 0.." + ") |" + p.ParameterName + "_item, i| {\n"
				preamble += "    " + p.ParameterName + "_str[i * 2] = qtc.libqt_string{\n"
				preamble += "        .len = " + p.ParameterName + "_item.first.len,\n"
				preamble += "        .data = " + p.ParameterName + "_item.first.ptr,\n"
				preamble += "    };\n"
				preamble += "    " + p.ParameterName + "_str[i * 2 + 1] = qtc.libqt_string{\n"
				preamble += "        .len = " + p.ParameterName + "_item.second.len,\n"
				preamble += "        .data = " + p.ParameterName + "_item.second.ptr,\n"
				preamble += "    };\n"
				preamble += "    " + p.ParameterName + "_pairs[i] = qtc.libqt_pair{\n"
				preamble += "        .first = @ptrCast(&" + p.ParameterName + "_str[i * 2]),\n"
				preamble += "        .second = @ptrCast(&" + p.ParameterName + "_str[i * 2 + 1]),\n"
				preamble += "    };\n"
				preamble += "}\n"
			}
		}

		preamble += "const " + nameprefix + "_list = qtc.libqt_list{\n"
		preamble += "    .len = " + p.ParameterName + ".len,\n"
		if t.ParameterType == "QString" || t.ParameterType == "QByteArray" || t.ParameterType == "SignOn::MethodName" ||
			t.ParameterType == "QByteArrayView" {
			preamble += "    .data = " + nameprefix + "_arr.ptr,\n"

		} else if t.ParameterType == "char" && t.PointerCount == 1 {
			preamble += "    .data = @ptrCast(" + nameprefix + "_cStr.ptr),\n"

		} else if t.QtClassType() {
			preamble += "    .data = @ptrCast(" + p.ParameterName + ".ptr),\n"

		} else if _, _, ok := t.QListOf(); ok {
			preamble += "    .data = @ptrCast(" + nameprefix + "_arr.ptr),\n"

		} else if f, s, ok := t.QPairOf(); ok {
			if (f.ParameterType == "QString" || f.ParameterType == "QByteArray") && (s.ParameterType == "QString" || s.ParameterType == "QByteArray") {
				preamble += "    .data = @ptrCast(" + nameprefix + "_pairs.ptr),\n"
			} else if (f.IntType() || IsKnownClass(f.ParameterType)) && (s.IntType() || IsKnownClass(s.ParameterType)) {
				preamble += "    .data = @ptrCast(" + p.ParameterName + ".ptr),\n"
			}
		} else {
			preamble += "    .data = " + p.ParameterName + ".ptr,\n"
		}
		preamble += "};\n"
		rvalue = nameprefix + "_list"

	} else if t, ok := p.QSetOf(); ok {
		// QSet<T>
		zfs.imports["std"] = struct{}{}

		preamble += "const " + nameprefix + "_count = " + p.ParameterName + ".count();\n"

		if t.ParameterType == "QString" || t.ParameterType == "QByteArray" {
			preamble += "const " + nameprefix + "_arr = allocator.alloc(qtc.libqt_string, " + nameprefix + `_count) catch @panic("` + lowerClass + "." + zfs.currentMethodName + `: Memory allocation failed");` + "\n"
			preamble += "defer allocator.free(" + nameprefix + "_arr);\n"
			preamble += "var " + nameprefix + "_it = " + nameprefix + ".keyIterator();\n"
			preamble += "var " + nameprefix + "_i: usize = 0;\n"
			preamble += "while (" + nameprefix + "_it.next()) |" + nameprefix + "_item| : (" + nameprefix + "_i += 1) {\n"
			preamble += "    " + nameprefix + "_arr[" + nameprefix + "_i] = .{\n"
			preamble += "        .len = " + nameprefix + "_item.*.len,\n"
			preamble += "        .data = " + nameprefix + "_item.*.ptr,\n"
			preamble += "    };\n"
			preamble += "}\n"

			preamble += "const " + nameprefix + "_set = qtc.libqt_list{\n"
			preamble += "    .len = " + nameprefix + "_count,\n"
			preamble += "    .data = " + nameprefix + "_arr.ptr,\n"
			preamble += "};\n"
			rvalue = nameprefix + "_set"

		} else if e, ok := KnownEnums[t.ParameterType]; ok {
			zfs.imports["std"] = struct{}{}

			preamble += "const " + nameprefix + "_keys = allocator.alloc(" + e.EnumTypeZig + ", " + nameprefix + `_count) catch @panic("` + lowerClass + "." + zfs.currentMethodName + `: Memory allocation failed");` + "\n"
			preamble += "defer allocator.free(" + nameprefix + "_keys);\n"
			preamble += "var i: usize = 0;\n"
			preamble += "var " + p.ParameterName + "_it = " + p.ParameterName + ".iterator();\n"
			preamble += "while (" + nameprefix + "_it.next()) |" + nameprefix + "_item| : (i += 1) {\n"
			preamble += "const " + nameprefix + "_key = " + nameprefix + "_item.key_ptr.*;\n"
			preamble += nameprefix + "_keys[i] = @bitCast(" + nameprefix + "_key);\n"
			preamble += "}\n"

			preamble += "const " + nameprefix + "_set = qtc.libqt_list{\n"
			preamble += "    .len = " + nameprefix + "_count,\n"
			preamble += "    .data = " + nameprefix + "_keys.ptr,\n"
			preamble += "};\n"
			rvalue = nameprefix + "_set"

		} else {
			panic("QSet<> arguments of type " + t.ParameterType + " are not yet implemented")
		}

	} else if kType, vType, containerType, ok := p.QMapOf(); ok {
		// QMap<K,V>
		zfs.imports["std"] = struct{}{}
		var hashMapType, k, valCast, valCastClose, vTypeDest string
		isQMulti := IsMultiHashMap(containerType)
		maybeArray := ifv(IsOrderedMap(containerType), "Array", "")

		// TODO front-end implementation mostly works, following back-end implementation is very messy

		kTypeZig := kType.parameterTypeZig()

		switch kType.ParameterType {
		case "QString", "SignOn::MethodName":
			hashMapType = "String" + maybeArray + "HashMap,constu8,"
			k = "constu8"
		case "QByteArray":
			hashMapType = "String" + maybeArray + "HashMap,u8,"
			k = "u8"
		default:
			k = kType.RenderTypeZig(zfs, false, true)
			if e, ok := KnownEnums[kType.ParameterType]; ok {
				k = e.EnumTypeZig
			}
			hashMapType = "Auto" + maybeArray + "HashMap," + k + ","
		}

		var valIsList, valueTypeOverride bool
		maybeConst := ifv(vType.ParameterType == "QString", "const ", "")
		vParam := ifv(isQMulti, "[]"+maybeConst, "") + vType.RenderTypeZig(zfs, true, true)
		vParam = ifv(vParam == "QtC.SignOn__MechanismsList", "[]const []const u8", vParam)
		zfs.imports[hashMapType+vParam] = struct{}{}

		if !isQMulti {
			if strings.HasPrefix(vParam, "[]QtC.") {
				vParam = "qtc.libqt_list"
				valIsList = true
			} else if !strings.HasPrefix(vParam, "arraymap_") && !strings.HasPrefix(vParam, "map_") && !strings.HasPrefix(vParam, "struct_") && !vType.IntType() {
				valCast = "@ptrCast("
				valCastClose = ")"
			}
		}

		if e, ok := KnownEnums[kType.ParameterType]; ok {
			kTypeZig = e.EnumTypeZig
		}

		if vParam == "[]const u8" || vParam == "[]u8" {
			vParam = "qtc.libqt_string"
		} else if vParam == "[]const []const u8" || vParam == "[][]u8" {
			isQMulti = true
			valueTypeOverride = true
		} else if strings.HasPrefix(vParam, "[]const ") {
			vParam = vParam[8:]
		} else if strings.HasPrefix(vParam, "[]") {
			vParam = vParam[2:]
		}

		if innerType, _, ok := vType.QListOf(); ok {
			if innerType.ParameterType == "QString" || innerType.ParameterType == "QByteArray" {
				isQMulti = true
			} else if IsKnownClass(innerType.ParameterType) {
				vParam = "qtc.libqt_list"
			}
		}

		vAllocType := ifv(isQMulti, "qtc.libqt_list", vParam)
		valueParamType := vType.parameterTypeZig()
		if valueParamType == "SignOn::MechanismsList" || valueTypeOverride {
			valueParamType = "qtc.libqt_string"
		}

		// Allocate temporary space for keys and values
		preamble += "const " + nameprefix + "_count = " + p.ParameterName + ".count();\n"
		preamble += "const " + nameprefix + "_keys = allocator.alloc(" + kTypeZig + ", " + nameprefix + `_count) catch @panic("` + lowerClass + "." + zfs.currentMethodName + `: Memory allocation failed");` + "\n"
		preamble += "defer allocator.free(" + nameprefix + "_keys);\n"
		preamble += "const " + nameprefix + "_values = allocator.alloc(" + vAllocType + ", " + nameprefix + `_count) catch @panic("` + lowerClass + "." + zfs.currentMethodName + `: Memory allocation failed");` + "\n"
		preamble += "defer allocator.free(" + nameprefix + "_values);\n"

		if isQMulti {
			preamble += "const " + nameprefix + "_inners = allocator.alloc([]" + valueParamType + ", " + nameprefix + `_count) catch @panic("` + lowerClass + "." + zfs.currentMethodName + `: Memory allocation failed");` + "\n"
			preamble += "defer {\n"
			preamble += "    for (" + nameprefix + "_inners) |" + nameprefix + "_inner| {\n"
			preamble += "        allocator.free(" + nameprefix + "_inner);\n"
			preamble += "    }\n"
			preamble += "    allocator.free(" + nameprefix + "_inners);\n"
			preamble += "}\n"
		}

		// Iterate map and fill
		preamble += "var i: usize = 0;\n"
		preamble += "var " + p.ParameterName + "_it = " + p.ParameterName + ".iterator();\n"
		preamble += "while (" + nameprefix + "_it.next()) |it_entry| : (i += 1) {\n"
		preamble += "const " + nameprefix + "_key = it_entry.key_ptr.*;\n"

		if k == "constu8" || k == "u8" {
			preamble += nameprefix + "_keys[i] = qtc.libqt_string{\n"
			preamble += "    .len = " + nameprefix + "_key.len,\n"
			preamble += "    .data = " + nameprefix + "_key.ptr,\n"
			preamble += "};\n"
		} else {
			castType := ifv(kType.IntType(), "bit", "ptr")

			preamble += nameprefix + "_keys[i] = @" + castType + "Cast(" + nameprefix + "_key);\n"
		}

		if isQMulti {
			preamble += nameprefix + "_values[i].len = it_entry.value_ptr.*.len;\n"
			preamble += "const " + nameprefix + "_val = allocator.alloc(" + valueParamType + `, it_entry.value_ptr.len) catch @panic("` + lowerClass + "." + zfs.currentMethodName + `: Memory allocation failed");` + "\n"
			preamble += nameprefix + "_inners[i] = " + nameprefix + "_val;\n"

			if vType.ParameterType == "QByteArray" || vType.ParameterType == "QString" || valueTypeOverride {
				preamble += "for (it_entry.value_ptr.*, 0..) |value, j| {\n"
				preamble += "    " + nameprefix + "_val[j] = " + valueParamType + "{\n"
				preamble += "        .len = value.len,\n"
				preamble += "        .data = value.ptr,\n"
				preamble += "    };\n"
				preamble += "}\n"

			} else if IsKnownClass(vTypeDest) {
				preamble += "const value = it_entry.value_ptr.*;\n"
				preamble += nameprefix + "_values[i] = " + vParam + "{\n"
				preamble += "    .len = value.len,\n"
				preamble += "    .data = @ptrCast(value.ptr),\n"
				preamble += "};\n"

			} else {
				panic("UNHANDLED " + strings.ToUpper(containerType) + " PARAMETER TYPE: " + vType.ParameterType)
			}

			preamble += nameprefix + "_values[i].data = @ptrCast(" + nameprefix + "_val.ptr);\n"

		} else if vAllocType == "qtc.libqt_string" {
			preamble += "const value = it_entry.value_ptr.*;\n"
			preamble += nameprefix + "_values[i] = qtc.libqt_string{\n"
			preamble += "    .len = value.len,\n"
			preamble += "    .data = value.ptr,\n"
			preamble += "};\n"

		} else if valIsList {
			preamble += "const value = it_entry.value_ptr.*;\n"
			preamble += nameprefix + "_values[i] = " + vParam + "{\n"
			preamble += "    .len = value.len,\n"
			preamble += "    .data = @ptrCast(value.ptr),\n"
			preamble += "};\n"

		} else {
			preamble += nameprefix + "_values[i] = " + valCast + "it_entry.value_ptr.*" + valCastClose + ";\n"
		}

		preamble += "}\n"

		declType := "const"
		var maybePointer string

		if p.Pointer {
			declType = "var"
			maybePointer = "&"
		}

		// Create the map struct
		preamble += declType + " " + nameprefix + "_map = qtc.libqt_map {\n"
		preamble += "    .len = " + nameprefix + "_count,\n"
		preamble += "    .keys = @ptrCast(" + nameprefix + "_keys.ptr),\n"
		preamble += "    .values = @ptrCast(" + nameprefix + "_values.ptr),\n"
		preamble += "};\n"
		rvalue = maybePointer + nameprefix + "_map"

	} else if fType, sType, ok := p.QPairOf(); ok {
		// QPair<F,S>
		zfs.imports["struct_"+fType.RenderTypeZig(zfs, false, true)+"_"+sType.RenderTypeZig(zfs, false, true)] = struct{}{}

		if (fType.IntType() || IsKnownClass(fType.ParameterType)) && (sType.IntType() || IsKnownClass(sType.ParameterType)) {
			rvalue = "@bitCast(" + nameprefix + ")"
		} else {
			fAddr := ""
			fParam := ".first"
			if fType.ParameterType == "QString" || fType.ParameterType == "QByteArray" {
				fAddr = "&"
				preamble += "var " + nameprefix + "_first_str = qtc.libqt_string{\n"
				preamble += "    .len = " + p.ParameterName + fParam + ".len,\n"
				preamble += "    .data = " + p.ParameterName + fParam + ".ptr,\n"
				preamble += "};\n"
				fParam = "_first_str"
			} else if fType.IntType() {
				fAddr = "&"
				fParam = "_first"
				preamble += "var " + nameprefix + "_first = " + nameprefix + ".first;\n"
			}

			sAddr := ""
			sParam := ".second"
			if sType.ParameterType == "QString" || sType.ParameterType == "QByteArray" {
				sAddr = "&"
				preamble += "var " + nameprefix + "_second_str = qtc.libqt_string{\n"
				preamble += "    .len = " + p.ParameterName + sParam + ".len,\n"
				preamble += "    .data = " + p.ParameterName + sParam + ".ptr,\n"
				preamble += "};\n"
				sParam = "_second_str"
			} else if sType.IntType() {
				sAddr = "&"
				sParam = "_second"
				preamble += "var " + nameprefix + "_second = " + nameprefix + ".second;\n"
			}

			// Create the pair struct
			preamble += "const " + nameprefix + "_pair = qtc.libqt_pair {\n"
			preamble += "    .first = @ptrCast(" + fAddr + nameprefix + fParam + "),\n"
			preamble += "    .second = @ptrCast(" + sAddr + nameprefix + sParam + "),\n"
			preamble += "};\n"
			rvalue = nameprefix + "_pair"
		}

	} else if p.Pointer && (p.ParameterType == "char" || p.ParameterType == "GLchar") {
		switch p.PointerCount {
		case 1:
			// Single char* argument
			preamble += "const " + nameprefix + "_Cstring = " + p.ParameterName + ".ptr;\n"
			rvalue = nameprefix + "_Cstring"

		case 2:
			// Single char** argument
			zfs.imports["std"] = struct{}{}

			preamble += "const " + nameprefix + "_chararr = allocator.alloc([*c]" + ifv(p.Const, "const ", "") + "u8, " + p.ParameterName + `.len) catch @panic("` + lowerClass + "." + zfs.currentMethodName + `: Memory allocation failed");` + "\n"
			if p.ParameterName != "argv" {
				preamble += "defer allocator.free(" + nameprefix + "_chararr);\n"
			}
			preamble += "for (" + p.ParameterName + ", 0.." + p.ParameterName + ".len) |str, i| {\n"
			preamble += "    " + nameprefix + "_chararr[i] = @ptrCast(str.ptr);\n"
			preamble += "}\n"

			rvalue = nameprefix + "_chararr.ptr"

		default:
			panic("char argument with " + strconv.Itoa(p.PointerCount) + " pointers")
		}

	} else if p.QtClassType() {
		// The C++ type is a pointer to Qt class
		// We want our functions to accept the Zig wrapper type, and forward as a pointer
		rvalue = "@ptrCast(" + p.ParameterName + ")"

	} else if p.GlIntType() && p.Pointer {
		rvalue = p.ParameterName + ".ptr"

	} else if p.IntType() || p.IsFlagType() || p.IsKnownEnum() {
		if p.Pointer || p.ByRef {
			rvalue = "@ptrCast(" + p.ParameterName + ")"
		} else {
			rvalue = "@bitCast(" + p.ParameterName + ")"
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

	} else if (rt.ParameterType == "void" || rt.ParameterType == "GLvoid") && rt.Pointer {
		return assignExpr + rvalue + ";"

	} else if (rt.ParameterType == "char" && rt.Pointer) || rt.ParameterType == "QAnyStringView" {
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

	} else if rt.ParameterType == "QString" || rt.ParameterType == "QStringView" || rt.ParameterType == "SignOn::MethodName" {
		zfs.imports["std"] = struct{}{}

		shouldReturn = "var " + namePrefix + "_str ="
		afterword += "defer qtc.libqt_string_free(&" + namePrefix + "_str);\n"
		afterword += "const " + namePrefix + "_ret = allocator.alloc(u8, " + namePrefix + `_str.len) catch @panic("` + lowerClass + "." + zfs.currentMethodName + `: Memory allocation failed");` + "\n"
		afterword += "@memcpy(" + namePrefix + "_ret, " + namePrefix + "_str.data[0.." + namePrefix + "_str.len]);\n"
		afterword += assignExpr + " " + namePrefix + "_ret;\n"
		return shouldReturn + " " + rvalue + ";\n" + afterword

	} else if rt.ParameterType == "QByteArray" || rt.ParameterType == "QByteArrayView" {
		// We receive the C ABI type of a libqt_string. Convert it into []byte
		// We must free the libqt_string data pointer - this is a data copy,
		// not an alias.
		zfs.imports["std"] = struct{}{}

		shouldReturn = "var " + namePrefix + "_bytearray: qtc.libqt_string = "
		afterword += "defer qtc.libqt_string_free(&" + namePrefix + "_bytearray);\n"
		afterword += "const " + namePrefix + "_ret = allocator.alloc(u8, " + namePrefix + `_bytearray.len) catch @panic("` + lowerClass + "." + zfs.currentMethodName + `: Memory allocation failed");` + "\n"
		afterword += "@memcpy(" + namePrefix + "_ret, " + namePrefix + "_bytearray.data[0.." + namePrefix + "_bytearray.len]);\n"
		afterword += assignExpr + " " + namePrefix + "_ret;\n"
		return shouldReturn + " " + rvalue + ";\n" + afterword

	} else if t, _, ok := rt.QListOf(); ok {
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

		if IsKnownClass(t.ParameterType) || IsKnownTypeDef(t.ParameterType) || t.IntType() ||
			arrType == "i32" || arrType == "u32" || arrType == "u64" {
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
			afterword += "        const " + namePrefix + "_buf = allocator.allocSentinel(u8, cstr_len, 0) catch @panic(\"" + lowerClass + "." + zfs.currentMethodName + ": Buffer allocation failed\");\n"
			afterword += "        @memcpy(" + namePrefix + "_buf, cstr[0..cstr_len]);\n"
			afterword += "        " + namePrefix + "_ret[i] = " + namePrefix + "_buf;\n"
			afterword += "    } else {\n"
			afterword += "        " + namePrefix + "_ret[i] = &[_:0]u8{};\n"
			afterword += "    }\n"
			afterword += "}\n"

		} else if t.ParameterType == "QString" || t.ParameterType == "QByteArray" || t.ParameterType == "QByteArrayView" {
			afterword += "var " + namePrefix + "_str: [*]qtc.libqt_string = @ptrCast(@alignCast(" + namePrefix + "_arr.data));\n"
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

		} else if f, s, ok := t.QPairOf(); ok {
			// QList<QPair<F,S>>
			if (f.IntType() || IsKnownClass(f.ParameterType)) && (s.IntType() || IsKnownClass(s.ParameterType)) {
				afterword += "const " + namePrefix + "_data: [*]" + arrType + " = @ptrCast(@alignCast(" + namePrefix + "_arr.data));\n"
				afterword += "defer qtc.libqt_free(" + namePrefix + "_arr.data);\n"
				afterword += "const " + namePrefix + "_ret = allocator.alloc(" + arrType + ", " + namePrefix + `_arr.len) catch @panic("` + lowerClass + "." + zfs.currentMethodName + `: Memory allocation failed");` + "\n"
				afterword += "@memcpy(" + namePrefix + "_ret, " + namePrefix + "_data[0.." + namePrefix + "_arr.len]);\n"

			} else {
				afterword += "const " + namePrefix + "_data: [*]qtc.libqt_pair = @ptrCast(@alignCast(" + namePrefix + "_arr.data));\n"

				var firstFree, secondFree, firstLoop, secondLoop, firstParam, secondParam string

				if f.ParameterType == "QString" || f.ParameterType == "QByteArray" {
					firstFree = "        qtc.libqt_string_free(@ptrCast(@alignCast(" + namePrefix + "_data[i].first)));\n"
					firstLoop = "    const " + namePrefix + "_first_str: *qtc.libqt_string = @ptrCast(@alignCast(" + namePrefix + "_data[i].first));\n"
					firstLoop += "    const " + namePrefix + "_first_slice = allocator.alloc(u8, " + namePrefix + `_first_str.len) catch @panic("` + lowerClass + "." + zfs.currentMethodName + `: Memory allocation failed");` + "\n"
					firstLoop += "    @memcpy(" + namePrefix + "_first_slice, " + namePrefix + "_first_str.data[0.." + namePrefix + "_first_str.len]);\n"
					firstParam = namePrefix + "_first_slice"
				} else if IsKnownClass(f.ParameterType) {
					firstParam = "@ptrCast(" + namePrefix + "_data[i].first)"
				} else if f.IntType() {
					firstFree = "        qtc.libqt_free(@ptrCast(@alignCast(" + namePrefix + "_data[i].first)));\n"
					firstParam = "@as(*" + f.parameterTypeZig() + ", @ptrCast(@alignCast(" + namePrefix + "_data[i].first))).*"
				} else {
					panic("UNHANDLED LIST OF FIRST PAIR TYPE: " + f.ParameterType + " with " + s.ParameterType)
				}

				if s.ParameterType == "QString" || s.ParameterType == "QByteArray" {
					secondFree = "        qtc.libqt_string_free(@ptrCast(@alignCast(" + namePrefix + "_data[i].second)));\n"
					secondLoop = "    const " + namePrefix + "_second_str: *qtc.libqt_string = @ptrCast(@alignCast(" + namePrefix + "_data[i].second));\n"
					secondLoop += "    const " + namePrefix + "_second_slice = allocator.alloc(u8, " + namePrefix + `_second_str.len) catch @panic("` + lowerClass + "." + zfs.currentMethodName + `: Memory allocation failed")` + ";\n"
					secondLoop += "    @memcpy(" + namePrefix + "_second_slice, " + namePrefix + "_second_str.data[0.." + namePrefix + "_second_str.len]);\n"
					secondParam = namePrefix + "_second_slice"
				} else if IsKnownClass(s.ParameterType) {
					secondParam = "@ptrCast(" + namePrefix + "_data[i].second)"
				} else if s.IntType() {
					secondFree = "        qtc.libqt_free(@ptrCast(@alignCast(" + namePrefix + "_data[i].second)));\n"
					secondParam = "@as(*" + s.parameterTypeZig() + ", @ptrCast(@alignCast(" + namePrefix + "_data[i].second))).*"
				} else {
					panic("UNHANDLED LIST OF SECOND PAIR TYPE: " + s.ParameterType + " with first " + f.ParameterType)
				}

				afterword += "defer {\n"

				if firstFree != "" || secondFree != "" {
					afterword += "    for (0.." + namePrefix + "_arr.len) |i| {\n"
					afterword += firstFree
					afterword += secondFree
					afterword += "    }\n"
				}

				afterword += "    qtc.libqt_free(" + namePrefix + "_arr.data);\n"
				afterword += "}\n"

				afterword += "const " + namePrefix + "_ret = allocator.alloc(" + arrType + ", " + namePrefix + `_arr.len) catch @panic("` + lowerClass + "." + zfs.currentMethodName + `: Memory allocation failed");` + "\n"
				afterword += "for (0.." + namePrefix + "_arr.len) |i| {\n"
				afterword += firstLoop
				afterword += secondLoop
				afterword += "    " + namePrefix + "_ret[i] = " + arrType + "{\n"
				afterword += "        .first = " + firstParam + ",\n"
				afterword += "        .second = " + secondParam + ",\n"
				afterword += "    };\n"
				afterword += "}\n"
			}

		} else if p, _, ok := t.QListOf(); ok {
			// QList<QList<P>>
			if p.ParameterType == "QString" || p.ParameterType == "QByteArray" {
				arrAllocType := arrType[2:]
				if strings.HasPrefix(arrType, "[]const ") {
					arrAllocType = arrType[8:]
				}

				afterword += "const " + namePrefix + "_str: [*]qtc.libqt_list = @ptrCast(@alignCast(" + namePrefix + "_arr.data));\n"
				afterword += "defer {\n"
				afterword += "    for (0.." + namePrefix + "_arr.len) |i| {\n"
				afterword += "        var " + namePrefix + "_strlist: [*]qtc.libqt_string = @ptrCast(@alignCast(" + namePrefix + "_str[i].data));\n"
				afterword += "        for (0.." + namePrefix + "_str[i].len) |j| {\n"
				afterword += "            qtc.libqt_string_free(@ptrCast(&" + namePrefix + "_strlist[j]));\n"
				afterword += "        }\n"
				afterword += "        qtc.libqt_free(" + namePrefix + "_str[i].data);\n"
				afterword += "    }\n"
				afterword += "    qtc.libqt_free(" + namePrefix + "_arr.data);\n"
				afterword += "}\n"
				afterword += "const " + namePrefix + "_ret = allocator.alloc(" + arrType + ", " + namePrefix + `_arr.len) catch @panic("` + lowerClass + "." + zfs.currentMethodName + `: Memory allocation failed");` + "\n"
				afterword += "for (0.." + namePrefix + "_arr.len) |i| {\n"
				afterword += "    const " + namePrefix + "_data = " + namePrefix + "_str[i];\n"
				afterword += "    const " + namePrefix + "_strlist = allocator.alloc(" + arrAllocType + ", " + namePrefix + `_data.len) catch @panic("` + lowerClass + "." + zfs.currentMethodName + `: Memory allocation failed");` + "\n"
				afterword += "    var " + namePrefix + "_strdata: [*]qtc.libqt_string = @ptrCast(@alignCast(" + namePrefix + "_data.data));\n"
				afterword += "    for (0.." + namePrefix + "_data.len) |j| {\n"
				afterword += "        const " + namePrefix + "_buf = allocator.alloc(u8, " + namePrefix + `_strdata[j].len) catch @panic("` + lowerClass + "." + zfs.currentMethodName + `: Memory allocation failed");` + "\n"
				afterword += "        @memcpy(" + namePrefix + "_buf, " + namePrefix + "_strdata[j].data[0.." + namePrefix + "_strdata[j].len]);\n"
				afterword += "        " + namePrefix + "_strlist[j] = " + namePrefix + "_buf;\n"
				afterword += "    }\n"
				afterword += "    " + namePrefix + "_ret[i] = " + namePrefix + "_strlist;\n"
				afterword += "}\n"

			} else if IsKnownClass(p.ParameterType) {
				afterword += "const " + namePrefix + "_list: [*]qtc.libqt_list = @ptrCast(@alignCast(" + namePrefix + "_arr.data));\n"
				afterword += "defer {\n"
				afterword += "    for (0.." + namePrefix + "_arr.len) |i| {\n"
				afterword += "        qtc.libqt_free(" + namePrefix + "_list[i].data);\n"
				afterword += "    }\n"
				afterword += "    qtc.libqt_free(" + namePrefix + "_list);\n"
				afterword += "}\n"
				afterword += "const " + namePrefix + "_ret = allocator.alloc(" + arrType + ", " + namePrefix + `_arr.len) catch @panic("` + lowerClass + "." + zfs.currentMethodName + `: Memory allocation failed");` + "\n"
				afterword += "for (0.." + namePrefix + "_arr.len) |i| {\n"
				afterword += "    const _data: [*]QtC." + p.ParameterType + " = @ptrCast(@alignCast(" + namePrefix + "_list[i].data));\n"
				afterword += "    " + namePrefix + "_ret[i] = allocator.alloc(QtC." + p.ParameterType + ", " + namePrefix + `_list[i].len) catch @panic("` + lowerClass + "." + zfs.currentMethodName + `: Memory allocation failed");` + "\n"
				afterword += "    @memcpy(" + namePrefix + "_ret[i], _data[0.." + namePrefix + "_list[i].len]);\n"
				afterword += "}\n"

			} else {
				panic("*UNHANDLED INNER QLIST TYPE*\trt:" + rt.ParameterType + "\tarrType: " + arrType + "\tt: " + t.ParameterType)
			}

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
			afterword += "    " + namePrefix + "_ret.put(allocator, " + namePrefix + "_data[i].data[0.." + namePrefix + "_data[i].len], {}) catch @panic(\"" + lowerClass + "." + zfs.currentMethodName + ": Set insertion failed\");\n"
			afterword += "}\n"

			afterword += assignExpr + " " + namePrefix + "_ret;"
			return shouldReturn + " " + rvalue + ";\n" + afterword

		} else if t.IsKnownEnum() || IsKnownClass(t.ParameterType) {
			zfs.imports["std"] = struct{}{}
			var setType, setValue string

			if t.IsKnownEnum() {
				setType = KnownEnums[t.ParameterType].EnumTypeZig
				setValue = setType
			} else {
				setType = t.RenderTypeMapZig(zfs, false)
				setValue = t.RenderTypeZig(zfs, true, true)
			}

			shouldReturn = "const " + namePrefix + "_set: qtc.libqt_list = "

			afterword += "var " + namePrefix + "_ret: set_" + setType + " = .empty;\n"
			afterword += "const " + namePrefix + "_data: [*]" + setValue + " = @ptrCast(@alignCast(" + namePrefix + "_set.data));\n"
			afterword += "for (0.." + namePrefix + "_set.len) |i| {\n"
			afterword += "    " + namePrefix + "_ret.put(allocator, " + namePrefix + "_data[i], {}) catch @panic(\"" + lowerClass + "." + zfs.currentMethodName + ": Set insertion failed\");\n"
			afterword += "}\n"

			afterword += assignExpr + " " + namePrefix + "_ret;"
			return shouldReturn + " " + rvalue + ";\n" + afterword

		} else {
			panic("*UNHANDLED QSET TYPE*\trt:" + rt.ParameterType + "\tt: " + t.ParameterType)
		}

	} else if kType, vType, containerType, ok := rt.QMapOf(); ok {
		// We deallocate QMap in a similar way to the QList,
		// depending on the type of the hash map (Auto vs String)
		zfs.imports["std"] = struct{}{}
		shouldReturn = "const " + namePrefix + "_map: qtc.libqt_map = "
		maybeDeref := ifv(rt.Pointer, ".?.*", "")
		isQMulti := IsMultiHashMap(containerType)
		maybeArray := ifv(IsOrderedMap(containerType), "array", "")

		// TODO front-end implementation mostly works, following back-end implementation is very messy
		var stringKey, stringValue, listValue bool
		keyParam := kType.RenderTypeMapZig(zfs, false)
		valParam := vType.RenderTypeMapZig(zfs, false)

		kParam := keyParam
		if keyParam == "constu8" || keyParam == "u8" {
			kParam = "qtc.libqt_string"
			stringKey = true
		} else if e, ok := KnownEnums[kType.ParameterType]; ok {
			kParam = e.EnumTypeZig
			keyParam = e.EnumTypeZig
		}

		vParam := ifv(isQMulti, mapParamToString("[]"+ifv(vType.ParameterType == "QString", "const ", "")+vType.RenderTypeZig(zfs, true, true)), valParam)
		if valParam == "constu8" || valParam == "u8" {
			valParam = "qtc.libqt_string"
			stringValue = true
		} else if e, ok := KnownEnums[vType.ParameterType]; ok {
			vParam = e.EnumTypeZig
			valParam = e.EnumTypeZig
		}

		var keyType, maybeKeyCast, maybeKeyCastClose, maybeValCast, maybeValCastClose, listType string

		if _, ok := KnownClassnames[kType.ParameterType]; ok {
			keyType = kType.RenderTypeZig(zfs, true, true)
			maybeKeyCast = "@ptrCast("
			maybeKeyCastClose = ")"
		} else if kType.IntType() {
			keyType = kType.RenderTypeZig(zfs, true, false)
		} else {
			keyType = kParam
		}

		if _, ok := KnownClassnames[vType.ParameterType]; ok {
			valParam = vType.RenderTypeZig(zfs, true, true)
			maybeValCast = "@ptrCast("
			maybeValCastClose = ")"
		}

		if strings.HasPrefix(valParam, "qtcq") || strings.HasPrefix(valParam, "sliceqtcq") {
			valParam = vType.RenderTypeZig(zfs, true, true)
		}

		if strings.HasPrefix(valParam, "[]QtC.") {
			listType = valParam[2:]
			valParam = "qtc.libqt_list"
			listValue = true
		}

		valParam = ifv(isQMulti, "qtc.libqt_list", valParam)

		afterword += "var " + namePrefix + "_ret: " + maybeArray + "map_" + keyParam + "_" + vParam + "= .empty;\n"

		afterword += "defer {\n"
		var deferKey, deferVal string
		retKey := "_key"
		retVal := "_value"

		if stringKey {
			afterword += "const " + namePrefix + "_keys: [*]" + kParam + " = @ptrCast(@alignCast(" + namePrefix + "_map.keys));\n"
			deferKey = "qtc.libqt_free(" + namePrefix + "_keys[i].data);\n"
		}
		if isQMulti {
			afterword += "const " + namePrefix + "_values: [*]qtc.libqt_list = @ptrCast(@alignCast(" + namePrefix + "_map.values));\n"

			if vType.ParameterType == "QByteArray" || vType.ParameterType == "QString" {
				deferVal = "const " + namePrefix + "_value_list = " + namePrefix + "_values[i];\n"
				deferVal += "const " + namePrefix + "_value_strings: [*]qtc.libqt_string = @ptrCast(@alignCast(" + namePrefix + "_value_list.data));\n"
				deferVal += "for (0.." + namePrefix + "_value_list.len) |j| {\n"
				deferVal += "qtc.libqt_free(" + namePrefix + "_value_strings[j].data);\n"
				deferVal += "}\n"
				deferVal += "qtc.libqt_free(" + namePrefix + "_value_list.data);\n"
			} else if IsKnownClass(vType.ParameterType) {
				deferVal = "qtc.libqt_free(" + namePrefix + "_values[i].data);\n"

			} else {
				panic("UNHANDLED " + strings.ToUpper(containerType) + " VALUE RETURN TYPE: " + vType.ParameterType)
			}

		} else if stringValue || listValue {
			afterword += "const " + namePrefix + "_values: [*]" + valParam + " = @ptrCast(@alignCast(" + namePrefix + "_map.values));\n"
			deferVal = "qtc.libqt_free(" + namePrefix + "_values[i].data);\n"
		}
		if stringKey || stringValue || listValue || isQMulti {
			afterword += "for (0.." + namePrefix + "_map.len) |i| {\n"
			afterword += deferKey
			afterword += deferVal
			afterword += "}\n"
		}
		afterword += "qtc.libqt_free(" + namePrefix + "_map.keys);\n"
		afterword += "qtc.libqt_free(" + namePrefix + "_map.values);\n"
		afterword += "}\n"

		afterword += "const " + namePrefix + "_keys: [*]" + keyType + " = @ptrCast(@alignCast(" + namePrefix + "_map.keys));\n"
		afterword += "const " + namePrefix + "_values: [*]" + valParam + " = @ptrCast(@alignCast(" + namePrefix + "_map.values));\n"

		afterword += "var i: usize = 0;\n"
		afterword += "while (i < " + namePrefix + "_map.len) : (i += 1) {\n"

		afterword += "const " + namePrefix + "_key = " + namePrefix + "_keys[i];\n"
		if stringKey {
			afterword += "const " + namePrefix + "_entry_slice = allocator.alloc(u8, " + namePrefix + "_key.len) catch @panic(\"" + lowerClass + "." + zfs.currentMethodName + ": Memory allocation failed\");\n"
			afterword += "@memcpy(" + namePrefix + "_entry_slice, " + namePrefix + "_key.data);\n"
			retKey = namePrefix + "_entry_slice"
		}

		afterword += "const " + namePrefix + "_value = " + namePrefix + "_values[i];\n"
		if isQMulti {
			if vType.ParameterType == "QByteArray" || vType.ParameterType == "QString" {
				afterword += "const " + namePrefix + "_value_strings: [*]qtc.libqt_string = @ptrCast(@alignCast(" + namePrefix + "_value.data));\n"
				afterword += "const " + namePrefix + "_value_slice = allocator.alloc(" + vType.RenderTypeZig(zfs, true, true) + ", " + namePrefix + "_value.len) catch @panic(\"" + lowerClass + "." + zfs.currentMethodName + ": Memory allocation failed\");\n"
				afterword += "for (0.." + namePrefix + "_value.len) |j| {\n"
				afterword += "    const " + namePrefix + "_vslice = allocator.alloc(u8, " + namePrefix + "_value_strings[j].len) catch @panic(\"" + lowerClass + "." + zfs.currentMethodName + ": Memory allocation failed\");\n"
				afterword += "    @memcpy(" + namePrefix + "_vslice, " + namePrefix + "_value_strings[j].data);\n"
				afterword += "    " + namePrefix + "_value_slice[j] = " + namePrefix + "_vslice;\n"
				afterword += "}\n"

			} else if IsKnownClass(vType.ParameterType) {
				valueAllocType := vType.RenderTypeZig(zfs, true, true)
				afterword += "const " + namePrefix + "_value_slice = allocator.alloc(" + valueAllocType + ", " + namePrefix + "_value.len) catch @panic(\"" + lowerClass + "." + zfs.currentMethodName + ": Memory allocation failed\");\n"
				afterword += "const " + namePrefix + "_value_data: [*]" + valueAllocType + " = @ptrCast(@alignCast(" + namePrefix + "_value.data));\n"
				afterword += "@memcpy(" + namePrefix + "_value_slice, " + namePrefix + "_value_data);\n"

			} else {
				panic("UNHANDLED " + strings.ToUpper(containerType) + " VALUE PARAMETER TYPE: " + vType.ParameterType)
			}

			retVal = namePrefix + "_value_slice"
		} else if stringValue {
			afterword += "const " + namePrefix + "_value_slice = allocator.alloc(u8, " + namePrefix + "_value.len) catch @panic(\"" + lowerClass + "." + zfs.currentMethodName + ": Memory allocation failed\");\n"
			afterword += "@memcpy(" + namePrefix + "_value_slice, " + namePrefix + "_value.data);\n"
			retVal = namePrefix + "_value_slice"
		} else if listValue {
			afterword += "const " + namePrefix + "_value_slice = allocator.alloc(" + listType + ", " + namePrefix + "_value.len) catch @panic(\"" + lowerClass + "." + zfs.currentMethodName + ": Memory allocation failed\");\n"
			afterword += "const " + namePrefix + "_value_data: [*]" + listType + " = @ptrCast(@alignCast(" + namePrefix + "_value.data));\n"
			afterword += "@memcpy(" + namePrefix + "_value_slice, " + namePrefix + "_value_data);\n"
			retVal = namePrefix + "_value_slice"
		}

		afterword += namePrefix + "_ret.put(allocator, " + maybeKeyCast + namePrefix + retKey + maybeKeyCastClose + ", " + maybeValCast + namePrefix + retVal + maybeValCastClose + `) catch @panic("` + lowerClass + "." + zfs.currentMethodName + `: Memory allocation failed");` + "\n"

		afterword += "}\n"
		afterword += assignExpr + " " + namePrefix + "_ret;\n"
		return shouldReturn + " " + rvalue + maybeDeref + ";\n" + afterword

	} else if kType, vType, ok := rt.QPairOf(); ok {
		// QPair is a struct containing two inner types
		// e.g. QPair<QString, QString>
		if (kType.IntType() || IsKnownClass(kType.ParameterType)) && (vType.IntType() || IsKnownClass(vType.ParameterType)) {
			shouldReturn = "const " + namePrefix + "_pair ="
			afterword += assignExpr + " @bitCast(" + namePrefix + "_pair);"

		} else {
			shouldReturn = "const " + namePrefix + "_pair: qtc.libqt_pair = "

			kCast := "@ptrCast("
			kClose := ")"
			kTypeZig := kType.RenderTypeZig(zfs, false, false)
			if kType.IntType() {
				kCast = "@as(*" + kTypeZig + ", @ptrCast(@alignCast("
				kClose = "))).*"
			}

			vCast := "@ptrCast("
			vClose := ")"
			vTypeZig := vType.RenderTypeZig(zfs, false, false)
			if vType.IntType() {
				vCast = "@as(*" + vTypeZig + ", @ptrCast(@alignCast("
				vClose = "))).*"
			} else if vType.ParameterType == "void" && vType.Pointer {
				vCast = ""
				vClose = ""
			}

			afterword += assignExpr + " " + rt.RenderTypeZig(zfs, true, true) + " { .first = " + kCast + namePrefix + "_pair.first" + kClose + ", .second = " + vCast + namePrefix + "_pair.second" + vClose + ", };\n"
		}

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

	} else if rt.GlIntType() && rt.Pointer {
		zfs.imports["std"] = struct{}{}

		shouldReturn = "const ret_str: ?[*:0]const u8 = "

		afterword += "if (ret_str == null) {\n"
		afterword += `    return "";`
		afterword += "}\n"
		afterword += assignExpr + "std.mem.span(ret_str.?);"

		return shouldReturn + " " + rvalue + ";\n" + afterword

	} else if rt.IntType() || rt.IsKnownEnum() || rt.IsFlagType() || rt.ParameterType == "bool" || rt.QtCppOriginalType != nil {

		if rt.Pointer || rt.ByRef {
			// ptrCast
			return shouldReturn + "@ptrCast(" + rvalue + ");"
		}

		return assignExpr + rvalue + ";"

	} else if reflect.TypeOf(rt.ParameterType).Kind() == reflect.String {
		// Single type conversion from C ABI State to Zig State type
		return shouldReturn + "@bitCast(" + rvalue + ");"

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

	// These functions are not portable to all platforms
	platformFunctions = map[string]struct{}{
		"QsciScintilla_FindMatchingBrace": {},
		"QTextStream_OperatorShiftRight8": {},
		"QTextStream_OperatorShiftRight9": {},
		"QVersionNumber_FromString2":      {},
	}
)

func emitZig(src *CppParsedHeader, headerName, packageName string) (string, map[string]string, map[string]string, error) {
	if len(src.Classes) == 0 && len(src.Enums) == 0 {
		return "", nil, nil, nil
	}

	ret.Reset()

	srcFilename := filepath.Base(src.Filename)
	zigIncs := map[string]string{}
	zigTypes := map[string]string{}
	dirRoot := ifv(packageName == "src", "", strings.TrimPrefix(packageName, "src/"))

	zfs := zigFileState{
		imports:            map[string]struct{}{},
		currentPackageName: dirRoot,
		currentHeaderName:  strings.TrimSuffix(headerName[3:], ".h"),
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
		zfs.currentClassName = strings.ReplaceAll(c.ClassName, "::", "__")

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

			isSpecialCase := (zfs.currentHeaderName == "qcustomplot" && strings.HasPrefix(zigStructName, "QCP")) ||
				(strings.Contains(src.Filename, "accounts-qt") && zigStructName[0] != 'Q') ||
				(strings.Contains(src.Filename, "signon-qt") && zigStructName[0] != 'Q')

			pageName := ifv(isSpecialCase, zigStructName, getPageName(zigStructName)) + maybeCharts
			zigStruct := strings.ToLower(zigStructName)
			// TODO properly automate deduplication
			eqStructHeader := zigStruct == zfs.currentHeaderName
			maybeDedupe := ifv(zigStruct == "kcrash" && !eqStructHeader, "_"+zfs.currentHeaderName, "")
			maybeDedupe = ifv(zigStruct == "kio" && !eqStructHeader, "_"+zfs.currentHeaderName, maybeDedupe)
			maybeDedupe = ifv(zigStruct == "knscore" && !eqStructHeader, "_"+zfs.currentHeaderName, maybeDedupe)
			maybeDedupe = ifv(zigStruct == "kstandardactions" && !eqStructHeader, "_"+zfs.currentHeaderName, maybeDedupe)
			maybeDedupe = ifv(zigStruct == "kstandardshortcut" && !eqStructHeader, "_"+zfs.currentHeaderName, maybeDedupe)
			maybeDedupe = ifv(zigStruct == "ktexteditor" && !eqStructHeader, "_"+zfs.currentHeaderName, maybeDedupe)
			maybeDedupe = ifv(zigStruct == "ktimezone" && !eqStructHeader, "_"+zfs.currentHeaderName, maybeDedupe)
			zigIncs[zigStruct+maybeDedupe] = "pub const " + zigStruct + maybeDedupe + ` = @import("` + filepath.Join(dirRoot, "lib"+zfs.currentHeaderName) + `.zig").` + zigStruct + ";"
			ret.WriteString(zfs.getPageUrl(QtPage, pageName, "", zigStructName) + "\n" +
				"pub const " + zigStruct + " = struct {")
		}

		for i, ctor := range c.Ctors {
			if _, ok := moveCtorOnly[c.ClassName]; ok && !ctor.IsMoveCtor {
				continue
			}

			zfs.currentMethodName = "New" + maybeSuffix(i)
			preamble, forwarding := zfs.emitParametersZig2CABIForwarding(ctor)

			var maybeAllocatorComment, maybeParamsLine, maybeFinalNewLine string
			allocatorParam := ifv(strings.Contains(preamble, "allocator"), "allocator: std.mem.Allocator", "")

			if len(ctor.Parameters) > 0 || allocatorParam != "" {
				maybeParamsLine = "\n///\n/// ## Parameter(s):"
				maybeFinalNewLine = "\n///"
			} else {
				maybeParamsLine = "\n///"
			}

			if allocatorParam != "" {
				maybeAllocatorComment = "\n///\n/// ` " + allocatorParam + " `"

				if len(ctor.Parameters) > 0 {
					allocatorParam = ", " + allocatorParam
				}
			}

			if ctor.FossOnly {
				zfs.imports["builtin"] = struct{}{}

				ret.WriteString("\n\n/// New" + maybeSuffix(i) + " constructs a new " + c.ClassName + " object." +
					maybeParamsLine + zfs.emitCommentParametersZig(ctor.Parameters, false) + maybeAllocatorComment + maybeFinalNewLine +
					"\n    pub fn New" + maybeSuffix(i) + "(" + zfs.emitParametersZig(ctor.Parameters, false) + allocatorParam + ") QtC." + zigStructName + ` {
        switch (builtin.os.tag) {
            .linux, .freebsd => {
                return qtc.` + zigStructName + "_new" + maybeSuffix(i) + "(" + forwarding + `);
            },
            else => @compileError("Unsupported operating system"),
        }
    }

`)
			} else {
				maybeMoveCtor := ifv(ctor.IsMoveCtor, " object and invalidates the source "+c.ClassName, "")

				preamble = ifv(preamble != "", preamble+"\n", "")

				ret.WriteString("\n/// New" + maybeSuffix(i) + " constructs a new " + c.ClassName + maybeMoveCtor + " object." +
					maybeParamsLine + zfs.emitCommentParametersZig(ctor.Parameters, false) + maybeAllocatorComment + maybeFinalNewLine +
					"\n    pub fn New" + maybeSuffix(i) + "(" + zfs.emitParametersZig(ctor.Parameters, false) + allocatorParam + ") QtC." + zigStructName + " {\n" +
					preamble + "        return qtc." + zigStructName + "_new" + maybeSuffix(i) + "(" + forwarding + ");\n}\n\n")
			}
		}

		if c.HasTrivialCopyAssign {
			ret.WriteString("/// CopyAssign shallow copies `other` into `self`.\n///\n" +
				"/// ## Parameters:\n///\n/// ` self: QtC." + zigStructName + " `\n///\n/// ` other: QtC." + zigStructName + " `\n///\n" +
				"pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {\n" +
				"qtc." + zigStructName + "_CopyAssign(@ptrCast(self), @ptrCast(other));\n}\n\n")
		}

		if c.HasTrivialMoveAssign {
			ret.WriteString("/// MoveAssign moves `other` into `self` and invalidates `other`.\n///\n" +
				"/// ## Parameters:\n///\n/// ` self: QtC." + zigStructName + " `\n///\n/// ` other: QtC." + zigStructName + " `\n///\n" +
				"pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {\n" +
				"qtc." + zigStructName + "_MoveAssign(@ptrCast(self), @ptrCast(other));\n}\n\n")
		}

		seenMethods := make(map[string]struct{})
		baseMethods := c.Methods
		protectedMethods := c.ProtectedMethods()
		virtualEligible := AllowVirtualForClass(c.ClassName) && len(virtualMethods) > 0

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
				continue
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

			if _, ok := previousMethods[m.MethodName]; ok {
				continue
			}
			if _, ok := previousMethods[mSafeMethodName]; ok {
				continue
			}
			overrideTr := (m.MethodName == "tr" || m.OverrideMethodName == "tr") && zigStructName != "QMetaObject"
			cmdStructName := ifv(overrideTr, "QObject", zigStructName)
			var inheritedFrom string
			if m.InheritedFrom != "" {
				inheritedFrom = "\n/// Inherited from " + m.InheritedFrom + "\n///"
				if !overrideTr {
					cmdStructName = cabiClassName(m.InheritedFrom)
				}
			}

			if m.InheritedInClass != "" {
				inheritedFrom = "\n/// Inherited from " + m.InheritedInClass + "\n///"
			}

			maybePlatformCompileError := ""
			if _, ok := platformFunctions[cmdStructName+"_"+mSafeMethodName]; ok && !m.FossOnly {
				zfs.imports["builtin"] = struct{}{}
				maybePlatformCompileError = "switch (builtin.os.tag) {\n" +
					"    .linux, .freebsd => {},\n" +
					`    else => @compileError("Unsupported operating system"),` +
					"\n}\n"
			}

			ret.WriteString(inheritedFrom)

			var docCommentUrl string
			maybeNewLine := "\n"

			className := ifv(m.InheritedInClass == "", cmdStructName, cabiClassName(m.InheritedInClass))

			isSpecialCase := (zfs.currentHeaderName == "qcustomplot" && strings.HasPrefix(className, "QCP")) ||
				(strings.Contains(src.Filename, "accounts-qt") && className[0] != 'Q') ||
				(strings.Contains(src.Filename, "signon-qt") && className[0] != 'Q')

			subjectURL := ifv(isSpecialCase, className, strings.ToLower(className))
			cmdURL := m.MethodName
			if m.OverrideMethodName != "" {
				cmdURL = m.OverrideMethodName
			}
			if newURL, ok := qtMethodUrlOverrides[cmdURL]; ok && zigStructName != "QMetaObject" {
				subjectURL = newURL
			}
			if m.IsVariable {
				cmdURL = m.VariableFieldName + "-var"
			}
			if subjectURL != "" {
				maybeCharts := ifv(strings.Contains(src.Filename, "QtCharts") && inheritedFrom == "" && subjectURL != "qobject", "-qtcharts", "")
				pageURL := zfs.getPageUrl(QtPage, subjectURL+maybeCharts, cmdURL, className)
				docCommentUrl = pageURL
				ret.WriteString(docCommentUrl + "\n")
				maybeNewLine = "///\n"
			}

			previousMethods[m.MethodName] = struct{}{}
			previousMethods[mSafeMethodName] = struct{}{}

			preamble, forwarding := zfs.emitParametersZig2CABIForwarding(m)
			returnTypeDecl, maybeReturnWarning, maybeReturnString := m.ReturnType.renderReturnTypeZig(&zfs, false)
			rvalue := "qtc." + cmdStructName + "_" + cSafeMethodName + "(" + forwarding + ")"
			returnFunc := zfs.emitCabiToZig("return ", m.ReturnType, rvalue)

			var maybeAllocatorComment, maybeParamsLine string
			allocatorParam := ifv(strings.Contains(returnFunc, "allocator") || strings.Contains(preamble, "allocator"), "allocator: std.mem.Allocator", "")
			allocComma := ifv(allocatorParam != "", ", ", "")
			maybeComma := ifv(len(m.Parameters) > 0, ", ", "")
			selfParam := "\n///\n/// ` self: QtC." + zigStructName + " `"

			if allocatorParam != "" {
				maybeAllocatorComment = "\n///\n/// ` " + allocatorParam + " `"
			}

			fnMethod := mSafeMethodName + "(self: ?*anyopaque" + maybeComma
			if m.IsStatic && !m.IsProtected {
				selfParam = ""
				fnMethod = mSafeMethodName + "("
				if len(m.Parameters) == 0 {
					allocComma = ""
				}
			}

			returnComment := zfs.emitReturnComment(m.ReturnType)

			if selfParam != "" || len(m.Parameters) > 0 || allocatorParam != "" {
				maybeParamsLine = "/// ## Parameter(s):"
			} else {
				maybeNewLine = ifv(returnComment == "", "///", "")
			}

			maybeFinalNewLine := ifv(maybeParamsLine != "" || returnComment != "", "\n///", "")

			ret.WriteString(maybeNewLine + maybeReturnWarning + maybeParamsLine + selfParam +
				zfs.emitCommentParametersZig(m.Parameters, false) +
				maybeAllocatorComment + returnComment + maybeFinalNewLine + maybeReturnString +
				"\n    pub fn " + fnMethod + zfs.emitParametersZig(m.Parameters, false) + allocComma + allocatorParam + ") " + returnTypeDecl + " {" + maybePlatformCompileError)

			if m.FossOnly {
				zfs.imports["builtin"] = struct{}{}
				ret.WriteString(`
    if (builtin.os.tag != .linux and builtin.os.tag != .freebsd) {
        @compileError("Unsupported operating system");
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
				if slices.Contains(unmatchedQtConnect, cmdStructName+"_"+mSafeMethodName) {
					addConnect = false
				}

				maybeComma = ifv(len(m.Parameters) != 0, ", ", "")

				if addConnect {
					ret.WriteString(inheritedFrom + docCommentUrl + "\n///\n/// ## Parameters:\n///\n/// ` self: QtC." + zigStructName + " `\n///\n/// ` callback: *const fn (self: QtC." +
						zigStructName + maybeComma + zfs.emitCommentParametersZig(m.Parameters, true) + ") callconv(.c) void `\n///\n" +
						"    pub fn On" + mSafeMethodName + "(self: ?*anyopaque, callback: *const fn (?*anyopaque" +
						maybeComma + zfs.emitParametersZig(m.Parameters, true) + ") callconv(.c) void) void {\n" +
						"qtc." + cmdStructName + "_Connect_" + cSafeMethodName + "(@ptrCast(self), @bitCast(@intFromPtr(callback)));\n}\n")
				}
			}

			if m.IsFinal {
				continue
			}

			// We need to brute force these for now
			if _, ok := skipFunction[cmdStructName+"_"+mSafeMethodName]; ok {
				continue
			}

			if !AllowVirtual(m) {
				continue
			}

			if (m.IsVirtual || m.IsProtected) && len(virtualMethods) > 0 && virtualEligible {
				var maybeAnyopaque, maybeComma, maybeCommentSelf string
				if len(m.Parameters) != 0 || (showHiddenParams && len(m.HiddenParams) != 0) {
					maybeAnyopaque = "?*anyopaque"
					maybeCommentSelf = "self: QtC." + zigStructName
				}
				if len(m.Parameters) > 0 {
					maybeComma = ", "
				}
				if showHiddenParams && (len(m.Parameters) > 0 || len(m.HiddenParams) > 0) {
					maybeComma = ", "
				}

				retType, maybeReturnWarning, maybeReturnString := m.ReturnType.renderReturnTypeZig(&zfs, true)
				paramsZig := zfs.emitParametersZig(m.Parameters, true)

				maybeNewLine = ifv(docCommentUrl == "", maybeNewLine, "\n///\n")
				onDocComment := maybeNewLine + "/// Allows for overriding the related default method\n///" + maybeReturnWarning + "\n/// ## Parameters:"

				ret.WriteString(inheritedFrom + docCommentUrl + onDocComment + "\n///\n/// ` self: QtC." + zigStructName +
					" `\n///\n/// ` callback: *const fn (" + maybeCommentSelf + maybeComma + zfs.emitCommentParametersZig(m.Parameters, true) +
					") callconv(.c) " + retType + " `\n///\n" + maybeReturnString +
					"    pub fn On" + mSafeMethodName + "(self: ?*anyopaque, callback: *const fn (" + maybeAnyopaque + maybeComma +
					paramsZig + ") callconv(.c) " + retType + ") void {\n" +
					"qtc." + cmdStructName + "_On" + cSafeMethodName + "(@ptrCast(self), @bitCast(@intFromPtr(callback)));\n}\n")

				maybeSelf := ifv(m.IsStatic && !m.IsProtected, "", "self: ?*anyopaque")
				qbaseDocComment := maybeNewLine + "/// Base class method implementation\n///\n" + maybeParamsLine
				baseCallTarget := "qtc." + cmdStructName + "_QBase" + cSafeMethodName + "(" + forwarding + ")"
				basereturnFunc := zfs.emitCabiToZig("return ", m.ReturnType, baseCallTarget)

				ret.WriteString(inheritedFrom + docCommentUrl + qbaseDocComment + selfParam +
					zfs.emitCommentParametersZig(m.Parameters, false) +
					maybeAllocatorComment + returnComment + maybeFinalNewLine +
					"\n    pub fn " + "QBase" + mSafeMethodName + "(" + maybeSelf + maybeComma +
					zfs.emitParametersZig(m.Parameters, false) + allocComma + allocatorParam + ") " + returnTypeDecl + " {")

				if m.FossOnly {
					zfs.imports["builtin"] = struct{}{}
					ret.WriteString(`
			if (builtin.os.tag != .linux and builtin.os.tag != .freebsd) {
				@compileError("Unsupported operating system");
			}
		`)
				}

				ret.WriteString("\n" + preamble + basereturnFunc + "\n}\n")
			}
		}

		seenVirtuals := map[string]bool{}

		for _, m := range virtualMethods {
			if !virtualEligible {
				continue
			}

			mSafeMethodName := m.SafeMethodName()

			if _, ok := skippedMethods[c.ClassName+"_"+mSafeMethodName]; ok {
				continue
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

			// Include inheritance information if we have it
			var inheritedFrom, maybeAllocatorComment, maybeCommentStruct, maybeAnyopaque, maybeCommentSelf string
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

			isSpecialCase := (zfs.currentHeaderName == "qcustomplot" && strings.HasPrefix(className, "QCP")) ||
				(strings.Contains(src.Filename, "accounts-qt") && className[0] != 'Q') ||
				(strings.Contains(src.Filename, "signon-qt") && className[0] != 'Q')

			subjectURL := ifv(isSpecialCase, className, strings.ToLower(className))
			cmdURL := m.MethodName
			if m.OverrideMethodName != "" {
				cmdURL = m.OverrideMethodName
			}
			if m.IsVariable {
				cmdURL = m.VariableFieldName + "-var"
			}
			maybeCharts := ifv(strings.Contains(src.Filename, "QtCharts") && inheritedFrom == "", "-qtcharts", "")
			pageURL := zfs.getPageUrl(QtPage, subjectURL+maybeCharts, cmdURL, className)
			documentationURL := pageURL + "\n///\n"

			// Add a package-private function to call the C++ base class method
			// QWidget_PaintEvent
			preamble, forwarding := zfs.emitParametersZig2CABIForwarding(m)
			forwarding = strings.TrimPrefix(forwarding, "self")
			returnTypeDecl, maybeReturnWarning, _ := m.ReturnType.renderReturnTypeZig(&zfs, false)
			zfsParams := zfs.emitParametersZig(m.Parameters, showHiddenParams)
			returnFunc := zfs.emitCabiToZig("return ", m.ReturnType, "qtc."+cmdStructName+"_"+cSafeMethodName+"("+forwarding+")")
			allocatorParam := ifv(strings.Contains(returnFunc, "allocator") || strings.Contains(preamble, "allocator"), "allocator: std.mem.Allocator", "")
			returnComment := zfs.emitReturnComment(m.ReturnType)

			if allocatorParam != "" {
				maybeAllocatorComment = "\n///\n/// ` " + allocatorParam + " `"
				allocatorParam = ", " + allocatorParam
			}

			headerComment := " /// Wrapper to allow calling virtual or protected method\n ///" + maybeReturnWarning + "\n/// ## Parameter(s):\n///"

			ret.WriteString(inheritedFrom + documentationURL + headerComment + "\n /// ` self: QtC." + zigStructName + " `" +
				zfs.emitCommentParametersZig(m.Parameters, false) + maybeAllocatorComment + returnComment + "\n///" +
				"\n    pub fn " + mSafeMethodName + "(self: ?*anyopaque" + commaParams + zfsParams + allocatorParam + ") " + returnTypeDecl + " {\n" +
				preamble + returnFunc + "\n}\n")

			if !AllowVirtual(m) || m.IsFinal {
				continue
			}

			retType, maybeCallbackReturnWarning, maybeCallbackReturnString := m.ReturnType.renderReturnTypeZig(&zfs, true)
			paramsZig := zfs.emitParametersZig(m.Parameters, true)

			headerComment = "/// Wrapper to allow calling base class virtual or protected method\n///" + maybeReturnWarning + "\n/// ## Parameter(s):\n///"

			maybeSelf := ifv(m.IsStatic && !m.IsProtected, "", "self: ?*anyopaque")
			returnFunc = zfs.emitCabiToZig("return ", m.ReturnType, "qtc."+cmdStructName+"_QBase"+cSafeMethodName+"("+forwarding+")")

			ret.WriteString(inheritedFrom + documentationURL + headerComment + "\n/// ` self: QtC." + zigStructName + " `" +
				zfs.emitCommentParametersZig(m.Parameters, false) + maybeAllocatorComment + returnComment + "\n///" +
				"\n    pub fn QBase" + mSafeMethodName + "(" + maybeSelf + commaParams + zfsParams + allocatorParam + ") " + returnTypeDecl + " {\n" +
				preamble + returnFunc + "\n}\n")

			if len(m.Parameters) > 0 {
				commaParams = ", "
			}
			if showHiddenParams && (len(m.Parameters) > 0 || len(m.HiddenParams) > 0) {
				commaParams = ", "
			}
			if len(m.Parameters) != 0 || (showHiddenParams && len(m.HiddenParams) != 0) {
				maybeCommentStruct = "QtC." + zigStructName + commaParams
				maybeAnyopaque = "?*anyopaque"
				maybeCommentSelf = "self: "
			}

			headerComment = "/// Wrapper to allow overriding base class virtual or protected method\n///" + maybeCallbackReturnWarning

			ret.WriteString(inheritedFrom + documentationURL + headerComment + "\n/// ## Parameters:\n///\n/// ` self: QtC." + zigStructName +
				"`\n///\n/// ` callback: *const fn (" + maybeCommentSelf + maybeCommentStruct + zfs.emitCommentParametersZig(m.Parameters, true) +
				") callconv(.c) " + retType + " `\n///\n" + maybeCallbackReturnString +
				"    pub fn On" + mSafeMethodName + "(self: ?*anyopaque, callback: *const fn (" + maybeAnyopaque + commaParams +
				paramsZig + ") callconv(.c) " +
				retType + ") void {\n" +
				"qtc." + cmdStructName + "_On" + cSafeMethodName + "(@ptrCast(self), @bitCast(@intFromPtr(callback)));\n}\n")
		}

		for _, m := range privateSignals {
			mSafeMethodName := m.SafeMethodName()
			cSafeMethodName := mSafeMethodName

			zfs.currentMethodName = mSafeMethodName

			cmdStructName := zigStructName
			var inheritedFrom string
			if m.InheritedFrom != "" {
				inheritedFrom = "\n/// Inherited from " + m.InheritedFrom + "\n///"
				cmdStructName = cabiClassName(m.InheritedFrom)
			}

			if m.InheritedInClass != "" {
				inheritedFrom = "\n/// Inherited from " + m.InheritedInClass + "\n///"
			}

			var docCommentUrl string
			className := ifv(m.InheritedInClass == "", cmdStructName, cabiClassName(m.InheritedInClass))

			isSpecialCase := (zfs.currentHeaderName == "qcustomplot" && strings.HasPrefix(className, "QCP")) ||
				(strings.Contains(src.Filename, "accounts-qt") && className[0] != 'Q') ||
				(strings.Contains(src.Filename, "signon-qt") && className[0] != 'Q')

			subjectURL := ifv(isSpecialCase, className, strings.ToLower(className))
			cmdURL := m.MethodName
			if m.OverrideMethodName != "" {
				cmdURL = m.OverrideMethodName
			}
			if newURL, ok := qtMethodUrlOverrides[cmdURL]; ok {
				subjectURL = newURL
			}
			if m.IsVariable {
				cmdURL = m.VariableFieldName + "-var"
			}
			if subjectURL != "" {
				maybeCharts := ifv(strings.Contains(src.Filename, "QtCharts") && inheritedFrom == "" && subjectURL != "qobject", "-qtcharts", "")
				pageURL := zfs.getPageUrl(QtPage, subjectURL+maybeCharts, cmdURL, className)
				docCommentUrl = pageURL + "\n///\n"
			}

			headerComment := "/// Wrapper to allow calling private signal\n///\n/// ## Parameters:\n///\n"
			maybeComma := ifv(len(m.Parameters) != 0, ", ", "")

			ret.WriteString(inheritedFrom + docCommentUrl + headerComment + "/// ` self: QtC." + zigStructName + " `\n///\n/// ` callback: *const fn (self: QtC." +
				zigStructName + maybeComma + zfs.emitCommentParametersZig(m.Parameters, true) + ") callconv(.c) void `\n///\n" +
				"    pub fn On" + mSafeMethodName + "(self: ?*anyopaque, callback: *const fn (?*anyopaque" +
				maybeComma + zfs.emitParametersZig(m.Parameters, true) + ") callconv(.c) void) void {\n" +
				"qtc." + cmdStructName + "_Connect_" + cSafeMethodName + "(@ptrCast(self), @bitCast(@intFromPtr(callback)));\n}\n")
		}

		if c.CanDelete && (len(c.Methods) > 0 || len(c.VirtualMethods()) > 0 || len(c.Ctors) > 0) {
			maybeCharts := ifv(strings.Contains(src.Filename, "QtCharts"), "-qtcharts", "")

			isSpecialCase := (zfs.currentHeaderName == "qcustomplot" && strings.HasPrefix(zigStructName, "QCP")) ||
				(strings.Contains(src.Filename, "accounts-qt") && zigStructName[0] != 'Q') ||
				(strings.Contains(src.Filename, "signon-qt") && zigStructName[0] != 'Q')

			pageUrl := zfs.getPageUrl(DtorPage, ifv(isSpecialCase, zigStructName, getPageName(zigStructName))+maybeCharts, "", zigStructName)
			ret.WriteString(ifv(pageUrl != "", pageUrl+"\n///\n", "\n") +
				"/// Delete this object from C++ memory.\n///\n" +
				"/// ## Parameter:\n///\n" +
				"/// ` self: QtC." + zigStructName + " `\n///\n" +
				"    pub fn QDelete(self: ?*anyopaque) void {\n" +
				"qtc." + zigStructName + "_Delete(@ptrCast(self));\n}")
		}
		if footerNeeded {
			ret.WriteString("\n};\n")
		}
	}

	var closeEnums string
	if len(src.Enums) > 0 {
		zigIncs[zfs.currentHeaderName+"_enums"] = "pub const " + zfs.currentHeaderName + `_enums = @import("` + filepath.Join(dirRoot, "lib"+zfs.currentHeaderName) + `.zig").enums;`
		maybeCharts := ifv(strings.Contains(src.Filename, "QtCharts"), "-qtcharts", "")
		pageName := getPageName(zfs.currentHeaderName) + maybeCharts
		pageUrl := zfs.getPageUrl(EnumPage, pageName, "", zfs.currentHeaderName)
		ret.WriteString(pageUrl + "\npub const enums = struct {\n")
		closeEnums = "};\n"
	}

	seenEnums := make([]string, 0, len(src.Enums))
	for _, e := range src.Enums {
		if e.EnumName == "" {
			continue // Removed by transformRedundant AST pass
		}

		zigEnumName := cabiEnumName(e.EnumName) // Short name of the enum itself

		// Use the fully qualified name if the class *is* the enum name
		// or there are collisions
		if zigEnumName == "" || srcFilename == "qoperatingsystemversion.h" || srcFilename == "qstyleoption.h" {
			zigEnumName = cabiClassName(e.EnumName)
		}
		zigEnumName = strings.TrimSuffix(zigEnumName, "__")

		if slices.Contains(seenEnums, zigEnumName) {
			continue
		}
		seenEnums = append(seenEnums, zigEnumName)

		enumType := e.UnderlyingType.RenderTypeZig(&zfs, false, false)

		ret.WriteString("pub const " + zigEnumName + " = enum(" + enumType + ") {\n")

		for _, ee := range e.Entries {
			entry := ee.EntryValue
			if num, err := strconv.Atoi(ee.EntryValue); err == nil {
				if float64(num) > math.MaxInt32 || float64(num) < math.MinInt32 {
					// if needed, store wraparound value as opposed to overflow
					if enumType[0] != 'u' {
						entry = strconv.Itoa(int(int32(num)))
					}
				}
			}

			ret.WriteString("pub const " + titleCase(cabiClassName(ee.EntryName)) + ": " + enumType + " = " + entry + ";\n")
		}

		ret.WriteString("};\n\n")
	}

	ret.WriteString(closeEnums)

	zigSrc := ret.String()

	// Fixup imports and struct definitions
	if len(zfs.imports) > 0 {
		allImports := make([]string, 0, len(zfs.imports))
		structDef := make([]string, 0, len(zfs.imports))
		seenEnumClasses := make([]string, 0, len(zfs.imports))

		for k := range zfs.imports {
			switch k {
			case "std":
				allImports = append(allImports, `const std = @import("std");`)
			case "builtin":
				allImports = append(allImports, `const builtin = @import("builtin");`)
			default:
				if strings.Contains(k, ",") && strings.Count(k, ",") >= 2 {
					kSplit := strings.Split(k, ",")
					mapType := kSplit[0]
					keyType := kSplit[1]
					valueType := kSplit[2]

					switch mapType {
					case "StringArrayHashMap", "StringHashMap":
						maybeArray := ifv(mapType == "StringArrayHashMap", "array", "")
						key := maybeArray + "map_" + keyType + "_" + mapParamToString(valueType)
						value := "std." + mapType + "Unmanaged(" + valueType + ")"
						structDef = append(structDef, "const "+key+" = "+value+";")
						zigTypes[key] = strings.ReplaceAll(value, "QtC.", "C.")
					case "AutoArrayHashMap", "AutoHashMap":
						autoKeyType := keyType
						keyType = mapParamToString(strings.ToLower(keyType))
						maybeArray := ifv(mapType == "AutoArrayHashMap", "array", "")
						key := maybeArray + "map_" + keyType + "_" + mapParamToString(valueType)
						value := "std." + mapType + "Unmanaged(" + autoKeyType + ", " + valueType + ")"
						structDef = append(structDef, "const "+key+" = "+value+";")
						zigTypes[key] = strings.ReplaceAll(value, "QtC.", "C.")
					}

				} else if strings.HasPrefix(k, "struct_") {
					kSplit := strings.Split(k, "_")
					keyType := kSplit[1]
					valueType := kSplit[2]
					if mapParamToString(keyType) != "anyopaque" {
						maybeExtern := ifv(keyType == "[]u8" || keyType == "[]const u8" || valueType == "[]u8" || valueType == "[]const u8", "", "extern ")
						typeName := "struct_" + mapParamToString(keyType) + "_" + mapParamToString(valueType)
						typeDef := maybeExtern + "struct { first: " + keyType + ", second: " + valueType + " }"
						structDef = append(structDef, "const "+typeName+" = "+typeDef+";")
						zigTypes[typeName] = strings.ReplaceAll(typeDef, "QtC.", "C.")
					}

				} else if strings.HasSuffix(k, "_enums") {
					var enumPrefix string
					if strings.Contains(k, "/") {
						enumPrefix = filepath.Dir(k) + "/"
						k = filepath.Base(k)
					}
					enumClass := strings.Split(k, "_enums")[0]

					if slices.Contains(seenEnumClasses, enumClass) {
						continue
					}
					seenEnumClasses = append(seenEnumClasses, enumClass)

					// TODO Remove this suffix hack once we have a better way to automate it
					if enumClass == zfs.currentHeaderName || enumClass == strings.TrimSuffix(zfs.currentHeaderName, "_1") {
						allImports = append(allImports, "const "+enumClass+"_enums = enums;")
					} else {
						enumFileName := ifv(enumClass == "transaction" && strings.Contains(src.Filename, "PackageKit"), enumClass+"_1", enumClass)
						allImports = append(allImports, "const "+enumClass+`_enums = @import("`+enumPrefix+"lib"+enumFileName+`.zig").enums;`)
					}

				} else if strings.HasPrefix(k, "set_") {
					kSplit := strings.Split(k, "_")
					keyType := kSplit[1]
					mapString := mapParamToString(keyType)
					setName := "set_" + mapString
					if mapString == "i32" {
						setDef := "std.AutoHashMapUnmanaged(i32, void)"
						structDef = append(structDef, "const "+setName+" = "+setDef+";")
						zigTypes[setName] = setDef
					} else if strings.HasPrefix(mapString, "qtc") {
						setDef := "std.AutoHashMapUnmanaged(" + keyType + ", void)"
						structDef = append(structDef, "const "+setName+" = "+setDef+";")
						setDef = "std.AutoHashMapUnmanaged(" + keyType[2:] + ", void)"
						zigTypes[setName] = setDef
					} else if strings.HasSuffix(mapString, "u8") {
						setDef := "std.StringHashMapUnmanaged(void)"
						structDef = append(structDef, "const "+setName+" = "+setDef+";")
						zigTypes[setName] = setDef
					} else {
						panic("UNHANDLED SET TYPE: " + keyType)
					}
				}
			}
		}

		sort.Strings(allImports)
		sort.Strings(structDef)
		zigSrc = strings.Replace(zigSrc, "%%_IMPORTLIBS_%%", "\n"+strings.Join(allImports, "\n"), 1)
		zigSrc = strings.ReplaceAll(zigSrc, "%%_STRUCTDEFS_%%", "\n"+strings.Join(structDef, "\n")+"\n")
	} else {
		zigSrc = strings.Replace(zigSrc, "%%_IMPORTLIBS_%%", "", 1)
		zigSrc = strings.ReplaceAll(zigSrc, "%%_STRUCTDEFS_%%", "")
	}

	return string(zigSrc), zigIncs, zigTypes, nil
}
