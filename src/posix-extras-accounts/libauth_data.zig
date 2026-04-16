const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QVariant = @import("libqt6").QVariant;
const std = @import("std");
const ArrayMap_constu8_QVariant = std.array_hash_map.String(QVariant);

/// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1AuthData.html)
pub const Accounts__AuthData = extern struct {
    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1AuthData.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Accounts__AuthData,

    pub const _is_Accounts__AuthData = {};

    /// New constructs a new Accounts::AuthData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Accounts__AuthData `
    ///
    pub fn New(other: anytype) Accounts__AuthData {
        comptime _ = @TypeOf(other)._is_Accounts__AuthData;
        return .{ .ptr = qtc.Accounts__AuthData_new(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1AuthData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__AuthData `
    ///
    pub fn CredentialsId(self: Accounts__AuthData) u32 {
        return qtc.Accounts__AuthData_CredentialsId(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1AuthData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__AuthData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Method(self: Accounts__AuthData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Accounts__AuthData_Method(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts__authdata.Method: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1AuthData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__AuthData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Mechanism(self: Accounts__AuthData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Accounts__AuthData_Mechanism(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts__authdata.Mechanism: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1AuthData.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__AuthData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Parameters(self: Accounts__AuthData, allocator: std.mem.Allocator) ArrayMap_constu8_QVariant {
        const _map: qtc.libqt_map = qtc.Accounts__AuthData_Parameters(@ptrCast(self.ptr));
        var _ret: ArrayMap_constu8_QVariant = .empty;
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
            _ret.put(allocator, _entry_slice, .{ .ptr = @ptrCast(_value) }) catch @panic("accounts__authdata.Parameters: Memory allocation failed");
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1AuthData.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Accounts__AuthData `
    ///
    pub fn Delete(self: Accounts__AuthData) void {
        qtc.Accounts__AuthData_Delete(@ptrCast(self.ptr));
    }
};
