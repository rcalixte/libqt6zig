const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const Solid__DeviceInterface = @import("libqt6").Solid__DeviceInterface;
const Solid__Predicate = @import("libqt6").Solid__Predicate;
const deviceinterface_enums = @import("libdeviceinterface.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/solid-device.html)
pub const Solid__Device = extern struct {
    /// ### [Upstream resources](https://api.kde.org/solid-device.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Solid__Device,

    pub const _is_Solid__Device = {};

    /// New constructs a new Solid::Device object.
    ///
    pub fn New() Solid__Device {
        return .{ .ptr = qtc.Solid__Device_new() };
    }

    /// New2 constructs a new Solid::Device object.
    ///
    /// ## Parameter(s):
    ///
    /// ` device: Solid__Device `
    ///
    pub fn New2(device: anytype) Solid__Device {
        comptime _ = @TypeOf(device)._is_Solid__Device;
        return .{ .ptr = qtc.Solid__Device_new2(@ptrCast(device.ptr)) };
    }

    /// New3 constructs a new Solid::Device object.
    ///
    /// ## Parameter(s):
    ///
    /// ` udi: []const u8 `
    ///
    pub fn New3(udi: []const u8) Solid__Device {
        const udi_str = qtc.libqt_string{
            .len = udi.len,
            .data = udi.ptr,
        };
        return .{ .ptr = qtc.Solid__Device_new3(udi_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#allDevices)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AllDevices(allocator: std.mem.Allocator) []Solid__Device {
        const _arr: qtc.libqt_list = qtc.Solid__Device_AllDevices();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Solid__Device, _arr.len) catch @panic("solid__device.AllDevices: Memory allocation failed");
        const _data: [*]QtC.Solid__Device = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#listFromType)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` typeVal: *const deviceinterface_enums.Type `
    ///
    pub fn ListFromType(allocator: std.mem.Allocator, typeVal: *const i32) []Solid__Device {
        const _arr: qtc.libqt_list = qtc.Solid__Device_ListFromType(@ptrCast(typeVal));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Solid__Device, _arr.len) catch @panic("solid__device.ListFromType: Memory allocation failed");
        const _data: [*]QtC.Solid__Device = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#listFromQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` predicate: Solid__Predicate `
    ///
    pub fn ListFromQuery(allocator: std.mem.Allocator, predicate: anytype) []Solid__Device {
        comptime _ = @TypeOf(predicate)._is_Solid__Predicate;
        const _arr: qtc.libqt_list = qtc.Solid__Device_ListFromQuery(@ptrCast(predicate.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Solid__Device, _arr.len) catch @panic("solid__device.ListFromQuery: Memory allocation failed");
        const _data: [*]QtC.Solid__Device = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#listFromQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` predicate: []const u8 `
    ///
    pub fn ListFromQuery2(allocator: std.mem.Allocator, predicate: []const u8) []Solid__Device {
        const predicate_str = qtc.libqt_string{
            .len = predicate.len,
            .data = predicate.ptr,
        };
        const _arr: qtc.libqt_list = qtc.Solid__Device_ListFromQuery2(predicate_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Solid__Device, _arr.len) catch @panic("solid__device.ListFromQuery2: Memory allocation failed");
        const _data: [*]QtC.Solid__Device = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#storageAccessFromPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` path: []const u8 `
    ///
    pub fn StorageAccessFromPath(path: []const u8) Solid__Device {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        return .{ .ptr = qtc.Solid__Device_StorageAccessFromPath(path_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Device `
    ///
    /// ` device: Solid__Device `
    ///
    pub fn OperatorAssign(self: Solid__Device, device: anytype) void {
        comptime _ = @TypeOf(device)._is_Solid__Device;
        qtc.Solid__Device_OperatorAssign(@ptrCast(self.ptr), @ptrCast(device.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Device `
    ///
    pub fn IsValid(self: Solid__Device) bool {
        return qtc.Solid__Device_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#udi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Device `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Udi(self: Solid__Device, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Solid__Device_Udi(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("solid__device.Udi: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#parentUdi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Device `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ParentUdi(self: Solid__Device, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Solid__Device_ParentUdi(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("solid__device.ParentUdi: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Device `
    ///
    pub fn Parent(self: Solid__Device) Solid__Device {
        return .{ .ptr = qtc.Solid__Device_Parent(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#vendor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Device `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Vendor(self: Solid__Device, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Solid__Device_Vendor(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("solid__device.Vendor: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#product)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Device `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Product(self: Solid__Device, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Solid__Device_Product(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("solid__device.Product: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Device `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Icon(self: Solid__Device, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Solid__Device_Icon(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("solid__device.Icon: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#emblems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Device `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Emblems(self: Solid__Device, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.Solid__Device_Emblems(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ` self: Solid__Device `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DisplayName(self: Solid__Device, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Solid__Device_DisplayName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("solid__device.DisplayName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#description)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Device `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Description(self: Solid__Device, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Solid__Device_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("solid__device.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#isDeviceInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Device `
    ///
    /// ` typeVal: *const deviceinterface_enums.Type `
    ///
    pub fn IsDeviceInterface(self: Solid__Device, typeVal: *const i32) bool {
        return qtc.Solid__Device_IsDeviceInterface(@ptrCast(self.ptr), @ptrCast(typeVal));
    }

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#asDeviceInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Device `
    ///
    /// ` typeVal: *const deviceinterface_enums.Type `
    ///
    pub fn AsDeviceInterface(self: Solid__Device, typeVal: *const i32) Solid__DeviceInterface {
        return .{ .ptr = qtc.Solid__Device_AsDeviceInterface(@ptrCast(self.ptr), @ptrCast(typeVal)) };
    }

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#asDeviceInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Device `
    ///
    /// ` typeVal: *const deviceinterface_enums.Type `
    ///
    pub fn AsDeviceInterface2(self: Solid__Device, typeVal: *const i32) Solid__DeviceInterface {
        return .{ .ptr = qtc.Solid__Device_AsDeviceInterface2(@ptrCast(self.ptr), @ptrCast(typeVal)) };
    }

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#listFromType)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` typeVal: *const deviceinterface_enums.Type `
    ///
    /// ` parentUdi: []const u8 `
    ///
    pub fn ListFromType2(allocator: std.mem.Allocator, typeVal: *const i32, parentUdi: []const u8) []Solid__Device {
        const parentUdi_str = qtc.libqt_string{
            .len = parentUdi.len,
            .data = parentUdi.ptr,
        };
        const _arr: qtc.libqt_list = qtc.Solid__Device_ListFromType2(@ptrCast(typeVal), parentUdi_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Solid__Device, _arr.len) catch @panic("solid__device.ListFromType2: Memory allocation failed");
        const _data: [*]QtC.Solid__Device = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#listFromQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` predicate: Solid__Predicate `
    ///
    /// ` parentUdi: []const u8 `
    ///
    pub fn ListFromQuery22(allocator: std.mem.Allocator, predicate: anytype, parentUdi: []const u8) []Solid__Device {
        comptime _ = @TypeOf(predicate)._is_Solid__Predicate;
        const parentUdi_str = qtc.libqt_string{
            .len = parentUdi.len,
            .data = parentUdi.ptr,
        };
        const _arr: qtc.libqt_list = qtc.Solid__Device_ListFromQuery22(@ptrCast(predicate.ptr), parentUdi_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Solid__Device, _arr.len) catch @panic("solid__device.ListFromQuery22: Memory allocation failed");
        const _data: [*]QtC.Solid__Device = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#listFromQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` predicate: []const u8 `
    ///
    /// ` parentUdi: []const u8 `
    ///
    pub fn ListFromQuery23(allocator: std.mem.Allocator, predicate: []const u8, parentUdi: []const u8) []Solid__Device {
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
        const _ret = allocator.alloc(Solid__Device, _arr.len) catch @panic("solid__device.ListFromQuery23: Memory allocation failed");
        const _data: [*]QtC.Solid__Device = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Solid__Device `
    ///
    pub fn Delete(self: Solid__Device) void {
        qtc.Solid__Device_Delete(@ptrCast(self.ptr));
    }
};
