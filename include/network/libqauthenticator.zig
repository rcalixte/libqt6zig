const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QVariant = @import("libqt6").QVariant;
const std = @import("std");
const Map_constu8_QVariant = std.StringHashMapUnmanaged(QVariant);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qauthenticator.html)
pub const QAuthenticator = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qauthenticator.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAuthenticator,

    pub const _is_QAuthenticator = {};

    /// New constructs a new QAuthenticator object.
    ///
    pub fn New() QAuthenticator {
        return .{ .ptr = qtc.QAuthenticator_new() };
    }

    /// New2 constructs a new QAuthenticator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QAuthenticator `
    ///
    pub fn New2(other: anytype) QAuthenticator {
        comptime _ = @TypeOf(other)._is_QAuthenticator;
        return .{ .ptr = qtc.QAuthenticator_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qauthenticator.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAuthenticator `
    ///
    /// ` other: QAuthenticator `
    ///
    pub fn OperatorAssign(self: QAuthenticator, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QAuthenticator;
        qtc.QAuthenticator_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qauthenticator.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAuthenticator `
    ///
    /// ` other: QAuthenticator `
    ///
    pub fn OperatorEqual(self: QAuthenticator, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QAuthenticator;
        return qtc.QAuthenticator_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qauthenticator.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAuthenticator `
    ///
    /// ` other: QAuthenticator `
    ///
    pub fn OperatorNotEqual(self: QAuthenticator, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QAuthenticator;
        return qtc.QAuthenticator_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qauthenticator.html#user)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAuthenticator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn User(self: QAuthenticator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAuthenticator_User(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qauthenticator.User: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qauthenticator.html#setUser)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAuthenticator `
    ///
    /// ` user: []const u8 `
    ///
    pub fn SetUser(self: QAuthenticator, user: []const u8) void {
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        qtc.QAuthenticator_SetUser(@ptrCast(self.ptr), user_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qauthenticator.html#password)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAuthenticator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Password(self: QAuthenticator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAuthenticator_Password(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qauthenticator.Password: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qauthenticator.html#setPassword)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAuthenticator `
    ///
    /// ` password: []const u8 `
    ///
    pub fn SetPassword(self: QAuthenticator, password: []const u8) void {
        const password_str = qtc.libqt_string{
            .len = password.len,
            .data = password.ptr,
        };
        qtc.QAuthenticator_SetPassword(@ptrCast(self.ptr), password_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qauthenticator.html#realm)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAuthenticator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Realm(self: QAuthenticator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAuthenticator_Realm(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qauthenticator.Realm: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qauthenticator.html#setRealm)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAuthenticator `
    ///
    /// ` realm: []const u8 `
    ///
    pub fn SetRealm(self: QAuthenticator, realm: []const u8) void {
        const realm_str = qtc.libqt_string{
            .len = realm.len,
            .data = realm.ptr,
        };
        qtc.QAuthenticator_SetRealm(@ptrCast(self.ptr), realm_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qauthenticator.html#option)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAuthenticator `
    ///
    /// ` opt: []const u8 `
    ///
    pub fn Option(self: QAuthenticator, opt: []const u8) QVariant {
        const opt_str = qtc.libqt_string{
            .len = opt.len,
            .data = opt.ptr,
        };
        return .{ .ptr = qtc.QAuthenticator_Option(@ptrCast(self.ptr), opt_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qauthenticator.html#options)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAuthenticator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Options(self: QAuthenticator, allocator: std.mem.Allocator) Map_constu8_QVariant {
        const _map: qtc.libqt_map = qtc.QAuthenticator_Options(@ptrCast(self.ptr));
        var _ret: Map_constu8_QVariant = .empty;
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
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("qauthenticator.Options: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            _ret.put(allocator, _entry_slice, .{ .ptr = @ptrCast(_value) }) catch @panic("qauthenticator.Options: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qauthenticator.html#setOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAuthenticator `
    ///
    /// ` opt: []const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetOption(self: QAuthenticator, opt: []const u8, value: anytype) void {
        const opt_str = qtc.libqt_string{
            .len = opt.len,
            .data = opt.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QAuthenticator_SetOption(@ptrCast(self.ptr), opt_str, @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qauthenticator.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAuthenticator `
    ///
    pub fn IsNull(self: QAuthenticator) bool {
        return qtc.QAuthenticator_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qauthenticator.html#detach)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAuthenticator `
    ///
    pub fn Detach(self: QAuthenticator) void {
        qtc.QAuthenticator_Detach(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qauthenticator.html#dtor.QAuthenticator)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QAuthenticator `
    ///
    pub fn Delete(self: QAuthenticator) void {
        qtc.QAuthenticator_Delete(@ptrCast(self.ptr));
    }
};
