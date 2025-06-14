const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html
pub const qsslpresharedkeyauthenticator = struct {
    /// New constructs a new QSslPreSharedKeyAuthenticator object.
    ///
    ///
    pub fn New() QtC.QSslPreSharedKeyAuthenticator {
        return qtc.QSslPreSharedKeyAuthenticator_new();
    }

    /// New2 constructs a new QSslPreSharedKeyAuthenticator object.
    ///
    /// ``` authenticator: QtC.QSslPreSharedKeyAuthenticator ```
    pub fn New2(authenticator: ?*anyopaque) QtC.QSslPreSharedKeyAuthenticator {
        return qtc.QSslPreSharedKeyAuthenticator_new2(@ptrCast(authenticator));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#operator=)
    ///
    /// ``` self: QtC.QSslPreSharedKeyAuthenticator, authenticator: QtC.QSslPreSharedKeyAuthenticator ```
    pub fn OperatorAssign(self: ?*anyopaque, authenticator: ?*anyopaque) void {
        qtc.QSslPreSharedKeyAuthenticator_OperatorAssign(@ptrCast(self), @ptrCast(authenticator));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#swap)
    ///
    /// ``` self: QtC.QSslPreSharedKeyAuthenticator, other: QtC.QSslPreSharedKeyAuthenticator ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSslPreSharedKeyAuthenticator_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#identityHint)
    ///
    /// ``` self: QtC.QSslPreSharedKeyAuthenticator, allocator: std.mem.Allocator ```
    pub fn IdentityHint(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.struct_libqt_string = qtc.QSslPreSharedKeyAuthenticator_IdentityHint(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsslpresharedkeyauthenticator.IdentityHint: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#setIdentity)
    ///
    /// ``` self: QtC.QSslPreSharedKeyAuthenticator, identity: []u8 ```
    pub fn SetIdentity(self: ?*anyopaque, identity: []u8) void {
        const identity_str = qtc.struct_libqt_string{
            .len = identity.len,
            .data = identity.ptr,
        };
        qtc.QSslPreSharedKeyAuthenticator_SetIdentity(@ptrCast(self), identity_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#identity)
    ///
    /// ``` self: QtC.QSslPreSharedKeyAuthenticator, allocator: std.mem.Allocator ```
    pub fn Identity(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.struct_libqt_string = qtc.QSslPreSharedKeyAuthenticator_Identity(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsslpresharedkeyauthenticator.Identity: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#maximumIdentityLength)
    ///
    /// ``` self: QtC.QSslPreSharedKeyAuthenticator ```
    pub fn MaximumIdentityLength(self: ?*anyopaque) i32 {
        return qtc.QSslPreSharedKeyAuthenticator_MaximumIdentityLength(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#setPreSharedKey)
    ///
    /// ``` self: QtC.QSslPreSharedKeyAuthenticator, preSharedKey: []u8 ```
    pub fn SetPreSharedKey(self: ?*anyopaque, preSharedKey: []u8) void {
        const preSharedKey_str = qtc.struct_libqt_string{
            .len = preSharedKey.len,
            .data = preSharedKey.ptr,
        };
        qtc.QSslPreSharedKeyAuthenticator_SetPreSharedKey(@ptrCast(self), preSharedKey_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#preSharedKey)
    ///
    /// ``` self: QtC.QSslPreSharedKeyAuthenticator, allocator: std.mem.Allocator ```
    pub fn PreSharedKey(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.struct_libqt_string = qtc.QSslPreSharedKeyAuthenticator_PreSharedKey(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsslpresharedkeyauthenticator.PreSharedKey: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#maximumPreSharedKeyLength)
    ///
    /// ``` self: QtC.QSslPreSharedKeyAuthenticator ```
    pub fn MaximumPreSharedKeyLength(self: ?*anyopaque) i32 {
        return qtc.QSslPreSharedKeyAuthenticator_MaximumPreSharedKeyLength(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#dtor.QSslPreSharedKeyAuthenticator)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QSslPreSharedKeyAuthenticator ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSslPreSharedKeyAuthenticator_Delete(@ptrCast(self));
    }
};
