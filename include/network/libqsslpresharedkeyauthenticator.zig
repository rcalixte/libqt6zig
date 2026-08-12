const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html)
pub const QSslPreSharedKeyAuthenticator = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSslPreSharedKeyAuthenticator,

    pub const _is_QSslPreSharedKeyAuthenticator = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QSslPreSharedKeyAuthenticator object in C++ memory
    ///
    pub fn new() QSslPreSharedKeyAuthenticator {
        return .{ .ptr = qtc.QSslPreSharedKeyAuthenticator_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QSslPreSharedKeyAuthenticator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` authenticator: QSslPreSharedKeyAuthenticator `
    ///
    pub fn new2(authenticator: anytype) QSslPreSharedKeyAuthenticator {
        comptime _ = @TypeOf(authenticator)._is_QSslPreSharedKeyAuthenticator;
        return .{ .ptr = qtc.QSslPreSharedKeyAuthenticator_new2(@ptrCast(authenticator.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslPreSharedKeyAuthenticator `
    ///
    /// ` authenticator: QSslPreSharedKeyAuthenticator `
    ///
    pub fn operatorAssign(self: QSslPreSharedKeyAuthenticator, authenticator: anytype) void {
        comptime _ = @TypeOf(authenticator)._is_QSslPreSharedKeyAuthenticator;
        qtc.QSslPreSharedKeyAuthenticator_OperatorAssign(@ptrCast(self.ptr), @ptrCast(authenticator.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslPreSharedKeyAuthenticator `
    ///
    /// ` other: QSslPreSharedKeyAuthenticator `
    ///
    pub fn swap(self: QSslPreSharedKeyAuthenticator, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QSslPreSharedKeyAuthenticator;
        qtc.QSslPreSharedKeyAuthenticator_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `identityHint` instead
    ///
    pub const IdentityHint = identityHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#identityHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslPreSharedKeyAuthenticator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn identityHint(self: QSslPreSharedKeyAuthenticator, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QSslPreSharedKeyAuthenticator_IdentityHint(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QSslPreSharedKeyAuthenticator.identityHint: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setIdentity` instead
    ///
    pub const SetIdentity = setIdentity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#setIdentity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslPreSharedKeyAuthenticator `
    ///
    /// ` _identity: []u8 `
    ///
    pub fn setIdentity(self: QSslPreSharedKeyAuthenticator, _identity: []u8) void {
        const identity_str = qtc.libqt_string{
            .len = _identity.len,
            .data = _identity.ptr,
        };
        qtc.QSslPreSharedKeyAuthenticator_SetIdentity(@ptrCast(self.ptr), identity_str);
    }

    /// ### DEPRECATED: Use `identity` instead
    ///
    pub const Identity = identity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#identity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslPreSharedKeyAuthenticator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn identity(self: QSslPreSharedKeyAuthenticator, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QSslPreSharedKeyAuthenticator_Identity(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QSslPreSharedKeyAuthenticator.identity: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `maximumIdentityLength` instead
    ///
    pub const MaximumIdentityLength = maximumIdentityLength;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#maximumIdentityLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslPreSharedKeyAuthenticator `
    ///
    pub fn maximumIdentityLength(self: QSslPreSharedKeyAuthenticator) i32 {
        return qtc.QSslPreSharedKeyAuthenticator_MaximumIdentityLength(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPreSharedKey` instead
    ///
    pub const SetPreSharedKey = setPreSharedKey;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#setPreSharedKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslPreSharedKeyAuthenticator `
    ///
    /// ` _preSharedKey: []u8 `
    ///
    pub fn setPreSharedKey(self: QSslPreSharedKeyAuthenticator, _preSharedKey: []u8) void {
        const preSharedKey_str = qtc.libqt_string{
            .len = _preSharedKey.len,
            .data = _preSharedKey.ptr,
        };
        qtc.QSslPreSharedKeyAuthenticator_SetPreSharedKey(@ptrCast(self.ptr), preSharedKey_str);
    }

    /// ### DEPRECATED: Use `preSharedKey` instead
    ///
    pub const PreSharedKey = preSharedKey;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#preSharedKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslPreSharedKeyAuthenticator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn preSharedKey(self: QSslPreSharedKeyAuthenticator, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QSslPreSharedKeyAuthenticator_PreSharedKey(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QSslPreSharedKeyAuthenticator.preSharedKey: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `maximumPreSharedKeyLength` instead
    ///
    pub const MaximumPreSharedKeyLength = maximumPreSharedKeyLength;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#maximumPreSharedKeyLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslPreSharedKeyAuthenticator `
    ///
    pub fn maximumPreSharedKeyLength(self: QSslPreSharedKeyAuthenticator) i32 {
        return qtc.QSslPreSharedKeyAuthenticator_MaximumPreSharedKeyLength(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#dtor.QSslPreSharedKeyAuthenticator)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSslPreSharedKeyAuthenticator `
    ///
    pub fn delete(self: QSslPreSharedKeyAuthenticator) void {
        qtc.QSslPreSharedKeyAuthenticator_Delete(@ptrCast(self.ptr));
    }
};
