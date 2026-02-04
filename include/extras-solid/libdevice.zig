const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const deviceinterface_enums = @import("libdeviceinterface.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/solid-device.html)
pub const solid__device = struct {
    /// New constructs a new Solid::Device object.
    ///
    pub fn New() QtC.Solid__Device {
        return qtc.Solid__Device_new();
    }

    /// New2 constructs a new Solid::Device object.
    ///
    /// ## Parameter(s):
    ///
    /// ` device: QtC.Solid__Device `
    ///
    pub fn New2(device: ?*anyopaque) QtC.Solid__Device {
        return qtc.Solid__Device_new2(@ptrCast(device));
    }

    /// New3 constructs a new Solid::Device object.
    ///
    /// ## Parameter(s):
    ///
    /// ` udi: []const u8 `
    ///
    pub fn New3(udi: []const u8) QtC.Solid__Device {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };

        return qtc.Solid__Device_new3(udi_str);
    }

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#allDevices)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AllDevices(allocator: std.mem.Allocator) []QtC.Solid__Device {
        const _arr: qtc.libqt_list = qtc.Solid__Device_AllDevices();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Solid__Device, _arr.len) catch @panic("solid__device.AllDevices: Memory allocation failed");
        const _data: [*]QtC.Solid__Device = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#listFromType)
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: *const deviceinterface_enums.Type `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ListFromType(typeVal: *const i32, allocator: std.mem.Allocator) []QtC.Solid__Device {
        const _arr: qtc.libqt_list = qtc.Solid__Device_ListFromType(@ptrCast(typeVal));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Solid__Device, _arr.len) catch @panic("solid__device.ListFromType: Memory allocation failed");
        const _data: [*]QtC.Solid__Device = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#listFromQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` predicate: QtC.Solid__Predicate `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ListFromQuery(predicate: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Solid__Device {
        const _arr: qtc.libqt_list = qtc.Solid__Device_ListFromQuery(@ptrCast(predicate));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Solid__Device, _arr.len) catch @panic("solid__device.ListFromQuery: Memory allocation failed");
        const _data: [*]QtC.Solid__Device = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#listFromQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` predicate: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ListFromQuery2(predicate: []const u8, allocator: std.mem.Allocator) []QtC.Solid__Device {
        const predicate_str = qtc.libqt_string{
            .len = predicate.len,
            .data = predicate.ptr,
        };
        const _arr: qtc.libqt_list = qtc.Solid__Device_ListFromQuery2(predicate_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Solid__Device, _arr.len) catch @panic("solid__device.ListFromQuery2: Memory allocation failed");
        const _data: [*]QtC.Solid__Device = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#storageAccessFromPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` path: []const u8 `
    ///
    pub fn StorageAccessFromPath(path: []const u8) QtC.Solid__Device {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        return qtc.Solid__Device_StorageAccessFromPath(path_str);
    }

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Device `
    ///
    /// ` device: QtC.Solid__Device `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, device: ?*anyopaque) void {
        qtc.Solid__Device_OperatorAssign(@ptrCast(self), @ptrCast(device));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Device `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.Solid__Device_IsValid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#udi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Device `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Udi(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Solid__Device_Udi(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("solid__device.Udi: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#parentUdi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Device `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ParentUdi(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Solid__Device_ParentUdi(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("solid__device.ParentUdi: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Device `
    ///
    pub fn Parent(self: ?*anyopaque) QtC.Solid__Device {
        return qtc.Solid__Device_Parent(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#vendor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Device `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Vendor(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Solid__Device_Vendor(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("solid__device.Vendor: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#product)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Device `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Product(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Solid__Device_Product(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("solid__device.Product: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Device `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Icon(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Solid__Device_Icon(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("solid__device.Icon: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#emblems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Device `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Emblems(self: ?*anyopaque, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.Solid__Device_Emblems(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("solid__device.Emblems: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("solid__device.Emblems: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#displayName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Device `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DisplayName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Solid__Device_DisplayName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("solid__device.DisplayName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#description)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Device `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Description(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Solid__Device_Description(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("solid__device.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#isDeviceInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Device `
    ///
    /// ` typeVal: *const deviceinterface_enums.Type `
    ///
    pub fn IsDeviceInterface(self: ?*anyopaque, typeVal: *const i32) bool {
        return qtc.Solid__Device_IsDeviceInterface(@ptrCast(self), @ptrCast(typeVal));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#asDeviceInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Device `
    ///
    /// ` typeVal: *const deviceinterface_enums.Type `
    ///
    pub fn AsDeviceInterface(self: ?*anyopaque, typeVal: *const i32) QtC.Solid__DeviceInterface {
        return qtc.Solid__Device_AsDeviceInterface(@ptrCast(self), @ptrCast(typeVal));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#asDeviceInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Solid__Device `
    ///
    /// ` typeVal: *const deviceinterface_enums.Type `
    ///
    pub fn AsDeviceInterface2(self: ?*anyopaque, typeVal: *const i32) QtC.Solid__DeviceInterface {
        return qtc.Solid__Device_AsDeviceInterface2(@ptrCast(self), @ptrCast(typeVal));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#listFromType)
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: *const deviceinterface_enums.Type `
    ///
    /// ` parentUdi: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ListFromType2(typeVal: *const i32, parentUdi: []const u8, allocator: std.mem.Allocator) []QtC.Solid__Device {
        const parentUdi_str = qtc.libqt_string{
            .len = parentUdi.len,
            .data = parentUdi.ptr,
        };
        const _arr: qtc.libqt_list = qtc.Solid__Device_ListFromType2(@ptrCast(typeVal), parentUdi_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Solid__Device, _arr.len) catch @panic("solid__device.ListFromType2: Memory allocation failed");
        const _data: [*]QtC.Solid__Device = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#listFromQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` predicate: QtC.Solid__Predicate `
    ///
    /// ` parentUdi: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ListFromQuery22(predicate: ?*anyopaque, parentUdi: []const u8, allocator: std.mem.Allocator) []QtC.Solid__Device {
        const parentUdi_str = qtc.libqt_string{
            .len = parentUdi.len,
            .data = parentUdi.ptr,
        };
        const _arr: qtc.libqt_list = qtc.Solid__Device_ListFromQuery22(@ptrCast(predicate), parentUdi_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Solid__Device, _arr.len) catch @panic("solid__device.ListFromQuery22: Memory allocation failed");
        const _data: [*]QtC.Solid__Device = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#listFromQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` predicate: []const u8 `
    ///
    /// ` parentUdi: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ListFromQuery23(predicate: []const u8, parentUdi: []const u8, allocator: std.mem.Allocator) []QtC.Solid__Device {
        const predicate_str = qtc.libqt_string{
            .len = predicate.len,
            .data = predicate.ptr,
        };
        const parentUdi_str = qtc.libqt_string{
            .len = parentUdi.len,
            .data = parentUdi.ptr,
        };
        const _arr: qtc.libqt_list = qtc.Solid__Device_ListFromQuery23(predicate_str, parentUdi_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Solid__Device, _arr.len) catch @panic("solid__device.ListFromQuery23: Memory allocation failed");
        const _data: [*]QtC.Solid__Device = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.Solid__Device `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Solid__Device_Delete(@ptrCast(self));
    }
};
