package main

import (
	"fmt"
	"slices"
	"strconv"
	"strings"
	"unicode"
)

// propertyByName searches a slice of UiProperty to find one with a matching name.
func propertyByName(check []UiProperty, search string) (UiProperty, bool) {
	for _, p := range check {
		if p.Name == search {
			return p, true
		}
	}

	return UiProperty{}, false
}

func mustParseInt(s string) int {
	val, err := strconv.ParseInt(s, 10, 64)
	if err != nil {
		panic("parseInt(" + s + "): " + err.Error())
	}

	return int(val) // n.b. might do 32-bit truncation(!)
}

var (
	SeenWidgets         = []string{}
	SeenExtendedClasses = []string{}
)

// isExtendedClass returns true if the class name is a recognized extended class
// An extended class is currently defined as a class name where the
// first character is `Q` and the second character is an uppercase letter.
func isExtendedClass(className string) bool {
	var isExtended bool

	switch {
	case (className[0] == 'K' || className[0] == 'Q') && unicode.IsUpper(rune(className[1])),
		className == "Sonnet::DictionaryComboBox":
		if !slices.Contains(SeenExtendedClasses, className) {
			SeenExtendedClasses = append(SeenExtendedClasses, className)
			fmt.Println("Added extended class: " + className)
		}
		isExtended = true
	}

	return isExtended
}

// sanitizeNames prefixes reserved words in the UI file with an underscore
func sanitizeNames(u *UiFile) {
	walkWidget(&u.Widget)
}

func walkWidget(w *UiWidget) {
	if w.Name != "" {
		if _, ok := zigReservedWord[w.Name]; ok {
			notifyRename(w.Name)
			w.Name = "_" + w.Name
		}
	} else {
		w.Name = "_" + zigStructName(w.Class[1:]) + strconv.Itoa(SanitizeObjectCounter)
		notifyUnnamed(w.Class, w.Name)
		SanitizeObjectCounter++
	}

	for i := range w.Widgets {
		walkWidget(&w.Widgets[i])
	}

	for i := range w.Actions {
		if _, ok := zigReservedWord[w.Actions[i].Name]; ok {
			notifyRename(w.Actions[i].Name)
			w.Actions[i].Name = "_" + w.Actions[i].Name
		}
	}

	if w.Layout != nil {
		walkLayout(w.Layout)
	}

	checkSeenAndRename(&w.Name)
}

func walkLayout(l *UiLayout) {
	if l.Name != "" {
		if _, ok := zigReservedWord[l.Name]; ok {
			notifyRename(l.Name)
			l.Name = "_" + l.Name
		}
	} else {
		l.Name = "_" + zigStructName(l.Class[1:]) + strconv.Itoa(SanitizeObjectCounter)
		notifyUnnamed(l.Class, l.Name)
		SanitizeObjectCounter++
	}

	for i := range l.Items {
		if l.Items[i].Widget != nil {
			walkWidget(l.Items[i].Widget)
		}

		if l.Items[i].Spacer != nil && l.Items[i].Spacer.Name != "" {
			if _, ok := zigReservedWord[l.Items[i].Spacer.Name]; ok {
				notifyRename(l.Items[i].Spacer.Name)
				l.Items[i].Spacer.Name = "_" + l.Items[i].Spacer.Name
			}
			checkSeenAndRename(&l.Items[i].Spacer.Name)
		} else if l.Items[i].Spacer != nil && l.Items[i].Spacer.Name == "" {
			l.Items[i].Spacer.Name = "_" + zigStructName("spaceritem") + strconv.Itoa(SanitizeObjectCounter)
			notifyUnnamed("QSpacerItem", l.Items[i].Spacer.Name)
			SanitizeObjectCounter++
		}

		if l.Items[i].Layout != nil {
			walkLayout(l.Items[i].Layout)
		}
	}

	checkSeenAndRename(&l.Name)
}

func checkSeenAndRename(name *string) {
	*name = strings.ReplaceAll(*name, ":", "_")
	if !slices.Contains(SeenWidgets, *name) {
		SeenWidgets = append(SeenWidgets, *name)
	} else {
		for {
			if !slices.Contains(SeenWidgets, "_"+*name+strconv.Itoa(SanitizeObjectCounter)) {
				notifyDupe(*name)
				*name = "_" + *name + strconv.Itoa(SanitizeObjectCounter)
				SeenWidgets = append(SeenWidgets, *name)
				SanitizeObjectCounter++
				break
			} else {
				*name = "_" + strings.TrimPrefix(*name, "_") + strconv.Itoa(SanitizeObjectCounter)
				SanitizeObjectCounter++
			}
		}
	}
}

func notifyUnnamed(class, name string) {
	fmt.Println("\nRenamed unnamed " + class + " object to '" + name + "'")
	SanitizationFlag = true
}

func notifyRename(name string) {
	fmt.Println("\nRenamed '" + name + "' to '_" + name + "'")
	SanitizationFlag = true
}

func notifyDupe(name string) {
	fmt.Println("\nRenamed duplicate '" + name + "' to '_" + name + strconv.Itoa(SanitizeObjectCounter) + "'")
	SanitizationFlag = true
}

func enumClassToZig(enumClass, enumName string) string {
	switch enumClass {
	case "qt", "qinternal":
		return "qnamespace"
	case "qmetaobject":
		return "qobjectdefs"
	case "qgraphicspixmapitem":
		return "qgraphicsitem"
	case "qaccessibletablemodelchangeevent":
		return "qaccessible"
	case "qaccessible":
		return "qaccessible_base"
	case "qgradient":
		return "qbrush"
	case "qcborstreamwriter", "qcborerror":
		return "qcborcommon"
	}

	if (enumClass == "qcontextmenuevent" || enumClass == "qinputmethodevent" ||
		enumClass == "qplatformsurfaceevent" || enumClass == "qscrollevent") && enumName == "Type" {
		return "qcoreevent"
	}

	if enumClass == "qcontextmenuevent" || enumClass == "qinputmethodevent" ||
		enumClass == "qplatformsurfaceevent" || enumClass == "qscrollevent" {
		return "qevent"
	}

	return enumClass
}

func zigStructName(name string) string {
	if idx := strings.IndexByte(name, '_'); idx != -1 {
		return strings.ToLower(name[:idx])
	}
	return strings.ToLower(name)
}

func splitToParens(s string) string {
	if idx := strings.IndexByte(s, '('); idx != -1 {
		return s[:idx]
	}
	return s
}

func splitTranslationComment(s string) string {
	if idx := strings.LastIndex(s, " //"); idx != -1 {
		return s[:idx]
	}
	return s
}

func splitLastWords(s string) (string, string, string) {
	lastSpace := strings.LastIndex(s, " ")
	prevSpace := strings.LastIndex(s[:lastSpace], " ")

	last := s[lastSpace+1:]                  // Final word
	secondLast := s[prevSpace+1 : lastSpace] // Penultimate word
	remainder := s[:prevSpace]               // Everything before penultimate word
	return remainder, secondLast, last
}
