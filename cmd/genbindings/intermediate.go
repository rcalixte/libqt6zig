package main

import (
	"log"
	"regexp"
	"slices"
	"strings"
	"unicode"
)

type CppParameter struct {
	ParameterName string
	ParameterType string
	Const         bool
	Pointer       bool
	PointerCount  int
	ByRef         bool
	Optional      bool
	UniquePtr     bool

	IsFunctionPointer bool
	IsStdFunction     bool
	IsStdOptional     bool
	FunctionPointer   *CppMethod

	QtCppOriginalType     *CppParameter // If we rewrote QStringList->QList<String>, this field contains the original QStringList. Otherwise, it's blank
	BecomesConstInVersion *string       // "6,9"
}

type QFlagsInfo struct {
	UnderlyingEnum CppParameter
	CABIType       string
	ZigType        string
}

func (p *CppParameter) ApplyTypedef(matchedUnderlyingType CppParameter) {
	if p.QtCppOriginalType == nil {
		tmp := *p                  // Copy
		p.QtCppOriginalType = &tmp // Overwrite once only, at the earliest base type
	}
	p.ParameterType = matchedUnderlyingType.ParameterType

	// If this was a pointer to a typedef'd type, or a typedef of a pointer type, we need to preserve that
	p.Const = p.Const || matchedUnderlyingType.Const
	p.Pointer = p.Pointer || matchedUnderlyingType.Pointer
	p.PointerCount += matchedUnderlyingType.PointerCount
	p.ByRef = p.ByRef || matchedUnderlyingType.ByRef
	p.Optional = p.Optional || matchedUnderlyingType.Optional
}

func (p *CppParameter) PointerTo() CppParameter {
	ret := *p // Copy
	ret.Pointer = true
	ret.PointerCount++
	return ret
}

func (p *CppParameter) ConstCast(isConst bool) CppParameter {
	ret := *p // Copy
	ret.Const = isConst
	return ret
}

func (p *CppParameter) GetQtCppType() *CppParameter {
	if p.QtCppOriginalType != nil {
		if !strings.Contains(p.QtCppOriginalType.ParameterType, "::") && strings.Contains(p.ParameterType, "::") &&
			unicode.IsUpper(rune(p.QtCppOriginalType.ParameterType[0])) && !strings.HasPrefix(p.ParameterType, "QInt") {
			return p
		}
		if strings.Contains(p.ParameterType, p.QtCppOriginalType.ParameterType) && !strings.HasPrefix(p.ParameterType, "QFlags<") {
			return p
		}
		if !strings.Contains(p.ParameterType, "<") && strings.Count(p.ParameterType, "::") > strings.Count(p.QtCppOriginalType.ParameterType, "::") {
			return p
		}
		return p.QtCppOriginalType
	}

	return p
}

func (p CppParameter) QFlagsOf() (QFlagsInfo, bool) {
	if strings.HasPrefix(p.ParameterType, "QFlags<") {
		ret := parseSingleTypeString(p.ParameterType[7:len(p.ParameterType)-1], "")
		ret.ParameterName = p.ParameterName + "_qf"

		if e, ok := KnownEnums[ret.ParameterType]; ok {
			return QFlagsInfo{
				UnderlyingEnum: e.Enum.UnderlyingType,
				CABIType:       e.EnumTypeCABI,
				ZigType:        e.EnumTypeZig,
			}, true
		}

		return QFlagsInfo{
			UnderlyingEnum: ret,
			CABIType:       "int32_t",
			ZigType:        "i32",
		}, true
	}

	if under := p.QtCppOriginalType; under != nil {
		if strings.HasPrefix(under.ParameterType, "QFlags<") {
			ret := parseSingleTypeString(under.ParameterType[7:len(under.ParameterType)-1], "")
			ret.ParameterName = under.ParameterName + "_qf"

			if e, ok := KnownEnums[ret.ParameterType]; ok {
				return QFlagsInfo{
					UnderlyingEnum: e.Enum.UnderlyingType,
					CABIType:       e.EnumTypeCABI,
					ZigType:        e.EnumTypeZig,
				}, true
			}

			return QFlagsInfo{
				UnderlyingEnum: ret,
				CABIType:       "int32_t",
				ZigType:        "i32",
			}, true
		}
	}

	return QFlagsInfo{}, false
}

