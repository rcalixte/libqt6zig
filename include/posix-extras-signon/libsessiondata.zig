const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");
const map_constu8_qtcqvariant = std.StringHashMapUnmanaged(QtC.QVariant);

/// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
pub const signon__sessiondata = struct {
    /// New constructs a new SignOn::SessionData object.
    ///
    pub fn New() QtC.SignOn__SessionData {
        return qtc.SignOn__SessionData_new();
    }

    /// New2 constructs a new SignOn::SessionData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.SignOn__SessionData `
    ///
    pub fn New2(other: ?*anyopaque) QtC.SignOn__SessionData {
        return qtc.SignOn__SessionData_new2(@ptrCast(other));
    }

    /// New3 constructs a new SignOn::SessionData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` data: map_constu8_qtcqvariant `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn New3(data: map_constu8_qtcqvariant, allocator: std.mem.Allocator) QtC.SignOn__SessionData {
        const data_count = data.count();
        const data_keys = allocator.alloc(qtc.libqt_string, data_count) catch @panic("signon__sessiondata.New3: Memory allocation failed");
        defer allocator.free(data_keys);
        const data_values = allocator.alloc(QtC.QVariant, data_count) catch @panic("signon__sessiondata.New3: Memory allocation failed");
        defer allocator.free(data_values);
        var i: usize = 0;
        var data_it = data.iterator();
        while (data_it.next()) |it_entry| : (i += 1) {
            const data_key = it_entry.key_ptr.*;
            data_keys[i] = qtc.libqt_string{
                .len = data_key.len,
                .data = data_key.ptr,
            };
            data_values[i] = @ptrCast(it_entry.value_ptr.*);
        }
        const data_map = qtc.libqt_map{
            .len = data_count,
            .keys = @ptrCast(data_keys.ptr),
            .values = @ptrCast(data_values.ptr),
        };

        return qtc.SignOn__SessionData_new3(data_map);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.SignOn__SessionData `
    ///
    /// ` other: QtC.SignOn__SessionData `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.SignOn__SessionData_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.SignOn__SessionData `
    ///
    /// ` other: QtC.SignOn__SessionData `
    ///
    pub fn OperatorPlusAssign(self: ?*anyopaque, other: ?*anyopaque) QtC.SignOn__SessionData {
        return qtc.SignOn__SessionData_OperatorPlusAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.SignOn__SessionData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.SignOn__SessionData_PropertyNames(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("signon__sessiondata.PropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("signon__sessiondata.PropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.SignOn__SessionData `
    ///
    /// ` propertyName: []const u8 `
    ///
    pub fn GetProperty(self: ?*anyopaque, propertyName: []const u8) QtC.QVariant {
        const propertyName_str = qtc.libqt_string{
            .len = propertyName.len,
            .data = propertyName.ptr,
        };
        return qtc.SignOn__SessionData_GetProperty(@ptrCast(self), propertyName_str);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.SignOn__SessionData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn GetAccessControlTokens(self: ?*anyopaque, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.SignOn__SessionData_GetAccessControlTokens(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("signon__sessiondata.GetAccessControlTokens: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("signon__sessiondata.GetAccessControlTokens: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.SignOn__SessionData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToMap(self: ?*anyopaque, allocator: std.mem.Allocator) map_constu8_qtcqvariant {
        const _map: qtc.libqt_map = qtc.SignOn__SessionData_ToMap(@ptrCast(self));
        var _ret: map_constu8_qtcqvariant = .empty;
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
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("signon__sessiondata.ToMap: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            _ret.put(allocator, _entry_slice, @ptrCast(_value)) catch @panic("signon__sessiondata.ToMap: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.SignOn__SessionData `
    ///
    /// ` value: []const u8 `
    ///
    pub fn SetSecret(self: ?*anyopaque, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.SignOn__SessionData_SetSecret(@ptrCast(self), value_str);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.SignOn__SessionData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Secret(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.SignOn__SessionData_Secret(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("signon__sessiondata.Secret: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.SignOn__SessionData `
    ///
    /// ` value: []const u8 `
    ///
    pub fn SetUserName(self: ?*anyopaque, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.SignOn__SessionData_SetUserName(@ptrCast(self), value_str);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.SignOn__SessionData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn UserName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.SignOn__SessionData_UserName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("signon__sessiondata.UserName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.SignOn__SessionData `
    ///
    /// ` value: []const u8 `
    ///
    pub fn SetRealm(self: ?*anyopaque, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.SignOn__SessionData_SetRealm(@ptrCast(self), value_str);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.SignOn__SessionData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Realm(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.SignOn__SessionData_Realm(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("signon__sessiondata.Realm: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.SignOn__SessionData `
    ///
    /// ` value: []const u8 `
    ///
    pub fn SetNetworkProxy(self: ?*anyopaque, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.SignOn__SessionData_SetNetworkProxy(@ptrCast(self), value_str);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.SignOn__SessionData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NetworkProxy(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.SignOn__SessionData_NetworkProxy(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("signon__sessiondata.NetworkProxy: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.SignOn__SessionData `
    ///
    /// ` value: *const i32 `
    ///
    pub fn SetUiPolicy(self: ?*anyopaque, value: *const i32) void {
        qtc.SignOn__SessionData_SetUiPolicy(@ptrCast(self), @ptrCast(value));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.SignOn__SessionData `
    ///
    pub fn UiPolicy(self: ?*anyopaque) i32 {
        return qtc.SignOn__SessionData_UiPolicy(@ptrCast(self));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.SignOn__SessionData `
    ///
    /// ` value: []const u8 `
    ///
    pub fn SetCaption(self: ?*anyopaque, value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.SignOn__SessionData_SetCaption(@ptrCast(self), value_str);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.SignOn__SessionData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Caption(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.SignOn__SessionData_Caption(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("signon__sessiondata.Caption: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.SignOn__SessionData `
    ///
    /// ` value: *const u32 `
    ///
    pub fn SetNetworkTimeout(self: ?*anyopaque, value: *const u32) void {
        qtc.SignOn__SessionData_SetNetworkTimeout(@ptrCast(self), @ptrCast(value));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.SignOn__SessionData `
    ///
    pub fn NetworkTimeout(self: ?*anyopaque) u32 {
        return qtc.SignOn__SessionData_NetworkTimeout(@ptrCast(self));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.SignOn__SessionData `
    ///
    /// ` value: *const u32 `
    ///
    pub fn SetWindowId(self: ?*anyopaque, value: *const u32) void {
        qtc.SignOn__SessionData_SetWindowId(@ptrCast(self), @ptrCast(value));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.SignOn__SessionData `
    ///
    pub fn WindowId(self: ?*anyopaque) u32 {
        return qtc.SignOn__SessionData_WindowId(@ptrCast(self));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.SignOn__SessionData `
    ///
    /// ` value: *bool `
    ///
    pub fn SetRenewToken(self: ?*anyopaque, value: *const bool) void {
        qtc.SignOn__SessionData_SetRenewToken(@ptrCast(self), @ptrCast(value));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.SignOn__SessionData `
    ///
    pub fn RenewToken(self: ?*anyopaque) bool {
        return qtc.SignOn__SessionData_RenewToken(@ptrCast(self));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.SignOn__SessionData `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.SignOn__SessionData_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Sessiondata.html)
pub const enums = struct {
    pub const SignonUiPolicy = enum(i32) {
        pub const DefaultPolicy: i32 = 0;
        pub const RequestPasswordPolicy: i32 = 1;
        pub const NoUserInteractionPolicy: i32 = 2;
        pub const ValidationPolicy: i32 = 3;
    };
};
