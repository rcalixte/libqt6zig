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

    /// New constructs a new QGraphicsEffect object.
    ///
    pub fn New() QGraphicsEffect {
        return .{ .ptr = qtc.QGraphicsEffect_new() };
    }

    /// New2 constructs a new QGraphicsEffect object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) QGraphicsEffect {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QGraphicsEffect_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    pub fn MetaObject(self: QGraphicsEffect) QMetaObject {
        return .{ .ptr = qtc.QGraphicsEffect_MetaObject(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMetaObject(self: QGraphicsEffect, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QGraphicsEffect_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    pub fn SuperMetaObject(self: QGraphicsEffect) QMetaObject {
        return .{ .ptr = qtc.QGraphicsEffect_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QGraphicsEffect, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGraphicsEffect_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsEffect, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QGraphicsEffect, callback: *const fn (QGraphicsEffect, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QGraphicsEffect_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QGraphicsEffect, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGraphicsEffect_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

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
    pub fn Metacall(self: QGraphicsEffect, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGraphicsEffect_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsEffect, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QGraphicsEffect, callback: *const fn (QGraphicsEffect, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QGraphicsEffect_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

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
    pub fn SuperMetacall(self: QGraphicsEffect, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGraphicsEffect_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicseffect.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRectFor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    /// ` sourceRect: QRectF `
    ///
    pub fn BoundingRectFor(self: QGraphicsEffect, sourceRect: anytype) QRectF {
        comptime _ = @TypeOf(sourceRect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsEffect_BoundingRectFor(@ptrCast(self.ptr), @ptrCast(sourceRect.ptr)) };
    }

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
    pub fn OnBoundingRectFor(self: QGraphicsEffect, callback: *const fn (QGraphicsEffect, QRectF) callconv(.c) QRectF) void {
        qtc.QGraphicsEffect_OnBoundingRectFor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperBoundingRectFor` instead
    ///
    pub const QBaseBoundingRectFor = SuperBoundingRectFor;

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
    pub fn SuperBoundingRectFor(self: QGraphicsEffect, sourceRect: anytype) QRectF {
        comptime _ = @TypeOf(sourceRect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsEffect_SuperBoundingRectFor(@ptrCast(self.ptr), @ptrCast(sourceRect.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    pub fn BoundingRect(self: QGraphicsEffect) QRectF {
        return .{ .ptr = qtc.QGraphicsEffect_BoundingRect(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    pub fn IsEnabled(self: QGraphicsEffect) bool {
        return qtc.QGraphicsEffect_IsEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    /// ` enable: bool `
    ///
    pub fn SetEnabled(self: QGraphicsEffect, enable: bool) void {
        qtc.QGraphicsEffect_SetEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    pub fn Update(self: QGraphicsEffect) void {
        qtc.QGraphicsEffect_Update(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#enabledChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    /// ` enabled: bool `
    ///
    pub fn EnabledChanged(self: QGraphicsEffect, enabled: bool) void {
        qtc.QGraphicsEffect_EnabledChanged(@ptrCast(self.ptr), enabled);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#enabledChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsEffect, enabled: bool) callconv(.c) void `
    ///
    pub fn OnEnabledChanged(self: QGraphicsEffect, callback: *const fn (QGraphicsEffect, bool) callconv(.c) void) void {
        qtc.QGraphicsEffect_Connect_EnabledChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#draw)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    /// ` painter: QPainter `
    ///
    pub fn Draw(self: QGraphicsEffect, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QGraphicsEffect_Draw(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

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
    pub fn OnDraw(self: QGraphicsEffect, callback: *const fn (QGraphicsEffect, QPainter) callconv(.c) void) void {
        qtc.QGraphicsEffect_OnDraw(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDraw` instead
    ///
    pub const QBaseDraw = SuperDraw;

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
    pub fn SuperDraw(self: QGraphicsEffect, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QGraphicsEffect_SuperDraw(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    /// ` flags: flag of qgraphicseffect_enums.ChangeFlag `
    ///
    pub fn SourceChanged(self: QGraphicsEffect, flags: i32) void {
        qtc.QGraphicsEffect_SourceChanged(@ptrCast(self.ptr), @bitCast(flags));
    }

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
    pub fn OnSourceChanged(self: QGraphicsEffect, callback: *const fn (QGraphicsEffect, i32) callconv(.c) void) void {
        qtc.QGraphicsEffect_OnSourceChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSourceChanged` instead
    ///
    pub const QBaseSourceChanged = SuperSourceChanged;

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
    pub fn SuperSourceChanged(self: QGraphicsEffect, flags: i32) void {
        qtc.QGraphicsEffect_SuperSourceChanged(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    pub fn UpdateBoundingRect(self: QGraphicsEffect) void {
        qtc.QGraphicsEffect_UpdateBoundingRect(@ptrCast(self.ptr));
    }

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
    pub fn OnUpdateBoundingRect(self: QGraphicsEffect, callback: *const fn () callconv(.c) void) void {
        qtc.QGraphicsEffect_OnUpdateBoundingRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperUpdateBoundingRect` instead
    ///
    pub const QBaseUpdateBoundingRect = SuperUpdateBoundingRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    pub fn SuperUpdateBoundingRect(self: QGraphicsEffect) void {
        qtc.QGraphicsEffect_SuperUpdateBoundingRect(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    pub fn SourceIsPixmap(self: QGraphicsEffect) bool {
        return qtc.QGraphicsEffect_SourceIsPixmap(@ptrCast(self.ptr));
    }

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
    pub fn OnSourceIsPixmap(self: QGraphicsEffect, callback: *const fn () callconv(.c) bool) void {
        qtc.QGraphicsEffect_OnSourceIsPixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSourceIsPixmap` instead
    ///
    pub const QBaseSourceIsPixmap = SuperSourceIsPixmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    pub fn SuperSourceIsPixmap(self: QGraphicsEffect) bool {
        return qtc.QGraphicsEffect_SuperSourceIsPixmap(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    pub fn SourceBoundingRect(self: QGraphicsEffect) QRectF {
        return .{ .ptr = qtc.QGraphicsEffect_SourceBoundingRect(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSourceBoundingRect(self: QGraphicsEffect, callback: *const fn () callconv(.c) QRectF) void {
        qtc.QGraphicsEffect_OnSourceBoundingRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSourceBoundingRect` instead
    ///
    pub const QBaseSourceBoundingRect = SuperSourceBoundingRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    pub fn SuperSourceBoundingRect(self: QGraphicsEffect) QRectF {
        return .{ .ptr = qtc.QGraphicsEffect_SuperSourceBoundingRect(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    /// ` painter: QPainter `
    ///
    pub fn DrawSource(self: QGraphicsEffect, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QGraphicsEffect_DrawSource(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

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
    pub fn OnDrawSource(self: QGraphicsEffect, callback: *const fn (QGraphicsEffect, QPainter) callconv(.c) void) void {
        qtc.QGraphicsEffect_OnDrawSource(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDrawSource` instead
    ///
    pub const QBaseDrawSource = SuperDrawSource;

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
    pub fn SuperDrawSource(self: QGraphicsEffect, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QGraphicsEffect_SuperDrawSource(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    pub fn SourcePixmap(self: QGraphicsEffect) QPixmap {
        return .{ .ptr = qtc.QGraphicsEffect_SourcePixmap(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSourcePixmap(self: QGraphicsEffect, callback: *const fn () callconv(.c) QPixmap) void {
        qtc.QGraphicsEffect_OnSourcePixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSourcePixmap` instead
    ///
    pub const QBaseSourcePixmap = SuperSourcePixmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    pub fn SuperSourcePixmap(self: QGraphicsEffect) QPixmap {
        return .{ .ptr = qtc.QGraphicsEffect_SuperSourcePixmap(@ptrCast(self.ptr)) };
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicseffect.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicseffect.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    /// ` system: qnamespace_enums.CoordinateSystem `
    ///
    pub fn SourceBoundingRect1(self: QGraphicsEffect, system: i32) QRectF {
        return .{ .ptr = qtc.QGraphicsEffect_SourceBoundingRect1(@ptrCast(self.ptr), @bitCast(system)) };
    }

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
    pub fn OnSourceBoundingRect1(self: QGraphicsEffect, callback: *const fn (QGraphicsEffect, i32) callconv(.c) QRectF) void {
        qtc.QGraphicsEffect_OnSourceBoundingRect1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSourceBoundingRect1` instead
    ///
    pub const QBaseSourceBoundingRect1 = SuperSourceBoundingRect1;

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
    pub fn SuperSourceBoundingRect1(self: QGraphicsEffect, system: i32) QRectF {
        return .{ .ptr = qtc.QGraphicsEffect_SuperSourceBoundingRect1(@ptrCast(self.ptr), @bitCast(system)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    /// ` system: qnamespace_enums.CoordinateSystem `
    ///
    pub fn SourcePixmap1(self: QGraphicsEffect, system: i32) QPixmap {
        return .{ .ptr = qtc.QGraphicsEffect_SourcePixmap1(@ptrCast(self.ptr), @bitCast(system)) };
    }

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
    pub fn OnSourcePixmap1(self: QGraphicsEffect, callback: *const fn (QGraphicsEffect, i32) callconv(.c) QPixmap) void {
        qtc.QGraphicsEffect_OnSourcePixmap1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSourcePixmap1` instead
    ///
    pub const QBaseSourcePixmap1 = SuperSourcePixmap1;

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
    pub fn SuperSourcePixmap1(self: QGraphicsEffect, system: i32) QPixmap {
        return .{ .ptr = qtc.QGraphicsEffect_SuperSourcePixmap1(@ptrCast(self.ptr), @bitCast(system)) };
    }

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
    pub fn SourcePixmap2(self: QGraphicsEffect, system: i32, offset: anytype) QPixmap {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QGraphicsEffect_SourcePixmap2(@ptrCast(self.ptr), @bitCast(system), @ptrCast(offset.ptr)) };
    }

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
    pub fn OnSourcePixmap2(self: QGraphicsEffect, callback: *const fn (QGraphicsEffect, i32, QPoint) callconv(.c) QPixmap) void {
        qtc.QGraphicsEffect_OnSourcePixmap2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSourcePixmap2` instead
    ///
    pub const QBaseSourcePixmap2 = SuperSourcePixmap2;

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
    pub fn SuperSourcePixmap2(self: QGraphicsEffect, system: i32, offset: anytype) QPixmap {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QGraphicsEffect_SuperSourcePixmap2(@ptrCast(self.ptr), @bitCast(system), @ptrCast(offset.ptr)) };
    }

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
    pub fn SourcePixmap3(self: QGraphicsEffect, system: i32, offset: anytype, mode: i32) QPixmap {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QGraphicsEffect_SourcePixmap3(@ptrCast(self.ptr), @bitCast(system), @ptrCast(offset.ptr), @bitCast(mode)) };
    }

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
    pub fn OnSourcePixmap3(self: QGraphicsEffect, callback: *const fn (QGraphicsEffect, i32, QPoint, i32) callconv(.c) QPixmap) void {
        qtc.QGraphicsEffect_OnSourcePixmap3(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSourcePixmap3` instead
    ///
    pub const QBaseSourcePixmap3 = SuperSourcePixmap3;

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
    pub fn SuperSourcePixmap3(self: QGraphicsEffect, system: i32, offset: anytype, mode: i32) QPixmap {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QGraphicsEffect_SuperSourcePixmap3(@ptrCast(self.ptr), @bitCast(system), @ptrCast(offset.ptr), @bitCast(mode)) };
    }

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
    pub fn ObjectName(self: QGraphicsEffect, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicseffect.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetObjectName(self: QGraphicsEffect, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    pub fn IsWidgetType(self: QGraphicsEffect) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    pub fn IsWindowType(self: QGraphicsEffect) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    pub fn IsQuickItemType(self: QGraphicsEffect) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    pub fn SignalsBlocked(self: QGraphicsEffect) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

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
    pub fn BlockSignals(self: QGraphicsEffect, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    pub fn Thread(self: QGraphicsEffect) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QGraphicsEffect, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

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
    pub fn StartTimer(self: QGraphicsEffect, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

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
    pub fn StartTimer2(self: QGraphicsEffect, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

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
    pub fn KillTimer(self: QGraphicsEffect, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn KillTimer2(self: QGraphicsEffect, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn Children(self: QGraphicsEffect, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qgraphicseffect.Children: Memory allocation failed");
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
    /// ` self: QGraphicsEffect `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QGraphicsEffect, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

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
    pub fn InstallEventFilter(self: QGraphicsEffect, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

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
    pub fn RemoveEventFilter(self: QGraphicsEffect, obj: anytype) void {
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
    /// ` self: QGraphicsEffect `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QGraphicsEffect, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QGraphicsEffect `
    ///
    pub fn Disconnect3(self: QGraphicsEffect) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

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
    pub fn Disconnect4(self: QGraphicsEffect, receiver: anytype) bool {
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
    /// ` self: QGraphicsEffect `
    ///
    pub fn DumpObjectTree(self: QGraphicsEffect) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    pub fn DumpObjectInfo(self: QGraphicsEffect) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

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
    pub fn SetProperty(self: QGraphicsEffect, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QGraphicsEffect `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QGraphicsEffect, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

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
    pub fn DynamicPropertyNames(self: QGraphicsEffect, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qgraphicseffect.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qgraphicseffect.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QGraphicsEffect `
    ///
    pub fn BindingStorage(self: QGraphicsEffect) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    pub fn BindingStorage2(self: QGraphicsEffect) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    pub fn Destroyed(self: QGraphicsEffect) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

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
    pub fn OnDestroyed(self: QGraphicsEffect, callback: *const fn (QGraphicsEffect) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    pub fn Parent(self: QGraphicsEffect) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

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
    pub fn Inherits(self: QGraphicsEffect, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsEffect `
    ///
    pub fn DeleteLater(self: QGraphicsEffect) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

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
    pub fn StartTimer22(self: QGraphicsEffect, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

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
    pub fn StartTimer23(self: QGraphicsEffect, time: i64, timerType: i32) i32 {
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
    /// ` self: QGraphicsEffect `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QGraphicsEffect, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QGraphicsEffect `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QGraphicsEffect, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn Disconnect22(self: QGraphicsEffect, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QGraphicsEffect `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QGraphicsEffect, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QGraphicsEffect `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QGraphicsEffect, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QGraphicsEffect `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QGraphicsEffect, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnDestroyed1(self: QGraphicsEffect, callback: *const fn (QGraphicsEffect, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn Event(self: QGraphicsEffect, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QGraphicsEffect_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

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
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QGraphicsEffect, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QGraphicsEffect_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEvent(self: QGraphicsEffect, callback: *const fn (QGraphicsEffect, QEvent) callconv(.c) bool) void {
        qtc.QGraphicsEffect_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QGraphicsEffect, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QGraphicsEffect_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

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
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QGraphicsEffect, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QGraphicsEffect_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEventFilter(self: QGraphicsEffect, callback: *const fn (QGraphicsEffect, QObject, QEvent) callconv(.c) bool) void {
        qtc.QGraphicsEffect_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QGraphicsEffect, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QGraphicsEffect_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

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
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QGraphicsEffect, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QGraphicsEffect_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnTimerEvent(self: QGraphicsEffect, callback: *const fn (QGraphicsEffect, QTimerEvent) callconv(.c) void) void {
        qtc.QGraphicsEffect_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QGraphicsEffect, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QGraphicsEffect_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperChildEvent` instead
    ///
    pub const QBaseChildEvent = SuperChildEvent;

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
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QGraphicsEffect, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QGraphicsEffect_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnChildEvent(self: QGraphicsEffect, callback: *const fn (QGraphicsEffect, QChildEvent) callconv(.c) void) void {
        qtc.QGraphicsEffect_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QGraphicsEffect, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QGraphicsEffect_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperCustomEvent` instead
    ///
    pub const QBaseCustomEvent = SuperCustomEvent;

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
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QGraphicsEffect, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QGraphicsEffect_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnCustomEvent(self: QGraphicsEffect, callback: *const fn (QGraphicsEffect, QEvent) callconv(.c) void) void {
        qtc.QGraphicsEffect_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ConnectNotify(self: QGraphicsEffect, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsEffect_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperConnectNotify` instead
    ///
    pub const QBaseConnectNotify = SuperConnectNotify;

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
    pub fn SuperConnectNotify(self: QGraphicsEffect, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsEffect_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnConnectNotify(self: QGraphicsEffect, callback: *const fn (QGraphicsEffect, QMetaMethod) callconv(.c) void) void {
        qtc.QGraphicsEffect_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DisconnectNotify(self: QGraphicsEffect, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsEffect_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperDisconnectNotify` instead
    ///
    pub const QBaseDisconnectNotify = SuperDisconnectNotify;

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
    pub fn SuperDisconnectNotify(self: QGraphicsEffect, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsEffect_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnDisconnectNotify(self: QGraphicsEffect, callback: *const fn (QGraphicsEffect, QMetaMethod) callconv(.c) void) void {
        qtc.QGraphicsEffect_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Sender(self: QGraphicsEffect) QObject {
        return .{ .ptr = qtc.QGraphicsEffect_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSender` instead
    ///
    pub const QBaseSender = SuperSender;

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
    pub fn SuperSender(self: QGraphicsEffect) QObject {
        return .{ .ptr = qtc.QGraphicsEffect_SuperSender(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSender(self: QGraphicsEffect, callback: *const fn () callconv(.c) QObject) void {
        qtc.QGraphicsEffect_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SenderSignalIndex(self: QGraphicsEffect) i32 {
        return qtc.QGraphicsEffect_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSenderSignalIndex` instead
    ///
    pub const QBaseSenderSignalIndex = SuperSenderSignalIndex;

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
    pub fn SuperSenderSignalIndex(self: QGraphicsEffect) i32 {
        return qtc.QGraphicsEffect_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

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
    pub fn OnSenderSignalIndex(self: QGraphicsEffect, callback: *const fn () callconv(.c) i32) void {
        qtc.QGraphicsEffect_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Receivers(self: QGraphicsEffect, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGraphicsEffect_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `SuperReceivers` instead
    ///
    pub const QBaseReceivers = SuperReceivers;

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
    pub fn SuperReceivers(self: QGraphicsEffect, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGraphicsEffect_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn OnReceivers(self: QGraphicsEffect, callback: *const fn (QGraphicsEffect, [*:0]const u8) callconv(.c) i32) void {
        qtc.QGraphicsEffect_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IsSignalConnected(self: QGraphicsEffect, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QGraphicsEffect_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsSignalConnected` instead
    ///
    pub const QBaseIsSignalConnected = SuperIsSignalConnected;

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
    pub fn SuperIsSignalConnected(self: QGraphicsEffect, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QGraphicsEffect_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnIsSignalConnected(self: QGraphicsEffect, callback: *const fn (QGraphicsEffect, QMetaMethod) callconv(.c) bool) void {
        qtc.QGraphicsEffect_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn OnObjectNameChanged(self: QGraphicsEffect, callback: *const fn (QGraphicsEffect, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#dtor.QGraphicsEffect)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QGraphicsEffect `
    ///
    pub fn Delete(self: QGraphicsEffect) void {
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

    /// New constructs a new QGraphicsColorizeEffect object.
    ///
    pub fn New() QGraphicsColorizeEffect {
        return .{ .ptr = qtc.QGraphicsColorizeEffect_new() };
    }

    /// New2 constructs a new QGraphicsColorizeEffect object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) QGraphicsColorizeEffect {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QGraphicsColorizeEffect_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    pub fn MetaObject(self: QGraphicsColorizeEffect) QMetaObject {
        return .{ .ptr = qtc.QGraphicsColorizeEffect_MetaObject(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMetaObject(self: QGraphicsColorizeEffect, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QGraphicsColorizeEffect_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    pub fn SuperMetaObject(self: QGraphicsColorizeEffect) QMetaObject {
        return .{ .ptr = qtc.QGraphicsColorizeEffect_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QGraphicsColorizeEffect, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGraphicsColorizeEffect_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsColorizeEffect, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QGraphicsColorizeEffect, callback: *const fn (QGraphicsColorizeEffect, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QGraphicsColorizeEffect_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QGraphicsColorizeEffect, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGraphicsColorizeEffect_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

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
    pub fn Metacall(self: QGraphicsColorizeEffect, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGraphicsColorizeEffect_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsColorizeEffect, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QGraphicsColorizeEffect, callback: *const fn (QGraphicsColorizeEffect, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QGraphicsColorizeEffect_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

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
    pub fn SuperMetacall(self: QGraphicsColorizeEffect, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGraphicsColorizeEffect_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicscolorizeeffect.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#color)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    pub fn Color(self: QGraphicsColorizeEffect) QColor {
        return .{ .ptr = qtc.QGraphicsColorizeEffect_Color(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#strength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    pub fn Strength(self: QGraphicsColorizeEffect) f64 {
        return qtc.QGraphicsColorizeEffect_Strength(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#setColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` c: QColor `
    ///
    pub fn SetColor(self: QGraphicsColorizeEffect, c: anytype) void {
        comptime _ = @TypeOf(c)._is_QColor;
        qtc.QGraphicsColorizeEffect_SetColor(@ptrCast(self.ptr), @ptrCast(c.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#setStrength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` strength: f64 `
    ///
    pub fn SetStrength(self: QGraphicsColorizeEffect, strength: f64) void {
        qtc.QGraphicsColorizeEffect_SetStrength(@ptrCast(self.ptr), @bitCast(strength));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#colorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` color: QColor `
    ///
    pub fn ColorChanged(self: QGraphicsColorizeEffect, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QGraphicsColorizeEffect_ColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#colorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsColorizeEffect, color: QColor) callconv(.c) void `
    ///
    pub fn OnColorChanged(self: QGraphicsColorizeEffect, callback: *const fn (QGraphicsColorizeEffect, QColor) callconv(.c) void) void {
        qtc.QGraphicsColorizeEffect_Connect_ColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#strengthChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` strength: f64 `
    ///
    pub fn StrengthChanged(self: QGraphicsColorizeEffect, strength: f64) void {
        qtc.QGraphicsColorizeEffect_StrengthChanged(@ptrCast(self.ptr), @bitCast(strength));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#strengthChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsColorizeEffect, strength: f64) callconv(.c) void `
    ///
    pub fn OnStrengthChanged(self: QGraphicsColorizeEffect, callback: *const fn (QGraphicsColorizeEffect, f64) callconv(.c) void) void {
        qtc.QGraphicsColorizeEffect_Connect_StrengthChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#draw)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` painter: QPainter `
    ///
    pub fn Draw(self: QGraphicsColorizeEffect, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QGraphicsColorizeEffect_Draw(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

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
    pub fn OnDraw(self: QGraphicsColorizeEffect, callback: *const fn (QGraphicsColorizeEffect, QPainter) callconv(.c) void) void {
        qtc.QGraphicsColorizeEffect_OnDraw(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDraw` instead
    ///
    pub const QBaseDraw = SuperDraw;

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
    pub fn SuperDraw(self: QGraphicsColorizeEffect, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QGraphicsColorizeEffect_SuperDraw(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicscolorizeeffect.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicscolorizeeffect.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    pub fn BoundingRect(self: QGraphicsColorizeEffect) QRectF {
        return .{ .ptr = qtc.QGraphicsEffect_BoundingRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    pub fn IsEnabled(self: QGraphicsColorizeEffect) bool {
        return qtc.QGraphicsEffect_IsEnabled(@ptrCast(self.ptr));
    }

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
    pub fn SetEnabled(self: QGraphicsColorizeEffect, enable: bool) void {
        qtc.QGraphicsEffect_SetEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    pub fn Update(self: QGraphicsColorizeEffect) void {
        qtc.QGraphicsEffect_Update(@ptrCast(self.ptr));
    }

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
    pub fn EnabledChanged(self: QGraphicsColorizeEffect, enabled: bool) void {
        qtc.QGraphicsEffect_EnabledChanged(@ptrCast(self.ptr), enabled);
    }

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
    pub fn OnEnabledChanged(self: QGraphicsColorizeEffect, callback: *const fn (QGraphicsColorizeEffect, bool) callconv(.c) void) void {
        qtc.QGraphicsEffect_Connect_EnabledChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ObjectName(self: QGraphicsColorizeEffect, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicscolorizeeffect.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetObjectName(self: QGraphicsColorizeEffect, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    pub fn IsWidgetType(self: QGraphicsColorizeEffect) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    pub fn IsWindowType(self: QGraphicsColorizeEffect) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    pub fn IsQuickItemType(self: QGraphicsColorizeEffect) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    pub fn SignalsBlocked(self: QGraphicsColorizeEffect) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

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
    pub fn BlockSignals(self: QGraphicsColorizeEffect, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    pub fn Thread(self: QGraphicsColorizeEffect) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QGraphicsColorizeEffect, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

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
    pub fn StartTimer(self: QGraphicsColorizeEffect, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

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
    pub fn StartTimer2(self: QGraphicsColorizeEffect, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

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
    pub fn KillTimer(self: QGraphicsColorizeEffect, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn KillTimer2(self: QGraphicsColorizeEffect, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn Children(self: QGraphicsColorizeEffect, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qgraphicscolorizeeffect.Children: Memory allocation failed");
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QGraphicsColorizeEffect, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

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
    pub fn InstallEventFilter(self: QGraphicsColorizeEffect, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

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
    pub fn RemoveEventFilter(self: QGraphicsColorizeEffect, obj: anytype) void {
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QGraphicsColorizeEffect, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    pub fn Disconnect3(self: QGraphicsColorizeEffect) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

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
    pub fn Disconnect4(self: QGraphicsColorizeEffect, receiver: anytype) bool {
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    pub fn DumpObjectTree(self: QGraphicsColorizeEffect) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    pub fn DumpObjectInfo(self: QGraphicsColorizeEffect) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

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
    pub fn SetProperty(self: QGraphicsColorizeEffect, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QGraphicsColorizeEffect, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

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
    pub fn DynamicPropertyNames(self: QGraphicsColorizeEffect, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qgraphicscolorizeeffect.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qgraphicscolorizeeffect.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    pub fn BindingStorage(self: QGraphicsColorizeEffect) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    pub fn BindingStorage2(self: QGraphicsColorizeEffect) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    pub fn Destroyed(self: QGraphicsColorizeEffect) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

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
    pub fn OnDestroyed(self: QGraphicsColorizeEffect, callback: *const fn (QGraphicsColorizeEffect) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    pub fn Parent(self: QGraphicsColorizeEffect) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

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
    pub fn Inherits(self: QGraphicsColorizeEffect, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    pub fn DeleteLater(self: QGraphicsColorizeEffect) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

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
    pub fn StartTimer22(self: QGraphicsColorizeEffect, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

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
    pub fn StartTimer23(self: QGraphicsColorizeEffect, time: i64, timerType: i32) i32 {
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QGraphicsColorizeEffect, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QGraphicsColorizeEffect, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn Disconnect22(self: QGraphicsColorizeEffect, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QGraphicsColorizeEffect, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QGraphicsColorizeEffect, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QGraphicsColorizeEffect `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QGraphicsColorizeEffect, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnDestroyed1(self: QGraphicsColorizeEffect, callback: *const fn (QGraphicsColorizeEffect, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn BoundingRectFor(self: QGraphicsColorizeEffect, sourceRect: anytype) QRectF {
        comptime _ = @TypeOf(sourceRect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsColorizeEffect_BoundingRectFor(@ptrCast(self.ptr), @ptrCast(sourceRect.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperBoundingRectFor` instead
    ///
    pub const QBaseBoundingRectFor = SuperBoundingRectFor;

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
    pub fn SuperBoundingRectFor(self: QGraphicsColorizeEffect, sourceRect: anytype) QRectF {
        comptime _ = @TypeOf(sourceRect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsColorizeEffect_SuperBoundingRectFor(@ptrCast(self.ptr), @ptrCast(sourceRect.ptr)) };
    }

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
    pub fn OnBoundingRectFor(self: QGraphicsColorizeEffect, callback: *const fn (QGraphicsColorizeEffect, QRectF) callconv(.c) QRectF) void {
        qtc.QGraphicsColorizeEffect_OnBoundingRectFor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SourceChanged(self: QGraphicsColorizeEffect, flags: i32) void {
        qtc.QGraphicsColorizeEffect_SourceChanged(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `SuperSourceChanged` instead
    ///
    pub const QBaseSourceChanged = SuperSourceChanged;

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
    pub fn SuperSourceChanged(self: QGraphicsColorizeEffect, flags: i32) void {
        qtc.QGraphicsColorizeEffect_SuperSourceChanged(@ptrCast(self.ptr), @bitCast(flags));
    }

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
    pub fn OnSourceChanged(self: QGraphicsColorizeEffect, callback: *const fn (QGraphicsColorizeEffect, i32) callconv(.c) void) void {
        qtc.QGraphicsColorizeEffect_OnSourceChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn Event(self: QGraphicsColorizeEffect, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QGraphicsColorizeEffect_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

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
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QGraphicsColorizeEffect, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QGraphicsColorizeEffect_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEvent(self: QGraphicsColorizeEffect, callback: *const fn (QGraphicsColorizeEffect, QEvent) callconv(.c) bool) void {
        qtc.QGraphicsColorizeEffect_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QGraphicsColorizeEffect, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QGraphicsColorizeEffect_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

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
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QGraphicsColorizeEffect, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QGraphicsColorizeEffect_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEventFilter(self: QGraphicsColorizeEffect, callback: *const fn (QGraphicsColorizeEffect, QObject, QEvent) callconv(.c) bool) void {
        qtc.QGraphicsColorizeEffect_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QGraphicsColorizeEffect, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QGraphicsColorizeEffect_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

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
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QGraphicsColorizeEffect, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QGraphicsColorizeEffect_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnTimerEvent(self: QGraphicsColorizeEffect, callback: *const fn (QGraphicsColorizeEffect, QTimerEvent) callconv(.c) void) void {
        qtc.QGraphicsColorizeEffect_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QGraphicsColorizeEffect, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QGraphicsColorizeEffect_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperChildEvent` instead
    ///
    pub const QBaseChildEvent = SuperChildEvent;

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
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QGraphicsColorizeEffect, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QGraphicsColorizeEffect_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnChildEvent(self: QGraphicsColorizeEffect, callback: *const fn (QGraphicsColorizeEffect, QChildEvent) callconv(.c) void) void {
        qtc.QGraphicsColorizeEffect_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QGraphicsColorizeEffect, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QGraphicsColorizeEffect_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperCustomEvent` instead
    ///
    pub const QBaseCustomEvent = SuperCustomEvent;

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
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QGraphicsColorizeEffect, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QGraphicsColorizeEffect_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnCustomEvent(self: QGraphicsColorizeEffect, callback: *const fn (QGraphicsColorizeEffect, QEvent) callconv(.c) void) void {
        qtc.QGraphicsColorizeEffect_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ConnectNotify(self: QGraphicsColorizeEffect, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsColorizeEffect_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperConnectNotify` instead
    ///
    pub const QBaseConnectNotify = SuperConnectNotify;

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
    pub fn SuperConnectNotify(self: QGraphicsColorizeEffect, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsColorizeEffect_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnConnectNotify(self: QGraphicsColorizeEffect, callback: *const fn (QGraphicsColorizeEffect, QMetaMethod) callconv(.c) void) void {
        qtc.QGraphicsColorizeEffect_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DisconnectNotify(self: QGraphicsColorizeEffect, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsColorizeEffect_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperDisconnectNotify` instead
    ///
    pub const QBaseDisconnectNotify = SuperDisconnectNotify;

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
    pub fn SuperDisconnectNotify(self: QGraphicsColorizeEffect, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsColorizeEffect_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnDisconnectNotify(self: QGraphicsColorizeEffect, callback: *const fn (QGraphicsColorizeEffect, QMetaMethod) callconv(.c) void) void {
        qtc.QGraphicsColorizeEffect_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn UpdateBoundingRect(self: QGraphicsColorizeEffect) void {
        qtc.QGraphicsColorizeEffect_UpdateBoundingRect(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperUpdateBoundingRect` instead
    ///
    pub const QBaseUpdateBoundingRect = SuperUpdateBoundingRect;

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
    pub fn SuperUpdateBoundingRect(self: QGraphicsColorizeEffect) void {
        qtc.QGraphicsColorizeEffect_SuperUpdateBoundingRect(@ptrCast(self.ptr));
    }

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
    pub fn OnUpdateBoundingRect(self: QGraphicsColorizeEffect, callback: *const fn () callconv(.c) void) void {
        qtc.QGraphicsColorizeEffect_OnUpdateBoundingRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SourceIsPixmap(self: QGraphicsColorizeEffect) bool {
        return qtc.QGraphicsColorizeEffect_SourceIsPixmap(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSourceIsPixmap` instead
    ///
    pub const QBaseSourceIsPixmap = SuperSourceIsPixmap;

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
    pub fn SuperSourceIsPixmap(self: QGraphicsColorizeEffect) bool {
        return qtc.QGraphicsColorizeEffect_SuperSourceIsPixmap(@ptrCast(self.ptr));
    }

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
    pub fn OnSourceIsPixmap(self: QGraphicsColorizeEffect, callback: *const fn () callconv(.c) bool) void {
        qtc.QGraphicsColorizeEffect_OnSourceIsPixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SourceBoundingRect(self: QGraphicsColorizeEffect) QRectF {
        return .{ .ptr = qtc.QGraphicsColorizeEffect_SourceBoundingRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSourceBoundingRect` instead
    ///
    pub const QBaseSourceBoundingRect = SuperSourceBoundingRect;

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
    pub fn SuperSourceBoundingRect(self: QGraphicsColorizeEffect) QRectF {
        return .{ .ptr = qtc.QGraphicsColorizeEffect_SuperSourceBoundingRect(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSourceBoundingRect(self: QGraphicsColorizeEffect, callback: *const fn () callconv(.c) QRectF) void {
        qtc.QGraphicsColorizeEffect_OnSourceBoundingRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DrawSource(self: QGraphicsColorizeEffect, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QGraphicsColorizeEffect_DrawSource(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// ### DEPRECATED: Use `SuperDrawSource` instead
    ///
    pub const QBaseDrawSource = SuperDrawSource;

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
    pub fn SuperDrawSource(self: QGraphicsColorizeEffect, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QGraphicsColorizeEffect_SuperDrawSource(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

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
    pub fn OnDrawSource(self: QGraphicsColorizeEffect, callback: *const fn (QGraphicsColorizeEffect, QPainter) callconv(.c) void) void {
        qtc.QGraphicsColorizeEffect_OnDrawSource(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SourcePixmap(self: QGraphicsColorizeEffect) QPixmap {
        return .{ .ptr = qtc.QGraphicsColorizeEffect_SourcePixmap(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSourcePixmap` instead
    ///
    pub const QBaseSourcePixmap = SuperSourcePixmap;

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
    pub fn SuperSourcePixmap(self: QGraphicsColorizeEffect) QPixmap {
        return .{ .ptr = qtc.QGraphicsColorizeEffect_SuperSourcePixmap(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSourcePixmap(self: QGraphicsColorizeEffect, callback: *const fn () callconv(.c) QPixmap) void {
        qtc.QGraphicsColorizeEffect_OnSourcePixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Sender(self: QGraphicsColorizeEffect) QObject {
        return .{ .ptr = qtc.QGraphicsColorizeEffect_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSender` instead
    ///
    pub const QBaseSender = SuperSender;

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
    pub fn SuperSender(self: QGraphicsColorizeEffect) QObject {
        return .{ .ptr = qtc.QGraphicsColorizeEffect_SuperSender(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSender(self: QGraphicsColorizeEffect, callback: *const fn () callconv(.c) QObject) void {
        qtc.QGraphicsColorizeEffect_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SenderSignalIndex(self: QGraphicsColorizeEffect) i32 {
        return qtc.QGraphicsColorizeEffect_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSenderSignalIndex` instead
    ///
    pub const QBaseSenderSignalIndex = SuperSenderSignalIndex;

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
    pub fn SuperSenderSignalIndex(self: QGraphicsColorizeEffect) i32 {
        return qtc.QGraphicsColorizeEffect_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

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
    pub fn OnSenderSignalIndex(self: QGraphicsColorizeEffect, callback: *const fn () callconv(.c) i32) void {
        qtc.QGraphicsColorizeEffect_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Receivers(self: QGraphicsColorizeEffect, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGraphicsColorizeEffect_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `SuperReceivers` instead
    ///
    pub const QBaseReceivers = SuperReceivers;

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
    pub fn SuperReceivers(self: QGraphicsColorizeEffect, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGraphicsColorizeEffect_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn OnReceivers(self: QGraphicsColorizeEffect, callback: *const fn (QGraphicsColorizeEffect, [*:0]const u8) callconv(.c) i32) void {
        qtc.QGraphicsColorizeEffect_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IsSignalConnected(self: QGraphicsColorizeEffect, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QGraphicsColorizeEffect_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsSignalConnected` instead
    ///
    pub const QBaseIsSignalConnected = SuperIsSignalConnected;

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
    pub fn SuperIsSignalConnected(self: QGraphicsColorizeEffect, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QGraphicsColorizeEffect_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnIsSignalConnected(self: QGraphicsColorizeEffect, callback: *const fn (QGraphicsColorizeEffect, QMetaMethod) callconv(.c) bool) void {
        qtc.QGraphicsColorizeEffect_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn OnObjectNameChanged(self: QGraphicsColorizeEffect, callback: *const fn (QGraphicsColorizeEffect, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#dtor.QGraphicsColorizeEffect)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QGraphicsColorizeEffect `
    ///
    pub fn Delete(self: QGraphicsColorizeEffect) void {
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

    /// New constructs a new QGraphicsBlurEffect object.
    ///
    pub fn New() QGraphicsBlurEffect {
        return .{ .ptr = qtc.QGraphicsBlurEffect_new() };
    }

    /// New2 constructs a new QGraphicsBlurEffect object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) QGraphicsBlurEffect {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QGraphicsBlurEffect_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    pub fn MetaObject(self: QGraphicsBlurEffect) QMetaObject {
        return .{ .ptr = qtc.QGraphicsBlurEffect_MetaObject(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMetaObject(self: QGraphicsBlurEffect, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QGraphicsBlurEffect_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    pub fn SuperMetaObject(self: QGraphicsBlurEffect) QMetaObject {
        return .{ .ptr = qtc.QGraphicsBlurEffect_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QGraphicsBlurEffect, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGraphicsBlurEffect_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsBlurEffect, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QGraphicsBlurEffect, callback: *const fn (QGraphicsBlurEffect, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QGraphicsBlurEffect_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QGraphicsBlurEffect, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGraphicsBlurEffect_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

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
    pub fn Metacall(self: QGraphicsBlurEffect, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGraphicsBlurEffect_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsBlurEffect, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QGraphicsBlurEffect, callback: *const fn (QGraphicsBlurEffect, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QGraphicsBlurEffect_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

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
    pub fn SuperMetacall(self: QGraphicsBlurEffect, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGraphicsBlurEffect_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsblureffect.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsblureffect.html#boundingRectFor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` rect: QRectF `
    ///
    pub fn BoundingRectFor(self: QGraphicsBlurEffect, rect: anytype) QRectF {
        comptime _ = @TypeOf(rect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsBlurEffect_BoundingRectFor(@ptrCast(self.ptr), @ptrCast(rect.ptr)) };
    }

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
    pub fn OnBoundingRectFor(self: QGraphicsBlurEffect, callback: *const fn (QGraphicsBlurEffect, QRectF) callconv(.c) QRectF) void {
        qtc.QGraphicsBlurEffect_OnBoundingRectFor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperBoundingRectFor` instead
    ///
    pub const QBaseBoundingRectFor = SuperBoundingRectFor;

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
    pub fn SuperBoundingRectFor(self: QGraphicsBlurEffect, rect: anytype) QRectF {
        comptime _ = @TypeOf(rect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsBlurEffect_SuperBoundingRectFor(@ptrCast(self.ptr), @ptrCast(rect.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsblureffect.html#blurRadius)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    pub fn BlurRadius(self: QGraphicsBlurEffect) f64 {
        return qtc.QGraphicsBlurEffect_BlurRadius(@ptrCast(self.ptr));
    }

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
    pub fn BlurHints(self: QGraphicsBlurEffect) i32 {
        return qtc.QGraphicsBlurEffect_BlurHints(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsblureffect.html#setBlurRadius)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` blurRadius: f64 `
    ///
    pub fn SetBlurRadius(self: QGraphicsBlurEffect, blurRadius: f64) void {
        qtc.QGraphicsBlurEffect_SetBlurRadius(@ptrCast(self.ptr), @bitCast(blurRadius));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsblureffect.html#setBlurHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` hints: flag of qgraphicseffect_enums.BlurHint `
    ///
    pub fn SetBlurHints(self: QGraphicsBlurEffect, hints: i32) void {
        qtc.QGraphicsBlurEffect_SetBlurHints(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsblureffect.html#blurRadiusChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` blurRadius: f64 `
    ///
    pub fn BlurRadiusChanged(self: QGraphicsBlurEffect, blurRadius: f64) void {
        qtc.QGraphicsBlurEffect_BlurRadiusChanged(@ptrCast(self.ptr), @bitCast(blurRadius));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsblureffect.html#blurRadiusChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsBlurEffect, blurRadius: f64) callconv(.c) void `
    ///
    pub fn OnBlurRadiusChanged(self: QGraphicsBlurEffect, callback: *const fn (QGraphicsBlurEffect, f64) callconv(.c) void) void {
        qtc.QGraphicsBlurEffect_Connect_BlurRadiusChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsblureffect.html#blurHintsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` hints: flag of qgraphicseffect_enums.BlurHint `
    ///
    pub fn BlurHintsChanged(self: QGraphicsBlurEffect, hints: i32) void {
        qtc.QGraphicsBlurEffect_BlurHintsChanged(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsblureffect.html#blurHintsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsBlurEffect, hints: flag of qgraphicseffect_enums.BlurHint) callconv(.c) void `
    ///
    pub fn OnBlurHintsChanged(self: QGraphicsBlurEffect, callback: *const fn (QGraphicsBlurEffect, i32) callconv(.c) void) void {
        qtc.QGraphicsBlurEffect_Connect_BlurHintsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsblureffect.html#draw)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` painter: QPainter `
    ///
    pub fn Draw(self: QGraphicsBlurEffect, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QGraphicsBlurEffect_Draw(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

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
    pub fn OnDraw(self: QGraphicsBlurEffect, callback: *const fn (QGraphicsBlurEffect, QPainter) callconv(.c) void) void {
        qtc.QGraphicsBlurEffect_OnDraw(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDraw` instead
    ///
    pub const QBaseDraw = SuperDraw;

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
    pub fn SuperDraw(self: QGraphicsBlurEffect, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QGraphicsBlurEffect_SuperDraw(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsblureffect.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsblureffect.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    pub fn BoundingRect(self: QGraphicsBlurEffect) QRectF {
        return .{ .ptr = qtc.QGraphicsEffect_BoundingRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    pub fn IsEnabled(self: QGraphicsBlurEffect) bool {
        return qtc.QGraphicsEffect_IsEnabled(@ptrCast(self.ptr));
    }

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
    pub fn SetEnabled(self: QGraphicsBlurEffect, enable: bool) void {
        qtc.QGraphicsEffect_SetEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    pub fn Update(self: QGraphicsBlurEffect) void {
        qtc.QGraphicsEffect_Update(@ptrCast(self.ptr));
    }

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
    pub fn EnabledChanged(self: QGraphicsBlurEffect, enabled: bool) void {
        qtc.QGraphicsEffect_EnabledChanged(@ptrCast(self.ptr), enabled);
    }

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
    pub fn OnEnabledChanged(self: QGraphicsBlurEffect, callback: *const fn (QGraphicsBlurEffect, bool) callconv(.c) void) void {
        qtc.QGraphicsEffect_Connect_EnabledChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ObjectName(self: QGraphicsBlurEffect, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsblureffect.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetObjectName(self: QGraphicsBlurEffect, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    pub fn IsWidgetType(self: QGraphicsBlurEffect) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    pub fn IsWindowType(self: QGraphicsBlurEffect) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    pub fn IsQuickItemType(self: QGraphicsBlurEffect) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    pub fn SignalsBlocked(self: QGraphicsBlurEffect) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

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
    pub fn BlockSignals(self: QGraphicsBlurEffect, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    pub fn Thread(self: QGraphicsBlurEffect) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QGraphicsBlurEffect, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

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
    pub fn StartTimer(self: QGraphicsBlurEffect, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

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
    pub fn StartTimer2(self: QGraphicsBlurEffect, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

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
    pub fn KillTimer(self: QGraphicsBlurEffect, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn KillTimer2(self: QGraphicsBlurEffect, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn Children(self: QGraphicsBlurEffect, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qgraphicsblureffect.Children: Memory allocation failed");
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
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QGraphicsBlurEffect, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

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
    pub fn InstallEventFilter(self: QGraphicsBlurEffect, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

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
    pub fn RemoveEventFilter(self: QGraphicsBlurEffect, obj: anytype) void {
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
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QGraphicsBlurEffect, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QGraphicsBlurEffect `
    ///
    pub fn Disconnect3(self: QGraphicsBlurEffect) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

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
    pub fn Disconnect4(self: QGraphicsBlurEffect, receiver: anytype) bool {
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
    /// ` self: QGraphicsBlurEffect `
    ///
    pub fn DumpObjectTree(self: QGraphicsBlurEffect) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    pub fn DumpObjectInfo(self: QGraphicsBlurEffect) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

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
    pub fn SetProperty(self: QGraphicsBlurEffect, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QGraphicsBlurEffect, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

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
    pub fn DynamicPropertyNames(self: QGraphicsBlurEffect, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qgraphicsblureffect.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qgraphicsblureffect.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QGraphicsBlurEffect `
    ///
    pub fn BindingStorage(self: QGraphicsBlurEffect) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    pub fn BindingStorage2(self: QGraphicsBlurEffect) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    pub fn Destroyed(self: QGraphicsBlurEffect) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

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
    pub fn OnDestroyed(self: QGraphicsBlurEffect, callback: *const fn (QGraphicsBlurEffect) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    pub fn Parent(self: QGraphicsBlurEffect) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

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
    pub fn Inherits(self: QGraphicsBlurEffect, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    pub fn DeleteLater(self: QGraphicsBlurEffect) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

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
    pub fn StartTimer22(self: QGraphicsBlurEffect, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

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
    pub fn StartTimer23(self: QGraphicsBlurEffect, time: i64, timerType: i32) i32 {
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
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QGraphicsBlurEffect, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QGraphicsBlurEffect, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn Disconnect22(self: QGraphicsBlurEffect, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QGraphicsBlurEffect, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QGraphicsBlurEffect, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QGraphicsBlurEffect `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QGraphicsBlurEffect, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnDestroyed1(self: QGraphicsBlurEffect, callback: *const fn (QGraphicsBlurEffect, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SourceChanged(self: QGraphicsBlurEffect, flags: i32) void {
        qtc.QGraphicsBlurEffect_SourceChanged(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `SuperSourceChanged` instead
    ///
    pub const QBaseSourceChanged = SuperSourceChanged;

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
    pub fn SuperSourceChanged(self: QGraphicsBlurEffect, flags: i32) void {
        qtc.QGraphicsBlurEffect_SuperSourceChanged(@ptrCast(self.ptr), @bitCast(flags));
    }

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
    pub fn OnSourceChanged(self: QGraphicsBlurEffect, callback: *const fn (QGraphicsBlurEffect, i32) callconv(.c) void) void {
        qtc.QGraphicsBlurEffect_OnSourceChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn Event(self: QGraphicsBlurEffect, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QGraphicsBlurEffect_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

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
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QGraphicsBlurEffect, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QGraphicsBlurEffect_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEvent(self: QGraphicsBlurEffect, callback: *const fn (QGraphicsBlurEffect, QEvent) callconv(.c) bool) void {
        qtc.QGraphicsBlurEffect_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QGraphicsBlurEffect, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QGraphicsBlurEffect_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

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
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QGraphicsBlurEffect, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QGraphicsBlurEffect_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEventFilter(self: QGraphicsBlurEffect, callback: *const fn (QGraphicsBlurEffect, QObject, QEvent) callconv(.c) bool) void {
        qtc.QGraphicsBlurEffect_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QGraphicsBlurEffect, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QGraphicsBlurEffect_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

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
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QGraphicsBlurEffect, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QGraphicsBlurEffect_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnTimerEvent(self: QGraphicsBlurEffect, callback: *const fn (QGraphicsBlurEffect, QTimerEvent) callconv(.c) void) void {
        qtc.QGraphicsBlurEffect_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QGraphicsBlurEffect, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QGraphicsBlurEffect_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperChildEvent` instead
    ///
    pub const QBaseChildEvent = SuperChildEvent;

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
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QGraphicsBlurEffect, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QGraphicsBlurEffect_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnChildEvent(self: QGraphicsBlurEffect, callback: *const fn (QGraphicsBlurEffect, QChildEvent) callconv(.c) void) void {
        qtc.QGraphicsBlurEffect_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QGraphicsBlurEffect, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QGraphicsBlurEffect_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperCustomEvent` instead
    ///
    pub const QBaseCustomEvent = SuperCustomEvent;

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
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QGraphicsBlurEffect, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QGraphicsBlurEffect_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnCustomEvent(self: QGraphicsBlurEffect, callback: *const fn (QGraphicsBlurEffect, QEvent) callconv(.c) void) void {
        qtc.QGraphicsBlurEffect_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ConnectNotify(self: QGraphicsBlurEffect, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsBlurEffect_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperConnectNotify` instead
    ///
    pub const QBaseConnectNotify = SuperConnectNotify;

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
    pub fn SuperConnectNotify(self: QGraphicsBlurEffect, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsBlurEffect_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnConnectNotify(self: QGraphicsBlurEffect, callback: *const fn (QGraphicsBlurEffect, QMetaMethod) callconv(.c) void) void {
        qtc.QGraphicsBlurEffect_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DisconnectNotify(self: QGraphicsBlurEffect, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsBlurEffect_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperDisconnectNotify` instead
    ///
    pub const QBaseDisconnectNotify = SuperDisconnectNotify;

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
    pub fn SuperDisconnectNotify(self: QGraphicsBlurEffect, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsBlurEffect_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnDisconnectNotify(self: QGraphicsBlurEffect, callback: *const fn (QGraphicsBlurEffect, QMetaMethod) callconv(.c) void) void {
        qtc.QGraphicsBlurEffect_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn UpdateBoundingRect(self: QGraphicsBlurEffect) void {
        qtc.QGraphicsBlurEffect_UpdateBoundingRect(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperUpdateBoundingRect` instead
    ///
    pub const QBaseUpdateBoundingRect = SuperUpdateBoundingRect;

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
    pub fn SuperUpdateBoundingRect(self: QGraphicsBlurEffect) void {
        qtc.QGraphicsBlurEffect_SuperUpdateBoundingRect(@ptrCast(self.ptr));
    }

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
    pub fn OnUpdateBoundingRect(self: QGraphicsBlurEffect, callback: *const fn () callconv(.c) void) void {
        qtc.QGraphicsBlurEffect_OnUpdateBoundingRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SourceIsPixmap(self: QGraphicsBlurEffect) bool {
        return qtc.QGraphicsBlurEffect_SourceIsPixmap(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSourceIsPixmap` instead
    ///
    pub const QBaseSourceIsPixmap = SuperSourceIsPixmap;

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
    pub fn SuperSourceIsPixmap(self: QGraphicsBlurEffect) bool {
        return qtc.QGraphicsBlurEffect_SuperSourceIsPixmap(@ptrCast(self.ptr));
    }

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
    pub fn OnSourceIsPixmap(self: QGraphicsBlurEffect, callback: *const fn () callconv(.c) bool) void {
        qtc.QGraphicsBlurEffect_OnSourceIsPixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SourceBoundingRect(self: QGraphicsBlurEffect) QRectF {
        return .{ .ptr = qtc.QGraphicsBlurEffect_SourceBoundingRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSourceBoundingRect` instead
    ///
    pub const QBaseSourceBoundingRect = SuperSourceBoundingRect;

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
    pub fn SuperSourceBoundingRect(self: QGraphicsBlurEffect) QRectF {
        return .{ .ptr = qtc.QGraphicsBlurEffect_SuperSourceBoundingRect(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSourceBoundingRect(self: QGraphicsBlurEffect, callback: *const fn () callconv(.c) QRectF) void {
        qtc.QGraphicsBlurEffect_OnSourceBoundingRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DrawSource(self: QGraphicsBlurEffect, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QGraphicsBlurEffect_DrawSource(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// ### DEPRECATED: Use `SuperDrawSource` instead
    ///
    pub const QBaseDrawSource = SuperDrawSource;

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
    pub fn SuperDrawSource(self: QGraphicsBlurEffect, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QGraphicsBlurEffect_SuperDrawSource(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

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
    pub fn OnDrawSource(self: QGraphicsBlurEffect, callback: *const fn (QGraphicsBlurEffect, QPainter) callconv(.c) void) void {
        qtc.QGraphicsBlurEffect_OnDrawSource(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SourcePixmap(self: QGraphicsBlurEffect) QPixmap {
        return .{ .ptr = qtc.QGraphicsBlurEffect_SourcePixmap(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSourcePixmap` instead
    ///
    pub const QBaseSourcePixmap = SuperSourcePixmap;

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
    pub fn SuperSourcePixmap(self: QGraphicsBlurEffect) QPixmap {
        return .{ .ptr = qtc.QGraphicsBlurEffect_SuperSourcePixmap(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSourcePixmap(self: QGraphicsBlurEffect, callback: *const fn () callconv(.c) QPixmap) void {
        qtc.QGraphicsBlurEffect_OnSourcePixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Sender(self: QGraphicsBlurEffect) QObject {
        return .{ .ptr = qtc.QGraphicsBlurEffect_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSender` instead
    ///
    pub const QBaseSender = SuperSender;

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
    pub fn SuperSender(self: QGraphicsBlurEffect) QObject {
        return .{ .ptr = qtc.QGraphicsBlurEffect_SuperSender(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSender(self: QGraphicsBlurEffect, callback: *const fn () callconv(.c) QObject) void {
        qtc.QGraphicsBlurEffect_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SenderSignalIndex(self: QGraphicsBlurEffect) i32 {
        return qtc.QGraphicsBlurEffect_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSenderSignalIndex` instead
    ///
    pub const QBaseSenderSignalIndex = SuperSenderSignalIndex;

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
    pub fn SuperSenderSignalIndex(self: QGraphicsBlurEffect) i32 {
        return qtc.QGraphicsBlurEffect_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

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
    pub fn OnSenderSignalIndex(self: QGraphicsBlurEffect, callback: *const fn () callconv(.c) i32) void {
        qtc.QGraphicsBlurEffect_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Receivers(self: QGraphicsBlurEffect, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGraphicsBlurEffect_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `SuperReceivers` instead
    ///
    pub const QBaseReceivers = SuperReceivers;

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
    pub fn SuperReceivers(self: QGraphicsBlurEffect, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGraphicsBlurEffect_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn OnReceivers(self: QGraphicsBlurEffect, callback: *const fn (QGraphicsBlurEffect, [*:0]const u8) callconv(.c) i32) void {
        qtc.QGraphicsBlurEffect_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IsSignalConnected(self: QGraphicsBlurEffect, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QGraphicsBlurEffect_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsSignalConnected` instead
    ///
    pub const QBaseIsSignalConnected = SuperIsSignalConnected;

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
    pub fn SuperIsSignalConnected(self: QGraphicsBlurEffect, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QGraphicsBlurEffect_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnIsSignalConnected(self: QGraphicsBlurEffect, callback: *const fn (QGraphicsBlurEffect, QMetaMethod) callconv(.c) bool) void {
        qtc.QGraphicsBlurEffect_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn OnObjectNameChanged(self: QGraphicsBlurEffect, callback: *const fn (QGraphicsBlurEffect, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsblureffect.html#dtor.QGraphicsBlurEffect)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QGraphicsBlurEffect `
    ///
    pub fn Delete(self: QGraphicsBlurEffect) void {
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

    /// New constructs a new QGraphicsDropShadowEffect object.
    ///
    pub fn New() QGraphicsDropShadowEffect {
        return .{ .ptr = qtc.QGraphicsDropShadowEffect_new() };
    }

    /// New2 constructs a new QGraphicsDropShadowEffect object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) QGraphicsDropShadowEffect {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QGraphicsDropShadowEffect_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    pub fn MetaObject(self: QGraphicsDropShadowEffect) QMetaObject {
        return .{ .ptr = qtc.QGraphicsDropShadowEffect_MetaObject(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMetaObject(self: QGraphicsDropShadowEffect, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QGraphicsDropShadowEffect_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    pub fn SuperMetaObject(self: QGraphicsDropShadowEffect) QMetaObject {
        return .{ .ptr = qtc.QGraphicsDropShadowEffect_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QGraphicsDropShadowEffect, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGraphicsDropShadowEffect_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsDropShadowEffect, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QGraphicsDropShadowEffect, callback: *const fn (QGraphicsDropShadowEffect, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QGraphicsDropShadowEffect_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QGraphicsDropShadowEffect, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGraphicsDropShadowEffect_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

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
    pub fn Metacall(self: QGraphicsDropShadowEffect, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGraphicsDropShadowEffect_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsDropShadowEffect, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QGraphicsDropShadowEffect, callback: *const fn (QGraphicsDropShadowEffect, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QGraphicsDropShadowEffect_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

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
    pub fn SuperMetacall(self: QGraphicsDropShadowEffect, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGraphicsDropShadowEffect_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsdropshadoweffect.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#boundingRectFor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` rect: QRectF `
    ///
    pub fn BoundingRectFor(self: QGraphicsDropShadowEffect, rect: anytype) QRectF {
        comptime _ = @TypeOf(rect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsDropShadowEffect_BoundingRectFor(@ptrCast(self.ptr), @ptrCast(rect.ptr)) };
    }

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
    pub fn OnBoundingRectFor(self: QGraphicsDropShadowEffect, callback: *const fn (QGraphicsDropShadowEffect, QRectF) callconv(.c) QRectF) void {
        qtc.QGraphicsDropShadowEffect_OnBoundingRectFor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperBoundingRectFor` instead
    ///
    pub const QBaseBoundingRectFor = SuperBoundingRectFor;

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
    pub fn SuperBoundingRectFor(self: QGraphicsDropShadowEffect, rect: anytype) QRectF {
        comptime _ = @TypeOf(rect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsDropShadowEffect_SuperBoundingRectFor(@ptrCast(self.ptr), @ptrCast(rect.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#offset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    pub fn Offset(self: QGraphicsDropShadowEffect) QPointF {
        return .{ .ptr = qtc.QGraphicsDropShadowEffect_Offset(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#xOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    pub fn XOffset(self: QGraphicsDropShadowEffect) f64 {
        return qtc.QGraphicsDropShadowEffect_XOffset(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#yOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    pub fn YOffset(self: QGraphicsDropShadowEffect) f64 {
        return qtc.QGraphicsDropShadowEffect_YOffset(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#blurRadius)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    pub fn BlurRadius(self: QGraphicsDropShadowEffect) f64 {
        return qtc.QGraphicsDropShadowEffect_BlurRadius(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#color)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    pub fn Color(self: QGraphicsDropShadowEffect) QColor {
        return .{ .ptr = qtc.QGraphicsDropShadowEffect_Color(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#setOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` ofs: QPointF `
    ///
    pub fn SetOffset(self: QGraphicsDropShadowEffect, ofs: anytype) void {
        comptime _ = @TypeOf(ofs)._is_QPointF;
        qtc.QGraphicsDropShadowEffect_SetOffset(@ptrCast(self.ptr), @ptrCast(ofs.ptr));
    }

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
    pub fn SetOffset2(self: QGraphicsDropShadowEffect, dx: f64, dy: f64) void {
        qtc.QGraphicsDropShadowEffect_SetOffset2(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#setOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` d: f64 `
    ///
    pub fn SetOffset3(self: QGraphicsDropShadowEffect, d: f64) void {
        qtc.QGraphicsDropShadowEffect_SetOffset3(@ptrCast(self.ptr), @bitCast(d));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#setXOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` dx: f64 `
    ///
    pub fn SetXOffset(self: QGraphicsDropShadowEffect, dx: f64) void {
        qtc.QGraphicsDropShadowEffect_SetXOffset(@ptrCast(self.ptr), @bitCast(dx));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#setYOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` dy: f64 `
    ///
    pub fn SetYOffset(self: QGraphicsDropShadowEffect, dy: f64) void {
        qtc.QGraphicsDropShadowEffect_SetYOffset(@ptrCast(self.ptr), @bitCast(dy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#setBlurRadius)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` blurRadius: f64 `
    ///
    pub fn SetBlurRadius(self: QGraphicsDropShadowEffect, blurRadius: f64) void {
        qtc.QGraphicsDropShadowEffect_SetBlurRadius(@ptrCast(self.ptr), @bitCast(blurRadius));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#setColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` color: QColor `
    ///
    pub fn SetColor(self: QGraphicsDropShadowEffect, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QGraphicsDropShadowEffect_SetColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#offsetChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` offset: QPointF `
    ///
    pub fn OffsetChanged(self: QGraphicsDropShadowEffect, offset: anytype) void {
        comptime _ = @TypeOf(offset)._is_QPointF;
        qtc.QGraphicsDropShadowEffect_OffsetChanged(@ptrCast(self.ptr), @ptrCast(offset.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#offsetChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsDropShadowEffect, offset: QPointF) callconv(.c) void `
    ///
    pub fn OnOffsetChanged(self: QGraphicsDropShadowEffect, callback: *const fn (QGraphicsDropShadowEffect, QPointF) callconv(.c) void) void {
        qtc.QGraphicsDropShadowEffect_Connect_OffsetChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#blurRadiusChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` blurRadius: f64 `
    ///
    pub fn BlurRadiusChanged(self: QGraphicsDropShadowEffect, blurRadius: f64) void {
        qtc.QGraphicsDropShadowEffect_BlurRadiusChanged(@ptrCast(self.ptr), @bitCast(blurRadius));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#blurRadiusChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsDropShadowEffect, blurRadius: f64) callconv(.c) void `
    ///
    pub fn OnBlurRadiusChanged(self: QGraphicsDropShadowEffect, callback: *const fn (QGraphicsDropShadowEffect, f64) callconv(.c) void) void {
        qtc.QGraphicsDropShadowEffect_Connect_BlurRadiusChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#colorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` color: QColor `
    ///
    pub fn ColorChanged(self: QGraphicsDropShadowEffect, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QGraphicsDropShadowEffect_ColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#colorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsDropShadowEffect, color: QColor) callconv(.c) void `
    ///
    pub fn OnColorChanged(self: QGraphicsDropShadowEffect, callback: *const fn (QGraphicsDropShadowEffect, QColor) callconv(.c) void) void {
        qtc.QGraphicsDropShadowEffect_Connect_ColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#draw)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` painter: QPainter `
    ///
    pub fn Draw(self: QGraphicsDropShadowEffect, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QGraphicsDropShadowEffect_Draw(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

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
    pub fn OnDraw(self: QGraphicsDropShadowEffect, callback: *const fn (QGraphicsDropShadowEffect, QPainter) callconv(.c) void) void {
        qtc.QGraphicsDropShadowEffect_OnDraw(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDraw` instead
    ///
    pub const QBaseDraw = SuperDraw;

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
    pub fn SuperDraw(self: QGraphicsDropShadowEffect, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QGraphicsDropShadowEffect_SuperDraw(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsdropshadoweffect.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsdropshadoweffect.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    pub fn BoundingRect(self: QGraphicsDropShadowEffect) QRectF {
        return .{ .ptr = qtc.QGraphicsEffect_BoundingRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    pub fn IsEnabled(self: QGraphicsDropShadowEffect) bool {
        return qtc.QGraphicsEffect_IsEnabled(@ptrCast(self.ptr));
    }

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
    pub fn SetEnabled(self: QGraphicsDropShadowEffect, enable: bool) void {
        qtc.QGraphicsEffect_SetEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    pub fn Update(self: QGraphicsDropShadowEffect) void {
        qtc.QGraphicsEffect_Update(@ptrCast(self.ptr));
    }

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
    pub fn EnabledChanged(self: QGraphicsDropShadowEffect, enabled: bool) void {
        qtc.QGraphicsEffect_EnabledChanged(@ptrCast(self.ptr), enabled);
    }

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
    pub fn OnEnabledChanged(self: QGraphicsDropShadowEffect, callback: *const fn (QGraphicsDropShadowEffect, bool) callconv(.c) void) void {
        qtc.QGraphicsEffect_Connect_EnabledChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ObjectName(self: QGraphicsDropShadowEffect, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsdropshadoweffect.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetObjectName(self: QGraphicsDropShadowEffect, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    pub fn IsWidgetType(self: QGraphicsDropShadowEffect) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    pub fn IsWindowType(self: QGraphicsDropShadowEffect) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    pub fn IsQuickItemType(self: QGraphicsDropShadowEffect) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    pub fn SignalsBlocked(self: QGraphicsDropShadowEffect) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

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
    pub fn BlockSignals(self: QGraphicsDropShadowEffect, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    pub fn Thread(self: QGraphicsDropShadowEffect) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QGraphicsDropShadowEffect, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

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
    pub fn StartTimer(self: QGraphicsDropShadowEffect, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

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
    pub fn StartTimer2(self: QGraphicsDropShadowEffect, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

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
    pub fn KillTimer(self: QGraphicsDropShadowEffect, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn KillTimer2(self: QGraphicsDropShadowEffect, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn Children(self: QGraphicsDropShadowEffect, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qgraphicsdropshadoweffect.Children: Memory allocation failed");
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QGraphicsDropShadowEffect, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

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
    pub fn InstallEventFilter(self: QGraphicsDropShadowEffect, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

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
    pub fn RemoveEventFilter(self: QGraphicsDropShadowEffect, obj: anytype) void {
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QGraphicsDropShadowEffect, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    pub fn Disconnect3(self: QGraphicsDropShadowEffect) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

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
    pub fn Disconnect4(self: QGraphicsDropShadowEffect, receiver: anytype) bool {
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    pub fn DumpObjectTree(self: QGraphicsDropShadowEffect) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    pub fn DumpObjectInfo(self: QGraphicsDropShadowEffect) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

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
    pub fn SetProperty(self: QGraphicsDropShadowEffect, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QGraphicsDropShadowEffect, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

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
    pub fn DynamicPropertyNames(self: QGraphicsDropShadowEffect, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qgraphicsdropshadoweffect.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qgraphicsdropshadoweffect.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    pub fn BindingStorage(self: QGraphicsDropShadowEffect) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    pub fn BindingStorage2(self: QGraphicsDropShadowEffect) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    pub fn Destroyed(self: QGraphicsDropShadowEffect) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

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
    pub fn OnDestroyed(self: QGraphicsDropShadowEffect, callback: *const fn (QGraphicsDropShadowEffect) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    pub fn Parent(self: QGraphicsDropShadowEffect) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

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
    pub fn Inherits(self: QGraphicsDropShadowEffect, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    pub fn DeleteLater(self: QGraphicsDropShadowEffect) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

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
    pub fn StartTimer22(self: QGraphicsDropShadowEffect, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

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
    pub fn StartTimer23(self: QGraphicsDropShadowEffect, time: i64, timerType: i32) i32 {
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QGraphicsDropShadowEffect, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QGraphicsDropShadowEffect, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn Disconnect22(self: QGraphicsDropShadowEffect, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QGraphicsDropShadowEffect, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QGraphicsDropShadowEffect, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QGraphicsDropShadowEffect `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QGraphicsDropShadowEffect, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnDestroyed1(self: QGraphicsDropShadowEffect, callback: *const fn (QGraphicsDropShadowEffect, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SourceChanged(self: QGraphicsDropShadowEffect, flags: i32) void {
        qtc.QGraphicsDropShadowEffect_SourceChanged(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `SuperSourceChanged` instead
    ///
    pub const QBaseSourceChanged = SuperSourceChanged;

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
    pub fn SuperSourceChanged(self: QGraphicsDropShadowEffect, flags: i32) void {
        qtc.QGraphicsDropShadowEffect_SuperSourceChanged(@ptrCast(self.ptr), @bitCast(flags));
    }

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
    pub fn OnSourceChanged(self: QGraphicsDropShadowEffect, callback: *const fn (QGraphicsDropShadowEffect, i32) callconv(.c) void) void {
        qtc.QGraphicsDropShadowEffect_OnSourceChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn Event(self: QGraphicsDropShadowEffect, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QGraphicsDropShadowEffect_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

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
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QGraphicsDropShadowEffect, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QGraphicsDropShadowEffect_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEvent(self: QGraphicsDropShadowEffect, callback: *const fn (QGraphicsDropShadowEffect, QEvent) callconv(.c) bool) void {
        qtc.QGraphicsDropShadowEffect_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QGraphicsDropShadowEffect, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QGraphicsDropShadowEffect_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

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
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QGraphicsDropShadowEffect, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QGraphicsDropShadowEffect_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEventFilter(self: QGraphicsDropShadowEffect, callback: *const fn (QGraphicsDropShadowEffect, QObject, QEvent) callconv(.c) bool) void {
        qtc.QGraphicsDropShadowEffect_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QGraphicsDropShadowEffect, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QGraphicsDropShadowEffect_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

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
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QGraphicsDropShadowEffect, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QGraphicsDropShadowEffect_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnTimerEvent(self: QGraphicsDropShadowEffect, callback: *const fn (QGraphicsDropShadowEffect, QTimerEvent) callconv(.c) void) void {
        qtc.QGraphicsDropShadowEffect_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QGraphicsDropShadowEffect, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QGraphicsDropShadowEffect_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperChildEvent` instead
    ///
    pub const QBaseChildEvent = SuperChildEvent;

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
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QGraphicsDropShadowEffect, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QGraphicsDropShadowEffect_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnChildEvent(self: QGraphicsDropShadowEffect, callback: *const fn (QGraphicsDropShadowEffect, QChildEvent) callconv(.c) void) void {
        qtc.QGraphicsDropShadowEffect_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QGraphicsDropShadowEffect, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QGraphicsDropShadowEffect_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperCustomEvent` instead
    ///
    pub const QBaseCustomEvent = SuperCustomEvent;

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
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QGraphicsDropShadowEffect, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QGraphicsDropShadowEffect_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnCustomEvent(self: QGraphicsDropShadowEffect, callback: *const fn (QGraphicsDropShadowEffect, QEvent) callconv(.c) void) void {
        qtc.QGraphicsDropShadowEffect_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ConnectNotify(self: QGraphicsDropShadowEffect, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsDropShadowEffect_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperConnectNotify` instead
    ///
    pub const QBaseConnectNotify = SuperConnectNotify;

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
    pub fn SuperConnectNotify(self: QGraphicsDropShadowEffect, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsDropShadowEffect_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnConnectNotify(self: QGraphicsDropShadowEffect, callback: *const fn (QGraphicsDropShadowEffect, QMetaMethod) callconv(.c) void) void {
        qtc.QGraphicsDropShadowEffect_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DisconnectNotify(self: QGraphicsDropShadowEffect, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsDropShadowEffect_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperDisconnectNotify` instead
    ///
    pub const QBaseDisconnectNotify = SuperDisconnectNotify;

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
    pub fn SuperDisconnectNotify(self: QGraphicsDropShadowEffect, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsDropShadowEffect_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnDisconnectNotify(self: QGraphicsDropShadowEffect, callback: *const fn (QGraphicsDropShadowEffect, QMetaMethod) callconv(.c) void) void {
        qtc.QGraphicsDropShadowEffect_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn UpdateBoundingRect(self: QGraphicsDropShadowEffect) void {
        qtc.QGraphicsDropShadowEffect_UpdateBoundingRect(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperUpdateBoundingRect` instead
    ///
    pub const QBaseUpdateBoundingRect = SuperUpdateBoundingRect;

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
    pub fn SuperUpdateBoundingRect(self: QGraphicsDropShadowEffect) void {
        qtc.QGraphicsDropShadowEffect_SuperUpdateBoundingRect(@ptrCast(self.ptr));
    }

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
    pub fn OnUpdateBoundingRect(self: QGraphicsDropShadowEffect, callback: *const fn () callconv(.c) void) void {
        qtc.QGraphicsDropShadowEffect_OnUpdateBoundingRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SourceIsPixmap(self: QGraphicsDropShadowEffect) bool {
        return qtc.QGraphicsDropShadowEffect_SourceIsPixmap(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSourceIsPixmap` instead
    ///
    pub const QBaseSourceIsPixmap = SuperSourceIsPixmap;

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
    pub fn SuperSourceIsPixmap(self: QGraphicsDropShadowEffect) bool {
        return qtc.QGraphicsDropShadowEffect_SuperSourceIsPixmap(@ptrCast(self.ptr));
    }

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
    pub fn OnSourceIsPixmap(self: QGraphicsDropShadowEffect, callback: *const fn () callconv(.c) bool) void {
        qtc.QGraphicsDropShadowEffect_OnSourceIsPixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SourceBoundingRect(self: QGraphicsDropShadowEffect) QRectF {
        return .{ .ptr = qtc.QGraphicsDropShadowEffect_SourceBoundingRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSourceBoundingRect` instead
    ///
    pub const QBaseSourceBoundingRect = SuperSourceBoundingRect;

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
    pub fn SuperSourceBoundingRect(self: QGraphicsDropShadowEffect) QRectF {
        return .{ .ptr = qtc.QGraphicsDropShadowEffect_SuperSourceBoundingRect(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSourceBoundingRect(self: QGraphicsDropShadowEffect, callback: *const fn () callconv(.c) QRectF) void {
        qtc.QGraphicsDropShadowEffect_OnSourceBoundingRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DrawSource(self: QGraphicsDropShadowEffect, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QGraphicsDropShadowEffect_DrawSource(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// ### DEPRECATED: Use `SuperDrawSource` instead
    ///
    pub const QBaseDrawSource = SuperDrawSource;

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
    pub fn SuperDrawSource(self: QGraphicsDropShadowEffect, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QGraphicsDropShadowEffect_SuperDrawSource(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

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
    pub fn OnDrawSource(self: QGraphicsDropShadowEffect, callback: *const fn (QGraphicsDropShadowEffect, QPainter) callconv(.c) void) void {
        qtc.QGraphicsDropShadowEffect_OnDrawSource(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SourcePixmap(self: QGraphicsDropShadowEffect) QPixmap {
        return .{ .ptr = qtc.QGraphicsDropShadowEffect_SourcePixmap(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSourcePixmap` instead
    ///
    pub const QBaseSourcePixmap = SuperSourcePixmap;

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
    pub fn SuperSourcePixmap(self: QGraphicsDropShadowEffect) QPixmap {
        return .{ .ptr = qtc.QGraphicsDropShadowEffect_SuperSourcePixmap(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSourcePixmap(self: QGraphicsDropShadowEffect, callback: *const fn () callconv(.c) QPixmap) void {
        qtc.QGraphicsDropShadowEffect_OnSourcePixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Sender(self: QGraphicsDropShadowEffect) QObject {
        return .{ .ptr = qtc.QGraphicsDropShadowEffect_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSender` instead
    ///
    pub const QBaseSender = SuperSender;

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
    pub fn SuperSender(self: QGraphicsDropShadowEffect) QObject {
        return .{ .ptr = qtc.QGraphicsDropShadowEffect_SuperSender(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSender(self: QGraphicsDropShadowEffect, callback: *const fn () callconv(.c) QObject) void {
        qtc.QGraphicsDropShadowEffect_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SenderSignalIndex(self: QGraphicsDropShadowEffect) i32 {
        return qtc.QGraphicsDropShadowEffect_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSenderSignalIndex` instead
    ///
    pub const QBaseSenderSignalIndex = SuperSenderSignalIndex;

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
    pub fn SuperSenderSignalIndex(self: QGraphicsDropShadowEffect) i32 {
        return qtc.QGraphicsDropShadowEffect_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

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
    pub fn OnSenderSignalIndex(self: QGraphicsDropShadowEffect, callback: *const fn () callconv(.c) i32) void {
        qtc.QGraphicsDropShadowEffect_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Receivers(self: QGraphicsDropShadowEffect, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGraphicsDropShadowEffect_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `SuperReceivers` instead
    ///
    pub const QBaseReceivers = SuperReceivers;

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
    pub fn SuperReceivers(self: QGraphicsDropShadowEffect, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGraphicsDropShadowEffect_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn OnReceivers(self: QGraphicsDropShadowEffect, callback: *const fn (QGraphicsDropShadowEffect, [*:0]const u8) callconv(.c) i32) void {
        qtc.QGraphicsDropShadowEffect_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IsSignalConnected(self: QGraphicsDropShadowEffect, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QGraphicsDropShadowEffect_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsSignalConnected` instead
    ///
    pub const QBaseIsSignalConnected = SuperIsSignalConnected;

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
    pub fn SuperIsSignalConnected(self: QGraphicsDropShadowEffect, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QGraphicsDropShadowEffect_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnIsSignalConnected(self: QGraphicsDropShadowEffect, callback: *const fn (QGraphicsDropShadowEffect, QMetaMethod) callconv(.c) bool) void {
        qtc.QGraphicsDropShadowEffect_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn OnObjectNameChanged(self: QGraphicsDropShadowEffect, callback: *const fn (QGraphicsDropShadowEffect, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#dtor.QGraphicsDropShadowEffect)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QGraphicsDropShadowEffect `
    ///
    pub fn Delete(self: QGraphicsDropShadowEffect) void {
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

    /// New constructs a new QGraphicsOpacityEffect object.
    ///
    pub fn New() QGraphicsOpacityEffect {
        return .{ .ptr = qtc.QGraphicsOpacityEffect_new() };
    }

    /// New2 constructs a new QGraphicsOpacityEffect object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) QGraphicsOpacityEffect {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QGraphicsOpacityEffect_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    pub fn MetaObject(self: QGraphicsOpacityEffect) QMetaObject {
        return .{ .ptr = qtc.QGraphicsOpacityEffect_MetaObject(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMetaObject(self: QGraphicsOpacityEffect, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QGraphicsOpacityEffect_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    pub fn SuperMetaObject(self: QGraphicsOpacityEffect) QMetaObject {
        return .{ .ptr = qtc.QGraphicsOpacityEffect_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QGraphicsOpacityEffect, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGraphicsOpacityEffect_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsOpacityEffect, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QGraphicsOpacityEffect, callback: *const fn (QGraphicsOpacityEffect, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QGraphicsOpacityEffect_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QGraphicsOpacityEffect, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGraphicsOpacityEffect_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

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
    pub fn Metacall(self: QGraphicsOpacityEffect, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGraphicsOpacityEffect_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsOpacityEffect, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QGraphicsOpacityEffect, callback: *const fn (QGraphicsOpacityEffect, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QGraphicsOpacityEffect_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

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
    pub fn SuperMetacall(self: QGraphicsOpacityEffect, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGraphicsOpacityEffect_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsopacityeffect.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#opacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    pub fn Opacity(self: QGraphicsOpacityEffect) f64 {
        return qtc.QGraphicsOpacityEffect_Opacity(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#opacityMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    pub fn OpacityMask(self: QGraphicsOpacityEffect) QBrush {
        return .{ .ptr = qtc.QGraphicsOpacityEffect_OpacityMask(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#setOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` opacity: f64 `
    ///
    pub fn SetOpacity(self: QGraphicsOpacityEffect, opacity: f64) void {
        qtc.QGraphicsOpacityEffect_SetOpacity(@ptrCast(self.ptr), @bitCast(opacity));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#setOpacityMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` mask: QBrush `
    ///
    pub fn SetOpacityMask(self: QGraphicsOpacityEffect, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QBrush;
        qtc.QGraphicsOpacityEffect_SetOpacityMask(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#opacityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` opacity: f64 `
    ///
    pub fn OpacityChanged(self: QGraphicsOpacityEffect, opacity: f64) void {
        qtc.QGraphicsOpacityEffect_OpacityChanged(@ptrCast(self.ptr), @bitCast(opacity));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#opacityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsOpacityEffect, opacity: f64) callconv(.c) void `
    ///
    pub fn OnOpacityChanged(self: QGraphicsOpacityEffect, callback: *const fn (QGraphicsOpacityEffect, f64) callconv(.c) void) void {
        qtc.QGraphicsOpacityEffect_Connect_OpacityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#opacityMaskChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` mask: QBrush `
    ///
    pub fn OpacityMaskChanged(self: QGraphicsOpacityEffect, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QBrush;
        qtc.QGraphicsOpacityEffect_OpacityMaskChanged(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#opacityMaskChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` callback: *const fn (self: QGraphicsOpacityEffect, mask: QBrush) callconv(.c) void `
    ///
    pub fn OnOpacityMaskChanged(self: QGraphicsOpacityEffect, callback: *const fn (QGraphicsOpacityEffect, QBrush) callconv(.c) void) void {
        qtc.QGraphicsOpacityEffect_Connect_OpacityMaskChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#draw)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` painter: QPainter `
    ///
    pub fn Draw(self: QGraphicsOpacityEffect, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QGraphicsOpacityEffect_Draw(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

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
    pub fn OnDraw(self: QGraphicsOpacityEffect, callback: *const fn (QGraphicsOpacityEffect, QPainter) callconv(.c) void) void {
        qtc.QGraphicsOpacityEffect_OnDraw(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDraw` instead
    ///
    pub const QBaseDraw = SuperDraw;

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
    pub fn SuperDraw(self: QGraphicsOpacityEffect, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QGraphicsOpacityEffect_SuperDraw(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsopacityeffect.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsopacityeffect.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    pub fn BoundingRect(self: QGraphicsOpacityEffect) QRectF {
        return .{ .ptr = qtc.QGraphicsEffect_BoundingRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    pub fn IsEnabled(self: QGraphicsOpacityEffect) bool {
        return qtc.QGraphicsEffect_IsEnabled(@ptrCast(self.ptr));
    }

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
    pub fn SetEnabled(self: QGraphicsOpacityEffect, enable: bool) void {
        qtc.QGraphicsEffect_SetEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QGraphicsEffect
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicseffect.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    pub fn Update(self: QGraphicsOpacityEffect) void {
        qtc.QGraphicsEffect_Update(@ptrCast(self.ptr));
    }

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
    pub fn EnabledChanged(self: QGraphicsOpacityEffect, enabled: bool) void {
        qtc.QGraphicsEffect_EnabledChanged(@ptrCast(self.ptr), enabled);
    }

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
    pub fn OnEnabledChanged(self: QGraphicsOpacityEffect, callback: *const fn (QGraphicsOpacityEffect, bool) callconv(.c) void) void {
        qtc.QGraphicsEffect_Connect_EnabledChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ObjectName(self: QGraphicsOpacityEffect, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsopacityeffect.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetObjectName(self: QGraphicsOpacityEffect, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    pub fn IsWidgetType(self: QGraphicsOpacityEffect) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    pub fn IsWindowType(self: QGraphicsOpacityEffect) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    pub fn IsQuickItemType(self: QGraphicsOpacityEffect) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    pub fn SignalsBlocked(self: QGraphicsOpacityEffect) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

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
    pub fn BlockSignals(self: QGraphicsOpacityEffect, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    pub fn Thread(self: QGraphicsOpacityEffect) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QGraphicsOpacityEffect, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

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
    pub fn StartTimer(self: QGraphicsOpacityEffect, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

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
    pub fn StartTimer2(self: QGraphicsOpacityEffect, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

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
    pub fn KillTimer(self: QGraphicsOpacityEffect, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn KillTimer2(self: QGraphicsOpacityEffect, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn Children(self: QGraphicsOpacityEffect, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qgraphicsopacityeffect.Children: Memory allocation failed");
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QGraphicsOpacityEffect, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

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
    pub fn InstallEventFilter(self: QGraphicsOpacityEffect, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

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
    pub fn RemoveEventFilter(self: QGraphicsOpacityEffect, obj: anytype) void {
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QGraphicsOpacityEffect, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    pub fn Disconnect3(self: QGraphicsOpacityEffect) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

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
    pub fn Disconnect4(self: QGraphicsOpacityEffect, receiver: anytype) bool {
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    pub fn DumpObjectTree(self: QGraphicsOpacityEffect) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    pub fn DumpObjectInfo(self: QGraphicsOpacityEffect) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

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
    pub fn SetProperty(self: QGraphicsOpacityEffect, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QGraphicsOpacityEffect, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

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
    pub fn DynamicPropertyNames(self: QGraphicsOpacityEffect, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qgraphicsopacityeffect.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qgraphicsopacityeffect.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    pub fn BindingStorage(self: QGraphicsOpacityEffect) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    pub fn BindingStorage2(self: QGraphicsOpacityEffect) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    pub fn Destroyed(self: QGraphicsOpacityEffect) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

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
    pub fn OnDestroyed(self: QGraphicsOpacityEffect, callback: *const fn (QGraphicsOpacityEffect) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    pub fn Parent(self: QGraphicsOpacityEffect) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

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
    pub fn Inherits(self: QGraphicsOpacityEffect, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    pub fn DeleteLater(self: QGraphicsOpacityEffect) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

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
    pub fn StartTimer22(self: QGraphicsOpacityEffect, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

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
    pub fn StartTimer23(self: QGraphicsOpacityEffect, time: i64, timerType: i32) i32 {
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QGraphicsOpacityEffect, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QGraphicsOpacityEffect, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn Disconnect22(self: QGraphicsOpacityEffect, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QGraphicsOpacityEffect, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QGraphicsOpacityEffect, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QGraphicsOpacityEffect `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QGraphicsOpacityEffect, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnDestroyed1(self: QGraphicsOpacityEffect, callback: *const fn (QGraphicsOpacityEffect, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn BoundingRectFor(self: QGraphicsOpacityEffect, sourceRect: anytype) QRectF {
        comptime _ = @TypeOf(sourceRect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsOpacityEffect_BoundingRectFor(@ptrCast(self.ptr), @ptrCast(sourceRect.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperBoundingRectFor` instead
    ///
    pub const QBaseBoundingRectFor = SuperBoundingRectFor;

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
    pub fn SuperBoundingRectFor(self: QGraphicsOpacityEffect, sourceRect: anytype) QRectF {
        comptime _ = @TypeOf(sourceRect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsOpacityEffect_SuperBoundingRectFor(@ptrCast(self.ptr), @ptrCast(sourceRect.ptr)) };
    }

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
    pub fn OnBoundingRectFor(self: QGraphicsOpacityEffect, callback: *const fn (QGraphicsOpacityEffect, QRectF) callconv(.c) QRectF) void {
        qtc.QGraphicsOpacityEffect_OnBoundingRectFor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SourceChanged(self: QGraphicsOpacityEffect, flags: i32) void {
        qtc.QGraphicsOpacityEffect_SourceChanged(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `SuperSourceChanged` instead
    ///
    pub const QBaseSourceChanged = SuperSourceChanged;

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
    pub fn SuperSourceChanged(self: QGraphicsOpacityEffect, flags: i32) void {
        qtc.QGraphicsOpacityEffect_SuperSourceChanged(@ptrCast(self.ptr), @bitCast(flags));
    }

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
    pub fn OnSourceChanged(self: QGraphicsOpacityEffect, callback: *const fn (QGraphicsOpacityEffect, i32) callconv(.c) void) void {
        qtc.QGraphicsOpacityEffect_OnSourceChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn Event(self: QGraphicsOpacityEffect, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QGraphicsOpacityEffect_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

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
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QGraphicsOpacityEffect, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QGraphicsOpacityEffect_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEvent(self: QGraphicsOpacityEffect, callback: *const fn (QGraphicsOpacityEffect, QEvent) callconv(.c) bool) void {
        qtc.QGraphicsOpacityEffect_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QGraphicsOpacityEffect, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QGraphicsOpacityEffect_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

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
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QGraphicsOpacityEffect, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QGraphicsOpacityEffect_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEventFilter(self: QGraphicsOpacityEffect, callback: *const fn (QGraphicsOpacityEffect, QObject, QEvent) callconv(.c) bool) void {
        qtc.QGraphicsOpacityEffect_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QGraphicsOpacityEffect, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QGraphicsOpacityEffect_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

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
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QGraphicsOpacityEffect, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QGraphicsOpacityEffect_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnTimerEvent(self: QGraphicsOpacityEffect, callback: *const fn (QGraphicsOpacityEffect, QTimerEvent) callconv(.c) void) void {
        qtc.QGraphicsOpacityEffect_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QGraphicsOpacityEffect, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QGraphicsOpacityEffect_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperChildEvent` instead
    ///
    pub const QBaseChildEvent = SuperChildEvent;

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
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QGraphicsOpacityEffect, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QGraphicsOpacityEffect_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnChildEvent(self: QGraphicsOpacityEffect, callback: *const fn (QGraphicsOpacityEffect, QChildEvent) callconv(.c) void) void {
        qtc.QGraphicsOpacityEffect_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QGraphicsOpacityEffect, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QGraphicsOpacityEffect_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperCustomEvent` instead
    ///
    pub const QBaseCustomEvent = SuperCustomEvent;

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
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QGraphicsOpacityEffect, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QGraphicsOpacityEffect_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnCustomEvent(self: QGraphicsOpacityEffect, callback: *const fn (QGraphicsOpacityEffect, QEvent) callconv(.c) void) void {
        qtc.QGraphicsOpacityEffect_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ConnectNotify(self: QGraphicsOpacityEffect, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsOpacityEffect_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperConnectNotify` instead
    ///
    pub const QBaseConnectNotify = SuperConnectNotify;

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
    pub fn SuperConnectNotify(self: QGraphicsOpacityEffect, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsOpacityEffect_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnConnectNotify(self: QGraphicsOpacityEffect, callback: *const fn (QGraphicsOpacityEffect, QMetaMethod) callconv(.c) void) void {
        qtc.QGraphicsOpacityEffect_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DisconnectNotify(self: QGraphicsOpacityEffect, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsOpacityEffect_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperDisconnectNotify` instead
    ///
    pub const QBaseDisconnectNotify = SuperDisconnectNotify;

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
    pub fn SuperDisconnectNotify(self: QGraphicsOpacityEffect, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QGraphicsOpacityEffect_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnDisconnectNotify(self: QGraphicsOpacityEffect, callback: *const fn (QGraphicsOpacityEffect, QMetaMethod) callconv(.c) void) void {
        qtc.QGraphicsOpacityEffect_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn UpdateBoundingRect(self: QGraphicsOpacityEffect) void {
        qtc.QGraphicsOpacityEffect_UpdateBoundingRect(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperUpdateBoundingRect` instead
    ///
    pub const QBaseUpdateBoundingRect = SuperUpdateBoundingRect;

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
    pub fn SuperUpdateBoundingRect(self: QGraphicsOpacityEffect) void {
        qtc.QGraphicsOpacityEffect_SuperUpdateBoundingRect(@ptrCast(self.ptr));
    }

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
    pub fn OnUpdateBoundingRect(self: QGraphicsOpacityEffect, callback: *const fn () callconv(.c) void) void {
        qtc.QGraphicsOpacityEffect_OnUpdateBoundingRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SourceIsPixmap(self: QGraphicsOpacityEffect) bool {
        return qtc.QGraphicsOpacityEffect_SourceIsPixmap(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSourceIsPixmap` instead
    ///
    pub const QBaseSourceIsPixmap = SuperSourceIsPixmap;

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
    pub fn SuperSourceIsPixmap(self: QGraphicsOpacityEffect) bool {
        return qtc.QGraphicsOpacityEffect_SuperSourceIsPixmap(@ptrCast(self.ptr));
    }

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
    pub fn OnSourceIsPixmap(self: QGraphicsOpacityEffect, callback: *const fn () callconv(.c) bool) void {
        qtc.QGraphicsOpacityEffect_OnSourceIsPixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SourceBoundingRect(self: QGraphicsOpacityEffect) QRectF {
        return .{ .ptr = qtc.QGraphicsOpacityEffect_SourceBoundingRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSourceBoundingRect` instead
    ///
    pub const QBaseSourceBoundingRect = SuperSourceBoundingRect;

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
    pub fn SuperSourceBoundingRect(self: QGraphicsOpacityEffect) QRectF {
        return .{ .ptr = qtc.QGraphicsOpacityEffect_SuperSourceBoundingRect(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSourceBoundingRect(self: QGraphicsOpacityEffect, callback: *const fn () callconv(.c) QRectF) void {
        qtc.QGraphicsOpacityEffect_OnSourceBoundingRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DrawSource(self: QGraphicsOpacityEffect, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QGraphicsOpacityEffect_DrawSource(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// ### DEPRECATED: Use `SuperDrawSource` instead
    ///
    pub const QBaseDrawSource = SuperDrawSource;

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
    pub fn SuperDrawSource(self: QGraphicsOpacityEffect, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QGraphicsOpacityEffect_SuperDrawSource(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

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
    pub fn OnDrawSource(self: QGraphicsOpacityEffect, callback: *const fn (QGraphicsOpacityEffect, QPainter) callconv(.c) void) void {
        qtc.QGraphicsOpacityEffect_OnDrawSource(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SourcePixmap(self: QGraphicsOpacityEffect) QPixmap {
        return .{ .ptr = qtc.QGraphicsOpacityEffect_SourcePixmap(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSourcePixmap` instead
    ///
    pub const QBaseSourcePixmap = SuperSourcePixmap;

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
    pub fn SuperSourcePixmap(self: QGraphicsOpacityEffect) QPixmap {
        return .{ .ptr = qtc.QGraphicsOpacityEffect_SuperSourcePixmap(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSourcePixmap(self: QGraphicsOpacityEffect, callback: *const fn () callconv(.c) QPixmap) void {
        qtc.QGraphicsOpacityEffect_OnSourcePixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Sender(self: QGraphicsOpacityEffect) QObject {
        return .{ .ptr = qtc.QGraphicsOpacityEffect_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSender` instead
    ///
    pub const QBaseSender = SuperSender;

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
    pub fn SuperSender(self: QGraphicsOpacityEffect) QObject {
        return .{ .ptr = qtc.QGraphicsOpacityEffect_SuperSender(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSender(self: QGraphicsOpacityEffect, callback: *const fn () callconv(.c) QObject) void {
        qtc.QGraphicsOpacityEffect_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SenderSignalIndex(self: QGraphicsOpacityEffect) i32 {
        return qtc.QGraphicsOpacityEffect_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSenderSignalIndex` instead
    ///
    pub const QBaseSenderSignalIndex = SuperSenderSignalIndex;

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
    pub fn SuperSenderSignalIndex(self: QGraphicsOpacityEffect) i32 {
        return qtc.QGraphicsOpacityEffect_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

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
    pub fn OnSenderSignalIndex(self: QGraphicsOpacityEffect, callback: *const fn () callconv(.c) i32) void {
        qtc.QGraphicsOpacityEffect_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Receivers(self: QGraphicsOpacityEffect, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGraphicsOpacityEffect_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `SuperReceivers` instead
    ///
    pub const QBaseReceivers = SuperReceivers;

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
    pub fn SuperReceivers(self: QGraphicsOpacityEffect, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGraphicsOpacityEffect_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn OnReceivers(self: QGraphicsOpacityEffect, callback: *const fn (QGraphicsOpacityEffect, [*:0]const u8) callconv(.c) i32) void {
        qtc.QGraphicsOpacityEffect_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IsSignalConnected(self: QGraphicsOpacityEffect, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QGraphicsOpacityEffect_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsSignalConnected` instead
    ///
    pub const QBaseIsSignalConnected = SuperIsSignalConnected;

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
    pub fn SuperIsSignalConnected(self: QGraphicsOpacityEffect, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QGraphicsOpacityEffect_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnIsSignalConnected(self: QGraphicsOpacityEffect, callback: *const fn (QGraphicsOpacityEffect, QMetaMethod) callconv(.c) bool) void {
        qtc.QGraphicsOpacityEffect_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn OnObjectNameChanged(self: QGraphicsOpacityEffect, callback: *const fn (QGraphicsOpacityEffect, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#dtor.QGraphicsOpacityEffect)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QGraphicsOpacityEffect `
    ///
    pub fn Delete(self: QGraphicsOpacityEffect) void {
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
