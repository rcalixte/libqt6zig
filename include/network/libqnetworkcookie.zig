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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QNetworkCookie object in C++ memory
    ///
    pub fn new() QNetworkCookie {
        return .{ .ptr = qtc.QNetworkCookie_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QNetworkCookie object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QNetworkCookie `
    ///
    pub fn new2(other: anytype) QNetworkCookie {
        comptime _ = @TypeOf(other)._is_QNetworkCookie;
        return .{ .ptr = qtc.QNetworkCookie_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QNetworkCookie object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _name: []u8 `
    ///
    pub fn new3(_name: []u8) QNetworkCookie {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.QNetworkCookie_new3(name_str) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QNetworkCookie object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _name: []u8 `
    ///
    /// ` _value: []u8 `
    ///
    pub fn new4(_name: []u8, _value: []u8) QNetworkCookie {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = _value.len,
            .data = _value.ptr,
        };
        return .{ .ptr = qtc.QNetworkCookie_new4(name_str, value_str) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookie `
    ///
    /// ` other: QNetworkCookie `
    ///
    pub fn operatorAssign(self: QNetworkCookie, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QNetworkCookie;
        qtc.QNetworkCookie_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookie `
    ///
    /// ` other: QNetworkCookie `
    ///
    pub fn swap(self: QNetworkCookie, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QNetworkCookie;
        qtc.QNetworkCookie_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookie `
    ///
    /// ` other: QNetworkCookie `
    ///
    pub fn operatorEqual(self: QNetworkCookie, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QNetworkCookie;
        return qtc.QNetworkCookie_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookie `
    ///
    /// ` other: QNetworkCookie `
    ///
    pub fn operatorNotEqual(self: QNetworkCookie, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QNetworkCookie;
        return qtc.QNetworkCookie_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isSecure` instead
    ///
    pub const IsSecure = isSecure;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#isSecure)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookie `
    ///
    pub fn isSecure(self: QNetworkCookie) bool {
        return qtc.QNetworkCookie_IsSecure(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSecure` instead
    ///
    pub const SetSecure = setSecure;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#setSecure)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookie `
    ///
    /// ` enable: bool `
    ///
    pub fn setSecure(self: QNetworkCookie, enable: bool) void {
        qtc.QNetworkCookie_SetSecure(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `isHttpOnly` instead
    ///
    pub const IsHttpOnly = isHttpOnly;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#isHttpOnly)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookie `
    ///
    pub fn isHttpOnly(self: QNetworkCookie) bool {
        return qtc.QNetworkCookie_IsHttpOnly(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHttpOnly` instead
    ///
    pub const SetHttpOnly = setHttpOnly;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#setHttpOnly)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookie `
    ///
    /// ` enable: bool `
    ///
    pub fn setHttpOnly(self: QNetworkCookie, enable: bool) void {
        qtc.QNetworkCookie_SetHttpOnly(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `sameSitePolicy` instead
    ///
    pub const SameSitePolicy = sameSitePolicy;

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
    pub fn sameSitePolicy(self: QNetworkCookie) i32 {
        return qtc.QNetworkCookie_SameSitePolicy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSameSitePolicy` instead
    ///
    pub const SetSameSitePolicy = setSameSitePolicy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#setSameSitePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookie `
    ///
    /// ` sameSite: qnetworkcookie_enums.SameSite `
    ///
    pub fn setSameSitePolicy(self: QNetworkCookie, sameSite: i32) void {
        qtc.QNetworkCookie_SetSameSitePolicy(@ptrCast(self.ptr), @bitCast(sameSite));
    }

    /// ### DEPRECATED: Use `isSessionCookie` instead
    ///
    pub const IsSessionCookie = isSessionCookie;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#isSessionCookie)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookie `
    ///
    pub fn isSessionCookie(self: QNetworkCookie) bool {
        return qtc.QNetworkCookie_IsSessionCookie(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `expirationDate` instead
    ///
    pub const ExpirationDate = expirationDate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#expirationDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookie `
    ///
    pub fn expirationDate(self: QNetworkCookie) QDateTime {
        return .{ .ptr = qtc.QNetworkCookie_ExpirationDate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setExpirationDate` instead
    ///
    pub const SetExpirationDate = setExpirationDate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#setExpirationDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookie `
    ///
    /// ` date: QDateTime `
    ///
    pub fn setExpirationDate(self: QNetworkCookie, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDateTime;
        qtc.QNetworkCookie_SetExpirationDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// ### DEPRECATED: Use `domain` instead
    ///
    pub const Domain = domain;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#domain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookie `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn domain(self: QNetworkCookie, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QNetworkCookie_Domain(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QNetworkCookie.domain: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setDomain` instead
    ///
    pub const SetDomain = setDomain;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#setDomain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookie `
    ///
    /// ` _domain: []const u8 `
    ///
    pub fn setDomain(self: QNetworkCookie, _domain: []const u8) void {
        const domain_str = qtc.libqt_string{
            .len = _domain.len,
            .data = _domain.ptr,
        };
        qtc.QNetworkCookie_SetDomain(@ptrCast(self.ptr), domain_str);
    }

    /// ### DEPRECATED: Use `path` instead
    ///
    pub const Path = path;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#path)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookie `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn path(self: QNetworkCookie, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QNetworkCookie_Path(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QNetworkCookie.path: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPath` instead
    ///
    pub const SetPath = setPath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#setPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookie `
    ///
    /// ` _path: []const u8 `
    ///
    pub fn setPath(self: QNetworkCookie, _path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = _path.len,
            .data = _path.ptr,
        };
        qtc.QNetworkCookie_SetPath(@ptrCast(self.ptr), path_str);
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookie `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: QNetworkCookie, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QNetworkCookie_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QNetworkCookie.name: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookie `
    ///
    /// ` cookieName: []u8 `
    ///
    pub fn setName(self: QNetworkCookie, cookieName: []u8) void {
        const cookieName_str = qtc.libqt_string{
            .len = cookieName.len,
            .data = cookieName.ptr,
        };
        qtc.QNetworkCookie_SetName(@ptrCast(self.ptr), cookieName_str);
    }

    /// ### DEPRECATED: Use `value` instead
    ///
    pub const Value = value;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookie `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn value(self: QNetworkCookie, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QNetworkCookie_Value(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QNetworkCookie.value: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setValue` instead
    ///
    pub const SetValue = setValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#setValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookie `
    ///
    /// ` _value: []u8 `
    ///
    pub fn setValue(self: QNetworkCookie, _value: []u8) void {
        const value_str = qtc.libqt_string{
            .len = _value.len,
            .data = _value.ptr,
        };
        qtc.QNetworkCookie_SetValue(@ptrCast(self.ptr), value_str);
    }

    /// ### DEPRECATED: Use `toRawForm` instead
    ///
    pub const ToRawForm = toRawForm;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#toRawForm)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookie `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toRawForm(self: QNetworkCookie, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QNetworkCookie_ToRawForm(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QNetworkCookie.toRawForm: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `hasSameIdentifier` instead
    ///
    pub const HasSameIdentifier = hasSameIdentifier;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#hasSameIdentifier)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookie `
    ///
    /// ` other: QNetworkCookie `
    ///
    pub fn hasSameIdentifier(self: QNetworkCookie, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QNetworkCookie;
        return qtc.QNetworkCookie_HasSameIdentifier(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `normalize` instead
    ///
    pub const Normalize = normalize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#normalize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookie `
    ///
    /// ` url: QUrl `
    ///
    pub fn normalize(self: QNetworkCookie, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.QNetworkCookie_Normalize(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `parseCookies` instead
    ///
    pub const ParseCookies = parseCookies;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#parseCookies)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` cookieString: []u8 `
    ///
    pub fn parseCookies(allocator: std.mem.Allocator, cookieString: []u8) []QNetworkCookie {
        const cookieString_str = qtc.libqt_string{
            .len = cookieString.len,
            .data = cookieString.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QNetworkCookie_ParseCookies(cookieString_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QNetworkCookie, _arr.len) catch @panic("QNetworkCookie.parseCookies: Memory allocation failed");
        const _data_val: [*]QtC.QNetworkCookie = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `toRawForm1` instead
    ///
    pub const ToRawForm1 = toRawForm1;

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
    pub fn toRawForm1(self: QNetworkCookie, allocator: std.mem.Allocator, form: i32) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QNetworkCookie_ToRawForm1(@ptrCast(self.ptr), @bitCast(form));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QNetworkCookie.toRawForm1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#dtor.QNetworkCookie)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QNetworkCookie `
    ///
    pub fn delete(self: QNetworkCookie) void {
        qtc.QNetworkCookie_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookie.html#public-types)
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
