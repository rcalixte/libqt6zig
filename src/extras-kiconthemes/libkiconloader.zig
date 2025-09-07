const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kiconloader_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://api.kde.org/kiconloader.html
pub const kiconloader = struct {
    /// New constructs a new KIconLoader object.
    ///
    ///
    pub fn New() QtC.KIconLoader {
        return qtc.KIconLoader_new();
    }

    /// New2 constructs a new KIconLoader object.
    ///
    /// ``` appname: []const u8 ```
    pub fn New2(appname: []const u8) QtC.KIconLoader {
        const appname_str = qtc.libqt_string{
            .len = appname.len,
            .data = appname.ptr,
        };

        return qtc.KIconLoader_new2(appname_str);
    }

    /// New3 constructs a new KIconLoader object.
    ///
    /// ``` appname: []const u8, extraSearchPaths: [][]const u8, allocator: std.mem.Allocator ```
    pub fn New3(appname: []const u8, extraSearchPaths: [][]const u8, allocator: std.mem.Allocator) QtC.KIconLoader {
        const appname_str = qtc.libqt_string{
            .len = appname.len,
            .data = appname.ptr,
        };
        var extraSearchPaths_arr = allocator.alloc(qtc.libqt_string, extraSearchPaths.len) catch @panic("kiconloader.: Memory allocation failed");
        defer allocator.free(extraSearchPaths_arr);
        for (extraSearchPaths, 0..extraSearchPaths.len) |item, i| {
            extraSearchPaths_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const extraSearchPaths_list = qtc.libqt_list{
            .len = extraSearchPaths.len,
            .data = extraSearchPaths_arr.ptr,
        };

        return qtc.KIconLoader_new3(appname_str, extraSearchPaths_list);
    }

    /// New4 constructs a new KIconLoader object.
    ///
    /// ``` appname: []const u8, extraSearchPaths: [][]const u8, parent: QtC.QObject, allocator: std.mem.Allocator ```
    pub fn New4(appname: []const u8, extraSearchPaths: [][]const u8, parent: ?*anyopaque, allocator: std.mem.Allocator) QtC.KIconLoader {
        const appname_str = qtc.libqt_string{
            .len = appname.len,
            .data = appname.ptr,
        };
        var extraSearchPaths_arr = allocator.alloc(qtc.libqt_string, extraSearchPaths.len) catch @panic("kiconloader.: Memory allocation failed");
        defer allocator.free(extraSearchPaths_arr);
        for (extraSearchPaths, 0..extraSearchPaths.len) |item, i| {
            extraSearchPaths_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const extraSearchPaths_list = qtc.libqt_list{
            .len = extraSearchPaths.len,
            .data = extraSearchPaths_arr.ptr,
        };

        return qtc.KIconLoader_new4(appname_str, extraSearchPaths_list, @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.KIconLoader ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KIconLoader_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.KIconLoader, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KIconLoader_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.KIconLoader, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KIconLoader_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KIconLoader, slot: fn (self: QtC.KIconLoader, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.KIconLoader_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.KIconLoader, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KIconLoader_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.KIconLoader_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kiconloader.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kiconloader.html#global)
    ///
    ///
    pub fn Global() QtC.KIconLoader {
        return qtc.KIconLoader_Global();
    }

    /// [Qt documentation](https://api.kde.org/kiconloader.html#addAppDir)
    ///
    /// ``` self: QtC.KIconLoader, appname: []const u8 ```
    pub fn AddAppDir(self: ?*anyopaque, appname: []const u8) void {
        const appname_str = qtc.libqt_string{
            .len = appname.len,
            .data = appname.ptr,
        };
        qtc.KIconLoader_AddAppDir(@ptrCast(self), appname_str);
    }

    /// [Qt documentation](https://api.kde.org/kiconloader.html#loadIcon)
    ///
    /// ``` self: QtC.KIconLoader, name: []const u8, group: kiconloader_enums.Group ```
    pub fn LoadIcon(self: ?*anyopaque, name: []const u8, group: i32) QtC.QPixmap {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KIconLoader_LoadIcon(@ptrCast(self), name_str, @intCast(group));
    }

    /// [Qt documentation](https://api.kde.org/kiconloader.html#loadMimeTypeIcon)
    ///
    /// ``` self: QtC.KIconLoader, iconName: []const u8, group: kiconloader_enums.Group ```
    pub fn LoadMimeTypeIcon(self: ?*anyopaque, iconName: []const u8, group: i32) QtC.QPixmap {
        const iconName_str = qtc.libqt_string{
            .len = iconName.len,
            .data = iconName.ptr,
        };
        return qtc.KIconLoader_LoadMimeTypeIcon(@ptrCast(self), iconName_str, @intCast(group));
    }

    /// [Qt documentation](https://api.kde.org/kiconloader.html#iconPath)
    ///
    /// ``` self: QtC.KIconLoader, name: []const u8, group_or_size: i32, allocator: std.mem.Allocator ```
    pub fn IconPath(self: ?*anyopaque, name: []const u8, group_or_size: i32, allocator: std.mem.Allocator) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const _str = qtc.KIconLoader_IconPath(@ptrCast(self), name_str, @intCast(group_or_size));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kiconloader.IconPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kiconloader.html#iconPath)
    ///
    /// ``` self: QtC.KIconLoader, name: []const u8, group_or_size: i32, canReturnNull: bool, scale: f64, allocator: std.mem.Allocator ```
    pub fn IconPath2(self: ?*anyopaque, name: []const u8, group_or_size: i32, canReturnNull: bool, scale: f64, allocator: std.mem.Allocator) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const _str = qtc.KIconLoader_IconPath2(@ptrCast(self), name_str, @intCast(group_or_size), canReturnNull, @floatCast(scale));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kiconloader.IconPath2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kiconloader.html#loadMovie)
    ///
    /// ``` self: QtC.KIconLoader, name: []const u8, group: kiconloader_enums.Group ```
    pub fn LoadMovie(self: ?*anyopaque, name: []const u8, group: i32) QtC.QMovie {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KIconLoader_LoadMovie(@ptrCast(self), name_str, @intCast(group));
    }

    /// [Qt documentation](https://api.kde.org/kiconloader.html#moviePath)
    ///
    /// ``` self: QtC.KIconLoader, name: []const u8, group: kiconloader_enums.Group, allocator: std.mem.Allocator ```
    pub fn MoviePath(self: ?*anyopaque, name: []const u8, group: i32, allocator: std.mem.Allocator) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const _str = qtc.KIconLoader_MoviePath(@ptrCast(self), name_str, @intCast(group));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kiconloader.MoviePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kiconloader.html#loadAnimated)
    ///
    /// ``` self: QtC.KIconLoader, name: []const u8, group: kiconloader_enums.Group, allocator: std.mem.Allocator ```
    pub fn LoadAnimated(self: ?*anyopaque, name: []const u8, group: i32, allocator: std.mem.Allocator) [][]const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KIconLoader_LoadAnimated(@ptrCast(self), name_str, @intCast(group));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kiconloader.LoadAnimated: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kiconloader.LoadAnimated: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kiconloader.html#queryIcons)
    ///
    /// ``` self: QtC.KIconLoader, allocator: std.mem.Allocator ```
    pub fn QueryIcons(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KIconLoader_QueryIcons(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kiconloader.QueryIcons: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kiconloader.QueryIcons: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kiconloader.html#queryIcons)
    ///
    /// ``` self: QtC.KIconLoader, group_or_size: i32, allocator: std.mem.Allocator ```
    pub fn QueryIcons2(self: ?*anyopaque, group_or_size: i32, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KIconLoader_QueryIcons2(@ptrCast(self), @intCast(group_or_size));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kiconloader.QueryIcons2: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kiconloader.QueryIcons2: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kiconloader.html#queryIconsByContext)
    ///
    /// ``` self: QtC.KIconLoader, group_or_size: i32, allocator: std.mem.Allocator ```
    pub fn QueryIconsByContext(self: ?*anyopaque, group_or_size: i32, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KIconLoader_QueryIconsByContext(@ptrCast(self), @intCast(group_or_size));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kiconloader.QueryIconsByContext: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kiconloader.QueryIconsByContext: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kiconloader.html#hasContext)
    ///
    /// ``` self: QtC.KIconLoader, context: kiconloader_enums.Context ```
    pub fn HasContext(self: ?*anyopaque, context: i32) bool {
        return qtc.KIconLoader_HasContext(@ptrCast(self), @intCast(context));
    }

    /// [Qt documentation](https://api.kde.org/kiconloader.html#queryIconsByDir)
    ///
    /// ``` self: QtC.KIconLoader, iconsDir: []const u8, allocator: std.mem.Allocator ```
    pub fn QueryIconsByDir(self: ?*anyopaque, iconsDir: []const u8, allocator: std.mem.Allocator) [][]const u8 {
        const iconsDir_str = qtc.libqt_string{
            .len = iconsDir.len,
            .data = iconsDir.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KIconLoader_QueryIconsByDir(@ptrCast(self), iconsDir_str);
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kiconloader.QueryIconsByDir: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kiconloader.QueryIconsByDir: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kiconloader.html#searchPaths)
    ///
    /// ``` self: QtC.KIconLoader, allocator: std.mem.Allocator ```
    pub fn SearchPaths(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KIconLoader_SearchPaths(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kiconloader.SearchPaths: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kiconloader.SearchPaths: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kiconloader.html#currentSize)
    ///
    /// ``` self: QtC.KIconLoader, group: kiconloader_enums.Group ```
    pub fn CurrentSize(self: ?*anyopaque, group: i32) i32 {
        return qtc.KIconLoader_CurrentSize(@ptrCast(self), @intCast(group));
    }

    /// [Qt documentation](https://api.kde.org/kiconloader.html#theme)
    ///
    /// ``` self: QtC.KIconLoader ```
    pub fn Theme(self: ?*anyopaque) QtC.KIconTheme {
        return qtc.KIconLoader_Theme(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kiconloader.html#iconEffect)
    ///
    /// ``` self: QtC.KIconLoader ```
    pub fn IconEffect(self: ?*anyopaque) QtC.KIconEffect {
        return qtc.KIconLoader_IconEffect(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kiconloader.html#reconfigure)
    ///
    /// ``` self: QtC.KIconLoader, appname: []const u8 ```
    pub fn Reconfigure(self: ?*anyopaque, appname: []const u8) void {
        const appname_str = qtc.libqt_string{
            .len = appname.len,
            .data = appname.ptr,
        };
        qtc.KIconLoader_Reconfigure(@ptrCast(self), appname_str);
    }

    /// [Qt documentation](https://api.kde.org/kiconloader.html#unknown)
    ///
    ///
    pub fn Unknown() QtC.QPixmap {
        return qtc.KIconLoader_Unknown();
    }

    /// [Qt documentation](https://api.kde.org/kiconloader.html#drawOverlays)
    ///
    /// ``` self: QtC.KIconLoader, overlays: [][]const u8, pixmap: QtC.QPixmap, group: kiconloader_enums.Group, allocator: std.mem.Allocator ```
    pub fn DrawOverlays(self: ?*anyopaque, overlays: [][]const u8, pixmap: ?*anyopaque, group: i32, allocator: std.mem.Allocator) void {
        var overlays_arr = allocator.alloc(qtc.libqt_string, overlays.len) catch @panic("kiconloader.DrawOverlays: Memory allocation failed");
        defer allocator.free(overlays_arr);
        for (overlays, 0..overlays.len) |item, i| {
            overlays_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const overlays_list = qtc.libqt_list{
            .len = overlays.len,
            .data = overlays_arr.ptr,
        };
        qtc.KIconLoader_DrawOverlays(@ptrCast(self), overlays_list, @ptrCast(pixmap), @intCast(group));
    }

    /// [Qt documentation](https://api.kde.org/kiconloader.html#hasIcon)
    ///
    /// ``` self: QtC.KIconLoader, iconName: []const u8 ```
    pub fn HasIcon(self: ?*anyopaque, iconName: []const u8) bool {
        const iconName_str = qtc.libqt_string{
            .len = iconName.len,
            .data = iconName.ptr,
        };
        return qtc.KIconLoader_HasIcon(@ptrCast(self), iconName_str);
    }

    /// [Qt documentation](https://api.kde.org/kiconloader.html#setCustomPalette)
    ///
    /// ``` self: QtC.KIconLoader, palette: QtC.QPalette ```
    pub fn SetCustomPalette(self: ?*anyopaque, palette: ?*anyopaque) void {
        qtc.KIconLoader_SetCustomPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// [Qt documentation](https://api.kde.org/kiconloader.html#customPalette)
    ///
    /// ``` self: QtC.KIconLoader ```
    pub fn CustomPalette(self: ?*anyopaque) QtC.QPalette {
        return qtc.KIconLoader_CustomPalette(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kiconloader.html#resetPalette)
    ///
    /// ``` self: QtC.KIconLoader ```
    pub fn ResetPalette(self: ?*anyopaque) void {
        qtc.KIconLoader_ResetPalette(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kiconloader.html#hasCustomPalette)
    ///
    /// ``` self: QtC.KIconLoader ```
    pub fn HasCustomPalette(self: ?*anyopaque) bool {
        return qtc.KIconLoader_HasCustomPalette(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kiconloader.html#newIconLoader)
    ///
    /// ``` self: QtC.KIconLoader ```
    pub fn NewIconLoader(self: ?*anyopaque) void {
        qtc.KIconLoader_NewIconLoader(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kiconloader.html#emitChange)
    ///
    /// ``` group: kiconloader_enums.Group ```
    pub fn EmitChange(group: i32) void {
        qtc.KIconLoader_EmitChange(@intCast(group));
    }

    /// [Qt documentation](https://api.kde.org/kiconloader.html#iconLoaderSettingsChanged)
    ///
    /// ``` self: QtC.KIconLoader ```
    pub fn IconLoaderSettingsChanged(self: ?*anyopaque) void {
        qtc.KIconLoader_IconLoaderSettingsChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kiconloader.html#iconLoaderSettingsChanged)
    ///
    /// ``` self: QtC.KIconLoader, slot: fn (self: QtC.KIconLoader) callconv(.c) void ```
    pub fn OnIconLoaderSettingsChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.KIconLoader_Connect_IconLoaderSettingsChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kiconloader.html#iconChanged)
    ///
    /// ``` self: QtC.KIconLoader, group: i32 ```
    pub fn IconChanged(self: ?*anyopaque, group: i32) void {
        qtc.KIconLoader_IconChanged(@ptrCast(self), @intCast(group));
    }

    /// [Qt documentation](https://api.kde.org/kiconloader.html#iconChanged)
    ///
    /// ``` self: QtC.KIconLoader, slot: fn (self: QtC.KIconLoader, group: i32) callconv(.c) void ```
    pub fn OnIconChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.KIconLoader_Connect_IconChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KIconLoader_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kiconloader.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KIconLoader_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kiconloader.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kiconloader.html#addAppDir)
    ///
    /// ``` self: QtC.KIconLoader, appname: []const u8, themeBaseDir: []const u8 ```
    pub fn AddAppDir2(self: ?*anyopaque, appname: []const u8, themeBaseDir: []const u8) void {
        const appname_str = qtc.libqt_string{
            .len = appname.len,
            .data = appname.ptr,
        };
        const themeBaseDir_str = qtc.libqt_string{
            .len = themeBaseDir.len,
            .data = themeBaseDir.ptr,
        };
        qtc.KIconLoader_AddAppDir2(@ptrCast(self), appname_str, themeBaseDir_str);
    }

    /// [Qt documentation](https://api.kde.org/kiconloader.html#loadIcon)
    ///
    /// ``` self: QtC.KIconLoader, name: []const u8, group: kiconloader_enums.Group, size: i32 ```
    pub fn LoadIcon3(self: ?*anyopaque, name: []const u8, group: i32, size: i32) QtC.QPixmap {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KIconLoader_LoadIcon3(@ptrCast(self), name_str, @intCast(group), @intCast(size));
    }

    /// [Qt documentation](https://api.kde.org/kiconloader.html#loadIcon)
    ///
    /// ``` self: QtC.KIconLoader, name: []const u8, group: kiconloader_enums.Group, size: i32, state: i32 ```
    pub fn LoadIcon4(self: ?*anyopaque, name: []const u8, group: i32, size: i32, state: i32) QtC.QPixmap {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KIconLoader_LoadIcon4(@ptrCast(self), name_str, @intCast(group), @intCast(size), @intCast(state));
    }

    /// [Qt documentation](https://api.kde.org/kiconloader.html#loadIcon)
    ///
    /// ``` self: QtC.KIconLoader, name: []const u8, group: kiconloader_enums.Group, size: i32, state: i32, overlays: [][]const u8, allocator: std.mem.Allocator ```
    pub fn LoadIcon5(self: ?*anyopaque, name: []const u8, group: i32, size: i32, state: i32, overlays: [][]const u8, allocator: std.mem.Allocator) QtC.QPixmap {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var overlays_arr = allocator.alloc(qtc.libqt_string, overlays.len) catch @panic("kiconloader.LoadIcon5: Memory allocation failed");
        defer allocator.free(overlays_arr);
        for (overlays, 0..overlays.len) |item, i| {
            overlays_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const overlays_list = qtc.libqt_list{
            .len = overlays.len,
            .data = overlays_arr.ptr,
        };
        return qtc.KIconLoader_LoadIcon5(@ptrCast(self), name_str, @intCast(group), @intCast(size), @intCast(state), overlays_list);
    }

    /// [Qt documentation](https://api.kde.org/kiconloader.html#loadMimeTypeIcon)
    ///
    /// ``` self: QtC.KIconLoader, iconName: []const u8, group: kiconloader_enums.Group, size: i32 ```
    pub fn LoadMimeTypeIcon3(self: ?*anyopaque, iconName: []const u8, group: i32, size: i32) QtC.QPixmap {
        const iconName_str = qtc.libqt_string{
            .len = iconName.len,
            .data = iconName.ptr,
        };
        return qtc.KIconLoader_LoadMimeTypeIcon3(@ptrCast(self), iconName_str, @intCast(group), @intCast(size));
    }

    /// [Qt documentation](https://api.kde.org/kiconloader.html#loadMimeTypeIcon)
    ///
    /// ``` self: QtC.KIconLoader, iconName: []const u8, group: kiconloader_enums.Group, size: i32, state: i32 ```
    pub fn LoadMimeTypeIcon4(self: ?*anyopaque, iconName: []const u8, group: i32, size: i32, state: i32) QtC.QPixmap {
        const iconName_str = qtc.libqt_string{
            .len = iconName.len,
            .data = iconName.ptr,
        };
        return qtc.KIconLoader_LoadMimeTypeIcon4(@ptrCast(self), iconName_str, @intCast(group), @intCast(size), @intCast(state));
    }

    /// [Qt documentation](https://api.kde.org/kiconloader.html#loadMimeTypeIcon)
    ///
    /// ``` self: QtC.KIconLoader, iconName: []const u8, group: kiconloader_enums.Group, size: i32, state: i32, overlays: [][]const u8, allocator: std.mem.Allocator ```
    pub fn LoadMimeTypeIcon5(self: ?*anyopaque, iconName: []const u8, group: i32, size: i32, state: i32, overlays: [][]const u8, allocator: std.mem.Allocator) QtC.QPixmap {
        const iconName_str = qtc.libqt_string{
            .len = iconName.len,
            .data = iconName.ptr,
        };
        var overlays_arr = allocator.alloc(qtc.libqt_string, overlays.len) catch @panic("kiconloader.LoadMimeTypeIcon5: Memory allocation failed");
        defer allocator.free(overlays_arr);
        for (overlays, 0..overlays.len) |item, i| {
            overlays_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const overlays_list = qtc.libqt_list{
            .len = overlays.len,
            .data = overlays_arr.ptr,
        };
        return qtc.KIconLoader_LoadMimeTypeIcon5(@ptrCast(self), iconName_str, @intCast(group), @intCast(size), @intCast(state), overlays_list);
    }

    /// [Qt documentation](https://api.kde.org/kiconloader.html#iconPath)
    ///
    /// ``` self: QtC.KIconLoader, name: []const u8, group_or_size: i32, canReturnNull: bool, allocator: std.mem.Allocator ```
    pub fn IconPath3(self: ?*anyopaque, name: []const u8, group_or_size: i32, canReturnNull: bool, allocator: std.mem.Allocator) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const _str = qtc.KIconLoader_IconPath3(@ptrCast(self), name_str, @intCast(group_or_size), canReturnNull);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kiconloader.IconPath3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kiconloader.html#loadMovie)
    ///
    /// ``` self: QtC.KIconLoader, name: []const u8, group: kiconloader_enums.Group, size: i32 ```
    pub fn LoadMovie3(self: ?*anyopaque, name: []const u8, group: i32, size: i32) QtC.QMovie {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KIconLoader_LoadMovie3(@ptrCast(self), name_str, @intCast(group), @intCast(size));
    }

    /// [Qt documentation](https://api.kde.org/kiconloader.html#loadMovie)
    ///
    /// ``` self: QtC.KIconLoader, name: []const u8, group: kiconloader_enums.Group, size: i32, parent: QtC.QObject ```
    pub fn LoadMovie4(self: ?*anyopaque, name: []const u8, group: i32, size: i32, parent: ?*anyopaque) QtC.QMovie {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KIconLoader_LoadMovie4(@ptrCast(self), name_str, @intCast(group), @intCast(size), @ptrCast(parent));
    }

    /// [Qt documentation](https://api.kde.org/kiconloader.html#moviePath)
    ///
    /// ``` self: QtC.KIconLoader, name: []const u8, group: kiconloader_enums.Group, size: i32, allocator: std.mem.Allocator ```
    pub fn MoviePath3(self: ?*anyopaque, name: []const u8, group: i32, size: i32, allocator: std.mem.Allocator) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const _str = qtc.KIconLoader_MoviePath3(@ptrCast(self), name_str, @intCast(group), @intCast(size));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kiconloader.MoviePath3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kiconloader.html#loadAnimated)
    ///
    /// ``` self: QtC.KIconLoader, name: []const u8, group: kiconloader_enums.Group, size: i32, allocator: std.mem.Allocator ```
    pub fn LoadAnimated3(self: ?*anyopaque, name: []const u8, group: i32, size: i32, allocator: std.mem.Allocator) [][]const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KIconLoader_LoadAnimated3(@ptrCast(self), name_str, @intCast(group), @intCast(size));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kiconloader.LoadAnimated3: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kiconloader.LoadAnimated3: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kiconloader.html#queryIcons)
    ///
    /// ``` self: QtC.KIconLoader, group_or_size: i32, context: kiconloader_enums.Context, allocator: std.mem.Allocator ```
    pub fn QueryIcons22(self: ?*anyopaque, group_or_size: i32, context: i32, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KIconLoader_QueryIcons22(@ptrCast(self), @intCast(group_or_size), @intCast(context));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kiconloader.QueryIcons22: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kiconloader.QueryIcons22: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kiconloader.html#queryIconsByContext)
    ///
    /// ``` self: QtC.KIconLoader, group_or_size: i32, context: kiconloader_enums.Context, allocator: std.mem.Allocator ```
    pub fn QueryIconsByContext2(self: ?*anyopaque, group_or_size: i32, context: i32, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KIconLoader_QueryIconsByContext2(@ptrCast(self), @intCast(group_or_size), @intCast(context));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kiconloader.QueryIconsByContext2: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kiconloader.QueryIconsByContext2: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kiconloader.html#reconfigure)
    ///
    /// ``` self: QtC.KIconLoader, appname: []const u8, extraSearchPaths: [][]const u8, allocator: std.mem.Allocator ```
    pub fn Reconfigure2(self: ?*anyopaque, appname: []const u8, extraSearchPaths: [][]const u8, allocator: std.mem.Allocator) void {
        const appname_str = qtc.libqt_string{
            .len = appname.len,
            .data = appname.ptr,
        };
        var extraSearchPaths_arr = allocator.alloc(qtc.libqt_string, extraSearchPaths.len) catch @panic("kiconloader.Reconfigure2: Memory allocation failed");
        defer allocator.free(extraSearchPaths_arr);
        for (extraSearchPaths, 0..extraSearchPaths.len) |item, i| {
            extraSearchPaths_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const extraSearchPaths_list = qtc.libqt_list{
            .len = extraSearchPaths.len,
            .data = extraSearchPaths_arr.ptr,
        };
        qtc.KIconLoader_Reconfigure2(@ptrCast(self), appname_str, extraSearchPaths_list);
    }

    /// [Qt documentation](https://api.kde.org/kiconloader.html#drawOverlays)
    ///
    /// ``` self: QtC.KIconLoader, overlays: [][]const u8, pixmap: QtC.QPixmap, group: kiconloader_enums.Group, state: i32, allocator: std.mem.Allocator ```
    pub fn DrawOverlays4(self: ?*anyopaque, overlays: [][]const u8, pixmap: ?*anyopaque, group: i32, state: i32, allocator: std.mem.Allocator) void {
        var overlays_arr = allocator.alloc(qtc.libqt_string, overlays.len) catch @panic("kiconloader.DrawOverlays4: Memory allocation failed");
        defer allocator.free(overlays_arr);
        for (overlays, 0..overlays.len) |item, i| {
            overlays_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const overlays_list = qtc.libqt_list{
            .len = overlays.len,
            .data = overlays_arr.ptr,
        };
        qtc.KIconLoader_DrawOverlays4(@ptrCast(self), overlays_list, @ptrCast(pixmap), @intCast(group), @intCast(state));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.KIconLoader, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kiconloader.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.KIconLoader, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.KIconLoader ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.KIconLoader ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.KIconLoader ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.KIconLoader ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.KIconLoader, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.KIconLoader ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KIconLoader, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KIconLoader, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KIconLoader, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KIconLoader, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.KIconLoader, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("kiconloader.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.KIconLoader, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.KIconLoader, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.KIconLoader, obj: QtC.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.KIconLoader, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, member: QtC.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: QtC.QMetaObject__Connection ```
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.KIconLoader ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.KIconLoader ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.KIconLoader, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.KIconLoader, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.KIconLoader, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kiconloader.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kiconloader.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KIconLoader ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KIconLoader ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KIconLoader ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KIconLoader, slot: fn (self: QtC.KIconLoader) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.KIconLoader ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.KIconLoader, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.KIconLoader ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KIconLoader, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KIconLoader, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.KIconLoader, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KIconLoader, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KIconLoader, slot: fn (self: QtC.KIconLoader, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KIconLoader, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KIconLoader_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KIconLoader, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KIconLoader_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KIconLoader, slot: fn (self: QtC.KIconLoader, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KIconLoader_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KIconLoader, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KIconLoader_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KIconLoader, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KIconLoader_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KIconLoader, slot: fn (self: QtC.KIconLoader, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KIconLoader_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KIconLoader, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KIconLoader_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KIconLoader, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KIconLoader_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KIconLoader, slot: fn (self: QtC.KIconLoader, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KIconLoader_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KIconLoader, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KIconLoader_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KIconLoader, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KIconLoader_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KIconLoader, slot: fn (self: QtC.KIconLoader, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KIconLoader_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KIconLoader, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KIconLoader_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KIconLoader, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KIconLoader_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KIconLoader, slot: fn (self: QtC.KIconLoader, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KIconLoader_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KIconLoader, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KIconLoader_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KIconLoader, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KIconLoader_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KIconLoader, slot: fn (self: QtC.KIconLoader, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KIconLoader_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KIconLoader, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KIconLoader_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KIconLoader, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KIconLoader_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KIconLoader, slot: fn (self: QtC.KIconLoader, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KIconLoader_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KIconLoader ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.KIconLoader_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KIconLoader ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.KIconLoader_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KIconLoader, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.KIconLoader_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KIconLoader ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KIconLoader_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KIconLoader ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KIconLoader_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KIconLoader, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.KIconLoader_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KIconLoader, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KIconLoader_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KIconLoader, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KIconLoader_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KIconLoader, slot: fn (self: QtC.KIconLoader, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.KIconLoader_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KIconLoader, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KIconLoader_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KIconLoader, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KIconLoader_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KIconLoader, slot: fn (self: QtC.KIconLoader, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KIconLoader_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KIconLoader, slot: fn (self: QtC.KIconLoader, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kiconloader.html#dtor.KIconLoader)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KIconLoader ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KIconLoader_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/kde.html
pub const kde = struct {
    /// [Qt documentation](https://api.kde.org/kde.html#icon)
    ///
    /// ``` param1: []const u8, param2: QtC.KIconLoader ```
    pub fn Icon(param1: []const u8, param2: ?*anyopaque) QtC.QIcon {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        return qtc.KDE_Icon(param1_str, @ptrCast(param2));
    }

    /// [Qt documentation](https://api.kde.org/kde.html#icon)
    ///
    /// ``` param1: []const u8, param2: QtC.KIconColors, param3: QtC.KIconLoader ```
    pub fn Icon2(param1: []const u8, param2: ?*anyopaque, param3: ?*anyopaque) QtC.QIcon {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        return qtc.KDE_Icon2(param1_str, @ptrCast(param2), @ptrCast(param3));
    }

    /// [Qt documentation](https://api.kde.org/kde.html#icon)
    ///
    /// ``` param1: []const u8, param2: [][]const u8, param3: QtC.KIconLoader, allocator: std.mem.Allocator ```
    pub fn Icon3(param1: []const u8, param2: [][]const u8, param3: ?*anyopaque, allocator: std.mem.Allocator) QtC.QIcon {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        var param2_arr = allocator.alloc(qtc.libqt_string, param2.len) catch @panic("kde.Icon3: Memory allocation failed");
        defer allocator.free(param2_arr);
        for (param2, 0..param2.len) |item, i| {
            param2_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const param2_list = qtc.libqt_list{
            .len = param2.len,
            .data = param2_arr.ptr,
        };
        return qtc.KDE_Icon3(param1_str, param2_list, @ptrCast(param3));
    }
};

/// https://api.kde.org/kiconloader.html#types
pub const enums = struct {
    pub const Context = enum {
        pub const Any: i32 = 0;
        pub const Action: i32 = 1;
        pub const Application: i32 = 2;
        pub const Device: i32 = 3;
        pub const MimeType: i32 = 4;
        pub const Animation: i32 = 5;
        pub const Category: i32 = 6;
        pub const Emblem: i32 = 7;
        pub const Emote: i32 = 8;
        pub const International: i32 = 9;
        pub const Place: i32 = 10;
        pub const StatusIcon: i32 = 11;
    };

    pub const Type = enum {
        pub const Fixed: i32 = 0;
        pub const Scalable: i32 = 1;
        pub const Threshold: i32 = 2;
    };

    pub const MatchType = enum {
        pub const MatchExact: i32 = 0;
        pub const MatchBest: i32 = 1;
        pub const MatchBestOrGreaterSize: i32 = 2;
    };

    pub const Group = enum {
        pub const NoGroup: i32 = -1;
        pub const Desktop: i32 = 0;
        pub const FirstGroup: i32 = 0;
        pub const Toolbar: i32 = 1;
        pub const MainToolbar: i32 = 2;
        pub const Small: i32 = 3;
        pub const Panel: i32 = 4;
        pub const Dialog: i32 = 5;
        pub const LastGroup: i32 = 6;
        pub const User: i32 = 7;
    };

    pub const StdSizes = enum {
        pub const SizeSmall: i32 = 16;
        pub const SizeSmallMedium: i32 = 22;
        pub const SizeMedium: i32 = 32;
        pub const SizeLarge: i32 = 48;
        pub const SizeHuge: i32 = 64;
        pub const SizeEnormous: i32 = 128;
    };

    pub const States = enum {
        pub const DefaultState: i32 = 0;
        pub const ActiveState: i32 = 1;
        pub const DisabledState: i32 = 2;
        pub const SelectedState: i32 = 3;
        pub const LastState: i32 = 4;
    };
};
