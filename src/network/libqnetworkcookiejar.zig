const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QNetworkCookie = @import("libqt6").QNetworkCookie;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookiejar.html)
pub const QNetworkCookieJar = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookiejar.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QNetworkCookieJar,

    pub const _is_QNetworkCookieJar = {};
    pub const _is_QObject = {};

    /// New constructs a new QNetworkCookieJar object.
    ///
    pub fn New() QNetworkCookieJar {
        return .{ .ptr = qtc.QNetworkCookieJar_new() };
    }

    /// New2 constructs a new QNetworkCookieJar object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) QNetworkCookieJar {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QNetworkCookieJar_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    pub fn MetaObject(self: QNetworkCookieJar) QMetaObject {
        return .{ .ptr = qtc.QNetworkCookieJar_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QNetworkCookieJar, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QNetworkCookieJar_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    pub fn SuperMetaObject(self: QNetworkCookieJar) QMetaObject {
        return .{ .ptr = qtc.QNetworkCookieJar_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QNetworkCookieJar, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QNetworkCookieJar_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` callback: *const fn (self: QNetworkCookieJar, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QNetworkCookieJar, callback: *const fn (QNetworkCookieJar, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QNetworkCookieJar_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QNetworkCookieJar, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QNetworkCookieJar_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QNetworkCookieJar, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QNetworkCookieJar_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` callback: *const fn (self: QNetworkCookieJar, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QNetworkCookieJar, callback: *const fn (QNetworkCookieJar, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QNetworkCookieJar_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QNetworkCookieJar, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QNetworkCookieJar_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn Tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkcookiejar.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookiejar.html#cookiesForUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` url: QUrl `
    ///
    pub fn CookiesForUrl(self: QNetworkCookieJar, allocator: std.mem.Allocator, url: anytype) []QNetworkCookie {
        comptime _ = @TypeOf(url)._is_QUrl;
        const _arr: qtc.libqt_list = qtc.QNetworkCookieJar_CookiesForUrl(@ptrCast(self.ptr), @ptrCast(url.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QNetworkCookie, _arr.len) catch @panic("qnetworkcookiejar.CookiesForUrl: Memory allocation failed");
        const _data: [*]QtC.QNetworkCookie = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookiejar.html#cookiesForUrl)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` callback: *const fn (self: QNetworkCookieJar, url: QUrl) callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QNetworkCookie `
    ///
    pub fn OnCookiesForUrl(self: QNetworkCookieJar, callback: *const fn (QNetworkCookieJar, QUrl) callconv(.c) qtc.libqt_list) void {
        qtc.QNetworkCookieJar_OnCookiesForUrl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCookiesForUrl` instead
    ///
    pub const QBaseCookiesForUrl = SuperCookiesForUrl;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookiejar.html#cookiesForUrl)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` url: QUrl `
    ///
    pub fn SuperCookiesForUrl(self: QNetworkCookieJar, allocator: std.mem.Allocator, url: anytype) []QNetworkCookie {
        comptime _ = @TypeOf(url)._is_QUrl;
        const _arr: qtc.libqt_list = qtc.QNetworkCookieJar_SuperCookiesForUrl(@ptrCast(self.ptr), @ptrCast(url.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QNetworkCookie, _arr.len) catch @panic("qnetworkcookiejar.CookiesForUrl: Memory allocation failed");
        const _data: [*]QtC.QNetworkCookie = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookiejar.html#setCookiesFromUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` cookieList: []QNetworkCookie `
    ///
    /// ` url: QUrl `
    ///
    pub fn SetCookiesFromUrl(self: QNetworkCookieJar, cookieList: []QNetworkCookie, url: anytype) bool {
        const cookieList_list = qtc.libqt_list{
            .len = cookieList.len,
            .data = @ptrCast(cookieList.ptr),
        };
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.QNetworkCookieJar_SetCookiesFromUrl(@ptrCast(self.ptr), cookieList_list, @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookiejar.html#setCookiesFromUrl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` callback: *const fn (self: QNetworkCookieJar, cookieList: qtc.libqt_list ([]QNetworkCookie), url: QUrl) callconv(.c) bool `
    ///
    pub fn OnSetCookiesFromUrl(self: QNetworkCookieJar, callback: *const fn (QNetworkCookieJar, qtc.libqt_list, QUrl) callconv(.c) bool) void {
        qtc.QNetworkCookieJar_OnSetCookiesFromUrl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetCookiesFromUrl` instead
    ///
    pub const QBaseSetCookiesFromUrl = SuperSetCookiesFromUrl;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookiejar.html#setCookiesFromUrl)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` cookieList: []QNetworkCookie `
    ///
    /// ` url: QUrl `
    ///
    pub fn SuperSetCookiesFromUrl(self: QNetworkCookieJar, cookieList: []QNetworkCookie, url: anytype) bool {
        const cookieList_list = qtc.libqt_list{
            .len = cookieList.len,
            .data = @ptrCast(cookieList.ptr),
        };
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.QNetworkCookieJar_SuperSetCookiesFromUrl(@ptrCast(self.ptr), cookieList_list, @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookiejar.html#insertCookie)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` cookie: QNetworkCookie `
    ///
    pub fn InsertCookie(self: QNetworkCookieJar, cookie: anytype) bool {
        comptime _ = @TypeOf(cookie)._is_QNetworkCookie;
        return qtc.QNetworkCookieJar_InsertCookie(@ptrCast(self.ptr), @ptrCast(cookie.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookiejar.html#insertCookie)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` callback: *const fn (self: QNetworkCookieJar, cookie: QNetworkCookie) callconv(.c) bool `
    ///
    pub fn OnInsertCookie(self: QNetworkCookieJar, callback: *const fn (QNetworkCookieJar, QNetworkCookie) callconv(.c) bool) void {
        qtc.QNetworkCookieJar_OnInsertCookie(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperInsertCookie` instead
    ///
    pub const QBaseInsertCookie = SuperInsertCookie;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookiejar.html#insertCookie)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` cookie: QNetworkCookie `
    ///
    pub fn SuperInsertCookie(self: QNetworkCookieJar, cookie: anytype) bool {
        comptime _ = @TypeOf(cookie)._is_QNetworkCookie;
        return qtc.QNetworkCookieJar_SuperInsertCookie(@ptrCast(self.ptr), @ptrCast(cookie.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookiejar.html#updateCookie)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` cookie: QNetworkCookie `
    ///
    pub fn UpdateCookie(self: QNetworkCookieJar, cookie: anytype) bool {
        comptime _ = @TypeOf(cookie)._is_QNetworkCookie;
        return qtc.QNetworkCookieJar_UpdateCookie(@ptrCast(self.ptr), @ptrCast(cookie.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookiejar.html#updateCookie)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` callback: *const fn (self: QNetworkCookieJar, cookie: QNetworkCookie) callconv(.c) bool `
    ///
    pub fn OnUpdateCookie(self: QNetworkCookieJar, callback: *const fn (QNetworkCookieJar, QNetworkCookie) callconv(.c) bool) void {
        qtc.QNetworkCookieJar_OnUpdateCookie(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperUpdateCookie` instead
    ///
    pub const QBaseUpdateCookie = SuperUpdateCookie;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookiejar.html#updateCookie)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` cookie: QNetworkCookie `
    ///
    pub fn SuperUpdateCookie(self: QNetworkCookieJar, cookie: anytype) bool {
        comptime _ = @TypeOf(cookie)._is_QNetworkCookie;
        return qtc.QNetworkCookieJar_SuperUpdateCookie(@ptrCast(self.ptr), @ptrCast(cookie.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookiejar.html#deleteCookie)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` cookie: QNetworkCookie `
    ///
    pub fn DeleteCookie(self: QNetworkCookieJar, cookie: anytype) bool {
        comptime _ = @TypeOf(cookie)._is_QNetworkCookie;
        return qtc.QNetworkCookieJar_DeleteCookie(@ptrCast(self.ptr), @ptrCast(cookie.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookiejar.html#deleteCookie)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` callback: *const fn (self: QNetworkCookieJar, cookie: QNetworkCookie) callconv(.c) bool `
    ///
    pub fn OnDeleteCookie(self: QNetworkCookieJar, callback: *const fn (QNetworkCookieJar, QNetworkCookie) callconv(.c) bool) void {
        qtc.QNetworkCookieJar_OnDeleteCookie(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDeleteCookie` instead
    ///
    pub const QBaseDeleteCookie = SuperDeleteCookie;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookiejar.html#deleteCookie)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` cookie: QNetworkCookie `
    ///
    pub fn SuperDeleteCookie(self: QNetworkCookieJar, cookie: anytype) bool {
        comptime _ = @TypeOf(cookie)._is_QNetworkCookie;
        return qtc.QNetworkCookieJar_SuperDeleteCookie(@ptrCast(self.ptr), @ptrCast(cookie.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookiejar.html#allCookies)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AllCookies(self: QNetworkCookieJar, allocator: std.mem.Allocator) []QNetworkCookie {
        const _arr: qtc.libqt_list = qtc.QNetworkCookieJar_AllCookies(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QNetworkCookie, _arr.len) catch @panic("qnetworkcookiejar.AllCookies: Memory allocation failed");
        const _data: [*]QtC.QNetworkCookie = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookiejar.html#allCookies)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QNetworkCookie `
    ///
    pub fn OnAllCookies(self: QNetworkCookieJar, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.QNetworkCookieJar_OnAllCookies(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAllCookies` instead
    ///
    pub const QBaseAllCookies = SuperAllCookies;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookiejar.html#allCookies)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperAllCookies(self: QNetworkCookieJar, allocator: std.mem.Allocator) []QNetworkCookie {
        const _arr: qtc.libqt_list = qtc.QNetworkCookieJar_SuperAllCookies(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QNetworkCookie, _arr.len) catch @panic("qnetworkcookiejar.AllCookies: Memory allocation failed");
        const _data: [*]QtC.QNetworkCookie = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookiejar.html#setAllCookies)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` cookieList: []QNetworkCookie `
    ///
    pub fn SetAllCookies(self: QNetworkCookieJar, cookieList: []QNetworkCookie) void {
        const cookieList_list = qtc.libqt_list{
            .len = cookieList.len,
            .data = @ptrCast(cookieList.ptr),
        };
        qtc.QNetworkCookieJar_SetAllCookies(@ptrCast(self.ptr), cookieList_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookiejar.html#setAllCookies)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` callback: *const fn (self: QNetworkCookieJar, cookieList: qtc.libqt_list ([]QNetworkCookie)) callconv(.c) void `
    ///
    pub fn OnSetAllCookies(self: QNetworkCookieJar, callback: *const fn (QNetworkCookieJar, qtc.libqt_list) callconv(.c) void) void {
        qtc.QNetworkCookieJar_OnSetAllCookies(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetAllCookies` instead
    ///
    pub const QBaseSetAllCookies = SuperSetAllCookies;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookiejar.html#setAllCookies)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` cookieList: []QNetworkCookie `
    ///
    pub fn SuperSetAllCookies(self: QNetworkCookieJar, cookieList: []QNetworkCookie) void {
        const cookieList_list = qtc.libqt_list{
            .len = cookieList.len,
            .data = @ptrCast(cookieList.ptr),
        };
        qtc.QNetworkCookieJar_SuperSetAllCookies(@ptrCast(self.ptr), cookieList_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookiejar.html#validateCookie)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` cookie: QNetworkCookie `
    ///
    /// ` url: QUrl `
    ///
    pub fn ValidateCookie(self: QNetworkCookieJar, cookie: anytype, url: anytype) bool {
        comptime _ = @TypeOf(cookie)._is_QNetworkCookie;
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.QNetworkCookieJar_ValidateCookie(@ptrCast(self.ptr), @ptrCast(cookie.ptr), @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookiejar.html#validateCookie)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` callback: *const fn (self: QNetworkCookieJar, cookie: QNetworkCookie, url: QUrl) callconv(.c) bool `
    ///
    pub fn OnValidateCookie(self: QNetworkCookieJar, callback: *const fn (QNetworkCookieJar, QNetworkCookie, QUrl) callconv(.c) bool) void {
        qtc.QNetworkCookieJar_OnValidateCookie(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperValidateCookie` instead
    ///
    pub const QBaseValidateCookie = SuperValidateCookie;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookiejar.html#validateCookie)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` cookie: QNetworkCookie `
    ///
    /// ` url: QUrl `
    ///
    pub fn SuperValidateCookie(self: QNetworkCookieJar, cookie: anytype, url: anytype) bool {
        comptime _ = @TypeOf(cookie)._is_QNetworkCookie;
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.QNetworkCookieJar_SuperValidateCookie(@ptrCast(self.ptr), @ptrCast(cookie.ptr), @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    pub fn Tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkcookiejar.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    pub fn Tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkcookiejar.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QNetworkCookieJar, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkcookiejar.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QNetworkCookieJar, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    pub fn IsWidgetType(self: QNetworkCookieJar) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    pub fn IsWindowType(self: QNetworkCookieJar) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    pub fn IsQuickItemType(self: QNetworkCookieJar) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    pub fn SignalsBlocked(self: QNetworkCookieJar) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QNetworkCookieJar, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    pub fn Thread(self: QNetworkCookieJar) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QNetworkCookieJar, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QNetworkCookieJar, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QNetworkCookieJar, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QNetworkCookieJar, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QNetworkCookieJar, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QNetworkCookieJar, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qnetworkcookiejar.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QNetworkCookieJar, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QNetworkCookieJar, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QNetworkCookieJar, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn Connect2(sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QNetworkCookieJar, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn Disconnect2(sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    pub fn Disconnect3(self: QNetworkCookieJar) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QNetworkCookieJar, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    pub fn DumpObjectTree(self: QNetworkCookieJar) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    pub fn DumpObjectInfo(self: QNetworkCookieJar) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QNetworkCookieJar, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QNetworkCookieJar, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QNetworkCookieJar, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qnetworkcookiejar.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qnetworkcookiejar.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    pub fn BindingStorage(self: QNetworkCookieJar) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    pub fn BindingStorage2(self: QNetworkCookieJar) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    pub fn Destroyed(self: QNetworkCookieJar) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` callback: *const fn (self: QNetworkCookieJar) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QNetworkCookieJar, callback: *const fn (QNetworkCookieJar) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    pub fn Parent(self: QNetworkCookieJar) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QNetworkCookieJar, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    pub fn DeleteLater(self: QNetworkCookieJar) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QNetworkCookieJar, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QNetworkCookieJar, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QNetworkCookieJar, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QNetworkCookieJar, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QNetworkCookieJar, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QNetworkCookieJar, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QNetworkCookieJar, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QNetworkCookieJar, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` callback: *const fn (self: QNetworkCookieJar, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QNetworkCookieJar, callback: *const fn (QNetworkCookieJar, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QNetworkCookieJar, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QNetworkCookieJar_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QNetworkCookieJar, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QNetworkCookieJar_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkCookieJar`
    ///
    /// ` callback: *const fn (self: QNetworkCookieJar, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QNetworkCookieJar, callback: *const fn (QNetworkCookieJar, QEvent) callconv(.c) bool) void {
        qtc.QNetworkCookieJar_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QNetworkCookieJar, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QNetworkCookieJar_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QNetworkCookieJar, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QNetworkCookieJar_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkCookieJar`
    ///
    /// ` callback: *const fn (self: QNetworkCookieJar, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QNetworkCookieJar, callback: *const fn (QNetworkCookieJar, QObject, QEvent) callconv(.c) bool) void {
        qtc.QNetworkCookieJar_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QNetworkCookieJar, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QNetworkCookieJar_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QNetworkCookieJar, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QNetworkCookieJar_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkCookieJar`
    ///
    /// ` callback: *const fn (self: QNetworkCookieJar, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QNetworkCookieJar, callback: *const fn (QNetworkCookieJar, QTimerEvent) callconv(.c) void) void {
        qtc.QNetworkCookieJar_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QNetworkCookieJar, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QNetworkCookieJar_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperChildEvent` instead
    ///
    pub const QBaseChildEvent = SuperChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QNetworkCookieJar, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QNetworkCookieJar_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkCookieJar`
    ///
    /// ` callback: *const fn (self: QNetworkCookieJar, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QNetworkCookieJar, callback: *const fn (QNetworkCookieJar, QChildEvent) callconv(.c) void) void {
        qtc.QNetworkCookieJar_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QNetworkCookieJar, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QNetworkCookieJar_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperCustomEvent` instead
    ///
    pub const QBaseCustomEvent = SuperCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QNetworkCookieJar, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QNetworkCookieJar_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkCookieJar`
    ///
    /// ` callback: *const fn (self: QNetworkCookieJar, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QNetworkCookieJar, callback: *const fn (QNetworkCookieJar, QEvent) callconv(.c) void) void {
        qtc.QNetworkCookieJar_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QNetworkCookieJar, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QNetworkCookieJar_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperConnectNotify` instead
    ///
    pub const QBaseConnectNotify = SuperConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QNetworkCookieJar, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QNetworkCookieJar_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkCookieJar`
    ///
    /// ` callback: *const fn (self: QNetworkCookieJar, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QNetworkCookieJar, callback: *const fn (QNetworkCookieJar, QMetaMethod) callconv(.c) void) void {
        qtc.QNetworkCookieJar_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QNetworkCookieJar, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QNetworkCookieJar_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperDisconnectNotify` instead
    ///
    pub const QBaseDisconnectNotify = SuperDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QNetworkCookieJar, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QNetworkCookieJar_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkCookieJar`
    ///
    /// ` callback: *const fn (self: QNetworkCookieJar, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QNetworkCookieJar, callback: *const fn (QNetworkCookieJar, QMetaMethod) callconv(.c) void) void {
        qtc.QNetworkCookieJar_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    pub fn Sender(self: QNetworkCookieJar) QObject {
        return .{ .ptr = qtc.QNetworkCookieJar_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSender` instead
    ///
    pub const QBaseSender = SuperSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    pub fn SuperSender(self: QNetworkCookieJar) QObject {
        return .{ .ptr = qtc.QNetworkCookieJar_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkCookieJar`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QNetworkCookieJar, callback: *const fn () callconv(.c) QObject) void {
        qtc.QNetworkCookieJar_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    pub fn SenderSignalIndex(self: QNetworkCookieJar) i32 {
        return qtc.QNetworkCookieJar_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSenderSignalIndex` instead
    ///
    pub const QBaseSenderSignalIndex = SuperSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    pub fn SuperSenderSignalIndex(self: QNetworkCookieJar) i32 {
        return qtc.QNetworkCookieJar_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkCookieJar`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QNetworkCookieJar, callback: *const fn () callconv(.c) i32) void {
        qtc.QNetworkCookieJar_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QNetworkCookieJar, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QNetworkCookieJar_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `SuperReceivers` instead
    ///
    pub const QBaseReceivers = SuperReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QNetworkCookieJar, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QNetworkCookieJar_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkCookieJar`
    ///
    /// ` callback: *const fn (self: QNetworkCookieJar, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QNetworkCookieJar, callback: *const fn (QNetworkCookieJar, [*:0]const u8) callconv(.c) i32) void {
        qtc.QNetworkCookieJar_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QNetworkCookieJar, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QNetworkCookieJar_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsSignalConnected` instead
    ///
    pub const QBaseIsSignalConnected = SuperIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QNetworkCookieJar, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QNetworkCookieJar_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkCookieJar`
    ///
    /// ` callback: *const fn (self: QNetworkCookieJar, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QNetworkCookieJar, callback: *const fn (QNetworkCookieJar, QMetaMethod) callconv(.c) bool) void {
        qtc.QNetworkCookieJar_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` callback: *const fn (self: QNetworkCookieJar, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QNetworkCookieJar, callback: *const fn (QNetworkCookieJar, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookiejar.html#dtor.QNetworkCookieJar)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QNetworkCookieJar `
    ///
    pub fn Delete(self: QNetworkCookieJar) void {
        qtc.QNetworkCookieJar_Delete(@ptrCast(self.ptr));
    }
};
