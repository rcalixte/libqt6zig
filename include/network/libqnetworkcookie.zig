const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnetworkcookie_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qnetworkcookie.html
pub const qnetworkcookie = struct {
    /// New constructs a new QNetworkCookie object.
    ///
    ///
    pub fn New() QtC.QNetworkCookie {
        return qtc.QNetworkCookie_new();
    }

    /// New2 constructs a new QNetworkCookie object.
    ///
    /// ``` other: QtC.QNetworkCookie ```
    pub fn New2(other: ?*anyopaque) QtC.QNetworkCookie {
        return qtc.QNetworkCookie_new2(@ptrCast(other));
    }

    /// New3 constructs a new QNetworkCookie object.
    ///
    /// ``` name: []u8 ```
    pub fn New3(name: []u8) QtC.QNetworkCookie {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };

        return qtc.QNetworkCookie_new3(name_str);
    }

    /// New4 constructs a new QNetworkCookie object.
    ///
    /// ``` name: []u8, value: []u8 ```
    pub fn New4(name: []u8, value: []u8) QtC.QNetworkCookie {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };

        return qtc.QNetworkCookie_new4(name_str, value_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#operator-eq)
    ///
    /// ``` self: QtC.QNetworkCookie, other: QtC.QNetworkCookie ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QNetworkCookie_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#swap)
    ///
    /// ``` self: QtC.QNetworkCookie, other: QtC.QNetworkCookie ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QNetworkCookie_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#operator-eq-eq)
    ///
    /// ``` self: QtC.QNetworkCookie, other: QtC.QNetworkCookie ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QNetworkCookie_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#operator-not-eq)
    ///
    /// ``` self: QtC.QNetworkCookie, other: QtC.QNetworkCookie ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QNetworkCookie_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#isSecure)
    ///
    /// ``` self: QtC.QNetworkCookie ```
    pub fn IsSecure(self: ?*anyopaque) bool {
        return qtc.QNetworkCookie_IsSecure(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#setSecure)
    ///
    /// ``` self: QtC.QNetworkCookie, enable: bool ```
    pub fn SetSecure(self: ?*anyopaque, enable: bool) void {
        qtc.QNetworkCookie_SetSecure(@ptrCast(self), enable);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#isHttpOnly)
    ///
    /// ``` self: QtC.QNetworkCookie ```
    pub fn IsHttpOnly(self: ?*anyopaque) bool {
        return qtc.QNetworkCookie_IsHttpOnly(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#setHttpOnly)
    ///
    /// ``` self: QtC.QNetworkCookie, enable: bool ```
    pub fn SetHttpOnly(self: ?*anyopaque, enable: bool) void {
        qtc.QNetworkCookie_SetHttpOnly(@ptrCast(self), enable);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#sameSitePolicy)
    ///
    /// ``` self: QtC.QNetworkCookie ```
    ///
    /// Returns: ``` qnetworkcookie_enums.SameSite ```
    pub fn SameSitePolicy(self: ?*anyopaque) i64 {
        return qtc.QNetworkCookie_SameSitePolicy(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#setSameSitePolicy)
    ///
    /// ``` self: QtC.QNetworkCookie, sameSite: qnetworkcookie_enums.SameSite ```
    pub fn SetSameSitePolicy(self: ?*anyopaque, sameSite: i64) void {
        qtc.QNetworkCookie_SetSameSitePolicy(@ptrCast(self), @intCast(sameSite));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#isSessionCookie)
    ///
    /// ``` self: QtC.QNetworkCookie ```
    pub fn IsSessionCookie(self: ?*anyopaque) bool {
        return qtc.QNetworkCookie_IsSessionCookie(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#expirationDate)
    ///
    /// ``` self: QtC.QNetworkCookie ```
    pub fn ExpirationDate(self: ?*anyopaque) QtC.QDateTime {
        return qtc.QNetworkCookie_ExpirationDate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#setExpirationDate)
    ///
    /// ``` self: QtC.QNetworkCookie, date: QtC.QDateTime ```
    pub fn SetExpirationDate(self: ?*anyopaque, date: ?*anyopaque) void {
        qtc.QNetworkCookie_SetExpirationDate(@ptrCast(self), @ptrCast(date));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#domain)
    ///
    /// ``` self: QtC.QNetworkCookie, allocator: std.mem.Allocator ```
    pub fn Domain(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QNetworkCookie_Domain(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkcookie.Domain: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#setDomain)
    ///
    /// ``` self: QtC.QNetworkCookie, domain: []const u8 ```
    pub fn SetDomain(self: ?*anyopaque, domain: []const u8) void {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        qtc.QNetworkCookie_SetDomain(@ptrCast(self), domain_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#path)
    ///
    /// ``` self: QtC.QNetworkCookie, allocator: std.mem.Allocator ```
    pub fn Path(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QNetworkCookie_Path(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkcookie.Path: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#setPath)
    ///
    /// ``` self: QtC.QNetworkCookie, path: []const u8 ```
    pub fn SetPath(self: ?*anyopaque, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.QNetworkCookie_SetPath(@ptrCast(self), path_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#name)
    ///
    /// ``` self: QtC.QNetworkCookie, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QNetworkCookie_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qnetworkcookie.Name: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#setName)
    ///
    /// ``` self: QtC.QNetworkCookie, cookieName: []u8 ```
    pub fn SetName(self: ?*anyopaque, cookieName: []u8) void {
        const cookieName_str = qtc.libqt_string{
            .len = cookieName.len,
            .data = cookieName.ptr,
        };
        qtc.QNetworkCookie_SetName(@ptrCast(self), cookieName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#value)
    ///
    /// ``` self: QtC.QNetworkCookie, allocator: std.mem.Allocator ```
    pub fn Value(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QNetworkCookie_Value(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qnetworkcookie.Value: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#setValue)
    ///
    /// ``` self: QtC.QNetworkCookie, value: []u8 ```
    pub fn SetValue(self: ?*anyopaque, value: []u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QNetworkCookie_SetValue(@ptrCast(self), value_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#toRawForm)
    ///
    /// ``` self: QtC.QNetworkCookie, allocator: std.mem.Allocator ```
    pub fn ToRawForm(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QNetworkCookie_ToRawForm(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qnetworkcookie.ToRawForm: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#hasSameIdentifier)
    ///
    /// ``` self: QtC.QNetworkCookie, other: QtC.QNetworkCookie ```
    pub fn HasSameIdentifier(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QNetworkCookie_HasSameIdentifier(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#normalize)
    ///
    /// ``` self: QtC.QNetworkCookie, url: QtC.QUrl ```
    pub fn Normalize(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.QNetworkCookie_Normalize(@ptrCast(self), @ptrCast(url));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#parseCookies)
    ///
    /// ``` cookieString: []const u8, allocator: std.mem.Allocator ```
    pub fn ParseCookies(cookieString: []const u8, allocator: std.mem.Allocator) []QtC.QNetworkCookie {
        const _arr: qtc.libqt_list = qtc.QNetworkCookie_ParseCookies(cookieString.ptr);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QNetworkCookie, _arr.len) catch @panic("qnetworkcookie.ParseCookies: Memory allocation failed");
        const _data: [*]QtC.QNetworkCookie = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#toRawForm)
    ///
    /// ``` self: QtC.QNetworkCookie, form: qnetworkcookie_enums.RawForm, allocator: std.mem.Allocator ```
    pub fn ToRawForm1(self: ?*anyopaque, form: i64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QNetworkCookie_ToRawForm1(@ptrCast(self), @intCast(form));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qnetworkcookie.ToRawForm1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#dtor.QNetworkCookie)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QNetworkCookie ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QNetworkCookie_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qnetworkcookie.html#types
pub const enums = struct {
    pub const RawForm = enum {
        pub const NameAndValueOnly: i32 = 0;
        pub const Full: i32 = 1;
    };

    pub const SameSite = enum {
        pub const Default: i32 = 0;
        pub const None: i32 = 1;
        pub const Lax: i32 = 2;
        pub const Strict: i32 = 3;
    };
};
