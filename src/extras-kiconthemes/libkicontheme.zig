const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kiconloader_enums = @import("libkiconloader.zig").enums;
const std = @import("std");

/// https://api.kde.org/kicontheme.html
pub const kicontheme = struct {
    /// New constructs a new KIconTheme object.
    ///
    /// ``` name: []const u8 ```
    pub fn New(name: []const u8) QtC.KIconTheme {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };

        return qtc.KIconTheme_new(name_str);
    }

    /// New2 constructs a new KIconTheme object.
    ///
    /// ``` name: []const u8, appName: []const u8 ```
    pub fn New2(name: []const u8, appName: []const u8) QtC.KIconTheme {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const appName_str = qtc.libqt_string{
            .len = appName.len,
            .data = appName.ptr,
        };

        return qtc.KIconTheme_new2(name_str, appName_str);
    }

    /// New3 constructs a new KIconTheme object.
    ///
    /// ``` name: []const u8, appName: []const u8, basePathHint: []const u8 ```
    pub fn New3(name: []const u8, appName: []const u8, basePathHint: []const u8) QtC.KIconTheme {
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

        return qtc.KIconTheme_new3(name_str, appName_str, basePathHint_str);
    }

    /// [Qt documentation](https://api.kde.org/kicontheme.html#name)
    ///
    /// ``` self: QtC.KIconTheme, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KIconTheme_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kicontheme.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kicontheme.html#internalName)
    ///
    /// ``` self: QtC.KIconTheme, allocator: std.mem.Allocator ```
    pub fn InternalName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KIconTheme_InternalName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kicontheme.InternalName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kicontheme.html#description)
    ///
    /// ``` self: QtC.KIconTheme, allocator: std.mem.Allocator ```
    pub fn Description(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KIconTheme_Description(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kicontheme.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kicontheme.html#example)
    ///
    /// ``` self: QtC.KIconTheme, allocator: std.mem.Allocator ```
    pub fn Example(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KIconTheme_Example(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kicontheme.Example: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kicontheme.html#screenshot)
    ///
    /// ``` self: QtC.KIconTheme, allocator: std.mem.Allocator ```
    pub fn Screenshot(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KIconTheme_Screenshot(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kicontheme.Screenshot: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kicontheme.html#dir)
    ///
    /// ``` self: QtC.KIconTheme, allocator: std.mem.Allocator ```
    pub fn Dir(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KIconTheme_Dir(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kicontheme.Dir: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kicontheme.html#inherits)
    ///
    /// ``` self: QtC.KIconTheme, allocator: std.mem.Allocator ```
    pub fn Inherits(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KIconTheme_Inherits(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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

    /// [Qt documentation](https://api.kde.org/kicontheme.html#isValid)
    ///
    /// ``` self: QtC.KIconTheme ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.KIconTheme_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kicontheme.html#isHidden)
    ///
    /// ``` self: QtC.KIconTheme ```
    pub fn IsHidden(self: ?*anyopaque) bool {
        return qtc.KIconTheme_IsHidden(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kicontheme.html#depth)
    ///
    /// ``` self: QtC.KIconTheme ```
    pub fn Depth(self: ?*anyopaque) i32 {
        return qtc.KIconTheme_Depth(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kicontheme.html#defaultSize)
    ///
    /// ``` self: QtC.KIconTheme, group: kiconloader_enums.Group ```
    pub fn DefaultSize(self: ?*anyopaque, group: i32) i32 {
        return qtc.KIconTheme_DefaultSize(@ptrCast(self), @intCast(group));
    }

    /// [Qt documentation](https://api.kde.org/kicontheme.html#querySizes)
    ///
    /// ``` self: QtC.KIconTheme, group: kiconloader_enums.Group, allocator: std.mem.Allocator ```
    pub fn QuerySizes(self: ?*anyopaque, group: i32, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.KIconTheme_QuerySizes(@ptrCast(self), @intCast(group));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("kicontheme.QuerySizes: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kicontheme.html#queryIcons)
    ///
    /// ``` self: QtC.KIconTheme, allocator: std.mem.Allocator ```
    pub fn QueryIcons(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KIconTheme_QueryIcons(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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

    /// [Qt documentation](https://api.kde.org/kicontheme.html#queryIcons)
    ///
    /// ``` self: QtC.KIconTheme, size: i32, allocator: std.mem.Allocator ```
    pub fn QueryIcons2(self: ?*anyopaque, size: i32, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KIconTheme_QueryIcons2(@ptrCast(self), @intCast(size));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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

    /// [Qt documentation](https://api.kde.org/kicontheme.html#queryIconsByContext)
    ///
    /// ``` self: QtC.KIconTheme, size: i32, allocator: std.mem.Allocator ```
    pub fn QueryIconsByContext(self: ?*anyopaque, size: i32, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KIconTheme_QueryIconsByContext(@ptrCast(self), @intCast(size));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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

    /// [Qt documentation](https://api.kde.org/kicontheme.html#iconPath)
    ///
    /// ``` self: QtC.KIconTheme, name: []const u8, size: i32, match: kiconloader_enums.MatchType, allocator: std.mem.Allocator ```
    pub fn IconPath(self: ?*anyopaque, name: []const u8, size: i32, match: i32, allocator: std.mem.Allocator) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const _str = qtc.KIconTheme_IconPath(@ptrCast(self), name_str, @intCast(size), @intCast(match));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kicontheme.IconPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kicontheme.html#iconPath)
    ///
    /// ``` self: QtC.KIconTheme, name: []const u8, size: i32, match: kiconloader_enums.MatchType, scale: f64, allocator: std.mem.Allocator ```
    pub fn IconPath2(self: ?*anyopaque, name: []const u8, size: i32, match: i32, scale: f64, allocator: std.mem.Allocator) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const _str = qtc.KIconTheme_IconPath2(@ptrCast(self), name_str, @intCast(size), @intCast(match), @floatCast(scale));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kicontheme.IconPath2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kicontheme.html#iconPathByName)
    ///
    /// ``` self: QtC.KIconTheme, name: []const u8, size: i32, match: kiconloader_enums.MatchType, allocator: std.mem.Allocator ```
    pub fn IconPathByName(self: ?*anyopaque, name: []const u8, size: i32, match: i32, allocator: std.mem.Allocator) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const _str = qtc.KIconTheme_IconPathByName(@ptrCast(self), name_str, @intCast(size), @intCast(match));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kicontheme.IconPathByName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kicontheme.html#iconPathByName)
    ///
    /// ``` self: QtC.KIconTheme, name: []const u8, size: i32, match: kiconloader_enums.MatchType, scale: f64, allocator: std.mem.Allocator ```
    pub fn IconPathByName2(self: ?*anyopaque, name: []const u8, size: i32, match: i32, scale: f64, allocator: std.mem.Allocator) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const _str = qtc.KIconTheme_IconPathByName2(@ptrCast(self), name_str, @intCast(size), @intCast(match), @floatCast(scale));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kicontheme.IconPathByName2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kicontheme.html#hasContext)
    ///
    /// ``` self: QtC.KIconTheme, context: kiconloader_enums.Context ```
    pub fn HasContext(self: ?*anyopaque, context: i32) bool {
        return qtc.KIconTheme_HasContext(@ptrCast(self), @intCast(context));
    }

    /// [Qt documentation](https://api.kde.org/kicontheme.html#followsColorScheme)
    ///
    /// ``` self: QtC.KIconTheme ```
    pub fn FollowsColorScheme(self: ?*anyopaque) bool {
        return qtc.KIconTheme_FollowsColorScheme(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kicontheme.html#list)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn List(allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KIconTheme_List();
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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

    /// [Qt documentation](https://api.kde.org/kicontheme.html#current)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn Current(allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KIconTheme_Current();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kicontheme.Current: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kicontheme.html#forceThemeForTests)
    ///
    /// ``` themeName: []const u8 ```
    pub fn ForceThemeForTests(themeName: []const u8) void {
        const themeName_str = qtc.libqt_string{
            .len = themeName.len,
            .data = themeName.ptr,
        };
        qtc.KIconTheme_ForceThemeForTests(themeName_str);
    }

    /// [Qt documentation](https://api.kde.org/kicontheme.html#reconfigure)
    ///
    ///
    pub fn Reconfigure() void {
        qtc.KIconTheme_Reconfigure();
    }

    /// [Qt documentation](https://api.kde.org/kicontheme.html#defaultThemeName)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn DefaultThemeName(allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KIconTheme_DefaultThemeName();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kicontheme.DefaultThemeName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kicontheme.html#initTheme)
    ///
    ///
    pub fn InitTheme() void {
        qtc.KIconTheme_InitTheme();
    }

    /// [Qt documentation](https://api.kde.org/kicontheme.html#queryIcons)
    ///
    /// ``` self: QtC.KIconTheme, size: i32, context: kiconloader_enums.Context, allocator: std.mem.Allocator ```
    pub fn QueryIcons22(self: ?*anyopaque, size: i32, context: i32, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KIconTheme_QueryIcons22(@ptrCast(self), @intCast(size), @intCast(context));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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

    /// [Qt documentation](https://api.kde.org/kicontheme.html#queryIconsByContext)
    ///
    /// ``` self: QtC.KIconTheme, size: i32, context: kiconloader_enums.Context, allocator: std.mem.Allocator ```
    pub fn QueryIconsByContext2(self: ?*anyopaque, size: i32, context: i32, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KIconTheme_QueryIconsByContext2(@ptrCast(self), @intCast(size), @intCast(context));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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

    /// [Qt documentation](https://api.kde.org/kicontheme.html#dtor.KIconTheme)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KIconTheme ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KIconTheme_Delete(@ptrCast(self));
    }
};
