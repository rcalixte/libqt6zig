package main

import (
	"errors"
	"fmt"
	"log"
	"strconv"
	"strings"
)

var (
	ErrTooComplex = errors.New("type declaration is too complex to parse")
	ErrNoContent  = errors.New("there's no content to include")

	// Qt container types that can hold other types
	qtContainers = []string{
		"QHash<",
		"QList<",
		"QMap<",
		"QPair<",
		"QQueue<",
		"QSet<",
		"QStack<",
		"QVector<",
	}

	noCopyAssign = map[string]struct{}{
		"QCborValueConstRef":          {},
		"QDirListing::const_iterator": {},
		"QJsonValueConstRef":          {},
	}
)

// parseHeader parses a whole C++ header into our CppParsedHeader intermediate format.
func parseHeader(topLevel []interface{}, addNamePrefix string) (*CppParsedHeader, error) {

	var ret CppParsedHeader

nextTopLevel:
	for _, node := range topLevel {

		node, ok := node.(map[string]interface{})
		if !ok {
			return nil, errors.New("inner[] element not an object")
		}

		kind, ok := node["kind"].(string)
		if !ok {
			return nil, errors.New("node has no kind")
		}

		switch kind {

		case "CXXRecordDecl":

			// Process the inner class definition
			obj, err := processClassType(node, addNamePrefix)
			if err != nil {
				if errors.Is(err, ErrNoContent) {
					log.Printf("-> Skipping (%v)\n", err)
					continue
				}

				// A real error (shouldn't happen)
				panic(err)
			}

			ret.Classes = append(ret.Classes, obj)

		case "StaticAssertDecl":
			// ignore

		case "ClassTemplateDecl",
			"ClassTemplateSpecializationDecl",
			"ClassTemplatePartialSpecializationDecl",
			"FunctionTemplateDecl",
			"BuiltinTemplateDecl",                  // Scintilla
			"VarTemplatePartialSpecializationDecl", // e.g. Qt6 qcontainerinfo.h
			"VarTemplateSpecializationDecl",        // e.g. qhashfunctions.h
			"TypeAliasTemplateDecl",                // e.g. qendian.h
			"VarTemplateDecl":                      // e.g. qglobal.h
			// Template stuff probably can't be supported in the binding since
			// we would need to link a concrete instantiation for each type in
			// the CABI
			// Ignore this node

		case "FileScopeAsmDecl":
		// ignore

		case "NamespaceDecl",
			"NamespaceAliasDecl":
			// Parse everything inside the namespace with prefix, as if it is
			// a whole separate file
			// Then copy the parsed elements back into our own file
			namespace, ok := node["name"].(string)
			if !ok {
				// Qt 5 has none of these
				// Qt 6 has some e.g. qloggingcategory.h
				// Treat it as not having existed
				continue nextTopLevel
			}

			namespaceInner, ok := node["inner"].([]interface{})
			if !ok {
				// A namespace declaration with no inner content means that, for
				// the rest of this whole file, we are in this namespace
				// Update our own `addNamePrefix` accordingly
				addNamePrefix += namespace + "::"

			} else {

				contents, err := parseHeader(namespaceInner, addNamePrefix+namespace+"::")
				if err != nil {
					panic(err)
				}

				ret.AddContentFrom(contents)
			}

		case "EmptyDecl":
			// Ignore

		case "FunctionDecl":
			fn, err := parseFunctionDecl(node)
			if err != nil {
				return nil, err
			}
			if fn == nil {
				continue nextTopLevel
			}

			// Handle class method
			if className := getClassFromMangledName(fn.mangledName); className != "" {
				if shouldSkipClass(className) {
					continue nextTopLevel
				}

				method := fn.createMethod()
				if err := addMethodToClass(&ret.Classes, className, method); err != nil {
					continue nextTopLevel
				}
			}

		case "EnumDecl":
			// Child class enum
			en, err := processEnum(node, addNamePrefix, VsPublic)
			if err != nil {
				panic(fmt.Errorf("processEnum: %w", err)) // A real problem
			}

			// n.b. In some cases we may produce multiple "copies" of an enum
			// (e.g. qcborcommon and qmetatype both define QCborSimpleType)
			// Allow, but use a transform pass to avoid multiple definitions of
			// it
			ret.Enums = append(ret.Enums, en)

		case "VarDecl":
			// TODO e.g. qmath.h
			// We could probably generate setter/getter for this in the CABI

		case "CXXConstructorDecl":
			// TODO (why is this at the top level? e.g qobject.h)

		case "CXXDestructorDecl":
			// ignore

		case "CXXConversionDecl":
			// TODO (e.g. qbytearray.h)

		case "LinkageSpecDecl":
			// TODO e.g. qfuturewatcher.h
			// Probably can't be supported in the Go binding

		case "AbiTagAttr":
			// e.g. scintilla.org ScintillaEditBase
		case "VisibilityAttr":
			// e.g. scintilla.org ScintillaEditBase
			// Don't understand why this appears at top level??

		case "UsingDirectiveDecl", // qtextstream.h
			"UsingDecl",       // qglobal.h
			"UsingShadowDecl": // global.h
			// TODO e.g.
			// Should be treated like a typedef

		case "TypeAliasDecl", "TypedefDecl":
			td, err := processTypedef(node, addNamePrefix)
			if err != nil {
				return nil, fmt.Errorf("processTypedef: %w", err)
			}
			ret.Typedefs = append(ret.Typedefs, td)

		case "CXXMethodDecl":
			// A C++ class method implementation directly in the header
			// Skip over these

		case "FullComment":
			// Safe to skip

		default:
			return nil, fmt.Errorf("missing handling for clang ast node type %q", kind)
		}
	}

	return &ret, nil // done
}

