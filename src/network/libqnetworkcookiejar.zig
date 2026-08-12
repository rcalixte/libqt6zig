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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QNetworkCookieJar object in C++ memory
    ///
    pub fn new() QNetworkCookieJar {
        return .{ .ptr = qtc.QNetworkCookieJar_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QNetworkCookieJar object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QNetworkCookieJar {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QNetworkCookieJar_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    pub fn metaObject(self: QNetworkCookieJar) QMetaObject {
        return .{ .ptr = qtc.QNetworkCookieJar_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMetaObject` instead
    ///
    pub const OnMetaObject = onMetaObject;

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
    pub fn onMetaObject(self: QNetworkCookieJar, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QNetworkCookieJar_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetaObject` instead
    ///
    pub const SuperMetaObject = superMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    pub fn superMetaObject(self: QNetworkCookieJar) QMetaObject {
        return .{ .ptr = qtc.QNetworkCookieJar_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QNetworkCookieJar, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QNetworkCookieJar_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` callback: *const fn (self: QNetworkCookieJar, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QNetworkCookieJar, callback: *const fn (QNetworkCookieJar, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QNetworkCookieJar_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QNetworkCookieJar, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QNetworkCookieJar_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QNetworkCookieJar, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QNetworkCookieJar_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` callback: *const fn (self: QNetworkCookieJar, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QNetworkCookieJar, callback: *const fn (QNetworkCookieJar, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QNetworkCookieJar_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: QNetworkCookieJar, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QNetworkCookieJar_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QNetworkCookieJar.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `cookiesForUrl` instead
    ///
    pub const CookiesForUrl = cookiesForUrl;

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
    pub fn cookiesForUrl(self: QNetworkCookieJar, allocator: std.mem.Allocator, url: anytype) []QNetworkCookie {
        comptime _ = @TypeOf(url)._is_QUrl;
        const _arr: qtc.libqt_list = qtc.QNetworkCookieJar_CookiesForUrl(@ptrCast(self.ptr), @ptrCast(url.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QNetworkCookie, _arr.len) catch @panic("QNetworkCookieJar.cookiesForUrl: Memory allocation failed");
        const _data_val: [*]QtC.QNetworkCookie = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `onCookiesForUrl` instead
    ///
    pub const OnCookiesForUrl = onCookiesForUrl;

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
    pub fn onCookiesForUrl(self: QNetworkCookieJar, callback: *const fn (QNetworkCookieJar, QUrl) callconv(.c) qtc.libqt_list) void {
        qtc.QNetworkCookieJar_OnCookiesForUrl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCookiesForUrl` instead
    ///
    pub const SuperCookiesForUrl = superCookiesForUrl;

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
    pub fn superCookiesForUrl(self: QNetworkCookieJar, allocator: std.mem.Allocator, url: anytype) []QNetworkCookie {
        comptime _ = @TypeOf(url)._is_QUrl;
        const _arr: qtc.libqt_list = qtc.QNetworkCookieJar_SuperCookiesForUrl(@ptrCast(self.ptr), @ptrCast(url.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QNetworkCookie, _arr.len) catch @panic("QNetworkCookieJar.cookiesForUrl: Memory allocation failed");
        const _data_val: [*]QtC.QNetworkCookie = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setCookiesFromUrl` instead
    ///
    pub const SetCookiesFromUrl = setCookiesFromUrl;

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
    pub fn setCookiesFromUrl(self: QNetworkCookieJar, cookieList: []QNetworkCookie, url: anytype) bool {
        const cookieList_list = qtc.libqt_list{
            .len = cookieList.len,
            .data = @ptrCast(cookieList.ptr),
        };
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.QNetworkCookieJar_SetCookiesFromUrl(@ptrCast(self.ptr), cookieList_list, @ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `onSetCookiesFromUrl` instead
    ///
    pub const OnSetCookiesFromUrl = onSetCookiesFromUrl;

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
    pub fn onSetCookiesFromUrl(self: QNetworkCookieJar, callback: *const fn (QNetworkCookieJar, qtc.libqt_list, QUrl) callconv(.c) bool) void {
        qtc.QNetworkCookieJar_OnSetCookiesFromUrl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetCookiesFromUrl` instead
    ///
    pub const SuperSetCookiesFromUrl = superSetCookiesFromUrl;

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
    pub fn superSetCookiesFromUrl(self: QNetworkCookieJar, cookieList: []QNetworkCookie, url: anytype) bool {
        const cookieList_list = qtc.libqt_list{
            .len = cookieList.len,
            .data = @ptrCast(cookieList.ptr),
        };
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.QNetworkCookieJar_SuperSetCookiesFromUrl(@ptrCast(self.ptr), cookieList_list, @ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `insertCookie` instead
    ///
    pub const InsertCookie = insertCookie;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookiejar.html#insertCookie)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` cookie: QNetworkCookie `
    ///
    pub fn insertCookie(self: QNetworkCookieJar, cookie: anytype) bool {
        comptime _ = @TypeOf(cookie)._is_QNetworkCookie;
        return qtc.QNetworkCookieJar_InsertCookie(@ptrCast(self.ptr), @ptrCast(cookie.ptr));
    }

    /// ### DEPRECATED: Use `onInsertCookie` instead
    ///
    pub const OnInsertCookie = onInsertCookie;

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
    pub fn onInsertCookie(self: QNetworkCookieJar, callback: *const fn (QNetworkCookieJar, QNetworkCookie) callconv(.c) bool) void {
        qtc.QNetworkCookieJar_OnInsertCookie(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superInsertCookie` instead
    ///
    pub const SuperInsertCookie = superInsertCookie;

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
    pub fn superInsertCookie(self: QNetworkCookieJar, cookie: anytype) bool {
        comptime _ = @TypeOf(cookie)._is_QNetworkCookie;
        return qtc.QNetworkCookieJar_SuperInsertCookie(@ptrCast(self.ptr), @ptrCast(cookie.ptr));
    }

    /// ### DEPRECATED: Use `updateCookie` instead
    ///
    pub const UpdateCookie = updateCookie;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookiejar.html#updateCookie)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` cookie: QNetworkCookie `
    ///
    pub fn updateCookie(self: QNetworkCookieJar, cookie: anytype) bool {
        comptime _ = @TypeOf(cookie)._is_QNetworkCookie;
        return qtc.QNetworkCookieJar_UpdateCookie(@ptrCast(self.ptr), @ptrCast(cookie.ptr));
    }

    /// ### DEPRECATED: Use `onUpdateCookie` instead
    ///
    pub const OnUpdateCookie = onUpdateCookie;

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
    pub fn onUpdateCookie(self: QNetworkCookieJar, callback: *const fn (QNetworkCookieJar, QNetworkCookie) callconv(.c) bool) void {
        qtc.QNetworkCookieJar_OnUpdateCookie(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUpdateCookie` instead
    ///
    pub const SuperUpdateCookie = superUpdateCookie;

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
    pub fn superUpdateCookie(self: QNetworkCookieJar, cookie: anytype) bool {
        comptime _ = @TypeOf(cookie)._is_QNetworkCookie;
        return qtc.QNetworkCookieJar_SuperUpdateCookie(@ptrCast(self.ptr), @ptrCast(cookie.ptr));
    }

    /// ### DEPRECATED: Use `deleteCookie` instead
    ///
    pub const DeleteCookie = deleteCookie;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookiejar.html#deleteCookie)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` cookie: QNetworkCookie `
    ///
    pub fn deleteCookie(self: QNetworkCookieJar, cookie: anytype) bool {
        comptime _ = @TypeOf(cookie)._is_QNetworkCookie;
        return qtc.QNetworkCookieJar_DeleteCookie(@ptrCast(self.ptr), @ptrCast(cookie.ptr));
    }

    /// ### DEPRECATED: Use `onDeleteCookie` instead
    ///
    pub const OnDeleteCookie = onDeleteCookie;

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
    pub fn onDeleteCookie(self: QNetworkCookieJar, callback: *const fn (QNetworkCookieJar, QNetworkCookie) callconv(.c) bool) void {
        qtc.QNetworkCookieJar_OnDeleteCookie(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDeleteCookie` instead
    ///
    pub const SuperDeleteCookie = superDeleteCookie;

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
    pub fn superDeleteCookie(self: QNetworkCookieJar, cookie: anytype) bool {
        comptime _ = @TypeOf(cookie)._is_QNetworkCookie;
        return qtc.QNetworkCookieJar_SuperDeleteCookie(@ptrCast(self.ptr), @ptrCast(cookie.ptr));
    }

    /// ### DEPRECATED: Use `allCookies` instead
    ///
    pub const AllCookies = allCookies;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookiejar.html#allCookies)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn allCookies(self: QNetworkCookieJar, allocator: std.mem.Allocator) []QNetworkCookie {
        const _arr: qtc.libqt_list = qtc.QNetworkCookieJar_AllCookies(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QNetworkCookie, _arr.len) catch @panic("QNetworkCookieJar.allCookies: Memory allocation failed");
        const _data_val: [*]QtC.QNetworkCookie = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `onAllCookies` instead
    ///
    pub const OnAllCookies = onAllCookies;

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
    pub fn onAllCookies(self: QNetworkCookieJar, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.QNetworkCookieJar_OnAllCookies(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superAllCookies` instead
    ///
    pub const SuperAllCookies = superAllCookies;

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
    pub fn superAllCookies(self: QNetworkCookieJar, allocator: std.mem.Allocator) []QNetworkCookie {
        const _arr: qtc.libqt_list = qtc.QNetworkCookieJar_SuperAllCookies(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QNetworkCookie, _arr.len) catch @panic("QNetworkCookieJar.allCookies: Memory allocation failed");
        const _data_val: [*]QtC.QNetworkCookie = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setAllCookies` instead
    ///
    pub const SetAllCookies = setAllCookies;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookiejar.html#setAllCookies)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` cookieList: []QNetworkCookie `
    ///
    pub fn setAllCookies(self: QNetworkCookieJar, cookieList: []QNetworkCookie) void {
        const cookieList_list = qtc.libqt_list{
            .len = cookieList.len,
            .data = @ptrCast(cookieList.ptr),
        };
        qtc.QNetworkCookieJar_SetAllCookies(@ptrCast(self.ptr), cookieList_list);
    }

    /// ### DEPRECATED: Use `onSetAllCookies` instead
    ///
    pub const OnSetAllCookies = onSetAllCookies;

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
    pub fn onSetAllCookies(self: QNetworkCookieJar, callback: *const fn (QNetworkCookieJar, qtc.libqt_list) callconv(.c) void) void {
        qtc.QNetworkCookieJar_OnSetAllCookies(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetAllCookies` instead
    ///
    pub const SuperSetAllCookies = superSetAllCookies;

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
    pub fn superSetAllCookies(self: QNetworkCookieJar, cookieList: []QNetworkCookie) void {
        const cookieList_list = qtc.libqt_list{
            .len = cookieList.len,
            .data = @ptrCast(cookieList.ptr),
        };
        qtc.QNetworkCookieJar_SuperSetAllCookies(@ptrCast(self.ptr), cookieList_list);
    }

    /// ### DEPRECATED: Use `validateCookie` instead
    ///
    pub const ValidateCookie = validateCookie;

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
    pub fn validateCookie(self: QNetworkCookieJar, cookie: anytype, url: anytype) bool {
        comptime _ = @TypeOf(cookie)._is_QNetworkCookie;
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.QNetworkCookieJar_ValidateCookie(@ptrCast(self.ptr), @ptrCast(cookie.ptr), @ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `onValidateCookie` instead
    ///
    pub const OnValidateCookie = onValidateCookie;

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
    pub fn onValidateCookie(self: QNetworkCookieJar, callback: *const fn (QNetworkCookieJar, QNetworkCookie, QUrl) callconv(.c) bool) void {
        qtc.QNetworkCookieJar_OnValidateCookie(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superValidateCookie` instead
    ///
    pub const SuperValidateCookie = superValidateCookie;

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
    pub fn superValidateCookie(self: QNetworkCookieJar, cookie: anytype, url: anytype) bool {
        comptime _ = @TypeOf(cookie)._is_QNetworkCookie;
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.QNetworkCookieJar_SuperValidateCookie(@ptrCast(self.ptr), @ptrCast(cookie.ptr), @ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

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
    pub fn tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QNetworkCookieJar.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

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
    pub fn tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QNetworkCookieJar.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `objectName` instead
    ///
    pub const ObjectName = objectName;

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
    pub fn objectName(self: QNetworkCookieJar, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QNetworkCookieJar.objectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setObjectName` instead
    ///
    pub const SetObjectName = setObjectName;

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
    pub fn setObjectName(self: QNetworkCookieJar, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `isWidgetType` instead
    ///
    pub const IsWidgetType = isWidgetType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    pub fn isWidgetType(self: QNetworkCookieJar) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWindowType` instead
    ///
    pub const IsWindowType = isWindowType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    pub fn isWindowType(self: QNetworkCookieJar) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isQuickItemType` instead
    ///
    pub const IsQuickItemType = isQuickItemType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    pub fn isQuickItemType(self: QNetworkCookieJar) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `signalsBlocked` instead
    ///
    pub const SignalsBlocked = signalsBlocked;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    pub fn signalsBlocked(self: QNetworkCookieJar) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `blockSignals` instead
    ///
    pub const BlockSignals = blockSignals;

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
    pub fn blockSignals(self: QNetworkCookieJar, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `thread` instead
    ///
    pub const Thread = thread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    pub fn thread(self: QNetworkCookieJar) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `moveToThread` instead
    ///
    pub const MoveToThread = moveToThread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QNetworkCookieJar, _thread: anytype) bool {
        comptime _ = @TypeOf(_thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(_thread.ptr));
    }

    /// ### DEPRECATED: Use `startTimer` instead
    ///
    pub const StartTimer = startTimer;

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
    pub fn startTimer(self: QNetworkCookieJar, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// ### DEPRECATED: Use `startTimer2` instead
    ///
    pub const StartTimer2 = startTimer2;

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
    pub fn startTimer2(self: QNetworkCookieJar, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// ### DEPRECATED: Use `killTimer` instead
    ///
    pub const KillTimer = killTimer;

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
    pub fn killTimer(self: QNetworkCookieJar, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `killTimer2` instead
    ///
    pub const KillTimer2 = killTimer2;

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
    pub fn killTimer2(self: QNetworkCookieJar, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `children` instead
    ///
    pub const Children = children;

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
    pub fn children(self: QNetworkCookieJar, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QNetworkCookieJar.children: Memory allocation failed");
        const _data_val: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setParent` instead
    ///
    pub const SetParent = setParent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QNetworkCookieJar, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `installEventFilter` instead
    ///
    pub const InstallEventFilter = installEventFilter;

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
    pub fn installEventFilter(self: QNetworkCookieJar, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// ### DEPRECATED: Use `removeEventFilter` instead
    ///
    pub const RemoveEventFilter = removeEventFilter;

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
    pub fn removeEventFilter(self: QNetworkCookieJar, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// ### DEPRECATED: Use `connect` instead
    ///
    pub const Connect = connect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// ### DEPRECATED: Use `connect2` instead
    ///
    pub const Connect2 = connect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn connect2(_sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// ### DEPRECATED: Use `connect3` instead
    ///
    pub const Connect3 = connect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QNetworkCookieJar, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// ### DEPRECATED: Use `disconnect` instead
    ///
    pub const Disconnect = disconnect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect2` instead
    ///
    pub const Disconnect2 = disconnect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn disconnect2(_sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// ### DEPRECATED: Use `disconnect3` instead
    ///
    pub const Disconnect3 = disconnect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    pub fn disconnect3(self: QNetworkCookieJar) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `disconnect4` instead
    ///
    pub const Disconnect4 = disconnect4;

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
    pub fn disconnect4(self: QNetworkCookieJar, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect5` instead
    ///
    pub const Disconnect5 = disconnect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectTree` instead
    ///
    pub const DumpObjectTree = dumpObjectTree;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    pub fn dumpObjectTree(self: QNetworkCookieJar) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectInfo` instead
    ///
    pub const DumpObjectInfo = dumpObjectInfo;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    pub fn dumpObjectInfo(self: QNetworkCookieJar) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

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
    pub fn setProperty(self: QNetworkCookieJar, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

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
    pub fn property(self: QNetworkCookieJar, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// ### DEPRECATED: Use `dynamicPropertyNames` instead
    ///
    pub const DynamicPropertyNames = dynamicPropertyNames;

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
    pub fn dynamicPropertyNames(self: QNetworkCookieJar, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QNetworkCookieJar.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QNetworkCookieJar.dynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `bindingStorage` instead
    ///
    pub const BindingStorage = bindingStorage;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    pub fn bindingStorage(self: QNetworkCookieJar) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `bindingStorage2` instead
    ///
    pub const BindingStorage2 = bindingStorage2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    pub fn bindingStorage2(self: QNetworkCookieJar) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `destroyed` instead
    ///
    pub const Destroyed = destroyed;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    pub fn destroyed(self: QNetworkCookieJar) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed` instead
    ///
    pub const OnDestroyed = onDestroyed;

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
    pub fn onDestroyed(self: QNetworkCookieJar, callback: *const fn (QNetworkCookieJar) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    pub fn parent(self: QNetworkCookieJar) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `inherits` instead
    ///
    pub const Inherits = inherits;

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
    pub fn inherits(self: QNetworkCookieJar, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// ### DEPRECATED: Use `deleteLater` instead
    ///
    pub const DeleteLater = deleteLater;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    pub fn deleteLater(self: QNetworkCookieJar) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startTimer22` instead
    ///
    pub const StartTimer22 = startTimer22;

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
    pub fn startTimer22(self: QNetworkCookieJar, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `startTimer23` instead
    ///
    pub const StartTimer23 = startTimer23;

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
    pub fn startTimer23(self: QNetworkCookieJar, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `connect5` instead
    ///
    pub const Connect5 = connect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn connect5(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// ### DEPRECATED: Use `connect52` instead
    ///
    pub const Connect52 = connect52;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect52(_sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `connect4` instead
    ///
    pub const Connect4 = connect4;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkCookieJar `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QNetworkCookieJar, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `disconnect1` instead
    ///
    pub const Disconnect1 = disconnect1;

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
    pub fn disconnect1(self: QNetworkCookieJar, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect22` instead
    ///
    pub const Disconnect22 = disconnect22;

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
    pub fn disconnect22(self: QNetworkCookieJar, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect32` instead
    ///
    pub const Disconnect32 = disconnect32;

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
    pub fn disconnect32(self: QNetworkCookieJar, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect23` instead
    ///
    pub const Disconnect23 = disconnect23;

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
    pub fn disconnect23(self: QNetworkCookieJar, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `destroyed1` instead
    ///
    pub const Destroyed1 = destroyed1;

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
    pub fn destroyed1(self: QNetworkCookieJar, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed1` instead
    ///
    pub const OnDestroyed1 = onDestroyed1;

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
    pub fn onDestroyed1(self: QNetworkCookieJar, callback: *const fn (QNetworkCookieJar, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

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
    /// ` _event: QEvent `
    ///
    pub fn event(self: QNetworkCookieJar, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QNetworkCookieJar_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QNetworkCookieJar, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QNetworkCookieJar_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

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
    pub fn onEvent(self: QNetworkCookieJar, callback: *const fn (QNetworkCookieJar, QEvent) callconv(.c) bool) void {
        qtc.QNetworkCookieJar_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QNetworkCookieJar, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QNetworkCookieJar_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QNetworkCookieJar, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QNetworkCookieJar_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

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
    pub fn onEventFilter(self: QNetworkCookieJar, callback: *const fn (QNetworkCookieJar, QObject, QEvent) callconv(.c) bool) void {
        qtc.QNetworkCookieJar_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `timerEvent` instead
    ///
    pub const TimerEvent = timerEvent;

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
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QNetworkCookieJar, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QNetworkCookieJar_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superTimerEvent` instead
    ///
    pub const SuperTimerEvent = superTimerEvent;

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
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QNetworkCookieJar, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QNetworkCookieJar_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onTimerEvent` instead
    ///
    pub const OnTimerEvent = onTimerEvent;

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
    pub fn onTimerEvent(self: QNetworkCookieJar, callback: *const fn (QNetworkCookieJar, QTimerEvent) callconv(.c) void) void {
        qtc.QNetworkCookieJar_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `childEvent` instead
    ///
    pub const ChildEvent = childEvent;

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
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QNetworkCookieJar, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QNetworkCookieJar_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superChildEvent` instead
    ///
    pub const SuperChildEvent = superChildEvent;

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
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QNetworkCookieJar, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QNetworkCookieJar_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onChildEvent` instead
    ///
    pub const OnChildEvent = onChildEvent;

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
    pub fn onChildEvent(self: QNetworkCookieJar, callback: *const fn (QNetworkCookieJar, QChildEvent) callconv(.c) void) void {
        qtc.QNetworkCookieJar_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `customEvent` instead
    ///
    pub const CustomEvent = customEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QNetworkCookieJar, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QNetworkCookieJar_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superCustomEvent` instead
    ///
    pub const SuperCustomEvent = superCustomEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QNetworkCookieJar, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QNetworkCookieJar_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onCustomEvent` instead
    ///
    pub const OnCustomEvent = onCustomEvent;

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
    pub fn onCustomEvent(self: QNetworkCookieJar, callback: *const fn (QNetworkCookieJar, QEvent) callconv(.c) void) void {
        qtc.QNetworkCookieJar_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `connectNotify` instead
    ///
    pub const ConnectNotify = connectNotify;

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
    pub fn connectNotify(self: QNetworkCookieJar, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QNetworkCookieJar_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superConnectNotify` instead
    ///
    pub const SuperConnectNotify = superConnectNotify;

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
    pub fn superConnectNotify(self: QNetworkCookieJar, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QNetworkCookieJar_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onConnectNotify` instead
    ///
    pub const OnConnectNotify = onConnectNotify;

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
    pub fn onConnectNotify(self: QNetworkCookieJar, callback: *const fn (QNetworkCookieJar, QMetaMethod) callconv(.c) void) void {
        qtc.QNetworkCookieJar_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `disconnectNotify` instead
    ///
    pub const DisconnectNotify = disconnectNotify;

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
    pub fn disconnectNotify(self: QNetworkCookieJar, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QNetworkCookieJar_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superDisconnectNotify` instead
    ///
    pub const SuperDisconnectNotify = superDisconnectNotify;

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
    pub fn superDisconnectNotify(self: QNetworkCookieJar, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QNetworkCookieJar_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onDisconnectNotify` instead
    ///
    pub const OnDisconnectNotify = onDisconnectNotify;

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
    pub fn onDisconnectNotify(self: QNetworkCookieJar, callback: *const fn (QNetworkCookieJar, QMetaMethod) callconv(.c) void) void {
        qtc.QNetworkCookieJar_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sender` instead
    ///
    pub const Sender = sender;

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
    pub fn sender(self: QNetworkCookieJar) QObject {
        return .{ .ptr = qtc.QNetworkCookieJar_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSender` instead
    ///
    pub const SuperSender = superSender;

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
    pub fn superSender(self: QNetworkCookieJar) QObject {
        return .{ .ptr = qtc.QNetworkCookieJar_SuperSender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSender` instead
    ///
    pub const OnSender = onSender;

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
    pub fn onSender(self: QNetworkCookieJar, callback: *const fn () callconv(.c) QObject) void {
        qtc.QNetworkCookieJar_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `senderSignalIndex` instead
    ///
    pub const SenderSignalIndex = senderSignalIndex;

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
    pub fn senderSignalIndex(self: QNetworkCookieJar) i32 {
        return qtc.QNetworkCookieJar_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSenderSignalIndex` instead
    ///
    pub const SuperSenderSignalIndex = superSenderSignalIndex;

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
    pub fn superSenderSignalIndex(self: QNetworkCookieJar) i32 {
        return qtc.QNetworkCookieJar_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSenderSignalIndex` instead
    ///
    pub const OnSenderSignalIndex = onSenderSignalIndex;

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
    pub fn onSenderSignalIndex(self: QNetworkCookieJar, callback: *const fn () callconv(.c) i32) void {
        qtc.QNetworkCookieJar_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `receivers` instead
    ///
    pub const Receivers = receivers;

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
    pub fn receivers(self: QNetworkCookieJar, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QNetworkCookieJar_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `superReceivers` instead
    ///
    pub const SuperReceivers = superReceivers;

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
    pub fn superReceivers(self: QNetworkCookieJar, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QNetworkCookieJar_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `onReceivers` instead
    ///
    pub const OnReceivers = onReceivers;

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
    pub fn onReceivers(self: QNetworkCookieJar, callback: *const fn (QNetworkCookieJar, [*:0]const u8) callconv(.c) i32) void {
        qtc.QNetworkCookieJar_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isSignalConnected` instead
    ///
    pub const IsSignalConnected = isSignalConnected;

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
    pub fn isSignalConnected(self: QNetworkCookieJar, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QNetworkCookieJar_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superIsSignalConnected` instead
    ///
    pub const SuperIsSignalConnected = superIsSignalConnected;

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
    pub fn superIsSignalConnected(self: QNetworkCookieJar, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QNetworkCookieJar_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onIsSignalConnected` instead
    ///
    pub const OnIsSignalConnected = onIsSignalConnected;

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
    pub fn onIsSignalConnected(self: QNetworkCookieJar, callback: *const fn (QNetworkCookieJar, QMetaMethod) callconv(.c) bool) void {
        qtc.QNetworkCookieJar_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onObjectNameChanged` instead
    ///
    pub const OnObjectNameChanged = onObjectNameChanged;

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
    pub fn onObjectNameChanged(self: QNetworkCookieJar, callback: *const fn (QNetworkCookieJar, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkcookiejar.html#dtor.QNetworkCookieJar)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QNetworkCookieJar `
    ///
    pub fn delete(self: QNetworkCookieJar) void {
        qtc.QNetworkCookieJar_Delete(@ptrCast(self.ptr));
    }
};
