package main

import "strings"

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

		if p.QtCppOriginalType == nil {
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
	}

	if ctd, ok := KnownClassnames[p.ParameterType]; ok {
		p.ParameterType = resolveStructType(ctd.Class.ClassName, className, namespace)
	}

	return p
}

func applyTypedefs_Method(m *CppMethod, className string) {

	for k, p := range m.Parameters {
		transformed := applyTypedefs(p, className)
		m.Parameters[k] = transformed

		if LinuxWindowsCompatCheck(transformed) {
			m.LinuxOnly = true
		}
	}

	m.ReturnType = applyTypedefs(m.ReturnType, className)

	// Also apply OS compatibility rules
	if LinuxWindowsCompatCheck(m.ReturnType) {
		m.LinuxOnly = true
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
