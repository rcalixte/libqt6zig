const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const abstractannotationitemdelegate_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qstyle_enums = @import("../libqstyle.zig").enums;
const std = @import("std");

/// https://api.kde.org/ktexteditor-styleoptionannotationitem.html
pub const ktexteditor__styleoptionannotationitem = struct {
    /// New constructs a new KTextEditor::StyleOptionAnnotationItem object.
    ///
    ///
    pub fn New() QtC.KTextEditor__StyleOptionAnnotationItem {
        return qtc.KTextEditor__StyleOptionAnnotationItem_new();
    }

    /// New2 constructs a new KTextEditor::StyleOptionAnnotationItem object.
    ///
    /// ``` other: QtC.KTextEditor__StyleOptionAnnotationItem ```
    pub fn New2(other: ?*anyopaque) QtC.KTextEditor__StyleOptionAnnotationItem {
        return qtc.KTextEditor__StyleOptionAnnotationItem_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-styleoptionannotationitem.html#wrappedLine-var)
    ///
    /// ``` self: QtC.KTextEditor__StyleOptionAnnotationItem ```
    pub fn WrappedLine(self: ?*anyopaque) i32 {
        return qtc.KTextEditor__StyleOptionAnnotationItem_WrappedLine(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-styleoptionannotationitem.html#wrappedLine-var)
    ///
    /// ``` self: QtC.KTextEditor__StyleOptionAnnotationItem, wrappedLine: i32 ```
    pub fn SetWrappedLine(self: ?*anyopaque, wrappedLine: i32) void {
        qtc.KTextEditor__StyleOptionAnnotationItem_SetWrappedLine(@ptrCast(self), @intCast(wrappedLine));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-styleoptionannotationitem.html#wrappedLineCount-var)
    ///
    /// ``` self: QtC.KTextEditor__StyleOptionAnnotationItem ```
    pub fn WrappedLineCount(self: ?*anyopaque) i32 {
        return qtc.KTextEditor__StyleOptionAnnotationItem_WrappedLineCount(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-styleoptionannotationitem.html#wrappedLineCount-var)
    ///
    /// ``` self: QtC.KTextEditor__StyleOptionAnnotationItem, wrappedLineCount: i32 ```
    pub fn SetWrappedLineCount(self: ?*anyopaque, wrappedLineCount: i32) void {
        qtc.KTextEditor__StyleOptionAnnotationItem_SetWrappedLineCount(@ptrCast(self), @intCast(wrappedLineCount));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-styleoptionannotationitem.html#visibleWrappedLineInGroup-var)
    ///
    /// ``` self: QtC.KTextEditor__StyleOptionAnnotationItem ```
    pub fn VisibleWrappedLineInGroup(self: ?*anyopaque) i32 {
        return qtc.KTextEditor__StyleOptionAnnotationItem_VisibleWrappedLineInGroup(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-styleoptionannotationitem.html#visibleWrappedLineInGroup-var)
    ///
    /// ``` self: QtC.KTextEditor__StyleOptionAnnotationItem, visibleWrappedLineInGroup: i32 ```
    pub fn SetVisibleWrappedLineInGroup(self: ?*anyopaque, visibleWrappedLineInGroup: i32) void {
        qtc.KTextEditor__StyleOptionAnnotationItem_SetVisibleWrappedLineInGroup(@ptrCast(self), @intCast(visibleWrappedLineInGroup));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-styleoptionannotationitem.html#view-var)
    ///
    /// ``` self: QtC.KTextEditor__StyleOptionAnnotationItem ```
    pub fn View(self: ?*anyopaque) QtC.KTextEditor__View {
        return qtc.KTextEditor__StyleOptionAnnotationItem_View(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-styleoptionannotationitem.html#view-var)
    ///
    /// ``` self: QtC.KTextEditor__StyleOptionAnnotationItem, view: QtC.KTextEditor__View ```
    pub fn SetView(self: ?*anyopaque, view: ?*anyopaque) void {
        qtc.KTextEditor__StyleOptionAnnotationItem_SetView(@ptrCast(self), @ptrCast(view));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-styleoptionannotationitem.html#decorationSize-var)
    ///
    /// ``` self: QtC.KTextEditor__StyleOptionAnnotationItem ```
    pub fn DecorationSize(self: ?*anyopaque) QtC.QSize {
        return qtc.KTextEditor__StyleOptionAnnotationItem_DecorationSize(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-styleoptionannotationitem.html#decorationSize-var)
    ///
    /// ``` self: QtC.KTextEditor__StyleOptionAnnotationItem, decorationSize: QtC.QSize ```
    pub fn SetDecorationSize(self: ?*anyopaque, decorationSize: QtC.QSize) void {
        qtc.KTextEditor__StyleOptionAnnotationItem_SetDecorationSize(@ptrCast(self), @ptrCast(decorationSize));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-styleoptionannotationitem.html#contentFontMetrics-var)
    ///
    /// ``` self: QtC.KTextEditor__StyleOptionAnnotationItem ```
    pub fn ContentFontMetrics(self: ?*anyopaque) QtC.QFontMetricsF {
        return qtc.KTextEditor__StyleOptionAnnotationItem_ContentFontMetrics(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-styleoptionannotationitem.html#contentFontMetrics-var)
    ///
    /// ``` self: QtC.KTextEditor__StyleOptionAnnotationItem, contentFontMetrics: QtC.QFontMetricsF ```
    pub fn SetContentFontMetrics(self: ?*anyopaque, contentFontMetrics: QtC.QFontMetricsF) void {
        qtc.KTextEditor__StyleOptionAnnotationItem_SetContentFontMetrics(@ptrCast(self), @ptrCast(contentFontMetrics));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-styleoptionannotationitem.html#annotationItemGroupingPosition-var)
    ///
    /// ``` self: QtC.KTextEditor__StyleOptionAnnotationItem ```
    ///
    /// Returns: ``` flag of abstractannotationitemdelegate_enums.AnnotationItemGroupPosition ```
    pub fn AnnotationItemGroupingPosition(self: ?*anyopaque) i32 {
        return qtc.KTextEditor__StyleOptionAnnotationItem_AnnotationItemGroupingPosition(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-styleoptionannotationitem.html#annotationItemGroupingPosition-var)
    ///
    /// ``` self: QtC.KTextEditor__StyleOptionAnnotationItem, annotationItemGroupingPosition: flag of abstractannotationitemdelegate_enums.AnnotationItemGroupPosition ```
    pub fn SetAnnotationItemGroupingPosition(self: ?*anyopaque, annotationItemGroupingPosition: i32) void {
        qtc.KTextEditor__StyleOptionAnnotationItem_SetAnnotationItemGroupingPosition(@ptrCast(self), @intCast(annotationItemGroupingPosition));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-styleoptionannotationitem.html#operator-eq)
    ///
    /// ``` self: QtC.KTextEditor__StyleOptionAnnotationItem, param1: QtC.KTextEditor__StyleOptionAnnotationItem ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KTextEditor__StyleOptionAnnotationItem_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ``` self: QtC.KTextEditor__StyleOptionAnnotationItem ```
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ``` self: QtC.KTextEditor__StyleOptionAnnotationItem, version: i32 ```
    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self), @intCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ``` self: QtC.KTextEditor__StyleOptionAnnotationItem ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ``` self: QtC.KTextEditor__StyleOptionAnnotationItem, type: i32 ```
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self), @intCast(_type));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ``` self: QtC.KTextEditor__StyleOptionAnnotationItem ```
    ///
    /// Returns: ``` flag of qstyle_enums.StateFlag ```
    pub fn State(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_State(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ``` self: QtC.KTextEditor__StyleOptionAnnotationItem, state: flag of qstyle_enums.StateFlag ```
    pub fn SetState(self: ?*anyopaque, state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ``` self: QtC.KTextEditor__StyleOptionAnnotationItem ```
    ///
    /// Returns: ``` qnamespace_enums.LayoutDirection ```
    pub fn Direction(self: ?*anyopaque) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ``` self: QtC.KTextEditor__StyleOptionAnnotationItem, direction: qnamespace_enums.LayoutDirection ```
    pub fn SetDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ``` self: QtC.KTextEditor__StyleOptionAnnotationItem ```
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QStyleOption_Rect(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ``` self: QtC.KTextEditor__StyleOptionAnnotationItem, rect: QtC.QRect ```
    pub fn SetRect(self: ?*anyopaque, rect: QtC.QRect) void {
        qtc.QStyleOption_SetRect(@ptrCast(self), @ptrCast(rect));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ``` self: QtC.KTextEditor__StyleOptionAnnotationItem ```
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QStyleOption_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ``` self: QtC.KTextEditor__StyleOptionAnnotationItem, fontMetrics: QtC.QFontMetrics ```
    pub fn SetFontMetrics(self: ?*anyopaque, fontMetrics: QtC.QFontMetrics) void {
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self), @ptrCast(fontMetrics));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ``` self: QtC.KTextEditor__StyleOptionAnnotationItem ```
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QStyleOption_Palette(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ``` self: QtC.KTextEditor__StyleOptionAnnotationItem, palette: QtC.QPalette ```
    pub fn SetPalette(self: ?*anyopaque, palette: QtC.QPalette) void {
        qtc.QStyleOption_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ``` self: QtC.KTextEditor__StyleOptionAnnotationItem ```
    pub fn StyleObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QStyleOption_StyleObject(@ptrCast(self));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ``` self: QtC.KTextEditor__StyleOptionAnnotationItem, styleObject: QtC.QObject ```
    pub fn SetStyleObject(self: ?*anyopaque, styleObject: ?*anyopaque) void {
        qtc.QStyleOption_SetStyleObject(@ptrCast(self), @ptrCast(styleObject));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ``` self: QtC.KTextEditor__StyleOptionAnnotationItem, w: QtC.QWidget ```
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KTextEditor__StyleOptionAnnotationItem ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KTextEditor__StyleOptionAnnotationItem_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/ktexteditor-abstractannotationitemdelegate.html
pub const ktexteditor__abstractannotationitemdelegate = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.KTextEditor__AbstractAnnotationItemDelegate ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KTextEditor__AbstractAnnotationItemDelegate_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.KTextEditor__AbstractAnnotationItemDelegate, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KTextEditor__AbstractAnnotationItemDelegate_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.KTextEditor__AbstractAnnotationItemDelegate, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KTextEditor__AbstractAnnotationItemDelegate_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.KTextEditor__AbstractAnnotationItemDelegate_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor::abstractannotationitemdelegate.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-abstractannotationitemdelegate.html#paint)
    ///
    /// ``` self: QtC.KTextEditor__AbstractAnnotationItemDelegate, painter: QtC.QPainter, option: QtC.KTextEditor__StyleOptionAnnotationItem, model: QtC.KTextEditor__AnnotationModel, line: i32 ```
    pub fn Paint(self: ?*anyopaque, painter: ?*anyopaque, option: ?*anyopaque, model: ?*anyopaque, line: i32) void {
        qtc.KTextEditor__AbstractAnnotationItemDelegate_Paint(@ptrCast(self), @ptrCast(painter), @ptrCast(option), @ptrCast(model), @intCast(line));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-abstractannotationitemdelegate.html#sizeHint)
    ///
    /// ``` self: QtC.KTextEditor__AbstractAnnotationItemDelegate, option: QtC.KTextEditor__StyleOptionAnnotationItem, model: QtC.KTextEditor__AnnotationModel, line: i32 ```
    pub fn SizeHint(self: ?*anyopaque, option: ?*anyopaque, model: ?*anyopaque, line: i32) QtC.QSize {
        return qtc.KTextEditor__AbstractAnnotationItemDelegate_SizeHint(@ptrCast(self), @ptrCast(option), @ptrCast(model), @intCast(line));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-abstractannotationitemdelegate.html#helpEvent)
    ///
    /// ``` self: QtC.KTextEditor__AbstractAnnotationItemDelegate, event: QtC.QHelpEvent, view: QtC.KTextEditor__View, option: QtC.KTextEditor__StyleOptionAnnotationItem, model: QtC.KTextEditor__AnnotationModel, line: i32 ```
    pub fn HelpEvent(self: ?*anyopaque, event: ?*anyopaque, view: ?*anyopaque, option: ?*anyopaque, model: ?*anyopaque, line: i32) bool {
        return qtc.KTextEditor__AbstractAnnotationItemDelegate_HelpEvent(@ptrCast(self), @ptrCast(event), @ptrCast(view), @ptrCast(option), @ptrCast(model), @intCast(line));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-abstractannotationitemdelegate.html#hideTooltip)
    ///
    /// ``` self: QtC.KTextEditor__AbstractAnnotationItemDelegate, view: QtC.KTextEditor__View ```
    pub fn HideTooltip(self: ?*anyopaque, view: ?*anyopaque) void {
        qtc.KTextEditor__AbstractAnnotationItemDelegate_HideTooltip(@ptrCast(self), @ptrCast(view));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-abstractannotationitemdelegate.html#sizeHintChanged)
    ///
    /// ``` self: QtC.KTextEditor__AbstractAnnotationItemDelegate, model: QtC.KTextEditor__AnnotationModel, line: i32 ```
    pub fn SizeHintChanged(self: ?*anyopaque, model: ?*anyopaque, line: i32) void {
        qtc.KTextEditor__AbstractAnnotationItemDelegate_SizeHintChanged(@ptrCast(self), @ptrCast(model), @intCast(line));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-abstractannotationitemdelegate.html#sizeHintChanged)
    ///
    /// ``` self: QtC.KTextEditor__AbstractAnnotationItemDelegate, callback: *const fn (self: QtC.KTextEditor__AbstractAnnotationItemDelegate, model: QtC.KTextEditor__AnnotationModel, line: i32) callconv(.c) void ```
    pub fn OnSizeHintChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.KTextEditor__AbstractAnnotationItemDelegate_Connect_SizeHintChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KTextEditor__AbstractAnnotationItemDelegate_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor::abstractannotationitemdelegate.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KTextEditor__AbstractAnnotationItemDelegate_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor::abstractannotationitemdelegate.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ``` self: QtC.KTextEditor__AbstractAnnotationItemDelegate, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ``` self: QtC.KTextEditor__AbstractAnnotationItemDelegate, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.KTextEditor__AbstractAnnotationItemDelegate, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor::abstractannotationitemdelegate.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.KTextEditor__AbstractAnnotationItemDelegate, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.KTextEditor__AbstractAnnotationItemDelegate ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.KTextEditor__AbstractAnnotationItemDelegate ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.KTextEditor__AbstractAnnotationItemDelegate ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.KTextEditor__AbstractAnnotationItemDelegate ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.KTextEditor__AbstractAnnotationItemDelegate, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.KTextEditor__AbstractAnnotationItemDelegate ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KTextEditor__AbstractAnnotationItemDelegate, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KTextEditor__AbstractAnnotationItemDelegate, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KTextEditor__AbstractAnnotationItemDelegate, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KTextEditor__AbstractAnnotationItemDelegate, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.KTextEditor__AbstractAnnotationItemDelegate, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("ktexteditor::abstractannotationitemdelegate.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.KTextEditor__AbstractAnnotationItemDelegate, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.KTextEditor__AbstractAnnotationItemDelegate, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.KTextEditor__AbstractAnnotationItemDelegate, obj: QtC.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.KTextEditor__AbstractAnnotationItemDelegate, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, member: QtC.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: QtC.QMetaObject__Connection ```
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.KTextEditor__AbstractAnnotationItemDelegate ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.KTextEditor__AbstractAnnotationItemDelegate ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.KTextEditor__AbstractAnnotationItemDelegate, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.KTextEditor__AbstractAnnotationItemDelegate, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.KTextEditor__AbstractAnnotationItemDelegate, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("ktexteditor::abstractannotationitemdelegate.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("ktexteditor::abstractannotationitemdelegate.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KTextEditor__AbstractAnnotationItemDelegate ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KTextEditor__AbstractAnnotationItemDelegate ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KTextEditor__AbstractAnnotationItemDelegate ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KTextEditor__AbstractAnnotationItemDelegate, callback: *const fn (self: QtC.KTextEditor__AbstractAnnotationItemDelegate) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.KTextEditor__AbstractAnnotationItemDelegate ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.KTextEditor__AbstractAnnotationItemDelegate, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.KTextEditor__AbstractAnnotationItemDelegate ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KTextEditor__AbstractAnnotationItemDelegate, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KTextEditor__AbstractAnnotationItemDelegate, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.KTextEditor__AbstractAnnotationItemDelegate, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KTextEditor__AbstractAnnotationItemDelegate, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KTextEditor__AbstractAnnotationItemDelegate, callback: *const fn (self: QtC.KTextEditor__AbstractAnnotationItemDelegate, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KTextEditor__AbstractAnnotationItemDelegate, callback: *const fn (self: QtC.KTextEditor__AbstractAnnotationItemDelegate, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KTextEditor__AbstractAnnotationItemDelegate ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KTextEditor__AbstractAnnotationItemDelegate_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/abstractannotationitemdelegate.html#types
pub const enums = struct {
    pub const StyleOptionType = enum {
        pub const Type: i32 = 0;
    };

    pub const StyleOptionVersion = enum {
        pub const Version: i32 = 1;
    };

    pub const AnnotationItemGroupPosition = enum {
        pub const InvalidGroupPosition: i32 = 0;
        pub const InGroup: i32 = 1;
        pub const GroupBegin: i32 = 2;
        pub const GroupEnd: i32 = 4;
    };
};