func (p CppParameter) IsFlagType() bool {
	_, ok := p.QFlagsOf()
	return ok
}

func (p CppParameter) QtClassType() bool {

	// QtClassType returns false for our customized container types (QList,
	// QMap, QSet, etc)

	if p.ParameterType == "QString" || p.ParameterType == "QByteArray" {
		return true
	}

	// as of Qt 6.8, quint128 is detected as a class
	if p.ParameterType == "quint128" {
		return false
	}

	// Maybe if it's an inner class
	if _, ok := KnownClassnames[p.ParameterType]; ok {
		return true
	}

	if p.ParameterType == "Scintilla::Internal::Point" {
		return true
	}

	return false
}

func (p CppParameter) IsKnownEnum() bool {
	_, ok := KnownEnums[p.ParameterType]
	return ok
}

func IsKnownClass(className string) bool {
	// as of Qt 6.8, quint128 is detected as a class
	if className == "quint128" {
		return false
	}

	_, ok := KnownClassnames[className]
	return ok
}

func IsKnownTypeDef(className string) bool {
	_, ok := KnownTypedefs[className]
	return ok
}

func (p CppParameter) QListOf() (CppParameter, string, bool) {
	for i := range qtListTypes {
		if strings.HasPrefix(p.ParameterType, qtListTypes[i]+"<") && strings.HasSuffix(p.ParameterType, ">") {
			ret := parseSingleTypeString(p.ParameterType[len(qtListTypes[i])+1:len(p.ParameterType)-1], "")
			prefix := strings.ToLower(qtListTypes[i][1:2])
			ret.ParameterName = p.ParameterName + "_" + prefix + "v"
			return ret, qtListTypes[i], true
		}
	}

	return CppParameter{}, "", false
}

var (
	qtListTypes = []string{
		"QList",
		"QQueue",
		"QSpan",
		"QStack",
		"QVector",
		"std::vector",
	}

	qtMapTypes = []string{
		"QHash",
		"QMap",
		"QMultiHash",
		"QMultiMap",
		"std::map",
		"std::multimap",
		"std::unordered_map",
		"std::unordered_multimap",
	}

	qtPairTypes = []string{
		"QPair",
		"std::pair",
	}
)

func (p CppParameter) QMapOf() (CppParameter, CppParameter, string, bool) {
	// n.b. Need to block QMap<k,v>::const_iterator
	for i := range qtMapTypes {
		if strings.HasPrefix(p.ParameterType, qtMapTypes[i]+"<") && strings.HasSuffix(p.ParameterType, ">") {
			interior := tokenizeMultipleParameters(p.ParameterType[len(qtMapTypes[i])+1 : len(p.ParameterType)-1])
			if len(interior) != 2 {
				panic(qtMapTypes[i] + "<> has unexpected number of template arguments")
			}

			parameterSuffixPrefix := "_" + strings.ToLower(qtMapTypes[i][1:])
			first := parseSingleTypeString(interior[0], "")
			first.ParameterName = p.ParameterName + parameterSuffixPrefix + "key"
			second := parseSingleTypeString(interior[1], "")
			second.ParameterName = p.ParameterName + parameterSuffixPrefix + "val"
			return first, second, qtMapTypes[i], true
		}
	}

	return CppParameter{}, CppParameter{}, "", false
}

