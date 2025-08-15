const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");
pub const map_constu8_qtcqvariant = std.StringHashMapUnmanaged(QtC.QVariant);

/// https://doc.qt.io/qt-6/qauthenticator.html
pub const qauthenticator = struct {
    /// New constructs a new QAuthenticator object.
    ///
    ///
    pub fn New() QtC.QAuthenticator {
        return qtc.QAuthenticator_new();
    }

    /// New2 constructs a new QAuthenticator object.
    ///
    /// ``` other: QtC.QAuthenticator ```
    pub fn New2(other: ?*anyopaque) QtC.QAuthenticator {
        return qtc.QAuthenticator_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qauthenticator.html#operator-eq)
    ///
    /// ``` self: QtC.QAuthenticator, other: QtC.QAuthenticator ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QAuthenticator_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qauthenticator.html#operator-eq-eq)
    ///
    /// ``` self: QtC.QAuthenticator, other: QtC.QAuthenticator ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QAuthenticator_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qauthenticator.html#operator-not-eq)
    ///
    /// ``` self: QtC.QAuthenticator, other: QtC.QAuthenticator ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QAuthenticator_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qauthenticator.html#user)
    ///
    /// ``` self: QtC.QAuthenticator, allocator: std.mem.Allocator ```
    pub fn User(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAuthenticator_User(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qauthenticator.User: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qauthenticator.html#setUser)
    ///
    /// ``` self: QtC.QAuthenticator, user: []const u8 ```
    pub fn SetUser(self: ?*anyopaque, user: []const u8) void {
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        qtc.QAuthenticator_SetUser(@ptrCast(self), user_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qauthenticator.html#password)
    ///
    /// ``` self: QtC.QAuthenticator, allocator: std.mem.Allocator ```
    pub fn Password(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAuthenticator_Password(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qauthenticator.Password: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qauthenticator.html#setPassword)
    ///
    /// ``` self: QtC.QAuthenticator, password: []const u8 ```
    pub fn SetPassword(self: ?*anyopaque, password: []const u8) void {
        const password_str = qtc.libqt_string{
            .len = password.len,
            .data = password.ptr,
        };
        qtc.QAuthenticator_SetPassword(@ptrCast(self), password_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qauthenticator.html#realm)
    ///
    /// ``` self: QtC.QAuthenticator, allocator: std.mem.Allocator ```
    pub fn Realm(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAuthenticator_Realm(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qauthenticator.Realm: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qauthenticator.html#setRealm)
    ///
    /// ``` self: QtC.QAuthenticator, realm: []const u8 ```
    pub fn SetRealm(self: ?*anyopaque, realm: []const u8) void {
        const realm_str = qtc.libqt_string{
            .len = realm.len,
            .data = realm.ptr,
        };
        qtc.QAuthenticator_SetRealm(@ptrCast(self), realm_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qauthenticator.html#option)
    ///
    /// ``` self: QtC.QAuthenticator, opt: []const u8 ```
    pub fn Option(self: ?*anyopaque, opt: []const u8) QtC.QVariant {
        const opt_str = qtc.libqt_string{
            .len = opt.len,
            .data = opt.ptr,
        };
        return qtc.QAuthenticator_Option(@ptrCast(self), opt_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qauthenticator.html#options)
    ///
    /// ``` self: QtC.QAuthenticator, allocator: std.mem.Allocator ```
    pub fn Options(self: ?*anyopaque, allocator: std.mem.Allocator) map_constu8_qtcqvariant {
        const _map: qtc.libqt_map = qtc.QAuthenticator_Options(@ptrCast(self));
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
            const _entry_slice = std.mem.span(_key.data);
            const _value = _values[i];
            _ret.put(allocator, _entry_slice, _value) catch @panic("qauthenticator.Options: Memory allocation failed");
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qauthenticator.html#setOption)
    ///
    /// ``` self: QtC.QAuthenticator, opt: []const u8, value: QtC.QVariant ```
    pub fn SetOption(self: ?*anyopaque, opt: []const u8, value: ?*anyopaque) void {
        const opt_str = qtc.libqt_string{
            .len = opt.len,
            .data = opt.ptr,
        };
        qtc.QAuthenticator_SetOption(@ptrCast(self), opt_str, @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qauthenticator.html#isNull)
    ///
    /// ``` self: QtC.QAuthenticator ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QAuthenticator_IsNull(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qauthenticator.html#detach)
    ///
    /// ``` self: QtC.QAuthenticator ```
    pub fn Detach(self: ?*anyopaque) void {
        qtc.QAuthenticator_Detach(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qauthenticator.html#dtor.QAuthenticator)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QAuthenticator ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAuthenticator_Delete(@ptrCast(self));
    }
};
