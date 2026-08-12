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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KIconTheme object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _name: []const u8 `
    ///
    pub fn new(_name: []const u8) KIconTheme {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.KIconTheme_new(name_str) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KIconTheme object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _name: []const u8 `
    ///
    /// ` appName: []const u8 `
    ///
    pub fn new2(_name: []const u8, appName: []const u8) KIconTheme {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const appName_str = qtc.libqt_string{
            .len = appName.len,
            .data = appName.ptr,
        };
        return .{ .ptr = qtc.KIconTheme_new2(name_str, appName_str) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KIconTheme object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _name: []const u8 `
    ///
    /// ` appName: []const u8 `
    ///
    /// ` basePathHint: []const u8 `
    ///
    pub fn new3(_name: []const u8, appName: []const u8, basePathHint: []const u8) KIconTheme {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
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

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://api.kde.org/kicontheme.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconTheme `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: KIconTheme, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KIconTheme_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIconTheme.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `internalName` instead
    ///
    pub const InternalName = internalName;

    /// ### [Upstream resources](https://api.kde.org/kicontheme.html#internalName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconTheme `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn internalName(self: KIconTheme, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KIconTheme_InternalName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIconTheme.internalName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `description` instead
    ///
    pub const Description = description;

    /// ### [Upstream resources](https://api.kde.org/kicontheme.html#description)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconTheme `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn description(self: KIconTheme, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KIconTheme_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIconTheme.description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `example` instead
    ///
    pub const Example = example;

    /// ### [Upstream resources](https://api.kde.org/kicontheme.html#example)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconTheme `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn example(self: KIconTheme, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KIconTheme_Example(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIconTheme.example: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `screenshot` instead
    ///
    pub const Screenshot = screenshot;

    /// ### [Upstream resources](https://api.kde.org/kicontheme.html#screenshot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconTheme `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn screenshot(self: KIconTheme, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KIconTheme_Screenshot(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIconTheme.screenshot: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `dir` instead
    ///
    pub const Dir = dir;

    /// ### [Upstream resources](https://api.kde.org/kicontheme.html#dir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconTheme `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dir(self: KIconTheme, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KIconTheme_Dir(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIconTheme.dir: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `inherits` instead
    ///
    pub const Inherits = inherits;

    /// ### [Upstream resources](https://api.kde.org/kicontheme.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconTheme `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn inherits(self: KIconTheme, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KIconTheme_Inherits(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KIconTheme.inherits: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KIconTheme.inherits: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://api.kde.org/kicontheme.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconTheme `
    ///
    pub fn isValid(self: KIconTheme) bool {
        return qtc.KIconTheme_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isHidden` instead
    ///
    pub const IsHidden = isHidden;

    /// ### [Upstream resources](https://api.kde.org/kicontheme.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconTheme `
    ///
    pub fn isHidden(self: KIconTheme) bool {
        return qtc.KIconTheme_IsHidden(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `depth` instead
    ///
    pub const Depth = depth;

    /// ### [Upstream resources](https://api.kde.org/kicontheme.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconTheme `
    ///
    pub fn depth(self: KIconTheme) i32 {
        return qtc.KIconTheme_Depth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `defaultSize` instead
    ///
    pub const DefaultSize = defaultSize;

    /// ### [Upstream resources](https://api.kde.org/kicontheme.html#defaultSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconTheme `
    ///
    /// ` group: kiconloader_enums.Group `
    ///
    pub fn defaultSize(self: KIconTheme, group: i32) i32 {
        return qtc.KIconTheme_DefaultSize(@ptrCast(self.ptr), @bitCast(group));
    }

    /// ### DEPRECATED: Use `querySizes` instead
    ///
    pub const QuerySizes = querySizes;

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
    pub fn querySizes(self: KIconTheme, allocator: std.mem.Allocator, group: i32) []i32 {
        const _arr: qtc.libqt_list = qtc.KIconTheme_QuerySizes(@ptrCast(self.ptr), @bitCast(group));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("KIconTheme.querySizes: Memory allocation failed");
        const _data_val: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `queryIcons` instead
    ///
    pub const QueryIcons = queryIcons;

    /// ### [Upstream resources](https://api.kde.org/kicontheme.html#queryIcons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconTheme `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn queryIcons(self: KIconTheme, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KIconTheme_QueryIcons(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KIconTheme.queryIcons: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KIconTheme.queryIcons: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `queryIcons2` instead
    ///
    pub const QueryIcons2 = queryIcons2;

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
    pub fn queryIcons2(self: KIconTheme, allocator: std.mem.Allocator, size: i32) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KIconTheme_QueryIcons2(@ptrCast(self.ptr), @bitCast(size));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KIconTheme.queryIcons2: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KIconTheme.queryIcons2: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `queryIconsByContext` instead
    ///
    pub const QueryIconsByContext = queryIconsByContext;

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
    pub fn queryIconsByContext(self: KIconTheme, allocator: std.mem.Allocator, size: i32) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KIconTheme_QueryIconsByContext(@ptrCast(self.ptr), @bitCast(size));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KIconTheme.queryIconsByContext: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KIconTheme.queryIconsByContext: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `iconPath` instead
    ///
    pub const IconPath = iconPath;

    /// ### [Upstream resources](https://api.kde.org/kicontheme.html#iconPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconTheme `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` size: i32 `
    ///
    /// ` match: kiconloader_enums.MatchType `
    ///
    pub fn iconPath(self: KIconTheme, allocator: std.mem.Allocator, _name: []const u8, size: i32, match: i32) []const u8 {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        var _str = qtc.KIconTheme_IconPath(@ptrCast(self.ptr), name_str, @bitCast(size), @bitCast(match));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIconTheme.iconPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `iconPath2` instead
    ///
    pub const IconPath2 = iconPath2;

    /// ### [Upstream resources](https://api.kde.org/kicontheme.html#iconPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconTheme `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` size: i32 `
    ///
    /// ` match: kiconloader_enums.MatchType `
    ///
    /// ` scale: f64 `
    ///
    pub fn iconPath2(self: KIconTheme, allocator: std.mem.Allocator, _name: []const u8, size: i32, match: i32, scale: f64) []const u8 {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        var _str = qtc.KIconTheme_IconPath2(@ptrCast(self.ptr), name_str, @bitCast(size), @bitCast(match), @bitCast(scale));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIconTheme.iconPath2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `iconPathByName` instead
    ///
    pub const IconPathByName = iconPathByName;

    /// ### [Upstream resources](https://api.kde.org/kicontheme.html#iconPathByName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconTheme `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` size: i32 `
    ///
    /// ` match: kiconloader_enums.MatchType `
    ///
    pub fn iconPathByName(self: KIconTheme, allocator: std.mem.Allocator, _name: []const u8, size: i32, match: i32) []const u8 {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        var _str = qtc.KIconTheme_IconPathByName(@ptrCast(self.ptr), name_str, @bitCast(size), @bitCast(match));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIconTheme.iconPathByName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `iconPathByName2` instead
    ///
    pub const IconPathByName2 = iconPathByName2;

    /// ### [Upstream resources](https://api.kde.org/kicontheme.html#iconPathByName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconTheme `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` size: i32 `
    ///
    /// ` match: kiconloader_enums.MatchType `
    ///
    /// ` scale: f64 `
    ///
    pub fn iconPathByName2(self: KIconTheme, allocator: std.mem.Allocator, _name: []const u8, size: i32, match: i32, scale: f64) []const u8 {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        var _str = qtc.KIconTheme_IconPathByName2(@ptrCast(self.ptr), name_str, @bitCast(size), @bitCast(match), @bitCast(scale));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIconTheme.iconPathByName2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `hasContext` instead
    ///
    pub const HasContext = hasContext;

    /// ### [Upstream resources](https://api.kde.org/kicontheme.html#hasContext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconTheme `
    ///
    /// ` context: kiconloader_enums.Context `
    ///
    pub fn hasContext(self: KIconTheme, context: i32) bool {
        return qtc.KIconTheme_HasContext(@ptrCast(self.ptr), @bitCast(context));
    }

    /// ### DEPRECATED: Use `followsColorScheme` instead
    ///
    pub const FollowsColorScheme = followsColorScheme;

    /// ### [Upstream resources](https://api.kde.org/kicontheme.html#followsColorScheme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconTheme `
    ///
    pub fn followsColorScheme(self: KIconTheme) bool {
        return qtc.KIconTheme_FollowsColorScheme(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `list` instead
    ///
    pub const List = list;

    /// ### [Upstream resources](https://api.kde.org/kicontheme.html#list)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn list(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KIconTheme_List();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KIconTheme.list: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KIconTheme.list: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `current` instead
    ///
    pub const Current = current;

    /// ### [Upstream resources](https://api.kde.org/kicontheme.html#current)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn current(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KIconTheme_Current();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIconTheme.current: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `forceThemeForTests` instead
    ///
    pub const ForceThemeForTests = forceThemeForTests;

    /// ### [Upstream resources](https://api.kde.org/kicontheme.html#forceThemeForTests)
    ///
    /// ## Parameter(s):
    ///
    /// ` themeName: []const u8 `
    ///
    pub fn forceThemeForTests(themeName: []const u8) void {
        const themeName_str = qtc.libqt_string{
            .len = themeName.len,
            .data = themeName.ptr,
        };
        qtc.KIconTheme_ForceThemeForTests(themeName_str);
    }

    /// ### DEPRECATED: Use `reconfigure` instead
    ///
    pub const Reconfigure = reconfigure;

    /// ### [Upstream resources](https://api.kde.org/kicontheme.html#reconfigure)
    ///
    pub fn reconfigure() void {
        qtc.KIconTheme_Reconfigure();
    }

    /// ### DEPRECATED: Use `defaultThemeName` instead
    ///
    pub const DefaultThemeName = defaultThemeName;

    /// ### [Upstream resources](https://api.kde.org/kicontheme.html#defaultThemeName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn defaultThemeName(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KIconTheme_DefaultThemeName();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIconTheme.defaultThemeName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `initTheme` instead
    ///
    pub const InitTheme = initTheme;

    /// ### [Upstream resources](https://api.kde.org/kicontheme.html#initTheme)
    ///
    pub fn initTheme() void {
        qtc.KIconTheme_InitTheme();
    }

    /// ### DEPRECATED: Use `queryIcons22` instead
    ///
    pub const QueryIcons22 = queryIcons22;

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
    pub fn queryIcons22(self: KIconTheme, allocator: std.mem.Allocator, size: i32, context: i32) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KIconTheme_QueryIcons22(@ptrCast(self.ptr), @bitCast(size), @bitCast(context));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KIconTheme.queryIcons22: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KIconTheme.queryIcons22: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `queryIconsByContext2` instead
    ///
    pub const QueryIconsByContext2 = queryIconsByContext2;

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
    pub fn queryIconsByContext2(self: KIconTheme, allocator: std.mem.Allocator, size: i32, context: i32) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KIconTheme_QueryIconsByContext2(@ptrCast(self.ptr), @bitCast(size), @bitCast(context));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KIconTheme.queryIconsByContext2: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KIconTheme.queryIconsByContext2: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kicontheme.html#dtor.KIconTheme)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KIconTheme `
    ///
    pub fn delete(self: KIconTheme) void {
        qtc.KIconTheme_Delete(@ptrCast(self.ptr));
    }
};