func (p CppParameter) QPairOf() (CppParameter, CppParameter, bool) {
	for i := range qtPairTypes {
		if strings.HasPrefix(p.ParameterType, qtPairTypes[i]+"<") && strings.HasSuffix(p.ParameterType, ">") {
			index := len(qtPairTypes[i]) + 1
			interior := tokenizeMultipleParameters(p.ParameterType[index : len(p.ParameterType)-1])
			if len(interior) != 2 {
				panic(qtPairTypes[i] + "<> has unexpected number of template arguments")
			}

			first := parseSingleTypeString(interior[0], "")
			first.ParameterName = p.ParameterName + "_first"
			second := parseSingleTypeString(interior[1], "")
			second.ParameterName = p.ParameterName + "_second"
			return first, second, true
		}
	}

	return CppParameter{}, CppParameter{}, false
}

func (p CppParameter) QSetOf() (CppParameter, bool) {
	if strings.HasPrefix(p.ParameterType, "QSet<") {
		ret := parseSingleTypeString(p.ParameterType[5:len(p.ParameterType)-1], "")
		ret.ParameterName = p.ParameterName + "_sv"
		return ret, true
	}

	return CppParameter{}, false
}

func (p CppParameter) UniquePtrOf() (CppParameter, bool) {
	if strings.HasPrefix(p.ParameterType, "std::unique_ptr<") {
		uType := strings.Split(p.ParameterType[16:len(p.ParameterType)-1], ",")
		if len(uType) > 1 {
			return CppParameter{}, false
		}
		ret := parseSingleTypeString(uType[0], "")
		ret.ParameterName = p.ParameterName + "_up"
		ret.UniquePtr = true
		return ret, true
	}

	return CppParameter{}, false
}

func (p CppParameter) IntType() bool {

	if p.IsKnownEnum() || p.GlIntType() || p.IsChronoSeconds() {
		return true
	}

	switch p.ParameterType {
	case "int", "unsigned int", "uint",
		"short", "unsigned short", "ushort", "qint16", "quint16", "uint16_t", "int16_t",
		"qint8", "quint8",
		"unsigned char", "signed char", "uchar",
		"long", "unsigned long", "ulong", "qint32", "quint32", "int32_t", "uint32_t",
		"longlong", "ulonglong", "qlonglong", "qulonglong", "qint64", "quint64", "int64_t", "uint64_t", "long long", "unsigned long long",
		"qintptr", "quintptr", "uintptr_t", "intptr_t",
		"qsizetype", "size_t",
		"QIntegerForSizeof<void *>::Unsigned",
		"QIntegerForSizeof<void *>::Signed",
		"QIntegerForSizeof<std::size_t>::Signed",
		"qptrdiff", "ptrdiff_t",
		"double", "float", "qreal", "quint128":
		return true

	case "char":
		// Only count char as an integer type with cast assertions if it's
		// not possibly a char* string in disguise
		// (However, unsigned chars are always like ints)
		return !p.Pointer

	default:
		return false
	}
}

func (p CppParameter) GlIntType() bool {
	switch p.ParameterType {
	case "GLbitfield", "GLboolean", "GLbyte", "GLchar", "GLdouble", "GLenum", "GLfloat",
		"GLint", "GLint64", "GLintptr", "GLshort", "GLsizei", "GLsizeiptr", "GLubyte",
		"GLuint", "GLuint64", "GLushort":
		return true

	default:
		return false
	}
}

func (p CppParameter) IsChronoSeconds() bool {
	return strings.HasPrefix(p.ParameterType, "std::chrono::") && strings.HasSuffix(p.ParameterType, "seconds")
}

func IsMultiHashMap(containerType string) bool {
	switch containerType {
	case "QMultiHash", "QMultiMap",
		"std::multimap", "std::unordered_multimap":
		return true
	default:
		return false
	}
}

func IsOrderedMap(containerType string) bool {
	switch containerType {
	case "QMap", "QMultiMap",
		"std::map", "std::multimap":
		return true
	default:
		return false
	}
}

func (p CppParameter) StdHashMapType() bool {
	if slices.Contains(qtMapTypes, p.ParameterType) && strings.HasPrefix(p.ParameterType, "std::") {
		return true
	}

	return false
}

