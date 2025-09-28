package main

import "encoding/xml"

type UiLayoutItem struct {
	Row     *int `xml:"row,attr"`
	Column  *int `xml:"column,attr"`
	RowSpan *int `xml:"rowspan,attr"`
	ColSpan *int `xml:"colspan,attr"`

	// A layout item either has a widget, a spacer, or another layout
	Widget *UiWidget `xml:"widget"`
	Spacer *UiSpacer `xml:"spacer"`
	Layout *UiLayout `xml:"layout"`
}

type UiLayout struct {
	Class            string         `xml:"class,attr"`
	Name             string         `xml:"name,attr"`
	Stretch          string         `xml:"stretch,attr,omitempty"`
	RowStretch       string         `xml:"rowstretch,attr,omitempty"`
	ColStretch       string         `xml:"columnstretch,attr,omitempty"`
	RowMinimumHeight string         `xml:"rowminimumheight,attr,omitempty"`
	ColMinimumWidth  string         `xml:"columnminimumwidth,attr,omitempty"`
	Properties       []UiProperty   `xml:"property"`
	Items            []UiLayoutItem `xml:"item"`
}

type UiPropertyContainer struct {
	Properties []UiProperty `xml:"property"`
}

type UiSpacer struct {
	Name       string       `xml:"name,attr"`
	Properties []UiProperty `xml:"property"`
}

type UiWidget struct {
	Class      string       `xml:"class,attr"`
	Name       string       `xml:"name,attr"`
	Properties []UiProperty `xml:"property"`
	Attributes []UiProperty `xml:"attribute"`

	Layout  *UiLayout  `xml:"layout,omitempty"`
	Widgets []UiWidget `xml:"widget"` // If no layout

	Columns []UiPropertyContainer `xml:"column"` // e.g. for QTreeWidget
	Items   []UiPropertyContainer `xml:"item"`   // e.g. for QComboBox

	AddActions []UiActionReference `xml:"addaction"`
	Actions    []UiAction          `xml:"action"`
	ZOrder     []string            `xml:"zorder"`
}

type UiButtonGroup struct {
	Name    string
	Buttons []string
}

type UiRect struct {
	X      int `xml:"x"`
	Y      int `xml:"y"`
	Width  int `xml:"width"`
	Height int `xml:"height"`
}

type UiString struct {
	Value          string `xml:",chardata"`
	Notr           bool   `xml:"notr,attr,omitempty"`
	Disambiguation string `xml:"comment,attr,omitempty"`
}

type UiIcon struct {
	ResourceFile string `xml:"resource,attr,omitempty"`
	Theme        string `xml:"theme,attr"`

	NormalOff   *string `xml:"normaloff,omitempty"`
	NormalOn    *string `xml:"normalon,omitempty"`
	ActiveOff   *string `xml:"activeoff,omitempty"`
	ActiveOn    *string `xml:"activeon,omitempty"`
	DisabledOff *string `xml:"disabledoff,omitempty"`
	DisabledOn  *string `xml:"disabledon,omitempty"`
	SelectedOff *string `xml:"selectedoff,omitempty"`
	SelectedOn  *string `xml:"selectedon,omitempty"`

	Base string `xml:",chardata"`
}

type UiSizePolicy struct {
	HSizeType string `xml:"hsizetype,attr"`
	VSizeType string `xml:"vsizetype,attr"`
	HStretch  int    `xml:"horstretch"`
	VStretch  int    `xml:"verstretch"`
}

type UiSize struct {
	Width  int `xml:"width"`
	Height int `xml:"height"`
}

type UiUrl struct {
	StringVal *UiString `xml:"string"`
}

type UiFont struct {
	Family            *string `xml:"family,omitempty"`
	PointSize         *int    `xml:"pointsize,omitempty"`
	Italic            *bool   `xml:"italic,omitempty"`
	Bold              *bool   `xml:"bold,omitempty"`
	Underline         *bool   `xml:"underline,omitempty"`
	StrikeOut         *bool   `xml:"strikeout,omitempty"`
	Weight            *string `xml:"fontweight,omitempty"`
	Antialiasing      *string `xml:"stylestrategy,omitempty"`
	Kerning           *bool   `xml:"kerning,omitempty"`
	HintingPreference *string `xml:"hintingpreference,omitempty"`
}

type UiColor struct {
	Alpha *int `xml:"alpha,attr,omitempty"`
	Red   int  `xml:"red"`
	Green int  `xml:"green"`
	Blue  int  `xml:"blue"`
}

type UiBrush struct {
	Style string  `xml:"brushstyle,attr"`
	Color UiColor `xml:"color"`
}

type UiColorRole struct {
	Role  string  `xml:"role,attr"`
	Brush UiBrush `xml:"brush"`
}

