package main

import (
	"math"
	"path/filepath"
	"strconv"
	"strings"
)

type lookupResultClass struct {
	PackageName string
	Class       CppClass
}

type lookupResultTypedef struct {
	PackageName string
	Typedef     CppTypedef
}

type lookupResultEnum struct {
	PackageName  string
	Enum         CppEnum
	EnumTypeCABI string
	EnumTypeZig  string
}

type lookupResultImport struct {
	PackageName string
	Filename    string
}

var (
	KnownClassnames = make(map[string]lookupResultClass) // Entries of the form QFoo::Bar if it is an inner class
	KnownTypedefs   = make(map[string]lookupResultTypedef)
	KnownEnums      = make(map[string]lookupResultEnum)
	KnownImports    = make(map[string]lookupResultImport)
)

// Handle child classes recursively
func registerChildClasses(class CppClass, packageName string) {
	for _, childClass := range class.ChildClassdefs {
		// Register with fully qualified name
		KnownClassnames[childClass.ClassName] = lookupResultClass{packageName, childClass}

		// Recursively register any nested children
		registerChildClasses(childClass, packageName)
	}
}

func (e CppEnum) getEnumTypeZig() (string, string) {
	flagType := "i64"
	if len(e.Entries) > 0 {
		// perform a lazy analysis of the enum entries
		num, err := strconv.Atoi(e.Entries[len(e.Entries)-1].EntryValue)
		if err == nil {
			if float64(num) > math.MaxInt32 || float64(num) < math.MinInt32 {
				// need to use i64 to avoid overflow
				return "i64", "i64"
			}
			if float64(num) > math.MinInt16 || float64(num) < math.MaxUint16 {
				// it should be safe to use i32
				flagType = "i32"
			}
		}
	}

	switch e.UnderlyingType.ParameterType {
	// signed types
	case "char", "qint8", "signed char":
		return "i8", "i8"
	case "int", "qint32":
		return "i32", flagType

	// unsigned types
	case "uchar", "quint8", "uint8_t", "unsigned char":
		return "u8", "u8"
	case "ushort", "quint16":
		return "u16", "u16"
	case "quint32", "unsigned int":
		return "u32", "u32"
	case "quint64":
		return "u64", "u64"

	default:
		panic("UNHANDLED ENUM TYPE: " + e.UnderlyingType.ParameterType + " for " + e.EnumName)
	}
}

func addKnownTypes(packageName string, parsed *CppParsedHeader) {
	for _, c := range parsed.Classes {
		KnownClassnames[c.ClassName] = lookupResultClass{packageName, c /* copy */}

		// If it's a nested class, also register its local name
		if strings.Contains(c.ClassName, "::") {
			localName := c.ClassName[strings.Index(c.ClassName, "::")+2:]
			lastName := c.ClassName[strings.LastIndex(c.ClassName, "::")+2:]
			KnownClassnames[localName] = lookupResultClass{packageName, c}
			KnownClassnames[lastName] = lookupResultClass{packageName, c}
		}

		for _, td := range c.ChildTypedefs {
			// Register typedef with fully qualified name
			KnownTypedefs[td.Alias] = lookupResultTypedef{packageName, td /* copy */}
			if strings.Contains(td.Alias, "::") {
				localName := td.Alias[strings.Index(td.Alias, "::")+2:]
				lastName := td.Alias[strings.LastIndex(td.Alias, "::")+2:]
				KnownTypedefs[localName] = lookupResultTypedef{packageName, td}
				KnownTypedefs[lastName] = lookupResultTypedef{packageName, td}
			}
		}

		for _, childClass := range c.ChildClassdefs {
			// Register class with fully qualified name
			KnownClassnames[childClass.ClassName] = lookupResultClass{packageName, childClass}
			registerChildClasses(c, packageName)
		}

		// Handle child enums in classes
		for _, en := range c.ChildEnums {
			enumClass := en.EnumClassName()
			enumCABI := en.UnderlyingType.RenderTypeCabi(false)
			enumZig, enumFlagZig := en.getEnumTypeZig()

			// Register enum with fully qualified name
			KnownEnums[en.EnumName] = lookupResultEnum{packageName, en, enumCABI, enumZig}
			// Register short name
			KnownEnums[enumClass] = lookupResultEnum{packageName, en, enumCABI, enumZig}

			// Flags version
			flagsEnum := en // copy
			flagsEnum.EnumName = "QFlags<" + en.EnumName + ">"
			KnownEnums[flagsEnum.EnumName] = lookupResultEnum{packageName, flagsEnum, enumCABI, enumFlagZig}
			KnownEnums[enumClass+"s"] = lookupResultEnum{packageName, flagsEnum, enumCABI, enumFlagZig}
		}
	}

	for _, td := range parsed.Typedefs {
		KnownTypedefs[td.Alias] = lookupResultTypedef{packageName, td /* copy */}
	}

	for _, en := range parsed.Enums {
		if parsed.Filename != "" && en.EnumName != "" {
			// enum classes... in Qt 6, these are found in qcborcommon.h, qdtls.h, qlogging.h, qmetatype.h, qocspresponse.h
			f := filepath.Base(parsed.Filename)
			filename := f[:len(f)-2]
			KnownImports[en.EnumName] = lookupResultImport{packageName, filepath.Base(filename)}
		}

		enumCABI := en.UnderlyingType.RenderTypeCabi(false)
		enumZig, enumFlagZig := en.getEnumTypeZig()

		KnownEnums[en.EnumName] = lookupResultEnum{packageName, en /* copy */, enumCABI, enumZig}

		// Register short name if it's a scoped enum
		if strings.Contains(en.EnumName, "::") {
			shortName := en.EnumClassName()
			KnownEnums[shortName] = lookupResultEnum{packageName, en, enumCABI, enumZig}
		}

		// Flags version
		flagsEnum := en // copy
		flagsEnum.EnumName = "QFlags<" + en.EnumName + ">"
		KnownEnums[flagsEnum.EnumName] = lookupResultEnum{packageName, flagsEnum, enumCABI, enumFlagZig}
		if strings.Contains(en.EnumName, "::") {
			KnownEnums[en.EnumClassName()+"s"] = lookupResultEnum{packageName, flagsEnum, enumCABI, enumFlagZig}
		}
	}

	if len(parsed.Enums) != 0 && parsed.Filename != "" {
		f := filepath.Base(parsed.Filename)
		extensionIndex := strings.LastIndex(f, ".")
		filename := f[:extensionIndex]

		for _, en := range parsed.Enums {
			// Some headers only have enums we can process, e.g. QSsl, QtVideo
			// We also need to check for enums in scoped classes
			importName := en.EnumValueName()
			KnownImports[importName] = lookupResultImport{packageName, filename}
		}
	}
}
