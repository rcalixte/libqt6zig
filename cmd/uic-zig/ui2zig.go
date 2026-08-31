package main

import (
	"fmt"
	"path/filepath"
	"regexp"
	"slices"
	"strconv"
	"strings"
)

var (
	SanitizeObjectCounter = 0
	SanitizationFlag      = false
	ExtendedFlag          = false
	FlagWarnings          = []string{}
	GlobalContext         = ""
	DefaultGridMargin     = 11
	DefaultChildrenMargin = -1
	TextCounter           = 0
	IconCounter           = 0
	SizeCounter           = 0
	FontCounter           = 0
	PixmapCounter         = 0
	CursorCounter         = 0
	ItemWidgetCounter     = 0
	VariantCounter        = 0
	SizePolicyCounter     = 0
	BrushCounter          = 0
	DateCounter           = 0
	TimeCounter           = 0
	ColorCounter          = 0
	SizePolicyMap         = map[string]string{}
	BrushColorMap         = map[string]string{}
	ButtonGroups          = map[string]*UiButtonGroup{}
	QMenus                = []string{}
	QMenuActionsMap       = map[string][]string{}
	OtherActions          = []string{}
	CustomWidgets         = make(map[string]string)
	WidgetMap             = map[string]string{}
	WidgetItemsMap        = map[string][]string{}
	WidgetItems           = []string{}
	TableWidgetMap        = map[string]struct{}{}
	alphabeticRegex       = regexp.MustCompile(`^[a-zA-Z_]+$`)
	comboWidgets          = []string{
		"KColorCombo",
		"KComboBox",
		"KDateComboBox",
		"KHistoryComboBox",
		"QComboBox",
		"QFontComboBox",
		"Sonnet::DictionaryComboBox",
	}
	zigReservedWord = map[string]struct{}{ // not an exhaustive list
		"addrspace": {},
		"align":     {},
		"allowzero": {},
		"anytype":   {},
		"asm":       {},
		"break":     {},
		"catch":     {},
		"comptime":  {},
		"const":     {},
		"defer":     {},
		"else":      {},
		"enum":      {},
		"export":    {},
		"extern":    {},
		"fn":        {},
		"inline":    {},
		"pub":       {},
		"switch":    {},
		"struct":    {},
		"test":      {},
		"try":       {},
		"union":     {},
		"var":       {},
		"volatile":  {},
	}
)

type WarningContext struct {
	NeedsWarning bool
	Class        string
}

func collectClassNames_Widget(u *UiWidget) []string {
	var ret []string
	className := strings.ReplaceAll(u.Class, "::", "__")

	if u.Name != "" {
		if cw, ok := CustomWidgets[u.Class]; ok && !(ExtendedFlag && isExtendedClass(u.Class)) {
			className = cw
		}
		ret = append(ret, u.Name+": qt6."+className+" = undefined")
		WidgetMap[u.Name] = sanitizeLowerName(className)
	}

	for _, w := range u.Widgets {
		ret = append(ret, collectClassNames_Widget(&w)...)
	}
	if u.Layout != nil {
		ret = append(ret, collectClassNames_Layout(u.Layout)...)
	}
	for _, a := range u.Actions {
		ret = append(ret, a.Name+": qt6.QAction = undefined")
		WidgetMap[a.Name] = "qaction"
	}

	return ret
}

func collectClassNames_Layout(l *UiLayout) []string {
	var ret []string

	if l.Name != "" {
		ret = append(ret, l.Name+": qt6."+l.Class+" = undefined")
		WidgetMap[l.Name] = sanitizeLowerName(l.Class)
	}

	for _, li := range l.Items {
		if li.Widget != nil {
			ret = append(ret, collectClassNames_Widget(li.Widget)...)
		}
		if li.Spacer != nil {
			ret = append(ret, li.Spacer.Name+": qt6.QSpacerItem = undefined")
		}
		if li.Layout != nil {
			ret = append(ret, collectClassNames_Layout(li.Layout)...)
		}
	}

	return ret
}

func writtenString(pre, generate, post string, notr, addComment bool) string {
	if notr {
		return pre + generate + post
	}

	var auxiliaryComment string
	if addComment {
		auxiliaryComment = " // auxiliary to qt6.QCoreApplication.translate"
	}

	returnStr := "const text" + strconv.Itoa(TextCounter) + " = " + generate + ";\n"
	returnStr += "defer allocator.free(text" + strconv.Itoa(TextCounter) + ");" + auxiliaryComment + "\n"
	returnStr += pre + " text" + strconv.Itoa(TextCounter) + strings.TrimSpace(post) + auxiliaryComment + "\n"

	TextCounter++

	return returnStr
}

func generateString(s *UiString) string {
	if s.Notr {
		return strconv.Quote(s.Value)
	}

	var suffix, disambiguation string
	if s.Disambiguation != "" {
		suffix = "3"
		disambiguation = ", " + strconv.Quote(s.Disambiguation)
	}

	context := strconv.Quote(GlobalContext) + ", "

	return "qt6.QCoreApplication.translate" + suffix + "(allocator, " + context + strconv.Quote(s.Value) + disambiguation + ")"
}

func normalizeEnumName(name, val string) string {
	enumParts := strings.Split(val, "::")

	switch len(enumParts) {
	case 1:
		// BottomToolBarArea -> Qt::BottomToolBarArea
		c := strings.ToUpper(name[0:1])
		enumName := c + name[1:]
		return "qt6.qnamespace_enums." + enumName + "." + enumParts[0]
	case 3:
		// QFrame::Shape::Panel
		className, enumName, enumValue := enumParts[0], enumParts[1], enumParts[2]
		className = enumClassToZig(strings.ToLower(className), enumName)
		return "qt6." + className + "_enums." + enumName + "." + enumValue
	default:
		panic("invalid enum: " + val)
	}
}

func storeAction(action, wClass, name string) {
	if wClass == "QMenu" {
		QMenuActionsMap[name] = append(QMenuActionsMap[name], action)
	} else {
		OtherActions = append(OtherActions, action)
	}
}

func processPaletteGroup(ret *strings.Builder, targetName string, groupName string, colorRoles []UiColorRole) {
	for _, role := range colorRoles {
		mapKey := role.Brush.Style + " (" + strconv.Itoa(role.Brush.Color.Red) + "," + strconv.Itoa(role.Brush.Color.Green) + "," + strconv.Itoa(role.Brush.Color.Blue) + "," + strconv.Itoa(*role.Brush.Color.Alpha) + ")"

		brushNum, ok := BrushColorMap[mapKey]
		if !ok {
			brushNum = strconv.Itoa(BrushCounter)
			BrushColorMap[mapKey] = brushNum
			ret.WriteString(getNewBrush(brushNum, role.Brush.Style, strconv.Itoa(role.Brush.Color.Red), strconv.Itoa(role.Brush.Color.Green), strconv.Itoa(role.Brush.Color.Blue), strconv.Itoa(*role.Brush.Color.Alpha)))
			BrushCounter++
		}
		ret.WriteString(getSetPaletteBrush(targetName, groupName, role.Role, brushNum))
	}
}

func getNewBrush(brushNum, style, red, green, blue, alpha string) string {
	var newBrush string

	newBrush += "const color" + brushNum + " = qt6.QColor.new15(" + red + ", " + green + ", " + blue + ", " + alpha + ");\n"
	newBrush += "defer color" + brushNum + ".delete();\n"
	newBrush += "const brush" + brushNum + " = qt6.QBrush.new3(color" + brushNum + ");\n"
	newBrush += "defer brush" + brushNum + ".delete();\n"
	newBrush += "brush" + brushNum + ".setStyle(qt6.qnamespace_enums.BrushStyle." + style + ");\n"

	return newBrush
}

func getSetPaletteBrush(targetName, group, role, brushNum string) string {
	return targetName + "_palette.setBrush2(qt6.qpalette_enums.ColorGroup." + group + ", qt6.qpalette_enums.ColorRole." + role + ", brush" + brushNum + ");\n"
}

func newQSize(sizeName *string, isSizeSet *bool) string {
	if *isSizeSet {
		*sizeName = fmt.Sprintf("size%d", SizeCounter)
	} else {
		*isSizeSet = true
	}

	newSize := "const " + *sizeName + " = qt6.QSize.new3();\n"
	newSize += "defer " + *sizeName + ".delete();\n"
	SizeCounter++

	return newSize
}

func writeFlagWarning(ret *strings.Builder, name, class string) {
	warning := "Warning: Use '-e' to enable extended class support for '" + name + "' property of type '" + class + "'"
	ret.WriteString("// " + warning + "\n")
	FlagWarnings = append(FlagWarnings, warning)
}

