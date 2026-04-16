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

    /// New constructs a new Attica::ProviderManager object.
    ///
    pub fn New() Attica__ProviderManager {
        return .{ .ptr = qtc.Attica__ProviderManager_new() };
    }

    /// New2 constructs a new Attica::ProviderManager object.
    ///
    /// ## Parameter(s):
    ///
    /// ` flags: *const flag of providermanager_enums.ProviderFlag `
    ///
    pub fn New2(flags: *const i32) Attica__ProviderManager {
        return .{ .ptr = qtc.Attica__ProviderManager_new2(@ptrCast(flags)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__ProviderManager `
    ///
    pub fn MetaObject(self: Attica__ProviderManager) QMetaObject {
        return .{ .ptr = qtc.Attica__ProviderManager_MetaObject(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMetaObject(self: Attica__ProviderManager, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.Attica__ProviderManager_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Attica__ProviderManager `
    ///
    pub fn SuperMetaObject(self: Attica__ProviderManager) QMetaObject {
        return .{ .ptr = qtc.Attica__ProviderManager_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: Attica__ProviderManager `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: Attica__ProviderManager, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Attica__ProviderManager_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Attica__ProviderManager `
    ///
    /// ` callback: *const fn (self: Attica__ProviderManager, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: Attica__ProviderManager, callback: *const fn (Attica__ProviderManager, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.Attica__ProviderManager_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__ProviderManager `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: Attica__ProviderManager, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Attica__ProviderManager_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

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
    pub fn Metacall(self: Attica__ProviderManager, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Attica__ProviderManager_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Attica__ProviderManager `
    ///
    /// ` callback: *const fn (self: Attica__ProviderManager, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: Attica__ProviderManager, callback: *const fn (Attica__ProviderManager, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.Attica__ProviderManager_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

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
    pub fn SuperMetacall(self: Attica__ProviderManager, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Attica__ProviderManager_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__providermanager.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-providermanager.html#loadDefaultProviders)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__ProviderManager `
    ///
    pub fn LoadDefaultProviders(self: Attica__ProviderManager) void {
        qtc.Attica__ProviderManager_LoadDefaultProviders(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-providermanager.html#defaultProviderFiles)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__ProviderManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DefaultProviderFiles(self: Attica__ProviderManager, allocator: std.mem.Allocator) []QUrl {
        const _arr: qtc.libqt_list = qtc.Attica__ProviderManager_DefaultProviderFiles(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QUrl, _arr.len) catch @panic("attica__providermanager.DefaultProviderFiles: Memory allocation failed");
        const _data: [*]QtC.QUrl = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-providermanager.html#addProviderFileToDefaultProviders)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__ProviderManager `
    ///
    /// ` url: QUrl `
    ///
    pub fn AddProviderFileToDefaultProviders(self: Attica__ProviderManager, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.Attica__ProviderManager_AddProviderFileToDefaultProviders(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-providermanager.html#removeProviderFileFromDefaultProviders)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__ProviderManager `
    ///
    /// ` url: QUrl `
    ///
    pub fn RemoveProviderFileFromDefaultProviders(self: Attica__ProviderManager, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.Attica__ProviderManager_RemoveProviderFileFromDefaultProviders(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-providermanager.html#setAuthenticationSuppressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__ProviderManager `
    ///
    /// ` suppressed: bool `
    ///
    pub fn SetAuthenticationSuppressed(self: Attica__ProviderManager, suppressed: bool) void {
        qtc.Attica__ProviderManager_SetAuthenticationSuppressed(@ptrCast(self.ptr), suppressed);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-providermanager.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__ProviderManager `
    ///
    pub fn Clear(self: Attica__ProviderManager) void {
        qtc.Attica__ProviderManager_Clear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-providermanager.html#addProviderFromXml)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__ProviderManager `
    ///
    /// ` providerXml: []const u8 `
    ///
    pub fn AddProviderFromXml(self: Attica__ProviderManager, providerXml: []const u8) void {
        const providerXml_str = qtc.libqt_string{
            .len = providerXml.len,
            .data = providerXml.ptr,
        };
        qtc.Attica__ProviderManager_AddProviderFromXml(@ptrCast(self.ptr), providerXml_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-providermanager.html#addProviderFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__ProviderManager `
    ///
    /// ` file: QUrl `
    ///
    pub fn AddProviderFile(self: Attica__ProviderManager, file: anytype) void {
        comptime _ = @TypeOf(file)._is_QUrl;
        qtc.Attica__ProviderManager_AddProviderFile(@ptrCast(self.ptr), @ptrCast(file.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-providermanager.html#providerFiles)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__ProviderManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ProviderFiles(self: Attica__ProviderManager, allocator: std.mem.Allocator) []QUrl {
        const _arr: qtc.libqt_list = qtc.Attica__ProviderManager_ProviderFiles(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QUrl, _arr.len) catch @panic("attica__providermanager.ProviderFiles: Memory allocation failed");
        const _data: [*]QtC.QUrl = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-providermanager.html#providers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__ProviderManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Providers(self: Attica__ProviderManager, allocator: std.mem.Allocator) []Attica__Provider {
        const _arr: qtc.libqt_list = qtc.Attica__ProviderManager_Providers(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Attica__Provider, _arr.len) catch @panic("attica__providermanager.Providers: Memory allocation failed");
        const _data: [*]QtC.Attica__Provider = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-providermanager.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__ProviderManager `
    ///
    /// ` provider: QUrl `
    ///
    pub fn Contains(self: Attica__ProviderManager, provider: anytype) bool {
        comptime _ = @TypeOf(provider)._is_QUrl;
        return qtc.Attica__ProviderManager_Contains(@ptrCast(self.ptr), @ptrCast(provider.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-providermanager.html#providerByUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__ProviderManager `
    ///
    /// ` url: QUrl `
    ///
    pub fn ProviderByUrl(self: Attica__ProviderManager, url: anytype) Attica__Provider {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.Attica__ProviderManager_ProviderByUrl(@ptrCast(self.ptr), @ptrCast(url.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-providermanager.html#providerFor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__ProviderManager `
    ///
    /// ` url: QUrl `
    ///
    pub fn ProviderFor(self: Attica__ProviderManager, url: anytype) Attica__Provider {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.Attica__ProviderManager_ProviderFor(@ptrCast(self.ptr), @ptrCast(url.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-providermanager.html#providerAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__ProviderManager `
    ///
    /// ` provider: Attica__Provider `
    ///
    pub fn ProviderAdded(self: Attica__ProviderManager, provider: anytype) void {
        comptime _ = @TypeOf(provider)._is_Attica__Provider;
        qtc.Attica__ProviderManager_ProviderAdded(@ptrCast(self.ptr), @ptrCast(provider.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-providermanager.html#providerAdded)
    ///
    /// ## Parameters:
    ///
    /// ` self: Attica__ProviderManager `
    ///
    /// ` callback: *const fn (self: Attica__ProviderManager, provider: Attica__Provider) callconv(.c) void `
    ///
    pub fn OnProviderAdded(self: Attica__ProviderManager, callback: *const fn (Attica__ProviderManager, Attica__Provider) callconv(.c) void) void {
        qtc.Attica__ProviderManager_Connect_ProviderAdded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-providermanager.html#defaultProvidersLoaded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__ProviderManager `
    ///
    pub fn DefaultProvidersLoaded(self: Attica__ProviderManager) void {
        qtc.Attica__ProviderManager_DefaultProvidersLoaded(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-providermanager.html#defaultProvidersLoaded)
    ///
    /// ## Parameters:
    ///
    /// ` self: Attica__ProviderManager `
    ///
    /// ` callback: *const fn (self: Attica__ProviderManager) callconv(.c) void `
    ///
    pub fn OnDefaultProvidersLoaded(self: Attica__ProviderManager, callback: *const fn (Attica__ProviderManager) callconv(.c) void) void {
        qtc.Attica__ProviderManager_Connect_DefaultProvidersLoaded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-providermanager.html#authenticationCredentialsMissing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__ProviderManager `
    ///
    /// ` provider: Attica__Provider `
    ///
    pub fn AuthenticationCredentialsMissing(self: Attica__ProviderManager, provider: anytype) void {
        comptime _ = @TypeOf(provider)._is_Attica__Provider;
        qtc.Attica__ProviderManager_AuthenticationCredentialsMissing(@ptrCast(self.ptr), @ptrCast(provider.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-providermanager.html#authenticationCredentialsMissing)
    ///
    /// ## Parameters:
    ///
    /// ` self: Attica__ProviderManager `
    ///
    /// ` callback: *const fn (self: Attica__ProviderManager, provider: Attica__Provider) callconv(.c) void `
    ///
    pub fn OnAuthenticationCredentialsMissing(self: Attica__ProviderManager, callback: *const fn (Attica__ProviderManager, Attica__Provider) callconv(.c) void) void {
        qtc.Attica__ProviderManager_Connect_AuthenticationCredentialsMissing(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn FailedToLoad(self: Attica__ProviderManager, provider: anytype, errorVal: i32) void {
        comptime _ = @TypeOf(provider)._is_QUrl;
        qtc.Attica__ProviderManager_FailedToLoad(@ptrCast(self.ptr), @ptrCast(provider.ptr), @bitCast(errorVal));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-providermanager.html#failedToLoad)
    ///
    /// ## Parameters:
    ///
    /// ` self: Attica__ProviderManager `
    ///
    /// ` callback: *const fn (self: Attica__ProviderManager, provider: QUrl, errorVal: qnetworkreply_enums.NetworkError) callconv(.c) void `
    ///
    pub fn OnFailedToLoad(self: Attica__ProviderManager, callback: *const fn (Attica__ProviderManager, QUrl, i32) callconv(.c) void) void {
        qtc.Attica__ProviderManager_Connect_FailedToLoad(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__providermanager.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__providermanager.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn ObjectName(self: Attica__ProviderManager, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__providermanager.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetObjectName(self: Attica__ProviderManager, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__ProviderManager `
    ///
    pub fn IsWidgetType(self: Attica__ProviderManager) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__ProviderManager `
    ///
    pub fn IsWindowType(self: Attica__ProviderManager) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__ProviderManager `
    ///
    pub fn IsQuickItemType(self: Attica__ProviderManager) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__ProviderManager `
    ///
    pub fn SignalsBlocked(self: Attica__ProviderManager) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

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
    pub fn BlockSignals(self: Attica__ProviderManager, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__ProviderManager `
    ///
    pub fn Thread(self: Attica__ProviderManager) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__ProviderManager `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: Attica__ProviderManager, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

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
    pub fn StartTimer(self: Attica__ProviderManager, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

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
    pub fn StartTimer2(self: Attica__ProviderManager, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

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
    pub fn KillTimer(self: Attica__ProviderManager, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn KillTimer2(self: Attica__ProviderManager, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn Children(self: Attica__ProviderManager, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("attica__providermanager.Children: Memory allocation failed");
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: Attica__ProviderManager, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

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
    pub fn InstallEventFilter(self: Attica__ProviderManager, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

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
    pub fn RemoveEventFilter(self: Attica__ProviderManager, obj: anytype) void {
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: Attica__ProviderManager, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: Attica__ProviderManager `
    ///
    pub fn Disconnect3(self: Attica__ProviderManager) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

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
    pub fn Disconnect4(self: Attica__ProviderManager, receiver: anytype) bool {
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
    /// ` self: Attica__ProviderManager `
    ///
    pub fn DumpObjectTree(self: Attica__ProviderManager) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__ProviderManager `
    ///
    pub fn DumpObjectInfo(self: Attica__ProviderManager) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

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
    pub fn SetProperty(self: Attica__ProviderManager, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: Attica__ProviderManager, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

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
    pub fn DynamicPropertyNames(self: Attica__ProviderManager, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("attica__providermanager.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("attica__providermanager.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: Attica__ProviderManager `
    ///
    pub fn BindingStorage(self: Attica__ProviderManager) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__ProviderManager `
    ///
    pub fn BindingStorage2(self: Attica__ProviderManager) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__ProviderManager `
    ///
    pub fn Destroyed(self: Attica__ProviderManager) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

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
    pub fn OnDestroyed(self: Attica__ProviderManager, callback: *const fn (Attica__ProviderManager) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__ProviderManager `
    ///
    pub fn Parent(self: Attica__ProviderManager) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

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
    pub fn Inherits(self: Attica__ProviderManager, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__ProviderManager `
    ///
    pub fn DeleteLater(self: Attica__ProviderManager) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

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
    pub fn StartTimer22(self: Attica__ProviderManager, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

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
    pub fn StartTimer23(self: Attica__ProviderManager, time: i64, timerType: i32) i32 {
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: Attica__ProviderManager, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: Attica__ProviderManager, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn Disconnect22(self: Attica__ProviderManager, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: Attica__ProviderManager, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: Attica__ProviderManager, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: Attica__ProviderManager, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnDestroyed1(self: Attica__ProviderManager, callback: *const fn (Attica__ProviderManager, QObject) callconv(.c) void) void {
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: Attica__ProviderManager, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.Attica__ProviderManager_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: Attica__ProviderManager, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.Attica__ProviderManager_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEvent(self: Attica__ProviderManager, callback: *const fn (Attica__ProviderManager, QEvent) callconv(.c) bool) void {
        qtc.Attica__ProviderManager_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: Attica__ProviderManager, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.Attica__ProviderManager_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: Attica__ProviderManager, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.Attica__ProviderManager_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEventFilter(self: Attica__ProviderManager, callback: *const fn (Attica__ProviderManager, QObject, QEvent) callconv(.c) bool) void {
        qtc.Attica__ProviderManager_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: Attica__ProviderManager, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.Attica__ProviderManager_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: Attica__ProviderManager, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.Attica__ProviderManager_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnTimerEvent(self: Attica__ProviderManager, callback: *const fn (Attica__ProviderManager, QTimerEvent) callconv(.c) void) void {
        qtc.Attica__ProviderManager_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: Attica__ProviderManager, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.Attica__ProviderManager_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: Attica__ProviderManager, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.Attica__ProviderManager_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnChildEvent(self: Attica__ProviderManager, callback: *const fn (Attica__ProviderManager, QChildEvent) callconv(.c) void) void {
        qtc.Attica__ProviderManager_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: Attica__ProviderManager, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.Attica__ProviderManager_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: Attica__ProviderManager, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.Attica__ProviderManager_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnCustomEvent(self: Attica__ProviderManager, callback: *const fn (Attica__ProviderManager, QEvent) callconv(.c) void) void {
        qtc.Attica__ProviderManager_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ConnectNotify(self: Attica__ProviderManager, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Attica__ProviderManager_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: Attica__ProviderManager, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Attica__ProviderManager_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnConnectNotify(self: Attica__ProviderManager, callback: *const fn (Attica__ProviderManager, QMetaMethod) callconv(.c) void) void {
        qtc.Attica__ProviderManager_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DisconnectNotify(self: Attica__ProviderManager, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Attica__ProviderManager_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: Attica__ProviderManager, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Attica__ProviderManager_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnDisconnectNotify(self: Attica__ProviderManager, callback: *const fn (Attica__ProviderManager, QMetaMethod) callconv(.c) void) void {
        qtc.Attica__ProviderManager_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Sender(self: Attica__ProviderManager) QObject {
        return .{ .ptr = qtc.Attica__ProviderManager_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: Attica__ProviderManager `
    ///
    pub fn SuperSender(self: Attica__ProviderManager) QObject {
        return .{ .ptr = qtc.Attica__ProviderManager_SuperSender(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSender(self: Attica__ProviderManager, callback: *const fn () callconv(.c) QObject) void {
        qtc.Attica__ProviderManager_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SenderSignalIndex(self: Attica__ProviderManager) i32 {
        return qtc.Attica__ProviderManager_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: Attica__ProviderManager `
    ///
    pub fn SuperSenderSignalIndex(self: Attica__ProviderManager) i32 {
        return qtc.Attica__ProviderManager_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

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
    pub fn OnSenderSignalIndex(self: Attica__ProviderManager, callback: *const fn () callconv(.c) i32) void {
        qtc.Attica__ProviderManager_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Receivers(self: Attica__ProviderManager, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Attica__ProviderManager_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: Attica__ProviderManager, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Attica__ProviderManager_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn OnReceivers(self: Attica__ProviderManager, callback: *const fn (Attica__ProviderManager, [*:0]const u8) callconv(.c) i32) void {
        qtc.Attica__ProviderManager_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IsSignalConnected(self: Attica__ProviderManager, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.Attica__ProviderManager_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Attica__ProviderManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: Attica__ProviderManager, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.Attica__ProviderManager_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnIsSignalConnected(self: Attica__ProviderManager, callback: *const fn (Attica__ProviderManager, QMetaMethod) callconv(.c) bool) void {
        qtc.Attica__ProviderManager_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn OnObjectNameChanged(self: Attica__ProviderManager, callback: *const fn (Attica__ProviderManager, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__ProviderManager `
    ///
    pub fn Delete(self: Attica__ProviderManager) void {
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
