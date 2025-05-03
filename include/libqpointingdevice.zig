const C = @import("qt6c");
const qinputdevice_enums = @import("libqinputdevice.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const qpointingdevice_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qpointingdeviceuniqueid.html
pub const qpointingdeviceuniqueid = struct {
    /// New constructs a new QPointingDeviceUniqueId object.
    ///
    /// ``` other: ?*C.QPointingDeviceUniqueId ```
    pub fn New(other: ?*anyopaque) ?*C.QPointingDeviceUniqueId {
        return C.QPointingDeviceUniqueId_new(@ptrCast(other));
    }

    /// New2 constructs a new QPointingDeviceUniqueId object and invalidates the source QPointingDeviceUniqueId object.
    ///
    /// ``` other: ?*C.QPointingDeviceUniqueId ```
    pub fn New2(other: ?*anyopaque) ?*C.QPointingDeviceUniqueId {
        return C.QPointingDeviceUniqueId_new2(@ptrCast(other));
    }

    /// New3 constructs a new QPointingDeviceUniqueId object.
    ///
    ///
    pub fn New3() ?*C.QPointingDeviceUniqueId {
        return C.QPointingDeviceUniqueId_new3();
    }

    /// New4 constructs a new QPointingDeviceUniqueId object.
    ///
    /// ``` param1: ?*C.QPointingDeviceUniqueId ```
    pub fn New4(param1: ?*anyopaque) ?*C.QPointingDeviceUniqueId {
        return C.QPointingDeviceUniqueId_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: ?*QPointingDeviceUniqueId, other: ?*QPointingDeviceUniqueId ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        C.QPointingDeviceUniqueId_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: ?*QPointingDeviceUniqueId, other: ?*QPointingDeviceUniqueId ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        C.QPointingDeviceUniqueId_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointingdeviceuniqueid.html#fromNumericId)
    ///
    /// ``` id: i64 ```
    pub fn FromNumericId(id: i64) ?*C.QPointingDeviceUniqueId {
        return C.QPointingDeviceUniqueId_FromNumericId(@intCast(id));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointingdeviceuniqueid.html#isValid)
    ///
    /// ``` self: ?*C.QPointingDeviceUniqueId ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return C.QPointingDeviceUniqueId_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointingdeviceuniqueid.html#numericId)
    ///
    /// ``` self: ?*C.QPointingDeviceUniqueId ```
    pub fn NumericId(self: ?*anyopaque) i64 {
        return C.QPointingDeviceUniqueId_NumericId(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QPointingDeviceUniqueId ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QPointingDeviceUniqueId_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpointingdevice.html
pub const qpointingdevice = struct {
    /// New constructs a new QPointingDevice object.
    ///
    ///
    pub fn New() ?*C.QPointingDevice {
        return C.QPointingDevice_new();
    }

    /// New2 constructs a new QPointingDevice object.
    ///
    /// ``` name: []const u8, systemId: i64, devType: qinputdevice_enums.DeviceType, pType: qpointingdevice_enums.PointerType, caps: i32, maxPoints: i32, buttonCount: i32 ```
    pub fn New2(name: []const u8, systemId: i64, devType: i64, pType: i64, caps: i64, maxPoints: i32, buttonCount: i32) ?*C.QPointingDevice {
        const name_str = C.struct_libqt_string{
            .len = name.len,
            .data = @constCast(name.ptr),
        };

        return C.QPointingDevice_new2(name_str, @intCast(systemId), @intCast(devType), @intCast(pType), @intCast(caps), @intCast(maxPoints), @intCast(buttonCount));
    }

    /// New3 constructs a new QPointingDevice object.
    ///
    /// ``` parent: ?*C.QObject ```
    pub fn New3(parent: ?*anyopaque) ?*C.QPointingDevice {
        return C.QPointingDevice_new3(@ptrCast(parent));
    }

    /// New4 constructs a new QPointingDevice object.
    ///
    /// ``` name: []const u8, systemId: i64, devType: qinputdevice_enums.DeviceType, pType: qpointingdevice_enums.PointerType, caps: i32, maxPoints: i32, buttonCount: i32, seatName: []const u8 ```
    pub fn New4(name: []const u8, systemId: i64, devType: i64, pType: i64, caps: i64, maxPoints: i32, buttonCount: i32, seatName: []const u8) ?*C.QPointingDevice {
        const name_str = C.struct_libqt_string{
            .len = name.len,
            .data = @constCast(name.ptr),
        };
        const seatName_str = C.struct_libqt_string{
            .len = seatName.len,
            .data = @constCast(seatName.ptr),
        };

        return C.QPointingDevice_new4(name_str, @intCast(systemId), @intCast(devType), @intCast(pType), @intCast(caps), @intCast(maxPoints), @intCast(buttonCount), seatName_str);
    }

    /// New5 constructs a new QPointingDevice object.
    ///
    /// ``` name: []const u8, systemId: i64, devType: qinputdevice_enums.DeviceType, pType: qpointingdevice_enums.PointerType, caps: i32, maxPoints: i32, buttonCount: i32, seatName: []const u8, uniqueId: ?*C.QPointingDeviceUniqueId ```
    pub fn New5(name: []const u8, systemId: i64, devType: i64, pType: i64, caps: i64, maxPoints: i32, buttonCount: i32, seatName: []const u8, uniqueId: ?*C.QPointingDeviceUniqueId) ?*C.QPointingDevice {
        const name_str = C.struct_libqt_string{
            .len = name.len,
            .data = @constCast(name.ptr),
        };
        const seatName_str = C.struct_libqt_string{
            .len = seatName.len,
            .data = @constCast(seatName.ptr),
        };

        return C.QPointingDevice_new5(name_str, @intCast(systemId), @intCast(devType), @intCast(pType), @intCast(caps), @intCast(maxPoints), @intCast(buttonCount), seatName_str, @ptrCast(uniqueId));
    }

    /// New6 constructs a new QPointingDevice object.
    ///
    /// ``` name: []const u8, systemId: i64, devType: qinputdevice_enums.DeviceType, pType: qpointingdevice_enums.PointerType, caps: i32, maxPoints: i32, buttonCount: i32, seatName: []const u8, uniqueId: ?*C.QPointingDeviceUniqueId, parent: ?*C.QObject ```
    pub fn New6(name: []const u8, systemId: i64, devType: i64, pType: i64, caps: i64, maxPoints: i32, buttonCount: i32, seatName: []const u8, uniqueId: ?*C.QPointingDeviceUniqueId, parent: ?*anyopaque) ?*C.QPointingDevice {
        const name_str = C.struct_libqt_string{
            .len = name.len,
            .data = @constCast(name.ptr),
        };
        const seatName_str = C.struct_libqt_string{
            .len = seatName.len,
            .data = @constCast(seatName.ptr),
        };

        return C.QPointingDevice_new6(name_str, @intCast(systemId), @intCast(devType), @intCast(pType), @intCast(caps), @intCast(maxPoints), @intCast(buttonCount), seatName_str, @ptrCast(uniqueId), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QPointingDevice ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QPointingDevice_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QPointingDevice, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QPointingDevice_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QPointingDevice, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QPointingDevice_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QPointingDevice, slot: fn (?*C.QPointingDevice, qobjectdefs_enums.Call, i32, ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        C.QPointingDevice_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QPointingDevice, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QPointingDevice_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QPointingDevice_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointingdevice.html#setType)
    ///
    /// ``` self: ?*C.QPointingDevice, devType: qinputdevice_enums.DeviceType ```
    pub fn SetType(self: ?*anyopaque, devType: i64) void {
        C.QPointingDevice_SetType(@ptrCast(self), @intCast(devType));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointingdevice.html#setCapabilities)
    ///
    /// ``` self: ?*C.QPointingDevice, caps: i32 ```
    pub fn SetCapabilities(self: ?*anyopaque, caps: i64) void {
        C.QPointingDevice_SetCapabilities(@ptrCast(self), @intCast(caps));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointingdevice.html#setMaximumTouchPoints)
    ///
    /// ``` self: ?*C.QPointingDevice, c: i32 ```
    pub fn SetMaximumTouchPoints(self: ?*anyopaque, c: i32) void {
        C.QPointingDevice_SetMaximumTouchPoints(@ptrCast(self), @intCast(c));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointingdevice.html#pointerType)
    ///
    /// ``` self: ?*C.QPointingDevice ```
    pub fn PointerType(self: ?*anyopaque) i64 {
        return C.QPointingDevice_PointerType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointingdevice.html#maximumPoints)
    ///
    /// ``` self: ?*C.QPointingDevice ```
    pub fn MaximumPoints(self: ?*anyopaque) i32 {
        return C.QPointingDevice_MaximumPoints(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointingdevice.html#buttonCount)
    ///
    /// ``` self: ?*C.QPointingDevice ```
    pub fn ButtonCount(self: ?*anyopaque) i32 {
        return C.QPointingDevice_ButtonCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointingdevice.html#uniqueId)
    ///
    /// ``` self: ?*C.QPointingDevice ```
    pub fn UniqueId(self: ?*anyopaque) ?*C.QPointingDeviceUniqueId {
        return C.QPointingDevice_UniqueId(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointingdevice.html#primaryPointingDevice)
    ///
    ///
    pub fn PrimaryPointingDevice() ?*C.QPointingDevice {
        return C.QPointingDevice_PrimaryPointingDevice();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointingdevice.html#operator==)
    ///
    /// ``` self: ?*C.QPointingDevice, other: ?*C.QPointingDevice ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return C.QPointingDevice_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointingdevice.html#grabChanged)
    ///
    /// ``` self: ?*C.QPointingDevice, grabber: ?*C.QObject, transition: qpointingdevice_enums.GrabTransition, event: ?*C.QPointerEvent, point: ?*C.QEventPoint ```
    pub fn GrabChanged(self: ?*anyopaque, grabber: ?*anyopaque, transition: i64, event: ?*anyopaque, point: ?*anyopaque) void {
        C.QPointingDevice_GrabChanged(@ptrCast(self), @ptrCast(grabber), @intCast(transition), @ptrCast(event), @ptrCast(point));
    }

    /// ``` self: ?*C.QPointingDevice, slot: fn (?*C.QPointingDevice, ?*C.QObject, qpointingdevice_enums.GrabTransition, ?*C.QPointerEvent, ?*C.QEventPoint) callconv(.c) void ```
    pub fn OnGrabChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i64, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QPointingDevice_Connect_GrabChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QPointingDevice_Tr2(s_Cstring, c_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QPointingDevice_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpointingdevice.html#primaryPointingDevice)
    ///
    /// ``` seatName: []const u8 ```
    pub fn PrimaryPointingDevice1(seatName: []const u8) ?*C.QPointingDevice {
        const seatName_str = C.struct_libqt_string{
            .len = seatName.len,
            .data = @constCast(seatName.ptr),
        };
        return C.QPointingDevice_PrimaryPointingDevice1(seatName_str);
    }

    /// Inherited from QInputDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#name)
    ///
    /// ``` self: ?*C.QPointingDevice, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QInputDevice_Name(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QInputDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#type)
    ///
    /// ``` self: ?*C.QPointingDevice ```
    pub fn Type(self: ?*anyopaque) i64 {
        return C.QInputDevice_Type(@ptrCast(self));
    }

    /// Inherited from QInputDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#capabilities)
    ///
    /// ``` self: ?*C.QPointingDevice ```
    pub fn Capabilities(self: ?*anyopaque) i64 {
        return C.QInputDevice_Capabilities(@ptrCast(self));
    }

    /// Inherited from QInputDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#hasCapability)
    ///
    /// ``` self: ?*C.QPointingDevice, cap: qinputdevice_enums.Capability ```
    pub fn HasCapability(self: ?*anyopaque, cap: i64) bool {
        return C.QInputDevice_HasCapability(@ptrCast(self), @intCast(cap));
    }

    /// Inherited from QInputDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#systemId)
    ///
    /// ``` self: ?*C.QPointingDevice ```
    pub fn SystemId(self: ?*anyopaque) i64 {
        return C.QInputDevice_SystemId(@ptrCast(self));
    }

    /// Inherited from QInputDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#seatName)
    ///
    /// ``` self: ?*C.QPointingDevice, allocator: std.mem.Allocator ```
    pub fn SeatName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QInputDevice_SeatName(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QInputDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#availableVirtualGeometry)
    ///
    /// ``` self: ?*C.QPointingDevice ```
    pub fn AvailableVirtualGeometry(self: ?*anyopaque) ?*C.QRect {
        return C.QInputDevice_AvailableVirtualGeometry(@ptrCast(self));
    }

    /// Inherited from QInputDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#seatNames)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn SeatNames(allocator: std.mem.Allocator) [][]const u8 {
        const _arr: C.struct_libqt_list = C.QInputDevice_SeatNames();
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QInputDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#devices)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn Devices(allocator: std.mem.Allocator) []?*C.QInputDevice {
        const _arr: C.struct_libqt_list = C.QInputDevice_Devices();
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QInputDevice, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QInputDevice = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QInputDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#primaryKeyboard)
    ///
    ///
    pub fn PrimaryKeyboard() ?*C.QInputDevice {
        return C.QInputDevice_PrimaryKeyboard();
    }

    /// Inherited from QInputDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#availableVirtualGeometryChanged)
    ///
    /// ``` self: ?*C.QPointingDevice, area: ?*C.QRect ```
    pub fn AvailableVirtualGeometryChanged(self: ?*anyopaque, area: ?*C.QRect) void {
        C.QInputDevice_AvailableVirtualGeometryChanged(@ptrCast(self), @ptrCast(area));
    }

    /// Inherited from QInputDevice
    ///
    /// ``` self: ?*C.QInputDevice, slot: fn (?*C.QInputDevice, ?*C.QRect) callconv(.c) void ```
    pub fn OnAvailableVirtualGeometryChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*C.QRect) callconv(.c) void) void {
        C.QInputDevice_Connect_AvailableVirtualGeometryChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QInputDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#primaryKeyboard)
    ///
    /// ``` seatName: []const u8 ```
    pub fn PrimaryKeyboard1(seatName: []const u8) ?*C.QInputDevice {
        const seatName_str = C.struct_libqt_string{
            .len = seatName.len,
            .data = @constCast(seatName.ptr),
        };
        return C.QInputDevice_PrimaryKeyboard1(seatName_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QPointingDevice, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QObject_ObjectName(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: ?*C.QPointingDevice, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QPointingDevice ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QPointingDevice ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QPointingDevice ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QPointingDevice ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QPointingDevice, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QPointingDevice ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QPointingDevice, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QPointingDevice, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QPointingDevice, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QPointingDevice, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QObject {
        const _arr: C.struct_libqt_list = C.QObject_Children(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QObject, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: ?*C.QPointingDevice, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QPointingDevice, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QPointingDevice, obj: ?*C.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        C.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) ?*C.QMetaObject__Connection {
        return C.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QPointingDevice, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, member: ?*C.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return C.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: ?*C.QMetaObject__Connection ```
    pub fn DisconnectWithQMetaObjectConnection(param1: ?*anyopaque) bool {
        return C.QObject_DisconnectWithQMetaObjectConnection(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: ?*C.QPointingDevice ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QPointingDevice ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QPointingDevice, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QPointingDevice, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QPointingDevice, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: C.struct_libqt_list = C.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QPointingDevice ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QPointingDevice ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QPointingDevice ```
    pub fn Destroyed(self: ?*anyopaque) void {
        C.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: ?*C.QPointingDevice ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QPointingDevice, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QPointingDevice ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QPointingDevice, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer2(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return C.QObject_StartTimer2(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) ?*C.QMetaObject__Connection {
        return C.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QPointingDevice, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QPointingDevice, param1: ?*C.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject, ?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPointingDevice, event: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QPointingDevice_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPointingDevice, event: ?*C.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QPointingDevice_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPointingDevice, slot: fn (?*C.QPointingDevice, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QPointingDevice_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPointingDevice, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QPointingDevice_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPointingDevice, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QPointingDevice_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPointingDevice, slot: fn (?*C.QPointingDevice, ?*C.QObject, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QPointingDevice_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPointingDevice, event: ?*C.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPointingDevice_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPointingDevice, event: ?*C.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPointingDevice_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPointingDevice, slot: fn (?*C.QPointingDevice, ?*C.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QPointingDevice_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPointingDevice, event: ?*C.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPointingDevice_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPointingDevice, event: ?*C.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPointingDevice_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPointingDevice, slot: fn (?*C.QPointingDevice, ?*C.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QPointingDevice_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPointingDevice, event: ?*C.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPointingDevice_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPointingDevice, event: ?*C.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPointingDevice_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPointingDevice, slot: fn (?*C.QPointingDevice, ?*C.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QPointingDevice_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPointingDevice, signal: ?*C.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QPointingDevice_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPointingDevice, signal: ?*C.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QPointingDevice_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPointingDevice, slot: fn (?*C.QPointingDevice, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QPointingDevice_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPointingDevice, signal: ?*C.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QPointingDevice_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPointingDevice, signal: ?*C.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QPointingDevice_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPointingDevice, slot: fn (?*C.QPointingDevice, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QPointingDevice_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPointingDevice ```
    pub fn Sender(self: ?*anyopaque) ?*C.QObject {
        return C.QPointingDevice_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPointingDevice ```
    pub fn QBaseSender(self: ?*anyopaque) ?*C.QObject {
        return C.QPointingDevice_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPointingDevice, slot: fn () callconv(.c) ?*C.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QObject) void {
        C.QPointingDevice_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPointingDevice ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QPointingDevice_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPointingDevice ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QPointingDevice_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPointingDevice, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QPointingDevice_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPointingDevice, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QPointingDevice_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPointingDevice, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QPointingDevice_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPointingDevice, slot: fn (?*C.QPointingDevice, []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        C.QPointingDevice_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPointingDevice, signal: ?*C.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QPointingDevice_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPointingDevice, signal: ?*C.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QPointingDevice_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPointingDevice, slot: fn (?*C.QPointingDevice, ?*C.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QPointingDevice_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QPointingDevice ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QPointingDevice_Delete(@ptrCast(self));
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