func renderIcon(iconVal *UiIcon, ret *strings.Builder) string {
	iconName := fmt.Sprintf("icon%d", IconCounter)
	IconCounter++

	sizeName := fmt.Sprintf("size%d", SizeCounter)
	var themeIconCond, isSizeSet bool

	if iconVal.Theme != "" {
		theme := iconVal.Theme

		if strings.Contains(theme, "::") {
			theme = normalizeEnumName(iconName, theme)
			ret.WriteString("const " + iconName + " = qt6.QIcon.fromTheme3(" + theme + ");\n")
		} else if iconVal.ResourceFile != "" {
			theme = strconv.Quote(theme)
			ret.WriteString("var " + iconName + ": qt6.QIcon = undefined;\n")
			ret.WriteString("if (qt6.QIcon.hasThemeIcon(" + theme + "))\n")
			ret.WriteString(iconName + " = .fromTheme(" + theme + ")\n")
			ret.WriteString("else {\n")
			ret.WriteString(iconName + " = .new();\n")
			themeIconCond = true
		} else {
			ret.WriteString("const " + iconName + " = qt6.QIcon.fromTheme(" + strconv.Quote(theme) + ");\n")
		}
	} else {
		ret.WriteString("const " + iconName + " = qt6.QIcon.new();\n")
	}

	// A base entry is a synonym for NormalOff. Don't need them both
	if iconVal.NormalOff != nil && *iconVal.NormalOff != "." {
		ret.WriteString(newQSize(&sizeName, &isSizeSet))
		isSizeSet = true
		ret.WriteString(iconName + ".addFile4(" + strconv.Quote(*iconVal.NormalOff) + ", " + sizeName + ", qt6.qicon_enums.Mode.Normal, qt6.qicon_enums.State.Off);\n")
	} else {
		base := strings.TrimSpace(iconVal.Base)
		if base != "" && base != "." {
			ret.WriteString(iconName + ".addFile(" + strconv.Quote(strings.TrimSpace(iconVal.Base)) + ");\n")
		}
	}

	if iconVal.NormalOn != nil {
		ret.WriteString(newQSize(&sizeName, &isSizeSet))
		ret.WriteString(iconName + ".addFile4(" + strconv.Quote(*iconVal.NormalOn) + ", " + sizeName + ", qt6.qicon_enums.Mode.Normal, qt6.qicon_enums.State.On);\n")
	}
	if iconVal.ActiveOff != nil {
		ret.WriteString(newQSize(&sizeName, &isSizeSet))
		ret.WriteString(iconName + ".addFile4(" + strconv.Quote(*iconVal.ActiveOff) + ", " + sizeName + ", qt6.qicon_enums.Mode.Active, qt6.qicon_enums.State.Off);\n")
	}
	if iconVal.ActiveOn != nil {
		ret.WriteString(newQSize(&sizeName, &isSizeSet))
		ret.WriteString(iconName + ".addFile4(" + strconv.Quote(*iconVal.ActiveOn) + ", " + sizeName + ", qt6.qicon_enums.Mode.Active, qt6.qicon_enums.State.On);\n")
	}
	if iconVal.DisabledOff != nil {
		ret.WriteString(newQSize(&sizeName, &isSizeSet))
		ret.WriteString(iconName + ".addFile4(" + strconv.Quote(*iconVal.DisabledOff) + ", " + sizeName + ", qt6.qicon_enums.Mode.Disabled, qt6.qicon_enums.State.Off);\n")
	}
	if iconVal.DisabledOn != nil {
		ret.WriteString(newQSize(&sizeName, &isSizeSet))
		ret.WriteString(iconName + ".addFile4(" + strconv.Quote(*iconVal.DisabledOn) + ", " + sizeName + ", qt6.qicon_enums.Mode.Disabled, qt6.qicon_enums.State.On);\n")
	}
	if iconVal.SelectedOff != nil {
		ret.WriteString(newQSize(&sizeName, &isSizeSet))
		ret.WriteString(iconName + ".addFile4(" + strconv.Quote(*iconVal.SelectedOff) + ", " + sizeName + ", qt6.qicon_enums.Mode.Selected, qt6.qicon_enums.State.Off);\n")
	}
	if iconVal.SelectedOn != nil {
		ret.WriteString(newQSize(&sizeName, &isSizeSet))
		ret.WriteString(iconName + ".addFile4(" + strconv.Quote(*iconVal.SelectedOn) + ", " + sizeName + ", qt6.qicon_enums.Mode.Selected, qt6.qicon_enums.State.On);\n")
	}

	if themeIconCond {
		ret.WriteString("}\n")
	}

	ret.WriteString("defer " + iconName + ".delete();\n")

	return iconName
}