// shouldPreferQualType returns true if we should use the qualType instead of
// the desugared type based on certain type patterns
func shouldPreferQualType(qualType string) bool {
	if strings.Contains(qualType, "intptr") || strings.Contains(qualType, "_t") ||
		strings.HasPrefix(qualType, "uint") || strings.Contains(qualType, "ushort") ||
		strings.Contains(qualType, "quint") || strings.Contains(qualType, "qint") ||
		strings.Contains(qualType, "qptrdiff") || strings.HasPrefix(qualType, "qsize") ||
		strings.HasPrefix(qualType, "QList<") || strings.HasPrefix(qualType, "QPair<") ||
		strings.HasPrefix(qualType, "QIntegerForSizeof<") {
		return true
	}
	return false
}

// getPreferredType returns either the desugared type or qual type based on our rules
func getPreferredType(node interface{}) string {
	if node == nil {
		return ""
	}

	nodeMap, ok := node.(map[string]interface{})
	if !ok {
		return ""
	}

	var desugared, qualType string
	if d, ok := nodeMap["desugaredQualType"].(string); ok {
		desugared = d
	}
	if q, ok := nodeMap["qualType"].(string); ok {
		qualType = q
	}

	desugared = strings.ReplaceAll(desugared, "enum ", "")
	desugared = strings.ReplaceAll(desugared, "::enum_type", "")
	qualType = strings.ReplaceAll(qualType, "enum ", "")
	qualType = strings.ReplaceAll(qualType, "::enum_type", "")

	if qualType != "" && shouldPreferQualType(qualType) {
		return qualType
	}
	if desugared != "" {
		return desugared
	}
	return qualType
}

// processTypedef parses a single C++ typedef into our intermediate format.
func processTypedef(node map[string]interface{}, addNamePrefix string) (CppTypedef, error) {
	// Must have a name
	nodename, ok := node["name"].(string)
	if !ok {
		return CppTypedef{}, errors.New("node has no name")
	}

	if typ, ok := node["type"].(map[string]interface{}); ok {
		qualType := getPreferredType(typ)
		if qualType != "" {
			return CppTypedef{
				Alias:          addNamePrefix + nodename,
				UnderlyingType: parseSingleTypeString(qualType),
			}, nil
		}
	}

	return CppTypedef{}, errors.New("processTypedef: ???")
}

type visibilityState int

const (
	VsPublic    visibilityState = 1
	VsProtected visibilityState = 2
	VsPrivate   visibilityState = 3
)

var (
	bruteForceMethods = map[string]struct{}{
		"QItemDelegate_selectedPixmap":  {},
		"QPixmap_fromImageInPlace":      {},
		"QThread_setTerminationEnabled": {},
		"QsciScintillaBase_bytesAsText": {},
		"QsciScintillaBase_textAsBytes": {},
	}
)

// Returns true if this method is required as part of the class's virtual interface
func (c *CppClass) IsRequiredProtectedMethod(m *CppMethod) bool {
	if !m.IsProtected || m.IsVirtual {
		return true // Not protected or is virtual - existing rules apply
	}

	// First validate the method can be bound safely
	if err := AllowMethod(c.ClassName, *m); err != nil {
		return false
	}

	// Check if this class has virtual methods - if not, protected methods aren't needed
	hasVirtual := false
	for _, method := range c.Methods {
		if method.IsVirtual || method.IsPureVirtual {
			hasVirtual = true
			break
		}
	}
	if !hasVirtual {
		return false
	}

	// Brute force the removal of certain methods
	if _, ok := bruteForceMethods[c.ClassName+"_"+m.MethodName]; ok {
		return false
	}

	return true
}

