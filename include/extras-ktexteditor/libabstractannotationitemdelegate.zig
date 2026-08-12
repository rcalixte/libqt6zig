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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KTextEditor::StyleOptionAnnotationItem object in C++ memory
    ///
    pub fn new() KTextEditor__StyleOptionAnnotationItem {
        return .{ .ptr = qtc.KTextEditor__StyleOptionAnnotationItem_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KTextEditor::StyleOptionAnnotationItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KTextEditor__StyleOptionAnnotationItem `
    ///
    pub fn new2(other: anytype) KTextEditor__StyleOptionAnnotationItem {
        comptime _ = @TypeOf(other)._is_KTextEditor__StyleOptionAnnotationItem;
        return .{ .ptr = qtc.KTextEditor__StyleOptionAnnotationItem_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `wrappedLine` instead
    ///
    pub const WrappedLine = wrappedLine;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-styleoptionannotationitem.html#wrappedLine-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    pub fn wrappedLine(self: KTextEditor__StyleOptionAnnotationItem) i32 {
        return qtc.KTextEditor__StyleOptionAnnotationItem_WrappedLine(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWrappedLine` instead
    ///
    pub const SetWrappedLine = setWrappedLine;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-styleoptionannotationitem.html#wrappedLine-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    /// ` _wrappedLine: i32 `
    ///
    pub fn setWrappedLine(self: KTextEditor__StyleOptionAnnotationItem, _wrappedLine: i32) void {
        qtc.KTextEditor__StyleOptionAnnotationItem_SetWrappedLine(@ptrCast(self.ptr), @bitCast(_wrappedLine));
    }

    /// ### DEPRECATED: Use `wrappedLineCount` instead
    ///
    pub const WrappedLineCount = wrappedLineCount;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-styleoptionannotationitem.html#wrappedLineCount-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    pub fn wrappedLineCount(self: KTextEditor__StyleOptionAnnotationItem) i32 {
        return qtc.KTextEditor__StyleOptionAnnotationItem_WrappedLineCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWrappedLineCount` instead
    ///
    pub const SetWrappedLineCount = setWrappedLineCount;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-styleoptionannotationitem.html#wrappedLineCount-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    /// ` _wrappedLineCount: i32 `
    ///
    pub fn setWrappedLineCount(self: KTextEditor__StyleOptionAnnotationItem, _wrappedLineCount: i32) void {
        qtc.KTextEditor__StyleOptionAnnotationItem_SetWrappedLineCount(@ptrCast(self.ptr), @bitCast(_wrappedLineCount));
    }

    /// ### DEPRECATED: Use `visibleWrappedLineInGroup` instead
    ///
    pub const VisibleWrappedLineInGroup = visibleWrappedLineInGroup;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-styleoptionannotationitem.html#visibleWrappedLineInGroup-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    pub fn visibleWrappedLineInGroup(self: KTextEditor__StyleOptionAnnotationItem) i32 {
        return qtc.KTextEditor__StyleOptionAnnotationItem_VisibleWrappedLineInGroup(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVisibleWrappedLineInGroup` instead
    ///
    pub const SetVisibleWrappedLineInGroup = setVisibleWrappedLineInGroup;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-styleoptionannotationitem.html#visibleWrappedLineInGroup-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    /// ` _visibleWrappedLineInGroup: i32 `
    ///
    pub fn setVisibleWrappedLineInGroup(self: KTextEditor__StyleOptionAnnotationItem, _visibleWrappedLineInGroup: i32) void {
        qtc.KTextEditor__StyleOptionAnnotationItem_SetVisibleWrappedLineInGroup(@ptrCast(self.ptr), @bitCast(_visibleWrappedLineInGroup));
    }

    /// ### DEPRECATED: Use `view` instead
    ///
    pub const View = view;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-styleoptionannotationitem.html#view-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    pub fn view(self: KTextEditor__StyleOptionAnnotationItem) KTextEditor__View {
        return .{ .ptr = qtc.KTextEditor__StyleOptionAnnotationItem_View(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setView` instead
    ///
    pub const SetView = setView;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-styleoptionannotationitem.html#view-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    /// ` _view: KTextEditor__View `
    ///
    pub fn setView(self: KTextEditor__StyleOptionAnnotationItem, _view: anytype) void {
        comptime _ = @TypeOf(_view)._is_KTextEditor__View;
        qtc.KTextEditor__StyleOptionAnnotationItem_SetView(@ptrCast(self.ptr), @ptrCast(_view.ptr));
    }

    /// ### DEPRECATED: Use `decorationSize` instead
    ///
    pub const DecorationSize = decorationSize;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-styleoptionannotationitem.html#decorationSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    pub fn decorationSize(self: KTextEditor__StyleOptionAnnotationItem) QSize {
        return .{ .ptr = qtc.KTextEditor__StyleOptionAnnotationItem_DecorationSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setDecorationSize` instead
    ///
    pub const SetDecorationSize = setDecorationSize;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-styleoptionannotationitem.html#decorationSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    /// ` _decorationSize: QSize `
    ///
    pub fn setDecorationSize(self: KTextEditor__StyleOptionAnnotationItem, _decorationSize: anytype) void {
        comptime _ = @TypeOf(_decorationSize)._is_QSize;
        qtc.KTextEditor__StyleOptionAnnotationItem_SetDecorationSize(@ptrCast(self.ptr), @ptrCast(_decorationSize.ptr));
    }

    /// ### DEPRECATED: Use `contentFontMetrics` instead
    ///
    pub const ContentFontMetrics = contentFontMetrics;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-styleoptionannotationitem.html#contentFontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    pub fn contentFontMetrics(self: KTextEditor__StyleOptionAnnotationItem) QFontMetricsF {
        return .{ .ptr = qtc.KTextEditor__StyleOptionAnnotationItem_ContentFontMetrics(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setContentFontMetrics` instead
    ///
    pub const SetContentFontMetrics = setContentFontMetrics;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-styleoptionannotationitem.html#contentFontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    /// ` _contentFontMetrics: QFontMetricsF `
    ///
    pub fn setContentFontMetrics(self: KTextEditor__StyleOptionAnnotationItem, _contentFontMetrics: anytype) void {
        comptime _ = @TypeOf(_contentFontMetrics)._is_QFontMetricsF;
        qtc.KTextEditor__StyleOptionAnnotationItem_SetContentFontMetrics(@ptrCast(self.ptr), @ptrCast(_contentFontMetrics.ptr));
    }

    /// ### DEPRECATED: Use `annotationItemGroupingPosition` instead
    ///
    pub const AnnotationItemGroupingPosition = annotationItemGroupingPosition;

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
    pub fn annotationItemGroupingPosition(self: KTextEditor__StyleOptionAnnotationItem) i32 {
        return qtc.KTextEditor__StyleOptionAnnotationItem_AnnotationItemGroupingPosition(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAnnotationItemGroupingPosition` instead
    ///
    pub const SetAnnotationItemGroupingPosition = setAnnotationItemGroupingPosition;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-styleoptionannotationitem.html#annotationItemGroupingPosition-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    /// ` _annotationItemGroupingPosition: flag of abstractannotationitemdelegate_enums.AnnotationItemGroupPosition `
    ///
    pub fn setAnnotationItemGroupingPosition(self: KTextEditor__StyleOptionAnnotationItem, _annotationItemGroupingPosition: i32) void {
        qtc.KTextEditor__StyleOptionAnnotationItem_SetAnnotationItemGroupingPosition(@ptrCast(self.ptr), @bitCast(_annotationItemGroupingPosition));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-styleoptionannotationitem.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    /// ` param1: KTextEditor__StyleOptionAnnotationItem `
    ///
    pub fn operatorAssign(self: KTextEditor__StyleOptionAnnotationItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KTextEditor__StyleOptionAnnotationItem;
        qtc.KTextEditor__StyleOptionAnnotationItem_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `version` instead
    ///
    pub const Version = version;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    pub fn version(self: KTextEditor__StyleOptionAnnotationItem) i32 {
        return qtc.QStyleOption_Version(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVersion` instead
    ///
    pub const SetVersion = setVersion;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    /// ` _version: i32 `
    ///
    pub fn setVersion(self: KTextEditor__StyleOptionAnnotationItem, _version: i32) void {
        qtc.QStyleOption_SetVersion(@ptrCast(self.ptr), @bitCast(_version));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    pub fn type0(self: KTextEditor__StyleOptionAnnotationItem) i32 {
        return qtc.QStyleOption_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setType` instead
    ///
    pub const SetType = setType;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    /// ` _type: i32 `
    ///
    pub fn setType(self: KTextEditor__StyleOptionAnnotationItem, _type: i32) void {
        qtc.QStyleOption_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

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
    pub fn state(self: KTextEditor__StyleOptionAnnotationItem) i32 {
        return qtc.QStyleOption_State(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setState` instead
    ///
    pub const SetState = setState;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    /// ` _state: flag of qstyle_enums.StateFlag `
    ///
    pub fn setState(self: KTextEditor__StyleOptionAnnotationItem, _state: i32) void {
        qtc.QStyleOption_SetState(@ptrCast(self.ptr), @bitCast(_state));
    }

    /// ### DEPRECATED: Use `direction` instead
    ///
    pub const Direction = direction;

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
    pub fn direction(self: KTextEditor__StyleOptionAnnotationItem) i32 {
        return qtc.QStyleOption_Direction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDirection` instead
    ///
    pub const SetDirection = setDirection;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    /// ` _direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn setDirection(self: KTextEditor__StyleOptionAnnotationItem, _direction: i32) void {
        qtc.QStyleOption_SetDirection(@ptrCast(self.ptr), @bitCast(_direction));
    }

    /// ### DEPRECATED: Use `rect` instead
    ///
    pub const Rect = rect;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    pub fn rect(self: KTextEditor__StyleOptionAnnotationItem) QRect {
        return .{ .ptr = qtc.QStyleOption_Rect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRect` instead
    ///
    pub const SetRect = setRect;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    /// ` _rect: QRect `
    ///
    pub fn setRect(self: KTextEditor__StyleOptionAnnotationItem, _rect: anytype) void {
        comptime _ = @TypeOf(_rect)._is_QRect;
        qtc.QStyleOption_SetRect(@ptrCast(self.ptr), @ptrCast(_rect.ptr));
    }

    /// ### DEPRECATED: Use `fontMetrics` instead
    ///
    pub const FontMetrics = fontMetrics;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    pub fn fontMetrics(self: KTextEditor__StyleOptionAnnotationItem) QFontMetrics {
        return .{ .ptr = qtc.QStyleOption_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFontMetrics` instead
    ///
    pub const SetFontMetrics = setFontMetrics;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    /// ` _fontMetrics: QFontMetrics `
    ///
    pub fn setFontMetrics(self: KTextEditor__StyleOptionAnnotationItem, _fontMetrics: anytype) void {
        comptime _ = @TypeOf(_fontMetrics)._is_QFontMetrics;
        qtc.QStyleOption_SetFontMetrics(@ptrCast(self.ptr), @ptrCast(_fontMetrics.ptr));
    }

    /// ### DEPRECATED: Use `palette` instead
    ///
    pub const Palette = palette;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    pub fn palette(self: KTextEditor__StyleOptionAnnotationItem) QPalette {
        return .{ .ptr = qtc.QStyleOption_Palette(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPalette` instead
    ///
    pub const SetPalette = setPalette;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    /// ` _palette: QPalette `
    ///
    pub fn setPalette(self: KTextEditor__StyleOptionAnnotationItem, _palette: anytype) void {
        comptime _ = @TypeOf(_palette)._is_QPalette;
        qtc.QStyleOption_SetPalette(@ptrCast(self.ptr), @ptrCast(_palette.ptr));
    }

    /// ### DEPRECATED: Use `styleObject` instead
    ///
    pub const StyleObject = styleObject;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    pub fn styleObject(self: KTextEditor__StyleOptionAnnotationItem) QObject {
        return .{ .ptr = qtc.QStyleOption_StyleObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setStyleObject` instead
    ///
    pub const SetStyleObject = setStyleObject;

    /// Inherited from QStyleOption
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    /// ` _styleObject: QObject `
    ///
    pub fn setStyleObject(self: KTextEditor__StyleOptionAnnotationItem, _styleObject: anytype) void {
        comptime _ = @TypeOf(_styleObject)._is_QObject;
        qtc.QStyleOption_SetStyleObject(@ptrCast(self.ptr), @ptrCast(_styleObject.ptr));
    }

    /// ### DEPRECATED: Use `initFrom` instead
    ///
    pub const InitFrom = initFrom;

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
    pub fn initFrom(self: KTextEditor__StyleOptionAnnotationItem, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QStyleOption_InitFrom(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KTextEditor__StyleOptionAnnotationItem `
    ///
    pub fn delete(self: KTextEditor__StyleOptionAnnotationItem) void {
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

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    pub fn metaObject(self: KTextEditor__AbstractAnnotationItemDelegate) QMetaObject {
        return .{ .ptr = qtc.KTextEditor__AbstractAnnotationItemDelegate_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KTextEditor__AbstractAnnotationItemDelegate, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KTextEditor__AbstractAnnotationItemDelegate_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: KTextEditor__AbstractAnnotationItemDelegate, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KTextEditor__AbstractAnnotationItemDelegate_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__AbstractAnnotationItemDelegate.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `paint` instead
    ///
    pub const Paint = paint;

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
    pub fn paint(self: KTextEditor__AbstractAnnotationItemDelegate, painter: anytype, option: anytype, model: anytype, line: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(option)._is_KTextEditor__StyleOptionAnnotationItem;
        comptime _ = @TypeOf(model)._is_KTextEditor__AnnotationModel;
        qtc.KTextEditor__AbstractAnnotationItemDelegate_Paint(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(option.ptr), @ptrCast(model.ptr), @bitCast(line));
    }

    /// ### DEPRECATED: Use `sizeHint` instead
    ///
    pub const SizeHint = sizeHint;

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
    pub fn sizeHint(self: KTextEditor__AbstractAnnotationItemDelegate, option: anytype, model: anytype, line: i32) QSize {
        comptime _ = @TypeOf(option)._is_KTextEditor__StyleOptionAnnotationItem;
        comptime _ = @TypeOf(model)._is_KTextEditor__AnnotationModel;
        return .{ .ptr = qtc.KTextEditor__AbstractAnnotationItemDelegate_SizeHint(@ptrCast(self.ptr), @ptrCast(option.ptr), @ptrCast(model.ptr), @bitCast(line)) };
    }

    /// ### DEPRECATED: Use `helpEvent` instead
    ///
    pub const HelpEvent = helpEvent;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-abstractannotationitemdelegate.html#helpEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    /// ` _event: QHelpEvent `
    ///
    /// ` _view: KTextEditor__View `
    ///
    /// ` option: KTextEditor__StyleOptionAnnotationItem `
    ///
    /// ` model: KTextEditor__AnnotationModel `
    ///
    /// ` line: i32 `
    ///
    pub fn helpEvent(self: KTextEditor__AbstractAnnotationItemDelegate, _event: anytype, _view: anytype, option: anytype, model: anytype, line: i32) bool {
        comptime _ = @TypeOf(_event)._is_QHelpEvent;
        comptime _ = @TypeOf(_view)._is_KTextEditor__View;
        comptime _ = @TypeOf(option)._is_KTextEditor__StyleOptionAnnotationItem;
        comptime _ = @TypeOf(model)._is_KTextEditor__AnnotationModel;
        return qtc.KTextEditor__AbstractAnnotationItemDelegate_HelpEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr), @ptrCast(_view.ptr), @ptrCast(option.ptr), @ptrCast(model.ptr), @bitCast(line));
    }

    /// ### DEPRECATED: Use `hideTooltip` instead
    ///
    pub const HideTooltip = hideTooltip;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-abstractannotationitemdelegate.html#hideTooltip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    /// ` _view: KTextEditor__View `
    ///
    pub fn hideTooltip(self: KTextEditor__AbstractAnnotationItemDelegate, _view: anytype) void {
        comptime _ = @TypeOf(_view)._is_KTextEditor__View;
        qtc.KTextEditor__AbstractAnnotationItemDelegate_HideTooltip(@ptrCast(self.ptr), @ptrCast(_view.ptr));
    }

    /// ### DEPRECATED: Use `sizeHintChanged` instead
    ///
    pub const SizeHintChanged = sizeHintChanged;

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
    pub fn sizeHintChanged(self: KTextEditor__AbstractAnnotationItemDelegate, model: anytype, line: i32) void {
        comptime _ = @TypeOf(model)._is_KTextEditor__AnnotationModel;
        qtc.KTextEditor__AbstractAnnotationItemDelegate_SizeHintChanged(@ptrCast(self.ptr), @ptrCast(model.ptr), @bitCast(line));
    }

    /// ### DEPRECATED: Use `onSizeHintChanged` instead
    ///
    pub const OnSizeHintChanged = onSizeHintChanged;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-abstractannotationitemdelegate.html#sizeHintChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    /// ` callback: *const fn (self: KTextEditor__AbstractAnnotationItemDelegate, model: KTextEditor__AnnotationModel, line: i32) callconv(.c) void `
    ///
    pub fn onSizeHintChanged(self: KTextEditor__AbstractAnnotationItemDelegate, callback: *const fn (KTextEditor__AbstractAnnotationItemDelegate, KTextEditor__AnnotationModel, i32) callconv(.c) void) void {
        qtc.KTextEditor__AbstractAnnotationItemDelegate_Connect_SizeHintChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

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
    pub fn tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__AbstractAnnotationItemDelegate.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

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
    pub fn tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__AbstractAnnotationItemDelegate.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: KTextEditor__AbstractAnnotationItemDelegate, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KTextEditor__AbstractAnnotationItemDelegate, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QObject_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `objectName` instead
    ///
    pub const ObjectName = objectName;

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
    pub fn objectName(self: KTextEditor__AbstractAnnotationItemDelegate, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__AbstractAnnotationItemDelegate.objectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setObjectName` instead
    ///
    pub const SetObjectName = setObjectName;

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
    pub fn setObjectName(self: KTextEditor__AbstractAnnotationItemDelegate, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `isWidgetType` instead
    ///
    pub const IsWidgetType = isWidgetType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    pub fn isWidgetType(self: KTextEditor__AbstractAnnotationItemDelegate) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWindowType` instead
    ///
    pub const IsWindowType = isWindowType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    pub fn isWindowType(self: KTextEditor__AbstractAnnotationItemDelegate) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isQuickItemType` instead
    ///
    pub const IsQuickItemType = isQuickItemType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    pub fn isQuickItemType(self: KTextEditor__AbstractAnnotationItemDelegate) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `signalsBlocked` instead
    ///
    pub const SignalsBlocked = signalsBlocked;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    pub fn signalsBlocked(self: KTextEditor__AbstractAnnotationItemDelegate) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `blockSignals` instead
    ///
    pub const BlockSignals = blockSignals;

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
    pub fn blockSignals(self: KTextEditor__AbstractAnnotationItemDelegate, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `thread` instead
    ///
    pub const Thread = thread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    pub fn thread(self: KTextEditor__AbstractAnnotationItemDelegate) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `moveToThread` instead
    ///
    pub const MoveToThread = moveToThread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KTextEditor__AbstractAnnotationItemDelegate, _thread: anytype) bool {
        comptime _ = @TypeOf(_thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(_thread.ptr));
    }

    /// ### DEPRECATED: Use `startTimer` instead
    ///
    pub const StartTimer = startTimer;

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
    pub fn startTimer(self: KTextEditor__AbstractAnnotationItemDelegate, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// ### DEPRECATED: Use `startTimer2` instead
    ///
    pub const StartTimer2 = startTimer2;

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
    pub fn startTimer2(self: KTextEditor__AbstractAnnotationItemDelegate, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// ### DEPRECATED: Use `killTimer` instead
    ///
    pub const KillTimer = killTimer;

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
    pub fn killTimer(self: KTextEditor__AbstractAnnotationItemDelegate, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `killTimer2` instead
    ///
    pub const KillTimer2 = killTimer2;

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
    pub fn killTimer2(self: KTextEditor__AbstractAnnotationItemDelegate, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `children` instead
    ///
    pub const Children = children;

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
    pub fn children(self: KTextEditor__AbstractAnnotationItemDelegate, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KTextEditor__AbstractAnnotationItemDelegate.children: Memory allocation failed");
        const _data_val: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setParent` instead
    ///
    pub const SetParent = setParent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KTextEditor__AbstractAnnotationItemDelegate, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `installEventFilter` instead
    ///
    pub const InstallEventFilter = installEventFilter;

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
    pub fn installEventFilter(self: KTextEditor__AbstractAnnotationItemDelegate, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// ### DEPRECATED: Use `removeEventFilter` instead
    ///
    pub const RemoveEventFilter = removeEventFilter;

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
    pub fn removeEventFilter(self: KTextEditor__AbstractAnnotationItemDelegate, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// ### DEPRECATED: Use `connect` instead
    ///
    pub const Connect = connect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// ### DEPRECATED: Use `connect2` instead
    ///
    pub const Connect2 = connect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn connect2(_sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// ### DEPRECATED: Use `connect3` instead
    ///
    pub const Connect3 = connect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KTextEditor__AbstractAnnotationItemDelegate, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// ### DEPRECATED: Use `disconnect` instead
    ///
    pub const Disconnect = disconnect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect2` instead
    ///
    pub const Disconnect2 = disconnect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn disconnect2(_sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// ### DEPRECATED: Use `disconnect3` instead
    ///
    pub const Disconnect3 = disconnect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    pub fn disconnect3(self: KTextEditor__AbstractAnnotationItemDelegate) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `disconnect4` instead
    ///
    pub const Disconnect4 = disconnect4;

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
    pub fn disconnect4(self: KTextEditor__AbstractAnnotationItemDelegate, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect5` instead
    ///
    pub const Disconnect5 = disconnect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectTree` instead
    ///
    pub const DumpObjectTree = dumpObjectTree;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    pub fn dumpObjectTree(self: KTextEditor__AbstractAnnotationItemDelegate) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectInfo` instead
    ///
    pub const DumpObjectInfo = dumpObjectInfo;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    pub fn dumpObjectInfo(self: KTextEditor__AbstractAnnotationItemDelegate) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

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
    pub fn setProperty(self: KTextEditor__AbstractAnnotationItemDelegate, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

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
    pub fn property(self: KTextEditor__AbstractAnnotationItemDelegate, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// ### DEPRECATED: Use `dynamicPropertyNames` instead
    ///
    pub const DynamicPropertyNames = dynamicPropertyNames;

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
    pub fn dynamicPropertyNames(self: KTextEditor__AbstractAnnotationItemDelegate, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KTextEditor__AbstractAnnotationItemDelegate.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KTextEditor__AbstractAnnotationItemDelegate.dynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `bindingStorage` instead
    ///
    pub const BindingStorage = bindingStorage;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    pub fn bindingStorage(self: KTextEditor__AbstractAnnotationItemDelegate) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `bindingStorage2` instead
    ///
    pub const BindingStorage2 = bindingStorage2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    pub fn bindingStorage2(self: KTextEditor__AbstractAnnotationItemDelegate) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `destroyed` instead
    ///
    pub const Destroyed = destroyed;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    pub fn destroyed(self: KTextEditor__AbstractAnnotationItemDelegate) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed` instead
    ///
    pub const OnDestroyed = onDestroyed;

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
    pub fn onDestroyed(self: KTextEditor__AbstractAnnotationItemDelegate, callback: *const fn (KTextEditor__AbstractAnnotationItemDelegate) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    pub fn parent(self: KTextEditor__AbstractAnnotationItemDelegate) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `inherits` instead
    ///
    pub const Inherits = inherits;

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
    pub fn inherits(self: KTextEditor__AbstractAnnotationItemDelegate, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// ### DEPRECATED: Use `deleteLater` instead
    ///
    pub const DeleteLater = deleteLater;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    pub fn deleteLater(self: KTextEditor__AbstractAnnotationItemDelegate) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startTimer22` instead
    ///
    pub const StartTimer22 = startTimer22;

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
    pub fn startTimer22(self: KTextEditor__AbstractAnnotationItemDelegate, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `startTimer23` instead
    ///
    pub const StartTimer23 = startTimer23;

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
    pub fn startTimer23(self: KTextEditor__AbstractAnnotationItemDelegate, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `connect5` instead
    ///
    pub const Connect5 = connect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn connect5(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// ### DEPRECATED: Use `connect52` instead
    ///
    pub const Connect52 = connect52;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect52(_sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `connect4` instead
    ///
    pub const Connect4 = connect4;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KTextEditor__AbstractAnnotationItemDelegate, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `disconnect1` instead
    ///
    pub const Disconnect1 = disconnect1;

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
    pub fn disconnect1(self: KTextEditor__AbstractAnnotationItemDelegate, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect22` instead
    ///
    pub const Disconnect22 = disconnect22;

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
    pub fn disconnect22(self: KTextEditor__AbstractAnnotationItemDelegate, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect32` instead
    ///
    pub const Disconnect32 = disconnect32;

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
    pub fn disconnect32(self: KTextEditor__AbstractAnnotationItemDelegate, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect23` instead
    ///
    pub const Disconnect23 = disconnect23;

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
    pub fn disconnect23(self: KTextEditor__AbstractAnnotationItemDelegate, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `destroyed1` instead
    ///
    pub const Destroyed1 = destroyed1;

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
    pub fn destroyed1(self: KTextEditor__AbstractAnnotationItemDelegate, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed1` instead
    ///
    pub const OnDestroyed1 = onDestroyed1;

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
    pub fn onDestroyed1(self: KTextEditor__AbstractAnnotationItemDelegate, callback: *const fn (KTextEditor__AbstractAnnotationItemDelegate, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onObjectNameChanged` instead
    ///
    pub const OnObjectNameChanged = onObjectNameChanged;

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
    pub fn onObjectNameChanged(self: KTextEditor__AbstractAnnotationItemDelegate, callback: *const fn (KTextEditor__AbstractAnnotationItemDelegate, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KTextEditor__AbstractAnnotationItemDelegate `
    ///
    pub fn delete(self: KTextEditor__AbstractAnnotationItemDelegate) void {
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
