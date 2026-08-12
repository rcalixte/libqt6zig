const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KNSCore__Entry = @import("libqt6").KNSCore__Entry;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QDomElement = @import("libqt6").QDomElement;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const errorcode_enums = @import("liberrorcode.zig").enums;
const provider_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/knscore-provider.html)
pub const KNSCore__Provider = extern struct {
    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KNSCore__Provider,

    pub const _is_KNSCore__Provider = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KNSCore::Provider object in C++ memory
    ///
    pub fn new() KNSCore__Provider {
        return .{ .ptr = qtc.KNSCore__Provider_new() };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    pub fn metaObject(self: KNSCore__Provider) QMetaObject {
        return .{ .ptr = qtc.KNSCore__Provider_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: KNSCore__Provider, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KNSCore__Provider_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNSCore__Provider `
    ///
    pub fn superMetaObject(self: KNSCore__Provider) QMetaObject {
        return .{ .ptr = qtc.KNSCore__Provider_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KNSCore__Provider, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KNSCore__Provider_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: KNSCore__Provider, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KNSCore__Provider_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: KNSCore__Provider, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KNSCore__Provider_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: KNSCore__Provider, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KNSCore__Provider_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: KNSCore__Provider, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KNSCore__Provider_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: KNSCore__Provider, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KNSCore__Provider_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNSCore__Provider.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `id` instead
    ///
    pub const Id = id;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn id(self: KNSCore__Provider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Provider_Id(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNSCore__Provider.id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onId` instead
    ///
    pub const OnId = onId;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#id)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onId(self: KNSCore__Provider, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KNSCore__Provider_OnId(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superId` instead
    ///
    pub const SuperId = superId;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#id)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superId(self: KNSCore__Provider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Provider_SuperId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNSCore__Provider.id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setProviderXML` instead
    ///
    pub const SetProviderXML = setProviderXML;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#setProviderXML)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` xmldata: QDomElement `
    ///
    pub fn setProviderXML(self: KNSCore__Provider, xmldata: anytype) bool {
        comptime _ = @TypeOf(xmldata)._is_QDomElement;
        return qtc.KNSCore__Provider_SetProviderXML(@ptrCast(self.ptr), @ptrCast(xmldata.ptr));
    }

    /// ### DEPRECATED: Use `onSetProviderXML` instead
    ///
    pub const OnSetProviderXML = onSetProviderXML;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#setProviderXML)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: KNSCore__Provider, xmldata: QDomElement) callconv(.c) bool `
    ///
    pub fn onSetProviderXML(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, QDomElement) callconv(.c) bool) void {
        qtc.KNSCore__Provider_OnSetProviderXML(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetProviderXML` instead
    ///
    pub const SuperSetProviderXML = superSetProviderXML;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#setProviderXML)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` xmldata: QDomElement `
    ///
    pub fn superSetProviderXML(self: KNSCore__Provider, xmldata: anytype) bool {
        comptime _ = @TypeOf(xmldata)._is_QDomElement;
        return qtc.KNSCore__Provider_SuperSetProviderXML(@ptrCast(self.ptr), @ptrCast(xmldata.ptr));
    }

    /// ### DEPRECATED: Use `isInitialized` instead
    ///
    pub const IsInitialized = isInitialized;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#isInitialized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    pub fn isInitialized(self: KNSCore__Provider) bool {
        return qtc.KNSCore__Provider_IsInitialized(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsInitialized` instead
    ///
    pub const OnIsInitialized = onIsInitialized;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#isInitialized)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onIsInitialized(self: KNSCore__Provider, callback: *const fn () callconv(.c) bool) void {
        qtc.KNSCore__Provider_OnIsInitialized(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsInitialized` instead
    ///
    pub const SuperIsInitialized = superIsInitialized;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#isInitialized)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    pub fn superIsInitialized(self: KNSCore__Provider) bool {
        return qtc.KNSCore__Provider_SuperIsInitialized(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCachedEntries` instead
    ///
    pub const SetCachedEntries = setCachedEntries;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#setCachedEntries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` cachedEntries: []KNSCore__Entry `
    ///
    pub fn setCachedEntries(self: KNSCore__Provider, cachedEntries: []KNSCore__Entry) void {
        const cachedEntries_list = qtc.libqt_list{
            .len = cachedEntries.len,
            .data = @ptrCast(cachedEntries.ptr),
        };
        qtc.KNSCore__Provider_SetCachedEntries(@ptrCast(self.ptr), cachedEntries_list);
    }

    /// ### DEPRECATED: Use `onSetCachedEntries` instead
    ///
    pub const OnSetCachedEntries = onSetCachedEntries;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#setCachedEntries)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: KNSCore__Provider, cachedEntries: qtc.libqt_list ([]KNSCore__Entry)) callconv(.c) void `
    ///
    pub fn onSetCachedEntries(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, qtc.libqt_list) callconv(.c) void) void {
        qtc.KNSCore__Provider_OnSetCachedEntries(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetCachedEntries` instead
    ///
    pub const SuperSetCachedEntries = superSetCachedEntries;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#setCachedEntries)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` cachedEntries: []KNSCore__Entry `
    ///
    pub fn superSetCachedEntries(self: KNSCore__Provider, cachedEntries: []KNSCore__Entry) void {
        const cachedEntries_list = qtc.libqt_list{
            .len = cachedEntries.len,
            .data = @ptrCast(cachedEntries.ptr),
        };
        qtc.KNSCore__Provider_SuperSetCachedEntries(@ptrCast(self.ptr), cachedEntries_list);
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: KNSCore__Provider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Provider_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNSCore__Provider.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onName` instead
    ///
    pub const OnName = onName;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#name)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onName(self: KNSCore__Provider, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KNSCore__Provider_OnName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superName` instead
    ///
    pub const SuperName = superName;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#name)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superName(self: KNSCore__Provider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Provider_SuperName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNSCore__Provider.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `icon` instead
    ///
    pub const Icon = icon;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    pub fn icon(self: KNSCore__Provider) QUrl {
        return .{ .ptr = qtc.KNSCore__Provider_Icon(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onIcon` instead
    ///
    pub const OnIcon = onIcon;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#icon)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` callback: *const fn () callconv(.c) QUrl `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onIcon(self: KNSCore__Provider, callback: *const fn () callconv(.c) QUrl) void {
        qtc.KNSCore__Provider_OnIcon(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIcon` instead
    ///
    pub const SuperIcon = superIcon;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#icon)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    pub fn superIcon(self: KNSCore__Provider) QUrl {
        return .{ .ptr = qtc.KNSCore__Provider_SuperIcon(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `loadEntries` instead
    ///
    pub const LoadEntries = loadEntries;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#loadEntries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` request: KNSCore__Provider__SearchRequest `
    ///
    pub fn loadEntries(self: KNSCore__Provider, request: anytype) void {
        comptime _ = @TypeOf(request)._is_KNSCore__Provider__SearchRequest;
        qtc.KNSCore__Provider_LoadEntries(@ptrCast(self.ptr), @ptrCast(request.ptr));
    }

    /// ### DEPRECATED: Use `onLoadEntries` instead
    ///
    pub const OnLoadEntries = onLoadEntries;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#loadEntries)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: KNSCore__Provider, request: KNSCore__Provider__SearchRequest) callconv(.c) void `
    ///
    pub fn onLoadEntries(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, KNSCore__Provider__SearchRequest) callconv(.c) void) void {
        qtc.KNSCore__Provider_OnLoadEntries(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superLoadEntries` instead
    ///
    pub const SuperLoadEntries = superLoadEntries;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#loadEntries)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` request: KNSCore__Provider__SearchRequest `
    ///
    pub fn superLoadEntries(self: KNSCore__Provider, request: anytype) void {
        comptime _ = @TypeOf(request)._is_KNSCore__Provider__SearchRequest;
        qtc.KNSCore__Provider_SuperLoadEntries(@ptrCast(self.ptr), @ptrCast(request.ptr));
    }

    /// ### DEPRECATED: Use `loadEntryDetails` instead
    ///
    pub const LoadEntryDetails = loadEntryDetails;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#loadEntryDetails)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` param1: KNSCore__Entry `
    ///
    pub fn loadEntryDetails(self: KNSCore__Provider, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KNSCore__Entry;
        qtc.KNSCore__Provider_LoadEntryDetails(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onLoadEntryDetails` instead
    ///
    pub const OnLoadEntryDetails = onLoadEntryDetails;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#loadEntryDetails)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: KNSCore__Provider, param1: KNSCore__Entry) callconv(.c) void `
    ///
    pub fn onLoadEntryDetails(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, KNSCore__Entry) callconv(.c) void) void {
        qtc.KNSCore__Provider_OnLoadEntryDetails(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superLoadEntryDetails` instead
    ///
    pub const SuperLoadEntryDetails = superLoadEntryDetails;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#loadEntryDetails)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` param1: KNSCore__Entry `
    ///
    pub fn superLoadEntryDetails(self: KNSCore__Provider, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KNSCore__Entry;
        qtc.KNSCore__Provider_SuperLoadEntryDetails(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `loadPayloadLink` instead
    ///
    pub const LoadPayloadLink = loadPayloadLink;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#loadPayloadLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` entry: KNSCore__Entry `
    ///
    /// ` linkId: i32 `
    ///
    pub fn loadPayloadLink(self: KNSCore__Provider, entry: anytype, linkId: i32) void {
        comptime _ = @TypeOf(entry)._is_KNSCore__Entry;
        qtc.KNSCore__Provider_LoadPayloadLink(@ptrCast(self.ptr), @ptrCast(entry.ptr), @bitCast(linkId));
    }

    /// ### DEPRECATED: Use `onLoadPayloadLink` instead
    ///
    pub const OnLoadPayloadLink = onLoadPayloadLink;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#loadPayloadLink)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: KNSCore__Provider, entry: KNSCore__Entry, linkId: i32) callconv(.c) void `
    ///
    pub fn onLoadPayloadLink(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, KNSCore__Entry, i32) callconv(.c) void) void {
        qtc.KNSCore__Provider_OnLoadPayloadLink(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superLoadPayloadLink` instead
    ///
    pub const SuperLoadPayloadLink = superLoadPayloadLink;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#loadPayloadLink)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` entry: KNSCore__Entry `
    ///
    /// ` linkId: i32 `
    ///
    pub fn superLoadPayloadLink(self: KNSCore__Provider, entry: anytype, linkId: i32) void {
        comptime _ = @TypeOf(entry)._is_KNSCore__Entry;
        qtc.KNSCore__Provider_SuperLoadPayloadLink(@ptrCast(self.ptr), @ptrCast(entry.ptr), @bitCast(linkId));
    }

    /// ### DEPRECATED: Use `loadComments` instead
    ///
    pub const LoadComments = loadComments;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#loadComments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` param1: KNSCore__Entry `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: i32 `
    ///
    pub fn loadComments(self: KNSCore__Provider, param1: anytype, param2: i32, param3: i32) void {
        comptime _ = @TypeOf(param1)._is_KNSCore__Entry;
        qtc.KNSCore__Provider_LoadComments(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2), @bitCast(param3));
    }

    /// ### DEPRECATED: Use `onLoadComments` instead
    ///
    pub const OnLoadComments = onLoadComments;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#loadComments)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: KNSCore__Provider, param1: KNSCore__Entry, param2: i32, param3: i32) callconv(.c) void `
    ///
    pub fn onLoadComments(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, KNSCore__Entry, i32, i32) callconv(.c) void) void {
        qtc.KNSCore__Provider_OnLoadComments(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superLoadComments` instead
    ///
    pub const SuperLoadComments = superLoadComments;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#loadComments)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` param1: KNSCore__Entry `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: i32 `
    ///
    pub fn superLoadComments(self: KNSCore__Provider, param1: anytype, param2: i32, param3: i32) void {
        comptime _ = @TypeOf(param1)._is_KNSCore__Entry;
        qtc.KNSCore__Provider_SuperLoadComments(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2), @bitCast(param3));
    }

    /// ### DEPRECATED: Use `loadPerson` instead
    ///
    pub const LoadPerson = loadPerson;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#loadPerson)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn loadPerson(self: KNSCore__Provider, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.KNSCore__Provider_LoadPerson(@ptrCast(self.ptr), param1_str);
    }

    /// ### DEPRECATED: Use `onLoadPerson` instead
    ///
    pub const OnLoadPerson = onLoadPerson;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#loadPerson)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: KNSCore__Provider, param1: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onLoadPerson(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, [*:0]const u8) callconv(.c) void) void {
        qtc.KNSCore__Provider_OnLoadPerson(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superLoadPerson` instead
    ///
    pub const SuperLoadPerson = superLoadPerson;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#loadPerson)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn superLoadPerson(self: KNSCore__Provider, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.KNSCore__Provider_SuperLoadPerson(@ptrCast(self.ptr), param1_str);
    }

    /// ### DEPRECATED: Use `loadBasics` instead
    ///
    pub const LoadBasics = loadBasics;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#loadBasics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    pub fn loadBasics(self: KNSCore__Provider) void {
        qtc.KNSCore__Provider_LoadBasics(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onLoadBasics` instead
    ///
    pub const OnLoadBasics = onLoadBasics;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#loadBasics)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onLoadBasics(self: KNSCore__Provider, callback: *const fn () callconv(.c) void) void {
        qtc.KNSCore__Provider_OnLoadBasics(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superLoadBasics` instead
    ///
    pub const SuperLoadBasics = superLoadBasics;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#loadBasics)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    pub fn superLoadBasics(self: KNSCore__Provider) void {
        qtc.KNSCore__Provider_SuperLoadBasics(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `version` instead
    ///
    pub const Version = version;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#version)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn version(self: KNSCore__Provider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Provider_Version(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNSCore__Provider.version: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setVersion` instead
    ///
    pub const SetVersion = setVersion;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#setVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` _version: []const u8 `
    ///
    pub fn setVersion(self: KNSCore__Provider, _version: []const u8) void {
        const version_str = qtc.libqt_string{
            .len = _version.len,
            .data = _version.ptr,
        };
        qtc.KNSCore__Provider_SetVersion(@ptrCast(self.ptr), version_str);
    }

    /// ### DEPRECATED: Use `website` instead
    ///
    pub const Website = website;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#website)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    pub fn website(self: KNSCore__Provider) QUrl {
        return .{ .ptr = qtc.KNSCore__Provider_Website(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setWebsite` instead
    ///
    pub const SetWebsite = setWebsite;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#setWebsite)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` _website: QUrl `
    ///
    pub fn setWebsite(self: KNSCore__Provider, _website: anytype) void {
        comptime _ = @TypeOf(_website)._is_QUrl;
        qtc.KNSCore__Provider_SetWebsite(@ptrCast(self.ptr), @ptrCast(_website.ptr));
    }

    /// ### DEPRECATED: Use `host` instead
    ///
    pub const Host = host;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#host)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    pub fn host(self: KNSCore__Provider) QUrl {
        return .{ .ptr = qtc.KNSCore__Provider_Host(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setHost` instead
    ///
    pub const SetHost = setHost;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#setHost)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` _host: QUrl `
    ///
    pub fn setHost(self: KNSCore__Provider, _host: anytype) void {
        comptime _ = @TypeOf(_host)._is_QUrl;
        qtc.KNSCore__Provider_SetHost(@ptrCast(self.ptr), @ptrCast(_host.ptr));
    }

    /// ### DEPRECATED: Use `contactEmail` instead
    ///
    pub const ContactEmail = contactEmail;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#contactEmail)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn contactEmail(self: KNSCore__Provider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Provider_ContactEmail(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNSCore__Provider.contactEmail: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setContactEmail` instead
    ///
    pub const SetContactEmail = setContactEmail;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#setContactEmail)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` _contactEmail: []const u8 `
    ///
    pub fn setContactEmail(self: KNSCore__Provider, _contactEmail: []const u8) void {
        const contactEmail_str = qtc.libqt_string{
            .len = _contactEmail.len,
            .data = _contactEmail.ptr,
        };
        qtc.KNSCore__Provider_SetContactEmail(@ptrCast(self.ptr), contactEmail_str);
    }

    /// ### DEPRECATED: Use `supportsSsl` instead
    ///
    pub const SupportsSsl = supportsSsl;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#supportsSsl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    pub fn supportsSsl(self: KNSCore__Provider) bool {
        return qtc.KNSCore__Provider_SupportsSsl(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSupportsSsl` instead
    ///
    pub const SetSupportsSsl = setSupportsSsl;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#setSupportsSsl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` _supportsSsl: bool `
    ///
    pub fn setSupportsSsl(self: KNSCore__Provider, _supportsSsl: bool) void {
        qtc.KNSCore__Provider_SetSupportsSsl(@ptrCast(self.ptr), _supportsSsl);
    }

    /// ### DEPRECATED: Use `userCanVote` instead
    ///
    pub const UserCanVote = userCanVote;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#userCanVote)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    pub fn userCanVote(self: KNSCore__Provider) bool {
        return qtc.KNSCore__Provider_UserCanVote(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUserCanVote` instead
    ///
    pub const OnUserCanVote = onUserCanVote;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#userCanVote)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onUserCanVote(self: KNSCore__Provider, callback: *const fn () callconv(.c) bool) void {
        qtc.KNSCore__Provider_OnUserCanVote(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUserCanVote` instead
    ///
    pub const SuperUserCanVote = superUserCanVote;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#userCanVote)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    pub fn superUserCanVote(self: KNSCore__Provider) bool {
        return qtc.KNSCore__Provider_SuperUserCanVote(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `vote` instead
    ///
    pub const Vote = vote;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#vote)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` param1: KNSCore__Entry `
    ///
    /// ` param2: u32 `
    ///
    pub fn vote(self: KNSCore__Provider, param1: anytype, param2: u32) void {
        comptime _ = @TypeOf(param1)._is_KNSCore__Entry;
        qtc.KNSCore__Provider_Vote(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2));
    }

    /// ### DEPRECATED: Use `onVote` instead
    ///
    pub const OnVote = onVote;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#vote)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: KNSCore__Provider, param1: KNSCore__Entry, param2: u32) callconv(.c) void `
    ///
    pub fn onVote(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, KNSCore__Entry, u32) callconv(.c) void) void {
        qtc.KNSCore__Provider_OnVote(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superVote` instead
    ///
    pub const SuperVote = superVote;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#vote)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` param1: KNSCore__Entry `
    ///
    /// ` param2: u32 `
    ///
    pub fn superVote(self: KNSCore__Provider, param1: anytype, param2: u32) void {
        comptime _ = @TypeOf(param1)._is_KNSCore__Entry;
        qtc.KNSCore__Provider_SuperVote(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2));
    }

    /// ### DEPRECATED: Use `userCanBecomeFan` instead
    ///
    pub const UserCanBecomeFan = userCanBecomeFan;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#userCanBecomeFan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    pub fn userCanBecomeFan(self: KNSCore__Provider) bool {
        return qtc.KNSCore__Provider_UserCanBecomeFan(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUserCanBecomeFan` instead
    ///
    pub const OnUserCanBecomeFan = onUserCanBecomeFan;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#userCanBecomeFan)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onUserCanBecomeFan(self: KNSCore__Provider, callback: *const fn () callconv(.c) bool) void {
        qtc.KNSCore__Provider_OnUserCanBecomeFan(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUserCanBecomeFan` instead
    ///
    pub const SuperUserCanBecomeFan = superUserCanBecomeFan;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#userCanBecomeFan)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    pub fn superUserCanBecomeFan(self: KNSCore__Provider) bool {
        return qtc.KNSCore__Provider_SuperUserCanBecomeFan(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `becomeFan` instead
    ///
    pub const BecomeFan = becomeFan;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#becomeFan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` param1: KNSCore__Entry `
    ///
    pub fn becomeFan(self: KNSCore__Provider, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KNSCore__Entry;
        qtc.KNSCore__Provider_BecomeFan(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onBecomeFan` instead
    ///
    pub const OnBecomeFan = onBecomeFan;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#becomeFan)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: KNSCore__Provider, param1: KNSCore__Entry) callconv(.c) void `
    ///
    pub fn onBecomeFan(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, KNSCore__Entry) callconv(.c) void) void {
        qtc.KNSCore__Provider_OnBecomeFan(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superBecomeFan` instead
    ///
    pub const SuperBecomeFan = superBecomeFan;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#becomeFan)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` param1: KNSCore__Entry `
    ///
    pub fn superBecomeFan(self: KNSCore__Provider, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KNSCore__Entry;
        qtc.KNSCore__Provider_SuperBecomeFan(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `setTagFilter` instead
    ///
    pub const SetTagFilter = setTagFilter;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#setTagFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _tagFilter: []const []const u8 `
    ///
    pub fn setTagFilter(self: KNSCore__Provider, allocator: std.mem.Allocator, _tagFilter: []const []const u8) void {
        const tagFilter_arr = allocator.alloc(qtc.libqt_string, _tagFilter.len) catch @panic("KNSCore__Provider.setTagFilter: Memory allocation failed");
        defer allocator.free(tagFilter_arr);
        for (_tagFilter, 0.._tagFilter.len) |str_item, i|
            tagFilter_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const tagFilter_list = qtc.libqt_list{
            .len = _tagFilter.len,
            .data = tagFilter_arr.ptr,
        };
        qtc.KNSCore__Provider_SetTagFilter(@ptrCast(self.ptr), tagFilter_list);
    }

    /// ### DEPRECATED: Use `tagFilter` instead
    ///
    pub const TagFilter = tagFilter;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#tagFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn tagFilter(self: KNSCore__Provider, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KNSCore__Provider_TagFilter(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KNSCore__Provider.tagFilter: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KNSCore__Provider.tagFilter: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setDownloadTagFilter` instead
    ///
    pub const SetDownloadTagFilter = setDownloadTagFilter;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#setDownloadTagFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _downloadTagFilter: []const []const u8 `
    ///
    pub fn setDownloadTagFilter(self: KNSCore__Provider, allocator: std.mem.Allocator, _downloadTagFilter: []const []const u8) void {
        const downloadTagFilter_arr = allocator.alloc(qtc.libqt_string, _downloadTagFilter.len) catch @panic("KNSCore__Provider.setDownloadTagFilter: Memory allocation failed");
        defer allocator.free(downloadTagFilter_arr);
        for (_downloadTagFilter, 0.._downloadTagFilter.len) |str_item, i|
            downloadTagFilter_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const downloadTagFilter_list = qtc.libqt_list{
            .len = _downloadTagFilter.len,
            .data = downloadTagFilter_arr.ptr,
        };
        qtc.KNSCore__Provider_SetDownloadTagFilter(@ptrCast(self.ptr), downloadTagFilter_list);
    }

    /// ### DEPRECATED: Use `downloadTagFilter` instead
    ///
    pub const DownloadTagFilter = downloadTagFilter;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#downloadTagFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn downloadTagFilter(self: KNSCore__Provider, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KNSCore__Provider_DownloadTagFilter(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KNSCore__Provider.downloadTagFilter: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KNSCore__Provider.downloadTagFilter: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `providerInitialized` instead
    ///
    pub const ProviderInitialized = providerInitialized;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#providerInitialized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` param1: KNSCore__Provider `
    ///
    pub fn providerInitialized(self: KNSCore__Provider, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KNSCore__Provider;
        qtc.KNSCore__Provider_ProviderInitialized(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onProviderInitialized` instead
    ///
    pub const OnProviderInitialized = onProviderInitialized;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#providerInitialized)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: KNSCore__Provider, param1: KNSCore__Provider) callconv(.c) void `
    ///
    pub fn onProviderInitialized(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, KNSCore__Provider) callconv(.c) void) void {
        qtc.KNSCore__Provider_Connect_ProviderInitialized(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `loadingFinished` instead
    ///
    pub const LoadingFinished = loadingFinished;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#loadingFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` param1: KNSCore__Provider__SearchRequest `
    ///
    /// ` param2: []KNSCore__Entry `
    ///
    pub fn loadingFinished(self: KNSCore__Provider, param1: anytype, param2: []KNSCore__Entry) void {
        comptime _ = @TypeOf(param1)._is_KNSCore__Provider__SearchRequest;
        const param2_list = qtc.libqt_list{
            .len = param2.len,
            .data = @ptrCast(param2.ptr),
        };
        qtc.KNSCore__Provider_LoadingFinished(@ptrCast(self.ptr), @ptrCast(param1.ptr), param2_list);
    }

    /// ### DEPRECATED: Use `onLoadingFinished` instead
    ///
    pub const OnLoadingFinished = onLoadingFinished;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#loadingFinished)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: KNSCore__Provider, param1: KNSCore__Provider__SearchRequest, param2: qtc.libqt_list ([]KNSCore__Entry)) callconv(.c) void `
    ///
    pub fn onLoadingFinished(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, KNSCore__Provider__SearchRequest, qtc.libqt_list) callconv(.c) void) void {
        qtc.KNSCore__Provider_Connect_LoadingFinished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `loadingFailed` instead
    ///
    pub const LoadingFailed = loadingFailed;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#loadingFailed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` param1: KNSCore__Provider__SearchRequest `
    ///
    pub fn loadingFailed(self: KNSCore__Provider, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KNSCore__Provider__SearchRequest;
        qtc.KNSCore__Provider_LoadingFailed(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onLoadingFailed` instead
    ///
    pub const OnLoadingFailed = onLoadingFailed;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#loadingFailed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: KNSCore__Provider, param1: KNSCore__Provider__SearchRequest) callconv(.c) void `
    ///
    pub fn onLoadingFailed(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, KNSCore__Provider__SearchRequest) callconv(.c) void) void {
        qtc.KNSCore__Provider_Connect_LoadingFailed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `entryDetailsLoaded` instead
    ///
    pub const EntryDetailsLoaded = entryDetailsLoaded;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#entryDetailsLoaded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` param1: KNSCore__Entry `
    ///
    pub fn entryDetailsLoaded(self: KNSCore__Provider, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KNSCore__Entry;
        qtc.KNSCore__Provider_EntryDetailsLoaded(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onEntryDetailsLoaded` instead
    ///
    pub const OnEntryDetailsLoaded = onEntryDetailsLoaded;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#entryDetailsLoaded)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: KNSCore__Provider, param1: KNSCore__Entry) callconv(.c) void `
    ///
    pub fn onEntryDetailsLoaded(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, KNSCore__Entry) callconv(.c) void) void {
        qtc.KNSCore__Provider_Connect_EntryDetailsLoaded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `payloadLinkLoaded` instead
    ///
    pub const PayloadLinkLoaded = payloadLinkLoaded;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#payloadLinkLoaded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` param1: KNSCore__Entry `
    ///
    pub fn payloadLinkLoaded(self: KNSCore__Provider, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KNSCore__Entry;
        qtc.KNSCore__Provider_PayloadLinkLoaded(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onPayloadLinkLoaded` instead
    ///
    pub const OnPayloadLinkLoaded = onPayloadLinkLoaded;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#payloadLinkLoaded)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: KNSCore__Provider, param1: KNSCore__Entry) callconv(.c) void `
    ///
    pub fn onPayloadLinkLoaded(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, KNSCore__Entry) callconv(.c) void) void {
        qtc.KNSCore__Provider_Connect_PayloadLinkLoaded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `basicsLoaded` instead
    ///
    pub const BasicsLoaded = basicsLoaded;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#basicsLoaded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    pub fn basicsLoaded(self: KNSCore__Provider) void {
        qtc.KNSCore__Provider_BasicsLoaded(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onBasicsLoaded` instead
    ///
    pub const OnBasicsLoaded = onBasicsLoaded;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#basicsLoaded)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: KNSCore__Provider) callconv(.c) void `
    ///
    pub fn onBasicsLoaded(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider) callconv(.c) void) void {
        qtc.KNSCore__Provider_Connect_BasicsLoaded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `searchPresetsLoaded` instead
    ///
    pub const SearchPresetsLoaded = searchPresetsLoaded;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#searchPresetsLoaded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` presets: []KNSCore__Provider__SearchPreset `
    ///
    pub fn searchPresetsLoaded(self: KNSCore__Provider, presets: []KNSCore__Provider__SearchPreset) void {
        const presets_list = qtc.libqt_list{
            .len = presets.len,
            .data = @ptrCast(presets.ptr),
        };
        qtc.KNSCore__Provider_SearchPresetsLoaded(@ptrCast(self.ptr), presets_list);
    }

    /// ### DEPRECATED: Use `onSearchPresetsLoaded` instead
    ///
    pub const OnSearchPresetsLoaded = onSearchPresetsLoaded;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#searchPresetsLoaded)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: KNSCore__Provider, presets: qtc.libqt_list ([]KNSCore__Provider__SearchPreset)) callconv(.c) void `
    ///
    pub fn onSearchPresetsLoaded(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, qtc.libqt_list) callconv(.c) void) void {
        qtc.KNSCore__Provider_Connect_SearchPresetsLoaded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `signalInformation` instead
    ///
    pub const SignalInformation = signalInformation;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#signalInformation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn signalInformation(self: KNSCore__Provider, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.KNSCore__Provider_SignalInformation(@ptrCast(self.ptr), param1_str);
    }

    /// ### DEPRECATED: Use `onSignalInformation` instead
    ///
    pub const OnSignalInformation = onSignalInformation;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#signalInformation)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: KNSCore__Provider, param1: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onSignalInformation(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, [*:0]const u8) callconv(.c) void) void {
        qtc.KNSCore__Provider_Connect_SignalInformation(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `signalError` instead
    ///
    pub const SignalError = signalError;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#signalError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn signalError(self: KNSCore__Provider, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.KNSCore__Provider_SignalError(@ptrCast(self.ptr), param1_str);
    }

    /// ### DEPRECATED: Use `onSignalError` instead
    ///
    pub const OnSignalError = onSignalError;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#signalError)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: KNSCore__Provider, param1: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onSignalError(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, [*:0]const u8) callconv(.c) void) void {
        qtc.KNSCore__Provider_Connect_SignalError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `signalErrorCode` instead
    ///
    pub const SignalErrorCode = signalErrorCode;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#signalErrorCode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` errorCode: errorcode_enums.ErrorCode `
    ///
    /// ` message: []const u8 `
    ///
    /// ` metadata: QVariant `
    ///
    pub fn signalErrorCode(self: KNSCore__Provider, errorCode: i32, message: []const u8, metadata: anytype) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(metadata)._is_QVariant;
        qtc.KNSCore__Provider_SignalErrorCode(@ptrCast(self.ptr), @bitCast(errorCode), message_str, @ptrCast(metadata.ptr));
    }

    /// ### DEPRECATED: Use `onSignalErrorCode` instead
    ///
    pub const OnSignalErrorCode = onSignalErrorCode;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#signalErrorCode)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: KNSCore__Provider, errorCode: errorcode_enums.ErrorCode, message: [*:0]const u8, metadata: QVariant) callconv(.c) void `
    ///
    pub fn onSignalErrorCode(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, i32, [*:0]const u8, QVariant) callconv(.c) void) void {
        qtc.KNSCore__Provider_Connect_SignalErrorCode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `categoriesMetadataLoded` instead
    ///
    pub const CategoriesMetadataLoded = categoriesMetadataLoded;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#categoriesMetadataLoded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` categories: []KNSCore__Provider__CategoryMetadata `
    ///
    pub fn categoriesMetadataLoded(self: KNSCore__Provider, categories: []KNSCore__Provider__CategoryMetadata) void {
        const categories_list = qtc.libqt_list{
            .len = categories.len,
            .data = @ptrCast(categories.ptr),
        };
        qtc.KNSCore__Provider_CategoriesMetadataLoded(@ptrCast(self.ptr), categories_list);
    }

    /// ### DEPRECATED: Use `onCategoriesMetadataLoded` instead
    ///
    pub const OnCategoriesMetadataLoded = onCategoriesMetadataLoded;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#categoriesMetadataLoded)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: KNSCore__Provider, categories: qtc.libqt_list ([]KNSCore__Provider__CategoryMetadata)) callconv(.c) void `
    ///
    pub fn onCategoriesMetadataLoded(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, qtc.libqt_list) callconv(.c) void) void {
        qtc.KNSCore__Provider_Connect_CategoriesMetadataLoded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `tagFilterChanged` instead
    ///
    pub const TagFilterChanged = tagFilterChanged;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#tagFilterChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    pub fn tagFilterChanged(self: KNSCore__Provider) void {
        qtc.KNSCore__Provider_TagFilterChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onTagFilterChanged` instead
    ///
    pub const OnTagFilterChanged = onTagFilterChanged;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#tagFilterChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: KNSCore__Provider) callconv(.c) void `
    ///
    pub fn onTagFilterChanged(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider) callconv(.c) void) void {
        qtc.KNSCore__Provider_Connect_TagFilterChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `downloadTagFilterChanged` instead
    ///
    pub const DownloadTagFilterChanged = downloadTagFilterChanged;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#downloadTagFilterChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    pub fn downloadTagFilterChanged(self: KNSCore__Provider) void {
        qtc.KNSCore__Provider_DownloadTagFilterChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDownloadTagFilterChanged` instead
    ///
    pub const OnDownloadTagFilterChanged = onDownloadTagFilterChanged;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#downloadTagFilterChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: KNSCore__Provider) callconv(.c) void `
    ///
    pub fn onDownloadTagFilterChanged(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider) callconv(.c) void) void {
        qtc.KNSCore__Provider_Connect_DownloadTagFilterChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setName(self: KNSCore__Provider, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.KNSCore__Provider_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `onSetName` instead
    ///
    pub const OnSetName = onSetName;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#setName)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: KNSCore__Provider, name: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onSetName(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, [*:0]const u8) callconv(.c) void) void {
        qtc.KNSCore__Provider_OnSetName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetName` instead
    ///
    pub const SuperSetName = superSetName;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#setName)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn superSetName(self: KNSCore__Provider, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.KNSCore__Provider_SuperSetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `setIcon` instead
    ///
    pub const SetIcon = setIcon;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` _icon: QUrl `
    ///
    pub fn setIcon(self: KNSCore__Provider, _icon: anytype) void {
        comptime _ = @TypeOf(_icon)._is_QUrl;
        qtc.KNSCore__Provider_SetIcon(@ptrCast(self.ptr), @ptrCast(_icon.ptr));
    }

    /// ### DEPRECATED: Use `onSetIcon` instead
    ///
    pub const OnSetIcon = onSetIcon;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#setIcon)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: KNSCore__Provider, icon: QUrl) callconv(.c) void `
    ///
    pub fn onSetIcon(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, QUrl) callconv(.c) void) void {
        qtc.KNSCore__Provider_OnSetIcon(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetIcon` instead
    ///
    pub const SuperSetIcon = superSetIcon;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#setIcon)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` _icon: QUrl `
    ///
    pub fn superSetIcon(self: KNSCore__Provider, _icon: anytype) void {
        comptime _ = @TypeOf(_icon)._is_QUrl;
        qtc.KNSCore__Provider_SuperSetIcon(@ptrCast(self.ptr), @ptrCast(_icon.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNSCore__Provider.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNSCore__Provider.tr3: Memory allocation failed");
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KNSCore__Provider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNSCore__Provider.objectName: Memory allocation failed");
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setObjectName(self: KNSCore__Provider, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
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
    /// ` self: KNSCore__Provider `
    ///
    pub fn isWidgetType(self: KNSCore__Provider) bool {
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
    /// ` self: KNSCore__Provider `
    ///
    pub fn isWindowType(self: KNSCore__Provider) bool {
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
    /// ` self: KNSCore__Provider `
    ///
    pub fn isQuickItemType(self: KNSCore__Provider) bool {
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
    /// ` self: KNSCore__Provider `
    ///
    pub fn signalsBlocked(self: KNSCore__Provider) bool {
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KNSCore__Provider, b: bool) bool {
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
    /// ` self: KNSCore__Provider `
    ///
    pub fn thread(self: KNSCore__Provider) QThread {
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KNSCore__Provider, _thread: anytype) bool {
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KNSCore__Provider, interval: i32) i32 {
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KNSCore__Provider, time: i64) i32 {
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` _id: i32 `
    ///
    pub fn killTimer(self: KNSCore__Provider, _id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(_id));
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` _id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KNSCore__Provider, _id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(_id));
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KNSCore__Provider, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KNSCore__Provider.children: Memory allocation failed");
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KNSCore__Provider, _parent: anytype) void {
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KNSCore__Provider, filterObj: anytype) void {
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KNSCore__Provider, obj: anytype) void {
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KNSCore__Provider, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KNSCore__Provider `
    ///
    pub fn disconnect3(self: KNSCore__Provider) bool {
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KNSCore__Provider, receiver: anytype) bool {
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
    /// ` self: KNSCore__Provider `
    ///
    pub fn dumpObjectTree(self: KNSCore__Provider) void {
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
    /// ` self: KNSCore__Provider `
    ///
    pub fn dumpObjectInfo(self: KNSCore__Provider) void {
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` _name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KNSCore__Provider, _name: [:0]const u8, value: anytype) bool {
        const name_Cstring = _name.ptr;
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` _name: [:0]const u8 `
    ///
    pub fn property(self: KNSCore__Provider, _name: [:0]const u8) QVariant {
        const name_Cstring = _name.ptr;
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KNSCore__Provider, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KNSCore__Provider.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KNSCore__Provider.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KNSCore__Provider `
    ///
    pub fn bindingStorage(self: KNSCore__Provider) QBindingStorage {
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
    /// ` self: KNSCore__Provider `
    ///
    pub fn bindingStorage2(self: KNSCore__Provider) QBindingStorage {
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
    /// ` self: KNSCore__Provider `
    ///
    pub fn destroyed(self: KNSCore__Provider) void {
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: KNSCore__Provider) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider) callconv(.c) void) void {
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
    /// ` self: KNSCore__Provider `
    ///
    pub fn parent(self: KNSCore__Provider) QObject {
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KNSCore__Provider, classname: [:0]const u8) bool {
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
    /// ` self: KNSCore__Provider `
    ///
    pub fn deleteLater(self: KNSCore__Provider) void {
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KNSCore__Provider, interval: i32, timerType: i32) i32 {
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KNSCore__Provider, time: i64, timerType: i32) i32 {
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KNSCore__Provider, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KNSCore__Provider, signal: [:0]const u8) bool {
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KNSCore__Provider, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KNSCore__Provider, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KNSCore__Provider, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KNSCore__Provider, param1: anytype) void {
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: KNSCore__Provider, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, QObject) callconv(.c) void) void {
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: KNSCore__Provider, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KNSCore__Provider_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: KNSCore__Provider, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KNSCore__Provider_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KNSCore__Provider`
    ///
    /// ` callback: *const fn (self: KNSCore__Provider, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, QEvent) callconv(.c) bool) void {
        qtc.KNSCore__Provider_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KNSCore__Provider, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KNSCore__Provider_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: KNSCore__Provider, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KNSCore__Provider_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KNSCore__Provider`
    ///
    /// ` callback: *const fn (self: KNSCore__Provider, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, QObject, QEvent) callconv(.c) bool) void {
        qtc.KNSCore__Provider_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: KNSCore__Provider, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KNSCore__Provider_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: KNSCore__Provider, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KNSCore__Provider_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KNSCore__Provider`
    ///
    /// ` callback: *const fn (self: KNSCore__Provider, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, QTimerEvent) callconv(.c) void) void {
        qtc.KNSCore__Provider_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: KNSCore__Provider, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KNSCore__Provider_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: KNSCore__Provider, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KNSCore__Provider_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KNSCore__Provider`
    ///
    /// ` callback: *const fn (self: KNSCore__Provider, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, QChildEvent) callconv(.c) void) void {
        qtc.KNSCore__Provider_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: KNSCore__Provider, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KNSCore__Provider_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: KNSCore__Provider, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KNSCore__Provider_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KNSCore__Provider`
    ///
    /// ` callback: *const fn (self: KNSCore__Provider, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, QEvent) callconv(.c) void) void {
        qtc.KNSCore__Provider_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: KNSCore__Provider, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KNSCore__Provider_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: KNSCore__Provider, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KNSCore__Provider_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KNSCore__Provider`
    ///
    /// ` callback: *const fn (self: KNSCore__Provider, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, QMetaMethod) callconv(.c) void) void {
        qtc.KNSCore__Provider_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: KNSCore__Provider, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KNSCore__Provider_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: KNSCore__Provider, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KNSCore__Provider_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KNSCore__Provider`
    ///
    /// ` callback: *const fn (self: KNSCore__Provider, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, QMetaMethod) callconv(.c) void) void {
        qtc.KNSCore__Provider_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNSCore__Provider `
    ///
    pub fn sender(self: KNSCore__Provider) QObject {
        return .{ .ptr = qtc.KNSCore__Provider_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KNSCore__Provider `
    ///
    pub fn superSender(self: KNSCore__Provider) QObject {
        return .{ .ptr = qtc.KNSCore__Provider_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: KNSCore__Provider`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: KNSCore__Provider, callback: *const fn () callconv(.c) QObject) void {
        qtc.KNSCore__Provider_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNSCore__Provider `
    ///
    pub fn senderSignalIndex(self: KNSCore__Provider) i32 {
        return qtc.KNSCore__Provider_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KNSCore__Provider `
    ///
    pub fn superSenderSignalIndex(self: KNSCore__Provider) i32 {
        return qtc.KNSCore__Provider_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KNSCore__Provider`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: KNSCore__Provider, callback: *const fn () callconv(.c) i32) void {
        qtc.KNSCore__Provider_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: KNSCore__Provider, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KNSCore__Provider_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: KNSCore__Provider, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KNSCore__Provider_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KNSCore__Provider`
    ///
    /// ` callback: *const fn (self: KNSCore__Provider, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, [*:0]const u8) callconv(.c) i32) void {
        qtc.KNSCore__Provider_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: KNSCore__Provider, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KNSCore__Provider_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: KNSCore__Provider, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KNSCore__Provider_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KNSCore__Provider`
    ///
    /// ` callback: *const fn (self: KNSCore__Provider, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, QMetaMethod) callconv(.c) bool) void {
        qtc.KNSCore__Provider_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: KNSCore__Provider, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KNSCore__Provider `
    ///
    pub fn delete(self: KNSCore__Provider) void {
        qtc.KNSCore__Provider_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/knscore-provider-searchrequest.html)
pub const KNSCore__Provider__SearchRequest = extern struct {
    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchrequest.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KNSCore__Provider__SearchRequest,

    pub const _is_KNSCore__Provider__SearchRequest = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KNSCore::Provider::SearchRequest object in C++ memory
    ///
    pub fn new() KNSCore__Provider__SearchRequest {
        return .{ .ptr = qtc.KNSCore__Provider__SearchRequest_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KNSCore::Provider::SearchRequest object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KNSCore__Provider__SearchRequest `
    ///
    pub fn new2(param1: anytype) KNSCore__Provider__SearchRequest {
        comptime _ = @TypeOf(param1)._is_KNSCore__Provider__SearchRequest;
        return .{ .ptr = qtc.KNSCore__Provider__SearchRequest_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KNSCore::Provider::SearchRequest object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` sortMode_: provider_enums.SortMode `
    ///
    pub fn new3(sortMode_: i32) KNSCore__Provider__SearchRequest {
        return .{ .ptr = qtc.KNSCore__Provider__SearchRequest_new3(@bitCast(sortMode_)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new KNSCore::Provider::SearchRequest object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` sortMode_: provider_enums.SortMode `
    ///
    /// ` filter_: provider_enums.Filter `
    ///
    pub fn new4(sortMode_: i32, filter_: i32) KNSCore__Provider__SearchRequest {
        return .{ .ptr = qtc.KNSCore__Provider__SearchRequest_new4(@bitCast(sortMode_), @bitCast(filter_)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new KNSCore::Provider::SearchRequest object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` sortMode_: provider_enums.SortMode `
    ///
    /// ` filter_: provider_enums.Filter `
    ///
    /// ` searchTerm_: []const u8 `
    ///
    pub fn new5(sortMode_: i32, filter_: i32, searchTerm_: []const u8) KNSCore__Provider__SearchRequest {
        const searchTerm__str = qtc.libqt_string{
            .len = searchTerm_.len,
            .data = searchTerm_.ptr,
        };
        return .{ .ptr = qtc.KNSCore__Provider__SearchRequest_new5(@bitCast(sortMode_), @bitCast(filter_), searchTerm__str) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new KNSCore::Provider::SearchRequest object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` sortMode_: provider_enums.SortMode `
    ///
    /// ` filter_: provider_enums.Filter `
    ///
    /// ` searchTerm_: []const u8 `
    ///
    /// ` categories_: []const []const u8 `
    ///
    pub fn new6(allocator: std.mem.Allocator, sortMode_: i32, filter_: i32, searchTerm_: []const u8, categories_: []const []const u8) KNSCore__Provider__SearchRequest {
        const searchTerm__str = qtc.libqt_string{
            .len = searchTerm_.len,
            .data = searchTerm_.ptr,
        };
        const categories__arr = allocator.alloc(qtc.libqt_string, categories_.len) catch @panic("KNSCore__Provider__SearchRequest.new6: Memory allocation failed");
        defer allocator.free(categories__arr);
        for (categories_, 0..categories_.len) |str_item, i|
            categories__arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const categories__list = qtc.libqt_list{
            .len = categories_.len,
            .data = categories__arr.ptr,
        };
        return .{ .ptr = qtc.KNSCore__Provider__SearchRequest_new6(@bitCast(sortMode_), @bitCast(filter_), searchTerm__str, categories__list) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new KNSCore::Provider::SearchRequest object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` sortMode_: provider_enums.SortMode `
    ///
    /// ` filter_: provider_enums.Filter `
    ///
    /// ` searchTerm_: []const u8 `
    ///
    /// ` categories_: []const []const u8 `
    ///
    /// ` page_: i32 `
    ///
    pub fn new7(allocator: std.mem.Allocator, sortMode_: i32, filter_: i32, searchTerm_: []const u8, categories_: []const []const u8, page_: i32) KNSCore__Provider__SearchRequest {
        const searchTerm__str = qtc.libqt_string{
            .len = searchTerm_.len,
            .data = searchTerm_.ptr,
        };
        const categories__arr = allocator.alloc(qtc.libqt_string, categories_.len) catch @panic("KNSCore__Provider__SearchRequest.new7: Memory allocation failed");
        defer allocator.free(categories__arr);
        for (categories_, 0..categories_.len) |str_item, i|
            categories__arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const categories__list = qtc.libqt_list{
            .len = categories_.len,
            .data = categories__arr.ptr,
        };
        return .{ .ptr = qtc.KNSCore__Provider__SearchRequest_new7(@bitCast(sortMode_), @bitCast(filter_), searchTerm__str, categories__list, @bitCast(page_)) };
    }

    /// ### DEPRECATED: Use `new8` instead
    ///
    pub const New8 = new8;

    /// Allocate a new KNSCore::Provider::SearchRequest object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` sortMode_: provider_enums.SortMode `
    ///
    /// ` filter_: provider_enums.Filter `
    ///
    /// ` searchTerm_: []const u8 `
    ///
    /// ` categories_: []const []const u8 `
    ///
    /// ` page_: i32 `
    ///
    /// ` pageSize_: i32 `
    ///
    pub fn new8(allocator: std.mem.Allocator, sortMode_: i32, filter_: i32, searchTerm_: []const u8, categories_: []const []const u8, page_: i32, pageSize_: i32) KNSCore__Provider__SearchRequest {
        const searchTerm__str = qtc.libqt_string{
            .len = searchTerm_.len,
            .data = searchTerm_.ptr,
        };
        const categories__arr = allocator.alloc(qtc.libqt_string, categories_.len) catch @panic("KNSCore__Provider__SearchRequest.new8: Memory allocation failed");
        defer allocator.free(categories__arr);
        for (categories_, 0..categories_.len) |str_item, i|
            categories__arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const categories__list = qtc.libqt_list{
            .len = categories_.len,
            .data = categories__arr.ptr,
        };
        return .{ .ptr = qtc.KNSCore__Provider__SearchRequest_new8(@bitCast(sortMode_), @bitCast(filter_), searchTerm__str, categories__list, @bitCast(page_), @bitCast(pageSize_)) };
    }

    /// ### DEPRECATED: Use `sortMode` instead
    ///
    pub const SortMode = sortMode;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchrequest.html#sortMode-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__SearchRequest `
    ///
    /// ## Returns:
    ///
    /// ` provider_enums.SortMode `
    ///
    pub fn sortMode(self: KNSCore__Provider__SearchRequest) i32 {
        return qtc.KNSCore__Provider__SearchRequest_SortMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSortMode` instead
    ///
    pub const SetSortMode = setSortMode;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchrequest.html#sortMode-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__SearchRequest `
    ///
    /// ` _sortMode: provider_enums.SortMode `
    ///
    pub fn setSortMode(self: KNSCore__Provider__SearchRequest, _sortMode: i32) void {
        qtc.KNSCore__Provider__SearchRequest_SetSortMode(@ptrCast(self.ptr), @bitCast(_sortMode));
    }

    /// ### DEPRECATED: Use `filter` instead
    ///
    pub const Filter = filter;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchrequest.html#filter-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__SearchRequest `
    ///
    /// ## Returns:
    ///
    /// ` provider_enums.Filter `
    ///
    pub fn filter(self: KNSCore__Provider__SearchRequest) i32 {
        return qtc.KNSCore__Provider__SearchRequest_Filter(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFilter` instead
    ///
    pub const SetFilter = setFilter;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchrequest.html#filter-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__SearchRequest `
    ///
    /// ` _filter: provider_enums.Filter `
    ///
    pub fn setFilter(self: KNSCore__Provider__SearchRequest, _filter: i32) void {
        qtc.KNSCore__Provider__SearchRequest_SetFilter(@ptrCast(self.ptr), @bitCast(_filter));
    }

    /// ### DEPRECATED: Use `searchTerm` instead
    ///
    pub const SearchTerm = searchTerm;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchrequest.html#searchTerm-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__SearchRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn searchTerm(self: KNSCore__Provider__SearchRequest, allocator: std.mem.Allocator) []const u8 {
        var searchTerm_str = qtc.KNSCore__Provider__SearchRequest_SearchTerm(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&searchTerm_str);
        const searchTerm_ret = allocator.alloc(u8, searchTerm_str.len) catch @panic("KNSCore__Provider__SearchRequest.searchTerm: Memory allocation failed");
        @memcpy(searchTerm_ret, searchTerm_str.data[0..searchTerm_str.len]);
        return searchTerm_ret;
    }

    /// ### DEPRECATED: Use `setSearchTerm` instead
    ///
    pub const SetSearchTerm = setSearchTerm;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchrequest.html#searchTerm-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__SearchRequest `
    ///
    /// ` _searchTerm: []const u8 `
    ///
    pub fn setSearchTerm(self: KNSCore__Provider__SearchRequest, _searchTerm: []const u8) void {
        const searchTerm_str = qtc.libqt_string{
            .len = _searchTerm.len,
            .data = _searchTerm.ptr,
        };
        qtc.KNSCore__Provider__SearchRequest_SetSearchTerm(@ptrCast(self.ptr), searchTerm_str);
    }

    /// ### DEPRECATED: Use `categories` instead
    ///
    pub const Categories = categories;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchrequest.html#categories-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__SearchRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn categories(self: KNSCore__Provider__SearchRequest, allocator: std.mem.Allocator) []const []const u8 {
        const categories_arr: qtc.libqt_list = qtc.KNSCore__Provider__SearchRequest_Categories(@ptrCast(self.ptr));
        var categories_str: [*]qtc.libqt_string = @ptrCast(@alignCast(categories_arr.data));
        defer {
            for (0..categories_arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&categories_str[i]));
            qtc.libqt_free(categories_arr.data);
        }
        const categories_ret = allocator.alloc([]const u8, categories_arr.len) catch @panic("KNSCore__Provider__SearchRequest.categories: Memory allocation failed");
        for (0..categories_arr.len) |i| {
            const categories_data_val = categories_str[i];
            const categories_buf = allocator.alloc(u8, categories_data_val.len) catch @panic("KNSCore__Provider__SearchRequest.categories: Memory allocation failed");
            @memcpy(categories_buf, categories_data_val.data[0..categories_data_val.len]);
            categories_ret[i] = categories_buf;
        }
        return categories_ret;
    }

    /// ### DEPRECATED: Use `setCategories` instead
    ///
    pub const SetCategories = setCategories;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchrequest.html#categories-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__SearchRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _categories: []const []const u8 `
    ///
    pub fn setCategories(self: KNSCore__Provider__SearchRequest, allocator: std.mem.Allocator, _categories: []const []const u8) void {
        const categories_arr = allocator.alloc(qtc.libqt_string, _categories.len) catch @panic("KNSCore__Provider__SearchRequest.setCategories: Memory allocation failed");
        defer allocator.free(categories_arr);
        for (_categories, 0.._categories.len) |str_item, i|
            categories_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const categories_list = qtc.libqt_list{
            .len = _categories.len,
            .data = categories_arr.ptr,
        };
        qtc.KNSCore__Provider__SearchRequest_SetCategories(@ptrCast(self.ptr), categories_list);
    }

    /// ### DEPRECATED: Use `page` instead
    ///
    pub const Page = page;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchrequest.html#page-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__SearchRequest `
    ///
    pub fn page(self: KNSCore__Provider__SearchRequest) i32 {
        return qtc.KNSCore__Provider__SearchRequest_Page(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPage` instead
    ///
    pub const SetPage = setPage;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchrequest.html#page-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__SearchRequest `
    ///
    /// ` _page: i32 `
    ///
    pub fn setPage(self: KNSCore__Provider__SearchRequest, _page: i32) void {
        qtc.KNSCore__Provider__SearchRequest_SetPage(@ptrCast(self.ptr), @bitCast(_page));
    }

    /// ### DEPRECATED: Use `pageSize` instead
    ///
    pub const PageSize = pageSize;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchrequest.html#pageSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__SearchRequest `
    ///
    pub fn pageSize(self: KNSCore__Provider__SearchRequest) i32 {
        return qtc.KNSCore__Provider__SearchRequest_PageSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPageSize` instead
    ///
    pub const SetPageSize = setPageSize;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchrequest.html#pageSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__SearchRequest `
    ///
    /// ` _pageSize: i32 `
    ///
    pub fn setPageSize(self: KNSCore__Provider__SearchRequest, _pageSize: i32) void {
        qtc.KNSCore__Provider__SearchRequest_SetPageSize(@ptrCast(self.ptr), @bitCast(_pageSize));
    }

    /// ### DEPRECATED: Use `hashForRequest` instead
    ///
    pub const HashForRequest = hashForRequest;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchrequest.html#hashForRequest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__SearchRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn hashForRequest(self: KNSCore__Provider__SearchRequest, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Provider__SearchRequest_HashForRequest(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNSCore__Provider__SearchRequest.hashForRequest: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchrequest.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__SearchRequest `
    ///
    /// ` other: KNSCore__Provider__SearchRequest `
    ///
    pub fn operatorEqual(self: KNSCore__Provider__SearchRequest, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_KNSCore__Provider__SearchRequest;
        return qtc.KNSCore__Provider__SearchRequest_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchrequest.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__SearchRequest `
    ///
    /// ` param1: KNSCore__Provider__SearchRequest `
    ///
    pub fn operatorAssign(self: KNSCore__Provider__SearchRequest, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KNSCore__Provider__SearchRequest;
        qtc.KNSCore__Provider__SearchRequest_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KNSCore__Provider__SearchRequest `
    ///
    pub fn delete(self: KNSCore__Provider__SearchRequest) void {
        qtc.KNSCore__Provider__SearchRequest_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/knscore-provider-categorymetadata.html)
pub const KNSCore__Provider__CategoryMetadata = extern struct {
    /// ### [Upstream resources](https://api.kde.org/knscore-provider-categorymetadata.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KNSCore__Provider__CategoryMetadata,

    pub const _is_KNSCore__Provider__CategoryMetadata = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KNSCore::Provider::CategoryMetadata object in C++ memory
    ///
    pub fn new() KNSCore__Provider__CategoryMetadata {
        return .{ .ptr = qtc.KNSCore__Provider__CategoryMetadata_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KNSCore::Provider::CategoryMetadata object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KNSCore__Provider__CategoryMetadata `
    ///
    pub fn new2(param1: anytype) KNSCore__Provider__CategoryMetadata {
        comptime _ = @TypeOf(param1)._is_KNSCore__Provider__CategoryMetadata;
        return .{ .ptr = qtc.KNSCore__Provider__CategoryMetadata_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `id` instead
    ///
    pub const Id = id;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-categorymetadata.html#id-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__CategoryMetadata `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn id(self: KNSCore__Provider__CategoryMetadata, allocator: std.mem.Allocator) []const u8 {
        var id_str = qtc.KNSCore__Provider__CategoryMetadata_Id(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&id_str);
        const id_ret = allocator.alloc(u8, id_str.len) catch @panic("KNSCore__Provider__CategoryMetadata.id: Memory allocation failed");
        @memcpy(id_ret, id_str.data[0..id_str.len]);
        return id_ret;
    }

    /// ### DEPRECATED: Use `setId` instead
    ///
    pub const SetId = setId;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-categorymetadata.html#id-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__CategoryMetadata `
    ///
    /// ` _id: []const u8 `
    ///
    pub fn setId(self: KNSCore__Provider__CategoryMetadata, _id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = _id.len,
            .data = _id.ptr,
        };
        qtc.KNSCore__Provider__CategoryMetadata_SetId(@ptrCast(self.ptr), id_str);
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-categorymetadata.html#name-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__CategoryMetadata `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: KNSCore__Provider__CategoryMetadata, allocator: std.mem.Allocator) []const u8 {
        var name_str = qtc.KNSCore__Provider__CategoryMetadata_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&name_str);
        const name_ret = allocator.alloc(u8, name_str.len) catch @panic("KNSCore__Provider__CategoryMetadata.name: Memory allocation failed");
        @memcpy(name_ret, name_str.data[0..name_str.len]);
        return name_ret;
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-categorymetadata.html#name-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__CategoryMetadata `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setName(self: KNSCore__Provider__CategoryMetadata, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.KNSCore__Provider__CategoryMetadata_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `displayName` instead
    ///
    pub const DisplayName = displayName;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-categorymetadata.html#displayName-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__CategoryMetadata `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn displayName(self: KNSCore__Provider__CategoryMetadata, allocator: std.mem.Allocator) []const u8 {
        var displayName_str = qtc.KNSCore__Provider__CategoryMetadata_DisplayName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&displayName_str);
        const displayName_ret = allocator.alloc(u8, displayName_str.len) catch @panic("KNSCore__Provider__CategoryMetadata.displayName: Memory allocation failed");
        @memcpy(displayName_ret, displayName_str.data[0..displayName_str.len]);
        return displayName_ret;
    }

    /// ### DEPRECATED: Use `setDisplayName` instead
    ///
    pub const SetDisplayName = setDisplayName;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-categorymetadata.html#displayName-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__CategoryMetadata `
    ///
    /// ` _displayName: []const u8 `
    ///
    pub fn setDisplayName(self: KNSCore__Provider__CategoryMetadata, _displayName: []const u8) void {
        const displayName_str = qtc.libqt_string{
            .len = _displayName.len,
            .data = _displayName.ptr,
        };
        qtc.KNSCore__Provider__CategoryMetadata_SetDisplayName(@ptrCast(self.ptr), displayName_str);
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-categorymetadata.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__CategoryMetadata `
    ///
    /// ` param1: KNSCore__Provider__CategoryMetadata `
    ///
    pub fn operatorAssign(self: KNSCore__Provider__CategoryMetadata, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KNSCore__Provider__CategoryMetadata;
        qtc.KNSCore__Provider__CategoryMetadata_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KNSCore__Provider__CategoryMetadata `
    ///
    pub fn delete(self: KNSCore__Provider__CategoryMetadata) void {
        qtc.KNSCore__Provider__CategoryMetadata_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/knscore-provider-searchpreset.html)
pub const KNSCore__Provider__SearchPreset = extern struct {
    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchpreset.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KNSCore__Provider__SearchPreset,

    pub const _is_KNSCore__Provider__SearchPreset = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KNSCore::Provider::SearchPreset object in C++ memory
    ///
    pub fn new() KNSCore__Provider__SearchPreset {
        return .{ .ptr = qtc.KNSCore__Provider__SearchPreset_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KNSCore::Provider::SearchPreset object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KNSCore__Provider__SearchPreset `
    ///
    pub fn new2(param1: anytype) KNSCore__Provider__SearchPreset {
        comptime _ = @TypeOf(param1)._is_KNSCore__Provider__SearchPreset;
        return .{ .ptr = qtc.KNSCore__Provider__SearchPreset_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `request` instead
    ///
    pub const Request = request;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchpreset.html#request-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__SearchPreset `
    ///
    pub fn request(self: KNSCore__Provider__SearchPreset) KNSCore__Provider__SearchRequest {
        return .{ .ptr = qtc.KNSCore__Provider__SearchPreset_Request(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRequest` instead
    ///
    pub const SetRequest = setRequest;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchpreset.html#request-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__SearchPreset `
    ///
    /// ` _request: KNSCore__Provider__SearchRequest `
    ///
    pub fn setRequest(self: KNSCore__Provider__SearchPreset, _request: anytype) void {
        comptime _ = @TypeOf(_request)._is_KNSCore__Provider__SearchRequest;
        qtc.KNSCore__Provider__SearchPreset_SetRequest(@ptrCast(self.ptr), @ptrCast(_request.ptr));
    }

    /// ### DEPRECATED: Use `displayName` instead
    ///
    pub const DisplayName = displayName;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchpreset.html#displayName-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__SearchPreset `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn displayName(self: KNSCore__Provider__SearchPreset, allocator: std.mem.Allocator) []const u8 {
        var displayName_str = qtc.KNSCore__Provider__SearchPreset_DisplayName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&displayName_str);
        const displayName_ret = allocator.alloc(u8, displayName_str.len) catch @panic("KNSCore__Provider__SearchPreset.displayName: Memory allocation failed");
        @memcpy(displayName_ret, displayName_str.data[0..displayName_str.len]);
        return displayName_ret;
    }

    /// ### DEPRECATED: Use `setDisplayName` instead
    ///
    pub const SetDisplayName = setDisplayName;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchpreset.html#displayName-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__SearchPreset `
    ///
    /// ` _displayName: []const u8 `
    ///
    pub fn setDisplayName(self: KNSCore__Provider__SearchPreset, _displayName: []const u8) void {
        const displayName_str = qtc.libqt_string{
            .len = _displayName.len,
            .data = _displayName.ptr,
        };
        qtc.KNSCore__Provider__SearchPreset_SetDisplayName(@ptrCast(self.ptr), displayName_str);
    }

    /// ### DEPRECATED: Use `iconName` instead
    ///
    pub const IconName = iconName;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchpreset.html#iconName-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__SearchPreset `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn iconName(self: KNSCore__Provider__SearchPreset, allocator: std.mem.Allocator) []const u8 {
        var iconName_str = qtc.KNSCore__Provider__SearchPreset_IconName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&iconName_str);
        const iconName_ret = allocator.alloc(u8, iconName_str.len) catch @panic("KNSCore__Provider__SearchPreset.iconName: Memory allocation failed");
        @memcpy(iconName_ret, iconName_str.data[0..iconName_str.len]);
        return iconName_ret;
    }

    /// ### DEPRECATED: Use `setIconName` instead
    ///
    pub const SetIconName = setIconName;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchpreset.html#iconName-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__SearchPreset `
    ///
    /// ` _iconName: []const u8 `
    ///
    pub fn setIconName(self: KNSCore__Provider__SearchPreset, _iconName: []const u8) void {
        const iconName_str = qtc.libqt_string{
            .len = _iconName.len,
            .data = _iconName.ptr,
        };
        qtc.KNSCore__Provider__SearchPreset_SetIconName(@ptrCast(self.ptr), iconName_str);
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchpreset.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__SearchPreset `
    ///
    /// ## Returns:
    ///
    /// ` provider_enums.SearchPresetTypes `
    ///
    pub fn type0(self: KNSCore__Provider__SearchPreset) i32 {
        return qtc.KNSCore__Provider__SearchPreset_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setType` instead
    ///
    pub const SetType = setType;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchpreset.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__SearchPreset `
    ///
    /// ` _type: provider_enums.SearchPresetTypes `
    ///
    pub fn setType(self: KNSCore__Provider__SearchPreset, _type: i32) void {
        qtc.KNSCore__Provider__SearchPreset_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

    /// ### DEPRECATED: Use `providerId` instead
    ///
    pub const ProviderId = providerId;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchpreset.html#providerId-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__SearchPreset `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn providerId(self: KNSCore__Provider__SearchPreset, allocator: std.mem.Allocator) []const u8 {
        var providerId_str = qtc.KNSCore__Provider__SearchPreset_ProviderId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&providerId_str);
        const providerId_ret = allocator.alloc(u8, providerId_str.len) catch @panic("KNSCore__Provider__SearchPreset.providerId: Memory allocation failed");
        @memcpy(providerId_ret, providerId_str.data[0..providerId_str.len]);
        return providerId_ret;
    }

    /// ### DEPRECATED: Use `setProviderId` instead
    ///
    pub const SetProviderId = setProviderId;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchpreset.html#providerId-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__SearchPreset `
    ///
    /// ` _providerId: []const u8 `
    ///
    pub fn setProviderId(self: KNSCore__Provider__SearchPreset, _providerId: []const u8) void {
        const providerId_str = qtc.libqt_string{
            .len = _providerId.len,
            .data = _providerId.ptr,
        };
        qtc.KNSCore__Provider__SearchPreset_SetProviderId(@ptrCast(self.ptr), providerId_str);
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchpreset.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__SearchPreset `
    ///
    /// ` param1: KNSCore__Provider__SearchPreset `
    ///
    pub fn operatorAssign(self: KNSCore__Provider__SearchPreset, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KNSCore__Provider__SearchPreset;
        qtc.KNSCore__Provider__SearchPreset_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KNSCore__Provider__SearchPreset `
    ///
    pub fn delete(self: KNSCore__Provider__SearchPreset) void {
        qtc.KNSCore__Provider__SearchPreset_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/knscore-provider.html#public-types)
pub const enums = struct {
    pub const SortMode = enum(i32) {
        pub const Newest: i32 = 0;
        pub const Alphabetical: i32 = 1;
        pub const Rating: i32 = 2;
        pub const Downloads: i32 = 3;
    };

    pub const Filter = enum(i32) {
        pub const None: i32 = 0;
        pub const Installed: i32 = 1;
        pub const Updates: i32 = 2;
        pub const ExactEntryId: i32 = 3;
    };

    pub const SearchPresetTypes = enum(i32) {
        pub const NoPresetType: i32 = 0;
        pub const GoBack: i32 = 1;
        pub const Root: i32 = 2;
        pub const Start: i32 = 3;
        pub const Popular: i32 = 4;
        pub const Featured: i32 = 5;
        pub const Recommended: i32 = 6;
        pub const Shelf: i32 = 7;
        pub const Subscription: i32 = 8;
        pub const New: i32 = 9;
        pub const FolderUp: i32 = 10;
        pub const AllEntries: i32 = 11;
    };
};
