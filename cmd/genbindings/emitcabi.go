package main

import (
	"fmt"
	"sort"
	"strings"
)

// cppComment renders a string safely in a C++ block comment.
// It strips interior nested comments.
func cppComment(s string) string {
	// Remove nested comments
	uncomment := strings.NewReplacer("/*", "", "*/", "")
	return "/* " + uncomment.Replace(s) + " */"
}

func (p CppParameter) cParameterName() string {
	paramName := p.ParameterName
	if zigReservedWord(paramName) {
		paramName += "_val"
	}

	return paramName
}

func (p CppParameter) RenderTypeCabi() string {
	if p.ParameterType == "QString" || p.ParameterType == "QByteArray" {
		return "libqt_string"

	} else if p.ParameterType == "QAnyStringView" {
		return "char*"

	} else if p.ParameterType == "QStringList" {
		return "libqt_list /* of libqt_string */"

	} else if inner, ok := p.QListOf(); ok {
		return "libqt_list " + cppComment("of "+inner.RenderTypeCabi())

	} else if inner, ok := p.QSetOf(); ok {
		return "libqt_list " + cppComment("set of "+inner.RenderTypeCabi())

	} else if inner1, inner2, ok := p.QMapOf(); ok {
		return "libqt_map " + cppComment("of "+inner1.RenderTypeCabi()+" to "+inner2.RenderTypeCabi())

	} else if inner1, inner2, ok := p.QPairOf(); ok {
		return "libqt_pair " + cppComment("tuple of "+inner1.RenderTypeCabi()+" and "+inner2.RenderTypeCabi())

	} else if (p.Pointer || p.ByRef) && p.QtClassType() {
		if p.PointerCount > 1 {
			return cabiClassName(p.ParameterType) + strings.Repeat("*", p.PointerCount)
		}
		return cabiClassName(p.ParameterType) + "*"

	} else if p.QtClassType() && !p.Pointer {
		// Even if C++ returns by value, CABI is returning a heap copy (new'd, not malloc'd)
		return cabiClassName(p.ParameterType) + "*"
	}

	ret := p.ParameterType

	// Handle QFlags types
	if qflag, ok := p.QFlagsOf(); ok {
		flagType := "QFlags<" + qflag.UnderlyingEnum.ParameterType + ">"
		if flagType == p.ParameterType {
			return qflag.CABIType
		}
	} else if e, ok := KnownEnums[p.ParameterType]; ok {
		ret = e.Enum.UnderlyingType.RenderTypeCabi()
	}

	switch p.ParameterType {
	case "uchar":
		ret = "unsigned char"
	case "uint":
		ret = "unsigned int"
	case "ulong":
		ret = "unsigned long"
	case "qint8":
		ret = "int8_t"
	case "quint8":
		ret = "uint8_t"
	case "qint16", "short":
		ret = "int16_t"
	case "quint16", "ushort", "unsigned short":
		ret = "uint16_t"
	case "qint32":
		ret = "int32_t"
	case "quint32":
		ret = "uint32_t"
	case "qlonglong", "qint64":
		ret = "int64_t"
	case "qulonglong", "quint64":
		ret = "uint64_t"
	case "qfloat16":
		ret = "_Float16" // No idea where this typedef comes from, but it exists
	case "qreal":
		ret = "double"
	case "qintptr", "QIntegerForSizeof<void *>::Signed": // long long int
		ret = "intptr_t" // long int
	case "quintptr", "uintptr", "QIntegerForSizeof<void *>::Unsigned":
		ret = "uintptr_t"
	case "qsizetype", "qptrdiff", "QIntegerForSizeof<std::size_t>::Signed":
		ret = "ptrdiff_t"
	}

	if p.Const {
		// This is needed for const-correctness for calling some overloads
		// e.g. QShortcut ctor taking (QWidget* parent, const char* member) signal -
		// the signal/slot requires that member is const, not just plain char*
		ret = "const " + ret
	}

	if ft, ok := p.QFlagsOf(); ok {
		if e, ok := KnownEnums[ft.UnderlyingEnum.ParameterType]; ok {
			ret = e.Enum.UnderlyingType.RenderTypeCabi()
		} else {
			ret = "int"
		}

	} else if e, ok := KnownEnums[p.ParameterType]; ok {
		ret = e.Enum.UnderlyingType.RenderTypeCabi()

	}

	if p.Pointer {
		ret += strings.Repeat("*", p.PointerCount)
	} else if p.ByRef {
		ret += "*"
	}

	return ret
}

// RenderTypeQtCpp renders the Qt C++ type in the original form from the function
// definition, before any typedefs or transformations were applied.
func (p CppParameter) RenderTypeQtCpp() string {
	return p.GetQtCppType().RenderTypeIntermediateCpp()
}

// RenderTypeIntermediateCpp renders the Qt C++ type WITHOUT resolving the
// interior QtCppOriginalType. This is used for intermediate const_cast<>s.
func (p CppParameter) RenderTypeIntermediateCpp() string {
	cppType := p.ParameterType

	if p.Const {
		cppType = "const " + cppType
	}
	if p.Pointer {
		cppType += strings.Repeat("*", p.PointerCount)
	}
	if p.ByRef {
		cppType += "&"
	}

	return cppType
}

// emitParametersCpp emits the parameter definitions exactly how Qt C++ defines them.
func emitParametersCpp(m CppMethod, includeHidden bool) string {
	tmp := make([]string, 0, len(m.Parameters))
	for _, p := range m.Parameters {
		tmp = append(tmp, ifv(p.Const && p.QtClassType(), "const ", "")+p.RenderTypeQtCpp()+" "+p.ParameterName)
	}

	if includeHidden {
		for _, p := range m.HiddenParams {
			tmp = append(tmp, ifv(p.Const && p.QtClassType(), "const ", "")+p.RenderTypeQtCpp()+" "+p.ParameterName)
		}
	}

	return strings.ReplaceAll(strings.Join(tmp, `, `), "const const ", "const ")
}

func emitParameterNames(m CppMethod, includeHidden bool) string {
	tmp := make([]string, 0, len(m.Parameters))
	for _, p := range m.Parameters {
		tmp = append(tmp, p.ParameterName)
	}

	if includeHidden {
		for _, p := range m.HiddenParams {
			tmp = append(tmp, p.ParameterName)
		}
	}

	return strings.Join(tmp, `, `)
}

func emitCABIParameterTypesCpp(m CppMethod, includeHidden bool, currentClass string) string {
	tmp := make([]string, 0, len(m.Parameters))

	for _, p := range m.Parameters {
		paramType := p.RenderTypeQtCpp()
		if p.IsKnownEnum() {
			if enum, ok := KnownEnums[p.ParameterType]; ok && enum.Enum.IsProtected {
				// Workaround protected enum types by hard-coding them as int
				paramType = "int"
			}
		}
		tmp = append(tmp, paramType)
	}
	if includeHidden {
		for _, p := range m.HiddenParams {
			maybeConst := ifv(p.Const, "const ", "")
			tmp = append(tmp, maybeConst+p.RenderTypeQtCpp())
		}
	}

	return strings.Join(tmp, `, `)
}

func emitParametersCabi(m CppMethod, selfType string) string {
	tmp := make([]string, 0, len(m.Parameters)+1)

	if !m.IsStatic && selfType != "" {
		tmp = append(tmp, selfType+" self")
	}

	for _, p := range m.Parameters {
		pType := p.RenderTypeCabi()
		maybeConst := ifv(p.Const && !strings.HasPrefix(pType, "const "), "const ", "")
		tmp = append(tmp, maybeConst+pType+" "+p.ParameterName)
	}

	return strings.Join(tmp, ", ")
}

func emitParameterTypesCabi(m CppMethod, selfType string) string {
	tmp := make([]string, 0, len(m.Parameters)+1)

	if !m.IsStatic && selfType != "" {
		tmp = append(tmp, selfType)
	}

	for _, p := range m.Parameters {
		tmp = append(tmp, p.RenderTypeCabi())
	}

	return strings.Join(tmp, ", ")
}

func emitParametersCABI2CppForwarding(params []CppParameter, indent, currentVirtualClass string) (preamble, forwarding string) {
	tmp := make([]string, 0, len(params)+1)

	for _, p := range params {
		addPre, addFwd := emitCABI2CppForwarding(p, indent, currentVirtualClass)
		preamble += addPre
		tmp = append(tmp, addFwd)
	}

	return preamble, strings.Join(tmp, ", ")
}

func makeNamePrefix(in string) string {
	replacer := strings.NewReplacer(`[`, `_`, `]`, "", `.`, `_`)
	return replacer.Replace(in)
}

