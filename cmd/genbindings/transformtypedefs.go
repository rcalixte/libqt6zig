package main

import (
	"strconv"
	"strings"
)

func applyTypedefs(p CppParameter, className string) CppParameter {

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

	if strings.Contains(p.ParameterType, "(*)") {
		typeStr := strings.ReplaceAll(p.ParameterType, " *", "* ")
		typeStr = strings.Replace(typeStr, "(*)", " ", 1)
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

	for k, p := range m.Parameters {
		transformed := applyTypedefs(p, className)
		m.Parameters[k] = transformed

		if FossCompatCheck(transformed) {
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

	for i, c := range parsed.Classes {

		for j, m := range c.Methods {

			applyTypedefs_Method(&m, c.ClassName)
			c.Methods[j] = m
		}

		for j, m := range c.Ctors {

			applyTypedefs_Method(&m, c.ClassName)
			c.Ctors[j] = m
		}
		parsed.Classes[i] = c
	}

	// Enum underlying types
	for i, e := range parsed.Enums {
		e.UnderlyingType = applyTypedefs(e.UnderlyingType, "")
		parsed.Enums[i] = e
	}
}
