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

    /// New constructs a new KNSCore::Provider object.
    ///
    pub fn New() KNSCore__Provider {
        return .{ .ptr = qtc.KNSCore__Provider_new() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    pub fn MetaObject(self: KNSCore__Provider) QMetaObject {
        return .{ .ptr = qtc.KNSCore__Provider_MetaObject(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMetaObject(self: KNSCore__Provider, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KNSCore__Provider_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNSCore__Provider `
    ///
    pub fn SuperMetaObject(self: KNSCore__Provider) QMetaObject {
        return .{ .ptr = qtc.KNSCore__Provider_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KNSCore__Provider, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KNSCore__Provider_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: KNSCore__Provider, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KNSCore__Provider_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KNSCore__Provider, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KNSCore__Provider_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

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
    pub fn Metacall(self: KNSCore__Provider, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KNSCore__Provider_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: KNSCore__Provider, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KNSCore__Provider_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

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
    pub fn SuperMetacall(self: KNSCore__Provider, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KNSCore__Provider_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore__provider.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Id(self: KNSCore__Provider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Provider_Id(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore__provider.Id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#id)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnId(self: KNSCore__Provider, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KNSCore__Provider_OnId(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperId` instead
    ///
    pub const QBaseId = SuperId;

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
    pub fn SuperId(self: KNSCore__Provider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Provider_SuperId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore__provider.Id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#setProviderXML)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` xmldata: QDomElement `
    ///
    pub fn SetProviderXML(self: KNSCore__Provider, xmldata: anytype) bool {
        comptime _ = @TypeOf(xmldata)._is_QDomElement;
        return qtc.KNSCore__Provider_SetProviderXML(@ptrCast(self.ptr), @ptrCast(xmldata.ptr));
    }

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
    pub fn OnSetProviderXML(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, QDomElement) callconv(.c) bool) void {
        qtc.KNSCore__Provider_OnSetProviderXML(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetProviderXML` instead
    ///
    pub const QBaseSetProviderXML = SuperSetProviderXML;

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
    pub fn SuperSetProviderXML(self: KNSCore__Provider, xmldata: anytype) bool {
        comptime _ = @TypeOf(xmldata)._is_QDomElement;
        return qtc.KNSCore__Provider_SuperSetProviderXML(@ptrCast(self.ptr), @ptrCast(xmldata.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#isInitialized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    pub fn IsInitialized(self: KNSCore__Provider) bool {
        return qtc.KNSCore__Provider_IsInitialized(@ptrCast(self.ptr));
    }

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
    pub fn OnIsInitialized(self: KNSCore__Provider, callback: *const fn () callconv(.c) bool) void {
        qtc.KNSCore__Provider_OnIsInitialized(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsInitialized` instead
    ///
    pub const QBaseIsInitialized = SuperIsInitialized;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#isInitialized)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    pub fn SuperIsInitialized(self: KNSCore__Provider) bool {
        return qtc.KNSCore__Provider_SuperIsInitialized(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#setCachedEntries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` cachedEntries: []KNSCore__Entry `
    ///
    pub fn SetCachedEntries(self: KNSCore__Provider, cachedEntries: []KNSCore__Entry) void {
        const cachedEntries_list = qtc.libqt_list{
            .len = cachedEntries.len,
            .data = @ptrCast(cachedEntries.ptr),
        };
        qtc.KNSCore__Provider_SetCachedEntries(@ptrCast(self.ptr), cachedEntries_list);
    }

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
    pub fn OnSetCachedEntries(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, qtc.libqt_list) callconv(.c) void) void {
        qtc.KNSCore__Provider_OnSetCachedEntries(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetCachedEntries` instead
    ///
    pub const QBaseSetCachedEntries = SuperSetCachedEntries;

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
    pub fn SuperSetCachedEntries(self: KNSCore__Provider, cachedEntries: []KNSCore__Entry) void {
        const cachedEntries_list = qtc.libqt_list{
            .len = cachedEntries.len,
            .data = @ptrCast(cachedEntries.ptr),
        };
        qtc.KNSCore__Provider_SuperSetCachedEntries(@ptrCast(self.ptr), cachedEntries_list);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: KNSCore__Provider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Provider_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore__provider.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#name)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnName(self: KNSCore__Provider, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KNSCore__Provider_OnName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperName` instead
    ///
    pub const QBaseName = SuperName;

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
    pub fn SuperName(self: KNSCore__Provider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Provider_SuperName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore__provider.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    pub fn Icon(self: KNSCore__Provider) QUrl {
        return .{ .ptr = qtc.KNSCore__Provider_Icon(@ptrCast(self.ptr)) };
    }

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
    pub fn OnIcon(self: KNSCore__Provider, callback: *const fn () callconv(.c) QUrl) void {
        qtc.KNSCore__Provider_OnIcon(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIcon` instead
    ///
    pub const QBaseIcon = SuperIcon;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#icon)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    pub fn SuperIcon(self: KNSCore__Provider) QUrl {
        return .{ .ptr = qtc.KNSCore__Provider_SuperIcon(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#loadEntries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` request: KNSCore__Provider__SearchRequest `
    ///
    pub fn LoadEntries(self: KNSCore__Provider, request: anytype) void {
        comptime _ = @TypeOf(request)._is_KNSCore__Provider__SearchRequest;
        qtc.KNSCore__Provider_LoadEntries(@ptrCast(self.ptr), @ptrCast(request.ptr));
    }

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
    pub fn OnLoadEntries(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, KNSCore__Provider__SearchRequest) callconv(.c) void) void {
        qtc.KNSCore__Provider_OnLoadEntries(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperLoadEntries` instead
    ///
    pub const QBaseLoadEntries = SuperLoadEntries;

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
    pub fn SuperLoadEntries(self: KNSCore__Provider, request: anytype) void {
        comptime _ = @TypeOf(request)._is_KNSCore__Provider__SearchRequest;
        qtc.KNSCore__Provider_SuperLoadEntries(@ptrCast(self.ptr), @ptrCast(request.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#loadEntryDetails)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` param1: KNSCore__Entry `
    ///
    pub fn LoadEntryDetails(self: KNSCore__Provider, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KNSCore__Entry;
        qtc.KNSCore__Provider_LoadEntryDetails(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnLoadEntryDetails(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, KNSCore__Entry) callconv(.c) void) void {
        qtc.KNSCore__Provider_OnLoadEntryDetails(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperLoadEntryDetails` instead
    ///
    pub const QBaseLoadEntryDetails = SuperLoadEntryDetails;

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
    pub fn SuperLoadEntryDetails(self: KNSCore__Provider, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KNSCore__Entry;
        qtc.KNSCore__Provider_SuperLoadEntryDetails(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn LoadPayloadLink(self: KNSCore__Provider, entry: anytype, linkId: i32) void {
        comptime _ = @TypeOf(entry)._is_KNSCore__Entry;
        qtc.KNSCore__Provider_LoadPayloadLink(@ptrCast(self.ptr), @ptrCast(entry.ptr), @bitCast(linkId));
    }

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
    pub fn OnLoadPayloadLink(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, KNSCore__Entry, i32) callconv(.c) void) void {
        qtc.KNSCore__Provider_OnLoadPayloadLink(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperLoadPayloadLink` instead
    ///
    pub const QBaseLoadPayloadLink = SuperLoadPayloadLink;

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
    pub fn SuperLoadPayloadLink(self: KNSCore__Provider, entry: anytype, linkId: i32) void {
        comptime _ = @TypeOf(entry)._is_KNSCore__Entry;
        qtc.KNSCore__Provider_SuperLoadPayloadLink(@ptrCast(self.ptr), @ptrCast(entry.ptr), @bitCast(linkId));
    }

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
    pub fn LoadComments(self: KNSCore__Provider, param1: anytype, param2: i32, param3: i32) void {
        comptime _ = @TypeOf(param1)._is_KNSCore__Entry;
        qtc.KNSCore__Provider_LoadComments(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2), @bitCast(param3));
    }

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
    pub fn OnLoadComments(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, KNSCore__Entry, i32, i32) callconv(.c) void) void {
        qtc.KNSCore__Provider_OnLoadComments(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperLoadComments` instead
    ///
    pub const QBaseLoadComments = SuperLoadComments;

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
    pub fn SuperLoadComments(self: KNSCore__Provider, param1: anytype, param2: i32, param3: i32) void {
        comptime _ = @TypeOf(param1)._is_KNSCore__Entry;
        qtc.KNSCore__Provider_SuperLoadComments(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2), @bitCast(param3));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#loadPerson)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn LoadPerson(self: KNSCore__Provider, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.KNSCore__Provider_LoadPerson(@ptrCast(self.ptr), param1_str);
    }

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
    pub fn OnLoadPerson(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, [*:0]const u8) callconv(.c) void) void {
        qtc.KNSCore__Provider_OnLoadPerson(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperLoadPerson` instead
    ///
    pub const QBaseLoadPerson = SuperLoadPerson;

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
    pub fn SuperLoadPerson(self: KNSCore__Provider, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.KNSCore__Provider_SuperLoadPerson(@ptrCast(self.ptr), param1_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#loadBasics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    pub fn LoadBasics(self: KNSCore__Provider) void {
        qtc.KNSCore__Provider_LoadBasics(@ptrCast(self.ptr));
    }

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
    pub fn OnLoadBasics(self: KNSCore__Provider, callback: *const fn () callconv(.c) void) void {
        qtc.KNSCore__Provider_OnLoadBasics(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperLoadBasics` instead
    ///
    pub const QBaseLoadBasics = SuperLoadBasics;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#loadBasics)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    pub fn SuperLoadBasics(self: KNSCore__Provider) void {
        qtc.KNSCore__Provider_SuperLoadBasics(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#version)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Version(self: KNSCore__Provider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Provider_Version(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore__provider.Version: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#setVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` version: []const u8 `
    ///
    pub fn SetVersion(self: KNSCore__Provider, version: []const u8) void {
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        qtc.KNSCore__Provider_SetVersion(@ptrCast(self.ptr), version_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#website)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    pub fn Website(self: KNSCore__Provider) QUrl {
        return .{ .ptr = qtc.KNSCore__Provider_Website(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#setWebsite)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` website: QUrl `
    ///
    pub fn SetWebsite(self: KNSCore__Provider, website: anytype) void {
        comptime _ = @TypeOf(website)._is_QUrl;
        qtc.KNSCore__Provider_SetWebsite(@ptrCast(self.ptr), @ptrCast(website.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#host)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    pub fn Host(self: KNSCore__Provider) QUrl {
        return .{ .ptr = qtc.KNSCore__Provider_Host(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#setHost)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` host: QUrl `
    ///
    pub fn SetHost(self: KNSCore__Provider, host: anytype) void {
        comptime _ = @TypeOf(host)._is_QUrl;
        qtc.KNSCore__Provider_SetHost(@ptrCast(self.ptr), @ptrCast(host.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#contactEmail)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ContactEmail(self: KNSCore__Provider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Provider_ContactEmail(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore__provider.ContactEmail: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#setContactEmail)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` contactEmail: []const u8 `
    ///
    pub fn SetContactEmail(self: KNSCore__Provider, contactEmail: []const u8) void {
        const contactEmail_str = qtc.libqt_string{
            .len = contactEmail.len,
            .data = contactEmail.ptr,
        };
        qtc.KNSCore__Provider_SetContactEmail(@ptrCast(self.ptr), contactEmail_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#supportsSsl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    pub fn SupportsSsl(self: KNSCore__Provider) bool {
        return qtc.KNSCore__Provider_SupportsSsl(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#setSupportsSsl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` supportsSsl: bool `
    ///
    pub fn SetSupportsSsl(self: KNSCore__Provider, supportsSsl: bool) void {
        qtc.KNSCore__Provider_SetSupportsSsl(@ptrCast(self.ptr), supportsSsl);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#userCanVote)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    pub fn UserCanVote(self: KNSCore__Provider) bool {
        return qtc.KNSCore__Provider_UserCanVote(@ptrCast(self.ptr));
    }

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
    pub fn OnUserCanVote(self: KNSCore__Provider, callback: *const fn () callconv(.c) bool) void {
        qtc.KNSCore__Provider_OnUserCanVote(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperUserCanVote` instead
    ///
    pub const QBaseUserCanVote = SuperUserCanVote;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#userCanVote)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    pub fn SuperUserCanVote(self: KNSCore__Provider) bool {
        return qtc.KNSCore__Provider_SuperUserCanVote(@ptrCast(self.ptr));
    }

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
    pub fn Vote(self: KNSCore__Provider, param1: anytype, param2: u32) void {
        comptime _ = @TypeOf(param1)._is_KNSCore__Entry;
        qtc.KNSCore__Provider_Vote(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2));
    }

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
    pub fn OnVote(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, KNSCore__Entry, u32) callconv(.c) void) void {
        qtc.KNSCore__Provider_OnVote(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperVote` instead
    ///
    pub const QBaseVote = SuperVote;

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
    pub fn SuperVote(self: KNSCore__Provider, param1: anytype, param2: u32) void {
        comptime _ = @TypeOf(param1)._is_KNSCore__Entry;
        qtc.KNSCore__Provider_SuperVote(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#userCanBecomeFan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    pub fn UserCanBecomeFan(self: KNSCore__Provider) bool {
        return qtc.KNSCore__Provider_UserCanBecomeFan(@ptrCast(self.ptr));
    }

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
    pub fn OnUserCanBecomeFan(self: KNSCore__Provider, callback: *const fn () callconv(.c) bool) void {
        qtc.KNSCore__Provider_OnUserCanBecomeFan(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperUserCanBecomeFan` instead
    ///
    pub const QBaseUserCanBecomeFan = SuperUserCanBecomeFan;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#userCanBecomeFan)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    pub fn SuperUserCanBecomeFan(self: KNSCore__Provider) bool {
        return qtc.KNSCore__Provider_SuperUserCanBecomeFan(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#becomeFan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` param1: KNSCore__Entry `
    ///
    pub fn BecomeFan(self: KNSCore__Provider, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KNSCore__Entry;
        qtc.KNSCore__Provider_BecomeFan(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnBecomeFan(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, KNSCore__Entry) callconv(.c) void) void {
        qtc.KNSCore__Provider_OnBecomeFan(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperBecomeFan` instead
    ///
    pub const QBaseBecomeFan = SuperBecomeFan;

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
    pub fn SuperBecomeFan(self: KNSCore__Provider, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KNSCore__Entry;
        qtc.KNSCore__Provider_SuperBecomeFan(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#setTagFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` tagFilter: []const []const u8 `
    ///
    pub fn SetTagFilter(self: KNSCore__Provider, allocator: std.mem.Allocator, tagFilter: []const []const u8) void {
        const tagFilter_arr = allocator.alloc(qtc.libqt_string, tagFilter.len) catch @panic("knscore__provider.SetTagFilter: Memory allocation failed");
        defer allocator.free(tagFilter_arr);
        for (tagFilter, 0..tagFilter.len) |item, i|
            tagFilter_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const tagFilter_list = qtc.libqt_list{
            .len = tagFilter.len,
            .data = tagFilter_arr.ptr,
        };
        qtc.KNSCore__Provider_SetTagFilter(@ptrCast(self.ptr), tagFilter_list);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#tagFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TagFilter(self: KNSCore__Provider, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KNSCore__Provider_TagFilter(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("knscore__provider.TagFilter: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("knscore__provider.TagFilter: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#setDownloadTagFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` downloadTagFilter: []const []const u8 `
    ///
    pub fn SetDownloadTagFilter(self: KNSCore__Provider, allocator: std.mem.Allocator, downloadTagFilter: []const []const u8) void {
        const downloadTagFilter_arr = allocator.alloc(qtc.libqt_string, downloadTagFilter.len) catch @panic("knscore__provider.SetDownloadTagFilter: Memory allocation failed");
        defer allocator.free(downloadTagFilter_arr);
        for (downloadTagFilter, 0..downloadTagFilter.len) |item, i|
            downloadTagFilter_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const downloadTagFilter_list = qtc.libqt_list{
            .len = downloadTagFilter.len,
            .data = downloadTagFilter_arr.ptr,
        };
        qtc.KNSCore__Provider_SetDownloadTagFilter(@ptrCast(self.ptr), downloadTagFilter_list);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#downloadTagFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DownloadTagFilter(self: KNSCore__Provider, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KNSCore__Provider_DownloadTagFilter(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("knscore__provider.DownloadTagFilter: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("knscore__provider.DownloadTagFilter: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#providerInitialized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` param1: KNSCore__Provider `
    ///
    pub fn ProviderInitialized(self: KNSCore__Provider, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KNSCore__Provider;
        qtc.KNSCore__Provider_ProviderInitialized(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#providerInitialized)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: KNSCore__Provider, param1: KNSCore__Provider) callconv(.c) void `
    ///
    pub fn OnProviderInitialized(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, KNSCore__Provider) callconv(.c) void) void {
        qtc.KNSCore__Provider_Connect_ProviderInitialized(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn LoadingFinished(self: KNSCore__Provider, param1: anytype, param2: []KNSCore__Entry) void {
        comptime _ = @TypeOf(param1)._is_KNSCore__Provider__SearchRequest;
        const param2_list = qtc.libqt_list{
            .len = param2.len,
            .data = @ptrCast(param2.ptr),
        };
        qtc.KNSCore__Provider_LoadingFinished(@ptrCast(self.ptr), @ptrCast(param1.ptr), param2_list);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#loadingFinished)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: KNSCore__Provider, param1: KNSCore__Provider__SearchRequest, param2: qtc.libqt_list ([]KNSCore__Entry)) callconv(.c) void `
    ///
    pub fn OnLoadingFinished(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, KNSCore__Provider__SearchRequest, qtc.libqt_list) callconv(.c) void) void {
        qtc.KNSCore__Provider_Connect_LoadingFinished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#loadingFailed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` param1: KNSCore__Provider__SearchRequest `
    ///
    pub fn LoadingFailed(self: KNSCore__Provider, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KNSCore__Provider__SearchRequest;
        qtc.KNSCore__Provider_LoadingFailed(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#loadingFailed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: KNSCore__Provider, param1: KNSCore__Provider__SearchRequest) callconv(.c) void `
    ///
    pub fn OnLoadingFailed(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, KNSCore__Provider__SearchRequest) callconv(.c) void) void {
        qtc.KNSCore__Provider_Connect_LoadingFailed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#entryDetailsLoaded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` param1: KNSCore__Entry `
    ///
    pub fn EntryDetailsLoaded(self: KNSCore__Provider, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KNSCore__Entry;
        qtc.KNSCore__Provider_EntryDetailsLoaded(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#entryDetailsLoaded)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: KNSCore__Provider, param1: KNSCore__Entry) callconv(.c) void `
    ///
    pub fn OnEntryDetailsLoaded(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, KNSCore__Entry) callconv(.c) void) void {
        qtc.KNSCore__Provider_Connect_EntryDetailsLoaded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#payloadLinkLoaded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` param1: KNSCore__Entry `
    ///
    pub fn PayloadLinkLoaded(self: KNSCore__Provider, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KNSCore__Entry;
        qtc.KNSCore__Provider_PayloadLinkLoaded(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#payloadLinkLoaded)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: KNSCore__Provider, param1: KNSCore__Entry) callconv(.c) void `
    ///
    pub fn OnPayloadLinkLoaded(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, KNSCore__Entry) callconv(.c) void) void {
        qtc.KNSCore__Provider_Connect_PayloadLinkLoaded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#basicsLoaded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    pub fn BasicsLoaded(self: KNSCore__Provider) void {
        qtc.KNSCore__Provider_BasicsLoaded(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#basicsLoaded)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: KNSCore__Provider) callconv(.c) void `
    ///
    pub fn OnBasicsLoaded(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider) callconv(.c) void) void {
        qtc.KNSCore__Provider_Connect_BasicsLoaded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#searchPresetsLoaded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` presets: []KNSCore__Provider__SearchPreset `
    ///
    pub fn SearchPresetsLoaded(self: KNSCore__Provider, presets: []KNSCore__Provider__SearchPreset) void {
        const presets_list = qtc.libqt_list{
            .len = presets.len,
            .data = @ptrCast(presets.ptr),
        };
        qtc.KNSCore__Provider_SearchPresetsLoaded(@ptrCast(self.ptr), presets_list);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#searchPresetsLoaded)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: KNSCore__Provider, presets: qtc.libqt_list ([]KNSCore__Provider__SearchPreset)) callconv(.c) void `
    ///
    pub fn OnSearchPresetsLoaded(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, qtc.libqt_list) callconv(.c) void) void {
        qtc.KNSCore__Provider_Connect_SearchPresetsLoaded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#signalInformation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn SignalInformation(self: KNSCore__Provider, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.KNSCore__Provider_SignalInformation(@ptrCast(self.ptr), param1_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#signalInformation)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: KNSCore__Provider, param1: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSignalInformation(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, [*:0]const u8) callconv(.c) void) void {
        qtc.KNSCore__Provider_Connect_SignalInformation(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#signalError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn SignalError(self: KNSCore__Provider, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.KNSCore__Provider_SignalError(@ptrCast(self.ptr), param1_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#signalError)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: KNSCore__Provider, param1: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSignalError(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, [*:0]const u8) callconv(.c) void) void {
        qtc.KNSCore__Provider_Connect_SignalError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SignalErrorCode(self: KNSCore__Provider, errorCode: i32, message: []const u8, metadata: anytype) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        comptime _ = @TypeOf(metadata)._is_QVariant;
        qtc.KNSCore__Provider_SignalErrorCode(@ptrCast(self.ptr), @bitCast(errorCode), message_str, @ptrCast(metadata.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#signalErrorCode)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: KNSCore__Provider, errorCode: errorcode_enums.ErrorCode, message: [*:0]const u8, metadata: QVariant) callconv(.c) void `
    ///
    pub fn OnSignalErrorCode(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, i32, [*:0]const u8, QVariant) callconv(.c) void) void {
        qtc.KNSCore__Provider_Connect_SignalErrorCode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#categoriesMetadataLoded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` categories: []KNSCore__Provider__CategoryMetadata `
    ///
    pub fn CategoriesMetadataLoded(self: KNSCore__Provider, categories: []KNSCore__Provider__CategoryMetadata) void {
        const categories_list = qtc.libqt_list{
            .len = categories.len,
            .data = @ptrCast(categories.ptr),
        };
        qtc.KNSCore__Provider_CategoriesMetadataLoded(@ptrCast(self.ptr), categories_list);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#categoriesMetadataLoded)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: KNSCore__Provider, categories: qtc.libqt_list ([]KNSCore__Provider__CategoryMetadata)) callconv(.c) void `
    ///
    pub fn OnCategoriesMetadataLoded(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, qtc.libqt_list) callconv(.c) void) void {
        qtc.KNSCore__Provider_Connect_CategoriesMetadataLoded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#tagFilterChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    pub fn TagFilterChanged(self: KNSCore__Provider) void {
        qtc.KNSCore__Provider_TagFilterChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#tagFilterChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: KNSCore__Provider) callconv(.c) void `
    ///
    pub fn OnTagFilterChanged(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider) callconv(.c) void) void {
        qtc.KNSCore__Provider_Connect_TagFilterChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#downloadTagFilterChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    pub fn DownloadTagFilterChanged(self: KNSCore__Provider) void {
        qtc.KNSCore__Provider_DownloadTagFilterChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#downloadTagFilterChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: KNSCore__Provider) callconv(.c) void `
    ///
    pub fn OnDownloadTagFilterChanged(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider) callconv(.c) void) void {
        qtc.KNSCore__Provider_Connect_DownloadTagFilterChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: KNSCore__Provider, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KNSCore__Provider_SetName(@ptrCast(self.ptr), name_str);
    }

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
    pub fn OnSetName(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, [*:0]const u8) callconv(.c) void) void {
        qtc.KNSCore__Provider_OnSetName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetName` instead
    ///
    pub const QBaseSetName = SuperSetName;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#setName)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SuperSetName(self: KNSCore__Provider, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KNSCore__Provider_SuperSetName(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` icon: QUrl `
    ///
    pub fn SetIcon(self: KNSCore__Provider, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QUrl;
        qtc.KNSCore__Provider_SetIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

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
    pub fn OnSetIcon(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, QUrl) callconv(.c) void) void {
        qtc.KNSCore__Provider_OnSetIcon(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetIcon` instead
    ///
    pub const QBaseSetIcon = SuperSetIcon;

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#setIcon)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` icon: QUrl `
    ///
    pub fn SuperSetIcon(self: KNSCore__Provider, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QUrl;
        qtc.KNSCore__Provider_SuperSetIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore__provider.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore__provider.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn ObjectName(self: KNSCore__Provider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore__provider.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KNSCore__Provider, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    pub fn IsWidgetType(self: KNSCore__Provider) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    pub fn IsWindowType(self: KNSCore__Provider) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    pub fn IsQuickItemType(self: KNSCore__Provider) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    pub fn SignalsBlocked(self: KNSCore__Provider) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

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
    pub fn BlockSignals(self: KNSCore__Provider, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    pub fn Thread(self: KNSCore__Provider) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KNSCore__Provider, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

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
    pub fn StartTimer(self: KNSCore__Provider, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

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
    pub fn StartTimer2(self: KNSCore__Provider, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KNSCore__Provider, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KNSCore__Provider, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn Children(self: KNSCore__Provider, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("knscore__provider.Children: Memory allocation failed");
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KNSCore__Provider, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

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
    pub fn InstallEventFilter(self: KNSCore__Provider, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

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
    pub fn RemoveEventFilter(self: KNSCore__Provider, obj: anytype) void {
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KNSCore__Provider, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KNSCore__Provider `
    ///
    pub fn Disconnect3(self: KNSCore__Provider) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

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
    pub fn Disconnect4(self: KNSCore__Provider, receiver: anytype) bool {
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
    /// ` self: KNSCore__Provider `
    ///
    pub fn DumpObjectTree(self: KNSCore__Provider) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    pub fn DumpObjectInfo(self: KNSCore__Provider) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KNSCore__Provider, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KNSCore__Provider, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

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
    pub fn DynamicPropertyNames(self: KNSCore__Provider, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("knscore__provider.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("knscore__provider.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KNSCore__Provider `
    ///
    pub fn BindingStorage(self: KNSCore__Provider) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    pub fn BindingStorage2(self: KNSCore__Provider) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    pub fn Destroyed(self: KNSCore__Provider) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

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
    pub fn OnDestroyed(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    pub fn Parent(self: KNSCore__Provider) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

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
    pub fn Inherits(self: KNSCore__Provider, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider `
    ///
    pub fn DeleteLater(self: KNSCore__Provider) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

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
    pub fn StartTimer22(self: KNSCore__Provider, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

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
    pub fn StartTimer23(self: KNSCore__Provider, time: i64, timerType: i32) i32 {
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KNSCore__Provider, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KNSCore__Provider, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn Disconnect22(self: KNSCore__Provider, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KNSCore__Provider, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KNSCore__Provider, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KNSCore__Provider, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnDestroyed1(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, QObject) callconv(.c) void) void {
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KNSCore__Provider, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KNSCore__Provider_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KNSCore__Provider, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KNSCore__Provider_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEvent(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, QEvent) callconv(.c) bool) void {
        qtc.KNSCore__Provider_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KNSCore__Provider, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KNSCore__Provider_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KNSCore__Provider, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KNSCore__Provider_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEventFilter(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, QObject, QEvent) callconv(.c) bool) void {
        qtc.KNSCore__Provider_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KNSCore__Provider, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KNSCore__Provider_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KNSCore__Provider, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KNSCore__Provider_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnTimerEvent(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, QTimerEvent) callconv(.c) void) void {
        qtc.KNSCore__Provider_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KNSCore__Provider, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KNSCore__Provider_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KNSCore__Provider, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KNSCore__Provider_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnChildEvent(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, QChildEvent) callconv(.c) void) void {
        qtc.KNSCore__Provider_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KNSCore__Provider, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KNSCore__Provider_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KNSCore__Provider, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KNSCore__Provider_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnCustomEvent(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, QEvent) callconv(.c) void) void {
        qtc.KNSCore__Provider_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ConnectNotify(self: KNSCore__Provider, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KNSCore__Provider_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KNSCore__Provider, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KNSCore__Provider_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnConnectNotify(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, QMetaMethod) callconv(.c) void) void {
        qtc.KNSCore__Provider_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DisconnectNotify(self: KNSCore__Provider, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KNSCore__Provider_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KNSCore__Provider, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KNSCore__Provider_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnDisconnectNotify(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, QMetaMethod) callconv(.c) void) void {
        qtc.KNSCore__Provider_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Sender(self: KNSCore__Provider) QObject {
        return .{ .ptr = qtc.KNSCore__Provider_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KNSCore__Provider `
    ///
    pub fn SuperSender(self: KNSCore__Provider) QObject {
        return .{ .ptr = qtc.KNSCore__Provider_SuperSender(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSender(self: KNSCore__Provider, callback: *const fn () callconv(.c) QObject) void {
        qtc.KNSCore__Provider_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SenderSignalIndex(self: KNSCore__Provider) i32 {
        return qtc.KNSCore__Provider_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KNSCore__Provider `
    ///
    pub fn SuperSenderSignalIndex(self: KNSCore__Provider) i32 {
        return qtc.KNSCore__Provider_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

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
    pub fn OnSenderSignalIndex(self: KNSCore__Provider, callback: *const fn () callconv(.c) i32) void {
        qtc.KNSCore__Provider_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Receivers(self: KNSCore__Provider, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KNSCore__Provider_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KNSCore__Provider, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KNSCore__Provider_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn OnReceivers(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, [*:0]const u8) callconv(.c) i32) void {
        qtc.KNSCore__Provider_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IsSignalConnected(self: KNSCore__Provider, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KNSCore__Provider_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KNSCore__Provider `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KNSCore__Provider, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KNSCore__Provider_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnIsSignalConnected(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, QMetaMethod) callconv(.c) bool) void {
        qtc.KNSCore__Provider_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn OnObjectNameChanged(self: KNSCore__Provider, callback: *const fn (KNSCore__Provider, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KNSCore__Provider `
    ///
    pub fn Delete(self: KNSCore__Provider) void {
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

    /// New constructs a new KNSCore::Provider::SearchRequest object.
    ///
    pub fn New() KNSCore__Provider__SearchRequest {
        return .{ .ptr = qtc.KNSCore__Provider__SearchRequest_new() };
    }

    /// New2 constructs a new KNSCore::Provider::SearchRequest object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KNSCore__Provider__SearchRequest `
    ///
    pub fn New2(param1: anytype) KNSCore__Provider__SearchRequest {
        comptime _ = @TypeOf(param1)._is_KNSCore__Provider__SearchRequest;
        return .{ .ptr = qtc.KNSCore__Provider__SearchRequest_new2(@ptrCast(param1.ptr)) };
    }

    /// New3 constructs a new KNSCore::Provider::SearchRequest object.
    ///
    /// ## Parameter(s):
    ///
    /// ` sortMode_: provider_enums.SortMode `
    ///
    pub fn New3(sortMode_: i32) KNSCore__Provider__SearchRequest {
        return .{ .ptr = qtc.KNSCore__Provider__SearchRequest_new3(@bitCast(sortMode_)) };
    }

    /// New4 constructs a new KNSCore::Provider::SearchRequest object.
    ///
    /// ## Parameter(s):
    ///
    /// ` sortMode_: provider_enums.SortMode `
    ///
    /// ` filter_: provider_enums.Filter `
    ///
    pub fn New4(sortMode_: i32, filter_: i32) KNSCore__Provider__SearchRequest {
        return .{ .ptr = qtc.KNSCore__Provider__SearchRequest_new4(@bitCast(sortMode_), @bitCast(filter_)) };
    }

    /// New5 constructs a new KNSCore::Provider::SearchRequest object.
    ///
    /// ## Parameter(s):
    ///
    /// ` sortMode_: provider_enums.SortMode `
    ///
    /// ` filter_: provider_enums.Filter `
    ///
    /// ` searchTerm_: []const u8 `
    ///
    pub fn New5(sortMode_: i32, filter_: i32, searchTerm_: []const u8) KNSCore__Provider__SearchRequest {
        const searchTerm__str = qtc.libqt_string{
            .len = searchTerm_.len,
            .data = searchTerm_.ptr,
        };
        return .{ .ptr = qtc.KNSCore__Provider__SearchRequest_new5(@bitCast(sortMode_), @bitCast(filter_), searchTerm__str) };
    }

    /// New6 constructs a new KNSCore::Provider::SearchRequest object.
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
    pub fn New6(allocator: std.mem.Allocator, sortMode_: i32, filter_: i32, searchTerm_: []const u8, categories_: []const []const u8) KNSCore__Provider__SearchRequest {
        const searchTerm__str = qtc.libqt_string{
            .len = searchTerm_.len,
            .data = searchTerm_.ptr,
        };
        const categories__arr = allocator.alloc(qtc.libqt_string, categories_.len) catch @panic("knscore__provider__searchrequest.New6: Memory allocation failed");
        defer allocator.free(categories__arr);
        for (categories_, 0..categories_.len) |item, i|
            categories__arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const categories__list = qtc.libqt_list{
            .len = categories_.len,
            .data = categories__arr.ptr,
        };
        return .{ .ptr = qtc.KNSCore__Provider__SearchRequest_new6(@bitCast(sortMode_), @bitCast(filter_), searchTerm__str, categories__list) };
    }

    /// New7 constructs a new KNSCore::Provider::SearchRequest object.
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
    pub fn New7(allocator: std.mem.Allocator, sortMode_: i32, filter_: i32, searchTerm_: []const u8, categories_: []const []const u8, page_: i32) KNSCore__Provider__SearchRequest {
        const searchTerm__str = qtc.libqt_string{
            .len = searchTerm_.len,
            .data = searchTerm_.ptr,
        };
        const categories__arr = allocator.alloc(qtc.libqt_string, categories_.len) catch @panic("knscore__provider__searchrequest.New7: Memory allocation failed");
        defer allocator.free(categories__arr);
        for (categories_, 0..categories_.len) |item, i|
            categories__arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const categories__list = qtc.libqt_list{
            .len = categories_.len,
            .data = categories__arr.ptr,
        };
        return .{ .ptr = qtc.KNSCore__Provider__SearchRequest_new7(@bitCast(sortMode_), @bitCast(filter_), searchTerm__str, categories__list, @bitCast(page_)) };
    }

    /// New8 constructs a new KNSCore::Provider::SearchRequest object.
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
    pub fn New8(allocator: std.mem.Allocator, sortMode_: i32, filter_: i32, searchTerm_: []const u8, categories_: []const []const u8, page_: i32, pageSize_: i32) KNSCore__Provider__SearchRequest {
        const searchTerm__str = qtc.libqt_string{
            .len = searchTerm_.len,
            .data = searchTerm_.ptr,
        };
        const categories__arr = allocator.alloc(qtc.libqt_string, categories_.len) catch @panic("knscore__provider__searchrequest.New8: Memory allocation failed");
        defer allocator.free(categories__arr);
        for (categories_, 0..categories_.len) |item, i|
            categories__arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const categories__list = qtc.libqt_list{
            .len = categories_.len,
            .data = categories__arr.ptr,
        };
        return .{ .ptr = qtc.KNSCore__Provider__SearchRequest_new8(@bitCast(sortMode_), @bitCast(filter_), searchTerm__str, categories__list, @bitCast(page_), @bitCast(pageSize_)) };
    }

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
    pub fn SortMode(self: KNSCore__Provider__SearchRequest) i32 {
        return qtc.KNSCore__Provider__SearchRequest_SortMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchrequest.html#sortMode-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__SearchRequest `
    ///
    /// ` sortMode: provider_enums.SortMode `
    ///
    pub fn SetSortMode(self: KNSCore__Provider__SearchRequest, sortMode: i32) void {
        qtc.KNSCore__Provider__SearchRequest_SetSortMode(@ptrCast(self.ptr), @bitCast(sortMode));
    }

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
    pub fn Filter(self: KNSCore__Provider__SearchRequest) i32 {
        return qtc.KNSCore__Provider__SearchRequest_Filter(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchrequest.html#filter-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__SearchRequest `
    ///
    /// ` filter: provider_enums.Filter `
    ///
    pub fn SetFilter(self: KNSCore__Provider__SearchRequest, filter: i32) void {
        qtc.KNSCore__Provider__SearchRequest_SetFilter(@ptrCast(self.ptr), @bitCast(filter));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchrequest.html#searchTerm-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__SearchRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SearchTerm(self: KNSCore__Provider__SearchRequest, allocator: std.mem.Allocator) []const u8 {
        var searchTerm_str = qtc.KNSCore__Provider__SearchRequest_SearchTerm(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&searchTerm_str);
        const searchTerm_ret = allocator.alloc(u8, searchTerm_str.len) catch @panic("knscore__provider__searchrequest.SearchTerm: Memory allocation failed");
        @memcpy(searchTerm_ret, searchTerm_str.data[0..searchTerm_str.len]);
        return searchTerm_ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchrequest.html#searchTerm-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__SearchRequest `
    ///
    /// ` searchTerm: []const u8 `
    ///
    pub fn SetSearchTerm(self: KNSCore__Provider__SearchRequest, searchTerm: []const u8) void {
        const searchTerm_str = qtc.libqt_string{
            .len = searchTerm.len,
            .data = searchTerm.ptr,
        };
        qtc.KNSCore__Provider__SearchRequest_SetSearchTerm(@ptrCast(self.ptr), searchTerm_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchrequest.html#categories-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__SearchRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Categories(self: KNSCore__Provider__SearchRequest, allocator: std.mem.Allocator) []const []const u8 {
        const categories_arr: qtc.libqt_list = qtc.KNSCore__Provider__SearchRequest_Categories(@ptrCast(self.ptr));
        var categories_str: [*]qtc.libqt_string = @ptrCast(@alignCast(categories_arr.data));
        defer {
            for (0..categories_arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&categories_str[i]));
            qtc.libqt_free(categories_arr.data);
        }
        const categories_ret = allocator.alloc([]const u8, categories_arr.len) catch @panic("knscore__provider__searchrequest.Categories: Memory allocation failed");
        for (0..categories_arr.len) |i| {
            const categories_data = categories_str[i];
            const categories_buf = allocator.alloc(u8, categories_data.len) catch @panic("knscore__provider__searchrequest.Categories: Memory allocation failed");
            @memcpy(categories_buf, categories_data.data[0..categories_data.len]);
            categories_ret[i] = categories_buf;
        }
        return categories_ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchrequest.html#categories-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__SearchRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` categories: []const []const u8 `
    ///
    pub fn SetCategories(self: KNSCore__Provider__SearchRequest, allocator: std.mem.Allocator, categories: []const []const u8) void {
        const categories_arr = allocator.alloc(qtc.libqt_string, categories.len) catch @panic("knscore__provider__searchrequest.SetCategories: Memory allocation failed");
        defer allocator.free(categories_arr);
        for (categories, 0..categories.len) |item, i|
            categories_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const categories_list = qtc.libqt_list{
            .len = categories.len,
            .data = categories_arr.ptr,
        };
        qtc.KNSCore__Provider__SearchRequest_SetCategories(@ptrCast(self.ptr), categories_list);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchrequest.html#page-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__SearchRequest `
    ///
    pub fn Page(self: KNSCore__Provider__SearchRequest) i32 {
        return qtc.KNSCore__Provider__SearchRequest_Page(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchrequest.html#page-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__SearchRequest `
    ///
    /// ` page: i32 `
    ///
    pub fn SetPage(self: KNSCore__Provider__SearchRequest, page: i32) void {
        qtc.KNSCore__Provider__SearchRequest_SetPage(@ptrCast(self.ptr), @bitCast(page));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchrequest.html#pageSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__SearchRequest `
    ///
    pub fn PageSize(self: KNSCore__Provider__SearchRequest) i32 {
        return qtc.KNSCore__Provider__SearchRequest_PageSize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchrequest.html#pageSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__SearchRequest `
    ///
    /// ` pageSize: i32 `
    ///
    pub fn SetPageSize(self: KNSCore__Provider__SearchRequest, pageSize: i32) void {
        qtc.KNSCore__Provider__SearchRequest_SetPageSize(@ptrCast(self.ptr), @bitCast(pageSize));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchrequest.html#hashForRequest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__SearchRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn HashForRequest(self: KNSCore__Provider__SearchRequest, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Provider__SearchRequest_HashForRequest(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore__provider__searchrequest.HashForRequest: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchrequest.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__SearchRequest `
    ///
    /// ` other: KNSCore__Provider__SearchRequest `
    ///
    pub fn OperatorEqual(self: KNSCore__Provider__SearchRequest, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_KNSCore__Provider__SearchRequest;
        return qtc.KNSCore__Provider__SearchRequest_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchrequest.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__SearchRequest `
    ///
    /// ` param1: KNSCore__Provider__SearchRequest `
    ///
    pub fn OperatorAssign(self: KNSCore__Provider__SearchRequest, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KNSCore__Provider__SearchRequest;
        qtc.KNSCore__Provider__SearchRequest_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KNSCore__Provider__SearchRequest `
    ///
    pub fn Delete(self: KNSCore__Provider__SearchRequest) void {
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

    /// New constructs a new KNSCore::Provider::CategoryMetadata object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KNSCore__Provider__CategoryMetadata `
    ///
    pub fn New(param1: anytype) KNSCore__Provider__CategoryMetadata {
        comptime _ = @TypeOf(param1)._is_KNSCore__Provider__CategoryMetadata;
        return .{ .ptr = qtc.KNSCore__Provider__CategoryMetadata_new(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-categorymetadata.html#id-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__CategoryMetadata `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Id(self: KNSCore__Provider__CategoryMetadata, allocator: std.mem.Allocator) []const u8 {
        var id_str = qtc.KNSCore__Provider__CategoryMetadata_Id(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&id_str);
        const id_ret = allocator.alloc(u8, id_str.len) catch @panic("knscore__provider__categorymetadata.Id: Memory allocation failed");
        @memcpy(id_ret, id_str.data[0..id_str.len]);
        return id_ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-categorymetadata.html#id-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__CategoryMetadata `
    ///
    /// ` id: []const u8 `
    ///
    pub fn SetId(self: KNSCore__Provider__CategoryMetadata, id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        qtc.KNSCore__Provider__CategoryMetadata_SetId(@ptrCast(self.ptr), id_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-categorymetadata.html#name-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__CategoryMetadata `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: KNSCore__Provider__CategoryMetadata, allocator: std.mem.Allocator) []const u8 {
        var name_str = qtc.KNSCore__Provider__CategoryMetadata_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&name_str);
        const name_ret = allocator.alloc(u8, name_str.len) catch @panic("knscore__provider__categorymetadata.Name: Memory allocation failed");
        @memcpy(name_ret, name_str.data[0..name_str.len]);
        return name_ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-categorymetadata.html#name-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__CategoryMetadata `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: KNSCore__Provider__CategoryMetadata, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KNSCore__Provider__CategoryMetadata_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-categorymetadata.html#displayName-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__CategoryMetadata `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DisplayName(self: KNSCore__Provider__CategoryMetadata, allocator: std.mem.Allocator) []const u8 {
        var displayName_str = qtc.KNSCore__Provider__CategoryMetadata_DisplayName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&displayName_str);
        const displayName_ret = allocator.alloc(u8, displayName_str.len) catch @panic("knscore__provider__categorymetadata.DisplayName: Memory allocation failed");
        @memcpy(displayName_ret, displayName_str.data[0..displayName_str.len]);
        return displayName_ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-categorymetadata.html#displayName-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__CategoryMetadata `
    ///
    /// ` displayName: []const u8 `
    ///
    pub fn SetDisplayName(self: KNSCore__Provider__CategoryMetadata, displayName: []const u8) void {
        const displayName_str = qtc.libqt_string{
            .len = displayName.len,
            .data = displayName.ptr,
        };
        qtc.KNSCore__Provider__CategoryMetadata_SetDisplayName(@ptrCast(self.ptr), displayName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-categorymetadata.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__CategoryMetadata `
    ///
    /// ` param1: KNSCore__Provider__CategoryMetadata `
    ///
    pub fn OperatorAssign(self: KNSCore__Provider__CategoryMetadata, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KNSCore__Provider__CategoryMetadata;
        qtc.KNSCore__Provider__CategoryMetadata_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KNSCore__Provider__CategoryMetadata `
    ///
    pub fn Delete(self: KNSCore__Provider__CategoryMetadata) void {
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

    /// New constructs a new KNSCore::Provider::SearchPreset object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KNSCore__Provider__SearchPreset `
    ///
    pub fn New(param1: anytype) KNSCore__Provider__SearchPreset {
        comptime _ = @TypeOf(param1)._is_KNSCore__Provider__SearchPreset;
        return .{ .ptr = qtc.KNSCore__Provider__SearchPreset_new(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchpreset.html#request-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__SearchPreset `
    ///
    pub fn Request(self: KNSCore__Provider__SearchPreset) KNSCore__Provider__SearchRequest {
        return .{ .ptr = qtc.KNSCore__Provider__SearchPreset_Request(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchpreset.html#request-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__SearchPreset `
    ///
    /// ` request: KNSCore__Provider__SearchRequest `
    ///
    pub fn SetRequest(self: KNSCore__Provider__SearchPreset, request: anytype) void {
        comptime _ = @TypeOf(request)._is_KNSCore__Provider__SearchRequest;
        qtc.KNSCore__Provider__SearchPreset_SetRequest(@ptrCast(self.ptr), @ptrCast(request.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchpreset.html#displayName-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__SearchPreset `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DisplayName(self: KNSCore__Provider__SearchPreset, allocator: std.mem.Allocator) []const u8 {
        var displayName_str = qtc.KNSCore__Provider__SearchPreset_DisplayName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&displayName_str);
        const displayName_ret = allocator.alloc(u8, displayName_str.len) catch @panic("knscore__provider__searchpreset.DisplayName: Memory allocation failed");
        @memcpy(displayName_ret, displayName_str.data[0..displayName_str.len]);
        return displayName_ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchpreset.html#displayName-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__SearchPreset `
    ///
    /// ` displayName: []const u8 `
    ///
    pub fn SetDisplayName(self: KNSCore__Provider__SearchPreset, displayName: []const u8) void {
        const displayName_str = qtc.libqt_string{
            .len = displayName.len,
            .data = displayName.ptr,
        };
        qtc.KNSCore__Provider__SearchPreset_SetDisplayName(@ptrCast(self.ptr), displayName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchpreset.html#iconName-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__SearchPreset `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn IconName(self: KNSCore__Provider__SearchPreset, allocator: std.mem.Allocator) []const u8 {
        var iconName_str = qtc.KNSCore__Provider__SearchPreset_IconName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&iconName_str);
        const iconName_ret = allocator.alloc(u8, iconName_str.len) catch @panic("knscore__provider__searchpreset.IconName: Memory allocation failed");
        @memcpy(iconName_ret, iconName_str.data[0..iconName_str.len]);
        return iconName_ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchpreset.html#iconName-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__SearchPreset `
    ///
    /// ` iconName: []const u8 `
    ///
    pub fn SetIconName(self: KNSCore__Provider__SearchPreset, iconName: []const u8) void {
        const iconName_str = qtc.libqt_string{
            .len = iconName.len,
            .data = iconName.ptr,
        };
        qtc.KNSCore__Provider__SearchPreset_SetIconName(@ptrCast(self.ptr), iconName_str);
    }

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
    pub fn Type(self: KNSCore__Provider__SearchPreset) i32 {
        return qtc.KNSCore__Provider__SearchPreset_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchpreset.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__SearchPreset `
    ///
    /// ` type: provider_enums.SearchPresetTypes `
    ///
    pub fn SetType(self: KNSCore__Provider__SearchPreset, _type: i32) void {
        qtc.KNSCore__Provider__SearchPreset_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchpreset.html#providerId-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__SearchPreset `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ProviderId(self: KNSCore__Provider__SearchPreset, allocator: std.mem.Allocator) []const u8 {
        var providerId_str = qtc.KNSCore__Provider__SearchPreset_ProviderId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&providerId_str);
        const providerId_ret = allocator.alloc(u8, providerId_str.len) catch @panic("knscore__provider__searchpreset.ProviderId: Memory allocation failed");
        @memcpy(providerId_ret, providerId_str.data[0..providerId_str.len]);
        return providerId_ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchpreset.html#providerId-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__SearchPreset `
    ///
    /// ` providerId: []const u8 `
    ///
    pub fn SetProviderId(self: KNSCore__Provider__SearchPreset, providerId: []const u8) void {
        const providerId_str = qtc.libqt_string{
            .len = providerId.len,
            .data = providerId.ptr,
        };
        qtc.KNSCore__Provider__SearchPreset_SetProviderId(@ptrCast(self.ptr), providerId_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchpreset.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Provider__SearchPreset `
    ///
    /// ` param1: KNSCore__Provider__SearchPreset `
    ///
    pub fn OperatorAssign(self: KNSCore__Provider__SearchPreset, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KNSCore__Provider__SearchPreset;
        qtc.KNSCore__Provider__SearchPreset_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KNSCore__Provider__SearchPreset `
    ///
    pub fn Delete(self: KNSCore__Provider__SearchPreset) void {
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