func emitCABI2CppForwarding(p CppParameter, indent, currentClass string) (preamble, forwarding string) {
	nameprefix := makeNamePrefix(p.ParameterName)

	if p.ParameterType == "QString" {
		// The CABI received parameter is a libqt_string, passed by C++ needs
		// it as a QString. Create one on the stack for automatic cleanup
		// The caller will free the libqt_string
		preamble += indent + "QString " + nameprefix + "_QString = QString::fromUtf8(" + p.ParameterName + ".data, " + p.ParameterName + ".len);\n"
		return preamble, nameprefix + "_QString"

	} else if p.ParameterType == "QByteArray" {
		// The caller will free the libqt_string data
		// This ctor makes a deep copy, on the stack which will be dtor'd by RAII
		preamble += indent + p.ParameterType + " " + nameprefix + "_" + p.ParameterType + "(" + p.ParameterName + ".data, " + p.ParameterName + ".len);\n"
		return preamble, nameprefix + "_" + p.ParameterType

	} else if p.ParameterType == "QAnyStringView" {
		return preamble, p.ParameterType + "(" + nameprefix + ")"

	} else if listType, ok := p.QListOf(); ok {

		preamble += indent + p.GetQtCppType().ParameterType + " " + nameprefix + "_QList;\n"
		preamble += indent + nameprefix + "_QList.reserve(" + p.ParameterName + ".len);\n"

		preamble += indent + listType.RenderTypeCabi() + "* " + nameprefix + "_arr = static_cast<" + listType.RenderTypeCabi() + "*>(" + p.ParameterName + ".data);\n"
		preamble += indent + "for(size_t i = 0; i < " + p.ParameterName + ".len; ++i) {\n"

		listType.ParameterName = nameprefix + "_arr[i]"
		addPre, addFwd := emitCABI2CppForwarding(listType, indent+"\t", currentClass)
		preamble += addPre
		preamble += indent + "\t" + nameprefix + "_QList.push_back(" + addFwd + ");\n"

		preamble += indent + "}\n"

		// Support passing QList<>* (very rare, but used in qnetwork)
		if p.Pointer {
			return preamble, "&" + nameprefix + "_QList"
		} else {
			return preamble, nameprefix + "_QList"
		}

	} else if kType, vType, ok := p.QMapOf(); ok {
		preamble += indent + p.GetQtCppType().ParameterType + " " + nameprefix + "_QMap;\n"

		// This container may be a QMap or a QHash
		// QHash supports .reserve(), but QMap doesn't
		if strings.HasPrefix(p.ParameterType, "QHash<") {
			preamble += indent + nameprefix + "_QMap.reserve(" + p.ParameterName + ".len);\n"
		}

		preamble += indent + kType.RenderTypeCabi() + "* " + nameprefix + "_karr = static_cast<" + kType.RenderTypeCabi() + "*>(" + p.ParameterName + ".keys);\n"
		preamble += indent + vType.RenderTypeCabi() + "* " + nameprefix + "_varr = static_cast<" + vType.RenderTypeCabi() + "*>(" + p.ParameterName + ".values);\n"
		preamble += indent + "for(size_t i = 0; i < " + p.ParameterName + ".len; ++i) {\n"

		kType.ParameterName = nameprefix + "_karr[i]"
		addPreK, addFwdK := emitCABI2CppForwarding(kType, indent+"\t", currentClass)
		preamble += addPreK

		vType.ParameterName = nameprefix + "_varr[i]"
		addPreV, addFwdV := emitCABI2CppForwarding(vType, indent+"\t", currentClass)
		preamble += addPreV

		preamble += indent + "\t" + nameprefix + "_QMap[" + addFwdK + "] = " + addFwdV + ";\n"

		preamble += indent + "}\n"
		return preamble, nameprefix + "_QMap"

	} else if kType, vType, ok := p.QPairOf(); ok {
		preamble += indent + p.GetQtCppType().ParameterType + " " + nameprefix + "_QPair;\n"

		preamble += indent + kType.RenderTypeCabi() + "* " + nameprefix + "_first = static_cast<" + kType.RenderTypeCabi() + "*>(" + p.ParameterName + ".first);\n"
		preamble += indent + vType.RenderTypeCabi() + "* " + nameprefix + "_second = static_cast<" + vType.RenderTypeCabi() + "*>(" + p.ParameterName + ".second);\n"

		kType.ParameterName = nameprefix + "_first[0]"
		addPreK, addFwdK := emitCABI2CppForwarding(kType, indent+"\t", currentClass)
		preamble += addPreK

		vType.ParameterName = nameprefix + "_second[0]"
		addPreV, addFwdV := emitCABI2CppForwarding(vType, indent+"\t", currentClass)
		preamble += addPreV

		preamble += indent + nameprefix + "_QPair.first = " + addFwdK + ";\n"
		preamble += indent + nameprefix + "_QPair.second = " + addFwdV + ";\n"

		return preamble, nameprefix + "_QPair"

	} else if p.IsFlagType() || p.IntType() || p.IsKnownEnum() {
		castSrc := p.ParameterName
		castType := p.RenderTypeQtCpp()
		if p.IsKnownEnum() {
			if enum, ok := KnownEnums[p.ParameterType]; ok && enum.Enum.IsProtected {
				// For protected enums, use unqualified name since we'll have a using declaration
				castType = "Virtual" + currentClass + "::" + enum.Enum.CabiEnumName()
			}
		}

		if p.ByRef { // e.g. QDataStream::operator>>() overloads
			castSrc = "*" + castSrc
		}

		if p.QtCppOriginalType != nil && p.QtCppOriginalType.Const != p.Const {
			return preamble, "static_cast<" + p.RenderTypeQtCpp() + ">(const_cast<" + p.RenderTypeIntermediateCpp() + ">(" + p.ParameterName + "))"
		}

		if p.ParameterType == "qint64" ||
			p.ParameterType == "quint64" ||
			p.ParameterType == "qlonglong" ||
			p.ParameterType == "qulonglong" ||
			p.GetQtCppType().ParameterType == "qintptr" ||
			p.GetQtCppType().ParameterType == "qsizetype" || // Qt 6 qversionnumber.h: invalid ‘static_cast’ from type ‘ptrdiff_t*’ {aka ‘long int*’} to type ‘qsizetype*’ {aka ‘long long int*’}
			p.ParameterType == "qint8" ||
			(p.IsFlagType() && p.ByRef) ||
			(p.IsKnownEnum() && p.ByRef) {
			// QDataStream::operator>>() by reference (qint64)
			// QLockFile::getLockInfo() by pointer
			// QTextStream::operator>>() by reference (qlonglong + qulonglong)
			// QDataStream::operator>>() qint8
			// CABI has these as int64_t* (long int) which fails a static_cast to qint64& (long long int&)
			// Hack a hard C-style cast
			return preamble, "(" + castType + ")(" + castSrc + ")"
		} else {
			// Use static_cast<> safely
			return preamble, "static_cast<" + castType + ">(" + castSrc + ")"
		}

	} else if _, ok := p.QSetOf(); ok {
		panic("QSet<> arguments are not yet implemented") // n.b. doesn't seem to exist in QtCore/QtGui/QtWidgets at all

	} else if p.ByRef {
		if p.Pointer {
			// By ref and by pointer
			// This happens for QDataStream &QDataStream::operator>>(char *&s)
			// We are only using one level of indirection
			return preamble, p.ParameterName
		} else {
			// By ref and not by pointer
			// We changed RenderTypeCabi() to render this as a pointer
			// Need to dereference so we can pass as reference to the actual Qt C++ function
			//tmp = append(tmp, "*"+p.ParameterName)
			return preamble, "*" + p.ParameterName
		}

	} else if p.QtClassType() && !p.Pointer {
		// CABI takes all Qt types by pointer, even if C++ wants them by value
		// Dereference the passed-in pointer
		if strings.Contains(p.ParameterName, `[`) {
			return preamble, "*(" + p.ParameterName + ")" // Extra brackets aren't necessary, just nice
		}
		return preamble, "*" + p.ParameterName

	} else {
		return preamble, p.ParameterName
	}
}

