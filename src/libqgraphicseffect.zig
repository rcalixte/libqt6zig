const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qgraphicseffect_enums = enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qgraphicseffect.html
pub const qgraphicseffect = struct {
    /// New constructs a new QGraphicsEffect object.
    ///
    ///
    pub fn New() QtC.QGraphicsEffect {
        return qtc.QGraphicsEffect_new();
    }

    /// New2 constructs a new QGraphicsEffect object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New2(parent: ?*anyopaque) QtC.QGraphicsEffect {
        return qtc.QGraphicsEffect_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QGraphicsEffect ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QGraphicsEffect_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QGraphicsEffect, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGraphicsEffect_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QGraphicsEffect, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QGraphicsEffect_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsEffect, slot: fn (self: QtC.QGraphicsEffect, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QGraphicsEffect_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsEffect, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QGraphicsEffect_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QGraphicsEffect_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicseffect.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRectFor)
    ///
    /// ``` self: QtC.QGraphicsEffect, sourceRect: QtC.QRectF ```
    pub fn BoundingRectFor(self: ?*anyopaque, sourceRect: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsEffect_BoundingRectFor(@ptrCast(self), @ptrCast(sourceRect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRectFor)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsEffect, slot: fn (self: QtC.QGraphicsEffect, sourceRect: QtC.QRectF) callconv(.c) QtC.QRectF ```
    pub fn OnBoundingRectFor(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRectF) void {
        qtc.QGraphicsEffect_OnBoundingRectFor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRectFor)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsEffect, sourceRect: QtC.QRectF ```
    pub fn QBaseBoundingRectFor(self: ?*anyopaque, sourceRect: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsEffect_QBaseBoundingRectFor(@ptrCast(self), @ptrCast(sourceRect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRect)
    ///
    /// ``` self: QtC.QGraphicsEffect ```
    pub fn BoundingRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsEffect_BoundingRect(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#isEnabled)
    ///
    /// ``` self: QtC.QGraphicsEffect ```
    pub fn IsEnabled(self: ?*anyopaque) bool {
        return qtc.QGraphicsEffect_IsEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#setEnabled)
    ///
    /// ``` self: QtC.QGraphicsEffect, enable: bool ```
    pub fn SetEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QGraphicsEffect_SetEnabled(@ptrCast(self), enable);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#update)
    ///
    /// ``` self: QtC.QGraphicsEffect ```
    pub fn Update(self: ?*anyopaque) void {
        qtc.QGraphicsEffect_Update(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#enabledChanged)
    ///
    /// ``` self: QtC.QGraphicsEffect, enabled: bool ```
    pub fn EnabledChanged(self: ?*anyopaque, enabled: bool) void {
        qtc.QGraphicsEffect_EnabledChanged(@ptrCast(self), enabled);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#enabledChanged)
    ///
    /// ``` self: QtC.QGraphicsEffect, slot: fn (self: QtC.QGraphicsEffect, enabled: bool) callconv(.c) void ```
    pub fn OnEnabledChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QGraphicsEffect_Connect_EnabledChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#draw)
    ///
    /// ``` self: QtC.QGraphicsEffect, painter: QtC.QPainter ```
    pub fn Draw(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QGraphicsEffect_Draw(@ptrCast(self), @ptrCast(painter));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#draw)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsEffect, slot: fn (self: QtC.QGraphicsEffect, painter: QtC.QPainter) callconv(.c) void ```
    pub fn OnDraw(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsEffect_OnDraw(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#draw)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsEffect, painter: QtC.QPainter ```
    pub fn QBaseDraw(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QGraphicsEffect_QBaseDraw(@ptrCast(self), @ptrCast(painter));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
    ///
    /// ``` self: QtC.QGraphicsEffect, flags: i32 ```
    pub fn SourceChanged(self: ?*anyopaque, flags: i64) void {
        qtc.QGraphicsEffect_SourceChanged(@ptrCast(self), @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsEffect, slot: fn (self: QtC.QGraphicsEffect, flags: i32) callconv(.c) void ```
    pub fn OnSourceChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QGraphicsEffect_OnSourceChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsEffect, flags: i32 ```
    pub fn QBaseSourceChanged(self: ?*anyopaque, flags: i64) void {
        qtc.QGraphicsEffect_QBaseSourceChanged(@ptrCast(self), @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
    ///
    /// ``` self: QtC.QGraphicsEffect ```
    pub fn UpdateBoundingRect(self: ?*anyopaque) void {
        qtc.QGraphicsEffect_UpdateBoundingRect(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsEffect, slot: fn () callconv(.c) void ```
    pub fn OnUpdateBoundingRect(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QGraphicsEffect_OnUpdateBoundingRect(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsEffect ```
    pub fn QBaseUpdateBoundingRect(self: ?*anyopaque) void {
        qtc.QGraphicsEffect_QBaseUpdateBoundingRect(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
    ///
    /// ``` self: QtC.QGraphicsEffect ```
    pub fn SourceIsPixmap(self: ?*anyopaque) bool {
        return qtc.QGraphicsEffect_SourceIsPixmap(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsEffect, slot: fn () callconv(.c) bool ```
    pub fn OnSourceIsPixmap(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QGraphicsEffect_OnSourceIsPixmap(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsEffect ```
    pub fn QBaseSourceIsPixmap(self: ?*anyopaque) bool {
        return qtc.QGraphicsEffect_QBaseSourceIsPixmap(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
    ///
    /// ``` self: QtC.QGraphicsEffect ```
    pub fn SourceBoundingRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsEffect_SourceBoundingRect(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsEffect, slot: fn () callconv(.c) QtC.QRectF ```
    pub fn OnSourceBoundingRect(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QRectF) void {
        qtc.QGraphicsEffect_OnSourceBoundingRect(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsEffect ```
    pub fn QBaseSourceBoundingRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsEffect_QBaseSourceBoundingRect(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
    ///
    /// ``` self: QtC.QGraphicsEffect, painter: QtC.QPainter ```
    pub fn DrawSource(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QGraphicsEffect_DrawSource(@ptrCast(self), @ptrCast(painter));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsEffect, slot: fn (self: QtC.QGraphicsEffect, painter: QtC.QPainter) callconv(.c) void ```
    pub fn OnDrawSource(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsEffect_OnDrawSource(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsEffect, painter: QtC.QPainter ```
    pub fn QBaseDrawSource(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QGraphicsEffect_QBaseDrawSource(@ptrCast(self), @ptrCast(painter));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
    ///
    /// ``` self: QtC.QGraphicsEffect ```
    pub fn SourcePixmap(self: ?*anyopaque) QtC.QPixmap {
        return qtc.QGraphicsEffect_SourcePixmap(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsEffect, slot: fn () callconv(.c) QtC.QPixmap ```
    pub fn OnSourcePixmap(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QPixmap) void {
        qtc.QGraphicsEffect_OnSourcePixmap(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsEffect ```
    pub fn QBaseSourcePixmap(self: ?*anyopaque) QtC.QPixmap {
        return qtc.QGraphicsEffect_QBaseSourcePixmap(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QGraphicsEffect_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicseffect.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QGraphicsEffect_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicseffect.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
    ///
    /// ``` self: QtC.QGraphicsEffect, system: qnamespace_enums.CoordinateSystem ```
    pub fn SourceBoundingRect1(self: ?*anyopaque, system: i64) QtC.QRectF {
        return qtc.QGraphicsEffect_SourceBoundingRect1(@ptrCast(self), @intCast(system));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsEffect, slot: fn (self: QtC.QGraphicsEffect, system: qnamespace_enums.CoordinateSystem) callconv(.c) QtC.QRectF ```
    pub fn OnSourceBoundingRect1(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) QtC.QRectF) void {
        qtc.QGraphicsEffect_OnSourceBoundingRect1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsEffect, system: qnamespace_enums.CoordinateSystem ```
    pub fn QBaseSourceBoundingRect1(self: ?*anyopaque, system: i64) QtC.QRectF {
        return qtc.QGraphicsEffect_QBaseSourceBoundingRect1(@ptrCast(self), @intCast(system));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
    ///
    /// ``` self: QtC.QGraphicsEffect, system: qnamespace_enums.CoordinateSystem ```
    pub fn SourcePixmap1(self: ?*anyopaque, system: i64) QtC.QPixmap {
        return qtc.QGraphicsEffect_SourcePixmap1(@ptrCast(self), @intCast(system));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsEffect, slot: fn (self: QtC.QGraphicsEffect, system: qnamespace_enums.CoordinateSystem) callconv(.c) QtC.QPixmap ```
    pub fn OnSourcePixmap1(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) QtC.QPixmap) void {
        qtc.QGraphicsEffect_OnSourcePixmap1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsEffect, system: qnamespace_enums.CoordinateSystem ```
    pub fn QBaseSourcePixmap1(self: ?*anyopaque, system: i64) QtC.QPixmap {
        return qtc.QGraphicsEffect_QBaseSourcePixmap1(@ptrCast(self), @intCast(system));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
    ///
    /// ``` self: QtC.QGraphicsEffect, system: qnamespace_enums.CoordinateSystem, offset: QtC.QPoint ```
    pub fn SourcePixmap2(self: ?*anyopaque, system: i64, offset: ?*anyopaque) QtC.QPixmap {
        return qtc.QGraphicsEffect_SourcePixmap2(@ptrCast(self), @intCast(system), @ptrCast(offset));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsEffect, slot: fn (self: QtC.QGraphicsEffect, system: qnamespace_enums.CoordinateSystem, offset: QtC.QPoint) callconv(.c) QtC.QPixmap ```
    pub fn OnSourcePixmap2(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque) callconv(.c) QtC.QPixmap) void {
        qtc.QGraphicsEffect_OnSourcePixmap2(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsEffect, system: qnamespace_enums.CoordinateSystem, offset: QtC.QPoint ```
    pub fn QBaseSourcePixmap2(self: ?*anyopaque, system: i64, offset: ?*anyopaque) QtC.QPixmap {
        return qtc.QGraphicsEffect_QBaseSourcePixmap2(@ptrCast(self), @intCast(system), @ptrCast(offset));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
    ///
    /// ``` self: QtC.QGraphicsEffect, system: qnamespace_enums.CoordinateSystem, offset: QtC.QPoint, mode: qgraphicseffect_enums.PixmapPadMode ```
    pub fn SourcePixmap3(self: ?*anyopaque, system: i64, offset: ?*anyopaque, mode: i64) QtC.QPixmap {
        return qtc.QGraphicsEffect_SourcePixmap3(@ptrCast(self), @intCast(system), @ptrCast(offset), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsEffect, slot: fn (self: QtC.QGraphicsEffect, system: qnamespace_enums.CoordinateSystem, offset: QtC.QPoint, mode: qgraphicseffect_enums.PixmapPadMode) callconv(.c) QtC.QPixmap ```
    pub fn OnSourcePixmap3(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque, i64) callconv(.c) QtC.QPixmap) void {
        qtc.QGraphicsEffect_OnSourcePixmap3(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsEffect, system: qnamespace_enums.CoordinateSystem, offset: QtC.QPoint, mode: qgraphicseffect_enums.PixmapPadMode ```
    pub fn QBaseSourcePixmap3(self: ?*anyopaque, system: i64, offset: ?*anyopaque, mode: i64) QtC.QPixmap {
        return qtc.QGraphicsEffect_QBaseSourcePixmap3(@ptrCast(self), @intCast(system), @ptrCast(offset), @intCast(mode));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QGraphicsEffect, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicseffect.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QGraphicsEffect, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.QGraphicsEffect ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QGraphicsEffect ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QGraphicsEffect ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QGraphicsEffect ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QGraphicsEffect, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QGraphicsEffect ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QGraphicsEffect, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QGraphicsEffect, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QGraphicsEffect, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QGraphicsEffect, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i64) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QGraphicsEffect, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.struct_libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qgraphicseffect.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QGraphicsEffect, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QGraphicsEffect, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QGraphicsEffect, obj: QtC.QObject ```
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
    /// ``` self: QtC.QGraphicsEffect, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.QGraphicsEffect ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QGraphicsEffect ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QGraphicsEffect, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QGraphicsEffect, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QGraphicsEffect, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.struct_libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QGraphicsEffect ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QGraphicsEffect ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QGraphicsEffect ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QGraphicsEffect ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QGraphicsEffect, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QGraphicsEffect ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QGraphicsEffect, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QGraphicsEffect, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QGraphicsEffect, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QGraphicsEffect, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsEffect, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsEffect_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsEffect, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsEffect_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsEffect, slot: fn (self: QtC.QGraphicsEffect, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsEffect_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsEffect, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsEffect_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsEffect, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsEffect_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsEffect, slot: fn (self: QtC.QGraphicsEffect, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsEffect_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsEffect, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsEffect_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsEffect, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsEffect_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsEffect, slot: fn (self: QtC.QGraphicsEffect, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsEffect_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsEffect, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsEffect_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsEffect, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsEffect_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsEffect, slot: fn (self: QtC.QGraphicsEffect, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsEffect_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsEffect, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsEffect_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsEffect, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsEffect_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsEffect, slot: fn (self: QtC.QGraphicsEffect, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsEffect_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsEffect, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QGraphicsEffect_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsEffect, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QGraphicsEffect_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsEffect, slot: fn (self: QtC.QGraphicsEffect, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsEffect_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsEffect, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QGraphicsEffect_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsEffect, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QGraphicsEffect_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsEffect, slot: fn (self: QtC.QGraphicsEffect, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsEffect_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsEffect ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QGraphicsEffect_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsEffect ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QGraphicsEffect_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsEffect, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.QGraphicsEffect_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsEffect ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QGraphicsEffect_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsEffect ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QGraphicsEffect_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsEffect, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QGraphicsEffect_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsEffect, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGraphicsEffect_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsEffect, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGraphicsEffect_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsEffect, slot: fn (self: QtC.QGraphicsEffect, signal: []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        qtc.QGraphicsEffect_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsEffect, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QGraphicsEffect_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsEffect, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QGraphicsEffect_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsEffect, slot: fn (self: QtC.QGraphicsEffect, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsEffect_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QGraphicsEffect, slot: fn (self: QtC.QObject, objectName: []const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#dtor.QGraphicsEffect)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QGraphicsEffect ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsEffect_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html
pub const qgraphicscolorizeeffect = struct {
    /// New constructs a new QGraphicsColorizeEffect object.
    ///
    ///
    pub fn New() QtC.QGraphicsColorizeEffect {
        return qtc.QGraphicsColorizeEffect_new();
    }

    /// New2 constructs a new QGraphicsColorizeEffect object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New2(parent: ?*anyopaque) QtC.QGraphicsColorizeEffect {
        return qtc.QGraphicsColorizeEffect_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QGraphicsColorizeEffect_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QGraphicsColorizeEffect, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGraphicsColorizeEffect_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QGraphicsColorizeEffect, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QGraphicsColorizeEffect_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, slot: fn (self: QtC.QGraphicsColorizeEffect, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QGraphicsColorizeEffect_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QGraphicsColorizeEffect_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QGraphicsColorizeEffect_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicscolorizeeffect.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#color)
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect ```
    pub fn Color(self: ?*anyopaque) QtC.QColor {
        return qtc.QGraphicsColorizeEffect_Color(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#strength)
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect ```
    pub fn Strength(self: ?*anyopaque) f64 {
        return qtc.QGraphicsColorizeEffect_Strength(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#setColor)
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, c: QtC.QColor ```
    pub fn SetColor(self: ?*anyopaque, c: ?*anyopaque) void {
        qtc.QGraphicsColorizeEffect_SetColor(@ptrCast(self), @ptrCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#setStrength)
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, strength: f64 ```
    pub fn SetStrength(self: ?*anyopaque, strength: f64) void {
        qtc.QGraphicsColorizeEffect_SetStrength(@ptrCast(self), @floatCast(strength));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#colorChanged)
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, color: QtC.QColor ```
    pub fn ColorChanged(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QGraphicsColorizeEffect_ColorChanged(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#colorChanged)
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, slot: fn (self: QtC.QGraphicsColorizeEffect, color: QtC.QColor) callconv(.c) void ```
    pub fn OnColorChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsColorizeEffect_Connect_ColorChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#strengthChanged)
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, strength: f64 ```
    pub fn StrengthChanged(self: ?*anyopaque, strength: f64) void {
        qtc.QGraphicsColorizeEffect_StrengthChanged(@ptrCast(self), @floatCast(strength));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#strengthChanged)
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, slot: fn (self: QtC.QGraphicsColorizeEffect, strength: f64) callconv(.c) void ```
    pub fn OnStrengthChanged(self: ?*anyopaque, slot: fn (?*anyopaque, f64) callconv(.c) void) void {
        qtc.QGraphicsColorizeEffect_Connect_StrengthChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#draw)
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, painter: QtC.QPainter ```
    pub fn Draw(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QGraphicsColorizeEffect_Draw(@ptrCast(self), @ptrCast(painter));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#draw)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, slot: fn (self: QtC.QGraphicsColorizeEffect, painter: QtC.QPainter) callconv(.c) void ```
    pub fn OnDraw(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsColorizeEffect_OnDraw(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#draw)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, painter: QtC.QPainter ```
    pub fn QBaseDraw(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QGraphicsColorizeEffect_QBaseDraw(@ptrCast(self), @ptrCast(painter));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QGraphicsColorizeEffect_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicscolorizeeffect.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QGraphicsColorizeEffect_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicscolorizeeffect.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRect)
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect ```
    pub fn BoundingRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsEffect_BoundingRect(@ptrCast(self));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#isEnabled)
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect ```
    pub fn IsEnabled(self: ?*anyopaque) bool {
        return qtc.QGraphicsEffect_IsEnabled(@ptrCast(self));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#setEnabled)
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, enable: bool ```
    pub fn SetEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QGraphicsEffect_SetEnabled(@ptrCast(self), enable);
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#update)
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect ```
    pub fn Update(self: ?*anyopaque) void {
        qtc.QGraphicsEffect_Update(@ptrCast(self));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#enabledChanged)
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, enabled: bool ```
    pub fn EnabledChanged(self: ?*anyopaque, enabled: bool) void {
        qtc.QGraphicsEffect_EnabledChanged(@ptrCast(self), enabled);
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#enabledChanged)
    ///
    /// ``` self: QtC.QGraphicsEffect, slot: fn (self: QtC.QGraphicsEffect, enabled: bool) callconv(.c) void ```
    pub fn OnEnabledChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QGraphicsEffect_Connect_EnabledChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicscolorizeeffect.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i64) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.struct_libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qgraphicscolorizeeffect.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, obj: QtC.QObject ```
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
    /// ``` self: QtC.QGraphicsColorizeEffect, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.QGraphicsColorizeEffect ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.struct_libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRectFor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, sourceRect: QtC.QRectF ```
    pub fn BoundingRectFor(self: ?*anyopaque, sourceRect: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsColorizeEffect_BoundingRectFor(@ptrCast(self), @ptrCast(sourceRect));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRectFor)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, sourceRect: QtC.QRectF ```
    pub fn QBaseBoundingRectFor(self: ?*anyopaque, sourceRect: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsColorizeEffect_QBaseBoundingRectFor(@ptrCast(self), @ptrCast(sourceRect));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRectFor)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, slot: fn (self: QtC.QGraphicsColorizeEffect, sourceRect: QtC.QRectF) callconv(.c) QtC.QRectF ```
    pub fn OnBoundingRectFor(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRectF) void {
        qtc.QGraphicsColorizeEffect_OnBoundingRectFor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, flags: i32 ```
    pub fn SourceChanged(self: ?*anyopaque, flags: i64) void {
        qtc.QGraphicsColorizeEffect_SourceChanged(@ptrCast(self), @intCast(flags));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, flags: i32 ```
    pub fn QBaseSourceChanged(self: ?*anyopaque, flags: i64) void {
        qtc.QGraphicsColorizeEffect_QBaseSourceChanged(@ptrCast(self), @intCast(flags));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, slot: fn (self: QtC.QGraphicsColorizeEffect, flags: i32) callconv(.c) void ```
    pub fn OnSourceChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QGraphicsColorizeEffect_OnSourceChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsColorizeEffect_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsColorizeEffect_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, slot: fn (self: QtC.QGraphicsColorizeEffect, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsColorizeEffect_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsColorizeEffect_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsColorizeEffect_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, slot: fn (self: QtC.QGraphicsColorizeEffect, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsColorizeEffect_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsColorizeEffect_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsColorizeEffect_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, slot: fn (self: QtC.QGraphicsColorizeEffect, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsColorizeEffect_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsColorizeEffect_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsColorizeEffect_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, slot: fn (self: QtC.QGraphicsColorizeEffect, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsColorizeEffect_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsColorizeEffect_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsColorizeEffect_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, slot: fn (self: QtC.QGraphicsColorizeEffect, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsColorizeEffect_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QGraphicsColorizeEffect_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QGraphicsColorizeEffect_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, slot: fn (self: QtC.QGraphicsColorizeEffect, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsColorizeEffect_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QGraphicsColorizeEffect_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QGraphicsColorizeEffect_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, slot: fn (self: QtC.QGraphicsColorizeEffect, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsColorizeEffect_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect ```
    pub fn UpdateBoundingRect(self: ?*anyopaque) void {
        qtc.QGraphicsColorizeEffect_UpdateBoundingRect(@ptrCast(self));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect ```
    pub fn QBaseUpdateBoundingRect(self: ?*anyopaque) void {
        qtc.QGraphicsColorizeEffect_QBaseUpdateBoundingRect(@ptrCast(self));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, slot: fn () callconv(.c) void ```
    pub fn OnUpdateBoundingRect(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QGraphicsColorizeEffect_OnUpdateBoundingRect(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect ```
    pub fn SourceIsPixmap(self: ?*anyopaque) bool {
        return qtc.QGraphicsColorizeEffect_SourceIsPixmap(@ptrCast(self));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect ```
    pub fn QBaseSourceIsPixmap(self: ?*anyopaque) bool {
        return qtc.QGraphicsColorizeEffect_QBaseSourceIsPixmap(@ptrCast(self));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, slot: fn () callconv(.c) bool ```
    pub fn OnSourceIsPixmap(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QGraphicsColorizeEffect_OnSourceIsPixmap(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect ```
    pub fn SourceBoundingRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsColorizeEffect_SourceBoundingRect(@ptrCast(self));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect ```
    pub fn QBaseSourceBoundingRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsColorizeEffect_QBaseSourceBoundingRect(@ptrCast(self));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, slot: fn () callconv(.c) QtC.QRectF ```
    pub fn OnSourceBoundingRect(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QRectF) void {
        qtc.QGraphicsColorizeEffect_OnSourceBoundingRect(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, painter: QtC.QPainter ```
    pub fn DrawSource(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QGraphicsColorizeEffect_DrawSource(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, painter: QtC.QPainter ```
    pub fn QBaseDrawSource(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QGraphicsColorizeEffect_QBaseDrawSource(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, slot: fn (self: QtC.QGraphicsColorizeEffect, painter: QtC.QPainter) callconv(.c) void ```
    pub fn OnDrawSource(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsColorizeEffect_OnDrawSource(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect ```
    pub fn SourcePixmap(self: ?*anyopaque) QtC.QPixmap {
        return qtc.QGraphicsColorizeEffect_SourcePixmap(@ptrCast(self));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect ```
    pub fn QBaseSourcePixmap(self: ?*anyopaque) QtC.QPixmap {
        return qtc.QGraphicsColorizeEffect_QBaseSourcePixmap(@ptrCast(self));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, slot: fn () callconv(.c) QtC.QPixmap ```
    pub fn OnSourcePixmap(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QPixmap) void {
        qtc.QGraphicsColorizeEffect_OnSourcePixmap(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QGraphicsColorizeEffect_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QGraphicsColorizeEffect_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.QGraphicsColorizeEffect_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QGraphicsColorizeEffect_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QGraphicsColorizeEffect_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QGraphicsColorizeEffect_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGraphicsColorizeEffect_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGraphicsColorizeEffect_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, slot: fn (self: QtC.QGraphicsColorizeEffect, signal: []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        qtc.QGraphicsColorizeEffect_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QGraphicsColorizeEffect_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QGraphicsColorizeEffect_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, slot: fn (self: QtC.QGraphicsColorizeEffect, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsColorizeEffect_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect, slot: fn (self: QtC.QObject, objectName: []const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#dtor.QGraphicsColorizeEffect)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QGraphicsColorizeEffect ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsColorizeEffect_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qgraphicsblureffect.html
pub const qgraphicsblureffect = struct {
    /// New constructs a new QGraphicsBlurEffect object.
    ///
    ///
    pub fn New() QtC.QGraphicsBlurEffect {
        return qtc.QGraphicsBlurEffect_new();
    }

    /// New2 constructs a new QGraphicsBlurEffect object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New2(parent: ?*anyopaque) QtC.QGraphicsBlurEffect {
        return qtc.QGraphicsBlurEffect_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QGraphicsBlurEffect ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QGraphicsBlurEffect_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QGraphicsBlurEffect, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGraphicsBlurEffect_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QGraphicsBlurEffect, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QGraphicsBlurEffect_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, slot: fn (self: QtC.QGraphicsBlurEffect, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QGraphicsBlurEffect_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QGraphicsBlurEffect_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QGraphicsBlurEffect_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsblureffect.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsblureffect.html#boundingRectFor)
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, rect: QtC.QRectF ```
    pub fn BoundingRectFor(self: ?*anyopaque, rect: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsBlurEffect_BoundingRectFor(@ptrCast(self), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsblureffect.html#boundingRectFor)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, slot: fn (self: QtC.QGraphicsBlurEffect, rect: QtC.QRectF) callconv(.c) QtC.QRectF ```
    pub fn OnBoundingRectFor(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRectF) void {
        qtc.QGraphicsBlurEffect_OnBoundingRectFor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsblureffect.html#boundingRectFor)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, rect: QtC.QRectF ```
    pub fn QBaseBoundingRectFor(self: ?*anyopaque, rect: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsBlurEffect_QBaseBoundingRectFor(@ptrCast(self), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsblureffect.html#blurRadius)
    ///
    /// ``` self: QtC.QGraphicsBlurEffect ```
    pub fn BlurRadius(self: ?*anyopaque) f64 {
        return qtc.QGraphicsBlurEffect_BlurRadius(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsblureffect.html#blurHints)
    ///
    /// ``` self: QtC.QGraphicsBlurEffect ```
    pub fn BlurHints(self: ?*anyopaque) i64 {
        return qtc.QGraphicsBlurEffect_BlurHints(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsblureffect.html#setBlurRadius)
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, blurRadius: f64 ```
    pub fn SetBlurRadius(self: ?*anyopaque, blurRadius: f64) void {
        qtc.QGraphicsBlurEffect_SetBlurRadius(@ptrCast(self), @floatCast(blurRadius));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsblureffect.html#setBlurHints)
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, hints: i32 ```
    pub fn SetBlurHints(self: ?*anyopaque, hints: i64) void {
        qtc.QGraphicsBlurEffect_SetBlurHints(@ptrCast(self), @intCast(hints));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsblureffect.html#blurRadiusChanged)
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, blurRadius: f64 ```
    pub fn BlurRadiusChanged(self: ?*anyopaque, blurRadius: f64) void {
        qtc.QGraphicsBlurEffect_BlurRadiusChanged(@ptrCast(self), @floatCast(blurRadius));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsblureffect.html#blurRadiusChanged)
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, slot: fn (self: QtC.QGraphicsBlurEffect, blurRadius: f64) callconv(.c) void ```
    pub fn OnBlurRadiusChanged(self: ?*anyopaque, slot: fn (?*anyopaque, f64) callconv(.c) void) void {
        qtc.QGraphicsBlurEffect_Connect_BlurRadiusChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsblureffect.html#blurHintsChanged)
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, hints: i32 ```
    pub fn BlurHintsChanged(self: ?*anyopaque, hints: i64) void {
        qtc.QGraphicsBlurEffect_BlurHintsChanged(@ptrCast(self), @intCast(hints));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsblureffect.html#blurHintsChanged)
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, slot: fn (self: QtC.QGraphicsBlurEffect, hints: i32) callconv(.c) void ```
    pub fn OnBlurHintsChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QGraphicsBlurEffect_Connect_BlurHintsChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsblureffect.html#draw)
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, painter: QtC.QPainter ```
    pub fn Draw(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QGraphicsBlurEffect_Draw(@ptrCast(self), @ptrCast(painter));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsblureffect.html#draw)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, slot: fn (self: QtC.QGraphicsBlurEffect, painter: QtC.QPainter) callconv(.c) void ```
    pub fn OnDraw(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsBlurEffect_OnDraw(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsblureffect.html#draw)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, painter: QtC.QPainter ```
    pub fn QBaseDraw(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QGraphicsBlurEffect_QBaseDraw(@ptrCast(self), @ptrCast(painter));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QGraphicsBlurEffect_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsblureffect.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QGraphicsBlurEffect_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsblureffect.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRect)
    ///
    /// ``` self: QtC.QGraphicsBlurEffect ```
    pub fn BoundingRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsEffect_BoundingRect(@ptrCast(self));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#isEnabled)
    ///
    /// ``` self: QtC.QGraphicsBlurEffect ```
    pub fn IsEnabled(self: ?*anyopaque) bool {
        return qtc.QGraphicsEffect_IsEnabled(@ptrCast(self));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#setEnabled)
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, enable: bool ```
    pub fn SetEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QGraphicsEffect_SetEnabled(@ptrCast(self), enable);
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#update)
    ///
    /// ``` self: QtC.QGraphicsBlurEffect ```
    pub fn Update(self: ?*anyopaque) void {
        qtc.QGraphicsEffect_Update(@ptrCast(self));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#enabledChanged)
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, enabled: bool ```
    pub fn EnabledChanged(self: ?*anyopaque, enabled: bool) void {
        qtc.QGraphicsEffect_EnabledChanged(@ptrCast(self), enabled);
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#enabledChanged)
    ///
    /// ``` self: QtC.QGraphicsEffect, slot: fn (self: QtC.QGraphicsEffect, enabled: bool) callconv(.c) void ```
    pub fn OnEnabledChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QGraphicsEffect_Connect_EnabledChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsblureffect.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.QGraphicsBlurEffect ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QGraphicsBlurEffect ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QGraphicsBlurEffect ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QGraphicsBlurEffect ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QGraphicsBlurEffect ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i64) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.struct_libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qgraphicsblureffect.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, obj: QtC.QObject ```
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
    /// ``` self: QtC.QGraphicsBlurEffect, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.QGraphicsBlurEffect ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QGraphicsBlurEffect ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.struct_libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QGraphicsBlurEffect ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QGraphicsBlurEffect ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QGraphicsBlurEffect ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QGraphicsBlurEffect ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QGraphicsBlurEffect ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, flags: i32 ```
    pub fn SourceChanged(self: ?*anyopaque, flags: i64) void {
        qtc.QGraphicsBlurEffect_SourceChanged(@ptrCast(self), @intCast(flags));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, flags: i32 ```
    pub fn QBaseSourceChanged(self: ?*anyopaque, flags: i64) void {
        qtc.QGraphicsBlurEffect_QBaseSourceChanged(@ptrCast(self), @intCast(flags));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, slot: fn (self: QtC.QGraphicsBlurEffect, flags: i32) callconv(.c) void ```
    pub fn OnSourceChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QGraphicsBlurEffect_OnSourceChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsBlurEffect_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsBlurEffect_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, slot: fn (self: QtC.QGraphicsBlurEffect, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsBlurEffect_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsBlurEffect_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsBlurEffect_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, slot: fn (self: QtC.QGraphicsBlurEffect, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsBlurEffect_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsBlurEffect_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsBlurEffect_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, slot: fn (self: QtC.QGraphicsBlurEffect, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsBlurEffect_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsBlurEffect_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsBlurEffect_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, slot: fn (self: QtC.QGraphicsBlurEffect, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsBlurEffect_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsBlurEffect_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsBlurEffect_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, slot: fn (self: QtC.QGraphicsBlurEffect, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsBlurEffect_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QGraphicsBlurEffect_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QGraphicsBlurEffect_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, slot: fn (self: QtC.QGraphicsBlurEffect, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsBlurEffect_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QGraphicsBlurEffect_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QGraphicsBlurEffect_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, slot: fn (self: QtC.QGraphicsBlurEffect, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsBlurEffect_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsBlurEffect ```
    pub fn UpdateBoundingRect(self: ?*anyopaque) void {
        qtc.QGraphicsBlurEffect_UpdateBoundingRect(@ptrCast(self));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsBlurEffect ```
    pub fn QBaseUpdateBoundingRect(self: ?*anyopaque) void {
        qtc.QGraphicsBlurEffect_QBaseUpdateBoundingRect(@ptrCast(self));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, slot: fn () callconv(.c) void ```
    pub fn OnUpdateBoundingRect(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QGraphicsBlurEffect_OnUpdateBoundingRect(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsBlurEffect ```
    pub fn SourceIsPixmap(self: ?*anyopaque) bool {
        return qtc.QGraphicsBlurEffect_SourceIsPixmap(@ptrCast(self));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsBlurEffect ```
    pub fn QBaseSourceIsPixmap(self: ?*anyopaque) bool {
        return qtc.QGraphicsBlurEffect_QBaseSourceIsPixmap(@ptrCast(self));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, slot: fn () callconv(.c) bool ```
    pub fn OnSourceIsPixmap(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QGraphicsBlurEffect_OnSourceIsPixmap(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsBlurEffect ```
    pub fn SourceBoundingRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsBlurEffect_SourceBoundingRect(@ptrCast(self));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsBlurEffect ```
    pub fn QBaseSourceBoundingRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsBlurEffect_QBaseSourceBoundingRect(@ptrCast(self));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, slot: fn () callconv(.c) QtC.QRectF ```
    pub fn OnSourceBoundingRect(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QRectF) void {
        qtc.QGraphicsBlurEffect_OnSourceBoundingRect(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, painter: QtC.QPainter ```
    pub fn DrawSource(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QGraphicsBlurEffect_DrawSource(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, painter: QtC.QPainter ```
    pub fn QBaseDrawSource(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QGraphicsBlurEffect_QBaseDrawSource(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, slot: fn (self: QtC.QGraphicsBlurEffect, painter: QtC.QPainter) callconv(.c) void ```
    pub fn OnDrawSource(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsBlurEffect_OnDrawSource(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsBlurEffect ```
    pub fn SourcePixmap(self: ?*anyopaque) QtC.QPixmap {
        return qtc.QGraphicsBlurEffect_SourcePixmap(@ptrCast(self));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsBlurEffect ```
    pub fn QBaseSourcePixmap(self: ?*anyopaque) QtC.QPixmap {
        return qtc.QGraphicsBlurEffect_QBaseSourcePixmap(@ptrCast(self));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, slot: fn () callconv(.c) QtC.QPixmap ```
    pub fn OnSourcePixmap(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QPixmap) void {
        qtc.QGraphicsBlurEffect_OnSourcePixmap(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsBlurEffect ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QGraphicsBlurEffect_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsBlurEffect ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QGraphicsBlurEffect_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.QGraphicsBlurEffect_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsBlurEffect ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QGraphicsBlurEffect_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsBlurEffect ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QGraphicsBlurEffect_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QGraphicsBlurEffect_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGraphicsBlurEffect_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGraphicsBlurEffect_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, slot: fn (self: QtC.QGraphicsBlurEffect, signal: []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        qtc.QGraphicsBlurEffect_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QGraphicsBlurEffect_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QGraphicsBlurEffect_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, slot: fn (self: QtC.QGraphicsBlurEffect, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsBlurEffect_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QGraphicsBlurEffect, slot: fn (self: QtC.QObject, objectName: []const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsblureffect.html#dtor.QGraphicsBlurEffect)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QGraphicsBlurEffect ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsBlurEffect_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html
pub const qgraphicsdropshadoweffect = struct {
    /// New constructs a new QGraphicsDropShadowEffect object.
    ///
    ///
    pub fn New() QtC.QGraphicsDropShadowEffect {
        return qtc.QGraphicsDropShadowEffect_new();
    }

    /// New2 constructs a new QGraphicsDropShadowEffect object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New2(parent: ?*anyopaque) QtC.QGraphicsDropShadowEffect {
        return qtc.QGraphicsDropShadowEffect_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QGraphicsDropShadowEffect_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QGraphicsDropShadowEffect, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGraphicsDropShadowEffect_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QGraphicsDropShadowEffect, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QGraphicsDropShadowEffect_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, slot: fn (self: QtC.QGraphicsDropShadowEffect, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QGraphicsDropShadowEffect_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QGraphicsDropShadowEffect_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QGraphicsDropShadowEffect_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsdropshadoweffect.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#boundingRectFor)
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, rect: QtC.QRectF ```
    pub fn BoundingRectFor(self: ?*anyopaque, rect: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsDropShadowEffect_BoundingRectFor(@ptrCast(self), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#boundingRectFor)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, slot: fn (self: QtC.QGraphicsDropShadowEffect, rect: QtC.QRectF) callconv(.c) QtC.QRectF ```
    pub fn OnBoundingRectFor(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRectF) void {
        qtc.QGraphicsDropShadowEffect_OnBoundingRectFor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#boundingRectFor)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, rect: QtC.QRectF ```
    pub fn QBaseBoundingRectFor(self: ?*anyopaque, rect: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsDropShadowEffect_QBaseBoundingRectFor(@ptrCast(self), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#offset)
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect ```
    pub fn Offset(self: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsDropShadowEffect_Offset(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#xOffset)
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect ```
    pub fn XOffset(self: ?*anyopaque) f64 {
        return qtc.QGraphicsDropShadowEffect_XOffset(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#yOffset)
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect ```
    pub fn YOffset(self: ?*anyopaque) f64 {
        return qtc.QGraphicsDropShadowEffect_YOffset(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#blurRadius)
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect ```
    pub fn BlurRadius(self: ?*anyopaque) f64 {
        return qtc.QGraphicsDropShadowEffect_BlurRadius(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#color)
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect ```
    pub fn Color(self: ?*anyopaque) QtC.QColor {
        return qtc.QGraphicsDropShadowEffect_Color(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#setOffset)
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, ofs: QtC.QPointF ```
    pub fn SetOffset(self: ?*anyopaque, ofs: ?*anyopaque) void {
        qtc.QGraphicsDropShadowEffect_SetOffset(@ptrCast(self), @ptrCast(ofs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#setOffset)
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, dx: f64, dy: f64 ```
    pub fn SetOffset2(self: ?*anyopaque, dx: f64, dy: f64) void {
        qtc.QGraphicsDropShadowEffect_SetOffset2(@ptrCast(self), @floatCast(dx), @floatCast(dy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#setOffset)
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, d: f64 ```
    pub fn SetOffset3(self: ?*anyopaque, d: f64) void {
        qtc.QGraphicsDropShadowEffect_SetOffset3(@ptrCast(self), @floatCast(d));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#setXOffset)
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, dx: f64 ```
    pub fn SetXOffset(self: ?*anyopaque, dx: f64) void {
        qtc.QGraphicsDropShadowEffect_SetXOffset(@ptrCast(self), @floatCast(dx));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#setYOffset)
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, dy: f64 ```
    pub fn SetYOffset(self: ?*anyopaque, dy: f64) void {
        qtc.QGraphicsDropShadowEffect_SetYOffset(@ptrCast(self), @floatCast(dy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#setBlurRadius)
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, blurRadius: f64 ```
    pub fn SetBlurRadius(self: ?*anyopaque, blurRadius: f64) void {
        qtc.QGraphicsDropShadowEffect_SetBlurRadius(@ptrCast(self), @floatCast(blurRadius));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#setColor)
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, color: QtC.QColor ```
    pub fn SetColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QGraphicsDropShadowEffect_SetColor(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#offsetChanged)
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, offset: QtC.QPointF ```
    pub fn OffsetChanged(self: ?*anyopaque, offset: ?*anyopaque) void {
        qtc.QGraphicsDropShadowEffect_OffsetChanged(@ptrCast(self), @ptrCast(offset));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#offsetChanged)
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, slot: fn (self: QtC.QGraphicsDropShadowEffect, offset: QtC.QPointF) callconv(.c) void ```
    pub fn OnOffsetChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsDropShadowEffect_Connect_OffsetChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#blurRadiusChanged)
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, blurRadius: f64 ```
    pub fn BlurRadiusChanged(self: ?*anyopaque, blurRadius: f64) void {
        qtc.QGraphicsDropShadowEffect_BlurRadiusChanged(@ptrCast(self), @floatCast(blurRadius));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#blurRadiusChanged)
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, slot: fn (self: QtC.QGraphicsDropShadowEffect, blurRadius: f64) callconv(.c) void ```
    pub fn OnBlurRadiusChanged(self: ?*anyopaque, slot: fn (?*anyopaque, f64) callconv(.c) void) void {
        qtc.QGraphicsDropShadowEffect_Connect_BlurRadiusChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#colorChanged)
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, color: QtC.QColor ```
    pub fn ColorChanged(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QGraphicsDropShadowEffect_ColorChanged(@ptrCast(self), @ptrCast(color));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#colorChanged)
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, slot: fn (self: QtC.QGraphicsDropShadowEffect, color: QtC.QColor) callconv(.c) void ```
    pub fn OnColorChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsDropShadowEffect_Connect_ColorChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#draw)
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, painter: QtC.QPainter ```
    pub fn Draw(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QGraphicsDropShadowEffect_Draw(@ptrCast(self), @ptrCast(painter));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#draw)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, slot: fn (self: QtC.QGraphicsDropShadowEffect, painter: QtC.QPainter) callconv(.c) void ```
    pub fn OnDraw(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsDropShadowEffect_OnDraw(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#draw)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, painter: QtC.QPainter ```
    pub fn QBaseDraw(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QGraphicsDropShadowEffect_QBaseDraw(@ptrCast(self), @ptrCast(painter));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QGraphicsDropShadowEffect_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsdropshadoweffect.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QGraphicsDropShadowEffect_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsdropshadoweffect.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRect)
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect ```
    pub fn BoundingRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsEffect_BoundingRect(@ptrCast(self));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#isEnabled)
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect ```
    pub fn IsEnabled(self: ?*anyopaque) bool {
        return qtc.QGraphicsEffect_IsEnabled(@ptrCast(self));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#setEnabled)
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, enable: bool ```
    pub fn SetEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QGraphicsEffect_SetEnabled(@ptrCast(self), enable);
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#update)
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect ```
    pub fn Update(self: ?*anyopaque) void {
        qtc.QGraphicsEffect_Update(@ptrCast(self));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#enabledChanged)
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, enabled: bool ```
    pub fn EnabledChanged(self: ?*anyopaque, enabled: bool) void {
        qtc.QGraphicsEffect_EnabledChanged(@ptrCast(self), enabled);
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#enabledChanged)
    ///
    /// ``` self: QtC.QGraphicsEffect, slot: fn (self: QtC.QGraphicsEffect, enabled: bool) callconv(.c) void ```
    pub fn OnEnabledChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QGraphicsEffect_Connect_EnabledChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsdropshadoweffect.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i64) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.struct_libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qgraphicsdropshadoweffect.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, obj: QtC.QObject ```
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
    /// ``` self: QtC.QGraphicsDropShadowEffect, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.QGraphicsDropShadowEffect ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.struct_libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, flags: i32 ```
    pub fn SourceChanged(self: ?*anyopaque, flags: i64) void {
        qtc.QGraphicsDropShadowEffect_SourceChanged(@ptrCast(self), @intCast(flags));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, flags: i32 ```
    pub fn QBaseSourceChanged(self: ?*anyopaque, flags: i64) void {
        qtc.QGraphicsDropShadowEffect_QBaseSourceChanged(@ptrCast(self), @intCast(flags));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, slot: fn (self: QtC.QGraphicsDropShadowEffect, flags: i32) callconv(.c) void ```
    pub fn OnSourceChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QGraphicsDropShadowEffect_OnSourceChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsDropShadowEffect_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsDropShadowEffect_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, slot: fn (self: QtC.QGraphicsDropShadowEffect, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsDropShadowEffect_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsDropShadowEffect_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsDropShadowEffect_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, slot: fn (self: QtC.QGraphicsDropShadowEffect, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsDropShadowEffect_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsDropShadowEffect_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsDropShadowEffect_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, slot: fn (self: QtC.QGraphicsDropShadowEffect, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsDropShadowEffect_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsDropShadowEffect_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsDropShadowEffect_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, slot: fn (self: QtC.QGraphicsDropShadowEffect, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsDropShadowEffect_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsDropShadowEffect_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsDropShadowEffect_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, slot: fn (self: QtC.QGraphicsDropShadowEffect, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsDropShadowEffect_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QGraphicsDropShadowEffect_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QGraphicsDropShadowEffect_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, slot: fn (self: QtC.QGraphicsDropShadowEffect, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsDropShadowEffect_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QGraphicsDropShadowEffect_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QGraphicsDropShadowEffect_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, slot: fn (self: QtC.QGraphicsDropShadowEffect, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsDropShadowEffect_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect ```
    pub fn UpdateBoundingRect(self: ?*anyopaque) void {
        qtc.QGraphicsDropShadowEffect_UpdateBoundingRect(@ptrCast(self));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect ```
    pub fn QBaseUpdateBoundingRect(self: ?*anyopaque) void {
        qtc.QGraphicsDropShadowEffect_QBaseUpdateBoundingRect(@ptrCast(self));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, slot: fn () callconv(.c) void ```
    pub fn OnUpdateBoundingRect(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QGraphicsDropShadowEffect_OnUpdateBoundingRect(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect ```
    pub fn SourceIsPixmap(self: ?*anyopaque) bool {
        return qtc.QGraphicsDropShadowEffect_SourceIsPixmap(@ptrCast(self));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect ```
    pub fn QBaseSourceIsPixmap(self: ?*anyopaque) bool {
        return qtc.QGraphicsDropShadowEffect_QBaseSourceIsPixmap(@ptrCast(self));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, slot: fn () callconv(.c) bool ```
    pub fn OnSourceIsPixmap(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QGraphicsDropShadowEffect_OnSourceIsPixmap(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect ```
    pub fn SourceBoundingRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsDropShadowEffect_SourceBoundingRect(@ptrCast(self));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect ```
    pub fn QBaseSourceBoundingRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsDropShadowEffect_QBaseSourceBoundingRect(@ptrCast(self));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, slot: fn () callconv(.c) QtC.QRectF ```
    pub fn OnSourceBoundingRect(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QRectF) void {
        qtc.QGraphicsDropShadowEffect_OnSourceBoundingRect(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, painter: QtC.QPainter ```
    pub fn DrawSource(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QGraphicsDropShadowEffect_DrawSource(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, painter: QtC.QPainter ```
    pub fn QBaseDrawSource(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QGraphicsDropShadowEffect_QBaseDrawSource(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, slot: fn (self: QtC.QGraphicsDropShadowEffect, painter: QtC.QPainter) callconv(.c) void ```
    pub fn OnDrawSource(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsDropShadowEffect_OnDrawSource(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect ```
    pub fn SourcePixmap(self: ?*anyopaque) QtC.QPixmap {
        return qtc.QGraphicsDropShadowEffect_SourcePixmap(@ptrCast(self));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect ```
    pub fn QBaseSourcePixmap(self: ?*anyopaque) QtC.QPixmap {
        return qtc.QGraphicsDropShadowEffect_QBaseSourcePixmap(@ptrCast(self));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, slot: fn () callconv(.c) QtC.QPixmap ```
    pub fn OnSourcePixmap(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QPixmap) void {
        qtc.QGraphicsDropShadowEffect_OnSourcePixmap(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QGraphicsDropShadowEffect_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QGraphicsDropShadowEffect_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.QGraphicsDropShadowEffect_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QGraphicsDropShadowEffect_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QGraphicsDropShadowEffect_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QGraphicsDropShadowEffect_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGraphicsDropShadowEffect_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGraphicsDropShadowEffect_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, slot: fn (self: QtC.QGraphicsDropShadowEffect, signal: []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        qtc.QGraphicsDropShadowEffect_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QGraphicsDropShadowEffect_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QGraphicsDropShadowEffect_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, slot: fn (self: QtC.QGraphicsDropShadowEffect, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsDropShadowEffect_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect, slot: fn (self: QtC.QObject, objectName: []const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#dtor.QGraphicsDropShadowEffect)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QGraphicsDropShadowEffect ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsDropShadowEffect_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qgraphicsopacityeffect.html
pub const qgraphicsopacityeffect = struct {
    /// New constructs a new QGraphicsOpacityEffect object.
    ///
    ///
    pub fn New() QtC.QGraphicsOpacityEffect {
        return qtc.QGraphicsOpacityEffect_new();
    }

    /// New2 constructs a new QGraphicsOpacityEffect object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New2(parent: ?*anyopaque) QtC.QGraphicsOpacityEffect {
        return qtc.QGraphicsOpacityEffect_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QGraphicsOpacityEffect_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QGraphicsOpacityEffect, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGraphicsOpacityEffect_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QGraphicsOpacityEffect, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QGraphicsOpacityEffect_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, slot: fn (self: QtC.QGraphicsOpacityEffect, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QGraphicsOpacityEffect_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QGraphicsOpacityEffect_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QGraphicsOpacityEffect_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsopacityeffect.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#opacity)
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect ```
    pub fn Opacity(self: ?*anyopaque) f64 {
        return qtc.QGraphicsOpacityEffect_Opacity(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#opacityMask)
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect ```
    pub fn OpacityMask(self: ?*anyopaque) QtC.QBrush {
        return qtc.QGraphicsOpacityEffect_OpacityMask(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#setOpacity)
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, opacity: f64 ```
    pub fn SetOpacity(self: ?*anyopaque, opacity: f64) void {
        qtc.QGraphicsOpacityEffect_SetOpacity(@ptrCast(self), @floatCast(opacity));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#setOpacityMask)
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, mask: QtC.QBrush ```
    pub fn SetOpacityMask(self: ?*anyopaque, mask: ?*anyopaque) void {
        qtc.QGraphicsOpacityEffect_SetOpacityMask(@ptrCast(self), @ptrCast(mask));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#opacityChanged)
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, opacity: f64 ```
    pub fn OpacityChanged(self: ?*anyopaque, opacity: f64) void {
        qtc.QGraphicsOpacityEffect_OpacityChanged(@ptrCast(self), @floatCast(opacity));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#opacityChanged)
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, slot: fn (self: QtC.QGraphicsOpacityEffect, opacity: f64) callconv(.c) void ```
    pub fn OnOpacityChanged(self: ?*anyopaque, slot: fn (?*anyopaque, f64) callconv(.c) void) void {
        qtc.QGraphicsOpacityEffect_Connect_OpacityChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#opacityMaskChanged)
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, mask: QtC.QBrush ```
    pub fn OpacityMaskChanged(self: ?*anyopaque, mask: ?*anyopaque) void {
        qtc.QGraphicsOpacityEffect_OpacityMaskChanged(@ptrCast(self), @ptrCast(mask));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#opacityMaskChanged)
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, slot: fn (self: QtC.QGraphicsOpacityEffect, mask: QtC.QBrush) callconv(.c) void ```
    pub fn OnOpacityMaskChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsOpacityEffect_Connect_OpacityMaskChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#draw)
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, painter: QtC.QPainter ```
    pub fn Draw(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QGraphicsOpacityEffect_Draw(@ptrCast(self), @ptrCast(painter));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#draw)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, slot: fn (self: QtC.QGraphicsOpacityEffect, painter: QtC.QPainter) callconv(.c) void ```
    pub fn OnDraw(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsOpacityEffect_OnDraw(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#draw)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, painter: QtC.QPainter ```
    pub fn QBaseDraw(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QGraphicsOpacityEffect_QBaseDraw(@ptrCast(self), @ptrCast(painter));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QGraphicsOpacityEffect_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsopacityeffect.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QGraphicsOpacityEffect_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsopacityeffect.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRect)
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect ```
    pub fn BoundingRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsEffect_BoundingRect(@ptrCast(self));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#isEnabled)
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect ```
    pub fn IsEnabled(self: ?*anyopaque) bool {
        return qtc.QGraphicsEffect_IsEnabled(@ptrCast(self));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#setEnabled)
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, enable: bool ```
    pub fn SetEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QGraphicsEffect_SetEnabled(@ptrCast(self), enable);
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#update)
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect ```
    pub fn Update(self: ?*anyopaque) void {
        qtc.QGraphicsEffect_Update(@ptrCast(self));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#enabledChanged)
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, enabled: bool ```
    pub fn EnabledChanged(self: ?*anyopaque, enabled: bool) void {
        qtc.QGraphicsEffect_EnabledChanged(@ptrCast(self), enabled);
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#enabledChanged)
    ///
    /// ``` self: QtC.QGraphicsEffect, slot: fn (self: QtC.QGraphicsEffect, enabled: bool) callconv(.c) void ```
    pub fn OnEnabledChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QGraphicsEffect_Connect_EnabledChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsopacityeffect.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i64) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.struct_libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qgraphicsopacityeffect.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, obj: QtC.QObject ```
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
    /// ``` self: QtC.QGraphicsOpacityEffect, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.QGraphicsOpacityEffect ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.struct_libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRectFor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, sourceRect: QtC.QRectF ```
    pub fn BoundingRectFor(self: ?*anyopaque, sourceRect: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsOpacityEffect_BoundingRectFor(@ptrCast(self), @ptrCast(sourceRect));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRectFor)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, sourceRect: QtC.QRectF ```
    pub fn QBaseBoundingRectFor(self: ?*anyopaque, sourceRect: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsOpacityEffect_QBaseBoundingRectFor(@ptrCast(self), @ptrCast(sourceRect));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRectFor)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, slot: fn (self: QtC.QGraphicsOpacityEffect, sourceRect: QtC.QRectF) callconv(.c) QtC.QRectF ```
    pub fn OnBoundingRectFor(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRectF) void {
        qtc.QGraphicsOpacityEffect_OnBoundingRectFor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, flags: i32 ```
    pub fn SourceChanged(self: ?*anyopaque, flags: i64) void {
        qtc.QGraphicsOpacityEffect_SourceChanged(@ptrCast(self), @intCast(flags));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, flags: i32 ```
    pub fn QBaseSourceChanged(self: ?*anyopaque, flags: i64) void {
        qtc.QGraphicsOpacityEffect_QBaseSourceChanged(@ptrCast(self), @intCast(flags));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, slot: fn (self: QtC.QGraphicsOpacityEffect, flags: i32) callconv(.c) void ```
    pub fn OnSourceChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QGraphicsOpacityEffect_OnSourceChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsOpacityEffect_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsOpacityEffect_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, slot: fn (self: QtC.QGraphicsOpacityEffect, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsOpacityEffect_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsOpacityEffect_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QGraphicsOpacityEffect_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, slot: fn (self: QtC.QGraphicsOpacityEffect, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsOpacityEffect_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsOpacityEffect_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsOpacityEffect_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, slot: fn (self: QtC.QGraphicsOpacityEffect, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsOpacityEffect_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsOpacityEffect_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsOpacityEffect_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, slot: fn (self: QtC.QGraphicsOpacityEffect, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsOpacityEffect_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsOpacityEffect_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QGraphicsOpacityEffect_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, slot: fn (self: QtC.QGraphicsOpacityEffect, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsOpacityEffect_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QGraphicsOpacityEffect_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QGraphicsOpacityEffect_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, slot: fn (self: QtC.QGraphicsOpacityEffect, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsOpacityEffect_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QGraphicsOpacityEffect_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QGraphicsOpacityEffect_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, slot: fn (self: QtC.QGraphicsOpacityEffect, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsOpacityEffect_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect ```
    pub fn UpdateBoundingRect(self: ?*anyopaque) void {
        qtc.QGraphicsOpacityEffect_UpdateBoundingRect(@ptrCast(self));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect ```
    pub fn QBaseUpdateBoundingRect(self: ?*anyopaque) void {
        qtc.QGraphicsOpacityEffect_QBaseUpdateBoundingRect(@ptrCast(self));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, slot: fn () callconv(.c) void ```
    pub fn OnUpdateBoundingRect(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QGraphicsOpacityEffect_OnUpdateBoundingRect(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect ```
    pub fn SourceIsPixmap(self: ?*anyopaque) bool {
        return qtc.QGraphicsOpacityEffect_SourceIsPixmap(@ptrCast(self));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect ```
    pub fn QBaseSourceIsPixmap(self: ?*anyopaque) bool {
        return qtc.QGraphicsOpacityEffect_QBaseSourceIsPixmap(@ptrCast(self));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, slot: fn () callconv(.c) bool ```
    pub fn OnSourceIsPixmap(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QGraphicsOpacityEffect_OnSourceIsPixmap(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect ```
    pub fn SourceBoundingRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsOpacityEffect_SourceBoundingRect(@ptrCast(self));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect ```
    pub fn QBaseSourceBoundingRect(self: ?*anyopaque) QtC.QRectF {
        return qtc.QGraphicsOpacityEffect_QBaseSourceBoundingRect(@ptrCast(self));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, slot: fn () callconv(.c) QtC.QRectF ```
    pub fn OnSourceBoundingRect(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QRectF) void {
        qtc.QGraphicsOpacityEffect_OnSourceBoundingRect(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, painter: QtC.QPainter ```
    pub fn DrawSource(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QGraphicsOpacityEffect_DrawSource(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, painter: QtC.QPainter ```
    pub fn QBaseDrawSource(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QGraphicsOpacityEffect_QBaseDrawSource(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, slot: fn (self: QtC.QGraphicsOpacityEffect, painter: QtC.QPainter) callconv(.c) void ```
    pub fn OnDrawSource(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGraphicsOpacityEffect_OnDrawSource(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect ```
    pub fn SourcePixmap(self: ?*anyopaque) QtC.QPixmap {
        return qtc.QGraphicsOpacityEffect_SourcePixmap(@ptrCast(self));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect ```
    pub fn QBaseSourcePixmap(self: ?*anyopaque) QtC.QPixmap {
        return qtc.QGraphicsOpacityEffect_QBaseSourcePixmap(@ptrCast(self));
    }

    /// Inherited from QGraphicsEffect
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, slot: fn () callconv(.c) QtC.QPixmap ```
    pub fn OnSourcePixmap(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QPixmap) void {
        qtc.QGraphicsOpacityEffect_OnSourcePixmap(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QGraphicsOpacityEffect_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QGraphicsOpacityEffect_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.QGraphicsOpacityEffect_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QGraphicsOpacityEffect_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QGraphicsOpacityEffect_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QGraphicsOpacityEffect_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGraphicsOpacityEffect_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QGraphicsOpacityEffect_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, slot: fn (self: QtC.QGraphicsOpacityEffect, signal: []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        qtc.QGraphicsOpacityEffect_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QGraphicsOpacityEffect_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QGraphicsOpacityEffect_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, slot: fn (self: QtC.QGraphicsOpacityEffect, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGraphicsOpacityEffect_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect, slot: fn (self: QtC.QObject, objectName: []const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#dtor.QGraphicsOpacityEffect)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QGraphicsOpacityEffect ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsOpacityEffect_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qgraphicseffect.html#types
pub const enums = struct {
    pub const ChangeFlag = enum {
        pub const SourceAttached: i32 = 1;
        pub const SourceDetached: i32 = 2;
        pub const SourceBoundingRectChanged: i32 = 4;
        pub const SourceInvalidated: i32 = 8;
    };

    pub const PixmapPadMode = enum {
        pub const NoPad: i32 = 0;
        pub const PadToTransparentBorder: i32 = 1;
        pub const PadToEffectiveBoundingRect: i32 = 2;
    };

    pub const BlurHint = enum {
        pub const PerformanceHint: i32 = 0;
        pub const QualityHint: i32 = 1;
        pub const AnimationHint: i32 = 2;
    };
};