func renderProperties(properties []UiProperty, ret *strings.Builder, targetName, targetClass, parentClass string, warningContext WarningContext) error {
	defaultMargin := DefaultGridMargin
	if parentClass != "" {
		defaultMargin = DefaultChildrenMargin
	}
	contentsMargins := [4]int{defaultMargin, defaultMargin, defaultMargin, defaultMargin} // left, top, right, bottom
	customContentsMargins := false

	strVariantName := targetName + "_variant_str"
	numVariantName := targetName + "_variant_num"
	boolVariantName := targetName + "_variant_bool"
	urlVariantName := targetName + "_variant_url"
	enumVariantName := targetName + "_variant_enum"

	for _, prop := range properties {
		if !alphabeticRegex.MatchString(prop.Name) {
			fmt.Println("WARNING: Invalid property name: " + prop.Name)
			continue
		}

		setterFunc := ".set" + strings.ToUpper(string(prop.Name[0])) + prop.Name[1:]

		if prop.Name == "geometry" {
			if targetName == GlobalContext {
				ret.WriteString("ui." + targetName + ".resize(" + fmt.Sprintf("%d, %d", prop.RectVal.Width, prop.RectVal.Height) + ");\n")
			} else {
				ret.WriteString("ui." + targetName + ".setGeometry(" + fmt.Sprintf("%d, %d, %d, %d", prop.RectVal.X, prop.RectVal.Y, prop.RectVal.Width, prop.RectVal.Height) + ");\n")
			}

		} else if prop.Name == "leftMargin" {
			contentsMargins[0] = mustParseInt(*prop.NumberVal)
			customContentsMargins = true

		} else if prop.Name == "topMargin" {
			contentsMargins[1] = mustParseInt(*prop.NumberVal)
			customContentsMargins = true

		} else if prop.Name == "rightMargin" {
			contentsMargins[2] = mustParseInt(*prop.NumberVal)
			customContentsMargins = true

		} else if prop.Name == "bottomMargin" {
			contentsMargins[3] = mustParseInt(*prop.NumberVal)
			customContentsMargins = true

		} else if prop.Name == "margin" && prop.StdSetVal != nil && *prop.StdSetVal != "" {
			customMargin := mustParseInt(*prop.NumberVal)
			contentsMargins = [4]int{customMargin, customMargin, customMargin, customMargin}
			customContentsMargins = true

		} else if prop.PixmapVal != nil {
			ret.WriteString("const pixmap" + strconv.Itoa(PixmapCounter) + ` = qt6.QPixmap.new4("` + *prop.PixmapVal + `");` + "\n")
			ret.WriteString("defer pixmap" + strconv.Itoa(PixmapCounter) + ".delete();\n")
			ret.WriteString("ui." + targetName + setterFunc + "(pixmap" + strconv.Itoa(PixmapCounter) + ");\n")
			PixmapCounter++

		} else if prop.Name == "buddy" {
			ret.WriteString("ui." + targetName + ".setBuddy(ui." + *prop.CStringVal + ");\n")

		} else if prop.Name == "cursor" {
			ret.WriteString("const cursor" + strconv.Itoa(CursorCounter) + " = qt6.QCursor.new2(qt6.qnamespace_enums.CursorShape." + *prop.CursorVal + ");\n")
			ret.WriteString("defer cursor" + strconv.Itoa(CursorCounter) + ".delete();\n")
			ret.WriteString("ui." + targetName + ".setCursor(cursor" + strconv.Itoa(CursorCounter) + ");\n")
			CursorCounter++

		} else if prop.StringVal != nil {
			//  "windowTitle", "title", "text"
			if prop.StdSetVal != nil && *prop.StdSetVal != "" {
				maybeComment := " // auxiliary to qt6.QCoreApplication.translate"
				if prop.StringVal.Notr {
					maybeComment = ""
				}
				ret.WriteString(writtenString("const "+strVariantName+strconv.Itoa(VariantCounter)+" = qt6.QVariant.new24(", generateString(prop.StringVal), ");\n", prop.StringVal.Notr, true))
				ret.WriteString("defer " + strVariantName + strconv.Itoa(VariantCounter) + ".delete();" + maybeComment + "\n")
				ret.WriteString("_ = ui." + targetName + ".setProperty(" + strconv.Quote(prop.Name) + ", " + strVariantName + strconv.Itoa(VariantCounter) + ");" + maybeComment + "\n")
				VariantCounter++
			} else if prop.Name == "shortcut" || prop.Name == "keySequence" {
				maybeComment := " // auxiliary to qt6.QCoreApplication.translate"
				if prop.StringVal.Notr {
					maybeComment = ""
				}
				ret.WriteString(writtenString("\nconst "+targetName+"_keySequence = qt6.QKeySequence.new2(", generateString(prop.StringVal), ");\n", prop.StringVal.Notr, true))
				ret.WriteString("defer " + targetName + "_keySequence.delete();" + maybeComment + "\n")
				ret.WriteString("ui." + targetName + setterFunc + "(" + targetName + "_keySequence);" + maybeComment + "\n")
			} else {
				ret.WriteString(writtenString("ui."+targetName+setterFunc+"(", generateString(prop.StringVal), ");\n", prop.StringVal.Notr, true))
			}

		} else if prop.NumberVal != nil {
			// "currentIndex"
			if prop.StdSetVal != nil && *prop.StdSetVal != "" {
				ret.WriteString("const " + numVariantName + strconv.Itoa(VariantCounter) + " = qt6.QVariant.new6(" + *prop.NumberVal + ");\n")
				ret.WriteString("defer " + numVariantName + strconv.Itoa(VariantCounter) + ".delete();\n")
				ret.WriteString("_ = ui." + targetName + ".setProperty(" + strconv.Quote(prop.Name) + ", " + numVariantName + strconv.Itoa(VariantCounter) + ");\n")
				VariantCounter++
			} else {
				ret.WriteString("ui." + targetName + setterFunc + "(" + *prop.NumberVal + ");\n")
			}

		} else if prop.BoolVal != nil {
			// "childrenCollapsible"
			if prop.StdSetVal != nil && *prop.StdSetVal != "" {
				ret.WriteString("const " + boolVariantName + strconv.Itoa(VariantCounter) + " = qt6.QVariant.new8(" + strconv.FormatBool(*prop.BoolVal) + ");\n")
				ret.WriteString("defer " + boolVariantName + strconv.Itoa(VariantCounter) + ".delete();\n")
				ret.WriteString("_ = ui." + targetName + ".setProperty(" + strconv.Quote(prop.Name) + ", " + boolVariantName + strconv.Itoa(VariantCounter) + ");\n")
				VariantCounter++
			} else {
				// "tristate"
				var overrideNum string
				if prop.Name == "tristate" || (targetClass == "KUrlLabel" && (prop.Name == "floatEnabled" || prop.Name == "glowEnabled" || prop.Name == "underline" || prop.Name == "useTips")) {
					overrideNum = "1"
				}
				ret.WriteString("ui." + targetName + setterFunc + overrideNum + "(" + strconv.FormatBool(*prop.BoolVal) + ");\n")
			}

		} else if prop.EnumVal != nil {
			// "tabStyle"
			if prop.StdSetVal != nil && *prop.StdSetVal != "" {
				ret.WriteString("const " + enumVariantName + strconv.Itoa(VariantCounter) + " = qt6.QVariant.new6(" + normalizeEnumName(prop.Name, *prop.EnumVal) + ");\n")
				ret.WriteString("defer " + enumVariantName + strconv.Itoa(VariantCounter) + ".delete();\n")
				ret.WriteString("_ = ui." + targetName + ".setProperty(" + strconv.Quote(prop.Name) + ", " + enumVariantName + strconv.Itoa(VariantCounter) + ");\n")
				VariantCounter++
			} else if targetClass == "QFrame" && prop.Name == "orientation" {
				enumVal := "HLine"
				if strings.Contains(*prop.EnumVal, "Vertical") {
					enumVal = "VLine"
				}
				ret.WriteString("ui." + targetName + ".setFrameShape(qt6.qframe_enums.Shape." + enumVal + ");\n")
			} else {
				// "QFrame::Shape::Panel"
				ret.WriteString("ui." + targetName + setterFunc + "(" + normalizeEnumName(prop.Name, *prop.EnumVal) + ");\n")
			}

		} else if prop.SetVal != nil {
			// QDialogButtonBox::StandardButton::*
			// <set>QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Save</set>
			parts := strings.Split(*prop.SetVal, "|")
			for i, p := range parts {
				parts[i] = normalizeEnumName(prop.Name, p)
			}

			emit := "0"
			if len(parts) > 0 {
				emit = strings.Join(parts, "|")
			}

			if prop.Name == "richTextSupport" {
				ret.WriteString("const " + targetName + "_rich_text_support = " + emit + ";\n")
				ret.WriteString("ui." + targetName + setterFunc + "(&" + targetName + "_rich_text_support);\n")
			} else {
				ret.WriteString("ui." + targetName + setterFunc + "(" + emit + ");\n")
			}

		} else if prop.IconVal != nil {
			iconName := renderIcon(prop.IconVal, ret)
			if slices.Contains(comboWidgets, targetClass) {
				ret.WriteString("ui." + targetName + ".addItem2(" + iconName + `, "");` + "\n")
			} else {
				ret.WriteString("ui." + targetName + setterFunc + "(" + iconName + ");\n")
			}

		} else if prop.Name == "sizePolicy" {
			mapKey := prop.SizePolicyVal.HSizeType + "," + prop.SizePolicyVal.VSizeType + "," + strconv.Itoa(prop.SizePolicyVal.HStretch) + "," + strconv.Itoa(prop.SizePolicyVal.VStretch)

			sizePolicyNum, ok := SizePolicyMap[mapKey]
			if !ok {
				sizePolicyNum = strconv.Itoa(SizePolicyCounter)
				SizePolicyMap[mapKey] = sizePolicyNum
				ret.WriteString("const size_policy" + sizePolicyNum + " = qt6.QSizePolicy.new3();\n")
				ret.WriteString("defer size_policy" + sizePolicyNum + ".delete();\n")
				ret.WriteString("size_policy" + sizePolicyNum + ".setHorizontalPolicy(" + normalizeEnumName("", "QSizePolicy::Policy::"+prop.SizePolicyVal.HSizeType) + ");\n")
				ret.WriteString("size_policy" + sizePolicyNum + ".setVerticalPolicy(" + normalizeEnumName("", "QSizePolicy::Policy::"+prop.SizePolicyVal.VSizeType) + ");\n")
				ret.WriteString("size_policy" + sizePolicyNum + ".setHorizontalStretch(" + strconv.Itoa(prop.SizePolicyVal.HStretch) + ");\n")
				ret.WriteString("size_policy" + sizePolicyNum + ".setVerticalStretch(" + strconv.Itoa(prop.SizePolicyVal.VStretch) + ");\n")
				SizePolicyCounter++
			}

			targetSP := targetName + "_sp"
			ret.WriteString("const " + targetSP + " = ui." + targetName + ".sizePolicy();\n")
			ret.WriteString("defer " + targetSP + ".delete();\n")
			ret.WriteString("size_policy" + sizePolicyNum + ".setHeightForWidth(" + targetSP + ".hasHeightForWidth());\n")
			ret.WriteString("ui." + targetName + ".setSizePolicy(size_policy" + sizePolicyNum + ");\n")

		} else if prop.Name == "font" {
			fontCounter := FontCounter
			FontCounter++

			fontVal := "font" + strconv.Itoa(fontCounter)

			ret.WriteString("const " + fontVal + " = qt6.QFont.new();\n")
			ret.WriteString("defer " + fontVal + ".delete();\n")

			if prop.FontVal.Family != nil && *prop.FontVal.Family != "" {
				ret.WriteString(fontVal + ".setFamily(" + strconv.Quote(*prop.FontVal.Family) + ");\n")
			}

			if prop.FontVal.PointSize != nil && *prop.FontVal.PointSize > 0 {
				ret.WriteString(fontVal + ".setPointSize(" + strconv.Itoa(*prop.FontVal.PointSize) + ");\n")
			}

			if prop.FontVal.Italic != nil {
				ret.WriteString(fontVal + ".setItalic(" + strconv.FormatBool(*prop.FontVal.Italic) + ");\n")
			}

			if prop.FontVal.Bold != nil {
				ret.WriteString(fontVal + ".setBold(" + strconv.FormatBool(*prop.FontVal.Bold) + ");\n")
			}

			if prop.FontVal.Underline != nil {
				ret.WriteString(fontVal + ".setUnderline(" + strconv.FormatBool(*prop.FontVal.Underline) + ");\n")
			}

			if prop.FontVal.StrikeOut != nil {
				ret.WriteString(fontVal + ".setStrikeOut(" + strconv.FormatBool(*prop.FontVal.StrikeOut) + ");\n")
			}

			if prop.FontVal.Weight != nil && *prop.FontVal.Weight != "" {
				ret.WriteString(fontVal + ".setWeight(qt6.qfont_enums.Weight." + *prop.FontVal.Weight + ");\n")
			}

			if prop.FontVal.Antialiasing != nil && *prop.FontVal.Antialiasing != "" {
				ret.WriteString(fontVal + ".setStyleStrategy(qt6.qfont_enums.StyleStrategy." + *prop.FontVal.Antialiasing + ");\n")
			}

			if prop.FontVal.Kerning != nil {
				ret.WriteString(fontVal + ".setKerning(" + strconv.FormatBool(*prop.FontVal.Kerning) + ");\n")
			}

			if prop.FontVal.HintingPreference != nil && *prop.FontVal.HintingPreference != "" {
				ret.WriteString(fontVal + ".setHintingPreference(qt6.qfont_enums.HintingPreference." + *prop.FontVal.HintingPreference + ");\n")
			}

			var maybeOnlyFixed string
			if ExtendedFlag && targetClass == "KFontRequester" {
				maybeOnlyFixed = ", false"
			} else if warningContext.NeedsWarning {
				writeFlagWarning(ret, prop.Name, warningContext.Class)
			}
			ret.WriteString("ui." + targetName + ".setFont(" + fontVal + maybeOnlyFixed + ");\n")

		} else if prop.Name == "iconSize" || prop.Name == "gridSize" {
			ret.WriteString("const " + targetName + "_size" + strconv.Itoa(SizeCounter) + " = qt6.QSize.new4(" + fmt.Sprintf("%d, %d", prop.SizeVal.Width, prop.SizeVal.Height) + ");\n")
			ret.WriteString("defer " + targetName + "_size" + strconv.Itoa(SizeCounter) + ".delete();\n")
			ret.WriteString("ui." + targetName + setterFunc + "(" + targetName + "_size" + strconv.Itoa(SizeCounter) + ");\n")
			SizeCounter++

		} else if prop.DoubleVal != nil {
			// QDoubleSpinBox
			// "decimals", "minimum", "maximum", "value"
			if prop.StdSetVal != nil && *prop.StdSetVal != "" {
				ret.WriteString("const " + numVariantName + strconv.Itoa(VariantCounter) + " = qt6.QVariant.new6(" + *prop.DoubleVal + ");\n")
				ret.WriteString("defer " + numVariantName + strconv.Itoa(VariantCounter) + ".delete();\n")
				ret.WriteString("_ = ui." + targetName + ".setProperty(" + strconv.Quote(prop.Name) + ", " + numVariantName + strconv.Itoa(VariantCounter) + ");\n")
				VariantCounter++
			} else {
				ret.WriteString("ui." + targetName + setterFunc + "(" + *prop.DoubleVal + ");\n")
			}

		} else if prop.SizeVal != nil {
			// "maximumSize", "minimumSize", "baseSize"
			ret.WriteString("ui." + targetName + setterFunc + "2(" + fmt.Sprintf("%d, %d", prop.SizeVal.Width, prop.SizeVal.Height) + ");\n")

		} else if prop.UrlVal != nil {
			// "url"
			if prop.StdSetVal != nil && *prop.StdSetVal != "" {
				ret.WriteString("const " + urlVariantName + strconv.Itoa(VariantCounter) + "_url = qt6.QUrl.new3(" + strconv.Quote(prop.UrlVal.StringVal.Value) + ");\n")
				ret.WriteString("defer " + urlVariantName + strconv.Itoa(VariantCounter) + "_url.delete();\n")
				ret.WriteString("const " + urlVariantName + strconv.Itoa(VariantCounter) + " = qt6.QVariant.new26(" + urlVariantName + strconv.Itoa(VariantCounter) + "_url);\n")
				ret.WriteString("defer " + urlVariantName + strconv.Itoa(VariantCounter) + ".delete();\n")
				ret.WriteString("_ = ui." + targetName + ".setProperty(" + strconv.Quote(prop.Name) + ", " + urlVariantName + strconv.Itoa(VariantCounter) + ");\n")
				VariantCounter++
			}

		} else if prop.Name == "palette" {
			ret.WriteString("const " + targetName + "_palette = qt6.QPalette.new();\n")
			ret.WriteString("defer " + targetName + "_palette.delete();\n")

			processPaletteGroup(ret, targetName, "Active", prop.PaletteVal.Active.ColorRoles)
			processPaletteGroup(ret, targetName, "Inactive", prop.PaletteVal.Inactive.ColorRoles)
			processPaletteGroup(ret, targetName, "Disabled", prop.PaletteVal.Disabled.ColorRoles)

			ret.WriteString("ui." + targetName + ".setPalette(" + targetName + "_palette);\n")

		} else if prop.Name == "backgroundBrush" {
			mapKey := prop.BackgroundBrushVal.Style + " (" + strconv.Itoa(prop.BackgroundBrushVal.Color.Red) + "," + strconv.Itoa(prop.BackgroundBrushVal.Color.Green) + "," + strconv.Itoa(prop.BackgroundBrushVal.Color.Blue) + "," + strconv.Itoa(*prop.BackgroundBrushVal.Color.Alpha) + ")"

			brushNum, ok := BrushColorMap[mapKey]
			if !ok {
				brushNum = strconv.Itoa(BrushCounter)
				BrushColorMap[mapKey] = brushNum
				ret.WriteString(getNewBrush(brushNum, prop.BackgroundBrushVal.Style, strconv.Itoa(prop.BackgroundBrushVal.Color.Red), strconv.Itoa(prop.BackgroundBrushVal.Color.Green), strconv.Itoa(prop.BackgroundBrushVal.Color.Blue), strconv.Itoa(*prop.BackgroundBrushVal.Color.Alpha)))
				BrushCounter++
			}
			ret.WriteString("ui." + targetName + ".setBackgroundBrush(brush" + brushNum + ");\n")

		} else if prop.LocaleVal != nil {
			ret.WriteString("const locale_" + targetName + " = qt6.QLocale.new4(qt6.qlocale_enums.Language." + prop.LocaleVal.Language + ", qt6.qlocale_enums.Country." + prop.LocaleVal.Country + ");\n")
			ret.WriteString("defer locale_" + targetName + ".delete();\n")
			ret.WriteString("ui." + targetName + ".setLocale(locale_" + targetName + ");\n")

		} else if prop.UIntVal != nil {
			if !ExtendedFlag {
				writeFlagWarning(ret, prop.Name, warningContext.Class)
			} else {
				ret.WriteString("ui." + targetName + setterFunc + "(" + *prop.UIntVal + ");\n")
			}

		} else if prop.CharVal != nil {
			if !ExtendedFlag {
				writeFlagWarning(ret, prop.Name, warningContext.Class)
			} else {
				ret.WriteString("const " + targetName + "_qchar = qt6.QChar.new4(" + prop.CharVal.Unicode + ");\n")
				ret.WriteString("defer " + targetName + "_qchar.delete();\n")
				ret.WriteString("ui." + targetName + setterFunc + "(" + targetName + "_qchar);\n")
			}

		} else if prop.DateVal != nil {
			if warningContext.NeedsWarning {
				writeFlagWarning(ret, prop.Name, warningContext.Class)
			} else {
				dateName := targetName + "_date" + strconv.Itoa(DateCounter)
				var maybeDiscard string
				if targetClass == "KDatePicker" {
					maybeDiscard = "_ = "
				}
				ret.WriteString("const " + dateName + " = qt6.QDate.new4(" + strconv.Itoa(prop.DateVal.Year) + ", " + strconv.Itoa(prop.DateVal.Month) + ", " + strconv.Itoa(prop.DateVal.Day) + ");\n")
				ret.WriteString("defer " + dateName + ".delete();\n")
				ret.WriteString(maybeDiscard + "ui." + targetName + setterFunc + "(" + dateName + ");\n")
				DateCounter++
			}

		} else if prop.TimeVal != nil {
			if warningContext.NeedsWarning {
				writeFlagWarning(ret, prop.Name, warningContext.Class)
			} else {
				timeName := targetName + "_time" + strconv.Itoa(TimeCounter)
				ret.WriteString("const " + timeName + " = qt6.QTime.new6(" + strconv.Itoa(prop.TimeVal.Hour) + ", " + strconv.Itoa(prop.TimeVal.Minute) + ", " + strconv.Itoa(prop.TimeVal.Second) + ");\n")
				ret.WriteString("defer " + timeName + ".delete();\n")
				ret.WriteString("ui." + targetName + setterFunc + "(" + timeName + ");\n")
				TimeCounter++
			}

		} else if prop.ColorVal != nil {
			if warningContext.NeedsWarning {
				writeFlagWarning(ret, prop.Name, warningContext.Class)
			} else {
				colorOverload := "5"
				var maybeAlpha string
				if prop.ColorVal.Alpha != nil {
					colorOverload = "13"
					maybeAlpha = ", " + strconv.Itoa(*prop.ColorVal.Alpha)
				}
				colorName := targetName + "_color" + strconv.Itoa(ColorCounter)
				ret.WriteString("const " + colorName + " = qt6.QColor.new" + colorOverload + "(" + strconv.Itoa(prop.ColorVal.Red) + ", " + strconv.Itoa(prop.ColorVal.Green) + ", " + strconv.Itoa(prop.ColorVal.Blue) + maybeAlpha + ");\n")
				ret.WriteString("defer " + colorName + ".delete();\n")
				ret.WriteString("ui." + targetName + setterFunc + "(" + colorName + ");\n")
				ColorCounter++
			}

		} else if prop.StringListVal != nil {
			if warningContext.NeedsWarning {
				writeFlagWarning(ret, prop.Name, warningContext.Class)
			} else {
				comment := " // auxiliary to qt6.QCoreApplication.translate\n"
				var items []string
				for i, s := range prop.StringListVal.Strings {
					itemName := targetName + "_" + prop.Name + strconv.Itoa(i)
					items = append(items, itemName)
					ret.WriteString("const " + itemName + " = " + generateString(&s) + ";\n")
					ret.WriteString("defer allocator.free(" + itemName + ");" + comment)
				}

				ret.WriteString("const " + targetName + "_" + prop.Name + " = [_][]const u8{" + strings.Join(items, ", ") + "};" + comment)
				ret.WriteString("ui." + targetName + setterFunc + "(allocator, &" + targetName + "_" + prop.Name + ");" + comment)
			}

		} else {
			ret.WriteString("// UIC: no handler for " + targetName + " of type " + targetClass + " property '" + prop.Name + "'\n")
		}
	}

	if customContentsMargins {
		ret.WriteString("ui." + targetName + ".setContentsMargins(" + fmt.Sprintf("%d, %d, %d, %d", contentsMargins[0], contentsMargins[1], contentsMargins[2], contentsMargins[3]) + ");\n")
	}

	return nil
}