// emitAssignCppToCabi transforms and assigns rvalue to the assignExpression.
// Sample assignExpression: `return `, `auto foo = `
// Sample rvalue: `foo`, `foo(xyz)`
// The return is a complete statement including trailing newline.
func emitAssignCppToCabi(assignExpression string, p CppParameter, rvalue string) string {

	shouldReturn := assignExpression // n.b. already has indent
	var afterCall string
	assignExpression = strings.TrimLeft(assignExpression, " \t")
	indent := shouldReturn[0 : len(shouldReturn)-len(assignExpression)]

	shouldReturn = shouldReturn[len(indent):]

	namePrefix := makeNamePrefix(p.ParameterName)
	maybeConst := ifv(p.Const, "const ", "")

	if p.Void() {
		shouldReturn = ""
		return indent + shouldReturn + rvalue + ";\n" + afterCall

	} else if p.ParameterType == "QString" {

		if p.Pointer {
			// e.g. QTextStream::String()
			// These are rare, and probably expected to be lightweight references
			// But, a copy is the best we can project it as
			// Un-pointer-ify
			shouldReturn = maybeConst + "QString* " + namePrefix + "_ret = "
			afterCall = indent + "// Convert QString pointer from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory\n"
			afterCall += indent + "QByteArray " + namePrefix + "_b = " + namePrefix + "_ret->toUtf8();\n"

		} else {
			shouldReturn = maybeConst + "QString " + namePrefix + "_ret = "
			afterCall = indent + "// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory\n"
			afterCall += indent + "QByteArray " + namePrefix + "_b = " + namePrefix + "_ret.toUtf8();\n"
		}

		afterCall += indent + "libqt_string " + namePrefix + "_str;\n"
		afterCall += indent + namePrefix + "_str.len = " + namePrefix + "_b.length();\n"
		afterCall += indent + namePrefix + "_str.data = static_cast<char*>(malloc((" + namePrefix + "_str.len + 1) * sizeof(char)));\n"
		afterCall += indent + "memcpy(" + namePrefix + "_str.data, " + namePrefix + "_b.data(), " + namePrefix + "_str.len);\n"
		afterCall += indent + namePrefix + "_str.data[" + namePrefix + "_str.len] = '\\0';\n"
		afterCall += indent + assignExpression + namePrefix + "_str;\n"
		return indent + shouldReturn + rvalue + ";\n" + afterCall

	} else if p.ParameterType == "QByteArray" {

		// C++ has given us a QByteArray. CABI needs this as a libqt_string
		// Do not free the data, the caller will free it

		shouldReturn = maybeConst + p.ParameterType + " " + namePrefix + "_qb = "

		afterCall += indent + "libqt_string " + namePrefix + "_str;\n"
		afterCall += indent + namePrefix + "_str.len = " + namePrefix + "_qb.length();\n"
		afterCall += indent + namePrefix + "_str.data = static_cast<char*>(malloc((" + namePrefix + "_str.len + 1) * sizeof(char)));\n"
		afterCall += indent + "memcpy(" + namePrefix + "_str.data, " + namePrefix + "_qb.data(), " + namePrefix + "_str.len);\n"
		afterCall += indent + namePrefix + "_str.data[" + namePrefix + "_str.len] = '\\0';\n"
		afterCall += indent + assignExpression + namePrefix + "_str;\n"
		return indent + shouldReturn + rvalue + ";\n" + afterCall

	} else if p.ParameterType == "QStringList" {

		// Much of the handling for QStringList is the same as QList<QString>
		// but we need to convert the QStringList to a libqt_list of
		// libqt_string and handle the memory allocation ourselves
		shouldReturn = p.RenderTypeQtCpp() + " " + namePrefix + "_ret = "

		afterCall += indent + "// Convert QStringList from C++ memory to manually-managed C memory\n"
		afterCall += indent + "libqt_string* " + namePrefix + "_arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * " + namePrefix + "_ret.length()));\n"
		afterCall += indent + "for (size_t i = 0; i < " + namePrefix + "_ret.length(); ++i) {\n"
		afterCall += indent + "\tQByteArray " + namePrefix + "_b = " + namePrefix + "_ret[i].toUtf8();\n"
		afterCall += indent + "\t" + namePrefix + "_arr[i].len = " + namePrefix + "_b.length();\n"
		afterCall += indent + "\t" + namePrefix + "_arr[i].data = static_cast<char*>(malloc((" + namePrefix + "_arr[i].len + 1) * sizeof(char)));\n"
		afterCall += indent + "\tmemcpy(" + namePrefix + "_arr[i].data, " + namePrefix + "_b.data(), " + namePrefix + "_arr[i].len);\n"
		afterCall += indent + namePrefix + "_arr[i].data[" + namePrefix + "_arr[i].len] = '\\0';\n"
		afterCall += indent + "}\n"
		afterCall += indent + "libqt_list " + namePrefix + "_out;\n"
		afterCall += indent + "" + namePrefix + "_out.len = " + namePrefix + "_ret.length();\n"
		afterCall += indent + "" + namePrefix + "_out.data = static_cast<void*>(" + namePrefix + "_arr);\n"

		afterCall += indent + assignExpression + "" + namePrefix + "_out;\n"
		return indent + shouldReturn + rvalue + ";\n" + afterCall

	} else if t, ok := p.QListOf(); ok {

		// In some cases rvalue is a function call and the temporary
		// is necessary; in some cases it's a literal and the temporary is
		// elided; but in some cases it's a Qt class and the temporary goes
		// through a copy constructor
		// TODO Detect safe cases where this can be optimized

		shouldReturn = p.RenderTypeQtCpp() + " " + namePrefix + "_ret = "

		afterCall += indent + "// Convert QList<> from C++ memory to manually-managed C memory\n"
		afterCall += indent + "" + t.RenderTypeCabi() + "* " + namePrefix + "_arr = static_cast<" + t.RenderTypeCabi() + "*>(malloc(sizeof(" + t.RenderTypeCabi() + ") * " + namePrefix + "_ret.length()));\n"
		afterCall += indent + "for (size_t i = 0; i < " + namePrefix + "_ret.length(); ++i) {\n"
		afterCall += emitAssignCppToCabi(indent+"\t"+namePrefix+"_arr[i] = ", t, namePrefix+"_ret[i]")
		afterCall += indent + "}\n"

		afterCall += indent + "libqt_list " + namePrefix + "_out;\n"
		afterCall += indent + "" + namePrefix + "_out.len = " + namePrefix + "_ret.length();\n"
		afterCall += indent + "" + namePrefix + "_out.data = static_cast<void*>(" + namePrefix + "_arr);\n"

		afterCall += indent + assignExpression + "" + namePrefix + "_out;\n"
		return indent + shouldReturn + rvalue + ";\n" + afterCall

	} else if t, ok := p.QSetOf(); ok {

		shouldReturn = p.RenderTypeQtCpp() + " " + namePrefix + "_ret = "

		afterCall += indent + "// Convert QSet<> from C++ memory to manually-managed C memory\n"
		afterCall += indent + "" + t.RenderTypeCabi() + "* " + namePrefix + "_arr = static_cast<" + t.RenderTypeCabi() + "*>(malloc(sizeof(" + t.RenderTypeCabi() + ") * " + namePrefix + "_ret.size()));\n"
		afterCall += indent + "int " + namePrefix + "_ctr = 0;\n"
		afterCall += indent + "QSetIterator<" + t.RenderTypeQtCpp() + "> " + namePrefix + "_itr(" + namePrefix + "_ret);\n"
		afterCall += indent + "while (" + namePrefix + "_itr.hasNext()) {\n"
		afterCall += emitAssignCppToCabi(indent+"\t"+namePrefix+"_arr["+namePrefix+"_ctr++] = ", t, namePrefix+"_itr.next()")
		afterCall += indent + "}\n"

		afterCall += indent + "libqt_list " + namePrefix + "_out;\n"
		afterCall += indent + "" + namePrefix + "_out.len = " + namePrefix + "_ret.size();\n"
		afterCall += indent + "" + namePrefix + "_out.data = static_cast<void*>(" + namePrefix + "_arr);\n"

		afterCall += indent + assignExpression + "" + namePrefix + "_out;\n"
		return indent + shouldReturn + rvalue + ";\n" + afterCall

	} else if kType, vType, ok := p.QMapOf(); ok {

		// QMap<K,V>
		kTypeC := kType.RenderTypeCabi()
		vTypeC := vType.RenderTypeCabi()

		shouldReturn = p.RenderTypeQtCpp() + " " + namePrefix + "_ret = "

		afterCall += indent + "// Convert QMap<> from C++ memory to manually-managed C memory\n"
		afterCall += indent + "" + kTypeC + "* " + namePrefix + "_karr = static_cast<" + kTypeC + "*>(malloc(sizeof(" + kTypeC + ") * " + namePrefix + "_ret.size()));\n"
		afterCall += indent + "" + vTypeC + "* " + namePrefix + "_varr = static_cast<" + vTypeC + "*>(malloc(sizeof(" + vTypeC + ") * " + namePrefix + "_ret.size()));\n"

		afterCall += indent + "int " + namePrefix + "_ctr = 0;\n"
		afterCall += indent + "for (auto " + namePrefix + "_itr = " + namePrefix + "_ret.keyValueBegin(); " + namePrefix + "_itr != " + namePrefix + "_ret.keyValueEnd(); ++" + namePrefix + "_itr) {\n"
		afterCall += emitAssignCppToCabi(indent+"\t"+namePrefix+"_karr["+namePrefix+"_ctr] = ", kType, namePrefix+"_itr->first")
		afterCall += emitAssignCppToCabi(indent+"\t"+namePrefix+"_varr["+namePrefix+"_ctr] = ", vType, namePrefix+"_itr->second")
		afterCall += indent + "\t" + namePrefix + "_ctr++;\n"

		afterCall += indent + "}\n"

		afterCall += indent + "libqt_map " + namePrefix + "_out;\n"
		afterCall += indent + "" + namePrefix + "_out.len = " + namePrefix + "_ret.size();\n"
		afterCall += indent + "" + namePrefix + "_out.keys = static_cast<void*>(" + namePrefix + "_karr);\n"
		afterCall += indent + "" + namePrefix + "_out.values = static_cast<void*>(" + namePrefix + "_varr);\n"

		afterCall += indent + assignExpression + "" + namePrefix + "_out;\n"
		return indent + shouldReturn + rvalue + ";\n" + afterCall

	} else if kType, vType, ok := p.QPairOf(); ok {

		// QPair<T1,T2>
		kTypeC := kType.RenderTypeCabi()
		vTypeC := vType.RenderTypeCabi()

		shouldReturn = p.RenderTypeQtCpp() + " " + namePrefix + "_ret = "

		afterCall += indent + "// Convert QPair<> from C++ memory to manually-managed C memory\n"
		afterCall += indent + "" + kTypeC + "* " + namePrefix + "_first = static_cast<" + kTypeC + "*>(malloc(sizeof(" + kTypeC + ")));\n"
		afterCall += indent + "" + vTypeC + "* " + namePrefix + "_second = static_cast<" + vTypeC + "*>(malloc(sizeof(" + vTypeC + ")));\n"

		afterCall += emitAssignCppToCabi(indent+"*"+namePrefix+"_first = ", kType, namePrefix+"_ret.first")
		afterCall += emitAssignCppToCabi(indent+"*"+namePrefix+"_second = ", vType, namePrefix+"_ret.second")

		afterCall += indent + "libqt_pair " + namePrefix + "_out;\n"
		afterCall += indent + "" + namePrefix + "_out.first = static_cast<void*>(" + namePrefix + "_first);\n"
		afterCall += indent + "" + namePrefix + "_out.second = static_cast<void*>(" + namePrefix + "_second);\n"
		afterCall += indent + assignExpression + "" + namePrefix + "_out;\n"
		return indent + shouldReturn + rvalue + ";\n" + afterCall

	} else if p.QtClassType() && p.ByRef {

		// It's a pointer in disguise, just needs one cast
		shouldReturn = p.RenderTypeQtCpp() + " " + namePrefix + "_ret = "
		afterCall += indent + "// Cast returned reference into pointer\n"
		if p.Const {
			nonConst := p // copy
			nonConst.Const = false
			nonConst.ByRef = false
			nonConst.Pointer = true
			nonConst.PointerCount = 1
			afterCall += indent + "" + assignExpression + "const_cast<" + nonConst.RenderTypeQtCpp() + ">(&" + namePrefix + "_ret);\n"
		} else {
			afterCall += indent + "" + assignExpression + "&" + namePrefix + "_ret;\n"
		}
		return indent + shouldReturn + rvalue + ";\n" + afterCall

	} else if p.QtClassType() && !p.Pointer {

		// Elide temporary and emit directly from the rvalue
		return indent + assignExpression + "new " + p.ParameterType + "(" + rvalue + ");\n"

	} else if p.IsFlagType() || p.IsKnownEnum() || p.QtCppOriginalType != nil {

		// Needs an explicit cast
		shouldReturn = p.RenderTypeQtCpp() + " " + namePrefix + "_ret = "

		if p.QtCppOriginalType != nil && p.QtCppOriginalType.Const != p.Const {
			afterCall += indent + "" + assignExpression + "const_cast<" + p.RenderTypeCabi() + ">(static_cast<" + p.RenderTypeIntermediateCpp() + ">(" + namePrefix + "_ret));\n"
		} else if p.QtCppOriginalType != nil && p.QtCppOriginalType.ParameterType == "qintptr" {
			// Hard int cast
			afterCall += indent + "" + assignExpression + "(" + p.RenderTypeCabi() + ")(" + namePrefix + "_ret);\n"
		} else {
			afterCall += indent + "" + assignExpression + "static_cast<" + p.RenderTypeCabi() + ">(" + rvalue + ");\n"
			return indent + afterCall
		}
		return indent + shouldReturn + rvalue + ";\n" + afterCall

	} else if p.Const {

		shouldReturn += "(" + p.RenderTypeCabi() + ") "
		return indent + shouldReturn + rvalue + ";\n" + afterCall

	} else {

		// Basic type
		if p.ByRef {
			// The C++ type is a reference, the CABI type is a pointer type
			shouldReturn += "&"
		}

		return indent + shouldReturn + rvalue + ";\n" + afterCall
	}
}

// getReferencedTypes finds all referenced Qt types in this file.
func getReferencedTypes(src *CppParsedHeader, zfs *zigFileState) []string {
	foundTypes := map[string]struct{}{}

	var maybeAddType func(p CppParameter)
	maybeAddType = func(p CppParameter) {
		if p.QtClassType() {
			foundTypes[p.ParameterType] = struct{}{}
		}
		if t, ok := p.QListOf(); ok {
			foundTypes["QList"] = struct{}{} // FIXME or QVector?
			maybeAddType(t)
		}
		if kType, vType, ok := p.QMapOf(); ok {
			foundTypes["QMap"] = struct{}{} // FIXME or QHash?
			maybeAddType(kType)
			maybeAddType(vType)
		}
		if kType, vType, ok := p.QPairOf(); ok {
			foundTypes["QPair"] = struct{}{}
			maybeAddType(kType)
			maybeAddType(vType)
		}
		if t, ok := p.QSetOf(); ok {
			foundTypes["QSet"] = struct{}{}
			maybeAddType(t)
		}
	}

	for _, c := range src.Classes {
		foundTypes[c.ClassName] = struct{}{}

		for _, ctor := range c.Ctors {
			for _, p := range ctor.Parameters {
				maybeAddType(p)
			}
		}
		for _, m := range c.Methods {
			for _, p := range m.Parameters {
				maybeAddType(p)
			}
			maybeAddType(m.ReturnType)
		}
		for _, vm := range c.VirtualMethods() {
			for _, p := range vm.Parameters {
				maybeAddType(p)
			}
			maybeAddType(vm.ReturnType)
		}
		for _, vm := range c.ProtectedMethods() {
			for _, p := range vm.Parameters {
				maybeAddType(p)
			}
			maybeAddType(vm.ReturnType)
		}
		for _, cn := range c.AllInheritsClassInfo() {
			maybeAddType(CppParameter{
				ParameterType: cn.Class.ClassName,
			})
		}
	}

	// Some types (e.g. QRgb) are found but are typedefs, not classes
	for _, td := range src.Typedefs {
		delete(foundTypes, td.Alias)
	}

	// Convert to sorted list
	foundTypesList := make([]string, 0, len(foundTypes))
	for ft := range foundTypes {
		if !AllowClass(ft) {
			continue
		}

		foundTypesList = append(foundTypesList, ft)
	}
	sort.Strings(foundTypesList)

	return foundTypesList
}

// Add protected enum using declarations for the entire inheritance chain
func getAllProtectedEnums(c *CppClass, seen map[string]struct{}) []CppEnum {
	var enums []CppEnum

	// Add this class's protected enums
	for _, e := range c.ChildEnums {
		if e.IsProtected {
			if _, ok := seen[e.EnumName]; !ok {
				seen[e.EnumName] = struct{}{}
				enums = append(enums, e)
			}
		}
	}

	// Recursively get protected enums from all parent classes
	for _, parentInfo := range c.DirectInheritClassInfo() {
		parentEnums := getAllProtectedEnums(&parentInfo.Class, seen)
		enums = append(enums, parentEnums...)
	}

	return enums
}

// cabiClassName returns the C ABI class name for a Qt C++ class.
// Normally this is the same, except for class types that are nested inside another class definition.
func cabiClassName(className string) string {

	// Many types are defined in qnamespace.h under Qt::
	// The Zig implementation is always called qnamespace_enums.Foo, and
	// since these names won't collide with anything, strip the redundant prefix
	className = strings.TrimPrefix(className, `Qt::`)

	// Must use __ to avoid subclass/method name collision e.g. QPagedPaintDevice::Margins
	return strings.Replace(className, `::`, `__`, -1)
}