// processClassType parses a single C++ class definition into our intermediate format.
func processClassType(node map[string]interface{}, addNamePrefix string) (CppClass, error) {
	var ret CppClass
	ret.CanDelete = true

	// Must have a name
	nodename, ok := node["name"].(string)
	if !ok {
		// This can happen for some nested class definitions e.g. qbytearraymatcher.h::Data
		return CppClass{}, ErrNoContent // errors.New("node has no name")
	}
	nodename = addNamePrefix + nodename

	// Hacks:
	if nodename == "FromBase64Result" {
		nodename = "QByteArray::FromBase64Result"
	}
	if nodename == "Connection" {
		// qobject.h requires this, defined in qobjectdefs.h
		// We produce a type named 'Connection' instead of 'QMetaObject::Connection' as expected, not sure why
		nodename = "QMetaObject::Connection"
	}

	ret.ClassName = nodename

	log.Printf("-> Processing class %q...\n", nodename)

	// Skip over forward class declarations
	// This is determined in two ways:
	// 1. If the class has no inner nodes
	inner, ok := node["inner"].([]interface{})
	if !ok {
		return CppClass{}, ErrNoContent
	}

	// 2. If this class has only one `inner` entry that's a VisibilityAttr
	if len(inner) == 1 {
		if node, ok := inner[0].(map[string]interface{}); ok {
			if kind, ok := node["kind"].(string); ok && kind == "VisibilityAttr" {
				return CppClass{}, ErrNoContent
			}
		}
	}

	// Check if this was 'struct' (default public) or 'class' (default private)
	visibility := VsPublic
	if tagUsed, ok := node["tagUsed"].(string); ok && tagUsed == "class" {
		visibility = VsPrivate
	}

	// Check if this is polymorphic
	if polymorphic, ok := node["isPolymorphic"].(bool); ok && polymorphic {
		ret.IsPolymorphic = polymorphic
	}

	// Check if this is an abstract class
	if definitionData, ok := node["definitionData"].(map[string]interface{}); ok {
		if isAbstract, ok := definitionData["isAbstract"].(bool); ok && isAbstract {
			ret.Abstract = true
		}

		var canConstDefaultInit, canPassInRegisters bool
		if canConstDefaultInit, ok = definitionData["canConstDefaultInit"].(bool); ok {
			canConstDefaultInit = definitionData["canConstDefaultInit"].(bool)
		}
		if canPassInRegisters, ok = definitionData["canPassInRegisters"].(bool); ok {
			canPassInRegisters = definitionData["canPassInRegisters"].(bool)
		}
		if canConstDefaultInit && canPassInRegisters && AllowCtor(ret.ClassName) {
			// Add copy constructor if trivial
			if copyCtor, ok := definitionData["copyCtor"].(map[string]interface{}); ok {
				if trivial, ok := copyCtor["trivial"].(bool); ok && trivial {
					var hasConstParam, implicitHasConstParam bool
					if copyCtor["hasConstParam"] != nil {
						hasConstParam = copyCtor["hasConstParam"].(bool)
					}
					if copyCtor["implicitHasConstParam"] != nil {
						implicitHasConstParam = copyCtor["implicitHasConstParam"].(bool)
					}
					copyCtorMethod := CppMethod{
						Parameters: []CppParameter{{
							ParameterName: "other",
							ParameterType: ret.ClassName,
							Const:         hasConstParam || implicitHasConstParam,
							ByRef:         true,
						}},
						ReturnType: CppParameter{
							ParameterType: ret.ClassName,
							Pointer:       true,
						},
						IsStatic: true,
					}
					ret.Ctors = append(ret.Ctors, copyCtorMethod)
				}
			}

			// Add move constructor if trivial
			if moveCtor, ok := definitionData["moveCtor"].(map[string]interface{}); ok {
				if trivial, ok := moveCtor["trivial"].(bool); ok && trivial {
					moveCtorMethod := CppMethod{
						Parameters: []CppParameter{{
							ParameterName: "other",
							ParameterType: ret.ClassName,
							ByRef:         true,
						}},
						ReturnType: CppParameter{
							ParameterType: ret.ClassName,
							Pointer:       true,
						},
						IsStatic:   true,
						IsMoveCtor: true,
					}
					ret.Ctors = append(ret.Ctors, moveCtorMethod)
				}
			}

			// Store assignment operator info for later use
			if copyAssign, ok := definitionData["copyAssign"].(map[string]interface{}); ok {
				if trivial, ok := copyAssign["trivial"].(bool); ok && trivial {
					if _, ok := noCopyAssign[ret.ClassName]; !ok {
						ret.HasTrivialCopyAssign = trivial
					}
				}
			}

			if moveAssign, ok := definitionData["moveAssign"].(map[string]interface{}); ok {
				if trivial, ok := moveAssign["trivial"].(bool); ok && trivial {
					ret.HasTrivialMoveAssign = trivial
				}
			}
		}
	}

	// Check if this (publicly) inherits another class
	if bases, ok := node["bases"].([]interface{}); ok {
		for _, base := range bases {
			base, ok := base.(map[string]interface{})
			if !ok {
				continue
			}

			access, ok := base["access"].(string)
			if !(ok && access == "public") {
				continue
			}

			if typ, ok := base["type"].(map[string]interface{}); ok {
				qualType := getPreferredType(typ)
				if qualType != "" {
					ret.DirectInherits = append(ret.DirectInherits, qualType)
				}
			}
		}
	}

	isSignal := false

	// Parse all methods

nextMethod:
	for _, node := range inner {
		node, ok := node.(map[string]interface{})
		if !ok {
			return CppClass{}, errors.New("inner[] element not an object")
		}

		kind, ok := node["kind"].(string)
		if !ok {
			panic("inner element has no kind")
		}

		switch kind {
		case "AccessSpecDecl":
			// Swap between visible/invisible
			access, ok := node["access"].(string)
			if !ok {
				panic("AccessSpecDecl missing `access` field")
			}

			switch access {
			case "public":
				visibility = VsPublic
			case "protected":
				visibility = VsProtected
			case "private":
				visibility = VsPrivate
			default:
				panic("unexpected access visibility '" + access + "'")
			}

			// Clang sees Q_SIGNALS/signals as being a macro for `public`
			// If this AccessSpecDecl was imported from a macro, assume it's signals
			isSignal = false
			if loc, ok := node["loc"].(map[string]interface{}); ok {
				if _, ok := loc["expansionLoc"].(map[string]interface{}); ok {
					isSignal = true
				}
			}

		case "FriendDecl":
			// Safe to ignore

		case "VisibilityAttr":
			// These seem to have no useful content

		case "CXXRecordDecl":
			// Child class type definition e.g. QAbstractEventDispatcher::TimerInfo
			// Parse as a whole child class

			if visibility != VsPublic {
				continue // Skip private/protected
			}

			child, err := processClassType(node, nodename+"::")
			if err != nil {
				if errors.Is(err, ErrNoContent) {
					log.Printf("-> Skipping inner class because: %v", err)
					continue
				}
				panic(err) // A real problem
			}

			ret.ChildClassdefs = append(ret.ChildClassdefs, child)

		case "TypeAliasDecl", "TypedefDecl":
			// Child class typedef
			td, err := processTypedef(node, nodename+"::")
			if err != nil {
				panic(fmt.Errorf("processTypedef: %w", err)) // A real problem
			}
			ret.ChildTypedefs = append(ret.ChildTypedefs, td)

		case "EnumDecl":
			// Child class enum

			if visibility == VsPrivate {
				continue // Skip private, ALLOW protected
			}

			en, err := processEnum(node, nodename+"::", visibility)
			if err != nil {
				panic(fmt.Errorf("processEnum: %w", err)) // A real problem
			}
			if len(en.Entries) > 0 { // e.g. qmetatype's version of QCborSimpleType (the real one is in qcborcommon)
				ret.ChildEnums = append(ret.ChildEnums, en)
			}

		case "CXXConstructorDecl":

			if isImplicit, ok := node["isImplicit"].(bool); ok && isImplicit {
				// This is an implicit ctor. Therefore the class is constructable
				// even if we're currently in a `private:` block.

			} else if visibility != VsPublic {
				continue // Skip private/protected
			}

			// Check if this is `= delete`
			if isExplicitlyDeleted(node) {
				continue
			}

			var mm CppMethod

			err := parseMethod(node, &mm, ret.ClassName)
			if err != nil {
				if errors.Is(err, ErrTooComplex) {
					log.Printf("Skipping ctor with complex type")
					continue nextMethod
				}

				// Real error
				return CppClass{}, err
			}

			// Always set IsStatic for constructors, since they can be called without
			// an existing class instance
			mm.IsStatic = true

			if !AllowCtor(ret.ClassName) {
				continue
			}

			ret.Ctors = append(ret.Ctors, mm)

		case "CXXDestructorDecl":
			// We don't need to expose destructors in the binding beyond offering
			// a regular delete function
			// However if this destructor is private or deleted, we should
			// not bind it

			if isImplicit, ok := node["isImplicit"].(bool); ok && isImplicit {
				// This is an implicit dtor. Therefore the class is deletable
				// even if we're currently in a `private:` block.
				ret.CanDelete = true
				continue
			}

			if visibility != VsPublic {
				// TODO Is there any use case for allowing MIQT to overload a virtual destructor?
				ret.CanDelete = false
				continue
			}

			// Check if this is `= delete`
			if isExplicitlyDeleted(node) {
				ret.CanDelete = false
				continue
			}

		case "CXXMethodDecl",
			"CXXConversionDecl": // e.g. `QColor::operator QVariant()`

			// Method
			methodName, ok := node["name"].(string)
			if !ok {
				return CppClass{}, errors.New("method has no name")
			}

			var mm CppMethod
			// If this is a virtual method, we want to allow overriding it even
			// if it is protected
			// But we can only call it if it is public
			if visibility == VsPrivate {
				mm.IsPrivate = true
				ret.PrivateMethods = append(ret.PrivateMethods, methodName)
				continue // Skip private, ALLOW protected
			}

			// Check if this is `= delete`
			if isExplicitlyDeleted(node) {
				continue
			}

			mm.MethodName = methodName

			err := parseMethod(node, &mm, ret.ClassName)
			if err != nil {
				if errors.Is(err, ErrTooComplex) {
					log.Printf("Skipping method %q with complex type", mm.MethodName)
					continue nextMethod
				}

				// Real error
				return CppClass{}, err
			}

			// Check for private signal
			if i, ok := isPrivateSignal(&mm); ok {
				// Remove only the QPrivateSignal parameter, keep other parameters
				mm.Parameters = append(mm.Parameters[:i], mm.Parameters[i+1:]...)
				mm.IsSignal = true
				ret.PrivateSignals = append(ret.PrivateSignals, mm)
				continue nextMethod
			}

			mm.IsSignal = isSignal && !mm.IsStatic && AllowSignal(mm)
			mm.IsProtected = (visibility == VsProtected)

			if mm.IsProtected && !mm.IsVirtual {
				// Protected method, so we can't call it
				// Non-virtual, so we can't override it
				// There is nothing we can do with this function
				if !ret.IsRequiredProtectedMethod(&mm) {
					continue nextMethod
				}
			}

			// Once all processing is complete, pass to exceptions for final decision

			if err := AllowMethod(ret.ClassName, mm); err != nil {
				if errors.Is(err, ErrTooComplex) {
					log.Printf("Skipping method %q with complex type", mm.MethodName)
					continue nextMethod
				}

				// Real error
				return CppClass{}, err
			}

			ApplyQuirks(ret.ClassName, &mm)

			ret.Methods = append(ret.Methods, mm)

		case "FieldDecl":
			fieldName, ok := node["name"].(string)
			if !ok {
				continue // Skip unnamed fields
			}

			if visibility == VsPrivate || visibility == VsProtected {
				continue // Skip private/protected fields
			}

			if fieldName == "psName" || fieldName == "psIconName" {
				continue // Skip broken fields for now
			}

			var fieldType CppParameter
			if typobj, ok := node["type"].(map[string]interface{}); ok {
				qualType := getPreferredType(typobj)
				if qualType != "" {
					fieldType = parseSingleTypeString(qualType)
					fieldType.ParameterName = fieldName

					if err := AllowType(fieldType, false); err != nil {
						log.Printf("Skipping field %q with complex type", fieldName)
						continue
					}

					if strings.Contains(fieldType.ParameterType, "unnamed") || strings.Contains(fieldType.ParameterType, "struct ") ||
						strings.Contains(fieldType.ParameterType, "void") {
						continue // Skip broken types for now
					}

					if _, ok := KnownEnums[fieldType.ParameterType]; ok {
						fieldType.ParameterType = resolveEnumType(fieldType.ParameterType, ret.ClassName, "Qt")
					}
				}
			}

			getter := CppMethod{
				MethodName:        fieldName,
				ReturnType:        fieldType,
				Parameters:        []CppParameter{},
				IsConst:           true,
				IsVariable:        true,
				VariableFieldName: fieldName,
			}

			setter := CppMethod{
				MethodName:        "set" + strings.Title(fieldName),
				ReturnType:        CppParameter{ParameterType: "void"},
				Parameters:        []CppParameter{fieldType},
				IsVariable:        true,
				VariableFieldName: fieldName,
			}

			ret.Methods = append(ret.Methods, getter, setter)

		default:
			log.Printf("==> NOT IMPLEMENTED %q\n", kind)
		}
	}

	return ret, nil // done
}

