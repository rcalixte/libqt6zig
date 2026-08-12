const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QBrush = @import("libqt6").QBrush;
const QChildEvent = @import("libqt6").QChildEvent;
const QColor = @import("libqt6").QColor;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPainter = @import("libqt6").QPainter;
const QPixmap = @import("libqt6").QPixmap;
const QPoint = @import("libqt6").QPoint;
const QPointF = @import("libqt6").QPointF;
const QRectF = @import("libqt6").QRectF;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qgraphicseffect_enums = enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html)
pub const QGraphicsEffect = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QGraphicsEffect,

    pub const _is_QGraphicsEffect = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QGraphicsEffect object in C++ memory
    ///
    pub fn new() QGraphicsEffect {
        return .{ .ptr = qtc.QGraphicsEffect_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QGraphicsEffect object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QGraphicsEffect {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QGraphicsEffect_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    pub fn metaObject(self: QGraphicsEffect) QMetaObject {
        return .{ .ptr = qtc.QGraphicsEffect_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QGraphicsEffect `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QGraphicsEffect, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QGraphicsEffect_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsEffect `
    ///
    pub fn superMetaObject(self: QGraphicsEffect) QMetaObject {
        return .{ .ptr = qtc.QGraphicsEffect_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QGraphicsEffect, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGraphicsEffect_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsEffect, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QGraphicsEffect, callback: *const fn (QGraphicsEffect, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QGraphicsEffect_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QGraphicsEffect, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGraphicsEffect_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QGraphicsEffect, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGraphicsEffect_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsEffect, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QGraphicsEffect, callback: *const fn (QGraphicsEffect, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QGraphicsEffect_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QGraphicsEffect, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGraphicsEffect_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGraphicsEffect.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `boundingRectFor` instead
    ///
    pub const BoundingRectFor = boundingRectFor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRectFor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    /// ` sourceRect: QRectF `
    ///
    pub fn boundingRectFor(self: QGraphicsEffect, sourceRect: anytype) QRectF {
        comptime _ = @TypeOf(sourceRect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsEffect_BoundingRectFor(@ptrCast(self.ptr), @ptrCast(sourceRect.ptr)) };
    }

    /// ### DEPRECATED: Use `onBoundingRectFor` instead
    ///
    pub const OnBoundingRectFor = onBoundingRectFor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRectFor)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsEffect, sourceRect: QRectF) callconv(.c) QRectF `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onBoundingRectFor(self: QGraphicsEffect, callback: *const fn (QGraphicsEffect, QRectF) callconv(.c) QRectF) void {
        qtc.QGraphicsEffect_OnBoundingRectFor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superBoundingRectFor` instead
    ///
    pub const SuperBoundingRectFor = superBoundingRectFor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRectFor)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    /// ` sourceRect: QRectF `
    ///
    pub fn superBoundingRectFor(self: QGraphicsEffect, sourceRect: anytype) QRectF {
        comptime _ = @TypeOf(sourceRect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsEffect_SuperBoundingRectFor(@ptrCast(self.ptr), @ptrCast(sourceRect.ptr)) };
    }

    /// ### DEPRECATED: Use `boundingRect` instead
    ///
    pub const BoundingRect = boundingRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    pub fn boundingRect(self: QGraphicsEffect) QRectF {
        return .{ .ptr = qtc.QGraphicsEffect_BoundingRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isEnabled` instead
    ///
    pub const IsEnabled = isEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    pub fn isEnabled(self: QGraphicsEffect) bool {
        return qtc.QGraphicsEffect_IsEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setEnabled` instead
    ///
    pub const SetEnabled = setEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    /// ` enable: bool `
    ///
    pub fn setEnabled(self: QGraphicsEffect, enable: bool) void {
        qtc.QGraphicsEffect_SetEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `update` instead
    ///
    pub const Update = update;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    pub fn update(self: QGraphicsEffect) void {
        qtc.QGraphicsEffect_Update(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `enabledChanged` instead
    ///
    pub const EnabledChanged = enabledChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#enabledChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    /// ` enabled: bool `
    ///
    pub fn enabledChanged(self: QGraphicsEffect, enabled: bool) void {
        qtc.QGraphicsEffect_EnabledChanged(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `onEnabledChanged` instead
    ///
    pub const OnEnabledChanged = onEnabledChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#enabledChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsEffect, enabled: bool) callconv(.c) void `
    ///
    pub fn onEnabledChanged(self: QGraphicsEffect, callback: *const fn (QGraphicsEffect, bool) callconv(.c) void) void {
        qtc.QGraphicsEffect_Connect_EnabledChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `draw` instead
    ///
    pub const Draw = draw;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#draw)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    /// ` painter: QPainter `
    ///
    pub fn draw(self: QGraphicsEffect, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QGraphicsEffect_Draw(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// ### DEPRECATED: Use `onDraw` instead
    ///
    pub const OnDraw = onDraw;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#draw)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsEffect, painter: QPainter) callconv(.c) void `
    ///
    pub fn onDraw(self: QGraphicsEffect, callback: *const fn (QGraphicsEffect, QPainter) callconv(.c) void) void {
        qtc.QGraphicsEffect_OnDraw(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDraw` instead
    ///
    pub const SuperDraw = superDraw;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#draw)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    /// ` painter: QPainter `
    ///
    pub fn superDraw(self: QGraphicsEffect, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QGraphicsEffect_SuperDraw(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// ### DEPRECATED: Use `sourceChanged` instead
    ///
    pub const SourceChanged = sourceChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    /// ` flags: flag of qgraphicseffect_enums.ChangeFlag `
    ///
    pub fn sourceChanged(self: QGraphicsEffect, flags: i32) void {
        qtc.QGraphicsEffect_SourceChanged(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `onSourceChanged` instead
    ///
    pub const OnSourceChanged = onSourceChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsEffect, flags: flag of qgraphicseffect_enums.ChangeFlag) callconv(.c) void `
    ///
    pub fn onSourceChanged(self: QGraphicsEffect, callback: *const fn (QGraphicsEffect, i32) callconv(.c) void) void {
        qtc.QGraphicsEffect_OnSourceChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSourceChanged` instead
    ///
    pub const SuperSourceChanged = superSourceChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    /// ` flags: flag of qgraphicseffect_enums.ChangeFlag `
    ///
    pub fn superSourceChanged(self: QGraphicsEffect, flags: i32) void {
        qtc.QGraphicsEffect_SuperSourceChanged(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `updateBoundingRect` instead
    ///
    pub const UpdateBoundingRect = updateBoundingRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    pub fn updateBoundingRect(self: QGraphicsEffect) void {
        qtc.QGraphicsEffect_UpdateBoundingRect(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUpdateBoundingRect` instead
    ///
    pub const OnUpdateBoundingRect = onUpdateBoundingRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsEffect `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onUpdateBoundingRect(self: QGraphicsEffect, callback: *const fn () callconv(.c) void) void {
        qtc.QGraphicsEffect_OnUpdateBoundingRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUpdateBoundingRect` instead
    ///
    pub const SuperUpdateBoundingRect = superUpdateBoundingRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    pub fn superUpdateBoundingRect(self: QGraphicsEffect) void {
        qtc.QGraphicsEffect_SuperUpdateBoundingRect(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `sourceIsPixmap` instead
    ///
    pub const SourceIsPixmap = sourceIsPixmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    pub fn sourceIsPixmap(self: QGraphicsEffect) bool {
        return qtc.QGraphicsEffect_SourceIsPixmap(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSourceIsPixmap` instead
    ///
    pub const OnSourceIsPixmap = onSourceIsPixmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsEffect `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onSourceIsPixmap(self: QGraphicsEffect, callback: *const fn () callconv(.c) bool) void {
        qtc.QGraphicsEffect_OnSourceIsPixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSourceIsPixmap` instead
    ///
    pub const SuperSourceIsPixmap = superSourceIsPixmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    pub fn superSourceIsPixmap(self: QGraphicsEffect) bool {
        return qtc.QGraphicsEffect_SuperSourceIsPixmap(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `sourceBoundingRect` instead
    ///
    pub const SourceBoundingRect = sourceBoundingRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    pub fn sourceBoundingRect(self: QGraphicsEffect) QRectF {
        return .{ .ptr = qtc.QGraphicsEffect_SourceBoundingRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSourceBoundingRect` instead
    ///
    pub const OnSourceBoundingRect = onSourceBoundingRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsEffect `
    ///
    /// ` callback: *const fn () callconv(.c) QRectF `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSourceBoundingRect(self: QGraphicsEffect, callback: *const fn () callconv(.c) QRectF) void {
        qtc.QGraphicsEffect_OnSourceBoundingRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSourceBoundingRect` instead
    ///
    pub const SuperSourceBoundingRect = superSourceBoundingRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    pub fn superSourceBoundingRect(self: QGraphicsEffect) QRectF {
        return .{ .ptr = qtc.QGraphicsEffect_SuperSourceBoundingRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `drawSource` instead
    ///
    pub const DrawSource = drawSource;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    /// ` painter: QPainter `
    ///
    pub fn drawSource(self: QGraphicsEffect, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QGraphicsEffect_DrawSource(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// ### DEPRECATED: Use `onDrawSource` instead
    ///
    pub const OnDrawSource = onDrawSource;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsEffect, painter: QPainter) callconv(.c) void `
    ///
    pub fn onDrawSource(self: QGraphicsEffect, callback: *const fn (QGraphicsEffect, QPainter) callconv(.c) void) void {
        qtc.QGraphicsEffect_OnDrawSource(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDrawSource` instead
    ///
    pub const SuperDrawSource = superDrawSource;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    /// ` painter: QPainter `
    ///
    pub fn superDrawSource(self: QGraphicsEffect, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QGraphicsEffect_SuperDrawSource(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// ### DEPRECATED: Use `sourcePixmap` instead
    ///
    pub const SourcePixmap = sourcePixmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    pub fn sourcePixmap(self: QGraphicsEffect) QPixmap {
        return .{ .ptr = qtc.QGraphicsEffect_SourcePixmap(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSourcePixmap` instead
    ///
    pub const OnSourcePixmap = onSourcePixmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsEffect `
    ///
    /// ` callback: *const fn () callconv(.c) QPixmap `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSourcePixmap(self: QGraphicsEffect, callback: *const fn () callconv(.c) QPixmap) void {
        qtc.QGraphicsEffect_OnSourcePixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSourcePixmap` instead
    ///
    pub const SuperSourcePixmap = superSourcePixmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    pub fn superSourcePixmap(self: QGraphicsEffect) QPixmap {
        return .{ .ptr = qtc.QGraphicsEffect_SuperSourcePixmap(@ptrCast(self.ptr)) };
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGraphicsEffect.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGraphicsEffect.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `sourceBoundingRect1` instead
    ///
    pub const SourceBoundingRect1 = sourceBoundingRect1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    /// ` system: qnamespace_enums.CoordinateSystem `
    ///
    pub fn sourceBoundingRect1(self: QGraphicsEffect, system: i32) QRectF {
        return .{ .ptr = qtc.QGraphicsEffect_SourceBoundingRect1(@ptrCast(self.ptr), @bitCast(system)) };
    }

    /// ### DEPRECATED: Use `onSourceBoundingRect1` instead
    ///
    pub const OnSourceBoundingRect1 = onSourceBoundingRect1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsEffect, system: qnamespace_enums.CoordinateSystem) callconv(.c) QRectF `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSourceBoundingRect1(self: QGraphicsEffect, callback: *const fn (QGraphicsEffect, i32) callconv(.c) QRectF) void {
        qtc.QGraphicsEffect_OnSourceBoundingRect1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSourceBoundingRect1` instead
    ///
    pub const SuperSourceBoundingRect1 = superSourceBoundingRect1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    /// ` system: qnamespace_enums.CoordinateSystem `
    ///
    pub fn superSourceBoundingRect1(self: QGraphicsEffect, system: i32) QRectF {
        return .{ .ptr = qtc.QGraphicsEffect_SuperSourceBoundingRect1(@ptrCast(self.ptr), @bitCast(system)) };
    }

    /// ### DEPRECATED: Use `sourcePixmap1` instead
    ///
    pub const SourcePixmap1 = sourcePixmap1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    /// ` system: qnamespace_enums.CoordinateSystem `
    ///
    pub fn sourcePixmap1(self: QGraphicsEffect, system: i32) QPixmap {
        return .{ .ptr = qtc.QGraphicsEffect_SourcePixmap1(@ptrCast(self.ptr), @bitCast(system)) };
    }

    /// ### DEPRECATED: Use `onSourcePixmap1` instead
    ///
    pub const OnSourcePixmap1 = onSourcePixmap1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsEffect, system: qnamespace_enums.CoordinateSystem) callconv(.c) QPixmap `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSourcePixmap1(self: QGraphicsEffect, callback: *const fn (QGraphicsEffect, i32) callconv(.c) QPixmap) void {
        qtc.QGraphicsEffect_OnSourcePixmap1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSourcePixmap1` instead
    ///
    pub const SuperSourcePixmap1 = superSourcePixmap1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    /// ` system: qnamespace_enums.CoordinateSystem `
    ///
    pub fn superSourcePixmap1(self: QGraphicsEffect, system: i32) QPixmap {
        return .{ .ptr = qtc.QGraphicsEffect_SuperSourcePixmap1(@ptrCast(self.ptr), @bitCast(system)) };
    }

    /// ### DEPRECATED: Use `sourcePixmap2` instead
    ///
    pub const SourcePixmap2 = sourcePixmap2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    /// ` system: qnamespace_enums.CoordinateSystem `
    ///
    /// ` offset: QPoint `
    ///
    pub fn sourcePixmap2(self: QGraphicsEffect, system: i32, offset: anytype) QPixmap {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QGraphicsEffect_SourcePixmap2(@ptrCast(self.ptr), @bitCast(system), @ptrCast(offset.ptr)) };
    }

    /// ### DEPRECATED: Use `onSourcePixmap2` instead
    ///
    pub const OnSourcePixmap2 = onSourcePixmap2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsEffect, system: qnamespace_enums.CoordinateSystem, offset: QPoint) callconv(.c) QPixmap `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSourcePixmap2(self: QGraphicsEffect, callback: *const fn (QGraphicsEffect, i32, QPoint) callconv(.c) QPixmap) void {
        qtc.QGraphicsEffect_OnSourcePixmap2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSourcePixmap2` instead
    ///
    pub const SuperSourcePixmap2 = superSourcePixmap2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    /// ` system: qnamespace_enums.CoordinateSystem `
    ///
    /// ` offset: QPoint `
    ///
    pub fn superSourcePixmap2(self: QGraphicsEffect, system: i32, offset: anytype) QPixmap {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QGraphicsEffect_SuperSourcePixmap2(@ptrCast(self.ptr), @bitCast(system), @ptrCast(offset.ptr)) };
    }

    /// ### DEPRECATED: Use `sourcePixmap3` instead
    ///
    pub const SourcePixmap3 = sourcePixmap3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    /// ` system: qnamespace_enums.CoordinateSystem `
    ///
    /// ` offset: QPoint `
    ///
    /// ` mode: qgraphicseffect_enums.PixmapPadMode `
    ///
    pub fn sourcePixmap3(self: QGraphicsEffect, system: i32, offset: anytype, mode: i32) QPixmap {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QGraphicsEffect_SourcePixmap3(@ptrCast(self.ptr), @bitCast(system), @ptrCast(offset.ptr), @bitCast(mode)) };
    }

    /// ### DEPRECATED: Use `onSourcePixmap3` instead
    ///
    pub const OnSourcePixmap3 = onSourcePixmap3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsEffect, system: qnamespace_enums.CoordinateSystem, offset: QPoint, mode: qgraphicseffect_enums.PixmapPadMode) callconv(.c) QPixmap `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSourcePixmap3(self: QGraphicsEffect, callback: *const fn (QGraphicsEffect, i32, QPoint, i32) callconv(.c) QPixmap) void {
        qtc.QGraphicsEffect_OnSourcePixmap3(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSourcePixmap3` instead
    ///
    pub const SuperSourcePixmap3 = superSourcePixmap3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    /// ` system: qnamespace_enums.CoordinateSystem `
    ///
    /// ` offset: QPoint `
    ///
    /// ` mode: qgraphicseffect_enums.PixmapPadMode `
    ///
    pub fn superSourcePixmap3(self: QGraphicsEffect, system: i32, offset: anytype, mode: i32) QPixmap {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QGraphicsEffect_SuperSourcePixmap3(@ptrCast(self.ptr), @bitCast(system), @ptrCast(offset.ptr), @bitCast(mode)) };
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
    /// ` self: QGraphicsEffect `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QGraphicsEffect, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGraphicsEffect.objectName: Memory allocation failed");
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
    /// ` self: QGraphicsEffect `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QGraphicsEffect, name: []const u8) void {
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
    /// ` self: QGraphicsEffect `
    ///
    pub fn isWidgetType(self: QGraphicsEffect) bool {
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
    /// ` self: QGraphicsEffect `
    ///
    pub fn isWindowType(self: QGraphicsEffect) bool {
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
    /// ` self: QGraphicsEffect `
    ///
    pub fn isQuickItemType(self: QGraphicsEffect) bool {
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
    /// ` self: QGraphicsEffect `
    ///
    pub fn signalsBlocked(self: QGraphicsEffect) bool {
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
    /// ` self: QGraphicsEffect `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QGraphicsEffect, b: bool) bool {
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
    /// ` self: QGraphicsEffect `
    ///
    pub fn thread(self: QGraphicsEffect) QThread {
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
    /// ` self: QGraphicsEffect `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QGraphicsEffect, _thread: anytype) bool {
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
    /// ` self: QGraphicsEffect `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QGraphicsEffect, interval: i32) i32 {
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
    /// ` self: QGraphicsEffect `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QGraphicsEffect, time: i64) i32 {
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
    /// ` self: QGraphicsEffect `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QGraphicsEffect, id: i32) void {
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
    /// ` self: QGraphicsEffect `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QGraphicsEffect, id: i32) void {
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
    /// ` self: QGraphicsEffect `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QGraphicsEffect, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QGraphicsEffect.children: Memory allocation failed");
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
    /// ` self: QGraphicsEffect `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QGraphicsEffect, _parent: anytype) void {
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
    /// ` self: QGraphicsEffect `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QGraphicsEffect, filterObj: anytype) void {
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
    /// ` self: QGraphicsEffect `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QGraphicsEffect, obj: anytype) void {
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
    /// ` self: QGraphicsEffect `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QGraphicsEffect, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QGraphicsEffect `
    ///
    pub fn disconnect3(self: QGraphicsEffect) bool {
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
    /// ` self: QGraphicsEffect `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QGraphicsEffect, receiver: anytype) bool {
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
    /// ` self: QGraphicsEffect `
    ///
    pub fn dumpObjectTree(self: QGraphicsEffect) void {
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
    /// ` self: QGraphicsEffect `
    ///
    pub fn dumpObjectInfo(self: QGraphicsEffect) void {
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
    /// ` self: QGraphicsEffect `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QGraphicsEffect, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QGraphicsEffect `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QGraphicsEffect, name: [:0]const u8) QVariant {
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
    /// ` self: QGraphicsEffect `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QGraphicsEffect, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QGraphicsEffect.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QGraphicsEffect.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QGraphicsEffect `
    ///
    pub fn bindingStorage(self: QGraphicsEffect) QBindingStorage {
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
    /// ` self: QGraphicsEffect `
    ///
    pub fn bindingStorage2(self: QGraphicsEffect) QBindingStorage {
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
    /// ` self: QGraphicsEffect `
    ///
    pub fn destroyed(self: QGraphicsEffect) void {
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
    /// ` self: QGraphicsEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsEffect) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QGraphicsEffect, callback: *const fn (QGraphicsEffect) callconv(.c) void) void {
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
    /// ` self: QGraphicsEffect `
    ///
    pub fn parent(self: QGraphicsEffect) QObject {
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
    /// ` self: QGraphicsEffect `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QGraphicsEffect, classname: [:0]const u8) bool {
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
    /// ` self: QGraphicsEffect `
    ///
    pub fn deleteLater(self: QGraphicsEffect) void {
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
    /// ` self: QGraphicsEffect `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QGraphicsEffect, interval: i32, timerType: i32) i32 {
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
    /// ` self: QGraphicsEffect `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QGraphicsEffect, time: i64, timerType: i32) i32 {
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
    /// ` self: QGraphicsEffect `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QGraphicsEffect, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QGraphicsEffect `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QGraphicsEffect, signal: [:0]const u8) bool {
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
    /// ` self: QGraphicsEffect `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QGraphicsEffect, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QGraphicsEffect `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QGraphicsEffect, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QGraphicsEffect `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QGraphicsEffect, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QGraphicsEffect `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QGraphicsEffect, param1: anytype) void {
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
    /// ` self: QGraphicsEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsEffect, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QGraphicsEffect, callback: *const fn (QGraphicsEffect, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QGraphicsEffect, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QGraphicsEffect_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QGraphicsEffect, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QGraphicsEffect_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsEffect`
    ///
    /// ` callback: *const fn (self: QGraphicsEffect, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QGraphicsEffect, callback: *const fn (QGraphicsEffect, QEvent) callconv(.c) bool) void {
        qtc.QGraphicsEffect_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QGraphicsEffect, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QGraphicsEffect_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QGraphicsEffect, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QGraphicsEffect_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsEffect`
    ///
    /// ` callback: *const fn (self: QGraphicsEffect, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QGraphicsEffect, callback: *const fn (QGraphicsEffect, QObject, QEvent) callconv(.c) bool) void {
        qtc.QGraphicsEffect_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsEffect `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QGraphicsEffect, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QGraphicsEffect_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGraphicsEffect `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QGraphicsEffect, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QGraphicsEffect_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGraphicsEffect`
    ///
    /// ` callback: *const fn (self: QGraphicsEffect, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QGraphicsEffect, callback: *const fn (QGraphicsEffect, QTimerEvent) callconv(.c) void) void {
        qtc.QGraphicsEffect_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsEffect `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QGraphicsEffect, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QGraphicsEffect_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGraphicsEffect `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QGraphicsEffect, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QGraphicsEffect_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGraphicsEffect`
    ///
    /// ` callback: *const fn (self: QGraphicsEffect, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QGraphicsEffect, callback: *const fn (QGraphicsEffect, QChildEvent) callconv(.c) void) void {
        qtc.QGraphicsEffect_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsEffect `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QGraphicsEffect, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QGraphicsEffect_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGraphicsEffect `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QGraphicsEffect, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QGraphicsEffect_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGraphicsEffect`
    ///
    /// ` callback: *const fn (self: QGraphicsEffect, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QGraphicsEffect, callback: *const fn (QGraphicsEffect, QEvent) callconv(.c) void) void {
        qtc.QGraphicsEffect_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsEffect `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QGraphicsEffect, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsEffect_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGraphicsEffect `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QGraphicsEffect, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsEffect_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGraphicsEffect`
    ///
    /// ` callback: *const fn (self: QGraphicsEffect, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QGraphicsEffect, callback: *const fn (QGraphicsEffect, QMetaMethod) callconv(.c) void) void {
        qtc.QGraphicsEffect_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsEffect `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QGraphicsEffect, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsEffect_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGraphicsEffect `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QGraphicsEffect, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsEffect_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGraphicsEffect`
    ///
    /// ` callback: *const fn (self: QGraphicsEffect, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QGraphicsEffect, callback: *const fn (QGraphicsEffect, QMetaMethod) callconv(.c) void) void {
        qtc.QGraphicsEffect_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsEffect `
    ///
    pub fn sender(self: QGraphicsEffect) QObject {
        return .{ .ptr = qtc.QGraphicsEffect_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QGraphicsEffect `
    ///
    pub fn superSender(self: QGraphicsEffect) QObject {
        return .{ .ptr = qtc.QGraphicsEffect_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QGraphicsEffect`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QGraphicsEffect, callback: *const fn () callconv(.c) QObject) void {
        qtc.QGraphicsEffect_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsEffect `
    ///
    pub fn senderSignalIndex(self: QGraphicsEffect) i32 {
        return qtc.QGraphicsEffect_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QGraphicsEffect `
    ///
    pub fn superSenderSignalIndex(self: QGraphicsEffect) i32 {
        return qtc.QGraphicsEffect_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QGraphicsEffect`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QGraphicsEffect, callback: *const fn () callconv(.c) i32) void {
        qtc.QGraphicsEffect_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsEffect `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QGraphicsEffect, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGraphicsEffect_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QGraphicsEffect `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QGraphicsEffect, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGraphicsEffect_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QGraphicsEffect`
    ///
    /// ` callback: *const fn (self: QGraphicsEffect, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QGraphicsEffect, callback: *const fn (QGraphicsEffect, [*:0]const u8) callconv(.c) i32) void {
        qtc.QGraphicsEffect_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsEffect `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QGraphicsEffect, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QGraphicsEffect_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGraphicsEffect `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QGraphicsEffect, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QGraphicsEffect_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGraphicsEffect`
    ///
    /// ` callback: *const fn (self: QGraphicsEffect, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QGraphicsEffect, callback: *const fn (QGraphicsEffect, QMetaMethod) callconv(.c) bool) void {
        qtc.QGraphicsEffect_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsEffect, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QGraphicsEffect, callback: *const fn (QGraphicsEffect, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#dtor.QGraphicsEffect)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QGraphicsEffect `
    ///
    pub fn delete(self: QGraphicsEffect) void {
        qtc.QGraphicsEffect_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html)
pub const QGraphicsColorizeEffect = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QGraphicsColorizeEffect,

    pub const _is_QGraphicsColorizeEffect = {};
    pub const _is_QGraphicsEffect = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QGraphicsColorizeEffect object in C++ memory
    ///
    pub fn new() QGraphicsColorizeEffect {
        return .{ .ptr = qtc.QGraphicsColorizeEffect_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QGraphicsColorizeEffect object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QGraphicsColorizeEffect {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QGraphicsColorizeEffect_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    pub fn metaObject(self: QGraphicsColorizeEffect) QMetaObject {
        return .{ .ptr = qtc.QGraphicsColorizeEffect_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QGraphicsColorizeEffect, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QGraphicsColorizeEffect_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    pub fn superMetaObject(self: QGraphicsColorizeEffect) QMetaObject {
        return .{ .ptr = qtc.QGraphicsColorizeEffect_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QGraphicsColorizeEffect, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGraphicsColorizeEffect_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsColorizeEffect, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QGraphicsColorizeEffect, callback: *const fn (QGraphicsColorizeEffect, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QGraphicsColorizeEffect_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QGraphicsColorizeEffect, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGraphicsColorizeEffect_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QGraphicsColorizeEffect, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGraphicsColorizeEffect_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsColorizeEffect, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QGraphicsColorizeEffect, callback: *const fn (QGraphicsColorizeEffect, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QGraphicsColorizeEffect_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QGraphicsColorizeEffect, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGraphicsColorizeEffect_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGraphicsColorizeEffect.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `color` instead
    ///
    pub const Color = color;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#color)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    pub fn color(self: QGraphicsColorizeEffect) QColor {
        return .{ .ptr = qtc.QGraphicsColorizeEffect_Color(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `strength` instead
    ///
    pub const Strength = strength;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#strength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    pub fn strength(self: QGraphicsColorizeEffect) f64 {
        return qtc.QGraphicsColorizeEffect_Strength(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setColor` instead
    ///
    pub const SetColor = setColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#setColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` c: QColor `
    ///
    pub fn setColor(self: QGraphicsColorizeEffect, c: anytype) void {
        comptime _ = @TypeOf(c)._is_QColor;
        qtc.QGraphicsColorizeEffect_SetColor(@ptrCast(self.ptr), @ptrCast(c.ptr));
    }

    /// ### DEPRECATED: Use `setStrength` instead
    ///
    pub const SetStrength = setStrength;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#setStrength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` _strength: f64 `
    ///
    pub fn setStrength(self: QGraphicsColorizeEffect, _strength: f64) void {
        qtc.QGraphicsColorizeEffect_SetStrength(@ptrCast(self.ptr), @bitCast(_strength));
    }

    /// ### DEPRECATED: Use `colorChanged` instead
    ///
    pub const ColorChanged = colorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#colorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` _color: QColor `
    ///
    pub fn colorChanged(self: QGraphicsColorizeEffect, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QColor;
        qtc.QGraphicsColorizeEffect_ColorChanged(@ptrCast(self.ptr), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `onColorChanged` instead
    ///
    pub const OnColorChanged = onColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#colorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsColorizeEffect, color: QColor) callconv(.c) void `
    ///
    pub fn onColorChanged(self: QGraphicsColorizeEffect, callback: *const fn (QGraphicsColorizeEffect, QColor) callconv(.c) void) void {
        qtc.QGraphicsColorizeEffect_Connect_ColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `strengthChanged` instead
    ///
    pub const StrengthChanged = strengthChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#strengthChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` _strength: f64 `
    ///
    pub fn strengthChanged(self: QGraphicsColorizeEffect, _strength: f64) void {
        qtc.QGraphicsColorizeEffect_StrengthChanged(@ptrCast(self.ptr), @bitCast(_strength));
    }

    /// ### DEPRECATED: Use `onStrengthChanged` instead
    ///
    pub const OnStrengthChanged = onStrengthChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#strengthChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsColorizeEffect, strength: f64) callconv(.c) void `
    ///
    pub fn onStrengthChanged(self: QGraphicsColorizeEffect, callback: *const fn (QGraphicsColorizeEffect, f64) callconv(.c) void) void {
        qtc.QGraphicsColorizeEffect_Connect_StrengthChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `draw` instead
    ///
    pub const Draw = draw;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#draw)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` painter: QPainter `
    ///
    pub fn draw(self: QGraphicsColorizeEffect, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QGraphicsColorizeEffect_Draw(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// ### DEPRECATED: Use `onDraw` instead
    ///
    pub const OnDraw = onDraw;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#draw)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsColorizeEffect, painter: QPainter) callconv(.c) void `
    ///
    pub fn onDraw(self: QGraphicsColorizeEffect, callback: *const fn (QGraphicsColorizeEffect, QPainter) callconv(.c) void) void {
        qtc.QGraphicsColorizeEffect_OnDraw(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDraw` instead
    ///
    pub const SuperDraw = superDraw;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#draw)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` painter: QPainter `
    ///
    pub fn superDraw(self: QGraphicsColorizeEffect, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QGraphicsColorizeEffect_SuperDraw(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGraphicsColorizeEffect.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGraphicsColorizeEffect.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `boundingRect` instead
    ///
    pub const BoundingRect = boundingRect;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    pub fn boundingRect(self: QGraphicsColorizeEffect) QRectF {
        return .{ .ptr = qtc.QGraphicsEffect_BoundingRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isEnabled` instead
    ///
    pub const IsEnabled = isEnabled;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    pub fn isEnabled(self: QGraphicsColorizeEffect) bool {
        return qtc.QGraphicsEffect_IsEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setEnabled` instead
    ///
    pub const SetEnabled = setEnabled;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` enable: bool `
    ///
    pub fn setEnabled(self: QGraphicsColorizeEffect, enable: bool) void {
        qtc.QGraphicsEffect_SetEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `update` instead
    ///
    pub const Update = update;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    pub fn update(self: QGraphicsColorizeEffect) void {
        qtc.QGraphicsEffect_Update(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `enabledChanged` instead
    ///
    pub const EnabledChanged = enabledChanged;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#enabledChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` enabled: bool `
    ///
    pub fn enabledChanged(self: QGraphicsColorizeEffect, enabled: bool) void {
        qtc.QGraphicsEffect_EnabledChanged(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `onEnabledChanged` instead
    ///
    pub const OnEnabledChanged = onEnabledChanged;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#enabledChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsColorizeEffect, enabled: bool) callconv(.c) void `
    ///
    pub fn onEnabledChanged(self: QGraphicsColorizeEffect, callback: *const fn (QGraphicsColorizeEffect, bool) callconv(.c) void) void {
        qtc.QGraphicsEffect_Connect_EnabledChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QGraphicsColorizeEffect, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGraphicsColorizeEffect.objectName: Memory allocation failed");
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QGraphicsColorizeEffect, name: []const u8) void {
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    pub fn isWidgetType(self: QGraphicsColorizeEffect) bool {
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    pub fn isWindowType(self: QGraphicsColorizeEffect) bool {
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    pub fn isQuickItemType(self: QGraphicsColorizeEffect) bool {
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    pub fn signalsBlocked(self: QGraphicsColorizeEffect) bool {
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QGraphicsColorizeEffect, b: bool) bool {
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    pub fn thread(self: QGraphicsColorizeEffect) QThread {
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QGraphicsColorizeEffect, _thread: anytype) bool {
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QGraphicsColorizeEffect, interval: i32) i32 {
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QGraphicsColorizeEffect, time: i64) i32 {
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QGraphicsColorizeEffect, id: i32) void {
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QGraphicsColorizeEffect, id: i32) void {
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QGraphicsColorizeEffect, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QGraphicsColorizeEffect.children: Memory allocation failed");
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QGraphicsColorizeEffect, _parent: anytype) void {
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QGraphicsColorizeEffect, filterObj: anytype) void {
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QGraphicsColorizeEffect, obj: anytype) void {
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QGraphicsColorizeEffect, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    pub fn disconnect3(self: QGraphicsColorizeEffect) bool {
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QGraphicsColorizeEffect, receiver: anytype) bool {
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    pub fn dumpObjectTree(self: QGraphicsColorizeEffect) void {
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    pub fn dumpObjectInfo(self: QGraphicsColorizeEffect) void {
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QGraphicsColorizeEffect, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QGraphicsColorizeEffect, name: [:0]const u8) QVariant {
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QGraphicsColorizeEffect, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QGraphicsColorizeEffect.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QGraphicsColorizeEffect.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    pub fn bindingStorage(self: QGraphicsColorizeEffect) QBindingStorage {
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    pub fn bindingStorage2(self: QGraphicsColorizeEffect) QBindingStorage {
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    pub fn destroyed(self: QGraphicsColorizeEffect) void {
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsColorizeEffect) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QGraphicsColorizeEffect, callback: *const fn (QGraphicsColorizeEffect) callconv(.c) void) void {
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    pub fn parent(self: QGraphicsColorizeEffect) QObject {
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QGraphicsColorizeEffect, classname: [:0]const u8) bool {
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    pub fn deleteLater(self: QGraphicsColorizeEffect) void {
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QGraphicsColorizeEffect, interval: i32, timerType: i32) i32 {
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QGraphicsColorizeEffect, time: i64, timerType: i32) i32 {
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QGraphicsColorizeEffect, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QGraphicsColorizeEffect, signal: [:0]const u8) bool {
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QGraphicsColorizeEffect, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QGraphicsColorizeEffect, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QGraphicsColorizeEffect, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QGraphicsColorizeEffect, param1: anytype) void {
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsColorizeEffect, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QGraphicsColorizeEffect, callback: *const fn (QGraphicsColorizeEffect, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `boundingRectFor` instead
    ///
    pub const BoundingRectFor = boundingRectFor;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRectFor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` sourceRect: QRectF `
    ///
    pub fn boundingRectFor(self: QGraphicsColorizeEffect, sourceRect: anytype) QRectF {
        comptime _ = @TypeOf(sourceRect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsColorizeEffect_BoundingRectFor(@ptrCast(self.ptr), @ptrCast(sourceRect.ptr)) };
    }

    /// ### DEPRECATED: Use `superBoundingRectFor` instead
    ///
    pub const SuperBoundingRectFor = superBoundingRectFor;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRectFor)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` sourceRect: QRectF `
    ///
    pub fn superBoundingRectFor(self: QGraphicsColorizeEffect, sourceRect: anytype) QRectF {
        comptime _ = @TypeOf(sourceRect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsColorizeEffect_SuperBoundingRectFor(@ptrCast(self.ptr), @ptrCast(sourceRect.ptr)) };
    }

    /// ### DEPRECATED: Use `onBoundingRectFor` instead
    ///
    pub const OnBoundingRectFor = onBoundingRectFor;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRectFor)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsColorizeEffect`
    ///
    /// ` callback: *const fn (self: QGraphicsColorizeEffect, sourceRect: QRectF) callconv(.c) QRectF `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onBoundingRectFor(self: QGraphicsColorizeEffect, callback: *const fn (QGraphicsColorizeEffect, QRectF) callconv(.c) QRectF) void {
        qtc.QGraphicsColorizeEffect_OnBoundingRectFor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sourceChanged` instead
    ///
    pub const SourceChanged = sourceChanged;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` flags: flag of qgraphicseffect_enums.ChangeFlag `
    ///
    pub fn sourceChanged(self: QGraphicsColorizeEffect, flags: i32) void {
        qtc.QGraphicsColorizeEffect_SourceChanged(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `superSourceChanged` instead
    ///
    pub const SuperSourceChanged = superSourceChanged;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` flags: flag of qgraphicseffect_enums.ChangeFlag `
    ///
    pub fn superSourceChanged(self: QGraphicsColorizeEffect, flags: i32) void {
        qtc.QGraphicsColorizeEffect_SuperSourceChanged(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `onSourceChanged` instead
    ///
    pub const OnSourceChanged = onSourceChanged;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsColorizeEffect`
    ///
    /// ` callback: *const fn (self: QGraphicsColorizeEffect, flags: flag of qgraphicseffect_enums.ChangeFlag) callconv(.c) void `
    ///
    pub fn onSourceChanged(self: QGraphicsColorizeEffect, callback: *const fn (QGraphicsColorizeEffect, i32) callconv(.c) void) void {
        qtc.QGraphicsColorizeEffect_OnSourceChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QGraphicsColorizeEffect, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QGraphicsColorizeEffect_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QGraphicsColorizeEffect, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QGraphicsColorizeEffect_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsColorizeEffect`
    ///
    /// ` callback: *const fn (self: QGraphicsColorizeEffect, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QGraphicsColorizeEffect, callback: *const fn (QGraphicsColorizeEffect, QEvent) callconv(.c) bool) void {
        qtc.QGraphicsColorizeEffect_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QGraphicsColorizeEffect, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QGraphicsColorizeEffect_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QGraphicsColorizeEffect, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QGraphicsColorizeEffect_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsColorizeEffect`
    ///
    /// ` callback: *const fn (self: QGraphicsColorizeEffect, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QGraphicsColorizeEffect, callback: *const fn (QGraphicsColorizeEffect, QObject, QEvent) callconv(.c) bool) void {
        qtc.QGraphicsColorizeEffect_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QGraphicsColorizeEffect, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QGraphicsColorizeEffect_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QGraphicsColorizeEffect, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QGraphicsColorizeEffect_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGraphicsColorizeEffect`
    ///
    /// ` callback: *const fn (self: QGraphicsColorizeEffect, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QGraphicsColorizeEffect, callback: *const fn (QGraphicsColorizeEffect, QTimerEvent) callconv(.c) void) void {
        qtc.QGraphicsColorizeEffect_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QGraphicsColorizeEffect, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QGraphicsColorizeEffect_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QGraphicsColorizeEffect, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QGraphicsColorizeEffect_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGraphicsColorizeEffect`
    ///
    /// ` callback: *const fn (self: QGraphicsColorizeEffect, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QGraphicsColorizeEffect, callback: *const fn (QGraphicsColorizeEffect, QChildEvent) callconv(.c) void) void {
        qtc.QGraphicsColorizeEffect_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QGraphicsColorizeEffect, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QGraphicsColorizeEffect_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QGraphicsColorizeEffect, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QGraphicsColorizeEffect_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGraphicsColorizeEffect`
    ///
    /// ` callback: *const fn (self: QGraphicsColorizeEffect, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QGraphicsColorizeEffect, callback: *const fn (QGraphicsColorizeEffect, QEvent) callconv(.c) void) void {
        qtc.QGraphicsColorizeEffect_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QGraphicsColorizeEffect, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsColorizeEffect_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QGraphicsColorizeEffect, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsColorizeEffect_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGraphicsColorizeEffect`
    ///
    /// ` callback: *const fn (self: QGraphicsColorizeEffect, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QGraphicsColorizeEffect, callback: *const fn (QGraphicsColorizeEffect, QMetaMethod) callconv(.c) void) void {
        qtc.QGraphicsColorizeEffect_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QGraphicsColorizeEffect, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsColorizeEffect_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QGraphicsColorizeEffect, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsColorizeEffect_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGraphicsColorizeEffect`
    ///
    /// ` callback: *const fn (self: QGraphicsColorizeEffect, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QGraphicsColorizeEffect, callback: *const fn (QGraphicsColorizeEffect, QMetaMethod) callconv(.c) void) void {
        qtc.QGraphicsColorizeEffect_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `updateBoundingRect` instead
    ///
    pub const UpdateBoundingRect = updateBoundingRect;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    pub fn updateBoundingRect(self: QGraphicsColorizeEffect) void {
        qtc.QGraphicsColorizeEffect_UpdateBoundingRect(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superUpdateBoundingRect` instead
    ///
    pub const SuperUpdateBoundingRect = superUpdateBoundingRect;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    pub fn superUpdateBoundingRect(self: QGraphicsColorizeEffect) void {
        qtc.QGraphicsColorizeEffect_SuperUpdateBoundingRect(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUpdateBoundingRect` instead
    ///
    pub const OnUpdateBoundingRect = onUpdateBoundingRect;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsColorizeEffect`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onUpdateBoundingRect(self: QGraphicsColorizeEffect, callback: *const fn () callconv(.c) void) void {
        qtc.QGraphicsColorizeEffect_OnUpdateBoundingRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sourceIsPixmap` instead
    ///
    pub const SourceIsPixmap = sourceIsPixmap;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    pub fn sourceIsPixmap(self: QGraphicsColorizeEffect) bool {
        return qtc.QGraphicsColorizeEffect_SourceIsPixmap(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSourceIsPixmap` instead
    ///
    pub const SuperSourceIsPixmap = superSourceIsPixmap;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    pub fn superSourceIsPixmap(self: QGraphicsColorizeEffect) bool {
        return qtc.QGraphicsColorizeEffect_SuperSourceIsPixmap(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSourceIsPixmap` instead
    ///
    pub const OnSourceIsPixmap = onSourceIsPixmap;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsColorizeEffect`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onSourceIsPixmap(self: QGraphicsColorizeEffect, callback: *const fn () callconv(.c) bool) void {
        qtc.QGraphicsColorizeEffect_OnSourceIsPixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sourceBoundingRect` instead
    ///
    pub const SourceBoundingRect = sourceBoundingRect;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    pub fn sourceBoundingRect(self: QGraphicsColorizeEffect) QRectF {
        return .{ .ptr = qtc.QGraphicsColorizeEffect_SourceBoundingRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSourceBoundingRect` instead
    ///
    pub const SuperSourceBoundingRect = superSourceBoundingRect;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    pub fn superSourceBoundingRect(self: QGraphicsColorizeEffect) QRectF {
        return .{ .ptr = qtc.QGraphicsColorizeEffect_SuperSourceBoundingRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSourceBoundingRect` instead
    ///
    pub const OnSourceBoundingRect = onSourceBoundingRect;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsColorizeEffect`
    ///
    /// ` callback: *const fn () callconv(.c) QRectF `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSourceBoundingRect(self: QGraphicsColorizeEffect, callback: *const fn () callconv(.c) QRectF) void {
        qtc.QGraphicsColorizeEffect_OnSourceBoundingRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `drawSource` instead
    ///
    pub const DrawSource = drawSource;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` painter: QPainter `
    ///
    pub fn drawSource(self: QGraphicsColorizeEffect, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QGraphicsColorizeEffect_DrawSource(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// ### DEPRECATED: Use `superDrawSource` instead
    ///
    pub const SuperDrawSource = superDrawSource;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` painter: QPainter `
    ///
    pub fn superDrawSource(self: QGraphicsColorizeEffect, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QGraphicsColorizeEffect_SuperDrawSource(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// ### DEPRECATED: Use `onDrawSource` instead
    ///
    pub const OnDrawSource = onDrawSource;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsColorizeEffect`
    ///
    /// ` callback: *const fn (self: QGraphicsColorizeEffect, painter: QPainter) callconv(.c) void `
    ///
    pub fn onDrawSource(self: QGraphicsColorizeEffect, callback: *const fn (QGraphicsColorizeEffect, QPainter) callconv(.c) void) void {
        qtc.QGraphicsColorizeEffect_OnDrawSource(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sourcePixmap` instead
    ///
    pub const SourcePixmap = sourcePixmap;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    pub fn sourcePixmap(self: QGraphicsColorizeEffect) QPixmap {
        return .{ .ptr = qtc.QGraphicsColorizeEffect_SourcePixmap(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSourcePixmap` instead
    ///
    pub const SuperSourcePixmap = superSourcePixmap;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    pub fn superSourcePixmap(self: QGraphicsColorizeEffect) QPixmap {
        return .{ .ptr = qtc.QGraphicsColorizeEffect_SuperSourcePixmap(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSourcePixmap` instead
    ///
    pub const OnSourcePixmap = onSourcePixmap;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsColorizeEffect`
    ///
    /// ` callback: *const fn () callconv(.c) QPixmap `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSourcePixmap(self: QGraphicsColorizeEffect, callback: *const fn () callconv(.c) QPixmap) void {
        qtc.QGraphicsColorizeEffect_OnSourcePixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    pub fn sender(self: QGraphicsColorizeEffect) QObject {
        return .{ .ptr = qtc.QGraphicsColorizeEffect_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    pub fn superSender(self: QGraphicsColorizeEffect) QObject {
        return .{ .ptr = qtc.QGraphicsColorizeEffect_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QGraphicsColorizeEffect`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QGraphicsColorizeEffect, callback: *const fn () callconv(.c) QObject) void {
        qtc.QGraphicsColorizeEffect_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    pub fn senderSignalIndex(self: QGraphicsColorizeEffect) i32 {
        return qtc.QGraphicsColorizeEffect_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    pub fn superSenderSignalIndex(self: QGraphicsColorizeEffect) i32 {
        return qtc.QGraphicsColorizeEffect_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QGraphicsColorizeEffect`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QGraphicsColorizeEffect, callback: *const fn () callconv(.c) i32) void {
        qtc.QGraphicsColorizeEffect_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QGraphicsColorizeEffect, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGraphicsColorizeEffect_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QGraphicsColorizeEffect, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGraphicsColorizeEffect_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QGraphicsColorizeEffect`
    ///
    /// ` callback: *const fn (self: QGraphicsColorizeEffect, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QGraphicsColorizeEffect, callback: *const fn (QGraphicsColorizeEffect, [*:0]const u8) callconv(.c) i32) void {
        qtc.QGraphicsColorizeEffect_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QGraphicsColorizeEffect, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QGraphicsColorizeEffect_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QGraphicsColorizeEffect, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QGraphicsColorizeEffect_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGraphicsColorizeEffect`
    ///
    /// ` callback: *const fn (self: QGraphicsColorizeEffect, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QGraphicsColorizeEffect, callback: *const fn (QGraphicsColorizeEffect, QMetaMethod) callconv(.c) bool) void {
        qtc.QGraphicsColorizeEffect_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsColorizeEffect, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QGraphicsColorizeEffect, callback: *const fn (QGraphicsColorizeEffect, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#dtor.QGraphicsColorizeEffect)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    pub fn delete(self: QGraphicsColorizeEffect) void {
        qtc.QGraphicsColorizeEffect_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsblureffect.html)
pub const QGraphicsBlurEffect = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsblureffect.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QGraphicsBlurEffect,

    pub const _is_QGraphicsBlurEffect = {};
    pub const _is_QGraphicsEffect = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QGraphicsBlurEffect object in C++ memory
    ///
    pub fn new() QGraphicsBlurEffect {
        return .{ .ptr = qtc.QGraphicsBlurEffect_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QGraphicsBlurEffect object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QGraphicsBlurEffect {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QGraphicsBlurEffect_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    pub fn metaObject(self: QGraphicsBlurEffect) QMetaObject {
        return .{ .ptr = qtc.QGraphicsBlurEffect_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QGraphicsBlurEffect, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QGraphicsBlurEffect_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsBlurEffect `
    ///
    pub fn superMetaObject(self: QGraphicsBlurEffect) QMetaObject {
        return .{ .ptr = qtc.QGraphicsBlurEffect_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QGraphicsBlurEffect, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGraphicsBlurEffect_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsBlurEffect, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QGraphicsBlurEffect, callback: *const fn (QGraphicsBlurEffect, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QGraphicsBlurEffect_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QGraphicsBlurEffect, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGraphicsBlurEffect_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QGraphicsBlurEffect, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGraphicsBlurEffect_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsBlurEffect, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QGraphicsBlurEffect, callback: *const fn (QGraphicsBlurEffect, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QGraphicsBlurEffect_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QGraphicsBlurEffect, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGraphicsBlurEffect_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGraphicsBlurEffect.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `boundingRectFor` instead
    ///
    pub const BoundingRectFor = boundingRectFor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsblureffect.html#boundingRectFor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` rect: QRectF `
    ///
    pub fn boundingRectFor(self: QGraphicsBlurEffect, rect: anytype) QRectF {
        comptime _ = @TypeOf(rect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsBlurEffect_BoundingRectFor(@ptrCast(self.ptr), @ptrCast(rect.ptr)) };
    }

    /// ### DEPRECATED: Use `onBoundingRectFor` instead
    ///
    pub const OnBoundingRectFor = onBoundingRectFor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsblureffect.html#boundingRectFor)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsBlurEffect, rect: QRectF) callconv(.c) QRectF `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onBoundingRectFor(self: QGraphicsBlurEffect, callback: *const fn (QGraphicsBlurEffect, QRectF) callconv(.c) QRectF) void {
        qtc.QGraphicsBlurEffect_OnBoundingRectFor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superBoundingRectFor` instead
    ///
    pub const SuperBoundingRectFor = superBoundingRectFor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsblureffect.html#boundingRectFor)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` rect: QRectF `
    ///
    pub fn superBoundingRectFor(self: QGraphicsBlurEffect, rect: anytype) QRectF {
        comptime _ = @TypeOf(rect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsBlurEffect_SuperBoundingRectFor(@ptrCast(self.ptr), @ptrCast(rect.ptr)) };
    }

    /// ### DEPRECATED: Use `blurRadius` instead
    ///
    pub const BlurRadius = blurRadius;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsblureffect.html#blurRadius)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    pub fn blurRadius(self: QGraphicsBlurEffect) f64 {
        return qtc.QGraphicsBlurEffect_BlurRadius(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `blurHints` instead
    ///
    pub const BlurHints = blurHints;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsblureffect.html#blurHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ## Returns:
    ///
    /// ` flag of qgraphicseffect_enums.BlurHint `
    ///
    pub fn blurHints(self: QGraphicsBlurEffect) i32 {
        return qtc.QGraphicsBlurEffect_BlurHints(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBlurRadius` instead
    ///
    pub const SetBlurRadius = setBlurRadius;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsblureffect.html#setBlurRadius)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` _blurRadius: f64 `
    ///
    pub fn setBlurRadius(self: QGraphicsBlurEffect, _blurRadius: f64) void {
        qtc.QGraphicsBlurEffect_SetBlurRadius(@ptrCast(self.ptr), @bitCast(_blurRadius));
    }

    /// ### DEPRECATED: Use `setBlurHints` instead
    ///
    pub const SetBlurHints = setBlurHints;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsblureffect.html#setBlurHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` hints: flag of qgraphicseffect_enums.BlurHint `
    ///
    pub fn setBlurHints(self: QGraphicsBlurEffect, hints: i32) void {
        qtc.QGraphicsBlurEffect_SetBlurHints(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// ### DEPRECATED: Use `blurRadiusChanged` instead
    ///
    pub const BlurRadiusChanged = blurRadiusChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsblureffect.html#blurRadiusChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` _blurRadius: f64 `
    ///
    pub fn blurRadiusChanged(self: QGraphicsBlurEffect, _blurRadius: f64) void {
        qtc.QGraphicsBlurEffect_BlurRadiusChanged(@ptrCast(self.ptr), @bitCast(_blurRadius));
    }

    /// ### DEPRECATED: Use `onBlurRadiusChanged` instead
    ///
    pub const OnBlurRadiusChanged = onBlurRadiusChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsblureffect.html#blurRadiusChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsBlurEffect, blurRadius: f64) callconv(.c) void `
    ///
    pub fn onBlurRadiusChanged(self: QGraphicsBlurEffect, callback: *const fn (QGraphicsBlurEffect, f64) callconv(.c) void) void {
        qtc.QGraphicsBlurEffect_Connect_BlurRadiusChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `blurHintsChanged` instead
    ///
    pub const BlurHintsChanged = blurHintsChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsblureffect.html#blurHintsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` hints: flag of qgraphicseffect_enums.BlurHint `
    ///
    pub fn blurHintsChanged(self: QGraphicsBlurEffect, hints: i32) void {
        qtc.QGraphicsBlurEffect_BlurHintsChanged(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// ### DEPRECATED: Use `onBlurHintsChanged` instead
    ///
    pub const OnBlurHintsChanged = onBlurHintsChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsblureffect.html#blurHintsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsBlurEffect, hints: flag of qgraphicseffect_enums.BlurHint) callconv(.c) void `
    ///
    pub fn onBlurHintsChanged(self: QGraphicsBlurEffect, callback: *const fn (QGraphicsBlurEffect, i32) callconv(.c) void) void {
        qtc.QGraphicsBlurEffect_Connect_BlurHintsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `draw` instead
    ///
    pub const Draw = draw;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsblureffect.html#draw)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` painter: QPainter `
    ///
    pub fn draw(self: QGraphicsBlurEffect, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QGraphicsBlurEffect_Draw(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// ### DEPRECATED: Use `onDraw` instead
    ///
    pub const OnDraw = onDraw;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsblureffect.html#draw)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsBlurEffect, painter: QPainter) callconv(.c) void `
    ///
    pub fn onDraw(self: QGraphicsBlurEffect, callback: *const fn (QGraphicsBlurEffect, QPainter) callconv(.c) void) void {
        qtc.QGraphicsBlurEffect_OnDraw(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDraw` instead
    ///
    pub const SuperDraw = superDraw;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsblureffect.html#draw)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` painter: QPainter `
    ///
    pub fn superDraw(self: QGraphicsBlurEffect, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QGraphicsBlurEffect_SuperDraw(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGraphicsBlurEffect.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGraphicsBlurEffect.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `boundingRect` instead
    ///
    pub const BoundingRect = boundingRect;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    pub fn boundingRect(self: QGraphicsBlurEffect) QRectF {
        return .{ .ptr = qtc.QGraphicsEffect_BoundingRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isEnabled` instead
    ///
    pub const IsEnabled = isEnabled;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    pub fn isEnabled(self: QGraphicsBlurEffect) bool {
        return qtc.QGraphicsEffect_IsEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setEnabled` instead
    ///
    pub const SetEnabled = setEnabled;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` enable: bool `
    ///
    pub fn setEnabled(self: QGraphicsBlurEffect, enable: bool) void {
        qtc.QGraphicsEffect_SetEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `update` instead
    ///
    pub const Update = update;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    pub fn update(self: QGraphicsBlurEffect) void {
        qtc.QGraphicsEffect_Update(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `enabledChanged` instead
    ///
    pub const EnabledChanged = enabledChanged;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#enabledChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` enabled: bool `
    ///
    pub fn enabledChanged(self: QGraphicsBlurEffect, enabled: bool) void {
        qtc.QGraphicsEffect_EnabledChanged(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `onEnabledChanged` instead
    ///
    pub const OnEnabledChanged = onEnabledChanged;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#enabledChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsBlurEffect, enabled: bool) callconv(.c) void `
    ///
    pub fn onEnabledChanged(self: QGraphicsBlurEffect, callback: *const fn (QGraphicsBlurEffect, bool) callconv(.c) void) void {
        qtc.QGraphicsEffect_Connect_EnabledChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QGraphicsBlurEffect, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGraphicsBlurEffect.objectName: Memory allocation failed");
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
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QGraphicsBlurEffect, name: []const u8) void {
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
    /// ` self: QGraphicsBlurEffect `
    ///
    pub fn isWidgetType(self: QGraphicsBlurEffect) bool {
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
    /// ` self: QGraphicsBlurEffect `
    ///
    pub fn isWindowType(self: QGraphicsBlurEffect) bool {
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
    /// ` self: QGraphicsBlurEffect `
    ///
    pub fn isQuickItemType(self: QGraphicsBlurEffect) bool {
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
    /// ` self: QGraphicsBlurEffect `
    ///
    pub fn signalsBlocked(self: QGraphicsBlurEffect) bool {
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
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QGraphicsBlurEffect, b: bool) bool {
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
    /// ` self: QGraphicsBlurEffect `
    ///
    pub fn thread(self: QGraphicsBlurEffect) QThread {
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
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QGraphicsBlurEffect, _thread: anytype) bool {
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
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QGraphicsBlurEffect, interval: i32) i32 {
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
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QGraphicsBlurEffect, time: i64) i32 {
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
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QGraphicsBlurEffect, id: i32) void {
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
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QGraphicsBlurEffect, id: i32) void {
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
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QGraphicsBlurEffect, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QGraphicsBlurEffect.children: Memory allocation failed");
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
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QGraphicsBlurEffect, _parent: anytype) void {
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
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QGraphicsBlurEffect, filterObj: anytype) void {
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
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QGraphicsBlurEffect, obj: anytype) void {
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
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QGraphicsBlurEffect, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QGraphicsBlurEffect `
    ///
    pub fn disconnect3(self: QGraphicsBlurEffect) bool {
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
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QGraphicsBlurEffect, receiver: anytype) bool {
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
    /// ` self: QGraphicsBlurEffect `
    ///
    pub fn dumpObjectTree(self: QGraphicsBlurEffect) void {
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
    /// ` self: QGraphicsBlurEffect `
    ///
    pub fn dumpObjectInfo(self: QGraphicsBlurEffect) void {
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
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QGraphicsBlurEffect, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QGraphicsBlurEffect, name: [:0]const u8) QVariant {
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
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QGraphicsBlurEffect, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QGraphicsBlurEffect.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QGraphicsBlurEffect.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QGraphicsBlurEffect `
    ///
    pub fn bindingStorage(self: QGraphicsBlurEffect) QBindingStorage {
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
    /// ` self: QGraphicsBlurEffect `
    ///
    pub fn bindingStorage2(self: QGraphicsBlurEffect) QBindingStorage {
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
    /// ` self: QGraphicsBlurEffect `
    ///
    pub fn destroyed(self: QGraphicsBlurEffect) void {
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
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsBlurEffect) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QGraphicsBlurEffect, callback: *const fn (QGraphicsBlurEffect) callconv(.c) void) void {
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
    /// ` self: QGraphicsBlurEffect `
    ///
    pub fn parent(self: QGraphicsBlurEffect) QObject {
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
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QGraphicsBlurEffect, classname: [:0]const u8) bool {
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
    /// ` self: QGraphicsBlurEffect `
    ///
    pub fn deleteLater(self: QGraphicsBlurEffect) void {
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
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QGraphicsBlurEffect, interval: i32, timerType: i32) i32 {
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
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QGraphicsBlurEffect, time: i64, timerType: i32) i32 {
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
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QGraphicsBlurEffect, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QGraphicsBlurEffect, signal: [:0]const u8) bool {
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
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QGraphicsBlurEffect, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QGraphicsBlurEffect, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QGraphicsBlurEffect, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QGraphicsBlurEffect, param1: anytype) void {
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
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsBlurEffect, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QGraphicsBlurEffect, callback: *const fn (QGraphicsBlurEffect, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sourceChanged` instead
    ///
    pub const SourceChanged = sourceChanged;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` flags: flag of qgraphicseffect_enums.ChangeFlag `
    ///
    pub fn sourceChanged(self: QGraphicsBlurEffect, flags: i32) void {
        qtc.QGraphicsBlurEffect_SourceChanged(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `superSourceChanged` instead
    ///
    pub const SuperSourceChanged = superSourceChanged;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` flags: flag of qgraphicseffect_enums.ChangeFlag `
    ///
    pub fn superSourceChanged(self: QGraphicsBlurEffect, flags: i32) void {
        qtc.QGraphicsBlurEffect_SuperSourceChanged(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `onSourceChanged` instead
    ///
    pub const OnSourceChanged = onSourceChanged;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsBlurEffect`
    ///
    /// ` callback: *const fn (self: QGraphicsBlurEffect, flags: flag of qgraphicseffect_enums.ChangeFlag) callconv(.c) void `
    ///
    pub fn onSourceChanged(self: QGraphicsBlurEffect, callback: *const fn (QGraphicsBlurEffect, i32) callconv(.c) void) void {
        qtc.QGraphicsBlurEffect_OnSourceChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QGraphicsBlurEffect, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QGraphicsBlurEffect_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QGraphicsBlurEffect, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QGraphicsBlurEffect_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsBlurEffect`
    ///
    /// ` callback: *const fn (self: QGraphicsBlurEffect, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QGraphicsBlurEffect, callback: *const fn (QGraphicsBlurEffect, QEvent) callconv(.c) bool) void {
        qtc.QGraphicsBlurEffect_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QGraphicsBlurEffect, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QGraphicsBlurEffect_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QGraphicsBlurEffect, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QGraphicsBlurEffect_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsBlurEffect`
    ///
    /// ` callback: *const fn (self: QGraphicsBlurEffect, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QGraphicsBlurEffect, callback: *const fn (QGraphicsBlurEffect, QObject, QEvent) callconv(.c) bool) void {
        qtc.QGraphicsBlurEffect_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QGraphicsBlurEffect, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QGraphicsBlurEffect_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QGraphicsBlurEffect, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QGraphicsBlurEffect_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGraphicsBlurEffect`
    ///
    /// ` callback: *const fn (self: QGraphicsBlurEffect, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QGraphicsBlurEffect, callback: *const fn (QGraphicsBlurEffect, QTimerEvent) callconv(.c) void) void {
        qtc.QGraphicsBlurEffect_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QGraphicsBlurEffect, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QGraphicsBlurEffect_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QGraphicsBlurEffect, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QGraphicsBlurEffect_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGraphicsBlurEffect`
    ///
    /// ` callback: *const fn (self: QGraphicsBlurEffect, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QGraphicsBlurEffect, callback: *const fn (QGraphicsBlurEffect, QChildEvent) callconv(.c) void) void {
        qtc.QGraphicsBlurEffect_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QGraphicsBlurEffect, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QGraphicsBlurEffect_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QGraphicsBlurEffect, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QGraphicsBlurEffect_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGraphicsBlurEffect`
    ///
    /// ` callback: *const fn (self: QGraphicsBlurEffect, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QGraphicsBlurEffect, callback: *const fn (QGraphicsBlurEffect, QEvent) callconv(.c) void) void {
        qtc.QGraphicsBlurEffect_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QGraphicsBlurEffect, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsBlurEffect_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QGraphicsBlurEffect, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsBlurEffect_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGraphicsBlurEffect`
    ///
    /// ` callback: *const fn (self: QGraphicsBlurEffect, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QGraphicsBlurEffect, callback: *const fn (QGraphicsBlurEffect, QMetaMethod) callconv(.c) void) void {
        qtc.QGraphicsBlurEffect_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QGraphicsBlurEffect, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsBlurEffect_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QGraphicsBlurEffect, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsBlurEffect_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGraphicsBlurEffect`
    ///
    /// ` callback: *const fn (self: QGraphicsBlurEffect, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QGraphicsBlurEffect, callback: *const fn (QGraphicsBlurEffect, QMetaMethod) callconv(.c) void) void {
        qtc.QGraphicsBlurEffect_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `updateBoundingRect` instead
    ///
    pub const UpdateBoundingRect = updateBoundingRect;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    pub fn updateBoundingRect(self: QGraphicsBlurEffect) void {
        qtc.QGraphicsBlurEffect_UpdateBoundingRect(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superUpdateBoundingRect` instead
    ///
    pub const SuperUpdateBoundingRect = superUpdateBoundingRect;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    pub fn superUpdateBoundingRect(self: QGraphicsBlurEffect) void {
        qtc.QGraphicsBlurEffect_SuperUpdateBoundingRect(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUpdateBoundingRect` instead
    ///
    pub const OnUpdateBoundingRect = onUpdateBoundingRect;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsBlurEffect`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onUpdateBoundingRect(self: QGraphicsBlurEffect, callback: *const fn () callconv(.c) void) void {
        qtc.QGraphicsBlurEffect_OnUpdateBoundingRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sourceIsPixmap` instead
    ///
    pub const SourceIsPixmap = sourceIsPixmap;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    pub fn sourceIsPixmap(self: QGraphicsBlurEffect) bool {
        return qtc.QGraphicsBlurEffect_SourceIsPixmap(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSourceIsPixmap` instead
    ///
    pub const SuperSourceIsPixmap = superSourceIsPixmap;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    pub fn superSourceIsPixmap(self: QGraphicsBlurEffect) bool {
        return qtc.QGraphicsBlurEffect_SuperSourceIsPixmap(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSourceIsPixmap` instead
    ///
    pub const OnSourceIsPixmap = onSourceIsPixmap;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsBlurEffect`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onSourceIsPixmap(self: QGraphicsBlurEffect, callback: *const fn () callconv(.c) bool) void {
        qtc.QGraphicsBlurEffect_OnSourceIsPixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sourceBoundingRect` instead
    ///
    pub const SourceBoundingRect = sourceBoundingRect;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    pub fn sourceBoundingRect(self: QGraphicsBlurEffect) QRectF {
        return .{ .ptr = qtc.QGraphicsBlurEffect_SourceBoundingRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSourceBoundingRect` instead
    ///
    pub const SuperSourceBoundingRect = superSourceBoundingRect;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    pub fn superSourceBoundingRect(self: QGraphicsBlurEffect) QRectF {
        return .{ .ptr = qtc.QGraphicsBlurEffect_SuperSourceBoundingRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSourceBoundingRect` instead
    ///
    pub const OnSourceBoundingRect = onSourceBoundingRect;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsBlurEffect`
    ///
    /// ` callback: *const fn () callconv(.c) QRectF `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSourceBoundingRect(self: QGraphicsBlurEffect, callback: *const fn () callconv(.c) QRectF) void {
        qtc.QGraphicsBlurEffect_OnSourceBoundingRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `drawSource` instead
    ///
    pub const DrawSource = drawSource;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` painter: QPainter `
    ///
    pub fn drawSource(self: QGraphicsBlurEffect, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QGraphicsBlurEffect_DrawSource(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// ### DEPRECATED: Use `superDrawSource` instead
    ///
    pub const SuperDrawSource = superDrawSource;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` painter: QPainter `
    ///
    pub fn superDrawSource(self: QGraphicsBlurEffect, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QGraphicsBlurEffect_SuperDrawSource(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// ### DEPRECATED: Use `onDrawSource` instead
    ///
    pub const OnDrawSource = onDrawSource;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsBlurEffect`
    ///
    /// ` callback: *const fn (self: QGraphicsBlurEffect, painter: QPainter) callconv(.c) void `
    ///
    pub fn onDrawSource(self: QGraphicsBlurEffect, callback: *const fn (QGraphicsBlurEffect, QPainter) callconv(.c) void) void {
        qtc.QGraphicsBlurEffect_OnDrawSource(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sourcePixmap` instead
    ///
    pub const SourcePixmap = sourcePixmap;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    pub fn sourcePixmap(self: QGraphicsBlurEffect) QPixmap {
        return .{ .ptr = qtc.QGraphicsBlurEffect_SourcePixmap(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSourcePixmap` instead
    ///
    pub const SuperSourcePixmap = superSourcePixmap;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    pub fn superSourcePixmap(self: QGraphicsBlurEffect) QPixmap {
        return .{ .ptr = qtc.QGraphicsBlurEffect_SuperSourcePixmap(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSourcePixmap` instead
    ///
    pub const OnSourcePixmap = onSourcePixmap;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsBlurEffect`
    ///
    /// ` callback: *const fn () callconv(.c) QPixmap `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSourcePixmap(self: QGraphicsBlurEffect, callback: *const fn () callconv(.c) QPixmap) void {
        qtc.QGraphicsBlurEffect_OnSourcePixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsBlurEffect `
    ///
    pub fn sender(self: QGraphicsBlurEffect) QObject {
        return .{ .ptr = qtc.QGraphicsBlurEffect_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QGraphicsBlurEffect `
    ///
    pub fn superSender(self: QGraphicsBlurEffect) QObject {
        return .{ .ptr = qtc.QGraphicsBlurEffect_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QGraphicsBlurEffect`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QGraphicsBlurEffect, callback: *const fn () callconv(.c) QObject) void {
        qtc.QGraphicsBlurEffect_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsBlurEffect `
    ///
    pub fn senderSignalIndex(self: QGraphicsBlurEffect) i32 {
        return qtc.QGraphicsBlurEffect_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QGraphicsBlurEffect `
    ///
    pub fn superSenderSignalIndex(self: QGraphicsBlurEffect) i32 {
        return qtc.QGraphicsBlurEffect_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QGraphicsBlurEffect`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QGraphicsBlurEffect, callback: *const fn () callconv(.c) i32) void {
        qtc.QGraphicsBlurEffect_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QGraphicsBlurEffect, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGraphicsBlurEffect_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QGraphicsBlurEffect, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGraphicsBlurEffect_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QGraphicsBlurEffect`
    ///
    /// ` callback: *const fn (self: QGraphicsBlurEffect, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QGraphicsBlurEffect, callback: *const fn (QGraphicsBlurEffect, [*:0]const u8) callconv(.c) i32) void {
        qtc.QGraphicsBlurEffect_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QGraphicsBlurEffect, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QGraphicsBlurEffect_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QGraphicsBlurEffect, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QGraphicsBlurEffect_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGraphicsBlurEffect`
    ///
    /// ` callback: *const fn (self: QGraphicsBlurEffect, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QGraphicsBlurEffect, callback: *const fn (QGraphicsBlurEffect, QMetaMethod) callconv(.c) bool) void {
        qtc.QGraphicsBlurEffect_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsBlurEffect, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QGraphicsBlurEffect, callback: *const fn (QGraphicsBlurEffect, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsblureffect.html#dtor.QGraphicsBlurEffect)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    pub fn delete(self: QGraphicsBlurEffect) void {
        qtc.QGraphicsBlurEffect_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html)
pub const QGraphicsDropShadowEffect = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QGraphicsDropShadowEffect,

    pub const _is_QGraphicsDropShadowEffect = {};
    pub const _is_QGraphicsEffect = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QGraphicsDropShadowEffect object in C++ memory
    ///
    pub fn new() QGraphicsDropShadowEffect {
        return .{ .ptr = qtc.QGraphicsDropShadowEffect_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QGraphicsDropShadowEffect object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QGraphicsDropShadowEffect {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QGraphicsDropShadowEffect_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    pub fn metaObject(self: QGraphicsDropShadowEffect) QMetaObject {
        return .{ .ptr = qtc.QGraphicsDropShadowEffect_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QGraphicsDropShadowEffect, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QGraphicsDropShadowEffect_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    pub fn superMetaObject(self: QGraphicsDropShadowEffect) QMetaObject {
        return .{ .ptr = qtc.QGraphicsDropShadowEffect_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QGraphicsDropShadowEffect, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGraphicsDropShadowEffect_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsDropShadowEffect, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QGraphicsDropShadowEffect, callback: *const fn (QGraphicsDropShadowEffect, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QGraphicsDropShadowEffect_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QGraphicsDropShadowEffect, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGraphicsDropShadowEffect_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QGraphicsDropShadowEffect, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGraphicsDropShadowEffect_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsDropShadowEffect, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QGraphicsDropShadowEffect, callback: *const fn (QGraphicsDropShadowEffect, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QGraphicsDropShadowEffect_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QGraphicsDropShadowEffect, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGraphicsDropShadowEffect_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGraphicsDropShadowEffect.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `boundingRectFor` instead
    ///
    pub const BoundingRectFor = boundingRectFor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#boundingRectFor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` rect: QRectF `
    ///
    pub fn boundingRectFor(self: QGraphicsDropShadowEffect, rect: anytype) QRectF {
        comptime _ = @TypeOf(rect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsDropShadowEffect_BoundingRectFor(@ptrCast(self.ptr), @ptrCast(rect.ptr)) };
    }

    /// ### DEPRECATED: Use `onBoundingRectFor` instead
    ///
    pub const OnBoundingRectFor = onBoundingRectFor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#boundingRectFor)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsDropShadowEffect, rect: QRectF) callconv(.c) QRectF `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onBoundingRectFor(self: QGraphicsDropShadowEffect, callback: *const fn (QGraphicsDropShadowEffect, QRectF) callconv(.c) QRectF) void {
        qtc.QGraphicsDropShadowEffect_OnBoundingRectFor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superBoundingRectFor` instead
    ///
    pub const SuperBoundingRectFor = superBoundingRectFor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#boundingRectFor)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` rect: QRectF `
    ///
    pub fn superBoundingRectFor(self: QGraphicsDropShadowEffect, rect: anytype) QRectF {
        comptime _ = @TypeOf(rect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsDropShadowEffect_SuperBoundingRectFor(@ptrCast(self.ptr), @ptrCast(rect.ptr)) };
    }

    /// ### DEPRECATED: Use `offset` instead
    ///
    pub const Offset = offset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#offset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    pub fn offset(self: QGraphicsDropShadowEffect) QPointF {
        return .{ .ptr = qtc.QGraphicsDropShadowEffect_Offset(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `xOffset` instead
    ///
    pub const XOffset = xOffset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#xOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    pub fn xOffset(self: QGraphicsDropShadowEffect) f64 {
        return qtc.QGraphicsDropShadowEffect_XOffset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `yOffset` instead
    ///
    pub const YOffset = yOffset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#yOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    pub fn yOffset(self: QGraphicsDropShadowEffect) f64 {
        return qtc.QGraphicsDropShadowEffect_YOffset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `blurRadius` instead
    ///
    pub const BlurRadius = blurRadius;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#blurRadius)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    pub fn blurRadius(self: QGraphicsDropShadowEffect) f64 {
        return qtc.QGraphicsDropShadowEffect_BlurRadius(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `color` instead
    ///
    pub const Color = color;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#color)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    pub fn color(self: QGraphicsDropShadowEffect) QColor {
        return .{ .ptr = qtc.QGraphicsDropShadowEffect_Color(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setOffset` instead
    ///
    pub const SetOffset = setOffset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#setOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` ofs: QPointF `
    ///
    pub fn setOffset(self: QGraphicsDropShadowEffect, ofs: anytype) void {
        comptime _ = @TypeOf(ofs)._is_QPointF;
        qtc.QGraphicsDropShadowEffect_SetOffset(@ptrCast(self.ptr), @ptrCast(ofs.ptr));
    }

    /// ### DEPRECATED: Use `setOffset2` instead
    ///
    pub const SetOffset2 = setOffset2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#setOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` dx: f64 `
    ///
    /// ` dy: f64 `
    ///
    pub fn setOffset2(self: QGraphicsDropShadowEffect, dx: f64, dy: f64) void {
        qtc.QGraphicsDropShadowEffect_SetOffset2(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### DEPRECATED: Use `setOffset3` instead
    ///
    pub const SetOffset3 = setOffset3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#setOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` d: f64 `
    ///
    pub fn setOffset3(self: QGraphicsDropShadowEffect, d: f64) void {
        qtc.QGraphicsDropShadowEffect_SetOffset3(@ptrCast(self.ptr), @bitCast(d));
    }

    /// ### DEPRECATED: Use `setXOffset` instead
    ///
    pub const SetXOffset = setXOffset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#setXOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` dx: f64 `
    ///
    pub fn setXOffset(self: QGraphicsDropShadowEffect, dx: f64) void {
        qtc.QGraphicsDropShadowEffect_SetXOffset(@ptrCast(self.ptr), @bitCast(dx));
    }

    /// ### DEPRECATED: Use `setYOffset` instead
    ///
    pub const SetYOffset = setYOffset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#setYOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` dy: f64 `
    ///
    pub fn setYOffset(self: QGraphicsDropShadowEffect, dy: f64) void {
        qtc.QGraphicsDropShadowEffect_SetYOffset(@ptrCast(self.ptr), @bitCast(dy));
    }

    /// ### DEPRECATED: Use `setBlurRadius` instead
    ///
    pub const SetBlurRadius = setBlurRadius;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#setBlurRadius)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` _blurRadius: f64 `
    ///
    pub fn setBlurRadius(self: QGraphicsDropShadowEffect, _blurRadius: f64) void {
        qtc.QGraphicsDropShadowEffect_SetBlurRadius(@ptrCast(self.ptr), @bitCast(_blurRadius));
    }

    /// ### DEPRECATED: Use `setColor` instead
    ///
    pub const SetColor = setColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#setColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` _color: QColor `
    ///
    pub fn setColor(self: QGraphicsDropShadowEffect, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QColor;
        qtc.QGraphicsDropShadowEffect_SetColor(@ptrCast(self.ptr), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `offsetChanged` instead
    ///
    pub const OffsetChanged = offsetChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#offsetChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` _offset: QPointF `
    ///
    pub fn offsetChanged(self: QGraphicsDropShadowEffect, _offset: anytype) void {
        comptime _ = @TypeOf(_offset)._is_QPointF;
        qtc.QGraphicsDropShadowEffect_OffsetChanged(@ptrCast(self.ptr), @ptrCast(_offset.ptr));
    }

    /// ### DEPRECATED: Use `onOffsetChanged` instead
    ///
    pub const OnOffsetChanged = onOffsetChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#offsetChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsDropShadowEffect, offset: QPointF) callconv(.c) void `
    ///
    pub fn onOffsetChanged(self: QGraphicsDropShadowEffect, callback: *const fn (QGraphicsDropShadowEffect, QPointF) callconv(.c) void) void {
        qtc.QGraphicsDropShadowEffect_Connect_OffsetChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `blurRadiusChanged` instead
    ///
    pub const BlurRadiusChanged = blurRadiusChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#blurRadiusChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` _blurRadius: f64 `
    ///
    pub fn blurRadiusChanged(self: QGraphicsDropShadowEffect, _blurRadius: f64) void {
        qtc.QGraphicsDropShadowEffect_BlurRadiusChanged(@ptrCast(self.ptr), @bitCast(_blurRadius));
    }

    /// ### DEPRECATED: Use `onBlurRadiusChanged` instead
    ///
    pub const OnBlurRadiusChanged = onBlurRadiusChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#blurRadiusChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsDropShadowEffect, blurRadius: f64) callconv(.c) void `
    ///
    pub fn onBlurRadiusChanged(self: QGraphicsDropShadowEffect, callback: *const fn (QGraphicsDropShadowEffect, f64) callconv(.c) void) void {
        qtc.QGraphicsDropShadowEffect_Connect_BlurRadiusChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `colorChanged` instead
    ///
    pub const ColorChanged = colorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#colorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` _color: QColor `
    ///
    pub fn colorChanged(self: QGraphicsDropShadowEffect, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QColor;
        qtc.QGraphicsDropShadowEffect_ColorChanged(@ptrCast(self.ptr), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `onColorChanged` instead
    ///
    pub const OnColorChanged = onColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#colorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsDropShadowEffect, color: QColor) callconv(.c) void `
    ///
    pub fn onColorChanged(self: QGraphicsDropShadowEffect, callback: *const fn (QGraphicsDropShadowEffect, QColor) callconv(.c) void) void {
        qtc.QGraphicsDropShadowEffect_Connect_ColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `draw` instead
    ///
    pub const Draw = draw;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#draw)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` painter: QPainter `
    ///
    pub fn draw(self: QGraphicsDropShadowEffect, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QGraphicsDropShadowEffect_Draw(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// ### DEPRECATED: Use `onDraw` instead
    ///
    pub const OnDraw = onDraw;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#draw)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsDropShadowEffect, painter: QPainter) callconv(.c) void `
    ///
    pub fn onDraw(self: QGraphicsDropShadowEffect, callback: *const fn (QGraphicsDropShadowEffect, QPainter) callconv(.c) void) void {
        qtc.QGraphicsDropShadowEffect_OnDraw(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDraw` instead
    ///
    pub const SuperDraw = superDraw;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#draw)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` painter: QPainter `
    ///
    pub fn superDraw(self: QGraphicsDropShadowEffect, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QGraphicsDropShadowEffect_SuperDraw(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGraphicsDropShadowEffect.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGraphicsDropShadowEffect.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `boundingRect` instead
    ///
    pub const BoundingRect = boundingRect;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    pub fn boundingRect(self: QGraphicsDropShadowEffect) QRectF {
        return .{ .ptr = qtc.QGraphicsEffect_BoundingRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isEnabled` instead
    ///
    pub const IsEnabled = isEnabled;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    pub fn isEnabled(self: QGraphicsDropShadowEffect) bool {
        return qtc.QGraphicsEffect_IsEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setEnabled` instead
    ///
    pub const SetEnabled = setEnabled;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` enable: bool `
    ///
    pub fn setEnabled(self: QGraphicsDropShadowEffect, enable: bool) void {
        qtc.QGraphicsEffect_SetEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `update` instead
    ///
    pub const Update = update;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    pub fn update(self: QGraphicsDropShadowEffect) void {
        qtc.QGraphicsEffect_Update(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `enabledChanged` instead
    ///
    pub const EnabledChanged = enabledChanged;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#enabledChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` enabled: bool `
    ///
    pub fn enabledChanged(self: QGraphicsDropShadowEffect, enabled: bool) void {
        qtc.QGraphicsEffect_EnabledChanged(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `onEnabledChanged` instead
    ///
    pub const OnEnabledChanged = onEnabledChanged;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#enabledChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsDropShadowEffect, enabled: bool) callconv(.c) void `
    ///
    pub fn onEnabledChanged(self: QGraphicsDropShadowEffect, callback: *const fn (QGraphicsDropShadowEffect, bool) callconv(.c) void) void {
        qtc.QGraphicsEffect_Connect_EnabledChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QGraphicsDropShadowEffect, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGraphicsDropShadowEffect.objectName: Memory allocation failed");
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QGraphicsDropShadowEffect, name: []const u8) void {
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    pub fn isWidgetType(self: QGraphicsDropShadowEffect) bool {
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    pub fn isWindowType(self: QGraphicsDropShadowEffect) bool {
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    pub fn isQuickItemType(self: QGraphicsDropShadowEffect) bool {
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    pub fn signalsBlocked(self: QGraphicsDropShadowEffect) bool {
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QGraphicsDropShadowEffect, b: bool) bool {
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    pub fn thread(self: QGraphicsDropShadowEffect) QThread {
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QGraphicsDropShadowEffect, _thread: anytype) bool {
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QGraphicsDropShadowEffect, interval: i32) i32 {
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QGraphicsDropShadowEffect, time: i64) i32 {
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QGraphicsDropShadowEffect, id: i32) void {
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QGraphicsDropShadowEffect, id: i32) void {
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QGraphicsDropShadowEffect, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QGraphicsDropShadowEffect.children: Memory allocation failed");
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QGraphicsDropShadowEffect, _parent: anytype) void {
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QGraphicsDropShadowEffect, filterObj: anytype) void {
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QGraphicsDropShadowEffect, obj: anytype) void {
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QGraphicsDropShadowEffect, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    pub fn disconnect3(self: QGraphicsDropShadowEffect) bool {
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QGraphicsDropShadowEffect, receiver: anytype) bool {
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    pub fn dumpObjectTree(self: QGraphicsDropShadowEffect) void {
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    pub fn dumpObjectInfo(self: QGraphicsDropShadowEffect) void {
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QGraphicsDropShadowEffect, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QGraphicsDropShadowEffect, name: [:0]const u8) QVariant {
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QGraphicsDropShadowEffect, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QGraphicsDropShadowEffect.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QGraphicsDropShadowEffect.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    pub fn bindingStorage(self: QGraphicsDropShadowEffect) QBindingStorage {
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    pub fn bindingStorage2(self: QGraphicsDropShadowEffect) QBindingStorage {
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    pub fn destroyed(self: QGraphicsDropShadowEffect) void {
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsDropShadowEffect) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QGraphicsDropShadowEffect, callback: *const fn (QGraphicsDropShadowEffect) callconv(.c) void) void {
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    pub fn parent(self: QGraphicsDropShadowEffect) QObject {
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QGraphicsDropShadowEffect, classname: [:0]const u8) bool {
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    pub fn deleteLater(self: QGraphicsDropShadowEffect) void {
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QGraphicsDropShadowEffect, interval: i32, timerType: i32) i32 {
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QGraphicsDropShadowEffect, time: i64, timerType: i32) i32 {
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QGraphicsDropShadowEffect, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QGraphicsDropShadowEffect, signal: [:0]const u8) bool {
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QGraphicsDropShadowEffect, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QGraphicsDropShadowEffect, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QGraphicsDropShadowEffect, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QGraphicsDropShadowEffect, param1: anytype) void {
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsDropShadowEffect, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QGraphicsDropShadowEffect, callback: *const fn (QGraphicsDropShadowEffect, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sourceChanged` instead
    ///
    pub const SourceChanged = sourceChanged;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` flags: flag of qgraphicseffect_enums.ChangeFlag `
    ///
    pub fn sourceChanged(self: QGraphicsDropShadowEffect, flags: i32) void {
        qtc.QGraphicsDropShadowEffect_SourceChanged(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `superSourceChanged` instead
    ///
    pub const SuperSourceChanged = superSourceChanged;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` flags: flag of qgraphicseffect_enums.ChangeFlag `
    ///
    pub fn superSourceChanged(self: QGraphicsDropShadowEffect, flags: i32) void {
        qtc.QGraphicsDropShadowEffect_SuperSourceChanged(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `onSourceChanged` instead
    ///
    pub const OnSourceChanged = onSourceChanged;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsDropShadowEffect`
    ///
    /// ` callback: *const fn (self: QGraphicsDropShadowEffect, flags: flag of qgraphicseffect_enums.ChangeFlag) callconv(.c) void `
    ///
    pub fn onSourceChanged(self: QGraphicsDropShadowEffect, callback: *const fn (QGraphicsDropShadowEffect, i32) callconv(.c) void) void {
        qtc.QGraphicsDropShadowEffect_OnSourceChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QGraphicsDropShadowEffect, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QGraphicsDropShadowEffect_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QGraphicsDropShadowEffect, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QGraphicsDropShadowEffect_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsDropShadowEffect`
    ///
    /// ` callback: *const fn (self: QGraphicsDropShadowEffect, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QGraphicsDropShadowEffect, callback: *const fn (QGraphicsDropShadowEffect, QEvent) callconv(.c) bool) void {
        qtc.QGraphicsDropShadowEffect_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QGraphicsDropShadowEffect, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QGraphicsDropShadowEffect_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QGraphicsDropShadowEffect, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QGraphicsDropShadowEffect_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsDropShadowEffect`
    ///
    /// ` callback: *const fn (self: QGraphicsDropShadowEffect, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QGraphicsDropShadowEffect, callback: *const fn (QGraphicsDropShadowEffect, QObject, QEvent) callconv(.c) bool) void {
        qtc.QGraphicsDropShadowEffect_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QGraphicsDropShadowEffect, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QGraphicsDropShadowEffect_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QGraphicsDropShadowEffect, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QGraphicsDropShadowEffect_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGraphicsDropShadowEffect`
    ///
    /// ` callback: *const fn (self: QGraphicsDropShadowEffect, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QGraphicsDropShadowEffect, callback: *const fn (QGraphicsDropShadowEffect, QTimerEvent) callconv(.c) void) void {
        qtc.QGraphicsDropShadowEffect_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QGraphicsDropShadowEffect, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QGraphicsDropShadowEffect_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QGraphicsDropShadowEffect, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QGraphicsDropShadowEffect_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGraphicsDropShadowEffect`
    ///
    /// ` callback: *const fn (self: QGraphicsDropShadowEffect, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QGraphicsDropShadowEffect, callback: *const fn (QGraphicsDropShadowEffect, QChildEvent) callconv(.c) void) void {
        qtc.QGraphicsDropShadowEffect_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QGraphicsDropShadowEffect, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QGraphicsDropShadowEffect_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QGraphicsDropShadowEffect, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QGraphicsDropShadowEffect_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGraphicsDropShadowEffect`
    ///
    /// ` callback: *const fn (self: QGraphicsDropShadowEffect, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QGraphicsDropShadowEffect, callback: *const fn (QGraphicsDropShadowEffect, QEvent) callconv(.c) void) void {
        qtc.QGraphicsDropShadowEffect_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QGraphicsDropShadowEffect, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsDropShadowEffect_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QGraphicsDropShadowEffect, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsDropShadowEffect_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGraphicsDropShadowEffect`
    ///
    /// ` callback: *const fn (self: QGraphicsDropShadowEffect, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QGraphicsDropShadowEffect, callback: *const fn (QGraphicsDropShadowEffect, QMetaMethod) callconv(.c) void) void {
        qtc.QGraphicsDropShadowEffect_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QGraphicsDropShadowEffect, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsDropShadowEffect_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QGraphicsDropShadowEffect, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsDropShadowEffect_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGraphicsDropShadowEffect`
    ///
    /// ` callback: *const fn (self: QGraphicsDropShadowEffect, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QGraphicsDropShadowEffect, callback: *const fn (QGraphicsDropShadowEffect, QMetaMethod) callconv(.c) void) void {
        qtc.QGraphicsDropShadowEffect_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `updateBoundingRect` instead
    ///
    pub const UpdateBoundingRect = updateBoundingRect;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    pub fn updateBoundingRect(self: QGraphicsDropShadowEffect) void {
        qtc.QGraphicsDropShadowEffect_UpdateBoundingRect(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superUpdateBoundingRect` instead
    ///
    pub const SuperUpdateBoundingRect = superUpdateBoundingRect;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    pub fn superUpdateBoundingRect(self: QGraphicsDropShadowEffect) void {
        qtc.QGraphicsDropShadowEffect_SuperUpdateBoundingRect(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUpdateBoundingRect` instead
    ///
    pub const OnUpdateBoundingRect = onUpdateBoundingRect;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsDropShadowEffect`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onUpdateBoundingRect(self: QGraphicsDropShadowEffect, callback: *const fn () callconv(.c) void) void {
        qtc.QGraphicsDropShadowEffect_OnUpdateBoundingRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sourceIsPixmap` instead
    ///
    pub const SourceIsPixmap = sourceIsPixmap;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    pub fn sourceIsPixmap(self: QGraphicsDropShadowEffect) bool {
        return qtc.QGraphicsDropShadowEffect_SourceIsPixmap(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSourceIsPixmap` instead
    ///
    pub const SuperSourceIsPixmap = superSourceIsPixmap;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    pub fn superSourceIsPixmap(self: QGraphicsDropShadowEffect) bool {
        return qtc.QGraphicsDropShadowEffect_SuperSourceIsPixmap(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSourceIsPixmap` instead
    ///
    pub const OnSourceIsPixmap = onSourceIsPixmap;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsDropShadowEffect`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onSourceIsPixmap(self: QGraphicsDropShadowEffect, callback: *const fn () callconv(.c) bool) void {
        qtc.QGraphicsDropShadowEffect_OnSourceIsPixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sourceBoundingRect` instead
    ///
    pub const SourceBoundingRect = sourceBoundingRect;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    pub fn sourceBoundingRect(self: QGraphicsDropShadowEffect) QRectF {
        return .{ .ptr = qtc.QGraphicsDropShadowEffect_SourceBoundingRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSourceBoundingRect` instead
    ///
    pub const SuperSourceBoundingRect = superSourceBoundingRect;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    pub fn superSourceBoundingRect(self: QGraphicsDropShadowEffect) QRectF {
        return .{ .ptr = qtc.QGraphicsDropShadowEffect_SuperSourceBoundingRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSourceBoundingRect` instead
    ///
    pub const OnSourceBoundingRect = onSourceBoundingRect;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsDropShadowEffect`
    ///
    /// ` callback: *const fn () callconv(.c) QRectF `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSourceBoundingRect(self: QGraphicsDropShadowEffect, callback: *const fn () callconv(.c) QRectF) void {
        qtc.QGraphicsDropShadowEffect_OnSourceBoundingRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `drawSource` instead
    ///
    pub const DrawSource = drawSource;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` painter: QPainter `
    ///
    pub fn drawSource(self: QGraphicsDropShadowEffect, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QGraphicsDropShadowEffect_DrawSource(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// ### DEPRECATED: Use `superDrawSource` instead
    ///
    pub const SuperDrawSource = superDrawSource;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` painter: QPainter `
    ///
    pub fn superDrawSource(self: QGraphicsDropShadowEffect, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QGraphicsDropShadowEffect_SuperDrawSource(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// ### DEPRECATED: Use `onDrawSource` instead
    ///
    pub const OnDrawSource = onDrawSource;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsDropShadowEffect`
    ///
    /// ` callback: *const fn (self: QGraphicsDropShadowEffect, painter: QPainter) callconv(.c) void `
    ///
    pub fn onDrawSource(self: QGraphicsDropShadowEffect, callback: *const fn (QGraphicsDropShadowEffect, QPainter) callconv(.c) void) void {
        qtc.QGraphicsDropShadowEffect_OnDrawSource(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sourcePixmap` instead
    ///
    pub const SourcePixmap = sourcePixmap;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    pub fn sourcePixmap(self: QGraphicsDropShadowEffect) QPixmap {
        return .{ .ptr = qtc.QGraphicsDropShadowEffect_SourcePixmap(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSourcePixmap` instead
    ///
    pub const SuperSourcePixmap = superSourcePixmap;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    pub fn superSourcePixmap(self: QGraphicsDropShadowEffect) QPixmap {
        return .{ .ptr = qtc.QGraphicsDropShadowEffect_SuperSourcePixmap(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSourcePixmap` instead
    ///
    pub const OnSourcePixmap = onSourcePixmap;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsDropShadowEffect`
    ///
    /// ` callback: *const fn () callconv(.c) QPixmap `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSourcePixmap(self: QGraphicsDropShadowEffect, callback: *const fn () callconv(.c) QPixmap) void {
        qtc.QGraphicsDropShadowEffect_OnSourcePixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    pub fn sender(self: QGraphicsDropShadowEffect) QObject {
        return .{ .ptr = qtc.QGraphicsDropShadowEffect_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    pub fn superSender(self: QGraphicsDropShadowEffect) QObject {
        return .{ .ptr = qtc.QGraphicsDropShadowEffect_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QGraphicsDropShadowEffect`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QGraphicsDropShadowEffect, callback: *const fn () callconv(.c) QObject) void {
        qtc.QGraphicsDropShadowEffect_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    pub fn senderSignalIndex(self: QGraphicsDropShadowEffect) i32 {
        return qtc.QGraphicsDropShadowEffect_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    pub fn superSenderSignalIndex(self: QGraphicsDropShadowEffect) i32 {
        return qtc.QGraphicsDropShadowEffect_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QGraphicsDropShadowEffect`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QGraphicsDropShadowEffect, callback: *const fn () callconv(.c) i32) void {
        qtc.QGraphicsDropShadowEffect_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QGraphicsDropShadowEffect, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGraphicsDropShadowEffect_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QGraphicsDropShadowEffect, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGraphicsDropShadowEffect_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QGraphicsDropShadowEffect`
    ///
    /// ` callback: *const fn (self: QGraphicsDropShadowEffect, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QGraphicsDropShadowEffect, callback: *const fn (QGraphicsDropShadowEffect, [*:0]const u8) callconv(.c) i32) void {
        qtc.QGraphicsDropShadowEffect_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QGraphicsDropShadowEffect, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QGraphicsDropShadowEffect_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QGraphicsDropShadowEffect, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QGraphicsDropShadowEffect_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGraphicsDropShadowEffect`
    ///
    /// ` callback: *const fn (self: QGraphicsDropShadowEffect, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QGraphicsDropShadowEffect, callback: *const fn (QGraphicsDropShadowEffect, QMetaMethod) callconv(.c) bool) void {
        qtc.QGraphicsDropShadowEffect_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsDropShadowEffect, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QGraphicsDropShadowEffect, callback: *const fn (QGraphicsDropShadowEffect, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#dtor.QGraphicsDropShadowEffect)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    pub fn delete(self: QGraphicsDropShadowEffect) void {
        qtc.QGraphicsDropShadowEffect_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html)
pub const QGraphicsOpacityEffect = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QGraphicsOpacityEffect,

    pub const _is_QGraphicsOpacityEffect = {};
    pub const _is_QGraphicsEffect = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QGraphicsOpacityEffect object in C++ memory
    ///
    pub fn new() QGraphicsOpacityEffect {
        return .{ .ptr = qtc.QGraphicsOpacityEffect_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QGraphicsOpacityEffect object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QGraphicsOpacityEffect {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QGraphicsOpacityEffect_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    pub fn metaObject(self: QGraphicsOpacityEffect) QMetaObject {
        return .{ .ptr = qtc.QGraphicsOpacityEffect_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QGraphicsOpacityEffect, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QGraphicsOpacityEffect_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    pub fn superMetaObject(self: QGraphicsOpacityEffect) QMetaObject {
        return .{ .ptr = qtc.QGraphicsOpacityEffect_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QGraphicsOpacityEffect, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGraphicsOpacityEffect_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsOpacityEffect, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QGraphicsOpacityEffect, callback: *const fn (QGraphicsOpacityEffect, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QGraphicsOpacityEffect_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QGraphicsOpacityEffect, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGraphicsOpacityEffect_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QGraphicsOpacityEffect, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGraphicsOpacityEffect_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsOpacityEffect, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QGraphicsOpacityEffect, callback: *const fn (QGraphicsOpacityEffect, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QGraphicsOpacityEffect_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QGraphicsOpacityEffect, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGraphicsOpacityEffect_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGraphicsOpacityEffect.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `opacity` instead
    ///
    pub const Opacity = opacity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#opacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    pub fn opacity(self: QGraphicsOpacityEffect) f64 {
        return qtc.QGraphicsOpacityEffect_Opacity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `opacityMask` instead
    ///
    pub const OpacityMask = opacityMask;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#opacityMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    pub fn opacityMask(self: QGraphicsOpacityEffect) QBrush {
        return .{ .ptr = qtc.QGraphicsOpacityEffect_OpacityMask(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setOpacity` instead
    ///
    pub const SetOpacity = setOpacity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#setOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` _opacity: f64 `
    ///
    pub fn setOpacity(self: QGraphicsOpacityEffect, _opacity: f64) void {
        qtc.QGraphicsOpacityEffect_SetOpacity(@ptrCast(self.ptr), @bitCast(_opacity));
    }

    /// ### DEPRECATED: Use `setOpacityMask` instead
    ///
    pub const SetOpacityMask = setOpacityMask;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#setOpacityMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` mask: QBrush `
    ///
    pub fn setOpacityMask(self: QGraphicsOpacityEffect, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QBrush;
        qtc.QGraphicsOpacityEffect_SetOpacityMask(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// ### DEPRECATED: Use `opacityChanged` instead
    ///
    pub const OpacityChanged = opacityChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#opacityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` _opacity: f64 `
    ///
    pub fn opacityChanged(self: QGraphicsOpacityEffect, _opacity: f64) void {
        qtc.QGraphicsOpacityEffect_OpacityChanged(@ptrCast(self.ptr), @bitCast(_opacity));
    }

    /// ### DEPRECATED: Use `onOpacityChanged` instead
    ///
    pub const OnOpacityChanged = onOpacityChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#opacityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsOpacityEffect, opacity: f64) callconv(.c) void `
    ///
    pub fn onOpacityChanged(self: QGraphicsOpacityEffect, callback: *const fn (QGraphicsOpacityEffect, f64) callconv(.c) void) void {
        qtc.QGraphicsOpacityEffect_Connect_OpacityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `opacityMaskChanged` instead
    ///
    pub const OpacityMaskChanged = opacityMaskChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#opacityMaskChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` mask: QBrush `
    ///
    pub fn opacityMaskChanged(self: QGraphicsOpacityEffect, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QBrush;
        qtc.QGraphicsOpacityEffect_OpacityMaskChanged(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// ### DEPRECATED: Use `onOpacityMaskChanged` instead
    ///
    pub const OnOpacityMaskChanged = onOpacityMaskChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#opacityMaskChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsOpacityEffect, mask: QBrush) callconv(.c) void `
    ///
    pub fn onOpacityMaskChanged(self: QGraphicsOpacityEffect, callback: *const fn (QGraphicsOpacityEffect, QBrush) callconv(.c) void) void {
        qtc.QGraphicsOpacityEffect_Connect_OpacityMaskChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `draw` instead
    ///
    pub const Draw = draw;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#draw)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` painter: QPainter `
    ///
    pub fn draw(self: QGraphicsOpacityEffect, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QGraphicsOpacityEffect_Draw(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// ### DEPRECATED: Use `onDraw` instead
    ///
    pub const OnDraw = onDraw;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#draw)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsOpacityEffect, painter: QPainter) callconv(.c) void `
    ///
    pub fn onDraw(self: QGraphicsOpacityEffect, callback: *const fn (QGraphicsOpacityEffect, QPainter) callconv(.c) void) void {
        qtc.QGraphicsOpacityEffect_OnDraw(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDraw` instead
    ///
    pub const SuperDraw = superDraw;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#draw)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` painter: QPainter `
    ///
    pub fn superDraw(self: QGraphicsOpacityEffect, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QGraphicsOpacityEffect_SuperDraw(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGraphicsOpacityEffect.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGraphicsOpacityEffect.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `boundingRect` instead
    ///
    pub const BoundingRect = boundingRect;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    pub fn boundingRect(self: QGraphicsOpacityEffect) QRectF {
        return .{ .ptr = qtc.QGraphicsEffect_BoundingRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isEnabled` instead
    ///
    pub const IsEnabled = isEnabled;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    pub fn isEnabled(self: QGraphicsOpacityEffect) bool {
        return qtc.QGraphicsEffect_IsEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setEnabled` instead
    ///
    pub const SetEnabled = setEnabled;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` enable: bool `
    ///
    pub fn setEnabled(self: QGraphicsOpacityEffect, enable: bool) void {
        qtc.QGraphicsEffect_SetEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `update` instead
    ///
    pub const Update = update;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    pub fn update(self: QGraphicsOpacityEffect) void {
        qtc.QGraphicsEffect_Update(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `enabledChanged` instead
    ///
    pub const EnabledChanged = enabledChanged;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#enabledChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` enabled: bool `
    ///
    pub fn enabledChanged(self: QGraphicsOpacityEffect, enabled: bool) void {
        qtc.QGraphicsEffect_EnabledChanged(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `onEnabledChanged` instead
    ///
    pub const OnEnabledChanged = onEnabledChanged;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#enabledChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsOpacityEffect, enabled: bool) callconv(.c) void `
    ///
    pub fn onEnabledChanged(self: QGraphicsOpacityEffect, callback: *const fn (QGraphicsOpacityEffect, bool) callconv(.c) void) void {
        qtc.QGraphicsEffect_Connect_EnabledChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QGraphicsOpacityEffect, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGraphicsOpacityEffect.objectName: Memory allocation failed");
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QGraphicsOpacityEffect, name: []const u8) void {
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    pub fn isWidgetType(self: QGraphicsOpacityEffect) bool {
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    pub fn isWindowType(self: QGraphicsOpacityEffect) bool {
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    pub fn isQuickItemType(self: QGraphicsOpacityEffect) bool {
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    pub fn signalsBlocked(self: QGraphicsOpacityEffect) bool {
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QGraphicsOpacityEffect, b: bool) bool {
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    pub fn thread(self: QGraphicsOpacityEffect) QThread {
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QGraphicsOpacityEffect, _thread: anytype) bool {
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QGraphicsOpacityEffect, interval: i32) i32 {
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QGraphicsOpacityEffect, time: i64) i32 {
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QGraphicsOpacityEffect, id: i32) void {
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QGraphicsOpacityEffect, id: i32) void {
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QGraphicsOpacityEffect, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QGraphicsOpacityEffect.children: Memory allocation failed");
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QGraphicsOpacityEffect, _parent: anytype) void {
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QGraphicsOpacityEffect, filterObj: anytype) void {
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QGraphicsOpacityEffect, obj: anytype) void {
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QGraphicsOpacityEffect, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    pub fn disconnect3(self: QGraphicsOpacityEffect) bool {
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QGraphicsOpacityEffect, receiver: anytype) bool {
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    pub fn dumpObjectTree(self: QGraphicsOpacityEffect) void {
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    pub fn dumpObjectInfo(self: QGraphicsOpacityEffect) void {
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QGraphicsOpacityEffect, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QGraphicsOpacityEffect, name: [:0]const u8) QVariant {
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QGraphicsOpacityEffect, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QGraphicsOpacityEffect.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QGraphicsOpacityEffect.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    pub fn bindingStorage(self: QGraphicsOpacityEffect) QBindingStorage {
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    pub fn bindingStorage2(self: QGraphicsOpacityEffect) QBindingStorage {
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    pub fn destroyed(self: QGraphicsOpacityEffect) void {
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsOpacityEffect) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QGraphicsOpacityEffect, callback: *const fn (QGraphicsOpacityEffect) callconv(.c) void) void {
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    pub fn parent(self: QGraphicsOpacityEffect) QObject {
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QGraphicsOpacityEffect, classname: [:0]const u8) bool {
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    pub fn deleteLater(self: QGraphicsOpacityEffect) void {
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QGraphicsOpacityEffect, interval: i32, timerType: i32) i32 {
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QGraphicsOpacityEffect, time: i64, timerType: i32) i32 {
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QGraphicsOpacityEffect, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QGraphicsOpacityEffect, signal: [:0]const u8) bool {
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QGraphicsOpacityEffect, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QGraphicsOpacityEffect, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QGraphicsOpacityEffect, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QGraphicsOpacityEffect, param1: anytype) void {
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsOpacityEffect, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QGraphicsOpacityEffect, callback: *const fn (QGraphicsOpacityEffect, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `boundingRectFor` instead
    ///
    pub const BoundingRectFor = boundingRectFor;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRectFor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` sourceRect: QRectF `
    ///
    pub fn boundingRectFor(self: QGraphicsOpacityEffect, sourceRect: anytype) QRectF {
        comptime _ = @TypeOf(sourceRect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsOpacityEffect_BoundingRectFor(@ptrCast(self.ptr), @ptrCast(sourceRect.ptr)) };
    }

    /// ### DEPRECATED: Use `superBoundingRectFor` instead
    ///
    pub const SuperBoundingRectFor = superBoundingRectFor;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRectFor)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` sourceRect: QRectF `
    ///
    pub fn superBoundingRectFor(self: QGraphicsOpacityEffect, sourceRect: anytype) QRectF {
        comptime _ = @TypeOf(sourceRect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsOpacityEffect_SuperBoundingRectFor(@ptrCast(self.ptr), @ptrCast(sourceRect.ptr)) };
    }

    /// ### DEPRECATED: Use `onBoundingRectFor` instead
    ///
    pub const OnBoundingRectFor = onBoundingRectFor;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRectFor)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsOpacityEffect`
    ///
    /// ` callback: *const fn (self: QGraphicsOpacityEffect, sourceRect: QRectF) callconv(.c) QRectF `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onBoundingRectFor(self: QGraphicsOpacityEffect, callback: *const fn (QGraphicsOpacityEffect, QRectF) callconv(.c) QRectF) void {
        qtc.QGraphicsOpacityEffect_OnBoundingRectFor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sourceChanged` instead
    ///
    pub const SourceChanged = sourceChanged;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` flags: flag of qgraphicseffect_enums.ChangeFlag `
    ///
    pub fn sourceChanged(self: QGraphicsOpacityEffect, flags: i32) void {
        qtc.QGraphicsOpacityEffect_SourceChanged(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `superSourceChanged` instead
    ///
    pub const SuperSourceChanged = superSourceChanged;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` flags: flag of qgraphicseffect_enums.ChangeFlag `
    ///
    pub fn superSourceChanged(self: QGraphicsOpacityEffect, flags: i32) void {
        qtc.QGraphicsOpacityEffect_SuperSourceChanged(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `onSourceChanged` instead
    ///
    pub const OnSourceChanged = onSourceChanged;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsOpacityEffect`
    ///
    /// ` callback: *const fn (self: QGraphicsOpacityEffect, flags: flag of qgraphicseffect_enums.ChangeFlag) callconv(.c) void `
    ///
    pub fn onSourceChanged(self: QGraphicsOpacityEffect, callback: *const fn (QGraphicsOpacityEffect, i32) callconv(.c) void) void {
        qtc.QGraphicsOpacityEffect_OnSourceChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QGraphicsOpacityEffect, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QGraphicsOpacityEffect_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QGraphicsOpacityEffect, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QGraphicsOpacityEffect_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsOpacityEffect`
    ///
    /// ` callback: *const fn (self: QGraphicsOpacityEffect, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QGraphicsOpacityEffect, callback: *const fn (QGraphicsOpacityEffect, QEvent) callconv(.c) bool) void {
        qtc.QGraphicsOpacityEffect_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QGraphicsOpacityEffect, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QGraphicsOpacityEffect_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QGraphicsOpacityEffect, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QGraphicsOpacityEffect_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsOpacityEffect`
    ///
    /// ` callback: *const fn (self: QGraphicsOpacityEffect, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QGraphicsOpacityEffect, callback: *const fn (QGraphicsOpacityEffect, QObject, QEvent) callconv(.c) bool) void {
        qtc.QGraphicsOpacityEffect_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QGraphicsOpacityEffect, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QGraphicsOpacityEffect_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QGraphicsOpacityEffect, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QGraphicsOpacityEffect_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGraphicsOpacityEffect`
    ///
    /// ` callback: *const fn (self: QGraphicsOpacityEffect, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QGraphicsOpacityEffect, callback: *const fn (QGraphicsOpacityEffect, QTimerEvent) callconv(.c) void) void {
        qtc.QGraphicsOpacityEffect_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QGraphicsOpacityEffect, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QGraphicsOpacityEffect_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QGraphicsOpacityEffect, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QGraphicsOpacityEffect_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGraphicsOpacityEffect`
    ///
    /// ` callback: *const fn (self: QGraphicsOpacityEffect, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QGraphicsOpacityEffect, callback: *const fn (QGraphicsOpacityEffect, QChildEvent) callconv(.c) void) void {
        qtc.QGraphicsOpacityEffect_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QGraphicsOpacityEffect, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QGraphicsOpacityEffect_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QGraphicsOpacityEffect, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QGraphicsOpacityEffect_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QGraphicsOpacityEffect`
    ///
    /// ` callback: *const fn (self: QGraphicsOpacityEffect, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QGraphicsOpacityEffect, callback: *const fn (QGraphicsOpacityEffect, QEvent) callconv(.c) void) void {
        qtc.QGraphicsOpacityEffect_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QGraphicsOpacityEffect, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsOpacityEffect_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QGraphicsOpacityEffect, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsOpacityEffect_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGraphicsOpacityEffect`
    ///
    /// ` callback: *const fn (self: QGraphicsOpacityEffect, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QGraphicsOpacityEffect, callback: *const fn (QGraphicsOpacityEffect, QMetaMethod) callconv(.c) void) void {
        qtc.QGraphicsOpacityEffect_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QGraphicsOpacityEffect, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsOpacityEffect_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QGraphicsOpacityEffect, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsOpacityEffect_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGraphicsOpacityEffect`
    ///
    /// ` callback: *const fn (self: QGraphicsOpacityEffect, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QGraphicsOpacityEffect, callback: *const fn (QGraphicsOpacityEffect, QMetaMethod) callconv(.c) void) void {
        qtc.QGraphicsOpacityEffect_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `updateBoundingRect` instead
    ///
    pub const UpdateBoundingRect = updateBoundingRect;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    pub fn updateBoundingRect(self: QGraphicsOpacityEffect) void {
        qtc.QGraphicsOpacityEffect_UpdateBoundingRect(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superUpdateBoundingRect` instead
    ///
    pub const SuperUpdateBoundingRect = superUpdateBoundingRect;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    pub fn superUpdateBoundingRect(self: QGraphicsOpacityEffect) void {
        qtc.QGraphicsOpacityEffect_SuperUpdateBoundingRect(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUpdateBoundingRect` instead
    ///
    pub const OnUpdateBoundingRect = onUpdateBoundingRect;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsOpacityEffect`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onUpdateBoundingRect(self: QGraphicsOpacityEffect, callback: *const fn () callconv(.c) void) void {
        qtc.QGraphicsOpacityEffect_OnUpdateBoundingRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sourceIsPixmap` instead
    ///
    pub const SourceIsPixmap = sourceIsPixmap;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    pub fn sourceIsPixmap(self: QGraphicsOpacityEffect) bool {
        return qtc.QGraphicsOpacityEffect_SourceIsPixmap(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSourceIsPixmap` instead
    ///
    pub const SuperSourceIsPixmap = superSourceIsPixmap;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    pub fn superSourceIsPixmap(self: QGraphicsOpacityEffect) bool {
        return qtc.QGraphicsOpacityEffect_SuperSourceIsPixmap(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSourceIsPixmap` instead
    ///
    pub const OnSourceIsPixmap = onSourceIsPixmap;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsOpacityEffect`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onSourceIsPixmap(self: QGraphicsOpacityEffect, callback: *const fn () callconv(.c) bool) void {
        qtc.QGraphicsOpacityEffect_OnSourceIsPixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sourceBoundingRect` instead
    ///
    pub const SourceBoundingRect = sourceBoundingRect;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    pub fn sourceBoundingRect(self: QGraphicsOpacityEffect) QRectF {
        return .{ .ptr = qtc.QGraphicsOpacityEffect_SourceBoundingRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSourceBoundingRect` instead
    ///
    pub const SuperSourceBoundingRect = superSourceBoundingRect;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    pub fn superSourceBoundingRect(self: QGraphicsOpacityEffect) QRectF {
        return .{ .ptr = qtc.QGraphicsOpacityEffect_SuperSourceBoundingRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSourceBoundingRect` instead
    ///
    pub const OnSourceBoundingRect = onSourceBoundingRect;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsOpacityEffect`
    ///
    /// ` callback: *const fn () callconv(.c) QRectF `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSourceBoundingRect(self: QGraphicsOpacityEffect, callback: *const fn () callconv(.c) QRectF) void {
        qtc.QGraphicsOpacityEffect_OnSourceBoundingRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `drawSource` instead
    ///
    pub const DrawSource = drawSource;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` painter: QPainter `
    ///
    pub fn drawSource(self: QGraphicsOpacityEffect, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QGraphicsOpacityEffect_DrawSource(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// ### DEPRECATED: Use `superDrawSource` instead
    ///
    pub const SuperDrawSource = superDrawSource;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` painter: QPainter `
    ///
    pub fn superDrawSource(self: QGraphicsOpacityEffect, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QGraphicsOpacityEffect_SuperDrawSource(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// ### DEPRECATED: Use `onDrawSource` instead
    ///
    pub const OnDrawSource = onDrawSource;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsOpacityEffect`
    ///
    /// ` callback: *const fn (self: QGraphicsOpacityEffect, painter: QPainter) callconv(.c) void `
    ///
    pub fn onDrawSource(self: QGraphicsOpacityEffect, callback: *const fn (QGraphicsOpacityEffect, QPainter) callconv(.c) void) void {
        qtc.QGraphicsOpacityEffect_OnDrawSource(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sourcePixmap` instead
    ///
    pub const SourcePixmap = sourcePixmap;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    pub fn sourcePixmap(self: QGraphicsOpacityEffect) QPixmap {
        return .{ .ptr = qtc.QGraphicsOpacityEffect_SourcePixmap(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSourcePixmap` instead
    ///
    pub const SuperSourcePixmap = superSourcePixmap;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    pub fn superSourcePixmap(self: QGraphicsOpacityEffect) QPixmap {
        return .{ .ptr = qtc.QGraphicsOpacityEffect_SuperSourcePixmap(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSourcePixmap` instead
    ///
    pub const OnSourcePixmap = onSourcePixmap;

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsOpacityEffect`
    ///
    /// ` callback: *const fn () callconv(.c) QPixmap `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSourcePixmap(self: QGraphicsOpacityEffect, callback: *const fn () callconv(.c) QPixmap) void {
        qtc.QGraphicsOpacityEffect_OnSourcePixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    pub fn sender(self: QGraphicsOpacityEffect) QObject {
        return .{ .ptr = qtc.QGraphicsOpacityEffect_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    pub fn superSender(self: QGraphicsOpacityEffect) QObject {
        return .{ .ptr = qtc.QGraphicsOpacityEffect_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QGraphicsOpacityEffect`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QGraphicsOpacityEffect, callback: *const fn () callconv(.c) QObject) void {
        qtc.QGraphicsOpacityEffect_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    pub fn senderSignalIndex(self: QGraphicsOpacityEffect) i32 {
        return qtc.QGraphicsOpacityEffect_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    pub fn superSenderSignalIndex(self: QGraphicsOpacityEffect) i32 {
        return qtc.QGraphicsOpacityEffect_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QGraphicsOpacityEffect`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QGraphicsOpacityEffect, callback: *const fn () callconv(.c) i32) void {
        qtc.QGraphicsOpacityEffect_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QGraphicsOpacityEffect, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGraphicsOpacityEffect_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QGraphicsOpacityEffect, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGraphicsOpacityEffect_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QGraphicsOpacityEffect`
    ///
    /// ` callback: *const fn (self: QGraphicsOpacityEffect, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QGraphicsOpacityEffect, callback: *const fn (QGraphicsOpacityEffect, [*:0]const u8) callconv(.c) i32) void {
        qtc.QGraphicsOpacityEffect_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QGraphicsOpacityEffect, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QGraphicsOpacityEffect_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QGraphicsOpacityEffect, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QGraphicsOpacityEffect_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QGraphicsOpacityEffect`
    ///
    /// ` callback: *const fn (self: QGraphicsOpacityEffect, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QGraphicsOpacityEffect, callback: *const fn (QGraphicsOpacityEffect, QMetaMethod) callconv(.c) bool) void {
        qtc.QGraphicsOpacityEffect_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsOpacityEffect, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QGraphicsOpacityEffect, callback: *const fn (QGraphicsOpacityEffect, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#dtor.QGraphicsOpacityEffect)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    pub fn delete(self: QGraphicsOpacityEffect) void {
        qtc.QGraphicsOpacityEffect_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#public-types)
pub const enums = struct {
    pub const ChangeFlag = enum(i32) {
        pub const SourceAttached: i32 = 1;
        pub const SourceDetached: i32 = 2;
        pub const SourceBoundingRectChanged: i32 = 4;
        pub const SourceInvalidated: i32 = 8;
    };

    pub const PixmapPadMode = enum(i32) {
        pub const NoPad: i32 = 0;
        pub const PadToTransparentBorder: i32 = 1;
        pub const PadToEffectiveBoundingRect: i32 = 2;
    };

    pub const BlurHint = enum(i32) {
        pub const PerformanceHint: i32 = 0;
        pub const QualityHint: i32 = 1;
        pub const AnimationHint: i32 = 2;
    };
};
