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

    /// New constructs a new KSyntaxHighlighting::Repository object.
    ///
    pub fn New() KSyntaxHighlighting__Repository {
        return .{ .ptr = qtc.KSyntaxHighlighting__Repository_new() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    pub fn MetaObject(self: KSyntaxHighlighting__Repository) QMetaObject {
        return .{ .ptr = qtc.KSyntaxHighlighting__Repository_MetaObject(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMetaObject(self: KSyntaxHighlighting__Repository, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KSyntaxHighlighting__Repository_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    pub fn SuperMetaObject(self: KSyntaxHighlighting__Repository) QMetaObject {
        return .{ .ptr = qtc.KSyntaxHighlighting__Repository_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KSyntaxHighlighting__Repository, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KSyntaxHighlighting__Repository_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__Repository, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KSyntaxHighlighting__Repository, callback: *const fn (KSyntaxHighlighting__Repository, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KSyntaxHighlighting__Repository_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KSyntaxHighlighting__Repository, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KSyntaxHighlighting__Repository_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

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
    pub fn Metacall(self: KSyntaxHighlighting__Repository, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KSyntaxHighlighting__Repository_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__Repository, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KSyntaxHighlighting__Repository, callback: *const fn (KSyntaxHighlighting__Repository, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KSyntaxHighlighting__Repository_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

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
    pub fn SuperMetacall(self: KSyntaxHighlighting__Repository, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KSyntaxHighlighting__Repository_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksyntaxhighlighting__repository.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-repository.html#definitionForName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` defName: []const u8 `
    ///
    pub fn DefinitionForName(self: KSyntaxHighlighting__Repository, defName: []const u8) KSyntaxHighlighting__Definition {
        const defName_str = qtc.libqt_string{
            .len = defName.len,
            .data = defName.ptr,
        };
        return .{ .ptr = qtc.KSyntaxHighlighting__Repository_DefinitionForName(@ptrCast(self.ptr), defName_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-repository.html#definitionForFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn DefinitionForFileName(self: KSyntaxHighlighting__Repository, fileName: []const u8) KSyntaxHighlighting__Definition {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return .{ .ptr = qtc.KSyntaxHighlighting__Repository_DefinitionForFileName(@ptrCast(self.ptr), fileName_str) };
    }

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
    pub fn DefinitionsForFileName(self: KSyntaxHighlighting__Repository, allocator: std.mem.Allocator, fileName: []const u8) []KSyntaxHighlighting__Definition {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KSyntaxHighlighting__Repository_DefinitionsForFileName(@ptrCast(self.ptr), fileName_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KSyntaxHighlighting__Definition, _arr.len) catch @panic("ksyntaxhighlighting__repository.DefinitionsForFileName: Memory allocation failed");
        const _data: [*]QtC.KSyntaxHighlighting__Definition = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-repository.html#definitionForMimeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` mimeType: []const u8 `
    ///
    pub fn DefinitionForMimeType(self: KSyntaxHighlighting__Repository, mimeType: []const u8) KSyntaxHighlighting__Definition {
        const mimeType_str = qtc.libqt_string{
            .len = mimeType.len,
            .data = mimeType.ptr,
        };
        return .{ .ptr = qtc.KSyntaxHighlighting__Repository_DefinitionForMimeType(@ptrCast(self.ptr), mimeType_str) };
    }

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
    pub fn DefinitionsForMimeType(self: KSyntaxHighlighting__Repository, allocator: std.mem.Allocator, mimeType: []const u8) []KSyntaxHighlighting__Definition {
        const mimeType_str = qtc.libqt_string{
            .len = mimeType.len,
            .data = mimeType.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KSyntaxHighlighting__Repository_DefinitionsForMimeType(@ptrCast(self.ptr), mimeType_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KSyntaxHighlighting__Definition, _arr.len) catch @panic("ksyntaxhighlighting__repository.DefinitionsForMimeType: Memory allocation failed");
        const _data: [*]QtC.KSyntaxHighlighting__Definition = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-repository.html#definitions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Definitions(self: KSyntaxHighlighting__Repository, allocator: std.mem.Allocator) []KSyntaxHighlighting__Definition {
        const _arr: qtc.libqt_list = qtc.KSyntaxHighlighting__Repository_Definitions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KSyntaxHighlighting__Definition, _arr.len) catch @panic("ksyntaxhighlighting__repository.Definitions: Memory allocation failed");
        const _data: [*]QtC.KSyntaxHighlighting__Definition = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-repository.html#themes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Themes(self: KSyntaxHighlighting__Repository, allocator: std.mem.Allocator) []KSyntaxHighlighting__Theme {
        const _arr: qtc.libqt_list = qtc.KSyntaxHighlighting__Repository_Themes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KSyntaxHighlighting__Theme, _arr.len) catch @panic("ksyntaxhighlighting__repository.Themes: Memory allocation failed");
        const _data: [*]QtC.KSyntaxHighlighting__Theme = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-repository.html#theme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` themeName: []const u8 `
    ///
    pub fn Theme(self: KSyntaxHighlighting__Repository, themeName: []const u8) KSyntaxHighlighting__Theme {
        const themeName_str = qtc.libqt_string{
            .len = themeName.len,
            .data = themeName.ptr,
        };
        return .{ .ptr = qtc.KSyntaxHighlighting__Repository_Theme(@ptrCast(self.ptr), themeName_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-repository.html#defaultTheme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    pub fn DefaultTheme(self: KSyntaxHighlighting__Repository) KSyntaxHighlighting__Theme {
        return .{ .ptr = qtc.KSyntaxHighlighting__Repository_DefaultTheme(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-repository.html#themeForPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` palette: QPalette `
    ///
    pub fn ThemeForPalette(self: KSyntaxHighlighting__Repository, palette: anytype) KSyntaxHighlighting__Theme {
        comptime _ = @TypeOf(palette)._is_QPalette;
        return .{ .ptr = qtc.KSyntaxHighlighting__Repository_ThemeForPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-repository.html#reload)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    pub fn Reload(self: KSyntaxHighlighting__Repository) void {
        qtc.KSyntaxHighlighting__Repository_Reload(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-repository.html#addCustomSearchPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` path: []const u8 `
    ///
    pub fn AddCustomSearchPath(self: KSyntaxHighlighting__Repository, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.KSyntaxHighlighting__Repository_AddCustomSearchPath(@ptrCast(self.ptr), path_str);
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-repository.html#customSearchPaths)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CustomSearchPaths(self: KSyntaxHighlighting__Repository, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KSyntaxHighlighting__Repository_CustomSearchPaths(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("ksyntaxhighlighting__repository.CustomSearchPaths: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("ksyntaxhighlighting__repository.CustomSearchPaths: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-repository.html#aboutToReload)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    pub fn AboutToReload(self: KSyntaxHighlighting__Repository) void {
        qtc.KSyntaxHighlighting__Repository_AboutToReload(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-repository.html#aboutToReload)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__Repository) callconv(.c) void `
    ///
    pub fn OnAboutToReload(self: KSyntaxHighlighting__Repository, callback: *const fn (KSyntaxHighlighting__Repository) callconv(.c) void) void {
        qtc.KSyntaxHighlighting__Repository_Connect_AboutToReload(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-repository.html#reloaded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    pub fn Reloaded(self: KSyntaxHighlighting__Repository) void {
        qtc.KSyntaxHighlighting__Repository_Reloaded(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-repository.html#reloaded)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__Repository) callconv(.c) void `
    ///
    pub fn OnReloaded(self: KSyntaxHighlighting__Repository, callback: *const fn (KSyntaxHighlighting__Repository) callconv(.c) void) void {
        qtc.KSyntaxHighlighting__Repository_Connect_Reloaded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksyntaxhighlighting__repository.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksyntaxhighlighting__repository.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-repository.html#defaultTheme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` t: repository_enums.DefaultTheme `
    ///
    pub fn DefaultTheme1(self: KSyntaxHighlighting__Repository, t: i32) KSyntaxHighlighting__Theme {
        return .{ .ptr = qtc.KSyntaxHighlighting__Repository_DefaultTheme1(@ptrCast(self.ptr), @bitCast(t)) };
    }

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
    pub fn ObjectName(self: KSyntaxHighlighting__Repository, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksyntaxhighlighting__repository.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetObjectName(self: KSyntaxHighlighting__Repository, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    pub fn IsWidgetType(self: KSyntaxHighlighting__Repository) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    pub fn IsWindowType(self: KSyntaxHighlighting__Repository) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    pub fn IsQuickItemType(self: KSyntaxHighlighting__Repository) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    pub fn SignalsBlocked(self: KSyntaxHighlighting__Repository) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

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
    pub fn BlockSignals(self: KSyntaxHighlighting__Repository, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    pub fn Thread(self: KSyntaxHighlighting__Repository) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KSyntaxHighlighting__Repository, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

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
    pub fn StartTimer(self: KSyntaxHighlighting__Repository, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

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
    pub fn StartTimer2(self: KSyntaxHighlighting__Repository, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

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
    pub fn KillTimer(self: KSyntaxHighlighting__Repository, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn KillTimer2(self: KSyntaxHighlighting__Repository, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn Children(self: KSyntaxHighlighting__Repository, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("ksyntaxhighlighting__repository.Children: Memory allocation failed");
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KSyntaxHighlighting__Repository, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

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
    pub fn InstallEventFilter(self: KSyntaxHighlighting__Repository, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

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
    pub fn RemoveEventFilter(self: KSyntaxHighlighting__Repository, obj: anytype) void {
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KSyntaxHighlighting__Repository, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    pub fn Disconnect3(self: KSyntaxHighlighting__Repository) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

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
    pub fn Disconnect4(self: KSyntaxHighlighting__Repository, receiver: anytype) bool {
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    pub fn DumpObjectTree(self: KSyntaxHighlighting__Repository) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    pub fn DumpObjectInfo(self: KSyntaxHighlighting__Repository) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

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
    pub fn SetProperty(self: KSyntaxHighlighting__Repository, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KSyntaxHighlighting__Repository, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

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
    pub fn DynamicPropertyNames(self: KSyntaxHighlighting__Repository, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("ksyntaxhighlighting__repository.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("ksyntaxhighlighting__repository.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    pub fn BindingStorage(self: KSyntaxHighlighting__Repository) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    pub fn BindingStorage2(self: KSyntaxHighlighting__Repository) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    pub fn Destroyed(self: KSyntaxHighlighting__Repository) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

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
    pub fn OnDestroyed(self: KSyntaxHighlighting__Repository, callback: *const fn (KSyntaxHighlighting__Repository) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    pub fn Parent(self: KSyntaxHighlighting__Repository) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

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
    pub fn Inherits(self: KSyntaxHighlighting__Repository, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    pub fn DeleteLater(self: KSyntaxHighlighting__Repository) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

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
    pub fn StartTimer22(self: KSyntaxHighlighting__Repository, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

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
    pub fn StartTimer23(self: KSyntaxHighlighting__Repository, time: i64, timerType: i32) i32 {
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KSyntaxHighlighting__Repository, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KSyntaxHighlighting__Repository, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn Disconnect22(self: KSyntaxHighlighting__Repository, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KSyntaxHighlighting__Repository, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KSyntaxHighlighting__Repository, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KSyntaxHighlighting__Repository, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnDestroyed1(self: KSyntaxHighlighting__Repository, callback: *const fn (KSyntaxHighlighting__Repository, QObject) callconv(.c) void) void {
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KSyntaxHighlighting__Repository, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KSyntaxHighlighting__Repository_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KSyntaxHighlighting__Repository, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KSyntaxHighlighting__Repository_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEvent(self: KSyntaxHighlighting__Repository, callback: *const fn (KSyntaxHighlighting__Repository, QEvent) callconv(.c) bool) void {
        qtc.KSyntaxHighlighting__Repository_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KSyntaxHighlighting__Repository, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KSyntaxHighlighting__Repository_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KSyntaxHighlighting__Repository, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KSyntaxHighlighting__Repository_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEventFilter(self: KSyntaxHighlighting__Repository, callback: *const fn (KSyntaxHighlighting__Repository, QObject, QEvent) callconv(.c) bool) void {
        qtc.KSyntaxHighlighting__Repository_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KSyntaxHighlighting__Repository, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KSyntaxHighlighting__Repository_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KSyntaxHighlighting__Repository, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KSyntaxHighlighting__Repository_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnTimerEvent(self: KSyntaxHighlighting__Repository, callback: *const fn (KSyntaxHighlighting__Repository, QTimerEvent) callconv(.c) void) void {
        qtc.KSyntaxHighlighting__Repository_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KSyntaxHighlighting__Repository, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KSyntaxHighlighting__Repository_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KSyntaxHighlighting__Repository, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KSyntaxHighlighting__Repository_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnChildEvent(self: KSyntaxHighlighting__Repository, callback: *const fn (KSyntaxHighlighting__Repository, QChildEvent) callconv(.c) void) void {
        qtc.KSyntaxHighlighting__Repository_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KSyntaxHighlighting__Repository, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KSyntaxHighlighting__Repository_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KSyntaxHighlighting__Repository, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KSyntaxHighlighting__Repository_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnCustomEvent(self: KSyntaxHighlighting__Repository, callback: *const fn (KSyntaxHighlighting__Repository, QEvent) callconv(.c) void) void {
        qtc.KSyntaxHighlighting__Repository_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ConnectNotify(self: KSyntaxHighlighting__Repository, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KSyntaxHighlighting__Repository_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KSyntaxHighlighting__Repository, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KSyntaxHighlighting__Repository_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnConnectNotify(self: KSyntaxHighlighting__Repository, callback: *const fn (KSyntaxHighlighting__Repository, QMetaMethod) callconv(.c) void) void {
        qtc.KSyntaxHighlighting__Repository_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DisconnectNotify(self: KSyntaxHighlighting__Repository, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KSyntaxHighlighting__Repository_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KSyntaxHighlighting__Repository, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KSyntaxHighlighting__Repository_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnDisconnectNotify(self: KSyntaxHighlighting__Repository, callback: *const fn (KSyntaxHighlighting__Repository, QMetaMethod) callconv(.c) void) void {
        qtc.KSyntaxHighlighting__Repository_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Sender(self: KSyntaxHighlighting__Repository) QObject {
        return .{ .ptr = qtc.KSyntaxHighlighting__Repository_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    pub fn SuperSender(self: KSyntaxHighlighting__Repository) QObject {
        return .{ .ptr = qtc.KSyntaxHighlighting__Repository_SuperSender(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSender(self: KSyntaxHighlighting__Repository, callback: *const fn () callconv(.c) QObject) void {
        qtc.KSyntaxHighlighting__Repository_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SenderSignalIndex(self: KSyntaxHighlighting__Repository) i32 {
        return qtc.KSyntaxHighlighting__Repository_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    pub fn SuperSenderSignalIndex(self: KSyntaxHighlighting__Repository) i32 {
        return qtc.KSyntaxHighlighting__Repository_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

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
    pub fn OnSenderSignalIndex(self: KSyntaxHighlighting__Repository, callback: *const fn () callconv(.c) i32) void {
        qtc.KSyntaxHighlighting__Repository_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Receivers(self: KSyntaxHighlighting__Repository, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KSyntaxHighlighting__Repository_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KSyntaxHighlighting__Repository, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KSyntaxHighlighting__Repository_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn OnReceivers(self: KSyntaxHighlighting__Repository, callback: *const fn (KSyntaxHighlighting__Repository, [*:0]const u8) callconv(.c) i32) void {
        qtc.KSyntaxHighlighting__Repository_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IsSignalConnected(self: KSyntaxHighlighting__Repository, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KSyntaxHighlighting__Repository_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KSyntaxHighlighting__Repository, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KSyntaxHighlighting__Repository_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnIsSignalConnected(self: KSyntaxHighlighting__Repository, callback: *const fn (KSyntaxHighlighting__Repository, QMetaMethod) callconv(.c) bool) void {
        qtc.KSyntaxHighlighting__Repository_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn OnObjectNameChanged(self: KSyntaxHighlighting__Repository, callback: *const fn (KSyntaxHighlighting__Repository, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KSyntaxHighlighting__Repository `
    ///
    pub fn Delete(self: KSyntaxHighlighting__Repository) void {
        qtc.KSyntaxHighlighting__Repository_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-repository.html#public-types)
pub const enums = struct {
    pub const DefaultTheme = enum(i32) {
        pub const LightTheme: i32 = 0;
        pub const DarkTheme: i32 = 1;
    };
};
