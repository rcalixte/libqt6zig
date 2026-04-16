const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QChar = @import("libqt6").QChar;
const QUrl = @import("libqt6").QUrl;
const kurifilter_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html)
pub const KUriFilterSearchProvider = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KUriFilterSearchProvider,

    pub const _is_KUriFilterSearchProvider = {};

    /// New constructs a new KUriFilterSearchProvider object.
    ///
    pub fn New() KUriFilterSearchProvider {
        return .{ .ptr = qtc.KUriFilterSearchProvider_new() };
    }

    /// New2 constructs a new KUriFilterSearchProvider object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KUriFilterSearchProvider `
    ///
    pub fn New2(param1: anytype) KUriFilterSearchProvider {
        comptime _ = @TypeOf(param1)._is_KUriFilterSearchProvider;
        return .{ .ptr = qtc.KUriFilterSearchProvider_new2(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#desktopEntryName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterSearchProvider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DesktopEntryName(self: KUriFilterSearchProvider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUriFilterSearchProvider_DesktopEntryName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kurifiltersearchprovider.DesktopEntryName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterSearchProvider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: KUriFilterSearchProvider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUriFilterSearchProvider_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kurifiltersearchprovider.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#iconName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterSearchProvider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn IconName(self: KUriFilterSearchProvider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUriFilterSearchProvider_IconName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kurifiltersearchprovider.IconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#iconName)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KUriFilterSearchProvider `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnIconName(self: KUriFilterSearchProvider, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KUriFilterSearchProvider_OnIconName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIconName` instead
    ///
    pub const QBaseIconName = SuperIconName;

    /// ### [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#iconName)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterSearchProvider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperIconName(self: KUriFilterSearchProvider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUriFilterSearchProvider_SuperIconName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kurifiltersearchprovider.IconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#keys)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterSearchProvider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Keys(self: KUriFilterSearchProvider, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KUriFilterSearchProvider_Keys(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kurifiltersearchprovider.Keys: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kurifiltersearchprovider.Keys: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#defaultKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterSearchProvider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DefaultKey(self: KUriFilterSearchProvider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUriFilterSearchProvider_DefaultKey(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kurifiltersearchprovider.DefaultKey: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterSearchProvider `
    ///
    /// ` param1: KUriFilterSearchProvider `
    ///
    pub fn OperatorAssign(self: KUriFilterSearchProvider, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KUriFilterSearchProvider;
        qtc.KUriFilterSearchProvider_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#setDesktopEntryName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterSearchProvider `
    ///
    /// ` desktopEntryName: []const u8 `
    ///
    pub fn SetDesktopEntryName(self: KUriFilterSearchProvider, desktopEntryName: []const u8) void {
        const desktopEntryName_str = qtc.libqt_string{
            .len = desktopEntryName.len,
            .data = desktopEntryName.ptr,
        };
        qtc.KUriFilterSearchProvider_SetDesktopEntryName(@ptrCast(self.ptr), desktopEntryName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#setDesktopEntryName)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KUriFilterSearchProvider `
    ///
    /// ` callback: *const fn (self: KUriFilterSearchProvider, desktopEntryName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetDesktopEntryName(self: KUriFilterSearchProvider, callback: *const fn (KUriFilterSearchProvider, [*:0]const u8) callconv(.c) void) void {
        qtc.KUriFilterSearchProvider_OnSetDesktopEntryName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetDesktopEntryName` instead
    ///
    pub const QBaseSetDesktopEntryName = SuperSetDesktopEntryName;

    /// ### [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#setDesktopEntryName)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterSearchProvider `
    ///
    /// ` desktopEntryName: []const u8 `
    ///
    pub fn SuperSetDesktopEntryName(self: KUriFilterSearchProvider, desktopEntryName: []const u8) void {
        const desktopEntryName_str = qtc.libqt_string{
            .len = desktopEntryName.len,
            .data = desktopEntryName.ptr,
        };
        qtc.KUriFilterSearchProvider_SuperSetDesktopEntryName(@ptrCast(self.ptr), desktopEntryName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#setIconName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterSearchProvider `
    ///
    /// ` iconName: []const u8 `
    ///
    pub fn SetIconName(self: KUriFilterSearchProvider, iconName: []const u8) void {
        const iconName_str = qtc.libqt_string{
            .len = iconName.len,
            .data = iconName.ptr,
        };
        qtc.KUriFilterSearchProvider_SetIconName(@ptrCast(self.ptr), iconName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#setIconName)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KUriFilterSearchProvider `
    ///
    /// ` callback: *const fn (self: KUriFilterSearchProvider, iconName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetIconName(self: KUriFilterSearchProvider, callback: *const fn (KUriFilterSearchProvider, [*:0]const u8) callconv(.c) void) void {
        qtc.KUriFilterSearchProvider_OnSetIconName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetIconName` instead
    ///
    pub const QBaseSetIconName = SuperSetIconName;

    /// ### [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#setIconName)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterSearchProvider `
    ///
    /// ` iconName: []const u8 `
    ///
    pub fn SuperSetIconName(self: KUriFilterSearchProvider, iconName: []const u8) void {
        const iconName_str = qtc.libqt_string{
            .len = iconName.len,
            .data = iconName.ptr,
        };
        qtc.KUriFilterSearchProvider_SuperSetIconName(@ptrCast(self.ptr), iconName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#setKeys)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterSearchProvider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` keys: []const []const u8 `
    ///
    pub fn SetKeys(self: KUriFilterSearchProvider, allocator: std.mem.Allocator, keys: []const []const u8) void {
        const keys_arr = allocator.alloc(qtc.libqt_string, keys.len) catch @panic("kurifiltersearchprovider.SetKeys: Memory allocation failed");
        defer allocator.free(keys_arr);
        for (keys, 0..keys.len) |item, i|
            keys_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const keys_list = qtc.libqt_list{
            .len = keys.len,
            .data = keys_arr.ptr,
        };
        qtc.KUriFilterSearchProvider_SetKeys(@ptrCast(self.ptr), keys_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#setKeys)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KUriFilterSearchProvider `
    ///
    /// ` callback: *const fn (self: KUriFilterSearchProvider, keys: ?[*:null]?[*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetKeys(self: KUriFilterSearchProvider, callback: *const fn (KUriFilterSearchProvider, ?[*:null]?[*:0]const u8) callconv(.c) void) void {
        qtc.KUriFilterSearchProvider_OnSetKeys(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetKeys` instead
    ///
    pub const QBaseSetKeys = SuperSetKeys;

    /// ### [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#setKeys)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterSearchProvider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` keys: []const []const u8 `
    ///
    pub fn SuperSetKeys(self: KUriFilterSearchProvider, allocator: std.mem.Allocator, keys: []const []const u8) void {
        const keys_arr = allocator.alloc(qtc.libqt_string, keys.len) catch @panic("kurifiltersearchprovider.SetKeys: Memory allocation failed");
        defer allocator.free(keys_arr);
        for (keys, 0..keys.len) |item, i|
            keys_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const keys_list = qtc.libqt_list{
            .len = keys.len,
            .data = keys_arr.ptr,
        };
        qtc.KUriFilterSearchProvider_SuperSetKeys(@ptrCast(self.ptr), keys_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterSearchProvider `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: KUriFilterSearchProvider, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KUriFilterSearchProvider_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#setName)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KUriFilterSearchProvider `
    ///
    /// ` callback: *const fn (self: KUriFilterSearchProvider, name: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetName(self: KUriFilterSearchProvider, callback: *const fn (KUriFilterSearchProvider, [*:0]const u8) callconv(.c) void) void {
        qtc.KUriFilterSearchProvider_OnSetName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetName` instead
    ///
    pub const QBaseSetName = SuperSetName;

    /// ### [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#setName)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterSearchProvider `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SuperSetName(self: KUriFilterSearchProvider, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KUriFilterSearchProvider_SuperSetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#dtor.KUriFilterSearchProvider)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KUriFilterSearchProvider `
    ///
    pub fn Delete(self: KUriFilterSearchProvider) void {
        qtc.KUriFilterSearchProvider_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kurifilterdata.html)
pub const KUriFilterData = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KUriFilterData,

    pub const _is_KUriFilterData = {};

    /// New constructs a new KUriFilterData object.
    ///
    pub fn New() KUriFilterData {
        return .{ .ptr = qtc.KUriFilterData_new() };
    }

    /// New2 constructs a new KUriFilterData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    pub fn New2(url: anytype) KUriFilterData {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KUriFilterData_new2(@ptrCast(url.ptr)) };
    }

    /// New3 constructs a new KUriFilterData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` url: []const u8 `
    ///
    pub fn New3(url: []const u8) KUriFilterData {
        const url_str = qtc.libqt_string{
            .len = url.len,
            .data = url.ptr,
        };
        return .{ .ptr = qtc.KUriFilterData_new3(url_str) };
    }

    /// New4 constructs a new KUriFilterData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KUriFilterData `
    ///
    pub fn New4(other: anytype) KUriFilterData {
        comptime _ = @TypeOf(other)._is_KUriFilterData;
        return .{ .ptr = qtc.KUriFilterData_new4(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#uri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterData `
    ///
    pub fn Uri(self: KUriFilterData) QUrl {
        return .{ .ptr = qtc.KUriFilterData_Uri(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#errorMsg)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorMsg(self: KUriFilterData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUriFilterData_ErrorMsg(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kurifilterdata.ErrorMsg: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#uriType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterData `
    ///
    /// ## Returns:
    ///
    /// ` kurifilter_enums.UriTypes `
    ///
    pub fn UriType(self: KUriFilterData) i32 {
        return qtc.KUriFilterData_UriType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#absolutePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AbsolutePath(self: KUriFilterData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUriFilterData_AbsolutePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kurifilterdata.AbsolutePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#hasAbsolutePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterData `
    ///
    pub fn HasAbsolutePath(self: KUriFilterData) bool {
        return qtc.KUriFilterData_HasAbsolutePath(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#argsAndOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ArgsAndOptions(self: KUriFilterData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUriFilterData_ArgsAndOptions(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kurifilterdata.ArgsAndOptions: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#hasArgsAndOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterData `
    ///
    pub fn HasArgsAndOptions(self: KUriFilterData) bool {
        return qtc.KUriFilterData_HasArgsAndOptions(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#checkForExecutables)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterData `
    ///
    pub fn CheckForExecutables(self: KUriFilterData) bool {
        return qtc.KUriFilterData_CheckForExecutables(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#typedString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TypedString(self: KUriFilterData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUriFilterData_TypedString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kurifilterdata.TypedString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#searchTerm)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SearchTerm(self: KUriFilterData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUriFilterData_SearchTerm(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kurifilterdata.SearchTerm: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#searchTermSeparator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterData `
    ///
    pub fn SearchTermSeparator(self: KUriFilterData) QChar {
        return .{ .ptr = qtc.KUriFilterData_SearchTermSeparator(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#searchProvider)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SearchProvider(self: KUriFilterData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUriFilterData_SearchProvider(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kurifilterdata.SearchProvider: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#preferredSearchProviders)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PreferredSearchProviders(self: KUriFilterData, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KUriFilterData_PreferredSearchProviders(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kurifilterdata.PreferredSearchProviders: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kurifilterdata.PreferredSearchProviders: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#queryForSearchProvider)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterData `
    ///
    /// ` provider: []const u8 `
    ///
    pub fn QueryForSearchProvider(self: KUriFilterData, provider: []const u8) KUriFilterSearchProvider {
        const provider_str = qtc.libqt_string{
            .len = provider.len,
            .data = provider.ptr,
        };
        return .{ .ptr = qtc.KUriFilterData_QueryForSearchProvider(@ptrCast(self.ptr), provider_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#queryForPreferredSearchProvider)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` provider: []const u8 `
    ///
    pub fn QueryForPreferredSearchProvider(self: KUriFilterData, allocator: std.mem.Allocator, provider: []const u8) []const u8 {
        const provider_str = qtc.libqt_string{
            .len = provider.len,
            .data = provider.ptr,
        };
        var _str = qtc.KUriFilterData_QueryForPreferredSearchProvider(@ptrCast(self.ptr), provider_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kurifilterdata.QueryForPreferredSearchProvider: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#allQueriesForSearchProvider)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` provider: []const u8 `
    ///
    pub fn AllQueriesForSearchProvider(self: KUriFilterData, allocator: std.mem.Allocator, provider: []const u8) []const []const u8 {
        const provider_str = qtc.libqt_string{
            .len = provider.len,
            .data = provider.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KUriFilterData_AllQueriesForSearchProvider(@ptrCast(self.ptr), provider_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kurifilterdata.AllQueriesForSearchProvider: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kurifilterdata.AllQueriesForSearchProvider: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#iconNameForPreferredSearchProvider)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` provider: []const u8 `
    ///
    pub fn IconNameForPreferredSearchProvider(self: KUriFilterData, allocator: std.mem.Allocator, provider: []const u8) []const u8 {
        const provider_str = qtc.libqt_string{
            .len = provider.len,
            .data = provider.ptr,
        };
        var _str = qtc.KUriFilterData_IconNameForPreferredSearchProvider(@ptrCast(self.ptr), provider_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kurifilterdata.IconNameForPreferredSearchProvider: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#alternateSearchProviders)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AlternateSearchProviders(self: KUriFilterData, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KUriFilterData_AlternateSearchProviders(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kurifilterdata.AlternateSearchProviders: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kurifilterdata.AlternateSearchProviders: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#alternateDefaultSearchProvider)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AlternateDefaultSearchProvider(self: KUriFilterData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUriFilterData_AlternateDefaultSearchProvider(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kurifilterdata.AlternateDefaultSearchProvider: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#defaultUrlScheme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DefaultUrlScheme(self: KUriFilterData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUriFilterData_DefaultUrlScheme(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kurifilterdata.DefaultUrlScheme: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#searchFilteringOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterData `
    ///
    /// ## Returns:
    ///
    /// ` flag of kurifilter_enums.SearchFilterOption `
    ///
    pub fn SearchFilteringOptions(self: KUriFilterData) i32 {
        return qtc.KUriFilterData_SearchFilteringOptions(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#iconName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn IconName(self: KUriFilterData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUriFilterData_IconName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kurifilterdata.IconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#setCheckForExecutables)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterData `
    ///
    /// ` check: bool `
    ///
    pub fn SetCheckForExecutables(self: KUriFilterData, check: bool) void {
        qtc.KUriFilterData_SetCheckForExecutables(@ptrCast(self.ptr), check);
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterData `
    ///
    /// ` url: QUrl `
    ///
    pub fn SetData(self: KUriFilterData, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KUriFilterData_SetData(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterData `
    ///
    /// ` url: []const u8 `
    ///
    pub fn SetData2(self: KUriFilterData, url: []const u8) void {
        const url_str = qtc.libqt_string{
            .len = url.len,
            .data = url.ptr,
        };
        qtc.KUriFilterData_SetData2(@ptrCast(self.ptr), url_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#setAbsolutePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterData `
    ///
    /// ` abs_path: []const u8 `
    ///
    pub fn SetAbsolutePath(self: KUriFilterData, abs_path: []const u8) bool {
        const abs_path_str = qtc.libqt_string{
            .len = abs_path.len,
            .data = abs_path.ptr,
        };
        return qtc.KUriFilterData_SetAbsolutePath(@ptrCast(self.ptr), abs_path_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#setAlternateSearchProviders)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` providers: []const []const u8 `
    ///
    pub fn SetAlternateSearchProviders(self: KUriFilterData, allocator: std.mem.Allocator, providers: []const []const u8) void {
        const providers_arr = allocator.alloc(qtc.libqt_string, providers.len) catch @panic("kurifilterdata.SetAlternateSearchProviders: Memory allocation failed");
        defer allocator.free(providers_arr);
        for (providers, 0..providers.len) |item, i|
            providers_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const providers_list = qtc.libqt_list{
            .len = providers.len,
            .data = providers_arr.ptr,
        };
        qtc.KUriFilterData_SetAlternateSearchProviders(@ptrCast(self.ptr), providers_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#setAlternateDefaultSearchProvider)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterData `
    ///
    /// ` provider: []const u8 `
    ///
    pub fn SetAlternateDefaultSearchProvider(self: KUriFilterData, provider: []const u8) void {
        const provider_str = qtc.libqt_string{
            .len = provider.len,
            .data = provider.ptr,
        };
        qtc.KUriFilterData_SetAlternateDefaultSearchProvider(@ptrCast(self.ptr), provider_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#setDefaultUrlScheme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterData `
    ///
    /// ` defaultUrlScheme: []const u8 `
    ///
    pub fn SetDefaultUrlScheme(self: KUriFilterData, defaultUrlScheme: []const u8) void {
        const defaultUrlScheme_str = qtc.libqt_string{
            .len = defaultUrlScheme.len,
            .data = defaultUrlScheme.ptr,
        };
        qtc.KUriFilterData_SetDefaultUrlScheme(@ptrCast(self.ptr), defaultUrlScheme_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#setSearchFilteringOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterData `
    ///
    /// ` options: flag of kurifilter_enums.SearchFilterOption `
    ///
    pub fn SetSearchFilteringOptions(self: KUriFilterData, options: i32) void {
        qtc.KUriFilterData_SetSearchFilteringOptions(@ptrCast(self.ptr), @bitCast(options));
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterData `
    ///
    /// ` url: QUrl `
    ///
    pub fn OperatorAssign(self: KUriFilterData, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KUriFilterData_OperatorAssign(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterData `
    ///
    /// ` url: []const u8 `
    ///
    pub fn OperatorAssign2(self: KUriFilterData, url: []const u8) void {
        const url_str = qtc.libqt_string{
            .len = url.len,
            .data = url.ptr,
        };
        qtc.KUriFilterData_OperatorAssign2(@ptrCast(self.ptr), url_str);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#dtor.KUriFilterData)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KUriFilterData `
    ///
    pub fn Delete(self: KUriFilterData) void {
        qtc.KUriFilterData_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kurifilter.html)
pub const KUriFilter = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kurifilter.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KUriFilter,

    pub const _is_KUriFilter = {};

    /// ### [Upstream resources](https://api.kde.org/kurifilter.html#self)
    ///
    pub fn Self() KUriFilter {
        return .{ .ptr = qtc.KUriFilter_Self() };
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilter.html#filterUri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilter `
    ///
    /// ` data: KUriFilterData `
    ///
    pub fn FilterUri(self: KUriFilter, data: anytype) bool {
        comptime _ = @TypeOf(data)._is_KUriFilterData;
        return qtc.KUriFilter_FilterUri(@ptrCast(self.ptr), @ptrCast(data.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilter.html#filterUri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilter `
    ///
    /// ` uri: QUrl `
    ///
    pub fn FilterUri2(self: KUriFilter, uri: anytype) bool {
        comptime _ = @TypeOf(uri)._is_QUrl;
        return qtc.KUriFilter_FilterUri2(@ptrCast(self.ptr), @ptrCast(uri.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilter.html#filterUri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilter `
    ///
    /// ` uri: []const u8 `
    ///
    pub fn FilterUri3(self: KUriFilter, uri: []const u8) bool {
        const uri_str = qtc.libqt_string{
            .len = uri.len,
            .data = uri.ptr,
        };
        return qtc.KUriFilter_FilterUri3(@ptrCast(self.ptr), uri_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilter.html#filteredUri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilter `
    ///
    /// ` uri: QUrl `
    ///
    pub fn FilteredUri(self: KUriFilter, uri: anytype) QUrl {
        comptime _ = @TypeOf(uri)._is_QUrl;
        return .{ .ptr = qtc.KUriFilter_FilteredUri(@ptrCast(self.ptr), @ptrCast(uri.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilter.html#filteredUri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` uri: []const u8 `
    ///
    pub fn FilteredUri2(self: KUriFilter, allocator: std.mem.Allocator, uri: []const u8) []const u8 {
        const uri_str = qtc.libqt_string{
            .len = uri.len,
            .data = uri.ptr,
        };
        var _str = qtc.KUriFilter_FilteredUri2(@ptrCast(self.ptr), uri_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kurifilter.FilteredUri2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilter.html#filterSearchUri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilter `
    ///
    /// ` data: KUriFilterData `
    ///
    /// ` types: flag of kurifilter_enums.SearchFilterType `
    ///
    pub fn FilterSearchUri(self: KUriFilter, data: anytype, types: i32) bool {
        comptime _ = @TypeOf(data)._is_KUriFilterData;
        return qtc.KUriFilter_FilterSearchUri(@ptrCast(self.ptr), @ptrCast(data.ptr), @bitCast(types));
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilter.html#pluginNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PluginNames(self: KUriFilter, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KUriFilter_PluginNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kurifilter.PluginNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kurifilter.PluginNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilter.html#filterUri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` data: KUriFilterData `
    ///
    /// ` filters: []const []const u8 `
    ///
    pub fn FilterUri22(self: KUriFilter, allocator: std.mem.Allocator, data: anytype, filters: []const []const u8) bool {
        comptime _ = @TypeOf(data)._is_KUriFilterData;
        const filters_arr = allocator.alloc(qtc.libqt_string, filters.len) catch @panic("kurifilter.FilterUri22: Memory allocation failed");
        defer allocator.free(filters_arr);
        for (filters, 0..filters.len) |item, i|
            filters_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const filters_list = qtc.libqt_list{
            .len = filters.len,
            .data = filters_arr.ptr,
        };
        return qtc.KUriFilter_FilterUri22(@ptrCast(self.ptr), @ptrCast(data.ptr), filters_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilter.html#filterUri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` uri: QUrl `
    ///
    /// ` filters: []const []const u8 `
    ///
    pub fn FilterUri23(self: KUriFilter, allocator: std.mem.Allocator, uri: anytype, filters: []const []const u8) bool {
        comptime _ = @TypeOf(uri)._is_QUrl;
        const filters_arr = allocator.alloc(qtc.libqt_string, filters.len) catch @panic("kurifilter.FilterUri23: Memory allocation failed");
        defer allocator.free(filters_arr);
        for (filters, 0..filters.len) |item, i|
            filters_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const filters_list = qtc.libqt_list{
            .len = filters.len,
            .data = filters_arr.ptr,
        };
        return qtc.KUriFilter_FilterUri23(@ptrCast(self.ptr), @ptrCast(uri.ptr), filters_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilter.html#filterUri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` uri: []const u8 `
    ///
    /// ` filters: []const []const u8 `
    ///
    pub fn FilterUri24(self: KUriFilter, allocator: std.mem.Allocator, uri: []const u8, filters: []const []const u8) bool {
        const uri_str = qtc.libqt_string{
            .len = uri.len,
            .data = uri.ptr,
        };
        const filters_arr = allocator.alloc(qtc.libqt_string, filters.len) catch @panic("kurifilter.FilterUri24: Memory allocation failed");
        defer allocator.free(filters_arr);
        for (filters, 0..filters.len) |item, i|
            filters_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const filters_list = qtc.libqt_list{
            .len = filters.len,
            .data = filters_arr.ptr,
        };
        return qtc.KUriFilter_FilterUri24(@ptrCast(self.ptr), uri_str, filters_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilter.html#filteredUri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` uri: QUrl `
    ///
    /// ` filters: []const []const u8 `
    ///
    pub fn FilteredUri22(self: KUriFilter, allocator: std.mem.Allocator, uri: anytype, filters: []const []const u8) QUrl {
        comptime _ = @TypeOf(uri)._is_QUrl;
        const filters_arr = allocator.alloc(qtc.libqt_string, filters.len) catch @panic("kurifilter.FilteredUri22: Memory allocation failed");
        defer allocator.free(filters_arr);
        for (filters, 0..filters.len) |item, i|
            filters_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const filters_list = qtc.libqt_list{
            .len = filters.len,
            .data = filters_arr.ptr,
        };
        return .{ .ptr = qtc.KUriFilter_FilteredUri22(@ptrCast(self.ptr), @ptrCast(uri.ptr), filters_list) };
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilter.html#filteredUri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` uri: []const u8 `
    ///
    /// ` filters: []const []const u8 `
    ///
    pub fn FilteredUri23(self: KUriFilter, allocator: std.mem.Allocator, uri: []const u8, filters: []const []const u8) []const u8 {
        const uri_str = qtc.libqt_string{
            .len = uri.len,
            .data = uri.ptr,
        };
        const filters_arr = allocator.alloc(qtc.libqt_string, filters.len) catch @panic("kurifilter.FilteredUri23: Memory allocation failed");
        defer allocator.free(filters_arr);
        for (filters, 0..filters.len) |item, i|
            filters_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const filters_list = qtc.libqt_list{
            .len = filters.len,
            .data = filters_arr.ptr,
        };
        var _str = qtc.KUriFilter_FilteredUri23(@ptrCast(self.ptr), uri_str, filters_list);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kurifilter.FilteredUri23: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kurifilter.html#dtor.KUriFilter)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KUriFilter `
    ///
    pub fn Delete(self: KUriFilter) void {
        qtc.KUriFilter_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kurifilter.html#public-types)
pub const enums = struct {
    pub const UriTypes = enum(i32) {
        pub const NetProtocol: i32 = 0;
        pub const LocalFile: i32 = 1;
        pub const LocalDir: i32 = 2;
        pub const Executable: i32 = 3;
        pub const Help: i32 = 4;
        pub const Shell: i32 = 5;
        pub const Blocked: i32 = 6;
        pub const Error: i32 = 7;
        pub const Unknown: i32 = 8;
    };

    pub const SearchFilterOption = enum(i32) {
        pub const SearchFilterOptionNone: i32 = 0;
        pub const RetrieveSearchProvidersOnly: i32 = 1;
        pub const RetrievePreferredSearchProvidersOnly: i32 = 2;
        pub const RetrieveAvailableSearchProvidersOnly: i32 = 3;
    };

    pub const SearchFilterType = enum(i32) {
        pub const NormalTextFilter: i32 = 1;
        pub const WebShortcutFilter: i32 = 2;
    };
};
