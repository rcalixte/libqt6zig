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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QAuthenticator object in C++ memory
    ///
    pub fn new() QAuthenticator {
        return .{ .ptr = qtc.QAuthenticator_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QAuthenticator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QAuthenticator `
    ///
    pub fn new2(other: anytype) QAuthenticator {
        comptime _ = @TypeOf(other)._is_QAuthenticator;
        return .{ .ptr = qtc.QAuthenticator_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qauthenticator.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAuthenticator `
    ///
    /// ` other: QAuthenticator `
    ///
    pub fn operatorAssign(self: QAuthenticator, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QAuthenticator;
        qtc.QAuthenticator_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qauthenticator.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAuthenticator `
    ///
    /// ` other: QAuthenticator `
    ///
    pub fn operatorEqual(self: QAuthenticator, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QAuthenticator;
        return qtc.QAuthenticator_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qauthenticator.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAuthenticator `
    ///
    /// ` other: QAuthenticator `
    ///
    pub fn operatorNotEqual(self: QAuthenticator, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QAuthenticator;
        return qtc.QAuthenticator_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `user` instead
    ///
    pub const User = user;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qauthenticator.html#user)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAuthenticator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn user(self: QAuthenticator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAuthenticator_User(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAuthenticator.user: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setUser` instead
    ///
    pub const SetUser = setUser;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qauthenticator.html#setUser)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAuthenticator `
    ///
    /// ` _user: []const u8 `
    ///
    pub fn setUser(self: QAuthenticator, _user: []const u8) void {
        const user_str = qtc.libqt_string{
            .len = _user.len,
            .data = _user.ptr,
        };
        qtc.QAuthenticator_SetUser(@ptrCast(self.ptr), user_str);
    }

    /// ### DEPRECATED: Use `password` instead
    ///
    pub const Password = password;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qauthenticator.html#password)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAuthenticator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn password(self: QAuthenticator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAuthenticator_Password(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAuthenticator.password: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPassword` instead
    ///
    pub const SetPassword = setPassword;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qauthenticator.html#setPassword)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAuthenticator `
    ///
    /// ` _password: []const u8 `
    ///
    pub fn setPassword(self: QAuthenticator, _password: []const u8) void {
        const password_str = qtc.libqt_string{
            .len = _password.len,
            .data = _password.ptr,
        };
        qtc.QAuthenticator_SetPassword(@ptrCast(self.ptr), password_str);
    }

    /// ### DEPRECATED: Use `realm` instead
    ///
    pub const Realm = realm;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qauthenticator.html#realm)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAuthenticator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn realm(self: QAuthenticator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAuthenticator_Realm(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAuthenticator.realm: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setRealm` instead
    ///
    pub const SetRealm = setRealm;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qauthenticator.html#setRealm)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAuthenticator `
    ///
    /// ` _realm: []const u8 `
    ///
    pub fn setRealm(self: QAuthenticator, _realm: []const u8) void {
        const realm_str = qtc.libqt_string{
            .len = _realm.len,
            .data = _realm.ptr,
        };
        qtc.QAuthenticator_SetRealm(@ptrCast(self.ptr), realm_str);
    }

    /// ### DEPRECATED: Use `option` instead
    ///
    pub const Option = option;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qauthenticator.html#option)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAuthenticator `
    ///
    /// ` opt: []const u8 `
    ///
    pub fn option(self: QAuthenticator, opt: []const u8) QVariant {
        const opt_str = qtc.libqt_string{
            .len = opt.len,
            .data = opt.ptr,
        };
        return .{ .ptr = qtc.QAuthenticator_Option(@ptrCast(self.ptr), opt_str) };
    }

    /// ### DEPRECATED: Use `options` instead
    ///
    pub const Options = options;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qauthenticator.html#options)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAuthenticator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn options(self: QAuthenticator, allocator: std.mem.Allocator) Map_constu8_QVariant {
        const _map: qtc.libqt_map = qtc.QAuthenticator_Options(@ptrCast(self.ptr));
        var _ret: Map_constu8_QVariant = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("QAuthenticator.options: Total capacity allocation failed");
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
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("QAuthenticator.options: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            _ret.putAssumeCapacity(_entry_slice, .{ .ptr = @ptrCast(_value) });
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setOption` instead
    ///
    pub const SetOption = setOption;

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
    pub fn setOption(self: QAuthenticator, opt: []const u8, value: anytype) void {
        const opt_str = qtc.libqt_string{
            .len = opt.len,
            .data = opt.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QAuthenticator_SetOption(@ptrCast(self.ptr), opt_str, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qauthenticator.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAuthenticator `
    ///
    pub fn isNull(self: QAuthenticator) bool {
        return qtc.QAuthenticator_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `detach` instead
    ///
    pub const Detach = detach;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qauthenticator.html#detach)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAuthenticator `
    ///
    pub fn detach(self: QAuthenticator) void {
        qtc.QAuthenticator_Detach(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qauthenticator.html#dtor.QAuthenticator)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QAuthenticator `
    ///
    pub fn delete(self: QAuthenticator) void {
        qtc.QAuthenticator_Delete(@ptrCast(self.ptr));
    }
};
