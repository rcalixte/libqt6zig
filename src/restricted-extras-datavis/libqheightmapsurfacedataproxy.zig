const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QImage = @import("libqt6").QImage;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPoint = @import("libqt6").QPoint;
const QSurface3DSeries = @import("libqt6").QSurface3DSeries;
const QSurfaceDataItem = @import("libqt6").QSurfaceDataItem;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qabstractdataproxy_enums = @import("libqabstractdataproxy.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html)
pub const QHeightMapSurfaceDataProxy = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QHeightMapSurfaceDataProxy,

    pub const _is_QHeightMapSurfaceDataProxy = {};
    pub const _is_QSurfaceDataProxy = {};
    pub const _is_QAbstractDataProxy = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QHeightMapSurfaceDataProxy object in C++ memory
    ///
    pub fn new() QHeightMapSurfaceDataProxy {
        return .{ .ptr = qtc.QHeightMapSurfaceDataProxy_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QHeightMapSurfaceDataProxy object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` image: QImage `
    ///
    pub fn new2(image: anytype) QHeightMapSurfaceDataProxy {
        comptime _ = @TypeOf(image)._is_QImage;
        return .{ .ptr = qtc.QHeightMapSurfaceDataProxy_new2(@ptrCast(image.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QHeightMapSurfaceDataProxy object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` filename: []const u8 `
    ///
    pub fn new3(filename: []const u8) QHeightMapSurfaceDataProxy {
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        return .{ .ptr = qtc.QHeightMapSurfaceDataProxy_new3(filename_str) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QHeightMapSurfaceDataProxy object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new4(_parent: anytype) QHeightMapSurfaceDataProxy {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QHeightMapSurfaceDataProxy_new4(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QHeightMapSurfaceDataProxy object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` image: QImage `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new5(image: anytype, _parent: anytype) QHeightMapSurfaceDataProxy {
        comptime _ = @TypeOf(image)._is_QImage;
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QHeightMapSurfaceDataProxy_new5(@ptrCast(image.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QHeightMapSurfaceDataProxy object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` filename: []const u8 `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new6(filename: []const u8, _parent: anytype) QHeightMapSurfaceDataProxy {
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QHeightMapSurfaceDataProxy_new6(filename_str, @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    pub fn metaObject(self: QHeightMapSurfaceDataProxy) QMetaObject {
        return .{ .ptr = qtc.QHeightMapSurfaceDataProxy_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` callback: *const fn (self: QHeightMapSurfaceDataProxy) callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QHeightMapSurfaceDataProxy, callback: *const fn (QHeightMapSurfaceDataProxy) callconv(.c) QMetaObject) void {
        qtc.QHeightMapSurfaceDataProxy_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    pub fn superMetaObject(self: QHeightMapSurfaceDataProxy) QMetaObject {
        return .{ .ptr = qtc.QHeightMapSurfaceDataProxy_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QHeightMapSurfaceDataProxy, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QHeightMapSurfaceDataProxy_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` callback: *const fn (self: QHeightMapSurfaceDataProxy, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QHeightMapSurfaceDataProxy, callback: *const fn (QHeightMapSurfaceDataProxy, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QHeightMapSurfaceDataProxy_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QHeightMapSurfaceDataProxy, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QHeightMapSurfaceDataProxy_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QHeightMapSurfaceDataProxy, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QHeightMapSurfaceDataProxy_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` callback: *const fn (self: QHeightMapSurfaceDataProxy, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QHeightMapSurfaceDataProxy, callback: *const fn (QHeightMapSurfaceDataProxy, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QHeightMapSurfaceDataProxy_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QHeightMapSurfaceDataProxy, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QHeightMapSurfaceDataProxy_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// Inherited from QObject
    ///
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
        var _str = qtc.QHeightMapSurfaceDataProxy_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QHeightMapSurfaceDataProxy.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setHeightMap` instead
    ///
    pub const SetHeightMap = setHeightMap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#setHeightMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` image: QImage `
    ///
    pub fn setHeightMap(self: QHeightMapSurfaceDataProxy, image: anytype) void {
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.QHeightMapSurfaceDataProxy_SetHeightMap(@ptrCast(self.ptr), @ptrCast(image.ptr));
    }

    /// ### DEPRECATED: Use `heightMap` instead
    ///
    pub const HeightMap = heightMap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#heightMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    pub fn heightMap(self: QHeightMapSurfaceDataProxy) QImage {
        return .{ .ptr = qtc.QHeightMapSurfaceDataProxy_HeightMap(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setHeightMapFile` instead
    ///
    pub const SetHeightMapFile = setHeightMapFile;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#setHeightMapFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` filename: []const u8 `
    ///
    pub fn setHeightMapFile(self: QHeightMapSurfaceDataProxy, filename: []const u8) void {
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        qtc.QHeightMapSurfaceDataProxy_SetHeightMapFile(@ptrCast(self.ptr), filename_str);
    }

    /// ### DEPRECATED: Use `heightMapFile` instead
    ///
    pub const HeightMapFile = heightMapFile;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#heightMapFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn heightMapFile(self: QHeightMapSurfaceDataProxy, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QHeightMapSurfaceDataProxy_HeightMapFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QHeightMapSurfaceDataProxy.heightMapFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setValueRanges` instead
    ///
    pub const SetValueRanges = setValueRanges;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#setValueRanges)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` minX: f32 `
    ///
    /// ` maxX: f32 `
    ///
    /// ` minZ: f32 `
    ///
    /// ` maxZ: f32 `
    ///
    pub fn setValueRanges(self: QHeightMapSurfaceDataProxy, minX: f32, maxX: f32, minZ: f32, maxZ: f32) void {
        qtc.QHeightMapSurfaceDataProxy_SetValueRanges(@ptrCast(self.ptr), @bitCast(minX), @bitCast(maxX), @bitCast(minZ), @bitCast(maxZ));
    }

    /// ### DEPRECATED: Use `setMinXValue` instead
    ///
    pub const SetMinXValue = setMinXValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#setMinXValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` min: f32 `
    ///
    pub fn setMinXValue(self: QHeightMapSurfaceDataProxy, min: f32) void {
        qtc.QHeightMapSurfaceDataProxy_SetMinXValue(@ptrCast(self.ptr), @bitCast(min));
    }

    /// ### DEPRECATED: Use `minXValue` instead
    ///
    pub const MinXValue = minXValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#minXValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    pub fn minXValue(self: QHeightMapSurfaceDataProxy) f32 {
        return qtc.QHeightMapSurfaceDataProxy_MinXValue(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMaxXValue` instead
    ///
    pub const SetMaxXValue = setMaxXValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#setMaxXValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` max: f32 `
    ///
    pub fn setMaxXValue(self: QHeightMapSurfaceDataProxy, max: f32) void {
        qtc.QHeightMapSurfaceDataProxy_SetMaxXValue(@ptrCast(self.ptr), @bitCast(max));
    }

    /// ### DEPRECATED: Use `maxXValue` instead
    ///
    pub const MaxXValue = maxXValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#maxXValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    pub fn maxXValue(self: QHeightMapSurfaceDataProxy) f32 {
        return qtc.QHeightMapSurfaceDataProxy_MaxXValue(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMinZValue` instead
    ///
    pub const SetMinZValue = setMinZValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#setMinZValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` min: f32 `
    ///
    pub fn setMinZValue(self: QHeightMapSurfaceDataProxy, min: f32) void {
        qtc.QHeightMapSurfaceDataProxy_SetMinZValue(@ptrCast(self.ptr), @bitCast(min));
    }

    /// ### DEPRECATED: Use `minZValue` instead
    ///
    pub const MinZValue = minZValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#minZValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    pub fn minZValue(self: QHeightMapSurfaceDataProxy) f32 {
        return qtc.QHeightMapSurfaceDataProxy_MinZValue(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMaxZValue` instead
    ///
    pub const SetMaxZValue = setMaxZValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#setMaxZValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` max: f32 `
    ///
    pub fn setMaxZValue(self: QHeightMapSurfaceDataProxy, max: f32) void {
        qtc.QHeightMapSurfaceDataProxy_SetMaxZValue(@ptrCast(self.ptr), @bitCast(max));
    }

    /// ### DEPRECATED: Use `maxZValue` instead
    ///
    pub const MaxZValue = maxZValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#maxZValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    pub fn maxZValue(self: QHeightMapSurfaceDataProxy) f32 {
        return qtc.QHeightMapSurfaceDataProxy_MaxZValue(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMinYValue` instead
    ///
    pub const SetMinYValue = setMinYValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#setMinYValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` min: f32 `
    ///
    pub fn setMinYValue(self: QHeightMapSurfaceDataProxy, min: f32) void {
        qtc.QHeightMapSurfaceDataProxy_SetMinYValue(@ptrCast(self.ptr), @bitCast(min));
    }

    /// ### DEPRECATED: Use `minYValue` instead
    ///
    pub const MinYValue = minYValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#minYValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    pub fn minYValue(self: QHeightMapSurfaceDataProxy) f32 {
        return qtc.QHeightMapSurfaceDataProxy_MinYValue(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMaxYValue` instead
    ///
    pub const SetMaxYValue = setMaxYValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#setMaxYValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` max: f32 `
    ///
    pub fn setMaxYValue(self: QHeightMapSurfaceDataProxy, max: f32) void {
        qtc.QHeightMapSurfaceDataProxy_SetMaxYValue(@ptrCast(self.ptr), @bitCast(max));
    }

    /// ### DEPRECATED: Use `maxYValue` instead
    ///
    pub const MaxYValue = maxYValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#maxYValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    pub fn maxYValue(self: QHeightMapSurfaceDataProxy) f32 {
        return qtc.QHeightMapSurfaceDataProxy_MaxYValue(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutoScaleY` instead
    ///
    pub const SetAutoScaleY = setAutoScaleY;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#setAutoScaleY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` enabled: bool `
    ///
    pub fn setAutoScaleY(self: QHeightMapSurfaceDataProxy, enabled: bool) void {
        qtc.QHeightMapSurfaceDataProxy_SetAutoScaleY(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `autoScaleY` instead
    ///
    pub const AutoScaleY = autoScaleY;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#autoScaleY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    pub fn autoScaleY(self: QHeightMapSurfaceDataProxy) bool {
        return qtc.QHeightMapSurfaceDataProxy_AutoScaleY(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `heightMapChanged` instead
    ///
    pub const HeightMapChanged = heightMapChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#heightMapChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` image: QImage `
    ///
    pub fn heightMapChanged(self: QHeightMapSurfaceDataProxy, image: anytype) void {
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.QHeightMapSurfaceDataProxy_HeightMapChanged(@ptrCast(self.ptr), @ptrCast(image.ptr));
    }

    /// ### DEPRECATED: Use `onHeightMapChanged` instead
    ///
    pub const OnHeightMapChanged = onHeightMapChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#heightMapChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` callback: *const fn (self: QHeightMapSurfaceDataProxy, image: QImage) callconv(.c) void `
    ///
    pub fn onHeightMapChanged(self: QHeightMapSurfaceDataProxy, callback: *const fn (QHeightMapSurfaceDataProxy, QImage) callconv(.c) void) void {
        qtc.QHeightMapSurfaceDataProxy_Connect_HeightMapChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `heightMapFileChanged` instead
    ///
    pub const HeightMapFileChanged = heightMapFileChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#heightMapFileChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` filename: []const u8 `
    ///
    pub fn heightMapFileChanged(self: QHeightMapSurfaceDataProxy, filename: []const u8) void {
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        qtc.QHeightMapSurfaceDataProxy_HeightMapFileChanged(@ptrCast(self.ptr), filename_str);
    }

    /// ### DEPRECATED: Use `onHeightMapFileChanged` instead
    ///
    pub const OnHeightMapFileChanged = onHeightMapFileChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#heightMapFileChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` callback: *const fn (self: QHeightMapSurfaceDataProxy, filename: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onHeightMapFileChanged(self: QHeightMapSurfaceDataProxy, callback: *const fn (QHeightMapSurfaceDataProxy, [*:0]const u8) callconv(.c) void) void {
        qtc.QHeightMapSurfaceDataProxy_Connect_HeightMapFileChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `minXValueChanged` instead
    ///
    pub const MinXValueChanged = minXValueChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#minXValueChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` value: f32 `
    ///
    pub fn minXValueChanged(self: QHeightMapSurfaceDataProxy, value: f32) void {
        qtc.QHeightMapSurfaceDataProxy_MinXValueChanged(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### DEPRECATED: Use `onMinXValueChanged` instead
    ///
    pub const OnMinXValueChanged = onMinXValueChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#minXValueChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` callback: *const fn (self: QHeightMapSurfaceDataProxy, value: f32) callconv(.c) void `
    ///
    pub fn onMinXValueChanged(self: QHeightMapSurfaceDataProxy, callback: *const fn (QHeightMapSurfaceDataProxy, f32) callconv(.c) void) void {
        qtc.QHeightMapSurfaceDataProxy_Connect_MinXValueChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `maxXValueChanged` instead
    ///
    pub const MaxXValueChanged = maxXValueChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#maxXValueChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` value: f32 `
    ///
    pub fn maxXValueChanged(self: QHeightMapSurfaceDataProxy, value: f32) void {
        qtc.QHeightMapSurfaceDataProxy_MaxXValueChanged(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### DEPRECATED: Use `onMaxXValueChanged` instead
    ///
    pub const OnMaxXValueChanged = onMaxXValueChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#maxXValueChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` callback: *const fn (self: QHeightMapSurfaceDataProxy, value: f32) callconv(.c) void `
    ///
    pub fn onMaxXValueChanged(self: QHeightMapSurfaceDataProxy, callback: *const fn (QHeightMapSurfaceDataProxy, f32) callconv(.c) void) void {
        qtc.QHeightMapSurfaceDataProxy_Connect_MaxXValueChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `minZValueChanged` instead
    ///
    pub const MinZValueChanged = minZValueChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#minZValueChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` value: f32 `
    ///
    pub fn minZValueChanged(self: QHeightMapSurfaceDataProxy, value: f32) void {
        qtc.QHeightMapSurfaceDataProxy_MinZValueChanged(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### DEPRECATED: Use `onMinZValueChanged` instead
    ///
    pub const OnMinZValueChanged = onMinZValueChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#minZValueChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` callback: *const fn (self: QHeightMapSurfaceDataProxy, value: f32) callconv(.c) void `
    ///
    pub fn onMinZValueChanged(self: QHeightMapSurfaceDataProxy, callback: *const fn (QHeightMapSurfaceDataProxy, f32) callconv(.c) void) void {
        qtc.QHeightMapSurfaceDataProxy_Connect_MinZValueChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `maxZValueChanged` instead
    ///
    pub const MaxZValueChanged = maxZValueChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#maxZValueChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` value: f32 `
    ///
    pub fn maxZValueChanged(self: QHeightMapSurfaceDataProxy, value: f32) void {
        qtc.QHeightMapSurfaceDataProxy_MaxZValueChanged(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### DEPRECATED: Use `onMaxZValueChanged` instead
    ///
    pub const OnMaxZValueChanged = onMaxZValueChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#maxZValueChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` callback: *const fn (self: QHeightMapSurfaceDataProxy, value: f32) callconv(.c) void `
    ///
    pub fn onMaxZValueChanged(self: QHeightMapSurfaceDataProxy, callback: *const fn (QHeightMapSurfaceDataProxy, f32) callconv(.c) void) void {
        qtc.QHeightMapSurfaceDataProxy_Connect_MaxZValueChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `minYValueChanged` instead
    ///
    pub const MinYValueChanged = minYValueChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#minYValueChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` value: f32 `
    ///
    pub fn minYValueChanged(self: QHeightMapSurfaceDataProxy, value: f32) void {
        qtc.QHeightMapSurfaceDataProxy_MinYValueChanged(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### DEPRECATED: Use `onMinYValueChanged` instead
    ///
    pub const OnMinYValueChanged = onMinYValueChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#minYValueChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` callback: *const fn (self: QHeightMapSurfaceDataProxy, value: f32) callconv(.c) void `
    ///
    pub fn onMinYValueChanged(self: QHeightMapSurfaceDataProxy, callback: *const fn (QHeightMapSurfaceDataProxy, f32) callconv(.c) void) void {
        qtc.QHeightMapSurfaceDataProxy_Connect_MinYValueChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `maxYValueChanged` instead
    ///
    pub const MaxYValueChanged = maxYValueChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#maxYValueChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` value: f32 `
    ///
    pub fn maxYValueChanged(self: QHeightMapSurfaceDataProxy, value: f32) void {
        qtc.QHeightMapSurfaceDataProxy_MaxYValueChanged(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### DEPRECATED: Use `onMaxYValueChanged` instead
    ///
    pub const OnMaxYValueChanged = onMaxYValueChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#maxYValueChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` callback: *const fn (self: QHeightMapSurfaceDataProxy, value: f32) callconv(.c) void `
    ///
    pub fn onMaxYValueChanged(self: QHeightMapSurfaceDataProxy, callback: *const fn (QHeightMapSurfaceDataProxy, f32) callconv(.c) void) void {
        qtc.QHeightMapSurfaceDataProxy_Connect_MaxYValueChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `autoScaleYChanged` instead
    ///
    pub const AutoScaleYChanged = autoScaleYChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#autoScaleYChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` enabled: bool `
    ///
    pub fn autoScaleYChanged(self: QHeightMapSurfaceDataProxy, enabled: bool) void {
        qtc.QHeightMapSurfaceDataProxy_AutoScaleYChanged(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `onAutoScaleYChanged` instead
    ///
    pub const OnAutoScaleYChanged = onAutoScaleYChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#autoScaleYChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` callback: *const fn (self: QHeightMapSurfaceDataProxy, enabled: bool) callconv(.c) void `
    ///
    pub fn onAutoScaleYChanged(self: QHeightMapSurfaceDataProxy, callback: *const fn (QHeightMapSurfaceDataProxy, bool) callconv(.c) void) void {
        qtc.QHeightMapSurfaceDataProxy_Connect_AutoScaleYChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

    /// Inherited from QObject
    ///
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
        var _str = qtc.QHeightMapSurfaceDataProxy_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QHeightMapSurfaceDataProxy.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

    /// Inherited from QObject
    ///
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
        var _str = qtc.QHeightMapSurfaceDataProxy_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QHeightMapSurfaceDataProxy.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `series` instead
    ///
    pub const Series = series;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#series)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    pub fn series(self: QHeightMapSurfaceDataProxy) QSurface3DSeries {
        return .{ .ptr = qtc.QSurfaceDataProxy_Series(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `rowCount` instead
    ///
    pub const RowCount = rowCount;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#rowCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    pub fn rowCount(self: QHeightMapSurfaceDataProxy) i32 {
        return qtc.QSurfaceDataProxy_RowCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `columnCount` instead
    ///
    pub const ColumnCount = columnCount;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#columnCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    pub fn columnCount(self: QHeightMapSurfaceDataProxy) i32 {
        return qtc.QSurfaceDataProxy_ColumnCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `array` instead
    ///
    pub const Array = array;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#array)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn array(self: QHeightMapSurfaceDataProxy, allocator: std.mem.Allocator) [][]QSurfaceDataItem {
        const _arr: qtc.libqt_list = qtc.QSurfaceDataProxy_Array(@ptrCast(self.ptr));
        const _list: [*]qtc.libqt_list = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_free(_list[i].data);
            qtc.libqt_free(_list);
        }
        const _ret = allocator.alloc([]QSurfaceDataItem, _arr.len) catch @panic("QHeightMapSurfaceDataProxy.array: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val: [*]QtC.QSurfaceDataItem = @ptrCast(@alignCast(_list[i].data));
            _ret[i] = allocator.alloc(QSurfaceDataItem, _list[i].len) catch @panic("QHeightMapSurfaceDataProxy.array: Memory allocation failed");
            for (0.._list[i].len) |j|
                _ret[i][j] = .{ .ptr = _data_val[j] };
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `itemAt` instead
    ///
    pub const ItemAt = itemAt;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#itemAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` rowIndex: i32 `
    ///
    /// ` columnIndex: i32 `
    ///
    pub fn itemAt(self: QHeightMapSurfaceDataProxy, rowIndex: i32, columnIndex: i32) QSurfaceDataItem {
        return .{ .ptr = qtc.QSurfaceDataProxy_ItemAt(@ptrCast(self.ptr), @bitCast(rowIndex), @bitCast(columnIndex)) };
    }

    /// ### DEPRECATED: Use `itemAt2` instead
    ///
    pub const ItemAt2 = itemAt2;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#itemAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` position: QPoint `
    ///
    pub fn itemAt2(self: QHeightMapSurfaceDataProxy, position: anytype) QSurfaceDataItem {
        comptime _ = @TypeOf(position)._is_QPoint;
        return .{ .ptr = qtc.QSurfaceDataProxy_ItemAt2(@ptrCast(self.ptr), @ptrCast(position.ptr)) };
    }

    /// ### DEPRECATED: Use `resetArray` instead
    ///
    pub const ResetArray = resetArray;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#resetArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` newArray: [][]QSurfaceDataItem `
    ///
    pub fn resetArray(self: QHeightMapSurfaceDataProxy, allocator: std.mem.Allocator, newArray: [][]QSurfaceDataItem) void {
        const newArray_arr = allocator.alloc(qtc.libqt_list, newArray.len) catch @panic("QHeightMapSurfaceDataProxy.resetArray: Memory allocation failed");
        defer allocator.free(newArray_arr);
        for (newArray, 0..) |newArray_inner, i|
            newArray_arr[i] = qtc.libqt_list{
                .len = newArray_inner.len,
                .data = @ptrCast(newArray_inner.ptr),
            };
        const newArray_list = qtc.libqt_list{
            .len = newArray.len,
            .data = @ptrCast(newArray_arr.ptr),
        };
        qtc.QSurfaceDataProxy_ResetArray(@ptrCast(self.ptr), newArray_list);
    }

    /// ### DEPRECATED: Use `setRow` instead
    ///
    pub const SetRow = setRow;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#setRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` rowIndex: i32 `
    ///
    /// ` row: []QSurfaceDataItem `
    ///
    pub fn setRow(self: QHeightMapSurfaceDataProxy, rowIndex: i32, row: []QSurfaceDataItem) void {
        const row_list = qtc.libqt_list{
            .len = row.len,
            .data = @ptrCast(row.ptr),
        };
        qtc.QSurfaceDataProxy_SetRow(@ptrCast(self.ptr), @bitCast(rowIndex), row_list);
    }

    /// ### DEPRECATED: Use `setRows` instead
    ///
    pub const SetRows = setRows;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#setRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` rowIndex: i32 `
    ///
    /// ` rows: [][]QSurfaceDataItem `
    ///
    pub fn setRows(self: QHeightMapSurfaceDataProxy, allocator: std.mem.Allocator, rowIndex: i32, rows: [][]QSurfaceDataItem) void {
        const rows_arr = allocator.alloc(qtc.libqt_list, rows.len) catch @panic("QHeightMapSurfaceDataProxy.setRows: Memory allocation failed");
        defer allocator.free(rows_arr);
        for (rows, 0..) |rows_inner, i|
            rows_arr[i] = qtc.libqt_list{
                .len = rows_inner.len,
                .data = @ptrCast(rows_inner.ptr),
            };
        const rows_list = qtc.libqt_list{
            .len = rows.len,
            .data = @ptrCast(rows_arr.ptr),
        };
        qtc.QSurfaceDataProxy_SetRows(@ptrCast(self.ptr), @bitCast(rowIndex), rows_list);
    }

    /// ### DEPRECATED: Use `setItem` instead
    ///
    pub const SetItem = setItem;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#setItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` rowIndex: i32 `
    ///
    /// ` columnIndex: i32 `
    ///
    /// ` item: QSurfaceDataItem `
    ///
    pub fn setItem(self: QHeightMapSurfaceDataProxy, rowIndex: i32, columnIndex: i32, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QSurfaceDataItem;
        qtc.QSurfaceDataProxy_SetItem(@ptrCast(self.ptr), @bitCast(rowIndex), @bitCast(columnIndex), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `setItem2` instead
    ///
    pub const SetItem2 = setItem2;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#setItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` position: QPoint `
    ///
    /// ` item: QSurfaceDataItem `
    ///
    pub fn setItem2(self: QHeightMapSurfaceDataProxy, position: anytype, item: anytype) void {
        comptime _ = @TypeOf(position)._is_QPoint;
        comptime _ = @TypeOf(item)._is_QSurfaceDataItem;
        qtc.QSurfaceDataProxy_SetItem2(@ptrCast(self.ptr), @ptrCast(position.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `addRow` instead
    ///
    pub const AddRow = addRow;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#addRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` row: []QSurfaceDataItem `
    ///
    pub fn addRow(self: QHeightMapSurfaceDataProxy, row: []QSurfaceDataItem) i32 {
        const row_list = qtc.libqt_list{
            .len = row.len,
            .data = @ptrCast(row.ptr),
        };
        return qtc.QSurfaceDataProxy_AddRow(@ptrCast(self.ptr), row_list);
    }

    /// ### DEPRECATED: Use `addRows` instead
    ///
    pub const AddRows = addRows;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#addRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` rows: [][]QSurfaceDataItem `
    ///
    pub fn addRows(self: QHeightMapSurfaceDataProxy, allocator: std.mem.Allocator, rows: [][]QSurfaceDataItem) i32 {
        const rows_arr = allocator.alloc(qtc.libqt_list, rows.len) catch @panic("QHeightMapSurfaceDataProxy.addRows: Memory allocation failed");
        defer allocator.free(rows_arr);
        for (rows, 0..) |rows_inner, i|
            rows_arr[i] = qtc.libqt_list{
                .len = rows_inner.len,
                .data = @ptrCast(rows_inner.ptr),
            };
        const rows_list = qtc.libqt_list{
            .len = rows.len,
            .data = @ptrCast(rows_arr.ptr),
        };
        return qtc.QSurfaceDataProxy_AddRows(@ptrCast(self.ptr), rows_list);
    }

    /// ### DEPRECATED: Use `insertRow` instead
    ///
    pub const InsertRow = insertRow;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#insertRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` rowIndex: i32 `
    ///
    /// ` row: []QSurfaceDataItem `
    ///
    pub fn insertRow(self: QHeightMapSurfaceDataProxy, rowIndex: i32, row: []QSurfaceDataItem) void {
        const row_list = qtc.libqt_list{
            .len = row.len,
            .data = @ptrCast(row.ptr),
        };
        qtc.QSurfaceDataProxy_InsertRow(@ptrCast(self.ptr), @bitCast(rowIndex), row_list);
    }

    /// ### DEPRECATED: Use `insertRows` instead
    ///
    pub const InsertRows = insertRows;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#insertRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` rowIndex: i32 `
    ///
    /// ` rows: [][]QSurfaceDataItem `
    ///
    pub fn insertRows(self: QHeightMapSurfaceDataProxy, allocator: std.mem.Allocator, rowIndex: i32, rows: [][]QSurfaceDataItem) void {
        const rows_arr = allocator.alloc(qtc.libqt_list, rows.len) catch @panic("QHeightMapSurfaceDataProxy.insertRows: Memory allocation failed");
        defer allocator.free(rows_arr);
        for (rows, 0..) |rows_inner, i|
            rows_arr[i] = qtc.libqt_list{
                .len = rows_inner.len,
                .data = @ptrCast(rows_inner.ptr),
            };
        const rows_list = qtc.libqt_list{
            .len = rows.len,
            .data = @ptrCast(rows_arr.ptr),
        };
        qtc.QSurfaceDataProxy_InsertRows(@ptrCast(self.ptr), @bitCast(rowIndex), rows_list);
    }

    /// ### DEPRECATED: Use `removeRows` instead
    ///
    pub const RemoveRows = removeRows;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#removeRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` rowIndex: i32 `
    ///
    /// ` removeCount: i32 `
    ///
    pub fn removeRows(self: QHeightMapSurfaceDataProxy, rowIndex: i32, removeCount: i32) void {
        qtc.QSurfaceDataProxy_RemoveRows(@ptrCast(self.ptr), @bitCast(rowIndex), @bitCast(removeCount));
    }

    /// ### DEPRECATED: Use `arrayReset` instead
    ///
    pub const ArrayReset = arrayReset;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#arrayReset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    pub fn arrayReset(self: QHeightMapSurfaceDataProxy) void {
        qtc.QSurfaceDataProxy_ArrayReset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onArrayReset` instead
    ///
    pub const OnArrayReset = onArrayReset;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#arrayReset)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` callback: *const fn (self: QHeightMapSurfaceDataProxy) callconv(.c) void `
    ///
    pub fn onArrayReset(self: QHeightMapSurfaceDataProxy, callback: *const fn (QHeightMapSurfaceDataProxy) callconv(.c) void) void {
        qtc.QSurfaceDataProxy_Connect_ArrayReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rowsAdded` instead
    ///
    pub const RowsAdded = rowsAdded;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#rowsAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` startIndex: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn rowsAdded(self: QHeightMapSurfaceDataProxy, startIndex: i32, count: i32) void {
        qtc.QSurfaceDataProxy_RowsAdded(@ptrCast(self.ptr), @bitCast(startIndex), @bitCast(count));
    }

    /// ### DEPRECATED: Use `onRowsAdded` instead
    ///
    pub const OnRowsAdded = onRowsAdded;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#rowsAdded)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` callback: *const fn (self: QHeightMapSurfaceDataProxy, startIndex: i32, count: i32) callconv(.c) void `
    ///
    pub fn onRowsAdded(self: QHeightMapSurfaceDataProxy, callback: *const fn (QHeightMapSurfaceDataProxy, i32, i32) callconv(.c) void) void {
        qtc.QSurfaceDataProxy_Connect_RowsAdded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rowsChanged` instead
    ///
    pub const RowsChanged = rowsChanged;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#rowsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` startIndex: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn rowsChanged(self: QHeightMapSurfaceDataProxy, startIndex: i32, count: i32) void {
        qtc.QSurfaceDataProxy_RowsChanged(@ptrCast(self.ptr), @bitCast(startIndex), @bitCast(count));
    }

    /// ### DEPRECATED: Use `onRowsChanged` instead
    ///
    pub const OnRowsChanged = onRowsChanged;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#rowsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` callback: *const fn (self: QHeightMapSurfaceDataProxy, startIndex: i32, count: i32) callconv(.c) void `
    ///
    pub fn onRowsChanged(self: QHeightMapSurfaceDataProxy, callback: *const fn (QHeightMapSurfaceDataProxy, i32, i32) callconv(.c) void) void {
        qtc.QSurfaceDataProxy_Connect_RowsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rowsRemoved` instead
    ///
    pub const RowsRemoved = rowsRemoved;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#rowsRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` startIndex: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn rowsRemoved(self: QHeightMapSurfaceDataProxy, startIndex: i32, count: i32) void {
        qtc.QSurfaceDataProxy_RowsRemoved(@ptrCast(self.ptr), @bitCast(startIndex), @bitCast(count));
    }

    /// ### DEPRECATED: Use `onRowsRemoved` instead
    ///
    pub const OnRowsRemoved = onRowsRemoved;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#rowsRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` callback: *const fn (self: QHeightMapSurfaceDataProxy, startIndex: i32, count: i32) callconv(.c) void `
    ///
    pub fn onRowsRemoved(self: QHeightMapSurfaceDataProxy, callback: *const fn (QHeightMapSurfaceDataProxy, i32, i32) callconv(.c) void) void {
        qtc.QSurfaceDataProxy_Connect_RowsRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rowsInserted` instead
    ///
    pub const RowsInserted = rowsInserted;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#rowsInserted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` startIndex: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn rowsInserted(self: QHeightMapSurfaceDataProxy, startIndex: i32, count: i32) void {
        qtc.QSurfaceDataProxy_RowsInserted(@ptrCast(self.ptr), @bitCast(startIndex), @bitCast(count));
    }

    /// ### DEPRECATED: Use `onRowsInserted` instead
    ///
    pub const OnRowsInserted = onRowsInserted;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#rowsInserted)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` callback: *const fn (self: QHeightMapSurfaceDataProxy, startIndex: i32, count: i32) callconv(.c) void `
    ///
    pub fn onRowsInserted(self: QHeightMapSurfaceDataProxy, callback: *const fn (QHeightMapSurfaceDataProxy, i32, i32) callconv(.c) void) void {
        qtc.QSurfaceDataProxy_Connect_RowsInserted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `itemChanged` instead
    ///
    pub const ItemChanged = itemChanged;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#itemChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` rowIndex: i32 `
    ///
    /// ` columnIndex: i32 `
    ///
    pub fn itemChanged(self: QHeightMapSurfaceDataProxy, rowIndex: i32, columnIndex: i32) void {
        qtc.QSurfaceDataProxy_ItemChanged(@ptrCast(self.ptr), @bitCast(rowIndex), @bitCast(columnIndex));
    }

    /// ### DEPRECATED: Use `onItemChanged` instead
    ///
    pub const OnItemChanged = onItemChanged;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#itemChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` callback: *const fn (self: QHeightMapSurfaceDataProxy, rowIndex: i32, columnIndex: i32) callconv(.c) void `
    ///
    pub fn onItemChanged(self: QHeightMapSurfaceDataProxy, callback: *const fn (QHeightMapSurfaceDataProxy, i32, i32) callconv(.c) void) void {
        qtc.QSurfaceDataProxy_Connect_ItemChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rowCountChanged` instead
    ///
    pub const RowCountChanged = rowCountChanged;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#rowCountChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` count: i32 `
    ///
    pub fn rowCountChanged(self: QHeightMapSurfaceDataProxy, count: i32) void {
        qtc.QSurfaceDataProxy_RowCountChanged(@ptrCast(self.ptr), @bitCast(count));
    }

    /// ### DEPRECATED: Use `onRowCountChanged` instead
    ///
    pub const OnRowCountChanged = onRowCountChanged;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#rowCountChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` callback: *const fn (self: QHeightMapSurfaceDataProxy, count: i32) callconv(.c) void `
    ///
    pub fn onRowCountChanged(self: QHeightMapSurfaceDataProxy, callback: *const fn (QHeightMapSurfaceDataProxy, i32) callconv(.c) void) void {
        qtc.QSurfaceDataProxy_Connect_RowCountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `columnCountChanged` instead
    ///
    pub const ColumnCountChanged = columnCountChanged;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#columnCountChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` count: i32 `
    ///
    pub fn columnCountChanged(self: QHeightMapSurfaceDataProxy, count: i32) void {
        qtc.QSurfaceDataProxy_ColumnCountChanged(@ptrCast(self.ptr), @bitCast(count));
    }

    /// ### DEPRECATED: Use `onColumnCountChanged` instead
    ///
    pub const OnColumnCountChanged = onColumnCountChanged;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#columnCountChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` callback: *const fn (self: QHeightMapSurfaceDataProxy, count: i32) callconv(.c) void `
    ///
    pub fn onColumnCountChanged(self: QHeightMapSurfaceDataProxy, callback: *const fn (QHeightMapSurfaceDataProxy, i32) callconv(.c) void) void {
        qtc.QSurfaceDataProxy_Connect_ColumnCountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `seriesChanged` instead
    ///
    pub const SeriesChanged = seriesChanged;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#seriesChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` _series: QSurface3DSeries `
    ///
    pub fn seriesChanged(self: QHeightMapSurfaceDataProxy, _series: anytype) void {
        comptime _ = @TypeOf(_series)._is_QSurface3DSeries;
        qtc.QSurfaceDataProxy_SeriesChanged(@ptrCast(self.ptr), @ptrCast(_series.ptr));
    }

    /// ### DEPRECATED: Use `onSeriesChanged` instead
    ///
    pub const OnSeriesChanged = onSeriesChanged;

    /// Inherited from QSurfaceDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#seriesChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` callback: *const fn (self: QHeightMapSurfaceDataProxy, series: QSurface3DSeries) callconv(.c) void `
    ///
    pub fn onSeriesChanged(self: QHeightMapSurfaceDataProxy, callback: *const fn (QHeightMapSurfaceDataProxy, QSurface3DSeries) callconv(.c) void) void {
        qtc.QSurfaceDataProxy_Connect_SeriesChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// Inherited from QAbstractDataProxy
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractdataproxy.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ## Returns:
    ///
    /// ` qabstractdataproxy_enums.DataType `
    ///
    pub fn type0(self: QHeightMapSurfaceDataProxy) i32 {
        return qtc.QAbstractDataProxy_Type(@ptrCast(self.ptr));
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QHeightMapSurfaceDataProxy, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QHeightMapSurfaceDataProxy.objectName: Memory allocation failed");
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QHeightMapSurfaceDataProxy, name: []const u8) void {
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    pub fn isWidgetType(self: QHeightMapSurfaceDataProxy) bool {
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    pub fn isWindowType(self: QHeightMapSurfaceDataProxy) bool {
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    pub fn isQuickItemType(self: QHeightMapSurfaceDataProxy) bool {
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    pub fn signalsBlocked(self: QHeightMapSurfaceDataProxy) bool {
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QHeightMapSurfaceDataProxy, b: bool) bool {
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    pub fn thread(self: QHeightMapSurfaceDataProxy) QThread {
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QHeightMapSurfaceDataProxy, _thread: anytype) bool {
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QHeightMapSurfaceDataProxy, interval: i32) i32 {
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QHeightMapSurfaceDataProxy, time: i64) i32 {
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QHeightMapSurfaceDataProxy, id: i32) void {
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QHeightMapSurfaceDataProxy, id: i32) void {
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QHeightMapSurfaceDataProxy, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QHeightMapSurfaceDataProxy.children: Memory allocation failed");
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QHeightMapSurfaceDataProxy, _parent: anytype) void {
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QHeightMapSurfaceDataProxy, filterObj: anytype) void {
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QHeightMapSurfaceDataProxy, obj: anytype) void {
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QHeightMapSurfaceDataProxy, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    pub fn disconnect3(self: QHeightMapSurfaceDataProxy) bool {
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QHeightMapSurfaceDataProxy, receiver: anytype) bool {
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    pub fn dumpObjectTree(self: QHeightMapSurfaceDataProxy) void {
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    pub fn dumpObjectInfo(self: QHeightMapSurfaceDataProxy) void {
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QHeightMapSurfaceDataProxy, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QHeightMapSurfaceDataProxy, name: [:0]const u8) QVariant {
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QHeightMapSurfaceDataProxy, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QHeightMapSurfaceDataProxy.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QHeightMapSurfaceDataProxy.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    pub fn bindingStorage(self: QHeightMapSurfaceDataProxy) QBindingStorage {
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    pub fn bindingStorage2(self: QHeightMapSurfaceDataProxy) QBindingStorage {
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    pub fn destroyed(self: QHeightMapSurfaceDataProxy) void {
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` callback: *const fn (self: QHeightMapSurfaceDataProxy) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QHeightMapSurfaceDataProxy, callback: *const fn (QHeightMapSurfaceDataProxy) callconv(.c) void) void {
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    pub fn parent(self: QHeightMapSurfaceDataProxy) QObject {
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QHeightMapSurfaceDataProxy, classname: [:0]const u8) bool {
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    pub fn deleteLater(self: QHeightMapSurfaceDataProxy) void {
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QHeightMapSurfaceDataProxy, interval: i32, timerType: i32) i32 {
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QHeightMapSurfaceDataProxy, time: i64, timerType: i32) i32 {
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QHeightMapSurfaceDataProxy, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QHeightMapSurfaceDataProxy, signal: [:0]const u8) bool {
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QHeightMapSurfaceDataProxy, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QHeightMapSurfaceDataProxy, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QHeightMapSurfaceDataProxy, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QHeightMapSurfaceDataProxy, param1: anytype) void {
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` callback: *const fn (self: QHeightMapSurfaceDataProxy, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QHeightMapSurfaceDataProxy, callback: *const fn (QHeightMapSurfaceDataProxy, QObject) callconv(.c) void) void {
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QHeightMapSurfaceDataProxy, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QHeightMapSurfaceDataProxy_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QHeightMapSurfaceDataProxy, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QHeightMapSurfaceDataProxy_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QHeightMapSurfaceDataProxy`
    ///
    /// ` callback: *const fn (self: QHeightMapSurfaceDataProxy, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QHeightMapSurfaceDataProxy, callback: *const fn (QHeightMapSurfaceDataProxy, QEvent) callconv(.c) bool) void {
        qtc.QHeightMapSurfaceDataProxy_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QHeightMapSurfaceDataProxy, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QHeightMapSurfaceDataProxy_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QHeightMapSurfaceDataProxy, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QHeightMapSurfaceDataProxy_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QHeightMapSurfaceDataProxy`
    ///
    /// ` callback: *const fn (self: QHeightMapSurfaceDataProxy, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QHeightMapSurfaceDataProxy, callback: *const fn (QHeightMapSurfaceDataProxy, QObject, QEvent) callconv(.c) bool) void {
        qtc.QHeightMapSurfaceDataProxy_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QHeightMapSurfaceDataProxy, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QHeightMapSurfaceDataProxy_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QHeightMapSurfaceDataProxy, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QHeightMapSurfaceDataProxy_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QHeightMapSurfaceDataProxy`
    ///
    /// ` callback: *const fn (self: QHeightMapSurfaceDataProxy, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QHeightMapSurfaceDataProxy, callback: *const fn (QHeightMapSurfaceDataProxy, QTimerEvent) callconv(.c) void) void {
        qtc.QHeightMapSurfaceDataProxy_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QHeightMapSurfaceDataProxy, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QHeightMapSurfaceDataProxy_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QHeightMapSurfaceDataProxy, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QHeightMapSurfaceDataProxy_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QHeightMapSurfaceDataProxy`
    ///
    /// ` callback: *const fn (self: QHeightMapSurfaceDataProxy, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QHeightMapSurfaceDataProxy, callback: *const fn (QHeightMapSurfaceDataProxy, QChildEvent) callconv(.c) void) void {
        qtc.QHeightMapSurfaceDataProxy_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QHeightMapSurfaceDataProxy, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QHeightMapSurfaceDataProxy_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QHeightMapSurfaceDataProxy, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QHeightMapSurfaceDataProxy_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QHeightMapSurfaceDataProxy`
    ///
    /// ` callback: *const fn (self: QHeightMapSurfaceDataProxy, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QHeightMapSurfaceDataProxy, callback: *const fn (QHeightMapSurfaceDataProxy, QEvent) callconv(.c) void) void {
        qtc.QHeightMapSurfaceDataProxy_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QHeightMapSurfaceDataProxy, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QHeightMapSurfaceDataProxy_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QHeightMapSurfaceDataProxy, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QHeightMapSurfaceDataProxy_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QHeightMapSurfaceDataProxy`
    ///
    /// ` callback: *const fn (self: QHeightMapSurfaceDataProxy, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QHeightMapSurfaceDataProxy, callback: *const fn (QHeightMapSurfaceDataProxy, QMetaMethod) callconv(.c) void) void {
        qtc.QHeightMapSurfaceDataProxy_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QHeightMapSurfaceDataProxy, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QHeightMapSurfaceDataProxy_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QHeightMapSurfaceDataProxy, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QHeightMapSurfaceDataProxy_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QHeightMapSurfaceDataProxy`
    ///
    /// ` callback: *const fn (self: QHeightMapSurfaceDataProxy, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QHeightMapSurfaceDataProxy, callback: *const fn (QHeightMapSurfaceDataProxy, QMetaMethod) callconv(.c) void) void {
        qtc.QHeightMapSurfaceDataProxy_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    pub fn sender(self: QHeightMapSurfaceDataProxy) QObject {
        return .{ .ptr = qtc.QHeightMapSurfaceDataProxy_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    pub fn senderSignalIndex(self: QHeightMapSurfaceDataProxy) i32 {
        return qtc.QHeightMapSurfaceDataProxy_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QHeightMapSurfaceDataProxy, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QHeightMapSurfaceDataProxy_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QHeightMapSurfaceDataProxy, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QHeightMapSurfaceDataProxy_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    /// ` callback: *const fn (self: QHeightMapSurfaceDataProxy, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QHeightMapSurfaceDataProxy, callback: *const fn (QHeightMapSurfaceDataProxy, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#dtor.QHeightMapSurfaceDataProxy)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QHeightMapSurfaceDataProxy `
    ///
    pub fn delete(self: QHeightMapSurfaceDataProxy) void {
        qtc.QHeightMapSurfaceDataProxy_Delete(@ptrCast(self.ptr));
    }
};