func (p CppParameter) Void() bool {
	return (p.ParameterType == "void" || p.ParameterType == "GLvoid") && !p.Pointer
}

type CppProperty struct {
	PropertyName string
	PropertyType string
	Visibility   string
}

type CppFlagProperty struct {
	PropertyName string
	PropertyType CppParameter
}

type CppMethod struct {
	MethodName         string       // C++ method name, unless OverrideMethodName is set, in which case a nice alternative name
	OverrideMethodName string       // C++ method name, present only if we changed the target
	ReturnType         CppParameter // Name not used
	Parameters         []CppParameter
	IsStatic           bool
	IsMoveCtor         bool
	IsSignal           bool
	IsConst            bool
	IsVariable         bool
	IsPrivate          bool
	IsVirtual          bool
	IsPureVirtual      bool           // Virtual method was declared with = 0 i.e. there is no base method here to call
	IsProtected        bool           // If true, we can't call this method but we may still be able to overload it
	IsFinal            bool           // If true, this method cannot be overridden
	HiddenParams       []CppParameter // Populated if there is an overload with more parameters
	InheritedFrom      string
	InheritedInClass   string
	VariableFieldName  string

	// Special quirks
	FossOnly                   bool
	BecomesNonConstInVersion   *string // "6,7"
	HasStdFunctionPointerParam bool
}

func (m CppMethod) CppCallTarget() string {
	if m.OverrideMethodName != "" {
		return m.OverrideMethodName
	}
	return m.MethodName
}

func (m *CppMethod) Rename(newName string) {
	if m.OverrideMethodName == "" {
		m.OverrideMethodName = m.MethodName
	} else {
		// If it was already set, we're already a level of overload resolution deep - preserve it
	}

	m.MethodName = newName
}

func IsArgcArgv(params []CppParameter, pos int) bool {
	// Check if the arguments starting at position=pos are the argc/argv pattern.
	// QApplication/QGuiApplication constructors are the only expected example of this.
	return (len(params) > pos+1 &&
		params[pos].ParameterName == "argc" &&
		params[pos].ParameterType == "int" &&
		params[pos].ByRef &&
		params[pos+1].ParameterName == "argv" &&
		params[pos+1].ParameterType == "char") &&
		params[pos+1].Pointer &&
		params[pos+1].PointerCount == 2
}

func IsReceiverMethod(params []CppParameter, pos int) bool {
	// Check if the arguments starting at position=pos are the receiver/member pattern.
	// QMenu->addAction is the main example of this
	return (len(params) > pos+1 &&
		params[pos].ParameterName == "receiver" &&
		params[pos].ParameterType == "QObject" &&
		params[pos].Pointer &&
		params[pos+1].ParameterName == "member" &&
		params[pos+1].ParameterType == "char" &&
		params[pos+1].Pointer)
}

func (nm CppMethod) IsReceiverMethod() bool {
	// Returns true if any of the parameters use the receiver-method pattern
	// Restricted to addAction and open
	for i := 0; i < len(nm.Parameters); i++ {
		if IsReceiverMethod(nm.Parameters, i) {
			if nm.MethodName == "addAction" || nm.MethodName == "open" {
				return true
			}
		}
	}
	return false
}