// isExplicitlyDeleted checks if this node is marked `= delete`.
func isExplicitlyDeleted(node map[string]interface{}) bool {

	if explicitlyDeleted, ok := node["explicitlyDeleted"].(bool); ok && explicitlyDeleted {
		return true
	}

	if explicitlyDefaulted, ok := node["explicitlyDefaulted"].(string); ok && explicitlyDefaulted == "deleted" {
		return true
	}

	return false
}

// isPrivateSignal checks if a method is a private signal by looking for a
// QPrivateSignal parameter
func isPrivateSignal(method *CppMethod) (int, bool) {
	for i, param := range method.Parameters {
		if strings.HasSuffix(param.ParameterType, "::QPrivateSignal") {
			return i, true
		}
	}
	return -1, false
}

// processEnum parses a Clang enum into our CppEnum intermediate format.
func processEnum(node map[string]interface{}, addNamePrefix string, visibility visibilityState) (CppEnum, error) {
	var ret CppEnum
	ret.IsProtected = (visibility == VsProtected)

	// Underlying type
	ret.UnderlyingType = parseSingleTypeString("int")
	if nodefut, ok := node["fixedUnderlyingType"].(map[string]interface{}); ok {
		qualType := getPreferredType(nodefut)
		if qualType != "" {
			ret.UnderlyingType = parseSingleTypeString(qualType)
		}
	}

	// Name
	if nodename, ok := node["name"].(string); !ok {
		// An unnamed enum is possible (e.g. qcalendar.h)
		// It defines integer constants just in the current scope
		ret.EnumName = addNamePrefix

	} else {
		ret.EnumName = addNamePrefix + nodename
	}

	// Entries
	inner, ok := node["inner"].([]interface{})
	if !ok {
		// An enum with no entries? We're done
		return ret, nil
	}

	var lastImplicitValue int64 = -1

nextEnumEntry:
	for _, entry := range inner {
		entry, ok := entry.(map[string]interface{})
		if !ok {
			return ret, errors.New("bad inner type")
		}

		kind, _ := entry["kind"].(string)
		if kind == "DeprecatedAttr" || kind == "FullComment" {
			continue nextEnumEntry // skip
		} else if kind == "EnumConstantDecl" {
			// allow
		} else {
			// unknown kind, or maybe !ok
			return ret, fmt.Errorf("unexpected kind %q", kind)
		}

		var cee CppEnumEntry

		entryname, ok := entry["name"].(string)
		if !ok {
			return ret, errors.New("entry without name")
		}

		cee.EntryName = entryname

		// Try to find the enum value
		ei1, ok := entry["inner"].([]interface{})
		if !ok {
			// No inner value on the enum = autoincrement
			// Fall through as if a blank ei1, this will be handled
		}

		// There may be more than one RHS `inner` expression if one of them
		// is a comment
		// Iterate through each of the ei1 entries and see if any of them
		// work for the purposes of enum constant value parsing
		foundValidInner := false
		for _, ei1_0 := range ei1 {

			ei1_0 := ei1_0.(map[string]interface{})
			ei1Kind, ok := ei1_0["kind"].(string)
			if !ok {
				panic("inner with no kind (1)")
			}

			if ei1Kind == "FullComment" {
				continue
			}
			foundValidInner = true

			// Best case: .inner -> kind=ConstantExpr value=xx
			// e.g. qabstractitemmodel
			if ei1Kind == "ConstantExpr" {
				log.Printf("Got ConstantExpr OK")
				if ei1Value, ok := ei1_0["value"].(string); ok {
					cee.EntryValue = ei1Value
					goto afterParse
				}
			}

			// Best case: .inner -> kind=ImplicitCastExpr .inner -> kind=ConstantExpr value=xx
			// e.g. QCalendar (when there is a int typecast)
			if ei1Kind == "ImplicitCastExpr" {
				if ei2, ok := ei1_0["inner"].([]interface{}); ok && len(ei2) > 0 {
					ei2_0 := ei2[0].(map[string]interface{})
					if ei2Kind, ok := ei2_0["kind"].(string); ok && ei2Kind == "ConstantExpr" {
						if ei2Value, ok := ei2_0["value"].(string); ok {
							cee.EntryValue = ei2Value
							goto afterParse
						}
					}
				}
			}

			if ei1Kind == "DeprecatedAttr" {
				log.Printf("Enum entry %q is deprecated, skipping", ret.EnumName+"::"+entryname)
				continue nextEnumEntry
			}

		}

		// If we made it here, we did not hit any of the `goto afterParse` cases
		if !foundValidInner {
			// Enum case without definition e.g. QCalendar::Gregorian
			// This means one more than the last value
			cee.EntryValue = strconv.FormatInt(lastImplicitValue+1, 10)
		}

	afterParse:
		if cee.EntryValue == "" {
			return ret, fmt.Errorf("complex enum %q entry %q", ret.EnumName, entryname)
		}

		var err error
		if cee.EntryValue == "true" || cee.EntryValue == "false" {
			ret.UnderlyingType = parseSingleTypeString("bool")

		} else {
			lastImplicitValue, err = strconv.ParseInt(cee.EntryValue, 10, 64)
			if err != nil {
				return ret, fmt.Errorf("enum %q entry %q has non-parseable value %q: %w", ret.EnumName, entryname, cee.EntryValue, err)
			}
		}

		ret.Entries = append(ret.Entries, cee)
	}

	return ret, nil
}

