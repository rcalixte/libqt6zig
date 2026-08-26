const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAction = @import("libqt6").QAction;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QCloseEvent = @import("libqt6").QCloseEvent;
const QCursor = @import("libqt6").QCursor;
const QEvent = @import("libqt6").QEvent;
const QFocusEvent = @import("libqt6").QFocusEvent;
const QFont = @import("libqt6").QFont;
const QGraphicsEffect = @import("libqt6").QGraphicsEffect;
const QGraphicsItem = @import("libqt6").QGraphicsItem;
const QGraphicsItemGroup = @import("libqt6").QGraphicsItemGroup;
const QGraphicsLayout = @import("libqt6").QGraphicsLayout;
const QGraphicsLayoutItem = @import("libqt6").QGraphicsLayoutItem;
const QGraphicsObject = @import("libqt6").QGraphicsObject;
const QGraphicsScene = @import("libqt6").QGraphicsScene;
const QGraphicsSceneContextMenuEvent = @import("libqt6").QGraphicsSceneContextMenuEvent;
const QGraphicsSceneDragDropEvent = @import("libqt6").QGraphicsSceneDragDropEvent;
const QGraphicsSceneHoverEvent = @import("libqt6").QGraphicsSceneHoverEvent;
const QGraphicsSceneMouseEvent = @import("libqt6").QGraphicsSceneMouseEvent;
const QGraphicsSceneMoveEvent = @import("libqt6").QGraphicsSceneMoveEvent;
const QGraphicsSceneResizeEvent = @import("libqt6").QGraphicsSceneResizeEvent;
const QGraphicsSceneWheelEvent = @import("libqt6").QGraphicsSceneWheelEvent;
const QGraphicsTransform = @import("libqt6").QGraphicsTransform;
const QGraphicsWidget = @import("libqt6").QGraphicsWidget;
const QHideEvent = @import("libqt6").QHideEvent;
const QInputMethodEvent = @import("libqt6").QInputMethodEvent;
const QKeyEvent = @import("libqt6").QKeyEvent;
const QKeySequence = @import("libqt6").QKeySequence;
const QMarginsF = @import("libqt6").QMarginsF;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPainter = @import("libqt6").QPainter;
const QPainterPath = @import("libqt6").QPainterPath;
const QPalette = @import("libqt6").QPalette;
const QPointF = @import("libqt6").QPointF;
const QRectF = @import("libqt6").QRectF;
const QRegion = @import("libqt6").QRegion;
const QShowEvent = @import("libqt6").QShowEvent;
const QSize = @import("libqt6").QSize;
const QSizeF = @import("libqt6").QSizeF;
const QSizePolicy = @import("libqt6").QSizePolicy;
const QStyle = @import("libqt6").QStyle;
const QStyleOption = @import("libqt6").QStyleOption;
const QStyleOptionGraphicsItem = @import("libqt6").QStyleOptionGraphicsItem;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QTransform = @import("libqt6").QTransform;
const QVariant = @import("libqt6").QVariant;
const QWidget = @import("libqt6").QWidget;
const qgraphicsitem_enums = @import("libqgraphicsitem.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const qsizepolicy_enums = @import("libqsizepolicy.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html)
pub const QGraphicsProxyWidget = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QGraphicsProxyWidget,

    pub const _is_QGraphicsProxyWidget = {};
    pub const _is_QGraphicsWidget = {};
    pub const _is_QGraphicsObject = {};
    pub const _is_QObject = {};
    pub const _is_QGraphicsItem = {};
    pub const _is_QGraphicsLayoutItem = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QGraphicsProxyWidget object in C++ memory
    ///
    pub fn new() QGraphicsProxyWidget {
        return .{ .ptr = qtc.QGraphicsProxyWidget_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QGraphicsProxyWidget object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QGraphicsItem `
    ///
    pub fn new2(_parent: anytype) QGraphicsProxyWidget {
        comptime _ = @TypeOf(_parent)._is_QGraphicsItem;
        const _parent_ = if (@hasDecl(@TypeOf(_parent), "asQGraphicsItem")) _parent.asQGraphicsItem() else _parent;

        return .{ .ptr = qtc.QGraphicsProxyWidget_new2(@ptrCast(_parent_.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QGraphicsProxyWidget object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QGraphicsItem `
    ///
    /// ` wFlags: flag of qnamespace_enums.WindowType `
    ///
    pub fn new3(_parent: anytype, wFlags: i32) QGraphicsProxyWidget {
        comptime _ = @TypeOf(_parent)._is_QGraphicsItem;
        const _parent_ = if (@hasDecl(@TypeOf(_parent), "asQGraphicsItem")) _parent.asQGraphicsItem() else _parent;

        return .{ .ptr = qtc.QGraphicsProxyWidget_new3(@ptrCast(_parent_.ptr), @bitCast(wFlags)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn metaObject(self: QGraphicsProxyWidget) QMetaObject {
        return .{ .ptr = qtc.QGraphicsProxyWidget_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMetaObject` instead
    ///
    pub const OnMetaObject = onMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QGraphicsProxyWidget, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QGraphicsProxyWidget_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetaObject` instead
    ///
    pub const SuperMetaObject = superMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn superMetaObject(self: QGraphicsProxyWidget) QMetaObject {
        return .{ .ptr = qtc.QGraphicsProxyWidget_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QGraphicsProxyWidget, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGraphicsProxyWidget_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QGraphicsProxyWidget_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QGraphicsProxyWidget, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGraphicsProxyWidget_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QGraphicsProxyWidget, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGraphicsProxyWidget_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QGraphicsProxyWidget_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QGraphicsProxyWidget, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGraphicsProxyWidget_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGraphicsProxyWidget.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setWidget` instead
    ///
    pub const SetWidget = setWidget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#setWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _widget: QWidget `
    ///
    pub fn setWidget(self: QGraphicsProxyWidget, _widget: anytype) void {
        comptime _ = @TypeOf(_widget)._is_QWidget;
        qtc.QGraphicsProxyWidget_SetWidget(@ptrCast(self.ptr), @ptrCast(_widget.ptr));
    }

    /// ### DEPRECATED: Use `widget` instead
    ///
    pub const Widget = widget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn widget(self: QGraphicsProxyWidget) QWidget {
        return .{ .ptr = qtc.QGraphicsProxyWidget_Widget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `subWidgetRect` instead
    ///
    pub const SubWidgetRect = subWidgetRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#subWidgetRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _widget: QWidget `
    ///
    pub fn subWidgetRect(self: QGraphicsProxyWidget, _widget: anytype) QRectF {
        comptime _ = @TypeOf(_widget)._is_QWidget;
        return .{ .ptr = qtc.QGraphicsProxyWidget_SubWidgetRect(@ptrCast(self.ptr), @ptrCast(_widget.ptr)) };
    }

    /// ### DEPRECATED: Use `setGeometry` instead
    ///
    pub const SetGeometry = setGeometry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _rect: QRectF `
    ///
    pub fn setGeometry(self: QGraphicsProxyWidget, _rect: anytype) void {
        comptime _ = @TypeOf(_rect)._is_QRectF;
        qtc.QGraphicsProxyWidget_SetGeometry(@ptrCast(self.ptr), @ptrCast(_rect.ptr));
    }

    /// ### DEPRECATED: Use `onSetGeometry` instead
    ///
    pub const OnSetGeometry = onSetGeometry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#setGeometry)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, rect: QRectF) callconv(.c) void `
    ///
    pub fn onSetGeometry(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, QRectF) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnSetGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetGeometry` instead
    ///
    pub const SuperSetGeometry = superSetGeometry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#setGeometry)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _rect: QRectF `
    ///
    pub fn superSetGeometry(self: QGraphicsProxyWidget, _rect: anytype) void {
        comptime _ = @TypeOf(_rect)._is_QRectF;
        qtc.QGraphicsProxyWidget_SuperSetGeometry(@ptrCast(self.ptr), @ptrCast(_rect.ptr));
    }

    /// ### DEPRECATED: Use `paint` instead
    ///
    pub const Paint = paint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#paint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` painter: QPainter `
    ///
    /// ` option: QStyleOptionGraphicsItem `
    ///
    /// ` _widget: QWidget `
    ///
    pub fn paint(self: QGraphicsProxyWidget, painter: anytype, option: anytype, _widget: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(option)._is_QStyleOptionGraphicsItem;
        comptime _ = @TypeOf(_widget)._is_QWidget;
        qtc.QGraphicsProxyWidget_Paint(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(option.ptr), @ptrCast(_widget.ptr));
    }

    /// ### DEPRECATED: Use `onPaint` instead
    ///
    pub const OnPaint = onPaint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#paint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, painter: QPainter, option: QStyleOptionGraphicsItem, widget: QWidget) callconv(.c) void `
    ///
    pub fn onPaint(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, QPainter, QStyleOptionGraphicsItem, QWidget) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnPaint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPaint` instead
    ///
    pub const SuperPaint = superPaint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#paint)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` painter: QPainter `
    ///
    /// ` option: QStyleOptionGraphicsItem `
    ///
    /// ` _widget: QWidget `
    ///
    pub fn superPaint(self: QGraphicsProxyWidget, painter: anytype, option: anytype, _widget: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(option)._is_QStyleOptionGraphicsItem;
        comptime _ = @TypeOf(_widget)._is_QWidget;
        qtc.QGraphicsProxyWidget_SuperPaint(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(option.ptr), @ptrCast(_widget.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn type0(self: QGraphicsProxyWidget) i32 {
        return qtc.QGraphicsProxyWidget_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onType` instead
    ///
    pub const OnType = onType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#type)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onType(self: QGraphicsProxyWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.QGraphicsProxyWidget_OnType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superType` instead
    ///
    pub const SuperType = superType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#type)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn superType(self: QGraphicsProxyWidget) i32 {
        return qtc.QGraphicsProxyWidget_SuperType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `createProxyForChildWidget` instead
    ///
    pub const CreateProxyForChildWidget = createProxyForChildWidget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#createProxyForChildWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` child: QWidget `
    ///
    pub fn createProxyForChildWidget(self: QGraphicsProxyWidget, child: anytype) QGraphicsProxyWidget {
        comptime _ = @TypeOf(child)._is_QWidget;
        return .{ .ptr = qtc.QGraphicsProxyWidget_CreateProxyForChildWidget(@ptrCast(self.ptr), @ptrCast(child.ptr)) };
    }

    /// ### DEPRECATED: Use `itemChange` instead
    ///
    pub const ItemChange = itemChange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#itemChange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` change: qgraphicsitem_enums.GraphicsItemChange `
    ///
    /// ` value: QVariant `
    ///
    pub fn itemChange(self: QGraphicsProxyWidget, change: i32, value: anytype) QVariant {
        comptime _ = @TypeOf(value)._is_QVariant;
        return .{ .ptr = qtc.QGraphicsProxyWidget_ItemChange(@ptrCast(self.ptr), @bitCast(change), @ptrCast(value.ptr)) };
    }

    /// ### DEPRECATED: Use `onItemChange` instead
    ///
    pub const OnItemChange = onItemChange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#itemChange)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, change: qgraphicsitem_enums.GraphicsItemChange, value: QVariant) callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onItemChange(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, i32, QVariant) callconv(.c) QVariant) void {
        qtc.QGraphicsProxyWidget_OnItemChange(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superItemChange` instead
    ///
    pub const SuperItemChange = superItemChange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#itemChange)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` change: qgraphicsitem_enums.GraphicsItemChange `
    ///
    /// ` value: QVariant `
    ///
    pub fn superItemChange(self: QGraphicsProxyWidget, change: i32, value: anytype) QVariant {
        comptime _ = @TypeOf(value)._is_QVariant;
        return .{ .ptr = qtc.QGraphicsProxyWidget_SuperItemChange(@ptrCast(self.ptr), @bitCast(change), @ptrCast(value.ptr)) };
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QGraphicsProxyWidget, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QGraphicsProxyWidget_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, QEvent) callconv(.c) bool) void {
        qtc.QGraphicsProxyWidget_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#event)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QGraphicsProxyWidget, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QGraphicsProxyWidget_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` object: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QGraphicsProxyWidget, object: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QGraphicsProxyWidget_EventFilter(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#eventFilter)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, object: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, QObject, QEvent) callconv(.c) bool) void {
        qtc.QGraphicsProxyWidget_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#eventFilter)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` object: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QGraphicsProxyWidget, object: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QGraphicsProxyWidget_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `showEvent` instead
    ///
    pub const ShowEvent = showEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#showEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QShowEvent `
    ///
    pub fn showEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QShowEvent;
        qtc.QGraphicsProxyWidget_ShowEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onShowEvent` instead
    ///
    pub const OnShowEvent = onShowEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#showEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, event: QShowEvent) callconv(.c) void `
    ///
    pub fn onShowEvent(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, QShowEvent) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superShowEvent` instead
    ///
    pub const SuperShowEvent = superShowEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#showEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QShowEvent `
    ///
    pub fn superShowEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QShowEvent;
        qtc.QGraphicsProxyWidget_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `hideEvent` instead
    ///
    pub const HideEvent = hideEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#hideEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QHideEvent `
    ///
    pub fn hideEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QHideEvent;
        qtc.QGraphicsProxyWidget_HideEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onHideEvent` instead
    ///
    pub const OnHideEvent = onHideEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#hideEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, event: QHideEvent) callconv(.c) void `
    ///
    pub fn onHideEvent(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, QHideEvent) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superHideEvent` instead
    ///
    pub const SuperHideEvent = superHideEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#hideEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QHideEvent `
    ///
    pub fn superHideEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QHideEvent;
        qtc.QGraphicsProxyWidget_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `contextMenuEvent` instead
    ///
    pub const ContextMenuEvent = contextMenuEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#contextMenuEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QGraphicsSceneContextMenuEvent `
    ///
    pub fn contextMenuEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneContextMenuEvent;
        qtc.QGraphicsProxyWidget_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onContextMenuEvent` instead
    ///
    pub const OnContextMenuEvent = onContextMenuEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#contextMenuEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, event: QGraphicsSceneContextMenuEvent) callconv(.c) void `
    ///
    pub fn onContextMenuEvent(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, QGraphicsSceneContextMenuEvent) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superContextMenuEvent` instead
    ///
    pub const SuperContextMenuEvent = superContextMenuEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#contextMenuEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QGraphicsSceneContextMenuEvent `
    ///
    pub fn superContextMenuEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneContextMenuEvent;
        qtc.QGraphicsProxyWidget_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `dragEnterEvent` instead
    ///
    pub const DragEnterEvent = dragEnterEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#dragEnterEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QGraphicsSceneDragDropEvent `
    ///
    pub fn dragEnterEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneDragDropEvent;
        qtc.QGraphicsProxyWidget_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onDragEnterEvent` instead
    ///
    pub const OnDragEnterEvent = onDragEnterEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#dragEnterEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, event: QGraphicsSceneDragDropEvent) callconv(.c) void `
    ///
    pub fn onDragEnterEvent(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, QGraphicsSceneDragDropEvent) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDragEnterEvent` instead
    ///
    pub const SuperDragEnterEvent = superDragEnterEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#dragEnterEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QGraphicsSceneDragDropEvent `
    ///
    pub fn superDragEnterEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneDragDropEvent;
        qtc.QGraphicsProxyWidget_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `dragLeaveEvent` instead
    ///
    pub const DragLeaveEvent = dragLeaveEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#dragLeaveEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QGraphicsSceneDragDropEvent `
    ///
    pub fn dragLeaveEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneDragDropEvent;
        qtc.QGraphicsProxyWidget_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onDragLeaveEvent` instead
    ///
    pub const OnDragLeaveEvent = onDragLeaveEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#dragLeaveEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, event: QGraphicsSceneDragDropEvent) callconv(.c) void `
    ///
    pub fn onDragLeaveEvent(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, QGraphicsSceneDragDropEvent) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDragLeaveEvent` instead
    ///
    pub const SuperDragLeaveEvent = superDragLeaveEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#dragLeaveEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QGraphicsSceneDragDropEvent `
    ///
    pub fn superDragLeaveEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneDragDropEvent;
        qtc.QGraphicsProxyWidget_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `dragMoveEvent` instead
    ///
    pub const DragMoveEvent = dragMoveEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#dragMoveEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QGraphicsSceneDragDropEvent `
    ///
    pub fn dragMoveEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneDragDropEvent;
        qtc.QGraphicsProxyWidget_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onDragMoveEvent` instead
    ///
    pub const OnDragMoveEvent = onDragMoveEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#dragMoveEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, event: QGraphicsSceneDragDropEvent) callconv(.c) void `
    ///
    pub fn onDragMoveEvent(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, QGraphicsSceneDragDropEvent) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDragMoveEvent` instead
    ///
    pub const SuperDragMoveEvent = superDragMoveEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#dragMoveEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QGraphicsSceneDragDropEvent `
    ///
    pub fn superDragMoveEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneDragDropEvent;
        qtc.QGraphicsProxyWidget_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `dropEvent` instead
    ///
    pub const DropEvent = dropEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#dropEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QGraphicsSceneDragDropEvent `
    ///
    pub fn dropEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneDragDropEvent;
        qtc.QGraphicsProxyWidget_DropEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onDropEvent` instead
    ///
    pub const OnDropEvent = onDropEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#dropEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, event: QGraphicsSceneDragDropEvent) callconv(.c) void `
    ///
    pub fn onDropEvent(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, QGraphicsSceneDragDropEvent) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDropEvent` instead
    ///
    pub const SuperDropEvent = superDropEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#dropEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QGraphicsSceneDragDropEvent `
    ///
    pub fn superDropEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneDragDropEvent;
        qtc.QGraphicsProxyWidget_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `hoverEnterEvent` instead
    ///
    pub const HoverEnterEvent = hoverEnterEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#hoverEnterEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QGraphicsSceneHoverEvent `
    ///
    pub fn hoverEnterEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneHoverEvent;
        qtc.QGraphicsProxyWidget_HoverEnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onHoverEnterEvent` instead
    ///
    pub const OnHoverEnterEvent = onHoverEnterEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#hoverEnterEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, event: QGraphicsSceneHoverEvent) callconv(.c) void `
    ///
    pub fn onHoverEnterEvent(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, QGraphicsSceneHoverEvent) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnHoverEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superHoverEnterEvent` instead
    ///
    pub const SuperHoverEnterEvent = superHoverEnterEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#hoverEnterEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QGraphicsSceneHoverEvent `
    ///
    pub fn superHoverEnterEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneHoverEvent;
        qtc.QGraphicsProxyWidget_SuperHoverEnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `hoverLeaveEvent` instead
    ///
    pub const HoverLeaveEvent = hoverLeaveEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#hoverLeaveEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QGraphicsSceneHoverEvent `
    ///
    pub fn hoverLeaveEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneHoverEvent;
        qtc.QGraphicsProxyWidget_HoverLeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onHoverLeaveEvent` instead
    ///
    pub const OnHoverLeaveEvent = onHoverLeaveEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#hoverLeaveEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, event: QGraphicsSceneHoverEvent) callconv(.c) void `
    ///
    pub fn onHoverLeaveEvent(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, QGraphicsSceneHoverEvent) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnHoverLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superHoverLeaveEvent` instead
    ///
    pub const SuperHoverLeaveEvent = superHoverLeaveEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#hoverLeaveEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QGraphicsSceneHoverEvent `
    ///
    pub fn superHoverLeaveEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneHoverEvent;
        qtc.QGraphicsProxyWidget_SuperHoverLeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `hoverMoveEvent` instead
    ///
    pub const HoverMoveEvent = hoverMoveEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#hoverMoveEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QGraphicsSceneHoverEvent `
    ///
    pub fn hoverMoveEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneHoverEvent;
        qtc.QGraphicsProxyWidget_HoverMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onHoverMoveEvent` instead
    ///
    pub const OnHoverMoveEvent = onHoverMoveEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#hoverMoveEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, event: QGraphicsSceneHoverEvent) callconv(.c) void `
    ///
    pub fn onHoverMoveEvent(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, QGraphicsSceneHoverEvent) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnHoverMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superHoverMoveEvent` instead
    ///
    pub const SuperHoverMoveEvent = superHoverMoveEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#hoverMoveEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QGraphicsSceneHoverEvent `
    ///
    pub fn superHoverMoveEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneHoverEvent;
        qtc.QGraphicsProxyWidget_SuperHoverMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `grabMouseEvent` instead
    ///
    pub const GrabMouseEvent = grabMouseEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#grabMouseEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QEvent `
    ///
    pub fn grabMouseEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QGraphicsProxyWidget_GrabMouseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onGrabMouseEvent` instead
    ///
    pub const OnGrabMouseEvent = onGrabMouseEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#grabMouseEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, event: QEvent) callconv(.c) void `
    ///
    pub fn onGrabMouseEvent(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, QEvent) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnGrabMouseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superGrabMouseEvent` instead
    ///
    pub const SuperGrabMouseEvent = superGrabMouseEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#grabMouseEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superGrabMouseEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QGraphicsProxyWidget_SuperGrabMouseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `ungrabMouseEvent` instead
    ///
    pub const UngrabMouseEvent = ungrabMouseEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#ungrabMouseEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QEvent `
    ///
    pub fn ungrabMouseEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QGraphicsProxyWidget_UngrabMouseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onUngrabMouseEvent` instead
    ///
    pub const OnUngrabMouseEvent = onUngrabMouseEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#ungrabMouseEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, event: QEvent) callconv(.c) void `
    ///
    pub fn onUngrabMouseEvent(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, QEvent) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnUngrabMouseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUngrabMouseEvent` instead
    ///
    pub const SuperUngrabMouseEvent = superUngrabMouseEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#ungrabMouseEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superUngrabMouseEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QGraphicsProxyWidget_SuperUngrabMouseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `mouseMoveEvent` instead
    ///
    pub const MouseMoveEvent = mouseMoveEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#mouseMoveEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QGraphicsSceneMouseEvent `
    ///
    pub fn mouseMoveEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneMouseEvent;
        qtc.QGraphicsProxyWidget_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMouseMoveEvent` instead
    ///
    pub const OnMouseMoveEvent = onMouseMoveEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#mouseMoveEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, event: QGraphicsSceneMouseEvent) callconv(.c) void `
    ///
    pub fn onMouseMoveEvent(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, QGraphicsSceneMouseEvent) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMouseMoveEvent` instead
    ///
    pub const SuperMouseMoveEvent = superMouseMoveEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#mouseMoveEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QGraphicsSceneMouseEvent `
    ///
    pub fn superMouseMoveEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneMouseEvent;
        qtc.QGraphicsProxyWidget_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `mousePressEvent` instead
    ///
    pub const MousePressEvent = mousePressEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#mousePressEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QGraphicsSceneMouseEvent `
    ///
    pub fn mousePressEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneMouseEvent;
        qtc.QGraphicsProxyWidget_MousePressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMousePressEvent` instead
    ///
    pub const OnMousePressEvent = onMousePressEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#mousePressEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, event: QGraphicsSceneMouseEvent) callconv(.c) void `
    ///
    pub fn onMousePressEvent(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, QGraphicsSceneMouseEvent) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMousePressEvent` instead
    ///
    pub const SuperMousePressEvent = superMousePressEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#mousePressEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QGraphicsSceneMouseEvent `
    ///
    pub fn superMousePressEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneMouseEvent;
        qtc.QGraphicsProxyWidget_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `mouseReleaseEvent` instead
    ///
    pub const MouseReleaseEvent = mouseReleaseEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#mouseReleaseEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QGraphicsSceneMouseEvent `
    ///
    pub fn mouseReleaseEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneMouseEvent;
        qtc.QGraphicsProxyWidget_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMouseReleaseEvent` instead
    ///
    pub const OnMouseReleaseEvent = onMouseReleaseEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#mouseReleaseEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, event: QGraphicsSceneMouseEvent) callconv(.c) void `
    ///
    pub fn onMouseReleaseEvent(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, QGraphicsSceneMouseEvent) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMouseReleaseEvent` instead
    ///
    pub const SuperMouseReleaseEvent = superMouseReleaseEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#mouseReleaseEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QGraphicsSceneMouseEvent `
    ///
    pub fn superMouseReleaseEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneMouseEvent;
        qtc.QGraphicsProxyWidget_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `mouseDoubleClickEvent` instead
    ///
    pub const MouseDoubleClickEvent = mouseDoubleClickEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#mouseDoubleClickEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QGraphicsSceneMouseEvent `
    ///
    pub fn mouseDoubleClickEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneMouseEvent;
        qtc.QGraphicsProxyWidget_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMouseDoubleClickEvent` instead
    ///
    pub const OnMouseDoubleClickEvent = onMouseDoubleClickEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#mouseDoubleClickEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, event: QGraphicsSceneMouseEvent) callconv(.c) void `
    ///
    pub fn onMouseDoubleClickEvent(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, QGraphicsSceneMouseEvent) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMouseDoubleClickEvent` instead
    ///
    pub const SuperMouseDoubleClickEvent = superMouseDoubleClickEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#mouseDoubleClickEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QGraphicsSceneMouseEvent `
    ///
    pub fn superMouseDoubleClickEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneMouseEvent;
        qtc.QGraphicsProxyWidget_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `wheelEvent` instead
    ///
    pub const WheelEvent = wheelEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#wheelEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QGraphicsSceneWheelEvent `
    ///
    pub fn wheelEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneWheelEvent;
        qtc.QGraphicsProxyWidget_WheelEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onWheelEvent` instead
    ///
    pub const OnWheelEvent = onWheelEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#wheelEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, event: QGraphicsSceneWheelEvent) callconv(.c) void `
    ///
    pub fn onWheelEvent(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, QGraphicsSceneWheelEvent) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superWheelEvent` instead
    ///
    pub const SuperWheelEvent = superWheelEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#wheelEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QGraphicsSceneWheelEvent `
    ///
    pub fn superWheelEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneWheelEvent;
        qtc.QGraphicsProxyWidget_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `keyPressEvent` instead
    ///
    pub const KeyPressEvent = keyPressEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#keyPressEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QKeyEvent `
    ///
    pub fn keyPressEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.QGraphicsProxyWidget_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onKeyPressEvent` instead
    ///
    pub const OnKeyPressEvent = onKeyPressEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#keyPressEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn onKeyPressEvent(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, QKeyEvent) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superKeyPressEvent` instead
    ///
    pub const SuperKeyPressEvent = superKeyPressEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#keyPressEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QKeyEvent `
    ///
    pub fn superKeyPressEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.QGraphicsProxyWidget_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `keyReleaseEvent` instead
    ///
    pub const KeyReleaseEvent = keyReleaseEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#keyReleaseEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QKeyEvent `
    ///
    pub fn keyReleaseEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.QGraphicsProxyWidget_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onKeyReleaseEvent` instead
    ///
    pub const OnKeyReleaseEvent = onKeyReleaseEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#keyReleaseEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn onKeyReleaseEvent(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, QKeyEvent) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superKeyReleaseEvent` instead
    ///
    pub const SuperKeyReleaseEvent = superKeyReleaseEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#keyReleaseEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QKeyEvent `
    ///
    pub fn superKeyReleaseEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.QGraphicsProxyWidget_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `focusInEvent` instead
    ///
    pub const FocusInEvent = focusInEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#focusInEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QFocusEvent `
    ///
    pub fn focusInEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QFocusEvent;
        qtc.QGraphicsProxyWidget_FocusInEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onFocusInEvent` instead
    ///
    pub const OnFocusInEvent = onFocusInEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#focusInEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn onFocusInEvent(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, QFocusEvent) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superFocusInEvent` instead
    ///
    pub const SuperFocusInEvent = superFocusInEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#focusInEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QFocusEvent `
    ///
    pub fn superFocusInEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QFocusEvent;
        qtc.QGraphicsProxyWidget_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `focusOutEvent` instead
    ///
    pub const FocusOutEvent = focusOutEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#focusOutEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QFocusEvent `
    ///
    pub fn focusOutEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QFocusEvent;
        qtc.QGraphicsProxyWidget_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onFocusOutEvent` instead
    ///
    pub const OnFocusOutEvent = onFocusOutEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#focusOutEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn onFocusOutEvent(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, QFocusEvent) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superFocusOutEvent` instead
    ///
    pub const SuperFocusOutEvent = superFocusOutEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#focusOutEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QFocusEvent `
    ///
    pub fn superFocusOutEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QFocusEvent;
        qtc.QGraphicsProxyWidget_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `focusNextPrevChild` instead
    ///
    pub const FocusNextPrevChild = focusNextPrevChild;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#focusNextPrevChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` next: bool `
    ///
    pub fn focusNextPrevChild(self: QGraphicsProxyWidget, next: bool) bool {
        return qtc.QGraphicsProxyWidget_FocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// ### DEPRECATED: Use `onFocusNextPrevChild` instead
    ///
    pub const OnFocusNextPrevChild = onFocusNextPrevChild;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#focusNextPrevChild)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, next: bool) callconv(.c) bool `
    ///
    pub fn onFocusNextPrevChild(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, bool) callconv(.c) bool) void {
        qtc.QGraphicsProxyWidget_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superFocusNextPrevChild` instead
    ///
    pub const SuperFocusNextPrevChild = superFocusNextPrevChild;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#focusNextPrevChild)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` next: bool `
    ///
    pub fn superFocusNextPrevChild(self: QGraphicsProxyWidget, next: bool) bool {
        return qtc.QGraphicsProxyWidget_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// ### DEPRECATED: Use `inputMethodQuery` instead
    ///
    pub const InputMethodQuery = inputMethodQuery;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#inputMethodQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    pub fn inputMethodQuery(self: QGraphicsProxyWidget, query: i32) QVariant {
        return .{ .ptr = qtc.QGraphicsProxyWidget_InputMethodQuery(@ptrCast(self.ptr), @bitCast(query)) };
    }

    /// ### DEPRECATED: Use `onInputMethodQuery` instead
    ///
    pub const OnInputMethodQuery = onInputMethodQuery;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#inputMethodQuery)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, query: qnamespace_enums.InputMethodQuery) callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onInputMethodQuery(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, i32) callconv(.c) QVariant) void {
        qtc.QGraphicsProxyWidget_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superInputMethodQuery` instead
    ///
    pub const SuperInputMethodQuery = superInputMethodQuery;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#inputMethodQuery)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    pub fn superInputMethodQuery(self: QGraphicsProxyWidget, query: i32) QVariant {
        return .{ .ptr = qtc.QGraphicsProxyWidget_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(query)) };
    }

    /// ### DEPRECATED: Use `inputMethodEvent` instead
    ///
    pub const InputMethodEvent = inputMethodEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#inputMethodEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QInputMethodEvent `
    ///
    pub fn inputMethodEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QInputMethodEvent;
        qtc.QGraphicsProxyWidget_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onInputMethodEvent` instead
    ///
    pub const OnInputMethodEvent = onInputMethodEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#inputMethodEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, event: QInputMethodEvent) callconv(.c) void `
    ///
    pub fn onInputMethodEvent(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, QInputMethodEvent) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superInputMethodEvent` instead
    ///
    pub const SuperInputMethodEvent = superInputMethodEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#inputMethodEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QInputMethodEvent `
    ///
    pub fn superInputMethodEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QInputMethodEvent;
        qtc.QGraphicsProxyWidget_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `sizeHint` instead
    ///
    pub const SizeHint = sizeHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#sizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` which: qnamespace_enums.SizeHint `
    ///
    /// ` constraint: QSizeF `
    ///
    pub fn sizeHint(self: QGraphicsProxyWidget, which: i32, constraint: anytype) QSizeF {
        comptime _ = @TypeOf(constraint)._is_QSizeF;
        return .{ .ptr = qtc.QGraphicsProxyWidget_SizeHint(@ptrCast(self.ptr), @bitCast(which), @ptrCast(constraint.ptr)) };
    }

    /// ### DEPRECATED: Use `onSizeHint` instead
    ///
    pub const OnSizeHint = onSizeHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#sizeHint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, which: qnamespace_enums.SizeHint, constraint: QSizeF) callconv(.c) QSizeF `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSizeHint(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, i32, QSizeF) callconv(.c) QSizeF) void {
        qtc.QGraphicsProxyWidget_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSizeHint` instead
    ///
    pub const SuperSizeHint = superSizeHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#sizeHint)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` which: qnamespace_enums.SizeHint `
    ///
    /// ` constraint: QSizeF `
    ///
    pub fn superSizeHint(self: QGraphicsProxyWidget, which: i32, constraint: anytype) QSizeF {
        comptime _ = @TypeOf(constraint)._is_QSizeF;
        return .{ .ptr = qtc.QGraphicsProxyWidget_SuperSizeHint(@ptrCast(self.ptr), @bitCast(which), @ptrCast(constraint.ptr)) };
    }

    /// ### DEPRECATED: Use `resizeEvent` instead
    ///
    pub const ResizeEvent = resizeEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#resizeEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QGraphicsSceneResizeEvent `
    ///
    pub fn resizeEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneResizeEvent;
        qtc.QGraphicsProxyWidget_ResizeEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onResizeEvent` instead
    ///
    pub const OnResizeEvent = onResizeEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#resizeEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, event: QGraphicsSceneResizeEvent) callconv(.c) void `
    ///
    pub fn onResizeEvent(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, QGraphicsSceneResizeEvent) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superResizeEvent` instead
    ///
    pub const SuperResizeEvent = superResizeEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#resizeEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QGraphicsSceneResizeEvent `
    ///
    pub fn superResizeEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneResizeEvent;
        qtc.QGraphicsProxyWidget_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `newProxyWidget` instead
    ///
    pub const NewProxyWidget = newProxyWidget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#newProxyWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` param1: QWidget `
    ///
    pub fn newProxyWidget(self: QGraphicsProxyWidget, param1: anytype) QGraphicsProxyWidget {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return .{ .ptr = qtc.QGraphicsProxyWidget_NewProxyWidget(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `onNewProxyWidget` instead
    ///
    pub const OnNewProxyWidget = onNewProxyWidget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#newProxyWidget)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, param1: QWidget) callconv(.c) QGraphicsProxyWidget `
    ///
    pub fn onNewProxyWidget(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, QWidget) callconv(.c) QGraphicsProxyWidget) void {
        qtc.QGraphicsProxyWidget_OnNewProxyWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superNewProxyWidget` instead
    ///
    pub const SuperNewProxyWidget = superNewProxyWidget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#newProxyWidget)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` param1: QWidget `
    ///
    pub fn superNewProxyWidget(self: QGraphicsProxyWidget, param1: anytype) QGraphicsProxyWidget {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return .{ .ptr = qtc.QGraphicsProxyWidget_SuperNewProxyWidget(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGraphicsProxyWidget.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGraphicsProxyWidget.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Upcasts to a QGraphicsLayoutItem object
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn asQGraphicsLayoutItem(self: QGraphicsProxyWidget) QGraphicsLayoutItem {
        return .{ .ptr = qtc.QGraphicsWidget_AsQGraphicsLayoutItem(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsWidget
    ///
    /// Downcasts to a QGraphicsProxyWidget object
    ///
    /// ## Parameter(s):
    ///
    /// ` _qgraphicslayoutitem: QGraphicsLayoutItem `
    ///
    pub fn fromQGraphicsLayoutItem(_qgraphicslayoutitem: anytype) QGraphicsProxyWidget {
        comptime _ = @TypeOf(_qgraphicslayoutitem)._is_QGraphicsLayoutItem;
        return .{ .ptr = @ptrCast(qtc.QGraphicsWidget_FromQGraphicsLayoutItem(@ptrCast(_qgraphicslayoutitem.ptr))) };
    }

    /// ### DEPRECATED: Use `layout` instead
    ///
    pub const Layout = layout;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#layout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn layout(self: QGraphicsProxyWidget) QGraphicsLayout {
        return .{ .ptr = qtc.QGraphicsWidget_Layout(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setLayout` instead
    ///
    pub const SetLayout = setLayout;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _layout: QGraphicsLayout `
    ///
    pub fn setLayout(self: QGraphicsProxyWidget, _layout: anytype) void {
        comptime _ = @TypeOf(_layout)._is_QGraphicsLayout;
        qtc.QGraphicsWidget_SetLayout(@ptrCast(self.ptr), @ptrCast(_layout.ptr));
    }

    /// ### DEPRECATED: Use `adjustSize` instead
    ///
    pub const AdjustSize = adjustSize;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#adjustSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn adjustSize(self: QGraphicsProxyWidget) void {
        qtc.QGraphicsWidget_AdjustSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `layoutDirection` instead
    ///
    pub const LayoutDirection = layoutDirection;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn layoutDirection(self: QGraphicsProxyWidget) i32 {
        return qtc.QGraphicsWidget_LayoutDirection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLayoutDirection` instead
    ///
    pub const SetLayoutDirection = setLayoutDirection;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn setLayoutDirection(self: QGraphicsProxyWidget, direction: i32) void {
        qtc.QGraphicsWidget_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// ### DEPRECATED: Use `unsetLayoutDirection` instead
    ///
    pub const UnsetLayoutDirection = unsetLayoutDirection;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#unsetLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn unsetLayoutDirection(self: QGraphicsProxyWidget) void {
        qtc.QGraphicsWidget_UnsetLayoutDirection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `style` instead
    ///
    pub const Style = style;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn style(self: QGraphicsProxyWidget) QStyle {
        return .{ .ptr = qtc.QGraphicsWidget_Style(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setStyle` instead
    ///
    pub const SetStyle = setStyle;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _style: QStyle `
    ///
    pub fn setStyle(self: QGraphicsProxyWidget, _style: anytype) void {
        comptime _ = @TypeOf(_style)._is_QStyle;
        qtc.QGraphicsWidget_SetStyle(@ptrCast(self.ptr), @ptrCast(_style.ptr));
    }

    /// ### DEPRECATED: Use `font` instead
    ///
    pub const Font = font;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn font(self: QGraphicsProxyWidget) QFont {
        return .{ .ptr = qtc.QGraphicsWidget_Font(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFont` instead
    ///
    pub const SetFont = setFont;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _font: QFont `
    ///
    pub fn setFont(self: QGraphicsProxyWidget, _font: anytype) void {
        comptime _ = @TypeOf(_font)._is_QFont;
        qtc.QGraphicsWidget_SetFont(@ptrCast(self.ptr), @ptrCast(_font.ptr));
    }

    /// ### DEPRECATED: Use `palette` instead
    ///
    pub const Palette = palette;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn palette(self: QGraphicsProxyWidget) QPalette {
        return .{ .ptr = qtc.QGraphicsWidget_Palette(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPalette` instead
    ///
    pub const SetPalette = setPalette;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _palette: QPalette `
    ///
    pub fn setPalette(self: QGraphicsProxyWidget, _palette: anytype) void {
        comptime _ = @TypeOf(_palette)._is_QPalette;
        qtc.QGraphicsWidget_SetPalette(@ptrCast(self.ptr), @ptrCast(_palette.ptr));
    }

    /// ### DEPRECATED: Use `autoFillBackground` instead
    ///
    pub const AutoFillBackground = autoFillBackground;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#autoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn autoFillBackground(self: QGraphicsProxyWidget) bool {
        return qtc.QGraphicsWidget_AutoFillBackground(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutoFillBackground` instead
    ///
    pub const SetAutoFillBackground = setAutoFillBackground;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setAutoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` enabled: bool `
    ///
    pub fn setAutoFillBackground(self: QGraphicsProxyWidget, enabled: bool) void {
        qtc.QGraphicsWidget_SetAutoFillBackground(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `resize` instead
    ///
    pub const Resize = resize;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _size: QSizeF `
    ///
    pub fn resize(self: QGraphicsProxyWidget, _size: anytype) void {
        comptime _ = @TypeOf(_size)._is_QSizeF;
        qtc.QGraphicsWidget_Resize(@ptrCast(self.ptr), @ptrCast(_size.ptr));
    }

    /// ### DEPRECATED: Use `resize2` instead
    ///
    pub const Resize2 = resize2;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn resize2(self: QGraphicsProxyWidget, w: f64, h: f64) void {
        qtc.QGraphicsWidget_Resize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn size(self: QGraphicsProxyWidget) QSizeF {
        return .{ .ptr = qtc.QGraphicsWidget_Size(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setGeometry2` instead
    ///
    pub const SetGeometry2 = setGeometry2;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn setGeometry2(self: QGraphicsProxyWidget, _x: f64, _y: f64, w: f64, h: f64) void {
        qtc.QGraphicsWidget_SetGeometry2(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `rect` instead
    ///
    pub const Rect = rect;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn rect(self: QGraphicsProxyWidget) QRectF {
        return .{ .ptr = qtc.QGraphicsWidget_Rect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setContentsMargins` instead
    ///
    pub const SetContentsMargins = setContentsMargins;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` left: f64 `
    ///
    /// ` top: f64 `
    ///
    /// ` right: f64 `
    ///
    /// ` bottom: f64 `
    ///
    pub fn setContentsMargins(self: QGraphicsProxyWidget, left: f64, top: f64, right: f64, bottom: f64) void {
        qtc.QGraphicsWidget_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// ### DEPRECATED: Use `setContentsMargins2` instead
    ///
    pub const SetContentsMargins2 = setContentsMargins2;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` margins: QMarginsF `
    ///
    pub fn setContentsMargins2(self: QGraphicsProxyWidget, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMarginsF;
        qtc.QGraphicsWidget_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// ### DEPRECATED: Use `setWindowFrameMargins` instead
    ///
    pub const SetWindowFrameMargins = setWindowFrameMargins;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFrameMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` left: f64 `
    ///
    /// ` top: f64 `
    ///
    /// ` right: f64 `
    ///
    /// ` bottom: f64 `
    ///
    pub fn setWindowFrameMargins(self: QGraphicsProxyWidget, left: f64, top: f64, right: f64, bottom: f64) void {
        qtc.QGraphicsWidget_SetWindowFrameMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// ### DEPRECATED: Use `setWindowFrameMargins2` instead
    ///
    pub const SetWindowFrameMargins2 = setWindowFrameMargins2;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFrameMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` margins: QMarginsF `
    ///
    pub fn setWindowFrameMargins2(self: QGraphicsProxyWidget, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMarginsF;
        qtc.QGraphicsWidget_SetWindowFrameMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// ### DEPRECATED: Use `getWindowFrameMargins` instead
    ///
    pub const GetWindowFrameMargins = getWindowFrameMargins;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#getWindowFrameMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` left: *f64 `
    ///
    /// ` top: *f64 `
    ///
    /// ` right: *f64 `
    ///
    /// ` bottom: *f64 `
    ///
    pub fn getWindowFrameMargins(self: QGraphicsProxyWidget, left: *f64, top: *f64, right: *f64, bottom: *f64) void {
        qtc.QGraphicsWidget_GetWindowFrameMargins(@ptrCast(self.ptr), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// ### DEPRECATED: Use `unsetWindowFrameMargins` instead
    ///
    pub const UnsetWindowFrameMargins = unsetWindowFrameMargins;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#unsetWindowFrameMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn unsetWindowFrameMargins(self: QGraphicsProxyWidget) void {
        qtc.QGraphicsWidget_UnsetWindowFrameMargins(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `windowFrameGeometry` instead
    ///
    pub const WindowFrameGeometry = windowFrameGeometry;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn windowFrameGeometry(self: QGraphicsProxyWidget) QRectF {
        return .{ .ptr = qtc.QGraphicsWidget_WindowFrameGeometry(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `windowFrameRect` instead
    ///
    pub const WindowFrameRect = windowFrameRect;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn windowFrameRect(self: QGraphicsProxyWidget) QRectF {
        return .{ .ptr = qtc.QGraphicsWidget_WindowFrameRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `windowFlags` instead
    ///
    pub const WindowFlags = windowFlags;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn windowFlags(self: QGraphicsProxyWidget) i32 {
        return qtc.QGraphicsWidget_WindowFlags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `windowType` instead
    ///
    pub const WindowType = windowType;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn windowType(self: QGraphicsProxyWidget) i32 {
        return qtc.QGraphicsWidget_WindowType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWindowFlags` instead
    ///
    pub const SetWindowFlags = setWindowFlags;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` wFlags: flag of qnamespace_enums.WindowType `
    ///
    pub fn setWindowFlags(self: QGraphicsProxyWidget, wFlags: i32) void {
        qtc.QGraphicsWidget_SetWindowFlags(@ptrCast(self.ptr), @bitCast(wFlags));
    }

    /// ### DEPRECATED: Use `isActiveWindow` instead
    ///
    pub const IsActiveWindow = isActiveWindow;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#isActiveWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn isActiveWindow(self: QGraphicsProxyWidget) bool {
        return qtc.QGraphicsWidget_IsActiveWindow(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWindowTitle` instead
    ///
    pub const SetWindowTitle = setWindowTitle;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` title: []const u8 `
    ///
    pub fn setWindowTitle(self: QGraphicsProxyWidget, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QGraphicsWidget_SetWindowTitle(@ptrCast(self.ptr), title_str);
    }

    /// ### DEPRECATED: Use `windowTitle` instead
    ///
    pub const WindowTitle = windowTitle;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowTitle(self: QGraphicsProxyWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGraphicsWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGraphicsProxyWidget.windowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `focusPolicy` instead
    ///
    pub const FocusPolicy = focusPolicy;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn focusPolicy(self: QGraphicsProxyWidget) i32 {
        return qtc.QGraphicsWidget_FocusPolicy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFocusPolicy` instead
    ///
    pub const SetFocusPolicy = setFocusPolicy;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setFocusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn setFocusPolicy(self: QGraphicsProxyWidget, policy: i32) void {
        qtc.QGraphicsWidget_SetFocusPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// ### DEPRECATED: Use `setTabOrder` instead
    ///
    pub const SetTabOrder = setTabOrder;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setTabOrder)
    ///
    /// ## Parameter(s):
    ///
    /// ` first: QGraphicsWidget `
    ///
    /// ` second: QGraphicsWidget `
    ///
    pub fn setTabOrder(first: anytype, second: anytype) void {
        comptime _ = @TypeOf(first)._is_QGraphicsWidget;
        comptime _ = @TypeOf(second)._is_QGraphicsWidget;
        qtc.QGraphicsWidget_SetTabOrder(@ptrCast(first.ptr), @ptrCast(second.ptr));
    }

    /// ### DEPRECATED: Use `focusWidget` instead
    ///
    pub const FocusWidget = focusWidget;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn focusWidget(self: QGraphicsProxyWidget) QGraphicsWidget {
        return .{ .ptr = qtc.QGraphicsWidget_FocusWidget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `grabShortcut` instead
    ///
    pub const GrabShortcut = grabShortcut;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` sequence: QKeySequence `
    ///
    pub fn grabShortcut(self: QGraphicsProxyWidget, sequence: anytype) i32 {
        comptime _ = @TypeOf(sequence)._is_QKeySequence;
        return qtc.QGraphicsWidget_GrabShortcut(@ptrCast(self.ptr), @ptrCast(sequence.ptr));
    }

    /// ### DEPRECATED: Use `releaseShortcut` instead
    ///
    pub const ReleaseShortcut = releaseShortcut;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#releaseShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` id: i32 `
    ///
    pub fn releaseShortcut(self: QGraphicsProxyWidget, id: i32) void {
        qtc.QGraphicsWidget_ReleaseShortcut(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `setShortcutEnabled` instead
    ///
    pub const SetShortcutEnabled = setShortcutEnabled;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` id: i32 `
    ///
    pub fn setShortcutEnabled(self: QGraphicsProxyWidget, id: i32) void {
        qtc.QGraphicsWidget_SetShortcutEnabled(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `setShortcutAutoRepeat` instead
    ///
    pub const SetShortcutAutoRepeat = setShortcutAutoRepeat;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` id: i32 `
    ///
    pub fn setShortcutAutoRepeat(self: QGraphicsProxyWidget, id: i32) void {
        qtc.QGraphicsWidget_SetShortcutAutoRepeat(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `addAction` instead
    ///
    pub const AddAction = addAction;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` action: QAction `
    ///
    pub fn addAction(self: QGraphicsProxyWidget, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QGraphicsWidget_AddAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// ### DEPRECATED: Use `addActions` instead
    ///
    pub const AddActions = addActions;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#addActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _actions: []QAction `
    ///
    pub fn addActions(self: QGraphicsProxyWidget, _actions: []QAction) void {
        const actions_list = qtc.libqt_list{
            .len = _actions.len,
            .data = @ptrCast(_actions.ptr),
        };
        qtc.QGraphicsWidget_AddActions(@ptrCast(self.ptr), actions_list);
    }

    /// ### DEPRECATED: Use `insertActions` instead
    ///
    pub const InsertActions = insertActions;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#insertActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` before: QAction `
    ///
    /// ` _actions: []QAction `
    ///
    pub fn insertActions(self: QGraphicsProxyWidget, before: anytype, _actions: []QAction) void {
        comptime _ = @TypeOf(before)._is_QAction;
        const actions_list = qtc.libqt_list{
            .len = _actions.len,
            .data = @ptrCast(_actions.ptr),
        };
        qtc.QGraphicsWidget_InsertActions(@ptrCast(self.ptr), @ptrCast(before.ptr), actions_list);
    }

    /// ### DEPRECATED: Use `insertAction` instead
    ///
    pub const InsertAction = insertAction;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#insertAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn insertAction(self: QGraphicsProxyWidget, before: anytype, action: anytype) void {
        comptime _ = @TypeOf(before)._is_QAction;
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QGraphicsWidget_InsertAction(@ptrCast(self.ptr), @ptrCast(before.ptr), @ptrCast(action.ptr));
    }

    /// ### DEPRECATED: Use `removeAction` instead
    ///
    pub const RemoveAction = removeAction;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#removeAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` action: QAction `
    ///
    pub fn removeAction(self: QGraphicsProxyWidget, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QGraphicsWidget_RemoveAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// ### DEPRECATED: Use `actions` instead
    ///
    pub const Actions = actions;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn actions(self: QGraphicsProxyWidget, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QGraphicsWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("QGraphicsProxyWidget.actions: Memory allocation failed");
        const _data_val: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setAttribute` instead
    ///
    pub const SetAttribute = setAttribute;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` attribute: qnamespace_enums.WidgetAttribute `
    ///
    pub fn setAttribute(self: QGraphicsProxyWidget, attribute: i32) void {
        qtc.QGraphicsWidget_SetAttribute(@ptrCast(self.ptr), @bitCast(attribute));
    }

    /// ### DEPRECATED: Use `testAttribute` instead
    ///
    pub const TestAttribute = testAttribute;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#testAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` attribute: qnamespace_enums.WidgetAttribute `
    ///
    pub fn testAttribute(self: QGraphicsProxyWidget, attribute: i32) bool {
        return qtc.QGraphicsWidget_TestAttribute(@ptrCast(self.ptr), @bitCast(attribute));
    }

    /// ### DEPRECATED: Use `geometryChanged` instead
    ///
    pub const GeometryChanged = geometryChanged;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#geometryChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn geometryChanged(self: QGraphicsProxyWidget) void {
        qtc.QGraphicsWidget_GeometryChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onGeometryChanged` instead
    ///
    pub const OnGeometryChanged = onGeometryChanged;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#geometryChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget) callconv(.c) void `
    ///
    pub fn onGeometryChanged(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget) callconv(.c) void) void {
        qtc.QGraphicsWidget_Connect_GeometryChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `layoutChanged` instead
    ///
    pub const LayoutChanged = layoutChanged;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn layoutChanged(self: QGraphicsProxyWidget) void {
        qtc.QGraphicsWidget_LayoutChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onLayoutChanged` instead
    ///
    pub const OnLayoutChanged = onLayoutChanged;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget) callconv(.c) void `
    ///
    pub fn onLayoutChanged(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget) callconv(.c) void) void {
        qtc.QGraphicsWidget_Connect_LayoutChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `close` instead
    ///
    pub const Close = close;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn close(self: QGraphicsProxyWidget) bool {
        return qtc.QGraphicsWidget_Close(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `grabShortcut2` instead
    ///
    pub const GrabShortcut2 = grabShortcut2;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` sequence: QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn grabShortcut2(self: QGraphicsProxyWidget, sequence: anytype, context: i32) i32 {
        comptime _ = @TypeOf(sequence)._is_QKeySequence;
        return qtc.QGraphicsWidget_GrabShortcut2(@ptrCast(self.ptr), @ptrCast(sequence.ptr), @bitCast(context));
    }

    /// ### DEPRECATED: Use `setShortcutEnabled2` instead
    ///
    pub const SetShortcutEnabled2 = setShortcutEnabled2;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` id: i32 `
    ///
    /// ` enabled: bool `
    ///
    pub fn setShortcutEnabled2(self: QGraphicsProxyWidget, id: i32, enabled: bool) void {
        qtc.QGraphicsWidget_SetShortcutEnabled2(@ptrCast(self.ptr), @bitCast(id), enabled);
    }

    /// ### DEPRECATED: Use `setShortcutAutoRepeat2` instead
    ///
    pub const SetShortcutAutoRepeat2 = setShortcutAutoRepeat2;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` id: i32 `
    ///
    /// ` enabled: bool `
    ///
    pub fn setShortcutAutoRepeat2(self: QGraphicsProxyWidget, id: i32, enabled: bool) void {
        qtc.QGraphicsWidget_SetShortcutAutoRepeat2(@ptrCast(self.ptr), @bitCast(id), enabled);
    }

    /// ### DEPRECATED: Use `setAttribute2` instead
    ///
    pub const SetAttribute2 = setAttribute2;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` attribute: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn setAttribute2(self: QGraphicsProxyWidget, attribute: i32, on: bool) void {
        qtc.QGraphicsWidget_SetAttribute2(@ptrCast(self.ptr), @bitCast(attribute), on);
    }

    /// Inherited from QGraphicsObject
    ///
    /// Upcasts to a QGraphicsItem object
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn asQGraphicsItem(self: QGraphicsProxyWidget) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsObject_AsQGraphicsItem(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsObject
    ///
    /// Downcasts to a QGraphicsProxyWidget object
    ///
    /// ## Parameter(s):
    ///
    /// ` _qgraphicsitem: QGraphicsItem `
    ///
    pub fn fromQGraphicsItem(_qgraphicsitem: anytype) QGraphicsProxyWidget {
        comptime _ = @TypeOf(_qgraphicsitem)._is_QGraphicsItem;
        return .{ .ptr = @ptrCast(qtc.QGraphicsObject_FromQGraphicsItem(@ptrCast(_qgraphicsitem.ptr))) };
    }

    /// ### DEPRECATED: Use `grabGesture` instead
    ///
    pub const GrabGesture = grabGesture;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn grabGesture(self: QGraphicsProxyWidget, typeVal: i32) void {
        qtc.QGraphicsObject_GrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `ungrabGesture` instead
    ///
    pub const UngrabGesture = ungrabGesture;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#ungrabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn ungrabGesture(self: QGraphicsProxyWidget, typeVal: i32) void {
        qtc.QGraphicsObject_UngrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `parentChanged` instead
    ///
    pub const ParentChanged = parentChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#parentChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn parentChanged(self: QGraphicsProxyWidget) void {
        qtc.QGraphicsObject_ParentChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onParentChanged` instead
    ///
    pub const OnParentChanged = onParentChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#parentChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget) callconv(.c) void `
    ///
    pub fn onParentChanged(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_ParentChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `opacityChanged` instead
    ///
    pub const OpacityChanged = opacityChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#opacityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn opacityChanged(self: QGraphicsProxyWidget) void {
        qtc.QGraphicsObject_OpacityChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onOpacityChanged` instead
    ///
    pub const OnOpacityChanged = onOpacityChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#opacityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget) callconv(.c) void `
    ///
    pub fn onOpacityChanged(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_OpacityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `visibleChanged` instead
    ///
    pub const VisibleChanged = visibleChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#visibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn visibleChanged(self: QGraphicsProxyWidget) void {
        qtc.QGraphicsObject_VisibleChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onVisibleChanged` instead
    ///
    pub const OnVisibleChanged = onVisibleChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#visibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget) callconv(.c) void `
    ///
    pub fn onVisibleChanged(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_VisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `enabledChanged` instead
    ///
    pub const EnabledChanged = enabledChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#enabledChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn enabledChanged(self: QGraphicsProxyWidget) void {
        qtc.QGraphicsObject_EnabledChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onEnabledChanged` instead
    ///
    pub const OnEnabledChanged = onEnabledChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#enabledChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget) callconv(.c) void `
    ///
    pub fn onEnabledChanged(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_EnabledChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `xChanged` instead
    ///
    pub const XChanged = xChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#xChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn xChanged(self: QGraphicsProxyWidget) void {
        qtc.QGraphicsObject_XChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onXChanged` instead
    ///
    pub const OnXChanged = onXChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#xChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget) callconv(.c) void `
    ///
    pub fn onXChanged(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_XChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `yChanged` instead
    ///
    pub const YChanged = yChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#yChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn yChanged(self: QGraphicsProxyWidget) void {
        qtc.QGraphicsObject_YChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onYChanged` instead
    ///
    pub const OnYChanged = onYChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#yChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget) callconv(.c) void `
    ///
    pub fn onYChanged(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_YChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `zChanged` instead
    ///
    pub const ZChanged = zChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#zChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn zChanged(self: QGraphicsProxyWidget) void {
        qtc.QGraphicsObject_ZChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onZChanged` instead
    ///
    pub const OnZChanged = onZChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#zChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget) callconv(.c) void `
    ///
    pub fn onZChanged(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_ZChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rotationChanged` instead
    ///
    pub const RotationChanged = rotationChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#rotationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn rotationChanged(self: QGraphicsProxyWidget) void {
        qtc.QGraphicsObject_RotationChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onRotationChanged` instead
    ///
    pub const OnRotationChanged = onRotationChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#rotationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget) callconv(.c) void `
    ///
    pub fn onRotationChanged(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_RotationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `scaleChanged` instead
    ///
    pub const ScaleChanged = scaleChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#scaleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn scaleChanged(self: QGraphicsProxyWidget) void {
        qtc.QGraphicsObject_ScaleChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onScaleChanged` instead
    ///
    pub const OnScaleChanged = onScaleChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#scaleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget) callconv(.c) void `
    ///
    pub fn onScaleChanged(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_ScaleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `childrenChanged` instead
    ///
    pub const ChildrenChanged = childrenChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#childrenChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn childrenChanged(self: QGraphicsProxyWidget) void {
        qtc.QGraphicsObject_ChildrenChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onChildrenChanged` instead
    ///
    pub const OnChildrenChanged = onChildrenChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#childrenChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget) callconv(.c) void `
    ///
    pub fn onChildrenChanged(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_ChildrenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `widthChanged` instead
    ///
    pub const WidthChanged = widthChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#widthChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn widthChanged(self: QGraphicsProxyWidget) void {
        qtc.QGraphicsObject_WidthChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onWidthChanged` instead
    ///
    pub const OnWidthChanged = onWidthChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#widthChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget) callconv(.c) void `
    ///
    pub fn onWidthChanged(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_WidthChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `heightChanged` instead
    ///
    pub const HeightChanged = heightChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#heightChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn heightChanged(self: QGraphicsProxyWidget) void {
        qtc.QGraphicsObject_HeightChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onHeightChanged` instead
    ///
    pub const OnHeightChanged = onHeightChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#heightChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget) callconv(.c) void `
    ///
    pub fn onHeightChanged(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_HeightChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `grabGesture2` instead
    ///
    pub const GrabGesture2 = grabGesture2;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` _flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn grabGesture2(self: QGraphicsProxyWidget, typeVal: i32, _flags: i32) void {
        qtc.QGraphicsObject_GrabGesture2(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(_flags));
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
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QGraphicsProxyWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGraphicsProxyWidget.objectName: Memory allocation failed");
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
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QGraphicsProxyWidget, name: []const u8) void {
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
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn isWidgetType(self: QGraphicsProxyWidget) bool {
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
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn isWindowType(self: QGraphicsProxyWidget) bool {
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
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn isQuickItemType(self: QGraphicsProxyWidget) bool {
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
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn signalsBlocked(self: QGraphicsProxyWidget) bool {
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
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QGraphicsProxyWidget, b: bool) bool {
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
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn thread(self: QGraphicsProxyWidget) QThread {
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
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QGraphicsProxyWidget, _thread: anytype) bool {
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
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QGraphicsProxyWidget, interval: i32) i32 {
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
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QGraphicsProxyWidget, time: i64) i32 {
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
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QGraphicsProxyWidget, id: i32) void {
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
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QGraphicsProxyWidget, id: i32) void {
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
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QGraphicsProxyWidget, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QGraphicsProxyWidget.children: Memory allocation failed");
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
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QGraphicsProxyWidget, _parent: anytype) void {
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
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QGraphicsProxyWidget, filterObj: anytype) void {
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
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QGraphicsProxyWidget, obj: anytype) void {
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
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QGraphicsProxyWidget, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn disconnect3(self: QGraphicsProxyWidget) bool {
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
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QGraphicsProxyWidget, receiver: anytype) bool {
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
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn dumpObjectTree(self: QGraphicsProxyWidget) void {
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
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn dumpObjectInfo(self: QGraphicsProxyWidget) void {
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
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QGraphicsProxyWidget, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QGraphicsProxyWidget, name: [:0]const u8) QVariant {
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
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QGraphicsProxyWidget, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QGraphicsProxyWidget.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QGraphicsProxyWidget.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn bindingStorage(self: QGraphicsProxyWidget) QBindingStorage {
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
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn bindingStorage2(self: QGraphicsProxyWidget) QBindingStorage {
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
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn destroyed(self: QGraphicsProxyWidget) void {
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
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget) callconv(.c) void) void {
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
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn parent(self: QGraphicsProxyWidget) QObject {
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
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QGraphicsProxyWidget, classname: [:0]const u8) bool {
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
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn deleteLater(self: QGraphicsProxyWidget) void {
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
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QGraphicsProxyWidget, interval: i32, timerType: i32) i32 {
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
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QGraphicsProxyWidget, time: i64, timerType: i32) i32 {
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
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QGraphicsProxyWidget, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QGraphicsProxyWidget, signal: [:0]const u8) bool {
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
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QGraphicsProxyWidget, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QGraphicsProxyWidget, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QGraphicsProxyWidget, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QGraphicsProxyWidget, param1: anytype) void {
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
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `scene` instead
    ///
    pub const Scene = scene;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn scene(self: QGraphicsProxyWidget) QGraphicsScene {
        return .{ .ptr = qtc.QGraphicsItem_Scene(@ptrCast(self.asQGraphicsItem().ptr)) };
    }

    /// ### DEPRECATED: Use `parentItem` instead
    ///
    pub const ParentItem = parentItem;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#parentItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn parentItem(self: QGraphicsProxyWidget) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsItem_ParentItem(@ptrCast(self.asQGraphicsItem().ptr)) };
    }

    /// ### DEPRECATED: Use `topLevelItem` instead
    ///
    pub const TopLevelItem = topLevelItem;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn topLevelItem(self: QGraphicsProxyWidget) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsItem_TopLevelItem(@ptrCast(self.asQGraphicsItem().ptr)) };
    }

    /// ### DEPRECATED: Use `parentObject` instead
    ///
    pub const ParentObject = parentObject;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#parentObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn parentObject(self: QGraphicsProxyWidget) QGraphicsObject {
        return .{ .ptr = qtc.QGraphicsItem_ParentObject(@ptrCast(self.asQGraphicsItem().ptr)) };
    }

    /// ### DEPRECATED: Use `parentWidget` instead
    ///
    pub const ParentWidget = parentWidget;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#parentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn parentWidget(self: QGraphicsProxyWidget) QGraphicsWidget {
        return .{ .ptr = qtc.QGraphicsItem_ParentWidget(@ptrCast(self.asQGraphicsItem().ptr)) };
    }

    /// ### DEPRECATED: Use `topLevelWidget` instead
    ///
    pub const TopLevelWidget = topLevelWidget;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn topLevelWidget(self: QGraphicsProxyWidget) QGraphicsWidget {
        return .{ .ptr = qtc.QGraphicsItem_TopLevelWidget(@ptrCast(self.asQGraphicsItem().ptr)) };
    }

    /// ### DEPRECATED: Use `window` instead
    ///
    pub const Window = window;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#window)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn window(self: QGraphicsProxyWidget) QGraphicsWidget {
        return .{ .ptr = qtc.QGraphicsItem_Window(@ptrCast(self.asQGraphicsItem().ptr)) };
    }

    /// ### DEPRECATED: Use `panel` instead
    ///
    pub const Panel = panel;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#panel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn panel(self: QGraphicsProxyWidget) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsItem_Panel(@ptrCast(self.asQGraphicsItem().ptr)) };
    }

    /// ### DEPRECATED: Use `setParentItem` instead
    ///
    pub const SetParentItem = setParentItem;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setParentItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _parent: QGraphicsItem `
    ///
    pub fn setParentItem(self: QGraphicsProxyWidget, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QGraphicsItem;
        const _parent_ = if (@hasDecl(@TypeOf(_parent), "asQGraphicsItem")) _parent.asQGraphicsItem() else _parent;
        qtc.QGraphicsItem_SetParentItem(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(_parent_.ptr));
    }

    /// ### DEPRECATED: Use `childItems` instead
    ///
    pub const ChildItems = childItems;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#childItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn childItems(self: QGraphicsProxyWidget, allocator: std.mem.Allocator) []QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsItem_ChildItems(@ptrCast(self.asQGraphicsItem().ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("QGraphicsProxyWidget.childItems: Memory allocation failed");
        const _data_val: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `isWidget` instead
    ///
    pub const IsWidget = isWidget;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn isWidget(self: QGraphicsProxyWidget) bool {
        return qtc.QGraphicsItem_IsWidget(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `isWindow` instead
    ///
    pub const IsWindow = isWindow;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn isWindow(self: QGraphicsProxyWidget) bool {
        return qtc.QGraphicsItem_IsWindow(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `isPanel` instead
    ///
    pub const IsPanel = isPanel;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isPanel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn isPanel(self: QGraphicsProxyWidget) bool {
        return qtc.QGraphicsItem_IsPanel(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `toGraphicsObject` instead
    ///
    pub const ToGraphicsObject = toGraphicsObject;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn toGraphicsObject(self: QGraphicsProxyWidget) QGraphicsObject {
        return .{ .ptr = qtc.QGraphicsItem_ToGraphicsObject(@ptrCast(self.asQGraphicsItem().ptr)) };
    }

    /// ### DEPRECATED: Use `toGraphicsObject2` instead
    ///
    pub const ToGraphicsObject2 = toGraphicsObject2;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn toGraphicsObject2(self: QGraphicsProxyWidget) QGraphicsObject {
        return .{ .ptr = qtc.QGraphicsItem_ToGraphicsObject2(@ptrCast(self.asQGraphicsItem().ptr)) };
    }

    /// ### DEPRECATED: Use `group` instead
    ///
    pub const Group = group;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#group)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn group(self: QGraphicsProxyWidget) QGraphicsItemGroup {
        return .{ .ptr = qtc.QGraphicsItem_Group(@ptrCast(self.asQGraphicsItem().ptr)) };
    }

    /// ### DEPRECATED: Use `setGroup` instead
    ///
    pub const SetGroup = setGroup;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _group: QGraphicsItemGroup `
    ///
    pub fn setGroup(self: QGraphicsProxyWidget, _group: anytype) void {
        comptime _ = @TypeOf(_group)._is_QGraphicsItemGroup;
        qtc.QGraphicsItem_SetGroup(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(_group.ptr));
    }

    /// ### DEPRECATED: Use `flags` instead
    ///
    pub const Flags = flags;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#flags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ## Returns:
    ///
    /// ` flag of qgraphicsitem_enums.GraphicsItemFlag `
    ///
    pub fn flags(self: QGraphicsProxyWidget) i32 {
        return qtc.QGraphicsItem_Flags(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `setFlag` instead
    ///
    pub const SetFlag = setFlag;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` flag: qgraphicsitem_enums.GraphicsItemFlag `
    ///
    pub fn setFlag(self: QGraphicsProxyWidget, flag: i32) void {
        qtc.QGraphicsItem_SetFlag(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(flag));
    }

    /// ### DEPRECATED: Use `setFlags` instead
    ///
    pub const SetFlags = setFlags;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _flags: flag of qgraphicsitem_enums.GraphicsItemFlag `
    ///
    pub fn setFlags(self: QGraphicsProxyWidget, _flags: i32) void {
        qtc.QGraphicsItem_SetFlags(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(_flags));
    }

    /// ### DEPRECATED: Use `cacheMode` instead
    ///
    pub const CacheMode = cacheMode;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#cacheMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ## Returns:
    ///
    /// ` qgraphicsitem_enums.CacheMode `
    ///
    pub fn cacheMode(self: QGraphicsProxyWidget) i32 {
        return qtc.QGraphicsItem_CacheMode(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `setCacheMode` instead
    ///
    pub const SetCacheMode = setCacheMode;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` mode: qgraphicsitem_enums.CacheMode `
    ///
    pub fn setCacheMode(self: QGraphicsProxyWidget, mode: i32) void {
        qtc.QGraphicsItem_SetCacheMode(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `panelModality` instead
    ///
    pub const PanelModality = panelModality;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#panelModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ## Returns:
    ///
    /// ` qgraphicsitem_enums.PanelModality `
    ///
    pub fn panelModality(self: QGraphicsProxyWidget) i32 {
        return qtc.QGraphicsItem_PanelModality(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `setPanelModality` instead
    ///
    pub const SetPanelModality = setPanelModality;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setPanelModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _panelModality: qgraphicsitem_enums.PanelModality `
    ///
    pub fn setPanelModality(self: QGraphicsProxyWidget, _panelModality: i32) void {
        qtc.QGraphicsItem_SetPanelModality(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(_panelModality));
    }

    /// ### DEPRECATED: Use `isBlockedByModalPanel` instead
    ///
    pub const IsBlockedByModalPanel = isBlockedByModalPanel;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isBlockedByModalPanel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn isBlockedByModalPanel(self: QGraphicsProxyWidget) bool {
        return qtc.QGraphicsItem_IsBlockedByModalPanel(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `toolTip` instead
    ///
    pub const ToolTip = toolTip;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#toolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toolTip(self: QGraphicsProxyWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGraphicsItem_ToolTip(@ptrCast(self.asQGraphicsItem().ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGraphicsProxyWidget.toolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setToolTip` instead
    ///
    pub const SetToolTip = setToolTip;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _toolTip: []const u8 `
    ///
    pub fn setToolTip(self: QGraphicsProxyWidget, _toolTip: []const u8) void {
        const toolTip_str = qtc.libqt_string{
            .len = _toolTip.len,
            .data = _toolTip.ptr,
        };
        qtc.QGraphicsItem_SetToolTip(@ptrCast(self.asQGraphicsItem().ptr), toolTip_str);
    }

    /// ### DEPRECATED: Use `cursor` instead
    ///
    pub const Cursor = cursor;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn cursor(self: QGraphicsProxyWidget) QCursor {
        return .{ .ptr = qtc.QGraphicsItem_Cursor(@ptrCast(self.asQGraphicsItem().ptr)) };
    }

    /// ### DEPRECATED: Use `setCursor` instead
    ///
    pub const SetCursor = setCursor;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _cursor: QCursor `
    ///
    pub fn setCursor(self: QGraphicsProxyWidget, _cursor: anytype) void {
        comptime _ = @TypeOf(_cursor)._is_QCursor;
        qtc.QGraphicsItem_SetCursor(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(_cursor.ptr));
    }

    /// ### DEPRECATED: Use `hasCursor` instead
    ///
    pub const HasCursor = hasCursor;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hasCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn hasCursor(self: QGraphicsProxyWidget) bool {
        return qtc.QGraphicsItem_HasCursor(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `unsetCursor` instead
    ///
    pub const UnsetCursor = unsetCursor;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn unsetCursor(self: QGraphicsProxyWidget) void {
        qtc.QGraphicsItem_UnsetCursor(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `isVisible` instead
    ///
    pub const IsVisible = isVisible;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn isVisible(self: QGraphicsProxyWidget) bool {
        return qtc.QGraphicsItem_IsVisible(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `isVisibleTo` instead
    ///
    pub const IsVisibleTo = isVisibleTo;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisibleTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _parent: QGraphicsItem `
    ///
    pub fn isVisibleTo(self: QGraphicsProxyWidget, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QGraphicsItem;
        const _parent_ = if (@hasDecl(@TypeOf(_parent), "asQGraphicsItem")) _parent.asQGraphicsItem() else _parent;
        return qtc.QGraphicsItem_IsVisibleTo(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(_parent_.ptr));
    }

    /// ### DEPRECATED: Use `setVisible` instead
    ///
    pub const SetVisible = setVisible;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` visible: bool `
    ///
    pub fn setVisible(self: QGraphicsProxyWidget, visible: bool) void {
        qtc.QGraphicsItem_SetVisible(@ptrCast(self.asQGraphicsItem().ptr), visible);
    }

    /// ### DEPRECATED: Use `hide` instead
    ///
    pub const Hide = hide;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn hide(self: QGraphicsProxyWidget) void {
        qtc.QGraphicsItem_Hide(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `show` instead
    ///
    pub const Show = show;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn show(self: QGraphicsProxyWidget) void {
        qtc.QGraphicsItem_Show(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `isEnabled` instead
    ///
    pub const IsEnabled = isEnabled;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn isEnabled(self: QGraphicsProxyWidget) bool {
        return qtc.QGraphicsItem_IsEnabled(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `setEnabled` instead
    ///
    pub const SetEnabled = setEnabled;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` enabled: bool `
    ///
    pub fn setEnabled(self: QGraphicsProxyWidget, enabled: bool) void {
        qtc.QGraphicsItem_SetEnabled(@ptrCast(self.asQGraphicsItem().ptr), enabled);
    }

    /// ### DEPRECATED: Use `isSelected` instead
    ///
    pub const IsSelected = isSelected;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn isSelected(self: QGraphicsProxyWidget) bool {
        return qtc.QGraphicsItem_IsSelected(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `setSelected` instead
    ///
    pub const SetSelected = setSelected;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` selected: bool `
    ///
    pub fn setSelected(self: QGraphicsProxyWidget, selected: bool) void {
        qtc.QGraphicsItem_SetSelected(@ptrCast(self.asQGraphicsItem().ptr), selected);
    }

    /// ### DEPRECATED: Use `acceptDrops` instead
    ///
    pub const AcceptDrops = acceptDrops;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn acceptDrops(self: QGraphicsProxyWidget) bool {
        return qtc.QGraphicsItem_AcceptDrops(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `setAcceptDrops` instead
    ///
    pub const SetAcceptDrops = setAcceptDrops;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` on: bool `
    ///
    pub fn setAcceptDrops(self: QGraphicsProxyWidget, on: bool) void {
        qtc.QGraphicsItem_SetAcceptDrops(@ptrCast(self.asQGraphicsItem().ptr), on);
    }

    /// ### DEPRECATED: Use `opacity` instead
    ///
    pub const Opacity = opacity;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#opacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn opacity(self: QGraphicsProxyWidget) f64 {
        return qtc.QGraphicsItem_Opacity(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `effectiveOpacity` instead
    ///
    pub const EffectiveOpacity = effectiveOpacity;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#effectiveOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn effectiveOpacity(self: QGraphicsProxyWidget) f64 {
        return qtc.QGraphicsItem_EffectiveOpacity(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `setOpacity` instead
    ///
    pub const SetOpacity = setOpacity;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _opacity: f64 `
    ///
    pub fn setOpacity(self: QGraphicsProxyWidget, _opacity: f64) void {
        qtc.QGraphicsItem_SetOpacity(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(_opacity));
    }

    /// ### DEPRECATED: Use `graphicsEffect` instead
    ///
    pub const GraphicsEffect = graphicsEffect;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#graphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn graphicsEffect(self: QGraphicsProxyWidget) QGraphicsEffect {
        return .{ .ptr = qtc.QGraphicsItem_GraphicsEffect(@ptrCast(self.asQGraphicsItem().ptr)) };
    }

    /// ### DEPRECATED: Use `setGraphicsEffect` instead
    ///
    pub const SetGraphicsEffect = setGraphicsEffect;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setGraphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn setGraphicsEffect(self: QGraphicsProxyWidget, effect: anytype) void {
        comptime _ = @TypeOf(effect)._is_QGraphicsEffect;
        qtc.QGraphicsItem_SetGraphicsEffect(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(effect.ptr));
    }

    /// ### DEPRECATED: Use `acceptedMouseButtons` instead
    ///
    pub const AcceptedMouseButtons = acceptedMouseButtons;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptedMouseButtons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.MouseButton `
    ///
    pub fn acceptedMouseButtons(self: QGraphicsProxyWidget) i32 {
        return qtc.QGraphicsItem_AcceptedMouseButtons(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `setAcceptedMouseButtons` instead
    ///
    pub const SetAcceptedMouseButtons = setAcceptedMouseButtons;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptedMouseButtons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` buttons: flag of qnamespace_enums.MouseButton `
    ///
    pub fn setAcceptedMouseButtons(self: QGraphicsProxyWidget, buttons: i32) void {
        qtc.QGraphicsItem_SetAcceptedMouseButtons(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(buttons));
    }

    /// ### DEPRECATED: Use `acceptHoverEvents` instead
    ///
    pub const AcceptHoverEvents = acceptHoverEvents;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptHoverEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn acceptHoverEvents(self: QGraphicsProxyWidget) bool {
        return qtc.QGraphicsItem_AcceptHoverEvents(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `setAcceptHoverEvents` instead
    ///
    pub const SetAcceptHoverEvents = setAcceptHoverEvents;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptHoverEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` enabled: bool `
    ///
    pub fn setAcceptHoverEvents(self: QGraphicsProxyWidget, enabled: bool) void {
        qtc.QGraphicsItem_SetAcceptHoverEvents(@ptrCast(self.asQGraphicsItem().ptr), enabled);
    }

    /// ### DEPRECATED: Use `acceptTouchEvents` instead
    ///
    pub const AcceptTouchEvents = acceptTouchEvents;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptTouchEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn acceptTouchEvents(self: QGraphicsProxyWidget) bool {
        return qtc.QGraphicsItem_AcceptTouchEvents(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `setAcceptTouchEvents` instead
    ///
    pub const SetAcceptTouchEvents = setAcceptTouchEvents;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptTouchEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` enabled: bool `
    ///
    pub fn setAcceptTouchEvents(self: QGraphicsProxyWidget, enabled: bool) void {
        qtc.QGraphicsItem_SetAcceptTouchEvents(@ptrCast(self.asQGraphicsItem().ptr), enabled);
    }

    /// ### DEPRECATED: Use `filtersChildEvents` instead
    ///
    pub const FiltersChildEvents = filtersChildEvents;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#filtersChildEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn filtersChildEvents(self: QGraphicsProxyWidget) bool {
        return qtc.QGraphicsItem_FiltersChildEvents(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `setFiltersChildEvents` instead
    ///
    pub const SetFiltersChildEvents = setFiltersChildEvents;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFiltersChildEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` enabled: bool `
    ///
    pub fn setFiltersChildEvents(self: QGraphicsProxyWidget, enabled: bool) void {
        qtc.QGraphicsItem_SetFiltersChildEvents(@ptrCast(self.asQGraphicsItem().ptr), enabled);
    }

    /// ### DEPRECATED: Use `handlesChildEvents` instead
    ///
    pub const HandlesChildEvents = handlesChildEvents;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#handlesChildEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn handlesChildEvents(self: QGraphicsProxyWidget) bool {
        return qtc.QGraphicsItem_HandlesChildEvents(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `setHandlesChildEvents` instead
    ///
    pub const SetHandlesChildEvents = setHandlesChildEvents;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setHandlesChildEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` enabled: bool `
    ///
    pub fn setHandlesChildEvents(self: QGraphicsProxyWidget, enabled: bool) void {
        qtc.QGraphicsItem_SetHandlesChildEvents(@ptrCast(self.asQGraphicsItem().ptr), enabled);
    }

    /// ### DEPRECATED: Use `isActive` instead
    ///
    pub const IsActive = isActive;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn isActive(self: QGraphicsProxyWidget) bool {
        return qtc.QGraphicsItem_IsActive(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `setActive` instead
    ///
    pub const SetActive = setActive;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` active: bool `
    ///
    pub fn setActive(self: QGraphicsProxyWidget, active: bool) void {
        qtc.QGraphicsItem_SetActive(@ptrCast(self.asQGraphicsItem().ptr), active);
    }

    /// ### DEPRECATED: Use `hasFocus` instead
    ///
    pub const HasFocus = hasFocus;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn hasFocus(self: QGraphicsProxyWidget) bool {
        return qtc.QGraphicsItem_HasFocus(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `setFocus` instead
    ///
    pub const SetFocus = setFocus;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn setFocus(self: QGraphicsProxyWidget) void {
        qtc.QGraphicsItem_SetFocus(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `clearFocus` instead
    ///
    pub const ClearFocus = clearFocus;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn clearFocus(self: QGraphicsProxyWidget) void {
        qtc.QGraphicsItem_ClearFocus(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `focusProxy` instead
    ///
    pub const FocusProxy = focusProxy;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn focusProxy(self: QGraphicsProxyWidget) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsItem_FocusProxy(@ptrCast(self.asQGraphicsItem().ptr)) };
    }

    /// ### DEPRECATED: Use `setFocusProxy` instead
    ///
    pub const SetFocusProxy = setFocusProxy;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` item: QGraphicsItem `
    ///
    pub fn setFocusProxy(self: QGraphicsProxyWidget, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        const item_ = if (@hasDecl(@TypeOf(item), "asQGraphicsItem")) item.asQGraphicsItem() else item;
        qtc.QGraphicsItem_SetFocusProxy(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(item_.ptr));
    }

    /// ### DEPRECATED: Use `focusItem` instead
    ///
    pub const FocusItem = focusItem;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn focusItem(self: QGraphicsProxyWidget) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsItem_FocusItem(@ptrCast(self.asQGraphicsItem().ptr)) };
    }

    /// ### DEPRECATED: Use `focusScopeItem` instead
    ///
    pub const FocusScopeItem = focusScopeItem;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusScopeItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn focusScopeItem(self: QGraphicsProxyWidget) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsItem_FocusScopeItem(@ptrCast(self.asQGraphicsItem().ptr)) };
    }

    /// ### DEPRECATED: Use `grabMouse` instead
    ///
    pub const GrabMouse = grabMouse;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn grabMouse(self: QGraphicsProxyWidget) void {
        qtc.QGraphicsItem_GrabMouse(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `ungrabMouse` instead
    ///
    pub const UngrabMouse = ungrabMouse;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn ungrabMouse(self: QGraphicsProxyWidget) void {
        qtc.QGraphicsItem_UngrabMouse(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `grabKeyboard` instead
    ///
    pub const GrabKeyboard = grabKeyboard;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#grabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn grabKeyboard(self: QGraphicsProxyWidget) void {
        qtc.QGraphicsItem_GrabKeyboard(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `ungrabKeyboard` instead
    ///
    pub const UngrabKeyboard = ungrabKeyboard;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn ungrabKeyboard(self: QGraphicsProxyWidget) void {
        qtc.QGraphicsItem_UngrabKeyboard(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `pos` instead
    ///
    pub const Pos = pos;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn pos(self: QGraphicsProxyWidget) QPointF {
        return .{ .ptr = qtc.QGraphicsItem_Pos(@ptrCast(self.asQGraphicsItem().ptr)) };
    }

    /// ### DEPRECATED: Use `x` instead
    ///
    pub const X = x;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn x(self: QGraphicsProxyWidget) f64 {
        return qtc.QGraphicsItem_X(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `setX` instead
    ///
    pub const SetX = setX;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _x: f64 `
    ///
    pub fn setX(self: QGraphicsProxyWidget, _x: f64) void {
        qtc.QGraphicsItem_SetX(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(_x));
    }

    /// ### DEPRECATED: Use `y` instead
    ///
    pub const Y = y;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn y(self: QGraphicsProxyWidget) f64 {
        return qtc.QGraphicsItem_Y(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `setY` instead
    ///
    pub const SetY = setY;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _y: f64 `
    ///
    pub fn setY(self: QGraphicsProxyWidget, _y: f64) void {
        qtc.QGraphicsItem_SetY(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(_y));
    }

    /// ### DEPRECATED: Use `scenePos` instead
    ///
    pub const ScenePos = scenePos;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn scenePos(self: QGraphicsProxyWidget) QPointF {
        return .{ .ptr = qtc.QGraphicsItem_ScenePos(@ptrCast(self.asQGraphicsItem().ptr)) };
    }

    /// ### DEPRECATED: Use `setPos` instead
    ///
    pub const SetPos = setPos;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _pos: QPointF `
    ///
    pub fn setPos(self: QGraphicsProxyWidget, _pos: anytype) void {
        comptime _ = @TypeOf(_pos)._is_QPointF;
        qtc.QGraphicsItem_SetPos(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(_pos.ptr));
    }

    /// ### DEPRECATED: Use `setPos2` instead
    ///
    pub const SetPos2 = setPos2;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    pub fn setPos2(self: QGraphicsProxyWidget, _x: f64, _y: f64) void {
        qtc.QGraphicsItem_SetPos2(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(_x), @bitCast(_y));
    }

    /// ### DEPRECATED: Use `moveBy` instead
    ///
    pub const MoveBy = moveBy;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#moveBy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` dx: f64 `
    ///
    /// ` dy: f64 `
    ///
    pub fn moveBy(self: QGraphicsProxyWidget, dx: f64, dy: f64) void {
        qtc.QGraphicsItem_MoveBy(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### DEPRECATED: Use `ensureVisible` instead
    ///
    pub const EnsureVisible = ensureVisible;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn ensureVisible(self: QGraphicsProxyWidget) void {
        qtc.QGraphicsItem_EnsureVisible(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `ensureVisible2` instead
    ///
    pub const EnsureVisible2 = ensureVisible2;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn ensureVisible2(self: QGraphicsProxyWidget, _x: f64, _y: f64, w: f64, h: f64) void {
        qtc.QGraphicsItem_EnsureVisible2(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(_x), @bitCast(_y), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `transform` instead
    ///
    pub const Transform = transform;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#transform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn transform(self: QGraphicsProxyWidget) QTransform {
        return .{ .ptr = qtc.QGraphicsItem_Transform(@ptrCast(self.asQGraphicsItem().ptr)) };
    }

    /// ### DEPRECATED: Use `sceneTransform` instead
    ///
    pub const SceneTransform = sceneTransform;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn sceneTransform(self: QGraphicsProxyWidget) QTransform {
        return .{ .ptr = qtc.QGraphicsItem_SceneTransform(@ptrCast(self.asQGraphicsItem().ptr)) };
    }

    /// ### DEPRECATED: Use `deviceTransform` instead
    ///
    pub const DeviceTransform = deviceTransform;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#deviceTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` viewportTransform: QTransform `
    ///
    pub fn deviceTransform(self: QGraphicsProxyWidget, viewportTransform: anytype) QTransform {
        comptime _ = @TypeOf(viewportTransform)._is_QTransform;
        return .{ .ptr = qtc.QGraphicsItem_DeviceTransform(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(viewportTransform.ptr)) };
    }

    /// ### DEPRECATED: Use `itemTransform` instead
    ///
    pub const ItemTransform = itemTransform;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` other: QGraphicsItem `
    ///
    pub fn itemTransform(self: QGraphicsProxyWidget, other: anytype) QTransform {
        comptime _ = @TypeOf(other)._is_QGraphicsItem;
        const other_ = if (@hasDecl(@TypeOf(other), "asQGraphicsItem")) other.asQGraphicsItem() else other;
        return .{ .ptr = qtc.QGraphicsItem_ItemTransform(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(other_.ptr)) };
    }

    /// ### DEPRECATED: Use `setTransform` instead
    ///
    pub const SetTransform = setTransform;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` matrix: QTransform `
    ///
    pub fn setTransform(self: QGraphicsProxyWidget, matrix: anytype) void {
        comptime _ = @TypeOf(matrix)._is_QTransform;
        qtc.QGraphicsItem_SetTransform(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(matrix.ptr));
    }

    /// ### DEPRECATED: Use `resetTransform` instead
    ///
    pub const ResetTransform = resetTransform;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#resetTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn resetTransform(self: QGraphicsProxyWidget) void {
        qtc.QGraphicsItem_ResetTransform(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `setRotation` instead
    ///
    pub const SetRotation = setRotation;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setRotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` angle: f64 `
    ///
    pub fn setRotation(self: QGraphicsProxyWidget, angle: f64) void {
        qtc.QGraphicsItem_SetRotation(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(angle));
    }

    /// ### DEPRECATED: Use `rotation` instead
    ///
    pub const Rotation = rotation;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#rotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn rotation(self: QGraphicsProxyWidget) f64 {
        return qtc.QGraphicsItem_Rotation(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `setScale` instead
    ///
    pub const SetScale = setScale;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setScale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _scale: f64 `
    ///
    pub fn setScale(self: QGraphicsProxyWidget, _scale: f64) void {
        qtc.QGraphicsItem_SetScale(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(_scale));
    }

    /// ### DEPRECATED: Use `scale` instead
    ///
    pub const Scale = scale;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn scale(self: QGraphicsProxyWidget) f64 {
        return qtc.QGraphicsItem_Scale(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `transformations` instead
    ///
    pub const Transformations = transformations;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#transformations)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn transformations(self: QGraphicsProxyWidget, allocator: std.mem.Allocator) []QGraphicsTransform {
        const _arr: qtc.libqt_list = qtc.QGraphicsItem_Transformations(@ptrCast(self.asQGraphicsItem().ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsTransform, _arr.len) catch @panic("QGraphicsProxyWidget.transformations: Memory allocation failed");
        const _data_val: [*]QtC.QGraphicsTransform = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setTransformations` instead
    ///
    pub const SetTransformations = setTransformations;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformations)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _transformations: []QGraphicsTransform `
    ///
    pub fn setTransformations(self: QGraphicsProxyWidget, _transformations: []QGraphicsTransform) void {
        const transformations_list = qtc.libqt_list{
            .len = _transformations.len,
            .data = @ptrCast(_transformations.ptr),
        };
        qtc.QGraphicsItem_SetTransformations(@ptrCast(self.asQGraphicsItem().ptr), transformations_list);
    }

    /// ### DEPRECATED: Use `transformOriginPoint` instead
    ///
    pub const TransformOriginPoint = transformOriginPoint;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#transformOriginPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn transformOriginPoint(self: QGraphicsProxyWidget) QPointF {
        return .{ .ptr = qtc.QGraphicsItem_TransformOriginPoint(@ptrCast(self.asQGraphicsItem().ptr)) };
    }

    /// ### DEPRECATED: Use `setTransformOriginPoint` instead
    ///
    pub const SetTransformOriginPoint = setTransformOriginPoint;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` origin: QPointF `
    ///
    pub fn setTransformOriginPoint(self: QGraphicsProxyWidget, origin: anytype) void {
        comptime _ = @TypeOf(origin)._is_QPointF;
        qtc.QGraphicsItem_SetTransformOriginPoint(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(origin.ptr));
    }

    /// ### DEPRECATED: Use `setTransformOriginPoint2` instead
    ///
    pub const SetTransformOriginPoint2 = setTransformOriginPoint2;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` ax: f64 `
    ///
    /// ` ay: f64 `
    ///
    pub fn setTransformOriginPoint2(self: QGraphicsProxyWidget, ax: f64, ay: f64) void {
        qtc.QGraphicsItem_SetTransformOriginPoint2(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(ax), @bitCast(ay));
    }

    /// ### DEPRECATED: Use `zValue` instead
    ///
    pub const ZValue = zValue;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#zValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn zValue(self: QGraphicsProxyWidget) f64 {
        return qtc.QGraphicsItem_ZValue(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `setZValue` instead
    ///
    pub const SetZValue = setZValue;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setZValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` z: f64 `
    ///
    pub fn setZValue(self: QGraphicsProxyWidget, z: f64) void {
        qtc.QGraphicsItem_SetZValue(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(z));
    }

    /// ### DEPRECATED: Use `stackBefore` instead
    ///
    pub const StackBefore = stackBefore;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#stackBefore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` sibling: QGraphicsItem `
    ///
    pub fn stackBefore(self: QGraphicsProxyWidget, sibling: anytype) void {
        comptime _ = @TypeOf(sibling)._is_QGraphicsItem;
        const sibling_ = if (@hasDecl(@TypeOf(sibling), "asQGraphicsItem")) sibling.asQGraphicsItem() else sibling;
        qtc.QGraphicsItem_StackBefore(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(sibling_.ptr));
    }

    /// ### DEPRECATED: Use `childrenBoundingRect` instead
    ///
    pub const ChildrenBoundingRect = childrenBoundingRect;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#childrenBoundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn childrenBoundingRect(self: QGraphicsProxyWidget) QRectF {
        return .{ .ptr = qtc.QGraphicsItem_ChildrenBoundingRect(@ptrCast(self.asQGraphicsItem().ptr)) };
    }

    /// ### DEPRECATED: Use `sceneBoundingRect` instead
    ///
    pub const SceneBoundingRect = sceneBoundingRect;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneBoundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn sceneBoundingRect(self: QGraphicsProxyWidget) QRectF {
        return .{ .ptr = qtc.QGraphicsItem_SceneBoundingRect(@ptrCast(self.asQGraphicsItem().ptr)) };
    }

    /// ### DEPRECATED: Use `isClipped` instead
    ///
    pub const IsClipped = isClipped;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isClipped)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn isClipped(self: QGraphicsProxyWidget) bool {
        return qtc.QGraphicsItem_IsClipped(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `clipPath` instead
    ///
    pub const ClipPath = clipPath;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#clipPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn clipPath(self: QGraphicsProxyWidget) QPainterPath {
        return .{ .ptr = qtc.QGraphicsItem_ClipPath(@ptrCast(self.asQGraphicsItem().ptr)) };
    }

    /// ### DEPRECATED: Use `collidingItems` instead
    ///
    pub const CollidingItems = collidingItems;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn collidingItems(self: QGraphicsProxyWidget, allocator: std.mem.Allocator) []QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsItem_CollidingItems(@ptrCast(self.asQGraphicsItem().ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("QGraphicsProxyWidget.collidingItems: Memory allocation failed");
        const _data_val: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `isObscured` instead
    ///
    pub const IsObscured = isObscured;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn isObscured(self: QGraphicsProxyWidget) bool {
        return qtc.QGraphicsItem_IsObscured(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `isObscured2` instead
    ///
    pub const IsObscured2 = isObscured2;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn isObscured2(self: QGraphicsProxyWidget, _x: f64, _y: f64, w: f64, h: f64) bool {
        return qtc.QGraphicsItem_IsObscured2(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(_x), @bitCast(_y), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `boundingRegion` instead
    ///
    pub const BoundingRegion = boundingRegion;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` itemToDeviceTransform: QTransform `
    ///
    pub fn boundingRegion(self: QGraphicsProxyWidget, itemToDeviceTransform: anytype) QRegion {
        comptime _ = @TypeOf(itemToDeviceTransform)._is_QTransform;
        return .{ .ptr = qtc.QGraphicsItem_BoundingRegion(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(itemToDeviceTransform.ptr)) };
    }

    /// ### DEPRECATED: Use `boundingRegionGranularity` instead
    ///
    pub const BoundingRegionGranularity = boundingRegionGranularity;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegionGranularity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn boundingRegionGranularity(self: QGraphicsProxyWidget) f64 {
        return qtc.QGraphicsItem_BoundingRegionGranularity(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `setBoundingRegionGranularity` instead
    ///
    pub const SetBoundingRegionGranularity = setBoundingRegionGranularity;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setBoundingRegionGranularity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` granularity: f64 `
    ///
    pub fn setBoundingRegionGranularity(self: QGraphicsProxyWidget, granularity: f64) void {
        qtc.QGraphicsItem_SetBoundingRegionGranularity(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(granularity));
    }

    /// ### DEPRECATED: Use `update` instead
    ///
    pub const Update = update;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn update(self: QGraphicsProxyWidget) void {
        qtc.QGraphicsItem_Update(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `update2` instead
    ///
    pub const Update2 = update2;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    /// ` width: f64 `
    ///
    /// ` height: f64 `
    ///
    pub fn update2(self: QGraphicsProxyWidget, _x: f64, _y: f64, width: f64, height: f64) void {
        qtc.QGraphicsItem_Update2(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(_x), @bitCast(_y), @bitCast(width), @bitCast(height));
    }

    /// ### DEPRECATED: Use `scroll` instead
    ///
    pub const Scroll = scroll;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` dx: f64 `
    ///
    /// ` dy: f64 `
    ///
    pub fn scroll(self: QGraphicsProxyWidget, dx: f64, dy: f64) void {
        qtc.QGraphicsItem_Scroll(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### DEPRECATED: Use `mapToItem` instead
    ///
    pub const MapToItem = mapToItem;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` point: QPointF `
    ///
    pub fn mapToItem(self: QGraphicsProxyWidget, item: anytype, point: anytype) QPointF {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        const item_ = if (@hasDecl(@TypeOf(item), "asQGraphicsItem")) item.asQGraphicsItem() else item;
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QGraphicsItem_MapToItem(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(item_.ptr), @ptrCast(point.ptr)) };
    }

    /// ### DEPRECATED: Use `mapToParent` instead
    ///
    pub const MapToParent = mapToParent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` point: QPointF `
    ///
    pub fn mapToParent(self: QGraphicsProxyWidget, point: anytype) QPointF {
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QGraphicsItem_MapToParent(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(point.ptr)) };
    }

    /// ### DEPRECATED: Use `mapToScene` instead
    ///
    pub const MapToScene = mapToScene;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` point: QPointF `
    ///
    pub fn mapToScene(self: QGraphicsProxyWidget, point: anytype) QPointF {
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QGraphicsItem_MapToScene(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(point.ptr)) };
    }

    /// ### DEPRECATED: Use `mapRectToItem` instead
    ///
    pub const MapRectToItem = mapRectToItem;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` _rect: QRectF `
    ///
    pub fn mapRectToItem(self: QGraphicsProxyWidget, item: anytype, _rect: anytype) QRectF {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        const item_ = if (@hasDecl(@TypeOf(item), "asQGraphicsItem")) item.asQGraphicsItem() else item;
        comptime _ = @TypeOf(_rect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsItem_MapRectToItem(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(item_.ptr), @ptrCast(_rect.ptr)) };
    }

    /// ### DEPRECATED: Use `mapRectToParent` instead
    ///
    pub const MapRectToParent = mapRectToParent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _rect: QRectF `
    ///
    pub fn mapRectToParent(self: QGraphicsProxyWidget, _rect: anytype) QRectF {
        comptime _ = @TypeOf(_rect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsItem_MapRectToParent(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(_rect.ptr)) };
    }

    /// ### DEPRECATED: Use `mapRectToScene` instead
    ///
    pub const MapRectToScene = mapRectToScene;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _rect: QRectF `
    ///
    pub fn mapRectToScene(self: QGraphicsProxyWidget, _rect: anytype) QRectF {
        comptime _ = @TypeOf(_rect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsItem_MapRectToScene(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(_rect.ptr)) };
    }

    /// ### DEPRECATED: Use `mapToItem4` instead
    ///
    pub const MapToItem4 = mapToItem4;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn mapToItem4(self: QGraphicsProxyWidget, item: anytype, path: anytype) QPainterPath {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        const item_ = if (@hasDecl(@TypeOf(item), "asQGraphicsItem")) item.asQGraphicsItem() else item;
        comptime _ = @TypeOf(path)._is_QPainterPath;
        return .{ .ptr = qtc.QGraphicsItem_MapToItem4(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(item_.ptr), @ptrCast(path.ptr)) };
    }

    /// ### DEPRECATED: Use `mapToParent4` instead
    ///
    pub const MapToParent4 = mapToParent4;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn mapToParent4(self: QGraphicsProxyWidget, path: anytype) QPainterPath {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        return .{ .ptr = qtc.QGraphicsItem_MapToParent4(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(path.ptr)) };
    }

    /// ### DEPRECATED: Use `mapToScene4` instead
    ///
    pub const MapToScene4 = mapToScene4;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn mapToScene4(self: QGraphicsProxyWidget, path: anytype) QPainterPath {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        return .{ .ptr = qtc.QGraphicsItem_MapToScene4(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(path.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFromItem` instead
    ///
    pub const MapFromItem = mapFromItem;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` point: QPointF `
    ///
    pub fn mapFromItem(self: QGraphicsProxyWidget, item: anytype, point: anytype) QPointF {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        const item_ = if (@hasDecl(@TypeOf(item), "asQGraphicsItem")) item.asQGraphicsItem() else item;
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QGraphicsItem_MapFromItem(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(item_.ptr), @ptrCast(point.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFromParent` instead
    ///
    pub const MapFromParent = mapFromParent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` point: QPointF `
    ///
    pub fn mapFromParent(self: QGraphicsProxyWidget, point: anytype) QPointF {
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QGraphicsItem_MapFromParent(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(point.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFromScene` instead
    ///
    pub const MapFromScene = mapFromScene;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` point: QPointF `
    ///
    pub fn mapFromScene(self: QGraphicsProxyWidget, point: anytype) QPointF {
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QGraphicsItem_MapFromScene(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(point.ptr)) };
    }

    /// ### DEPRECATED: Use `mapRectFromItem` instead
    ///
    pub const MapRectFromItem = mapRectFromItem;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` _rect: QRectF `
    ///
    pub fn mapRectFromItem(self: QGraphicsProxyWidget, item: anytype, _rect: anytype) QRectF {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        const item_ = if (@hasDecl(@TypeOf(item), "asQGraphicsItem")) item.asQGraphicsItem() else item;
        comptime _ = @TypeOf(_rect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsItem_MapRectFromItem(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(item_.ptr), @ptrCast(_rect.ptr)) };
    }

    /// ### DEPRECATED: Use `mapRectFromParent` instead
    ///
    pub const MapRectFromParent = mapRectFromParent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _rect: QRectF `
    ///
    pub fn mapRectFromParent(self: QGraphicsProxyWidget, _rect: anytype) QRectF {
        comptime _ = @TypeOf(_rect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsItem_MapRectFromParent(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(_rect.ptr)) };
    }

    /// ### DEPRECATED: Use `mapRectFromScene` instead
    ///
    pub const MapRectFromScene = mapRectFromScene;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _rect: QRectF `
    ///
    pub fn mapRectFromScene(self: QGraphicsProxyWidget, _rect: anytype) QRectF {
        comptime _ = @TypeOf(_rect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsItem_MapRectFromScene(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(_rect.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFromItem4` instead
    ///
    pub const MapFromItem4 = mapFromItem4;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn mapFromItem4(self: QGraphicsProxyWidget, item: anytype, path: anytype) QPainterPath {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        const item_ = if (@hasDecl(@TypeOf(item), "asQGraphicsItem")) item.asQGraphicsItem() else item;
        comptime _ = @TypeOf(path)._is_QPainterPath;
        return .{ .ptr = qtc.QGraphicsItem_MapFromItem4(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(item_.ptr), @ptrCast(path.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFromParent4` instead
    ///
    pub const MapFromParent4 = mapFromParent4;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn mapFromParent4(self: QGraphicsProxyWidget, path: anytype) QPainterPath {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        return .{ .ptr = qtc.QGraphicsItem_MapFromParent4(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(path.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFromScene4` instead
    ///
    pub const MapFromScene4 = mapFromScene4;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn mapFromScene4(self: QGraphicsProxyWidget, path: anytype) QPainterPath {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        return .{ .ptr = qtc.QGraphicsItem_MapFromScene4(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(path.ptr)) };
    }

    /// ### DEPRECATED: Use `mapToItem5` instead
    ///
    pub const MapToItem5 = mapToItem5;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    pub fn mapToItem5(self: QGraphicsProxyWidget, item: anytype, _x: f64, _y: f64) QPointF {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        const item_ = if (@hasDecl(@TypeOf(item), "asQGraphicsItem")) item.asQGraphicsItem() else item;
        return .{ .ptr = qtc.QGraphicsItem_MapToItem5(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(item_.ptr), @bitCast(_x), @bitCast(_y)) };
    }

    /// ### DEPRECATED: Use `mapToParent5` instead
    ///
    pub const MapToParent5 = mapToParent5;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    pub fn mapToParent5(self: QGraphicsProxyWidget, _x: f64, _y: f64) QPointF {
        return .{ .ptr = qtc.QGraphicsItem_MapToParent5(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(_x), @bitCast(_y)) };
    }

    /// ### DEPRECATED: Use `mapToScene5` instead
    ///
    pub const MapToScene5 = mapToScene5;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    pub fn mapToScene5(self: QGraphicsProxyWidget, _x: f64, _y: f64) QPointF {
        return .{ .ptr = qtc.QGraphicsItem_MapToScene5(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(_x), @bitCast(_y)) };
    }

    /// ### DEPRECATED: Use `mapRectToItem2` instead
    ///
    pub const MapRectToItem2 = mapRectToItem2;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn mapRectToItem2(self: QGraphicsProxyWidget, item: anytype, _x: f64, _y: f64, w: f64, h: f64) QRectF {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        const item_ = if (@hasDecl(@TypeOf(item), "asQGraphicsItem")) item.asQGraphicsItem() else item;
        return .{ .ptr = qtc.QGraphicsItem_MapRectToItem2(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(item_.ptr), @bitCast(_x), @bitCast(_y), @bitCast(w), @bitCast(h)) };
    }

    /// ### DEPRECATED: Use `mapRectToParent2` instead
    ///
    pub const MapRectToParent2 = mapRectToParent2;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn mapRectToParent2(self: QGraphicsProxyWidget, _x: f64, _y: f64, w: f64, h: f64) QRectF {
        return .{ .ptr = qtc.QGraphicsItem_MapRectToParent2(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(_x), @bitCast(_y), @bitCast(w), @bitCast(h)) };
    }

    /// ### DEPRECATED: Use `mapRectToScene2` instead
    ///
    pub const MapRectToScene2 = mapRectToScene2;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn mapRectToScene2(self: QGraphicsProxyWidget, _x: f64, _y: f64, w: f64, h: f64) QRectF {
        return .{ .ptr = qtc.QGraphicsItem_MapRectToScene2(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(_x), @bitCast(_y), @bitCast(w), @bitCast(h)) };
    }

    /// ### DEPRECATED: Use `mapFromItem5` instead
    ///
    pub const MapFromItem5 = mapFromItem5;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    pub fn mapFromItem5(self: QGraphicsProxyWidget, item: anytype, _x: f64, _y: f64) QPointF {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        const item_ = if (@hasDecl(@TypeOf(item), "asQGraphicsItem")) item.asQGraphicsItem() else item;
        return .{ .ptr = qtc.QGraphicsItem_MapFromItem5(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(item_.ptr), @bitCast(_x), @bitCast(_y)) };
    }

    /// ### DEPRECATED: Use `mapFromParent5` instead
    ///
    pub const MapFromParent5 = mapFromParent5;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    pub fn mapFromParent5(self: QGraphicsProxyWidget, _x: f64, _y: f64) QPointF {
        return .{ .ptr = qtc.QGraphicsItem_MapFromParent5(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(_x), @bitCast(_y)) };
    }

    /// ### DEPRECATED: Use `mapFromScene5` instead
    ///
    pub const MapFromScene5 = mapFromScene5;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    pub fn mapFromScene5(self: QGraphicsProxyWidget, _x: f64, _y: f64) QPointF {
        return .{ .ptr = qtc.QGraphicsItem_MapFromScene5(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(_x), @bitCast(_y)) };
    }

    /// ### DEPRECATED: Use `mapRectFromItem2` instead
    ///
    pub const MapRectFromItem2 = mapRectFromItem2;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn mapRectFromItem2(self: QGraphicsProxyWidget, item: anytype, _x: f64, _y: f64, w: f64, h: f64) QRectF {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        const item_ = if (@hasDecl(@TypeOf(item), "asQGraphicsItem")) item.asQGraphicsItem() else item;
        return .{ .ptr = qtc.QGraphicsItem_MapRectFromItem2(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(item_.ptr), @bitCast(_x), @bitCast(_y), @bitCast(w), @bitCast(h)) };
    }

    /// ### DEPRECATED: Use `mapRectFromParent2` instead
    ///
    pub const MapRectFromParent2 = mapRectFromParent2;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn mapRectFromParent2(self: QGraphicsProxyWidget, _x: f64, _y: f64, w: f64, h: f64) QRectF {
        return .{ .ptr = qtc.QGraphicsItem_MapRectFromParent2(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(_x), @bitCast(_y), @bitCast(w), @bitCast(h)) };
    }

    /// ### DEPRECATED: Use `mapRectFromScene2` instead
    ///
    pub const MapRectFromScene2 = mapRectFromScene2;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn mapRectFromScene2(self: QGraphicsProxyWidget, _x: f64, _y: f64, w: f64, h: f64) QRectF {
        return .{ .ptr = qtc.QGraphicsItem_MapRectFromScene2(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(_x), @bitCast(_y), @bitCast(w), @bitCast(h)) };
    }

    /// ### DEPRECATED: Use `isAncestorOf` instead
    ///
    pub const IsAncestorOf = isAncestorOf;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` child: QGraphicsItem `
    ///
    pub fn isAncestorOf(self: QGraphicsProxyWidget, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QGraphicsItem;
        const child_ = if (@hasDecl(@TypeOf(child), "asQGraphicsItem")) child.asQGraphicsItem() else child;
        return qtc.QGraphicsItem_IsAncestorOf(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(child_.ptr));
    }

    /// ### DEPRECATED: Use `commonAncestorItem` instead
    ///
    pub const CommonAncestorItem = commonAncestorItem;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#commonAncestorItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` other: QGraphicsItem `
    ///
    pub fn commonAncestorItem(self: QGraphicsProxyWidget, other: anytype) QGraphicsItem {
        comptime _ = @TypeOf(other)._is_QGraphicsItem;
        const other_ = if (@hasDecl(@TypeOf(other), "asQGraphicsItem")) other.asQGraphicsItem() else other;
        return .{ .ptr = qtc.QGraphicsItem_CommonAncestorItem(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(other_.ptr)) };
    }

    /// ### DEPRECATED: Use `isUnderMouse` instead
    ///
    pub const IsUnderMouse = isUnderMouse;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isUnderMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn isUnderMouse(self: QGraphicsProxyWidget) bool {
        return qtc.QGraphicsItem_IsUnderMouse(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `data` instead
    ///
    pub const Data = data;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` key: i32 `
    ///
    pub fn data(self: QGraphicsProxyWidget, key: i32) QVariant {
        return .{ .ptr = qtc.QGraphicsItem_Data(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(key)) };
    }

    /// ### DEPRECATED: Use `setData` instead
    ///
    pub const SetData = setData;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` key: i32 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setData(self: QGraphicsProxyWidget, key: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QGraphicsItem_SetData(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(key), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `inputMethodHints` instead
    ///
    pub const InputMethodHints = inputMethodHints;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn inputMethodHints(self: QGraphicsProxyWidget) i32 {
        return qtc.QGraphicsItem_InputMethodHints(@ptrCast(self.asQGraphicsItem().ptr));
    }

    /// ### DEPRECATED: Use `setInputMethodHints` instead
    ///
    pub const SetInputMethodHints = setInputMethodHints;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setInputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn setInputMethodHints(self: QGraphicsProxyWidget, hints: i32) void {
        qtc.QGraphicsItem_SetInputMethodHints(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(hints));
    }

    /// ### DEPRECATED: Use `installSceneEventFilter` instead
    ///
    pub const InstallSceneEventFilter = installSceneEventFilter;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#installSceneEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` filterItem: QGraphicsItem `
    ///
    pub fn installSceneEventFilter(self: QGraphicsProxyWidget, filterItem: anytype) void {
        comptime _ = @TypeOf(filterItem)._is_QGraphicsItem;
        const filterItem_ = if (@hasDecl(@TypeOf(filterItem), "asQGraphicsItem")) filterItem.asQGraphicsItem() else filterItem;
        qtc.QGraphicsItem_InstallSceneEventFilter(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(filterItem_.ptr));
    }

    /// ### DEPRECATED: Use `removeSceneEventFilter` instead
    ///
    pub const RemoveSceneEventFilter = removeSceneEventFilter;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#removeSceneEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` filterItem: QGraphicsItem `
    ///
    pub fn removeSceneEventFilter(self: QGraphicsProxyWidget, filterItem: anytype) void {
        comptime _ = @TypeOf(filterItem)._is_QGraphicsItem;
        const filterItem_ = if (@hasDecl(@TypeOf(filterItem), "asQGraphicsItem")) filterItem.asQGraphicsItem() else filterItem;
        qtc.QGraphicsItem_RemoveSceneEventFilter(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(filterItem_.ptr));
    }

    /// ### DEPRECATED: Use `setFlag2` instead
    ///
    pub const SetFlag2 = setFlag2;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` flag: qgraphicsitem_enums.GraphicsItemFlag `
    ///
    /// ` enabled: bool `
    ///
    pub fn setFlag2(self: QGraphicsProxyWidget, flag: i32, enabled: bool) void {
        qtc.QGraphicsItem_SetFlag2(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(flag), enabled);
    }

    /// ### DEPRECATED: Use `setCacheMode2` instead
    ///
    pub const SetCacheMode2 = setCacheMode2;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` mode: qgraphicsitem_enums.CacheMode `
    ///
    /// ` cacheSize: QSize `
    ///
    pub fn setCacheMode2(self: QGraphicsProxyWidget, mode: i32, cacheSize: anytype) void {
        comptime _ = @TypeOf(cacheSize)._is_QSize;
        qtc.QGraphicsItem_SetCacheMode2(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(mode), @ptrCast(cacheSize.ptr));
    }

    /// ### DEPRECATED: Use `isBlockedByModalPanel1` instead
    ///
    pub const IsBlockedByModalPanel1 = isBlockedByModalPanel1;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isBlockedByModalPanel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` blockingPanel: *QGraphicsItem.ptr `
    ///
    pub fn isBlockedByModalPanel1(self: QGraphicsProxyWidget, blockingPanel: *?*anyopaque) bool {
        return qtc.QGraphicsItem_IsBlockedByModalPanel1(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(blockingPanel));
    }

    /// ### DEPRECATED: Use `setFocus1` instead
    ///
    pub const SetFocus1 = setFocus1;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` focusReason: qnamespace_enums.FocusReason `
    ///
    pub fn setFocus1(self: QGraphicsProxyWidget, focusReason: i32) void {
        qtc.QGraphicsItem_SetFocus1(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(focusReason));
    }

    /// ### DEPRECATED: Use `ensureVisible1` instead
    ///
    pub const EnsureVisible1 = ensureVisible1;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _rect: QRectF `
    ///
    pub fn ensureVisible1(self: QGraphicsProxyWidget, _rect: anytype) void {
        comptime _ = @TypeOf(_rect)._is_QRectF;
        qtc.QGraphicsItem_EnsureVisible1(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(_rect.ptr));
    }

    /// ### DEPRECATED: Use `ensureVisible22` instead
    ///
    pub const EnsureVisible22 = ensureVisible22;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _rect: QRectF `
    ///
    /// ` xmargin: i32 `
    ///
    pub fn ensureVisible22(self: QGraphicsProxyWidget, _rect: anytype, xmargin: i32) void {
        comptime _ = @TypeOf(_rect)._is_QRectF;
        qtc.QGraphicsItem_EnsureVisible22(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(_rect.ptr), @bitCast(xmargin));
    }

    /// ### DEPRECATED: Use `ensureVisible3` instead
    ///
    pub const EnsureVisible3 = ensureVisible3;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _rect: QRectF `
    ///
    /// ` xmargin: i32 `
    ///
    /// ` ymargin: i32 `
    ///
    pub fn ensureVisible3(self: QGraphicsProxyWidget, _rect: anytype, xmargin: i32, ymargin: i32) void {
        comptime _ = @TypeOf(_rect)._is_QRectF;
        qtc.QGraphicsItem_EnsureVisible3(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(_rect.ptr), @bitCast(xmargin), @bitCast(ymargin));
    }

    /// ### DEPRECATED: Use `ensureVisible5` instead
    ///
    pub const EnsureVisible5 = ensureVisible5;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    /// ` xmargin: i32 `
    ///
    pub fn ensureVisible5(self: QGraphicsProxyWidget, _x: f64, _y: f64, w: f64, h: f64, xmargin: i32) void {
        qtc.QGraphicsItem_EnsureVisible5(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(_x), @bitCast(_y), @bitCast(w), @bitCast(h), @bitCast(xmargin));
    }

    /// ### DEPRECATED: Use `ensureVisible6` instead
    ///
    pub const EnsureVisible6 = ensureVisible6;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    /// ` xmargin: i32 `
    ///
    /// ` ymargin: i32 `
    ///
    pub fn ensureVisible6(self: QGraphicsProxyWidget, _x: f64, _y: f64, w: f64, h: f64, xmargin: i32, ymargin: i32) void {
        qtc.QGraphicsItem_EnsureVisible6(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(_x), @bitCast(_y), @bitCast(w), @bitCast(h), @bitCast(xmargin), @bitCast(ymargin));
    }

    /// ### DEPRECATED: Use `itemTransform2` instead
    ///
    pub const ItemTransform2 = itemTransform2;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` other: QGraphicsItem `
    ///
    /// ` ok: *bool `
    ///
    pub fn itemTransform2(self: QGraphicsProxyWidget, other: anytype, ok: *bool) QTransform {
        comptime _ = @TypeOf(other)._is_QGraphicsItem;
        const other_ = if (@hasDecl(@TypeOf(other), "asQGraphicsItem")) other.asQGraphicsItem() else other;
        return .{ .ptr = qtc.QGraphicsItem_ItemTransform2(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(other_.ptr), @ptrCast(ok)) };
    }

    /// ### DEPRECATED: Use `setTransform2` instead
    ///
    pub const SetTransform2 = setTransform2;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` matrix: QTransform `
    ///
    /// ` combine: bool `
    ///
    pub fn setTransform2(self: QGraphicsProxyWidget, matrix: anytype, combine: bool) void {
        comptime _ = @TypeOf(matrix)._is_QTransform;
        qtc.QGraphicsItem_SetTransform2(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(matrix.ptr), combine);
    }

    /// ### DEPRECATED: Use `collidingItems1` instead
    ///
    pub const CollidingItems1 = collidingItems1;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    pub fn collidingItems1(self: QGraphicsProxyWidget, allocator: std.mem.Allocator, mode: i32) []QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsItem_CollidingItems1(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(mode));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("QGraphicsProxyWidget.collidingItems1: Memory allocation failed");
        const _data_val: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `isObscured1` instead
    ///
    pub const IsObscured1 = isObscured1;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _rect: QRectF `
    ///
    pub fn isObscured1(self: QGraphicsProxyWidget, _rect: anytype) bool {
        comptime _ = @TypeOf(_rect)._is_QRectF;
        return qtc.QGraphicsItem_IsObscured1(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(_rect.ptr));
    }

    /// ### DEPRECATED: Use `update1` instead
    ///
    pub const Update1 = update1;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _rect: QRectF `
    ///
    pub fn update1(self: QGraphicsProxyWidget, _rect: anytype) void {
        comptime _ = @TypeOf(_rect)._is_QRectF;
        qtc.QGraphicsItem_Update1(@ptrCast(self.asQGraphicsItem().ptr), @ptrCast(_rect.ptr));
    }

    /// ### DEPRECATED: Use `scroll3` instead
    ///
    pub const Scroll3 = scroll3;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` dx: f64 `
    ///
    /// ` dy: f64 `
    ///
    /// ` _rect: QRectF `
    ///
    pub fn scroll3(self: QGraphicsProxyWidget, dx: f64, dy: f64, _rect: anytype) void {
        comptime _ = @TypeOf(_rect)._is_QRectF;
        qtc.QGraphicsItem_Scroll3(@ptrCast(self.asQGraphicsItem().ptr), @bitCast(dx), @bitCast(dy), @ptrCast(_rect.ptr));
    }

    /// ### DEPRECATED: Use `setSizePolicy` instead
    ///
    pub const SetSizePolicy = setSizePolicy;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` policy: QSizePolicy `
    ///
    pub fn setSizePolicy(self: QGraphicsProxyWidget, policy: anytype) void {
        comptime _ = @TypeOf(policy)._is_QSizePolicy;
        qtc.QGraphicsLayoutItem_SetSizePolicy(@ptrCast(self.asQGraphicsLayoutItem().ptr), @ptrCast(policy.ptr));
    }

    /// ### DEPRECATED: Use `setSizePolicy2` instead
    ///
    pub const SetSizePolicy2 = setSizePolicy2;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` hPolicy: qsizepolicy_enums.Policy `
    ///
    /// ` vPolicy: qsizepolicy_enums.Policy `
    ///
    pub fn setSizePolicy2(self: QGraphicsProxyWidget, hPolicy: i32, vPolicy: i32) void {
        qtc.QGraphicsLayoutItem_SetSizePolicy2(@ptrCast(self.asQGraphicsLayoutItem().ptr), @bitCast(hPolicy), @bitCast(vPolicy));
    }

    /// ### DEPRECATED: Use `sizePolicy` instead
    ///
    pub const SizePolicy = sizePolicy;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn sizePolicy(self: QGraphicsProxyWidget) QSizePolicy {
        return .{ .ptr = qtc.QGraphicsLayoutItem_SizePolicy(@ptrCast(self.asQGraphicsLayoutItem().ptr)) };
    }

    /// ### DEPRECATED: Use `setMinimumSize` instead
    ///
    pub const SetMinimumSize = setMinimumSize;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _size: QSizeF `
    ///
    pub fn setMinimumSize(self: QGraphicsProxyWidget, _size: anytype) void {
        comptime _ = @TypeOf(_size)._is_QSizeF;
        qtc.QGraphicsLayoutItem_SetMinimumSize(@ptrCast(self.asQGraphicsLayoutItem().ptr), @ptrCast(_size.ptr));
    }

    /// ### DEPRECATED: Use `setMinimumSize2` instead
    ///
    pub const SetMinimumSize2 = setMinimumSize2;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn setMinimumSize2(self: QGraphicsProxyWidget, w: f64, h: f64) void {
        qtc.QGraphicsLayoutItem_SetMinimumSize2(@ptrCast(self.asQGraphicsLayoutItem().ptr), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `minimumSize` instead
    ///
    pub const MinimumSize = minimumSize;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn minimumSize(self: QGraphicsProxyWidget) QSizeF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_MinimumSize(@ptrCast(self.asQGraphicsLayoutItem().ptr)) };
    }

    /// ### DEPRECATED: Use `setMinimumWidth` instead
    ///
    pub const SetMinimumWidth = setMinimumWidth;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` width: f64 `
    ///
    pub fn setMinimumWidth(self: QGraphicsProxyWidget, width: f64) void {
        qtc.QGraphicsLayoutItem_SetMinimumWidth(@ptrCast(self.asQGraphicsLayoutItem().ptr), @bitCast(width));
    }

    /// ### DEPRECATED: Use `minimumWidth` instead
    ///
    pub const MinimumWidth = minimumWidth;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn minimumWidth(self: QGraphicsProxyWidget) f64 {
        return qtc.QGraphicsLayoutItem_MinimumWidth(@ptrCast(self.asQGraphicsLayoutItem().ptr));
    }

    /// ### DEPRECATED: Use `setMinimumHeight` instead
    ///
    pub const SetMinimumHeight = setMinimumHeight;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` height: f64 `
    ///
    pub fn setMinimumHeight(self: QGraphicsProxyWidget, height: f64) void {
        qtc.QGraphicsLayoutItem_SetMinimumHeight(@ptrCast(self.asQGraphicsLayoutItem().ptr), @bitCast(height));
    }

    /// ### DEPRECATED: Use `minimumHeight` instead
    ///
    pub const MinimumHeight = minimumHeight;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn minimumHeight(self: QGraphicsProxyWidget) f64 {
        return qtc.QGraphicsLayoutItem_MinimumHeight(@ptrCast(self.asQGraphicsLayoutItem().ptr));
    }

    /// ### DEPRECATED: Use `setPreferredSize` instead
    ///
    pub const SetPreferredSize = setPreferredSize;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _size: QSizeF `
    ///
    pub fn setPreferredSize(self: QGraphicsProxyWidget, _size: anytype) void {
        comptime _ = @TypeOf(_size)._is_QSizeF;
        qtc.QGraphicsLayoutItem_SetPreferredSize(@ptrCast(self.asQGraphicsLayoutItem().ptr), @ptrCast(_size.ptr));
    }

    /// ### DEPRECATED: Use `setPreferredSize2` instead
    ///
    pub const SetPreferredSize2 = setPreferredSize2;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn setPreferredSize2(self: QGraphicsProxyWidget, w: f64, h: f64) void {
        qtc.QGraphicsLayoutItem_SetPreferredSize2(@ptrCast(self.asQGraphicsLayoutItem().ptr), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `preferredSize` instead
    ///
    pub const PreferredSize = preferredSize;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn preferredSize(self: QGraphicsProxyWidget) QSizeF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_PreferredSize(@ptrCast(self.asQGraphicsLayoutItem().ptr)) };
    }

    /// ### DEPRECATED: Use `setPreferredWidth` instead
    ///
    pub const SetPreferredWidth = setPreferredWidth;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` width: f64 `
    ///
    pub fn setPreferredWidth(self: QGraphicsProxyWidget, width: f64) void {
        qtc.QGraphicsLayoutItem_SetPreferredWidth(@ptrCast(self.asQGraphicsLayoutItem().ptr), @bitCast(width));
    }

    /// ### DEPRECATED: Use `preferredWidth` instead
    ///
    pub const PreferredWidth = preferredWidth;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn preferredWidth(self: QGraphicsProxyWidget) f64 {
        return qtc.QGraphicsLayoutItem_PreferredWidth(@ptrCast(self.asQGraphicsLayoutItem().ptr));
    }

    /// ### DEPRECATED: Use `setPreferredHeight` instead
    ///
    pub const SetPreferredHeight = setPreferredHeight;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` height: f64 `
    ///
    pub fn setPreferredHeight(self: QGraphicsProxyWidget, height: f64) void {
        qtc.QGraphicsLayoutItem_SetPreferredHeight(@ptrCast(self.asQGraphicsLayoutItem().ptr), @bitCast(height));
    }

    /// ### DEPRECATED: Use `preferredHeight` instead
    ///
    pub const PreferredHeight = preferredHeight;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn preferredHeight(self: QGraphicsProxyWidget) f64 {
        return qtc.QGraphicsLayoutItem_PreferredHeight(@ptrCast(self.asQGraphicsLayoutItem().ptr));
    }

    /// ### DEPRECATED: Use `setMaximumSize` instead
    ///
    pub const SetMaximumSize = setMaximumSize;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _size: QSizeF `
    ///
    pub fn setMaximumSize(self: QGraphicsProxyWidget, _size: anytype) void {
        comptime _ = @TypeOf(_size)._is_QSizeF;
        qtc.QGraphicsLayoutItem_SetMaximumSize(@ptrCast(self.asQGraphicsLayoutItem().ptr), @ptrCast(_size.ptr));
    }

    /// ### DEPRECATED: Use `setMaximumSize2` instead
    ///
    pub const SetMaximumSize2 = setMaximumSize2;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn setMaximumSize2(self: QGraphicsProxyWidget, w: f64, h: f64) void {
        qtc.QGraphicsLayoutItem_SetMaximumSize2(@ptrCast(self.asQGraphicsLayoutItem().ptr), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `maximumSize` instead
    ///
    pub const MaximumSize = maximumSize;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn maximumSize(self: QGraphicsProxyWidget) QSizeF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_MaximumSize(@ptrCast(self.asQGraphicsLayoutItem().ptr)) };
    }

    /// ### DEPRECATED: Use `setMaximumWidth` instead
    ///
    pub const SetMaximumWidth = setMaximumWidth;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` width: f64 `
    ///
    pub fn setMaximumWidth(self: QGraphicsProxyWidget, width: f64) void {
        qtc.QGraphicsLayoutItem_SetMaximumWidth(@ptrCast(self.asQGraphicsLayoutItem().ptr), @bitCast(width));
    }

    /// ### DEPRECATED: Use `maximumWidth` instead
    ///
    pub const MaximumWidth = maximumWidth;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn maximumWidth(self: QGraphicsProxyWidget) f64 {
        return qtc.QGraphicsLayoutItem_MaximumWidth(@ptrCast(self.asQGraphicsLayoutItem().ptr));
    }

    /// ### DEPRECATED: Use `setMaximumHeight` instead
    ///
    pub const SetMaximumHeight = setMaximumHeight;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` height: f64 `
    ///
    pub fn setMaximumHeight(self: QGraphicsProxyWidget, height: f64) void {
        qtc.QGraphicsLayoutItem_SetMaximumHeight(@ptrCast(self.asQGraphicsLayoutItem().ptr), @bitCast(height));
    }

    /// ### DEPRECATED: Use `maximumHeight` instead
    ///
    pub const MaximumHeight = maximumHeight;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn maximumHeight(self: QGraphicsProxyWidget) f64 {
        return qtc.QGraphicsLayoutItem_MaximumHeight(@ptrCast(self.asQGraphicsLayoutItem().ptr));
    }

    /// ### DEPRECATED: Use `geometry` instead
    ///
    pub const Geometry = geometry;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn geometry(self: QGraphicsProxyWidget) QRectF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_Geometry(@ptrCast(self.asQGraphicsLayoutItem().ptr)) };
    }

    /// ### DEPRECATED: Use `contentsRect` instead
    ///
    pub const ContentsRect = contentsRect;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn contentsRect(self: QGraphicsProxyWidget) QRectF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_ContentsRect(@ptrCast(self.asQGraphicsLayoutItem().ptr)) };
    }

    /// ### DEPRECATED: Use `effectiveSizeHint` instead
    ///
    pub const EffectiveSizeHint = effectiveSizeHint;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` which: qnamespace_enums.SizeHint `
    ///
    pub fn effectiveSizeHint(self: QGraphicsProxyWidget, which: i32) QSizeF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_EffectiveSizeHint(@ptrCast(self.asQGraphicsLayoutItem().ptr), @bitCast(which)) };
    }

    /// ### DEPRECATED: Use `parentLayoutItem` instead
    ///
    pub const ParentLayoutItem = parentLayoutItem;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#parentLayoutItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn parentLayoutItem(self: QGraphicsProxyWidget) QGraphicsLayoutItem {
        return .{ .ptr = qtc.QGraphicsLayoutItem_ParentLayoutItem(@ptrCast(self.asQGraphicsLayoutItem().ptr)) };
    }

    /// ### DEPRECATED: Use `setParentLayoutItem` instead
    ///
    pub const SetParentLayoutItem = setParentLayoutItem;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setParentLayoutItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _parent: QGraphicsLayoutItem `
    ///
    pub fn setParentLayoutItem(self: QGraphicsProxyWidget, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QGraphicsLayoutItem;
        const _parent_ = if (@hasDecl(@TypeOf(_parent), "asQGraphicsLayoutItem")) _parent.asQGraphicsLayoutItem() else _parent;
        qtc.QGraphicsLayoutItem_SetParentLayoutItem(@ptrCast(self.asQGraphicsLayoutItem().ptr), @ptrCast(_parent_.ptr));
    }

    /// ### DEPRECATED: Use `isLayout` instead
    ///
    pub const IsLayout = isLayout;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn isLayout(self: QGraphicsProxyWidget) bool {
        return qtc.QGraphicsLayoutItem_IsLayout(@ptrCast(self.asQGraphicsLayoutItem().ptr));
    }

    /// ### DEPRECATED: Use `graphicsItem` instead
    ///
    pub const GraphicsItem = graphicsItem;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#graphicsItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn graphicsItem(self: QGraphicsProxyWidget) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsLayoutItem_GraphicsItem(@ptrCast(self.asQGraphicsLayoutItem().ptr)) };
    }

    /// ### DEPRECATED: Use `ownedByLayout` instead
    ///
    pub const OwnedByLayout = ownedByLayout;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#ownedByLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn ownedByLayout(self: QGraphicsProxyWidget) bool {
        return qtc.QGraphicsLayoutItem_OwnedByLayout(@ptrCast(self.asQGraphicsLayoutItem().ptr));
    }

    /// ### DEPRECATED: Use `setSizePolicy3` instead
    ///
    pub const SetSizePolicy3 = setSizePolicy3;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` hPolicy: qsizepolicy_enums.Policy `
    ///
    /// ` vPolicy: qsizepolicy_enums.Policy `
    ///
    /// ` controlType: qsizepolicy_enums.ControlType `
    ///
    pub fn setSizePolicy3(self: QGraphicsProxyWidget, hPolicy: i32, vPolicy: i32, controlType: i32) void {
        qtc.QGraphicsLayoutItem_SetSizePolicy3(@ptrCast(self.asQGraphicsLayoutItem().ptr), @bitCast(hPolicy), @bitCast(vPolicy), @bitCast(controlType));
    }

    /// ### DEPRECATED: Use `effectiveSizeHint2` instead
    ///
    pub const EffectiveSizeHint2 = effectiveSizeHint2;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` which: qnamespace_enums.SizeHint `
    ///
    /// ` constraint: QSizeF `
    ///
    pub fn effectiveSizeHint2(self: QGraphicsProxyWidget, which: i32, constraint: anytype) QSizeF {
        comptime _ = @TypeOf(constraint)._is_QSizeF;
        return .{ .ptr = qtc.QGraphicsLayoutItem_EffectiveSizeHint2(@ptrCast(self.asQGraphicsLayoutItem().ptr), @bitCast(which), @ptrCast(constraint.ptr)) };
    }

    /// ### DEPRECATED: Use `getContentsMargins` instead
    ///
    pub const GetContentsMargins = getContentsMargins;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#getContentsMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` left: *f64 `
    ///
    /// ` top: *f64 `
    ///
    /// ` right: *f64 `
    ///
    /// ` bottom: *f64 `
    ///
    pub fn getContentsMargins(self: QGraphicsProxyWidget, left: *f64, top: *f64, right: *f64, bottom: *f64) void {
        qtc.QGraphicsProxyWidget_GetContentsMargins(@ptrCast(self.ptr), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// ### DEPRECATED: Use `superGetContentsMargins` instead
    ///
    pub const SuperGetContentsMargins = superGetContentsMargins;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#getContentsMargins)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` left: *f64 `
    ///
    /// ` top: *f64 `
    ///
    /// ` right: *f64 `
    ///
    /// ` bottom: *f64 `
    ///
    pub fn superGetContentsMargins(self: QGraphicsProxyWidget, left: *f64, top: *f64, right: *f64, bottom: *f64) void {
        qtc.QGraphicsProxyWidget_SuperGetContentsMargins(@ptrCast(self.ptr), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// ### DEPRECATED: Use `onGetContentsMargins` instead
    ///
    pub const OnGetContentsMargins = onGetContentsMargins;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#getContentsMargins)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget`
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, left: *f64, top: *f64, right: *f64, bottom: *f64) callconv(.c) void `
    ///
    pub fn onGetContentsMargins(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, *f64, *f64, *f64, *f64) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnGetContentsMargins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `paintWindowFrame` instead
    ///
    pub const PaintWindowFrame = paintWindowFrame;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#paintWindowFrame)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` painter: QPainter `
    ///
    /// ` option: QStyleOptionGraphicsItem `
    ///
    /// ` _widget: QWidget `
    ///
    pub fn paintWindowFrame(self: QGraphicsProxyWidget, painter: anytype, option: anytype, _widget: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(option)._is_QStyleOptionGraphicsItem;
        comptime _ = @TypeOf(_widget)._is_QWidget;
        qtc.QGraphicsProxyWidget_PaintWindowFrame(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(option.ptr), @ptrCast(_widget.ptr));
    }

    /// ### DEPRECATED: Use `superPaintWindowFrame` instead
    ///
    pub const SuperPaintWindowFrame = superPaintWindowFrame;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#paintWindowFrame)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` painter: QPainter `
    ///
    /// ` option: QStyleOptionGraphicsItem `
    ///
    /// ` _widget: QWidget `
    ///
    pub fn superPaintWindowFrame(self: QGraphicsProxyWidget, painter: anytype, option: anytype, _widget: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(option)._is_QStyleOptionGraphicsItem;
        comptime _ = @TypeOf(_widget)._is_QWidget;
        qtc.QGraphicsProxyWidget_SuperPaintWindowFrame(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(option.ptr), @ptrCast(_widget.ptr));
    }

    /// ### DEPRECATED: Use `onPaintWindowFrame` instead
    ///
    pub const OnPaintWindowFrame = onPaintWindowFrame;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#paintWindowFrame)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget`
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, painter: QPainter, option: QStyleOptionGraphicsItem, widget: QWidget) callconv(.c) void `
    ///
    pub fn onPaintWindowFrame(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, QPainter, QStyleOptionGraphicsItem, QWidget) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnPaintWindowFrame(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `boundingRect` instead
    ///
    pub const BoundingRect = boundingRect;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#boundingRect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn boundingRect(self: QGraphicsProxyWidget) QRectF {
        return .{ .ptr = qtc.QGraphicsProxyWidget_BoundingRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superBoundingRect` instead
    ///
    pub const SuperBoundingRect = superBoundingRect;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#boundingRect)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn superBoundingRect(self: QGraphicsProxyWidget) QRectF {
        return .{ .ptr = qtc.QGraphicsProxyWidget_SuperBoundingRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onBoundingRect` instead
    ///
    pub const OnBoundingRect = onBoundingRect;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#boundingRect)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget`
    ///
    /// ` callback: *const fn () callconv(.c) QRectF `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onBoundingRect(self: QGraphicsProxyWidget, callback: *const fn () callconv(.c) QRectF) void {
        qtc.QGraphicsProxyWidget_OnBoundingRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `shape` instead
    ///
    pub const Shape = shape;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#shape)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn shape(self: QGraphicsProxyWidget) QPainterPath {
        return .{ .ptr = qtc.QGraphicsProxyWidget_Shape(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superShape` instead
    ///
    pub const SuperShape = superShape;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#shape)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn superShape(self: QGraphicsProxyWidget) QPainterPath {
        return .{ .ptr = qtc.QGraphicsProxyWidget_SuperShape(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onShape` instead
    ///
    pub const OnShape = onShape;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#shape)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget`
    ///
    /// ` callback: *const fn () callconv(.c) QPainterPath `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onShape(self: QGraphicsProxyWidget, callback: *const fn () callconv(.c) QPainterPath) void {
        qtc.QGraphicsProxyWidget_OnShape(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `initStyleOption` instead
    ///
    pub const InitStyleOption = initStyleOption;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#initStyleOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` option: QStyleOption `
    ///
    pub fn initStyleOption(self: QGraphicsProxyWidget, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOption;
        qtc.QGraphicsProxyWidget_InitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// ### DEPRECATED: Use `superInitStyleOption` instead
    ///
    pub const SuperInitStyleOption = superInitStyleOption;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#initStyleOption)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` option: QStyleOption `
    ///
    pub fn superInitStyleOption(self: QGraphicsProxyWidget, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOption;
        qtc.QGraphicsProxyWidget_SuperInitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// ### DEPRECATED: Use `onInitStyleOption` instead
    ///
    pub const OnInitStyleOption = onInitStyleOption;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#initStyleOption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget`
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, option: QStyleOption) callconv(.c) void `
    ///
    pub fn onInitStyleOption(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, QStyleOption) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnInitStyleOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `updateGeometry` instead
    ///
    pub const UpdateGeometry = updateGeometry;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#updateGeometry)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn updateGeometry(self: QGraphicsProxyWidget) void {
        qtc.QGraphicsProxyWidget_UpdateGeometry(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superUpdateGeometry` instead
    ///
    pub const SuperUpdateGeometry = superUpdateGeometry;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#updateGeometry)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn superUpdateGeometry(self: QGraphicsProxyWidget) void {
        qtc.QGraphicsProxyWidget_SuperUpdateGeometry(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUpdateGeometry` instead
    ///
    pub const OnUpdateGeometry = onUpdateGeometry;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#updateGeometry)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onUpdateGeometry(self: QGraphicsProxyWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnUpdateGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `propertyChange` instead
    ///
    pub const PropertyChange = propertyChange;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#propertyChange)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` propertyName: []const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn propertyChange(self: QGraphicsProxyWidget, propertyName: []const u8, value: anytype) QVariant {
        const propertyName_str = qtc.libqt_string{
            .len = propertyName.len,
            .data = propertyName.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        return .{ .ptr = qtc.QGraphicsProxyWidget_PropertyChange(@ptrCast(self.ptr), propertyName_str, @ptrCast(value.ptr)) };
    }

    /// ### DEPRECATED: Use `superPropertyChange` instead
    ///
    pub const SuperPropertyChange = superPropertyChange;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#propertyChange)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` propertyName: []const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn superPropertyChange(self: QGraphicsProxyWidget, propertyName: []const u8, value: anytype) QVariant {
        const propertyName_str = qtc.libqt_string{
            .len = propertyName.len,
            .data = propertyName.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        return .{ .ptr = qtc.QGraphicsProxyWidget_SuperPropertyChange(@ptrCast(self.ptr), propertyName_str, @ptrCast(value.ptr)) };
    }

    /// ### DEPRECATED: Use `onPropertyChange` instead
    ///
    pub const OnPropertyChange = onPropertyChange;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#propertyChange)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget`
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, propertyName: [*:0]const u8, value: QVariant) callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onPropertyChange(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, [*:0]const u8, QVariant) callconv(.c) QVariant) void {
        qtc.QGraphicsProxyWidget_OnPropertyChange(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sceneEvent` instead
    ///
    pub const SceneEvent = sceneEvent;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#sceneEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QEvent `
    ///
    pub fn sceneEvent(self: QGraphicsProxyWidget, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QGraphicsProxyWidget_SceneEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superSceneEvent` instead
    ///
    pub const SuperSceneEvent = superSceneEvent;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#sceneEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superSceneEvent(self: QGraphicsProxyWidget, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QGraphicsProxyWidget_SuperSceneEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onSceneEvent` instead
    ///
    pub const OnSceneEvent = onSceneEvent;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#sceneEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget`
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, event: QEvent) callconv(.c) bool `
    ///
    pub fn onSceneEvent(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, QEvent) callconv(.c) bool) void {
        qtc.QGraphicsProxyWidget_OnSceneEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `windowFrameEvent` instead
    ///
    pub const WindowFrameEvent = windowFrameEvent;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` e: QEvent `
    ///
    pub fn windowFrameEvent(self: QGraphicsProxyWidget, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.QGraphicsProxyWidget_WindowFrameEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superWindowFrameEvent` instead
    ///
    pub const SuperWindowFrameEvent = superWindowFrameEvent;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` e: QEvent `
    ///
    pub fn superWindowFrameEvent(self: QGraphicsProxyWidget, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.QGraphicsProxyWidget_SuperWindowFrameEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onWindowFrameEvent` instead
    ///
    pub const OnWindowFrameEvent = onWindowFrameEvent;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget`
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, e: QEvent) callconv(.c) bool `
    ///
    pub fn onWindowFrameEvent(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, QEvent) callconv(.c) bool) void {
        qtc.QGraphicsProxyWidget_OnWindowFrameEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `windowFrameSectionAt` instead
    ///
    pub const WindowFrameSectionAt = windowFrameSectionAt;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameSectionAt)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _pos: QPointF `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowFrameSection `
    ///
    pub fn windowFrameSectionAt(self: QGraphicsProxyWidget, _pos: anytype) i32 {
        comptime _ = @TypeOf(_pos)._is_QPointF;
        return qtc.QGraphicsProxyWidget_WindowFrameSectionAt(@ptrCast(self.ptr), @ptrCast(_pos.ptr));
    }

    /// ### DEPRECATED: Use `superWindowFrameSectionAt` instead
    ///
    pub const SuperWindowFrameSectionAt = superWindowFrameSectionAt;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameSectionAt)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _pos: QPointF `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowFrameSection `
    ///
    pub fn superWindowFrameSectionAt(self: QGraphicsProxyWidget, _pos: anytype) i32 {
        comptime _ = @TypeOf(_pos)._is_QPointF;
        return qtc.QGraphicsProxyWidget_SuperWindowFrameSectionAt(@ptrCast(self.ptr), @ptrCast(_pos.ptr));
    }

    /// ### DEPRECATED: Use `onWindowFrameSectionAt` instead
    ///
    pub const OnWindowFrameSectionAt = onWindowFrameSectionAt;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameSectionAt)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget`
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, pos: QPointF) callconv(.c) i32 `
    ///
    pub fn onWindowFrameSectionAt(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, QPointF) callconv(.c) i32) void {
        qtc.QGraphicsProxyWidget_OnWindowFrameSectionAt(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `changeEvent` instead
    ///
    pub const ChangeEvent = changeEvent;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#changeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QEvent `
    ///
    pub fn changeEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QGraphicsProxyWidget_ChangeEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superChangeEvent` instead
    ///
    pub const SuperChangeEvent = superChangeEvent;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#changeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superChangeEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QGraphicsProxyWidget_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onChangeEvent` instead
    ///
    pub const OnChangeEvent = onChangeEvent;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#changeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget`
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, event: QEvent) callconv(.c) void `
    ///
    pub fn onChangeEvent(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, QEvent) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `closeEvent` instead
    ///
    pub const CloseEvent = closeEvent;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QCloseEvent `
    ///
    pub fn closeEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QCloseEvent;
        qtc.QGraphicsProxyWidget_CloseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superCloseEvent` instead
    ///
    pub const SuperCloseEvent = superCloseEvent;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#closeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QCloseEvent `
    ///
    pub fn superCloseEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QCloseEvent;
        qtc.QGraphicsProxyWidget_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onCloseEvent` instead
    ///
    pub const OnCloseEvent = onCloseEvent;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget`
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, event: QCloseEvent) callconv(.c) void `
    ///
    pub fn onCloseEvent(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, QCloseEvent) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `moveEvent` instead
    ///
    pub const MoveEvent = moveEvent;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QGraphicsSceneMoveEvent `
    ///
    pub fn moveEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneMoveEvent;
        qtc.QGraphicsProxyWidget_MoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superMoveEvent` instead
    ///
    pub const SuperMoveEvent = superMoveEvent;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#moveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QGraphicsSceneMoveEvent `
    ///
    pub fn superMoveEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QGraphicsSceneMoveEvent;
        qtc.QGraphicsProxyWidget_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMoveEvent` instead
    ///
    pub const OnMoveEvent = onMoveEvent;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget`
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, event: QGraphicsSceneMoveEvent) callconv(.c) void `
    ///
    pub fn onMoveEvent(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, QGraphicsSceneMoveEvent) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `polishEvent` instead
    ///
    pub const PolishEvent = polishEvent;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#polishEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn polishEvent(self: QGraphicsProxyWidget) void {
        qtc.QGraphicsProxyWidget_PolishEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superPolishEvent` instead
    ///
    pub const SuperPolishEvent = superPolishEvent;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#polishEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn superPolishEvent(self: QGraphicsProxyWidget) void {
        qtc.QGraphicsProxyWidget_SuperPolishEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onPolishEvent` instead
    ///
    pub const OnPolishEvent = onPolishEvent;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#polishEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onPolishEvent(self: QGraphicsProxyWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnPolishEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `grabKeyboardEvent` instead
    ///
    pub const GrabKeyboardEvent = grabKeyboardEvent;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#grabKeyboardEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QEvent `
    ///
    pub fn grabKeyboardEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QGraphicsProxyWidget_GrabKeyboardEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superGrabKeyboardEvent` instead
    ///
    pub const SuperGrabKeyboardEvent = superGrabKeyboardEvent;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#grabKeyboardEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superGrabKeyboardEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QGraphicsProxyWidget_SuperGrabKeyboardEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onGrabKeyboardEvent` instead
    ///
    pub const OnGrabKeyboardEvent = onGrabKeyboardEvent;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#grabKeyboardEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget`
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, event: QEvent) callconv(.c) void `
    ///
    pub fn onGrabKeyboardEvent(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, QEvent) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnGrabKeyboardEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `ungrabKeyboardEvent` instead
    ///
    pub const UngrabKeyboardEvent = ungrabKeyboardEvent;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabKeyboardEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QEvent `
    ///
    pub fn ungrabKeyboardEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QGraphicsProxyWidget_UngrabKeyboardEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superUngrabKeyboardEvent` instead
    ///
    pub const SuperUngrabKeyboardEvent = superUngrabKeyboardEvent;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabKeyboardEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superUngrabKeyboardEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QGraphicsProxyWidget_SuperUngrabKeyboardEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onUngrabKeyboardEvent` instead
    ///
    pub const OnUngrabKeyboardEvent = onUngrabKeyboardEvent;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabKeyboardEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget`
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, event: QEvent) callconv(.c) void `
    ///
    pub fn onUngrabKeyboardEvent(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, QEvent) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnUngrabKeyboardEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `timerEvent` instead
    ///
    pub const TimerEvent = timerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QGraphicsProxyWidget_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superTimerEvent` instead
    ///
    pub const SuperTimerEvent = superTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QGraphicsProxyWidget_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onTimerEvent` instead
    ///
    pub const OnTimerEvent = onTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget`
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, QTimerEvent) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `childEvent` instead
    ///
    pub const ChildEvent = childEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QGraphicsProxyWidget_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superChildEvent` instead
    ///
    pub const SuperChildEvent = superChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QGraphicsProxyWidget_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onChildEvent` instead
    ///
    pub const OnChildEvent = onChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget`
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, QChildEvent) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `customEvent` instead
    ///
    pub const CustomEvent = customEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QGraphicsProxyWidget_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superCustomEvent` instead
    ///
    pub const SuperCustomEvent = superCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QGraphicsProxyWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QGraphicsProxyWidget_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onCustomEvent` instead
    ///
    pub const OnCustomEvent = onCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget`
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, QEvent) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `connectNotify` instead
    ///
    pub const ConnectNotify = connectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QGraphicsProxyWidget, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsProxyWidget_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superConnectNotify` instead
    ///
    pub const SuperConnectNotify = superConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QGraphicsProxyWidget, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsProxyWidget_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onConnectNotify` instead
    ///
    pub const OnConnectNotify = onConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget`
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, QMetaMethod) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `disconnectNotify` instead
    ///
    pub const DisconnectNotify = disconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QGraphicsProxyWidget, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsProxyWidget_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superDisconnectNotify` instead
    ///
    pub const SuperDisconnectNotify = superDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QGraphicsProxyWidget, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsProxyWidget_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onDisconnectNotify` instead
    ///
    pub const OnDisconnectNotify = onDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget`
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, QMetaMethod) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `advance` instead
    ///
    pub const Advance = advance;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` phase: i32 `
    ///
    pub fn advance(self: QGraphicsProxyWidget, phase: i32) void {
        qtc.QGraphicsProxyWidget_Advance(@ptrCast(self.ptr), @bitCast(phase));
    }

    /// ### DEPRECATED: Use `superAdvance` instead
    ///
    pub const SuperAdvance = superAdvance;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` phase: i32 `
    ///
    pub fn superAdvance(self: QGraphicsProxyWidget, phase: i32) void {
        qtc.QGraphicsProxyWidget_SuperAdvance(@ptrCast(self.ptr), @bitCast(phase));
    }

    /// ### DEPRECATED: Use `onAdvance` instead
    ///
    pub const OnAdvance = onAdvance;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget`
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, phase: i32) callconv(.c) void `
    ///
    pub fn onAdvance(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, i32) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnAdvance(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `contains` instead
    ///
    pub const Contains = contains;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` point: QPointF `
    ///
    pub fn contains(self: QGraphicsProxyWidget, point: anytype) bool {
        comptime _ = @TypeOf(point)._is_QPointF;
        return qtc.QGraphicsProxyWidget_Contains(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// ### DEPRECATED: Use `superContains` instead
    ///
    pub const SuperContains = superContains;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` point: QPointF `
    ///
    pub fn superContains(self: QGraphicsProxyWidget, point: anytype) bool {
        comptime _ = @TypeOf(point)._is_QPointF;
        return qtc.QGraphicsProxyWidget_SuperContains(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// ### DEPRECATED: Use `onContains` instead
    ///
    pub const OnContains = onContains;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget`
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, point: QPointF) callconv(.c) bool `
    ///
    pub fn onContains(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, QPointF) callconv(.c) bool) void {
        qtc.QGraphicsProxyWidget_OnContains(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `collidesWithItem` instead
    ///
    pub const CollidesWithItem = collidesWithItem;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` other: QGraphicsItem `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    pub fn collidesWithItem(self: QGraphicsProxyWidget, other: anytype, mode: i32) bool {
        comptime _ = @TypeOf(other)._is_QGraphicsItem;
        const other_ = if (@hasDecl(@TypeOf(other), "asQGraphicsItem")) other.asQGraphicsItem() else other;
        return qtc.QGraphicsProxyWidget_CollidesWithItem(@ptrCast(self.ptr), @ptrCast(other_.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `superCollidesWithItem` instead
    ///
    pub const SuperCollidesWithItem = superCollidesWithItem;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` other: QGraphicsItem `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    pub fn superCollidesWithItem(self: QGraphicsProxyWidget, other: anytype, mode: i32) bool {
        comptime _ = @TypeOf(other)._is_QGraphicsItem;
        const other_ = if (@hasDecl(@TypeOf(other), "asQGraphicsItem")) other.asQGraphicsItem() else other;
        return qtc.QGraphicsProxyWidget_SuperCollidesWithItem(@ptrCast(self.ptr), @ptrCast(other_.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `onCollidesWithItem` instead
    ///
    pub const OnCollidesWithItem = onCollidesWithItem;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget`
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, other: QGraphicsItem, mode: qnamespace_enums.ItemSelectionMode) callconv(.c) bool `
    ///
    pub fn onCollidesWithItem(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, QGraphicsItem, i32) callconv(.c) bool) void {
        qtc.QGraphicsProxyWidget_OnCollidesWithItem(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `collidesWithPath` instead
    ///
    pub const CollidesWithPath = collidesWithPath;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` path: QPainterPath `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    pub fn collidesWithPath(self: QGraphicsProxyWidget, path: anytype, mode: i32) bool {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        return qtc.QGraphicsProxyWidget_CollidesWithPath(@ptrCast(self.ptr), @ptrCast(path.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `superCollidesWithPath` instead
    ///
    pub const SuperCollidesWithPath = superCollidesWithPath;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` path: QPainterPath `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    pub fn superCollidesWithPath(self: QGraphicsProxyWidget, path: anytype, mode: i32) bool {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        return qtc.QGraphicsProxyWidget_SuperCollidesWithPath(@ptrCast(self.ptr), @ptrCast(path.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `onCollidesWithPath` instead
    ///
    pub const OnCollidesWithPath = onCollidesWithPath;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget`
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, path: QPainterPath, mode: qnamespace_enums.ItemSelectionMode) callconv(.c) bool `
    ///
    pub fn onCollidesWithPath(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, QPainterPath, i32) callconv(.c) bool) void {
        qtc.QGraphicsProxyWidget_OnCollidesWithPath(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isObscuredBy` instead
    ///
    pub const IsObscuredBy = isObscuredBy;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` item: QGraphicsItem `
    ///
    pub fn isObscuredBy(self: QGraphicsProxyWidget, item: anytype) bool {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        const item_ = if (@hasDecl(@TypeOf(item), "asQGraphicsItem")) item.asQGraphicsItem() else item;
        return qtc.QGraphicsProxyWidget_IsObscuredBy(@ptrCast(self.ptr), @ptrCast(item_.ptr));
    }

    /// ### DEPRECATED: Use `superIsObscuredBy` instead
    ///
    pub const SuperIsObscuredBy = superIsObscuredBy;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` item: QGraphicsItem `
    ///
    pub fn superIsObscuredBy(self: QGraphicsProxyWidget, item: anytype) bool {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        const item_ = if (@hasDecl(@TypeOf(item), "asQGraphicsItem")) item.asQGraphicsItem() else item;
        return qtc.QGraphicsProxyWidget_SuperIsObscuredBy(@ptrCast(self.ptr), @ptrCast(item_.ptr));
    }

    /// ### DEPRECATED: Use `onIsObscuredBy` instead
    ///
    pub const OnIsObscuredBy = onIsObscuredBy;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget`
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, item: QGraphicsItem) callconv(.c) bool `
    ///
    pub fn onIsObscuredBy(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, QGraphicsItem) callconv(.c) bool) void {
        qtc.QGraphicsProxyWidget_OnIsObscuredBy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `opaqueArea` instead
    ///
    pub const OpaqueArea = opaqueArea;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn opaqueArea(self: QGraphicsProxyWidget) QPainterPath {
        return .{ .ptr = qtc.QGraphicsProxyWidget_OpaqueArea(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superOpaqueArea` instead
    ///
    pub const SuperOpaqueArea = superOpaqueArea;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn superOpaqueArea(self: QGraphicsProxyWidget) QPainterPath {
        return .{ .ptr = qtc.QGraphicsProxyWidget_SuperOpaqueArea(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onOpaqueArea` instead
    ///
    pub const OnOpaqueArea = onOpaqueArea;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget`
    ///
    /// ` callback: *const fn () callconv(.c) QPainterPath `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onOpaqueArea(self: QGraphicsProxyWidget, callback: *const fn () callconv(.c) QPainterPath) void {
        qtc.QGraphicsProxyWidget_OnOpaqueArea(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sceneEventFilter` instead
    ///
    pub const SceneEventFilter = sceneEventFilter;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` watched: QGraphicsItem `
    ///
    /// ` _event: QEvent `
    ///
    pub fn sceneEventFilter(self: QGraphicsProxyWidget, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QGraphicsItem;
        const watched_ = if (@hasDecl(@TypeOf(watched), "asQGraphicsItem")) watched.asQGraphicsItem() else watched;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QGraphicsProxyWidget_SceneEventFilter(@ptrCast(self.ptr), @ptrCast(watched_.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superSceneEventFilter` instead
    ///
    pub const SuperSceneEventFilter = superSceneEventFilter;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` watched: QGraphicsItem `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superSceneEventFilter(self: QGraphicsProxyWidget, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QGraphicsItem;
        const watched_ = if (@hasDecl(@TypeOf(watched), "asQGraphicsItem")) watched.asQGraphicsItem() else watched;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QGraphicsProxyWidget_SuperSceneEventFilter(@ptrCast(self.ptr), @ptrCast(watched_.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onSceneEventFilter` instead
    ///
    pub const OnSceneEventFilter = onSceneEventFilter;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget`
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, watched: QGraphicsItem, event: QEvent) callconv(.c) bool `
    ///
    pub fn onSceneEventFilter(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, QGraphicsItem, QEvent) callconv(.c) bool) void {
        qtc.QGraphicsProxyWidget_OnSceneEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `supportsExtension` instead
    ///
    pub const SupportsExtension = supportsExtension;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _extension: qgraphicsitem_enums.Extension `
    ///
    pub fn supportsExtension(self: QGraphicsProxyWidget, _extension: i32) bool {
        return qtc.QGraphicsProxyWidget_SupportsExtension(@ptrCast(self.ptr), @bitCast(_extension));
    }

    /// ### DEPRECATED: Use `superSupportsExtension` instead
    ///
    pub const SuperSupportsExtension = superSupportsExtension;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _extension: qgraphicsitem_enums.Extension `
    ///
    pub fn superSupportsExtension(self: QGraphicsProxyWidget, _extension: i32) bool {
        return qtc.QGraphicsProxyWidget_SuperSupportsExtension(@ptrCast(self.ptr), @bitCast(_extension));
    }

    /// ### DEPRECATED: Use `onSupportsExtension` instead
    ///
    pub const OnSupportsExtension = onSupportsExtension;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget`
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, extension: qgraphicsitem_enums.Extension) callconv(.c) bool `
    ///
    pub fn onSupportsExtension(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, i32) callconv(.c) bool) void {
        qtc.QGraphicsProxyWidget_OnSupportsExtension(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setExtension` instead
    ///
    pub const SetExtension = setExtension;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _extension: qgraphicsitem_enums.Extension `
    ///
    /// ` variant: QVariant `
    ///
    pub fn setExtension(self: QGraphicsProxyWidget, _extension: i32, variant: anytype) void {
        comptime _ = @TypeOf(variant)._is_QVariant;
        qtc.QGraphicsProxyWidget_SetExtension(@ptrCast(self.ptr), @bitCast(_extension), @ptrCast(variant.ptr));
    }

    /// ### DEPRECATED: Use `superSetExtension` instead
    ///
    pub const SuperSetExtension = superSetExtension;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _extension: qgraphicsitem_enums.Extension `
    ///
    /// ` variant: QVariant `
    ///
    pub fn superSetExtension(self: QGraphicsProxyWidget, _extension: i32, variant: anytype) void {
        comptime _ = @TypeOf(variant)._is_QVariant;
        qtc.QGraphicsProxyWidget_SuperSetExtension(@ptrCast(self.ptr), @bitCast(_extension), @ptrCast(variant.ptr));
    }

    /// ### DEPRECATED: Use `onSetExtension` instead
    ///
    pub const OnSetExtension = onSetExtension;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget`
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, extension: qgraphicsitem_enums.Extension, variant: QVariant) callconv(.c) void `
    ///
    pub fn onSetExtension(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, i32, QVariant) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnSetExtension(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `extension` instead
    ///
    pub const Extension = extension;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` variant: QVariant `
    ///
    pub fn extension(self: QGraphicsProxyWidget, variant: anytype) QVariant {
        comptime _ = @TypeOf(variant)._is_QVariant;
        return .{ .ptr = qtc.QGraphicsProxyWidget_Extension(@ptrCast(self.ptr), @ptrCast(variant.ptr)) };
    }

    /// ### DEPRECATED: Use `superExtension` instead
    ///
    pub const SuperExtension = superExtension;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` variant: QVariant `
    ///
    pub fn superExtension(self: QGraphicsProxyWidget, variant: anytype) QVariant {
        comptime _ = @TypeOf(variant)._is_QVariant;
        return .{ .ptr = qtc.QGraphicsProxyWidget_SuperExtension(@ptrCast(self.ptr), @ptrCast(variant.ptr)) };
    }

    /// ### DEPRECATED: Use `onExtension` instead
    ///
    pub const OnExtension = onExtension;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget`
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, variant: QVariant) callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onExtension(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, QVariant) callconv(.c) QVariant) void {
        qtc.QGraphicsProxyWidget_OnExtension(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn isEmpty(self: QGraphicsProxyWidget) bool {
        return qtc.QGraphicsProxyWidget_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superIsEmpty` instead
    ///
    pub const SuperIsEmpty = superIsEmpty;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn superIsEmpty(self: QGraphicsProxyWidget) bool {
        return qtc.QGraphicsProxyWidget_SuperIsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsEmpty` instead
    ///
    pub const OnIsEmpty = onIsEmpty;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onIsEmpty(self: QGraphicsProxyWidget, callback: *const fn () callconv(.c) bool) void {
        qtc.QGraphicsProxyWidget_OnIsEmpty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `updateMicroFocus` instead
    ///
    pub const UpdateMicroFocus = updateMicroFocus;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn updateMicroFocus(self: QGraphicsProxyWidget) void {
        qtc.QGraphicsProxyWidget_UpdateMicroFocus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superUpdateMicroFocus` instead
    ///
    pub const SuperUpdateMicroFocus = superUpdateMicroFocus;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn superUpdateMicroFocus(self: QGraphicsProxyWidget) void {
        qtc.QGraphicsProxyWidget_SuperUpdateMicroFocus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUpdateMicroFocus` instead
    ///
    pub const OnUpdateMicroFocus = onUpdateMicroFocus;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onUpdateMicroFocus(self: QGraphicsProxyWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sender` instead
    ///
    pub const Sender = sender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn sender(self: QGraphicsProxyWidget) QObject {
        return .{ .ptr = qtc.QGraphicsProxyWidget_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSender` instead
    ///
    pub const SuperSender = superSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn superSender(self: QGraphicsProxyWidget) QObject {
        return .{ .ptr = qtc.QGraphicsProxyWidget_SuperSender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSender` instead
    ///
    pub const OnSender = onSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QGraphicsProxyWidget, callback: *const fn () callconv(.c) QObject) void {
        qtc.QGraphicsProxyWidget_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `senderSignalIndex` instead
    ///
    pub const SenderSignalIndex = senderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn senderSignalIndex(self: QGraphicsProxyWidget) i32 {
        return qtc.QGraphicsProxyWidget_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSenderSignalIndex` instead
    ///
    pub const SuperSenderSignalIndex = superSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn superSenderSignalIndex(self: QGraphicsProxyWidget) i32 {
        return qtc.QGraphicsProxyWidget_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSenderSignalIndex` instead
    ///
    pub const OnSenderSignalIndex = onSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QGraphicsProxyWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.QGraphicsProxyWidget_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `receivers` instead
    ///
    pub const Receivers = receivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QGraphicsProxyWidget, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGraphicsProxyWidget_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `superReceivers` instead
    ///
    pub const SuperReceivers = superReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QGraphicsProxyWidget, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGraphicsProxyWidget_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `onReceivers` instead
    ///
    pub const OnReceivers = onReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget`
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, [*:0]const u8) callconv(.c) i32) void {
        qtc.QGraphicsProxyWidget_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isSignalConnected` instead
    ///
    pub const IsSignalConnected = isSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QGraphicsProxyWidget, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QGraphicsProxyWidget_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superIsSignalConnected` instead
    ///
    pub const SuperIsSignalConnected = superIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QGraphicsProxyWidget, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QGraphicsProxyWidget_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onIsSignalConnected` instead
    ///
    pub const OnIsSignalConnected = onIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget`
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, QMetaMethod) callconv(.c) bool) void {
        qtc.QGraphicsProxyWidget_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `addToIndex` instead
    ///
    pub const AddToIndex = addToIndex;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn addToIndex(self: QGraphicsProxyWidget) void {
        qtc.QGraphicsProxyWidget_AddToIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superAddToIndex` instead
    ///
    pub const SuperAddToIndex = superAddToIndex;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn superAddToIndex(self: QGraphicsProxyWidget) void {
        qtc.QGraphicsProxyWidget_SuperAddToIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAddToIndex` instead
    ///
    pub const OnAddToIndex = onAddToIndex;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onAddToIndex(self: QGraphicsProxyWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnAddToIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `removeFromIndex` instead
    ///
    pub const RemoveFromIndex = removeFromIndex;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn removeFromIndex(self: QGraphicsProxyWidget) void {
        qtc.QGraphicsProxyWidget_RemoveFromIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superRemoveFromIndex` instead
    ///
    pub const SuperRemoveFromIndex = superRemoveFromIndex;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn superRemoveFromIndex(self: QGraphicsProxyWidget) void {
        qtc.QGraphicsProxyWidget_SuperRemoveFromIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onRemoveFromIndex` instead
    ///
    pub const OnRemoveFromIndex = onRemoveFromIndex;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onRemoveFromIndex(self: QGraphicsProxyWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnRemoveFromIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `prepareGeometryChange` instead
    ///
    pub const PrepareGeometryChange = prepareGeometryChange;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn prepareGeometryChange(self: QGraphicsProxyWidget) void {
        qtc.QGraphicsProxyWidget_PrepareGeometryChange(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superPrepareGeometryChange` instead
    ///
    pub const SuperPrepareGeometryChange = superPrepareGeometryChange;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn superPrepareGeometryChange(self: QGraphicsProxyWidget) void {
        qtc.QGraphicsProxyWidget_SuperPrepareGeometryChange(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onPrepareGeometryChange` instead
    ///
    pub const OnPrepareGeometryChange = onPrepareGeometryChange;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onPrepareGeometryChange(self: QGraphicsProxyWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnPrepareGeometryChange(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setGraphicsItem` instead
    ///
    pub const SetGraphicsItem = setGraphicsItem;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` item: QGraphicsItem `
    ///
    pub fn setGraphicsItem(self: QGraphicsProxyWidget, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        const item_ = if (@hasDecl(@TypeOf(item), "asQGraphicsItem")) item.asQGraphicsItem() else item;
        qtc.QGraphicsProxyWidget_SetGraphicsItem(@ptrCast(self.ptr), @ptrCast(item_.ptr));
    }

    /// ### DEPRECATED: Use `superSetGraphicsItem` instead
    ///
    pub const SuperSetGraphicsItem = superSetGraphicsItem;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` item: QGraphicsItem `
    ///
    pub fn superSetGraphicsItem(self: QGraphicsProxyWidget, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        const item_ = if (@hasDecl(@TypeOf(item), "asQGraphicsItem")) item.asQGraphicsItem() else item;
        qtc.QGraphicsProxyWidget_SuperSetGraphicsItem(@ptrCast(self.ptr), @ptrCast(item_.ptr));
    }

    /// ### DEPRECATED: Use `onSetGraphicsItem` instead
    ///
    pub const OnSetGraphicsItem = onSetGraphicsItem;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget`
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, item: QGraphicsItem) callconv(.c) void `
    ///
    pub fn onSetGraphicsItem(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, QGraphicsItem) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnSetGraphicsItem(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setOwnedByLayout` instead
    ///
    pub const SetOwnedByLayout = setOwnedByLayout;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _ownedByLayout: bool `
    ///
    pub fn setOwnedByLayout(self: QGraphicsProxyWidget, _ownedByLayout: bool) void {
        qtc.QGraphicsProxyWidget_SetOwnedByLayout(@ptrCast(self.ptr), _ownedByLayout);
    }

    /// ### DEPRECATED: Use `superSetOwnedByLayout` instead
    ///
    pub const SuperSetOwnedByLayout = superSetOwnedByLayout;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` _ownedByLayout: bool `
    ///
    pub fn superSetOwnedByLayout(self: QGraphicsProxyWidget, _ownedByLayout: bool) void {
        qtc.QGraphicsProxyWidget_SuperSetOwnedByLayout(@ptrCast(self.ptr), _ownedByLayout);
    }

    /// ### DEPRECATED: Use `onSetOwnedByLayout` instead
    ///
    pub const OnSetOwnedByLayout = onSetOwnedByLayout;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsProxyWidget`
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, ownedByLayout: bool) callconv(.c) void `
    ///
    pub fn onSetOwnedByLayout(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, bool) callconv(.c) void) void {
        qtc.QGraphicsProxyWidget_OnSetOwnedByLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsProxyWidget `
    ///
    /// ` callback: *const fn (self: QGraphicsProxyWidget, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QGraphicsProxyWidget, callback: *const fn (QGraphicsProxyWidget, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#dtor.QGraphicsProxyWidget)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QGraphicsProxyWidget `
    ///
    pub fn delete(self: QGraphicsProxyWidget) void {
        qtc.QGraphicsProxyWidget_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#public-types)
pub const enums = struct {
    pub const QGraphicsProxyWidget = enum {
        pub const Type: i32 = 12;
    };
};
