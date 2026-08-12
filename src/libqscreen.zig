const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPixmap = @import("libqt6").QPixmap;
const QPoint = @import("libqt6").QPoint;
const QRect = @import("libqt6").QRect;
const QSize = @import("libqt6").QSize;
const QSizeF = @import("libqt6").QSizeF;
const QThread = @import("libqt6").QThread;
const QTransform = @import("libqt6").QTransform;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html)
pub const QScreen = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QScreen,

    pub const _is_QScreen = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreen `
    ///
    pub fn metaObject(self: QScreen) QMetaObject {
        return .{ .ptr = qtc.QScreen_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QScreen `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QScreen, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QScreen_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QScreen `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QScreen, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QScreen_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QScreen.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreen `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: QScreen, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QScreen_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QScreen.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `manufacturer` instead
    ///
    pub const Manufacturer = manufacturer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#manufacturer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreen `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn manufacturer(self: QScreen, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QScreen_Manufacturer(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QScreen.manufacturer: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `model` instead
    ///
    pub const Model = model;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#model)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreen `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn model(self: QScreen, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QScreen_Model(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QScreen.model: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `serialNumber` instead
    ///
    pub const SerialNumber = serialNumber;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#serialNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreen `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn serialNumber(self: QScreen, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QScreen_SerialNumber(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QScreen.serialNumber: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `depth` instead
    ///
    pub const Depth = depth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreen `
    ///
    pub fn depth(self: QScreen) i32 {
        return qtc.QScreen_Depth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreen `
    ///
    pub fn size(self: QScreen) QSize {
        return .{ .ptr = qtc.QScreen_Size(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `geometry` instead
    ///
    pub const Geometry = geometry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreen `
    ///
    pub fn geometry(self: QScreen) QRect {
        return .{ .ptr = qtc.QScreen_Geometry(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `physicalSize` instead
    ///
    pub const PhysicalSize = physicalSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#physicalSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreen `
    ///
    pub fn physicalSize(self: QScreen) QSizeF {
        return .{ .ptr = qtc.QScreen_PhysicalSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `physicalDotsPerInchX` instead
    ///
    pub const PhysicalDotsPerInchX = physicalDotsPerInchX;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#physicalDotsPerInchX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreen `
    ///
    pub fn physicalDotsPerInchX(self: QScreen) f64 {
        return qtc.QScreen_PhysicalDotsPerInchX(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `physicalDotsPerInchY` instead
    ///
    pub const PhysicalDotsPerInchY = physicalDotsPerInchY;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#physicalDotsPerInchY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreen `
    ///
    pub fn physicalDotsPerInchY(self: QScreen) f64 {
        return qtc.QScreen_PhysicalDotsPerInchY(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `physicalDotsPerInch` instead
    ///
    pub const PhysicalDotsPerInch = physicalDotsPerInch;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#physicalDotsPerInch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreen `
    ///
    pub fn physicalDotsPerInch(self: QScreen) f64 {
        return qtc.QScreen_PhysicalDotsPerInch(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `logicalDotsPerInchX` instead
    ///
    pub const LogicalDotsPerInchX = logicalDotsPerInchX;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#logicalDotsPerInchX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreen `
    ///
    pub fn logicalDotsPerInchX(self: QScreen) f64 {
        return qtc.QScreen_LogicalDotsPerInchX(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `logicalDotsPerInchY` instead
    ///
    pub const LogicalDotsPerInchY = logicalDotsPerInchY;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#logicalDotsPerInchY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreen `
    ///
    pub fn logicalDotsPerInchY(self: QScreen) f64 {
        return qtc.QScreen_LogicalDotsPerInchY(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `logicalDotsPerInch` instead
    ///
    pub const LogicalDotsPerInch = logicalDotsPerInch;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#logicalDotsPerInch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreen `
    ///
    pub fn logicalDotsPerInch(self: QScreen) f64 {
        return qtc.QScreen_LogicalDotsPerInch(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `devicePixelRatio` instead
    ///
    pub const DevicePixelRatio = devicePixelRatio;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreen `
    ///
    pub fn devicePixelRatio(self: QScreen) f64 {
        return qtc.QScreen_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `availableSize` instead
    ///
    pub const AvailableSize = availableSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#availableSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreen `
    ///
    pub fn availableSize(self: QScreen) QSize {
        return .{ .ptr = qtc.QScreen_AvailableSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `availableGeometry` instead
    ///
    pub const AvailableGeometry = availableGeometry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#availableGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreen `
    ///
    pub fn availableGeometry(self: QScreen) QRect {
        return .{ .ptr = qtc.QScreen_AvailableGeometry(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `virtualSiblings` instead
    ///
    pub const VirtualSiblings = virtualSiblings;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#virtualSiblings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreen `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn virtualSiblings(self: QScreen, allocator: std.mem.Allocator) []QScreen {
        const _arr: qtc.libqt_list = qtc.QScreen_VirtualSiblings(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QScreen, _arr.len) catch @panic("QScreen.virtualSiblings: Memory allocation failed");
        const _data_val: [*]QtC.QScreen = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `virtualSiblingAt` instead
    ///
    pub const VirtualSiblingAt = virtualSiblingAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#virtualSiblingAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreen `
    ///
    /// ` point: QPoint `
    ///
    pub fn virtualSiblingAt(self: QScreen, point: anytype) QScreen {
        comptime _ = @TypeOf(point)._is_QPoint;
        return .{ .ptr = qtc.QScreen_VirtualSiblingAt(@ptrCast(self.ptr), @ptrCast(point.ptr)) };
    }

    /// ### DEPRECATED: Use `virtualSize` instead
    ///
    pub const VirtualSize = virtualSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#virtualSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreen `
    ///
    pub fn virtualSize(self: QScreen) QSize {
        return .{ .ptr = qtc.QScreen_VirtualSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `virtualGeometry` instead
    ///
    pub const VirtualGeometry = virtualGeometry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#virtualGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreen `
    ///
    pub fn virtualGeometry(self: QScreen) QRect {
        return .{ .ptr = qtc.QScreen_VirtualGeometry(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `availableVirtualSize` instead
    ///
    pub const AvailableVirtualSize = availableVirtualSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#availableVirtualSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreen `
    ///
    pub fn availableVirtualSize(self: QScreen) QSize {
        return .{ .ptr = qtc.QScreen_AvailableVirtualSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `availableVirtualGeometry` instead
    ///
    pub const AvailableVirtualGeometry = availableVirtualGeometry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#availableVirtualGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreen `
    ///
    pub fn availableVirtualGeometry(self: QScreen) QRect {
        return .{ .ptr = qtc.QScreen_AvailableVirtualGeometry(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `primaryOrientation` instead
    ///
    pub const PrimaryOrientation = primaryOrientation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#primaryOrientation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreen `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ScreenOrientation `
    ///
    pub fn primaryOrientation(self: QScreen) i32 {
        return qtc.QScreen_PrimaryOrientation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `orientation` instead
    ///
    pub const Orientation = orientation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#orientation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreen `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ScreenOrientation `
    ///
    pub fn orientation(self: QScreen) i32 {
        return qtc.QScreen_Orientation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `nativeOrientation` instead
    ///
    pub const NativeOrientation = nativeOrientation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#nativeOrientation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreen `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ScreenOrientation `
    ///
    pub fn nativeOrientation(self: QScreen) i32 {
        return qtc.QScreen_NativeOrientation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `angleBetween` instead
    ///
    pub const AngleBetween = angleBetween;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#angleBetween)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreen `
    ///
    /// ` a: qnamespace_enums.ScreenOrientation `
    ///
    /// ` b: qnamespace_enums.ScreenOrientation `
    ///
    pub fn angleBetween(self: QScreen, a: i32, b: i32) i32 {
        return qtc.QScreen_AngleBetween(@ptrCast(self.ptr), @bitCast(a), @bitCast(b));
    }

    /// ### DEPRECATED: Use `transformBetween` instead
    ///
    pub const TransformBetween = transformBetween;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#transformBetween)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreen `
    ///
    /// ` a: qnamespace_enums.ScreenOrientation `
    ///
    /// ` b: qnamespace_enums.ScreenOrientation `
    ///
    /// ` target: QRect `
    ///
    pub fn transformBetween(self: QScreen, a: i32, b: i32, target: anytype) QTransform {
        comptime _ = @TypeOf(target)._is_QRect;
        return .{ .ptr = qtc.QScreen_TransformBetween(@ptrCast(self.ptr), @bitCast(a), @bitCast(b), @ptrCast(target.ptr)) };
    }

    /// ### DEPRECATED: Use `mapBetween` instead
    ///
    pub const MapBetween = mapBetween;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#mapBetween)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreen `
    ///
    /// ` a: qnamespace_enums.ScreenOrientation `
    ///
    /// ` b: qnamespace_enums.ScreenOrientation `
    ///
    /// ` rect: QRect `
    ///
    pub fn mapBetween(self: QScreen, a: i32, b: i32, rect: anytype) QRect {
        comptime _ = @TypeOf(rect)._is_QRect;
        return .{ .ptr = qtc.QScreen_MapBetween(@ptrCast(self.ptr), @bitCast(a), @bitCast(b), @ptrCast(rect.ptr)) };
    }

    /// ### DEPRECATED: Use `isPortrait` instead
    ///
    pub const IsPortrait = isPortrait;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#isPortrait)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreen `
    ///
    /// ` _orientation: qnamespace_enums.ScreenOrientation `
    ///
    pub fn isPortrait(self: QScreen, _orientation: i32) bool {
        return qtc.QScreen_IsPortrait(@ptrCast(self.ptr), @bitCast(_orientation));
    }

    /// ### DEPRECATED: Use `isLandscape` instead
    ///
    pub const IsLandscape = isLandscape;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#isLandscape)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreen `
    ///
    /// ` _orientation: qnamespace_enums.ScreenOrientation `
    ///
    pub fn isLandscape(self: QScreen, _orientation: i32) bool {
        return qtc.QScreen_IsLandscape(@ptrCast(self.ptr), @bitCast(_orientation));
    }

    /// ### DEPRECATED: Use `grabWindow` instead
    ///
    pub const GrabWindow = grabWindow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#grabWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreen `
    ///
    pub fn grabWindow(self: QScreen) QPixmap {
        return .{ .ptr = qtc.QScreen_GrabWindow(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `refreshRate` instead
    ///
    pub const RefreshRate = refreshRate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#refreshRate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreen `
    ///
    pub fn refreshRate(self: QScreen) f64 {
        return qtc.QScreen_RefreshRate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `geometryChanged` instead
    ///
    pub const GeometryChanged = geometryChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#geometryChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreen `
    ///
    /// ` _geometry: QRect `
    ///
    pub fn geometryChanged(self: QScreen, _geometry: anytype) void {
        comptime _ = @TypeOf(_geometry)._is_QRect;
        qtc.QScreen_GeometryChanged(@ptrCast(self.ptr), @ptrCast(_geometry.ptr));
    }

    /// ### DEPRECATED: Use `onGeometryChanged` instead
    ///
    pub const OnGeometryChanged = onGeometryChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#geometryChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QScreen `
    ///
    /// ` callback: *const fn (self: QScreen, geometry: QRect) callconv(.c) void `
    ///
    pub fn onGeometryChanged(self: QScreen, callback: *const fn (QScreen, QRect) callconv(.c) void) void {
        qtc.QScreen_Connect_GeometryChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `availableGeometryChanged` instead
    ///
    pub const AvailableGeometryChanged = availableGeometryChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#availableGeometryChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreen `
    ///
    /// ` _geometry: QRect `
    ///
    pub fn availableGeometryChanged(self: QScreen, _geometry: anytype) void {
        comptime _ = @TypeOf(_geometry)._is_QRect;
        qtc.QScreen_AvailableGeometryChanged(@ptrCast(self.ptr), @ptrCast(_geometry.ptr));
    }

    /// ### DEPRECATED: Use `onAvailableGeometryChanged` instead
    ///
    pub const OnAvailableGeometryChanged = onAvailableGeometryChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#availableGeometryChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QScreen `
    ///
    /// ` callback: *const fn (self: QScreen, geometry: QRect) callconv(.c) void `
    ///
    pub fn onAvailableGeometryChanged(self: QScreen, callback: *const fn (QScreen, QRect) callconv(.c) void) void {
        qtc.QScreen_Connect_AvailableGeometryChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `physicalSizeChanged` instead
    ///
    pub const PhysicalSizeChanged = physicalSizeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#physicalSizeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreen `
    ///
    /// ` _size: QSizeF `
    ///
    pub fn physicalSizeChanged(self: QScreen, _size: anytype) void {
        comptime _ = @TypeOf(_size)._is_QSizeF;
        qtc.QScreen_PhysicalSizeChanged(@ptrCast(self.ptr), @ptrCast(_size.ptr));
    }

    /// ### DEPRECATED: Use `onPhysicalSizeChanged` instead
    ///
    pub const OnPhysicalSizeChanged = onPhysicalSizeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#physicalSizeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QScreen `
    ///
    /// ` callback: *const fn (self: QScreen, size: QSizeF) callconv(.c) void `
    ///
    pub fn onPhysicalSizeChanged(self: QScreen, callback: *const fn (QScreen, QSizeF) callconv(.c) void) void {
        qtc.QScreen_Connect_PhysicalSizeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `physicalDotsPerInchChanged` instead
    ///
    pub const PhysicalDotsPerInchChanged = physicalDotsPerInchChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#physicalDotsPerInchChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreen `
    ///
    /// ` dpi: f64 `
    ///
    pub fn physicalDotsPerInchChanged(self: QScreen, dpi: f64) void {
        qtc.QScreen_PhysicalDotsPerInchChanged(@ptrCast(self.ptr), @bitCast(dpi));
    }

    /// ### DEPRECATED: Use `onPhysicalDotsPerInchChanged` instead
    ///
    pub const OnPhysicalDotsPerInchChanged = onPhysicalDotsPerInchChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#physicalDotsPerInchChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QScreen `
    ///
    /// ` callback: *const fn (self: QScreen, dpi: f64) callconv(.c) void `
    ///
    pub fn onPhysicalDotsPerInchChanged(self: QScreen, callback: *const fn (QScreen, f64) callconv(.c) void) void {
        qtc.QScreen_Connect_PhysicalDotsPerInchChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `logicalDotsPerInchChanged` instead
    ///
    pub const LogicalDotsPerInchChanged = logicalDotsPerInchChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#logicalDotsPerInchChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreen `
    ///
    /// ` dpi: f64 `
    ///
    pub fn logicalDotsPerInchChanged(self: QScreen, dpi: f64) void {
        qtc.QScreen_LogicalDotsPerInchChanged(@ptrCast(self.ptr), @bitCast(dpi));
    }

    /// ### DEPRECATED: Use `onLogicalDotsPerInchChanged` instead
    ///
    pub const OnLogicalDotsPerInchChanged = onLogicalDotsPerInchChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#logicalDotsPerInchChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QScreen `
    ///
    /// ` callback: *const fn (self: QScreen, dpi: f64) callconv(.c) void `
    ///
    pub fn onLogicalDotsPerInchChanged(self: QScreen, callback: *const fn (QScreen, f64) callconv(.c) void) void {
        qtc.QScreen_Connect_LogicalDotsPerInchChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `virtualGeometryChanged` instead
    ///
    pub const VirtualGeometryChanged = virtualGeometryChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#virtualGeometryChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreen `
    ///
    /// ` rect: QRect `
    ///
    pub fn virtualGeometryChanged(self: QScreen, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QScreen_VirtualGeometryChanged(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### DEPRECATED: Use `onVirtualGeometryChanged` instead
    ///
    pub const OnVirtualGeometryChanged = onVirtualGeometryChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#virtualGeometryChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QScreen `
    ///
    /// ` callback: *const fn (self: QScreen, rect: QRect) callconv(.c) void `
    ///
    pub fn onVirtualGeometryChanged(self: QScreen, callback: *const fn (QScreen, QRect) callconv(.c) void) void {
        qtc.QScreen_Connect_VirtualGeometryChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `primaryOrientationChanged` instead
    ///
    pub const PrimaryOrientationChanged = primaryOrientationChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#primaryOrientationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreen `
    ///
    /// ` _orientation: qnamespace_enums.ScreenOrientation `
    ///
    pub fn primaryOrientationChanged(self: QScreen, _orientation: i32) void {
        qtc.QScreen_PrimaryOrientationChanged(@ptrCast(self.ptr), @bitCast(_orientation));
    }

    /// ### DEPRECATED: Use `onPrimaryOrientationChanged` instead
    ///
    pub const OnPrimaryOrientationChanged = onPrimaryOrientationChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#primaryOrientationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QScreen `
    ///
    /// ` callback: *const fn (self: QScreen, orientation: qnamespace_enums.ScreenOrientation) callconv(.c) void `
    ///
    pub fn onPrimaryOrientationChanged(self: QScreen, callback: *const fn (QScreen, i32) callconv(.c) void) void {
        qtc.QScreen_Connect_PrimaryOrientationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `orientationChanged` instead
    ///
    pub const OrientationChanged = orientationChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#orientationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreen `
    ///
    /// ` _orientation: qnamespace_enums.ScreenOrientation `
    ///
    pub fn orientationChanged(self: QScreen, _orientation: i32) void {
        qtc.QScreen_OrientationChanged(@ptrCast(self.ptr), @bitCast(_orientation));
    }

    /// ### DEPRECATED: Use `onOrientationChanged` instead
    ///
    pub const OnOrientationChanged = onOrientationChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#orientationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QScreen `
    ///
    /// ` callback: *const fn (self: QScreen, orientation: qnamespace_enums.ScreenOrientation) callconv(.c) void `
    ///
    pub fn onOrientationChanged(self: QScreen, callback: *const fn (QScreen, i32) callconv(.c) void) void {
        qtc.QScreen_Connect_OrientationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `refreshRateChanged` instead
    ///
    pub const RefreshRateChanged = refreshRateChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#refreshRateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreen `
    ///
    /// ` _refreshRate: f64 `
    ///
    pub fn refreshRateChanged(self: QScreen, _refreshRate: f64) void {
        qtc.QScreen_RefreshRateChanged(@ptrCast(self.ptr), @bitCast(_refreshRate));
    }

    /// ### DEPRECATED: Use `onRefreshRateChanged` instead
    ///
    pub const OnRefreshRateChanged = onRefreshRateChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#refreshRateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QScreen `
    ///
    /// ` callback: *const fn (self: QScreen, refreshRate: f64) callconv(.c) void `
    ///
    pub fn onRefreshRateChanged(self: QScreen, callback: *const fn (QScreen, f64) callconv(.c) void) void {
        qtc.QScreen_Connect_RefreshRateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QScreen.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QScreen.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `grabWindow1` instead
    ///
    pub const GrabWindow1 = grabWindow1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#grabWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreen `
    ///
    /// ` window: usize `
    ///
    pub fn grabWindow1(self: QScreen, window: usize) QPixmap {
        return .{ .ptr = qtc.QScreen_GrabWindow1(@ptrCast(self.ptr), @bitCast(window)) };
    }

    /// ### DEPRECATED: Use `grabWindow2` instead
    ///
    pub const GrabWindow2 = grabWindow2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#grabWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreen `
    ///
    /// ` window: usize `
    ///
    /// ` x: i32 `
    ///
    pub fn grabWindow2(self: QScreen, window: usize, x: i32) QPixmap {
        return .{ .ptr = qtc.QScreen_GrabWindow2(@ptrCast(self.ptr), @bitCast(window), @bitCast(x)) };
    }

    /// ### DEPRECATED: Use `grabWindow3` instead
    ///
    pub const GrabWindow3 = grabWindow3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#grabWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreen `
    ///
    /// ` window: usize `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn grabWindow3(self: QScreen, window: usize, x: i32, y: i32) QPixmap {
        return .{ .ptr = qtc.QScreen_GrabWindow3(@ptrCast(self.ptr), @bitCast(window), @bitCast(x), @bitCast(y)) };
    }

    /// ### DEPRECATED: Use `grabWindow4` instead
    ///
    pub const GrabWindow4 = grabWindow4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#grabWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreen `
    ///
    /// ` window: usize `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    pub fn grabWindow4(self: QScreen, window: usize, x: i32, y: i32, w: i32) QPixmap {
        return .{ .ptr = qtc.QScreen_GrabWindow4(@ptrCast(self.ptr), @bitCast(window), @bitCast(x), @bitCast(y), @bitCast(w)) };
    }

    /// ### DEPRECATED: Use `grabWindow5` instead
    ///
    pub const GrabWindow5 = grabWindow5;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#grabWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScreen `
    ///
    /// ` window: usize `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn grabWindow5(self: QScreen, window: usize, x: i32, y: i32, w: i32, h: i32) QPixmap {
        return .{ .ptr = qtc.QScreen_GrabWindow5(@ptrCast(self.ptr), @bitCast(window), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h)) };
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
    /// ` self: QScreen `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QScreen, _event: anytype) bool {
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
    /// ` self: QScreen `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QScreen, watched: anytype, _event: anytype) bool {
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
    /// ` self: QScreen `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QScreen, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QScreen.objectName: Memory allocation failed");
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
    /// ` self: QScreen `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setObjectName(self: QScreen, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
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
    /// ` self: QScreen `
    ///
    pub fn isWidgetType(self: QScreen) bool {
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
    /// ` self: QScreen `
    ///
    pub fn isWindowType(self: QScreen) bool {
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
    /// ` self: QScreen `
    ///
    pub fn isQuickItemType(self: QScreen) bool {
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
    /// ` self: QScreen `
    ///
    pub fn signalsBlocked(self: QScreen) bool {
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
    /// ` self: QScreen `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QScreen, b: bool) bool {
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
    /// ` self: QScreen `
    ///
    pub fn thread(self: QScreen) QThread {
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
    /// ` self: QScreen `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QScreen, _thread: anytype) bool {
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
    /// ` self: QScreen `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QScreen, interval: i32) i32 {
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
    /// ` self: QScreen `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QScreen, time: i64) i32 {
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
    /// ` self: QScreen `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QScreen, id: i32) void {
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
    /// ` self: QScreen `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QScreen, id: i32) void {
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
    /// ` self: QScreen `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QScreen, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QScreen.children: Memory allocation failed");
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
    /// ` self: QScreen `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QScreen, _parent: anytype) void {
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
    /// ` self: QScreen `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QScreen, filterObj: anytype) void {
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
    /// ` self: QScreen `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QScreen, obj: anytype) void {
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
    /// ` self: QScreen `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QScreen, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QScreen `
    ///
    pub fn disconnect3(self: QScreen) bool {
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
    /// ` self: QScreen `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QScreen, receiver: anytype) bool {
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
    /// ` self: QScreen `
    ///
    pub fn dumpObjectTree(self: QScreen) void {
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
    /// ` self: QScreen `
    ///
    pub fn dumpObjectInfo(self: QScreen) void {
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
    /// ` self: QScreen `
    ///
    /// ` _name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QScreen, _name: [:0]const u8, value: anytype) bool {
        const name_Cstring = _name.ptr;
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
    /// ` self: QScreen `
    ///
    /// ` _name: [:0]const u8 `
    ///
    pub fn property(self: QScreen, _name: [:0]const u8) QVariant {
        const name_Cstring = _name.ptr;
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
    /// ` self: QScreen `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QScreen, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QScreen.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QScreen.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QScreen `
    ///
    pub fn bindingStorage(self: QScreen) QBindingStorage {
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
    /// ` self: QScreen `
    ///
    pub fn bindingStorage2(self: QScreen) QBindingStorage {
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
    /// ` self: QScreen `
    ///
    pub fn destroyed(self: QScreen) void {
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
    /// ` self: QScreen `
    ///
    /// ` callback: *const fn (self: QScreen) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QScreen, callback: *const fn (QScreen) callconv(.c) void) void {
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
    /// ` self: QScreen `
    ///
    pub fn parent(self: QScreen) QObject {
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
    /// ` self: QScreen `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QScreen, classname: [:0]const u8) bool {
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
    /// ` self: QScreen `
    ///
    pub fn deleteLater(self: QScreen) void {
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
    /// ` self: QScreen `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QScreen, interval: i32, timerType: i32) i32 {
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
    /// ` self: QScreen `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QScreen, time: i64, timerType: i32) i32 {
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
    /// ` self: QScreen `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QScreen, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QScreen `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QScreen, signal: [:0]const u8) bool {
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
    /// ` self: QScreen `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QScreen, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QScreen `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QScreen, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QScreen `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QScreen, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QScreen `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QScreen, param1: anytype) void {
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
    /// ` self: QScreen `
    ///
    /// ` callback: *const fn (self: QScreen, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QScreen, callback: *const fn (QScreen, QObject) callconv(.c) void) void {
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
    /// ` self: QScreen `
    ///
    /// ` callback: *const fn (self: QScreen, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QScreen, callback: *const fn (QScreen, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscreen.html#dtor.QScreen)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QScreen `
    ///
    pub fn delete(self: QScreen) void {
        qtc.QScreen_Delete(@ptrCast(self.ptr));
    }
};
