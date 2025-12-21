const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kurifilter_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html)
pub const kurifiltersearchprovider = struct {
    /// New constructs a new KUriFilterSearchProvider object.
    ///
    pub fn New() QtC.KUriFilterSearchProvider {
        return qtc.KUriFilterSearchProvider_new();
    }

    /// New2 constructs a new KUriFilterSearchProvider object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.KUriFilterSearchProvider `
    ///
    pub fn New2(param1: ?*anyopaque) QtC.KUriFilterSearchProvider {
        return qtc.KUriFilterSearchProvider_new2(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#desktopEntryName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUriFilterSearchProvider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DesktopEntryName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUriFilterSearchProvider_DesktopEntryName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kurifiltersearchprovider.DesktopEntryName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUriFilterSearchProvider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUriFilterSearchProvider_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kurifiltersearchprovider.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#iconName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUriFilterSearchProvider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn IconName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUriFilterSearchProvider_IconName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kurifiltersearchprovider.IconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#iconName)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KUriFilterSearchProvider `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnIconName(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KUriFilterSearchProvider_OnIconName(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#iconName)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUriFilterSearchProvider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn QBaseIconName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUriFilterSearchProvider_QBaseIconName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kurifiltersearchprovider.IconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#keys)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUriFilterSearchProvider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Keys(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KUriFilterSearchProvider_Keys(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// ` self: QtC.KUriFilterSearchProvider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DefaultKey(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUriFilterSearchProvider_DefaultKey(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kurifiltersearchprovider.DefaultKey: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUriFilterSearchProvider `
    ///
    /// ` param1: QtC.KUriFilterSearchProvider `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KUriFilterSearchProvider_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#setDesktopEntryName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUriFilterSearchProvider `
    ///
    /// ` desktopEntryName: []const u8 `
    ///
    pub fn SetDesktopEntryName(self: ?*anyopaque, desktopEntryName: []const u8) void {
        const desktopEntryName_str = qtc.libqt_string{
            .len = desktopEntryName.len,
            .data = desktopEntryName.ptr,
        };
        qtc.KUriFilterSearchProvider_SetDesktopEntryName(@ptrCast(self), desktopEntryName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#setDesktopEntryName)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KUriFilterSearchProvider `
    ///
    /// ` callback: *const fn (self: QtC.KUriFilterSearchProvider, desktopEntryName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetDesktopEntryName(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KUriFilterSearchProvider_OnSetDesktopEntryName(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#setDesktopEntryName)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUriFilterSearchProvider `
    ///
    /// ` desktopEntryName: []const u8 `
    ///
    pub fn QBaseSetDesktopEntryName(self: ?*anyopaque, desktopEntryName: []const u8) void {
        const desktopEntryName_str = qtc.libqt_string{
            .len = desktopEntryName.len,
            .data = desktopEntryName.ptr,
        };
        qtc.KUriFilterSearchProvider_QBaseSetDesktopEntryName(@ptrCast(self), desktopEntryName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#setIconName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUriFilterSearchProvider `
    ///
    /// ` iconName: []const u8 `
    ///
    pub fn SetIconName(self: ?*anyopaque, iconName: []const u8) void {
        const iconName_str = qtc.libqt_string{
            .len = iconName.len,
            .data = iconName.ptr,
        };
        qtc.KUriFilterSearchProvider_SetIconName(@ptrCast(self), iconName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#setIconName)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KUriFilterSearchProvider `
    ///
    /// ` callback: *const fn (self: QtC.KUriFilterSearchProvider, iconName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetIconName(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KUriFilterSearchProvider_OnSetIconName(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#setIconName)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUriFilterSearchProvider `
    ///
    /// ` iconName: []const u8 `
    ///
    pub fn QBaseSetIconName(self: ?*anyopaque, iconName: []const u8) void {
        const iconName_str = qtc.libqt_string{
            .len = iconName.len,
            .data = iconName.ptr,
        };
        qtc.KUriFilterSearchProvider_QBaseSetIconName(@ptrCast(self), iconName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#setKeys)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUriFilterSearchProvider `
    ///
    /// ` keys: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SetKeys(self: ?*anyopaque, keys: [][]const u8, allocator: std.mem.Allocator) void {
        var keys_arr = allocator.alloc(qtc.libqt_string, keys.len) catch @panic("kurifiltersearchprovider.SetKeys: Memory allocation failed");
        defer allocator.free(keys_arr);
        for (keys, 0..keys.len) |item, i| {
            keys_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const keys_list = qtc.libqt_list{
            .len = keys.len,
            .data = keys_arr.ptr,
        };
        qtc.KUriFilterSearchProvider_SetKeys(@ptrCast(self), keys_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#setKeys)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KUriFilterSearchProvider `
    ///
    /// ` callback: *const fn (self: QtC.KUriFilterSearchProvider, keys: [*][*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetKeys(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*][*:0]const u8) callconv(.c) void) void {
        qtc.KUriFilterSearchProvider_OnSetKeys(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#setKeys)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUriFilterSearchProvider `
    ///
    /// ` keys: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn QBaseSetKeys(self: ?*anyopaque, keys: [][]const u8, allocator: std.mem.Allocator) void {
        var keys_arr = allocator.alloc(qtc.libqt_string, keys.len) catch @panic("kurifiltersearchprovider.SetKeys: Memory allocation failed");
        defer allocator.free(keys_arr);
        for (keys, 0..keys.len) |item, i| {
            keys_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const keys_list = qtc.libqt_list{
            .len = keys.len,
            .data = keys_arr.ptr,
        };
        qtc.KUriFilterSearchProvider_QBaseSetKeys(@ptrCast(self), keys_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUriFilterSearchProvider `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KUriFilterSearchProvider_SetName(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#setName)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KUriFilterSearchProvider `
    ///
    /// ` callback: *const fn (self: QtC.KUriFilterSearchProvider, name: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetName(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KUriFilterSearchProvider_OnSetName(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#setName)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUriFilterSearchProvider `
    ///
    /// ` name: []const u8 `
    ///
    pub fn QBaseSetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KUriFilterSearchProvider_QBaseSetName(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#dtor.KUriFilterSearchProvider)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KUriFilterSearchProvider `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KUriFilterSearchProvider_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/kurifilterdata.html)
pub const kurifilterdata = struct {
    /// New constructs a new KUriFilterData object.
    ///
    pub fn New() QtC.KUriFilterData {
        return qtc.KUriFilterData_new();
    }

    /// New2 constructs a new KUriFilterData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn New2(url: ?*anyopaque) QtC.KUriFilterData {
        return qtc.KUriFilterData_new2(@ptrCast(url));
    }

    /// New3 constructs a new KUriFilterData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` url: []const u8 `
    ///
    pub fn New3(url: []const u8) QtC.KUriFilterData {
        const url_str = qtc.libqt_string{
            .len = url.len,
            .data = url.ptr,
        };

        return qtc.KUriFilterData_new3(url_str);
    }

    /// New4 constructs a new KUriFilterData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.KUriFilterData `
    ///
    pub fn New4(other: ?*anyopaque) QtC.KUriFilterData {
        return qtc.KUriFilterData_new4(@ptrCast(other));
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#uri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUriFilterData `
    ///
    pub fn Uri(self: ?*anyopaque) QtC.QUrl {
        return qtc.KUriFilterData_Uri(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#errorMsg)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUriFilterData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorMsg(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUriFilterData_ErrorMsg(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kurifilterdata.ErrorMsg: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#uriType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUriFilterData `
    ///
    /// ## Returns:
    ///
    /// ` kurifilter_enums.UriTypes `
    ///
    pub fn UriType(self: ?*anyopaque) i32 {
        return qtc.KUriFilterData_UriType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#absolutePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUriFilterData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AbsolutePath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUriFilterData_AbsolutePath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kurifilterdata.AbsolutePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#hasAbsolutePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUriFilterData `
    ///
    pub fn HasAbsolutePath(self: ?*anyopaque) bool {
        return qtc.KUriFilterData_HasAbsolutePath(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#argsAndOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUriFilterData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ArgsAndOptions(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUriFilterData_ArgsAndOptions(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kurifilterdata.ArgsAndOptions: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#hasArgsAndOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUriFilterData `
    ///
    pub fn HasArgsAndOptions(self: ?*anyopaque) bool {
        return qtc.KUriFilterData_HasArgsAndOptions(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#checkForExecutables)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUriFilterData `
    ///
    pub fn CheckForExecutables(self: ?*anyopaque) bool {
        return qtc.KUriFilterData_CheckForExecutables(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#typedString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUriFilterData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TypedString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUriFilterData_TypedString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kurifilterdata.TypedString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#searchTerm)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUriFilterData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SearchTerm(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUriFilterData_SearchTerm(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kurifilterdata.SearchTerm: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#searchTermSeparator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUriFilterData `
    ///
    pub fn SearchTermSeparator(self: ?*anyopaque) QtC.QChar {
        return qtc.KUriFilterData_SearchTermSeparator(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#searchProvider)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUriFilterData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SearchProvider(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUriFilterData_SearchProvider(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kurifilterdata.SearchProvider: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#preferredSearchProviders)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUriFilterData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PreferredSearchProviders(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KUriFilterData_PreferredSearchProviders(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// ` self: QtC.KUriFilterData `
    ///
    /// ` provider: []const u8 `
    ///
    pub fn QueryForSearchProvider(self: ?*anyopaque, provider: []const u8) QtC.KUriFilterSearchProvider {
        const provider_str = qtc.libqt_string{
            .len = provider.len,
            .data = provider.ptr,
        };
        return qtc.KUriFilterData_QueryForSearchProvider(@ptrCast(self), provider_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#queryForPreferredSearchProvider)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUriFilterData `
    ///
    /// ` provider: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn QueryForPreferredSearchProvider(self: ?*anyopaque, provider: []const u8, allocator: std.mem.Allocator) []const u8 {
        const provider_str = qtc.libqt_string{
            .len = provider.len,
            .data = provider.ptr,
        };
        var _str = qtc.KUriFilterData_QueryForPreferredSearchProvider(@ptrCast(self), provider_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kurifilterdata.QueryForPreferredSearchProvider: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#allQueriesForSearchProvider)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUriFilterData `
    ///
    /// ` provider: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AllQueriesForSearchProvider(self: ?*anyopaque, provider: []const u8, allocator: std.mem.Allocator) [][]const u8 {
        const provider_str = qtc.libqt_string{
            .len = provider.len,
            .data = provider.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KUriFilterData_AllQueriesForSearchProvider(@ptrCast(self), provider_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// ` self: QtC.KUriFilterData `
    ///
    /// ` provider: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn IconNameForPreferredSearchProvider(self: ?*anyopaque, provider: []const u8, allocator: std.mem.Allocator) []const u8 {
        const provider_str = qtc.libqt_string{
            .len = provider.len,
            .data = provider.ptr,
        };
        var _str = qtc.KUriFilterData_IconNameForPreferredSearchProvider(@ptrCast(self), provider_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kurifilterdata.IconNameForPreferredSearchProvider: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#alternateSearchProviders)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUriFilterData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AlternateSearchProviders(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KUriFilterData_AlternateSearchProviders(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// ` self: QtC.KUriFilterData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AlternateDefaultSearchProvider(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUriFilterData_AlternateDefaultSearchProvider(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kurifilterdata.AlternateDefaultSearchProvider: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#defaultUrlScheme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUriFilterData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DefaultUrlScheme(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUriFilterData_DefaultUrlScheme(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kurifilterdata.DefaultUrlScheme: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#searchFilteringOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUriFilterData `
    ///
    /// ## Returns:
    ///
    /// ` flag of kurifilter_enums.SearchFilterOption `
    ///
    pub fn SearchFilteringOptions(self: ?*anyopaque) i32 {
        return qtc.KUriFilterData_SearchFilteringOptions(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#iconName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUriFilterData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn IconName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUriFilterData_IconName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kurifilterdata.IconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#setCheckForExecutables)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUriFilterData `
    ///
    /// ` check: bool `
    ///
    pub fn SetCheckForExecutables(self: ?*anyopaque, check: bool) void {
        qtc.KUriFilterData_SetCheckForExecutables(@ptrCast(self), check);
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUriFilterData `
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn SetData(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.KUriFilterData_SetData(@ptrCast(self), @ptrCast(url));
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUriFilterData `
    ///
    /// ` url: []const u8 `
    ///
    pub fn SetData2(self: ?*anyopaque, url: []const u8) void {
        const url_str = qtc.libqt_string{
            .len = url.len,
            .data = url.ptr,
        };
        qtc.KUriFilterData_SetData2(@ptrCast(self), url_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#setAbsolutePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUriFilterData `
    ///
    /// ` abs_path: []const u8 `
    ///
    pub fn SetAbsolutePath(self: ?*anyopaque, abs_path: []const u8) bool {
        const abs_path_str = qtc.libqt_string{
            .len = abs_path.len,
            .data = abs_path.ptr,
        };
        return qtc.KUriFilterData_SetAbsolutePath(@ptrCast(self), abs_path_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#setAlternateSearchProviders)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUriFilterData `
    ///
    /// ` providers: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SetAlternateSearchProviders(self: ?*anyopaque, providers: [][]const u8, allocator: std.mem.Allocator) void {
        var providers_arr = allocator.alloc(qtc.libqt_string, providers.len) catch @panic("kurifilterdata.SetAlternateSearchProviders: Memory allocation failed");
        defer allocator.free(providers_arr);
        for (providers, 0..providers.len) |item, i| {
            providers_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const providers_list = qtc.libqt_list{
            .len = providers.len,
            .data = providers_arr.ptr,
        };
        qtc.KUriFilterData_SetAlternateSearchProviders(@ptrCast(self), providers_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#setAlternateDefaultSearchProvider)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUriFilterData `
    ///
    /// ` provider: []const u8 `
    ///
    pub fn SetAlternateDefaultSearchProvider(self: ?*anyopaque, provider: []const u8) void {
        const provider_str = qtc.libqt_string{
            .len = provider.len,
            .data = provider.ptr,
        };
        qtc.KUriFilterData_SetAlternateDefaultSearchProvider(@ptrCast(self), provider_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#setDefaultUrlScheme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUriFilterData `
    ///
    /// ` defaultUrlScheme: []const u8 `
    ///
    pub fn SetDefaultUrlScheme(self: ?*anyopaque, defaultUrlScheme: []const u8) void {
        const defaultUrlScheme_str = qtc.libqt_string{
            .len = defaultUrlScheme.len,
            .data = defaultUrlScheme.ptr,
        };
        qtc.KUriFilterData_SetDefaultUrlScheme(@ptrCast(self), defaultUrlScheme_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#setSearchFilteringOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUriFilterData `
    ///
    /// ` options: flag of kurifilter_enums.SearchFilterOption `
    ///
    pub fn SetSearchFilteringOptions(self: ?*anyopaque, options: i32) void {
        qtc.KUriFilterData_SetSearchFilteringOptions(@ptrCast(self), @intCast(options));
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUriFilterData `
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.KUriFilterData_OperatorAssign(@ptrCast(self), @ptrCast(url));
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUriFilterData `
    ///
    /// ` url: []const u8 `
    ///
    pub fn OperatorAssign2(self: ?*anyopaque, url: []const u8) void {
        const url_str = qtc.libqt_string{
            .len = url.len,
            .data = url.ptr,
        };
        qtc.KUriFilterData_OperatorAssign2(@ptrCast(self), url_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#dtor.KUriFilterData)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KUriFilterData `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KUriFilterData_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/kurifilter.html)
pub const kurifilter = struct {
    /// ### [Upstream resources](https://api.kde.org/kurifilter.html#self)
    ///
    pub fn Self() QtC.KUriFilter {
        return qtc.KUriFilter_Self();
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilter.html#filterUri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUriFilter `
    ///
    /// ` data: QtC.KUriFilterData `
    ///
    pub fn FilterUri(self: ?*anyopaque, data: ?*anyopaque) bool {
        return qtc.KUriFilter_FilterUri(@ptrCast(self), @ptrCast(data));
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilter.html#filterUri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUriFilter `
    ///
    /// ` uri: QtC.QUrl `
    ///
    pub fn FilterUri2(self: ?*anyopaque, uri: ?*anyopaque) bool {
        return qtc.KUriFilter_FilterUri2(@ptrCast(self), @ptrCast(uri));
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilter.html#filterUri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUriFilter `
    ///
    /// ` uri: []const u8 `
    ///
    pub fn FilterUri3(self: ?*anyopaque, uri: []const u8) bool {
        const uri_str = qtc.libqt_string{
            .len = uri.len,
            .data = uri.ptr,
        };
        return qtc.KUriFilter_FilterUri3(@ptrCast(self), uri_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilter.html#filteredUri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUriFilter `
    ///
    /// ` uri: QtC.QUrl `
    ///
    pub fn FilteredUri(self: ?*anyopaque, uri: ?*anyopaque) QtC.QUrl {
        return qtc.KUriFilter_FilteredUri(@ptrCast(self), @ptrCast(uri));
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilter.html#filteredUri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUriFilter `
    ///
    /// ` uri: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FilteredUri2(self: ?*anyopaque, uri: []const u8, allocator: std.mem.Allocator) []const u8 {
        const uri_str = qtc.libqt_string{
            .len = uri.len,
            .data = uri.ptr,
        };
        var _str = qtc.KUriFilter_FilteredUri2(@ptrCast(self), uri_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kurifilter.FilteredUri2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilter.html#filterSearchUri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUriFilter `
    ///
    /// ` data: QtC.KUriFilterData `
    ///
    /// ` types: flag of kurifilter_enums.SearchFilterType `
    ///
    pub fn FilterSearchUri(self: ?*anyopaque, data: ?*anyopaque, types: i32) bool {
        return qtc.KUriFilter_FilterSearchUri(@ptrCast(self), @ptrCast(data), @intCast(types));
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilter.html#pluginNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUriFilter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PluginNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KUriFilter_PluginNames(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// ` self: QtC.KUriFilter `
    ///
    /// ` data: QtC.KUriFilterData `
    ///
    /// ` filters: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FilterUri22(self: ?*anyopaque, data: ?*anyopaque, filters: [][]const u8, allocator: std.mem.Allocator) bool {
        var filters_arr = allocator.alloc(qtc.libqt_string, filters.len) catch @panic("kurifilter.FilterUri22: Memory allocation failed");
        defer allocator.free(filters_arr);
        for (filters, 0..filters.len) |item, i| {
            filters_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const filters_list = qtc.libqt_list{
            .len = filters.len,
            .data = filters_arr.ptr,
        };
        return qtc.KUriFilter_FilterUri22(@ptrCast(self), @ptrCast(data), filters_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilter.html#filterUri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUriFilter `
    ///
    /// ` uri: QtC.QUrl `
    ///
    /// ` filters: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FilterUri23(self: ?*anyopaque, uri: ?*anyopaque, filters: [][]const u8, allocator: std.mem.Allocator) bool {
        var filters_arr = allocator.alloc(qtc.libqt_string, filters.len) catch @panic("kurifilter.FilterUri23: Memory allocation failed");
        defer allocator.free(filters_arr);
        for (filters, 0..filters.len) |item, i| {
            filters_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const filters_list = qtc.libqt_list{
            .len = filters.len,
            .data = filters_arr.ptr,
        };
        return qtc.KUriFilter_FilterUri23(@ptrCast(self), @ptrCast(uri), filters_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilter.html#filterUri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUriFilter `
    ///
    /// ` uri: []const u8 `
    ///
    /// ` filters: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FilterUri24(self: ?*anyopaque, uri: []const u8, filters: [][]const u8, allocator: std.mem.Allocator) bool {
        const uri_str = qtc.libqt_string{
            .len = uri.len,
            .data = uri.ptr,
        };
        var filters_arr = allocator.alloc(qtc.libqt_string, filters.len) catch @panic("kurifilter.FilterUri24: Memory allocation failed");
        defer allocator.free(filters_arr);
        for (filters, 0..filters.len) |item, i| {
            filters_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const filters_list = qtc.libqt_list{
            .len = filters.len,
            .data = filters_arr.ptr,
        };
        return qtc.KUriFilter_FilterUri24(@ptrCast(self), uri_str, filters_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilter.html#filteredUri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUriFilter `
    ///
    /// ` uri: QtC.QUrl `
    ///
    /// ` filters: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FilteredUri22(self: ?*anyopaque, uri: ?*anyopaque, filters: [][]const u8, allocator: std.mem.Allocator) QtC.QUrl {
        var filters_arr = allocator.alloc(qtc.libqt_string, filters.len) catch @panic("kurifilter.FilteredUri22: Memory allocation failed");
        defer allocator.free(filters_arr);
        for (filters, 0..filters.len) |item, i| {
            filters_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const filters_list = qtc.libqt_list{
            .len = filters.len,
            .data = filters_arr.ptr,
        };
        return qtc.KUriFilter_FilteredUri22(@ptrCast(self), @ptrCast(uri), filters_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilter.html#filteredUri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KUriFilter `
    ///
    /// ` uri: []const u8 `
    ///
    /// ` filters: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FilteredUri23(self: ?*anyopaque, uri: []const u8, filters: [][]const u8, allocator: std.mem.Allocator) []const u8 {
        const uri_str = qtc.libqt_string{
            .len = uri.len,
            .data = uri.ptr,
        };
        var filters_arr = allocator.alloc(qtc.libqt_string, filters.len) catch @panic("kurifilter.FilteredUri23: Memory allocation failed");
        defer allocator.free(filters_arr);
        for (filters, 0..filters.len) |item, i| {
            filters_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const filters_list = qtc.libqt_list{
            .len = filters.len,
            .data = filters_arr.ptr,
        };
        var _str = qtc.KUriFilter_FilteredUri23(@ptrCast(self), uri_str, filters_list);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kurifilter.FilteredUri23: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kurifilter.html#dtor.KUriFilter)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KUriFilter `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KUriFilter_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/kurifilter.html#public-types)
pub const enums = struct {
    pub const UriTypes = enum {
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

    pub const SearchFilterOption = enum {
        pub const SearchFilterOptionNone: i32 = 0;
        pub const RetrieveSearchProvidersOnly: i32 = 1;
        pub const RetrievePreferredSearchProvidersOnly: i32 = 2;
        pub const RetrieveAvailableSearchProvidersOnly: i32 = 3;
    };

    pub const SearchFilterType = enum {
        pub const NormalTextFilter: i32 = 1;
        pub const WebShortcutFilter: i32 = 2;
    };
};
