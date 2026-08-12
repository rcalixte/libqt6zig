const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const Attica__Provider = @import("libqt6").Attica__Provider;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const providermanager_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qnetworkreply_enums = @import("../network/libqnetworkreply.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/attica-providermanager.html)
pub const Attica__ProviderManager = extern struct {
    /// ### [Upstream resources](https://api.kde.org/attica-providermanager.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Attica__ProviderManager,

    pub const _is_Attica__ProviderManager = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Attica::ProviderManager object in C++ memory
    ///
    pub fn new() Attica__ProviderManager {
        return .{ .ptr = qtc.Attica__ProviderManager_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Attica::ProviderManager object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` flags: *const flag of providermanager_enums.ProviderFlag `
    ///
    pub fn new2(flags: *const i32) Attica__ProviderManager {
        return .{ .ptr = qtc.Attica__ProviderManager_new2(@ptrCast(flags)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__ProviderManager `
    ///
    pub fn metaObject(self: Attica__ProviderManager) QMetaObject {
        return .{ .ptr = qtc.Attica__ProviderManager_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: Attica__ProviderManager, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.Attica__ProviderManager_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Attica__ProviderManager `
    ///
    pub fn superMetaObject(self: Attica__ProviderManager) QMetaObject {
        return .{ .ptr = qtc.Attica__ProviderManager_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: Attica__ProviderManager `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: Attica__ProviderManager, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Attica__ProviderManager_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Attica__ProviderManager `
    ///
    /// ` callback: *const fn (self: Attica__ProviderManager, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: Attica__ProviderManager, callback: *const fn (Attica__ProviderManager, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.Attica__ProviderManager_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__ProviderManager `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: Attica__ProviderManager, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Attica__ProviderManager_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: Attica__ProviderManager `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: Attica__ProviderManager, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Attica__ProviderManager_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Attica__ProviderManager `
    ///
    /// ` callback: *const fn (self: Attica__ProviderManager, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: Attica__ProviderManager, callback: *const fn (Attica__ProviderManager, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.Attica__ProviderManager_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__ProviderManager `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: Attica__ProviderManager, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Attica__ProviderManager_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__ProviderManager.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `loadDefaultProviders` instead
    ///
    pub const LoadDefaultProviders = loadDefaultProviders;

    /// ### [Upstream resources](https://api.kde.org/attica-providermanager.html#loadDefaultProviders)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__ProviderManager `
    ///
    pub fn loadDefaultProviders(self: Attica__ProviderManager) void {
        qtc.Attica__ProviderManager_LoadDefaultProviders(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `defaultProviderFiles` instead
    ///
    pub const DefaultProviderFiles = defaultProviderFiles;

    /// ### [Upstream resources](https://api.kde.org/attica-providermanager.html#defaultProviderFiles)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__ProviderManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn defaultProviderFiles(self: Attica__ProviderManager, allocator: std.mem.Allocator) []QUrl {
        const _arr: qtc.libqt_list = qtc.Attica__ProviderManager_DefaultProviderFiles(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QUrl, _arr.len) catch @panic("Attica__ProviderManager.defaultProviderFiles: Memory allocation failed");
        const _data_val: [*]QtC.QUrl = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `addProviderFileToDefaultProviders` instead
    ///
    pub const AddProviderFileToDefaultProviders = addProviderFileToDefaultProviders;

    /// ### [Upstream resources](https://api.kde.org/attica-providermanager.html#addProviderFileToDefaultProviders)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__ProviderManager `
    ///
    /// ` url: QUrl `
    ///
    pub fn addProviderFileToDefaultProviders(self: Attica__ProviderManager, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.Attica__ProviderManager_AddProviderFileToDefaultProviders(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `removeProviderFileFromDefaultProviders` instead
    ///
    pub const RemoveProviderFileFromDefaultProviders = removeProviderFileFromDefaultProviders;

    /// ### [Upstream resources](https://api.kde.org/attica-providermanager.html#removeProviderFileFromDefaultProviders)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__ProviderManager `
    ///
    /// ` url: QUrl `
    ///
    pub fn removeProviderFileFromDefaultProviders(self: Attica__ProviderManager, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.Attica__ProviderManager_RemoveProviderFileFromDefaultProviders(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `setAuthenticationSuppressed` instead
    ///
    pub const SetAuthenticationSuppressed = setAuthenticationSuppressed;

    /// ### [Upstream resources](https://api.kde.org/attica-providermanager.html#setAuthenticationSuppressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__ProviderManager `
    ///
    /// ` suppressed: bool `
    ///
    pub fn setAuthenticationSuppressed(self: Attica__ProviderManager, suppressed: bool) void {
        qtc.Attica__ProviderManager_SetAuthenticationSuppressed(@ptrCast(self.ptr), suppressed);
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://api.kde.org/attica-providermanager.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__ProviderManager `
    ///
    pub fn clear(self: Attica__ProviderManager) void {
        qtc.Attica__ProviderManager_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `addProviderFromXml` instead
    ///
    pub const AddProviderFromXml = addProviderFromXml;

    /// ### [Upstream resources](https://api.kde.org/attica-providermanager.html#addProviderFromXml)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__ProviderManager `
    ///
    /// ` providerXml: []const u8 `
    ///
    pub fn addProviderFromXml(self: Attica__ProviderManager, providerXml: []const u8) void {
        const providerXml_str = qtc.libqt_string{
            .len = providerXml.len,
            .data = providerXml.ptr,
        };
        qtc.Attica__ProviderManager_AddProviderFromXml(@ptrCast(self.ptr), providerXml_str);
    }

    /// ### DEPRECATED: Use `addProviderFile` instead
    ///
    pub const AddProviderFile = addProviderFile;

    /// ### [Upstream resources](https://api.kde.org/attica-providermanager.html#addProviderFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__ProviderManager `
    ///
    /// ` file: QUrl `
    ///
    pub fn addProviderFile(self: Attica__ProviderManager, file: anytype) void {
        comptime _ = @TypeOf(file)._is_QUrl;
        qtc.Attica__ProviderManager_AddProviderFile(@ptrCast(self.ptr), @ptrCast(file.ptr));
    }

    /// ### DEPRECATED: Use `providerFiles` instead
    ///
    pub const ProviderFiles = providerFiles;

    /// ### [Upstream resources](https://api.kde.org/attica-providermanager.html#providerFiles)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__ProviderManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn providerFiles(self: Attica__ProviderManager, allocator: std.mem.Allocator) []QUrl {
        const _arr: qtc.libqt_list = qtc.Attica__ProviderManager_ProviderFiles(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QUrl, _arr.len) catch @panic("Attica__ProviderManager.providerFiles: Memory allocation failed");
        const _data_val: [*]QtC.QUrl = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `providers` instead
    ///
    pub const Providers = providers;

    /// ### [Upstream resources](https://api.kde.org/attica-providermanager.html#providers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__ProviderManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn providers(self: Attica__ProviderManager, allocator: std.mem.Allocator) []Attica__Provider {
        const _arr: qtc.libqt_list = qtc.Attica__ProviderManager_Providers(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Attica__Provider, _arr.len) catch @panic("Attica__ProviderManager.providers: Memory allocation failed");
        const _data_val: [*]QtC.Attica__Provider = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `contains` instead
    ///
    pub const Contains = contains;

    /// ### [Upstream resources](https://api.kde.org/attica-providermanager.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__ProviderManager `
    ///
    /// ` provider: QUrl `
    ///
    pub fn contains(self: Attica__ProviderManager, provider: anytype) bool {
        comptime _ = @TypeOf(provider)._is_QUrl;
        return qtc.Attica__ProviderManager_Contains(@ptrCast(self.ptr), @ptrCast(provider.ptr));
    }

    /// ### DEPRECATED: Use `providerByUrl` instead
    ///
    pub const ProviderByUrl = providerByUrl;

    /// ### [Upstream resources](https://api.kde.org/attica-providermanager.html#providerByUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__ProviderManager `
    ///
    /// ` url: QUrl `
    ///
    pub fn providerByUrl(self: Attica__ProviderManager, url: anytype) Attica__Provider {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.Attica__ProviderManager_ProviderByUrl(@ptrCast(self.ptr), @ptrCast(url.ptr)) };
    }

    /// ### DEPRECATED: Use `providerFor` instead
    ///
    pub const ProviderFor = providerFor;

    /// ### [Upstream resources](https://api.kde.org/attica-providermanager.html#providerFor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__ProviderManager `
    ///
    /// ` url: QUrl `
    ///
    pub fn providerFor(self: Attica__ProviderManager, url: anytype) Attica__Provider {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.Attica__ProviderManager_ProviderFor(@ptrCast(self.ptr), @ptrCast(url.ptr)) };
    }

    /// ### DEPRECATED: Use `providerAdded` instead
    ///
    pub const ProviderAdded = providerAdded;

    /// ### [Upstream resources](https://api.kde.org/attica-providermanager.html#providerAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__ProviderManager `
    ///
    /// ` provider: Attica__Provider `
    ///
    pub fn providerAdded(self: Attica__ProviderManager, provider: anytype) void {
        comptime _ = @TypeOf(provider)._is_Attica__Provider;
        qtc.Attica__ProviderManager_ProviderAdded(@ptrCast(self.ptr), @ptrCast(provider.ptr));
    }

    /// ### DEPRECATED: Use `onProviderAdded` instead
    ///
    pub const OnProviderAdded = onProviderAdded;

    /// ### [Upstream resources](https://api.kde.org/attica-providermanager.html#providerAdded)
    ///
    /// ## Parameters:
    ///
    /// ` self: Attica__ProviderManager `
    ///
    /// ` callback: *const fn (self: Attica__ProviderManager, provider: Attica__Provider) callconv(.c) void `
    ///
    pub fn onProviderAdded(self: Attica__ProviderManager, callback: *const fn (Attica__ProviderManager, Attica__Provider) callconv(.c) void) void {
        qtc.Attica__ProviderManager_Connect_ProviderAdded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `defaultProvidersLoaded` instead
    ///
    pub const DefaultProvidersLoaded = defaultProvidersLoaded;

    /// ### [Upstream resources](https://api.kde.org/attica-providermanager.html#defaultProvidersLoaded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__ProviderManager `
    ///
    pub fn defaultProvidersLoaded(self: Attica__ProviderManager) void {
        qtc.Attica__ProviderManager_DefaultProvidersLoaded(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDefaultProvidersLoaded` instead
    ///
    pub const OnDefaultProvidersLoaded = onDefaultProvidersLoaded;

    /// ### [Upstream resources](https://api.kde.org/attica-providermanager.html#defaultProvidersLoaded)
    ///
    /// ## Parameters:
    ///
    /// ` self: Attica__ProviderManager `
    ///
    /// ` callback: *const fn (self: Attica__ProviderManager) callconv(.c) void `
    ///
    pub fn onDefaultProvidersLoaded(self: Attica__ProviderManager, callback: *const fn (Attica__ProviderManager) callconv(.c) void) void {
        qtc.Attica__ProviderManager_Connect_DefaultProvidersLoaded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `authenticationCredentialsMissing` instead
    ///
    pub const AuthenticationCredentialsMissing = authenticationCredentialsMissing;

    /// ### [Upstream resources](https://api.kde.org/attica-providermanager.html#authenticationCredentialsMissing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__ProviderManager `
    ///
    /// ` provider: Attica__Provider `
    ///
    pub fn authenticationCredentialsMissing(self: Attica__ProviderManager, provider: anytype) void {
        comptime _ = @TypeOf(provider)._is_Attica__Provider;
        qtc.Attica__ProviderManager_AuthenticationCredentialsMissing(@ptrCast(self.ptr), @ptrCast(provider.ptr));
    }

    /// ### DEPRECATED: Use `onAuthenticationCredentialsMissing` instead
    ///
    pub const OnAuthenticationCredentialsMissing = onAuthenticationCredentialsMissing;

    /// ### [Upstream resources](https://api.kde.org/attica-providermanager.html#authenticationCredentialsMissing)
    ///
    /// ## Parameters:
    ///
    /// ` self: Attica__ProviderManager `
    ///
    /// ` callback: *const fn (self: Attica__ProviderManager, provider: Attica__Provider) callconv(.c) void `
    ///
    pub fn onAuthenticationCredentialsMissing(self: Attica__ProviderManager, callback: *const fn (Attica__ProviderManager, Attica__Provider) callconv(.c) void) void {
        qtc.Attica__ProviderManager_Connect_AuthenticationCredentialsMissing(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `failedToLoad` instead
    ///
    pub const FailedToLoad = failedToLoad;

    /// ### [Upstream resources](https://api.kde.org/attica-providermanager.html#failedToLoad)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__ProviderManager `
    ///
    /// ` provider: QUrl `
    ///
    /// ` errorVal: qnetworkreply_enums.NetworkError `
    ///
    pub fn failedToLoad(self: Attica__ProviderManager, provider: anytype, errorVal: i32) void {
        comptime _ = @TypeOf(provider)._is_QUrl;
        qtc.Attica__ProviderManager_FailedToLoad(@ptrCast(self.ptr), @ptrCast(provider.ptr), @bitCast(errorVal));
    }

    /// ### DEPRECATED: Use `onFailedToLoad` instead
    ///
    pub const OnFailedToLoad = onFailedToLoad;

    /// ### [Upstream resources](https://api.kde.org/attica-providermanager.html#failedToLoad)
    ///
    /// ## Parameters:
    ///
    /// ` self: Attica__ProviderManager `
    ///
    /// ` callback: *const fn (self: Attica__ProviderManager, provider: QUrl, errorVal: qnetworkreply_enums.NetworkError) callconv(.c) void `
    ///
    pub fn onFailedToLoad(self: Attica__ProviderManager, callback: *const fn (Attica__ProviderManager, QUrl, i32) callconv(.c) void) void {
        qtc.Attica__ProviderManager_Connect_FailedToLoad(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__ProviderManager.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__ProviderManager.tr3: Memory allocation failed");
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: Attica__ProviderManager, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__ProviderManager.objectName: Memory allocation failed");
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: Attica__ProviderManager, name: []const u8) void {
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
    /// ` self: Attica__ProviderManager `
    ///
    pub fn isWidgetType(self: Attica__ProviderManager) bool {
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
    /// ` self: Attica__ProviderManager `
    ///
    pub fn isWindowType(self: Attica__ProviderManager) bool {
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
    /// ` self: Attica__ProviderManager `
    ///
    pub fn isQuickItemType(self: Attica__ProviderManager) bool {
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
    /// ` self: Attica__ProviderManager `
    ///
    pub fn signalsBlocked(self: Attica__ProviderManager) bool {
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: Attica__ProviderManager, b: bool) bool {
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
    /// ` self: Attica__ProviderManager `
    ///
    pub fn thread(self: Attica__ProviderManager) QThread {
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: Attica__ProviderManager, _thread: anytype) bool {
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: Attica__ProviderManager, interval: i32) i32 {
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: Attica__ProviderManager, time: i64) i32 {
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: Attica__ProviderManager, id: i32) void {
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: Attica__ProviderManager, id: i32) void {
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: Attica__ProviderManager, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("Attica__ProviderManager.children: Memory allocation failed");
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: Attica__ProviderManager, _parent: anytype) void {
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: Attica__ProviderManager, filterObj: anytype) void {
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: Attica__ProviderManager, obj: anytype) void {
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: Attica__ProviderManager, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: Attica__ProviderManager `
    ///
    pub fn disconnect3(self: Attica__ProviderManager) bool {
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: Attica__ProviderManager, receiver: anytype) bool {
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
    /// ` self: Attica__ProviderManager `
    ///
    pub fn dumpObjectTree(self: Attica__ProviderManager) void {
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
    /// ` self: Attica__ProviderManager `
    ///
    pub fn dumpObjectInfo(self: Attica__ProviderManager) void {
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: Attica__ProviderManager, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: Attica__ProviderManager, name: [:0]const u8) QVariant {
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: Attica__ProviderManager, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("Attica__ProviderManager.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("Attica__ProviderManager.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: Attica__ProviderManager `
    ///
    pub fn bindingStorage(self: Attica__ProviderManager) QBindingStorage {
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
    /// ` self: Attica__ProviderManager `
    ///
    pub fn bindingStorage2(self: Attica__ProviderManager) QBindingStorage {
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
    /// ` self: Attica__ProviderManager `
    ///
    pub fn destroyed(self: Attica__ProviderManager) void {
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` callback: *const fn (self: Attica__ProviderManager) callconv(.c) void `
    ///
    pub fn onDestroyed(self: Attica__ProviderManager, callback: *const fn (Attica__ProviderManager) callconv(.c) void) void {
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
    /// ` self: Attica__ProviderManager `
    ///
    pub fn parent(self: Attica__ProviderManager) QObject {
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: Attica__ProviderManager, classname: [:0]const u8) bool {
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
    /// ` self: Attica__ProviderManager `
    ///
    pub fn deleteLater(self: Attica__ProviderManager) void {
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: Attica__ProviderManager, interval: i32, timerType: i32) i32 {
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: Attica__ProviderManager, time: i64, timerType: i32) i32 {
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: Attica__ProviderManager, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: Attica__ProviderManager, signal: [:0]const u8) bool {
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: Attica__ProviderManager, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: Attica__ProviderManager, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: Attica__ProviderManager, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: Attica__ProviderManager, param1: anytype) void {
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` callback: *const fn (self: Attica__ProviderManager, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: Attica__ProviderManager, callback: *const fn (Attica__ProviderManager, QObject) callconv(.c) void) void {
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: Attica__ProviderManager, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.Attica__ProviderManager_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: Attica__ProviderManager, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.Attica__ProviderManager_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Attica__ProviderManager`
    ///
    /// ` callback: *const fn (self: Attica__ProviderManager, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: Attica__ProviderManager, callback: *const fn (Attica__ProviderManager, QEvent) callconv(.c) bool) void {
        qtc.Attica__ProviderManager_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: Attica__ProviderManager, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.Attica__ProviderManager_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: Attica__ProviderManager, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.Attica__ProviderManager_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Attica__ProviderManager`
    ///
    /// ` callback: *const fn (self: Attica__ProviderManager, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: Attica__ProviderManager, callback: *const fn (Attica__ProviderManager, QObject, QEvent) callconv(.c) bool) void {
        qtc.Attica__ProviderManager_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: Attica__ProviderManager, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.Attica__ProviderManager_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: Attica__ProviderManager, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.Attica__ProviderManager_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Attica__ProviderManager`
    ///
    /// ` callback: *const fn (self: Attica__ProviderManager, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: Attica__ProviderManager, callback: *const fn (Attica__ProviderManager, QTimerEvent) callconv(.c) void) void {
        qtc.Attica__ProviderManager_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: Attica__ProviderManager, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.Attica__ProviderManager_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: Attica__ProviderManager, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.Attica__ProviderManager_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Attica__ProviderManager`
    ///
    /// ` callback: *const fn (self: Attica__ProviderManager, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: Attica__ProviderManager, callback: *const fn (Attica__ProviderManager, QChildEvent) callconv(.c) void) void {
        qtc.Attica__ProviderManager_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: Attica__ProviderManager, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.Attica__ProviderManager_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: Attica__ProviderManager, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.Attica__ProviderManager_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Attica__ProviderManager`
    ///
    /// ` callback: *const fn (self: Attica__ProviderManager, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: Attica__ProviderManager, callback: *const fn (Attica__ProviderManager, QEvent) callconv(.c) void) void {
        qtc.Attica__ProviderManager_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: Attica__ProviderManager, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Attica__ProviderManager_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: Attica__ProviderManager, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Attica__ProviderManager_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Attica__ProviderManager`
    ///
    /// ` callback: *const fn (self: Attica__ProviderManager, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: Attica__ProviderManager, callback: *const fn (Attica__ProviderManager, QMetaMethod) callconv(.c) void) void {
        qtc.Attica__ProviderManager_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: Attica__ProviderManager, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Attica__ProviderManager_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: Attica__ProviderManager, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Attica__ProviderManager_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Attica__ProviderManager`
    ///
    /// ` callback: *const fn (self: Attica__ProviderManager, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: Attica__ProviderManager, callback: *const fn (Attica__ProviderManager, QMetaMethod) callconv(.c) void) void {
        qtc.Attica__ProviderManager_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Attica__ProviderManager `
    ///
    pub fn sender(self: Attica__ProviderManager) QObject {
        return .{ .ptr = qtc.Attica__ProviderManager_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: Attica__ProviderManager `
    ///
    pub fn superSender(self: Attica__ProviderManager) QObject {
        return .{ .ptr = qtc.Attica__ProviderManager_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: Attica__ProviderManager`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: Attica__ProviderManager, callback: *const fn () callconv(.c) QObject) void {
        qtc.Attica__ProviderManager_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Attica__ProviderManager `
    ///
    pub fn senderSignalIndex(self: Attica__ProviderManager) i32 {
        return qtc.Attica__ProviderManager_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: Attica__ProviderManager `
    ///
    pub fn superSenderSignalIndex(self: Attica__ProviderManager) i32 {
        return qtc.Attica__ProviderManager_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: Attica__ProviderManager`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: Attica__ProviderManager, callback: *const fn () callconv(.c) i32) void {
        qtc.Attica__ProviderManager_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: Attica__ProviderManager, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Attica__ProviderManager_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: Attica__ProviderManager, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Attica__ProviderManager_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: Attica__ProviderManager`
    ///
    /// ` callback: *const fn (self: Attica__ProviderManager, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: Attica__ProviderManager, callback: *const fn (Attica__ProviderManager, [*:0]const u8) callconv(.c) i32) void {
        qtc.Attica__ProviderManager_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: Attica__ProviderManager, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.Attica__ProviderManager_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: Attica__ProviderManager, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.Attica__ProviderManager_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Attica__ProviderManager`
    ///
    /// ` callback: *const fn (self: Attica__ProviderManager, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: Attica__ProviderManager, callback: *const fn (Attica__ProviderManager, QMetaMethod) callconv(.c) bool) void {
        qtc.Attica__ProviderManager_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` callback: *const fn (self: Attica__ProviderManager, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: Attica__ProviderManager, callback: *const fn (Attica__ProviderManager, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__ProviderManager `
    ///
    pub fn delete(self: Attica__ProviderManager) void {
        qtc.Attica__ProviderManager_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/attica-providermanager.html#public-types)
pub const enums = struct {
    pub const ProviderFlag = enum(i32) {
        pub const NoFlags: i32 = 0;
        pub const DisablePlugins: i32 = 1;
    };
};