func assignWidgetToLayout(ret *strings.Builder, l *UiLayout, child *UiLayoutItem, noun, widgetName string) {
	switch l.Class {
	case "QFormLayout":
		// Row and Column are always populated
		rowPos := strconv.Itoa(*child.Row)
		var colPos string
		switch {
		case child.ColSpan != nil && *child.ColSpan > 0:
			colPos = "qt6.qformlayout_enums.ItemRole.SpanningRole"
		case *child.Column == 0:
			colPos = "qt6.qformlayout_enums.ItemRole.LabelRole"
		case *child.Column == 1:
			colPos = "qt6.qformlayout_enums.ItemRole.FieldRole"
		default:
			ret.WriteString("// UIC: QFormLayout does not understand this column index value\n")
			return
		}

		// For QFormLayout, it's setWidget or setLayout
		ret.WriteString("ui." + l.Name + ".set" + noun + "(" + rowPos + ", " + colPos + ", " + widgetName + ");\n")

	case "QGridLayout":
		if child.ColSpan != nil || child.RowSpan != nil {
			// If either are present, use full four-value addWidget3/addLayout2
			rowSpan := 1
			if child.RowSpan != nil {
				rowSpan = *child.RowSpan
			}
			colSpan := 1
			if child.ColSpan != nil {
				colSpan = *child.ColSpan
			}

			switch noun {
			case "Widget":
				noun += "3"
			case "Layout":
				noun += "2"
			}

			ret.WriteString("ui." + l.Name + ".add" + noun + "(" + widgetName + ", " + fmt.Sprintf("%d, %d, %d, %d", *child.Row, *child.Column, rowSpan, colSpan) + ");\n")

		} else {
			// Row and Column are always present in the .ui file
			// For row/column it's addWidget2/addLayout

			if noun == "Widget" {
				noun += "2"
			}

			ret.WriteString("ui." + l.Name + ".add" + noun + "(" + widgetName + ", " + fmt.Sprintf("%d, %d", *child.Row, *child.Column) + ");\n")
		}

	case "QHBoxLayout", "QVBoxLayout":
		// For box layout it's addWidget/addLayout
		ret.WriteString("\nui." + l.Name + ".add" + noun + "(" + widgetName + ");\n")

	default:
		ret.WriteString("// UIC: no handler for layout '" + l.Class + "'\n")
	}
}

func writeLayoutAttributes(ret *strings.Builder, prop, method string) {
	if prop != "" {
		propVals := strings.Split(prop, ",")
		for i, propVal := range propVals {
			if propVal != "0" {
				ret.WriteString(method + strconv.Itoa(i) + ", " + propVal + ");\n")
			}
		}
	}
}

