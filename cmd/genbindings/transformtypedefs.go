package main

import (
	"strconv"
	"strings"
)

func applyTypedefs(p CppParameter, className string) CppParameter {
	if strings.HasPrefix(p.ParameterType, "std::optional") {
		p.ParameterType = p.ParameterType[14 : len(p.ParameterType)-1]
		p.IsStdOptional = true
	}

	namespace := "Qt"
	if strings.Contains(className, "::") {
		namespace = strings.Split(className, "::")[0]
	}

	if strings.HasPrefix(p.ParameterType, "QtAudio::") {
		p.ParameterType = strings.Replace(p.ParameterType, "QtAudio::", "QAudio::", 1)
	}

	if etd, ok := KnownEnums[className+"::"+p.ParameterType]; ok {
		p.ParameterType = resolveEnumType(etd.Enum.EnumName, className, namespace)
	}

	if ft, ok := KnownEnums[p.ParameterType+"Flag"]; ok && !strings.Contains(p.ParameterType, "::") {
		p.ParameterType = strings.TrimSuffix(ft.Enum.EnumName, "Flag")
	}

	for {
		if tdd, ok := KnownTypedefs[className+"::"+p.ParameterType]; ok {
			if tdd.Typedef.Alias != "" {
				p.ApplyTypedef(tdd.Typedef.UnderlyingType)
				p.ParameterType = tdd.Typedef.Alias
				if !strings.Contains(p.QtCppOriginalType.ParameterType, "::") {
					p.QtCppOriginalType.ParameterType = tdd.Typedef.UnderlyingType.ParameterType
				}
			} else {
				p.ApplyTypedef(tdd.Typedef.UnderlyingType)
			}
		}

		td, ok := KnownTypedefs[p.ParameterType]
		if !ok {
			break
		}
		p.ApplyTypedef(td.Typedef.UnderlyingType)

		if p.QtCppOriginalType != nil && p.ParameterType == p.QtCppOriginalType.ParameterType && p.QtCppOriginalType.ParameterType != "value_type" {
			// TODO this is a hack to prevent an infinite loop
			break
		}
	}

	if fd, ok := KnownTypedefs[className+"::"+p.ParameterType]; ok {
		p.ParameterType = fd.Typedef.Alias
	}

	if t, containerType, ok := p.QListOf(); ok {
		t2 := applyTypedefs(t, className) // recursive

		// Wipe out so that RenderTypeQtCpp() does not see it
		t2.QtCppOriginalType = nil

		tType := resolveStructType(t2.RenderTypeQtCpp(), className, "")
		p.ParameterType = containerType + "<" + tType + ">"
		p.UniquePtr = t2.UniquePtr

		if p.UniquePtr {
			tmp := p // copy
			p.QtCppOriginalType = &tmp
			p.QtCppOriginalType.ParameterType = containerType + "<std::unique_ptr<" + tType + ">>"

		} else if p.QtCppOriginalType == nil {
			tmp := p // copy
			p.QtCppOriginalType = &tmp
			p.QtCppOriginalType.ParameterType = p.ParameterType

		} else {
			if _, ok := KnownTypedefs[p.QtCppOriginalType.ParameterType]; ok {
				p.QtCppOriginalType.ParameterType = p.ParameterType
			}
		}

	} else if kType, vType, containerType, ok := p.QMapOf(); ok {
		kType2 := applyTypedefs(kType, className)
		kType2.QtCppOriginalType = nil

		vType2 := applyTypedefs(vType, className)
		vType2.QtCppOriginalType = nil

		k2 := resolveStructType(kType2.RenderTypeQtCpp(), className, namespace)
		v2 := resolveStructType(vType2.RenderTypeQtCpp(), className, namespace)

		p.ParameterType = containerType + "<" + k2 + ", " + v2 + ">"

		if p.QtCppOriginalType == nil {
			tmp := p // copy
			p.QtCppOriginalType = &tmp
			p.QtCppOriginalType.ParameterType = p.ParameterType
		} else {
			if _, ok := KnownTypedefs[p.QtCppOriginalType.ParameterType]; ok {
				p.QtCppOriginalType.ParameterType = p.ParameterType
			}
		}

	} else if kType, vType, ok := p.QPairOf(); ok {
		kType2 := applyTypedefs(kType, className)
		kType2.QtCppOriginalType = nil

		vType2 := applyTypedefs(vType, className)
		vType2.QtCppOriginalType = nil

		k2 := resolveStructType(kType2.RenderTypeQtCpp(), className, namespace)
		v2 := resolveStructType(vType2.RenderTypeQtCpp(), className, namespace)

		p.ParameterType = "QPair<" + k2 + ", " + v2 + ">"

		if p.QtCppOriginalType == nil {
			tmp := p // copy
			p.QtCppOriginalType = &tmp
			p.QtCppOriginalType.ParameterType = p.ParameterType
		} else {
			if _, ok := KnownTypedefs[p.QtCppOriginalType.ParameterType]; ok {
				p.QtCppOriginalType.ParameterType = p.ParameterType
			}
		}

	} else if t, ok := p.QSetOf(); ok {
		t2 := applyTypedefs(t, className) // recursive

		// Wipe out so that RenderTypeQtCpp() does not see it
		t2.QtCppOriginalType = nil

		tType := resolveStructType(t2.RenderTypeQtCpp(), className, "")
		p.ParameterType = "QSet<" + tType + ">"

		if p.QtCppOriginalType == nil {
			tmp := p // copy
			p.QtCppOriginalType = &tmp
			p.QtCppOriginalType.ParameterType = p.ParameterType
		} else {
			if _, ok := KnownTypedefs[p.QtCppOriginalType.ParameterType]; ok {
				p.QtCppOriginalType.ParameterType = p.ParameterType
			}
		}

	} else if t, ok := p.UniquePtrOf(); ok {
		t2 := applyTypedefs(t, className)
		t2.QtCppOriginalType = nil

		p.ParameterType = t2.RenderTypeQtCpp()
		p.UniquePtr = true

		if p.QtCppOriginalType == nil {
			tmp := p // copy
			p.QtCppOriginalType = &tmp
			p.QtCppOriginalType.ParameterType = p.ParameterType
		}
	}

	if ctd, ok := KnownClassnames[p.ParameterType]; ok {
		p.ParameterType = resolveStructType(ctd.Class.ClassName, className, namespace)
	}

	if strings.Contains(p.ParameterType, "(*)") || strings.HasPrefix(p.ParameterType, "std::function<") {
		typeStr := strings.ReplaceAll(p.ParameterType, " *", "* ")
		typeStr = strings.Replace(typeStr, "(*)", " ", 1)
		if strings.HasPrefix(typeStr, "std::function<") {
			typeStr = typeStr[14 : len(typeStr)-1]
			p.IsStdFunction = true
		}

		returnType, params, isConst, err := parseTypeString(typeStr, className)
		if err == nil {
			returnType = applyTypedefs(returnType, className)
			for i := range params {
				params[i] = applyTypedefs(params[i], className)
				if params[i].ParameterName == "" {
					params[i].ParameterName = "funcparam" + strconv.Itoa(i+1)
				}
			}

			p.IsFunctionPointer = true
			p.FunctionPointer = &CppMethod{
				ReturnType: returnType,
				Parameters: params,
				IsConst:    isConst,
			}
		}
	}

	return p
}