func (nm CppMethod) SafeMethodName() string {
	// Strip redundant Qt prefix, we know these are all Qt functions
	tmp := strings.TrimPrefix(nm.MethodName, "qt_")

	// Operator-overload methods have names not representable in binding
	// languages. Replace more specific cases first
	replacer := strings.NewReplacer(

		// "operator " with a trailing space only occurs in conversion operators
		// Add a fake _ here, but it will be replaced with camelcase in the regex below
		"operator ", "To ",
		"::", "__", // e.g. "operator QCborError::Code"

		"==", "Equal",
		"!=", "NotEqual",
		">=", "GreaterOrEqual",
		"<=", "LesserOrEqual",
		"=", "Assign",

		"<<", "ShiftLeft", // Qt classes use it more for stream functions e.g. in QDataStream
		">>", "ShiftRight",
		">", "Greater",
		"<", "Lesser",

		"+", "Plus",
		"-", "Minus",
		"*", "Multiply",
		"/", "Divide",
		"%", "Modulo",

		"&&", "LogicalAnd",
		"||", "LogicalOr",
		"!", "Not",
		"&", "BitwiseAnd",
		"|", "BitwiseOr",
		"~", "BitwiseXor",
		"^", "BitwiseNot",

		"->", "PointerDereference",
		"[]", "Subscript",
		"()", "Call",
	)
	tmp = replacer.Replace(tmp)

	// Also make the first letter uppercase so it becomes public in Go
	tmp = titleCase(tmp)

	// Replace spaces (e.g. "operator long long" with CamelCase
	tmp = regexp.MustCompile(" ([a-zA-Z])").ReplaceAllStringFunc(tmp, func(match string) string { return strings.ToUpper(match[1:]) })

	// Also replace any underscore_case with CamelCase
	// Only catch lowercase letters in this one, not uppercase, as it causes a
	// lot of churn for Scintilla
	tmp = regexp.MustCompile("_([a-z])").ReplaceAllStringFunc(tmp, func(match string) string { return strings.ToUpper(match[1:]) })

	return tmp
}

func (nm CppMethod) IsReadonlyOperator() bool {
	targ := nm.CppCallTarget()
	switch targ {
	case "operator==", "operator!=",
		"operator<", "operator<=", "operator>", "operator>=":
		return true
	}
	return false
}

type CppEnumEntry struct {
	EntryName  string
	EntryValue string
}

type CppEnum struct {
	EnumName       string
	UnderlyingType CppParameter
	Entries        []CppEnumEntry
	IsProtected    bool
}

func (e CppEnum) EnumValueName() string {
	// Strip back one single :: pair from the generated variable name
	lastIndex := strings.LastIndex(e.EnumName, "::")
	if lastIndex == -1 {
		lastIndex = len(e.EnumName)
	}
	return e.EnumName[:lastIndex]
}

func (e CppEnum) EnumClassName() string {
	lastIndex := strings.LastIndex(e.EnumName, "::")
	if lastIndex == -1 {
		lastIndex = 0
	} else {
		lastIndex += 2
	}

	return e.EnumName[lastIndex:]
}

type CppClass struct {
	ClassName            string
	Abstract             bool
	Ctors                []CppMethod // only use the parameters
	DirectInherits       []string    // other class names. This only includes direct inheritance - use AllInheritsClassInfo() to find recursive inheritance
	IncludedClasses      []string    // Classes included by this class
	Methods              []CppMethod
	Props                []CppProperty
	CanDelete            bool
	HasTrivialCopyAssign bool
	HasTrivialMoveAssign bool

	ChildTypedefs  []CppTypedef
	ChildClassdefs []CppClass
	ChildEnums     []CppEnum
	PrivateMethods []string
	PrivateSignals []CppMethod
	IsPolymorphic  bool // If true, this method is polymorphic and can be called on a pointer to a virtual base class
}

