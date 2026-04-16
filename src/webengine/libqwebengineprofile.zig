const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QIcon = @import("libqt6").QIcon;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const QWebEngineClientCertificateStore = @import("libqt6").QWebEngineClientCertificateStore;
const QWebEngineClientHints = @import("libqt6").QWebEngineClientHints;
const QWebEngineCookieStore = @import("libqt6").QWebEngineCookieStore;
const QWebEngineDownloadRequest = @import("libqt6").QWebEngineDownloadRequest;
const QWebEngineNotification = @import("libqt6").QWebEngineNotification;
const QWebEnginePermission = @import("libqt6").QWebEnginePermission;
const QWebEngineScriptCollection = @import("libqt6").QWebEngineScriptCollection;
const QWebEngineSettings = @import("libqt6").QWebEngineSettings;
const QWebEngineUrlRequestInterceptor = @import("libqt6").QWebEngineUrlRequestInterceptor;
const QWebEngineUrlSchemeHandler = @import("libqt6").QWebEngineUrlSchemeHandler;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qwebenginepermission_enums = @import("libqwebenginepermission.zig").enums;
const qwebengineprofile_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html)
pub const QWebEngineProfile = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QWebEngineProfile,

    pub const _is_QWebEngineProfile = {};
    pub const _is_QObject = {};

    /// New constructs a new QWebEngineProfile object.
    ///
    pub fn New() QWebEngineProfile {
        return .{ .ptr = qtc.QWebEngineProfile_new() };
    }

    /// New2 constructs a new QWebEngineProfile object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    pub fn New2(name: []const u8) QWebEngineProfile {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QWebEngineProfile_new2(name_str) };
    }

    /// New3 constructs a new QWebEngineProfile object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New3(parent: anytype) QWebEngineProfile {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QWebEngineProfile_new3(@ptrCast(parent.ptr)) };
    }

    /// New4 constructs a new QWebEngineProfile object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn New4(name: []const u8, parent: anytype) QWebEngineProfile {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QWebEngineProfile_new4(name_str, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    pub fn MetaObject(self: QWebEngineProfile) QMetaObject {
        return .{ .ptr = qtc.QWebEngineProfile_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QWebEngineProfile, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QWebEngineProfile_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QWebEngineProfile `
    ///
    pub fn SuperMetaObject(self: QWebEngineProfile) QMetaObject {
        return .{ .ptr = qtc.QWebEngineProfile_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QWebEngineProfile, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QWebEngineProfile_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` callback: *const fn (self: QWebEngineProfile, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QWebEngineProfile, callback: *const fn (QWebEngineProfile, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QWebEngineProfile_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QWebEngineProfile, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QWebEngineProfile_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QWebEngineProfile, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QWebEngineProfile_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` callback: *const fn (self: QWebEngineProfile, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QWebEngineProfile, callback: *const fn (QWebEngineProfile, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QWebEngineProfile_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QWebEngineProfile, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QWebEngineProfile_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebengineprofile.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#storageName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StorageName(self: QWebEngineProfile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebEngineProfile_StorageName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebengineprofile.StorageName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#isOffTheRecord)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    pub fn IsOffTheRecord(self: QWebEngineProfile) bool {
        return qtc.QWebEngineProfile_IsOffTheRecord(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#persistentStoragePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PersistentStoragePath(self: QWebEngineProfile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebEngineProfile_PersistentStoragePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebengineprofile.PersistentStoragePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#setPersistentStoragePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` path: []const u8 `
    ///
    pub fn SetPersistentStoragePath(self: QWebEngineProfile, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.QWebEngineProfile_SetPersistentStoragePath(@ptrCast(self.ptr), path_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#cachePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CachePath(self: QWebEngineProfile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebEngineProfile_CachePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebengineprofile.CachePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#setCachePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` path: []const u8 `
    ///
    pub fn SetCachePath(self: QWebEngineProfile, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.QWebEngineProfile_SetCachePath(@ptrCast(self.ptr), path_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#httpUserAgent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn HttpUserAgent(self: QWebEngineProfile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebEngineProfile_HttpUserAgent(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebengineprofile.HttpUserAgent: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#setHttpUserAgent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` userAgent: []const u8 `
    ///
    pub fn SetHttpUserAgent(self: QWebEngineProfile, userAgent: []const u8) void {
        const userAgent_str = qtc.libqt_string{
            .len = userAgent.len,
            .data = userAgent.ptr,
        };
        qtc.QWebEngineProfile_SetHttpUserAgent(@ptrCast(self.ptr), userAgent_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#httpCacheType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ## Returns:
    ///
    /// ` qwebengineprofile_enums.HttpCacheType `
    ///
    pub fn HttpCacheType(self: QWebEngineProfile) i32 {
        return qtc.QWebEngineProfile_HttpCacheType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#setHttpCacheType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` httpCacheType: qwebengineprofile_enums.HttpCacheType `
    ///
    pub fn SetHttpCacheType(self: QWebEngineProfile, httpCacheType: i32) void {
        qtc.QWebEngineProfile_SetHttpCacheType(@ptrCast(self.ptr), @bitCast(httpCacheType));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#setHttpAcceptLanguage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` httpAcceptLanguage: []const u8 `
    ///
    pub fn SetHttpAcceptLanguage(self: QWebEngineProfile, httpAcceptLanguage: []const u8) void {
        const httpAcceptLanguage_str = qtc.libqt_string{
            .len = httpAcceptLanguage.len,
            .data = httpAcceptLanguage.ptr,
        };
        qtc.QWebEngineProfile_SetHttpAcceptLanguage(@ptrCast(self.ptr), httpAcceptLanguage_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#httpAcceptLanguage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn HttpAcceptLanguage(self: QWebEngineProfile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebEngineProfile_HttpAcceptLanguage(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebengineprofile.HttpAcceptLanguage: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#persistentCookiesPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ## Returns:
    ///
    /// ` qwebengineprofile_enums.PersistentCookiesPolicy `
    ///
    pub fn PersistentCookiesPolicy(self: QWebEngineProfile) i32 {
        return qtc.QWebEngineProfile_PersistentCookiesPolicy(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#setPersistentCookiesPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` persistentCookiesPolicy: qwebengineprofile_enums.PersistentCookiesPolicy `
    ///
    pub fn SetPersistentCookiesPolicy(self: QWebEngineProfile, persistentCookiesPolicy: i32) void {
        qtc.QWebEngineProfile_SetPersistentCookiesPolicy(@ptrCast(self.ptr), @bitCast(persistentCookiesPolicy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#persistentPermissionsPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ## Returns:
    ///
    /// ` qwebengineprofile_enums.PersistentPermissionsPolicy `
    ///
    pub fn PersistentPermissionsPolicy(self: QWebEngineProfile) u8 {
        return qtc.QWebEngineProfile_PersistentPermissionsPolicy(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#setPersistentPermissionsPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` persistentPermissionsPolicy: qwebengineprofile_enums.PersistentPermissionsPolicy `
    ///
    pub fn SetPersistentPermissionsPolicy(self: QWebEngineProfile, persistentPermissionsPolicy: u8) void {
        qtc.QWebEngineProfile_SetPersistentPermissionsPolicy(@ptrCast(self.ptr), @bitCast(persistentPermissionsPolicy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#httpCacheMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    pub fn HttpCacheMaximumSize(self: QWebEngineProfile) i32 {
        return qtc.QWebEngineProfile_HttpCacheMaximumSize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#setHttpCacheMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` maxSize: i32 `
    ///
    pub fn SetHttpCacheMaximumSize(self: QWebEngineProfile, maxSize: i32) void {
        qtc.QWebEngineProfile_SetHttpCacheMaximumSize(@ptrCast(self.ptr), @bitCast(maxSize));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#cookieStore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    pub fn CookieStore(self: QWebEngineProfile) QWebEngineCookieStore {
        return .{ .ptr = qtc.QWebEngineProfile_CookieStore(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#setUrlRequestInterceptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` interceptor: QWebEngineUrlRequestInterceptor `
    ///
    pub fn SetUrlRequestInterceptor(self: QWebEngineProfile, interceptor: anytype) void {
        comptime _ = @TypeOf(interceptor)._is_QWebEngineUrlRequestInterceptor;
        qtc.QWebEngineProfile_SetUrlRequestInterceptor(@ptrCast(self.ptr), @ptrCast(interceptor.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#clearAllVisitedLinks)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    pub fn ClearAllVisitedLinks(self: QWebEngineProfile) void {
        qtc.QWebEngineProfile_ClearAllVisitedLinks(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#clearVisitedLinks)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` urls: []QUrl `
    ///
    pub fn ClearVisitedLinks(self: QWebEngineProfile, urls: []QUrl) void {
        const urls_list = qtc.libqt_list{
            .len = urls.len,
            .data = @ptrCast(urls.ptr),
        };
        qtc.QWebEngineProfile_ClearVisitedLinks(@ptrCast(self.ptr), urls_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#visitedLinksContainsUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` url: QUrl `
    ///
    pub fn VisitedLinksContainsUrl(self: QWebEngineProfile, url: anytype) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.QWebEngineProfile_VisitedLinksContainsUrl(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#settings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    pub fn Settings(self: QWebEngineProfile) QWebEngineSettings {
        return .{ .ptr = qtc.QWebEngineProfile_Settings(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#scripts)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    pub fn Scripts(self: QWebEngineProfile) QWebEngineScriptCollection {
        return .{ .ptr = qtc.QWebEngineProfile_Scripts(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#clientHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    pub fn ClientHints(self: QWebEngineProfile) QWebEngineClientHints {
        return .{ .ptr = qtc.QWebEngineProfile_ClientHints(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#urlSchemeHandler)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` param1: []u8 `
    ///
    pub fn UrlSchemeHandler(self: QWebEngineProfile, param1: []u8) QWebEngineUrlSchemeHandler {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        return .{ .ptr = qtc.QWebEngineProfile_UrlSchemeHandler(@ptrCast(self.ptr), param1_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#installUrlSchemeHandler)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` scheme: []u8 `
    ///
    /// ` param2: QWebEngineUrlSchemeHandler `
    ///
    pub fn InstallUrlSchemeHandler(self: QWebEngineProfile, scheme: []u8, param2: anytype) void {
        const scheme_str = qtc.libqt_string{
            .len = scheme.len,
            .data = scheme.ptr,
        };
        comptime _ = @TypeOf(param2)._is_QWebEngineUrlSchemeHandler;
        qtc.QWebEngineProfile_InstallUrlSchemeHandler(@ptrCast(self.ptr), scheme_str, @ptrCast(param2.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#removeUrlScheme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` scheme: []u8 `
    ///
    pub fn RemoveUrlScheme(self: QWebEngineProfile, scheme: []u8) void {
        const scheme_str = qtc.libqt_string{
            .len = scheme.len,
            .data = scheme.ptr,
        };
        qtc.QWebEngineProfile_RemoveUrlScheme(@ptrCast(self.ptr), scheme_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#removeUrlSchemeHandler)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` param1: QWebEngineUrlSchemeHandler `
    ///
    pub fn RemoveUrlSchemeHandler(self: QWebEngineProfile, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWebEngineUrlSchemeHandler;
        qtc.QWebEngineProfile_RemoveUrlSchemeHandler(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#removeAllUrlSchemeHandlers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    pub fn RemoveAllUrlSchemeHandlers(self: QWebEngineProfile) void {
        qtc.QWebEngineProfile_RemoveAllUrlSchemeHandlers(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#clearHttpCache)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    pub fn ClearHttpCache(self: QWebEngineProfile) void {
        qtc.QWebEngineProfile_ClearHttpCache(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#setSpellCheckLanguages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` languages: []const []const u8 `
    ///
    pub fn SetSpellCheckLanguages(self: QWebEngineProfile, allocator: std.mem.Allocator, languages: []const []const u8) void {
        const languages_arr = allocator.alloc(qtc.libqt_string, languages.len) catch @panic("qwebengineprofile.SetSpellCheckLanguages: Memory allocation failed");
        defer allocator.free(languages_arr);
        for (languages, 0..languages.len) |item, i|
            languages_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const languages_list = qtc.libqt_list{
            .len = languages.len,
            .data = languages_arr.ptr,
        };
        qtc.QWebEngineProfile_SetSpellCheckLanguages(@ptrCast(self.ptr), languages_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#spellCheckLanguages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SpellCheckLanguages(self: QWebEngineProfile, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QWebEngineProfile_SpellCheckLanguages(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qwebengineprofile.SpellCheckLanguages: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qwebengineprofile.SpellCheckLanguages: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#setSpellCheckEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetSpellCheckEnabled(self: QWebEngineProfile, enabled: bool) void {
        qtc.QWebEngineProfile_SetSpellCheckEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#isSpellCheckEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    pub fn IsSpellCheckEnabled(self: QWebEngineProfile) bool {
        return qtc.QWebEngineProfile_IsSpellCheckEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#downloadPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DownloadPath(self: QWebEngineProfile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebEngineProfile_DownloadPath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebengineprofile.DownloadPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#setDownloadPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` path: []const u8 `
    ///
    pub fn SetDownloadPath(self: QWebEngineProfile, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.QWebEngineProfile_SetDownloadPath(@ptrCast(self.ptr), path_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#isPushServiceEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    pub fn IsPushServiceEnabled(self: QWebEngineProfile) bool {
        return qtc.QWebEngineProfile_IsPushServiceEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#setPushServiceEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetPushServiceEnabled(self: QWebEngineProfile, enabled: bool) void {
        qtc.QWebEngineProfile_SetPushServiceEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#setNotificationPresenter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` notificationPresenter: *const fn (funcparam1: QWebEngineNotification (WARNING: The library takes ownership of this parameter's memory and attempting to access it will lead to a crash.)) callconv(.c) void `
    ///
    pub fn SetNotificationPresenter(self: QWebEngineProfile, notificationPresenter: *const fn (QWebEngineNotification) callconv(.c) void) void {
        qtc.QWebEngineProfile_SetNotificationPresenter(@ptrCast(self.ptr), @bitCast(@intFromPtr(notificationPresenter)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#clientCertificateStore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    pub fn ClientCertificateStore(self: QWebEngineProfile) QWebEngineClientCertificateStore {
        return .{ .ptr = qtc.QWebEngineProfile_ClientCertificateStore(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#requestIconForPageURL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` url: QUrl `
    ///
    /// ` desiredSizeInPixel: i32 `
    ///
    /// ` iconAvailableCallback: *const fn (funcparam1: QIcon, funcparam2: QUrl, funcparam3: QUrl) callconv(.c) void `
    ///
    pub fn RequestIconForPageURL(self: QWebEngineProfile, url: anytype, desiredSizeInPixel: i32, iconAvailableCallback: *const fn (QIcon, QUrl, QUrl) callconv(.c) void) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.QWebEngineProfile_RequestIconForPageURL(@ptrCast(self.ptr), @ptrCast(url.ptr), @bitCast(desiredSizeInPixel), @bitCast(@intFromPtr(iconAvailableCallback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#requestIconForIconURL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` url: QUrl `
    ///
    /// ` desiredSizeInPixel: i32 `
    ///
    /// ` iconAvailableCallback: *const fn (funcparam1: QIcon, funcparam2: QUrl) callconv(.c) void `
    ///
    pub fn RequestIconForIconURL(self: QWebEngineProfile, url: anytype, desiredSizeInPixel: i32, iconAvailableCallback: *const fn (QIcon, QUrl) callconv(.c) void) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.QWebEngineProfile_RequestIconForIconURL(@ptrCast(self.ptr), @ptrCast(url.ptr), @bitCast(desiredSizeInPixel), @bitCast(@intFromPtr(iconAvailableCallback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#queryPermission)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` securityOrigin: QUrl `
    ///
    /// ` permissionType: qwebenginepermission_enums.PermissionType `
    ///
    pub fn QueryPermission(self: QWebEngineProfile, securityOrigin: anytype, permissionType: u8) QWebEnginePermission {
        comptime _ = @TypeOf(securityOrigin)._is_QUrl;
        return .{ .ptr = qtc.QWebEngineProfile_QueryPermission(@ptrCast(self.ptr), @ptrCast(securityOrigin.ptr), @bitCast(permissionType)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#listAllPermissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ListAllPermissions(self: QWebEngineProfile, allocator: std.mem.Allocator) []QWebEnginePermission {
        const _arr: qtc.libqt_list = qtc.QWebEngineProfile_ListAllPermissions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWebEnginePermission, _arr.len) catch @panic("qwebengineprofile.ListAllPermissions: Memory allocation failed");
        const _data: [*]QtC.QWebEnginePermission = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#listPermissionsForOrigin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` securityOrigin: QUrl `
    ///
    pub fn ListPermissionsForOrigin(self: QWebEngineProfile, allocator: std.mem.Allocator, securityOrigin: anytype) []QWebEnginePermission {
        comptime _ = @TypeOf(securityOrigin)._is_QUrl;
        const _arr: qtc.libqt_list = qtc.QWebEngineProfile_ListPermissionsForOrigin(@ptrCast(self.ptr), @ptrCast(securityOrigin.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWebEnginePermission, _arr.len) catch @panic("qwebengineprofile.ListPermissionsForOrigin: Memory allocation failed");
        const _data: [*]QtC.QWebEnginePermission = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#listPermissionsForPermissionType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` permissionType: qwebenginepermission_enums.PermissionType `
    ///
    pub fn ListPermissionsForPermissionType(self: QWebEngineProfile, allocator: std.mem.Allocator, permissionType: u8) []QWebEnginePermission {
        const _arr: qtc.libqt_list = qtc.QWebEngineProfile_ListPermissionsForPermissionType(@ptrCast(self.ptr), @bitCast(permissionType));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWebEnginePermission, _arr.len) catch @panic("qwebengineprofile.ListPermissionsForPermissionType: Memory allocation failed");
        const _data: [*]QtC.QWebEnginePermission = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#defaultProfile)
    ///
    pub fn DefaultProfile() QWebEngineProfile {
        return .{ .ptr = qtc.QWebEngineProfile_DefaultProfile() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#downloadRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` download: QWebEngineDownloadRequest `
    ///
    pub fn DownloadRequested(self: QWebEngineProfile, download: anytype) void {
        comptime _ = @TypeOf(download)._is_QWebEngineDownloadRequest;
        qtc.QWebEngineProfile_DownloadRequested(@ptrCast(self.ptr), @ptrCast(download.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#downloadRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` callback: *const fn (self: QWebEngineProfile, download: QWebEngineDownloadRequest) callconv(.c) void `
    ///
    pub fn OnDownloadRequested(self: QWebEngineProfile, callback: *const fn (QWebEngineProfile, QWebEngineDownloadRequest) callconv(.c) void) void {
        qtc.QWebEngineProfile_Connect_DownloadRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#clearHttpCacheCompleted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    pub fn ClearHttpCacheCompleted(self: QWebEngineProfile) void {
        qtc.QWebEngineProfile_ClearHttpCacheCompleted(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#clearHttpCacheCompleted)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` callback: *const fn (self: QWebEngineProfile) callconv(.c) void `
    ///
    pub fn OnClearHttpCacheCompleted(self: QWebEngineProfile, callback: *const fn (QWebEngineProfile) callconv(.c) void) void {
        qtc.QWebEngineProfile_Connect_ClearHttpCacheCompleted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebengineprofile.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebengineprofile.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QWebEngineProfile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebengineprofile.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QWebEngineProfile, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    pub fn IsWidgetType(self: QWebEngineProfile) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    pub fn IsWindowType(self: QWebEngineProfile) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    pub fn IsQuickItemType(self: QWebEngineProfile) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    pub fn SignalsBlocked(self: QWebEngineProfile) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QWebEngineProfile, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    pub fn Thread(self: QWebEngineProfile) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QWebEngineProfile, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QWebEngineProfile, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QWebEngineProfile, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QWebEngineProfile, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QWebEngineProfile, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QWebEngineProfile, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qwebengineprofile.Children: Memory allocation failed");
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QWebEngineProfile, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QWebEngineProfile, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QWebEngineProfile, obj: anytype) void {
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QWebEngineProfile, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QWebEngineProfile `
    ///
    pub fn Disconnect3(self: QWebEngineProfile) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QWebEngineProfile, receiver: anytype) bool {
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
    /// ` self: QWebEngineProfile `
    ///
    pub fn DumpObjectTree(self: QWebEngineProfile) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    pub fn DumpObjectInfo(self: QWebEngineProfile) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QWebEngineProfile, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QWebEngineProfile, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QWebEngineProfile, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qwebengineprofile.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qwebengineprofile.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QWebEngineProfile `
    ///
    pub fn BindingStorage(self: QWebEngineProfile) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    pub fn BindingStorage2(self: QWebEngineProfile) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    pub fn Destroyed(self: QWebEngineProfile) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` callback: *const fn (self: QWebEngineProfile) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QWebEngineProfile, callback: *const fn (QWebEngineProfile) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    pub fn Parent(self: QWebEngineProfile) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QWebEngineProfile, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    pub fn DeleteLater(self: QWebEngineProfile) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QWebEngineProfile, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QWebEngineProfile, time: i64, timerType: i32) i32 {
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QWebEngineProfile, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QWebEngineProfile, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QWebEngineProfile, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QWebEngineProfile, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QWebEngineProfile, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QWebEngineProfile, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` callback: *const fn (self: QWebEngineProfile, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QWebEngineProfile, callback: *const fn (QWebEngineProfile, QObject) callconv(.c) void) void {
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QWebEngineProfile, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QWebEngineProfile_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QWebEngineProfile, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QWebEngineProfile_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEngineProfile`
    ///
    /// ` callback: *const fn (self: QWebEngineProfile, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QWebEngineProfile, callback: *const fn (QWebEngineProfile, QEvent) callconv(.c) bool) void {
        qtc.QWebEngineProfile_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QWebEngineProfile, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QWebEngineProfile_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QWebEngineProfile, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QWebEngineProfile_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEngineProfile`
    ///
    /// ` callback: *const fn (self: QWebEngineProfile, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QWebEngineProfile, callback: *const fn (QWebEngineProfile, QObject, QEvent) callconv(.c) bool) void {
        qtc.QWebEngineProfile_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QWebEngineProfile, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QWebEngineProfile_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QWebEngineProfile, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QWebEngineProfile_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEngineProfile`
    ///
    /// ` callback: *const fn (self: QWebEngineProfile, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QWebEngineProfile, callback: *const fn (QWebEngineProfile, QTimerEvent) callconv(.c) void) void {
        qtc.QWebEngineProfile_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QWebEngineProfile, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QWebEngineProfile_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QWebEngineProfile, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QWebEngineProfile_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEngineProfile`
    ///
    /// ` callback: *const fn (self: QWebEngineProfile, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QWebEngineProfile, callback: *const fn (QWebEngineProfile, QChildEvent) callconv(.c) void) void {
        qtc.QWebEngineProfile_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QWebEngineProfile, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QWebEngineProfile_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QWebEngineProfile, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QWebEngineProfile_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEngineProfile`
    ///
    /// ` callback: *const fn (self: QWebEngineProfile, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QWebEngineProfile, callback: *const fn (QWebEngineProfile, QEvent) callconv(.c) void) void {
        qtc.QWebEngineProfile_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QWebEngineProfile, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QWebEngineProfile_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QWebEngineProfile, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QWebEngineProfile_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEngineProfile`
    ///
    /// ` callback: *const fn (self: QWebEngineProfile, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QWebEngineProfile, callback: *const fn (QWebEngineProfile, QMetaMethod) callconv(.c) void) void {
        qtc.QWebEngineProfile_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QWebEngineProfile, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QWebEngineProfile_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QWebEngineProfile, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QWebEngineProfile_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEngineProfile`
    ///
    /// ` callback: *const fn (self: QWebEngineProfile, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QWebEngineProfile, callback: *const fn (QWebEngineProfile, QMetaMethod) callconv(.c) void) void {
        qtc.QWebEngineProfile_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    pub fn Sender(self: QWebEngineProfile) QObject {
        return .{ .ptr = qtc.QWebEngineProfile_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QWebEngineProfile `
    ///
    pub fn SuperSender(self: QWebEngineProfile) QObject {
        return .{ .ptr = qtc.QWebEngineProfile_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEngineProfile`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QWebEngineProfile, callback: *const fn () callconv(.c) QObject) void {
        qtc.QWebEngineProfile_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    pub fn SenderSignalIndex(self: QWebEngineProfile) i32 {
        return qtc.QWebEngineProfile_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QWebEngineProfile `
    ///
    pub fn SuperSenderSignalIndex(self: QWebEngineProfile) i32 {
        return qtc.QWebEngineProfile_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEngineProfile`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QWebEngineProfile, callback: *const fn () callconv(.c) i32) void {
        qtc.QWebEngineProfile_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QWebEngineProfile, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QWebEngineProfile_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QWebEngineProfile, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QWebEngineProfile_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEngineProfile`
    ///
    /// ` callback: *const fn (self: QWebEngineProfile, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QWebEngineProfile, callback: *const fn (QWebEngineProfile, [*:0]const u8) callconv(.c) i32) void {
        qtc.QWebEngineProfile_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QWebEngineProfile, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QWebEngineProfile_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QWebEngineProfile, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QWebEngineProfile_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEngineProfile`
    ///
    /// ` callback: *const fn (self: QWebEngineProfile, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QWebEngineProfile, callback: *const fn (QWebEngineProfile, QMetaMethod) callconv(.c) bool) void {
        qtc.QWebEngineProfile_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` callback: *const fn (self: QWebEngineProfile, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QWebEngineProfile, callback: *const fn (QWebEngineProfile, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#dtor.QWebEngineProfile)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QWebEngineProfile `
    ///
    pub fn Delete(self: QWebEngineProfile) void {
        qtc.QWebEngineProfile_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#public-types)
pub const enums = struct {
    pub const HttpCacheType = enum(i32) {
        pub const MemoryHttpCache: i32 = 0;
        pub const DiskHttpCache: i32 = 1;
        pub const NoCache: i32 = 2;
    };

    pub const PersistentCookiesPolicy = enum(i32) {
        pub const NoPersistentCookies: i32 = 0;
        pub const AllowPersistentCookies: i32 = 1;
        pub const ForcePersistentCookies: i32 = 2;
    };

    pub const PersistentPermissionsPolicy = enum(u8) {
        pub const AskEveryTime: u8 = 0;
        pub const StoreInMemory: u8 = 1;
        pub const StoreOnDisk: u8 = 2;
    };
};
