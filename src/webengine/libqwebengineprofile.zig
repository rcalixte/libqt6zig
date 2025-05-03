const C = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qwebengineprofile_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qwebengineprofile.html
pub const qwebengineprofile = struct {
    /// New constructs a new QWebEngineProfile object.
    ///
    ///
    pub fn New() ?*C.QWebEngineProfile {
        return C.QWebEngineProfile_new();
    }

    /// New2 constructs a new QWebEngineProfile object.
    ///
    /// ``` name: []const u8 ```
    pub fn New2(name: []const u8) ?*C.QWebEngineProfile {
        const name_str = C.struct_libqt_string{
            .len = name.len,
            .data = @constCast(name.ptr),
        };

        return C.QWebEngineProfile_new2(name_str);
    }

    /// New3 constructs a new QWebEngineProfile object.
    ///
    /// ``` parent: ?*C.QObject ```
    pub fn New3(parent: ?*anyopaque) ?*C.QWebEngineProfile {
        return C.QWebEngineProfile_new3(@ptrCast(parent));
    }

    /// New4 constructs a new QWebEngineProfile object.
    ///
    /// ``` name: []const u8, parent: ?*C.QObject ```
    pub fn New4(name: []const u8, parent: ?*anyopaque) ?*C.QWebEngineProfile {
        const name_str = C.struct_libqt_string{
            .len = name.len,
            .data = @constCast(name.ptr),
        };

        return C.QWebEngineProfile_new4(name_str, @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QWebEngineProfile ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QWebEngineProfile_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QWebEngineProfile, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QWebEngineProfile_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QWebEngineProfile, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QWebEngineProfile_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QWebEngineProfile, slot: fn (?*C.QWebEngineProfile, qobjectdefs_enums.Call, i32, ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        C.QWebEngineProfile_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QWebEngineProfile, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QWebEngineProfile_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QWebEngineProfile_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#storageName)
    ///
    /// ``` self: ?*C.QWebEngineProfile, allocator: std.mem.Allocator ```
    pub fn StorageName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QWebEngineProfile_StorageName(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#isOffTheRecord)
    ///
    /// ``` self: ?*C.QWebEngineProfile ```
    pub fn IsOffTheRecord(self: ?*anyopaque) bool {
        return C.QWebEngineProfile_IsOffTheRecord(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#persistentStoragePath)
    ///
    /// ``` self: ?*C.QWebEngineProfile, allocator: std.mem.Allocator ```
    pub fn PersistentStoragePath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QWebEngineProfile_PersistentStoragePath(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#setPersistentStoragePath)
    ///
    /// ``` self: ?*C.QWebEngineProfile, path: []const u8 ```
    pub fn SetPersistentStoragePath(self: ?*anyopaque, path: []const u8) void {
        const path_str = C.struct_libqt_string{
            .len = path.len,
            .data = @constCast(path.ptr),
        };
        C.QWebEngineProfile_SetPersistentStoragePath(@ptrCast(self), path_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#cachePath)
    ///
    /// ``` self: ?*C.QWebEngineProfile, allocator: std.mem.Allocator ```
    pub fn CachePath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QWebEngineProfile_CachePath(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#setCachePath)
    ///
    /// ``` self: ?*C.QWebEngineProfile, path: []const u8 ```
    pub fn SetCachePath(self: ?*anyopaque, path: []const u8) void {
        const path_str = C.struct_libqt_string{
            .len = path.len,
            .data = @constCast(path.ptr),
        };
        C.QWebEngineProfile_SetCachePath(@ptrCast(self), path_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#httpUserAgent)
    ///
    /// ``` self: ?*C.QWebEngineProfile, allocator: std.mem.Allocator ```
    pub fn HttpUserAgent(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QWebEngineProfile_HttpUserAgent(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#setHttpUserAgent)
    ///
    /// ``` self: ?*C.QWebEngineProfile, userAgent: []const u8 ```
    pub fn SetHttpUserAgent(self: ?*anyopaque, userAgent: []const u8) void {
        const userAgent_str = C.struct_libqt_string{
            .len = userAgent.len,
            .data = @constCast(userAgent.ptr),
        };
        C.QWebEngineProfile_SetHttpUserAgent(@ptrCast(self), userAgent_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#httpCacheType)
    ///
    /// ``` self: ?*C.QWebEngineProfile ```
    pub fn HttpCacheType(self: ?*anyopaque) i64 {
        return C.QWebEngineProfile_HttpCacheType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#setHttpCacheType)
    ///
    /// ``` self: ?*C.QWebEngineProfile, httpCacheType: qwebengineprofile_enums.HttpCacheType ```
    pub fn SetHttpCacheType(self: ?*anyopaque, httpCacheType: i64) void {
        C.QWebEngineProfile_SetHttpCacheType(@ptrCast(self), @intCast(httpCacheType));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#setHttpAcceptLanguage)
    ///
    /// ``` self: ?*C.QWebEngineProfile, httpAcceptLanguage: []const u8 ```
    pub fn SetHttpAcceptLanguage(self: ?*anyopaque, httpAcceptLanguage: []const u8) void {
        const httpAcceptLanguage_str = C.struct_libqt_string{
            .len = httpAcceptLanguage.len,
            .data = @constCast(httpAcceptLanguage.ptr),
        };
        C.QWebEngineProfile_SetHttpAcceptLanguage(@ptrCast(self), httpAcceptLanguage_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#httpAcceptLanguage)
    ///
    /// ``` self: ?*C.QWebEngineProfile, allocator: std.mem.Allocator ```
    pub fn HttpAcceptLanguage(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QWebEngineProfile_HttpAcceptLanguage(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#persistentCookiesPolicy)
    ///
    /// ``` self: ?*C.QWebEngineProfile ```
    pub fn PersistentCookiesPolicy(self: ?*anyopaque) i64 {
        return C.QWebEngineProfile_PersistentCookiesPolicy(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#setPersistentCookiesPolicy)
    ///
    /// ``` self: ?*C.QWebEngineProfile, persistentCookiesPolicy: qwebengineprofile_enums.PersistentCookiesPolicy ```
    pub fn SetPersistentCookiesPolicy(self: ?*anyopaque, persistentCookiesPolicy: i64) void {
        C.QWebEngineProfile_SetPersistentCookiesPolicy(@ptrCast(self), @intCast(persistentCookiesPolicy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#httpCacheMaximumSize)
    ///
    /// ``` self: ?*C.QWebEngineProfile ```
    pub fn HttpCacheMaximumSize(self: ?*anyopaque) i32 {
        return C.QWebEngineProfile_HttpCacheMaximumSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#setHttpCacheMaximumSize)
    ///
    /// ``` self: ?*C.QWebEngineProfile, maxSize: i32 ```
    pub fn SetHttpCacheMaximumSize(self: ?*anyopaque, maxSize: i32) void {
        C.QWebEngineProfile_SetHttpCacheMaximumSize(@ptrCast(self), @intCast(maxSize));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#cookieStore)
    ///
    /// ``` self: ?*C.QWebEngineProfile ```
    pub fn CookieStore(self: ?*anyopaque) ?*C.QWebEngineCookieStore {
        return C.QWebEngineProfile_CookieStore(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#setUrlRequestInterceptor)
    ///
    /// ``` self: ?*C.QWebEngineProfile, interceptor: ?*C.QWebEngineUrlRequestInterceptor ```
    pub fn SetUrlRequestInterceptor(self: ?*anyopaque, interceptor: ?*anyopaque) void {
        C.QWebEngineProfile_SetUrlRequestInterceptor(@ptrCast(self), @ptrCast(interceptor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#clearAllVisitedLinks)
    ///
    /// ``` self: ?*C.QWebEngineProfile ```
    pub fn ClearAllVisitedLinks(self: ?*anyopaque) void {
        C.QWebEngineProfile_ClearAllVisitedLinks(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#clearVisitedLinks)
    ///
    /// ``` self: ?*C.QWebEngineProfile, urls: []C.QUrl ```
    pub fn ClearVisitedLinks(self: ?*anyopaque, urls: []C.QUrl) void {
        const urls_list = C.struct_libqt_list{
            .len = urls.len,
            .data = @ptrCast(urls.ptr),
        };
        C.QWebEngineProfile_ClearVisitedLinks(@ptrCast(self), urls_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#visitedLinksContainsUrl)
    ///
    /// ``` self: ?*C.QWebEngineProfile, url: ?*C.QUrl ```
    pub fn VisitedLinksContainsUrl(self: ?*anyopaque, url: ?*anyopaque) bool {
        return C.QWebEngineProfile_VisitedLinksContainsUrl(@ptrCast(self), @ptrCast(url));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#settings)
    ///
    /// ``` self: ?*C.QWebEngineProfile ```
    pub fn Settings(self: ?*anyopaque) ?*C.QWebEngineSettings {
        return C.QWebEngineProfile_Settings(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#scripts)
    ///
    /// ``` self: ?*C.QWebEngineProfile ```
    pub fn Scripts(self: ?*anyopaque) ?*C.QWebEngineScriptCollection {
        return C.QWebEngineProfile_Scripts(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#urlSchemeHandler)
    ///
    /// ``` self: ?*C.QWebEngineProfile, param1: []u8 ```
    pub fn UrlSchemeHandler(self: ?*anyopaque, param1: []u8) ?*C.QWebEngineUrlSchemeHandler {
        const param1_str = C.struct_libqt_string{
            .len = param1.len,
            .data = @constCast(param1.ptr),
        };
        return C.QWebEngineProfile_UrlSchemeHandler(@ptrCast(self), param1_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#installUrlSchemeHandler)
    ///
    /// ``` self: ?*C.QWebEngineProfile, scheme: []u8, param2: ?*C.QWebEngineUrlSchemeHandler ```
    pub fn InstallUrlSchemeHandler(self: ?*anyopaque, scheme: []u8, param2: ?*anyopaque) void {
        const scheme_str = C.struct_libqt_string{
            .len = scheme.len,
            .data = @constCast(scheme.ptr),
        };
        C.QWebEngineProfile_InstallUrlSchemeHandler(@ptrCast(self), scheme_str, @ptrCast(param2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#removeUrlScheme)
    ///
    /// ``` self: ?*C.QWebEngineProfile, scheme: []u8 ```
    pub fn RemoveUrlScheme(self: ?*anyopaque, scheme: []u8) void {
        const scheme_str = C.struct_libqt_string{
            .len = scheme.len,
            .data = @constCast(scheme.ptr),
        };
        C.QWebEngineProfile_RemoveUrlScheme(@ptrCast(self), scheme_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#removeUrlSchemeHandler)
    ///
    /// ``` self: ?*C.QWebEngineProfile, param1: ?*C.QWebEngineUrlSchemeHandler ```
    pub fn RemoveUrlSchemeHandler(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWebEngineProfile_RemoveUrlSchemeHandler(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#removeAllUrlSchemeHandlers)
    ///
    /// ``` self: ?*C.QWebEngineProfile ```
    pub fn RemoveAllUrlSchemeHandlers(self: ?*anyopaque) void {
        C.QWebEngineProfile_RemoveAllUrlSchemeHandlers(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#clearHttpCache)
    ///
    /// ``` self: ?*C.QWebEngineProfile ```
    pub fn ClearHttpCache(self: ?*anyopaque) void {
        C.QWebEngineProfile_ClearHttpCache(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#setSpellCheckLanguages)
    ///
    /// ``` self: ?*C.QWebEngineProfile, languages: [][]const u8, allocator: std.mem.Allocator ```
    pub fn SetSpellCheckLanguages(self: ?*anyopaque, languages: [][]const u8, allocator: std.mem.Allocator) void {
        var languages_arr = allocator.alloc(C.struct_libqt_string, languages.len) catch @panic("Memory allocation failed");
        defer allocator.free(languages_arr);
        for (languages, 0..languages.len) |item, _i| {
            languages_arr[_i] = .{
                .len = item.len,
                .data = @ptrCast(@constCast(item.ptr)),
            };
        }
        const languages_list = C.struct_libqt_list{
            .len = languages.len,
            .data = languages_arr.ptr,
        };
        C.QWebEngineProfile_SetSpellCheckLanguages(@ptrCast(self), languages_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#spellCheckLanguages)
    ///
    /// ``` self: ?*C.QWebEngineProfile, allocator: std.mem.Allocator ```
    pub fn SpellCheckLanguages(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: C.struct_libqt_list = C.QWebEngineProfile_SpellCheckLanguages(@ptrCast(self));
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#setSpellCheckEnabled)
    ///
    /// ``` self: ?*C.QWebEngineProfile, enabled: bool ```
    pub fn SetSpellCheckEnabled(self: ?*anyopaque, enabled: bool) void {
        C.QWebEngineProfile_SetSpellCheckEnabled(@ptrCast(self), enabled);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#isSpellCheckEnabled)
    ///
    /// ``` self: ?*C.QWebEngineProfile ```
    pub fn IsSpellCheckEnabled(self: ?*anyopaque) bool {
        return C.QWebEngineProfile_IsSpellCheckEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#downloadPath)
    ///
    /// ``` self: ?*C.QWebEngineProfile, allocator: std.mem.Allocator ```
    pub fn DownloadPath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QWebEngineProfile_DownloadPath(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#setDownloadPath)
    ///
    /// ``` self: ?*C.QWebEngineProfile, path: []const u8 ```
    pub fn SetDownloadPath(self: ?*anyopaque, path: []const u8) void {
        const path_str = C.struct_libqt_string{
            .len = path.len,
            .data = @constCast(path.ptr),
        };
        C.QWebEngineProfile_SetDownloadPath(@ptrCast(self), path_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#clientCertificateStore)
    ///
    /// ``` self: ?*C.QWebEngineProfile ```
    pub fn ClientCertificateStore(self: ?*anyopaque) ?*C.QWebEngineClientCertificateStore {
        return C.QWebEngineProfile_ClientCertificateStore(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#defaultProfile)
    ///
    ///
    pub fn DefaultProfile() ?*C.QWebEngineProfile {
        return C.QWebEngineProfile_DefaultProfile();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineprofile.html#downloadRequested)
    ///
    /// ``` self: ?*C.QWebEngineProfile, download: ?*C.QWebEngineDownloadRequest ```
    pub fn DownloadRequested(self: ?*anyopaque, download: ?*anyopaque) void {
        C.QWebEngineProfile_DownloadRequested(@ptrCast(self), @ptrCast(download));
    }

    /// ``` self: ?*C.QWebEngineProfile, slot: fn (?*C.QWebEngineProfile, ?*C.QWebEngineDownloadRequest) callconv(.c) void ```
    pub fn OnDownloadRequested(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QWebEngineProfile_Connect_DownloadRequested(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QWebEngineProfile_Tr2(s_Cstring, c_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QWebEngineProfile_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QWebEngineProfile, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QObject_ObjectName(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: ?*C.QWebEngineProfile, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QWebEngineProfile ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QWebEngineProfile ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QWebEngineProfile ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QWebEngineProfile ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QWebEngineProfile, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QWebEngineProfile ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QWebEngineProfile, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QWebEngineProfile, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QWebEngineProfile, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QWebEngineProfile, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QObject {
        const _arr: C.struct_libqt_list = C.QObject_Children(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QObject, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: ?*C.QWebEngineProfile, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QWebEngineProfile, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QWebEngineProfile, obj: ?*C.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        C.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) ?*C.QMetaObject__Connection {
        return C.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QWebEngineProfile, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, member: ?*C.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return C.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: ?*C.QMetaObject__Connection ```
    pub fn DisconnectWithQMetaObjectConnection(param1: ?*anyopaque) bool {
        return C.QObject_DisconnectWithQMetaObjectConnection(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: ?*C.QWebEngineProfile ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QWebEngineProfile ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QWebEngineProfile, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QWebEngineProfile, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QWebEngineProfile, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: C.struct_libqt_list = C.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QWebEngineProfile ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QWebEngineProfile ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QWebEngineProfile ```
    pub fn Destroyed(self: ?*anyopaque) void {
        C.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: ?*C.QWebEngineProfile ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QWebEngineProfile, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QWebEngineProfile ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QWebEngineProfile, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer2(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return C.QObject_StartTimer2(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) ?*C.QMetaObject__Connection {
        return C.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QWebEngineProfile, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QWebEngineProfile, param1: ?*C.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject, ?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QWebEngineProfile, event: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QWebEngineProfile_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QWebEngineProfile, event: ?*C.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QWebEngineProfile_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QWebEngineProfile, slot: fn (?*C.QWebEngineProfile, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QWebEngineProfile_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QWebEngineProfile, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QWebEngineProfile_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QWebEngineProfile, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QWebEngineProfile_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QWebEngineProfile, slot: fn (?*C.QWebEngineProfile, ?*C.QObject, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QWebEngineProfile_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QWebEngineProfile, event: ?*C.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QWebEngineProfile_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QWebEngineProfile, event: ?*C.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QWebEngineProfile_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QWebEngineProfile, slot: fn (?*C.QWebEngineProfile, ?*C.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QWebEngineProfile_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QWebEngineProfile, event: ?*C.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QWebEngineProfile_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QWebEngineProfile, event: ?*C.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QWebEngineProfile_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QWebEngineProfile, slot: fn (?*C.QWebEngineProfile, ?*C.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QWebEngineProfile_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QWebEngineProfile, event: ?*C.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QWebEngineProfile_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QWebEngineProfile, event: ?*C.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QWebEngineProfile_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QWebEngineProfile, slot: fn (?*C.QWebEngineProfile, ?*C.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QWebEngineProfile_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QWebEngineProfile, signal: ?*C.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QWebEngineProfile_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QWebEngineProfile, signal: ?*C.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QWebEngineProfile_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QWebEngineProfile, slot: fn (?*C.QWebEngineProfile, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QWebEngineProfile_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QWebEngineProfile, signal: ?*C.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QWebEngineProfile_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QWebEngineProfile, signal: ?*C.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QWebEngineProfile_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QWebEngineProfile, slot: fn (?*C.QWebEngineProfile, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QWebEngineProfile_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QWebEngineProfile ```
    pub fn Sender(self: ?*anyopaque) ?*C.QObject {
        return C.QWebEngineProfile_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QWebEngineProfile ```
    pub fn QBaseSender(self: ?*anyopaque) ?*C.QObject {
        return C.QWebEngineProfile_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QWebEngineProfile, slot: fn () callconv(.c) ?*C.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QObject) void {
        C.QWebEngineProfile_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QWebEngineProfile ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QWebEngineProfile_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QWebEngineProfile ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QWebEngineProfile_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QWebEngineProfile, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QWebEngineProfile_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QWebEngineProfile, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QWebEngineProfile_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QWebEngineProfile, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QWebEngineProfile_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QWebEngineProfile, slot: fn (?*C.QWebEngineProfile, []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        C.QWebEngineProfile_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QWebEngineProfile, signal: ?*C.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QWebEngineProfile_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QWebEngineProfile, signal: ?*C.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QWebEngineProfile_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QWebEngineProfile, slot: fn (?*C.QWebEngineProfile, ?*C.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QWebEngineProfile_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QWebEngineProfile ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QWebEngineProfile_Delete(@ptrCast(self));
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
};
