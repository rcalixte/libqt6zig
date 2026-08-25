const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KSyntaxHighlighting__Definition = @import("libqt6").KSyntaxHighlighting__Definition;
const KSyntaxHighlighting__Theme = @import("libqt6").KSyntaxHighlighting__Theme;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPalette = @import("libqt6").QPalette;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const repository_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-repository.html)
pub const KSyntaxHighlighting__Repository = extern struct {
    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-repository.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KSyntaxHighlighting__Repository,

    pub const _is_KSyntaxHighlighting__Repository = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KSyntaxHighlighting::Repository object in C++ memory
    ///
    pub fn new() KSyntaxHighlighting__Repository {
        return .{ .ptr = qtc.KSyntaxHighlighting__Repository_new() };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    pub fn metaObject(self: KSyntaxHighlighting__Repository) QMetaObject {
        return .{ .ptr = qtc.KSyntaxHighlighting__Repository_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: KSyntaxHighlighting__Repository, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KSyntaxHighlighting__Repository_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    pub fn superMetaObject(self: KSyntaxHighlighting__Repository) QMetaObject {
        return .{ .ptr = qtc.KSyntaxHighlighting__Repository_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KSyntaxHighlighting__Repository, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KSyntaxHighlighting__Repository_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__Repository, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: KSyntaxHighlighting__Repository, callback: *const fn (KSyntaxHighlighting__Repository, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KSyntaxHighlighting__Repository_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: KSyntaxHighlighting__Repository, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KSyntaxHighlighting__Repository_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: KSyntaxHighlighting__Repository, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KSyntaxHighlighting__Repository_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__Repository, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: KSyntaxHighlighting__Repository, callback: *const fn (KSyntaxHighlighting__Repository, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KSyntaxHighlighting__Repository_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: KSyntaxHighlighting__Repository, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KSyntaxHighlighting__Repository_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KSyntaxHighlighting__Repository.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `definitionForName` instead
    ///
    pub const DefinitionForName = definitionForName;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-repository.html#definitionForName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` defName: []const u8 `
    ///
    pub fn definitionForName(self: KSyntaxHighlighting__Repository, defName: []const u8) KSyntaxHighlighting__Definition {
        const defName_str = qtc.libqt_string{
            .len = defName.len,
            .data = defName.ptr,
        };
        return .{ .ptr = qtc.KSyntaxHighlighting__Repository_DefinitionForName(@ptrCast(self.ptr), defName_str) };
    }

    /// ### DEPRECATED: Use `definitionForFileName` instead
    ///
    pub const DefinitionForFileName = definitionForFileName;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-repository.html#definitionForFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn definitionForFileName(self: KSyntaxHighlighting__Repository, fileName: []const u8) KSyntaxHighlighting__Definition {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return .{ .ptr = qtc.KSyntaxHighlighting__Repository_DefinitionForFileName(@ptrCast(self.ptr), fileName_str) };
    }

    /// ### DEPRECATED: Use `definitionsForFileName` instead
    ///
    pub const DefinitionsForFileName = definitionsForFileName;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-repository.html#definitionsForFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn definitionsForFileName(self: KSyntaxHighlighting__Repository, allocator: std.mem.Allocator, fileName: []const u8) []KSyntaxHighlighting__Definition {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KSyntaxHighlighting__Repository_DefinitionsForFileName(@ptrCast(self.ptr), fileName_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KSyntaxHighlighting__Definition, _arr.len) catch @panic("KSyntaxHighlighting__Repository.definitionsForFileName: Memory allocation failed");
        const _data_val: [*]QtC.KSyntaxHighlighting__Definition = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `definitionForMimeType` instead
    ///
    pub const DefinitionForMimeType = definitionForMimeType;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-repository.html#definitionForMimeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` mimeType: []const u8 `
    ///
    pub fn definitionForMimeType(self: KSyntaxHighlighting__Repository, mimeType: []const u8) KSyntaxHighlighting__Definition {
        const mimeType_str = qtc.libqt_string{
            .len = mimeType.len,
            .data = mimeType.ptr,
        };
        return .{ .ptr = qtc.KSyntaxHighlighting__Repository_DefinitionForMimeType(@ptrCast(self.ptr), mimeType_str) };
    }

    /// ### DEPRECATED: Use `definitionsForMimeType` instead
    ///
    pub const DefinitionsForMimeType = definitionsForMimeType;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-repository.html#definitionsForMimeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` mimeType: []const u8 `
    ///
    pub fn definitionsForMimeType(self: KSyntaxHighlighting__Repository, allocator: std.mem.Allocator, mimeType: []const u8) []KSyntaxHighlighting__Definition {
        const mimeType_str = qtc.libqt_string{
            .len = mimeType.len,
            .data = mimeType.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KSyntaxHighlighting__Repository_DefinitionsForMimeType(@ptrCast(self.ptr), mimeType_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KSyntaxHighlighting__Definition, _arr.len) catch @panic("KSyntaxHighlighting__Repository.definitionsForMimeType: Memory allocation failed");
        const _data_val: [*]QtC.KSyntaxHighlighting__Definition = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `definitions` instead
    ///
    pub const Definitions = definitions;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-repository.html#definitions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn definitions(self: KSyntaxHighlighting__Repository, allocator: std.mem.Allocator) []KSyntaxHighlighting__Definition {
        const _arr: qtc.libqt_list = qtc.KSyntaxHighlighting__Repository_Definitions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KSyntaxHighlighting__Definition, _arr.len) catch @panic("KSyntaxHighlighting__Repository.definitions: Memory allocation failed");
        const _data_val: [*]QtC.KSyntaxHighlighting__Definition = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `themes` instead
    ///
    pub const Themes = themes;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-repository.html#themes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn themes(self: KSyntaxHighlighting__Repository, allocator: std.mem.Allocator) []KSyntaxHighlighting__Theme {
        const _arr: qtc.libqt_list = qtc.KSyntaxHighlighting__Repository_Themes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KSyntaxHighlighting__Theme, _arr.len) catch @panic("KSyntaxHighlighting__Repository.themes: Memory allocation failed");
        const _data_val: [*]QtC.KSyntaxHighlighting__Theme = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `theme` instead
    ///
    pub const Theme = theme;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-repository.html#theme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` themeName: []const u8 `
    ///
    pub fn theme(self: KSyntaxHighlighting__Repository, themeName: []const u8) KSyntaxHighlighting__Theme {
        const themeName_str = qtc.libqt_string{
            .len = themeName.len,
            .data = themeName.ptr,
        };
        return .{ .ptr = qtc.KSyntaxHighlighting__Repository_Theme(@ptrCast(self.ptr), themeName_str) };
    }

    /// ### DEPRECATED: Use `defaultTheme` instead
    ///
    pub const DefaultTheme = defaultTheme;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-repository.html#defaultTheme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    pub fn defaultTheme(self: KSyntaxHighlighting__Repository) KSyntaxHighlighting__Theme {
        return .{ .ptr = qtc.KSyntaxHighlighting__Repository_DefaultTheme(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `themeForPalette` instead
    ///
    pub const ThemeForPalette = themeForPalette;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-repository.html#themeForPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` palette: QPalette `
    ///
    pub fn themeForPalette(self: KSyntaxHighlighting__Repository, palette: anytype) KSyntaxHighlighting__Theme {
        comptime _ = @TypeOf(palette)._is_QPalette;
        return .{ .ptr = qtc.KSyntaxHighlighting__Repository_ThemeForPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr)) };
    }

    /// ### DEPRECATED: Use `reload` instead
    ///
    pub const Reload = reload;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-repository.html#reload)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    pub fn reload(self: KSyntaxHighlighting__Repository) void {
        qtc.KSyntaxHighlighting__Repository_Reload(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `addCustomSearchPath` instead
    ///
    pub const AddCustomSearchPath = addCustomSearchPath;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-repository.html#addCustomSearchPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` path: []const u8 `
    ///
    pub fn addCustomSearchPath(self: KSyntaxHighlighting__Repository, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.KSyntaxHighlighting__Repository_AddCustomSearchPath(@ptrCast(self.ptr), path_str);
    }

    /// ### DEPRECATED: Use `customSearchPaths` instead
    ///
    pub const CustomSearchPaths = customSearchPaths;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-repository.html#customSearchPaths)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn customSearchPaths(self: KSyntaxHighlighting__Repository, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KSyntaxHighlighting__Repository_CustomSearchPaths(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KSyntaxHighlighting__Repository.customSearchPaths: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KSyntaxHighlighting__Repository.customSearchPaths: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `aboutToReload` instead
    ///
    pub const AboutToReload = aboutToReload;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-repository.html#aboutToReload)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    pub fn aboutToReload(self: KSyntaxHighlighting__Repository) void {
        qtc.KSyntaxHighlighting__Repository_AboutToReload(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAboutToReload` instead
    ///
    pub const OnAboutToReload = onAboutToReload;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-repository.html#aboutToReload)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__Repository) callconv(.c) void `
    ///
    pub fn onAboutToReload(self: KSyntaxHighlighting__Repository, callback: *const fn (KSyntaxHighlighting__Repository) callconv(.c) void) void {
        qtc.KSyntaxHighlighting__Repository_Connect_AboutToReload(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `reloaded` instead
    ///
    pub const Reloaded = reloaded;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-repository.html#reloaded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    pub fn reloaded(self: KSyntaxHighlighting__Repository) void {
        qtc.KSyntaxHighlighting__Repository_Reloaded(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onReloaded` instead
    ///
    pub const OnReloaded = onReloaded;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-repository.html#reloaded)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__Repository) callconv(.c) void `
    ///
    pub fn onReloaded(self: KSyntaxHighlighting__Repository, callback: *const fn (KSyntaxHighlighting__Repository) callconv(.c) void) void {
        qtc.KSyntaxHighlighting__Repository_Connect_Reloaded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KSyntaxHighlighting__Repository.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KSyntaxHighlighting__Repository.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `defaultTheme1` instead
    ///
    pub const DefaultTheme1 = defaultTheme1;

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-repository.html#defaultTheme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` t: repository_enums.DefaultTheme `
    ///
    pub fn defaultTheme1(self: KSyntaxHighlighting__Repository, t: i32) KSyntaxHighlighting__Theme {
        return .{ .ptr = qtc.KSyntaxHighlighting__Repository_DefaultTheme1(@ptrCast(self.ptr), @bitCast(t)) };
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KSyntaxHighlighting__Repository, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KSyntaxHighlighting__Repository.objectName: Memory allocation failed");
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: KSyntaxHighlighting__Repository, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    pub fn isWidgetType(self: KSyntaxHighlighting__Repository) bool {
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    pub fn isWindowType(self: KSyntaxHighlighting__Repository) bool {
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    pub fn isQuickItemType(self: KSyntaxHighlighting__Repository) bool {
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    pub fn signalsBlocked(self: KSyntaxHighlighting__Repository) bool {
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KSyntaxHighlighting__Repository, b: bool) bool {
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    pub fn thread(self: KSyntaxHighlighting__Repository) QThread {
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KSyntaxHighlighting__Repository, _thread: anytype) bool {
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KSyntaxHighlighting__Repository, interval: i32) i32 {
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KSyntaxHighlighting__Repository, time: i64) i32 {
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KSyntaxHighlighting__Repository, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KSyntaxHighlighting__Repository, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KSyntaxHighlighting__Repository, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KSyntaxHighlighting__Repository.children: Memory allocation failed");
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KSyntaxHighlighting__Repository, _parent: anytype) void {
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KSyntaxHighlighting__Repository, filterObj: anytype) void {
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KSyntaxHighlighting__Repository, obj: anytype) void {
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KSyntaxHighlighting__Repository, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    pub fn disconnect3(self: KSyntaxHighlighting__Repository) bool {
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KSyntaxHighlighting__Repository, receiver: anytype) bool {
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    pub fn dumpObjectTree(self: KSyntaxHighlighting__Repository) void {
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    pub fn dumpObjectInfo(self: KSyntaxHighlighting__Repository) void {
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KSyntaxHighlighting__Repository, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: KSyntaxHighlighting__Repository, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KSyntaxHighlighting__Repository, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KSyntaxHighlighting__Repository.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KSyntaxHighlighting__Repository.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    pub fn bindingStorage(self: KSyntaxHighlighting__Repository) QBindingStorage {
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    pub fn bindingStorage2(self: KSyntaxHighlighting__Repository) QBindingStorage {
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    pub fn destroyed(self: KSyntaxHighlighting__Repository) void {
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__Repository) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KSyntaxHighlighting__Repository, callback: *const fn (KSyntaxHighlighting__Repository) callconv(.c) void) void {
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    pub fn parent(self: KSyntaxHighlighting__Repository) QObject {
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KSyntaxHighlighting__Repository, classname: [:0]const u8) bool {
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    pub fn deleteLater(self: KSyntaxHighlighting__Repository) void {
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KSyntaxHighlighting__Repository, interval: i32, timerType: i32) i32 {
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KSyntaxHighlighting__Repository, time: i64, timerType: i32) i32 {
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KSyntaxHighlighting__Repository, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KSyntaxHighlighting__Repository, signal: [:0]const u8) bool {
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KSyntaxHighlighting__Repository, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KSyntaxHighlighting__Repository, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KSyntaxHighlighting__Repository, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KSyntaxHighlighting__Repository, param1: anytype) void {
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__Repository, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KSyntaxHighlighting__Repository, callback: *const fn (KSyntaxHighlighting__Repository, QObject) callconv(.c) void) void {
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: KSyntaxHighlighting__Repository, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KSyntaxHighlighting__Repository_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: KSyntaxHighlighting__Repository, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KSyntaxHighlighting__Repository_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KSyntaxHighlighting__Repository`
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__Repository, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: KSyntaxHighlighting__Repository, callback: *const fn (KSyntaxHighlighting__Repository, QEvent) callconv(.c) bool) void {
        qtc.KSyntaxHighlighting__Repository_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KSyntaxHighlighting__Repository, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KSyntaxHighlighting__Repository_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: KSyntaxHighlighting__Repository, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KSyntaxHighlighting__Repository_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KSyntaxHighlighting__Repository`
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__Repository, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: KSyntaxHighlighting__Repository, callback: *const fn (KSyntaxHighlighting__Repository, QObject, QEvent) callconv(.c) bool) void {
        qtc.KSyntaxHighlighting__Repository_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: KSyntaxHighlighting__Repository, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KSyntaxHighlighting__Repository_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: KSyntaxHighlighting__Repository, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KSyntaxHighlighting__Repository_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KSyntaxHighlighting__Repository`
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__Repository, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: KSyntaxHighlighting__Repository, callback: *const fn (KSyntaxHighlighting__Repository, QTimerEvent) callconv(.c) void) void {
        qtc.KSyntaxHighlighting__Repository_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: KSyntaxHighlighting__Repository, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KSyntaxHighlighting__Repository_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: KSyntaxHighlighting__Repository, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KSyntaxHighlighting__Repository_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KSyntaxHighlighting__Repository`
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__Repository, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: KSyntaxHighlighting__Repository, callback: *const fn (KSyntaxHighlighting__Repository, QChildEvent) callconv(.c) void) void {
        qtc.KSyntaxHighlighting__Repository_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: KSyntaxHighlighting__Repository, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KSyntaxHighlighting__Repository_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: KSyntaxHighlighting__Repository, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KSyntaxHighlighting__Repository_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KSyntaxHighlighting__Repository`
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__Repository, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: KSyntaxHighlighting__Repository, callback: *const fn (KSyntaxHighlighting__Repository, QEvent) callconv(.c) void) void {
        qtc.KSyntaxHighlighting__Repository_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: KSyntaxHighlighting__Repository, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KSyntaxHighlighting__Repository_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: KSyntaxHighlighting__Repository, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KSyntaxHighlighting__Repository_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KSyntaxHighlighting__Repository`
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__Repository, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: KSyntaxHighlighting__Repository, callback: *const fn (KSyntaxHighlighting__Repository, QMetaMethod) callconv(.c) void) void {
        qtc.KSyntaxHighlighting__Repository_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: KSyntaxHighlighting__Repository, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KSyntaxHighlighting__Repository_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: KSyntaxHighlighting__Repository, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KSyntaxHighlighting__Repository_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KSyntaxHighlighting__Repository`
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__Repository, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: KSyntaxHighlighting__Repository, callback: *const fn (KSyntaxHighlighting__Repository, QMetaMethod) callconv(.c) void) void {
        qtc.KSyntaxHighlighting__Repository_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    pub fn sender(self: KSyntaxHighlighting__Repository) QObject {
        return .{ .ptr = qtc.KSyntaxHighlighting__Repository_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    pub fn superSender(self: KSyntaxHighlighting__Repository) QObject {
        return .{ .ptr = qtc.KSyntaxHighlighting__Repository_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: KSyntaxHighlighting__Repository`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: KSyntaxHighlighting__Repository, callback: *const fn () callconv(.c) QObject) void {
        qtc.KSyntaxHighlighting__Repository_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    pub fn senderSignalIndex(self: KSyntaxHighlighting__Repository) i32 {
        return qtc.KSyntaxHighlighting__Repository_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    pub fn superSenderSignalIndex(self: KSyntaxHighlighting__Repository) i32 {
        return qtc.KSyntaxHighlighting__Repository_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KSyntaxHighlighting__Repository`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: KSyntaxHighlighting__Repository, callback: *const fn () callconv(.c) i32) void {
        qtc.KSyntaxHighlighting__Repository_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: KSyntaxHighlighting__Repository, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KSyntaxHighlighting__Repository_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: KSyntaxHighlighting__Repository, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KSyntaxHighlighting__Repository_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KSyntaxHighlighting__Repository`
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__Repository, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: KSyntaxHighlighting__Repository, callback: *const fn (KSyntaxHighlighting__Repository, [*:0]const u8) callconv(.c) i32) void {
        qtc.KSyntaxHighlighting__Repository_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: KSyntaxHighlighting__Repository, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KSyntaxHighlighting__Repository_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: KSyntaxHighlighting__Repository, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KSyntaxHighlighting__Repository_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KSyntaxHighlighting__Repository`
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__Repository, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: KSyntaxHighlighting__Repository, callback: *const fn (KSyntaxHighlighting__Repository, QMetaMethod) callconv(.c) bool) void {
        qtc.KSyntaxHighlighting__Repository_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__Repository, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KSyntaxHighlighting__Repository, callback: *const fn (KSyntaxHighlighting__Repository, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    pub fn delete(self: KSyntaxHighlighting__Repository) void {
        qtc.KSyntaxHighlighting__Repository_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-repository.html#public-types)
pub const enums = struct {
    pub const DefaultTheme = enum {
        pub const LightTheme: i32 = 0;
        pub const DarkTheme: i32 = 1;
    };
};
