const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qinputdevice_enums = @import("libqinputdevice.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const qpointingdevice_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qpointingdeviceuniqueid.html
pub const qpointingdeviceuniqueid = struct {
    /// New constructs a new QPointingDeviceUniqueId object.
    ///
    /// ``` other: QtC.QPointingDeviceUniqueId ```
    pub fn New(other: ?*anyopaque) QtC.QPointingDeviceUniqueId {
        return qtc.QPointingDeviceUniqueId_new(@ptrCast(other));
    }

    /// New2 constructs a new QPointingDeviceUniqueId object and invalidates the source QPointingDeviceUniqueId object.
    ///
    /// ``` other: QtC.QPointingDeviceUniqueId ```
    pub fn New2(other: ?*anyopaque) QtC.QPointingDeviceUniqueId {
        return qtc.QPointingDeviceUniqueId_new2(@ptrCast(other));
    }

    /// New3 constructs a new QPointingDeviceUniqueId object.
    ///
    ///
    pub fn New3() QtC.QPointingDeviceUniqueId {
        return qtc.QPointingDeviceUniqueId_new3();
    }

    /// New4 constructs a new QPointingDeviceUniqueId object.
    ///
    /// ``` param1: QtC.QPointingDeviceUniqueId ```
    pub fn New4(param1: ?*anyopaque) QtC.QPointingDeviceUniqueId {
        return qtc.QPointingDeviceUniqueId_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QPointingDeviceUniqueId, other: QtC.QPointingDeviceUniqueId ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPointingDeviceUniqueId_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QPointingDeviceUniqueId, other: QtC.QPointingDeviceUniqueId ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPointingDeviceUniqueId_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointingdeviceuniqueid.html#fromNumericId)
    ///
    /// ``` id: i64 ```
    pub fn FromNumericId(id: i64) QtC.QPointingDeviceUniqueId {
        return qtc.QPointingDeviceUniqueId_FromNumericId(@intCast(id));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointingdeviceuniqueid.html#isValid)
    ///
    /// ``` self: QtC.QPointingDeviceUniqueId ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QPointingDeviceUniqueId_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointingdeviceuniqueid.html#numericId)
    ///
    /// ``` self: QtC.QPointingDeviceUniqueId ```
    pub fn NumericId(self: ?*anyopaque) i64 {
        return qtc.QPointingDeviceUniqueId_NumericId(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointingdeviceuniqueid.html#dtor.QPointingDeviceUniqueId)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QPointingDeviceUniqueId ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPointingDeviceUniqueId_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpointingdevice.html
pub const qpointingdevice = struct {
    /// New constructs a new QPointingDevice object.
    ///
    ///
    pub fn New() QtC.QPointingDevice {
        return qtc.QPointingDevice_new();
    }

    /// New2 constructs a new QPointingDevice object.
    ///
    /// ``` name: []const u8, systemId: i64, devType: qinputdevice_enums.DeviceType, pType: qpointingdevice_enums.PointerType, caps: flag of qinputdevice_enums.Capability, maxPoints: i32, buttonCount: i32 ```
    pub fn New2(name: []const u8, systemId: i64, devType: i32, pType: i32, caps: i32, maxPoints: i32, buttonCount: i32) QtC.QPointingDevice {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };

        return qtc.QPointingDevice_new2(name_str, @intCast(systemId), @intCast(devType), @intCast(pType), @intCast(caps), @intCast(maxPoints), @intCast(buttonCount));
    }

    /// New3 constructs a new QPointingDevice object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New3(parent: ?*anyopaque) QtC.QPointingDevice {
        return qtc.QPointingDevice_new3(@ptrCast(parent));
    }

    /// New4 constructs a new QPointingDevice object.
    ///
    /// ``` name: []const u8, systemId: i64, devType: qinputdevice_enums.DeviceType, pType: qpointingdevice_enums.PointerType, caps: flag of qinputdevice_enums.Capability, maxPoints: i32, buttonCount: i32, seatName: []const u8 ```
    pub fn New4(name: []const u8, systemId: i64, devType: i32, pType: i32, caps: i32, maxPoints: i32, buttonCount: i32, seatName: []const u8) QtC.QPointingDevice {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const seatName_str = qtc.libqt_string{
            .len = seatName.len,
            .data = seatName.ptr,
        };

        return qtc.QPointingDevice_new4(name_str, @intCast(systemId), @intCast(devType), @intCast(pType), @intCast(caps), @intCast(maxPoints), @intCast(buttonCount), seatName_str);
    }

    /// New5 constructs a new QPointingDevice object.
    ///
    /// ``` name: []const u8, systemId: i64, devType: qinputdevice_enums.DeviceType, pType: qpointingdevice_enums.PointerType, caps: flag of qinputdevice_enums.Capability, maxPoints: i32, buttonCount: i32, seatName: []const u8, uniqueId: QtC.QPointingDeviceUniqueId ```
    pub fn New5(name: []const u8, systemId: i64, devType: i32, pType: i32, caps: i32, maxPoints: i32, buttonCount: i32, seatName: []const u8, uniqueId: QtC.QPointingDeviceUniqueId) QtC.QPointingDevice {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const seatName_str = qtc.libqt_string{
            .len = seatName.len,
            .data = seatName.ptr,
        };

        return qtc.QPointingDevice_new5(name_str, @intCast(systemId), @intCast(devType), @intCast(pType), @intCast(caps), @intCast(maxPoints), @intCast(buttonCount), seatName_str, @ptrCast(uniqueId));
    }

    /// New6 constructs a new QPointingDevice object.
    ///
    /// ``` name: []const u8, systemId: i64, devType: qinputdevice_enums.DeviceType, pType: qpointingdevice_enums.PointerType, caps: flag of qinputdevice_enums.Capability, maxPoints: i32, buttonCount: i32, seatName: []const u8, uniqueId: QtC.QPointingDeviceUniqueId, parent: QtC.QObject ```
    pub fn New6(name: []const u8, systemId: i64, devType: i32, pType: i32, caps: i32, maxPoints: i32, buttonCount: i32, seatName: []const u8, uniqueId: QtC.QPointingDeviceUniqueId, parent: ?*anyopaque) QtC.QPointingDevice {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const seatName_str = qtc.libqt_string{
            .len = seatName.len,
            .data = seatName.ptr,
        };

        return qtc.QPointingDevice_new6(name_str, @intCast(systemId), @intCast(devType), @intCast(pType), @intCast(caps), @intCast(maxPoints), @intCast(buttonCount), seatName_str, @ptrCast(uniqueId), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QPointingDevice ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QPointingDevice_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QPointingDevice, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QPointingDevice_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QPointingDevice, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QPointingDevice_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPointingDevice, callback: *const fn (self: QtC.QPointingDevice, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QPointingDevice_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QPointingDevice, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QPointingDevice_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QPointingDevice_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpointingdevice.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointingdevice.html#setType)
    ///
    /// ``` self: QtC.QPointingDevice, devType: qinputdevice_enums.DeviceType ```
    pub fn SetType(self: ?*anyopaque, devType: i32) void {
        qtc.QPointingDevice_SetType(@ptrCast(self), @intCast(devType));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointingdevice.html#setCapabilities)
    ///
    /// ``` self: QtC.QPointingDevice, caps: flag of qinputdevice_enums.Capability ```
    pub fn SetCapabilities(self: ?*anyopaque, caps: i32) void {
        qtc.QPointingDevice_SetCapabilities(@ptrCast(self), @intCast(caps));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointingdevice.html#setMaximumTouchPoints)
    ///
    /// ``` self: QtC.QPointingDevice, c: i32 ```
    pub fn SetMaximumTouchPoints(self: ?*anyopaque, c: i32) void {
        qtc.QPointingDevice_SetMaximumTouchPoints(@ptrCast(self), @intCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointingdevice.html#pointerType)
    ///
    /// ``` self: QtC.QPointingDevice ```
    ///
    /// Returns: ``` qpointingdevice_enums.PointerType ```
    pub fn PointerType(self: ?*anyopaque) i32 {
        return qtc.QPointingDevice_PointerType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointingdevice.html#maximumPoints)
    ///
    /// ``` self: QtC.QPointingDevice ```
    pub fn MaximumPoints(self: ?*anyopaque) i32 {
        return qtc.QPointingDevice_MaximumPoints(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointingdevice.html#buttonCount)
    ///
    /// ``` self: QtC.QPointingDevice ```
    pub fn ButtonCount(self: ?*anyopaque) i32 {
        return qtc.QPointingDevice_ButtonCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointingdevice.html#uniqueId)
    ///
    /// ``` self: QtC.QPointingDevice ```
    pub fn UniqueId(self: ?*anyopaque) QtC.QPointingDeviceUniqueId {
        return qtc.QPointingDevice_UniqueId(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointingdevice.html#primaryPointingDevice)
    ///
    ///
    pub fn PrimaryPointingDevice() QtC.QPointingDevice {
        return qtc.QPointingDevice_PrimaryPointingDevice();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointingdevice.html#operator-eq-eq)
    ///
    /// ``` self: QtC.QPointingDevice, other: QtC.QPointingDevice ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QPointingDevice_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointingdevice.html#grabChanged)
    ///
    /// ``` self: QtC.QPointingDevice, grabber: QtC.QObject, transition: qpointingdevice_enums.GrabTransition, event: QtC.QPointerEvent, point: QtC.QEventPoint ```
    pub fn GrabChanged(self: ?*anyopaque, grabber: ?*anyopaque, transition: i32, event: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QPointingDevice_GrabChanged(@ptrCast(self), @ptrCast(grabber), @intCast(transition), @ptrCast(event), @ptrCast(point));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointingdevice.html#grabChanged)
    ///
    /// ``` self: QtC.QPointingDevice, callback: *const fn (self: QtC.QPointingDevice, grabber: QtC.QObject, transition: qpointingdevice_enums.GrabTransition, event: QtC.QPointerEvent, point: QtC.QEventPoint) callconv(.c) void ```
    pub fn OnGrabChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPointingDevice_Connect_GrabChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QPointingDevice_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpointingdevice.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QPointingDevice_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpointingdevice.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointingdevice.html#primaryPointingDevice)
    ///
    /// ``` seatName: []const u8 ```
    pub fn PrimaryPointingDevice1(seatName: []const u8) QtC.QPointingDevice {
        const seatName_str = qtc.libqt_string{
            .len = seatName.len,
            .data = seatName.ptr,
        };
        return qtc.QPointingDevice_PrimaryPointingDevice1(seatName_str);
    }

    /// Inherited from QInputDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#name)
    ///
    /// ``` self: QtC.QPointingDevice, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QInputDevice_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpointingdevice.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QInputDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#type)
    ///
    /// ``` self: QtC.QPointingDevice ```
    ///
    /// Returns: ``` qinputdevice_enums.DeviceType ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QInputDevice_Type(@ptrCast(self));
    }

    /// Inherited from QInputDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#capabilities)
    ///
    /// ``` self: QtC.QPointingDevice ```
    ///
    /// Returns: ``` flag of qinputdevice_enums.Capability ```
    pub fn Capabilities(self: ?*anyopaque) i32 {
        return qtc.QInputDevice_Capabilities(@ptrCast(self));
    }

    /// Inherited from QInputDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#hasCapability)
    ///
    /// ``` self: QtC.QPointingDevice, cap: qinputdevice_enums.Capability ```
    pub fn HasCapability(self: ?*anyopaque, cap: i32) bool {
        return qtc.QInputDevice_HasCapability(@ptrCast(self), @intCast(cap));
    }

    /// Inherited from QInputDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#systemId)
    ///
    /// ``` self: QtC.QPointingDevice ```
    pub fn SystemId(self: ?*anyopaque) i64 {
        return qtc.QInputDevice_SystemId(@ptrCast(self));
    }

    /// Inherited from QInputDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#seatName)
    ///
    /// ``` self: QtC.QPointingDevice, allocator: std.mem.Allocator ```
    pub fn SeatName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QInputDevice_SeatName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpointingdevice.SeatName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QInputDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#availableVirtualGeometry)
    ///
    /// ``` self: QtC.QPointingDevice ```
    pub fn AvailableVirtualGeometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QInputDevice_AvailableVirtualGeometry(@ptrCast(self));
    }

    /// Inherited from QInputDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#seatNames)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn SeatNames(allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.QInputDevice_SeatNames();
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#devices)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn Devices(allocator: std.mem.Allocator) []QtC.QInputDevice {
        const _arr: qtc.libqt_list = qtc.QInputDevice_Devices();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QInputDevice, _arr.len) catch @panic("qpointingdevice.Devices: Memory allocation failed");
        const _data: [*]QtC.QInputDevice = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QInputDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#primaryKeyboard)
    ///
    ///
    pub fn PrimaryKeyboard() QtC.QInputDevice {
        return qtc.QInputDevice_PrimaryKeyboard();
    }

    /// Inherited from QInputDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#availableVirtualGeometryChanged)
    ///
    /// ``` self: QtC.QPointingDevice, area: QtC.QRect ```
    pub fn AvailableVirtualGeometryChanged(self: ?*anyopaque, area: QtC.QRect) void {
        qtc.QInputDevice_AvailableVirtualGeometryChanged(@ptrCast(self), @ptrCast(area));
    }

    /// Inherited from QInputDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#availableVirtualGeometryChanged)
    ///
    /// ``` self: QtC.QPointingDevice, callback: *const fn (self: QtC.QPointingDevice, area: QtC.QRect) callconv(.c) void ```
    pub fn OnAvailableVirtualGeometryChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, QtC.QRect) callconv(.c) void) void {
        qtc.QInputDevice_Connect_AvailableVirtualGeometryChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QInputDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#primaryKeyboard)
    ///
    /// ``` seatName: []const u8 ```
    pub fn PrimaryKeyboard1(seatName: []const u8) QtC.QInputDevice {
        const seatName_str = qtc.libqt_string{
            .len = seatName.len,
            .data = seatName.ptr,
        };
        return qtc.QInputDevice_PrimaryKeyboard1(seatName_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QPointingDevice, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpointingdevice.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QPointingDevice, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.QPointingDevice ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QPointingDevice ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QPointingDevice ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QPointingDevice ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QPointingDevice, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QPointingDevice ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QPointingDevice, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QPointingDevice, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QPointingDevice, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QPointingDevice, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QPointingDevice, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qpointingdevice.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QPointingDevice, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QPointingDevice, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QPointingDevice, obj: QtC.QObject ```
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
    /// ``` self: QtC.QPointingDevice, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.QPointingDevice ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QPointingDevice ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QPointingDevice, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QPointingDevice, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QPointingDevice, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QPointingDevice ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QPointingDevice ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QPointingDevice ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QPointingDevice, callback: *const fn (self: QtC.QPointingDevice) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QPointingDevice ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QPointingDevice, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QPointingDevice ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QPointingDevice, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QPointingDevice, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QPointingDevice, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QPointingDevice, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QPointingDevice, callback: *const fn (self: QtC.QPointingDevice, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPointingDevice, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QPointingDevice_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPointingDevice, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QPointingDevice_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPointingDevice, callback: *const fn (self: QtC.QPointingDevice, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPointingDevice_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPointingDevice, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QPointingDevice_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPointingDevice, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QPointingDevice_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPointingDevice, callback: *const fn (self: QtC.QPointingDevice, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPointingDevice_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPointingDevice, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPointingDevice_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPointingDevice, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPointingDevice_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPointingDevice, callback: *const fn (self: QtC.QPointingDevice, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPointingDevice_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPointingDevice, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPointingDevice_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPointingDevice, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPointingDevice_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPointingDevice, callback: *const fn (self: QtC.QPointingDevice, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPointingDevice_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPointingDevice, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPointingDevice_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPointingDevice, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPointingDevice_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPointingDevice, callback: *const fn (self: QtC.QPointingDevice, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPointingDevice_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPointingDevice, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QPointingDevice_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPointingDevice, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QPointingDevice_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPointingDevice, callback: *const fn (self: QtC.QPointingDevice, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPointingDevice_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPointingDevice, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QPointingDevice_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPointingDevice, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QPointingDevice_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPointingDevice, callback: *const fn (self: QtC.QPointingDevice, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPointingDevice_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPointingDevice ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QPointingDevice_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPointingDevice ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QPointingDevice_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPointingDevice, callback: *const fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QPointingDevice_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPointingDevice ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QPointingDevice_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPointingDevice ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QPointingDevice_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPointingDevice, callback: *const fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QPointingDevice_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPointingDevice, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPointingDevice_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPointingDevice, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPointingDevice_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPointingDevice, callback: *const fn (self: QtC.QPointingDevice, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QPointingDevice_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPointingDevice, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QPointingDevice_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPointingDevice, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QPointingDevice_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPointingDevice, callback: *const fn (self: QtC.QPointingDevice, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPointingDevice_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QPointingDevice, callback: *const fn (self: QtC.QPointingDevice, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointingdevice.html#dtor.QPointingDevice)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QPointingDevice ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPointingDevice_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpointingdevice.html#types
pub const enums = struct {
    pub const PointerType = enum {
        pub const Unknown: i32 = 0;
        pub const Generic: i32 = 1;
        pub const Finger: i32 = 2;
        pub const Pen: i32 = 4;
        pub const Eraser: i32 = 8;
        pub const Cursor: i32 = 16;
        pub const AllPointerTypes: i32 = 32767;
    };

    pub const GrabTransition = enum {
        pub const GrabPassive: i32 = 1;
        pub const UngrabPassive: i32 = 2;
        pub const CancelGrabPassive: i32 = 3;
        pub const OverrideGrabPassive: i32 = 4;
        pub const GrabExclusive: i32 = 16;
        pub const UngrabExclusive: i32 = 32;
        pub const CancelGrabExclusive: i32 = 48;
    };
};
