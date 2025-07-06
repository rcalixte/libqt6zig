const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qwebenginepermission_enums = @import("libqwebenginepermission.zig").enums;
const qwebengineprofile_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qwebengineprofile.html
pub const qwebengineprofile = struct {
    /// New constructs a new QWebEngineProfile object.
    ///
    ///
    pub fn New() QtC.QWebEngineProfile {
        return qtc.QWebEngineProfile_new();
    }

    /// New2 constructs a new QWebEngineProfile object.
    ///
    /// ``` name: []const u8 ```
    pub fn New2(name: []const u8) QtC.QWebEngineProfile {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };

        return qtc.QWebEngineProfile_new2(name_str);
    }

    /// New3 constructs a new QWebEngineProfile object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New3(parent: ?*anyopaque) QtC.QWebEngineProfile {
        return qtc.QWebEngineProfile_new3(@ptrCast(parent));
    }

    /// New4 constructs a new QWebEngineProfile object.
    ///
    /// ``` name: []const u8, parent: QtC.QObject ```
    pub fn New4(name: []const u8, parent: ?*anyopaque) QtC.QWebEngineProfile {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };

        return qtc.QWebEngineProfile_new4(name_str, @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QWebEngineProfile ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QWebEngineProfile_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QWebEngineProfile, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QWebEngineProfile_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QWebEngineProfile, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QWebEngineProfile_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QWebEngineProfile, slot: fn (self: QtC.QWebEngineProfile, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QWebEngineProfile_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QWebEngineProfile, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QWebEngineProfile_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QWebEngineProfile_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebengineprofile.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#storageName)
    ///
    /// ``` self: QtC.QWebEngineProfile, allocator: std.mem.Allocator ```
    pub fn StorageName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWebEngineProfile_StorageName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebengineprofile.StorageName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#isOffTheRecord)
    ///
    /// ``` self: QtC.QWebEngineProfile ```
    pub fn IsOffTheRecord(self: ?*anyopaque) bool {
        return qtc.QWebEngineProfile_IsOffTheRecord(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#persistentStoragePath)
    ///
    /// ``` self: QtC.QWebEngineProfile, allocator: std.mem.Allocator ```
    pub fn PersistentStoragePath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWebEngineProfile_PersistentStoragePath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebengineprofile.PersistentStoragePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#setPersistentStoragePath)
    ///
    /// ``` self: QtC.QWebEngineProfile, path: []const u8 ```
    pub fn SetPersistentStoragePath(self: ?*anyopaque, path: []const u8) void {
        const path_str = qtc.struct_libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.QWebEngineProfile_SetPersistentStoragePath(@ptrCast(self), path_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#cachePath)
    ///
    /// ``` self: QtC.QWebEngineProfile, allocator: std.mem.Allocator ```
    pub fn CachePath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWebEngineProfile_CachePath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebengineprofile.CachePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#setCachePath)
    ///
    /// ``` self: QtC.QWebEngineProfile, path: []const u8 ```
    pub fn SetCachePath(self: ?*anyopaque, path: []const u8) void {
        const path_str = qtc.struct_libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.QWebEngineProfile_SetCachePath(@ptrCast(self), path_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#httpUserAgent)
    ///
    /// ``` self: QtC.QWebEngineProfile, allocator: std.mem.Allocator ```
    pub fn HttpUserAgent(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWebEngineProfile_HttpUserAgent(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebengineprofile.HttpUserAgent: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#setHttpUserAgent)
    ///
    /// ``` self: QtC.QWebEngineProfile, userAgent: []const u8 ```
    pub fn SetHttpUserAgent(self: ?*anyopaque, userAgent: []const u8) void {
        const userAgent_str = qtc.struct_libqt_string{
            .len = userAgent.len,
            .data = userAgent.ptr,
        };
        qtc.QWebEngineProfile_SetHttpUserAgent(@ptrCast(self), userAgent_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#httpCacheType)
    ///
    /// ``` self: QtC.QWebEngineProfile ```
    pub fn HttpCacheType(self: ?*anyopaque) i64 {
        return qtc.QWebEngineProfile_HttpCacheType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#setHttpCacheType)
    ///
    /// ``` self: QtC.QWebEngineProfile, httpCacheType: qwebengineprofile_enums.HttpCacheType ```
    pub fn SetHttpCacheType(self: ?*anyopaque, httpCacheType: i64) void {
        qtc.QWebEngineProfile_SetHttpCacheType(@ptrCast(self), @intCast(httpCacheType));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#setHttpAcceptLanguage)
    ///
    /// ``` self: QtC.QWebEngineProfile, httpAcceptLanguage: []const u8 ```
    pub fn SetHttpAcceptLanguage(self: ?*anyopaque, httpAcceptLanguage: []const u8) void {
        const httpAcceptLanguage_str = qtc.struct_libqt_string{
            .len = httpAcceptLanguage.len,
            .data = httpAcceptLanguage.ptr,
        };
        qtc.QWebEngineProfile_SetHttpAcceptLanguage(@ptrCast(self), httpAcceptLanguage_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#httpAcceptLanguage)
    ///
    /// ``` self: QtC.QWebEngineProfile, allocator: std.mem.Allocator ```
    pub fn HttpAcceptLanguage(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWebEngineProfile_HttpAcceptLanguage(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebengineprofile.HttpAcceptLanguage: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#persistentCookiesPolicy)
    ///
    /// ``` self: QtC.QWebEngineProfile ```
    pub fn PersistentCookiesPolicy(self: ?*anyopaque) i64 {
        return qtc.QWebEngineProfile_PersistentCookiesPolicy(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#setPersistentCookiesPolicy)
    ///
    /// ``` self: QtC.QWebEngineProfile, persistentCookiesPolicy: qwebengineprofile_enums.PersistentCookiesPolicy ```
    pub fn SetPersistentCookiesPolicy(self: ?*anyopaque, persistentCookiesPolicy: i64) void {
        qtc.QWebEngineProfile_SetPersistentCookiesPolicy(@ptrCast(self), @intCast(persistentCookiesPolicy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#persistentPermissionsPolicy)
    ///
    /// ``` self: QtC.QWebEngineProfile ```
    pub fn PersistentPermissionsPolicy(self: ?*anyopaque) i64 {
        return qtc.QWebEngineProfile_PersistentPermissionsPolicy(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#setPersistentPermissionsPolicy)
    ///
    /// ``` self: QtC.QWebEngineProfile, persistentPermissionsPolicy: qwebengineprofile_enums.PersistentPermissionsPolicy ```
    pub fn SetPersistentPermissionsPolicy(self: ?*anyopaque, persistentPermissionsPolicy: i64) void {
        qtc.QWebEngineProfile_SetPersistentPermissionsPolicy(@ptrCast(self), @intCast(persistentPermissionsPolicy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#httpCacheMaximumSize)
    ///
    /// ``` self: QtC.QWebEngineProfile ```
    pub fn HttpCacheMaximumSize(self: ?*anyopaque) i32 {
        return qtc.QWebEngineProfile_HttpCacheMaximumSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#setHttpCacheMaximumSize)
    ///
    /// ``` self: QtC.QWebEngineProfile, maxSize: i32 ```
    pub fn SetHttpCacheMaximumSize(self: ?*anyopaque, maxSize: i32) void {
        qtc.QWebEngineProfile_SetHttpCacheMaximumSize(@ptrCast(self), @intCast(maxSize));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#cookieStore)
    ///
    /// ``` self: QtC.QWebEngineProfile ```
    pub fn CookieStore(self: ?*anyopaque) QtC.QWebEngineCookieStore {
        return qtc.QWebEngineProfile_CookieStore(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#setUrlRequestInterceptor)
    ///
    /// ``` self: QtC.QWebEngineProfile, interceptor: QtC.QWebEngineUrlRequestInterceptor ```
    pub fn SetUrlRequestInterceptor(self: ?*anyopaque, interceptor: ?*anyopaque) void {
        qtc.QWebEngineProfile_SetUrlRequestInterceptor(@ptrCast(self), @ptrCast(interceptor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#clearAllVisitedLinks)
    ///
    /// ``` self: QtC.QWebEngineProfile ```
    pub fn ClearAllVisitedLinks(self: ?*anyopaque) void {
        qtc.QWebEngineProfile_ClearAllVisitedLinks(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#clearVisitedLinks)
    ///
    /// ``` self: QtC.QWebEngineProfile, urls: []QtC.QUrl ```
    pub fn ClearVisitedLinks(self: ?*anyopaque, urls: []QtC.QUrl) void {
        const urls_list = qtc.struct_libqt_list{
            .len = urls.len,
            .data = @ptrCast(urls.ptr),
        };
        qtc.QWebEngineProfile_ClearVisitedLinks(@ptrCast(self), urls_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#visitedLinksContainsUrl)
    ///
    /// ``` self: QtC.QWebEngineProfile, url: QtC.QUrl ```
    pub fn VisitedLinksContainsUrl(self: ?*anyopaque, url: ?*anyopaque) bool {
        return qtc.QWebEngineProfile_VisitedLinksContainsUrl(@ptrCast(self), @ptrCast(url));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#settings)
    ///
    /// ``` self: QtC.QWebEngineProfile ```
    pub fn Settings(self: ?*anyopaque) QtC.QWebEngineSettings {
        return qtc.QWebEngineProfile_Settings(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#scripts)
    ///
    /// ``` self: QtC.QWebEngineProfile ```
    pub fn Scripts(self: ?*anyopaque) QtC.QWebEngineScriptCollection {
        return qtc.QWebEngineProfile_Scripts(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#clientHints)
    ///
    /// ``` self: QtC.QWebEngineProfile ```
    pub fn ClientHints(self: ?*anyopaque) QtC.QWebEngineClientHints {
        return qtc.QWebEngineProfile_ClientHints(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#urlSchemeHandler)
    ///
    /// ``` self: QtC.QWebEngineProfile, param1: []u8 ```
    pub fn UrlSchemeHandler(self: ?*anyopaque, param1: []u8) QtC.QWebEngineUrlSchemeHandler {
        const param1_str = qtc.struct_libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        return qtc.QWebEngineProfile_UrlSchemeHandler(@ptrCast(self), param1_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#installUrlSchemeHandler)
    ///
    /// ``` self: QtC.QWebEngineProfile, scheme: []u8, param2: QtC.QWebEngineUrlSchemeHandler ```
    pub fn InstallUrlSchemeHandler(self: ?*anyopaque, scheme: []u8, param2: ?*anyopaque) void {
        const scheme_str = qtc.struct_libqt_string{
            .len = scheme.len,
            .data = scheme.ptr,
        };
        qtc.QWebEngineProfile_InstallUrlSchemeHandler(@ptrCast(self), scheme_str, @ptrCast(param2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#removeUrlScheme)
    ///
    /// ``` self: QtC.QWebEngineProfile, scheme: []u8 ```
    pub fn RemoveUrlScheme(self: ?*anyopaque, scheme: []u8) void {
        const scheme_str = qtc.struct_libqt_string{
            .len = scheme.len,
            .data = scheme.ptr,
        };
        qtc.QWebEngineProfile_RemoveUrlScheme(@ptrCast(self), scheme_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#removeUrlSchemeHandler)
    ///
    /// ``` self: QtC.QWebEngineProfile, param1: QtC.QWebEngineUrlSchemeHandler ```
    pub fn RemoveUrlSchemeHandler(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWebEngineProfile_RemoveUrlSchemeHandler(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#removeAllUrlSchemeHandlers)
    ///
    /// ``` self: QtC.QWebEngineProfile ```
    pub fn RemoveAllUrlSchemeHandlers(self: ?*anyopaque) void {
        qtc.QWebEngineProfile_RemoveAllUrlSchemeHandlers(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#clearHttpCache)
    ///
    /// ``` self: QtC.QWebEngineProfile ```
    pub fn ClearHttpCache(self: ?*anyopaque) void {
        qtc.QWebEngineProfile_ClearHttpCache(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#setSpellCheckLanguages)
    ///
    /// ``` self: QtC.QWebEngineProfile, languages: [][]const u8, allocator: std.mem.Allocator ```
    pub fn SetSpellCheckLanguages(self: ?*anyopaque, languages: [][]const u8, allocator: std.mem.Allocator) void {
        var languages_arr = allocator.alloc(qtc.struct_libqt_string, languages.len) catch @panic("qwebengineprofile.SetSpellCheckLanguages: Memory allocation failed");
        defer allocator.free(languages_arr);
        for (languages, 0..languages.len) |item, i| {
            languages_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const languages_list = qtc.struct_libqt_list{
            .len = languages.len,
            .data = languages_arr.ptr,
        };
        qtc.QWebEngineProfile_SetSpellCheckLanguages(@ptrCast(self), languages_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#spellCheckLanguages)
    ///
    /// ``` self: QtC.QWebEngineProfile, allocator: std.mem.Allocator ```
    pub fn SpellCheckLanguages(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.struct_libqt_list = qtc.QWebEngineProfile_SpellCheckLanguages(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#setSpellCheckEnabled)
    ///
    /// ``` self: QtC.QWebEngineProfile, enabled: bool ```
    pub fn SetSpellCheckEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QWebEngineProfile_SetSpellCheckEnabled(@ptrCast(self), enabled);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#isSpellCheckEnabled)
    ///
    /// ``` self: QtC.QWebEngineProfile ```
    pub fn IsSpellCheckEnabled(self: ?*anyopaque) bool {
        return qtc.QWebEngineProfile_IsSpellCheckEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#downloadPath)
    ///
    /// ``` self: QtC.QWebEngineProfile, allocator: std.mem.Allocator ```
    pub fn DownloadPath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWebEngineProfile_DownloadPath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebengineprofile.DownloadPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#setDownloadPath)
    ///
    /// ``` self: QtC.QWebEngineProfile, path: []const u8 ```
    pub fn SetDownloadPath(self: ?*anyopaque, path: []const u8) void {
        const path_str = qtc.struct_libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.QWebEngineProfile_SetDownloadPath(@ptrCast(self), path_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#isPushServiceEnabled)
    ///
    /// ``` self: QtC.QWebEngineProfile ```
    pub fn IsPushServiceEnabled(self: ?*anyopaque) bool {
        return qtc.QWebEngineProfile_IsPushServiceEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#setPushServiceEnabled)
    ///
    /// ``` self: QtC.QWebEngineProfile, enabled: bool ```
    pub fn SetPushServiceEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QWebEngineProfile_SetPushServiceEnabled(@ptrCast(self), enabled);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#clientCertificateStore)
    ///
    /// ``` self: QtC.QWebEngineProfile ```
    pub fn ClientCertificateStore(self: ?*anyopaque) QtC.QWebEngineClientCertificateStore {
        return qtc.QWebEngineProfile_ClientCertificateStore(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#queryPermission)
    ///
    /// ``` self: QtC.QWebEngineProfile, securityOrigin: QtC.QUrl, permissionType: qwebenginepermission_enums.PermissionType ```
    pub fn QueryPermission(self: ?*anyopaque, securityOrigin: ?*anyopaque, permissionType: i64) QtC.QWebEnginePermission {
        return qtc.QWebEngineProfile_QueryPermission(@ptrCast(self), @ptrCast(securityOrigin), @intCast(permissionType));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#listAllPermissions)
    ///
    /// ``` self: QtC.QWebEngineProfile, allocator: std.mem.Allocator ```
    pub fn ListAllPermissions(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QWebEnginePermission {
        const _arr: qtc.struct_libqt_list = qtc.QWebEngineProfile_ListAllPermissions(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QWebEnginePermission, _arr.len) catch @panic("qwebengineprofile.ListAllPermissions: Memory allocation failed");
        const _data: [*]QtC.QWebEnginePermission = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#listPermissionsForOrigin)
    ///
    /// ``` self: QtC.QWebEngineProfile, securityOrigin: QtC.QUrl, allocator: std.mem.Allocator ```
    pub fn ListPermissionsForOrigin(self: ?*anyopaque, securityOrigin: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QWebEnginePermission {
        const _arr: qtc.struct_libqt_list = qtc.QWebEngineProfile_ListPermissionsForOrigin(@ptrCast(self), @ptrCast(securityOrigin));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QWebEnginePermission, _arr.len) catch @panic("qwebengineprofile.ListPermissionsForOrigin: Memory allocation failed");
        const _data: [*]QtC.QWebEnginePermission = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#listPermissionsForPermissionType)
    ///
    /// ``` self: QtC.QWebEngineProfile, permissionType: qwebenginepermission_enums.PermissionType, allocator: std.mem.Allocator ```
    pub fn ListPermissionsForPermissionType(self: ?*anyopaque, permissionType: i64, allocator: std.mem.Allocator) []QtC.QWebEnginePermission {
        const _arr: qtc.struct_libqt_list = qtc.QWebEngineProfile_ListPermissionsForPermissionType(@ptrCast(self), @intCast(permissionType));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QWebEnginePermission, _arr.len) catch @panic("qwebengineprofile.ListPermissionsForPermissionType: Memory allocation failed");
        const _data: [*]QtC.QWebEnginePermission = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#defaultProfile)
    ///
    ///
    pub fn DefaultProfile() QtC.QWebEngineProfile {
        return qtc.QWebEngineProfile_DefaultProfile();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#downloadRequested)
    ///
    /// ``` self: QtC.QWebEngineProfile, download: QtC.QWebEngineDownloadRequest ```
    pub fn DownloadRequested(self: ?*anyopaque, download: ?*anyopaque) void {
        qtc.QWebEngineProfile_DownloadRequested(@ptrCast(self), @ptrCast(download));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#downloadRequested)
    ///
    /// ``` self: QtC.QWebEngineProfile, slot: fn (self: QtC.QWebEngineProfile, download: QtC.QWebEngineDownloadRequest) callconv(.c) void ```
    pub fn OnDownloadRequested(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWebEngineProfile_Connect_DownloadRequested(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#clearHttpCacheCompleted)
    ///
    /// ``` self: QtC.QWebEngineProfile ```
    pub fn ClearHttpCacheCompleted(self: ?*anyopaque) void {
        qtc.QWebEngineProfile_ClearHttpCacheCompleted(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#clearHttpCacheCompleted)
    ///
    /// ``` self: QtC.QWebEngineProfile, slot: fn (self: QtC.QWebEngineProfile) callconv(.c) void ```
    pub fn OnClearHttpCacheCompleted(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QWebEngineProfile_Connect_ClearHttpCacheCompleted(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QWebEngineProfile_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebengineprofile.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QWebEngineProfile_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebengineprofile.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QWebEngineProfile, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebengineprofile.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QWebEngineProfile, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.QWebEngineProfile ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QWebEngineProfile ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QWebEngineProfile ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QWebEngineProfile ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QWebEngineProfile, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QWebEngineProfile ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QWebEngineProfile, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QWebEngineProfile, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QWebEngineProfile, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QWebEngineProfile, id: qnamespace_enums.TimerId ```
    pub fn KillTimerWithId(self: ?*anyopaque, id: i64) void {
        qtc.QObject_KillTimerWithId(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QWebEngineProfile, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.struct_libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qwebengineprofile.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QWebEngineProfile, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QWebEngineProfile, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QWebEngineProfile, obj: QtC.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QWebEngineProfile, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, member: QtC.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: QtC.QMetaObject__Connection ```
    pub fn DisconnectWithQMetaObjectConnection(param1: ?*anyopaque) bool {
        return qtc.QObject_DisconnectWithQMetaObjectConnection(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.QWebEngineProfile ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QWebEngineProfile ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QWebEngineProfile, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QWebEngineProfile, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QWebEngineProfile, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.struct_libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QWebEngineProfile ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QWebEngineProfile ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QWebEngineProfile ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QWebEngineProfile ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QWebEngineProfile, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QWebEngineProfile ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QWebEngineProfile, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QWebEngineProfile, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer2(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QWebEngineProfile, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QWebEngineProfile, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QWebEngineProfile, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QWebEngineProfile_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QWebEngineProfile, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QWebEngineProfile_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QWebEngineProfile, slot: fn (self: QtC.QWebEngineProfile, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QWebEngineProfile_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QWebEngineProfile, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QWebEngineProfile_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QWebEngineProfile, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QWebEngineProfile_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QWebEngineProfile, slot: fn (self: QtC.QWebEngineProfile, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QWebEngineProfile_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QWebEngineProfile, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWebEngineProfile_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QWebEngineProfile, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWebEngineProfile_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QWebEngineProfile, slot: fn (self: QtC.QWebEngineProfile, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWebEngineProfile_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QWebEngineProfile, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWebEngineProfile_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QWebEngineProfile, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWebEngineProfile_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QWebEngineProfile, slot: fn (self: QtC.QWebEngineProfile, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWebEngineProfile_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QWebEngineProfile, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWebEngineProfile_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QWebEngineProfile, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWebEngineProfile_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QWebEngineProfile, slot: fn (self: QtC.QWebEngineProfile, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWebEngineProfile_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QWebEngineProfile, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QWebEngineProfile_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QWebEngineProfile, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QWebEngineProfile_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QWebEngineProfile, slot: fn (self: QtC.QWebEngineProfile, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWebEngineProfile_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QWebEngineProfile, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QWebEngineProfile_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QWebEngineProfile, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QWebEngineProfile_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QWebEngineProfile, slot: fn (self: QtC.QWebEngineProfile, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWebEngineProfile_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QWebEngineProfile ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QWebEngineProfile_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QWebEngineProfile ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QWebEngineProfile_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QWebEngineProfile, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.QWebEngineProfile_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QWebEngineProfile ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QWebEngineProfile_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QWebEngineProfile ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QWebEngineProfile_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QWebEngineProfile, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QWebEngineProfile_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QWebEngineProfile, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QWebEngineProfile_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QWebEngineProfile, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QWebEngineProfile_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QWebEngineProfile, slot: fn (self: QtC.QWebEngineProfile, signal: []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        qtc.QWebEngineProfile_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QWebEngineProfile, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QWebEngineProfile_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QWebEngineProfile, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QWebEngineProfile_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QWebEngineProfile, slot: fn (self: QtC.QWebEngineProfile, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QWebEngineProfile_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QWebEngineProfile, slot: fn (self: QtC.QObject, objectName: []const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#dtor.QWebEngineProfile)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QWebEngineProfile ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QWebEngineProfile_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qwebengineprofile.html#types
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
