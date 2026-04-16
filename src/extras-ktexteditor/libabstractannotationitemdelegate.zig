const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KTextEditor__AnnotationModel = @import("libqt6").KTextEditor__AnnotationModel;
const KTextEditor__View = @import("libqt6").KTextEditor__View;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QEvent = @import("libqt6").QEvent;
const QFontMetrics = @import("libqt6").QFontMetrics;
const QFontMetricsF = @import("libqt6").QFontMetricsF;
const QHelpEvent = @import("libqt6").QHelpEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPainter = @import("libqt6").QPainter;
const QPalette = @import("libqt6").QPalette;
const QRect = @import("libqt6").QRect;
const QSize = @import("libqt6").QSize;
const QThread = @import("libqt6").QThread;
const QVariant = @import("libqt6").QVariant;
const QWidget = @import("libqt6").QWidget;
const abstractannotationitemdelegate_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qstyle_enums = @import("../libqstyle.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/ktexteditor-styleoptionannotationitem.html)
pub const KTextEditor__StyleOptionAnnotationItem = extern struct {
    /// ### [Upstream resources](https://api.kde.org/ktexteditor-styleoptionannotationitem.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KTextEditor__StyleOptionAnnotationItem,

    pub const _is_KTextEditor__StyleOptionAnnotationItem = {};
    pub const _is_QStyleOption = {};

    /// New constructs a new KTextEditor::StyleOptionAnnotationItem object.
    ///
    pub fn New() KTextEditor__StyleOptionAnnotationItem {
        return .{ .ptr = qtc.KTextEditor__StyleOptionAnnotationItem_new() };
    }

    /// New2 constructs a new KTextEditor::StyleOptionAnnotationItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KTextEditor__StyleOptionAnnotationItem `
    ///
    pub fn New2(other: anytype) KTextEditor__StyleOptionAnnotationItem {
        comptime _ = @TypeOf(other)._is_KTextEditor__StyleOptionAnnotationItem;
        return .{ .ptr = qtc.KTextEditor__StyleOptionAnnotationItem_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-styleoptionannotationitem.html#wrappedLine-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    pub fn WrappedLine(self: KTextEditor__StyleOptionAnnotationItem) i32 {
        return qtc.KTextEditor__StyleOptionAnnotationItem_WrappedLine(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-styleoptionannotationitem.html#wrappedLine-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    /// ` wrappedLine: i32 `
    ///
    pub fn SetWrappedLine(self: KTextEditor__StyleOptionAnnotationItem, wrappedLine: i32) void {
        qtc.KTextEditor__StyleOptionAnnotationItem_SetWrappedLine(@ptrCast(self.ptr), @bitCast(wrappedLine));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-styleoptionannotationitem.html#wrappedLineCount-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    pub fn WrappedLineCount(self: KTextEditor__StyleOptionAnnotationItem) i32 {
        return qtc.KTextEditor__StyleOptionAnnotationItem_WrappedLineCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-styleoptionannotationitem.html#wrappedLineCount-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    /// ` wrappedLineCount: i32 `
    ///
    pub fn SetWrappedLineCount(self: KTextEditor__StyleOptionAnnotationItem, wrappedLineCount: i32) void {
        qtc.KTextEditor__StyleOptionAnnotationItem_SetWrappedLineCount(@ptrCast(self.ptr), @bitCast(wrappedLineCount));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-styleoptionannotationitem.html#visibleWrappedLineInGroup-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    pub fn VisibleWrappedLineInGroup(self: KTextEditor__StyleOptionAnnotationItem) i32 {
        return qtc.KTextEditor__StyleOptionAnnotationItem_VisibleWrappedLineInGroup(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-styleoptionannotationitem.html#visibleWrappedLineInGroup-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    /// ` visibleWrappedLineInGroup: i32 `
    ///
    pub fn SetVisibleWrappedLineInGroup(self: KTextEditor__StyleOptionAnnotationItem, visibleWrappedLineInGroup: i32) void {
        qtc.KTextEditor__StyleOptionAnnotationItem_SetVisibleWrappedLineInGroup(@ptrCast(self.ptr), @bitCast(visibleWrappedLineInGroup));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-styleoptionannotationitem.html#view-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    pub fn View(self: KTextEditor__StyleOptionAnnotationItem) KTextEditor__View {
        return .{ .ptr = qtc.KTextEditor__StyleOptionAnnotationItem_View(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-styleoptionannotationitem.html#view-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    /// ` view: KTextEditor__View `
    ///
    pub fn SetView(self: KTextEditor__StyleOptionAnnotationItem, view: anytype) void {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        qtc.KTextEditor__StyleOptionAnnotationItem_SetView(@ptrCast(self.ptr), @ptrCast(view.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-styleoptionannotationitem.html#decorationSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    pub fn DecorationSize(self: KTextEditor__StyleOptionAnnotationItem) QSize {
        return .{ .ptr = qtc.KTextEditor__StyleOptionAnnotationItem_DecorationSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-styleoptionannotationitem.html#decorationSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    /// ` decorationSize: QSize `
    ///
    pub fn SetDecorationSize(self: KTextEditor__StyleOptionAnnotationItem, decorationSize: anytype) void {
        comptime _ = @TypeOf(decorationSize)._is_QSize;
        qtc.KTextEditor__StyleOptionAnnotationItem_SetDecorationSize(@ptrCast(self.ptr), @ptrCast(decorationSize.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-styleoptionannotationitem.html#contentFontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    pub fn ContentFontMetrics(self: KTextEditor__StyleOptionAnnotationItem) QFontMetricsF {
        return .{ .ptr = qtc.KTextEditor__StyleOptionAnnotationItem_ContentFontMetrics(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-styleoptionannotationitem.html#contentFontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    /// ` contentFontMetrics: QFontMetricsF `
    ///
    pub fn SetContentFontMetrics(self: KTextEditor__StyleOptionAnnotationItem, contentFontMetrics: anytype) void {
        comptime _ = @TypeOf(contentFontMetrics)._is_QFontMetricsF;
        qtc.KTextEditor__StyleOptionAnnotationItem_SetContentFontMetrics(@ptrCast(self.ptr), @ptrCast(contentFontMetrics.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-styleoptionannotationitem.html#annotationItemGroupingPosition-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of abstractannotationitemdelegate_enums.AnnotationItemGroupPosition `
    ///
    pub fn AnnotationItemGroupingPosition(self: KTextEditor__StyleOptionAnnotationItem) i32 {
        return qtc.KTextEditor__StyleOptionAnnotationItem_AnnotationItemGroupingPosition(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-styleoptionannotationitem.html#annotationItemGroupingPosition-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    /// ` annotationItemGroupingPosition: flag of abstractannotationitemdelegate_enums.AnnotationItemGroupPosition `
    ///
    pub fn SetAnnotationItemGroupingPosition(self: KTextEditor__StyleOptionAnnotationItem, annotationItemGroupingPosition: i32) void {
        qtc.KTextEditor__StyleOptionAnnotationItem_SetAnnotationItemGroupingPosition(@ptrCast(self.ptr), @bitCast(annotationItemGroupingPosition));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-styleoptionannotationitem.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    /// ` param1: KTextEditor__StyleOptionAnnotationItem `
    ///
    pub fn OperatorAssign(self: KTextEditor__StyleOptionAnnotationItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KTextEditor__StyleOptionAnnotationItem;
        qtc.KTextEditor__StyleOptionAnnotationItem_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    pub fn Version(self: KTextEditor__StyleOptionAnnotationItem) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    /// ` version: i32 `
    ///
    pub fn SetVersion(self: KTextEditor__StyleOptionAnnotationItem, version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self.ptr), @bitCast(version));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    pub fn Type(self: KTextEditor__StyleOptionAnnotationItem) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    /// ` type: i32 `
    ///
    pub fn SetType(self: KTextEditor__StyleOptionAnnotationItem, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qstyle_enums.StateFlag `
    ///
    pub fn State(self: KTextEditor__StyleOptionAnnotationItem) i32 {
        return qtc.QStyleOption_State(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    /// ` state: flag of qstyle_enums.StateFlag `
    ///
    pub fn SetState(self: KTextEditor__StyleOptionAnnotationItem, state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn Direction(self: KTextEditor__StyleOptionAnnotationItem) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetDirection(self: KTextEditor__StyleOptionAnnotationItem, direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    pub fn Rect(self: KTextEditor__StyleOptionAnnotationItem) QRect {
        return .{ .ptr = qtc.QStyleOption_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    /// ` rect: QRect `
    ///
    pub fn SetRect(self: KTextEditor__StyleOptionAnnotationItem, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QStyleOption_SetRect(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    pub fn FontMetrics(self: KTextEditor__StyleOptionAnnotationItem) QFontMetrics {
        return .{ .ptr = qtc.QStyleOption_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    /// ` fontMetrics: QFontMetrics `
    ///
    pub fn SetFontMetrics(self: KTextEditor__StyleOptionAnnotationItem, fontMetrics: anytype) void {
        comptime _ = @TypeOf(fontMetrics)._is_QFontMetrics;
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self.ptr), @ptrCast(fontMetrics.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    pub fn Palette(self: KTextEditor__StyleOptionAnnotationItem) QPalette {
        return .{ .ptr = qtc.QStyleOption_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: KTextEditor__StyleOptionAnnotationItem, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QStyleOption_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    pub fn StyleObject(self: KTextEditor__StyleOptionAnnotationItem) QObject {
        return .{ .ptr = qtc.QStyleOption_StyleObject(@ptrCast(self.ptr)) };
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    /// ` styleObject: QObject `
    ///
    pub fn SetStyleObject(self: KTextEditor__StyleOptionAnnotationItem, styleObject: anytype) void {
        comptime _ = @TypeOf(styleObject)._is_QObject;
        qtc.QStyleOption_SetStyleObject(@ptrCast(self.ptr), @ptrCast(styleObject.ptr));
    }

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    /// ` w: QWidget `
    ///
    pub fn InitFrom(self: KTextEditor__StyleOptionAnnotationItem, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QStyleOption_InitFrom(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    pub fn Delete(self: KTextEditor__StyleOptionAnnotationItem) void {
        qtc.KTextEditor__StyleOptionAnnotationItem_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/ktexteditor-abstractannotationitemdelegate.html)
pub const KTextEditor__AbstractAnnotationItemDelegate = extern struct {
    /// ### [Upstream resources](https://api.kde.org/ktexteditor-abstractannotationitemdelegate.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KTextEditor__AbstractAnnotationItemDelegate,

    pub const _is_KTextEditor__AbstractAnnotationItemDelegate = {};
    pub const _is_QObject = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    pub fn MetaObject(self: KTextEditor__AbstractAnnotationItemDelegate) QMetaObject {
        return .{ .ptr = qtc.KTextEditor__AbstractAnnotationItemDelegate_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KTextEditor__AbstractAnnotationItemDelegate, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KTextEditor__AbstractAnnotationItemDelegate_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KTextEditor__AbstractAnnotationItemDelegate, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KTextEditor__AbstractAnnotationItemDelegate_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn Tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__abstractannotationitemdelegate.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-abstractannotationitemdelegate.html#paint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    /// ` painter: QPainter `
    ///
    /// ` option: KTextEditor__StyleOptionAnnotationItem `
    ///
    /// ` model: KTextEditor__AnnotationModel `
    ///
    /// ` line: i32 `
    ///
    pub fn Paint(self: KTextEditor__AbstractAnnotationItemDelegate, painter: anytype, option: anytype, model: anytype, line: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(option)._is_KTextEditor__StyleOptionAnnotationItem;
        comptime _ = @TypeOf(model)._is_KTextEditor__AnnotationModel;
        qtc.KTextEditor__AbstractAnnotationItemDelegate_Paint(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(option.ptr), @ptrCast(model.ptr), @bitCast(line));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-abstractannotationitemdelegate.html#sizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    /// ` option: KTextEditor__StyleOptionAnnotationItem `
    ///
    /// ` model: KTextEditor__AnnotationModel `
    ///
    /// ` line: i32 `
    ///
    pub fn SizeHint(self: KTextEditor__AbstractAnnotationItemDelegate, option: anytype, model: anytype, line: i32) QSize {
        comptime _ = @TypeOf(option)._is_KTextEditor__StyleOptionAnnotationItem;
        comptime _ = @TypeOf(model)._is_KTextEditor__AnnotationModel;
        return .{ .ptr = qtc.KTextEditor__AbstractAnnotationItemDelegate_SizeHint(@ptrCast(self.ptr), @ptrCast(option.ptr), @ptrCast(model.ptr), @bitCast(line)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-abstractannotationitemdelegate.html#helpEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    /// ` event: QHelpEvent `
    ///
    /// ` view: KTextEditor__View `
    ///
    /// ` option: KTextEditor__StyleOptionAnnotationItem `
    ///
    /// ` model: KTextEditor__AnnotationModel `
    ///
    /// ` line: i32 `
    ///
    pub fn HelpEvent(self: KTextEditor__AbstractAnnotationItemDelegate, event: anytype, view: anytype, option: anytype, model: anytype, line: i32) bool {
        comptime _ = @TypeOf(event)._is_QHelpEvent;
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        comptime _ = @TypeOf(option)._is_KTextEditor__StyleOptionAnnotationItem;
        comptime _ = @TypeOf(model)._is_KTextEditor__AnnotationModel;
        return qtc.KTextEditor__AbstractAnnotationItemDelegate_HelpEvent(@ptrCast(self.ptr), @ptrCast(event.ptr), @ptrCast(view.ptr), @ptrCast(option.ptr), @ptrCast(model.ptr), @bitCast(line));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-abstractannotationitemdelegate.html#hideTooltip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    /// ` view: KTextEditor__View `
    ///
    pub fn HideTooltip(self: KTextEditor__AbstractAnnotationItemDelegate, view: anytype) void {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        qtc.KTextEditor__AbstractAnnotationItemDelegate_HideTooltip(@ptrCast(self.ptr), @ptrCast(view.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-abstractannotationitemdelegate.html#sizeHintChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    /// ` model: KTextEditor__AnnotationModel `
    ///
    /// ` line: i32 `
    ///
    pub fn SizeHintChanged(self: KTextEditor__AbstractAnnotationItemDelegate, model: anytype, line: i32) void {
        comptime _ = @TypeOf(model)._is_KTextEditor__AnnotationModel;
        qtc.KTextEditor__AbstractAnnotationItemDelegate_SizeHintChanged(@ptrCast(self.ptr), @ptrCast(model.ptr), @bitCast(line));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-abstractannotationitemdelegate.html#sizeHintChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    /// ` callback: *const fn (self: KTextEditor__AbstractAnnotationItemDelegate, model: KTextEditor__AnnotationModel, line: i32) callconv(.c) void `
    ///
    pub fn OnSizeHintChanged(self: KTextEditor__AbstractAnnotationItemDelegate, callback: *const fn (KTextEditor__AbstractAnnotationItemDelegate, KTextEditor__AnnotationModel, i32) callconv(.c) void) void {
        qtc.KTextEditor__AbstractAnnotationItemDelegate_Connect_SizeHintChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    pub fn Tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__abstractannotationitemdelegate.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    pub fn Tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__abstractannotationitemdelegate.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KTextEditor__AbstractAnnotationItemDelegate, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KTextEditor__AbstractAnnotationItemDelegate, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KTextEditor__AbstractAnnotationItemDelegate, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__abstractannotationitemdelegate.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KTextEditor__AbstractAnnotationItemDelegate, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    pub fn IsWidgetType(self: KTextEditor__AbstractAnnotationItemDelegate) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    pub fn IsWindowType(self: KTextEditor__AbstractAnnotationItemDelegate) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    pub fn IsQuickItemType(self: KTextEditor__AbstractAnnotationItemDelegate) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    pub fn SignalsBlocked(self: KTextEditor__AbstractAnnotationItemDelegate) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KTextEditor__AbstractAnnotationItemDelegate, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    pub fn Thread(self: KTextEditor__AbstractAnnotationItemDelegate) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KTextEditor__AbstractAnnotationItemDelegate, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KTextEditor__AbstractAnnotationItemDelegate, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KTextEditor__AbstractAnnotationItemDelegate, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KTextEditor__AbstractAnnotationItemDelegate, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KTextEditor__AbstractAnnotationItemDelegate, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KTextEditor__AbstractAnnotationItemDelegate, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("ktexteditor__abstractannotationitemdelegate.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KTextEditor__AbstractAnnotationItemDelegate, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KTextEditor__AbstractAnnotationItemDelegate, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KTextEditor__AbstractAnnotationItemDelegate, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn Connect2(sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KTextEditor__AbstractAnnotationItemDelegate, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn Disconnect2(sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    pub fn Disconnect3(self: KTextEditor__AbstractAnnotationItemDelegate) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KTextEditor__AbstractAnnotationItemDelegate, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    pub fn DumpObjectTree(self: KTextEditor__AbstractAnnotationItemDelegate) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    pub fn DumpObjectInfo(self: KTextEditor__AbstractAnnotationItemDelegate) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KTextEditor__AbstractAnnotationItemDelegate, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KTextEditor__AbstractAnnotationItemDelegate, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KTextEditor__AbstractAnnotationItemDelegate, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("ktexteditor__abstractannotationitemdelegate.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("ktexteditor__abstractannotationitemdelegate.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    pub fn BindingStorage(self: KTextEditor__AbstractAnnotationItemDelegate) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    pub fn BindingStorage2(self: KTextEditor__AbstractAnnotationItemDelegate) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    pub fn Destroyed(self: KTextEditor__AbstractAnnotationItemDelegate) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    /// ` callback: *const fn (self: KTextEditor__AbstractAnnotationItemDelegate) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KTextEditor__AbstractAnnotationItemDelegate, callback: *const fn (KTextEditor__AbstractAnnotationItemDelegate) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    pub fn Parent(self: KTextEditor__AbstractAnnotationItemDelegate) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KTextEditor__AbstractAnnotationItemDelegate, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    pub fn DeleteLater(self: KTextEditor__AbstractAnnotationItemDelegate) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KTextEditor__AbstractAnnotationItemDelegate, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KTextEditor__AbstractAnnotationItemDelegate, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KTextEditor__AbstractAnnotationItemDelegate, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KTextEditor__AbstractAnnotationItemDelegate, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KTextEditor__AbstractAnnotationItemDelegate, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KTextEditor__AbstractAnnotationItemDelegate, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KTextEditor__AbstractAnnotationItemDelegate, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KTextEditor__AbstractAnnotationItemDelegate, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    /// ` callback: *const fn (self: KTextEditor__AbstractAnnotationItemDelegate, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KTextEditor__AbstractAnnotationItemDelegate, callback: *const fn (KTextEditor__AbstractAnnotationItemDelegate, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    /// ` callback: *const fn (self: KTextEditor__AbstractAnnotationItemDelegate, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KTextEditor__AbstractAnnotationItemDelegate, callback: *const fn (KTextEditor__AbstractAnnotationItemDelegate, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    pub fn Delete(self: KTextEditor__AbstractAnnotationItemDelegate) void {
        qtc.KTextEditor__AbstractAnnotationItemDelegate_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/abstractannotationitemdelegate.html#public-types)
pub const enums = struct {
    pub const StyleOptionType = enum(i32) {
        pub const Type: i32 = 0;
    };

    pub const StyleOptionVersion = enum(i32) {
        pub const Version: i32 = 1;
    };

    pub const AnnotationItemGroupPosition = enum(i32) {
        pub const InvalidGroupPosition: i32 = 0;
        pub const InGroup: i32 = 1;
        pub const GroupBegin: i32 = 2;
        pub const GroupEnd: i32 = 4;
    };
};