type UiColorGroup struct {
	ColorRoles []UiColorRole `xml:"colorrole"`
}

type UiPalette struct {
	Active   UiColorGroup `xml:"active"`
	Inactive UiColorGroup `xml:"inactive"`
	Disabled UiColorGroup `xml:"disabled"`
}

type UiLocale struct {
	Language string `xml:"language,attr"`
	Country  string `xml:"country,attr"`
}

type UiChar struct {
	Unicode string `xml:"unicode"`
}

type UiDate struct {
	Year  int `xml:"year"`
	Month int `xml:"month"`
	Day   int `xml:"day"`
}

type UiTime struct {
	Hour   int `xml:"hour"`
	Minute int `xml:"minute"`
	Second int `xml:"second"`
}

type UiStringList struct {
	Strings []UiString `xml:"string"`
}

type UiProperty struct {
	Name               string        `xml:"name,attr"`
	StdSetVal          *string       `xml:"stdset,attr,omitempty"`
	StringVal          *UiString     `xml:"string,omitempty"`
	NumberVal          *string       `xml:"number,omitempty"` // Preserve as string literal
	DoubleVal          *string       `xml:"double,omitempty"` // Preserve as string literal
	UIntVal            *string       `xml:"UInt,omitempty"`   // Preserve as string literal
	BoolVal            *bool         `xml:"bool,omitempty"`   // "true" or "false"
	EnumVal            *string       `xml:"enum,omitempty"`
	RectVal            *UiRect       `xml:"rect,omitempty"`
	IconVal            *UiIcon       `xml:"iconset,omitempty"`
	SetVal             *string       `xml:"set,omitempty"`
	SizePolicyVal      *UiSizePolicy `xml:"sizepolicy,omitempty"`
	SizeVal            *UiSize       `xml:"size,omitempty"`
	FontVal            *UiFont       `xml:"font,omitempty"`
	PixmapVal          *string       `xml:"pixmap,omitempty"`
	CStringVal         *string       `xml:"cstring,omitempty"`
	CursorVal          *string       `xml:"cursorShape,omitempty"`
	UrlVal             *UiUrl        `xml:"url,omitempty"`
	PaletteVal         *UiPalette    `xml:"palette,omitempty"`
	BackgroundBrushVal *UiBrush      `xml:"brush,omitempty"`
	LocaleVal          *UiLocale     `xml:"locale,omitempty"`
	CharVal            *UiChar       `xml:"char,omitempty"`
	DateVal            *UiDate       `xml:"date,omitempty"`
	TimeVal            *UiTime       `xml:"time,omitempty"`
	ColorVal           *UiColor      `xml:"color,omitempty"`
	StringListVal      *UiStringList `xml:"stringlist,omitempty"`
}

type UiActionReference struct {
	Name string `xml:"name,attr"`
}

type UiAction struct {
	Name       string       `xml:"name,attr"`
	Properties []UiProperty `xml:"property"`
}

type UiResourceInclude struct {
	Location string `xml:"location,attr"`
}

type UiResources struct {
	Includes []UiResourceInclude `xml:"include"`
}

type UiConnections struct {
	Connections []UiConnection `xml:"connection"`
}

type UiConnection struct {
	Sender   string `xml:"sender"`
	Signal   string `xml:"signal"`
	Slot     string `xml:"slot"`
	Receiver string `xml:"receiver"`
}

type UiCustomWidget struct {
	Name    string `xml:"class"`
	Extends string `xml:"extends"`
	Header  string `xml:"header,omitempty"`
}

type UiCustomWidgets struct {
	CustomWidgets []UiCustomWidget `xml:"customwidget"`
}

type UiTabStop struct {
	Name string `xml:",chardata"`
}

type UiTabStops struct {
	TabStops []UiTabStop `xml:"tabstop"`
}

type UiLayoutDefault struct {
	Spacing *int `xml:"spacing,attr,omitempty"`
	Margin  *int `xml:"margin,attr,omitempty"`
}

type UiFile struct {
	XMLName xml.Name // should always be xml.Name{Local: "ui"}

	Comment       string           `xml:"comment,omitempty"`
	Class         string           `xml:"class"`
	Version       string           `xml:"version,attr"` // e.g. 4.0
	Widget        UiWidget         `xml:"widget"`       // There's only one root widget
	Resources     UiResources      `xml:"resources"`
	Connections   UiConnections    `xml:"connections"`
	CustomWidgets UiCustomWidgets  `xml:"customwidgets,omitempty"`
	TabStops      UiTabStops       `xml:"tabstops,omitempty"`
	LayoutDefault *UiLayoutDefault `xml:"layoutdefault,omitempty"`
}
