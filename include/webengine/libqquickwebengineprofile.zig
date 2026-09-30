const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QQuickWebEngineDownloadRequest = @import("libqt6").QQuickWebEngineDownloadRequest;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const QWebEngineClientCertificateStore = @import("libqt6").QWebEngineClientCertificateStore;
const QWebEngineClientHints = @import("libqt6").QWebEngineClientHints;
const QWebEngineCookieStore = @import("libqt6").QWebEngineCookieStore;
const QWebEngineNotification = @import("libqt6").QWebEngineNotification;
const QWebEnginePermission = @import("libqt6").QWebEnginePermission;
const QWebEngineUrlRequestInterceptor = @import("libqt6").QWebEngineUrlRequestInterceptor;
const QWebEngineUrlSchemeHandler = @import("libqt6").QWebEngineUrlSchemeHandler;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qquickwebengineprofile_enums = enums;
const qwebenginepermission_enums = @import("libqwebenginepermission.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html)
pub const QQuickWebEngineProfile = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QQuickWebEngineProfile,

    pub const _is_QQuickWebEngineProfile = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QQuickWebEngineProfile object in C++ memory
    ///
    pub fn new() QQuickWebEngineProfile {
        return .{ .ptr = qtc.QQuickWebEngineProfile_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QQuickWebEngineProfile object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QQuickWebEngineProfile {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QQuickWebEngineProfile_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    pub fn metaObject(self: QQuickWebEngineProfile) QMetaObject {
        return .{ .ptr = qtc.QQuickWebEngineProfile_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QQuickWebEngineProfile, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QQuickWebEngineProfile_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickWebEngineProfile `
    ///
    pub fn superMetaObject(self: QQuickWebEngineProfile) QMetaObject {
        return .{ .ptr = qtc.QQuickWebEngineProfile_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QQuickWebEngineProfile, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QQuickWebEngineProfile_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` callback: *const fn (self: QQuickWebEngineProfile, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QQuickWebEngineProfile, callback: *const fn (QQuickWebEngineProfile, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QQuickWebEngineProfile_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QQuickWebEngineProfile, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QQuickWebEngineProfile_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QQuickWebEngineProfile, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QQuickWebEngineProfile_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` callback: *const fn (self: QQuickWebEngineProfile, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QQuickWebEngineProfile, callback: *const fn (QQuickWebEngineProfile, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QQuickWebEngineProfile_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QQuickWebEngineProfile, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QQuickWebEngineProfile_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// Inherited from QObject
    ///
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
        var _str = qtc.QQuickWebEngineProfile_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuickWebEngineProfile.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `storageName` instead
    ///
    pub const StorageName = storageName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#storageName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn storageName(self: QQuickWebEngineProfile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QQuickWebEngineProfile_StorageName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuickWebEngineProfile.storageName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setStorageName` instead
    ///
    pub const SetStorageName = setStorageName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#setStorageName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setStorageName(self: QQuickWebEngineProfile, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QQuickWebEngineProfile_SetStorageName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `isOffTheRecord` instead
    ///
    pub const IsOffTheRecord = isOffTheRecord;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#isOffTheRecord)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    pub fn isOffTheRecord(self: QQuickWebEngineProfile) bool {
        return qtc.QQuickWebEngineProfile_IsOffTheRecord(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setOffTheRecord` instead
    ///
    pub const SetOffTheRecord = setOffTheRecord;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#setOffTheRecord)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` offTheRecord: bool `
    ///
    pub fn setOffTheRecord(self: QQuickWebEngineProfile, offTheRecord: bool) void {
        qtc.QQuickWebEngineProfile_SetOffTheRecord(@ptrCast(self.ptr), offTheRecord);
    }

    /// ### DEPRECATED: Use `persistentStoragePath` instead
    ///
    pub const PersistentStoragePath = persistentStoragePath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#persistentStoragePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn persistentStoragePath(self: QQuickWebEngineProfile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QQuickWebEngineProfile_PersistentStoragePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuickWebEngineProfile.persistentStoragePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPersistentStoragePath` instead
    ///
    pub const SetPersistentStoragePath = setPersistentStoragePath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#setPersistentStoragePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` path: []const u8 `
    ///
    pub fn setPersistentStoragePath(self: QQuickWebEngineProfile, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.QQuickWebEngineProfile_SetPersistentStoragePath(@ptrCast(self.ptr), path_str);
    }

    /// ### DEPRECATED: Use `cachePath` instead
    ///
    pub const CachePath = cachePath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#cachePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn cachePath(self: QQuickWebEngineProfile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QQuickWebEngineProfile_CachePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuickWebEngineProfile.cachePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setCachePath` instead
    ///
    pub const SetCachePath = setCachePath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#setCachePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` path: []const u8 `
    ///
    pub fn setCachePath(self: QQuickWebEngineProfile, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.QQuickWebEngineProfile_SetCachePath(@ptrCast(self.ptr), path_str);
    }

    /// ### DEPRECATED: Use `httpUserAgent` instead
    ///
    pub const HttpUserAgent = httpUserAgent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#httpUserAgent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn httpUserAgent(self: QQuickWebEngineProfile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QQuickWebEngineProfile_HttpUserAgent(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuickWebEngineProfile.httpUserAgent: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setHttpUserAgent` instead
    ///
    pub const SetHttpUserAgent = setHttpUserAgent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#setHttpUserAgent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` userAgent: []const u8 `
    ///
    pub fn setHttpUserAgent(self: QQuickWebEngineProfile, userAgent: []const u8) void {
        const userAgent_str = qtc.libqt_string{
            .len = userAgent.len,
            .data = userAgent.ptr,
        };
        qtc.QQuickWebEngineProfile_SetHttpUserAgent(@ptrCast(self.ptr), userAgent_str);
    }

    /// ### DEPRECATED: Use `httpCacheType` instead
    ///
    pub const HttpCacheType = httpCacheType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#httpCacheType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ## Returns:
    ///
    /// ` qquickwebengineprofile_enums.HttpCacheType `
    ///
    pub fn httpCacheType(self: QQuickWebEngineProfile) i32 {
        return qtc.QQuickWebEngineProfile_HttpCacheType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHttpCacheType` instead
    ///
    pub const SetHttpCacheType = setHttpCacheType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#setHttpCacheType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` _httpCacheType: qquickwebengineprofile_enums.HttpCacheType `
    ///
    pub fn setHttpCacheType(self: QQuickWebEngineProfile, _httpCacheType: i32) void {
        qtc.QQuickWebEngineProfile_SetHttpCacheType(@ptrCast(self.ptr), @bitCast(_httpCacheType));
    }

    /// ### DEPRECATED: Use `persistentCookiesPolicy` instead
    ///
    pub const PersistentCookiesPolicy = persistentCookiesPolicy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#persistentCookiesPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ## Returns:
    ///
    /// ` qquickwebengineprofile_enums.PersistentCookiesPolicy `
    ///
    pub fn persistentCookiesPolicy(self: QQuickWebEngineProfile) i32 {
        return qtc.QQuickWebEngineProfile_PersistentCookiesPolicy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPersistentCookiesPolicy` instead
    ///
    pub const SetPersistentCookiesPolicy = setPersistentCookiesPolicy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#setPersistentCookiesPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` _persistentCookiesPolicy: qquickwebengineprofile_enums.PersistentCookiesPolicy `
    ///
    pub fn setPersistentCookiesPolicy(self: QQuickWebEngineProfile, _persistentCookiesPolicy: i32) void {
        qtc.QQuickWebEngineProfile_SetPersistentCookiesPolicy(@ptrCast(self.ptr), @bitCast(_persistentCookiesPolicy));
    }

    /// ### DEPRECATED: Use `persistentPermissionsPolicy` instead
    ///
    pub const PersistentPermissionsPolicy = persistentPermissionsPolicy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#persistentPermissionsPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ## Returns:
    ///
    /// ` qquickwebengineprofile_enums.PersistentPermissionsPolicy `
    ///
    pub fn persistentPermissionsPolicy(self: QQuickWebEngineProfile) u8 {
        return qtc.QQuickWebEngineProfile_PersistentPermissionsPolicy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPersistentPermissionsPolicy` instead
    ///
    pub const SetPersistentPermissionsPolicy = setPersistentPermissionsPolicy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#setPersistentPermissionsPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` _persistentPermissionsPolicy: qquickwebengineprofile_enums.PersistentPermissionsPolicy `
    ///
    pub fn setPersistentPermissionsPolicy(self: QQuickWebEngineProfile, _persistentPermissionsPolicy: u8) void {
        qtc.QQuickWebEngineProfile_SetPersistentPermissionsPolicy(@ptrCast(self.ptr), @bitCast(_persistentPermissionsPolicy));
    }

    /// ### DEPRECATED: Use `httpCacheMaximumSize` instead
    ///
    pub const HttpCacheMaximumSize = httpCacheMaximumSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#httpCacheMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    pub fn httpCacheMaximumSize(self: QQuickWebEngineProfile) i32 {
        return qtc.QQuickWebEngineProfile_HttpCacheMaximumSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHttpCacheMaximumSize` instead
    ///
    pub const SetHttpCacheMaximumSize = setHttpCacheMaximumSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#setHttpCacheMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` maxSize: i32 `
    ///
    pub fn setHttpCacheMaximumSize(self: QQuickWebEngineProfile, maxSize: i32) void {
        qtc.QQuickWebEngineProfile_SetHttpCacheMaximumSize(@ptrCast(self.ptr), @bitCast(maxSize));
    }

    /// ### DEPRECATED: Use `httpAcceptLanguage` instead
    ///
    pub const HttpAcceptLanguage = httpAcceptLanguage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#httpAcceptLanguage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn httpAcceptLanguage(self: QQuickWebEngineProfile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QQuickWebEngineProfile_HttpAcceptLanguage(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuickWebEngineProfile.httpAcceptLanguage: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setHttpAcceptLanguage` instead
    ///
    pub const SetHttpAcceptLanguage = setHttpAcceptLanguage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#setHttpAcceptLanguage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` _httpAcceptLanguage: []const u8 `
    ///
    pub fn setHttpAcceptLanguage(self: QQuickWebEngineProfile, _httpAcceptLanguage: []const u8) void {
        const httpAcceptLanguage_str = qtc.libqt_string{
            .len = _httpAcceptLanguage.len,
            .data = _httpAcceptLanguage.ptr,
        };
        qtc.QQuickWebEngineProfile_SetHttpAcceptLanguage(@ptrCast(self.ptr), httpAcceptLanguage_str);
    }

    /// ### DEPRECATED: Use `cookieStore` instead
    ///
    pub const CookieStore = cookieStore;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#cookieStore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    pub fn cookieStore(self: QQuickWebEngineProfile) QWebEngineCookieStore {
        return .{ .ptr = qtc.QQuickWebEngineProfile_CookieStore(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setUrlRequestInterceptor` instead
    ///
    pub const SetUrlRequestInterceptor = setUrlRequestInterceptor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#setUrlRequestInterceptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` interceptor: QWebEngineUrlRequestInterceptor `
    ///
    pub fn setUrlRequestInterceptor(self: QQuickWebEngineProfile, interceptor: anytype) void {
        comptime _ = @TypeOf(interceptor)._is_QWebEngineUrlRequestInterceptor;
        qtc.QQuickWebEngineProfile_SetUrlRequestInterceptor(@ptrCast(self.ptr), @ptrCast(interceptor.ptr));
    }

    /// ### DEPRECATED: Use `urlSchemeHandler` instead
    ///
    pub const UrlSchemeHandler = urlSchemeHandler;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#urlSchemeHandler)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` param1: []u8 `
    ///
    pub fn urlSchemeHandler(self: QQuickWebEngineProfile, param1: []u8) QWebEngineUrlSchemeHandler {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        return .{ .ptr = qtc.QQuickWebEngineProfile_UrlSchemeHandler(@ptrCast(self.ptr), param1_str) };
    }

    /// ### DEPRECATED: Use `installUrlSchemeHandler` instead
    ///
    pub const InstallUrlSchemeHandler = installUrlSchemeHandler;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#installUrlSchemeHandler)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` scheme: []u8 `
    ///
    /// ` param2: QWebEngineUrlSchemeHandler `
    ///
    pub fn installUrlSchemeHandler(self: QQuickWebEngineProfile, scheme: []u8, param2: anytype) void {
        const scheme_str = qtc.libqt_string{
            .len = scheme.len,
            .data = scheme.ptr,
        };
        comptime _ = @TypeOf(param2)._is_QWebEngineUrlSchemeHandler;
        qtc.QQuickWebEngineProfile_InstallUrlSchemeHandler(@ptrCast(self.ptr), scheme_str, @ptrCast(param2.ptr));
    }

    /// ### DEPRECATED: Use `removeUrlScheme` instead
    ///
    pub const RemoveUrlScheme = removeUrlScheme;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#removeUrlScheme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` scheme: []u8 `
    ///
    pub fn removeUrlScheme(self: QQuickWebEngineProfile, scheme: []u8) void {
        const scheme_str = qtc.libqt_string{
            .len = scheme.len,
            .data = scheme.ptr,
        };
        qtc.QQuickWebEngineProfile_RemoveUrlScheme(@ptrCast(self.ptr), scheme_str);
    }

    /// ### DEPRECATED: Use `removeUrlSchemeHandler` instead
    ///
    pub const RemoveUrlSchemeHandler = removeUrlSchemeHandler;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#removeUrlSchemeHandler)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` param1: QWebEngineUrlSchemeHandler `
    ///
    pub fn removeUrlSchemeHandler(self: QQuickWebEngineProfile, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWebEngineUrlSchemeHandler;
        qtc.QQuickWebEngineProfile_RemoveUrlSchemeHandler(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `removeAllUrlSchemeHandlers` instead
    ///
    pub const RemoveAllUrlSchemeHandlers = removeAllUrlSchemeHandlers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#removeAllUrlSchemeHandlers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    pub fn removeAllUrlSchemeHandlers(self: QQuickWebEngineProfile) void {
        qtc.QQuickWebEngineProfile_RemoveAllUrlSchemeHandlers(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clearHttpCache` instead
    ///
    pub const ClearHttpCache = clearHttpCache;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#clearHttpCache)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    pub fn clearHttpCache(self: QQuickWebEngineProfile) void {
        qtc.QQuickWebEngineProfile_ClearHttpCache(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSpellCheckLanguages` instead
    ///
    pub const SetSpellCheckLanguages = setSpellCheckLanguages;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#setSpellCheckLanguages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` languages: []const []const u8 `
    ///
    pub fn setSpellCheckLanguages(self: QQuickWebEngineProfile, allocator: std.mem.Allocator, languages: []const []const u8) void {
        const languages_arr = allocator.alloc(qtc.libqt_string, languages.len) catch @panic("QQuickWebEngineProfile.setSpellCheckLanguages: Memory allocation failed");
        defer allocator.free(languages_arr);
        for (languages, 0..languages.len) |str_item, i|
            languages_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const languages_list = qtc.libqt_list{
            .len = languages.len,
            .data = languages_arr.ptr,
        };
        qtc.QQuickWebEngineProfile_SetSpellCheckLanguages(@ptrCast(self.ptr), languages_list);
    }

    /// ### DEPRECATED: Use `spellCheckLanguages` instead
    ///
    pub const SpellCheckLanguages = spellCheckLanguages;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#spellCheckLanguages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn spellCheckLanguages(self: QQuickWebEngineProfile, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QQuickWebEngineProfile_SpellCheckLanguages(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QQuickWebEngineProfile.spellCheckLanguages: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QQuickWebEngineProfile.spellCheckLanguages: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setSpellCheckEnabled` instead
    ///
    pub const SetSpellCheckEnabled = setSpellCheckEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#setSpellCheckEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` enabled: bool `
    ///
    pub fn setSpellCheckEnabled(self: QQuickWebEngineProfile, enabled: bool) void {
        qtc.QQuickWebEngineProfile_SetSpellCheckEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `isSpellCheckEnabled` instead
    ///
    pub const IsSpellCheckEnabled = isSpellCheckEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#isSpellCheckEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    pub fn isSpellCheckEnabled(self: QQuickWebEngineProfile) bool {
        return qtc.QQuickWebEngineProfile_IsSpellCheckEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `downloadPath` instead
    ///
    pub const DownloadPath = downloadPath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#downloadPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn downloadPath(self: QQuickWebEngineProfile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QQuickWebEngineProfile_DownloadPath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuickWebEngineProfile.downloadPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setDownloadPath` instead
    ///
    pub const SetDownloadPath = setDownloadPath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#setDownloadPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` path: []const u8 `
    ///
    pub fn setDownloadPath(self: QQuickWebEngineProfile, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.QQuickWebEngineProfile_SetDownloadPath(@ptrCast(self.ptr), path_str);
    }

    /// ### DEPRECATED: Use `isPushServiceEnabled` instead
    ///
    pub const IsPushServiceEnabled = isPushServiceEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#isPushServiceEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    pub fn isPushServiceEnabled(self: QQuickWebEngineProfile) bool {
        return qtc.QQuickWebEngineProfile_IsPushServiceEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPushServiceEnabled` instead
    ///
    pub const SetPushServiceEnabled = setPushServiceEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#setPushServiceEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` enable: bool `
    ///
    pub fn setPushServiceEnabled(self: QQuickWebEngineProfile, enable: bool) void {
        qtc.QQuickWebEngineProfile_SetPushServiceEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `clientCertificateStore` instead
    ///
    pub const ClientCertificateStore = clientCertificateStore;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#clientCertificateStore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    pub fn clientCertificateStore(self: QQuickWebEngineProfile) QWebEngineClientCertificateStore {
        return .{ .ptr = qtc.QQuickWebEngineProfile_ClientCertificateStore(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `clientHints` instead
    ///
    pub const ClientHints = clientHints;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#clientHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    pub fn clientHints(self: QQuickWebEngineProfile) QWebEngineClientHints {
        return .{ .ptr = qtc.QQuickWebEngineProfile_ClientHints(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `queryPermission` instead
    ///
    pub const QueryPermission = queryPermission;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#queryPermission)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` securityOrigin: QUrl `
    ///
    /// ` permissionType: qwebenginepermission_enums.PermissionType `
    ///
    pub fn queryPermission(self: QQuickWebEngineProfile, securityOrigin: anytype, permissionType: u8) QWebEnginePermission {
        comptime _ = @TypeOf(securityOrigin)._is_QUrl;
        return .{ .ptr = qtc.QQuickWebEngineProfile_QueryPermission(@ptrCast(self.ptr), @ptrCast(securityOrigin.ptr), @bitCast(permissionType)) };
    }

    /// ### DEPRECATED: Use `listAllPermissions` instead
    ///
    pub const ListAllPermissions = listAllPermissions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#listAllPermissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn listAllPermissions(self: QQuickWebEngineProfile, allocator: std.mem.Allocator) []QWebEnginePermission {
        const _arr: qtc.libqt_list = qtc.QQuickWebEngineProfile_ListAllPermissions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWebEnginePermission, _arr.len) catch @panic("QQuickWebEngineProfile.listAllPermissions: Memory allocation failed");
        const _data_val: [*]QtC.QWebEnginePermission = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `listPermissionsForOrigin` instead
    ///
    pub const ListPermissionsForOrigin = listPermissionsForOrigin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#listPermissionsForOrigin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` securityOrigin: QUrl `
    ///
    pub fn listPermissionsForOrigin(self: QQuickWebEngineProfile, allocator: std.mem.Allocator, securityOrigin: anytype) []QWebEnginePermission {
        comptime _ = @TypeOf(securityOrigin)._is_QUrl;
        const _arr: qtc.libqt_list = qtc.QQuickWebEngineProfile_ListPermissionsForOrigin(@ptrCast(self.ptr), @ptrCast(securityOrigin.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWebEnginePermission, _arr.len) catch @panic("QQuickWebEngineProfile.listPermissionsForOrigin: Memory allocation failed");
        const _data_val: [*]QtC.QWebEnginePermission = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `listPermissionsForPermissionType` instead
    ///
    pub const ListPermissionsForPermissionType = listPermissionsForPermissionType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#listPermissionsForPermissionType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` permissionType: qwebenginepermission_enums.PermissionType `
    ///
    pub fn listPermissionsForPermissionType(self: QQuickWebEngineProfile, allocator: std.mem.Allocator, permissionType: u8) []QWebEnginePermission {
        const _arr: qtc.libqt_list = qtc.QQuickWebEngineProfile_ListPermissionsForPermissionType(@ptrCast(self.ptr), @bitCast(permissionType));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWebEnginePermission, _arr.len) catch @panic("QQuickWebEngineProfile.listPermissionsForPermissionType: Memory allocation failed");
        const _data_val: [*]QtC.QWebEnginePermission = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `defaultProfile` instead
    ///
    pub const DefaultProfile = defaultProfile;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#defaultProfile)
    ///
    pub fn defaultProfile() QQuickWebEngineProfile {
        return .{ .ptr = qtc.QQuickWebEngineProfile_DefaultProfile() };
    }

    /// ### DEPRECATED: Use `storageNameChanged` instead
    ///
    pub const StorageNameChanged = storageNameChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#storageNameChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    pub fn storageNameChanged(self: QQuickWebEngineProfile) void {
        qtc.QQuickWebEngineProfile_StorageNameChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onStorageNameChanged` instead
    ///
    pub const OnStorageNameChanged = onStorageNameChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#storageNameChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` callback: *const fn (self: QQuickWebEngineProfile) callconv(.c) void `
    ///
    pub fn onStorageNameChanged(self: QQuickWebEngineProfile, callback: *const fn (QQuickWebEngineProfile) callconv(.c) void) void {
        qtc.QQuickWebEngineProfile_Connect_StorageNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `offTheRecordChanged` instead
    ///
    pub const OffTheRecordChanged = offTheRecordChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#offTheRecordChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    pub fn offTheRecordChanged(self: QQuickWebEngineProfile) void {
        qtc.QQuickWebEngineProfile_OffTheRecordChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onOffTheRecordChanged` instead
    ///
    pub const OnOffTheRecordChanged = onOffTheRecordChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#offTheRecordChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` callback: *const fn (self: QQuickWebEngineProfile) callconv(.c) void `
    ///
    pub fn onOffTheRecordChanged(self: QQuickWebEngineProfile, callback: *const fn (QQuickWebEngineProfile) callconv(.c) void) void {
        qtc.QQuickWebEngineProfile_Connect_OffTheRecordChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `persistentStoragePathChanged` instead
    ///
    pub const PersistentStoragePathChanged = persistentStoragePathChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#persistentStoragePathChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    pub fn persistentStoragePathChanged(self: QQuickWebEngineProfile) void {
        qtc.QQuickWebEngineProfile_PersistentStoragePathChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onPersistentStoragePathChanged` instead
    ///
    pub const OnPersistentStoragePathChanged = onPersistentStoragePathChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#persistentStoragePathChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` callback: *const fn (self: QQuickWebEngineProfile) callconv(.c) void `
    ///
    pub fn onPersistentStoragePathChanged(self: QQuickWebEngineProfile, callback: *const fn (QQuickWebEngineProfile) callconv(.c) void) void {
        qtc.QQuickWebEngineProfile_Connect_PersistentStoragePathChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `cachePathChanged` instead
    ///
    pub const CachePathChanged = cachePathChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#cachePathChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    pub fn cachePathChanged(self: QQuickWebEngineProfile) void {
        qtc.QQuickWebEngineProfile_CachePathChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCachePathChanged` instead
    ///
    pub const OnCachePathChanged = onCachePathChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#cachePathChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` callback: *const fn (self: QQuickWebEngineProfile) callconv(.c) void `
    ///
    pub fn onCachePathChanged(self: QQuickWebEngineProfile, callback: *const fn (QQuickWebEngineProfile) callconv(.c) void) void {
        qtc.QQuickWebEngineProfile_Connect_CachePathChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `httpUserAgentChanged` instead
    ///
    pub const HttpUserAgentChanged = httpUserAgentChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#httpUserAgentChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    pub fn httpUserAgentChanged(self: QQuickWebEngineProfile) void {
        qtc.QQuickWebEngineProfile_HttpUserAgentChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onHttpUserAgentChanged` instead
    ///
    pub const OnHttpUserAgentChanged = onHttpUserAgentChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#httpUserAgentChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` callback: *const fn (self: QQuickWebEngineProfile) callconv(.c) void `
    ///
    pub fn onHttpUserAgentChanged(self: QQuickWebEngineProfile, callback: *const fn (QQuickWebEngineProfile) callconv(.c) void) void {
        qtc.QQuickWebEngineProfile_Connect_HttpUserAgentChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `httpCacheTypeChanged` instead
    ///
    pub const HttpCacheTypeChanged = httpCacheTypeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#httpCacheTypeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    pub fn httpCacheTypeChanged(self: QQuickWebEngineProfile) void {
        qtc.QQuickWebEngineProfile_HttpCacheTypeChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onHttpCacheTypeChanged` instead
    ///
    pub const OnHttpCacheTypeChanged = onHttpCacheTypeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#httpCacheTypeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` callback: *const fn (self: QQuickWebEngineProfile) callconv(.c) void `
    ///
    pub fn onHttpCacheTypeChanged(self: QQuickWebEngineProfile, callback: *const fn (QQuickWebEngineProfile) callconv(.c) void) void {
        qtc.QQuickWebEngineProfile_Connect_HttpCacheTypeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `persistentCookiesPolicyChanged` instead
    ///
    pub const PersistentCookiesPolicyChanged = persistentCookiesPolicyChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#persistentCookiesPolicyChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    pub fn persistentCookiesPolicyChanged(self: QQuickWebEngineProfile) void {
        qtc.QQuickWebEngineProfile_PersistentCookiesPolicyChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onPersistentCookiesPolicyChanged` instead
    ///
    pub const OnPersistentCookiesPolicyChanged = onPersistentCookiesPolicyChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#persistentCookiesPolicyChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` callback: *const fn (self: QQuickWebEngineProfile) callconv(.c) void `
    ///
    pub fn onPersistentCookiesPolicyChanged(self: QQuickWebEngineProfile, callback: *const fn (QQuickWebEngineProfile) callconv(.c) void) void {
        qtc.QQuickWebEngineProfile_Connect_PersistentCookiesPolicyChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `httpCacheMaximumSizeChanged` instead
    ///
    pub const HttpCacheMaximumSizeChanged = httpCacheMaximumSizeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#httpCacheMaximumSizeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    pub fn httpCacheMaximumSizeChanged(self: QQuickWebEngineProfile) void {
        qtc.QQuickWebEngineProfile_HttpCacheMaximumSizeChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onHttpCacheMaximumSizeChanged` instead
    ///
    pub const OnHttpCacheMaximumSizeChanged = onHttpCacheMaximumSizeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#httpCacheMaximumSizeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` callback: *const fn (self: QQuickWebEngineProfile) callconv(.c) void `
    ///
    pub fn onHttpCacheMaximumSizeChanged(self: QQuickWebEngineProfile, callback: *const fn (QQuickWebEngineProfile) callconv(.c) void) void {
        qtc.QQuickWebEngineProfile_Connect_HttpCacheMaximumSizeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `httpAcceptLanguageChanged` instead
    ///
    pub const HttpAcceptLanguageChanged = httpAcceptLanguageChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#httpAcceptLanguageChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    pub fn httpAcceptLanguageChanged(self: QQuickWebEngineProfile) void {
        qtc.QQuickWebEngineProfile_HttpAcceptLanguageChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onHttpAcceptLanguageChanged` instead
    ///
    pub const OnHttpAcceptLanguageChanged = onHttpAcceptLanguageChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#httpAcceptLanguageChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` callback: *const fn (self: QQuickWebEngineProfile) callconv(.c) void `
    ///
    pub fn onHttpAcceptLanguageChanged(self: QQuickWebEngineProfile, callback: *const fn (QQuickWebEngineProfile) callconv(.c) void) void {
        qtc.QQuickWebEngineProfile_Connect_HttpAcceptLanguageChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `spellCheckLanguagesChanged` instead
    ///
    pub const SpellCheckLanguagesChanged = spellCheckLanguagesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#spellCheckLanguagesChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    pub fn spellCheckLanguagesChanged(self: QQuickWebEngineProfile) void {
        qtc.QQuickWebEngineProfile_SpellCheckLanguagesChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSpellCheckLanguagesChanged` instead
    ///
    pub const OnSpellCheckLanguagesChanged = onSpellCheckLanguagesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#spellCheckLanguagesChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` callback: *const fn (self: QQuickWebEngineProfile) callconv(.c) void `
    ///
    pub fn onSpellCheckLanguagesChanged(self: QQuickWebEngineProfile, callback: *const fn (QQuickWebEngineProfile) callconv(.c) void) void {
        qtc.QQuickWebEngineProfile_Connect_SpellCheckLanguagesChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `spellCheckEnabledChanged` instead
    ///
    pub const SpellCheckEnabledChanged = spellCheckEnabledChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#spellCheckEnabledChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    pub fn spellCheckEnabledChanged(self: QQuickWebEngineProfile) void {
        qtc.QQuickWebEngineProfile_SpellCheckEnabledChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSpellCheckEnabledChanged` instead
    ///
    pub const OnSpellCheckEnabledChanged = onSpellCheckEnabledChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#spellCheckEnabledChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` callback: *const fn (self: QQuickWebEngineProfile) callconv(.c) void `
    ///
    pub fn onSpellCheckEnabledChanged(self: QQuickWebEngineProfile, callback: *const fn (QQuickWebEngineProfile) callconv(.c) void) void {
        qtc.QQuickWebEngineProfile_Connect_SpellCheckEnabledChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `downloadPathChanged` instead
    ///
    pub const DownloadPathChanged = downloadPathChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#downloadPathChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    pub fn downloadPathChanged(self: QQuickWebEngineProfile) void {
        qtc.QQuickWebEngineProfile_DownloadPathChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDownloadPathChanged` instead
    ///
    pub const OnDownloadPathChanged = onDownloadPathChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#downloadPathChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` callback: *const fn (self: QQuickWebEngineProfile) callconv(.c) void `
    ///
    pub fn onDownloadPathChanged(self: QQuickWebEngineProfile, callback: *const fn (QQuickWebEngineProfile) callconv(.c) void) void {
        qtc.QQuickWebEngineProfile_Connect_DownloadPathChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `pushServiceEnabledChanged` instead
    ///
    pub const PushServiceEnabledChanged = pushServiceEnabledChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#pushServiceEnabledChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    pub fn pushServiceEnabledChanged(self: QQuickWebEngineProfile) void {
        qtc.QQuickWebEngineProfile_PushServiceEnabledChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onPushServiceEnabledChanged` instead
    ///
    pub const OnPushServiceEnabledChanged = onPushServiceEnabledChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#pushServiceEnabledChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` callback: *const fn (self: QQuickWebEngineProfile) callconv(.c) void `
    ///
    pub fn onPushServiceEnabledChanged(self: QQuickWebEngineProfile, callback: *const fn (QQuickWebEngineProfile) callconv(.c) void) void {
        qtc.QQuickWebEngineProfile_Connect_PushServiceEnabledChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `clearHttpCacheCompleted` instead
    ///
    pub const ClearHttpCacheCompleted = clearHttpCacheCompleted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#clearHttpCacheCompleted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    pub fn clearHttpCacheCompleted(self: QQuickWebEngineProfile) void {
        qtc.QQuickWebEngineProfile_ClearHttpCacheCompleted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onClearHttpCacheCompleted` instead
    ///
    pub const OnClearHttpCacheCompleted = onClearHttpCacheCompleted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#clearHttpCacheCompleted)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` callback: *const fn (self: QQuickWebEngineProfile) callconv(.c) void `
    ///
    pub fn onClearHttpCacheCompleted(self: QQuickWebEngineProfile, callback: *const fn (QQuickWebEngineProfile) callconv(.c) void) void {
        qtc.QQuickWebEngineProfile_Connect_ClearHttpCacheCompleted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `persistentPermissionsPolicyChanged` instead
    ///
    pub const PersistentPermissionsPolicyChanged = persistentPermissionsPolicyChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#persistentPermissionsPolicyChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    pub fn persistentPermissionsPolicyChanged(self: QQuickWebEngineProfile) void {
        qtc.QQuickWebEngineProfile_PersistentPermissionsPolicyChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onPersistentPermissionsPolicyChanged` instead
    ///
    pub const OnPersistentPermissionsPolicyChanged = onPersistentPermissionsPolicyChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#persistentPermissionsPolicyChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` callback: *const fn (self: QQuickWebEngineProfile) callconv(.c) void `
    ///
    pub fn onPersistentPermissionsPolicyChanged(self: QQuickWebEngineProfile, callback: *const fn (QQuickWebEngineProfile) callconv(.c) void) void {
        qtc.QQuickWebEngineProfile_Connect_PersistentPermissionsPolicyChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `downloadRequested` instead
    ///
    pub const DownloadRequested = downloadRequested;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#downloadRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` download: QQuickWebEngineDownloadRequest `
    ///
    pub fn downloadRequested(self: QQuickWebEngineProfile, download: anytype) void {
        comptime _ = @TypeOf(download)._is_QQuickWebEngineDownloadRequest;
        qtc.QQuickWebEngineProfile_DownloadRequested(@ptrCast(self.ptr), @ptrCast(download.ptr));
    }

    /// ### DEPRECATED: Use `onDownloadRequested` instead
    ///
    pub const OnDownloadRequested = onDownloadRequested;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#downloadRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` callback: *const fn (self: QQuickWebEngineProfile, download: QQuickWebEngineDownloadRequest) callconv(.c) void `
    ///
    pub fn onDownloadRequested(self: QQuickWebEngineProfile, callback: *const fn (QQuickWebEngineProfile, QQuickWebEngineDownloadRequest) callconv(.c) void) void {
        qtc.QQuickWebEngineProfile_Connect_DownloadRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `downloadFinished` instead
    ///
    pub const DownloadFinished = downloadFinished;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#downloadFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` download: QQuickWebEngineDownloadRequest `
    ///
    pub fn downloadFinished(self: QQuickWebEngineProfile, download: anytype) void {
        comptime _ = @TypeOf(download)._is_QQuickWebEngineDownloadRequest;
        qtc.QQuickWebEngineProfile_DownloadFinished(@ptrCast(self.ptr), @ptrCast(download.ptr));
    }

    /// ### DEPRECATED: Use `onDownloadFinished` instead
    ///
    pub const OnDownloadFinished = onDownloadFinished;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#downloadFinished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` callback: *const fn (self: QQuickWebEngineProfile, download: QQuickWebEngineDownloadRequest) callconv(.c) void `
    ///
    pub fn onDownloadFinished(self: QQuickWebEngineProfile, callback: *const fn (QQuickWebEngineProfile, QQuickWebEngineDownloadRequest) callconv(.c) void) void {
        qtc.QQuickWebEngineProfile_Connect_DownloadFinished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `presentNotification` instead
    ///
    pub const PresentNotification = presentNotification;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#presentNotification)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` notification: QWebEngineNotification `
    ///
    pub fn presentNotification(self: QQuickWebEngineProfile, notification: anytype) void {
        comptime _ = @TypeOf(notification)._is_QWebEngineNotification;
        qtc.QQuickWebEngineProfile_PresentNotification(@ptrCast(self.ptr), @ptrCast(notification.ptr));
    }

    /// ### DEPRECATED: Use `onPresentNotification` instead
    ///
    pub const OnPresentNotification = onPresentNotification;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#presentNotification)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` callback: *const fn (self: QQuickWebEngineProfile, notification: QWebEngineNotification) callconv(.c) void `
    ///
    pub fn onPresentNotification(self: QQuickWebEngineProfile, callback: *const fn (QQuickWebEngineProfile, QWebEngineNotification) callconv(.c) void) void {
        qtc.QQuickWebEngineProfile_Connect_PresentNotification(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

    /// Inherited from QObject
    ///
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
        var _str = qtc.QQuickWebEngineProfile_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuickWebEngineProfile.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

    /// Inherited from QObject
    ///
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
        var _str = qtc.QQuickWebEngineProfile_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuickWebEngineProfile.tr3: Memory allocation failed");
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
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QQuickWebEngineProfile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuickWebEngineProfile.objectName: Memory allocation failed");
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
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QQuickWebEngineProfile, name: []const u8) void {
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
    /// ` self: QQuickWebEngineProfile `
    ///
    pub fn isWidgetType(self: QQuickWebEngineProfile) bool {
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
    /// ` self: QQuickWebEngineProfile `
    ///
    pub fn isWindowType(self: QQuickWebEngineProfile) bool {
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
    /// ` self: QQuickWebEngineProfile `
    ///
    pub fn isQuickItemType(self: QQuickWebEngineProfile) bool {
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
    /// ` self: QQuickWebEngineProfile `
    ///
    pub fn signalsBlocked(self: QQuickWebEngineProfile) bool {
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
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QQuickWebEngineProfile, b: bool) bool {
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
    /// ` self: QQuickWebEngineProfile `
    ///
    pub fn thread(self: QQuickWebEngineProfile) QThread {
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
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QQuickWebEngineProfile, _thread: anytype) bool {
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
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QQuickWebEngineProfile, interval: i32) i32 {
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
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QQuickWebEngineProfile, time: i64) i32 {
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
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QQuickWebEngineProfile, id: i32) void {
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
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QQuickWebEngineProfile, id: i32) void {
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
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QQuickWebEngineProfile, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QQuickWebEngineProfile.children: Memory allocation failed");
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
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QQuickWebEngineProfile, _parent: anytype) void {
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
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QQuickWebEngineProfile, filterObj: anytype) void {
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
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QQuickWebEngineProfile, obj: anytype) void {
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
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QQuickWebEngineProfile, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QQuickWebEngineProfile `
    ///
    pub fn disconnect3(self: QQuickWebEngineProfile) bool {
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
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QQuickWebEngineProfile, receiver: anytype) bool {
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
    /// ` self: QQuickWebEngineProfile `
    ///
    pub fn dumpObjectTree(self: QQuickWebEngineProfile) void {
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
    /// ` self: QQuickWebEngineProfile `
    ///
    pub fn dumpObjectInfo(self: QQuickWebEngineProfile) void {
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
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QQuickWebEngineProfile, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QQuickWebEngineProfile, name: [:0]const u8) QVariant {
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
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QQuickWebEngineProfile, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QQuickWebEngineProfile.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QQuickWebEngineProfile.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QQuickWebEngineProfile `
    ///
    pub fn bindingStorage(self: QQuickWebEngineProfile) QBindingStorage {
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
    /// ` self: QQuickWebEngineProfile `
    ///
    pub fn bindingStorage2(self: QQuickWebEngineProfile) QBindingStorage {
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
    /// ` self: QQuickWebEngineProfile `
    ///
    pub fn destroyed(self: QQuickWebEngineProfile) void {
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
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` callback: *const fn (self: QQuickWebEngineProfile) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QQuickWebEngineProfile, callback: *const fn (QQuickWebEngineProfile) callconv(.c) void) void {
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
    /// ` self: QQuickWebEngineProfile `
    ///
    pub fn parent(self: QQuickWebEngineProfile) QObject {
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
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QQuickWebEngineProfile, classname: [:0]const u8) bool {
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
    /// ` self: QQuickWebEngineProfile `
    ///
    pub fn deleteLater(self: QQuickWebEngineProfile) void {
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
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QQuickWebEngineProfile, interval: i32, timerType: i32) i32 {
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
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QQuickWebEngineProfile, time: i64, timerType: i32) i32 {
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
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QQuickWebEngineProfile, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QQuickWebEngineProfile, signal: [:0]const u8) bool {
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
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QQuickWebEngineProfile, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QQuickWebEngineProfile, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QQuickWebEngineProfile, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QQuickWebEngineProfile, param1: anytype) void {
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
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` callback: *const fn (self: QQuickWebEngineProfile, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QQuickWebEngineProfile, callback: *const fn (QQuickWebEngineProfile, QObject) callconv(.c) void) void {
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
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QQuickWebEngineProfile, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QQuickWebEngineProfile_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QQuickWebEngineProfile, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QQuickWebEngineProfile_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickWebEngineProfile`
    ///
    /// ` callback: *const fn (self: QQuickWebEngineProfile, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QQuickWebEngineProfile, callback: *const fn (QQuickWebEngineProfile, QEvent) callconv(.c) bool) void {
        qtc.QQuickWebEngineProfile_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QQuickWebEngineProfile, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QQuickWebEngineProfile_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QQuickWebEngineProfile, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QQuickWebEngineProfile_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickWebEngineProfile`
    ///
    /// ` callback: *const fn (self: QQuickWebEngineProfile, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QQuickWebEngineProfile, callback: *const fn (QQuickWebEngineProfile, QObject, QEvent) callconv(.c) bool) void {
        qtc.QQuickWebEngineProfile_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QQuickWebEngineProfile, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QQuickWebEngineProfile_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QQuickWebEngineProfile, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QQuickWebEngineProfile_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickWebEngineProfile`
    ///
    /// ` callback: *const fn (self: QQuickWebEngineProfile, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QQuickWebEngineProfile, callback: *const fn (QQuickWebEngineProfile, QTimerEvent) callconv(.c) void) void {
        qtc.QQuickWebEngineProfile_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QQuickWebEngineProfile, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QQuickWebEngineProfile_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QQuickWebEngineProfile, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QQuickWebEngineProfile_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickWebEngineProfile`
    ///
    /// ` callback: *const fn (self: QQuickWebEngineProfile, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QQuickWebEngineProfile, callback: *const fn (QQuickWebEngineProfile, QChildEvent) callconv(.c) void) void {
        qtc.QQuickWebEngineProfile_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QQuickWebEngineProfile, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QQuickWebEngineProfile_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QQuickWebEngineProfile, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QQuickWebEngineProfile_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuickWebEngineProfile`
    ///
    /// ` callback: *const fn (self: QQuickWebEngineProfile, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QQuickWebEngineProfile, callback: *const fn (QQuickWebEngineProfile, QEvent) callconv(.c) void) void {
        qtc.QQuickWebEngineProfile_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QQuickWebEngineProfile, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QQuickWebEngineProfile_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QQuickWebEngineProfile, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QQuickWebEngineProfile_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuickWebEngineProfile`
    ///
    /// ` callback: *const fn (self: QQuickWebEngineProfile, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QQuickWebEngineProfile, callback: *const fn (QQuickWebEngineProfile, QMetaMethod) callconv(.c) void) void {
        qtc.QQuickWebEngineProfile_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QQuickWebEngineProfile, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QQuickWebEngineProfile_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QQuickWebEngineProfile, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QQuickWebEngineProfile_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuickWebEngineProfile`
    ///
    /// ` callback: *const fn (self: QQuickWebEngineProfile, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QQuickWebEngineProfile, callback: *const fn (QQuickWebEngineProfile, QMetaMethod) callconv(.c) void) void {
        qtc.QQuickWebEngineProfile_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickWebEngineProfile `
    ///
    pub fn sender(self: QQuickWebEngineProfile) QObject {
        return .{ .ptr = qtc.QQuickWebEngineProfile_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QQuickWebEngineProfile `
    ///
    pub fn superSender(self: QQuickWebEngineProfile) QObject {
        return .{ .ptr = qtc.QQuickWebEngineProfile_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QQuickWebEngineProfile`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QQuickWebEngineProfile, callback: *const fn () callconv(.c) QObject) void {
        qtc.QQuickWebEngineProfile_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickWebEngineProfile `
    ///
    pub fn senderSignalIndex(self: QQuickWebEngineProfile) i32 {
        return qtc.QQuickWebEngineProfile_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QQuickWebEngineProfile `
    ///
    pub fn superSenderSignalIndex(self: QQuickWebEngineProfile) i32 {
        return qtc.QQuickWebEngineProfile_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QQuickWebEngineProfile`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QQuickWebEngineProfile, callback: *const fn () callconv(.c) i32) void {
        qtc.QQuickWebEngineProfile_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QQuickWebEngineProfile, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QQuickWebEngineProfile_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QQuickWebEngineProfile, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QQuickWebEngineProfile_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QQuickWebEngineProfile`
    ///
    /// ` callback: *const fn (self: QQuickWebEngineProfile, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QQuickWebEngineProfile, callback: *const fn (QQuickWebEngineProfile, [*:0]const u8) callconv(.c) i32) void {
        qtc.QQuickWebEngineProfile_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QQuickWebEngineProfile, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QQuickWebEngineProfile_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QQuickWebEngineProfile, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QQuickWebEngineProfile_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuickWebEngineProfile`
    ///
    /// ` callback: *const fn (self: QQuickWebEngineProfile, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QQuickWebEngineProfile, callback: *const fn (QQuickWebEngineProfile, QMetaMethod) callconv(.c) bool) void {
        qtc.QQuickWebEngineProfile_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickWebEngineProfile `
    ///
    /// ` callback: *const fn (self: QQuickWebEngineProfile, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QQuickWebEngineProfile, callback: *const fn (QQuickWebEngineProfile, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#dtor.QQuickWebEngineProfile)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QQuickWebEngineProfile `
    ///
    pub fn delete(self: QQuickWebEngineProfile) void {
        qtc.QQuickWebEngineProfile_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebengineprofile.html#public-types)
pub const enums = struct {
    pub const HttpCacheType = enum {
        pub const MemoryHttpCache: i32 = 0;
        pub const DiskHttpCache: i32 = 1;
        pub const NoCache: i32 = 2;
    };

    pub const PersistentCookiesPolicy = enum {
        pub const NoPersistentCookies: i32 = 0;
        pub const AllowPersistentCookies: i32 = 1;
        pub const ForcePersistentCookies: i32 = 2;
    };

    pub const PersistentPermissionsPolicy = enum {
        pub const AskEveryTime: u8 = 0;
        pub const StoreInMemory: u8 = 1;
        pub const StoreOnDisk: u8 = 2;
    };
};