// Virtual checks if the class has any virtual methods. This requires global
// state knowledge as virtual methods might have been inherited.
// C++ constructors cannot be virtual.
func (c *CppClass) VirtualMethods() []CppMethod {
	var ret []CppMethod
	var retNames = make(map[string]struct{}, 0) // if name is present, a child class found it first
	var block = slice_to_set(c.PrivateMethods)

	if len(c.Ctors) == 0 {
		// This class can't be constructed
		// Therefore there's no way to get a derived version of it for subclassing
		// (Unless we add custom constructors, but that seems like there would be
		// no in-Qt use for such a thing)
		// Pretend that this class is non-virtual
		return nil
	}

	if !AllowVirtualForClass(c.ClassName) {
		return nil
	}

	for i := range c.Methods {
		if !c.Methods[i].IsVirtual || c.Methods[i].IsSignal || !AllowVirtual(c.Methods[i]) {
			continue
		}

		ret = append(ret, c.Methods[i])
		retNames[c.Methods[i].CppCallTarget()] = struct{}{}
	}

	for i := range c.PrivateMethods {
		block[c.PrivateMethods[i]] = struct{}{}
	}

	// Only allow virtual overrides for direct inherits, not all inherits
	for _, cinfo := range c.AllInheritsClassInfo() {
		for i := range cinfo.Class.Methods {
			if !cinfo.Class.Methods[i].IsVirtual || cinfo.Class.Methods[i].IsSignal || !AllowVirtual(cinfo.Class.Methods[i]) {
				continue
			}
			if _, ok := retNames[cinfo.Class.Methods[i].CppCallTarget()]; ok {
				continue // Already found in a child class
			}

			// It's possible that a child class marked a parent method as private
			// (e.g. Qt 5 QAbstractTableModel marks parent() as private)
			// But then we find the protected version further down
			// Use a blocklist to prevent exposing any deeper methods in the call chain
			if _, ok := block[cinfo.Class.Methods[i].MethodName]; ok {
				continue // Marked as private in a child class
			}

			// The class info we loaded has not had all typedefs applied to it
			// m is copied by value. Mutate it
			applyTypedefs_Method(&cinfo.Class.Methods[i], cinfo.Class.ClassName)
			// Same with astTransformBlocklist
			if err := blocklist_MethodAllowed(&cinfo.Class.Methods[i]); err != nil {
				log.Printf("Blocking method %q(%v): %s", cinfo.Class.Methods[i].MethodName, cinfo.Class.Methods[i].Parameters, err)
				continue
			}

			if c.ClassName != cinfo.Class.ClassName {
				cinfo.Class.Methods[i].InheritedInClass = cinfo.Class.ClassName
			}

			ret = append(ret, cinfo.Class.Methods[i])
			retNames[cinfo.Class.Methods[i].CppCallTarget()] = struct{}{}
		}

		// Append this parent's private-virtuals to blocklist so that we
		// do not consider them for grandparent classes
		for i := range cinfo.Class.PrivateMethods {
			block[cinfo.Class.PrivateMethods[i]] = struct{}{}
		}
	}

	return ret
}

// ProtectedMethods checks if the class has any virtual methods. This requires global
// state knowledge as protected methods might have been inherited.
// This only considers protected methods, not protected constructor overloads.
func (c *CppClass) ProtectedMethods() []CppMethod {
	var ret []CppMethod
	var retNames = make(map[string]struct{}, 0) // if name is present, a child class found it first
	var block = slice_to_set(c.PrivateMethods)

	for i := range c.Methods {

		// A public method with the same name blocks-out any protected methods
		// with the same name (even if the signature is different).
		// e.g.
		// QTextList::setFormat(const QTextListFormat&) [PUBLIC] inherits
		// QTextBlockGroup inherits
		// QTextObject::setFormat(const QTextFormat&) [PROTECTED]
		// FIXME support selecting the parent overload(?)

		if !c.Methods[i].IsProtected || c.Methods[i].IsVirtual || c.Methods[i].IsSignal {
			block[c.Methods[i].MethodName] = struct{}{}
			continue
		}

		ret = append(ret, c.Methods[i])
		retNames[c.Methods[i].CppCallTarget()] = struct{}{}
	}

	for i := range c.PrivateMethods {
		block[c.PrivateMethods[i]] = struct{}{}
	}

	for _, cinfo := range c.AllInheritsClassInfo() {

		for i := range cinfo.Class.Methods {
			if !cinfo.Class.Methods[i].IsProtected || cinfo.Class.Methods[i].IsVirtual || cinfo.Class.Methods[i].IsSignal {
				continue
			}

			if _, ok := retNames[cinfo.Class.Methods[i].CppCallTarget()]; ok {
				continue // Already found in a child class
			}

			// It's possible that a child class marked a parent method as private
			// (e.g. Qt 5 QAbstractTableModel marks parent() as private)
			// But then we find the protected version further down
			// Use a blocklist to prevent exposing any deeper methods in the call chain
			if _, ok := block[cinfo.Class.Methods[i].MethodName]; ok {
				continue // Marked as private in a child class
			}

			// The class info we loaded has not had all typedefs applied to it
			// m is copied by value. Mutate it
			applyTypedefs_Method(&cinfo.Class.Methods[i], cinfo.Class.ClassName)
			// Same with astTransformBlocklist
			if err := blocklist_MethodAllowed(&cinfo.Class.Methods[i]); err != nil {
				log.Printf("Blocking method %q(%v): %s", cinfo.Class.Methods[i].MethodName, cinfo.Class.Methods[i].Parameters, err)
				continue
			}

			if c.ClassName != cinfo.Class.ClassName {
				cinfo.Class.Methods[i].InheritedInClass = cinfo.Class.ClassName
			}

			ret = append(ret, cinfo.Class.Methods[i])
			retNames[cinfo.Class.Methods[i].CppCallTarget()] = struct{}{}
		}

		// Append this parent's private-virtuals to blocklist so that we
		// do not consider them for grandparent classes
		for i := range cinfo.Class.PrivateMethods {
			block[cinfo.Class.PrivateMethods[i]] = struct{}{}
		}
	}

	return ret
}