func cabiPreventStructDeclaration(className string) bool {
	switch className {
	case "QList", "QString", "QSet", "QMap", "QHash", "QPair", "QVector", "QByteArray":
		return true // These types are reprojected
	default:
		return false
	}
}

func (header *CppParsedHeader) RegisterFlags() map[string]CppFlagProperty {
	if header.DetectedFlags == nil {
		header.DetectedFlags = make(map[string]CppFlagProperty)
	}
	skippedClasses := []string{"Private"}

nextTypedef:
	for _, typedef := range header.Typedefs {
		typeClass := strings.Split(typedef.Alias, `::`)[0]
		for _, skippedClass := range skippedClasses {
			if strings.Contains(typeClass, skippedClass) {
				continue nextTypedef
			}
		}
		if strings.HasSuffix(typedef.Alias, "Private") {
			continue
		}
		if enum, ok := KnownEnums[typedef.Alias]; ok {
			if enum.Enum.IsProtected {
				continue
			}
		}

		if strings.Contains(typedef.Alias, "::") {
			var flagName string
			flagDef := strings.Split(typedef.Alias, `::`)
			if len(flagDef) > 1 {
				flagName = strings.Join(flagDef[1:], ``)
			} else {
				continue
			}

			flagProperty := CppFlagProperty{
				PropertyName: typedef.Alias,
				PropertyType: CppParameter{
					ParameterType: typedef.UnderlyingType.RenderTypeCabi(),
				},
			}
			header.DetectedFlags[flagName] = flagProperty
		}
	}
	return header.DetectedFlags
}

var (
	// We need to skip some protected/private flags
	skippedFlags = map[string]struct{}{
		"QLatin1StringMatcher::CaseInsensitiveSearcher": {},
		"QLatin1StringMatcher::CaseSensitiveSearcher":   {},
		"QPropertyObserverBase::ChangeHandler":          {},
		"QRandomGenerator::RandomEngine":                {},
		"QRestAccessManager::CallbackPrototype":         {},
		"QVLABaseBase::malloced_ptr":                    {},
		"QsciAPIs::WordIndex":                           {},
		"QsciAPIs::WordIndexList":                       {},
		"QsciScintillaBase::ScintillaBytes":             {},
	}

	noQtConnect = map[string]struct{}{
		"QAudioDecoder":     {},
		"QCompleter":        {},
		"QPrintDialog":      {},
		"QsciScintillaBase": {},
	}

	nonPolymorphicClasses = map[string]struct{}{
		"QCborValueConstRef":          {},
		"QJsonValueConstRef":          {},
		"QMediaMetaData":              {},
		"QPropertyObserver":           {},
		"QResource":                   {},
		"QStaticByteArrayMatcherBase": {},
		"QStringConverterBase":        {},
		"QTextBlockFormat":            {},
		"QTextCharFormat":             {},
		"QTextFrameFormat":            {},
		"QTextListFormat":             {},
		"QVLABaseBase":                {},
		"QVariant":                    {},
	}

	skippedMethods = map[string]struct{}{
		"QHostAddress_IsInSubnetWithSubnet": {}, // linker error
	}
)

func emitVirtualBindingHeader(src *CppParsedHeader, filename, packageName string) (string, error) {
	ret := strings.Builder{}
	src.DetectedFlags = src.RegisterFlags()

	includeGuard := strings.ToUpper(strings.Replace(strings.Replace(packageName, `/`, `_`, -1), `-`, `_`, -1)) + "C_LIBVIRTUAL" + strings.ToUpper(strings.Replace(strings.Replace(filename, `.`, `_`, -1), `-`, `_`, -1))
	extraInclude := ifv(filename == "qsequentialiterable.h", "#include \"libqvariant.h\"", "")
	bindingInclude := "qtlibc.h"

	if strings.Contains(packageName, `/`) {
		bindingInclude = "../" + bindingInclude
	}

	ret.WriteString(`#pragma once
#ifndef ` + includeGuard + `
#define ` + includeGuard + `

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "` + bindingInclude + "\"\n" + extraInclude + "\n\n")

	for _, c := range src.Classes {
		if c.ClassName == "QWebEngineCookieStore::FilterRequest" {
			continue
		}
		cppClassName := c.ClassName
		methodPrefixName := cabiClassName(cppClassName)
		virtualMethods := c.VirtualMethods()
		protectedMethods := c.ProtectedMethods()

		if len(virtualMethods) > 0 {
			if c.ClassName != "QTest::QTouchEventSequence" {
				overriddenClassName := "Virtual" + strings.Replace(cppClassName, `::`, ``, -1)

				var publicTypes, privateCallbacks, callbackSetters, baseSetters, privateCallbackVars, privateBaseFlags, friendFuncs []string

				className := cppClassName
				ret.WriteString("// This class is a subclass of " + className + " so that we can call protected methods\n")
				ret.WriteString("class " + overriddenClassName + " final : public " + className + " {\n\n")

				seenProtectedEnums := map[string]struct{}{}
				allProtectedEnums := getAllProtectedEnums(&c, seenProtectedEnums)
				for _, e := range allProtectedEnums {
					parentClass := strings.Split(e.EnumName, "::")[0]
					publicTypes = append(publicTypes, "\tusing "+parentClass+"::"+e.CabiEnumName()+";\n")
				}

				seenCallbacks := map[string]struct{}{}
				seenMethodVariants := map[string]bool{}

				virtualMethods = append(virtualMethods, protectedMethods...)

				for _, m := range virtualMethods {
					var showHiddenParams bool
					baseName := methodPrefixName + "_" + m.SafeMethodName()
					if _, ok := seenMethodVariants[baseName]; ok {
						showHiddenParams = true
					} else {
						seenMethodVariants[baseName] = false
					}
					if _, ok := skippedMethods[baseName]; ok {
						continue
					}

					callbackType := baseName + "_Callback"
					callbackName := strings.ToLower(callbackType)
					isBaseName := strings.ToLower(baseName) + "_isbase"
					if _, ok := seenCallbacks[callbackType]; ok {
						continue
					}

					var maybeSelf, commaParams string
					maybeConst := ifv(m.IsConst, "const ", "")
					if len(m.Parameters) != 0 {
						maybeSelf = maybeConst + methodPrefixName + "*"
					}

					if showHiddenParams && len(m.HiddenParams) != 0 {
						maybeSelf = maybeConst + methodPrefixName + "*"
					}
					if len(m.Parameters) > 0 {
						commaParams = ", "
					}
					if showHiddenParams && (len(m.Parameters) > 0 || len(m.HiddenParams) > 0) {
						commaParams = ", "
					}

					// Callback types
					publicTypes = append(publicTypes, "\tusing "+callbackType+" = "+m.ReturnType.RenderTypeCabi()+
						" (*)("+maybeSelf+commaParams+emitParameterTypesCabi(m, "")+");\n")

					// Instance callback storage
					privateCallbacks = append(privateCallbacks, "\t"+callbackType+" "+callbackName+" = nullptr;\n")
					callbackSetters = append(callbackSetters, "\tinline void set"+callbackType+"("+callbackType+" cb) { "+callbackName+" = cb; }\n")
					baseSetters = append(baseSetters, "\tinline void set"+baseName+"_IsBase(bool value) const { "+isBaseName+" = value; }\n")
					privateCallbackVars = append(privateCallbackVars, callbackName)

					// Instance base flags
					privateBaseFlags = append(privateBaseFlags, "    mutable bool "+isBaseName+" = false;\n")

					// Friend functions
					if m.IsProtected {
						friendFuncs = append(friendFuncs, "\tfriend "+m.ReturnType.RenderTypeCabi()+" "+className+"_"+m.SafeMethodName()+"("+emitParametersCabi(m, maybeConst+cppClassName+"*")+");\n")
						friendFuncs = append(friendFuncs, "\tfriend "+m.ReturnType.RenderTypeCabi()+" "+className+"_QBase"+m.SafeMethodName()+"("+emitParametersCabi(m, maybeConst+cppClassName+"*")+");\n")
					}

					seenCallbacks[callbackType] = struct{}{}
				}

				// Virtual method public types
				ret.WriteString("public:\n\t// Virtual class boolean flag\n")
				ret.WriteString("\tbool is" + overriddenClassName + "= true;\n\n")
				ret.WriteString("\t// Virtual class public types (including callbacks)\n" + strings.Join(publicTypes, "") + "\n")

				// Virtual method protected types
				ret.WriteString("protected:\n\t// Instance callback storage\n" + strings.Join(privateCallbacks, "") +
					"\n\t// Instance base flags\n" + strings.Join(privateBaseFlags, "") + "\n")

				ret.WriteString("public:\n")
				for _, ctor := range c.Ctors {
					ret.WriteString("\t" + overriddenClassName + "(" + emitParametersCpp(ctor, false) + "): " + cppClassName + "(" + emitParameterNames(ctor, false) + ") {};\n")
				}
				ret.WriteString("\n")

				classDestructor := "~" + overriddenClassName + "() "
				if len(privateCallbackVars) > 0 {
					classDestructor += "{"
					for _, callbackVar := range privateCallbackVars {
						classDestructor += "\n\t\t" + callbackVar + " = nullptr;"
					}
					classDestructor += "\n\t}\n\n"
				} else {
					classDestructor = "\tvirtual ~" + classDestructor
					classDestructor += "= default;\n\n"
				}

				if !c.CanDelete {
					ret.WriteString("protected:\n" + classDestructor +
						"public:\n")
				} else {
					ret.WriteString(classDestructor)
				}

				ret.WriteString("// Callback setters\n" + strings.Join(callbackSetters, "") + "\n")
				ret.WriteString("// Base flag setters\n" + strings.Join(baseSetters, "") + "\n")

				seenVirtuals := map[string]bool{}

				for _, m := range virtualMethods {
					var showHiddenParams bool
					baseName := methodPrefixName + "_" + m.SafeMethodName()
					if _, ok := seenVirtuals[baseName]; ok {
						continue
					}
					if _, ok := seenVirtuals[baseName]; ok {
						showHiddenParams = true
					} else {
						seenVirtuals[baseName] = false
					}

					if _, ok := skippedMethods[baseName]; ok {
						continue
					}

					maybeReturn := ifv(!m.ReturnType.Void(), "return ", "")
					maybeOverride := ifv(m.IsVirtual, "override ", "")
					maybeVirtual := ifv(m.IsVirtual, "virtual ", "")

					var maybeReturn2, retTransformP, retTransformF string
					if !m.ReturnType.Void() {
						maybeReturn2 = m.ReturnType.RenderTypeCabi() + " callback_ret = "
						returnParam := m.ReturnType // copy
						returnParam.ParameterName = "callback_ret"
						retTransformP, retTransformF = emitCABI2CppForwarding(returnParam, "\t\t", cppClassName)
					}

					// fixes for QsciLexerAsm
					if methodPrefixName == "QsciLexerAsm" {
						maybeOverride = "override "
					}
					if methodPrefixName == "QsciLexerAsm" && (m.MethodName == "sender" || m.MethodName == "senderSignalIndex" || m.MethodName == "receivers" || m.MethodName == "isSignalConnected") {
						maybeOverride = ""
					}

					var customCallback, maybeElse, maybeThis, signalCode string
					maybeParams := emitParameterNames(m, showHiddenParams)
					maybeFunc := emitParametersCpp(m, showHiddenParams)
					indent := "\t\t"
					methodExec := maybeReturn + methodPrefixName + "::" + m.CppCallTarget() + "(" + maybeParams + ");"
					callbackName := strings.ToLower(baseName) + "_callback"
					isBaseName := strings.ToLower(baseName) + "_isbase"

					if len(m.Parameters) != 0 {
						maybeThis = "this"
					}

					if showHiddenParams && len(m.HiddenParams) != 0 {
						maybeThis = "this"
					}

					paramArgs := []string{}
					if maybeThis != "" {
						paramArgs = append(paramArgs, maybeThis)
					}

					for i, p := range m.Parameters {
						signalCode += emitAssignCppToCabi(fmt.Sprintf("\t\t%s cbval%d = ", p.RenderTypeCabi(), i+1), p, p.cParameterName())
						paramArgs = append(paramArgs, fmt.Sprintf("cbval%d", i+1))
					}

					retString := ifv(len(signalCode) > 0, signalCode+"\n", "")
					if m.ReturnType.QtClassType() && !m.ReturnType.Pointer && m.ReturnType.ParameterType != "QString" && m.ReturnType.ParameterType != "QByteArray" {
						retString += maybeReturn2 + callbackName + "(" + strings.Join(paramArgs, ", ") + ");\n"
						retString += "return *callback_ret;\n"
					} else {
						retString += maybeReturn2 + callbackName + "(" + strings.Join(paramArgs, ", ") + ");\n"
						retString += retTransformP + ifv(m.ReturnType.Void(), "", "return "+retTransformF+";\n")
					}

					if !m.IsPureVirtual && !m.IsPrivate {
						customCallback += indent + "if (" + isBaseName + ") {\n"
						customCallback += indent + "\t" + isBaseName + " = false;\n"
						customCallback += indent + "\t" + methodExec + "\n"
						customCallback += indent + "}"
						maybeElse = "else "
					}

					if m.IsPureVirtual || m.IsPrivate {
						customCallback += indent + "if (" + callbackName + " != nullptr) {\n"
						customCallback += indent + "\t" + retString
						if !m.ReturnType.Void() {
							customCallback += indent + "} else {\n"
							customCallback += indent + "\t" + maybeReturn + "{};\n"
						}
						customCallback += indent + "}\n"
					} else {
						customCallback += indent + maybeElse + "if (" + callbackName + " != nullptr) {\n"
						customCallback += indent + "\t" + retString
						customCallback += indent + "} else {\n"
						customCallback += indent + "\t" + methodExec + "\n"
						customCallback += indent + "}\n"
					}

					maybeConst := ifv(m.IsConst, "const ", "")

					ret.WriteString("\n\t// Virtual method for C ABI access and custom callback\n" +
						"\t" + maybeVirtual + m.ReturnType.RenderTypeQtCpp() + " " + m.CppCallTarget() + "(" + maybeFunc + ") " +
						maybeConst + maybeOverride + "{\n" + customCallback + "\t}\n")
				}

				if len(friendFuncs) > 0 {
					ret.WriteString("\n\t// Friend functions\n" + strings.Join(friendFuncs, ""))
				}

				ret.WriteString("};\n\n")
			}
		}
	}

	ret.WriteString("#endif\n\n")
	ret.WriteString("\n")

	return ret.String(), nil
}