func generateLayout(l *UiLayout, parentName, parentClass string, isNestedLayout bool) (string, error) {
	var ret strings.Builder

	if isNestedLayout {
		ret.WriteString("\nui." + l.Name + " = .new2();\n")
	} else {
		ret.WriteString("\nui." + l.Name + " = .new(" + parentName + ");\n")
	}

	ret.WriteString("ui." + l.Name + ".setObjectName(" + strconv.Quote(l.Name) + ");\n")

	// Layout->Properties

	err := renderProperties(l.Properties, &ret, l.Name, l.Class, parentClass, WarningContext{NeedsWarning: false, Class: ""})
	if err != nil {
		return "", err
	}

	// Layout->Items

	for i, child := range l.Items {

		// A layout item is either a widget, or a spacer

		if child.Spacer != nil {

			var width, height int
			var method, orientation, extraParams string
			var spacerEnums [2]string

			spacerEnums[0] = "qt6.qsizepolicy_enums.Policy.Expanding"
			spacerEnums[1] = "qt6.qsizepolicy_enums.Policy.Minimum"

			for _, prop := range child.Spacer.Properties {
				if prop.Name == "orientation" {
					orientation = normalizeEnumName(prop.Name, *prop.EnumVal)
				}

				if prop.Name == "sizeHint" {
					width = prop.SizeVal.Width
					height = prop.SizeVal.Height
				}

				if prop.Name == "sizeType" {
					spacerEnums[0] = normalizeEnumName(prop.Name, *prop.EnumVal)
				}
			}

			if l.Class == "QGridLayout" {
				method = "2"

				if child.Row != nil && child.Column != nil {
					method = ""
					extraParams = fmt.Sprintf(", %d, %d", *child.Row, *child.Column)

					if child.RowSpan != nil {
						method = "4"
						extraParams += fmt.Sprintf(", %d", *child.RowSpan)

						if child.ColSpan != nil {
							method = "5"
							extraParams += fmt.Sprintf(", %d", *child.ColSpan)
						}
					} else if child.ColSpan != nil {
						method = "5"
						extraParams += fmt.Sprintf(", 1, %d", *child.ColSpan)
					}
				}
			}

			if strings.HasSuffix(orientation, "Vertical") {
				// swap enum values
				spacerEnums[0], spacerEnums[1] = spacerEnums[1], spacerEnums[0]
			}

			ret.WriteString("\nui." + child.Spacer.Name + " = .new4(" + fmt.Sprintf("%d, %d, %s, %s", width, height, spacerEnums[0], spacerEnums[1]) + ");\n")
			if l.Class == "QFormLayout" {
				role := "qt6.qformlayout_enums.ItemRole.LabelRole"
				if *child.Column == 1 {
					role = "qt6.qformlayout_enums.ItemRole.FieldRole"
				}
				if (child.RowSpan != nil && *child.RowSpan > 0) || (child.ColSpan != nil && *child.ColSpan > 0) {
					role = "qt6.qformlayout_enums.ItemRole.SpanningRole"
				}
				ret.WriteString("ui." + l.Name + ".setItem" + method + "(" + strconv.Itoa(*child.Row) + ", " + role + ", ui." + child.Spacer.Name + ");\n\n")
			} else {
				ret.WriteString("ui." + l.Name + ".addItem" + method + "(ui." + child.Spacer.Name + extraParams + ");\n\n")
			}
		}

		if child.Widget != nil {

			// Layout items have the parent as the real QWidget parent and are
			// separately assigned to the layout afterwards

			nest, err := generateWidget(*child.Widget, parentName, parentClass)
			if err != nil {
				return "", fmt.Errorf(l.Name+"/Layout/Item[%d]: %w", i, err)
			}

			ret.WriteString(nest)

			// Assign to layout
			assignWidgetToLayout(&ret, l, &child, "Widget", "ui."+child.Widget.Name)
		}

		if child.Layout != nil {

			nest, err := generateLayout(child.Layout, parentName, parentClass, true) // nested
			if err != nil {
				return "", fmt.Errorf(l.Name+"/Layout/Item[%d]: %w", i, err)
			}

			ret.WriteString(nest)

			// Assign to layout
			assignWidgetToLayout(&ret, l, &child, "Layout", "ui."+child.Layout.Name)
		}
	}

	// Layout attributes

	writeLayoutAttributes(&ret, l.Stretch, "ui."+l.Name+".setStretch(")
	writeLayoutAttributes(&ret, l.RowStretch, "ui."+l.Name+".setRowStretch(")
	writeLayoutAttributes(&ret, l.ColStretch, "ui."+l.Name+".setColumnStretch(")
	writeLayoutAttributes(&ret, l.RowMinimumHeight, "ui."+l.Name+".setRowMinimumHeight(")
	writeLayoutAttributes(&ret, l.ColMinimumWidth, "ui."+l.Name+".setColumnMinimumWidth(")

	return ret.String(), nil
}