// parseMethod parses a Clang method into our CppMethod intermediate format.
func parseMethod(node map[string]interface{}, mm *CppMethod, className string) error {
	if typobj, ok := node["type"].(map[string]interface{}); ok {
		qualType := getPreferredType(typobj)
		if qualType != "" {
			// The qualType is the whole type of the method, including its parameter types.
			// If anything here is too complicated, skip the whole method.
			var err error

			mm.ReturnType, mm.Parameters, mm.IsConst, err = parseTypeString(qualType)
			if err != nil {
				return err
			}

			fullClassName := className + "::" + mm.ReturnType.ParameterType

			// Add resolution for return type if it's a typedef
			if !mm.ReturnType.IsKnownEnum() {
				if typedef, ok := KnownTypedefs[fullClassName]; ok {
					if strings.HasPrefix(typedef.Typedef.UnderlyingType.ParameterType, "QFlags<") {
						mm.ReturnType.ParameterType = fullClassName
						if mm.ReturnType.QtCppOriginalType != nil {
							mm.ReturnType.QtCppOriginalType.ParameterType = fullClassName
						}
					}
				}
			}

			// Add resolution for return type if it's a struct
			if _, ok := KnownClassnames[fullClassName]; ok {
				mm.ReturnType.ParameterType = fullClassName
			}

			// Add resolution for return type if it's an enum
			if _, ok := KnownEnums[mm.ReturnType.ParameterType]; ok {
				mm.ReturnType.ParameterType = resolveEnumType(mm.ReturnType.ParameterType, className, "Qt")
			}

			// Add resolution for parameters if they're enums
			for i := range mm.Parameters {
				if !mm.Parameters[i].IsKnownEnum() {
					// Check if it's a typedef and resolve to underlying type
					classScoped := className + "::" + mm.Parameters[i].ParameterType

					if typedef, ok := KnownTypedefs[classScoped]; ok {
						if strings.HasPrefix(typedef.Typedef.UnderlyingType.ParameterType, "QFlags<") {
							mm.Parameters[i].ParameterType = typedef.Typedef.UnderlyingType.ParameterType
							if mm.Parameters[i].QtCppOriginalType != nil {
								mm.Parameters[i].QtCppOriginalType.ParameterType = typedef.Typedef.UnderlyingType.ParameterType
							}
						}
					} else {
						if typeDef, ok := KnownTypedefs[mm.Parameters[i].ParameterType]; ok && !strings.Contains(mm.Parameters[i].ParameterType, "::") {
							if strings.HasSuffix(mm.Parameters[i].ParameterType, "Mode") || mm.Parameters[i].ParameterType == "Capabilities" {
								mm.Parameters[i].ParameterType = typeDef.Typedef.UnderlyingType.ParameterType
								if mm.Parameters[i].QtCppOriginalType != nil {
									mm.Parameters[i].QtCppOriginalType.ParameterType = typeDef.Typedef.UnderlyingType.ParameterType
								}
							}
						}
					}
				}

				// Add resolution for parameters if they're enums
				if _, ok := KnownEnums[mm.Parameters[i].ParameterType]; ok {
					mm.Parameters[i].ParameterType = resolveEnumType(mm.Parameters[i].ParameterType, className, "Qt")
				}
			}
		}
	}

	if storageClass, ok := node["storageClass"].(string); ok && storageClass == "static" {
		mm.IsStatic = true
	}

	if virtual, ok := node["virtual"].(bool); ok && virtual {
		mm.IsVirtual = true
	}

	if pure, ok := node["pure"].(bool); ok && pure {
		mm.IsPureVirtual = true
	}

	if methodInner, ok := node["inner"].([]interface{}); ok {
		paramCounter := 0
		for _, methodObj := range methodInner {
			methodObj, ok := methodObj.(map[string]interface{})
			if !ok {
				return errors.New("inner[] element not an object")
			}

			switch methodObj["kind"] {
			case "ParmVarDecl":
				// Parameter variable
				parmName, _ := methodObj["name"].(string) // n.b. may be unnamed
				if parmName == "" {

					// Get the precise parameter type if available
					if typ, ok := methodObj["type"].(map[string]interface{}); ok {
						if desugared, ok := typ["desugaredQualType"].(string); ok {
							// Update the parameter type with the more precise desugared version
							mm.Parameters[paramCounter].ParameterType = desugared
						}
					}

					// Generate a default parameter name
					// Super nice autogen names if this is a Q_PROPERTY setter:
					if len(mm.Parameters) == 1 && strings.HasPrefix(mm.MethodName, "set") {
						parmName = strings.ToLower(string(mm.MethodName[3])) + mm.MethodName[4:]

					} else {
						// Otherwise - default
						parmName = fmt.Sprintf("param%d", paramCounter+1)
					}
				}

				// Block reserved words, replace with generic parameters
				if zigReservedWord(parmName) {
					parmName += "Val"
				}

				// Update the name for the existing nth parameter
				mm.Parameters[paramCounter].ParameterName = parmName

				// If this parameter has any internal AST nodes of its
				// own, assume it means it's an optional parameter
				if _, ok := methodObj["inner"]; ok {
					mm.Parameters[paramCounter].Optional = true
				}

				// Next
				paramCounter++

			case "OverrideAttr":
				// void keyPressEvent(QKeyEvent *e) override;
				// This is a virtual method being overridden and is a replacement
				// for actually using the 'virtual' keyword
				mm.IsVirtual = true

			default:
				// Something else inside a declaration??
				log.Printf("==> NOT IMPLEMENTED CXXMethodDecl->%q\n", methodObj["kind"])
			}
		}
	}

	// Fixups
	// QDataStream.operator<< return a reference to QDataStream, but have a private
	// copy constructor
	// The bindings don't know it's the same object. This is just a trick for a more
	// ergonomic C++ API but has no real effect
	// Wipe out
	if (mm.MethodName == "operator<<" || mm.MethodName == "operator>>" || mm.MethodName == "writeBytes") && mm.ReturnType.ParameterType == "QDataStream" && mm.ReturnType.ByRef {
		mm.ReturnType = CppParameter{ParameterType: "void"}
	}

	// Change operator= (assign) to always return void. By default it returns *self which
	// is a trick for more ergnonomic C++ that has no real effect
	if mm.MethodName == "operator=" ||
		mm.MethodName == "operator&=" || // qbitarray.h
		mm.MethodName == "operator|=" || // qbitarray.h
		mm.MethodName == "operator^=" { // qbitarray.h
		mm.ReturnType = CppParameter{ParameterType: "void"}
	}

	return nil
}

