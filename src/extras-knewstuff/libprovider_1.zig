const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const errorcode_enums = @import("liberrorcode.zig").enums;
const provider_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/knscore-provider.html)
pub const knscore__provider = struct {
    /// New constructs a new KNSCore::Provider object.
    ///
    pub fn New() QtC.KNSCore__Provider {
        return qtc.KNSCore__Provider_new();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KNSCore__Provider_MetaObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMetaObject `
    ///
    pub fn OnMetaObject(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMetaObject) void {
        qtc.KNSCore__Provider_OnMetaObject(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KNSCore__Provider `
    ///
    pub fn SuperMetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KNSCore__Provider_SuperMetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KNSCore__Provider_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: QtC.KNSCore__Provider, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KNSCore__Provider_OnMetacast(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KNSCore__Provider_SuperMetacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KNSCore__Provider_Metacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: QtC.KNSCore__Provider, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KNSCore__Provider_OnMetacall(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KNSCore__Provider_SuperMetacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr(s: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
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
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Id(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Provider_Id(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore__provider.Id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#id)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnId(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KNSCore__Provider_OnId(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperId(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Provider_SuperId(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore__provider.Id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#setProviderXML)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` xmldata: QtC.QDomElement `
    ///
    pub fn SetProviderXML(self: ?*anyopaque, xmldata: ?*anyopaque) bool {
        return qtc.KNSCore__Provider_SetProviderXML(@ptrCast(self), @ptrCast(xmldata));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#setProviderXML)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: QtC.KNSCore__Provider, xmldata: QtC.QDomElement) callconv(.c) bool `
    ///
    pub fn OnSetProviderXML(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KNSCore__Provider_OnSetProviderXML(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` xmldata: QtC.QDomElement `
    ///
    pub fn SuperSetProviderXML(self: ?*anyopaque, xmldata: ?*anyopaque) bool {
        return qtc.KNSCore__Provider_SuperSetProviderXML(@ptrCast(self), @ptrCast(xmldata));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#isInitialized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    pub fn IsInitialized(self: ?*anyopaque) bool {
        return qtc.KNSCore__Provider_IsInitialized(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#isInitialized)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsInitialized(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KNSCore__Provider_OnIsInitialized(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KNSCore__Provider `
    ///
    pub fn SuperIsInitialized(self: ?*anyopaque) bool {
        return qtc.KNSCore__Provider_SuperIsInitialized(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#setCachedEntries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` cachedEntries: []QtC.KNSCore__Entry `
    ///
    pub fn SetCachedEntries(self: ?*anyopaque, cachedEntries: []QtC.KNSCore__Entry) void {
        const cachedEntries_list = qtc.libqt_list{
            .len = cachedEntries.len,
            .data = @ptrCast(cachedEntries.ptr),
        };
        qtc.KNSCore__Provider_SetCachedEntries(@ptrCast(self), cachedEntries_list);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#setCachedEntries)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: QtC.KNSCore__Provider, cachedEntries: qtc.libqt_list ([]QtC.KNSCore__Entry)) callconv(.c) void `
    ///
    pub fn OnSetCachedEntries(self: ?*anyopaque, callback: *const fn (?*anyopaque, qtc.libqt_list) callconv(.c) void) void {
        qtc.KNSCore__Provider_OnSetCachedEntries(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` cachedEntries: []QtC.KNSCore__Entry `
    ///
    pub fn SuperSetCachedEntries(self: ?*anyopaque, cachedEntries: []QtC.KNSCore__Entry) void {
        const cachedEntries_list = qtc.libqt_list{
            .len = cachedEntries.len,
            .data = @ptrCast(cachedEntries.ptr),
        };
        qtc.KNSCore__Provider_SuperSetCachedEntries(@ptrCast(self), cachedEntries_list);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Provider_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore__provider.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#name)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnName(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KNSCore__Provider_OnName(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Provider_SuperName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore__provider.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    pub fn Icon(self: ?*anyopaque) QtC.QUrl {
        return qtc.KNSCore__Provider_Icon(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#icon)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QUrl `
    ///
    pub fn OnIcon(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QUrl) void {
        qtc.KNSCore__Provider_OnIcon(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KNSCore__Provider `
    ///
    pub fn SuperIcon(self: ?*anyopaque) QtC.QUrl {
        return qtc.KNSCore__Provider_SuperIcon(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#loadEntries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` request: QtC.KNSCore__Provider__SearchRequest `
    ///
    pub fn LoadEntries(self: ?*anyopaque, request: ?*anyopaque) void {
        qtc.KNSCore__Provider_LoadEntries(@ptrCast(self), @ptrCast(request));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#loadEntries)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: QtC.KNSCore__Provider, request: QtC.KNSCore__Provider__SearchRequest) callconv(.c) void `
    ///
    pub fn OnLoadEntries(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KNSCore__Provider_OnLoadEntries(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` request: QtC.KNSCore__Provider__SearchRequest `
    ///
    pub fn SuperLoadEntries(self: ?*anyopaque, request: ?*anyopaque) void {
        qtc.KNSCore__Provider_SuperLoadEntries(@ptrCast(self), @ptrCast(request));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#loadEntryDetails)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` param1: QtC.KNSCore__Entry `
    ///
    pub fn LoadEntryDetails(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KNSCore__Provider_LoadEntryDetails(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#loadEntryDetails)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: QtC.KNSCore__Provider, param1: QtC.KNSCore__Entry) callconv(.c) void `
    ///
    pub fn OnLoadEntryDetails(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KNSCore__Provider_OnLoadEntryDetails(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` param1: QtC.KNSCore__Entry `
    ///
    pub fn SuperLoadEntryDetails(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KNSCore__Provider_SuperLoadEntryDetails(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#loadPayloadLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` entry: QtC.KNSCore__Entry `
    ///
    /// ` linkId: i32 `
    ///
    pub fn LoadPayloadLink(self: ?*anyopaque, entry: ?*anyopaque, linkId: i32) void {
        qtc.KNSCore__Provider_LoadPayloadLink(@ptrCast(self), @ptrCast(entry), @bitCast(linkId));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#loadPayloadLink)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: QtC.KNSCore__Provider, entry: QtC.KNSCore__Entry, linkId: i32) callconv(.c) void `
    ///
    pub fn OnLoadPayloadLink(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.KNSCore__Provider_OnLoadPayloadLink(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` entry: QtC.KNSCore__Entry `
    ///
    /// ` linkId: i32 `
    ///
    pub fn SuperLoadPayloadLink(self: ?*anyopaque, entry: ?*anyopaque, linkId: i32) void {
        qtc.KNSCore__Provider_SuperLoadPayloadLink(@ptrCast(self), @ptrCast(entry), @bitCast(linkId));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#loadComments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` param1: QtC.KNSCore__Entry `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: i32 `
    ///
    pub fn LoadComments(self: ?*anyopaque, param1: ?*anyopaque, param2: i32, param3: i32) void {
        qtc.KNSCore__Provider_LoadComments(@ptrCast(self), @ptrCast(param1), @bitCast(param2), @bitCast(param3));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#loadComments)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: QtC.KNSCore__Provider, param1: QtC.KNSCore__Entry, param2: i32, param3: i32) callconv(.c) void `
    ///
    pub fn OnLoadComments(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.KNSCore__Provider_OnLoadComments(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` param1: QtC.KNSCore__Entry `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: i32 `
    ///
    pub fn SuperLoadComments(self: ?*anyopaque, param1: ?*anyopaque, param2: i32, param3: i32) void {
        qtc.KNSCore__Provider_SuperLoadComments(@ptrCast(self), @ptrCast(param1), @bitCast(param2), @bitCast(param3));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#loadPerson)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn LoadPerson(self: ?*anyopaque, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.KNSCore__Provider_LoadPerson(@ptrCast(self), param1_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#loadPerson)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: QtC.KNSCore__Provider, param1: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnLoadPerson(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KNSCore__Provider_OnLoadPerson(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn SuperLoadPerson(self: ?*anyopaque, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.KNSCore__Provider_SuperLoadPerson(@ptrCast(self), param1_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#loadBasics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    pub fn LoadBasics(self: ?*anyopaque) void {
        qtc.KNSCore__Provider_LoadBasics(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#loadBasics)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnLoadBasics(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KNSCore__Provider_OnLoadBasics(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KNSCore__Provider `
    ///
    pub fn SuperLoadBasics(self: ?*anyopaque) void {
        qtc.KNSCore__Provider_SuperLoadBasics(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#version)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Version(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Provider_Version(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore__provider.Version: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#setVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` version: []const u8 `
    ///
    pub fn SetVersion(self: ?*anyopaque, version: []const u8) void {
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        qtc.KNSCore__Provider_SetVersion(@ptrCast(self), version_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#website)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    pub fn Website(self: ?*anyopaque) QtC.QUrl {
        return qtc.KNSCore__Provider_Website(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#setWebsite)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` website: QtC.QUrl `
    ///
    pub fn SetWebsite(self: ?*anyopaque, website: ?*anyopaque) void {
        qtc.KNSCore__Provider_SetWebsite(@ptrCast(self), @ptrCast(website));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#host)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    pub fn Host(self: ?*anyopaque) QtC.QUrl {
        return qtc.KNSCore__Provider_Host(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#setHost)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` host: QtC.QUrl `
    ///
    pub fn SetHost(self: ?*anyopaque, host: ?*anyopaque) void {
        qtc.KNSCore__Provider_SetHost(@ptrCast(self), @ptrCast(host));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#contactEmail)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ContactEmail(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Provider_ContactEmail(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore__provider.ContactEmail: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#setContactEmail)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` contactEmail: []const u8 `
    ///
    pub fn SetContactEmail(self: ?*anyopaque, contactEmail: []const u8) void {
        const contactEmail_str = qtc.libqt_string{
            .len = contactEmail.len,
            .data = contactEmail.ptr,
        };
        qtc.KNSCore__Provider_SetContactEmail(@ptrCast(self), contactEmail_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#supportsSsl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    pub fn SupportsSsl(self: ?*anyopaque) bool {
        return qtc.KNSCore__Provider_SupportsSsl(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#setSupportsSsl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` supportsSsl: bool `
    ///
    pub fn SetSupportsSsl(self: ?*anyopaque, supportsSsl: bool) void {
        qtc.KNSCore__Provider_SetSupportsSsl(@ptrCast(self), supportsSsl);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#userCanVote)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    pub fn UserCanVote(self: ?*anyopaque) bool {
        return qtc.KNSCore__Provider_UserCanVote(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#userCanVote)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnUserCanVote(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KNSCore__Provider_OnUserCanVote(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KNSCore__Provider `
    ///
    pub fn SuperUserCanVote(self: ?*anyopaque) bool {
        return qtc.KNSCore__Provider_SuperUserCanVote(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#vote)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` param1: QtC.KNSCore__Entry `
    ///
    /// ` param2: u32 `
    ///
    pub fn Vote(self: ?*anyopaque, param1: ?*anyopaque, param2: u32) void {
        qtc.KNSCore__Provider_Vote(@ptrCast(self), @ptrCast(param1), @bitCast(param2));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#vote)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: QtC.KNSCore__Provider, param1: QtC.KNSCore__Entry, param2: u32) callconv(.c) void `
    ///
    pub fn OnVote(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, u32) callconv(.c) void) void {
        qtc.KNSCore__Provider_OnVote(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` param1: QtC.KNSCore__Entry `
    ///
    /// ` param2: u32 `
    ///
    pub fn SuperVote(self: ?*anyopaque, param1: ?*anyopaque, param2: u32) void {
        qtc.KNSCore__Provider_SuperVote(@ptrCast(self), @ptrCast(param1), @bitCast(param2));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#userCanBecomeFan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    pub fn UserCanBecomeFan(self: ?*anyopaque) bool {
        return qtc.KNSCore__Provider_UserCanBecomeFan(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#userCanBecomeFan)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnUserCanBecomeFan(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KNSCore__Provider_OnUserCanBecomeFan(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KNSCore__Provider `
    ///
    pub fn SuperUserCanBecomeFan(self: ?*anyopaque) bool {
        return qtc.KNSCore__Provider_SuperUserCanBecomeFan(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#becomeFan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` param1: QtC.KNSCore__Entry `
    ///
    pub fn BecomeFan(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KNSCore__Provider_BecomeFan(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#becomeFan)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: QtC.KNSCore__Provider, param1: QtC.KNSCore__Entry) callconv(.c) void `
    ///
    pub fn OnBecomeFan(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KNSCore__Provider_OnBecomeFan(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` param1: QtC.KNSCore__Entry `
    ///
    pub fn SuperBecomeFan(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KNSCore__Provider_SuperBecomeFan(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#setTagFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` tagFilter: []const []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SetTagFilter(self: ?*anyopaque, tagFilter: []const []const u8, allocator: std.mem.Allocator) void {
        const tagFilter_arr = allocator.alloc(qtc.libqt_string, tagFilter.len) catch @panic("knscore__provider.SetTagFilter: Memory allocation failed");
        defer allocator.free(tagFilter_arr);
        for (tagFilter, 0..tagFilter.len) |item, i| {
            tagFilter_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const tagFilter_list = qtc.libqt_list{
            .len = tagFilter.len,
            .data = tagFilter_arr.ptr,
        };
        qtc.KNSCore__Provider_SetTagFilter(@ptrCast(self), tagFilter_list);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#tagFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TagFilter(self: ?*anyopaque, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KNSCore__Provider_TagFilter(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` downloadTagFilter: []const []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SetDownloadTagFilter(self: ?*anyopaque, downloadTagFilter: []const []const u8, allocator: std.mem.Allocator) void {
        const downloadTagFilter_arr = allocator.alloc(qtc.libqt_string, downloadTagFilter.len) catch @panic("knscore__provider.SetDownloadTagFilter: Memory allocation failed");
        defer allocator.free(downloadTagFilter_arr);
        for (downloadTagFilter, 0..downloadTagFilter.len) |item, i| {
            downloadTagFilter_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const downloadTagFilter_list = qtc.libqt_list{
            .len = downloadTagFilter.len,
            .data = downloadTagFilter_arr.ptr,
        };
        qtc.KNSCore__Provider_SetDownloadTagFilter(@ptrCast(self), downloadTagFilter_list);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#downloadTagFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DownloadTagFilter(self: ?*anyopaque, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KNSCore__Provider_DownloadTagFilter(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` param1: QtC.KNSCore__Provider `
    ///
    pub fn ProviderInitialized(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KNSCore__Provider_ProviderInitialized(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#providerInitialized)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: QtC.KNSCore__Provider, param1: QtC.KNSCore__Provider) callconv(.c) void `
    ///
    pub fn OnProviderInitialized(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KNSCore__Provider_Connect_ProviderInitialized(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#loadingFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` param1: QtC.KNSCore__Provider__SearchRequest `
    ///
    /// ` param2: []QtC.KNSCore__Entry `
    ///
    pub fn LoadingFinished(self: ?*anyopaque, param1: ?*anyopaque, param2: []QtC.KNSCore__Entry) void {
        const param2_list = qtc.libqt_list{
            .len = param2.len,
            .data = @ptrCast(param2.ptr),
        };
        qtc.KNSCore__Provider_LoadingFinished(@ptrCast(self), @ptrCast(param1), param2_list);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#loadingFinished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: QtC.KNSCore__Provider, param1: QtC.KNSCore__Provider__SearchRequest, param2: qtc.libqt_list ([]QtC.KNSCore__Entry)) callconv(.c) void `
    ///
    pub fn OnLoadingFinished(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, qtc.libqt_list) callconv(.c) void) void {
        qtc.KNSCore__Provider_Connect_LoadingFinished(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#loadingFailed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` param1: QtC.KNSCore__Provider__SearchRequest `
    ///
    pub fn LoadingFailed(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KNSCore__Provider_LoadingFailed(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#loadingFailed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: QtC.KNSCore__Provider, param1: QtC.KNSCore__Provider__SearchRequest) callconv(.c) void `
    ///
    pub fn OnLoadingFailed(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KNSCore__Provider_Connect_LoadingFailed(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#entryDetailsLoaded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` param1: QtC.KNSCore__Entry `
    ///
    pub fn EntryDetailsLoaded(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KNSCore__Provider_EntryDetailsLoaded(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#entryDetailsLoaded)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: QtC.KNSCore__Provider, param1: QtC.KNSCore__Entry) callconv(.c) void `
    ///
    pub fn OnEntryDetailsLoaded(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KNSCore__Provider_Connect_EntryDetailsLoaded(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#payloadLinkLoaded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` param1: QtC.KNSCore__Entry `
    ///
    pub fn PayloadLinkLoaded(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KNSCore__Provider_PayloadLinkLoaded(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#payloadLinkLoaded)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: QtC.KNSCore__Provider, param1: QtC.KNSCore__Entry) callconv(.c) void `
    ///
    pub fn OnPayloadLinkLoaded(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KNSCore__Provider_Connect_PayloadLinkLoaded(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#basicsLoaded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    pub fn BasicsLoaded(self: ?*anyopaque) void {
        qtc.KNSCore__Provider_BasicsLoaded(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#basicsLoaded)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: QtC.KNSCore__Provider) callconv(.c) void `
    ///
    pub fn OnBasicsLoaded(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.KNSCore__Provider_Connect_BasicsLoaded(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#searchPresetsLoaded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` presets: []QtC.KNSCore__Provider__SearchPreset `
    ///
    pub fn SearchPresetsLoaded(self: ?*anyopaque, presets: []QtC.KNSCore__Provider__SearchPreset) void {
        const presets_list = qtc.libqt_list{
            .len = presets.len,
            .data = @ptrCast(presets.ptr),
        };
        qtc.KNSCore__Provider_SearchPresetsLoaded(@ptrCast(self), presets_list);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#searchPresetsLoaded)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: QtC.KNSCore__Provider, presets: qtc.libqt_list ([]QtC.KNSCore__Provider__SearchPreset)) callconv(.c) void `
    ///
    pub fn OnSearchPresetsLoaded(self: ?*anyopaque, callback: *const fn (?*anyopaque, qtc.libqt_list) callconv(.c) void) void {
        qtc.KNSCore__Provider_Connect_SearchPresetsLoaded(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#signalInformation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn SignalInformation(self: ?*anyopaque, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.KNSCore__Provider_SignalInformation(@ptrCast(self), param1_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#signalInformation)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: QtC.KNSCore__Provider, param1: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSignalInformation(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KNSCore__Provider_Connect_SignalInformation(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#signalError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn SignalError(self: ?*anyopaque, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.KNSCore__Provider_SignalError(@ptrCast(self), param1_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#signalError)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: QtC.KNSCore__Provider, param1: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSignalError(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KNSCore__Provider_Connect_SignalError(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#signalErrorCode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` errorCode: errorcode_enums.ErrorCode `
    ///
    /// ` message: []const u8 `
    ///
    /// ` metadata: QtC.QVariant `
    ///
    pub fn SignalErrorCode(self: ?*anyopaque, errorCode: i32, message: []const u8, metadata: ?*anyopaque) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.KNSCore__Provider_SignalErrorCode(@ptrCast(self), @bitCast(errorCode), message_str, @ptrCast(metadata));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#signalErrorCode)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: QtC.KNSCore__Provider, errorCode: errorcode_enums.ErrorCode, message: [*:0]const u8, metadata: QtC.QVariant) callconv(.c) void `
    ///
    pub fn OnSignalErrorCode(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, [*:0]const u8, ?*anyopaque) callconv(.c) void) void {
        qtc.KNSCore__Provider_Connect_SignalErrorCode(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#categoriesMetadataLoded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` categories: []QtC.KNSCore__Provider__CategoryMetadata `
    ///
    pub fn CategoriesMetadataLoded(self: ?*anyopaque, categories: []QtC.KNSCore__Provider__CategoryMetadata) void {
        const categories_list = qtc.libqt_list{
            .len = categories.len,
            .data = @ptrCast(categories.ptr),
        };
        qtc.KNSCore__Provider_CategoriesMetadataLoded(@ptrCast(self), categories_list);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#categoriesMetadataLoded)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: QtC.KNSCore__Provider, categories: qtc.libqt_list ([]QtC.KNSCore__Provider__CategoryMetadata)) callconv(.c) void `
    ///
    pub fn OnCategoriesMetadataLoded(self: ?*anyopaque, callback: *const fn (?*anyopaque, qtc.libqt_list) callconv(.c) void) void {
        qtc.KNSCore__Provider_Connect_CategoriesMetadataLoded(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#tagFilterChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    pub fn TagFilterChanged(self: ?*anyopaque) void {
        qtc.KNSCore__Provider_TagFilterChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#tagFilterChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: QtC.KNSCore__Provider) callconv(.c) void `
    ///
    pub fn OnTagFilterChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.KNSCore__Provider_Connect_TagFilterChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#downloadTagFilterChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    pub fn DownloadTagFilterChanged(self: ?*anyopaque) void {
        qtc.KNSCore__Provider_DownloadTagFilterChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#downloadTagFilterChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: QtC.KNSCore__Provider) callconv(.c) void `
    ///
    pub fn OnDownloadTagFilterChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.KNSCore__Provider_Connect_DownloadTagFilterChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KNSCore__Provider_SetName(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#setName)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: QtC.KNSCore__Provider, name: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetName(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KNSCore__Provider_OnSetName(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SuperSetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KNSCore__Provider_SuperSetName(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` icon: QtC.QUrl `
    ///
    pub fn SetIcon(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.KNSCore__Provider_SetIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider.html#setIcon)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: QtC.KNSCore__Provider, icon: QtC.QUrl) callconv(.c) void `
    ///
    pub fn OnSetIcon(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KNSCore__Provider_OnSetIcon(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` icon: QtC.QUrl `
    ///
    pub fn SuperSetIcon(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.KNSCore__Provider_SuperSetIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr2(s: [:0]const u8, c: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
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
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr3(s: [:0]const u8, c: [:0]const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
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
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
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
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` thread: QtC.QThread `
    ///
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: ?*anyopaque, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("knscore__provider.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` filterObj: QtC.QObject `
    ///
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` obj: QtC.QObject `
    ///
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    pub fn Connect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect3(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: QtC.QMetaMethod `
    ///
    pub fn Disconnect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    pub fn Disconnect3(self: ?*anyopaque) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect4(self: ?*anyopaque, receiver: ?*anyopaque) bool {
        return qtc.QObject_Disconnect4(@ptrCast(self), @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect5(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, name: [:0]const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: ?*anyopaque, name: [:0]const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// ` self: QtC.KNSCore__Provider `
    ///
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: QtC.KNSCore__Provider) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: ?*anyopaque, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: ?*anyopaque, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8, param5: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect5(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring, @bitCast(param5));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect52(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @bitCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @bitCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: ?*anyopaque, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect22(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect22(@ptrCast(self), signal_Cstring, @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: ?*anyopaque, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self), @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` param1: QtC.QObject `
    ///
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: QtC.KNSCore__Provider, param1: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KNSCore__Provider_Event(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KNSCore__Provider_SuperEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KNSCore__Provider`
    ///
    /// ` callback: *const fn (self: QtC.KNSCore__Provider, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KNSCore__Provider_OnEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KNSCore__Provider_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
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
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KNSCore__Provider_SuperEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KNSCore__Provider`
    ///
    /// ` callback: *const fn (self: QtC.KNSCore__Provider, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KNSCore__Provider_OnEventFilter(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KNSCore__Provider_TimerEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KNSCore__Provider_SuperTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KNSCore__Provider`
    ///
    /// ` callback: *const fn (self: QtC.KNSCore__Provider, event: QtC.QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KNSCore__Provider_OnTimerEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KNSCore__Provider_ChildEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn SuperChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KNSCore__Provider_SuperChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KNSCore__Provider`
    ///
    /// ` callback: *const fn (self: QtC.KNSCore__Provider, event: QtC.QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KNSCore__Provider_OnChildEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KNSCore__Provider_CustomEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KNSCore__Provider_SuperCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KNSCore__Provider`
    ///
    /// ` callback: *const fn (self: QtC.KNSCore__Provider, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KNSCore__Provider_OnCustomEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KNSCore__Provider_ConnectNotify(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KNSCore__Provider_SuperConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KNSCore__Provider`
    ///
    /// ` callback: *const fn (self: QtC.KNSCore__Provider, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KNSCore__Provider_OnConnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KNSCore__Provider_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KNSCore__Provider_SuperDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KNSCore__Provider`
    ///
    /// ` callback: *const fn (self: QtC.KNSCore__Provider, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KNSCore__Provider_OnDisconnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.KNSCore__Provider_Sender(@ptrCast(self));
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
    /// ` self: QtC.KNSCore__Provider `
    ///
    pub fn SuperSender(self: ?*anyopaque) QtC.QObject {
        return qtc.KNSCore__Provider_SuperSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KNSCore__Provider`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.KNSCore__Provider_OnSender(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KNSCore__Provider_SenderSignalIndex(@ptrCast(self));
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
    /// ` self: QtC.KNSCore__Provider `
    ///
    pub fn SuperSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KNSCore__Provider_SuperSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KNSCore__Provider`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.KNSCore__Provider_OnSenderSignalIndex(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KNSCore__Provider_Receivers(@ptrCast(self), signal_Cstring);
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
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KNSCore__Provider_SuperReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KNSCore__Provider`
    ///
    /// ` callback: *const fn (self: QtC.KNSCore__Provider, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.KNSCore__Provider_OnReceivers(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KNSCore__Provider_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KNSCore__Provider_SuperIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KNSCore__Provider`
    ///
    /// ` callback: *const fn (self: QtC.KNSCore__Provider, signal: QtC.QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KNSCore__Provider_OnIsSignalConnected(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    /// ` callback: *const fn (self: QtC.KNSCore__Provider, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KNSCore__Provider `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.KNSCore__Provider_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/knscore-provider-searchrequest.html)
pub const knscore__provider__searchrequest = struct {
    /// New constructs a new KNSCore::Provider::SearchRequest object.
    ///
    pub fn New() QtC.KNSCore__Provider__SearchRequest {
        return qtc.KNSCore__Provider__SearchRequest_new();
    }

    /// New2 constructs a new KNSCore::Provider::SearchRequest object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.KNSCore__Provider__SearchRequest `
    ///
    pub fn New2(param1: ?*anyopaque) QtC.KNSCore__Provider__SearchRequest {
        return qtc.KNSCore__Provider__SearchRequest_new2(@ptrCast(param1));
    }

    /// New3 constructs a new KNSCore::Provider::SearchRequest object.
    ///
    /// ## Parameter(s):
    ///
    /// ` sortMode_: provider_enums.SortMode `
    ///
    pub fn New3(sortMode_: i32) QtC.KNSCore__Provider__SearchRequest {
        return qtc.KNSCore__Provider__SearchRequest_new3(@bitCast(sortMode_));
    }

    /// New4 constructs a new KNSCore::Provider::SearchRequest object.
    ///
    /// ## Parameter(s):
    ///
    /// ` sortMode_: provider_enums.SortMode `
    ///
    /// ` filter_: provider_enums.Filter `
    ///
    pub fn New4(sortMode_: i32, filter_: i32) QtC.KNSCore__Provider__SearchRequest {
        return qtc.KNSCore__Provider__SearchRequest_new4(@bitCast(sortMode_), @bitCast(filter_));
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
    pub fn New5(sortMode_: i32, filter_: i32, searchTerm_: []const u8) QtC.KNSCore__Provider__SearchRequest {
        const searchTerm__str = qtc.libqt_string{
            .len = searchTerm_.len,
            .data = searchTerm_.ptr,
        };

        return qtc.KNSCore__Provider__SearchRequest_new5(@bitCast(sortMode_), @bitCast(filter_), searchTerm__str);
    }

    /// New6 constructs a new KNSCore::Provider::SearchRequest object.
    ///
    /// ## Parameter(s):
    ///
    /// ` sortMode_: provider_enums.SortMode `
    ///
    /// ` filter_: provider_enums.Filter `
    ///
    /// ` searchTerm_: []const u8 `
    ///
    /// ` categories_: []const []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn New6(sortMode_: i32, filter_: i32, searchTerm_: []const u8, categories_: []const []const u8, allocator: std.mem.Allocator) QtC.KNSCore__Provider__SearchRequest {
        const searchTerm__str = qtc.libqt_string{
            .len = searchTerm_.len,
            .data = searchTerm_.ptr,
        };
        const categories__arr = allocator.alloc(qtc.libqt_string, categories_.len) catch @panic("knscore__provider__searchrequest.New6: Memory allocation failed");
        defer allocator.free(categories__arr);
        for (categories_, 0..categories_.len) |item, i| {
            categories__arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const categories__list = qtc.libqt_list{
            .len = categories_.len,
            .data = categories__arr.ptr,
        };

        return qtc.KNSCore__Provider__SearchRequest_new6(@bitCast(sortMode_), @bitCast(filter_), searchTerm__str, categories__list);
    }

    /// New7 constructs a new KNSCore::Provider::SearchRequest object.
    ///
    /// ## Parameter(s):
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
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn New7(sortMode_: i32, filter_: i32, searchTerm_: []const u8, categories_: []const []const u8, page_: i32, allocator: std.mem.Allocator) QtC.KNSCore__Provider__SearchRequest {
        const searchTerm__str = qtc.libqt_string{
            .len = searchTerm_.len,
            .data = searchTerm_.ptr,
        };
        const categories__arr = allocator.alloc(qtc.libqt_string, categories_.len) catch @panic("knscore__provider__searchrequest.New7: Memory allocation failed");
        defer allocator.free(categories__arr);
        for (categories_, 0..categories_.len) |item, i| {
            categories__arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const categories__list = qtc.libqt_list{
            .len = categories_.len,
            .data = categories__arr.ptr,
        };

        return qtc.KNSCore__Provider__SearchRequest_new7(@bitCast(sortMode_), @bitCast(filter_), searchTerm__str, categories__list, @bitCast(page_));
    }

    /// New8 constructs a new KNSCore::Provider::SearchRequest object.
    ///
    /// ## Parameter(s):
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
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn New8(sortMode_: i32, filter_: i32, searchTerm_: []const u8, categories_: []const []const u8, page_: i32, pageSize_: i32, allocator: std.mem.Allocator) QtC.KNSCore__Provider__SearchRequest {
        const searchTerm__str = qtc.libqt_string{
            .len = searchTerm_.len,
            .data = searchTerm_.ptr,
        };
        const categories__arr = allocator.alloc(qtc.libqt_string, categories_.len) catch @panic("knscore__provider__searchrequest.New8: Memory allocation failed");
        defer allocator.free(categories__arr);
        for (categories_, 0..categories_.len) |item, i| {
            categories__arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const categories__list = qtc.libqt_list{
            .len = categories_.len,
            .data = categories__arr.ptr,
        };

        return qtc.KNSCore__Provider__SearchRequest_new8(@bitCast(sortMode_), @bitCast(filter_), searchTerm__str, categories__list, @bitCast(page_), @bitCast(pageSize_));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchrequest.html#sortMode-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider__SearchRequest `
    ///
    /// ## Returns:
    ///
    /// ` provider_enums.SortMode `
    ///
    pub fn SortMode(self: ?*anyopaque) i32 {
        return qtc.KNSCore__Provider__SearchRequest_SortMode(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchrequest.html#sortMode-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider__SearchRequest `
    ///
    /// ` sortMode: provider_enums.SortMode `
    ///
    pub fn SetSortMode(self: ?*anyopaque, sortMode: i32) void {
        qtc.KNSCore__Provider__SearchRequest_SetSortMode(@ptrCast(self), @bitCast(sortMode));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchrequest.html#filter-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider__SearchRequest `
    ///
    /// ## Returns:
    ///
    /// ` provider_enums.Filter `
    ///
    pub fn Filter(self: ?*anyopaque) i32 {
        return qtc.KNSCore__Provider__SearchRequest_Filter(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchrequest.html#filter-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider__SearchRequest `
    ///
    /// ` filter: provider_enums.Filter `
    ///
    pub fn SetFilter(self: ?*anyopaque, filter: i32) void {
        qtc.KNSCore__Provider__SearchRequest_SetFilter(@ptrCast(self), @bitCast(filter));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchrequest.html#searchTerm-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider__SearchRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SearchTerm(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var searchTerm_str = qtc.KNSCore__Provider__SearchRequest_SearchTerm(@ptrCast(self));
        defer qtc.libqt_string_free(&searchTerm_str);
        const searchTerm_ret = allocator.alloc(u8, searchTerm_str.len) catch @panic("knscore__provider__searchrequest.SearchTerm: Memory allocation failed");
        @memcpy(searchTerm_ret, searchTerm_str.data[0..searchTerm_str.len]);
        return searchTerm_ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchrequest.html#searchTerm-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider__SearchRequest `
    ///
    /// ` searchTerm: []const u8 `
    ///
    pub fn SetSearchTerm(self: ?*anyopaque, searchTerm: []const u8) void {
        const searchTerm_str = qtc.libqt_string{
            .len = searchTerm.len,
            .data = searchTerm.ptr,
        };
        qtc.KNSCore__Provider__SearchRequest_SetSearchTerm(@ptrCast(self), searchTerm_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchrequest.html#categories-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider__SearchRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Categories(self: ?*anyopaque, allocator: std.mem.Allocator) []const []const u8 {
        const categories_arr: qtc.libqt_list = qtc.KNSCore__Provider__SearchRequest_Categories(@ptrCast(self));
        var categories_str: [*]qtc.libqt_string = @ptrCast(@alignCast(categories_arr.data));
        defer {
            for (0..categories_arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&categories_str[i]));
            }
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
    /// ` self: QtC.KNSCore__Provider__SearchRequest `
    ///
    /// ` categories: []const []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SetCategories(self: ?*anyopaque, categories: []const []const u8, allocator: std.mem.Allocator) void {
        const categories_arr = allocator.alloc(qtc.libqt_string, categories.len) catch @panic("knscore__provider__searchrequest.SetCategories: Memory allocation failed");
        defer allocator.free(categories_arr);
        for (categories, 0..categories.len) |item, i| {
            categories_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const categories_list = qtc.libqt_list{
            .len = categories.len,
            .data = categories_arr.ptr,
        };
        qtc.KNSCore__Provider__SearchRequest_SetCategories(@ptrCast(self), categories_list);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchrequest.html#page-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider__SearchRequest `
    ///
    pub fn Page(self: ?*anyopaque) i32 {
        return qtc.KNSCore__Provider__SearchRequest_Page(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchrequest.html#page-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider__SearchRequest `
    ///
    /// ` page: i32 `
    ///
    pub fn SetPage(self: ?*anyopaque, page: i32) void {
        qtc.KNSCore__Provider__SearchRequest_SetPage(@ptrCast(self), @bitCast(page));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchrequest.html#pageSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider__SearchRequest `
    ///
    pub fn PageSize(self: ?*anyopaque) i32 {
        return qtc.KNSCore__Provider__SearchRequest_PageSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchrequest.html#pageSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider__SearchRequest `
    ///
    /// ` pageSize: i32 `
    ///
    pub fn SetPageSize(self: ?*anyopaque, pageSize: i32) void {
        qtc.KNSCore__Provider__SearchRequest_SetPageSize(@ptrCast(self), @bitCast(pageSize));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchrequest.html#hashForRequest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider__SearchRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn HashForRequest(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Provider__SearchRequest_HashForRequest(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore__provider__searchrequest.HashForRequest: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchrequest.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider__SearchRequest `
    ///
    /// ` other: QtC.KNSCore__Provider__SearchRequest `
    ///
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.KNSCore__Provider__SearchRequest_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchrequest.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider__SearchRequest `
    ///
    /// ` param1: QtC.KNSCore__Provider__SearchRequest `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KNSCore__Provider__SearchRequest_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KNSCore__Provider__SearchRequest `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.KNSCore__Provider__SearchRequest_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/knscore-provider-categorymetadata.html)
pub const knscore__provider__categorymetadata = struct {
    /// New constructs a new KNSCore::Provider::CategoryMetadata object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.KNSCore__Provider__CategoryMetadata `
    ///
    pub fn New(param1: ?*anyopaque) QtC.KNSCore__Provider__CategoryMetadata {
        return qtc.KNSCore__Provider__CategoryMetadata_new(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-categorymetadata.html#id-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider__CategoryMetadata `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Id(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var id_str = qtc.KNSCore__Provider__CategoryMetadata_Id(@ptrCast(self));
        defer qtc.libqt_string_free(&id_str);
        const id_ret = allocator.alloc(u8, id_str.len) catch @panic("knscore__provider__categorymetadata.Id: Memory allocation failed");
        @memcpy(id_ret, id_str.data[0..id_str.len]);
        return id_ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-categorymetadata.html#id-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider__CategoryMetadata `
    ///
    /// ` id: []const u8 `
    ///
    pub fn SetId(self: ?*anyopaque, id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        qtc.KNSCore__Provider__CategoryMetadata_SetId(@ptrCast(self), id_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-categorymetadata.html#name-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider__CategoryMetadata `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var name_str = qtc.KNSCore__Provider__CategoryMetadata_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&name_str);
        const name_ret = allocator.alloc(u8, name_str.len) catch @panic("knscore__provider__categorymetadata.Name: Memory allocation failed");
        @memcpy(name_ret, name_str.data[0..name_str.len]);
        return name_ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-categorymetadata.html#name-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider__CategoryMetadata `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KNSCore__Provider__CategoryMetadata_SetName(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-categorymetadata.html#displayName-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider__CategoryMetadata `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DisplayName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var displayName_str = qtc.KNSCore__Provider__CategoryMetadata_DisplayName(@ptrCast(self));
        defer qtc.libqt_string_free(&displayName_str);
        const displayName_ret = allocator.alloc(u8, displayName_str.len) catch @panic("knscore__provider__categorymetadata.DisplayName: Memory allocation failed");
        @memcpy(displayName_ret, displayName_str.data[0..displayName_str.len]);
        return displayName_ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-categorymetadata.html#displayName-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider__CategoryMetadata `
    ///
    /// ` displayName: []const u8 `
    ///
    pub fn SetDisplayName(self: ?*anyopaque, displayName: []const u8) void {
        const displayName_str = qtc.libqt_string{
            .len = displayName.len,
            .data = displayName.ptr,
        };
        qtc.KNSCore__Provider__CategoryMetadata_SetDisplayName(@ptrCast(self), displayName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-categorymetadata.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider__CategoryMetadata `
    ///
    /// ` param1: QtC.KNSCore__Provider__CategoryMetadata `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KNSCore__Provider__CategoryMetadata_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KNSCore__Provider__CategoryMetadata `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.KNSCore__Provider__CategoryMetadata_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/knscore-provider-searchpreset.html)
pub const knscore__provider__searchpreset = struct {
    /// New constructs a new KNSCore::Provider::SearchPreset object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.KNSCore__Provider__SearchPreset `
    ///
    pub fn New(param1: ?*anyopaque) QtC.KNSCore__Provider__SearchPreset {
        return qtc.KNSCore__Provider__SearchPreset_new(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchpreset.html#request-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider__SearchPreset `
    ///
    pub fn Request(self: ?*anyopaque) QtC.KNSCore__Provider__SearchRequest {
        return qtc.KNSCore__Provider__SearchPreset_Request(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchpreset.html#request-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider__SearchPreset `
    ///
    /// ` request: QtC.KNSCore__Provider__SearchRequest `
    ///
    pub fn SetRequest(self: ?*anyopaque, request: QtC.KNSCore__Provider__SearchRequest) void {
        qtc.KNSCore__Provider__SearchPreset_SetRequest(@ptrCast(self), @ptrCast(request));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchpreset.html#displayName-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider__SearchPreset `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DisplayName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var displayName_str = qtc.KNSCore__Provider__SearchPreset_DisplayName(@ptrCast(self));
        defer qtc.libqt_string_free(&displayName_str);
        const displayName_ret = allocator.alloc(u8, displayName_str.len) catch @panic("knscore__provider__searchpreset.DisplayName: Memory allocation failed");
        @memcpy(displayName_ret, displayName_str.data[0..displayName_str.len]);
        return displayName_ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchpreset.html#displayName-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider__SearchPreset `
    ///
    /// ` displayName: []const u8 `
    ///
    pub fn SetDisplayName(self: ?*anyopaque, displayName: []const u8) void {
        const displayName_str = qtc.libqt_string{
            .len = displayName.len,
            .data = displayName.ptr,
        };
        qtc.KNSCore__Provider__SearchPreset_SetDisplayName(@ptrCast(self), displayName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchpreset.html#iconName-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider__SearchPreset `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn IconName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var iconName_str = qtc.KNSCore__Provider__SearchPreset_IconName(@ptrCast(self));
        defer qtc.libqt_string_free(&iconName_str);
        const iconName_ret = allocator.alloc(u8, iconName_str.len) catch @panic("knscore__provider__searchpreset.IconName: Memory allocation failed");
        @memcpy(iconName_ret, iconName_str.data[0..iconName_str.len]);
        return iconName_ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchpreset.html#iconName-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider__SearchPreset `
    ///
    /// ` iconName: []const u8 `
    ///
    pub fn SetIconName(self: ?*anyopaque, iconName: []const u8) void {
        const iconName_str = qtc.libqt_string{
            .len = iconName.len,
            .data = iconName.ptr,
        };
        qtc.KNSCore__Provider__SearchPreset_SetIconName(@ptrCast(self), iconName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchpreset.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider__SearchPreset `
    ///
    /// ## Returns:
    ///
    /// ` provider_enums.SearchPresetTypes `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.KNSCore__Provider__SearchPreset_Type(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchpreset.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider__SearchPreset `
    ///
    /// ` type: provider_enums.SearchPresetTypes `
    ///
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.KNSCore__Provider__SearchPreset_SetType(@ptrCast(self), @bitCast(_type));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchpreset.html#providerId-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider__SearchPreset `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ProviderId(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var providerId_str = qtc.KNSCore__Provider__SearchPreset_ProviderId(@ptrCast(self));
        defer qtc.libqt_string_free(&providerId_str);
        const providerId_ret = allocator.alloc(u8, providerId_str.len) catch @panic("knscore__provider__searchpreset.ProviderId: Memory allocation failed");
        @memcpy(providerId_ret, providerId_str.data[0..providerId_str.len]);
        return providerId_ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchpreset.html#providerId-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider__SearchPreset `
    ///
    /// ` providerId: []const u8 `
    ///
    pub fn SetProviderId(self: ?*anyopaque, providerId: []const u8) void {
        const providerId_str = qtc.libqt_string{
            .len = providerId.len,
            .data = providerId.ptr,
        };
        qtc.KNSCore__Provider__SearchPreset_SetProviderId(@ptrCast(self), providerId_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-provider-searchpreset.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Provider__SearchPreset `
    ///
    /// ` param1: QtC.KNSCore__Provider__SearchPreset `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KNSCore__Provider__SearchPreset_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KNSCore__Provider__SearchPreset `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.KNSCore__Provider__SearchPreset_Delete(@ptrCast(self));
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
