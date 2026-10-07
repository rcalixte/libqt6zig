const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QColor = @import("libqt6").QColor;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QQmlParserStatus = @import("libqt6").QQmlParserStatus;
const QQuaternion = @import("libqt6").QQuaternion;
const QQuick3DObject = @import("libqt6").QQuick3DObject;
const QQuick3DObject__ItemChangeData = @import("libqt6").QQuick3DObject__ItemChangeData;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const QVector3D = @import("libqt6").QVector3D;
const QVector4D = @import("libqt6").QVector4D;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qquick3dobject_enums = @import("libqquick3dobject.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html)
pub const QQuick3DInstancing = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QQuick3DInstancing,

    pub const _is_QQuick3DInstancing = {};
    pub const _is_QQuick3DObject = {};
    pub const _is_QObject = {};
    pub const _is_QQmlParserStatus = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QQuick3DInstancing object in C++ memory
    ///
    pub fn new() QQuick3DInstancing {
        return .{ .ptr = qtc.QQuick3DInstancing_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QQuick3DInstancing object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QQuick3DObject `
    ///
    pub fn new2(_parent: anytype) QQuick3DInstancing {
        comptime _ = @TypeOf(_parent)._is_QQuick3DObject;
        return .{ .ptr = qtc.QQuick3DInstancing_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing `
    ///
    pub fn metaObject(self: QQuick3DInstancing) QMetaObject {
        return .{ .ptr = qtc.QQuick3DInstancing_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QQuick3DInstancing `
    ///
    /// ` callback: *const fn (self: QQuick3DInstancing) callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QQuick3DInstancing, callback: *const fn (QQuick3DInstancing) callconv(.c) QMetaObject) void {
        qtc.QQuick3DInstancing_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuick3DInstancing `
    ///
    pub fn superMetaObject(self: QQuick3DInstancing) QMetaObject {
        return .{ .ptr = qtc.QQuick3DInstancing_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QQuick3DInstancing, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QQuick3DInstancing_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuick3DInstancing `
    ///
    /// ` callback: *const fn (self: QQuick3DInstancing, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QQuick3DInstancing, callback: *const fn (QQuick3DInstancing, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QQuick3DInstancing_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QQuick3DInstancing, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QQuick3DInstancing_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QQuick3DInstancing, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QQuick3DInstancing_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuick3DInstancing `
    ///
    /// ` callback: *const fn (self: QQuick3DInstancing, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QQuick3DInstancing, callback: *const fn (QQuick3DInstancing, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QQuick3DInstancing_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QQuick3DInstancing, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QQuick3DInstancing_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        var _str = qtc.QQuick3DInstancing_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuick3DInstancing.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `instanceBuffer` instead
    ///
    pub const InstanceBuffer = instanceBuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html#instanceBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` instanceCount: *i32 `
    ///
    pub fn instanceBuffer(self: QQuick3DInstancing, allocator: std.mem.Allocator, instanceCount: *i32) []const u8 {
        var _str = qtc.QQuick3DInstancing_InstanceBuffer(@ptrCast(self.ptr), @ptrCast(instanceCount));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuick3DInstancing.instanceBuffer: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `instanceCountOverride` instead
    ///
    pub const InstanceCountOverride = instanceCountOverride;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html#instanceCountOverride)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing `
    ///
    pub fn instanceCountOverride(self: QQuick3DInstancing) i32 {
        return qtc.QQuick3DInstancing_InstanceCountOverride(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasTransparency` instead
    ///
    pub const HasTransparency = hasTransparency;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html#hasTransparency)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing `
    ///
    pub fn hasTransparency(self: QQuick3DInstancing) bool {
        return qtc.QQuick3DInstancing_HasTransparency(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `depthSortingEnabled` instead
    ///
    pub const DepthSortingEnabled = depthSortingEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html#depthSortingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing `
    ///
    pub fn depthSortingEnabled(self: QQuick3DInstancing) bool {
        return qtc.QQuick3DInstancing_DepthSortingEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `instancePosition` instead
    ///
    pub const InstancePosition = instancePosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html#instancePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing `
    ///
    /// ` index: i32 `
    ///
    pub fn instancePosition(self: QQuick3DInstancing, index: i32) QVector3D {
        return .{ .ptr = qtc.QQuick3DInstancing_InstancePosition(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `instanceScale` instead
    ///
    pub const InstanceScale = instanceScale;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html#instanceScale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing `
    ///
    /// ` index: i32 `
    ///
    pub fn instanceScale(self: QQuick3DInstancing, index: i32) QVector3D {
        return .{ .ptr = qtc.QQuick3DInstancing_InstanceScale(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `instanceRotation` instead
    ///
    pub const InstanceRotation = instanceRotation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html#instanceRotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing `
    ///
    /// ` index: i32 `
    ///
    pub fn instanceRotation(self: QQuick3DInstancing, index: i32) QQuaternion {
        return .{ .ptr = qtc.QQuick3DInstancing_InstanceRotation(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `instanceColor` instead
    ///
    pub const InstanceColor = instanceColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html#instanceColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing `
    ///
    /// ` index: i32 `
    ///
    pub fn instanceColor(self: QQuick3DInstancing, index: i32) QColor {
        return .{ .ptr = qtc.QQuick3DInstancing_InstanceColor(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `instanceCustomData` instead
    ///
    pub const InstanceCustomData = instanceCustomData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html#instanceCustomData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing `
    ///
    /// ` index: i32 `
    ///
    pub fn instanceCustomData(self: QQuick3DInstancing, index: i32) QVector4D {
        return .{ .ptr = qtc.QQuick3DInstancing_InstanceCustomData(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `setInstanceCountOverride` instead
    ///
    pub const SetInstanceCountOverride = setInstanceCountOverride;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html#setInstanceCountOverride)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing `
    ///
    /// ` _instanceCountOverride: i32 `
    ///
    pub fn setInstanceCountOverride(self: QQuick3DInstancing, _instanceCountOverride: i32) void {
        qtc.QQuick3DInstancing_SetInstanceCountOverride(@ptrCast(self.ptr), @bitCast(_instanceCountOverride));
    }

    /// ### DEPRECATED: Use `setHasTransparency` instead
    ///
    pub const SetHasTransparency = setHasTransparency;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html#setHasTransparency)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing `
    ///
    /// ` _hasTransparency: bool `
    ///
    pub fn setHasTransparency(self: QQuick3DInstancing, _hasTransparency: bool) void {
        qtc.QQuick3DInstancing_SetHasTransparency(@ptrCast(self.ptr), _hasTransparency);
    }

    /// ### DEPRECATED: Use `setDepthSortingEnabled` instead
    ///
    pub const SetDepthSortingEnabled = setDepthSortingEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html#setDepthSortingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing `
    ///
    /// ` enabled: bool `
    ///
    pub fn setDepthSortingEnabled(self: QQuick3DInstancing, enabled: bool) void {
        qtc.QQuick3DInstancing_SetDepthSortingEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `instanceTableChanged` instead
    ///
    pub const InstanceTableChanged = instanceTableChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html#instanceTableChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing `
    ///
    pub fn instanceTableChanged(self: QQuick3DInstancing) void {
        qtc.QQuick3DInstancing_InstanceTableChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onInstanceTableChanged` instead
    ///
    pub const OnInstanceTableChanged = onInstanceTableChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html#instanceTableChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuick3DInstancing `
    ///
    /// ` callback: *const fn (self: QQuick3DInstancing) callconv(.c) void `
    ///
    pub fn onInstanceTableChanged(self: QQuick3DInstancing, callback: *const fn (QQuick3DInstancing) callconv(.c) void) void {
        qtc.QQuick3DInstancing_Connect_InstanceTableChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `instanceNodeDirty` instead
    ///
    pub const InstanceNodeDirty = instanceNodeDirty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html#instanceNodeDirty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing `
    ///
    pub fn instanceNodeDirty(self: QQuick3DInstancing) void {
        qtc.QQuick3DInstancing_InstanceNodeDirty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onInstanceNodeDirty` instead
    ///
    pub const OnInstanceNodeDirty = onInstanceNodeDirty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html#instanceNodeDirty)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuick3DInstancing `
    ///
    /// ` callback: *const fn (self: QQuick3DInstancing) callconv(.c) void `
    ///
    pub fn onInstanceNodeDirty(self: QQuick3DInstancing, callback: *const fn (QQuick3DInstancing) callconv(.c) void) void {
        qtc.QQuick3DInstancing_Connect_InstanceNodeDirty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `instanceCountOverrideChanged` instead
    ///
    pub const InstanceCountOverrideChanged = instanceCountOverrideChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html#instanceCountOverrideChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing `
    ///
    pub fn instanceCountOverrideChanged(self: QQuick3DInstancing) void {
        qtc.QQuick3DInstancing_InstanceCountOverrideChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onInstanceCountOverrideChanged` instead
    ///
    pub const OnInstanceCountOverrideChanged = onInstanceCountOverrideChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html#instanceCountOverrideChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuick3DInstancing `
    ///
    /// ` callback: *const fn (self: QQuick3DInstancing) callconv(.c) void `
    ///
    pub fn onInstanceCountOverrideChanged(self: QQuick3DInstancing, callback: *const fn (QQuick3DInstancing) callconv(.c) void) void {
        qtc.QQuick3DInstancing_Connect_InstanceCountOverrideChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `hasTransparencyChanged` instead
    ///
    pub const HasTransparencyChanged = hasTransparencyChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html#hasTransparencyChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing `
    ///
    pub fn hasTransparencyChanged(self: QQuick3DInstancing) void {
        qtc.QQuick3DInstancing_HasTransparencyChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onHasTransparencyChanged` instead
    ///
    pub const OnHasTransparencyChanged = onHasTransparencyChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html#hasTransparencyChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuick3DInstancing `
    ///
    /// ` callback: *const fn (self: QQuick3DInstancing) callconv(.c) void `
    ///
    pub fn onHasTransparencyChanged(self: QQuick3DInstancing, callback: *const fn (QQuick3DInstancing) callconv(.c) void) void {
        qtc.QQuick3DInstancing_Connect_HasTransparencyChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `depthSortingEnabledChanged` instead
    ///
    pub const DepthSortingEnabledChanged = depthSortingEnabledChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html#depthSortingEnabledChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing `
    ///
    pub fn depthSortingEnabledChanged(self: QQuick3DInstancing) void {
        qtc.QQuick3DInstancing_DepthSortingEnabledChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDepthSortingEnabledChanged` instead
    ///
    pub const OnDepthSortingEnabledChanged = onDepthSortingEnabledChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html#depthSortingEnabledChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuick3DInstancing `
    ///
    /// ` callback: *const fn (self: QQuick3DInstancing) callconv(.c) void `
    ///
    pub fn onDepthSortingEnabledChanged(self: QQuick3DInstancing, callback: *const fn (QQuick3DInstancing) callconv(.c) void) void {
        qtc.QQuick3DInstancing_Connect_DepthSortingEnabledChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `getInstanceBuffer` instead
    ///
    pub const GetInstanceBuffer = getInstanceBuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html#getInstanceBuffer)
    ///
    /// This method must be implemented with `onGetInstanceBuffer` before it can be called.
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` instanceCount: *i32 `
    ///
    pub fn getInstanceBuffer(self: QQuick3DInstancing, allocator: std.mem.Allocator, instanceCount: *i32) []const u8 {
        var _str = qtc.QQuick3DInstancing_GetInstanceBuffer(@ptrCast(self.ptr), @ptrCast(instanceCount));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuick3DInstancing.getInstanceBuffer: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onGetInstanceBuffer` instead
    ///
    pub const OnGetInstanceBuffer = onGetInstanceBuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html#getInstanceBuffer)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuick3DInstancing `
    ///
    /// ` callback: *const fn (self: QQuick3DInstancing, instanceCount: *i32) callconv(.c) [*:0]const u8 `
    ///
    pub fn onGetInstanceBuffer(self: QQuick3DInstancing, callback: *const fn (QQuick3DInstancing, *i32) callconv(.c) [*:0]const u8) void {
        qtc.QQuick3DInstancing_OnGetInstanceBuffer(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `markDirty` instead
    ///
    pub const MarkDirty = markDirty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html#markDirty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing `
    ///
    pub fn markDirty(self: QQuick3DInstancing) void {
        qtc.QQuick3DInstancing_MarkDirty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `calculateTableEntry` instead
    ///
    pub const CalculateTableEntry = calculateTableEntry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html#calculateTableEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing `
    ///
    /// ` position: QVector3D `
    ///
    /// ` scale: QVector3D `
    ///
    /// ` eulerRotation: QVector3D `
    ///
    /// ` color: QColor `
    ///
    pub fn calculateTableEntry(self: QQuick3DInstancing, position: anytype, scale: anytype, eulerRotation: anytype, color: anytype) QQuick3DInstancing__InstanceTableEntry {
        comptime _ = @TypeOf(position)._is_QVector3D;
        comptime _ = @TypeOf(scale)._is_QVector3D;
        comptime _ = @TypeOf(eulerRotation)._is_QVector3D;
        comptime _ = @TypeOf(color)._is_QColor;
        return .{ .ptr = qtc.QQuick3DInstancing_CalculateTableEntry(@ptrCast(self.ptr), @ptrCast(position.ptr), @ptrCast(scale.ptr), @ptrCast(eulerRotation.ptr), @ptrCast(color.ptr)) };
    }

    /// ### DEPRECATED: Use `calculateTableEntryFromQuaternion` instead
    ///
    pub const CalculateTableEntryFromQuaternion = calculateTableEntryFromQuaternion;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html#calculateTableEntryFromQuaternion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing `
    ///
    /// ` position: QVector3D `
    ///
    /// ` scale: QVector3D `
    ///
    /// ` rotation: QQuaternion `
    ///
    /// ` color: QColor `
    ///
    pub fn calculateTableEntryFromQuaternion(self: QQuick3DInstancing, position: anytype, scale: anytype, rotation: anytype, color: anytype) QQuick3DInstancing__InstanceTableEntry {
        comptime _ = @TypeOf(position)._is_QVector3D;
        comptime _ = @TypeOf(scale)._is_QVector3D;
        comptime _ = @TypeOf(rotation)._is_QQuaternion;
        comptime _ = @TypeOf(color)._is_QColor;
        return .{ .ptr = qtc.QQuick3DInstancing_CalculateTableEntryFromQuaternion(@ptrCast(self.ptr), @ptrCast(position.ptr), @ptrCast(scale.ptr), @ptrCast(rotation.ptr), @ptrCast(color.ptr)) };
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
        var _str = qtc.QQuick3DInstancing_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuick3DInstancing.tr2: Memory allocation failed");
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
        var _str = qtc.QQuick3DInstancing_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuick3DInstancing.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `calculateTableEntry5` instead
    ///
    pub const CalculateTableEntry5 = calculateTableEntry5;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html#calculateTableEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing `
    ///
    /// ` position: QVector3D `
    ///
    /// ` scale: QVector3D `
    ///
    /// ` eulerRotation: QVector3D `
    ///
    /// ` color: QColor `
    ///
    /// ` customData: QVector4D `
    ///
    pub fn calculateTableEntry5(self: QQuick3DInstancing, position: anytype, scale: anytype, eulerRotation: anytype, color: anytype, customData: anytype) QQuick3DInstancing__InstanceTableEntry {
        comptime _ = @TypeOf(position)._is_QVector3D;
        comptime _ = @TypeOf(scale)._is_QVector3D;
        comptime _ = @TypeOf(eulerRotation)._is_QVector3D;
        comptime _ = @TypeOf(color)._is_QColor;
        comptime _ = @TypeOf(customData)._is_QVector4D;
        return .{ .ptr = qtc.QQuick3DInstancing_CalculateTableEntry5(@ptrCast(self.ptr), @ptrCast(position.ptr), @ptrCast(scale.ptr), @ptrCast(eulerRotation.ptr), @ptrCast(color.ptr), @ptrCast(customData.ptr)) };
    }

    /// ### DEPRECATED: Use `calculateTableEntryFromQuaternion5` instead
    ///
    pub const CalculateTableEntryFromQuaternion5 = calculateTableEntryFromQuaternion5;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html#calculateTableEntryFromQuaternion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing `
    ///
    /// ` position: QVector3D `
    ///
    /// ` scale: QVector3D `
    ///
    /// ` rotation: QQuaternion `
    ///
    /// ` color: QColor `
    ///
    /// ` customData: QVector4D `
    ///
    pub fn calculateTableEntryFromQuaternion5(self: QQuick3DInstancing, position: anytype, scale: anytype, rotation: anytype, color: anytype, customData: anytype) QQuick3DInstancing__InstanceTableEntry {
        comptime _ = @TypeOf(position)._is_QVector3D;
        comptime _ = @TypeOf(scale)._is_QVector3D;
        comptime _ = @TypeOf(rotation)._is_QQuaternion;
        comptime _ = @TypeOf(color)._is_QColor;
        comptime _ = @TypeOf(customData)._is_QVector4D;
        return .{ .ptr = qtc.QQuick3DInstancing_CalculateTableEntryFromQuaternion5(@ptrCast(self.ptr), @ptrCast(position.ptr), @ptrCast(scale.ptr), @ptrCast(rotation.ptr), @ptrCast(color.ptr), @ptrCast(customData.ptr)) };
    }

    /// Inherited from QQuick3DObject
    ///
    /// Upcasts to a QQmlParserStatus object
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing `
    ///
    pub fn asQQmlParserStatus(self: QQuick3DInstancing) QQmlParserStatus {
        return .{ .ptr = qtc.QQuick3DObject_AsQQmlParserStatus(@ptrCast(self.ptr)) };
    }

    /// Inherited from QQuick3DObject
    ///
    /// Downcasts to a QQuick3DInstancing object
    ///
    /// ## Parameter(s):
    ///
    /// ` _qqmlparserstatus: QQmlParserStatus `
    ///
    pub fn fromQQmlParserStatus(_qqmlparserstatus: anytype) QQuick3DInstancing {
        comptime _ = @TypeOf(_qqmlparserstatus)._is_QQmlParserStatus;
        return .{ .ptr = @ptrCast(qtc.QQuick3DObject_FromQQmlParserStatus(@ptrCast(_qqmlparserstatus.ptr))) };
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

    /// Inherited from QQuick3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#state)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn state(self: QQuick3DInstancing, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QQuick3DObject_State(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuick3DInstancing.state: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setState` instead
    ///
    pub const SetState = setState;

    /// Inherited from QQuick3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#setState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing `
    ///
    /// ` _state: []const u8 `
    ///
    pub fn setState(self: QQuick3DInstancing, _state: []const u8) void {
        const state_str = qtc.libqt_string{
            .len = _state.len,
            .data = _state.ptr,
        };
        qtc.QQuick3DObject_SetState(@ptrCast(self.ptr), state_str);
    }

    /// ### DEPRECATED: Use `childItems` instead
    ///
    pub const ChildItems = childItems;

    /// Inherited from QQuick3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#childItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn childItems(self: QQuick3DInstancing, allocator: std.mem.Allocator) []QQuick3DObject {
        const _arr: qtc.libqt_list = qtc.QQuick3DObject_ChildItems(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QQuick3DObject, _arr.len) catch @panic("QQuick3DInstancing.childItems: Memory allocation failed");
        const _data_val: [*]QtC.QQuick3DObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `parentItem` instead
    ///
    pub const ParentItem = parentItem;

    /// Inherited from QQuick3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#parentItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing `
    ///
    pub fn parentItem(self: QQuick3DInstancing) QQuick3DObject {
        return .{ .ptr = qtc.QQuick3DObject_ParentItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `update` instead
    ///
    pub const Update = update;

    /// Inherited from QQuick3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing `
    ///
    pub fn update(self: QQuick3DInstancing) void {
        qtc.QQuick3DObject_Update(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setParentItem` instead
    ///
    pub const SetParentItem = setParentItem;

    /// Inherited from QQuick3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#setParentItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing `
    ///
    /// ` _parentItem: QQuick3DObject `
    ///
    pub fn setParentItem(self: QQuick3DInstancing, _parentItem: anytype) void {
        comptime _ = @TypeOf(_parentItem)._is_QQuick3DObject;
        qtc.QQuick3DObject_SetParentItem(@ptrCast(self.ptr), @ptrCast(_parentItem.ptr));
    }

    /// ### DEPRECATED: Use `parentChanged` instead
    ///
    pub const ParentChanged = parentChanged;

    /// Inherited from QQuick3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#parentChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing `
    ///
    pub fn parentChanged(self: QQuick3DInstancing) void {
        qtc.QQuick3DObject_ParentChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onParentChanged` instead
    ///
    pub const OnParentChanged = onParentChanged;

    /// Inherited from QQuick3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#parentChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuick3DInstancing `
    ///
    /// ` callback: *const fn (self: QQuick3DInstancing) callconv(.c) void `
    ///
    pub fn onParentChanged(self: QQuick3DInstancing, callback: *const fn (QQuick3DInstancing) callconv(.c) void) void {
        qtc.QQuick3DObject_Connect_ParentChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `childrenChanged` instead
    ///
    pub const ChildrenChanged = childrenChanged;

    /// Inherited from QQuick3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#childrenChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing `
    ///
    pub fn childrenChanged(self: QQuick3DInstancing) void {
        qtc.QQuick3DObject_ChildrenChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onChildrenChanged` instead
    ///
    pub const OnChildrenChanged = onChildrenChanged;

    /// Inherited from QQuick3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#childrenChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuick3DInstancing `
    ///
    /// ` callback: *const fn (self: QQuick3DInstancing) callconv(.c) void `
    ///
    pub fn onChildrenChanged(self: QQuick3DInstancing, callback: *const fn (QQuick3DInstancing) callconv(.c) void) void {
        qtc.QQuick3DObject_Connect_ChildrenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `stateChanged` instead
    ///
    pub const StateChanged = stateChanged;

    /// Inherited from QQuick3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#stateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing `
    ///
    pub fn stateChanged(self: QQuick3DInstancing) void {
        qtc.QQuick3DObject_StateChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onStateChanged` instead
    ///
    pub const OnStateChanged = onStateChanged;

    /// Inherited from QQuick3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#stateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuick3DInstancing `
    ///
    /// ` callback: *const fn (self: QQuick3DInstancing) callconv(.c) void `
    ///
    pub fn onStateChanged(self: QQuick3DInstancing, callback: *const fn (QQuick3DInstancing) callconv(.c) void) void {
        qtc.QQuick3DObject_Connect_StateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuick3DInstancing `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QQuick3DInstancing, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuick3DInstancing.objectName: Memory allocation failed");
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
    /// ` self: QQuick3DInstancing `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QQuick3DInstancing, name: []const u8) void {
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
    /// ` self: QQuick3DInstancing `
    ///
    pub fn isWidgetType(self: QQuick3DInstancing) bool {
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
    /// ` self: QQuick3DInstancing `
    ///
    pub fn isWindowType(self: QQuick3DInstancing) bool {
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
    /// ` self: QQuick3DInstancing `
    ///
    pub fn isQuickItemType(self: QQuick3DInstancing) bool {
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
    /// ` self: QQuick3DInstancing `
    ///
    pub fn signalsBlocked(self: QQuick3DInstancing) bool {
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
    /// ` self: QQuick3DInstancing `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QQuick3DInstancing, b: bool) bool {
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
    /// ` self: QQuick3DInstancing `
    ///
    pub fn thread(self: QQuick3DInstancing) QThread {
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
    /// ` self: QQuick3DInstancing `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QQuick3DInstancing, _thread: anytype) bool {
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
    /// ` self: QQuick3DInstancing `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QQuick3DInstancing, interval: i32) i32 {
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
    /// ` self: QQuick3DInstancing `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QQuick3DInstancing, time: i64) i32 {
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
    /// ` self: QQuick3DInstancing `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QQuick3DInstancing, id: i32) void {
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
    /// ` self: QQuick3DInstancing `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QQuick3DInstancing, id: i32) void {
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
    /// ` self: QQuick3DInstancing `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QQuick3DInstancing, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QQuick3DInstancing.children: Memory allocation failed");
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
    /// ` self: QQuick3DInstancing `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QQuick3DInstancing, _parent: anytype) void {
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
    /// ` self: QQuick3DInstancing `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QQuick3DInstancing, filterObj: anytype) void {
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
    /// ` self: QQuick3DInstancing `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QQuick3DInstancing, obj: anytype) void {
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
    /// ` self: QQuick3DInstancing `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QQuick3DInstancing, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QQuick3DInstancing `
    ///
    pub fn disconnect3(self: QQuick3DInstancing) bool {
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
    /// ` self: QQuick3DInstancing `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QQuick3DInstancing, receiver: anytype) bool {
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
    /// ` self: QQuick3DInstancing `
    ///
    pub fn dumpObjectTree(self: QQuick3DInstancing) void {
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
    /// ` self: QQuick3DInstancing `
    ///
    pub fn dumpObjectInfo(self: QQuick3DInstancing) void {
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
    /// ` self: QQuick3DInstancing `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QQuick3DInstancing, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QQuick3DInstancing `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QQuick3DInstancing, name: [:0]const u8) QVariant {
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
    /// ` self: QQuick3DInstancing `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QQuick3DInstancing, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QQuick3DInstancing.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QQuick3DInstancing.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QQuick3DInstancing `
    ///
    pub fn bindingStorage(self: QQuick3DInstancing) QBindingStorage {
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
    /// ` self: QQuick3DInstancing `
    ///
    pub fn bindingStorage2(self: QQuick3DInstancing) QBindingStorage {
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
    /// ` self: QQuick3DInstancing `
    ///
    pub fn destroyed(self: QQuick3DInstancing) void {
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
    /// ` self: QQuick3DInstancing `
    ///
    /// ` callback: *const fn (self: QQuick3DInstancing) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QQuick3DInstancing, callback: *const fn (QQuick3DInstancing) callconv(.c) void) void {
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
    /// ` self: QQuick3DInstancing `
    ///
    pub fn parent(self: QQuick3DInstancing) QObject {
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
    /// ` self: QQuick3DInstancing `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QQuick3DInstancing, classname: [:0]const u8) bool {
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
    /// ` self: QQuick3DInstancing `
    ///
    pub fn deleteLater(self: QQuick3DInstancing) void {
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
    /// ` self: QQuick3DInstancing `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QQuick3DInstancing, interval: i32, timerType: i32) i32 {
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
    /// ` self: QQuick3DInstancing `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QQuick3DInstancing, time: i64, timerType: i32) i32 {
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
    /// ` self: QQuick3DInstancing `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QQuick3DInstancing, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QQuick3DInstancing `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QQuick3DInstancing, signal: [:0]const u8) bool {
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
    /// ` self: QQuick3DInstancing `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QQuick3DInstancing, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QQuick3DInstancing `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QQuick3DInstancing, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QQuick3DInstancing `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QQuick3DInstancing, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QQuick3DInstancing `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QQuick3DInstancing, param1: anytype) void {
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
    /// ` self: QQuick3DInstancing `
    ///
    /// ` callback: *const fn (self: QQuick3DInstancing, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QQuick3DInstancing, callback: *const fn (QQuick3DInstancing, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `markAllDirty` instead
    ///
    pub const MarkAllDirty = markAllDirty;

    /// Inherited from QQuick3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#markAllDirty)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing `
    ///
    pub fn markAllDirty(self: QQuick3DInstancing) void {
        qtc.QQuick3DInstancing_MarkAllDirty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superMarkAllDirty` instead
    ///
    pub const SuperMarkAllDirty = superMarkAllDirty;

    /// Inherited from QQuick3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#markAllDirty)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing `
    ///
    pub fn superMarkAllDirty(self: QQuick3DInstancing) void {
        qtc.QQuick3DInstancing_SuperMarkAllDirty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onMarkAllDirty` instead
    ///
    pub const OnMarkAllDirty = onMarkAllDirty;

    /// Inherited from QQuick3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#markAllDirty)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuick3DInstancing`
    ///
    /// ` callback: *const fn (self: QQuick3DInstancing) callconv(.c) void `
    ///
    pub fn onMarkAllDirty(self: QQuick3DInstancing, callback: *const fn (QQuick3DInstancing) callconv(.c) void) void {
        qtc.QQuick3DInstancing_OnMarkAllDirty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `itemChange` instead
    ///
    pub const ItemChange = itemChange;

    /// Inherited from QQuick3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#itemChange)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing `
    ///
    /// ` param1: qquick3dobject_enums.ItemChange `
    ///
    /// ` param2: QQuick3DObject__ItemChangeData `
    ///
    pub fn itemChange(self: QQuick3DInstancing, param1: i32, param2: anytype) void {
        comptime _ = @TypeOf(param2)._is_QQuick3DObject__ItemChangeData;
        qtc.QQuick3DInstancing_ItemChange(@ptrCast(self.ptr), @bitCast(param1), @ptrCast(param2.ptr));
    }

    /// ### DEPRECATED: Use `superItemChange` instead
    ///
    pub const SuperItemChange = superItemChange;

    /// Inherited from QQuick3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#itemChange)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing `
    ///
    /// ` param1: qquick3dobject_enums.ItemChange `
    ///
    /// ` param2: QQuick3DObject__ItemChangeData `
    ///
    pub fn superItemChange(self: QQuick3DInstancing, param1: i32, param2: anytype) void {
        comptime _ = @TypeOf(param2)._is_QQuick3DObject__ItemChangeData;
        qtc.QQuick3DInstancing_SuperItemChange(@ptrCast(self.ptr), @bitCast(param1), @ptrCast(param2.ptr));
    }

    /// ### DEPRECATED: Use `onItemChange` instead
    ///
    pub const OnItemChange = onItemChange;

    /// Inherited from QQuick3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#itemChange)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuick3DInstancing`
    ///
    /// ` callback: *const fn (self: QQuick3DInstancing, param1: qquick3dobject_enums.ItemChange, param2: QQuick3DObject__ItemChangeData) callconv(.c) void `
    ///
    pub fn onItemChange(self: QQuick3DInstancing, callback: *const fn (QQuick3DInstancing, i32, QQuick3DObject__ItemChangeData) callconv(.c) void) void {
        qtc.QQuick3DInstancing_OnItemChange(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `classBegin` instead
    ///
    pub const ClassBegin = classBegin;

    /// Inherited from QQuick3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#classBegin)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing `
    ///
    pub fn classBegin(self: QQuick3DInstancing) void {
        qtc.QQuick3DInstancing_ClassBegin(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superClassBegin` instead
    ///
    pub const SuperClassBegin = superClassBegin;

    /// Inherited from QQuick3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#classBegin)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing `
    ///
    pub fn superClassBegin(self: QQuick3DInstancing) void {
        qtc.QQuick3DInstancing_SuperClassBegin(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onClassBegin` instead
    ///
    pub const OnClassBegin = onClassBegin;

    /// Inherited from QQuick3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#classBegin)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuick3DInstancing`
    ///
    /// ` callback: *const fn (self: QQuick3DInstancing) callconv(.c) void `
    ///
    pub fn onClassBegin(self: QQuick3DInstancing, callback: *const fn (QQuick3DInstancing) callconv(.c) void) void {
        qtc.QQuick3DInstancing_OnClassBegin(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `componentComplete` instead
    ///
    pub const ComponentComplete = componentComplete;

    /// Inherited from QQuick3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#componentComplete)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing `
    ///
    pub fn componentComplete(self: QQuick3DInstancing) void {
        qtc.QQuick3DInstancing_ComponentComplete(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superComponentComplete` instead
    ///
    pub const SuperComponentComplete = superComponentComplete;

    /// Inherited from QQuick3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#componentComplete)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing `
    ///
    pub fn superComponentComplete(self: QQuick3DInstancing) void {
        qtc.QQuick3DInstancing_SuperComponentComplete(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onComponentComplete` instead
    ///
    pub const OnComponentComplete = onComponentComplete;

    /// Inherited from QQuick3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#componentComplete)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuick3DInstancing`
    ///
    /// ` callback: *const fn (self: QQuick3DInstancing) callconv(.c) void `
    ///
    pub fn onComponentComplete(self: QQuick3DInstancing, callback: *const fn (QQuick3DInstancing) callconv(.c) void) void {
        qtc.QQuick3DInstancing_OnComponentComplete(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `preSync` instead
    ///
    pub const PreSync = preSync;

    /// Inherited from QQuick3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#preSync)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing `
    ///
    pub fn preSync(self: QQuick3DInstancing) void {
        qtc.QQuick3DInstancing_PreSync(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superPreSync` instead
    ///
    pub const SuperPreSync = superPreSync;

    /// Inherited from QQuick3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#preSync)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing `
    ///
    pub fn superPreSync(self: QQuick3DInstancing) void {
        qtc.QQuick3DInstancing_SuperPreSync(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onPreSync` instead
    ///
    pub const OnPreSync = onPreSync;

    /// Inherited from QQuick3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#preSync)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuick3DInstancing`
    ///
    /// ` callback: *const fn (self: QQuick3DInstancing) callconv(.c) void `
    ///
    pub fn onPreSync(self: QQuick3DInstancing, callback: *const fn (QQuick3DInstancing) callconv(.c) void) void {
        qtc.QQuick3DInstancing_OnPreSync(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuick3DInstancing `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QQuick3DInstancing, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QQuick3DInstancing_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuick3DInstancing `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QQuick3DInstancing, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QQuick3DInstancing_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuick3DInstancing`
    ///
    /// ` callback: *const fn (self: QQuick3DInstancing, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QQuick3DInstancing, callback: *const fn (QQuick3DInstancing, QEvent) callconv(.c) bool) void {
        qtc.QQuick3DInstancing_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuick3DInstancing `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QQuick3DInstancing, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QQuick3DInstancing_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuick3DInstancing `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QQuick3DInstancing, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QQuick3DInstancing_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuick3DInstancing`
    ///
    /// ` callback: *const fn (self: QQuick3DInstancing, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QQuick3DInstancing, callback: *const fn (QQuick3DInstancing, QObject, QEvent) callconv(.c) bool) void {
        qtc.QQuick3DInstancing_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuick3DInstancing `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QQuick3DInstancing, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QQuick3DInstancing_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuick3DInstancing `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QQuick3DInstancing, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QQuick3DInstancing_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuick3DInstancing`
    ///
    /// ` callback: *const fn (self: QQuick3DInstancing, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QQuick3DInstancing, callback: *const fn (QQuick3DInstancing, QTimerEvent) callconv(.c) void) void {
        qtc.QQuick3DInstancing_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuick3DInstancing `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QQuick3DInstancing, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QQuick3DInstancing_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuick3DInstancing `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QQuick3DInstancing, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QQuick3DInstancing_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuick3DInstancing`
    ///
    /// ` callback: *const fn (self: QQuick3DInstancing, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QQuick3DInstancing, callback: *const fn (QQuick3DInstancing, QChildEvent) callconv(.c) void) void {
        qtc.QQuick3DInstancing_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuick3DInstancing `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QQuick3DInstancing, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QQuick3DInstancing_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuick3DInstancing `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QQuick3DInstancing, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QQuick3DInstancing_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuick3DInstancing`
    ///
    /// ` callback: *const fn (self: QQuick3DInstancing, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QQuick3DInstancing, callback: *const fn (QQuick3DInstancing, QEvent) callconv(.c) void) void {
        qtc.QQuick3DInstancing_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuick3DInstancing `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QQuick3DInstancing, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QQuick3DInstancing_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuick3DInstancing `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QQuick3DInstancing, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QQuick3DInstancing_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuick3DInstancing`
    ///
    /// ` callback: *const fn (self: QQuick3DInstancing, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QQuick3DInstancing, callback: *const fn (QQuick3DInstancing, QMetaMethod) callconv(.c) void) void {
        qtc.QQuick3DInstancing_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuick3DInstancing `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QQuick3DInstancing, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QQuick3DInstancing_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuick3DInstancing `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QQuick3DInstancing, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QQuick3DInstancing_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuick3DInstancing`
    ///
    /// ` callback: *const fn (self: QQuick3DInstancing, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QQuick3DInstancing, callback: *const fn (QQuick3DInstancing, QMetaMethod) callconv(.c) void) void {
        qtc.QQuick3DInstancing_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isComponentComplete` instead
    ///
    pub const IsComponentComplete = isComponentComplete;

    /// Inherited from QQuick3DObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#isComponentComplete)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing `
    ///
    pub fn isComponentComplete(self: QQuick3DInstancing) bool {
        return qtc.QQuick3DInstancing_IsComponentComplete(@ptrCast(self.ptr));
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
    /// ` self: QQuick3DInstancing `
    ///
    pub fn sender(self: QQuick3DInstancing) QObject {
        return .{ .ptr = qtc.QQuick3DInstancing_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QQuick3DInstancing `
    ///
    pub fn senderSignalIndex(self: QQuick3DInstancing) i32 {
        return qtc.QQuick3DInstancing_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QQuick3DInstancing `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QQuick3DInstancing, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QQuick3DInstancing_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QQuick3DInstancing `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QQuick3DInstancing, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QQuick3DInstancing_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuick3DInstancing `
    ///
    /// ` callback: *const fn (self: QQuick3DInstancing, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QQuick3DInstancing, callback: *const fn (QQuick3DInstancing, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing.html#dtor.QQuick3DInstancing)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QQuick3DInstancing `
    ///
    pub fn delete(self: QQuick3DInstancing) void {
        qtc.QQuick3DInstancing_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing-instancetableentry.html)
pub const QQuick3DInstancing__InstanceTableEntry = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing-instancetableentry.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QQuick3DInstancing__InstanceTableEntry,

    pub const _is_QQuick3DInstancing__InstanceTableEntry = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QQuick3DInstancing::InstanceTableEntry object in C++ memory
    ///
    pub fn new() QQuick3DInstancing__InstanceTableEntry {
        return .{ .ptr = qtc.QQuick3DInstancing__InstanceTableEntry_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QQuick3DInstancing::InstanceTableEntry object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QQuick3DInstancing__InstanceTableEntry `
    ///
    pub fn new2(other: anytype) QQuick3DInstancing__InstanceTableEntry {
        comptime _ = @TypeOf(other)._is_QQuick3DInstancing__InstanceTableEntry;
        return .{ .ptr = qtc.QQuick3DInstancing__InstanceTableEntry_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QQuick3DInstancing::InstanceTableEntry object and invalidate the source QQuick3DInstancing::InstanceTableEntry object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QQuick3DInstancing__InstanceTableEntry `
    ///
    pub fn new3(other: anytype) QQuick3DInstancing__InstanceTableEntry {
        comptime _ = @TypeOf(other)._is_QQuick3DInstancing__InstanceTableEntry;
        return .{ .ptr = qtc.QQuick3DInstancing__InstanceTableEntry_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuick3DInstancing__InstanceTableEntry `
    ///
    /// ` other: QQuick3DInstancing__InstanceTableEntry `
    ///
    pub fn copyAssign(self: QQuick3DInstancing__InstanceTableEntry, other: QQuick3DInstancing__InstanceTableEntry) void {
        qtc.QQuick3DInstancing__InstanceTableEntry_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuick3DInstancing__InstanceTableEntry `
    ///
    /// ` other: QQuick3DInstancing__InstanceTableEntry `
    ///
    pub fn moveAssign(self: QQuick3DInstancing__InstanceTableEntry, other: QQuick3DInstancing__InstanceTableEntry) void {
        qtc.QQuick3DInstancing__InstanceTableEntry_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `row0` instead
    ///
    pub const Row0 = row0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing-instancetableentry.html#row0-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing__InstanceTableEntry `
    ///
    pub fn row0(self: QQuick3DInstancing__InstanceTableEntry) QVector4D {
        return .{ .ptr = qtc.QQuick3DInstancing__InstanceTableEntry_Row0(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRow0` instead
    ///
    pub const SetRow0 = setRow0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing-instancetableentry.html#row0-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing__InstanceTableEntry `
    ///
    /// ` _row0: QVector4D `
    ///
    pub fn setRow0(self: QQuick3DInstancing__InstanceTableEntry, _row0: anytype) void {
        comptime _ = @TypeOf(_row0)._is_QVector4D;
        qtc.QQuick3DInstancing__InstanceTableEntry_SetRow0(@ptrCast(self.ptr), @ptrCast(_row0.ptr));
    }

    /// ### DEPRECATED: Use `row1` instead
    ///
    pub const Row1 = row1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing-instancetableentry.html#row1-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing__InstanceTableEntry `
    ///
    pub fn row1(self: QQuick3DInstancing__InstanceTableEntry) QVector4D {
        return .{ .ptr = qtc.QQuick3DInstancing__InstanceTableEntry_Row1(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRow1` instead
    ///
    pub const SetRow1 = setRow1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing-instancetableentry.html#row1-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing__InstanceTableEntry `
    ///
    /// ` _row1: QVector4D `
    ///
    pub fn setRow1(self: QQuick3DInstancing__InstanceTableEntry, _row1: anytype) void {
        comptime _ = @TypeOf(_row1)._is_QVector4D;
        qtc.QQuick3DInstancing__InstanceTableEntry_SetRow1(@ptrCast(self.ptr), @ptrCast(_row1.ptr));
    }

    /// ### DEPRECATED: Use `row2` instead
    ///
    pub const Row2 = row2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing-instancetableentry.html#row2-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing__InstanceTableEntry `
    ///
    pub fn row2(self: QQuick3DInstancing__InstanceTableEntry) QVector4D {
        return .{ .ptr = qtc.QQuick3DInstancing__InstanceTableEntry_Row2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRow2` instead
    ///
    pub const SetRow2 = setRow2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing-instancetableentry.html#row2-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing__InstanceTableEntry `
    ///
    /// ` _row2: QVector4D `
    ///
    pub fn setRow2(self: QQuick3DInstancing__InstanceTableEntry, _row2: anytype) void {
        comptime _ = @TypeOf(_row2)._is_QVector4D;
        qtc.QQuick3DInstancing__InstanceTableEntry_SetRow2(@ptrCast(self.ptr), @ptrCast(_row2.ptr));
    }

    /// ### DEPRECATED: Use `color` instead
    ///
    pub const Color = color;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing-instancetableentry.html#color-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing__InstanceTableEntry `
    ///
    pub fn color(self: QQuick3DInstancing__InstanceTableEntry) QVector4D {
        return .{ .ptr = qtc.QQuick3DInstancing__InstanceTableEntry_Color(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setColor` instead
    ///
    pub const SetColor = setColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing-instancetableentry.html#color-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing__InstanceTableEntry `
    ///
    /// ` _color: QVector4D `
    ///
    pub fn setColor(self: QQuick3DInstancing__InstanceTableEntry, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QVector4D;
        qtc.QQuick3DInstancing__InstanceTableEntry_SetColor(@ptrCast(self.ptr), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `instanceData` instead
    ///
    pub const InstanceData = instanceData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing-instancetableentry.html#instanceData-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing__InstanceTableEntry `
    ///
    pub fn instanceData(self: QQuick3DInstancing__InstanceTableEntry) QVector4D {
        return .{ .ptr = qtc.QQuick3DInstancing__InstanceTableEntry_InstanceData(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setInstanceData` instead
    ///
    pub const SetInstanceData = setInstanceData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing-instancetableentry.html#instanceData-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing__InstanceTableEntry `
    ///
    /// ` _instanceData: QVector4D `
    ///
    pub fn setInstanceData(self: QQuick3DInstancing__InstanceTableEntry, _instanceData: anytype) void {
        comptime _ = @TypeOf(_instanceData)._is_QVector4D;
        qtc.QQuick3DInstancing__InstanceTableEntry_SetInstanceData(@ptrCast(self.ptr), @ptrCast(_instanceData.ptr));
    }

    /// ### DEPRECATED: Use `getPosition` instead
    ///
    pub const GetPosition = getPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing-instancetableentry.html#getPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing__InstanceTableEntry `
    ///
    pub fn getPosition(self: QQuick3DInstancing__InstanceTableEntry) QVector3D {
        return .{ .ptr = qtc.QQuick3DInstancing__InstanceTableEntry_GetPosition(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `getScale` instead
    ///
    pub const GetScale = getScale;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing-instancetableentry.html#getScale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing__InstanceTableEntry `
    ///
    pub fn getScale(self: QQuick3DInstancing__InstanceTableEntry) QVector3D {
        return .{ .ptr = qtc.QQuick3DInstancing__InstanceTableEntry_GetScale(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `getRotation` instead
    ///
    pub const GetRotation = getRotation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing-instancetableentry.html#getRotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing__InstanceTableEntry `
    ///
    pub fn getRotation(self: QQuick3DInstancing__InstanceTableEntry) QQuaternion {
        return .{ .ptr = qtc.QQuick3DInstancing__InstanceTableEntry_GetRotation(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `getColor` instead
    ///
    pub const GetColor = getColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dinstancing-instancetableentry.html#getColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DInstancing__InstanceTableEntry `
    ///
    pub fn getColor(self: QQuick3DInstancing__InstanceTableEntry) QColor {
        return .{ .ptr = qtc.QQuick3DInstancing__InstanceTableEntry_GetColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QQuick3DInstancing__InstanceTableEntry `
    ///
    pub fn delete(self: QQuick3DInstancing__InstanceTableEntry) void {
        qtc.QQuick3DInstancing__InstanceTableEntry_Delete(@ptrCast(self.ptr));
    }
};
