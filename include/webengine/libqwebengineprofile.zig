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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QWebEngineProfile object in C++ memory
    ///
    pub fn new() QWebEngineProfile {
        return .{ .ptr = qtc.QWebEngineProfile_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QWebEngineProfile object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    pub fn new2(name: []const u8) QWebEngineProfile {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QWebEngineProfile_new2(name_str) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QWebEngineProfile object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new3(_parent: anytype) QWebEngineProfile {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QWebEngineProfile_new3(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QWebEngineProfile object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new4(name: []const u8, _parent: anytype) QWebEngineProfile {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QWebEngineProfile_new4(name_str, @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    pub fn metaObject(self: QWebEngineProfile) QMetaObject {
        return .{ .ptr = qtc.QWebEngineProfile_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QWebEngineProfile, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QWebEngineProfile_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QWebEngineProfile `
    ///
    pub fn superMetaObject(self: QWebEngineProfile) QMetaObject {
        return .{ .ptr = qtc.QWebEngineProfile_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QWebEngineProfile, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QWebEngineProfile_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` callback: *const fn (self: QWebEngineProfile, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QWebEngineProfile, callback: *const fn (QWebEngineProfile, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QWebEngineProfile_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QWebEngineProfile, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QWebEngineProfile_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QWebEngineProfile, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QWebEngineProfile_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` callback: *const fn (self: QWebEngineProfile, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QWebEngineProfile, callback: *const fn (QWebEngineProfile, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QWebEngineProfile_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: QWebEngineProfile, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QWebEngineProfile_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QWebEngineProfile.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `storageName` instead
    ///
    pub const StorageName = storageName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#storageName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn storageName(self: QWebEngineProfile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebEngineProfile_StorageName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QWebEngineProfile.storageName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isOffTheRecord` instead
    ///
    pub const IsOffTheRecord = isOffTheRecord;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#isOffTheRecord)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    pub fn isOffTheRecord(self: QWebEngineProfile) bool {
        return qtc.QWebEngineProfile_IsOffTheRecord(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `persistentStoragePath` instead
    ///
    pub const PersistentStoragePath = persistentStoragePath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#persistentStoragePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn persistentStoragePath(self: QWebEngineProfile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebEngineProfile_PersistentStoragePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QWebEngineProfile.persistentStoragePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPersistentStoragePath` instead
    ///
    pub const SetPersistentStoragePath = setPersistentStoragePath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#setPersistentStoragePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` path: []const u8 `
    ///
    pub fn setPersistentStoragePath(self: QWebEngineProfile, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.QWebEngineProfile_SetPersistentStoragePath(@ptrCast(self.ptr), path_str);
    }

    /// ### DEPRECATED: Use `cachePath` instead
    ///
    pub const CachePath = cachePath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#cachePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn cachePath(self: QWebEngineProfile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebEngineProfile_CachePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QWebEngineProfile.cachePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setCachePath` instead
    ///
    pub const SetCachePath = setCachePath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#setCachePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` path: []const u8 `
    ///
    pub fn setCachePath(self: QWebEngineProfile, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.QWebEngineProfile_SetCachePath(@ptrCast(self.ptr), path_str);
    }

    /// ### DEPRECATED: Use `httpUserAgent` instead
    ///
    pub const HttpUserAgent = httpUserAgent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#httpUserAgent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn httpUserAgent(self: QWebEngineProfile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebEngineProfile_HttpUserAgent(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QWebEngineProfile.httpUserAgent: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setHttpUserAgent` instead
    ///
    pub const SetHttpUserAgent = setHttpUserAgent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#setHttpUserAgent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` userAgent: []const u8 `
    ///
    pub fn setHttpUserAgent(self: QWebEngineProfile, userAgent: []const u8) void {
        const userAgent_str = qtc.libqt_string{
            .len = userAgent.len,
            .data = userAgent.ptr,
        };
        qtc.QWebEngineProfile_SetHttpUserAgent(@ptrCast(self.ptr), userAgent_str);
    }

    /// ### DEPRECATED: Use `httpCacheType` instead
    ///
    pub const HttpCacheType = httpCacheType;

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
    pub fn httpCacheType(self: QWebEngineProfile) i32 {
        return qtc.QWebEngineProfile_HttpCacheType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHttpCacheType` instead
    ///
    pub const SetHttpCacheType = setHttpCacheType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#setHttpCacheType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` _httpCacheType: qwebengineprofile_enums.HttpCacheType `
    ///
    pub fn setHttpCacheType(self: QWebEngineProfile, _httpCacheType: i32) void {
        qtc.QWebEngineProfile_SetHttpCacheType(@ptrCast(self.ptr), @bitCast(_httpCacheType));
    }

    /// ### DEPRECATED: Use `setHttpAcceptLanguage` instead
    ///
    pub const SetHttpAcceptLanguage = setHttpAcceptLanguage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#setHttpAcceptLanguage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` _httpAcceptLanguage: []const u8 `
    ///
    pub fn setHttpAcceptLanguage(self: QWebEngineProfile, _httpAcceptLanguage: []const u8) void {
        const httpAcceptLanguage_str = qtc.libqt_string{
            .len = _httpAcceptLanguage.len,
            .data = _httpAcceptLanguage.ptr,
        };
        qtc.QWebEngineProfile_SetHttpAcceptLanguage(@ptrCast(self.ptr), httpAcceptLanguage_str);
    }

    /// ### DEPRECATED: Use `httpAcceptLanguage` instead
    ///
    pub const HttpAcceptLanguage = httpAcceptLanguage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#httpAcceptLanguage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn httpAcceptLanguage(self: QWebEngineProfile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebEngineProfile_HttpAcceptLanguage(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QWebEngineProfile.httpAcceptLanguage: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `persistentCookiesPolicy` instead
    ///
    pub const PersistentCookiesPolicy = persistentCookiesPolicy;

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
    pub fn persistentCookiesPolicy(self: QWebEngineProfile) i32 {
        return qtc.QWebEngineProfile_PersistentCookiesPolicy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPersistentCookiesPolicy` instead
    ///
    pub const SetPersistentCookiesPolicy = setPersistentCookiesPolicy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#setPersistentCookiesPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` _persistentCookiesPolicy: qwebengineprofile_enums.PersistentCookiesPolicy `
    ///
    pub fn setPersistentCookiesPolicy(self: QWebEngineProfile, _persistentCookiesPolicy: i32) void {
        qtc.QWebEngineProfile_SetPersistentCookiesPolicy(@ptrCast(self.ptr), @bitCast(_persistentCookiesPolicy));
    }

    /// ### DEPRECATED: Use `persistentPermissionsPolicy` instead
    ///
    pub const PersistentPermissionsPolicy = persistentPermissionsPolicy;

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
    pub fn persistentPermissionsPolicy(self: QWebEngineProfile) u8 {
        return qtc.QWebEngineProfile_PersistentPermissionsPolicy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPersistentPermissionsPolicy` instead
    ///
    pub const SetPersistentPermissionsPolicy = setPersistentPermissionsPolicy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#setPersistentPermissionsPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` _persistentPermissionsPolicy: qwebengineprofile_enums.PersistentPermissionsPolicy `
    ///
    pub fn setPersistentPermissionsPolicy(self: QWebEngineProfile, _persistentPermissionsPolicy: u8) void {
        qtc.QWebEngineProfile_SetPersistentPermissionsPolicy(@ptrCast(self.ptr), @bitCast(_persistentPermissionsPolicy));
    }

    /// ### DEPRECATED: Use `httpCacheMaximumSize` instead
    ///
    pub const HttpCacheMaximumSize = httpCacheMaximumSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#httpCacheMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    pub fn httpCacheMaximumSize(self: QWebEngineProfile) i32 {
        return qtc.QWebEngineProfile_HttpCacheMaximumSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHttpCacheMaximumSize` instead
    ///
    pub const SetHttpCacheMaximumSize = setHttpCacheMaximumSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#setHttpCacheMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` maxSize: i32 `
    ///
    pub fn setHttpCacheMaximumSize(self: QWebEngineProfile, maxSize: i32) void {
        qtc.QWebEngineProfile_SetHttpCacheMaximumSize(@ptrCast(self.ptr), @bitCast(maxSize));
    }

    /// ### DEPRECATED: Use `cookieStore` instead
    ///
    pub const CookieStore = cookieStore;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#cookieStore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    pub fn cookieStore(self: QWebEngineProfile) QWebEngineCookieStore {
        return .{ .ptr = qtc.QWebEngineProfile_CookieStore(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setUrlRequestInterceptor` instead
    ///
    pub const SetUrlRequestInterceptor = setUrlRequestInterceptor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#setUrlRequestInterceptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` interceptor: QWebEngineUrlRequestInterceptor `
    ///
    pub fn setUrlRequestInterceptor(self: QWebEngineProfile, interceptor: anytype) void {
        comptime _ = @TypeOf(interceptor)._is_QWebEngineUrlRequestInterceptor;
        qtc.QWebEngineProfile_SetUrlRequestInterceptor(@ptrCast(self.ptr), @ptrCast(interceptor.ptr));
    }

    /// ### DEPRECATED: Use `clearAllVisitedLinks` instead
    ///
    pub const ClearAllVisitedLinks = clearAllVisitedLinks;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#clearAllVisitedLinks)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    pub fn clearAllVisitedLinks(self: QWebEngineProfile) void {
        qtc.QWebEngineProfile_ClearAllVisitedLinks(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clearVisitedLinks` instead
    ///
    pub const ClearVisitedLinks = clearVisitedLinks;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#clearVisitedLinks)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` urls: []QUrl `
    ///
    pub fn clearVisitedLinks(self: QWebEngineProfile, urls: []QUrl) void {
        const urls_list = qtc.libqt_list{
            .len = urls.len,
            .data = @ptrCast(urls.ptr),
        };
        qtc.QWebEngineProfile_ClearVisitedLinks(@ptrCast(self.ptr), urls_list);
    }

    /// ### DEPRECATED: Use `visitedLinksContainsUrl` instead
    ///
    pub const VisitedLinksContainsUrl = visitedLinksContainsUrl;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#visitedLinksContainsUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` url: QUrl `
    ///
    pub fn visitedLinksContainsUrl(self: QWebEngineProfile, url: anytype) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.QWebEngineProfile_VisitedLinksContainsUrl(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `settings` instead
    ///
    pub const Settings = settings;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#settings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    pub fn settings(self: QWebEngineProfile) QWebEngineSettings {
        return .{ .ptr = qtc.QWebEngineProfile_Settings(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `scripts` instead
    ///
    pub const Scripts = scripts;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#scripts)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    pub fn scripts(self: QWebEngineProfile) QWebEngineScriptCollection {
        return .{ .ptr = qtc.QWebEngineProfile_Scripts(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `clientHints` instead
    ///
    pub const ClientHints = clientHints;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#clientHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    pub fn clientHints(self: QWebEngineProfile) QWebEngineClientHints {
        return .{ .ptr = qtc.QWebEngineProfile_ClientHints(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `urlSchemeHandler` instead
    ///
    pub const UrlSchemeHandler = urlSchemeHandler;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#urlSchemeHandler)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` param1: []u8 `
    ///
    pub fn urlSchemeHandler(self: QWebEngineProfile, param1: []u8) QWebEngineUrlSchemeHandler {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        return .{ .ptr = qtc.QWebEngineProfile_UrlSchemeHandler(@ptrCast(self.ptr), param1_str) };
    }

    /// ### DEPRECATED: Use `installUrlSchemeHandler` instead
    ///
    pub const InstallUrlSchemeHandler = installUrlSchemeHandler;

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
    pub fn installUrlSchemeHandler(self: QWebEngineProfile, scheme: []u8, param2: anytype) void {
        const scheme_str = qtc.libqt_string{
            .len = scheme.len,
            .data = scheme.ptr,
        };
        comptime _ = @TypeOf(param2)._is_QWebEngineUrlSchemeHandler;
        qtc.QWebEngineProfile_InstallUrlSchemeHandler(@ptrCast(self.ptr), scheme_str, @ptrCast(param2.ptr));
    }

    /// ### DEPRECATED: Use `removeUrlScheme` instead
    ///
    pub const RemoveUrlScheme = removeUrlScheme;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#removeUrlScheme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` scheme: []u8 `
    ///
    pub fn removeUrlScheme(self: QWebEngineProfile, scheme: []u8) void {
        const scheme_str = qtc.libqt_string{
            .len = scheme.len,
            .data = scheme.ptr,
        };
        qtc.QWebEngineProfile_RemoveUrlScheme(@ptrCast(self.ptr), scheme_str);
    }

    /// ### DEPRECATED: Use `removeUrlSchemeHandler` instead
    ///
    pub const RemoveUrlSchemeHandler = removeUrlSchemeHandler;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#removeUrlSchemeHandler)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` param1: QWebEngineUrlSchemeHandler `
    ///
    pub fn removeUrlSchemeHandler(self: QWebEngineProfile, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWebEngineUrlSchemeHandler;
        qtc.QWebEngineProfile_RemoveUrlSchemeHandler(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `removeAllUrlSchemeHandlers` instead
    ///
    pub const RemoveAllUrlSchemeHandlers = removeAllUrlSchemeHandlers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#removeAllUrlSchemeHandlers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    pub fn removeAllUrlSchemeHandlers(self: QWebEngineProfile) void {
        qtc.QWebEngineProfile_RemoveAllUrlSchemeHandlers(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clearHttpCache` instead
    ///
    pub const ClearHttpCache = clearHttpCache;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#clearHttpCache)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    pub fn clearHttpCache(self: QWebEngineProfile) void {
        qtc.QWebEngineProfile_ClearHttpCache(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSpellCheckLanguages` instead
    ///
    pub const SetSpellCheckLanguages = setSpellCheckLanguages;

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
    pub fn setSpellCheckLanguages(self: QWebEngineProfile, allocator: std.mem.Allocator, languages: []const []const u8) void {
        const languages_arr = allocator.alloc(qtc.libqt_string, languages.len) catch @panic("QWebEngineProfile.setSpellCheckLanguages: Memory allocation failed");
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
        qtc.QWebEngineProfile_SetSpellCheckLanguages(@ptrCast(self.ptr), languages_list);
    }

    /// ### DEPRECATED: Use `spellCheckLanguages` instead
    ///
    pub const SpellCheckLanguages = spellCheckLanguages;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#spellCheckLanguages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn spellCheckLanguages(self: QWebEngineProfile, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QWebEngineProfile_SpellCheckLanguages(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QWebEngineProfile.spellCheckLanguages: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QWebEngineProfile.spellCheckLanguages: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setSpellCheckEnabled` instead
    ///
    pub const SetSpellCheckEnabled = setSpellCheckEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#setSpellCheckEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` enabled: bool `
    ///
    pub fn setSpellCheckEnabled(self: QWebEngineProfile, enabled: bool) void {
        qtc.QWebEngineProfile_SetSpellCheckEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `isSpellCheckEnabled` instead
    ///
    pub const IsSpellCheckEnabled = isSpellCheckEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#isSpellCheckEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    pub fn isSpellCheckEnabled(self: QWebEngineProfile) bool {
        return qtc.QWebEngineProfile_IsSpellCheckEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `downloadPath` instead
    ///
    pub const DownloadPath = downloadPath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#downloadPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn downloadPath(self: QWebEngineProfile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebEngineProfile_DownloadPath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QWebEngineProfile.downloadPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setDownloadPath` instead
    ///
    pub const SetDownloadPath = setDownloadPath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#setDownloadPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` path: []const u8 `
    ///
    pub fn setDownloadPath(self: QWebEngineProfile, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.QWebEngineProfile_SetDownloadPath(@ptrCast(self.ptr), path_str);
    }

    /// ### DEPRECATED: Use `isPushServiceEnabled` instead
    ///
    pub const IsPushServiceEnabled = isPushServiceEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#isPushServiceEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    pub fn isPushServiceEnabled(self: QWebEngineProfile) bool {
        return qtc.QWebEngineProfile_IsPushServiceEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPushServiceEnabled` instead
    ///
    pub const SetPushServiceEnabled = setPushServiceEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#setPushServiceEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` enabled: bool `
    ///
    pub fn setPushServiceEnabled(self: QWebEngineProfile, enabled: bool) void {
        qtc.QWebEngineProfile_SetPushServiceEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `setNotificationPresenter` instead
    ///
    pub const SetNotificationPresenter = setNotificationPresenter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#setNotificationPresenter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` notificationPresenter: *const fn (funcparam1: QWebEngineNotification (WARNING: The library takes ownership of this parameter's memory and attempting to access it will lead to a crash.)) callconv(.c) void `
    ///
    pub fn setNotificationPresenter(self: QWebEngineProfile, notificationPresenter: *const fn (QWebEngineNotification) callconv(.c) void) void {
        qtc.QWebEngineProfile_SetNotificationPresenter(@ptrCast(self.ptr), @bitCast(@intFromPtr(notificationPresenter)));
    }

    /// ### DEPRECATED: Use `clientCertificateStore` instead
    ///
    pub const ClientCertificateStore = clientCertificateStore;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#clientCertificateStore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    pub fn clientCertificateStore(self: QWebEngineProfile) QWebEngineClientCertificateStore {
        return .{ .ptr = qtc.QWebEngineProfile_ClientCertificateStore(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `requestIconForPageURL` instead
    ///
    pub const RequestIconForPageURL = requestIconForPageURL;

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
    pub fn requestIconForPageURL(self: QWebEngineProfile, url: anytype, desiredSizeInPixel: i32, iconAvailableCallback: *const fn (QIcon, QUrl, QUrl) callconv(.c) void) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.QWebEngineProfile_RequestIconForPageURL(@ptrCast(self.ptr), @ptrCast(url.ptr), @bitCast(desiredSizeInPixel), @bitCast(@intFromPtr(iconAvailableCallback)));
    }

    /// ### DEPRECATED: Use `requestIconForIconURL` instead
    ///
    pub const RequestIconForIconURL = requestIconForIconURL;

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
    pub fn requestIconForIconURL(self: QWebEngineProfile, url: anytype, desiredSizeInPixel: i32, iconAvailableCallback: *const fn (QIcon, QUrl) callconv(.c) void) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.QWebEngineProfile_RequestIconForIconURL(@ptrCast(self.ptr), @ptrCast(url.ptr), @bitCast(desiredSizeInPixel), @bitCast(@intFromPtr(iconAvailableCallback)));
    }

    /// ### DEPRECATED: Use `queryPermission` instead
    ///
    pub const QueryPermission = queryPermission;

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
    pub fn queryPermission(self: QWebEngineProfile, securityOrigin: anytype, permissionType: u8) QWebEnginePermission {
        comptime _ = @TypeOf(securityOrigin)._is_QUrl;
        return .{ .ptr = qtc.QWebEngineProfile_QueryPermission(@ptrCast(self.ptr), @ptrCast(securityOrigin.ptr), @bitCast(permissionType)) };
    }

    /// ### DEPRECATED: Use `listAllPermissions` instead
    ///
    pub const ListAllPermissions = listAllPermissions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#listAllPermissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn listAllPermissions(self: QWebEngineProfile, allocator: std.mem.Allocator) []QWebEnginePermission {
        const _arr: qtc.libqt_list = qtc.QWebEngineProfile_ListAllPermissions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWebEnginePermission, _arr.len) catch @panic("QWebEngineProfile.listAllPermissions: Memory allocation failed");
        const _data_val: [*]QtC.QWebEnginePermission = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `listPermissionsForOrigin` instead
    ///
    pub const ListPermissionsForOrigin = listPermissionsForOrigin;

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
    pub fn listPermissionsForOrigin(self: QWebEngineProfile, allocator: std.mem.Allocator, securityOrigin: anytype) []QWebEnginePermission {
        comptime _ = @TypeOf(securityOrigin)._is_QUrl;
        const _arr: qtc.libqt_list = qtc.QWebEngineProfile_ListPermissionsForOrigin(@ptrCast(self.ptr), @ptrCast(securityOrigin.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWebEnginePermission, _arr.len) catch @panic("QWebEngineProfile.listPermissionsForOrigin: Memory allocation failed");
        const _data_val: [*]QtC.QWebEnginePermission = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `listPermissionsForPermissionType` instead
    ///
    pub const ListPermissionsForPermissionType = listPermissionsForPermissionType;

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
    pub fn listPermissionsForPermissionType(self: QWebEngineProfile, allocator: std.mem.Allocator, permissionType: u8) []QWebEnginePermission {
        const _arr: qtc.libqt_list = qtc.QWebEngineProfile_ListPermissionsForPermissionType(@ptrCast(self.ptr), @bitCast(permissionType));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWebEnginePermission, _arr.len) catch @panic("QWebEngineProfile.listPermissionsForPermissionType: Memory allocation failed");
        const _data_val: [*]QtC.QWebEnginePermission = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `defaultProfile` instead
    ///
    pub const DefaultProfile = defaultProfile;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#defaultProfile)
    ///
    pub fn defaultProfile() QWebEngineProfile {
        return .{ .ptr = qtc.QWebEngineProfile_DefaultProfile() };
    }

    /// ### DEPRECATED: Use `downloadRequested` instead
    ///
    pub const DownloadRequested = downloadRequested;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#downloadRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` download: QWebEngineDownloadRequest `
    ///
    pub fn downloadRequested(self: QWebEngineProfile, download: anytype) void {
        comptime _ = @TypeOf(download)._is_QWebEngineDownloadRequest;
        qtc.QWebEngineProfile_DownloadRequested(@ptrCast(self.ptr), @ptrCast(download.ptr));
    }

    /// ### DEPRECATED: Use `onDownloadRequested` instead
    ///
    pub const OnDownloadRequested = onDownloadRequested;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#downloadRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` callback: *const fn (self: QWebEngineProfile, download: QWebEngineDownloadRequest) callconv(.c) void `
    ///
    pub fn onDownloadRequested(self: QWebEngineProfile, callback: *const fn (QWebEngineProfile, QWebEngineDownloadRequest) callconv(.c) void) void {
        qtc.QWebEngineProfile_Connect_DownloadRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `clearHttpCacheCompleted` instead
    ///
    pub const ClearHttpCacheCompleted = clearHttpCacheCompleted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#clearHttpCacheCompleted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineProfile `
    ///
    pub fn clearHttpCacheCompleted(self: QWebEngineProfile) void {
        qtc.QWebEngineProfile_ClearHttpCacheCompleted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onClearHttpCacheCompleted` instead
    ///
    pub const OnClearHttpCacheCompleted = onClearHttpCacheCompleted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#clearHttpCacheCompleted)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEngineProfile `
    ///
    /// ` callback: *const fn (self: QWebEngineProfile) callconv(.c) void `
    ///
    pub fn onClearHttpCacheCompleted(self: QWebEngineProfile, callback: *const fn (QWebEngineProfile) callconv(.c) void) void {
        qtc.QWebEngineProfile_Connect_ClearHttpCacheCompleted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QWebEngineProfile.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QWebEngineProfile.tr3: Memory allocation failed");
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QWebEngineProfile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QWebEngineProfile.objectName: Memory allocation failed");
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QWebEngineProfile, name: []const u8) void {
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
    /// ` self: QWebEngineProfile `
    ///
    pub fn isWidgetType(self: QWebEngineProfile) bool {
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
    /// ` self: QWebEngineProfile `
    ///
    pub fn isWindowType(self: QWebEngineProfile) bool {
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
    /// ` self: QWebEngineProfile `
    ///
    pub fn isQuickItemType(self: QWebEngineProfile) bool {
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
    /// ` self: QWebEngineProfile `
    ///
    pub fn signalsBlocked(self: QWebEngineProfile) bool {
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QWebEngineProfile, b: bool) bool {
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
    /// ` self: QWebEngineProfile `
    ///
    pub fn thread(self: QWebEngineProfile) QThread {
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QWebEngineProfile, _thread: anytype) bool {
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QWebEngineProfile, interval: i32) i32 {
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QWebEngineProfile, time: i64) i32 {
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QWebEngineProfile, id: i32) void {
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QWebEngineProfile, id: i32) void {
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QWebEngineProfile, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QWebEngineProfile.children: Memory allocation failed");
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QWebEngineProfile, _parent: anytype) void {
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QWebEngineProfile, filterObj: anytype) void {
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QWebEngineProfile, obj: anytype) void {
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QWebEngineProfile, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QWebEngineProfile `
    ///
    pub fn disconnect3(self: QWebEngineProfile) bool {
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QWebEngineProfile, receiver: anytype) bool {
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
    /// ` self: QWebEngineProfile `
    ///
    pub fn dumpObjectTree(self: QWebEngineProfile) void {
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
    /// ` self: QWebEngineProfile `
    ///
    pub fn dumpObjectInfo(self: QWebEngineProfile) void {
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QWebEngineProfile, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QWebEngineProfile, name: [:0]const u8) QVariant {
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QWebEngineProfile, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QWebEngineProfile.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QWebEngineProfile.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QWebEngineProfile `
    ///
    pub fn bindingStorage(self: QWebEngineProfile) QBindingStorage {
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
    /// ` self: QWebEngineProfile `
    ///
    pub fn bindingStorage2(self: QWebEngineProfile) QBindingStorage {
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
    /// ` self: QWebEngineProfile `
    ///
    pub fn destroyed(self: QWebEngineProfile) void {
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` callback: *const fn (self: QWebEngineProfile) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QWebEngineProfile, callback: *const fn (QWebEngineProfile) callconv(.c) void) void {
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
    /// ` self: QWebEngineProfile `
    ///
    pub fn parent(self: QWebEngineProfile) QObject {
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QWebEngineProfile, classname: [:0]const u8) bool {
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
    /// ` self: QWebEngineProfile `
    ///
    pub fn deleteLater(self: QWebEngineProfile) void {
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QWebEngineProfile, interval: i32, timerType: i32) i32 {
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QWebEngineProfile, time: i64, timerType: i32) i32 {
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QWebEngineProfile, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QWebEngineProfile, signal: [:0]const u8) bool {
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QWebEngineProfile, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QWebEngineProfile, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QWebEngineProfile, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QWebEngineProfile, param1: anytype) void {
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` callback: *const fn (self: QWebEngineProfile, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QWebEngineProfile, callback: *const fn (QWebEngineProfile, QObject) callconv(.c) void) void {
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QWebEngineProfile, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QWebEngineProfile_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QWebEngineProfile, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QWebEngineProfile_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QWebEngineProfile`
    ///
    /// ` callback: *const fn (self: QWebEngineProfile, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QWebEngineProfile, callback: *const fn (QWebEngineProfile, QEvent) callconv(.c) bool) void {
        qtc.QWebEngineProfile_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QWebEngineProfile, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QWebEngineProfile_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QWebEngineProfile, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QWebEngineProfile_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QWebEngineProfile`
    ///
    /// ` callback: *const fn (self: QWebEngineProfile, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QWebEngineProfile, callback: *const fn (QWebEngineProfile, QObject, QEvent) callconv(.c) bool) void {
        qtc.QWebEngineProfile_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QWebEngineProfile, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QWebEngineProfile_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QWebEngineProfile, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QWebEngineProfile_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QWebEngineProfile`
    ///
    /// ` callback: *const fn (self: QWebEngineProfile, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QWebEngineProfile, callback: *const fn (QWebEngineProfile, QTimerEvent) callconv(.c) void) void {
        qtc.QWebEngineProfile_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QWebEngineProfile, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QWebEngineProfile_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QWebEngineProfile, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QWebEngineProfile_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QWebEngineProfile`
    ///
    /// ` callback: *const fn (self: QWebEngineProfile, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QWebEngineProfile, callback: *const fn (QWebEngineProfile, QChildEvent) callconv(.c) void) void {
        qtc.QWebEngineProfile_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QWebEngineProfile, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QWebEngineProfile_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QWebEngineProfile, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QWebEngineProfile_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QWebEngineProfile`
    ///
    /// ` callback: *const fn (self: QWebEngineProfile, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QWebEngineProfile, callback: *const fn (QWebEngineProfile, QEvent) callconv(.c) void) void {
        qtc.QWebEngineProfile_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QWebEngineProfile, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QWebEngineProfile_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QWebEngineProfile, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QWebEngineProfile_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QWebEngineProfile`
    ///
    /// ` callback: *const fn (self: QWebEngineProfile, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QWebEngineProfile, callback: *const fn (QWebEngineProfile, QMetaMethod) callconv(.c) void) void {
        qtc.QWebEngineProfile_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QWebEngineProfile, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QWebEngineProfile_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QWebEngineProfile, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QWebEngineProfile_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QWebEngineProfile`
    ///
    /// ` callback: *const fn (self: QWebEngineProfile, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QWebEngineProfile, callback: *const fn (QWebEngineProfile, QMetaMethod) callconv(.c) void) void {
        qtc.QWebEngineProfile_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QWebEngineProfile `
    ///
    pub fn sender(self: QWebEngineProfile) QObject {
        return .{ .ptr = qtc.QWebEngineProfile_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QWebEngineProfile `
    ///
    pub fn superSender(self: QWebEngineProfile) QObject {
        return .{ .ptr = qtc.QWebEngineProfile_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QWebEngineProfile`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QWebEngineProfile, callback: *const fn () callconv(.c) QObject) void {
        qtc.QWebEngineProfile_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QWebEngineProfile `
    ///
    pub fn senderSignalIndex(self: QWebEngineProfile) i32 {
        return qtc.QWebEngineProfile_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QWebEngineProfile `
    ///
    pub fn superSenderSignalIndex(self: QWebEngineProfile) i32 {
        return qtc.QWebEngineProfile_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QWebEngineProfile`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QWebEngineProfile, callback: *const fn () callconv(.c) i32) void {
        qtc.QWebEngineProfile_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QWebEngineProfile, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QWebEngineProfile_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QWebEngineProfile, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QWebEngineProfile_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QWebEngineProfile`
    ///
    /// ` callback: *const fn (self: QWebEngineProfile, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QWebEngineProfile, callback: *const fn (QWebEngineProfile, [*:0]const u8) callconv(.c) i32) void {
        qtc.QWebEngineProfile_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QWebEngineProfile, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QWebEngineProfile_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QWebEngineProfile, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QWebEngineProfile_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QWebEngineProfile`
    ///
    /// ` callback: *const fn (self: QWebEngineProfile, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QWebEngineProfile, callback: *const fn (QWebEngineProfile, QMetaMethod) callconv(.c) bool) void {
        qtc.QWebEngineProfile_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QWebEngineProfile `
    ///
    /// ` callback: *const fn (self: QWebEngineProfile, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QWebEngineProfile, callback: *const fn (QWebEngineProfile, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineprofile.html#dtor.QWebEngineProfile)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QWebEngineProfile `
    ///
    pub fn delete(self: QWebEngineProfile) void {
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
