const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QEventPoint = @import("libqt6").QEventPoint;
const QInputDevice = @import("libqt6").QInputDevice;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPointerEvent = @import("libqt6").QPointerEvent;
const QRect = @import("libqt6").QRect;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qinputdevice_enums = @import("libqinputdevice.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const qpointingdevice_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpointingdeviceuniqueid.html)
pub const QPointingDeviceUniqueId = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointingdeviceuniqueid.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPointingDeviceUniqueId,

    pub const _is_QPointingDeviceUniqueId = {};

    /// New constructs a new QPointingDeviceUniqueId object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPointingDeviceUniqueId `
    ///
    pub fn New(other: anytype) QPointingDeviceUniqueId {
        comptime _ = @TypeOf(other)._is_QPointingDeviceUniqueId;
        return .{ .ptr = qtc.QPointingDeviceUniqueId_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QPointingDeviceUniqueId object and invalidates the source QPointingDeviceUniqueId object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPointingDeviceUniqueId `
    ///
    pub fn New2(other: anytype) QPointingDeviceUniqueId {
        comptime _ = @TypeOf(other)._is_QPointingDeviceUniqueId;
        return .{ .ptr = qtc.QPointingDeviceUniqueId_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QPointingDeviceUniqueId object.
    ///
    pub fn New3() QPointingDeviceUniqueId {
        return .{ .ptr = qtc.QPointingDeviceUniqueId_new3() };
    }

    /// New4 constructs a new QPointingDeviceUniqueId object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QPointingDeviceUniqueId `
    ///
    pub fn New4(param1: anytype) QPointingDeviceUniqueId {
        comptime _ = @TypeOf(param1)._is_QPointingDeviceUniqueId;
        return .{ .ptr = qtc.QPointingDeviceUniqueId_new4(@ptrCast(param1.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QPointingDeviceUniqueId `
    ///
    /// ` other: QPointingDeviceUniqueId `
    ///
    pub fn CopyAssign(self: QPointingDeviceUniqueId, other: QPointingDeviceUniqueId) void {
        qtc.QPointingDeviceUniqueId_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QPointingDeviceUniqueId `
    ///
    /// ` other: QPointingDeviceUniqueId `
    ///
    pub fn MoveAssign(self: QPointingDeviceUniqueId, other: QPointingDeviceUniqueId) void {
        qtc.QPointingDeviceUniqueId_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointingdeviceuniqueid.html#fromNumericId)
    ///
    /// ## Parameter(s):
    ///
    /// ` id: i64 `
    ///
    pub fn FromNumericId(id: i64) QPointingDeviceUniqueId {
        return .{ .ptr = qtc.QPointingDeviceUniqueId_FromNumericId(@bitCast(id)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointingdeviceuniqueid.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointingDeviceUniqueId `
    ///
    pub fn IsValid(self: QPointingDeviceUniqueId) bool {
        return qtc.QPointingDeviceUniqueId_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointingdeviceuniqueid.html#numericId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointingDeviceUniqueId `
    ///
    pub fn NumericId(self: QPointingDeviceUniqueId) i64 {
        return qtc.QPointingDeviceUniqueId_NumericId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointingdeviceuniqueid.html#dtor.QPointingDeviceUniqueId)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QPointingDeviceUniqueId `
    ///
    pub fn Delete(self: QPointingDeviceUniqueId) void {
        qtc.QPointingDeviceUniqueId_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpointingdevice.html)
pub const QPointingDevice = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointingdevice.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPointingDevice,

    pub const _is_QPointingDevice = {};
    pub const _is_QInputDevice = {};
    pub const _is_QObject = {};

    /// New constructs a new QPointingDevice object.
    ///
    pub fn New() QPointingDevice {
        return .{ .ptr = qtc.QPointingDevice_new() };
    }

    /// New2 constructs a new QPointingDevice object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    /// ` systemId: i64 `
    ///
    /// ` devType: qinputdevice_enums.DeviceType `
    ///
    /// ` pType: qpointingdevice_enums.PointerType `
    ///
    /// ` caps: flag of qinputdevice_enums.Capability `
    ///
    /// ` maxPoints: i32 `
    ///
    /// ` buttonCount: i32 `
    ///
    pub fn New2(name: []const u8, systemId: i64, devType: i32, pType: i32, caps: i32, maxPoints: i32, buttonCount: i32) QPointingDevice {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QPointingDevice_new2(name_str, @bitCast(systemId), @bitCast(devType), @bitCast(pType), @bitCast(caps), @bitCast(maxPoints), @bitCast(buttonCount)) };
    }

    /// New3 constructs a new QPointingDevice object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New3(parent: anytype) QPointingDevice {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QPointingDevice_new3(@ptrCast(parent.ptr)) };
    }

    /// New4 constructs a new QPointingDevice object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    /// ` systemId: i64 `
    ///
    /// ` devType: qinputdevice_enums.DeviceType `
    ///
    /// ` pType: qpointingdevice_enums.PointerType `
    ///
    /// ` caps: flag of qinputdevice_enums.Capability `
    ///
    /// ` maxPoints: i32 `
    ///
    /// ` buttonCount: i32 `
    ///
    /// ` seatName: []const u8 `
    ///
    pub fn New4(name: []const u8, systemId: i64, devType: i32, pType: i32, caps: i32, maxPoints: i32, buttonCount: i32, seatName: []const u8) QPointingDevice {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const seatName_str = qtc.libqt_string{
            .len = seatName.len,
            .data = seatName.ptr,
        };
        return .{ .ptr = qtc.QPointingDevice_new4(name_str, @bitCast(systemId), @bitCast(devType), @bitCast(pType), @bitCast(caps), @bitCast(maxPoints), @bitCast(buttonCount), seatName_str) };
    }

    /// New5 constructs a new QPointingDevice object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    /// ` systemId: i64 `
    ///
    /// ` devType: qinputdevice_enums.DeviceType `
    ///
    /// ` pType: qpointingdevice_enums.PointerType `
    ///
    /// ` caps: flag of qinputdevice_enums.Capability `
    ///
    /// ` maxPoints: i32 `
    ///
    /// ` buttonCount: i32 `
    ///
    /// ` seatName: []const u8 `
    ///
    /// ` uniqueId: QPointingDeviceUniqueId `
    ///
    pub fn New5(name: []const u8, systemId: i64, devType: i32, pType: i32, caps: i32, maxPoints: i32, buttonCount: i32, seatName: []const u8, uniqueId: anytype) QPointingDevice {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const seatName_str = qtc.libqt_string{
            .len = seatName.len,
            .data = seatName.ptr,
        };
        comptime _ = @TypeOf(uniqueId)._is_QPointingDeviceUniqueId;
        return .{ .ptr = qtc.QPointingDevice_new5(name_str, @bitCast(systemId), @bitCast(devType), @bitCast(pType), @bitCast(caps), @bitCast(maxPoints), @bitCast(buttonCount), seatName_str, @ptrCast(uniqueId.ptr)) };
    }

    /// New6 constructs a new QPointingDevice object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    /// ` systemId: i64 `
    ///
    /// ` devType: qinputdevice_enums.DeviceType `
    ///
    /// ` pType: qpointingdevice_enums.PointerType `
    ///
    /// ` caps: flag of qinputdevice_enums.Capability `
    ///
    /// ` maxPoints: i32 `
    ///
    /// ` buttonCount: i32 `
    ///
    /// ` seatName: []const u8 `
    ///
    /// ` uniqueId: QPointingDeviceUniqueId `
    ///
    /// ` parent: QObject `
    ///
    pub fn New6(name: []const u8, systemId: i64, devType: i32, pType: i32, caps: i32, maxPoints: i32, buttonCount: i32, seatName: []const u8, uniqueId: anytype, parent: anytype) QPointingDevice {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const seatName_str = qtc.libqt_string{
            .len = seatName.len,
            .data = seatName.ptr,
        };
        comptime _ = @TypeOf(uniqueId)._is_QPointingDeviceUniqueId;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QPointingDevice_new6(name_str, @bitCast(systemId), @bitCast(devType), @bitCast(pType), @bitCast(caps), @bitCast(maxPoints), @bitCast(buttonCount), seatName_str, @ptrCast(uniqueId.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointingDevice `
    ///
    pub fn MetaObject(self: QPointingDevice) QMetaObject {
        return .{ .ptr = qtc.QPointingDevice_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPointingDevice `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QPointingDevice, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QPointingDevice_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPointingDevice `
    ///
    pub fn SuperMetaObject(self: QPointingDevice) QMetaObject {
        return .{ .ptr = qtc.QPointingDevice_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QPointingDevice `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QPointingDevice, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QPointingDevice_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPointingDevice `
    ///
    /// ` callback: *const fn (self: QPointingDevice, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QPointingDevice, callback: *const fn (QPointingDevice, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QPointingDevice_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointingDevice `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QPointingDevice, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QPointingDevice_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QPointingDevice `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QPointingDevice, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QPointingDevice_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPointingDevice `
    ///
    /// ` callback: *const fn (self: QPointingDevice, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QPointingDevice, callback: *const fn (QPointingDevice, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QPointingDevice_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointingDevice `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QPointingDevice, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QPointingDevice_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpointingdevice.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointingdevice.html#setType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointingDevice `
    ///
    /// ` devType: qinputdevice_enums.DeviceType `
    ///
    pub fn SetType(self: QPointingDevice, devType: i32) void {
        qtc.QPointingDevice_SetType(@ptrCast(self.ptr), @bitCast(devType));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointingdevice.html#setCapabilities)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointingDevice `
    ///
    /// ` caps: flag of qinputdevice_enums.Capability `
    ///
    pub fn SetCapabilities(self: QPointingDevice, caps: i32) void {
        qtc.QPointingDevice_SetCapabilities(@ptrCast(self.ptr), @bitCast(caps));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointingdevice.html#setMaximumTouchPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointingDevice `
    ///
    /// ` c: i32 `
    ///
    pub fn SetMaximumTouchPoints(self: QPointingDevice, c: i32) void {
        qtc.QPointingDevice_SetMaximumTouchPoints(@ptrCast(self.ptr), @bitCast(c));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointingdevice.html#pointerType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointingDevice `
    ///
    /// ## Returns:
    ///
    /// ` qpointingdevice_enums.PointerType `
    ///
    pub fn PointerType(self: QPointingDevice) i32 {
        return qtc.QPointingDevice_PointerType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointingdevice.html#maximumPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointingDevice `
    ///
    pub fn MaximumPoints(self: QPointingDevice) i32 {
        return qtc.QPointingDevice_MaximumPoints(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointingdevice.html#buttonCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointingDevice `
    ///
    pub fn ButtonCount(self: QPointingDevice) i32 {
        return qtc.QPointingDevice_ButtonCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointingdevice.html#uniqueId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointingDevice `
    ///
    pub fn UniqueId(self: QPointingDevice) QPointingDeviceUniqueId {
        return .{ .ptr = qtc.QPointingDevice_UniqueId(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointingdevice.html#primaryPointingDevice)
    ///
    pub fn PrimaryPointingDevice() QPointingDevice {
        return .{ .ptr = qtc.QPointingDevice_PrimaryPointingDevice() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointingdevice.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointingDevice `
    ///
    /// ` other: QPointingDevice `
    ///
    pub fn OperatorEqual(self: QPointingDevice, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QPointingDevice;
        return qtc.QPointingDevice_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointingdevice.html#grabChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointingDevice `
    ///
    /// ` grabber: QObject `
    ///
    /// ` transition: qpointingdevice_enums.GrabTransition `
    ///
    /// ` event: QPointerEvent `
    ///
    /// ` point: QEventPoint `
    ///
    pub fn GrabChanged(self: QPointingDevice, grabber: anytype, transition: i32, event: anytype, point: anytype) void {
        comptime _ = @TypeOf(grabber)._is_QObject;
        comptime _ = @TypeOf(event)._is_QPointerEvent;
        comptime _ = @TypeOf(point)._is_QEventPoint;
        qtc.QPointingDevice_GrabChanged(@ptrCast(self.ptr), @ptrCast(grabber.ptr), @bitCast(transition), @ptrCast(event.ptr), @ptrCast(point.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointingdevice.html#grabChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPointingDevice `
    ///
    /// ` callback: *const fn (self: QPointingDevice, grabber: QObject, transition: qpointingdevice_enums.GrabTransition, event: QPointerEvent, point: QEventPoint) callconv(.c) void `
    ///
    pub fn OnGrabChanged(self: QPointingDevice, callback: *const fn (QPointingDevice, QObject, i32, QPointerEvent, QEventPoint) callconv(.c) void) void {
        qtc.QPointingDevice_Connect_GrabChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpointingdevice.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpointingdevice.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointingdevice.html#primaryPointingDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` seatName: []const u8 `
    ///
    pub fn PrimaryPointingDevice1(seatName: []const u8) QPointingDevice {
        const seatName_str = qtc.libqt_string{
            .len = seatName.len,
            .data = seatName.ptr,
        };
        return .{ .ptr = qtc.QPointingDevice_PrimaryPointingDevice1(seatName_str) };
    }

    /// Inherited from QInputDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputdevice.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointingDevice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: QPointingDevice, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QInputDevice_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpointingdevice.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QInputDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputdevice.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointingDevice `
    ///
    /// ## Returns:
    ///
    /// ` qinputdevice_enums.DeviceType `
    ///
    pub fn Type(self: QPointingDevice) i32 {
        return qtc.QInputDevice_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QInputDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputdevice.html#capabilities)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointingDevice `
    ///
    /// ## Returns:
    ///
    /// ` flag of qinputdevice_enums.Capability `
    ///
    pub fn Capabilities(self: QPointingDevice) i32 {
        return qtc.QInputDevice_Capabilities(@ptrCast(self.ptr));
    }

    /// Inherited from QInputDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputdevice.html#hasCapability)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointingDevice `
    ///
    /// ` cap: qinputdevice_enums.Capability `
    ///
    pub fn HasCapability(self: QPointingDevice, cap: i32) bool {
        return qtc.QInputDevice_HasCapability(@ptrCast(self.ptr), @bitCast(cap));
    }

    /// Inherited from QInputDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputdevice.html#systemId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointingDevice `
    ///
    pub fn SystemId(self: QPointingDevice) i64 {
        return qtc.QInputDevice_SystemId(@ptrCast(self.ptr));
    }

    /// Inherited from QInputDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputdevice.html#seatName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointingDevice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SeatName(self: QPointingDevice, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QInputDevice_SeatName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpointingdevice.SeatName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QInputDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputdevice.html#availableVirtualGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointingDevice `
    ///
    pub fn AvailableVirtualGeometry(self: QPointingDevice) QRect {
        return .{ .ptr = qtc.QInputDevice_AvailableVirtualGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QInputDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputdevice.html#seatNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SeatNames(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QInputDevice_SeatNames();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qpointingdevice.SeatNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qpointingdevice.SeatNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QInputDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputdevice.html#devices)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Devices(allocator: std.mem.Allocator) []QInputDevice {
        const _arr: qtc.libqt_list = qtc.QInputDevice_Devices();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QInputDevice, _arr.len) catch @panic("qpointingdevice.Devices: Memory allocation failed");
        const _data: [*]QtC.QInputDevice = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QInputDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputdevice.html#primaryKeyboard)
    ///
    pub fn PrimaryKeyboard() QInputDevice {
        return .{ .ptr = qtc.QInputDevice_PrimaryKeyboard() };
    }

    /// Inherited from QInputDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputdevice.html#availableVirtualGeometryChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointingDevice `
    ///
    /// ` area: QRect `
    ///
    pub fn AvailableVirtualGeometryChanged(self: QPointingDevice, area: anytype) void {
        comptime _ = @TypeOf(area)._is_QRect;
        qtc.QInputDevice_AvailableVirtualGeometryChanged(@ptrCast(self.ptr), @ptrCast(area.ptr));
    }

    /// Inherited from QInputDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputdevice.html#availableVirtualGeometryChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPointingDevice `
    ///
    /// ` callback: *const fn (self: QPointingDevice, area: QRect) callconv(.c) void `
    ///
    pub fn OnAvailableVirtualGeometryChanged(self: QPointingDevice, callback: *const fn (QPointingDevice, QRect) callconv(.c) void) void {
        qtc.QInputDevice_Connect_AvailableVirtualGeometryChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QInputDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qinputdevice.html#primaryKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` seatName: []const u8 `
    ///
    pub fn PrimaryKeyboard1(seatName: []const u8) QInputDevice {
        const seatName_str = qtc.libqt_string{
            .len = seatName.len,
            .data = seatName.ptr,
        };
        return .{ .ptr = qtc.QInputDevice_PrimaryKeyboard1(seatName_str) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointingDevice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QPointingDevice, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpointingdevice.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointingDevice `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QPointingDevice, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointingDevice `
    ///
    pub fn IsWidgetType(self: QPointingDevice) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointingDevice `
    ///
    pub fn IsWindowType(self: QPointingDevice) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointingDevice `
    ///
    pub fn IsQuickItemType(self: QPointingDevice) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointingDevice `
    ///
    pub fn SignalsBlocked(self: QPointingDevice) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointingDevice `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QPointingDevice, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointingDevice `
    ///
    pub fn Thread(self: QPointingDevice) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointingDevice `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QPointingDevice, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointingDevice `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QPointingDevice, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointingDevice `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QPointingDevice, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointingDevice `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QPointingDevice, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointingDevice `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QPointingDevice, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointingDevice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QPointingDevice, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qpointingdevice.Children: Memory allocation failed");
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
    /// ` self: QPointingDevice `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QPointingDevice, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointingDevice `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QPointingDevice, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointingDevice `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QPointingDevice, obj: anytype) void {
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
    /// ` self: QPointingDevice `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QPointingDevice, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QPointingDevice `
    ///
    pub fn Disconnect3(self: QPointingDevice) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointingDevice `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QPointingDevice, receiver: anytype) bool {
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
    /// ` self: QPointingDevice `
    ///
    pub fn DumpObjectTree(self: QPointingDevice) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointingDevice `
    ///
    pub fn DumpObjectInfo(self: QPointingDevice) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointingDevice `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QPointingDevice, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QPointingDevice `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QPointingDevice, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointingDevice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QPointingDevice, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qpointingdevice.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qpointingdevice.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QPointingDevice `
    ///
    pub fn BindingStorage(self: QPointingDevice) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointingDevice `
    ///
    pub fn BindingStorage2(self: QPointingDevice) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointingDevice `
    ///
    pub fn Destroyed(self: QPointingDevice) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPointingDevice `
    ///
    /// ` callback: *const fn (self: QPointingDevice) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QPointingDevice, callback: *const fn (QPointingDevice) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointingDevice `
    ///
    pub fn Parent(self: QPointingDevice) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointingDevice `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QPointingDevice, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointingDevice `
    ///
    pub fn DeleteLater(self: QPointingDevice) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointingDevice `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QPointingDevice, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointingDevice `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QPointingDevice, time: i64, timerType: i32) i32 {
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
    /// ` self: QPointingDevice `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QPointingDevice, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QPointingDevice `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QPointingDevice, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointingDevice `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QPointingDevice, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QPointingDevice `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QPointingDevice, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QPointingDevice `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QPointingDevice, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QPointingDevice `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QPointingDevice, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPointingDevice `
    ///
    /// ` callback: *const fn (self: QPointingDevice, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QPointingDevice, callback: *const fn (QPointingDevice, QObject) callconv(.c) void) void {
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
    /// ` self: QPointingDevice `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QPointingDevice, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QPointingDevice_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPointingDevice `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QPointingDevice, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QPointingDevice_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPointingDevice`
    ///
    /// ` callback: *const fn (self: QPointingDevice, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QPointingDevice, callback: *const fn (QPointingDevice, QEvent) callconv(.c) bool) void {
        qtc.QPointingDevice_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointingDevice `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QPointingDevice, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QPointingDevice_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPointingDevice `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QPointingDevice, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QPointingDevice_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPointingDevice`
    ///
    /// ` callback: *const fn (self: QPointingDevice, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QPointingDevice, callback: *const fn (QPointingDevice, QObject, QEvent) callconv(.c) bool) void {
        qtc.QPointingDevice_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointingDevice `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QPointingDevice, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QPointingDevice_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPointingDevice `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QPointingDevice, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QPointingDevice_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPointingDevice`
    ///
    /// ` callback: *const fn (self: QPointingDevice, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QPointingDevice, callback: *const fn (QPointingDevice, QTimerEvent) callconv(.c) void) void {
        qtc.QPointingDevice_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointingDevice `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QPointingDevice, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QPointingDevice_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPointingDevice `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QPointingDevice, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QPointingDevice_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPointingDevice`
    ///
    /// ` callback: *const fn (self: QPointingDevice, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QPointingDevice, callback: *const fn (QPointingDevice, QChildEvent) callconv(.c) void) void {
        qtc.QPointingDevice_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointingDevice `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QPointingDevice, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QPointingDevice_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPointingDevice `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QPointingDevice, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QPointingDevice_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPointingDevice`
    ///
    /// ` callback: *const fn (self: QPointingDevice, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QPointingDevice, callback: *const fn (QPointingDevice, QEvent) callconv(.c) void) void {
        qtc.QPointingDevice_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointingDevice `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QPointingDevice, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPointingDevice_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPointingDevice `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QPointingDevice, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPointingDevice_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPointingDevice`
    ///
    /// ` callback: *const fn (self: QPointingDevice, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QPointingDevice, callback: *const fn (QPointingDevice, QMetaMethod) callconv(.c) void) void {
        qtc.QPointingDevice_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointingDevice `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QPointingDevice, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPointingDevice_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPointingDevice `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QPointingDevice, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPointingDevice_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPointingDevice`
    ///
    /// ` callback: *const fn (self: QPointingDevice, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QPointingDevice, callback: *const fn (QPointingDevice, QMetaMethod) callconv(.c) void) void {
        qtc.QPointingDevice_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointingDevice `
    ///
    pub fn Sender(self: QPointingDevice) QObject {
        return .{ .ptr = qtc.QPointingDevice_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QPointingDevice `
    ///
    pub fn SuperSender(self: QPointingDevice) QObject {
        return .{ .ptr = qtc.QPointingDevice_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPointingDevice`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QPointingDevice, callback: *const fn () callconv(.c) QObject) void {
        qtc.QPointingDevice_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointingDevice `
    ///
    pub fn SenderSignalIndex(self: QPointingDevice) i32 {
        return qtc.QPointingDevice_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QPointingDevice `
    ///
    pub fn SuperSenderSignalIndex(self: QPointingDevice) i32 {
        return qtc.QPointingDevice_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPointingDevice`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QPointingDevice, callback: *const fn () callconv(.c) i32) void {
        qtc.QPointingDevice_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointingDevice `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QPointingDevice, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPointingDevice_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QPointingDevice `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QPointingDevice, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPointingDevice_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPointingDevice`
    ///
    /// ` callback: *const fn (self: QPointingDevice, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QPointingDevice, callback: *const fn (QPointingDevice, [*:0]const u8) callconv(.c) i32) void {
        qtc.QPointingDevice_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPointingDevice `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QPointingDevice, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QPointingDevice_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPointingDevice `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QPointingDevice, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QPointingDevice_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPointingDevice`
    ///
    /// ` callback: *const fn (self: QPointingDevice, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QPointingDevice, callback: *const fn (QPointingDevice, QMetaMethod) callconv(.c) bool) void {
        qtc.QPointingDevice_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QPointingDevice `
    ///
    /// ` callback: *const fn (self: QPointingDevice, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QPointingDevice, callback: *const fn (QPointingDevice, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpointingdevice.html#dtor.QPointingDevice)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QPointingDevice `
    ///
    pub fn Delete(self: QPointingDevice) void {
        qtc.QPointingDevice_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpointingdevice.html#public-types)
pub const enums = struct {
    pub const PointerType = enum(i32) {
        pub const Unknown: i32 = 0;
        pub const Generic: i32 = 1;
        pub const Finger: i32 = 2;
        pub const Pen: i32 = 4;
        pub const Eraser: i32 = 8;
        pub const Cursor: i32 = 16;
        pub const AllPointerTypes: i32 = 32767;
    };

    pub const GrabTransition = enum(i32) {
        pub const GrabPassive: i32 = 1;
        pub const UngrabPassive: i32 = 2;
        pub const CancelGrabPassive: i32 = 3;
        pub const OverrideGrabPassive: i32 = 4;
        pub const GrabExclusive: i32 = 16;
        pub const UngrabExclusive: i32 = 32;
        pub const CancelGrabExclusive: i32 = 48;
    };
};
