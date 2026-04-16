const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QIconEngine = @import("libqt6").QIconEngine;
const QPainter = @import("libqt6").QPainter;
const QPixmap = @import("libqt6").QPixmap;
const QRect = @import("libqt6").QRect;
const QSize = @import("libqt6").QSize;
const QVariant = @import("libqt6").QVariant;
const QWindow = @import("libqt6").QWindow;
const qicon_enums = enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html)
pub const QIcon = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QIcon,

    pub const _is_QIcon = {};

    /// New constructs a new QIcon object.
    ///
    pub fn New() QIcon {
        return .{ .ptr = qtc.QIcon_new() };
    }

    /// New2 constructs a new QIcon object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn New2(pixmap: anytype) QIcon {
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        return .{ .ptr = qtc.QIcon_new2(@ptrCast(pixmap.ptr)) };
    }

    /// New3 constructs a new QIcon object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QIcon `
    ///
    pub fn New3(other: anytype) QIcon {
        comptime _ = @TypeOf(other)._is_QIcon;
        return .{ .ptr = qtc.QIcon_new3(@ptrCast(other.ptr)) };
    }

    /// New4 constructs a new QIcon object.
    ///
    /// ## Parameter(s):
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn New4(fileName: []const u8) QIcon {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return .{ .ptr = qtc.QIcon_new4(fileName_str) };
    }

    /// New5 constructs a new QIcon object.
    ///
    /// ## Parameter(s):
    ///
    /// ` engine: QIconEngine `
    ///
    pub fn New5(engine: anytype) QIcon {
        comptime _ = @TypeOf(engine)._is_QIconEngine;
        return .{ .ptr = qtc.QIcon_new5(@ptrCast(engine.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIcon `
    ///
    /// ` other: QIcon `
    ///
    pub fn OperatorAssign(self: QIcon, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QIcon;
        qtc.QIcon_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIcon `
    ///
    /// ` other: QIcon `
    ///
    pub fn Swap(self: QIcon, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QIcon;
        qtc.QIcon_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIcon `
    ///
    pub fn ToQVariant(self: QIcon) QVariant {
        return .{ .ptr = qtc.QIcon_ToQVariant(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#pixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIcon `
    ///
    /// ` size: QSize `
    ///
    pub fn Pixmap(self: QIcon, size: anytype) QPixmap {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.QIcon_Pixmap(@ptrCast(self.ptr), @ptrCast(size.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#pixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIcon `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Pixmap2(self: QIcon, w: i32, h: i32) QPixmap {
        return .{ .ptr = qtc.QIcon_Pixmap2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#pixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIcon `
    ///
    /// ` extent: i32 `
    ///
    pub fn Pixmap3(self: QIcon, extent: i32) QPixmap {
        return .{ .ptr = qtc.QIcon_Pixmap3(@ptrCast(self.ptr), @bitCast(extent)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#pixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIcon `
    ///
    /// ` size: QSize `
    ///
    /// ` devicePixelRatio: f64 `
    ///
    pub fn Pixmap4(self: QIcon, size: anytype, devicePixelRatio: f64) QPixmap {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.QIcon_Pixmap4(@ptrCast(self.ptr), @ptrCast(size.ptr), @bitCast(devicePixelRatio)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#pixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIcon `
    ///
    /// ` window: QWindow `
    ///
    /// ` size: QSize `
    ///
    pub fn Pixmap5(self: QIcon, window: anytype, size: anytype) QPixmap {
        comptime _ = @TypeOf(window)._is_QWindow;
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.QIcon_Pixmap5(@ptrCast(self.ptr), @ptrCast(window.ptr), @ptrCast(size.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#actualSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIcon `
    ///
    /// ` size: QSize `
    ///
    pub fn ActualSize(self: QIcon, size: anytype) QSize {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.QIcon_ActualSize(@ptrCast(self.ptr), @ptrCast(size.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#actualSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIcon `
    ///
    /// ` window: QWindow `
    ///
    /// ` size: QSize `
    ///
    pub fn ActualSize2(self: QIcon, window: anytype, size: anytype) QSize {
        comptime _ = @TypeOf(window)._is_QWindow;
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.QIcon_ActualSize2(@ptrCast(self.ptr), @ptrCast(window.ptr), @ptrCast(size.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIcon `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: QIcon, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QIcon_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qicon.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#paint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIcon `
    ///
    /// ` painter: QPainter `
    ///
    /// ` rect: QRect `
    ///
    pub fn Paint(self: QIcon, painter: anytype, rect: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QIcon_Paint(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#paint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIcon `
    ///
    /// ` painter: QPainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Paint2(self: QIcon, painter: anytype, x: i32, y: i32, w: i32, h: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QIcon_Paint2(@ptrCast(self.ptr), @ptrCast(painter.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIcon `
    ///
    pub fn IsNull(self: QIcon) bool {
        return qtc.QIcon_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#isDetached)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIcon `
    ///
    pub fn IsDetached(self: QIcon) bool {
        return qtc.QIcon_IsDetached(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#detach)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIcon `
    ///
    pub fn Detach(self: QIcon) void {
        qtc.QIcon_Detach(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#cacheKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIcon `
    ///
    pub fn CacheKey(self: QIcon) i64 {
        return qtc.QIcon_CacheKey(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#addPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIcon `
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn AddPixmap(self: QIcon, pixmap: anytype) void {
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        qtc.QIcon_AddPixmap(@ptrCast(self.ptr), @ptrCast(pixmap.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#addFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIcon `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn AddFile(self: QIcon, fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QIcon_AddFile(@ptrCast(self.ptr), fileName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#availableSizes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIcon `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AvailableSizes(self: QIcon, allocator: std.mem.Allocator) []QSize {
        const _arr: qtc.libqt_list = qtc.QIcon_AvailableSizes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSize, _arr.len) catch @panic("qicon.AvailableSizes: Memory allocation failed");
        const _data: [*]QtC.QSize = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#setIsMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIcon `
    ///
    /// ` isMask: bool `
    ///
    pub fn SetIsMask(self: QIcon, isMask: bool) void {
        qtc.QIcon_SetIsMask(@ptrCast(self.ptr), isMask);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#isMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIcon `
    ///
    pub fn IsMask(self: QIcon) bool {
        return qtc.QIcon_IsMask(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#fromTheme)
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    pub fn FromTheme(name: []const u8) QIcon {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QIcon_FromTheme(name_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#fromTheme)
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    /// ` fallback: QIcon `
    ///
    pub fn FromTheme2(name: []const u8, fallback: anytype) QIcon {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(fallback)._is_QIcon;
        return .{ .ptr = qtc.QIcon_FromTheme2(name_str, @ptrCast(fallback.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#hasThemeIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    pub fn HasThemeIcon(name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QIcon_HasThemeIcon(name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#fromTheme)
    ///
    /// ## Parameter(s):
    ///
    /// ` icon: qicon_enums.ThemeIcon `
    ///
    pub fn FromTheme3(icon: i32) QIcon {
        return .{ .ptr = qtc.QIcon_FromTheme3(@bitCast(icon)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#fromTheme)
    ///
    /// ## Parameter(s):
    ///
    /// ` icon: qicon_enums.ThemeIcon `
    ///
    /// ` fallback: QIcon `
    ///
    pub fn FromTheme4(icon: i32, fallback: anytype) QIcon {
        comptime _ = @TypeOf(fallback)._is_QIcon;
        return .{ .ptr = qtc.QIcon_FromTheme4(@bitCast(icon), @ptrCast(fallback.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#hasThemeIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` icon: qicon_enums.ThemeIcon `
    ///
    pub fn HasThemeIcon2(icon: i32) bool {
        return qtc.QIcon_HasThemeIcon2(@bitCast(icon));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#themeSearchPaths)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ThemeSearchPaths(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QIcon_ThemeSearchPaths();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qicon.ThemeSearchPaths: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qicon.ThemeSearchPaths: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#setThemeSearchPaths)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` searchpath: []const []const u8 `
    ///
    pub fn SetThemeSearchPaths(allocator: std.mem.Allocator, searchpath: []const []const u8) void {
        const searchpath_arr = allocator.alloc(qtc.libqt_string, searchpath.len) catch @panic("qicon.SetThemeSearchPaths: Memory allocation failed");
        defer allocator.free(searchpath_arr);
        for (searchpath, 0..searchpath.len) |item, i|
            searchpath_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const searchpath_list = qtc.libqt_list{
            .len = searchpath.len,
            .data = searchpath_arr.ptr,
        };
        qtc.QIcon_SetThemeSearchPaths(searchpath_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#fallbackSearchPaths)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FallbackSearchPaths(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QIcon_FallbackSearchPaths();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qicon.FallbackSearchPaths: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qicon.FallbackSearchPaths: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#setFallbackSearchPaths)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` paths: []const []const u8 `
    ///
    pub fn SetFallbackSearchPaths(allocator: std.mem.Allocator, paths: []const []const u8) void {
        const paths_arr = allocator.alloc(qtc.libqt_string, paths.len) catch @panic("qicon.SetFallbackSearchPaths: Memory allocation failed");
        defer allocator.free(paths_arr);
        for (paths, 0..paths.len) |item, i|
            paths_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const paths_list = qtc.libqt_list{
            .len = paths.len,
            .data = paths_arr.ptr,
        };
        qtc.QIcon_SetFallbackSearchPaths(paths_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#themeName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ThemeName(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QIcon_ThemeName();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qicon.ThemeName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#setThemeName)
    ///
    /// ## Parameter(s):
    ///
    /// ` path: []const u8 `
    ///
    pub fn SetThemeName(path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.QIcon_SetThemeName(path_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#fallbackThemeName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FallbackThemeName(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QIcon_FallbackThemeName();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qicon.FallbackThemeName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#setFallbackThemeName)
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetFallbackThemeName(name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QIcon_SetFallbackThemeName(name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#pixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIcon `
    ///
    /// ` size: QSize `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    pub fn Pixmap22(self: QIcon, size: anytype, mode: i32) QPixmap {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.QIcon_Pixmap22(@ptrCast(self.ptr), @ptrCast(size.ptr), @bitCast(mode)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#pixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIcon `
    ///
    /// ` size: QSize `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn Pixmap32(self: QIcon, size: anytype, mode: i32, state: i32) QPixmap {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.QIcon_Pixmap32(@ptrCast(self.ptr), @ptrCast(size.ptr), @bitCast(mode), @bitCast(state)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#pixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIcon `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    pub fn Pixmap33(self: QIcon, w: i32, h: i32, mode: i32) QPixmap {
        return .{ .ptr = qtc.QIcon_Pixmap33(@ptrCast(self.ptr), @bitCast(w), @bitCast(h), @bitCast(mode)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#pixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIcon `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn Pixmap42(self: QIcon, w: i32, h: i32, mode: i32, state: i32) QPixmap {
        return .{ .ptr = qtc.QIcon_Pixmap42(@ptrCast(self.ptr), @bitCast(w), @bitCast(h), @bitCast(mode), @bitCast(state)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#pixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIcon `
    ///
    /// ` extent: i32 `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    pub fn Pixmap23(self: QIcon, extent: i32, mode: i32) QPixmap {
        return .{ .ptr = qtc.QIcon_Pixmap23(@ptrCast(self.ptr), @bitCast(extent), @bitCast(mode)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#pixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIcon `
    ///
    /// ` extent: i32 `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn Pixmap34(self: QIcon, extent: i32, mode: i32, state: i32) QPixmap {
        return .{ .ptr = qtc.QIcon_Pixmap34(@ptrCast(self.ptr), @bitCast(extent), @bitCast(mode), @bitCast(state)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#pixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIcon `
    ///
    /// ` size: QSize `
    ///
    /// ` devicePixelRatio: f64 `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    pub fn Pixmap35(self: QIcon, size: anytype, devicePixelRatio: f64, mode: i32) QPixmap {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.QIcon_Pixmap35(@ptrCast(self.ptr), @ptrCast(size.ptr), @bitCast(devicePixelRatio), @bitCast(mode)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#pixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIcon `
    ///
    /// ` size: QSize `
    ///
    /// ` devicePixelRatio: f64 `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn Pixmap43(self: QIcon, size: anytype, devicePixelRatio: f64, mode: i32, state: i32) QPixmap {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.QIcon_Pixmap43(@ptrCast(self.ptr), @ptrCast(size.ptr), @bitCast(devicePixelRatio), @bitCast(mode), @bitCast(state)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#pixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIcon `
    ///
    /// ` window: QWindow `
    ///
    /// ` size: QSize `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    pub fn Pixmap36(self: QIcon, window: anytype, size: anytype, mode: i32) QPixmap {
        comptime _ = @TypeOf(window)._is_QWindow;
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.QIcon_Pixmap36(@ptrCast(self.ptr), @ptrCast(window.ptr), @ptrCast(size.ptr), @bitCast(mode)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#pixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIcon `
    ///
    /// ` window: QWindow `
    ///
    /// ` size: QSize `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn Pixmap44(self: QIcon, window: anytype, size: anytype, mode: i32, state: i32) QPixmap {
        comptime _ = @TypeOf(window)._is_QWindow;
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.QIcon_Pixmap44(@ptrCast(self.ptr), @ptrCast(window.ptr), @ptrCast(size.ptr), @bitCast(mode), @bitCast(state)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#actualSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIcon `
    ///
    /// ` size: QSize `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    pub fn ActualSize22(self: QIcon, size: anytype, mode: i32) QSize {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.QIcon_ActualSize22(@ptrCast(self.ptr), @ptrCast(size.ptr), @bitCast(mode)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#actualSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIcon `
    ///
    /// ` size: QSize `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn ActualSize3(self: QIcon, size: anytype, mode: i32, state: i32) QSize {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.QIcon_ActualSize3(@ptrCast(self.ptr), @ptrCast(size.ptr), @bitCast(mode), @bitCast(state)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#actualSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIcon `
    ///
    /// ` window: QWindow `
    ///
    /// ` size: QSize `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    pub fn ActualSize32(self: QIcon, window: anytype, size: anytype, mode: i32) QSize {
        comptime _ = @TypeOf(window)._is_QWindow;
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.QIcon_ActualSize32(@ptrCast(self.ptr), @ptrCast(window.ptr), @ptrCast(size.ptr), @bitCast(mode)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#actualSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIcon `
    ///
    /// ` window: QWindow `
    ///
    /// ` size: QSize `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn ActualSize4(self: QIcon, window: anytype, size: anytype, mode: i32, state: i32) QSize {
        comptime _ = @TypeOf(window)._is_QWindow;
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.QIcon_ActualSize4(@ptrCast(self.ptr), @ptrCast(window.ptr), @ptrCast(size.ptr), @bitCast(mode), @bitCast(state)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#paint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIcon `
    ///
    /// ` painter: QPainter `
    ///
    /// ` rect: QRect `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn Paint3(self: QIcon, painter: anytype, rect: anytype, alignment: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QIcon_Paint3(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr), @bitCast(alignment));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#paint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIcon `
    ///
    /// ` painter: QPainter `
    ///
    /// ` rect: QRect `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    pub fn Paint4(self: QIcon, painter: anytype, rect: anytype, alignment: i32, mode: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QIcon_Paint4(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr), @bitCast(alignment), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#paint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIcon `
    ///
    /// ` painter: QPainter `
    ///
    /// ` rect: QRect `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn Paint5(self: QIcon, painter: anytype, rect: anytype, alignment: i32, mode: i32, state: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QIcon_Paint5(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr), @bitCast(alignment), @bitCast(mode), @bitCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#paint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIcon `
    ///
    /// ` painter: QPainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn Paint6(self: QIcon, painter: anytype, x: i32, y: i32, w: i32, h: i32, alignment: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QIcon_Paint6(@ptrCast(self.ptr), @ptrCast(painter.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(alignment));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#paint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIcon `
    ///
    /// ` painter: QPainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    pub fn Paint7(self: QIcon, painter: anytype, x: i32, y: i32, w: i32, h: i32, alignment: i32, mode: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QIcon_Paint7(@ptrCast(self.ptr), @ptrCast(painter.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(alignment), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#paint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIcon `
    ///
    /// ` painter: QPainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn Paint8(self: QIcon, painter: anytype, x: i32, y: i32, w: i32, h: i32, alignment: i32, mode: i32, state: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QIcon_Paint8(@ptrCast(self.ptr), @ptrCast(painter.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(alignment), @bitCast(mode), @bitCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#addPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIcon `
    ///
    /// ` pixmap: QPixmap `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    pub fn AddPixmap2(self: QIcon, pixmap: anytype, mode: i32) void {
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        qtc.QIcon_AddPixmap2(@ptrCast(self.ptr), @ptrCast(pixmap.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#addPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIcon `
    ///
    /// ` pixmap: QPixmap `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn AddPixmap3(self: QIcon, pixmap: anytype, mode: i32, state: i32) void {
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        qtc.QIcon_AddPixmap3(@ptrCast(self.ptr), @ptrCast(pixmap.ptr), @bitCast(mode), @bitCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#addFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIcon `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` size: QSize `
    ///
    pub fn AddFile2(self: QIcon, fileName: []const u8, size: anytype) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        comptime _ = @TypeOf(size)._is_QSize;
        qtc.QIcon_AddFile2(@ptrCast(self.ptr), fileName_str, @ptrCast(size.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#addFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIcon `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` size: QSize `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    pub fn AddFile3(self: QIcon, fileName: []const u8, size: anytype, mode: i32) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        comptime _ = @TypeOf(size)._is_QSize;
        qtc.QIcon_AddFile3(@ptrCast(self.ptr), fileName_str, @ptrCast(size.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#addFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIcon `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` size: QSize `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn AddFile4(self: QIcon, fileName: []const u8, size: anytype, mode: i32, state: i32) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        comptime _ = @TypeOf(size)._is_QSize;
        qtc.QIcon_AddFile4(@ptrCast(self.ptr), fileName_str, @ptrCast(size.ptr), @bitCast(mode), @bitCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#availableSizes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIcon `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    pub fn AvailableSizes1(self: QIcon, allocator: std.mem.Allocator, mode: i32) []QSize {
        const _arr: qtc.libqt_list = qtc.QIcon_AvailableSizes1(@ptrCast(self.ptr), @bitCast(mode));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSize, _arr.len) catch @panic("qicon.AvailableSizes1: Memory allocation failed");
        const _data: [*]QtC.QSize = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#availableSizes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIcon `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn AvailableSizes2(self: QIcon, allocator: std.mem.Allocator, mode: i32, state: i32) []QSize {
        const _arr: qtc.libqt_list = qtc.QIcon_AvailableSizes2(@ptrCast(self.ptr), @bitCast(mode), @bitCast(state));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSize, _arr.len) catch @panic("qicon.AvailableSizes2: Memory allocation failed");
        const _data: [*]QtC.QSize = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#dtor.QIcon)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QIcon `
    ///
    pub fn Delete(self: QIcon) void {
        qtc.QIcon_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qicon.html#public-types)
pub const enums = struct {
    pub const Mode = enum(i32) {
        pub const Normal: i32 = 0;
        pub const Disabled: i32 = 1;
        pub const Active: i32 = 2;
        pub const Selected: i32 = 3;
    };

    pub const State = enum(i32) {
        pub const On: i32 = 0;
        pub const Off: i32 = 1;
    };

    pub const ThemeIcon = enum(i32) {
        pub const AddressBookNew: i32 = 0;
        pub const ApplicationExit: i32 = 1;
        pub const AppointmentNew: i32 = 2;
        pub const CallStart: i32 = 3;
        pub const CallStop: i32 = 4;
        pub const ContactNew: i32 = 5;
        pub const DocumentNew: i32 = 6;
        pub const DocumentOpen: i32 = 7;
        pub const DocumentOpenRecent: i32 = 8;
        pub const DocumentPageSetup: i32 = 9;
        pub const DocumentPrint: i32 = 10;
        pub const DocumentPrintPreview: i32 = 11;
        pub const DocumentProperties: i32 = 12;
        pub const DocumentRevert: i32 = 13;
        pub const DocumentSave: i32 = 14;
        pub const DocumentSaveAs: i32 = 15;
        pub const DocumentSend: i32 = 16;
        pub const EditClear: i32 = 17;
        pub const EditCopy: i32 = 18;
        pub const EditCut: i32 = 19;
        pub const EditDelete: i32 = 20;
        pub const EditFind: i32 = 21;
        pub const EditPaste: i32 = 22;
        pub const EditRedo: i32 = 23;
        pub const EditSelectAll: i32 = 24;
        pub const EditUndo: i32 = 25;
        pub const FolderNew: i32 = 26;
        pub const FormatIndentLess: i32 = 27;
        pub const FormatIndentMore: i32 = 28;
        pub const FormatJustifyCenter: i32 = 29;
        pub const FormatJustifyFill: i32 = 30;
        pub const FormatJustifyLeft: i32 = 31;
        pub const FormatJustifyRight: i32 = 32;
        pub const FormatTextDirectionLtr: i32 = 33;
        pub const FormatTextDirectionRtl: i32 = 34;
        pub const FormatTextBold: i32 = 35;
        pub const FormatTextItalic: i32 = 36;
        pub const FormatTextUnderline: i32 = 37;
        pub const FormatTextStrikethrough: i32 = 38;
        pub const GoDown: i32 = 39;
        pub const GoHome: i32 = 40;
        pub const GoNext: i32 = 41;
        pub const GoPrevious: i32 = 42;
        pub const GoUp: i32 = 43;
        pub const HelpAbout: i32 = 44;
        pub const HelpFaq: i32 = 45;
        pub const InsertImage: i32 = 46;
        pub const InsertLink: i32 = 47;
        pub const InsertText: i32 = 48;
        pub const ListAdd: i32 = 49;
        pub const ListRemove: i32 = 50;
        pub const MailForward: i32 = 51;
        pub const MailMarkImportant: i32 = 52;
        pub const MailMarkRead: i32 = 53;
        pub const MailMarkUnread: i32 = 54;
        pub const MailMessageNew: i32 = 55;
        pub const MailReplyAll: i32 = 56;
        pub const MailReplySender: i32 = 57;
        pub const MailSend: i32 = 58;
        pub const MediaEject: i32 = 59;
        pub const MediaPlaybackPause: i32 = 60;
        pub const MediaPlaybackStart: i32 = 61;
        pub const MediaPlaybackStop: i32 = 62;
        pub const MediaRecord: i32 = 63;
        pub const MediaSeekBackward: i32 = 64;
        pub const MediaSeekForward: i32 = 65;
        pub const MediaSkipBackward: i32 = 66;
        pub const MediaSkipForward: i32 = 67;
        pub const ObjectRotateLeft: i32 = 68;
        pub const ObjectRotateRight: i32 = 69;
        pub const ProcessStop: i32 = 70;
        pub const SystemLockScreen: i32 = 71;
        pub const SystemLogOut: i32 = 72;
        pub const SystemSearch: i32 = 73;
        pub const SystemReboot: i32 = 74;
        pub const SystemShutdown: i32 = 75;
        pub const ToolsCheckSpelling: i32 = 76;
        pub const ViewFullscreen: i32 = 77;
        pub const ViewRefresh: i32 = 78;
        pub const ViewRestore: i32 = 79;
        pub const WindowClose: i32 = 80;
        pub const WindowNew: i32 = 81;
        pub const ZoomFitBest: i32 = 82;
        pub const ZoomIn: i32 = 83;
        pub const ZoomOut: i32 = 84;
        pub const AudioCard: i32 = 85;
        pub const AudioInputMicrophone: i32 = 86;
        pub const Battery: i32 = 87;
        pub const CameraPhoto: i32 = 88;
        pub const CameraVideo: i32 = 89;
        pub const CameraWeb: i32 = 90;
        pub const Computer: i32 = 91;
        pub const DriveHarddisk: i32 = 92;
        pub const DriveOptical: i32 = 93;
        pub const InputGaming: i32 = 94;
        pub const InputKeyboard: i32 = 95;
        pub const InputMouse: i32 = 96;
        pub const InputTablet: i32 = 97;
        pub const MediaFlash: i32 = 98;
        pub const MediaOptical: i32 = 99;
        pub const MediaTape: i32 = 100;
        pub const MultimediaPlayer: i32 = 101;
        pub const NetworkWired: i32 = 102;
        pub const NetworkWireless: i32 = 103;
        pub const Phone: i32 = 104;
        pub const Printer: i32 = 105;
        pub const Scanner: i32 = 106;
        pub const VideoDisplay: i32 = 107;
        pub const AppointmentMissed: i32 = 108;
        pub const AppointmentSoon: i32 = 109;
        pub const AudioVolumeHigh: i32 = 110;
        pub const AudioVolumeLow: i32 = 111;
        pub const AudioVolumeMedium: i32 = 112;
        pub const AudioVolumeMuted: i32 = 113;
        pub const BatteryCaution: i32 = 114;
        pub const BatteryLow: i32 = 115;
        pub const DialogError: i32 = 116;
        pub const DialogInformation: i32 = 117;
        pub const DialogPassword: i32 = 118;
        pub const DialogQuestion: i32 = 119;
        pub const DialogWarning: i32 = 120;
        pub const FolderDragAccept: i32 = 121;
        pub const FolderOpen: i32 = 122;
        pub const FolderVisiting: i32 = 123;
        pub const ImageLoading: i32 = 124;
        pub const ImageMissing: i32 = 125;
        pub const MailAttachment: i32 = 126;
        pub const MailUnread: i32 = 127;
        pub const MailRead: i32 = 128;
        pub const MailReplied: i32 = 129;
        pub const MediaPlaylistRepeat: i32 = 130;
        pub const MediaPlaylistShuffle: i32 = 131;
        pub const NetworkOffline: i32 = 132;
        pub const PrinterPrinting: i32 = 133;
        pub const SecurityHigh: i32 = 134;
        pub const SecurityLow: i32 = 135;
        pub const SoftwareUpdateAvailable: i32 = 136;
        pub const SoftwareUpdateUrgent: i32 = 137;
        pub const SyncError: i32 = 138;
        pub const SyncSynchronizing: i32 = 139;
        pub const UserAvailable: i32 = 140;
        pub const UserOffline: i32 = 141;
        pub const WeatherClear: i32 = 142;
        pub const WeatherClearNight: i32 = 143;
        pub const WeatherFewClouds: i32 = 144;
        pub const WeatherFewCloudsNight: i32 = 145;
        pub const WeatherFog: i32 = 146;
        pub const WeatherShowers: i32 = 147;
        pub const WeatherSnow: i32 = 148;
        pub const WeatherStorm: i32 = 149;
        pub const NThemeIcons: i32 = 150;
    };
};