// parseTypeString converts a function/method type string such as
// - `QString (const char *, const char *, int) const`
// - `void (const QKeySequence \u0026)`
// into its (A) return type and (B) separate parameter types.
// These clang strings never contain the parameter's name, so the names here are
// not filled in.
func parseTypeString(typeString string) (CppParameter, []CppParameter, bool, error) {
	if strings.Contains(typeString, "&&") { // TODO Rvalue references
		return CppParameter{}, nil, false, ErrTooComplex
	}

	// Cut to exterior-most (, ) pair
	opos := strings.Index(typeString, "(")
	epos := strings.LastIndex(typeString, ")")

	if opos == -1 || epos == -1 {
		return CppParameter{}, nil, false, fmt.Errorf("type string %q missing brackets", typeString)
	}

	isConst := strings.Contains(typeString[epos:], "const")

	returnType := parseSingleTypeString(strings.TrimSpace(typeString[0:opos]))

	inner := typeString[opos+1 : epos]

	// Should be no more brackets
	if strings.ContainsAny(inner, "()") {
		return CppParameter{}, nil, false, ErrTooComplex
	}

	// Parameters are separated by commas and nesting can not be possible
	params := tokenizeMultipleParameters(inner)

	ret := make([]CppParameter, 0, len(params))
	for _, p := range params {

		insert := parseSingleTypeString(p)

		if insert.ParameterType != "" {
			ret = append(ret, insert)
		}
	}

	return returnType, ret, isConst, nil
}

