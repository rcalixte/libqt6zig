const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");
const map_constu8_qtcqvariant = std.StringHashMapUnmanaged(QtC.QVariant);

/// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1AuthData.html)
pub const accounts__authdata = struct {
    /// New constructs a new Accounts::AuthData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.Accounts__AuthData `
    ///
    pub fn New(other: ?*anyopaque) QtC.Accounts__AuthData {
        return qtc.Accounts__AuthData_new(@ptrCast(other));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1AuthData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Accounts__AuthData `
    ///
    pub fn CredentialsId(self: ?*anyopaque) u32 {
        return qtc.Accounts__AuthData_CredentialsId(@ptrCast(self));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1AuthData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Accounts__AuthData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Method(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Accounts__AuthData_Method(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts__authdata.Method: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1AuthData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Accounts__AuthData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Mechanism(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Accounts__AuthData_Mechanism(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts__authdata.Mechanism: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1AuthData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Accounts__AuthData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Parameters(self: ?*anyopaque, allocator: std.mem.Allocator) map_constu8_qtcqvariant {
        const _map: qtc.libqt_map = qtc.Accounts__AuthData_Parameters(@ptrCast(self));
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
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("accounts__authdata.Parameters: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            _ret.put(allocator, _entry_slice, @ptrCast(_value)) catch @panic("accounts__authdata.Parameters: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1AuthData.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.Accounts__AuthData `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Accounts__AuthData_Delete(@ptrCast(self));
    }
};
