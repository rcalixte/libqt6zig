package main

import (
	"fmt"
	"strings"
)

func (p CppParameter) renderTypeForMethod() string {
	return strings.NewReplacer(" ", "", "::", "").Replace(p.ParameterType)
}

// astTransformOverloads renames methods if another method exists with the same
// name.
func astTransformOverloads(parsed *CppParsedHeader) {
	for i, c := range parsed.Classes {

		anyChange := false
		existing := map[string]struct{}{}
		for j, m := range c.Methods {

			originalProposal := m.SafeMethodName()
			proposedName := originalProposal

			if _, ok := existing[proposedName]; !ok {
				existing[proposedName] = struct{}{}
				continue // No collision
			}

			// Collision - rename
			anyChange = true

			ctr := 1
			for {
				if ctr != 1 {
					proposedName = fmt.Sprintf("%s%d", originalProposal, ctr)
					if _, ok := existing[proposedName]; !ok {
						break
					}
				}

				ctr++ // Loop until we have a non-colliding name available
			}

			existing[proposedName] = struct{}{}
			m.Rename(proposedName)
			c.Methods[j] = m
		}

		if anyChange {
			parsed.Classes[i] = c
		}
	}
}
