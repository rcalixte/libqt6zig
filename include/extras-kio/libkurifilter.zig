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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KUriFilterSearchProvider object in C++ memory
    ///
    pub fn new() KUriFilterSearchProvider {
        return .{ .ptr = qtc.KUriFilterSearchProvider_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KUriFilterSearchProvider object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KUriFilterSearchProvider `
    ///
    pub fn new2(param1: anytype) KUriFilterSearchProvider {
        comptime _ = @TypeOf(param1)._is_KUriFilterSearchProvider;
        return .{ .ptr = qtc.KUriFilterSearchProvider_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `desktopEntryName` instead
    ///
    pub const DesktopEntryName = desktopEntryName;

    /// ### [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#desktopEntryName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterSearchProvider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn desktopEntryName(self: KUriFilterSearchProvider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUriFilterSearchProvider_DesktopEntryName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KUriFilterSearchProvider.desktopEntryName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterSearchProvider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: KUriFilterSearchProvider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUriFilterSearchProvider_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KUriFilterSearchProvider.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `iconName` instead
    ///
    pub const IconName = iconName;

    /// ### [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#iconName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterSearchProvider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn iconName(self: KUriFilterSearchProvider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUriFilterSearchProvider_IconName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KUriFilterSearchProvider.iconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onIconName` instead
    ///
    pub const OnIconName = onIconName;

    /// ### [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#iconName)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KUriFilterSearchProvider `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onIconName(self: KUriFilterSearchProvider, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KUriFilterSearchProvider_OnIconName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIconName` instead
    ///
    pub const SuperIconName = superIconName;

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
    pub fn superIconName(self: KUriFilterSearchProvider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUriFilterSearchProvider_SuperIconName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KUriFilterSearchProvider.iconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `keys` instead
    ///
    pub const Keys = keys;

    /// ### [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#keys)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterSearchProvider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn keys(self: KUriFilterSearchProvider, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KUriFilterSearchProvider_Keys(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KUriFilterSearchProvider.keys: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KUriFilterSearchProvider.keys: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `defaultKey` instead
    ///
    pub const DefaultKey = defaultKey;

    /// ### [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#defaultKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterSearchProvider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn defaultKey(self: KUriFilterSearchProvider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUriFilterSearchProvider_DefaultKey(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KUriFilterSearchProvider.defaultKey: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterSearchProvider `
    ///
    /// ` param1: KUriFilterSearchProvider `
    ///
    pub fn operatorAssign(self: KUriFilterSearchProvider, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KUriFilterSearchProvider;
        qtc.KUriFilterSearchProvider_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `setDesktopEntryName` instead
    ///
    pub const SetDesktopEntryName = setDesktopEntryName;

    /// ### [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#setDesktopEntryName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterSearchProvider `
    ///
    /// ` _desktopEntryName: []const u8 `
    ///
    pub fn setDesktopEntryName(self: KUriFilterSearchProvider, _desktopEntryName: []const u8) void {
        const desktopEntryName_str = qtc.libqt_string{
            .len = _desktopEntryName.len,
            .data = _desktopEntryName.ptr,
        };
        qtc.KUriFilterSearchProvider_SetDesktopEntryName(@ptrCast(self.ptr), desktopEntryName_str);
    }

    /// ### DEPRECATED: Use `onSetDesktopEntryName` instead
    ///
    pub const OnSetDesktopEntryName = onSetDesktopEntryName;

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
    pub fn onSetDesktopEntryName(self: KUriFilterSearchProvider, callback: *const fn (KUriFilterSearchProvider, [*:0]const u8) callconv(.c) void) void {
        qtc.KUriFilterSearchProvider_OnSetDesktopEntryName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetDesktopEntryName` instead
    ///
    pub const SuperSetDesktopEntryName = superSetDesktopEntryName;

    /// ### [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#setDesktopEntryName)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterSearchProvider `
    ///
    /// ` _desktopEntryName: []const u8 `
    ///
    pub fn superSetDesktopEntryName(self: KUriFilterSearchProvider, _desktopEntryName: []const u8) void {
        const desktopEntryName_str = qtc.libqt_string{
            .len = _desktopEntryName.len,
            .data = _desktopEntryName.ptr,
        };
        qtc.KUriFilterSearchProvider_SuperSetDesktopEntryName(@ptrCast(self.ptr), desktopEntryName_str);
    }

    /// ### DEPRECATED: Use `setIconName` instead
    ///
    pub const SetIconName = setIconName;

    /// ### [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#setIconName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterSearchProvider `
    ///
    /// ` _iconName: []const u8 `
    ///
    pub fn setIconName(self: KUriFilterSearchProvider, _iconName: []const u8) void {
        const iconName_str = qtc.libqt_string{
            .len = _iconName.len,
            .data = _iconName.ptr,
        };
        qtc.KUriFilterSearchProvider_SetIconName(@ptrCast(self.ptr), iconName_str);
    }

    /// ### DEPRECATED: Use `onSetIconName` instead
    ///
    pub const OnSetIconName = onSetIconName;

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
    pub fn onSetIconName(self: KUriFilterSearchProvider, callback: *const fn (KUriFilterSearchProvider, [*:0]const u8) callconv(.c) void) void {
        qtc.KUriFilterSearchProvider_OnSetIconName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetIconName` instead
    ///
    pub const SuperSetIconName = superSetIconName;

    /// ### [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#setIconName)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterSearchProvider `
    ///
    /// ` _iconName: []const u8 `
    ///
    pub fn superSetIconName(self: KUriFilterSearchProvider, _iconName: []const u8) void {
        const iconName_str = qtc.libqt_string{
            .len = _iconName.len,
            .data = _iconName.ptr,
        };
        qtc.KUriFilterSearchProvider_SuperSetIconName(@ptrCast(self.ptr), iconName_str);
    }

    /// ### DEPRECATED: Use `setKeys` instead
    ///
    pub const SetKeys = setKeys;

    /// ### [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#setKeys)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterSearchProvider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _keys: []const []const u8 `
    ///
    pub fn setKeys(self: KUriFilterSearchProvider, allocator: std.mem.Allocator, _keys: []const []const u8) void {
        const keys_arr = allocator.alloc(qtc.libqt_string, _keys.len) catch @panic("KUriFilterSearchProvider.setKeys: Memory allocation failed");
        defer allocator.free(keys_arr);
        for (_keys, 0.._keys.len) |str_item, i|
            keys_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const keys_list = qtc.libqt_list{
            .len = _keys.len,
            .data = keys_arr.ptr,
        };
        qtc.KUriFilterSearchProvider_SetKeys(@ptrCast(self.ptr), keys_list);
    }

    /// ### DEPRECATED: Use `onSetKeys` instead
    ///
    pub const OnSetKeys = onSetKeys;

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
    pub fn onSetKeys(self: KUriFilterSearchProvider, callback: *const fn (KUriFilterSearchProvider, ?[*:null]?[*:0]const u8) callconv(.c) void) void {
        qtc.KUriFilterSearchProvider_OnSetKeys(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetKeys` instead
    ///
    pub const SuperSetKeys = superSetKeys;

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
    /// ` _keys: []const []const u8 `
    ///
    pub fn superSetKeys(self: KUriFilterSearchProvider, allocator: std.mem.Allocator, _keys: []const []const u8) void {
        const keys_arr = allocator.alloc(qtc.libqt_string, _keys.len) catch @panic("KUriFilterSearchProvider.setKeys: Memory allocation failed");
        defer allocator.free(keys_arr);
        for (_keys, 0.._keys.len) |str_item, i|
            keys_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const keys_list = qtc.libqt_list{
            .len = _keys.len,
            .data = keys_arr.ptr,
        };
        qtc.KUriFilterSearchProvider_SuperSetKeys(@ptrCast(self.ptr), keys_list);
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// ### [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterSearchProvider `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setName(self: KUriFilterSearchProvider, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.KUriFilterSearchProvider_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `onSetName` instead
    ///
    pub const OnSetName = onSetName;

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
    pub fn onSetName(self: KUriFilterSearchProvider, callback: *const fn (KUriFilterSearchProvider, [*:0]const u8) callconv(.c) void) void {
        qtc.KUriFilterSearchProvider_OnSetName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetName` instead
    ///
    pub const SuperSetName = superSetName;

    /// ### [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#setName)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterSearchProvider `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn superSetName(self: KUriFilterSearchProvider, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.KUriFilterSearchProvider_SuperSetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#dtor.KUriFilterSearchProvider)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KUriFilterSearchProvider `
    ///
    pub fn delete(self: KUriFilterSearchProvider) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KUriFilterData object in C++ memory
    ///
    pub fn new() KUriFilterData {
        return .{ .ptr = qtc.KUriFilterData_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KUriFilterData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    pub fn new2(url: anytype) KUriFilterData {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KUriFilterData_new2(@ptrCast(url.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KUriFilterData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` url: []const u8 `
    ///
    pub fn new3(url: []const u8) KUriFilterData {
        const url_str = qtc.libqt_string{
            .len = url.len,
            .data = url.ptr,
        };
        return .{ .ptr = qtc.KUriFilterData_new3(url_str) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new KUriFilterData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KUriFilterData `
    ///
    pub fn new4(other: anytype) KUriFilterData {
        comptime _ = @TypeOf(other)._is_KUriFilterData;
        return .{ .ptr = qtc.KUriFilterData_new4(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `uri` instead
    ///
    pub const Uri = uri;

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#uri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterData `
    ///
    pub fn uri(self: KUriFilterData) QUrl {
        return .{ .ptr = qtc.KUriFilterData_Uri(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `errorMsg` instead
    ///
    pub const ErrorMsg = errorMsg;

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#errorMsg)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn errorMsg(self: KUriFilterData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUriFilterData_ErrorMsg(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KUriFilterData.errorMsg: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `uriType` instead
    ///
    pub const UriType = uriType;

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
    pub fn uriType(self: KUriFilterData) i32 {
        return qtc.KUriFilterData_UriType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `absolutePath` instead
    ///
    pub const AbsolutePath = absolutePath;

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#absolutePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn absolutePath(self: KUriFilterData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUriFilterData_AbsolutePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KUriFilterData.absolutePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `hasAbsolutePath` instead
    ///
    pub const HasAbsolutePath = hasAbsolutePath;

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#hasAbsolutePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterData `
    ///
    pub fn hasAbsolutePath(self: KUriFilterData) bool {
        return qtc.KUriFilterData_HasAbsolutePath(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `argsAndOptions` instead
    ///
    pub const ArgsAndOptions = argsAndOptions;

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#argsAndOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn argsAndOptions(self: KUriFilterData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUriFilterData_ArgsAndOptions(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KUriFilterData.argsAndOptions: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `hasArgsAndOptions` instead
    ///
    pub const HasArgsAndOptions = hasArgsAndOptions;

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#hasArgsAndOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterData `
    ///
    pub fn hasArgsAndOptions(self: KUriFilterData) bool {
        return qtc.KUriFilterData_HasArgsAndOptions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `checkForExecutables` instead
    ///
    pub const CheckForExecutables = checkForExecutables;

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#checkForExecutables)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterData `
    ///
    pub fn checkForExecutables(self: KUriFilterData) bool {
        return qtc.KUriFilterData_CheckForExecutables(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `typedString` instead
    ///
    pub const TypedString = typedString;

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#typedString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn typedString(self: KUriFilterData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUriFilterData_TypedString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KUriFilterData.typedString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `searchTerm` instead
    ///
    pub const SearchTerm = searchTerm;

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#searchTerm)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn searchTerm(self: KUriFilterData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUriFilterData_SearchTerm(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KUriFilterData.searchTerm: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `searchTermSeparator` instead
    ///
    pub const SearchTermSeparator = searchTermSeparator;

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#searchTermSeparator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterData `
    ///
    pub fn searchTermSeparator(self: KUriFilterData) QChar {
        return .{ .ptr = qtc.KUriFilterData_SearchTermSeparator(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `searchProvider` instead
    ///
    pub const SearchProvider = searchProvider;

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#searchProvider)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn searchProvider(self: KUriFilterData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUriFilterData_SearchProvider(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KUriFilterData.searchProvider: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `preferredSearchProviders` instead
    ///
    pub const PreferredSearchProviders = preferredSearchProviders;

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#preferredSearchProviders)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn preferredSearchProviders(self: KUriFilterData, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KUriFilterData_PreferredSearchProviders(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KUriFilterData.preferredSearchProviders: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KUriFilterData.preferredSearchProviders: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `queryForSearchProvider` instead
    ///
    pub const QueryForSearchProvider = queryForSearchProvider;

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#queryForSearchProvider)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterData `
    ///
    /// ` provider: []const u8 `
    ///
    pub fn queryForSearchProvider(self: KUriFilterData, provider: []const u8) KUriFilterSearchProvider {
        const provider_str = qtc.libqt_string{
            .len = provider.len,
            .data = provider.ptr,
        };
        return .{ .ptr = qtc.KUriFilterData_QueryForSearchProvider(@ptrCast(self.ptr), provider_str) };
    }

    /// ### DEPRECATED: Use `queryForPreferredSearchProvider` instead
    ///
    pub const QueryForPreferredSearchProvider = queryForPreferredSearchProvider;

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
    pub fn queryForPreferredSearchProvider(self: KUriFilterData, allocator: std.mem.Allocator, provider: []const u8) []const u8 {
        const provider_str = qtc.libqt_string{
            .len = provider.len,
            .data = provider.ptr,
        };
        var _str = qtc.KUriFilterData_QueryForPreferredSearchProvider(@ptrCast(self.ptr), provider_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KUriFilterData.queryForPreferredSearchProvider: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `allQueriesForSearchProvider` instead
    ///
    pub const AllQueriesForSearchProvider = allQueriesForSearchProvider;

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
    pub fn allQueriesForSearchProvider(self: KUriFilterData, allocator: std.mem.Allocator, provider: []const u8) []const []const u8 {
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
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KUriFilterData.allQueriesForSearchProvider: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KUriFilterData.allQueriesForSearchProvider: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `iconNameForPreferredSearchProvider` instead
    ///
    pub const IconNameForPreferredSearchProvider = iconNameForPreferredSearchProvider;

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
    pub fn iconNameForPreferredSearchProvider(self: KUriFilterData, allocator: std.mem.Allocator, provider: []const u8) []const u8 {
        const provider_str = qtc.libqt_string{
            .len = provider.len,
            .data = provider.ptr,
        };
        var _str = qtc.KUriFilterData_IconNameForPreferredSearchProvider(@ptrCast(self.ptr), provider_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KUriFilterData.iconNameForPreferredSearchProvider: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `alternateSearchProviders` instead
    ///
    pub const AlternateSearchProviders = alternateSearchProviders;

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#alternateSearchProviders)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn alternateSearchProviders(self: KUriFilterData, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KUriFilterData_AlternateSearchProviders(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KUriFilterData.alternateSearchProviders: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KUriFilterData.alternateSearchProviders: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `alternateDefaultSearchProvider` instead
    ///
    pub const AlternateDefaultSearchProvider = alternateDefaultSearchProvider;

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#alternateDefaultSearchProvider)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn alternateDefaultSearchProvider(self: KUriFilterData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUriFilterData_AlternateDefaultSearchProvider(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KUriFilterData.alternateDefaultSearchProvider: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `defaultUrlScheme` instead
    ///
    pub const DefaultUrlScheme = defaultUrlScheme;

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#defaultUrlScheme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn defaultUrlScheme(self: KUriFilterData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUriFilterData_DefaultUrlScheme(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KUriFilterData.defaultUrlScheme: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `searchFilteringOptions` instead
    ///
    pub const SearchFilteringOptions = searchFilteringOptions;

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
    pub fn searchFilteringOptions(self: KUriFilterData) i32 {
        return qtc.KUriFilterData_SearchFilteringOptions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `iconName` instead
    ///
    pub const IconName = iconName;

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#iconName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn iconName(self: KUriFilterData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUriFilterData_IconName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KUriFilterData.iconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setCheckForExecutables` instead
    ///
    pub const SetCheckForExecutables = setCheckForExecutables;

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#setCheckForExecutables)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterData `
    ///
    /// ` check: bool `
    ///
    pub fn setCheckForExecutables(self: KUriFilterData, check: bool) void {
        qtc.KUriFilterData_SetCheckForExecutables(@ptrCast(self.ptr), check);
    }

    /// ### DEPRECATED: Use `setData` instead
    ///
    pub const SetData = setData;

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterData `
    ///
    /// ` url: QUrl `
    ///
    pub fn setData(self: KUriFilterData, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KUriFilterData_SetData(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `setData2` instead
    ///
    pub const SetData2 = setData2;

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterData `
    ///
    /// ` url: []const u8 `
    ///
    pub fn setData2(self: KUriFilterData, url: []const u8) void {
        const url_str = qtc.libqt_string{
            .len = url.len,
            .data = url.ptr,
        };
        qtc.KUriFilterData_SetData2(@ptrCast(self.ptr), url_str);
    }

    /// ### DEPRECATED: Use `setAbsolutePath` instead
    ///
    pub const SetAbsolutePath = setAbsolutePath;

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#setAbsolutePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterData `
    ///
    /// ` abs_path: []const u8 `
    ///
    pub fn setAbsolutePath(self: KUriFilterData, abs_path: []const u8) bool {
        const abs_path_str = qtc.libqt_string{
            .len = abs_path.len,
            .data = abs_path.ptr,
        };
        return qtc.KUriFilterData_SetAbsolutePath(@ptrCast(self.ptr), abs_path_str);
    }

    /// ### DEPRECATED: Use `setAlternateSearchProviders` instead
    ///
    pub const SetAlternateSearchProviders = setAlternateSearchProviders;

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
    pub fn setAlternateSearchProviders(self: KUriFilterData, allocator: std.mem.Allocator, providers: []const []const u8) void {
        const providers_arr = allocator.alloc(qtc.libqt_string, providers.len) catch @panic("KUriFilterData.setAlternateSearchProviders: Memory allocation failed");
        defer allocator.free(providers_arr);
        for (providers, 0..providers.len) |str_item, i|
            providers_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const providers_list = qtc.libqt_list{
            .len = providers.len,
            .data = providers_arr.ptr,
        };
        qtc.KUriFilterData_SetAlternateSearchProviders(@ptrCast(self.ptr), providers_list);
    }

    /// ### DEPRECATED: Use `setAlternateDefaultSearchProvider` instead
    ///
    pub const SetAlternateDefaultSearchProvider = setAlternateDefaultSearchProvider;

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#setAlternateDefaultSearchProvider)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterData `
    ///
    /// ` provider: []const u8 `
    ///
    pub fn setAlternateDefaultSearchProvider(self: KUriFilterData, provider: []const u8) void {
        const provider_str = qtc.libqt_string{
            .len = provider.len,
            .data = provider.ptr,
        };
        qtc.KUriFilterData_SetAlternateDefaultSearchProvider(@ptrCast(self.ptr), provider_str);
    }

    /// ### DEPRECATED: Use `setDefaultUrlScheme` instead
    ///
    pub const SetDefaultUrlScheme = setDefaultUrlScheme;

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#setDefaultUrlScheme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterData `
    ///
    /// ` _defaultUrlScheme: []const u8 `
    ///
    pub fn setDefaultUrlScheme(self: KUriFilterData, _defaultUrlScheme: []const u8) void {
        const defaultUrlScheme_str = qtc.libqt_string{
            .len = _defaultUrlScheme.len,
            .data = _defaultUrlScheme.ptr,
        };
        qtc.KUriFilterData_SetDefaultUrlScheme(@ptrCast(self.ptr), defaultUrlScheme_str);
    }

    /// ### DEPRECATED: Use `setSearchFilteringOptions` instead
    ///
    pub const SetSearchFilteringOptions = setSearchFilteringOptions;

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#setSearchFilteringOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterData `
    ///
    /// ` options: flag of kurifilter_enums.SearchFilterOption `
    ///
    pub fn setSearchFilteringOptions(self: KUriFilterData, options: i32) void {
        qtc.KUriFilterData_SetSearchFilteringOptions(@ptrCast(self.ptr), @bitCast(options));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterData `
    ///
    /// ` url: QUrl `
    ///
    pub fn operatorAssign(self: KUriFilterData, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KUriFilterData_OperatorAssign(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign2` instead
    ///
    pub const OperatorAssign2 = operatorAssign2;

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilterData `
    ///
    /// ` url: []const u8 `
    ///
    pub fn operatorAssign2(self: KUriFilterData, url: []const u8) void {
        const url_str = qtc.libqt_string{
            .len = url.len,
            .data = url.ptr,
        };
        qtc.KUriFilterData_OperatorAssign2(@ptrCast(self.ptr), url_str);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kurifilterdata.html#dtor.KUriFilterData)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KUriFilterData `
    ///
    pub fn delete(self: KUriFilterData) void {
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

    /// ### DEPRECATED: Use `self0` instead
    ///
    pub const Self = self0;

    /// ### [Upstream resources](https://api.kde.org/kurifilter.html#self)
    ///
    pub fn self0() KUriFilter {
        return .{ .ptr = qtc.KUriFilter_Self() };
    }

    /// ### DEPRECATED: Use `filterUri` instead
    ///
    pub const FilterUri = filterUri;

    /// ### [Upstream resources](https://api.kde.org/kurifilter.html#filterUri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilter `
    ///
    /// ` data: KUriFilterData `
    ///
    pub fn filterUri(self: KUriFilter, data: anytype) bool {
        comptime _ = @TypeOf(data)._is_KUriFilterData;
        return qtc.KUriFilter_FilterUri(@ptrCast(self.ptr), @ptrCast(data.ptr));
    }

    /// ### DEPRECATED: Use `filterUri2` instead
    ///
    pub const FilterUri2 = filterUri2;

    /// ### [Upstream resources](https://api.kde.org/kurifilter.html#filterUri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilter `
    ///
    /// ` _uri: QUrl `
    ///
    pub fn filterUri2(self: KUriFilter, _uri: anytype) bool {
        comptime _ = @TypeOf(_uri)._is_QUrl;
        return qtc.KUriFilter_FilterUri2(@ptrCast(self.ptr), @ptrCast(_uri.ptr));
    }

    /// ### DEPRECATED: Use `filterUri3` instead
    ///
    pub const FilterUri3 = filterUri3;

    /// ### [Upstream resources](https://api.kde.org/kurifilter.html#filterUri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilter `
    ///
    /// ` _uri: []const u8 `
    ///
    pub fn filterUri3(self: KUriFilter, _uri: []const u8) bool {
        const uri_str = qtc.libqt_string{
            .len = _uri.len,
            .data = _uri.ptr,
        };
        return qtc.KUriFilter_FilterUri3(@ptrCast(self.ptr), uri_str);
    }

    /// ### DEPRECATED: Use `filteredUri` instead
    ///
    pub const FilteredUri = filteredUri;

    /// ### [Upstream resources](https://api.kde.org/kurifilter.html#filteredUri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilter `
    ///
    /// ` _uri: QUrl `
    ///
    pub fn filteredUri(self: KUriFilter, _uri: anytype) QUrl {
        comptime _ = @TypeOf(_uri)._is_QUrl;
        return .{ .ptr = qtc.KUriFilter_FilteredUri(@ptrCast(self.ptr), @ptrCast(_uri.ptr)) };
    }

    /// ### DEPRECATED: Use `filteredUri2` instead
    ///
    pub const FilteredUri2 = filteredUri2;

    /// ### [Upstream resources](https://api.kde.org/kurifilter.html#filteredUri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _uri: []const u8 `
    ///
    pub fn filteredUri2(self: KUriFilter, allocator: std.mem.Allocator, _uri: []const u8) []const u8 {
        const uri_str = qtc.libqt_string{
            .len = _uri.len,
            .data = _uri.ptr,
        };
        var _str = qtc.KUriFilter_FilteredUri2(@ptrCast(self.ptr), uri_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KUriFilter.filteredUri2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `filterSearchUri` instead
    ///
    pub const FilterSearchUri = filterSearchUri;

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
    pub fn filterSearchUri(self: KUriFilter, data: anytype, types: i32) bool {
        comptime _ = @TypeOf(data)._is_KUriFilterData;
        return qtc.KUriFilter_FilterSearchUri(@ptrCast(self.ptr), @ptrCast(data.ptr), @bitCast(types));
    }

    /// ### DEPRECATED: Use `pluginNames` instead
    ///
    pub const PluginNames = pluginNames;

    /// ### [Upstream resources](https://api.kde.org/kurifilter.html#pluginNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn pluginNames(self: KUriFilter, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KUriFilter_PluginNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KUriFilter.pluginNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KUriFilter.pluginNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `filterUri22` instead
    ///
    pub const FilterUri22 = filterUri22;

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
    pub fn filterUri22(self: KUriFilter, allocator: std.mem.Allocator, data: anytype, filters: []const []const u8) bool {
        comptime _ = @TypeOf(data)._is_KUriFilterData;
        const filters_arr = allocator.alloc(qtc.libqt_string, filters.len) catch @panic("KUriFilter.filterUri22: Memory allocation failed");
        defer allocator.free(filters_arr);
        for (filters, 0..filters.len) |str_item, i|
            filters_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const filters_list = qtc.libqt_list{
            .len = filters.len,
            .data = filters_arr.ptr,
        };
        return qtc.KUriFilter_FilterUri22(@ptrCast(self.ptr), @ptrCast(data.ptr), filters_list);
    }

    /// ### DEPRECATED: Use `filterUri23` instead
    ///
    pub const FilterUri23 = filterUri23;

    /// ### [Upstream resources](https://api.kde.org/kurifilter.html#filterUri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _uri: QUrl `
    ///
    /// ` filters: []const []const u8 `
    ///
    pub fn filterUri23(self: KUriFilter, allocator: std.mem.Allocator, _uri: anytype, filters: []const []const u8) bool {
        comptime _ = @TypeOf(_uri)._is_QUrl;
        const filters_arr = allocator.alloc(qtc.libqt_string, filters.len) catch @panic("KUriFilter.filterUri23: Memory allocation failed");
        defer allocator.free(filters_arr);
        for (filters, 0..filters.len) |str_item, i|
            filters_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const filters_list = qtc.libqt_list{
            .len = filters.len,
            .data = filters_arr.ptr,
        };
        return qtc.KUriFilter_FilterUri23(@ptrCast(self.ptr), @ptrCast(_uri.ptr), filters_list);
    }

    /// ### DEPRECATED: Use `filterUri24` instead
    ///
    pub const FilterUri24 = filterUri24;

    /// ### [Upstream resources](https://api.kde.org/kurifilter.html#filterUri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _uri: []const u8 `
    ///
    /// ` filters: []const []const u8 `
    ///
    pub fn filterUri24(self: KUriFilter, allocator: std.mem.Allocator, _uri: []const u8, filters: []const []const u8) bool {
        const uri_str = qtc.libqt_string{
            .len = _uri.len,
            .data = _uri.ptr,
        };
        const filters_arr = allocator.alloc(qtc.libqt_string, filters.len) catch @panic("KUriFilter.filterUri24: Memory allocation failed");
        defer allocator.free(filters_arr);
        for (filters, 0..filters.len) |str_item, i|
            filters_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const filters_list = qtc.libqt_list{
            .len = filters.len,
            .data = filters_arr.ptr,
        };
        return qtc.KUriFilter_FilterUri24(@ptrCast(self.ptr), uri_str, filters_list);
    }

    /// ### DEPRECATED: Use `filteredUri22` instead
    ///
    pub const FilteredUri22 = filteredUri22;

    /// ### [Upstream resources](https://api.kde.org/kurifilter.html#filteredUri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _uri: QUrl `
    ///
    /// ` filters: []const []const u8 `
    ///
    pub fn filteredUri22(self: KUriFilter, allocator: std.mem.Allocator, _uri: anytype, filters: []const []const u8) QUrl {
        comptime _ = @TypeOf(_uri)._is_QUrl;
        const filters_arr = allocator.alloc(qtc.libqt_string, filters.len) catch @panic("KUriFilter.filteredUri22: Memory allocation failed");
        defer allocator.free(filters_arr);
        for (filters, 0..filters.len) |str_item, i|
            filters_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const filters_list = qtc.libqt_list{
            .len = filters.len,
            .data = filters_arr.ptr,
        };
        return .{ .ptr = qtc.KUriFilter_FilteredUri22(@ptrCast(self.ptr), @ptrCast(_uri.ptr), filters_list) };
    }

    /// ### DEPRECATED: Use `filteredUri23` instead
    ///
    pub const FilteredUri23 = filteredUri23;

    /// ### [Upstream resources](https://api.kde.org/kurifilter.html#filteredUri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUriFilter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _uri: []const u8 `
    ///
    /// ` filters: []const []const u8 `
    ///
    pub fn filteredUri23(self: KUriFilter, allocator: std.mem.Allocator, _uri: []const u8, filters: []const []const u8) []const u8 {
        const uri_str = qtc.libqt_string{
            .len = _uri.len,
            .data = _uri.ptr,
        };
        const filters_arr = allocator.alloc(qtc.libqt_string, filters.len) catch @panic("KUriFilter.filteredUri23: Memory allocation failed");
        defer allocator.free(filters_arr);
        for (filters, 0..filters.len) |str_item, i|
            filters_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const filters_list = qtc.libqt_list{
            .len = filters.len,
            .data = filters_arr.ptr,
        };
        var _str = qtc.KUriFilter_FilteredUri23(@ptrCast(self.ptr), uri_str, filters_list);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KUriFilter.filteredUri23: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kurifilter.html#dtor.KUriFilter)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KUriFilter `
    ///
    pub fn delete(self: KUriFilter) void {
        qtc.KUriFilter_Delete(@ptrCast(self.ptr));
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