func applyTypedefs_Method(m *CppMethod, className string) {

	for k := range m.Parameters {
		m.Parameters[k] = applyTypedefs(m.Parameters[k], className)

		if m.Parameters[k].IsStdFunction {
			m.HasStdFunctionPointerParam = true
		}

		if FossCompatCheck(m.Parameters[k]) {
			m.FossOnly = true
		}
	}

	m.ReturnType = applyTypedefs(m.ReturnType, className)

	// Also apply OS compatibility rules
	if FossCompatCheck(m.ReturnType) {
		m.FossOnly = true
	}
}

// astTransformTypedefs replaces the ParameterType with any known typedef value.
func astTransformTypedefs(parsed *CppParsedHeader) {

	for i := range parsed.Classes {

		methods := make([]CppMethod, 0, len(parsed.Classes[i].Methods))
		for m := range parsed.Classes[i].Methods {

			applyTypedefs_Method(&parsed.Classes[i].Methods[m], parsed.Classes[i].ClassName)
			if parsed.Classes[i].Methods[m].HasStdFunctionPointerParam && (parsed.Classes[i].Methods[m].IsProtected || parsed.Classes[i].Methods[m].IsVirtual) {
				continue
			}
			methods = append(methods, parsed.Classes[i].Methods[m])
		}
		parsed.Classes[i].Methods = methods

		ctors := make([]CppMethod, 0, len(parsed.Classes[i].Ctors))
		for j := range parsed.Classes[i].Ctors {

			applyTypedefs_Method(&parsed.Classes[i].Ctors[j], parsed.Classes[i].ClassName)
			if parsed.Classes[i].Ctors[j].HasStdFunctionPointerParam && (parsed.Classes[i].Ctors[j].IsProtected || parsed.Classes[i].Ctors[j].IsVirtual) {
				continue
			}
			ctors = append(ctors, parsed.Classes[i].Ctors[j])
		}
		parsed.Classes[i].Ctors = ctors
	}

	// Enum underlying types
	for i := range parsed.Enums {
		parsed.Enums[i].UnderlyingType = applyTypedefs(parsed.Enums[i].UnderlyingType, "")
	}
}
