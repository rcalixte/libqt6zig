const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QDateTime = @import("libqt6").QDateTime;
const QUrl = @import("libqt6").QUrl;
const qnetworkcookie_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html)
pub const QNetworkCookie = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QNetworkCookie,

    pub const _is_QNetworkCookie = {};

    /// New constructs a new QNetworkCookie object.
    ///
    pub fn New() QNetworkCookie {
        return .{ .ptr = qtc.QNetworkCookie_new() };
    }

    /// New2 constructs a new QNetworkCookie object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QNetworkCookie `
    ///
    pub fn New2(other: anytype) QNetworkCookie {
        comptime _ = @TypeOf(other)._is_QNetworkCookie;
        return .{ .ptr = qtc.QNetworkCookie_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QNetworkCookie object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []u8 `
    ///
    pub fn New3(name: []u8) QNetworkCookie {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QNetworkCookie_new3(name_str) };
    }

    /// New4 constructs a new QNetworkCookie object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []u8 `
    ///
    /// ` value: []u8 `
    ///
    pub fn New4(name: []u8, value: []u8) QNetworkCookie {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        return .{ .ptr = qtc.QNetworkCookie_new4(name_str, value_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookie `
    ///
    /// ` other: QNetworkCookie `
    ///
    pub fn OperatorAssign(self: QNetworkCookie, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QNetworkCookie;
        qtc.QNetworkCookie_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookie `
    ///
    /// ` other: QNetworkCookie `
    ///
    pub fn Swap(self: QNetworkCookie, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QNetworkCookie;
        qtc.QNetworkCookie_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookie `
    ///
    /// ` other: QNetworkCookie `
    ///
    pub fn OperatorEqual(self: QNetworkCookie, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QNetworkCookie;
        return qtc.QNetworkCookie_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookie `
    ///
    /// ` other: QNetworkCookie `
    ///
    pub fn OperatorNotEqual(self: QNetworkCookie, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QNetworkCookie;
        return qtc.QNetworkCookie_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#isSecure)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookie `
    ///
    pub fn IsSecure(self: QNetworkCookie) bool {
        return qtc.QNetworkCookie_IsSecure(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#setSecure)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookie `
    ///
    /// ` enable: bool `
    ///
    pub fn SetSecure(self: QNetworkCookie, enable: bool) void {
        qtc.QNetworkCookie_SetSecure(@ptrCast(self.ptr), enable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#isHttpOnly)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookie `
    ///
    pub fn IsHttpOnly(self: QNetworkCookie) bool {
        return qtc.QNetworkCookie_IsHttpOnly(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#setHttpOnly)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookie `
    ///
    /// ` enable: bool `
    ///
    pub fn SetHttpOnly(self: QNetworkCookie, enable: bool) void {
        qtc.QNetworkCookie_SetHttpOnly(@ptrCast(self.ptr), enable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#sameSitePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookie `
    ///
    /// ## Returns:
    ///
    /// ` qnetworkcookie_enums.SameSite `
    ///
    pub fn SameSitePolicy(self: QNetworkCookie) i32 {
        return qtc.QNetworkCookie_SameSitePolicy(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#setSameSitePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookie `
    ///
    /// ` sameSite: qnetworkcookie_enums.SameSite `
    ///
    pub fn SetSameSitePolicy(self: QNetworkCookie, sameSite: i32) void {
        qtc.QNetworkCookie_SetSameSitePolicy(@ptrCast(self.ptr), @bitCast(sameSite));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#isSessionCookie)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookie `
    ///
    pub fn IsSessionCookie(self: QNetworkCookie) bool {
        return qtc.QNetworkCookie_IsSessionCookie(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#expirationDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookie `
    ///
    pub fn ExpirationDate(self: QNetworkCookie) QDateTime {
        return .{ .ptr = qtc.QNetworkCookie_ExpirationDate(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#setExpirationDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookie `
    ///
    /// ` date: QDateTime `
    ///
    pub fn SetExpirationDate(self: QNetworkCookie, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.QNetworkCookie_SetExpirationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#domain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookie `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Domain(self: QNetworkCookie, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QNetworkCookie_Domain(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkcookie.Domain: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#setDomain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookie `
    ///
    /// ` domain: []const u8 `
    ///
    pub fn SetDomain(self: QNetworkCookie, domain: []const u8) void {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        qtc.QNetworkCookie_SetDomain(@ptrCast(self.ptr), domain_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#path)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookie `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Path(self: QNetworkCookie, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QNetworkCookie_Path(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkcookie.Path: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#setPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookie `
    ///
    /// ` path: []const u8 `
    ///
    pub fn SetPath(self: QNetworkCookie, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.QNetworkCookie_SetPath(@ptrCast(self.ptr), path_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookie `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: QNetworkCookie, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QNetworkCookie_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qnetworkcookie.Name: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookie `
    ///
    /// ` cookieName: []u8 `
    ///
    pub fn SetName(self: QNetworkCookie, cookieName: []u8) void {
        const cookieName_str = qtc.libqt_string{
            .len = cookieName.len,
            .data = cookieName.ptr,
        };
        qtc.QNetworkCookie_SetName(@ptrCast(self.ptr), cookieName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookie `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Value(self: QNetworkCookie, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QNetworkCookie_Value(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qnetworkcookie.Value: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#setValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookie `
    ///
    /// ` value: []u8 `
    ///
    pub fn SetValue(self: QNetworkCookie, value: []u8) void {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QNetworkCookie_SetValue(@ptrCast(self.ptr), value_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#toRawForm)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookie `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToRawForm(self: QNetworkCookie, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QNetworkCookie_ToRawForm(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qnetworkcookie.ToRawForm: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#hasSameIdentifier)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookie `
    ///
    /// ` other: QNetworkCookie `
    ///
    pub fn HasSameIdentifier(self: QNetworkCookie, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QNetworkCookie;
        return qtc.QNetworkCookie_HasSameIdentifier(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#normalize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookie `
    ///
    /// ` url: QUrl `
    ///
    pub fn Normalize(self: QNetworkCookie, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.QNetworkCookie_Normalize(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#parseCookies)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` cookieString: []u8 `
    ///
    pub fn ParseCookies(allocator: std.mem.Allocator, cookieString: []u8) []QNetworkCookie {
        const cookieString_str = qtc.libqt_string{
            .len = cookieString.len,
            .data = cookieString.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QNetworkCookie_ParseCookies(cookieString_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QNetworkCookie, _arr.len) catch @panic("qnetworkcookie.ParseCookies: Memory allocation failed");
        const _data: [*]QtC.QNetworkCookie = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#toRawForm)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookie `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` form: qnetworkcookie_enums.RawForm `
    ///
    pub fn ToRawForm1(self: QNetworkCookie, allocator: std.mem.Allocator, form: i32) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QNetworkCookie_ToRawForm1(@ptrCast(self.ptr), @bitCast(form));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qnetworkcookie.ToRawForm1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#dtor.QNetworkCookie)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QNetworkCookie `
    ///
    pub fn Delete(self: QNetworkCookie) void {
        qtc.QNetworkCookie_Delete(@ptrCast(self.ptr));
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