// tokenizeMultipleParameters is like strings.Split by comma, except it does not
// split if a comma is used for an interior template type e.g. QMap<K,V>.
// It is expected to be used with a Clang type representing a function's parameter
// list.
func tokenizeMultipleParameters(p string) []string {
	// Tokenize into top-level strings
	templateDepth := 0
	tokens := []string{}
	wip := ""
	p = strings.TrimSpace(p)
	for _, c := range p {
		if c == '<' {
			wip += string(c)
			templateDepth++
		} else if c == '>' {
			wip += string(c)
			templateDepth--
		} else if c == ',' && templateDepth == 0 {
			tokens = append(tokens, wip)
			wip = ""
		} else {
			wip += string(c)
		}
	}

	tokens = append(tokens, wip)
	return tokens
}

// tokenizeSingleParameter tokenizes a Clang qualType into separate tokens.
// Interior templates or brackets are tokenized together as a single token.
func tokenizeSingleParameter(p string) []string {
	// Tokenize into top-level strings
	templateDepth := 0
	tokens := []string{}
	wip := ""
	p = strings.TrimSpace(p)
	for _, c := range p {
		if c == '<' || c == '(' {
			wip += string(c)
			templateDepth++
		} else if c == '>' || c == ')' {
			wip += string(c)
			templateDepth--
		} else if (c == '*' || c == '&') && templateDepth == 0 {
			if len(wip) > 0 {
				tokens = append(tokens, wip)
			}
			tokens = append(tokens, string(c))
			wip = ""
		} else if c == ' ' && templateDepth == 0 {
			if len(wip) > 0 {
				tokens = append(tokens, wip)
			}
			wip = ""
		} else {
			wip += string(c)
		}
	}

	if len(wip) > 0 {
		tokens = append(tokens, wip)
	}

	return tokens
}