func generateWidget(w UiWidget, parentName, parentClass string) (string, error) {
	ret := strings.Builder{}

	wClass := w.Class
	if cw, ok := CustomWidgets[w.Class]; ok && !(ExtendedFlag && isExtendedClass(w.Class)) {
		wClass = cw
	}

	if w.Class == "QDockWidget" && parentName == "" {
		ret.WriteString("\nui." + w.Name + " = .new3();\n")
	} else if parentName == "" || parentClass == "QDockWidget" || parentClass == "QScrollArea" ||
		parentClass == "QStackedWidget" || parentClass == "QTabWidget" ||
		parentClass == "QToolBox" || parentClass == "QWizard" {
		ret.WriteString("\nui." + w.Name + " = .new2();\n")
	} else {
		if ExtendedFlag && w.Class == "KMimeTypeChooser" {
			parentName = ""
		}
		ret.WriteString("\nui." + w.Name + " = .new(" + parentName + ");\n")
	}

	ret.WriteString("ui." + w.Name + ".setObjectName(" + strconv.Quote(w.Name) + ");\n")
	if w.Name == GlobalContext {
		ret.WriteString("ui." + w.Name + ".setParent(parent);\n")
	}

	if wClass == "QMenu" {
		QMenus = append(QMenus, w.Name)
	}

	// Properties
	warningContext := WarningContext{
		NeedsWarning: !ExtendedFlag && w.Class[0] == 'K',
		Class:        w.Class,
	}

	err := renderProperties(w.Properties, &ret, w.Name, wClass, parentClass, warningContext)
	if err != nil {
		return "", err
	}

	// Attributes

	boolVariantName := w.Name + "_variant_bool"

	for _, attr := range w.Attributes {
		if parentClass == "QTabWidget" && attr.Name == "title" {
			if attr.StringVal.Notr {
				ret.WriteString("\n_ = " + parentName + ".addTab(ui." + w.Name + ", " + generateString(attr.StringVal) + ");\n")
			} else {
				ret.WriteString(writtenString(parentName+".setTabText("+parentName+".indexOf(ui."+w.Name+"), ", generateString(attr.StringVal), ");\n", attr.StringVal.Notr, true))
			}

		} else if wClass == "QDockWidget" && parentClass == "QMainWindow" && attr.Name == "dockWidgetArea" {
			ret.WriteString(parentName + ".addDockWidget(" + *attr.NumberVal + ", ui." + w.Name + ");  // qt6.qnamespace_enums.DockWidgetArea (" + *attr.NumberVal + ")\n")

		} else if wClass == "QToolBar" && parentClass == "QMainWindow" && attr.Name == "toolBarArea" {
			ret.WriteString(parentName + ".addToolBar(" + normalizeEnumName(attr.Name, *attr.EnumVal) + ", ui." + w.Name + ");\n")

		} else if wClass == "QToolBar" && parentClass == "QMainWindow" && attr.Name == "toolBarBreak" {
			if attr.BoolVal != nil && *attr.BoolVal {
				ret.WriteString(parentName + ".addToolBarBreak();\n")
			}

		} else if parentClass == "QTabWidget" && attr.Name == "icon" {
			// This will be handled when we call .addTab() on the parent QTabWidget

		} else if parentClass == "QToolBox" && attr.Name == "label" {
			ret.WriteString("_ = " + parentName + ".addItem(ui." + w.Name + ", " + strconv.Quote(attr.StringVal.Value) + ");\n")
			ret.WriteString(writtenString(parentName+".setItemText("+parentName+".indexOf(ui."+w.Name+"), ", generateString(attr.StringVal), ");\n", attr.StringVal.Notr, true))

		} else if attr.Name == "buttonGroup" {
			groupName := attr.StringVal.Value
			if group, exists := ButtonGroups[groupName]; exists {
				group.Buttons = append(group.Buttons, w.Name)
			} else {
				ButtonGroups[groupName] = &UiButtonGroup{
					Name:    groupName,
					Buttons: []string{w.Name},
				}
				ret.WriteString("\nconst " + groupName + " = qt6.QButtonGroup.new2(ui." + GlobalContext + ");\n")
				ret.WriteString((groupName + ".setObjectName(" + strconv.Quote(groupName) + ");\n"))
			}
			ret.WriteString(groupName + ".addButton(ui." + w.Name + ");\n")

		} else if (wClass == "QTableView" || wClass == "QTableWidget") && strings.Contains(attr.Name, "Header") {
			headerType := "horizontal"
			if strings.HasPrefix(attr.Name, "vertical") {
				headerType = "vertical"
			}

			var viewParam, variantOverrideNum string
			var isTrString bool
			if attr.NumberVal != nil {
				viewParam = *attr.NumberVal
				variantOverrideNum = "6"
			} else if attr.BoolVal != nil {
				viewParam = strconv.FormatBool(*attr.BoolVal)
				variantOverrideNum = "8"
			} else if attr.StringVal != nil {
				viewParam = generateString(attr.StringVal)
				isTrString = strings.Contains(viewParam, "qt6.QCoreApplication.translate")
				variantOverrideNum = "24"
			} else if attr.EnumVal != nil {
				viewParam = normalizeEnumName(attr.Name, *attr.EnumVal)
			}

			headerName := w.Name + "_" + headerType + "_header"
			if _, ok := TableWidgetMap[headerName]; !ok {
				TableWidgetMap[headerName] = struct{}{}
				ret.WriteString("const " + headerName + " = ui." + w.Name + "." + headerType + "Header();\n")
			}

			methodName := ".set" + strings.TrimPrefix(attr.Name, headerType+"Header")
			preStr := headerName + methodName + "("
			postStr := ");\n"
			if isTrString {
				ret.WriteString(writtenString(preStr, viewParam, postStr, true, true))
			} else if attr.StdSetVal != nil && *attr.StdSetVal != "" {
				attrName := strings.TrimPrefix(attr.Name, headerType+"Header")
				attrName = strings.ToLower(attrName[0:1]) + attrName[1:]
				ret.WriteString("const " + boolVariantName + strconv.Itoa(VariantCounter) + " = qt6.QVariant.new" + variantOverrideNum + "(" + strconv.FormatBool(*attr.BoolVal) + ");\n")
				ret.WriteString("defer " + boolVariantName + strconv.Itoa(VariantCounter) + ".delete();\n")
				ret.WriteString("_ = " + headerName + ".setProperty(" + strconv.Quote(attrName) + ", " + boolVariantName + strconv.Itoa(VariantCounter) + ");\n")
				VariantCounter++
			} else {
				ret.WriteString(preStr + viewParam + postStr)
			}

		} else if (wClass == "QTreeWidget" || wClass == "QTreeView") && attr.BoolVal != nil {
			attrName := strings.TrimPrefix(attr.Name, "header")
			if attr.StdSetVal != nil && *attr.StdSetVal != "" {
				attrName = strings.ToLower(attrName[0:1]) + attrName[1:]
				ret.WriteString("const " + boolVariantName + strconv.Itoa(VariantCounter) + " = qt6.QVariant.new8(" + strconv.FormatBool(*attr.BoolVal) + ");\n")
				ret.WriteString("defer " + boolVariantName + strconv.Itoa(VariantCounter) + ".delete();\n")
				ret.WriteString("_ = ui." + w.Name + ".header().setProperty(" + strconv.Quote(attrName) + ", " + boolVariantName + strconv.Itoa(VariantCounter) + ");\n")
				VariantCounter++
			} else {
				ret.WriteString("ui." + w.Name + ".header().set" + attrName + "(" + strconv.FormatBool(*attr.BoolVal) + ");\n")
			}

		} else if (wClass == "QTreeWidget" || wClass == "QTreeView") && attr.NumberVal != nil {
			attrName := strings.TrimPrefix(attr.Name, "header")
			ret.WriteString("ui." + w.Name + ".header().set" + attrName + "(" + *attr.NumberVal + ");\n")

		} else if attr.Name == "toolTip" {
			ret.WriteString(writtenString("ui."+w.Name+".setToolTip(", generateString(attr.StringVal), ");\n", attr.StringVal.Notr, true))

		} else {
			ret.WriteString("// UIC: no handler for attribute '" + attr.Name + "' in class " + wClass + "\n")
		}
	}

	// Layout

	if w.Layout != nil {
		nest, err := generateLayout(w.Layout, "ui."+w.Name, wClass, false)
		if err != nil {
			return "", err
		}

		ret.WriteString(nest)
	}

	// Actions

	for _, a := range w.Actions {
		parent := w.Name
		if parentName != "" {
			parent = strings.TrimPrefix(parentName, "ui.")
		}
		ret.WriteString("\nui." + a.Name + " = .new4(ui." + parent + ");")

		ret.WriteString("ui." + a.Name + ".setObjectName(" + strconv.Quote(a.Name) + ");\n")

		// QActions are translated in the parent window's context
		if prop, ok := propertyByName(a.Properties, "text"); ok {
			ret.WriteString(writtenString("ui."+a.Name+".setText(", generateString(prop.StringVal), ");\n", prop.StringVal.Notr, true))
		}

		if prop, ok := propertyByName(a.Properties, "shortcut"); ok {
			maybeComment := " // auxiliary to qt6.QCoreApplication.translate"
			if prop.StringVal.Notr {
				maybeComment = ""
			}
			ret.WriteString(writtenString("\nconst "+a.Name+"_shortcut = qt6.QKeySequence.new2(", generateString(prop.StringVal), ");\n", prop.StringVal.Notr, true))
			ret.WriteString("defer " + a.Name + "_shortcut.delete();" + maybeComment + "\n")
			ret.WriteString("ui." + a.Name + ".setShortcut(" + a.Name + "_shortcut);" + maybeComment + "\n")
		}

		if prop, ok := propertyByName(a.Properties, "icon"); ok {
			iconName := renderIcon(prop.IconVal, &ret)
			ret.WriteString("ui." + a.Name + ".setIcon(" + iconName + ");\n")
		}

		if prop, ok := propertyByName(a.Properties, "toolTip"); ok {
			ret.WriteString(writtenString("ui."+a.Name+".setToolTip(", generateString(prop.StringVal), ");\n", prop.StringVal.Notr, true))
		}

		if prop, ok := propertyByName(a.Properties, "visible"); ok {
			ret.WriteString("ui." + a.Name + ".setVisible(" + strconv.FormatBool(*prop.BoolVal) + ");\n")
		}

		if prop, ok := propertyByName(a.Properties, "menuRole"); ok {
			ret.WriteString("ui." + a.Name + ".setMenuRole(" + normalizeEnumName(prop.Name, *prop.EnumVal) + ");\n")
		}
	}

	// Columns

	isColumnSet, isRowSet := false, false
	for colNo, col := range w.Columns {
		isHeaderSet := false
		for _, prop := range col.Properties {
			methodName := strings.ToUpper(prop.Name[0:1]) + prop.Name[1:]

			switch prop.Name {
			case "text", "toolTip":
				maybeComment := " // auxiliary to qt6.QCoreApplication.translate"
				textVal := generateString(prop.StringVal)
				if !strings.Contains(textVal, "qt6.QCoreApplication.translate") || prop.StringVal.Notr {
					maybeComment = ""
				}

				colToStr := strconv.Itoa(colNo)

				var lookupKey, itemName, setColumnMethod, setHeaderMethod, setItemMethod, translateItemMethod string

				switch wClass {
				case "QTreeWidget":
					lookupKey = w.Name
					itemName = "ui_" + w.Name + "_colitem"
					setHeaderMethod = "ui." + w.Name + ".setHeaderItem(" + itemName + ");\n"
					setItemMethod = writtenString(itemName+".set"+methodName+"("+colToStr+", ", textVal, ");", prop.StringVal.Notr, maybeComment == "")
					translateItemMethod = "const " + itemName + " = ui." + w.Name + ".headerItem();"
				default:
					lookupKey = w.Name + "_col" + colToStr
					itemName = "ui_" + w.Name + "_colitem" + colToStr
					setColumnMethod = "if (ui." + w.Name + ".columnCount() < " + strconv.Itoa(len(w.Columns)) + ")\n"
					setColumnMethod += "ui." + w.Name + ".setColumnCount(" + strconv.Itoa(len(w.Columns)) + ");\n"
					setHeaderMethod = "ui." + w.Name + ".setHorizontalHeaderItem(" + colToStr + ", " + itemName + ");\n"
					setItemMethod = writtenString(itemName+".set"+methodName+"(", textVal, ");", prop.StringVal.Notr, maybeComment == "")
					translateItemMethod = "const " + itemName + " = ui." + w.Name + ".horizontalHeaderItem(" + colToStr + ");"
				}

				if !isColumnSet && len(w.Columns) > 0 && setColumnMethod != "" {
					ret.WriteString(setColumnMethod)
					isColumnSet = true
				}

				wClassZig := "qt6." + strings.ReplaceAll(wClass, "::", "__")
				newItem := "const " + itemName + " = " + wClassZig + "Item.new();\n"

				if _, ok := WidgetItemsMap[lookupKey]; !ok {
					if maybeComment == "" {
						ret.WriteString(newItem)
						ret.WriteString(setHeaderMethod)
						isHeaderSet = true
					} else {
						if wClass != "QTreeWidget" {
							ret.WriteString(newItem)
							ret.WriteString(setHeaderMethod)
							isHeaderSet = true
						}
						if prop.StringVal.Value != "" {
							WidgetItems = append(WidgetItems, lookupKey)
							WidgetItemsMap[lookupKey] = append(WidgetItemsMap[lookupKey], strings.TrimSpace(translateItemMethod))
						}
					}
				}

				switch maybeComment {
				case "":
					if !isHeaderSet {
						ret.WriteString(newItem)
						ret.WriteString(setHeaderMethod)
						isHeaderSet = true
					}
					ret.WriteString(setItemMethod)
				default:
					if prop.StringVal.Value != "" {
						WidgetItemsMap[lookupKey] = append(WidgetItemsMap[lookupKey], strings.TrimSpace(setItemMethod))
					}
				}

			default:
				ret.WriteString("// UIC: no handler for column property '" + prop.Name + "'\n")
			}
		}
	}

	// Rows

	for rowNo, row := range w.Rows {
		isHeaderSet := false
		for _, prop := range row.Properties {
			methodName := strings.ToUpper(prop.Name[0:1]) + prop.Name[1:]

			switch prop.Name {
			case "text", "toolTip":
				maybeComment := " // auxiliary to qt6.QCoreApplication.translate"
				textVal := generateString(prop.StringVal)
				if !strings.Contains(textVal, "qt6.QCoreApplication.translate") || prop.StringVal.Notr {
					maybeComment = ""
				}

				rowToStr := strconv.Itoa(rowNo)

				var lookupKey, itemName, setRowMethod, setHeaderMethod, setItemMethod, translateItemMethod string

				switch wClass {
				case "QTreeWidget":
					lookupKey = w.Name
					itemName = "ui_" + w.Name + "_rowitem"
					setItemMethod = writtenString(itemName+".set"+methodName+"("+rowToStr+", ", textVal, ");", prop.StringVal.Notr, maybeComment == "")
					translateItemMethod = "const " + itemName + " = ui." + w.Name + ".headerItem();"
				default:
					lookupKey = w.Name + "_row" + rowToStr
					itemName = "ui_" + w.Name + "_rowitem" + rowToStr
					setHeaderMethod = "ui." + w.Name + ".setVerticalHeaderItem(" + rowToStr + ", " + itemName + ");\n"
					setItemMethod = writtenString(itemName+".set"+methodName+"(", textVal, ");", prop.StringVal.Notr, maybeComment == "")
					translateItemMethod = "const " + itemName + " = ui." + w.Name + ".verticalHeaderItem(" + rowToStr + ");"
				}

				if wClass == "QTableWidget" {
					setRowMethod = "if (ui." + w.Name + ".rowCount() < " + strconv.Itoa(len(w.Rows)) + ")\n"
					setRowMethod += "ui." + w.Name + ".setRowCount(" + strconv.Itoa(len(w.Rows)) + ");\n"
				}

				if !isRowSet && len(w.Rows) > 0 && setRowMethod != "" {
					ret.WriteString(setRowMethod)
					isRowSet = true
				}

				wClassZig := "qt6." + strings.ReplaceAll(wClass, "::", "__")
				newItem := "const " + itemName + " = " + wClassZig + "Item.new();\n"

				if _, ok := WidgetItemsMap[lookupKey]; !ok {
					if maybeComment == "" {
						ret.WriteString(newItem)
						ret.WriteString(setHeaderMethod)
						isHeaderSet = true
					} else {
						if wClass != "QTreeWidget" {
							ret.WriteString(newItem)
							ret.WriteString(setHeaderMethod)
							isHeaderSet = true
						}
						WidgetItems = append(WidgetItems, lookupKey)
						WidgetItemsMap[lookupKey] = append(WidgetItemsMap[lookupKey], strings.TrimSpace(translateItemMethod))
					}
				}

				switch maybeComment {
				case "":
					if !isHeaderSet {
						ret.WriteString(newItem)
						ret.WriteString(setHeaderMethod)
						isHeaderSet = true
					}
					ret.WriteString(setItemMethod)
				default:
					WidgetItemsMap[lookupKey] = append(WidgetItemsMap[lookupKey], strings.TrimSpace(setItemMethod))
				}

			default:
				ret.WriteString("// UIC: no handler for row property '" + prop.Name + "'\n")
			}
		}
	}

	// Items

	for itemNo, itm := range w.Items {
		targetSelf := "ui." + w.Name
		var isItemClass bool

		switch wClass {
		case "QListWidget":
			targetSelf = "item" + strconv.Itoa(ItemWidgetCounter)
			isItemClass = true
			ret.WriteString("const " + targetSelf + " = qt6.QListWidgetItem.new();\n")
			ret.WriteString("ui." + w.Name + ".insertItem(" + strconv.Itoa(itemNo) + ", " + targetSelf + ");\n")
		case "QTreeWidget":
			targetSelf = "item" + strconv.Itoa(ItemWidgetCounter)
			isItemClass = true
			assignStr := "_"
			for i := range itm.Properties {
				if itm.Properties[i].Name == "text" && itm.Properties[i].StringVal.Notr || len(itm.Items) > 0 {
					assignStr = "const " + targetSelf
					break
				}
			}
			ret.WriteString(assignStr + " = qt6.QTreeWidgetItem.new3(ui." + w.Name + ");\n")
		case "QTableWidget":
			targetSelf = "item" + strconv.Itoa(ItemWidgetCounter)
			isItemClass = true
			ret.WriteString("const " + targetSelf + " = qt6.QTableWidgetItem.new();\n")
			ret.WriteString("ui." + w.Name + ".setItem(" + strconv.Itoa(*itm.Row) + ", " + strconv.Itoa(*itm.Column) + ", " + targetSelf + ");\n")
		default:
			ret.WriteString("ui." + w.Name + ".addItem(" + `"");` + "\n")
		}

		// Check for a "text" property and update the item's text
		// Do this as a 2nd step so that the setItemText can be trapped for retranslate()
		seenItems := map[string]struct{}{}
		itemTextNum := 0
		for _, prop := range itm.Properties {
			switch prop.Name {
			case "text":
				if isItemClass {
					var maybeItemNo, maybeTableItemNo string
					methodName := "item"
					selfStr := "const " + targetSelf
					itemStr := targetSelf
					switch wClass {
					case "QTreeWidget":
						// QTreeWidgetItem
						methodName = "topLevelItem"
						maybeItemNo = strconv.Itoa(itemTextNum) + ", "
						itemTextNum++
						if itemTextNum > len(w.Columns) {
							itemTextNum = 0
						}
					case "QTableWidget":
						// QTableWidgetItem
						selfStr = "const item" + strconv.Itoa(ItemWidgetCounter)
						maybeTableItemNo = strconv.Itoa(itemTextNum) + ", "
						itemStr = "item" + strconv.Itoa(ItemWidgetCounter)
					}
					if !prop.StringVal.Notr {
						if _, ok := seenItems[targetSelf]; !ok {
							seenItems[targetSelf] = struct{}{}
							ret.WriteString(selfStr + " = ui." + w.Name + "." + methodName + "(" + maybeTableItemNo + strconv.Itoa(ItemWidgetCounter) + "); // auxiliary to qt6.QCoreApplication.translate " + w.Name + " " + sanitizeLowerName(wClass) + "\n")
						}
					}
					ret.WriteString(writtenString(itemStr+".setText("+maybeItemNo, generateString(prop.StringVal), ");\n", prop.StringVal.Notr, true))
				} else {
					ret.WriteString(writtenString(targetSelf+".setItemText("+strconv.Itoa(itemNo)+", ", generateString(prop.StringVal), ");\n", prop.StringVal.Notr, true))
				}
			case "icon":
				iconName := renderIcon(prop.IconVal, &ret)
				if slices.Contains(comboWidgets, wClass) {
					ret.WriteString(targetSelf + ".addItem2(" + iconName + `, "");` + "\n")
				} else {
					ret.WriteString(targetSelf + ".setIcon(" + iconName + ");\n")
				}
			case "checkState":
				ret.WriteString(targetSelf + ".setCheckState(qt6.qnamespace_enums.CheckState." + *prop.EnumVal + ");\n")
			case "flags":
				parts := strings.Split(*prop.SetVal, "|")
				for i, p := range parts {
					parts[i] = "qt6.qnamespace_enums.ItemFlag." + p
				}

				var emit string
				if len(parts) > 0 {
					emit = strings.Join(parts, "|")
				}
				ret.WriteString(targetSelf + ".setFlags(" + emit + ");\n")
			default:
				ret.WriteString("// UIC: no handler for item property '" + prop.Name + "'\n")
			}
		}

		for i, item := range itm.Items {
			assignStr := "_"
			itemName := targetSelf + "_item" + strconv.Itoa(i)
			for j, prop := range item.Properties {
				if prop.Name == "text" && prop.StringVal.Notr {
					assignStr = "const " + itemName
				}
				ret.WriteString(assignStr + " = qt6.QTreeWidgetItem.new6(" + targetSelf + ");\n")
				if !prop.StringVal.Notr {
					ret.WriteString("const " + itemName + " = " + targetSelf + ".child(" + strconv.Itoa(i) + "); // auxiliary to qt6.QCoreApplication.translate " + w.Name + " " + sanitizeLowerName(wClass) + "\n")
				}
				ret.WriteString(writtenString(itemName+".setText("+strconv.Itoa(j)+", ", generateString(prop.StringVal), ");\n", prop.StringVal.Notr, true))
			}
		}

		if isItemClass {
			ItemWidgetCounter++
		}
	}

	// Recurse children

	var (
		setCentralWidget = false
		setMenuBar       = false
		setStatusBar     = false
	)

	for i, child := range w.Widgets {
		nest, err := generateWidget(child, "ui."+w.Name, wClass)
		if err != nil {
			return "", fmt.Errorf(w.Name+"/Widgets[%d]: %w", i, err)
		}

		ret.WriteString(nest)

		// QMainWindow CentralWidget handling
		// The first listed class can be the central widget.
		// TODO should it be the first child with a layout? But need to handle windows with no layout
		if wClass == "QMainWindow" && !setCentralWidget {
			ret.WriteString("\nui." + w.Name + ".setCentralWidget(ui." + child.Name + ");\n") // Set central widget
			setCentralWidget = true
		}

		// QDockWidget and QScrollArea also have something like a central widget
		if (wClass == "QDockWidget" || wClass == "QScrollArea") && !setCentralWidget {
			ret.WriteString("ui." + w.Name + ".setWidget(ui." + child.Name + ");\n") // Set central widget
			setCentralWidget = true
		}

		if wClass == "QSplitter" || wClass == "QStackedWidget" {
			// We need to manually addWidget on every child of QSplitter or QStackedWidget
			var maybeDiscard string
			if wClass == "QStackedWidget" {
				maybeDiscard = "_ = "
			}
			ret.WriteString(maybeDiscard + "ui." + w.Name + ".addWidget(ui." + child.Name + ");\n")
		}

		if wClass == "QMainWindow" && child.Class == "QMenuBar" && !setMenuBar {
			ret.WriteString("ui." + w.Name + ".setMenuBar(ui." + child.Name + ");\n")
			setMenuBar = true
		}

		if wClass == "QMainWindow" && child.Class == "QStatusBar" && !setStatusBar {
			ret.WriteString("ui." + w.Name + ".setStatusBar(ui." + child.Name + ");\n")
			setStatusBar = true
		}

		// QTabWidget->addTab handling
		if wClass == "QTabWidget" {
			if icon, ok := propertyByName(child.Attributes, "icon"); ok {
				// addTab() overload with icon
				iconName := renderIcon(icon.IconVal, &ret)
				ret.WriteString("\n_ = ui." + w.Name + ".addTab2(ui." + child.Name + ", " + iconName + `, "");` + "\n")

			} else {
				// addTab() overload without icon
				if title, ok := propertyByName(child.Attributes, "title"); ok && !title.StringVal.Notr {
					ret.WriteString("\n_ = ui." + w.Name + ".addTab(ui." + child.Name + `, "");` + "\n")
				}
			}
		}

		// QWizard->QWizardPage handling
		if w.Class == "QWizard" && child.Class == "QWizardPage" {
			ret.WriteString("_ = ui." + w.Name + ".addPage(ui." + child.Name + ");\n")
		}

		// child attributes
		if prop, ok := propertyByName(child.Attributes, "tabsClosable"); ok {
			ret.WriteString("ui." + child.Name + ".setTabsClosable(" + strconv.FormatBool(*prop.BoolVal) + ");\n")
		}

		if prop, ok := propertyByName(child.Attributes, "tabBarAutoHide"); ok {
			ret.WriteString("ui." + child.Name + ".setTabBarAutoHide(" + strconv.FormatBool(*prop.BoolVal) + ");\n")
		}

		if prop, ok := propertyByName(child.Attributes, "orientation"); ok {
			ret.WriteString("ui." + child.Name + ".setOrientation(" + normalizeEnumName(prop.Name, *prop.EnumVal) + ");\n")
		}
	}

	// addActions
	// n.b. This must be *after* all children have been constructed, in case we
	// are adding a direct child

	for _, a := range w.AddActions {
		action := "ui." + w.Name + ".addAction(ui." + a.Name + ".menuAction());\n"

		isQMenu := false
		if slices.Contains(QMenus, a.Name) {
			isQMenu = true
		}

		switch {
		case wClass == "QMenuBar" && a.Name != "separator":
			// If we are a menubar, then <addaction> refers to top-level QMenu instead of QAction
			ret.WriteString(action)
		case isQMenu:
			storeAction(action, wClass, w.Name)
		case a.Name == "separator":
			// TODO how does Qt Designer disambiguate a real QAction with name="separator" ?
			action = "_ = ui." + w.Name + ".addSeparator();\n"
			storeAction(action, wClass, w.Name)
		default:
			action = "ui." + w.Name + ".addAction(ui." + a.Name + ");\n"
			storeAction(action, wClass, w.Name)
		}
	}

	// ZOrder
	if len(w.ZOrder) > 0 {
		ret.WriteString("\n")
		collectClassNames_Widget(&w)
		for _, zorder := range w.ZOrder {
			_, ok := WidgetMap[zorder]
			if !ok {
				fmt.Println("Warning: Z-order assignment '" + zorder + "' is not a valid widget")
				continue
			}
			ret.WriteString("ui." + zorder + ".raise();\n")
		}
	}

	return ret.String(), nil
}

