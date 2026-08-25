const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QVariant = @import("libqt6").QVariant;
const std = @import("std");
const ArrayMap_constu8_QVariant = std.array_hash_map.String(QVariant);

/// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
pub const SignOn__SessionData = extern struct {
    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.SignOn__SessionData,

    pub const _is_SignOn__SessionData = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new SignOn::SessionData object in C++ memory
    ///
    pub fn new() SignOn__SessionData {
        return .{ .ptr = qtc.SignOn__SessionData_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new SignOn::SessionData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: SignOn__SessionData `
    ///
    pub fn new2(other: anytype) SignOn__SessionData {
        comptime _ = @TypeOf(other)._is_SignOn__SessionData;
        return .{ .ptr = qtc.SignOn__SessionData_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new SignOn::SessionData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` data: ArrayMap_constu8_QVariant `
    ///
    pub fn new3(allocator: std.mem.Allocator, data: ArrayMap_constu8_QVariant) SignOn__SessionData {
        const data_count = data.count();
        const data_keys = allocator.alloc(qtc.libqt_string, data_count) catch @panic("SignOn__SessionData.new3: Memory allocation failed");
        defer allocator.free(data_keys);
        const data_values = allocator.alloc(QtC.QVariant, data_count) catch @panic("SignOn__SessionData.new3: Memory allocation failed");
        defer allocator.free(data_values);
        var i: usize = 0;
        var data_it = data.iterator();
        while (data_it.next()) |it_entry| : (i += 1) {
            const data_key = it_entry.key_ptr.*;
            data_keys[i] = qtc.libqt_string{
                .len = data_key.len,
                .data = data_key.ptr,
            };
            data_values[i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const data_map = qtc.libqt_map{
            .len = data_count,
            .keys = @ptrCast(data_keys.ptr),
            .values = @ptrCast(data_values.ptr),
        };
        return .{ .ptr = qtc.SignOn__SessionData_new3(data_map) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__SessionData `
    ///
    /// ` other: SignOn__SessionData `
    ///
    pub fn operatorAssign(self: SignOn__SessionData, other: anytype) void {
        comptime _ = @TypeOf(other)._is_SignOn__SessionData;
        qtc.SignOn__SessionData_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorPlusAssign` instead
    ///
    pub const OperatorPlusAssign = operatorPlusAssign;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__SessionData `
    ///
    /// ` other: SignOn__SessionData `
    ///
    pub fn operatorPlusAssign(self: SignOn__SessionData, other: anytype) SignOn__SessionData {
        comptime _ = @TypeOf(other)._is_SignOn__SessionData;
        return .{ .ptr = qtc.SignOn__SessionData_OperatorPlusAssign(@ptrCast(self.ptr), @ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `propertyNames` instead
    ///
    pub const PropertyNames = propertyNames;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__SessionData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn propertyNames(self: SignOn__SessionData, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.SignOn__SessionData_PropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("SignOn__SessionData.propertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("SignOn__SessionData.propertyNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `getProperty` instead
    ///
    pub const GetProperty = getProperty;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__SessionData `
    ///
    /// ` propertyName: []const u8 `
    ///
    pub fn getProperty(self: SignOn__SessionData, propertyName: []const u8) QVariant {
        const propertyName_str = qtc.libqt_string{
            .len = propertyName.len,
            .data = propertyName.ptr,
        };
        return .{ .ptr = qtc.SignOn__SessionData_GetProperty(@ptrCast(self.ptr), propertyName_str) };
    }

    /// ### DEPRECATED: Use `getAccessControlTokens` instead
    ///
    pub const GetAccessControlTokens = getAccessControlTokens;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__SessionData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn getAccessControlTokens(self: SignOn__SessionData, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.SignOn__SessionData_GetAccessControlTokens(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("SignOn__SessionData.getAccessControlTokens: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("SignOn__SessionData.getAccessControlTokens: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `toMap` instead
    ///
    pub const ToMap = toMap;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__SessionData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toMap(self: SignOn__SessionData, allocator: std.mem.Allocator) ArrayMap_constu8_QVariant {
        const _map: qtc.libqt_map = qtc.SignOn__SessionData_ToMap(@ptrCast(self.ptr));
        var _ret: ArrayMap_constu8_QVariant = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("SignOn__SessionData.toMap: Total capacity allocation failed");
        defer {
            const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
            for (0.._map.len) |i| {
                qtc.libqt_free(_keys[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
        const _values: [*]QtC.QVariant = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("SignOn__SessionData.toMap: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            _ret.putAssumeCapacity(_entry_slice, .{ .ptr = @ptrCast(_value) });
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setSecret` instead
    ///
    pub const SetSecret = setSecret;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__SessionData `
    ///
    /// ` value: []const u8 `
    ///
    pub fn setSecret(self: SignOn__SessionData, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.SignOn__SessionData_SetSecret(@ptrCast(self.ptr), value_str);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__SessionData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Secret(self: SignOn__SessionData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.SignOn__SessionData_Secret(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("SignOn__SessionData.Secret: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setUserName` instead
    ///
    pub const SetUserName = setUserName;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__SessionData `
    ///
    /// ` value: []const u8 `
    ///
    pub fn setUserName(self: SignOn__SessionData, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.SignOn__SessionData_SetUserName(@ptrCast(self.ptr), value_str);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__SessionData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn UserName(self: SignOn__SessionData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.SignOn__SessionData_UserName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("SignOn__SessionData.UserName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setRealm` instead
    ///
    pub const SetRealm = setRealm;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__SessionData `
    ///
    /// ` value: []const u8 `
    ///
    pub fn setRealm(self: SignOn__SessionData, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.SignOn__SessionData_SetRealm(@ptrCast(self.ptr), value_str);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__SessionData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Realm(self: SignOn__SessionData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.SignOn__SessionData_Realm(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("SignOn__SessionData.Realm: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setNetworkProxy` instead
    ///
    pub const SetNetworkProxy = setNetworkProxy;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__SessionData `
    ///
    /// ` value: []const u8 `
    ///
    pub fn setNetworkProxy(self: SignOn__SessionData, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.SignOn__SessionData_SetNetworkProxy(@ptrCast(self.ptr), value_str);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__SessionData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NetworkProxy(self: SignOn__SessionData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.SignOn__SessionData_NetworkProxy(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("SignOn__SessionData.NetworkProxy: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setUiPolicy` instead
    ///
    pub const SetUiPolicy = setUiPolicy;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__SessionData `
    ///
    /// ` value: *const i32 `
    ///
    pub fn setUiPolicy(self: SignOn__SessionData, value: *const i32) void {
        qtc.SignOn__SessionData_SetUiPolicy(@ptrCast(self.ptr), @ptrCast(value));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__SessionData `
    ///
    pub fn UiPolicy(self: SignOn__SessionData) i32 {
        return qtc.SignOn__SessionData_UiPolicy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCaption` instead
    ///
    pub const SetCaption = setCaption;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__SessionData `
    ///
    /// ` value: []const u8 `
    ///
    pub fn setCaption(self: SignOn__SessionData, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.SignOn__SessionData_SetCaption(@ptrCast(self.ptr), value_str);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__SessionData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Caption(self: SignOn__SessionData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.SignOn__SessionData_Caption(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("SignOn__SessionData.Caption: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setNetworkTimeout` instead
    ///
    pub const SetNetworkTimeout = setNetworkTimeout;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__SessionData `
    ///
    /// ` value: *const u32 `
    ///
    pub fn setNetworkTimeout(self: SignOn__SessionData, value: *const u32) void {
        qtc.SignOn__SessionData_SetNetworkTimeout(@ptrCast(self.ptr), @ptrCast(value));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__SessionData `
    ///
    pub fn NetworkTimeout(self: SignOn__SessionData) u32 {
        return qtc.SignOn__SessionData_NetworkTimeout(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWindowId` instead
    ///
    pub const SetWindowId = setWindowId;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__SessionData `
    ///
    /// ` value: *const u32 `
    ///
    pub fn setWindowId(self: SignOn__SessionData, value: *const u32) void {
        qtc.SignOn__SessionData_SetWindowId(@ptrCast(self.ptr), @ptrCast(value));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__SessionData `
    ///
    pub fn WindowId(self: SignOn__SessionData) u32 {
        return qtc.SignOn__SessionData_WindowId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRenewToken` instead
    ///
    pub const SetRenewToken = setRenewToken;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__SessionData `
    ///
    /// ` value: *bool `
    ///
    pub fn setRenewToken(self: SignOn__SessionData, value: *const bool) void {
        qtc.SignOn__SessionData_SetRenewToken(@ptrCast(self.ptr), @ptrCast(value));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__SessionData `
    ///
    pub fn RenewToken(self: SignOn__SessionData) bool {
        return qtc.SignOn__SessionData_RenewToken(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: SignOn__SessionData `
    ///
    pub fn delete(self: SignOn__SessionData) void {
        qtc.SignOn__SessionData_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Sessiondata.html)
pub const enums = struct {
    pub const SignonUiPolicy = enum {
        pub const DefaultPolicy: i32 = 0;
        pub const RequestPasswordPolicy: i32 = 1;
        pub const NoUserInteractionPolicy: i32 = 2;
        pub const ValidationPolicy: i32 = 3;
    };
};
