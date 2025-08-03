package main

import (
	"fmt"
	"path/filepath"
	"slices"
	"strconv"
	"strings"
)

var (
	SanitizeObjectCounter = 0
	SanitizationFlag      = false
	ExtendedFlag          = false
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
	zigReservedWord       = map[string]struct{}{ // not an exhaustive list
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

func collectClassNames_Widget(u *UiWidget) []string {
	var ret []string
	className := strings.ReplaceAll(u.Class, "::", "__")

	if u.Name != "" {
		if cw, ok := CustomWidgets[u.Class]; ok && !(ExtendedFlag && isExtendedClass(u.Class)) {
			className = cw
		}
		ret = append(ret, u.Name+": C."+className)
		WidgetMap[u.Name] = zigStructName(className)
	}

	for _, w := range u.Widgets {
		ret = append(ret, collectClassNames_Widget(&w)...)
	}
	if u.Layout != nil {
		ret = append(ret, collectClassNames_Layout(u.Layout)...)
	}
	for _, a := range u.Actions {
		ret = append(ret, a.Name+": C.QAction")
		WidgetMap[a.Name] = "qaction"
	}

	return ret
}

func collectClassNames_Layout(l *UiLayout) []string {
	var ret []string

	if l.Name != "" {
		ret = append(ret, l.Name+": C."+l.Class)
		WidgetMap[l.Name] = zigStructName(l.Class)
	}

	for _, li := range l.Items {
		if li.Widget != nil {
			ret = append(ret, collectClassNames_Widget(li.Widget)...)
		}
		if li.Spacer != nil {
			ret = append(ret, li.Spacer.Name+": C.QSpacerItem")
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
		auxiliaryComment = " // auxiliary to qt6.qcoreapplication.Translate"
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

	return "qt6.qcoreapplication.Translate" + suffix + "(" + context + strconv.Quote(s.Value) + disambiguation + ", allocator)"
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
		mapKey := role.Brush.Style + " (" + strconv.Itoa(role.Brush.Color.Red) + "," + strconv.Itoa(role.Brush.Color.Green) + "," + strconv.Itoa(role.Brush.Color.Blue) + "," + strconv.Itoa(role.Brush.Color.Alpha) + ")"

		brushNum, ok := BrushColorMap[mapKey]
		if !ok {
			brushNum = strconv.Itoa(BrushCounter)
			BrushColorMap[mapKey] = brushNum
			ret.WriteString(getNewBrush(brushNum, role.Brush.Style, strconv.Itoa(role.Brush.Color.Red), strconv.Itoa(role.Brush.Color.Green), strconv.Itoa(role.Brush.Color.Blue), strconv.Itoa(role.Brush.Color.Alpha)))
			BrushCounter++
		}
		ret.WriteString(getSetPaletteBrush(targetName, groupName, role.Role, brushNum))
	}
}

func getNewBrush(brushNum, style, red, green, blue, alpha string) string {
	var newBrush string

	newBrush += "const color" + brushNum + " = qt6.qcolor.New13(" + red + ", " + green + ", " + blue + ", " + alpha + ");\n"
	newBrush += "defer qt6.qcolor.QDelete(color" + brushNum + ");\n"
	newBrush += "const brush" + brushNum + " = qt6.qbrush.New3(color" + brushNum + ");\n"
	newBrush += "defer qt6.qbrush.QDelete(brush" + brushNum + ");\n"
	newBrush += "qt6.qbrush.SetStyle(brush" + brushNum + ", qt6.qnamespace_enums.BrushStyle." + style + ");\n"

	return newBrush
}

func getSetPaletteBrush(targetName, group, role, brushNum string) string {
	return "qt6.qpalette.SetBrush2(" + targetName + "_palette, qt6.qpalette_enums.ColorGroup." + group + ", qt6.qpalette_enums.ColorRole." + role + ", brush" + brushNum + ");\n"
}

func newQSize(sizeName *string, isSizeSet *bool) string {
	if *isSizeSet {
		*sizeName = fmt.Sprintf("size%d", SizeCounter)
	} else {
		*isSizeSet = true
	}

	newSize := "const " + *sizeName + " = qt6.qsize.New3();\n"
	newSize += "defer qt6.qsize.QDelete(" + *sizeName + ");\n"
	SizeCounter++

	return newSize
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
			ret.WriteString("const " + iconName + " = qt6.qicon.FromTheme3(" + theme + ");\n")
		} else if iconVal.ResourceFile != "" {
			theme = strconv.Quote(theme)
			ret.WriteString("var " + iconName + ": C.QIcon = undefined;\n")
			ret.WriteString("if (qt6.qicon.HasThemeIcon(" + theme + ")) {\n")
			ret.WriteString(iconName + " = qt6.qicon.FromTheme(" + theme + ");\n")
			ret.WriteString("} else {\n")
			ret.WriteString(iconName + " = qt6.qicon.New();\n")
			themeIconCond = true
		} else {
			ret.WriteString("const " + iconName + " = qt6.qicon.FromTheme(" + strconv.Quote(theme) + ");\n")
		}
	} else {
		ret.WriteString("const " + iconName + " = qt6.qicon.New();\n")
	}

	// A base entry is a synonym for NormalOff. Don't need them both
	if iconVal.NormalOff != nil && *iconVal.NormalOff != "." {
		ret.WriteString(newQSize(&sizeName, &isSizeSet))
		isSizeSet = true
		ret.WriteString("qt6.qicon.AddFile4(" + iconName + ", " + strconv.Quote(*iconVal.NormalOff) + ", " + sizeName + ", qt6.qicon_enums.Mode.Normal, qt6.qicon_enums.State.Off);\n")
	} else {
		base := strings.TrimSpace(iconVal.Base)
		if base != "" && base != "." {
			ret.WriteString("qt6.qicon.AddFile(" + iconName + ", " + strconv.Quote(strings.TrimSpace(iconVal.Base)) + ");\n")
		}
	}

	if iconVal.NormalOn != nil {
		ret.WriteString(newQSize(&sizeName, &isSizeSet))
		ret.WriteString("qt6.qicon.AddFile4(" + iconName + ", " + strconv.Quote(*iconVal.NormalOn) + ", " + sizeName + ", qt6.qicon_enums.Mode.Normal, qt6.qicon_enums.State.On);\n")
	}
	if iconVal.ActiveOff != nil {
		ret.WriteString(newQSize(&sizeName, &isSizeSet))
		ret.WriteString("qt6.qicon.AddFile4(" + iconName + ", " + strconv.Quote(*iconVal.ActiveOff) + ", " + sizeName + ", qt6.qicon_enums.Mode.Active, qt6.qicon_enums.State.Off);\n")
	}
	if iconVal.ActiveOn != nil {
		ret.WriteString(newQSize(&sizeName, &isSizeSet))
		ret.WriteString("qt6.qicon.AddFile4(" + iconName + ", " + strconv.Quote(*iconVal.ActiveOn) + ", " + sizeName + ", qt6.qicon_enums.Mode.Active, qt6.qicon_enums.State.On);\n")
	}
	if iconVal.DisabledOff != nil {
		ret.WriteString(newQSize(&sizeName, &isSizeSet))
		ret.WriteString("qt6.qicon.AddFile4(" + iconName + ", " + strconv.Quote(*iconVal.DisabledOff) + ", " + sizeName + ", qt6.qicon_enums.Mode.Disabled, qt6.qicon_enums.State.Off);\n")
	}
	if iconVal.DisabledOn != nil {
		ret.WriteString(newQSize(&sizeName, &isSizeSet))
		ret.WriteString("qt6.qicon.AddFile4(" + iconName + ", " + strconv.Quote(*iconVal.DisabledOn) + ", " + sizeName + ", qt6.qicon_enums.Mode.Disabled, qt6.qicon_enums.State.On);\n")
	}
	if iconVal.SelectedOff != nil {
		ret.WriteString(newQSize(&sizeName, &isSizeSet))
		ret.WriteString("qt6.qicon.AddFile4(" + iconName + ", " + strconv.Quote(*iconVal.SelectedOff) + ", " + sizeName + ", qt6.qicon_enums.Mode.Selected, qt6.qicon_enums.State.Off);\n")
	}
	if iconVal.SelectedOn != nil {
		ret.WriteString(newQSize(&sizeName, &isSizeSet))
		ret.WriteString("qt6.qicon.AddFile4(" + iconName + ", " + strconv.Quote(*iconVal.SelectedOn) + ", " + sizeName + ", qt6.qicon_enums.Mode.Selected, qt6.qicon_enums.State.On);\n")
	}

	if themeIconCond {
		ret.WriteString("}\n")
	}

	ret.WriteString("defer qt6.qicon.QDelete(" + iconName + ");\n")

	return iconName
}

func renderProperties(properties []UiProperty, ret *strings.Builder, targetName, targetClass, parentClass string) error {
	defaultMargin := DefaultGridMargin
	if parentClass != "" {
		defaultMargin = DefaultChildrenMargin
	}
	contentsMargins := [4]int{defaultMargin, defaultMargin, defaultMargin, defaultMargin} // left, top, right, bottom
	customContentsMargins := false
	zigQtStruct := "qt6." + zigStructName(targetClass)

	strVariantName := targetName + "_variantStr"
	numVariantName := targetName + "_variantNum"
	boolVariantName := targetName + "_variantBool"
	urlVariantName := targetName + "_variantUrl"

	for _, prop := range properties {
		setterFunc := ".Set" + strings.ToUpper(string(prop.Name[0])) + prop.Name[1:]

		if prop.Name == "geometry" {
			if targetName == GlobalContext {
				ret.WriteString(zigQtStruct + ".Resize(ui." + targetName + ", " + fmt.Sprintf("%d, %d", prop.RectVal.Width, prop.RectVal.Height) + ");\n")
			} else {
				ret.WriteString(zigQtStruct + ".SetGeometry(ui." + targetName + ", " + fmt.Sprintf("%d, %d, %d, %d", prop.RectVal.X, prop.RectVal.Y, prop.RectVal.Width, prop.RectVal.Height) + ");\n")
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

		} else if prop.Name == "pixmap" {
			ret.WriteString("const pixmap" + strconv.Itoa(PixmapCounter) + ` = qt6.qpixmap.New4("` + *prop.PixmapVal + `");` + "\n")
			ret.WriteString("defer qt6.qpixmap.QDelete(pixmap" + strconv.Itoa(PixmapCounter) + ");\n")
			ret.WriteString(zigQtStruct + ".SetPixmap(ui." + targetName + ", pixmap" + strconv.Itoa(PixmapCounter) + ");\n")
			PixmapCounter++

		} else if prop.Name == "buddy" {
			ret.WriteString(zigQtStruct + ".SetBuddy(ui." + targetName + ", ui." + *prop.CStringVal + ");\n")

		} else if prop.Name == "cursor" {
			ret.WriteString("const cursor" + strconv.Itoa(CursorCounter) + "= qt6.qcursor.New2(qt6.qnamespace_enums.CursorShape." + *prop.CursorVal + ");\n")
			ret.WriteString("defer qt6.qcursor.QDelete(cursor" + strconv.Itoa(CursorCounter) + ");\n")
			ret.WriteString(zigQtStruct + ".SetCursor(ui." + targetName + ", cursor" + strconv.Itoa(CursorCounter) + ");\n")
			CursorCounter++

		} else if prop.StringVal != nil {
			//  "windowTitle", "title", "text"
			if prop.StdSetVal != nil && *prop.StdSetVal != "" {
				maybeComment := " // auxiliary to qt6.qcoreapplication.Translate"
				if prop.StringVal.Notr {
					maybeComment = ""
				}
				ret.WriteString(writtenString("const "+strVariantName+strconv.Itoa(VariantCounter)+" = qt6.qvariant.New24(", generateString(prop.StringVal), ");\n", prop.StringVal.Notr, true))
				ret.WriteString("defer qt6.qvariant.QDelete(" + strVariantName + strconv.Itoa(VariantCounter) + ");" + maybeComment + "\n")
				ret.WriteString("_ = " + zigQtStruct + ".SetProperty(ui." + targetName + ", " + strconv.Quote(prop.Name) + ", " + strVariantName + strconv.Itoa(VariantCounter) + ");" + maybeComment + "\n")
				VariantCounter++
			} else if prop.Name == "shortcut" {
				maybeComment := " // auxiliary to qt6.qcoreapplication.Translate"
				if prop.StringVal.Notr {
					maybeComment = ""
				}
				ret.WriteString(writtenString("\nconst "+targetName+"Shortcut = qt6.qkeysequence.New2(", generateString(prop.StringVal), ");\n", prop.StringVal.Notr, true))
				ret.WriteString("defer qt6.qkeysequence.QDelete(" + targetName + "Shortcut);" + maybeComment + "\n")
				ret.WriteString(zigQtStruct + ".SetShortcut(ui." + targetName + ", " + targetName + "Shortcut);" + maybeComment + "\n")
			} else {
				ret.WriteString(writtenString(zigQtStruct+setterFunc+"(ui."+targetName+", ", generateString(prop.StringVal), ");\n", prop.StringVal.Notr, true))
			}

		} else if prop.NumberVal != nil {
			// "currentIndex"
			if prop.StdSetVal != nil && *prop.StdSetVal != "" {
				ret.WriteString("const " + numVariantName + strconv.Itoa(VariantCounter) + " = qt6.qvariant.New6(" + *prop.NumberVal + ");\n")
				ret.WriteString("defer qt6.qvariant.QDelete(" + numVariantName + strconv.Itoa(VariantCounter) + ");\n")
				ret.WriteString("_ = " + zigQtStruct + ".SetProperty(ui." + targetName + ", " + strconv.Quote(prop.Name) + ", " + numVariantName + strconv.Itoa(VariantCounter) + ");\n")
				VariantCounter++
			} else {
				ret.WriteString(zigQtStruct + setterFunc + "(ui." + targetName + ", " + *prop.NumberVal + ");\n")
			}

		} else if prop.BoolVal != nil {
			// "childrenCollapsible"
			if prop.StdSetVal != nil && *prop.StdSetVal != "" {
				ret.WriteString("const " + boolVariantName + strconv.Itoa(VariantCounter) + " = qt6.qvariant.New8(" + strconv.FormatBool(*prop.BoolVal) + ");\n")
				ret.WriteString("defer qt6.qvariant.QDelete(" + boolVariantName + strconv.Itoa(VariantCounter) + ");\n")
				ret.WriteString("_ = " + zigQtStruct + ".SetProperty(ui." + targetName + ", " + strconv.Quote(prop.Name) + ", " + boolVariantName + strconv.Itoa(VariantCounter) + ");\n")
				VariantCounter++
			} else {
				// "tristate"
				var overrideNum string
				if prop.Name == "tristate" {
					overrideNum = "1"
				}
				ret.WriteString(zigQtStruct + setterFunc + overrideNum + "(ui." + targetName + ", " + strconv.FormatBool(*prop.BoolVal) + ");\n")
			}

		} else if prop.EnumVal != nil {
			if targetClass == "QFrame" && prop.Name == "orientation" {
				enumVal := "HLine"
				if strings.Contains(*prop.EnumVal, "Vertical") {
					enumVal = "VLine"
				}
				ret.WriteString(zigQtStruct + ".SetFrameShape(ui." + targetName + ", qt6.qframe_enums.Shape." + enumVal + ");\n")
			} else {
				// "QFrame::Shape::Panel"
				ret.WriteString(zigQtStruct + setterFunc + "(ui." + targetName + ", " + normalizeEnumName(prop.Name, *prop.EnumVal) + ");\n")
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
			ret.WriteString(zigQtStruct + setterFunc + "(ui." + targetName + ", " + emit + ");\n")

		} else if prop.IconVal != nil {
			iconName := renderIcon(prop.IconVal, ret)
			ret.WriteString(zigQtStruct + setterFunc + "(ui." + targetName + ", " + iconName + ");\n")

		} else if prop.Name == "sizePolicy" {
			mapKey := prop.SizePolicyVal.HSizeType + "," + prop.SizePolicyVal.VSizeType + "," + strconv.Itoa(prop.SizePolicyVal.HStretch) + "," + strconv.Itoa(prop.SizePolicyVal.VStretch)

			sizePolicyNum, ok := SizePolicyMap[mapKey]
			if !ok {
				sizePolicyNum = strconv.Itoa(SizePolicyCounter)
				SizePolicyMap[mapKey] = sizePolicyNum
				ret.WriteString("const sizePolicy" + sizePolicyNum + " = qt6.qsizepolicy.New3();\n")
				ret.WriteString("defer qt6.qsizepolicy.QDelete(sizePolicy" + sizePolicyNum + ");\n")
				ret.WriteString("qt6.qsizepolicy.SetHorizontalPolicy(sizePolicy" + sizePolicyNum + ", " + normalizeEnumName("", "QSizePolicy::Policy::"+prop.SizePolicyVal.HSizeType) + ");\n")
				ret.WriteString("qt6.qsizepolicy.SetVerticalPolicy(sizePolicy" + sizePolicyNum + ", " + normalizeEnumName("", "QSizePolicy::Policy::"+prop.SizePolicyVal.VSizeType) + ");\n")
				ret.WriteString("qt6.qsizepolicy.SetHorizontalStretch(sizePolicy" + sizePolicyNum + ", " + strconv.Itoa(prop.SizePolicyVal.HStretch) + ");\n")
				ret.WriteString("qt6.qsizepolicy.SetVerticalStretch(sizePolicy" + sizePolicyNum + ", " + strconv.Itoa(prop.SizePolicyVal.VStretch) + ");\n")
				SizePolicyCounter++
			}

			targetSP := targetName + "_sp"
			ret.WriteString("const " + targetSP + " = " + zigQtStruct + ".SizePolicy(ui." + targetName + ");\n")
			ret.WriteString("defer qt6.qsizepolicy.QDelete(" + targetSP + ");\n")
			ret.WriteString("qt6.qsizepolicy.SetHeightForWidth(sizePolicy" + sizePolicyNum + ", qt6.qsizepolicy.HasHeightForWidth(" + targetSP + "));\n")
			ret.WriteString(zigQtStruct + ".SetSizePolicy(ui." + targetName + ", sizePolicy" + sizePolicyNum + ");\n")

		} else if prop.Name == "font" {
			fontCounter := FontCounter
			FontCounter++

			fontVal := "font" + strconv.Itoa(fontCounter)

			ret.WriteString("const " + fontVal + " = qt6.qfont.New();\n")
			ret.WriteString("defer qt6.qfont.QDelete(" + fontVal + ");\n")

			if prop.FontVal.Family != nil && *prop.FontVal.Family != "" {
				ret.WriteString("qt6.qfont.SetFamily(" + fontVal + ", " + strconv.Quote(*prop.FontVal.Family) + ");\n")
			}

			if prop.FontVal.PointSize != nil {
				ret.WriteString("qt6.qfont.SetPointSize(" + fontVal + ", " + strconv.Itoa(*prop.FontVal.PointSize) + ");\n")
			}

			if prop.FontVal.Italic != nil {
				ret.WriteString("qt6.qfont.SetItalic(" + fontVal + ", " + strconv.FormatBool(*prop.FontVal.Italic) + ");\n")
			}

			if prop.FontVal.Bold != nil {
				ret.WriteString("qt6.qfont.SetBold(" + fontVal + ", " + strconv.FormatBool(*prop.FontVal.Bold) + ");\n")
			}

			if prop.FontVal.Underline != nil {
				ret.WriteString("qt6.qfont.SetUnderline(" + fontVal + ", " + strconv.FormatBool(*prop.FontVal.Underline) + ");\n")
			}

			if prop.FontVal.StrikeOut != nil {
				ret.WriteString("qt6.qfont.SetStrikeOut(" + fontVal + ", " + strconv.FormatBool(*prop.FontVal.StrikeOut) + ");\n")
			}

			if prop.FontVal.Weight != nil && *prop.FontVal.Weight != "" {
				ret.WriteString("qt6.qfont.SetWeight(" + fontVal + ", qt6.qfont_enums.Weight." + *prop.FontVal.Weight + ");\n")
			}

			if prop.FontVal.Antialiasing != nil && *prop.FontVal.Antialiasing != "" {
				ret.WriteString("qt6.qfont.SetStyleStrategy(" + fontVal + ", qt6.qfont_enums.StyleStrategy." + *prop.FontVal.Antialiasing + ");\n")
			}

			if prop.FontVal.Kerning != nil {
				ret.WriteString("qt6.qfont.SetKerning(" + fontVal + ", " + strconv.FormatBool(*prop.FontVal.Kerning) + ");\n")
			}

			if prop.FontVal.HintingPreference != nil && *prop.FontVal.HintingPreference != "" {
				ret.WriteString("qt6.qfont.SetHintingPreference(" + fontVal + ", qt6.qfont_enums.HintingPreference." + *prop.FontVal.HintingPreference + ");\n")
			}

			ret.WriteString(zigQtStruct + ".SetFont(ui." + targetName + ", " + fontVal + ");\n")

		} else if prop.Name == "iconSize" {
			ret.WriteString("const " + targetName + "_size" + strconv.Itoa(SizeCounter) + " = qt6.qsize.New4(" + fmt.Sprintf("%d, %d", prop.SizeVal.Width, prop.SizeVal.Height) + ");\n")
			ret.WriteString("defer qt6.qsize.QDelete(" + targetName + "_size" + strconv.Itoa(SizeCounter) + ");\n")
			ret.WriteString(zigQtStruct + ".SetIconSize(ui." + targetName + ", " + targetName + "_size" + strconv.Itoa(SizeCounter) + ");\n")
			SizeCounter++

		} else if prop.DoubleVal != nil {
			// QDoubleSpinBox
			// "decimals", "minimum", "maximum", "value"
			ret.WriteString(zigQtStruct + setterFunc + "(ui." + targetName + ", " + *prop.DoubleVal + ");\n")

		} else if prop.SizeVal != nil {
			// "maximumSize", "minimumSize", "baseSize"
			ret.WriteString(zigQtStruct + setterFunc + "2(ui." + targetName + ", " + fmt.Sprintf("%d, %d", prop.SizeVal.Width, prop.SizeVal.Height) + ");\n")

		} else if prop.UrlVal != nil {
			// "url"
			if prop.StdSetVal != nil && *prop.StdSetVal != "" {
				ret.WriteString("const " + urlVariantName + strconv.Itoa(VariantCounter) + "_url = qt6.qurl.New3(" + strconv.Quote(prop.UrlVal.StringVal.Value) + ");\n")
				ret.WriteString("defer qt6.qurl.QDelete(" + urlVariantName + strconv.Itoa(VariantCounter) + "_url);\n")
				ret.WriteString("const " + urlVariantName + strconv.Itoa(VariantCounter) + " = qt6.qvariant.New26(" + urlVariantName + strconv.Itoa(VariantCounter) + "_url);\n")
				ret.WriteString("defer qt6.qvariant.QDelete(" + urlVariantName + strconv.Itoa(VariantCounter) + ");\n")
				ret.WriteString("_ = " + zigQtStruct + ".SetProperty(ui." + targetName + ", " + strconv.Quote(prop.Name) + ", " + urlVariantName + strconv.Itoa(VariantCounter) + ");\n")
				VariantCounter++
			}

		} else if prop.Name == "palette" {
			ret.WriteString("const " + targetName + "_palette = qt6.qpalette.New();\n")
			ret.WriteString("defer qt6.qpalette.QDelete(" + targetName + "_palette);\n")

			processPaletteGroup(ret, targetName, "Active", prop.PaletteVal.Active.ColorRoles)
			processPaletteGroup(ret, targetName, "Inactive", prop.PaletteVal.Inactive.ColorRoles)
			processPaletteGroup(ret, targetName, "Disabled", prop.PaletteVal.Disabled.ColorRoles)

			ret.WriteString(zigQtStruct + ".SetPalette(ui." + targetName + ", " + targetName + "_palette);\n")

		} else if prop.Name == "backgroundBrush" {
			mapKey := prop.BackgroundBrushVal.Style + " (" + strconv.Itoa(prop.BackgroundBrushVal.Color.Red) + "," + strconv.Itoa(prop.BackgroundBrushVal.Color.Green) + "," + strconv.Itoa(prop.BackgroundBrushVal.Color.Blue) + "," + strconv.Itoa(prop.BackgroundBrushVal.Color.Alpha) + ")"

			brushNum, ok := BrushColorMap[mapKey]
			if !ok {
				brushNum = strconv.Itoa(BrushCounter)
				BrushColorMap[mapKey] = brushNum
				ret.WriteString(getNewBrush(brushNum, prop.BackgroundBrushVal.Style, strconv.Itoa(prop.BackgroundBrushVal.Color.Red), strconv.Itoa(prop.BackgroundBrushVal.Color.Green), strconv.Itoa(prop.BackgroundBrushVal.Color.Blue), strconv.Itoa(prop.BackgroundBrushVal.Color.Alpha)))
				BrushCounter++
			}
			ret.WriteString(zigQtStruct + ".SetBackgroundBrush(ui." + targetName + ", brush" + brushNum + ");\n")

		} else if prop.LocaleVal != nil {
			ret.WriteString("const locale_" + targetName + " = qt6.qlocale.New3(qt6.qlocale_enums.Language." + prop.LocaleVal.Language + ", qt6.qlocale_enums.Country." + prop.LocaleVal.Country + ");\n")
			ret.WriteString("defer qt6.qlocale.QDelete(locale_" + targetName + ");\n")
			ret.WriteString(zigQtStruct + ".SetLocale(ui." + targetName + ", locale_" + targetName + ");\n")

		} else {
			ret.WriteString("// UIC: no handler for " + targetName + " of type " + targetClass + " property '" + prop.Name + "'\n")
		}
	}

	if customContentsMargins {
		ret.WriteString(zigQtStruct + ".SetContentsMargins(ui." + targetName + ", " + fmt.Sprintf("%d, %d, %d, %d", contentsMargins[0], contentsMargins[1], contentsMargins[2], contentsMargins[3]) + ");\n")
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

		// For QFormLayout, it's SetWidget or SetLayout
		ret.WriteString("qt6." + zigStructName(l.Class) + ".Set" + noun + "(ui." + l.Name + ", " + rowPos + ", " + colPos + ", " + widgetName + ");\n")

	case "QGridLayout":
		if child.ColSpan != nil || child.RowSpan != nil {
			// If either are present, use full four-value AddWidget3/AddLayout2
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

			ret.WriteString("qt6." + zigStructName(l.Class) + ".Add" + noun + "(ui." + l.Name + ", " + widgetName + ", " + fmt.Sprintf("%d, %d, %d, %d", *child.Row, *child.Column, rowSpan, colSpan) + ");\n")

		} else {
			// Row and Column are always present in the .ui file
			// For row/column it's AddWidget2/AddLayout

			if noun == "Widget" {
				noun += "2"
			}

			ret.WriteString("qt6." + zigStructName(l.Class) + ".Add" + noun + "(ui." + l.Name + ", " + widgetName + ", " + fmt.Sprintf("%d, %d", *child.Row, *child.Column) + ");\n")
		}

	case "QHBoxLayout", "QVBoxLayout":
		// For box layout it's AddWidget/AddLayout
		ret.WriteString("\nqt6." + zigStructName(l.Class) + ".Add" + noun + "(ui." + l.Name + ", " + widgetName + ");\n")

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
	var ctor string

	wClassZig := "qt6." + strings.ToLower(l.Class)

	if isNestedLayout {
		ctor = wClassZig + ".New2"

		ret.WriteString(`
    ui.` + l.Name + " = " + ctor + "();\n")
	} else {
		ctor = wClassZig + ".New"

		ret.WriteString(`
    ui.` + l.Name + " = " + ctor + "(" + parentName + ");\n")
	}

	ret.WriteString(wClassZig + ".SetObjectName(ui." + l.Name + ", " + strconv.Quote(l.Name) + ");\n")

	// Layout->Properties

	err := renderProperties(l.Properties, &ret, l.Name, l.Class, parentClass)
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

			ret.WriteString("\nui." + child.Spacer.Name + " = qt6.qspaceritem.New4(" + fmt.Sprintf("%d, %d, %s, %s", width, height, spacerEnums[0], spacerEnums[1]) + ");\n")
			if l.Class == "QFormLayout" {
				role := "qt6.qformlayout_enums.ItemRole.LabelRole"
				if *child.Column == 1 {
					role = "qt6.qformlayout_enums.ItemRole.FieldRole"
				}
				if (child.RowSpan != nil && *child.RowSpan > 0) || (child.ColSpan != nil && *child.ColSpan > 0) {
					role = "qt6.qformlayout_enums.ItemRole.SpanningRole"
				}
				ret.WriteString("qt6." + zigStructName(l.Class) + ".SetItem" + method + "(ui." + l.Name + ", " + strconv.Itoa(*child.Row) + ", " + role + ", ui." + child.Spacer.Name + ");\n\n")
			} else {
				ret.WriteString("qt6." + zigStructName(l.Class) + ".AddItem" + method + "(ui." + l.Name + ", ui." + child.Spacer.Name + extraParams + ");\n\n")
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

	writeLayoutAttributes(&ret, l.Stretch, wClassZig+".SetStretch(ui."+l.Name+", ")
	writeLayoutAttributes(&ret, l.RowStretch, wClassZig+".SetRowStretch(ui."+l.Name+", ")
	writeLayoutAttributes(&ret, l.ColStretch, wClassZig+".SetColumnStretch(ui."+l.Name+", ")
	writeLayoutAttributes(&ret, l.RowMinimumHeight, wClassZig+".SetRowMinimumHeight(ui."+l.Name+", ")
	writeLayoutAttributes(&ret, l.ColMinimumWidth, wClassZig+".SetColumnMinimumWidth(ui."+l.Name+", ")

	return ret.String(), nil
}

func generateWidget(w UiWidget, parentName, parentClass string) (string, error) {
	ret := strings.Builder{}

	wClass := w.Class
	if cw, ok := CustomWidgets[w.Class]; ok && !(ExtendedFlag && isExtendedClass(w.Class)) {
		wClass = cw
	}
	wClassZig := "qt6." + strings.ToLower(wClass)
	ctor := wClassZig + ".New"

	if parentName == "" || parentClass == "QDockWidget" || parentClass == "QScrollArea" ||
		parentClass == "QStackedWidget" || parentClass == "QTabWidget" ||
		parentClass == "QToolBox" || parentClass == "QWizard" {
		ret.WriteString("\n\t\tui." + w.Name + " = " + ctor + "2();\n")
	} else {
		ret.WriteString("\n\t\tui." + w.Name + " = " + ctor + "(" + parentName + ");\n")
	}

	ret.WriteString(wClassZig + ".SetObjectName(ui." + w.Name + ", " + strconv.Quote(w.Name) + ");\n")

	if wClass == "QMenu" {
		QMenus = append(QMenus, w.Name)
	}

	// Properties

	err := renderProperties(w.Properties, &ret, w.Name, wClass, parentClass)
	if err != nil {
		return "", err
	}

	// Attributes

	boolVariantName := w.Name + "_variantBool"

	for _, attr := range w.Attributes {
		if parentClass == "QTabWidget" && attr.Name == "title" {
			ret.WriteString(writtenString("qt6.qtabwidget.SetTabText("+parentName+", qt6.qtabwidget.IndexOf("+parentName+", ui."+w.Name+"), ", generateString(attr.StringVal), ");\n", attr.StringVal.Notr, true))

		} else if wClass == "QDockWidget" && parentClass == "QMainWindow" && attr.Name == "dockWidgetArea" {
			ret.WriteString("qt6.qmainwindow.AddDockWidget(" + parentName + ", " + *attr.NumberVal + ", ui." + w.Name + ");  // qt6.qnamespace_enums.DockWidgetArea (" + *attr.NumberVal + ")\n")

		} else if wClass == "QToolBar" && parentClass == "QMainWindow" && attr.Name == "toolBarArea" {
			ret.WriteString("qt6.qmainwindow.AddToolBar(" + parentName + ", " + normalizeEnumName(attr.Name, *attr.EnumVal) + ", ui." + w.Name + ");\n")

		} else if wClass == "QToolBar" && parentClass == "QMainWindow" && attr.Name == "toolBarBreak" {
			if attr.BoolVal != nil && *attr.BoolVal {
				ret.WriteString("qt6.qmainwindow.AddToolBarBreak(" + parentName + ");\n")
			}

		} else if parentClass == "QTabWidget" && attr.Name == "icon" {
			// This will be handled when we call .AddTab() on the parent QTabWidget

		} else if parentClass == "QToolBox" && attr.Name == "label" {
			ret.WriteString("_ = qt6.qtoolbox.AddItem(" + parentName + ", ui." + w.Name + ", " + strconv.Quote(attr.StringVal.Value) + ");\n")
			ret.WriteString(writtenString("qt6.qtoolbox.SetItemText("+parentName+", qt6.qtoolbox.IndexOf("+parentName+", ui."+w.Name+"), ", generateString(attr.StringVal), ");\n", attr.StringVal.Notr, true))

		} else if attr.Name == "buttonGroup" {
			groupName := attr.StringVal.Value
			if group, exists := ButtonGroups[groupName]; exists {
				group.Buttons = append(group.Buttons, w.Name)
			} else {
				ButtonGroups[groupName] = &UiButtonGroup{
					Name:    groupName,
					Buttons: []string{w.Name},
				}
				ret.WriteString("\nconst " + groupName + " = qt6.qbuttongroup.New2(ui." + GlobalContext + ");\n")
				ret.WriteString(("qt6.qbuttongroup.SetObjectName(" + groupName + ", " + strconv.Quote(groupName) + ");\n"))
			}
			ret.WriteString("qt6.qbuttongroup.AddButton(" + groupName + ", ui." + w.Name + ");\n")

		} else if (wClass == "QTableView" || wClass == "QTableWidget") && strings.Contains(attr.Name, "Header") {
			headerType := "Horizontal"
			if strings.HasPrefix(attr.Name, "vertical") {
				headerType = "Vertical"
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
				isTrString = strings.Contains(viewParam, "qt6.qcoreapplication.Translate")
				variantOverrideNum = "24"
			} else if attr.EnumVal != nil {
				viewParam = normalizeEnumName(attr.Name, *attr.EnumVal)
			}

			headerName := w.Name + "_" + strings.ToLower(headerType) + "_header"
			if _, ok := TableWidgetMap[headerName]; !ok {
				TableWidgetMap[headerName] = struct{}{}
				ret.WriteString("const " + headerName + " = " + wClassZig + "." + headerType + "Header(ui." + w.Name + ");\n")
			}

			methodName := "Set" + strings.TrimPrefix(attr.Name, strings.ToLower(headerType)+"Header")
			preStr := "qt6.qheaderview." + methodName + "(" + headerName + ", "
			postStr := ");\n"
			if isTrString {
				ret.WriteString(writtenString(preStr, viewParam, postStr, true, true))
			} else if attr.StdSetVal != nil && *attr.StdSetVal != "" {
				attrName := strings.TrimPrefix(attr.Name, strings.ToLower(headerType)+"Header")
				attrName = strings.ToLower(attrName[0:1]) + attrName[1:]
				ret.WriteString("const " + boolVariantName + strconv.Itoa(VariantCounter) + " = qt6.qvariant.New" + variantOverrideNum + "(" + strconv.FormatBool(*attr.BoolVal) + ");\n")
				ret.WriteString("defer qt6.qvariant.QDelete(" + boolVariantName + strconv.Itoa(VariantCounter) + ");\n")
				ret.WriteString("_ = qt6.qheaderview.SetProperty(" + wClassZig + "." + headerType + "Header(ui." + w.Name + "), " + strconv.Quote(attrName) + ", " + boolVariantName + strconv.Itoa(VariantCounter) + ");\n")
				VariantCounter++
			} else {
				ret.WriteString(preStr + viewParam + postStr)
			}

		} else if (wClass == "QTreeWidget" || wClass == "QTreeView") && attr.BoolVal != nil {
			attrName := strings.TrimPrefix(attr.Name, "header")
			if attr.StdSetVal != nil && *attr.StdSetVal != "" {
				attrName = strings.ToLower(attrName[0:1]) + attrName[1:]
				ret.WriteString("const " + boolVariantName + strconv.Itoa(VariantCounter) + " = qt6.qvariant.New8(" + strconv.FormatBool(*attr.BoolVal) + ");\n")
				ret.WriteString("defer qt6.qvariant.QDelete(" + boolVariantName + strconv.Itoa(VariantCounter) + ");\n")
				ret.WriteString("_ = qt6.qheaderview.SetProperty(" + wClassZig + ".Header(ui." + w.Name + "), " + strconv.Quote(attrName) + ", " + boolVariantName + strconv.Itoa(VariantCounter) + ");\n")
				VariantCounter++
			} else {
				ret.WriteString("qt6.qheaderview.Set" + attrName + "(" + wClassZig + ".Header(ui." + w.Name + "), " + strconv.FormatBool(*attr.BoolVal) + ");\n")
			}

		} else if (wClass == "QTreeWidget" || wClass == "QTreeView") && attr.NumberVal != nil {
			attrName := strings.TrimPrefix(attr.Name, "header")
			ret.WriteString("qt6.qheaderview.Set" + attrName + "(" + wClassZig + ".Header(ui." + w.Name + "), " + *attr.NumberVal + ");\n")

		} else if attr.Name == "toolTip" {
			ret.WriteString(writtenString(wClassZig+".SetToolTip(ui."+w.Name+", ", generateString(attr.StringVal), ");\n", attr.StringVal.Notr, true))

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
		ret.WriteString("\nui." + a.Name + " = qt6.qaction.New4(ui." + parent + ");")

		ret.WriteString("qt6.qaction.SetObjectName(ui." + a.Name + ", " + strconv.Quote(a.Name) + ");\n")

		// QActions are translated in the parent window's context
		if prop, ok := propertyByName(a.Properties, "text"); ok {
			ret.WriteString(writtenString("qt6.qaction.SetText(ui."+a.Name+", ", generateString(prop.StringVal), ");\n", prop.StringVal.Notr, true))
		}

		if prop, ok := propertyByName(a.Properties, "shortcut"); ok {
			maybeComment := " // auxiliary to qt6.qcoreapplication.Translate"
			if prop.StringVal.Notr {
				maybeComment = ""
			}
			ret.WriteString(writtenString("\nconst "+a.Name+"Shortcut = qt6.qkeysequence.New2(", generateString(prop.StringVal), ");\n", prop.StringVal.Notr, true))
			ret.WriteString("defer qt6.qkeysequence.QDelete(" + a.Name + "Shortcut);" + maybeComment + "\n")
			ret.WriteString("qt6.qaction.SetShortcut(ui." + a.Name + ", " + a.Name + "Shortcut);" + maybeComment + "\n")
		}

		if prop, ok := propertyByName(a.Properties, "icon"); ok {
			iconName := renderIcon(prop.IconVal, &ret)
			ret.WriteString("qt6.qaction.SetIcon(ui." + a.Name + ", " + iconName + ");\n")
		}

		if prop, ok := propertyByName(a.Properties, "toolTip"); ok {
			ret.WriteString(writtenString("qt6.qaction.SetToolTip(ui."+a.Name+", ", generateString(prop.StringVal), ");\n", prop.StringVal.Notr, true))
		}

		if prop, ok := propertyByName(a.Properties, "visible"); ok {
			ret.WriteString("qt6.qaction.SetVisible(ui." + a.Name + ", " + strconv.FormatBool(*prop.BoolVal) + ");\n")
		}

		if prop, ok := propertyByName(a.Properties, "menuRole"); ok {
			ret.WriteString("qt6.qaction.SetMenuRole(ui." + a.Name + ", " + normalizeEnumName(prop.Name, *prop.EnumVal) + ");\n")
		}
	}

	// Items

	for itemNo, itm := range w.Items {
		zStruct := zigStructName(wClass)
		targetSelf := "ui." + w.Name
		var isItemClass bool

		switch wClass {
		case "QListWidget":
			targetSelf = "item" + strconv.Itoa(ItemWidgetCounter)
			isItemClass = true
			zStruct = "qlistwidgetitem"
			ret.WriteString("const " + targetSelf + " = qt6." + zStruct + ".New();\n")
			ret.WriteString("qt6.qlistwidget.InsertItem(ui." + w.Name + ", " + strconv.Itoa(itemNo) + ", " + targetSelf + ");\n")
		case "QTreeWidget":
			targetSelf = "item" + strconv.Itoa(ItemWidgetCounter)
			isItemClass = true
			zStruct = "qtreewidgetitem"
			ret.WriteString("const " + targetSelf + " = qt6." + zStruct + ".New3(ui." + w.Name + ");\n")
		case "QTableWidget":
			isItemClass = true
			zStruct = "qtablewidgetitem"
		}

		if !isItemClass {
			ret.WriteString("qt6." + zStruct + ".AddItem(ui." + w.Name + `, "");` + "\n")
		}

		// Check for a "text" property and update the item's text
		// Do this as a 2nd step so that the SetItemText can be trapped for retranslateUi()
		for _, prop := range itm.Properties {
			switch prop.Name {
			case "text":
				if isItemClass {
					var maybeItemNo string
					if zStruct == "qtreewidgetitem" {
						maybeItemNo = ", " + strconv.Itoa(itemNo)
					}
					if !prop.StringVal.Notr {
						ret.WriteString("const " + targetSelf + " = " + wClassZig + ".Item(ui." + w.Name + ", " + strconv.Itoa(ItemWidgetCounter) + "); // auxiliary to qt6.qcoreapplication.Translate " + w.Name + " " + zigStructName(wClass) + "\n")
					}
					ret.WriteString(writtenString("qt6."+zStruct+".SetText("+targetSelf+maybeItemNo+", ", generateString(prop.StringVal), ");\n", prop.StringVal.Notr, true))
				} else {
					ret.WriteString(writtenString("qt6."+zStruct+".SetItemText("+targetSelf+", "+strconv.Itoa(itemNo)+", ", generateString(prop.StringVal), ");\n", prop.StringVal.Notr, true))
				}
			case "icon":
				iconName := renderIcon(prop.IconVal, &ret)
				ret.WriteString("qt6." + zStruct + ".SetIcon(" + targetSelf + ", " + iconName + ");\n")
			case "checkState":
				ret.WriteString("qt6." + zStruct + ".SetCheckState(" + targetSelf + ", qt6.qnamespace_enums.CheckState." + *prop.EnumVal + ");\n")
			case "flags":
				parts := strings.Split(*prop.SetVal, "|")
				for i, p := range parts {
					parts[i] = "qt6.qnamespace_enums.ItemFlag." + p
				}

				var emit string
				if len(parts) > 0 {
					emit = strings.Join(parts, "|")
				}
				ret.WriteString("qt6." + zStruct + ".SetFlags(" + targetSelf + ", " + emit + ");\n")
			default:
				ret.WriteString("// UIC: no handler for item property '" + prop.Name + "'\n")
			}
		}

		if isItemClass {
			ItemWidgetCounter++
		}
	}

	// Columns

	isColumnSet := false
	for colNo, col := range w.Columns {
		isHeaderSet := false
		for _, prop := range col.Properties {
			methodName := strings.ToUpper(prop.Name[0:1]) + prop.Name[1:]

			switch prop.Name {
			case "text", "toolTip":
				maybeComment := " // auxiliary to qt6.qcoreapplication.Translate"
				textVal := generateString(prop.StringVal)
				if !strings.Contains(textVal, "qt6.qcoreapplication.Translate") || prop.StringVal.Notr {
					maybeComment = ""
				}

				colToStr := strconv.Itoa(colNo)

				var lookupKey, itemName, setColumnMethod, setHeaderMethod, setItemMethod, translateItemMethod string

				switch wClass {
				case "QTreeWidget":
					lookupKey = w.Name
					itemName = "ui_" + w.Name + "Item"
					setHeaderMethod = wClassZig + ".SetHeaderItem(ui." + w.Name + ", " + itemName + ");\n"
					setItemMethod = writtenString(wClassZig+"item.Set"+methodName+"("+itemName+", "+colToStr+", ", textVal, ");", prop.StringVal.Notr, maybeComment == "")
					translateItemMethod = "const " + itemName + " = " + wClassZig + ".HeaderItem(ui." + w.Name + ");"
				default:
					lookupKey = w.Name + "_" + colToStr
					itemName = "ui_" + w.Name + "Item" + colToStr
					setColumnMethod = wClassZig + ".SetColumnCount(ui." + w.Name + ", " + strconv.Itoa(len(w.Columns)) + ");\n"
					setHeaderMethod = wClassZig + ".SetHorizontalHeaderItem(ui." + w.Name + ", " + colToStr + ", " + itemName + ");\n"
					setItemMethod = writtenString(wClassZig+"item.Set"+methodName+"("+itemName+", ", textVal, ");", prop.StringVal.Notr, maybeComment == "")
					translateItemMethod = "const " + itemName + " = " + wClassZig + ".HorizontalHeaderItem(ui." + w.Name + ", " + colToStr + ");"
				}

				newItem := "const " + itemName + " = " + wClassZig + "item.New();\n"

				if !isColumnSet && setColumnMethod != "" {
					ret.WriteString(setColumnMethod)
					isColumnSet = true
				}

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
						WidgetItemsMap[lookupKey] = append(WidgetItemsMap[lookupKey], translateItemMethod)
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
					WidgetItemsMap[lookupKey] = append(WidgetItemsMap[lookupKey], setItemMethod)
				}

			default:
				ret.WriteString("// UIC: no handler for column property '" + prop.Name + "'\n")
			}
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
			ret.WriteString(wClassZig + ".SetCentralWidget(ui." + w.Name + ", ui." + child.Name + ");\n") // Set central widget
			setCentralWidget = true
		}

		// QDockWidget and QScrollArea also have something like a central widget
		if (wClass == "QDockWidget" || wClass == "QScrollArea") && !setCentralWidget {
			ret.WriteString(wClassZig + ".SetWidget(ui." + w.Name + ", ui." + child.Name + ");\n") // Set central widget
			setCentralWidget = true
		}

		if wClass == "QSplitter" || wClass == "QStackedWidget" {
			// We need to manually AddWidget on every child of QSplitter or QStackedWidget
			var maybeDiscard string
			if wClass == "QStackedWidget" {
				maybeDiscard = "_ = "
			}
			ret.WriteString(maybeDiscard + wClassZig + ".AddWidget(ui." + w.Name + ", ui." + child.Name + ");\n")
		}

		if wClass == "QMainWindow" && child.Class == "QMenuBar" && !setMenuBar {
			ret.WriteString(wClassZig + ".SetMenuBar(ui." + w.Name + ", ui." + child.Name + ");\n")
			setMenuBar = true
		}

		if wClass == "QMainWindow" && child.Class == "QStatusBar" && !setStatusBar {
			ret.WriteString(wClassZig + ".SetStatusBar(ui." + w.Name + ", ui." + child.Name + ");\n")
			setStatusBar = true
		}

		// QTabWidget->QTab handling
		if wClass == "QTabWidget" {
			if icon, ok := propertyByName(child.Attributes, "icon"); ok {
				// addTab() overload with icon
				iconName := renderIcon(icon.IconVal, &ret)
				ret.WriteString("\n_ = " + wClassZig + ".AddTab2(ui." + w.Name + ", ui." + child.Name + ", " + iconName + `, "");` + "\n")

			} else {
				// addTab() overload without icon
				ret.WriteString("\n_ = " + wClassZig + ".AddTab(ui." + w.Name + ", ui." + child.Name + `, "");` + "\n")
			}
		}

		// child attributes
		if prop, ok := propertyByName(child.Attributes, "tabsClosable"); ok {
			ret.WriteString("qt6." + zigStructName(child.Class) + ".SetTabsClosable(ui." + child.Name + ", " + strconv.FormatBool(*prop.BoolVal) + ");\n")
		}

		if prop, ok := propertyByName(child.Attributes, "tabBarAutoHide"); ok {
			ret.WriteString("qt6." + zigStructName(child.Class) + ".SetTabBarAutoHide(ui." + child.Name + ", " + strconv.FormatBool(*prop.BoolVal) + ");\n")
		}

		if prop, ok := propertyByName(child.Attributes, "orientation"); ok {
			ret.WriteString("qt6." + zigStructName(child.Class) + ".SetOrientation(ui." + child.Name + ", " + normalizeEnumName(prop.Name, *prop.EnumVal) + ");\n")
		}
	}

	// AddActions
	// n.b. This must be *after* all children have been constructed, in case we
	// are adding a direct child

	for _, a := range w.AddActions {
		action := wClassZig + ".AddAction(ui." + w.Name + ", qt6.qmenu.MenuAction(ui." + a.Name + "));\n"

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
			action = "_ = " + wClassZig + ".AddSeparator(ui." + w.Name + ");\n"
			storeAction(action, wClass, w.Name)
		default:
			action = wClassZig + ".AddAction(ui." + w.Name + ", ui." + a.Name + ");\n"
			storeAction(action, wClass, w.Name)
		}
	}

	// ZOrder
	if len(w.ZOrder) > 0 {
		ret.WriteString("\n")
		collectClassNames_Widget(&w)
		for _, zorder := range w.ZOrder {
			className, ok := WidgetMap[zorder]
			if !ok {
				fmt.Println("Warning: Z-order assignment '" + zorder + "' is not a valid widget")
				continue
			}
			ret.WriteString("qt6." + className + ".Raise(ui." + zorder + ");\n")
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
	for _, line := range strings.Split(nest, "\n") {
		if strings.Contains(line, "qt6.qcoreapplication.Translate") {
			if strings.Contains(line, "const item") {
				retLine, parentItem, parentClass := splitLastWords(line)
				line = retLine
				if lastParentItem != parentItem && !foundWidgetItem {
					sortingBlockBegin := "const " + parentItem + "_sortingEnabled = qt6." + parentClass + ".IsSortingEnabled(ui." + parentItem + ");\n"
					sortingBlockBegin += "qt6." + parentClass + ".SetSortingEnabled(ui." + parentItem + ", false);"
					translateFunc = append(translateFunc, sortingBlockBegin)
					sortingBlockEnds = append(sortingBlockEnds, "qt6."+parentClass+".SetSortingEnabled(ui."+parentItem+", "+parentItem+"_sortingEnabled);\n")
				}
				foundWidgetItem = true
				lastParentItem = parentItem
			}
			translateFunc = append(translateFunc, splitTranslationComment(line))
		} else if strings.Contains(line, ".SetBuddy(") {
			setBuddy = append(setBuddy, line)
		} else if strings.Contains(line, ".SetCurrentRow(") {
			setCurrentRow = append(setCurrentRow, line)
		} else if strings.Contains(line, ".SetCurrentIndex(") {
			setCurrentIndex = append(setCurrentIndex, line)
		} else if strings.Contains(line, ".SetDefault(") {
			setDefault = append(setDefault, line)
		} else if strings.Contains(line, ".MenuAction(") {
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
const C = qt6.C;

pub const ` + uClass + `Ui = struct {
` + strings.Join(collectClassNames_Widget(&u.Widget), ",\n") + `,

`)

	if len(translateFunc) > 0 {
		ret.WriteString(`// RetranslateUi reapplies all text translations
    pub fn RetranslateUi(ui: *` + uClass + `Ui, allocator: std.mem.Allocator) void {
    ` + strings.Join(translateFunc, "\n") + `
    }`)
	}

	ret.WriteString(`
};

// New` + uClass + "Ui creates all the Qt objects for " + uClass + `Ui
pub fn New` + uClass + "Ui(allocator: std.mem.Allocator) !*" + uClass + `Ui {
    var ui = try allocator.create(` + uClass + `Ui);
`)

	ret.WriteString(strings.Join(newFuncBody, ""))

	for _, sb := range setBuddy {
		ret.WriteString(sb + "\n")
	}

	tabStops := u.TabStops
	if len(tabStops.TabStops) > 0 {
		for i := 0; i < len(tabStops.TabStops)-1; i++ {
			current := tabStops.TabStops[i].Name
			next := tabStops.TabStops[i+1].Name
			ret.WriteString("qt6.qwidget.SetTabOrder(ui." + current + ", ui." + next + ");\n")
		}
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
		ret.WriteString("\nui.RetranslateUi(allocator);\n\n")
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

	connections := u.Connections

	maybeComment := "// "
	if flagExtraOps.ImportName != "" {
		maybeComment = ""
	}

	if len(connections.Connections) != 0 {
		if flagExtraOps.ImportName == "" {
			ret.WriteString("\n// Uncomment the connections below when ready or regnerate with -c\n")
		}
		ret.WriteString("// Double-check that the connection override variants are correct!\n")
	}

	for _, c := range connections.Connections {
		zigStruct := WidgetMap[c.Sender]
		signal := splitToParens(c.Signal)
		slot := splitToParens(c.Slot)

		qtZigMethod := "On" + strings.ToUpper(signal[0:1]) + signal[1:]

		ret.WriteString(maybeComment + "qt6." + zigStruct + "." + qtZigMethod + "(ui." + c.Sender + ", " + uClass + "UiConnections." + c.Sender + "_" + slot + ");\n")
	}

	ret.WriteString(`
    return ui;
}`)

	output := ret.String()

	if len(u.CustomWidgets.CustomWidgets) > 0 {
		fmt.Println("\nThis form contains some custom widget(s). It may require manual patching for proper implementation.")
		fmt.Println("\nCustom widget(s):")
		for _, cw := range u.CustomWidgets.CustomWidgets {
			fmt.Println("  * " + cw.Name + " (" + cw.Extends + ")")
		}
	}

	if len(u.Resources.Includes) > 0 {
		fmt.Println("\nTo include the resource(s), run the `qrc-zig` program with the file(s) below:")
		for _, include := range u.Resources.Includes {
			fmt.Println("  * " + include.Location)
		}
	}

	if SanitizeObjectCounter > 0 || SanitizationFlag || len(u.CustomWidgets.CustomWidgets) > 0 || len(u.Resources.Includes) > 0 {
		fmt.Println()
	}

	return []byte(output), nil
}