func generate(goGenerateArgs string, flagExtraOps UiFlagOptions, u UiFile) ([]byte, error) {
	ret := strings.Builder{}

	// Update globals for layoutdefault, if present

	if u.LayoutDefault != nil && u.LayoutDefault.Margin != nil {
		DefaultGridMargin = *u.LayoutDefault.Margin
		DefaultChildrenMargin = *u.LayoutDefault.Margin
	}

	uClass := strings.ReplaceAll(u.Class, "::", "__")

	// Imports

	var maybeImport string
	if flagExtraOps.ImportName != "" && len(u.Connections.Connections) != 0 {
		maybeImport = "\nconst " + uClass + `UiConnections = @import("` + flagExtraOps.ImportName + `");`
	}

	if flagExtraOps.WidgetsHeader && len(u.CustomWidgets.CustomWidgets) != 0 {
		for _, cw := range u.CustomWidgets.CustomWidgets {
			if !(flagExtraOps.Extended && isExtendedClass(cw.Name)) {
				fileExt := filepath.Ext(cw.Header)
				structName := strings.ReplaceAll(cw.Name, "::", "__")
				headerName := strings.TrimSuffix(cw.Header, fileExt) + ".zig"
				maybeImport += "\nconst " + structName + ` = @import("` + headerName + `").` + structName + ";"
			}
		}
	}

	ExtendedFlag = flagExtraOps.Extended
	GlobalContext = uClass

	// Custom widgets

	CustomWidgets["Line"] = "QFrame"
	for _, cw := range u.CustomWidgets.CustomWidgets {
		if className, ok := CustomWidgets[cw.Extends]; ok && !(flagExtraOps.Extended && isExtendedClass(cw.Name)) {
			CustomWidgets[cw.Name] = className
		} else {
			if cw.Extends != "" {
				CustomWidgets[cw.Name] = cw.Extends
			} else {
				fmt.Println("\nWARNING: Custom widget '" + cw.Name + "' has no base class. Defaulting to 'QWidget'")
				CustomWidgets[cw.Name] = "QWidget"
			}
		}
	}

	nest, err := generateWidget(u.Widget, "", "")
	if err != nil {
		return nil, err
	}

	// Core

	var translateFunc, setBuddy, setCurrentRow, setCurrentIndex, setDefault, menuActions, newFuncBody, sortingBlockEnds []string
	var foundWidgetItem bool
	var lastParentItem string
	for line := range strings.SplitSeq(nest, "\n") {
		if strings.Contains(line, "qt6.QCoreApplication.translate") {
			if strings.Contains(line, "const item") {
				retLine, parentItem := splitLastWords(line)
				line = retLine
				if lastParentItem != parentItem && !foundWidgetItem {
					sortingBlockBegin := "\nconst " + parentItem + "_sorting_enabled = ui." + parentItem + ".isSortingEnabled();\n"
					sortingBlockBegin += "ui." + parentItem + ".setSortingEnabled(false);"
					translateFunc = append(translateFunc, sortingBlockBegin)
					sortingBlockEnds = append(sortingBlockEnds, "ui."+parentItem+".setSortingEnabled("+parentItem+"_sorting_enabled);\n")
				}
				foundWidgetItem = true
				lastParentItem = parentItem
			}
			translateFunc = append(translateFunc, splitTranslationComment(line))
		} else if strings.Contains(line, ".setBuddy(") {
			setBuddy = append(setBuddy, line)
		} else if strings.Contains(line, ".setCurrentRow(") {
			setCurrentRow = append(setCurrentRow, line)
		} else if strings.Contains(line, ".setCurrentIndex(") {
			setCurrentIndex = append(setCurrentIndex, line)
		} else if strings.Contains(line, ".setDefault(") {
			setDefault = append(setDefault, line)
		} else if strings.Contains(line, ".menuAction(") {
			menuActions = append(menuActions, line)
		} else {
			newFuncBody = append(newFuncBody, line+"\n")
		}
	}

	if foundWidgetItem {
		translateFunc = append(translateFunc, sortingBlockEnds...)
	}

	for _, tw := range WidgetItems {
		translateFunc = append(translateFunc, WidgetItemsMap[tw]...)
	}

	if len(u.Comment) > 0 {
		ret.WriteString("//! " + strings.Join(strings.Split(u.Comment, "\n"), "\n//! ") + "\n\n")
	}

	ret.WriteString(`// Generated by libqt6zig uic. To update this file, edit the .ui file in
// Qt Creator/Designer, and then run the 'uic-zig' command below.
//
// uic-zig ` + goGenerateArgs + `

const std = @import("std");
const qt6 = @import("libqt6zig");` + maybeImport + `

/// The type definition for ` + uClass + `Ui containing all of the Qt objects
pub const ` + uClass + `Ui = struct {
` + strings.Join(collectClassNames_Widget(&u.Widget), ",\n") + `,

`)

	var maybeAllocatorParamComment, maybeAllocatorParam string
	if len(translateFunc) > 0 {
		maybeAllocatorParamComment = "\n///\n/// ` allocator: std.mem.Allocator `"
		maybeAllocatorParam = ", allocator: std.mem.Allocator"
	}

	ret.WriteString(`
/// Initialize all of the Qt objects for ` + uClass + `Ui
///
/// ## Parameters:
///
/// ` + "` ui: *" + uClass + "Ui `" + maybeAllocatorParamComment + `
///
/// ` + "` parent: QWidget ` (can be null)" + `
///
pub fn init(ui: *` + uClass + `Ui` + maybeAllocatorParam + `, parent: anytype) void {
`)

	ret.WriteString(strings.Join(newFuncBody, ""))

	for _, sb := range setBuddy {
		ret.WriteString(sb + "\n")
	}

	for i := 1; i < len(u.TabStops.TabStops); i++ {
		previous := u.TabStops.TabStops[i-1].Name
		current := u.TabStops.TabStops[i].Name
		ret.WriteString("qt6.QWidget.setTabOrder(ui." + previous + ", ui." + current + ");\n")
	}

	for _, ma := range menuActions {
		ret.WriteString(ma)
	}

	for _, qm := range QMenus {
		for _, ma := range QMenuActionsMap[qm] {
			ret.WriteString(ma)
		}
	}

	for _, oa := range OtherActions {
		ret.WriteString(oa)
	}

	if len(translateFunc) > 0 {
		ret.WriteString("\nui.retranslate(allocator);\n\n")
	}

	for _, scr := range setCurrentRow {
		ret.WriteString(scr + "\n")
	}

	for _, sci := range setCurrentIndex {
		ret.WriteString(sci + "\n")
	}

	for _, sd := range setDefault {
		ret.WriteString(sd + "\n")
	}

	maybeComment := "// "
	if flagExtraOps.ImportName != "" {
		maybeComment = ""
	}

	if len(u.Connections.Connections) != 0 {
		if flagExtraOps.ImportName == "" {
			ret.WriteString("\n// Uncomment the connections below when ready or regenerate with -c\n")
		}
		ret.WriteString("// Double-check that the connection overload variants are correct!\n")
	}

	for _, c := range u.Connections.Connections {
		signal := splitToParens(c.Signal)
		slot := splitToParens(c.Slot)

		qtZigMethod := "on" + strings.ToUpper(signal[0:1]) + signal[1:]

		ret.WriteString(maybeComment + "ui." + c.Sender + "." + qtZigMethod + "(" + uClass + "UiConnections." + c.Sender + slot + ");\n")
	}

	ret.WriteString(`
}

/// If there is no parent widget, delete the main widget for
/// ` + uClass + `Ui and the child Qt objects
pub fn deinit(ui: *const ` + uClass + `Ui) void {
    if (ui.` + u.Widget.Name + `.parentWidget().ptr == null)
        ui.` + u.Widget.Name + `.delete();
}`)

	if len(translateFunc) > 0 {
		ret.WriteString(`

    /// Reapply all text translations
    pub fn retranslate(ui: *const ` + uClass + `Ui, allocator: std.mem.Allocator) void {
    ` + strings.Join(translateFunc, "\n") + `
    }`)
	}

	ret.WriteString("\n};")

	output := ret.String()

	if len(u.CustomWidgets.CustomWidgets) > 0 {
		fmt.Println("\nThis form contains some custom widget(s). It may require manual patching for proper implementation.")
		fmt.Println("\nCustom widget(s):")
		for _, cw := range u.CustomWidgets.CustomWidgets {
			fmt.Println("  * " + cw.Name + " (" + cw.Extends + ")")
		}
		if !ExtendedFlag {
			fmt.Println("\nYou may want to use '-e' to enable extended class support.")
		}
	}

	if len(u.Resources.Includes) > 0 {
		fmt.Println("\nTo include the resource(s), run the `qrc-zig` program with the file(s) below:")
		for _, include := range u.Resources.Includes {
			fmt.Println("  * " + include.Location)
		}
	}

	if len(FlagWarnings) > 0 {
		fmt.Println()
		for _, warning := range FlagWarnings {
			fmt.Println(warning)
		}
	}

	if SanitizeObjectCounter > 0 || SanitizationFlag || len(u.CustomWidgets.CustomWidgets) > 0 || len(u.Resources.Includes) > 0 || len(FlagWarnings) > 0 {
		fmt.Println()
	}

	return []byte(output), nil
}
