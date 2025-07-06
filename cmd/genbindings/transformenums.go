package main

import "strings"

type EnumScopeInfo struct {
	FullyQualifiedName string
	ClassScope         string // Empty if global/namespace scope
	Namespace          string // Empty if global scope
}

// Map of enum name -> class scope -> namespace -> EnumScopeInfo
var EnumScopeRegistry = make(map[string]map[string]map[string]EnumScopeInfo)

// getAllIncludedClasses returns all included classes and inherits, including those from parent classes
func getAllIncludedClasses(c *CppClass, seen map[string]struct{}) []string {
	if seen == nil {
		seen = make(map[string]struct{})
	}

	var allIncludes []string

	allIncludes = append(allIncludes, c.DirectInherits...)
	allIncludes = append(allIncludes, c.IncludedClasses...)

	for _, inherit := range c.DirectInherits {
		if _, ok := seen[inherit]; ok {
			continue
		}
		seen[inherit] = struct{}{}

		if parentInfo, ok := KnownClassnames[inherit]; ok {
			parentIncludes := getAllIncludedClasses(&parentInfo.Class, seen)
			allIncludes = append(allIncludes, parentIncludes...)
		}
	}

	return allIncludes
}

// Helper function to resolve any enum types
func resolveEnumType(enumName string, currentClass string, currentNamespace string) string {
	scopeMap, exists := EnumScopeRegistry[enumName]
	if !exists {
		return enumName // Can't resolve
	}

	// Current class scope
	if currentClass != "" {
		if classMap, ok := scopeMap[currentClass]; ok {
			expectedName := currentClass + "::" + enumName
			for _, info := range classMap {
				if info.FullyQualifiedName == expectedName {
					return info.FullyQualifiedName
				}
			}
		}

		// Parent class scopes
		if classInfo, ok := KnownClassnames[currentClass]; ok {
			for _, parent := range classInfo.Class.DirectInheritClassInfo() {
				if classMap, ok := scopeMap[parent.Class.ClassName]; ok {
					for _, info := range classMap {
						return info.FullyQualifiedName
					}
				}
			}
		}
	}

	// Current namespace scope
	if currentNamespace != "" {
		if classMap, ok := scopeMap[currentNamespace]; ok {
			for _, info := range classMap {
				if info.ClassScope == currentNamespace {
					return info.FullyQualifiedName
				}
			}
		}
	}

	// Included classes
	if classInfo, ok := KnownClassnames[currentClass]; ok {
		seen := map[string]struct{}{}
		classInfo.Class.IncludedClasses = getAllIncludedClasses(&classInfo.Class, seen)

		for _, includedClass := range classInfo.Class.IncludedClasses {
			expectedName := includedClass + "::" + enumName
			if classMap, ok := scopeMap[includedClass]; ok {
				for _, info := range classMap {
					if info.FullyQualifiedName == expectedName {
						return info.FullyQualifiedName
					}
				}
			}
		}
	}

	return enumName // No match found
}

func (method *CppMethod) resolveMethodEnumTypes(className string, namespace string) {
	// Resolve return type
	if method.ReturnType.IsKnownEnum() {
		method.ReturnType.ParameterType = resolveEnumType(method.ReturnType.ParameterType, className, namespace)
	} else {
		// Check if it's a container with an enum inside
		for _, container := range qtContainers {
			if strings.HasPrefix(method.ReturnType.ParameterType, container) {
				openPos := strings.Index(method.ReturnType.ParameterType, "<")
				closePos := strings.LastIndex(method.ReturnType.ParameterType, ">")
				if openPos != -1 && closePos != -1 {
					innerType := method.ReturnType.ParameterType[openPos+1 : closePos]
					if _, ok := KnownEnums[innerType]; ok {
						resolvedInner := resolveEnumType(innerType, className, namespace)
						method.ReturnType.ParameterType = container + resolvedInner + ">"
					}
				}
			}
		}
	}

	// Resolve parameters
	for i, param := range method.Parameters {
		if param.IsKnownEnum() {
			method.Parameters[i].ParameterType = resolveEnumType(param.ParameterType, className, namespace)
		} else {
			// Check if it's a container with an enum inside
			for _, container := range qtContainers {
				if strings.HasPrefix(param.ParameterType, container) {
					openPos := strings.Index(param.ParameterType, "<")
					closePos := strings.LastIndex(param.ParameterType, ">")
					if openPos != -1 && closePos != -1 {
						innerType := param.ParameterType[openPos+1 : closePos]
						if _, ok := KnownEnums[innerType]; ok {
							resolvedInner := resolveEnumType(innerType, className, namespace)
							method.Parameters[i].ParameterType = container + resolvedInner + ">"
						}
					}
				}
			}
		}
	}
}

// Resolve enum types in class ctors and methods
func astTransformEnumResolution(parsed *CppParsedHeader) {
	for _, class := range parsed.Classes {
		var namespace string
		if strings.Contains(class.ClassName, "::") {
			parts := strings.Split(class.ClassName, "::")
			namespace = parts[0]
		}

		for i := range class.Ctors {
			class.Ctors[i].resolveMethodEnumTypes(class.ClassName, namespace)
		}
		for i := range class.Methods {
			class.Methods[i].resolveMethodEnumTypes(class.ClassName, namespace)
		}
	}
}
