const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kiconloader_enums = @import("libkiconloader.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kicontheme.html)
pub const KIconTheme = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kicontheme.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KIconTheme,

    pub const _is_KIconTheme = {};

    /// New constructs a new KIconTheme object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    pub fn New(name: []const u8) KIconTheme {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KIconTheme_new(name_str) };
    }

    /// New2 constructs a new KIconTheme object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    /// ` appName: []const u8 `
    ///
    pub fn New2(name: []const u8, appName: []const u8) KIconTheme {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const appName_str = qtc.libqt_string{
            .len = appName.len,
            .data = appName.ptr,
        };
        return .{ .ptr = qtc.KIconTheme_new2(name_str, appName_str) };
    }

    /// New3 constructs a new KIconTheme object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    /// ` appName: []const u8 `
    ///
    /// ` basePathHint: []const u8 `
    ///
    pub fn New3(name: []const u8, appName: []const u8, basePathHint: []const u8) KIconTheme {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const appName_str = qtc.libqt_string{
            .len = appName.len,
            .data = appName.ptr,
        };
        const basePathHint_str = qtc.libqt_string{
            .len = basePathHint.len,
            .data = basePathHint.ptr,
        };
        return .{ .ptr = qtc.KIconTheme_new3(name_str, appName_str, basePathHint_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kicontheme.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconTheme `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: KIconTheme, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KIconTheme_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kicontheme.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kicontheme.html#internalName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconTheme `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn InternalName(self: KIconTheme, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KIconTheme_InternalName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kicontheme.InternalName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kicontheme.html#description)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconTheme `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Description(self: KIconTheme, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KIconTheme_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kicontheme.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kicontheme.html#example)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconTheme `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Example(self: KIconTheme, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KIconTheme_Example(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kicontheme.Example: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kicontheme.html#screenshot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconTheme `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Screenshot(self: KIconTheme, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KIconTheme_Screenshot(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kicontheme.Screenshot: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kicontheme.html#dir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconTheme `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Dir(self: KIconTheme, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KIconTheme_Dir(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kicontheme.Dir: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kicontheme.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconTheme `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Inherits(self: KIconTheme, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KIconTheme_Inherits(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kicontheme.Inherits: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kicontheme.Inherits: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kicontheme.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconTheme `
    ///
    pub fn IsValid(self: KIconTheme) bool {
        return qtc.KIconTheme_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kicontheme.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconTheme `
    ///
    pub fn IsHidden(self: KIconTheme) bool {
        return qtc.KIconTheme_IsHidden(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kicontheme.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconTheme `
    ///
    pub fn Depth(self: KIconTheme) i32 {
        return qtc.KIconTheme_Depth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kicontheme.html#defaultSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconTheme `
    ///
    /// ` group: kiconloader_enums.Group `
    ///
    pub fn DefaultSize(self: KIconTheme, group: i32) i32 {
        return qtc.KIconTheme_DefaultSize(@ptrCast(self.ptr), @bitCast(group));
    }

    /// ### [Upstream resources](https://api.kde.org/kicontheme.html#querySizes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconTheme `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` group: kiconloader_enums.Group `
    ///
    pub fn QuerySizes(self: KIconTheme, allocator: std.mem.Allocator, group: i32) []i32 {
        const _arr: qtc.libqt_list = qtc.KIconTheme_QuerySizes(@ptrCast(self.ptr), @bitCast(group));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("kicontheme.QuerySizes: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kicontheme.html#queryIcons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconTheme `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn QueryIcons(self: KIconTheme, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KIconTheme_QueryIcons(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kicontheme.QueryIcons: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kicontheme.QueryIcons: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kicontheme.html#queryIcons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconTheme `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` size: i32 `
    ///
    pub fn QueryIcons2(self: KIconTheme, allocator: std.mem.Allocator, size: i32) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KIconTheme_QueryIcons2(@ptrCast(self.ptr), @bitCast(size));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kicontheme.QueryIcons2: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kicontheme.QueryIcons2: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kicontheme.html#queryIconsByContext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconTheme `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` size: i32 `
    ///
    pub fn QueryIconsByContext(self: KIconTheme, allocator: std.mem.Allocator, size: i32) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KIconTheme_QueryIconsByContext(@ptrCast(self.ptr), @bitCast(size));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kicontheme.QueryIconsByContext: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kicontheme.QueryIconsByContext: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kicontheme.html#iconPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconTheme `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` name: []const u8 `
    ///
    /// ` size: i32 `
    ///
    /// ` match: kiconloader_enums.MatchType `
    ///
    pub fn IconPath(self: KIconTheme, allocator: std.mem.Allocator, name: []const u8, size: i32, match: i32) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var _str = qtc.KIconTheme_IconPath(@ptrCast(self.ptr), name_str, @bitCast(size), @bitCast(match));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kicontheme.IconPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kicontheme.html#iconPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconTheme `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` name: []const u8 `
    ///
    /// ` size: i32 `
    ///
    /// ` match: kiconloader_enums.MatchType `
    ///
    /// ` scale: f64 `
    ///
    pub fn IconPath2(self: KIconTheme, allocator: std.mem.Allocator, name: []const u8, size: i32, match: i32, scale: f64) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var _str = qtc.KIconTheme_IconPath2(@ptrCast(self.ptr), name_str, @bitCast(size), @bitCast(match), @bitCast(scale));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kicontheme.IconPath2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kicontheme.html#iconPathByName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconTheme `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` name: []const u8 `
    ///
    /// ` size: i32 `
    ///
    /// ` match: kiconloader_enums.MatchType `
    ///
    pub fn IconPathByName(self: KIconTheme, allocator: std.mem.Allocator, name: []const u8, size: i32, match: i32) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var _str = qtc.KIconTheme_IconPathByName(@ptrCast(self.ptr), name_str, @bitCast(size), @bitCast(match));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kicontheme.IconPathByName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kicontheme.html#iconPathByName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconTheme `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` name: []const u8 `
    ///
    /// ` size: i32 `
    ///
    /// ` match: kiconloader_enums.MatchType `
    ///
    /// ` scale: f64 `
    ///
    pub fn IconPathByName2(self: KIconTheme, allocator: std.mem.Allocator, name: []const u8, size: i32, match: i32, scale: f64) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var _str = qtc.KIconTheme_IconPathByName2(@ptrCast(self.ptr), name_str, @bitCast(size), @bitCast(match), @bitCast(scale));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kicontheme.IconPathByName2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kicontheme.html#hasContext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconTheme `
    ///
    /// ` context: kiconloader_enums.Context `
    ///
    pub fn HasContext(self: KIconTheme, context: i32) bool {
        return qtc.KIconTheme_HasContext(@ptrCast(self.ptr), @bitCast(context));
    }

    /// ### [Upstream resources](https://api.kde.org/kicontheme.html#followsColorScheme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconTheme `
    ///
    pub fn FollowsColorScheme(self: KIconTheme) bool {
        return qtc.KIconTheme_FollowsColorScheme(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kicontheme.html#list)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn List(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KIconTheme_List();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kicontheme.List: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kicontheme.List: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kicontheme.html#current)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Current(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KIconTheme_Current();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kicontheme.Current: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kicontheme.html#forceThemeForTests)
    ///
    /// ## Parameter(s):
    ///
    /// ` themeName: []const u8 `
    ///
    pub fn ForceThemeForTests(themeName: []const u8) void {
        const themeName_str = qtc.libqt_string{
            .len = themeName.len,
            .data = themeName.ptr,
        };
        qtc.KIconTheme_ForceThemeForTests(themeName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kicontheme.html#reconfigure)
    ///
    pub fn Reconfigure() void {
        qtc.KIconTheme_Reconfigure();
    }

    /// ### [Upstream resources](https://api.kde.org/kicontheme.html#defaultThemeName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DefaultThemeName(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KIconTheme_DefaultThemeName();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kicontheme.DefaultThemeName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kicontheme.html#initTheme)
    ///
    pub fn InitTheme() void {
        qtc.KIconTheme_InitTheme();
    }

    /// ### [Upstream resources](https://api.kde.org/kicontheme.html#queryIcons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconTheme `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` size: i32 `
    ///
    /// ` context: kiconloader_enums.Context `
    ///
    pub fn QueryIcons22(self: KIconTheme, allocator: std.mem.Allocator, size: i32, context: i32) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KIconTheme_QueryIcons22(@ptrCast(self.ptr), @bitCast(size), @bitCast(context));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kicontheme.QueryIcons22: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kicontheme.QueryIcons22: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kicontheme.html#queryIconsByContext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconTheme `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` size: i32 `
    ///
    /// ` context: kiconloader_enums.Context `
    ///
    pub fn QueryIconsByContext2(self: KIconTheme, allocator: std.mem.Allocator, size: i32, context: i32) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KIconTheme_QueryIconsByContext2(@ptrCast(self.ptr), @bitCast(size), @bitCast(context));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kicontheme.QueryIconsByContext2: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kicontheme.QueryIconsByContext2: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kicontheme.html#dtor.KIconTheme)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KIconTheme `
    ///
    pub fn Delete(self: KIconTheme) void {
        qtc.KIconTheme_Delete(@ptrCast(self.ptr));
    }
};
