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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Solid::Device object in C++ memory
    ///
    pub fn new() Solid__Device {
        return .{ .ptr = qtc.Solid__Device_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Solid::Device object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` device: Solid__Device `
    ///
    pub fn new2(device: anytype) Solid__Device {
        comptime _ = @TypeOf(device)._is_Solid__Device;
        return .{ .ptr = qtc.Solid__Device_new2(@ptrCast(device.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new Solid::Device object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _udi: []const u8 `
    ///
    pub fn new3(_udi: []const u8) Solid__Device {
        const udi_str = qtc.libqt_string{
            .len = _udi.len,
            .data = _udi.ptr,
        };
        return .{ .ptr = qtc.Solid__Device_new3(udi_str) };
    }

    /// ### DEPRECATED: Use `allDevices` instead
    ///
    pub const AllDevices = allDevices;

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#allDevices)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn allDevices(allocator: std.mem.Allocator) []Solid__Device {
        const _arr: qtc.libqt_list = qtc.Solid__Device_AllDevices();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Solid__Device, _arr.len) catch @panic("Solid__Device.allDevices: Memory allocation failed");
        const _data_val: [*]QtC.Solid__Device = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `listFromType` instead
    ///
    pub const ListFromType = listFromType;

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#listFromType)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` typeVal: *const deviceinterface_enums.Type `
    ///
    pub fn listFromType(allocator: std.mem.Allocator, typeVal: *const i32) []Solid__Device {
        const _arr: qtc.libqt_list = qtc.Solid__Device_ListFromType(@ptrCast(typeVal));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Solid__Device, _arr.len) catch @panic("Solid__Device.listFromType: Memory allocation failed");
        const _data_val: [*]QtC.Solid__Device = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `listFromQuery` instead
    ///
    pub const ListFromQuery = listFromQuery;

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#listFromQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` predicate: Solid__Predicate `
    ///
    pub fn listFromQuery(allocator: std.mem.Allocator, predicate: anytype) []Solid__Device {
        comptime _ = @TypeOf(predicate)._is_Solid__Predicate;
        const _arr: qtc.libqt_list = qtc.Solid__Device_ListFromQuery(@ptrCast(predicate.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Solid__Device, _arr.len) catch @panic("Solid__Device.listFromQuery: Memory allocation failed");
        const _data_val: [*]QtC.Solid__Device = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `listFromQuery2` instead
    ///
    pub const ListFromQuery2 = listFromQuery2;

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#listFromQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` predicate: []const u8 `
    ///
    pub fn listFromQuery2(allocator: std.mem.Allocator, predicate: []const u8) []Solid__Device {
        const predicate_str = qtc.libqt_string{
            .len = predicate.len,
            .data = predicate.ptr,
        };
        const _arr: qtc.libqt_list = qtc.Solid__Device_ListFromQuery2(predicate_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Solid__Device, _arr.len) catch @panic("Solid__Device.listFromQuery2: Memory allocation failed");
        const _data_val: [*]QtC.Solid__Device = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `storageAccessFromPath` instead
    ///
    pub const StorageAccessFromPath = storageAccessFromPath;

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#storageAccessFromPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` path: []const u8 `
    ///
    pub fn storageAccessFromPath(path: []const u8) Solid__Device {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        return .{ .ptr = qtc.Solid__Device_StorageAccessFromPath(path_str) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Device `
    ///
    /// ` device: Solid__Device `
    ///
    pub fn operatorAssign(self: Solid__Device, device: anytype) void {
        comptime _ = @TypeOf(device)._is_Solid__Device;
        qtc.Solid__Device_OperatorAssign(@ptrCast(self.ptr), @ptrCast(device.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Device `
    ///
    pub fn isValid(self: Solid__Device) bool {
        return qtc.Solid__Device_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `udi` instead
    ///
    pub const Udi = udi;

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#udi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Device `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn udi(self: Solid__Device, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Solid__Device_Udi(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Solid__Device.udi: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `parentUdi` instead
    ///
    pub const ParentUdi = parentUdi;

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#parentUdi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Device `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn parentUdi(self: Solid__Device, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Solid__Device_ParentUdi(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Solid__Device.parentUdi: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Device `
    ///
    pub fn parent(self: Solid__Device) Solid__Device {
        return .{ .ptr = qtc.Solid__Device_Parent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `vendor` instead
    ///
    pub const Vendor = vendor;

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#vendor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Device `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn vendor(self: Solid__Device, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Solid__Device_Vendor(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Solid__Device.vendor: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `product` instead
    ///
    pub const Product = product;

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#product)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Device `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn product(self: Solid__Device, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Solid__Device_Product(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Solid__Device.product: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `icon` instead
    ///
    pub const Icon = icon;

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Device `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn icon(self: Solid__Device, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Solid__Device_Icon(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Solid__Device.icon: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `emblems` instead
    ///
    pub const Emblems = emblems;

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#emblems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Device `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn emblems(self: Solid__Device, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.Solid__Device_Emblems(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("Solid__Device.emblems: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("Solid__Device.emblems: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `displayName` instead
    ///
    pub const DisplayName = displayName;

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#displayName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Device `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn displayName(self: Solid__Device, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Solid__Device_DisplayName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Solid__Device.displayName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `description` instead
    ///
    pub const Description = description;

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#description)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Device `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn description(self: Solid__Device, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Solid__Device_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Solid__Device.description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isDeviceInterface` instead
    ///
    pub const IsDeviceInterface = isDeviceInterface;

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#isDeviceInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Device `
    ///
    /// ` typeVal: *const deviceinterface_enums.Type `
    ///
    pub fn isDeviceInterface(self: Solid__Device, typeVal: *const i32) bool {
        return qtc.Solid__Device_IsDeviceInterface(@ptrCast(self.ptr), @ptrCast(typeVal));
    }

    /// ### DEPRECATED: Use `asDeviceInterface` instead
    ///
    pub const AsDeviceInterface = asDeviceInterface;

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#asDeviceInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Device `
    ///
    /// ` typeVal: *const deviceinterface_enums.Type `
    ///
    pub fn asDeviceInterface(self: Solid__Device, typeVal: *const i32) Solid__DeviceInterface {
        return .{ .ptr = qtc.Solid__Device_AsDeviceInterface(@ptrCast(self.ptr), @ptrCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `asDeviceInterface2` instead
    ///
    pub const AsDeviceInterface2 = asDeviceInterface2;

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#asDeviceInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Solid__Device `
    ///
    /// ` typeVal: *const deviceinterface_enums.Type `
    ///
    pub fn asDeviceInterface2(self: Solid__Device, typeVal: *const i32) Solid__DeviceInterface {
        return .{ .ptr = qtc.Solid__Device_AsDeviceInterface2(@ptrCast(self.ptr), @ptrCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `listFromType2` instead
    ///
    pub const ListFromType2 = listFromType2;

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#listFromType)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` typeVal: *const deviceinterface_enums.Type `
    ///
    /// ` _parentUdi: []const u8 `
    ///
    pub fn listFromType2(allocator: std.mem.Allocator, typeVal: *const i32, _parentUdi: []const u8) []Solid__Device {
        const parentUdi_str = qtc.libqt_string{
            .len = _parentUdi.len,
            .data = _parentUdi.ptr,
        };
        const _arr: qtc.libqt_list = qtc.Solid__Device_ListFromType2(@ptrCast(typeVal), parentUdi_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Solid__Device, _arr.len) catch @panic("Solid__Device.listFromType2: Memory allocation failed");
        const _data_val: [*]QtC.Solid__Device = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `listFromQuery22` instead
    ///
    pub const ListFromQuery22 = listFromQuery22;

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#listFromQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` predicate: Solid__Predicate `
    ///
    /// ` _parentUdi: []const u8 `
    ///
    pub fn listFromQuery22(allocator: std.mem.Allocator, predicate: anytype, _parentUdi: []const u8) []Solid__Device {
        comptime _ = @TypeOf(predicate)._is_Solid__Predicate;
        const parentUdi_str = qtc.libqt_string{
            .len = _parentUdi.len,
            .data = _parentUdi.ptr,
        };
        const _arr: qtc.libqt_list = qtc.Solid__Device_ListFromQuery22(@ptrCast(predicate.ptr), parentUdi_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Solid__Device, _arr.len) catch @panic("Solid__Device.listFromQuery22: Memory allocation failed");
        const _data_val: [*]QtC.Solid__Device = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `listFromQuery23` instead
    ///
    pub const ListFromQuery23 = listFromQuery23;

    /// ### [Upstream resources](https://api.kde.org/solid-device.html#listFromQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` predicate: []const u8 `
    ///
    /// ` _parentUdi: []const u8 `
    ///
    pub fn listFromQuery23(allocator: std.mem.Allocator, predicate: []const u8, _parentUdi: []const u8) []Solid__Device {
        const predicate_str = qtc.libqt_string{
            .len = predicate.len,
            .data = predicate.ptr,
        };
        const parentUdi_str = qtc.libqt_string{
            .len = _parentUdi.len,
            .data = _parentUdi.ptr,
        };
        const _arr: qtc.libqt_list = qtc.Solid__Device_ListFromQuery23(predicate_str, parentUdi_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Solid__Device, _arr.len) catch @panic("Solid__Device.listFromQuery23: Memory allocation failed");
        const _data_val: [*]QtC.Solid__Device = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Solid__Device `
    ///
    pub fn delete(self: Solid__Device) void {
        qtc.Solid__Device_Delete(@ptrCast(self.ptr));
    }
};