// AllInheritsClassInfo recursively finds and lists all the parent classes of this class.
// It returns closest-ancestor-first.
func (c *CppClass) AllInheritsClassInfo() []lookupResultClass {
	var ret []lookupResultClass

	// FIXME prevent duplicates arising from diamond inheritance

	for _, baseClassInfo := range c.DirectInheritClassInfo() {

		ret = append(ret, baseClassInfo)

		recurseInfo := baseClassInfo.Class.AllInheritsClassInfo()
		ret = append(ret, recurseInfo...)
	}

	return ret
}

// DirectInheritClassInfo looks up the CppClass for each entry in DirectInherits.
func (c *CppClass) DirectInheritClassInfo() []lookupResultClass {
	var ret []lookupResultClass

	for i := range c.DirectInherits {
		cinfo, ok := KnownClassnames[c.DirectInherits[i]]
		if !ok && AllowClass(c.ClassName) {
			if strings.HasPrefix(c.DirectInherits[i], "QList<") || strings.HasPrefix(c.DirectInherits[i], "QMap<") {
				// OK, allow these to slip through
				// e.g. QItemSelection extends a QList<> and KIO::MetaData extends a QMap<>
				continue
			} else {
				if inheriteds, ok := AllowInheritedClass(c.ClassName); ok {
					for j := range inheriteds {
						if cppClass, ok := KnownClassnames[inheriteds[j]]; ok {
							ret = append(ret, cppClass)

							if !slices.Contains(c.DirectInherits, inheriteds[j]) {
								c.DirectInherits = append(c.DirectInherits, inheriteds[j])
							}
						}
					}
					continue
				} else {
					panic("Class " + c.ClassName + " inherits from unknown class " + c.DirectInherits[i])
				}
			}
		}

		ret = append(ret, cinfo)
	}

	return ret
}

type CppTypedef struct {
	Alias          string
	UnderlyingType CppParameter
}

type CppParsedHeader struct {
	Filename string
	Typedefs []CppTypedef
	Enums    []CppEnum
	Classes  []CppClass
}

func (c CppParsedHeader) Empty() bool {
	// If there are only typedefs, that still counts as empty since typedefs
	// are fully resolved inside genbindings, not exposed in MIQT classes

	return len(c.Enums) == 0 && len(c.Classes) == 0
}

func (c *CppParsedHeader) AddContentFrom(other *CppParsedHeader) {
	c.Classes = append(c.Classes, other.Classes...)
	c.Enums = append(c.Enums, other.Enums...)
	c.Typedefs = append(c.Typedefs, other.Typedefs...)
}

type InheritedMethod struct {
	Method      CppMethod
	SourceClass string
}
