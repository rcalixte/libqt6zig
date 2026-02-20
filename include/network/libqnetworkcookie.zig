const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnetworkcookie_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html)
pub const qnetworkcookie = struct {
    /// New constructs a new QNetworkCookie object.
    ///
    pub fn New() QtC.QNetworkCookie {
        return qtc.QNetworkCookie_new();
    }

    /// New2 constructs a new QNetworkCookie object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QNetworkCookie `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QNetworkCookie {
        return qtc.QNetworkCookie_new2(@ptrCast(other));
    }

    /// New3 constructs a new QNetworkCookie object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []u8 `
    ///
    pub fn New3(name: []u8) QtC.QNetworkCookie {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };

        return qtc.QNetworkCookie_new3(name_str);
    }

    /// New4 constructs a new QNetworkCookie object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []u8 `
    ///
    /// ` value: []u8 `
    ///
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkCookie `
    ///
    /// ` other: QtC.QNetworkCookie `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QNetworkCookie_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkCookie `
    ///
    /// ` other: QtC.QNetworkCookie `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QNetworkCookie_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkCookie `
    ///
    /// ` other: QtC.QNetworkCookie `
    ///
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QNetworkCookie_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkCookie `
    ///
    /// ` other: QtC.QNetworkCookie `
    ///
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QNetworkCookie_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#isSecure)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkCookie `
    ///
    pub fn IsSecure(self: ?*anyopaque) bool {
        return qtc.QNetworkCookie_IsSecure(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#setSecure)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkCookie `
    ///
    /// ` enable: bool `
    ///
    pub fn SetSecure(self: ?*anyopaque, enable: bool) void {
        qtc.QNetworkCookie_SetSecure(@ptrCast(self), enable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#isHttpOnly)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkCookie `
    ///
    pub fn IsHttpOnly(self: ?*anyopaque) bool {
        return qtc.QNetworkCookie_IsHttpOnly(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#setHttpOnly)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkCookie `
    ///
    /// ` enable: bool `
    ///
    pub fn SetHttpOnly(self: ?*anyopaque, enable: bool) void {
        qtc.QNetworkCookie_SetHttpOnly(@ptrCast(self), enable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#sameSitePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkCookie `
    ///
    /// ## Returns:
    ///
    /// ` qnetworkcookie_enums.SameSite `
    ///
    pub fn SameSitePolicy(self: ?*anyopaque) i32 {
        return qtc.QNetworkCookie_SameSitePolicy(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#setSameSitePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkCookie `
    ///
    /// ` sameSite: qnetworkcookie_enums.SameSite `
    ///
    pub fn SetSameSitePolicy(self: ?*anyopaque, sameSite: i32) void {
        qtc.QNetworkCookie_SetSameSitePolicy(@ptrCast(self), @bitCast(sameSite));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#isSessionCookie)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkCookie `
    ///
    pub fn IsSessionCookie(self: ?*anyopaque) bool {
        return qtc.QNetworkCookie_IsSessionCookie(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#expirationDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkCookie `
    ///
    pub fn ExpirationDate(self: ?*anyopaque) QtC.QDateTime {
        return qtc.QNetworkCookie_ExpirationDate(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#setExpirationDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkCookie `
    ///
    /// ` date: QtC.QDateTime `
    ///
    pub fn SetExpirationDate(self: ?*anyopaque, date: ?*anyopaque) void {
        qtc.QNetworkCookie_SetExpirationDate(@ptrCast(self), @ptrCast(date));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#domain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkCookie `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Domain(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QNetworkCookie_Domain(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkcookie.Domain: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#setDomain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkCookie `
    ///
    /// ` domain: []const u8 `
    ///
    pub fn SetDomain(self: ?*anyopaque, domain: []const u8) void {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        qtc.QNetworkCookie_SetDomain(@ptrCast(self), domain_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#path)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkCookie `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Path(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QNetworkCookie_Path(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkcookie.Path: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#setPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkCookie `
    ///
    /// ` path: []const u8 `
    ///
    pub fn SetPath(self: ?*anyopaque, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.QNetworkCookie_SetPath(@ptrCast(self), path_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkCookie `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QNetworkCookie_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qnetworkcookie.Name: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkCookie `
    ///
    /// ` cookieName: []u8 `
    ///
    pub fn SetName(self: ?*anyopaque, cookieName: []u8) void {
        const cookieName_str = qtc.libqt_string{
            .len = cookieName.len,
            .data = cookieName.ptr,
        };
        qtc.QNetworkCookie_SetName(@ptrCast(self), cookieName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkCookie `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Value(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QNetworkCookie_Value(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qnetworkcookie.Value: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#setValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkCookie `
    ///
    /// ` value: []u8 `
    ///
    pub fn SetValue(self: ?*anyopaque, value: []u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QNetworkCookie_SetValue(@ptrCast(self), value_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#toRawForm)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkCookie `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToRawForm(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QNetworkCookie_ToRawForm(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qnetworkcookie.ToRawForm: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#hasSameIdentifier)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkCookie `
    ///
    /// ` other: QtC.QNetworkCookie `
    ///
    pub fn HasSameIdentifier(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QNetworkCookie_HasSameIdentifier(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#normalize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkCookie `
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn Normalize(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.QNetworkCookie_Normalize(@ptrCast(self), @ptrCast(url));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#parseCookies)
    ///
    /// ## Parameter(s):
    ///
    /// ` cookieString: []u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ParseCookies(cookieString: []u8, allocator: std.mem.Allocator) []QtC.QNetworkCookie {
        const cookieString_str = qtc.libqt_string{
            .len = cookieString.len,
            .data = cookieString.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QNetworkCookie_ParseCookies(cookieString_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QNetworkCookie, _arr.len) catch @panic("qnetworkcookie.ParseCookies: Memory allocation failed");
        const _data: [*]QtC.QNetworkCookie = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#toRawForm)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkCookie `
    ///
    /// ` form: qnetworkcookie_enums.RawForm `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToRawForm1(self: ?*anyopaque, form: i32, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QNetworkCookie_ToRawForm1(@ptrCast(self), @bitCast(form));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qnetworkcookie.ToRawForm1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#dtor.QNetworkCookie)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QNetworkCookie `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QNetworkCookie_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#public-types)
pub const enums = struct {
    pub const RawForm = enum(i32) {
        pub const NameAndValueOnly: i32 = 0;
        pub const Full: i32 = 1;
    };

    pub const SameSite = enum(i32) {
        pub const Default: i32 = 0;
        pub const None: i32 = 1;
        pub const Lax: i32 = 2;
        pub const Strict: i32 = 3;
    };
};