// parseSingleTypeString parses the Clang qualType for a single type into our
// CppParameter intermediate format.
func parseSingleTypeString(p string) CppParameter {

	isSigned := false

	tokens := tokenizeSingleParameter(p)
	insert := CppParameter{}
	for _, tok := range tokens {

		if tok == "" {
			continue // extra space

		} else if tok == "const" {
			insert.Const = true

		} else if tok == "class" {
			// QNetwork has some references to 'class QSslCertificate'. Flatten
			continue

		} else if tok == "&" { // U+0026
			insert.ByRef = true

		} else if tok == "signed" {
			// We don't need this - UNLESS it's 'signed char'
			isSigned = true

		} else if tok == "*" {
			insert.Pointer = true
			insert.PointerCount++

		} else {
			// Valid part of the type name
			if tok == "char" && isSigned {
				tok = "signed char"
				isSigned = false
			}
			insert.ParameterType += " " + tok
		}
	}
	insert.ParameterType = strings.TrimSpace(insert.ParameterType)
	insert.ParameterType = strings.TrimPrefix(insert.ParameterType, "::")
	insert.ParameterType = strings.ReplaceAll(insert.ParameterType, "enum ", "")
	insert.ParameterType = strings.ReplaceAll(insert.ParameterType, "::enum_type", "")

	return insert
}

type functionInfo struct {
	name        string
	mangledName string
	returnType  CppParameter
	params      []CppParameter
	isConst     bool
}

// parseFunctionDecl parses a single C++ function declaration into our
// intermediate format.
func parseFunctionDecl(node map[string]interface{}) (*functionInfo, error) {
	name, ok := node["name"].(string)
	if !ok {
		return nil, errors.New("function has no name")
	}

	if strings.HasPrefix(name, "operator") {
		return nil, nil
	}

	mangledName, ok := node["mangledName"].(string)
	if !ok {
		return nil, nil
	}

	typeInfo, ok := node["type"].(map[string]interface{})
	if !ok {
		return nil, nil
	}

	qualType, ok := typeInfo["qualType"].(string)
	if !ok {
		return nil, nil
	}

	qualType = strings.ReplaceAll(qualType, "enum ", "")
	qualType = strings.ReplaceAll(qualType, "::enum_type", "")

	returnType, params, isConst, err := parseTypeString(qualType)
	if err != nil {
		return nil, nil
	}

	return &functionInfo{
		name:        name,
		mangledName: mangledName,
		returnType:  returnType,
		params:      params,
		isConst:     isConst,
	}, nil
}

// getClassFromMangledName returns the class name from a mangled name
// The format is typically _ZN<length><classname><length><methodname>E...
func getClassFromMangledName(mangledName string) string {
	if !strings.Contains(mangledName, "ZN") || strings.Count(mangledName, "E") == 0 {
		return ""
	}

	parts := strings.Split(mangledName, "ZN")
	if len(parts) != 2 {
		return ""
	}

	rest := parts[1]
	var classNameLen int
	for i, c := range rest {
		if c < '0' || c > '9' {
			classNameLen, _ = strconv.Atoi(rest[:i])
			rest = rest[i:]
			break
		}
	}

	if classNameLen == 0 || len(rest) < classNameLen {
		return ""
	}

	return rest[:classNameLen]
}

func shouldSkipClass(className string) bool {
	return className == "Qt" || className == "QTest"
}

// createMethod creates a CppMethod from a functionInfo
// FunctionDecls often do not have the parameter information, so we need to
// substitute it.
func (fn *functionInfo) createMethod() CppMethod {
	params := make([]CppParameter, len(fn.params))
	for i, param := range fn.params {
		params[i] = param
		params[i].ParameterName = "param" + strconv.Itoa(i+1)
	}

	return CppMethod{
		MethodName: fn.name,
		ReturnType: fn.returnType,
		Parameters: params,
		IsConst:    fn.isConst,
		IsStatic:   true,
	}
}

func addMethodToClass(classes *[]CppClass, className string, method CppMethod) error {
	// Find existing class or create new one
	for i := range *classes {
		if (*classes)[i].ClassName == className {
			(*classes)[i].Methods = append((*classes)[i].Methods, method)
			return nil
		}
	}

	// Create new class
	*classes = append(*classes, CppClass{
		ClassName: className,
		Methods:   []CppMethod{method},
	})
	return nil
}