func emitBindingHeader(src *CppParsedHeader, filename, packageName string) (string, map[string]struct{}, error) {
	ret := strings.Builder{}
	qtstructdefs := make(map[string]struct{})
	src.DetectedFlags = src.RegisterFlags()

	badCppIncludes := []string{"QWheelEvent", "QTouchEvent"}
	includeGuard := strings.ToUpper(strings.Replace(strings.Replace(packageName, `/`, `_`, -1), `-`, `_`, -1)) + "C_LIB" + strings.ToUpper(strings.Replace(strings.Replace(filename, `.`, `_`, -1), `-`, `_`, -1))
	extraInclude := ifv(filename == "qsequentialiterable.h", "#include \"libqvariant.h\"", "")
	totalEnumClasses := make(map[string]struct{})
	bindingInclude := "qtlibc.h"

	if strings.Contains(packageName, `/`) {
		bindingInclude = "../" + bindingInclude
	}

	ret.WriteString(`#pragma once
#ifndef ` + includeGuard + `
#define ` + includeGuard + `

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "` + bindingInclude + "\"\n" + extraInclude + "\n" + `
#ifdef __cplusplus
extern "C" {
#endif

`)

	// We need this macro for QObjectData::dynamicMetaObject for Qt 6.9
	if filename == "qobject.h" {
		ret.WriteString("// Based on the macro from Qt (LGPLv3), see https://www.qt.io/qt-licensing/\n" +
			"// Macro is trivial and used here under fair use\n" +
			"// Usage does not imply derivation\n" +
			"#define QT_VERSION_CHECK(major, minor, patch) ((major<<16)|(minor<<8)|(patch))\n\n")
	}

	zfs := zigFileState{
		imports:            map[string]struct{}{},
		currentPackageName: packageName,
		currentHeaderName:  strings.TrimSuffix(filename, ".h"),
	}

	foundTypesList := getReferencedTypes(src, &zfs)

	ret.WriteString("#ifdef __cplusplus\n")

	if filename == "qwebenginecookiestore.h" {
		ret.WriteString("typedef QWebEngineCookieStore::FilterRequest FilterRequest;\n")
	}

	for _, ft := range foundTypesList {
		if cabiPreventStructDeclaration(ft) {
			continue
		}

		if strings.Contains(ft, `::`) {
			// Forward declarations of inner classes are not yet supported in C++
			// @ref https://stackoverflow.com/q/1021793

			ret.WriteString(`#if defined(WORKAROUND_INNER_CLASS_DEFINITION_` + cabiClassName(ft) + ")\n")
			ret.WriteString(`typedef ` + ft + " " + cabiClassName(ft) + ";\n")
			ret.WriteString("#endif\n")
		}
	}

	ret.WriteString("#else\n")

	foundTypes := make([]string, 0, len(foundTypesList))
	for _, ft := range foundTypesList {
		if cabiPreventStructDeclaration(ft) {
			continue
		}
		fType := cabiClassName(ft)
		typedef := `typedef struct ` + fType + " " + fType + ";"
		foundTypes = append(foundTypes, typedef)
		qtstructdefs[fType] = struct{}{}
	}

	sort.Strings(foundTypes)
	ret.WriteString(strings.Join(foundTypes, "\n"))
	ret.WriteString("\n#endif\n\n")

	if len(src.DetectedFlags) > 0 || len(src.Enums) > 0 {
		includeExtra := false
		maybeCppInc := ("#ifdef __cplusplus\n")
		cppIncs := make([]string, 0, len(src.DetectedFlags)+len(src.Enums))
	nextEnum:
		for flagName, flagInfo := range src.DetectedFlags {
			for _, badEnum := range badCppIncludes {
				flagClass := strings.Split(flagInfo.PropertyName, `::`)[0]
				if flagClass == badEnum {
					continue nextEnum
				}
			}
			if _, ok := skippedFlags[flagName]; ok {
				continue
			}
			if _, ok := skippedFlags[flagInfo.PropertyName]; ok {
				continue
			}
			if enum, ok := KnownEnums[flagName]; ok {
				if enum.Enum.IsProtected {
					continue nextEnum
				}
			}
			if enum, ok := KnownEnums[flagInfo.PropertyName]; ok {
				if enum.Enum.IsProtected {
					continue nextEnum
				}
			}
			if !strings.Contains(flagName, "_iterator") {
				cppIncs = append(cppIncs, fmt.Sprintf("typedef %s %s; // C++ QFlags", flagInfo.PropertyName, flagName))
				includeExtra = true
			}
		}

		seenCppEnums := make(map[string]struct{})
		for _, enum := range src.Enums {
			if enum.IsProtected {
				continue
			}
			if enum.EnumName != "" && enum.CabiEnumName() != "" {
				if _, exists := seenCppEnums[enum.CabiEnumName()]; !exists {
					seenCppEnums[enum.CabiEnumName()] = struct{}{}
					cppIncs = append(cppIncs, fmt.Sprintf(("typedef %s %s; // C++ enum"), enum.EnumName, enum.CabiEnumName()))
					includeExtra = true
				}
			}
		}

		if len(cppIncs) > 0 {
			sort.Strings(cppIncs)
			maybeCppInc += strings.Join(cppIncs, "\n")
		}
		maybeCppInc += "\n#else"

		maybeCInc := ifv(includeExtra, maybeCppInc+"\n", "#ifndef __cplusplus\n")
		cIncs := make([]string, 0, len(src.DetectedFlags)+len(src.Enums))

		// temporary hack... commented out
		// if filename == "qmetatype.h" {
		// 	cIncs = append(cIncs, "typedef void ConverterFunction; // manual C ABI QFlag")
		// 	cIncs = append(cIncs, "typedef void MutableViewFunction; // manual C ABI QFlag")
		// }
		for flagName, flagInfo := range src.DetectedFlags {
			flagType := flagInfo.PropertyType.RenderTypeCabi()
			// ugly
			if !strings.Contains(flagType, "<") && (!strings.Contains(flagType, "::") || strings.HasPrefix(flagType, "std::")) &&
				!strings.Contains(flagType, "char") /* && !strings.Contains(flagType, "std::random") */ &&
				!strings.Contains(flagType, "QByte") && !strings.Contains(flagType, "QList") &&
				!strings.Contains(flagType, "random_access_iterator_tag") &&
				!strings.Contains(flagType, " (*)") && !strings.Contains(flagType, "unique_ptr") &&
				!strings.Contains(flagType, "QString") && !strings.Contains(flagName, "_iterator") &&
				flagName != "DataPtr" && flagName != "const_reference" &&
				flagName != "reference" && flagName != "value_type" && flagName != "iterator" &&
				!strings.HasPrefix(flagType, "QtPrivate") {
				// ugly
				if strings.HasPrefix(flagType, "std::") {
					flagType = strings.Replace(flagType, "std::", "", -1)
				}
				if strings.Contains(flagType, "libqt_") && strings.Contains(flagType, "QCbor") {
					continue
				}
				if flagType == "QJsonObject__iterator*" && flagName == "Iterator" {
					continue
				}
				if flagType == "QJsonValue*" && flagName == "mapped_type" {
					continue
				}
				if flagType == "libqt_string" && flagName == "key_type" {
					continue
				}
				if flagType == "QJsonObject__const_iterator*" && flagName == "ConstIterator" {
					continue
				}
				if flagType == "QTextBlock__iterator*" && flagName == "Iterator" {
					continue
				}
				if flagName == "difference_type" {
					flagType = "long long"
				}
				cIncs = append(cIncs, fmt.Sprintf("typedef %s %s; // C ABI QFlags", flagType, flagName))
				if flagType == "int" {
					if _, exists := KnownEnums[flagName]; !exists {
						KnownEnums[flagName] = lookupResultEnum{
							PackageName: packageName,
							Enum: CppEnum{
								EnumName:       flagName,
								UnderlyingType: CppParameter{ParameterType: flagType},
							},
						}
					}
				}
				includeExtra = true
			}
		}

		seenCEnuns := make(map[string]struct{})
		for _, enum := range src.Enums {
			enumType := enum.UnderlyingType.RenderTypeCabi()
			if enum.EnumName != "" && enum.CabiEnumName() != "" && !strings.Contains(enum.EnumName, "<") &&
				!strings.Contains(enum.EnumName, "*") {
				if enum.CabiEnumName() == "Type" {
					enumType = "unsigned char"
				}
				if enum.CabiEnumName() == "State" {
					enumType = "int"
				}
				if enum.CabiEnumName() == "Option" {
					enumType = "int"
				}
				if enum.CabiEnumName() == "Script" {
					enumType = "int"
				}
				inc := fmt.Sprintf(("typedef %s %s; // C ABI enum"), enumType, enum.CabiEnumName())
				if enumType == "int" {
					if _, exists := KnownEnums[enum.CabiEnumName()]; !exists {
						KnownEnums[enum.CabiEnumName()] = lookupResultEnum{
							PackageName: enum.CabiEnumName(),
							Enum: CppEnum{
								EnumName:       enum.CabiEnumName(),
								UnderlyingType: CppParameter{ParameterType: enumType},
							},
						}
					}
				}
				if _, exists := seenCEnuns[inc]; !exists {
					seenCEnuns[inc] = struct{}{}
					cIncs = append(cIncs, inc)
				}
				includeExtra = true
				totalEnumClasses[enum.ShortEnumName()] = struct{}{}
			}
		}

		if len(cIncs) > 0 {
			sort.Strings(cIncs)
			maybeCInc += strings.Join(cIncs, "\n")
		}
		maybeCInc += "\n#endif\n\n"

		if includeExtra {
			ret.WriteString(maybeCInc)
		}
	}

	for _, c := range src.Classes {
		if c.ClassName == "QWebEngineCookieStore::FilterRequest" {
			continue
		}
		methodPrefixName := cabiClassName(c.ClassName)
		virtualMethods := c.VirtualMethods()
		protectedMethods := c.ProtectedMethods()
		baseMethods := c.Methods
		seenClassMethods := map[string]struct{}{}
		virtualEligible := AllowVirtualForClass(c.ClassName)

		// Add protected methods first
		if virtualEligible && len(virtualMethods) > 0 {
			virtualMethods = append(virtualMethods, protectedMethods...)
		}

		seenVirtualsMap := map[string]struct{}{}
		for _, m := range c.Methods {
			if !m.IsProtected {
				continue
			}

			if _, ok := nonPolymorphicClasses[c.ClassName]; ok {
				continue
			}

			virtualMethods = append(virtualMethods, m)
			seenVirtualsMap[m.MethodName] = struct{}{}
		}

		if virtualEligible && len(virtualMethods) > 0 {
			for _, m := range c.Methods {
				if !m.IsProtected && !m.IsPureVirtual {
					continue
				}
				if _, exists := seenVirtualsMap[m.MethodName]; !exists {
					seenVirtualsMap[m.MethodName] = struct{}{}
				}
			}
		}

		for i, ctor := range c.Ctors {
			ret.WriteString(fmt.Sprintf("%s %s_new%s(%s);\n", methodPrefixName+"*", methodPrefixName, maybeSuffix(i), emitParametersCabi(ctor, "")))
		}

		if c.HasTrivialCopyAssign && methodPrefixName != "QCborValueConstRef" && methodPrefixName != "QJsonValueConstRef" {
			ret.WriteString("void " + methodPrefixName + "_CopyAssign(" + methodPrefixName + "* self, " + methodPrefixName + "* other);\n")
		}

		if c.HasTrivialMoveAssign {
			ret.WriteString("void " + methodPrefixName + "_MoveAssign(" + methodPrefixName + "* self, " + methodPrefixName + "* other);\n")
		}

		for _, m := range baseMethods {
			if m.IsProtected && !m.IsVirtual {
				continue
			}
			if _, ok := skippedMethods[c.ClassName+"_"+m.SafeMethodName()]; ok {
				continue
			}
			if (m.IsProtected || m.IsPrivate) && (!virtualEligible || len(virtualMethods) == 0) {
				continue
			}
			if _, exists := seenClassMethods[methodPrefixName+"_"+m.SafeMethodName()]; !exists {
				seenClassMethods[methodPrefixName+"_"+m.SafeMethodName()] = struct{}{}
			} else {
				continue
			}
			returnCabi := m.ReturnType.RenderTypeCabi()
			for flagName, flagInfo := range src.DetectedFlags {
				if returnCabi == flagName {
					returnCabi = flagInfo.PropertyType.ParameterType
				}
			}
			for _, enum := range src.Enums {
				if returnCabi == enum.CabiEnumName() {
					returnCabi = enum.UnderlyingType.RenderTypeCabi()
				}
			}

			maybeConst := ifv(m.IsConst, "const ", "")

			if m.ReturnType.BecomesConstInVersion != nil {
				ret.WriteString(fmt.Sprintf("// This method's return type was changed from non-const to const in Qt %s\n", *m.ReturnType.BecomesConstInVersion) +
					"#if QT_VERSION >= QT_VERSION_CHECK(" + strings.Replace(*m.ReturnType.BecomesConstInVersion, `.`, `,`, -1) + ",0)\n" +
					fmt.Sprintf("%s %s_%s(%s);\n", "const "+returnCabi, methodPrefixName, m.SafeMethodName(), emitParametersCabi(m, maybeConst+methodPrefixName+"*")) +
					"#else\n" +
					fmt.Sprintf("%s %s_%s(%s);\n", returnCabi, methodPrefixName, m.SafeMethodName(), emitParametersCabi(m, maybeConst+methodPrefixName+"*")) +
					"#endif\n")
			} else {
				ret.WriteString(fmt.Sprintf("%s %s_%s(%s);\n", returnCabi, methodPrefixName, m.SafeMethodName(), emitParametersCabi(m, maybeConst+methodPrefixName+"*")))
			}

			if m.IsSignal {
				addConnect := true
				if _, ok := noQtConnect[methodPrefixName]; ok {
					addConnect = false
				}
				if addConnect {
					ret.WriteString(fmt.Sprintf("%s %s_Connect_%s(%s* self, intptr_t slot);\n", m.ReturnType.RenderTypeCabi(), methodPrefixName, m.SafeMethodName(), methodPrefixName))
				}
			}

			if !virtualEligible {
				continue
			}

			if !AllowVirtual(m) {
				continue
			}

			if (m.IsVirtual || m.IsPrivate || m.IsProtected) && len(virtualMethods) > 0 && virtualEligible {
				ret.WriteString("void " + methodPrefixName + "_On" + m.SafeMethodName() + "(" + maybeConst + methodPrefixName + "* self, intptr_t slot);\n")
				ret.WriteString(fmt.Sprintf("%s %s_QBase%s(%s);\n", returnCabi, methodPrefixName, m.SafeMethodName(), emitParametersCabi(m, maybeConst+methodPrefixName+"*")))
			}
		}
		// if filename == "qmetatype.h" {
		// 	ret.WriteString("bool QMetaType_RegisterConverterFunction(const ConverterFunction& f, QMetaType* from, QMetaType* to);\n")
		// 	ret.WriteString("bool QMetaType_RegisterMutableViewFunction(const MutableViewFunction& f, QMetaType* from, QMetaType* to);\n")
		// }

		for _, m := range virtualMethods {
			if c.ClassName == "QTest::QTouchEventSequence" || !virtualEligible {
				continue
			}
			if _, ok := skippedMethods[methodPrefixName+"_"+m.SafeMethodName()]; ok {
				continue
			}
			if _, exists := seenClassMethods[methodPrefixName+"_"+m.SafeMethodName()]; !exists {
				seenClassMethods[methodPrefixName+"_"+m.SafeMethodName()] = struct{}{}
			} else {
				continue
			}

			cppClassName := strings.Replace(c.ClassName, `::`, ``, -1) + "*"
			maybeConst := ifv(m.IsConst, "const ", "")

			ret.WriteString(m.ReturnType.RenderTypeCabi() + " " + methodPrefixName + "_" + m.SafeMethodName() + "(" +
				emitParametersCabi(m, maybeConst+cppClassName) + ");\n")

			ret.WriteString("void " + methodPrefixName + "_On" + m.SafeMethodName() + "(" + maybeConst + methodPrefixName + "* self, intptr_t slot);\n")
			ret.WriteString(m.ReturnType.RenderTypeCabi() + " " + methodPrefixName + "_QBase" + m.SafeMethodName() + "(" +
				emitParametersCabi(m, maybeConst+cppClassName) + ");\n")
		}

		for _, m := range c.PrivateSignals {
			ret.WriteString(fmt.Sprintf("%s %s_Connect_%s(%s* self, intptr_t slot);\n", m.ReturnType.RenderTypeCabi(), methodPrefixName, m.SafeMethodName(), methodPrefixName))
		}

		// delete
		if c.CanDelete && (len(c.Methods) > 0 || len(c.VirtualMethods()) > 0 || len(c.Ctors) > 0) {
			ret.WriteString(fmt.Sprintf("void %s_Delete(%s* self);\n", methodPrefixName, methodPrefixName))
		}

		ret.WriteString("\n")
	}

	ret.WriteString(
		`#ifdef __cplusplus
} /* extern C */
#endif 

#endif
`)

	return ret.String(), qtstructdefs, nil
}

