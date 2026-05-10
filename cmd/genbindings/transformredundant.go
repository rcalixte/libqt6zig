package main

import "slices"

// astTransformRedundant merges duplicate enum definitions.
type astTransformRedundant struct {
	preserve map[string]*CppEnum
}

var int32_types = []string{
	"int",
	"int32_t",
	"qint32",
}

func (a *astTransformRedundant) Process(parsed *CppParsedHeader) {

	for i := range parsed.Enums {
		prev, ok := a.preserve[parsed.Enums[i].EnumName]
		if !ok {
			// It's new
			a.preserve[parsed.Enums[i].EnumName] = &parsed.Enums[i]
			continue
		}

		// It's pre-existing
		if prev.UnderlyingType != parsed.Enums[i].UnderlyingType {
			if !slices.Contains(int32_types, prev.UnderlyingType.ParameterType) &&
				!slices.Contains(int32_types, parsed.Enums[i].UnderlyingType.ParameterType) {
				panic("Enum " + parsed.Enums[i].EnumName + " is defined multiple times with different underlying types:\n" +
					"* " + prev.UnderlyingType.ParameterType + "\n* " + parsed.Enums[i].UnderlyingType.ParameterType)
			}
		}

		// Merge entries
		prev.Entries = append(prev.Entries, parsed.Enums[i].Entries...)

		// Remove from second matched header
		// This is difficult to manipulate while preserving pointers, so only
		// wipe out the name and use that as a signal later on
		parsed.Enums[i].EnumName = ""
	}
}
