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

    /// New constructs a new QSslPreSharedKeyAuthenticator object.
    ///
    pub fn New() QSslPreSharedKeyAuthenticator {
        return .{ .ptr = qtc.QSslPreSharedKeyAuthenticator_new() };
    }

    /// New2 constructs a new QSslPreSharedKeyAuthenticator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` authenticator: QSslPreSharedKeyAuthenticator `
    ///
    pub fn New2(authenticator: anytype) QSslPreSharedKeyAuthenticator {
        comptime _ = @TypeOf(authenticator)._is_QSslPreSharedKeyAuthenticator;
        return .{ .ptr = qtc.QSslPreSharedKeyAuthenticator_new2(@ptrCast(authenticator.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslPreSharedKeyAuthenticator `
    ///
    /// ` authenticator: QSslPreSharedKeyAuthenticator `
    ///
    pub fn OperatorAssign(self: QSslPreSharedKeyAuthenticator, authenticator: anytype) void {
        comptime _ = @TypeOf(authenticator)._is_QSslPreSharedKeyAuthenticator;
        qtc.QSslPreSharedKeyAuthenticator_OperatorAssign(@ptrCast(self.ptr), @ptrCast(authenticator.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslPreSharedKeyAuthenticator `
    ///
    /// ` other: QSslPreSharedKeyAuthenticator `
    ///
    pub fn Swap(self: QSslPreSharedKeyAuthenticator, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QSslPreSharedKeyAuthenticator;
        qtc.QSslPreSharedKeyAuthenticator_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#identityHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslPreSharedKeyAuthenticator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn IdentityHint(self: QSslPreSharedKeyAuthenticator, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QSslPreSharedKeyAuthenticator_IdentityHint(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsslpresharedkeyauthenticator.IdentityHint: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#setIdentity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslPreSharedKeyAuthenticator `
    ///
    /// ` identity: []u8 `
    ///
    pub fn SetIdentity(self: QSslPreSharedKeyAuthenticator, identity: []u8) void {
        const identity_str = qtc.libqt_string{
            .len = identity.len,
            .data = identity.ptr,
        };
        qtc.QSslPreSharedKeyAuthenticator_SetIdentity(@ptrCast(self.ptr), identity_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#identity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslPreSharedKeyAuthenticator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Identity(self: QSslPreSharedKeyAuthenticator, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QSslPreSharedKeyAuthenticator_Identity(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsslpresharedkeyauthenticator.Identity: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#maximumIdentityLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslPreSharedKeyAuthenticator `
    ///
    pub fn MaximumIdentityLength(self: QSslPreSharedKeyAuthenticator) i32 {
        return qtc.QSslPreSharedKeyAuthenticator_MaximumIdentityLength(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#setPreSharedKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslPreSharedKeyAuthenticator `
    ///
    /// ` preSharedKey: []u8 `
    ///
    pub fn SetPreSharedKey(self: QSslPreSharedKeyAuthenticator, preSharedKey: []u8) void {
        const preSharedKey_str = qtc.libqt_string{
            .len = preSharedKey.len,
            .data = preSharedKey.ptr,
        };
        qtc.QSslPreSharedKeyAuthenticator_SetPreSharedKey(@ptrCast(self.ptr), preSharedKey_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#preSharedKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslPreSharedKeyAuthenticator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PreSharedKey(self: QSslPreSharedKeyAuthenticator, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QSslPreSharedKeyAuthenticator_PreSharedKey(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsslpresharedkeyauthenticator.PreSharedKey: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#maximumPreSharedKeyLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslPreSharedKeyAuthenticator `
    ///
    pub fn MaximumPreSharedKeyLength(self: QSslPreSharedKeyAuthenticator) i32 {
        return qtc.QSslPreSharedKeyAuthenticator_MaximumPreSharedKeyLength(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#dtor.QSslPreSharedKeyAuthenticator)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QSslPreSharedKeyAuthenticator `
    ///
    pub fn Delete(self: QSslPreSharedKeyAuthenticator) void {
        qtc.QSslPreSharedKeyAuthenticator_Delete(@ptrCast(self.ptr));
    }
};