func emitBindingCpp(src *CppParsedHeader, filename, packageName string) (string, error) {
	if len(src.Classes) == 0 {
		return "", nil
	}

	ret := strings.Builder{}
	seenClassMethods := map[string]struct{}{}
	src.DetectedFlags = src.RegisterFlags()

	zfs := zigFileState{
		imports:            map[string]struct{}{},
		currentPackageName: packageName,
		currentHeaderName:  strings.TrimSuffix(filename, ".h"),
	}

	for _, ref := range getReferencedTypes(src, &zfs) {

		if ref == "QString" {
			ret.WriteString("#include <QString>\n")
			ret.WriteString("#include <QByteArray>\n")
			ret.WriteString("#include <cstring>\n")
			continue
		}

		if strings.Contains(ref, `::`) {
			ret.WriteString(`#define WORKAROUND_INNER_CLASS_DEFINITION_` + cabiClassName(ref) + "\n")
			continue
		}

		if !ImportHeaderForClass(ref) {
			continue
		}

		ret.WriteString(`#include <` + ref + ">\n")
	}

	ret.WriteString(`#include <` + filename + ">\n")
	ret.WriteString(`#include "lib` + filename + "\"\n")
	ret.WriteString(`#include "lib` + filename + `xx"` + "\n\n")

	for _, c := range src.Classes {
		if c.ClassName == "QWebEngineCookieStore::FilterRequest" {
			continue
		}
		methodPrefixName := cabiClassName(c.ClassName)
		virtualMethods := c.VirtualMethods()
		protectedMethods := c.ProtectedMethods()
		baseMethods := c.Methods
		cppClassName := strings.Replace(c.ClassName, `::`, ``, -1)
		virtualEligible := AllowVirtualForClass(c.ClassName)

		// Add protected methods first
		if virtualEligible && len(virtualMethods) > 0 {
			virtualMethods = append(virtualMethods, protectedMethods...)
		}

		allVirtualsMap := map[string]struct{}{}
		for _, m := range virtualMethods {
			if m.MethodName == "qt_metacall" {
				continue
			}
			allVirtualsMap[c.ClassName+"_"+m.SafeMethodName()] = struct{}{}
		}

		seenVirtualsMap := map[string]struct{}{}

		for _, m := range c.Methods {
			if !m.IsProtected {
				continue
			}

			if _, ok := nonPolymorphicClasses[c.ClassName]; ok {
				continue
			}

			virtualMethods = append(virtualMethods, m)
			seenVirtualsMap[m.MethodName] = struct{}{}
		}

		if virtualEligible && len(virtualMethods) > 0 {
			for _, m := range c.Methods {
				if !m.IsProtected && !m.IsPureVirtual {
					continue
				}
				if _, exists := seenVirtualsMap[m.MethodName]; !exists {
					seenVirtualsMap[m.MethodName] = struct{}{}
				}
			}
		}

		for i, ctor := range c.Ctors {
			// The returned ctor needs to return a C++ pointer for the class itself
			preamble, forwarding := emitParametersCABI2CppForwarding(ctor.Parameters, "\t", c.ClassName)

			if ctor.LinuxOnly {
				ret.WriteString(fmt.Sprintf(
					"%s* %s_new%s(%s) {\n"+
						"#ifdef Q_OS_LINUX\n"+
						"%s"+
						"\treturn new %s(%s);\n"+
						"#else\n"+
						"\treturn nullptr;\n"+
						"#endif\n"+
						"}\n"+
						"\n",
					methodPrefixName,
					methodPrefixName,
					maybeSuffix(i),
					emitParametersCabi(ctor, ""),
					preamble,
					c.ClassName, forwarding,
				))

			} else {
				var virtualName, ctorReturn, maybeMoveCtor, maybeCloseMoveCtor string
				if virtualEligible {
					for _, m := range virtualMethods {
						if (m.IsProtected || m.IsVirtual) && len(virtualMethods) > 0 {
							if _, ok := nonPolymorphicClasses[c.ClassName]; ok {
								continue
							}

							virtualName = "Virtual"
							break
						}
					}
				}
				if ctor.IsMoveCtor {
					maybeMoveCtor = "std::move("
					maybeCloseMoveCtor = ")"
				}
				baseReturn := "new " + virtualName + c.ClassName + "(" + maybeMoveCtor + forwarding + maybeCloseMoveCtor + ")"
				ctorReturn = "\t return " + baseReturn

				ret.WriteString(methodPrefixName + "* " + methodPrefixName + "_new" +
					maybeSuffix(i) + "(" + emitParametersCabi(ctor, "") +
					") {\n" + preamble + ctorReturn + ";\n}\n\n")
			}
		}

		if c.HasTrivialCopyAssign && methodPrefixName != "QCborValueConstRef" && methodPrefixName != "QJsonValueConstRef" {
			ret.WriteString("void " + methodPrefixName + "_CopyAssign(" + methodPrefixName + "* self, " + methodPrefixName + "* other) {\n")
			ret.WriteString("    *self = *other;\n")
			ret.WriteString("}\n\n")
		}

		if c.HasTrivialMoveAssign {
			ret.WriteString("void " + methodPrefixName + "_MoveAssign(" + methodPrefixName + "* self, " + methodPrefixName + "* other) {\n")
			ret.WriteString("    *self = std::move(*other);\n")
			ret.WriteString("}\n\n")
		}

		seenMethodVariants := map[string]bool{}

		for _, m := range baseMethods {
			// Protected virtual methods will be bound separately (the only
			// useful thing is to expose calling the virtual base)
			// Protected non-virtual methods should always be hidden
			if m.IsProtected && !m.IsVirtual {
				continue
			}
			mSafeMethodName := m.SafeMethodName()
			baseName := c.ClassName + "_" + mSafeMethodName
			if _, ok := allVirtualsMap[baseName]; ok {
				continue
			}
			if _, ok := skippedMethods[baseName]; ok {
				continue
			}
			if (m.IsProtected || m.IsPrivate) && (!virtualEligible || len(virtualMethods) == 0) {
				continue
			}
			var showHiddenParams bool
			if _, ok := seenMethodVariants[baseName]; ok {
				showHiddenParams = true
			} else {
				seenMethodVariants[baseName] = false
			}
			preamble, forwarding := emitParametersCABI2CppForwarding(m.Parameters, "\t", c.ClassName)

			// Need to take an extra 'self' parameter
			// callTarget is an rvalue representing the full C++ function call.
			vVar := "v" + strings.ToLower(methodPrefixName)
			callTarget := "self->"
			if (m.IsVirtual || m.IsPrivate || m.IsProtected) && len(virtualMethods) > 0 && virtualEligible {
				if _, exists := seenVirtualsMap[m.MethodName]; exists {
					callTarget = vVar + "->"
				}
			}

			if m.IsStatic {
				callTarget = c.ClassName + "::"
			}

			callTarget += m.CppCallTarget() + "(" + forwarding + ")"

			// Qt 6.8 moved many operator== implementations from class methods
			// into global operators.
			// By using infix syntax, either can be called
			if m.IsReadonlyOperator() && len(m.Parameters) == 1 {
				operator := m.CppCallTarget()[8:]
				callTarget = "(*self " + operator + " " + forwarding + ")"
			}

			if _, exists := seenClassMethods[methodPrefixName+"_"+m.SafeMethodName()]; !exists {
				seenClassMethods[methodPrefixName+"_"+m.SafeMethodName()] = struct{}{}
			} else {
				continue
			}

			maybeConst := ifv(m.IsConst, "const ", "")

			if m.LinuxOnly {
				ret.WriteString(fmt.Sprintf(
					"%s %s_%s(%s) {\n"+
						"#ifdef Q_OS_LINUX\n"+
						"%s"+
						"%s"+
						"#else\n"+
						"\t%s _ret_invalidOS;\n"+
						"\treturn _ret_invalidOS;\n"+
						"#endif\n"+
						"}\n"+
						"\n",
					m.ReturnType.RenderTypeCabi(), methodPrefixName, m.SafeMethodName(), emitParametersCabi(m, maybeConst+methodPrefixName+"*"),
					preamble,
					emitAssignCppToCabi("\treturn ", m.ReturnType, callTarget),
					m.ReturnType.RenderTypeCabi(),
				))

			} else if m.BecomesNonConstInVersion != nil {

				nonConstCallTarget := "const_cast<" + methodPrefixName + "*>(self)->" + m.CppCallTarget() + "(" + forwarding + ")"

				ret.WriteString("" +
					m.ReturnType.RenderTypeCabi() + " " + methodPrefixName + "_" + m.SafeMethodName() + "(" + emitParametersCabi(m, maybeConst+methodPrefixName+"*") + ") {\n" +
					preamble +
					"// This method was changed from const to non-const in Qt " + *m.BecomesNonConstInVersion + "\n" +
					"#if QT_VERSION < QT_VERSION_CHECK(" + strings.Replace(*m.BecomesNonConstInVersion, `.`, `,`, -1) + ",0)\n" +
					emitAssignCppToCabi("\treturn ", m.ReturnType, callTarget) +
					"#else\n" +
					emitAssignCppToCabi("\treturn ", m.ReturnType, nonConstCallTarget) +
					"#endif\n" +
					"}\n" +
					"\n",
				)

			} else if m.ReturnType.BecomesConstInVersion != nil {

				ret.WriteString("" +
					"// This method's return type was changed from non-const to const in Qt " + *m.ReturnType.BecomesConstInVersion + "\n" +
					"#if QT_VERSION >= QT_VERSION_CHECK(" + strings.Replace(*m.ReturnType.BecomesConstInVersion, `.`, `,`, -1) + ",0)\n" +
					"const " + m.ReturnType.RenderTypeCabi() + " " + methodPrefixName + "_" + m.SafeMethodName() + "(" + emitParametersCabi(m, maybeConst+methodPrefixName+"*") + ") {\n" +
					"#else\n" +
					m.ReturnType.RenderTypeCabi() + " " + methodPrefixName + "_" + m.SafeMethodName() + "(" + emitParametersCabi(m, maybeConst+methodPrefixName+"*") + ") {\n" +
					"#endif\n" +
					preamble +
					emitAssignCppToCabi("\treturn ", m.ReturnType, callTarget) +
					"}\n\n",
				)

			} else {
				returnCabi := m.ReturnType.RenderTypeCabi()
				flagOrEnum := false
				for flagName, flagInfo := range src.DetectedFlags {
					if returnCabi == flagName {
						returnCabi = flagInfo.PropertyType.ParameterType
						flagOrEnum = true
					}
				}
				for _, enum := range src.Enums {
					if returnCabi == enum.CabiEnumName() {
						returnCabi = enum.UnderlyingType.RenderTypeCabi()
						flagOrEnum = true
					}
				}
				returnCallTarget := callTarget
				if flagOrEnum {
					returnCallTarget = "static_cast<" + returnCabi + ">(" + callTarget + ")"
				}

				var virtualCallTarget, vVarTarget, maybeElse, elseClose, virtualStart, virtualClose, baseStart, baseClose, emptyReturn string
				baseName := methodPrefixName + "_" + m.SafeMethodName()
				callbackName := baseName + "_Callback"
				isBaseName := baseName + "_IsBase"

				if (m.IsVirtual || m.IsPrivate || m.IsProtected) && len(virtualMethods) > 0 && virtualEligible {
					if !AllowVirtual(m) {
						goto writeString
					}

					virtualCallTarget = ifv(m.IsPrivate || m.IsProtected, vVar+"->", "((Virtual"+cppClassName+"*)self)->")
					vVarTarget = vVar + "->" + m.CppCallTarget() + "(" + forwarding + ")"
					virtualCallTarget += m.CppCallTarget() + "(" + forwarding + ")"
					maybeElse = "\t} else {\n\t\t"
					baseClose = emitAssignCppToCabi("\treturn ", m.ReturnType, virtualCallTarget) + "\n"
					elseClose = maybeElse + baseClose + "\n"
					if m.IsProtected {
						maybeElse = ""
						baseClose = ""
						elseClose = ""
						returnCallTarget = vVarTarget
						emptyReturn = ifv(!m.ReturnType.Void(), "return {};\n", "")
					}
					virtualStart = "auto* " + vVar + " = dynamic_cast<" + maybeConst + "Virtual" + c.ClassName + "*>(self);\n"
					virtualStart += "if (" + vVar + " && " + vVar + "->isVirtual" + c.ClassName + ") {\n"
					virtualClose = maybeElse + baseClose + "}\n"
				}

			writeString:
				ret.WriteString(returnCabi + " " + methodPrefixName + "_" + m.SafeMethodName() + "(" + emitParametersCabi(m, maybeConst+methodPrefixName+"*") + ") {\n" +
					preamble + virtualStart +
					emitAssignCppToCabi("\treturn ", m.ReturnType, returnCallTarget) +
					virtualClose + emptyReturn + "}\n\n")

				if !virtualEligible {
					goto ToSignal
				}
				if !AllowVirtual(m) {
					goto ToSignal
				}

				if (m.IsVirtual || m.IsProtected) && len(virtualMethods) > 0 && virtualEligible {
					var maybeConst, maybeConstCast, closeConstCast string
					if m.IsConst {
						maybeConstCast = "const_cast<" + "Virtual" + c.ClassName + "*>("
						maybeConst = "const "
						closeConstCast = ")"
					}

					ret.WriteString("// Subclass method to allow providing a virtual method re-implementation\n")
					ret.WriteString("void " + methodPrefixName + "_On" + m.SafeMethodName() + "(" + maybeConst + methodPrefixName + "* self, intptr_t slot) {\n\t" +
						"  auto* " + vVar + " = " + maybeConstCast + "dynamic_cast<" + maybeConst + "Virtual" + c.ClassName + "*>(self)" + closeConstCast + ";\n" +
						"  if ( " + vVar + " && " + vVar + "->isVirtual" + c.ClassName + ") {\n" +
						vVar + "->set" + callbackName + "(reinterpret_cast<Virtual" + c.ClassName + "::" + callbackName + ">(slot));\n\t}\n}\n\n")

					ret.WriteString("// Virtual base class handler implementation\n")
					baseStart = virtualStart + vVar + "->set" + isBaseName + "(true);\n"
					baseClose = emitAssignCppToCabi("\treturn ", m.ReturnType, vVarTarget)
					ret.WriteString(returnCabi + " " + methodPrefixName + "_QBase" + m.SafeMethodName() + "(" + emitParametersCabi(m, maybeConst+methodPrefixName+"*") + ") {\n" +
						preamble + baseStart +
						baseClose + elseClose + "}" + emptyReturn + "\n}\n\n")
				}
			}

		ToSignal:
			if m.IsSignal {
				if _, ok := noQtConnect[methodPrefixName]; ok {
					continue
				}
				signalTarget := "slotFunc(self"

				// Qt 6.8 moved many operator== implementations from class methods
				// into global operators.
				// By using infix syntax, either can be called

				bindingFunc := "\t" + ifv(m.ReturnType.Void(), "", "return ") + signalTarget

				paramArgs := []string{"slot"}
				paramArgDefs := []string{"intptr_t cb"}

				var signalCode, sigCode, sigRet string
				var bindingParams, sigParams []string

				for i, p := range m.Parameters {
					signalCode += emitAssignCppToCabi(fmt.Sprintf("\t\t%s sigval%d = ", p.RenderTypeCabi(), i+1), p, p.ParameterName)
					sigCode += p.RenderTypeCabi()
					sigParams = append(sigParams, p.RenderTypeCabi())
					paramArgs = append(paramArgs, fmt.Sprintf("sigval%d", i+1))
					paramArgDefs = append(paramArgDefs, p.RenderTypeCabi()+" "+p.ParameterName)
					bindingParams = append(bindingParams, fmt.Sprintf("sigval%d", i+1))
				}

				if len(bindingParams) > 0 {
					bindingFunc += ", " + strings.Join(bindingParams, ", ")
				}
				if len(sigParams) > 0 {
					sigRet += ", " + strings.Join(sigParams, ", ")
				}

				signalCode += "\t" + bindingFunc + ");\n\t});\n"

				ret.WriteString(
					"void " + methodPrefixName + "_Connect_" + m.SafeMethodName() + "(" + methodPrefixName + "* self, intptr_t slot) {\n" +
						"\tvoid (*slotFunc)(" + cppClassName + "*" + sigRet + ") = reinterpret_cast<void (*)(" + cppClassName + "*" + sigRet + ")>(slot);\n" +
						"\t" + cppClassName + "::connect(self, &" + c.ClassName + "::" + m.CppCallTarget() + ", [self, slotFunc](" + emitParametersCpp(m, showHiddenParams) + ") {\n" +
						signalCode + "}\n\n",
				)
			}
		}

		// if filename == "qmetatype.h" {
		// 	ret.WriteString("bool QMetaType_RegisterConverterFunction(const ConverterFunction& f, QMetaType* from, QMetaType* to) {\n")
		// 	ret.WriteString("    return QMetaType::registerConverterFunction(f, *from, *to);\n")
		// 	ret.WriteString("}\n\n")

		// 	ret.WriteString("bool QMetaType_RegisterMutableViewFunction(const MutableViewFunction& f, QMetaType* from, QMetaType* to) {\n")
		// 	ret.WriteString("    return QMetaType::registerMutableViewFunction(f, *from, *to);\n")
		// 	ret.WriteString("}\n\n")
		// }

		for _, m := range virtualMethods {
			if c.ClassName == "QTest::QTouchEventSequence" {
				continue
			}

			if !virtualEligible {
				continue
			}

			if _, ok := skippedMethods[methodPrefixName+"_"+m.SafeMethodName()]; ok {
				continue
			}

			if _, exists := seenClassMethods[methodPrefixName+"_"+m.SafeMethodName()]; !exists {
				seenClassMethods[methodPrefixName+"_"+m.SafeMethodName()] = struct{}{}
			} else {
				continue
			}

			var virtualTarget, vVar, maybeConst, maybeConstCast, closeConstCast string

			vbpreamble, vbforwarding := emitParametersCABI2CppForwarding(m.Parameters, "\t\t", c.ClassName)
			vbCallTarget := m.CppCallTarget() + "(" + vbforwarding + ")"
			maybeVirtual := ifv(len(virtualMethods) > 0, "Virtual", "")
			if m.IsProtected || m.IsVirtual {
				if m.IsConst {
					maybeConstCast = "const_cast<" + maybeVirtual + cppClassName + "*>("
					closeConstCast = ")"
					maybeConst = "const "
				}
				vVar = "v" + strings.ToLower(cppClassName)
				virtualTarget = maybeConstCast + "dynamic_cast<" + maybeConst + maybeVirtual + cppClassName + "*>(self)" + closeConstCast
			}

			baseName := methodPrefixName + "_" + m.SafeMethodName()
			isBaseName := baseName + "_IsBase"

			ret.WriteString("// Derived class handler implementation\n")

			if m.ReturnType.QtClassType() && !m.ReturnType.Pointer &&
				m.ReturnType.ParameterType != "QString" && m.ReturnType.ParameterType != "QByteArray" {
				// For Qt class types returned by value, we need to:
				// 1. Get the result and store it in a temporary
				// 2. Create a new heap instance from that temporary
				// The exceptions are QString and QByteArray.
				var emptyReturn string
				maybeSelf := ifv(m.IsPrivate || m.IsProtected, vVar+"->", "((Virtual"+cppClassName+"*)self)->")
				maybeElse := "\t} else {\nreturn new " + m.ReturnType.RenderTypeQtCpp() + "(" + maybeSelf + vbCallTarget + ");\n}"

				// private hack/workaround
				if m.IsProtected || ((methodPrefixName == "QAbstractListModel" || methodPrefixName == "QAbstractTableModel") && m.MethodName == "parent") {
					maybeElse = ""
					emptyReturn = "\t}\nreturn {};\n"
				}

				ret.WriteString(
					m.ReturnType.RenderTypeCabi() + " " + baseName + "(" +
						emitParametersCabi(m, maybeConst+cppClassName+"*") + ") {" +
						"\tauto* " + vVar + " = " + virtualTarget + ";\n" +
						vbpreamble + "\tif (" + vVar + " && " + vVar + "->isVirtual" + methodPrefixName + ") {\n" +
						"\t\treturn new " + m.ReturnType.RenderTypeQtCpp() + "(" + vVar + "->" + vbCallTarget + ");\n" +
						maybeElse + emptyReturn + "\n}\n\n")

				ret.WriteString("// Base class handler implementation\n")

				ret.WriteString(
					m.ReturnType.RenderTypeCabi() + " " + methodPrefixName + "_QBase" + m.SafeMethodName() + "(" +
						emitParametersCabi(m, maybeConst+cppClassName+"*") + ") {" +
						"\tauto* " + vVar + " = " + virtualTarget + ";\n" +
						vbpreamble + "\tif (" + vVar + " && " + vVar + "->isVirtual" + methodPrefixName + ") {\n" +
						vVar + "->set" + isBaseName + "(true);\n" +
						"\t\treturn new " + m.ReturnType.RenderTypeQtCpp() + "(" + vVar + "->" + vbCallTarget + ");\n" +
						maybeElse + emptyReturn + "\n}\n\n")

			} else {

				if !AllowVirtual(m) {
					continue
				}

				var elseReturn string
				virtualReturn := emitAssignCppToCabi("\treturn ", m.ReturnType, vVar+"->"+vbCallTarget)

				if m.IsPrivate || m.IsProtected || m.IsPureVirtual || strings.HasPrefix(cppClassName, "QsciLexer") {
					elseReturn = emitAssignCppToCabi("\treturn ", m.ReturnType, "((Virtual"+cppClassName+"*)self)->"+vbCallTarget)
				} else {
					elseReturn = emitAssignCppToCabi("\treturn ", m.ReturnType, "self->"+cppClassName+"::"+vbCallTarget)
				}

				ret.WriteString(m.ReturnType.RenderTypeCabi() + " " + baseName +
					"(" + emitParametersCabi(m, maybeConst+cppClassName+"*") + ") {" +
					"\tauto* " + vVar + " = " + virtualTarget + ";\n" +
					vbpreamble + "\tif (" + vVar + " && " + vVar + "->isVirtual" + methodPrefixName + ") {\n" +
					virtualReturn + "\t} else {\n" + elseReturn + "\n}\n}\n\n")

				ret.WriteString("// Base class handler implementation\n")
				ret.WriteString(m.ReturnType.RenderTypeCabi() + " " + methodPrefixName + "_QBase" + m.SafeMethodName() +
					"(" + emitParametersCabi(m, maybeConst+cppClassName+"*") + ") {" +
					"\tauto* " + vVar + " = " + virtualTarget + ";\n" +
					vbpreamble + "\tif (" + vVar + " && " + vVar + "->isVirtual" + methodPrefixName + ") {\n" +
					vVar + "->set" + isBaseName + "(true);\n" +
					virtualReturn + "\t} else {\n" + elseReturn + "\n}\n}\n\n")
			}

			callbackName := baseName + "_Callback"
			ret.WriteString("// Auxiliary method to allow providing re-implementation\n")
			ret.WriteString("void " + methodPrefixName + "_On" + m.SafeMethodName() + "(" + maybeConst + methodPrefixName + "* self, intptr_t slot) {\n" +
				"\tauto* " + vVar + " = " + virtualTarget + ";\n" +
				"\tif (" + vVar + " && " + vVar + "->isVirtual" + methodPrefixName + ") {\n" +
				vVar + "->set" + callbackName + "(reinterpret_cast<Virtual" + c.ClassName + "::" + callbackName + ">(slot));\n}\n}\n\n")
		}

		for _, m := range c.PrivateSignals {
			signalTarget := "slotFunc(self"
			bindingFunc := "\t" + ifv(m.ReturnType.Void(), "", "return ") + signalTarget
			paramArgs := []string{"slot"}
			paramArgDefs := []string{"intptr_t cb"}

			var signalCode, sigCode, sigRet string
			var bindingParams, sigParams []string

			for i, p := range m.Parameters {
				signalCode += emitAssignCppToCabi(fmt.Sprintf("\t\t%s sigval%d = ", p.RenderTypeCabi(), i+1), p, p.ParameterName)
				sigCode += p.RenderTypeCabi()
				sigParams = append(sigParams, p.RenderTypeCabi())
				paramArgs = append(paramArgs, fmt.Sprintf("sigval%d", i+1))
				paramArgDefs = append(paramArgDefs, p.RenderTypeCabi()+" "+p.ParameterName)
				bindingParams = append(bindingParams, fmt.Sprintf("sigval%d", i+1))
			}

			if len(bindingParams) > 0 {
				bindingFunc += ", " + strings.Join(bindingParams, ", ")
			}
			if len(sigParams) > 0 {
				sigRet += ", " + strings.Join(sigParams, ", ")
			}

			signalCode += "\t" + bindingFunc + ");\n\t});\n"

			ret.WriteString(
				"void " + methodPrefixName + "_Connect_" + m.SafeMethodName() + "(" + methodPrefixName + "* self, intptr_t slot) {\n" +
					"\tvoid (*slotFunc)(" + cppClassName + "*" + sigRet + ") = reinterpret_cast<void (*)(" + cppClassName + "*" + sigRet + ")>(slot);\n" +
					"\t" + cppClassName + "::connect(self, &" + c.ClassName + "::" + m.CppCallTarget() + ", [self, slotFunc](" + emitParametersCpp(m, false) + ") {\n" +
					signalCode + "}\n\n",
			)
		}

		// Delete
		if c.CanDelete && (len(c.Methods) > 0 || len(c.VirtualMethods()) > 0 || len(c.Ctors) > 0) {
			ret.WriteString(
				"void " + methodPrefixName + "_Delete(" + methodPrefixName + "* self) {\n" +
					"\tdelete self;\n" +
					"}\n\n",
			)
		}
	}
	return ret.String(), nil
}
