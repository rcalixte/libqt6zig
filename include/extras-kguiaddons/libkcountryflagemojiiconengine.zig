const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QDataStream = @import("libqt6").QDataStream;
const QFont = @import("libqt6").QFont;
const QIconEngine = @import("libqt6").QIconEngine;
const QPainter = @import("libqt6").QPainter;
const QPixmap = @import("libqt6").QPixmap;
const QRect = @import("libqt6").QRect;
const QSize = @import("libqt6").QSize;
const qicon_enums = @import("../libqicon.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kcountryflagemojiiconengine.html)
pub const KCountryFlagEmojiIconEngine = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kcountryflagemojiiconengine.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KCountryFlagEmojiIconEngine,

    pub const _is_KCountryFlagEmojiIconEngine = {};
    pub const _is_QIconEngine = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KCountryFlagEmojiIconEngine object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` regionOrCountry: []const u8 `
    ///
    pub fn new(regionOrCountry: []const u8) KCountryFlagEmojiIconEngine {
        const regionOrCountry_str = qtc.libqt_string{
            .len = regionOrCountry.len,
            .data = regionOrCountry.ptr,
        };
        return .{ .ptr = qtc.KCountryFlagEmojiIconEngine_new(regionOrCountry_str) };
    }

    /// ### DEPRECATED: Use `clone` instead
    ///
    pub const Clone = clone;

    /// ### [Upstream resources](https://api.kde.org/kcountryflagemojiiconengine.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountryFlagEmojiIconEngine `
    ///
    pub fn clone(self: KCountryFlagEmojiIconEngine) QIconEngine {
        return .{ .ptr = qtc.KCountryFlagEmojiIconEngine_Clone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onClone` instead
    ///
    pub const OnClone = onClone;

    /// ### [Upstream resources](https://api.kde.org/kcountryflagemojiiconengine.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCountryFlagEmojiIconEngine `
    ///
    /// ` callback: *const fn () callconv(.c) QIconEngine `
    ///
    pub fn onClone(self: KCountryFlagEmojiIconEngine, callback: *const fn () callconv(.c) QIconEngine) void {
        qtc.KCountryFlagEmojiIconEngine_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClone` instead
    ///
    pub const SuperClone = superClone;

    /// ### [Upstream resources](https://api.kde.org/kcountryflagemojiiconengine.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountryFlagEmojiIconEngine `
    ///
    pub fn superClone(self: KCountryFlagEmojiIconEngine) QIconEngine {
        return .{ .ptr = qtc.KCountryFlagEmojiIconEngine_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `key` instead
    ///
    pub const Key = key;

    /// ### [Upstream resources](https://api.kde.org/kcountryflagemojiiconengine.html#key)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountryFlagEmojiIconEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn key(self: KCountryFlagEmojiIconEngine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KCountryFlagEmojiIconEngine_Key(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KCountryFlagEmojiIconEngine.key: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onKey` instead
    ///
    pub const OnKey = onKey;

    /// ### [Upstream resources](https://api.kde.org/kcountryflagemojiiconengine.html#key)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCountryFlagEmojiIconEngine `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onKey(self: KCountryFlagEmojiIconEngine, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KCountryFlagEmojiIconEngine_OnKey(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superKey` instead
    ///
    pub const SuperKey = superKey;

    /// ### [Upstream resources](https://api.kde.org/kcountryflagemojiiconengine.html#key)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountryFlagEmojiIconEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superKey(self: KCountryFlagEmojiIconEngine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KCountryFlagEmojiIconEngine_SuperKey(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KCountryFlagEmojiIconEngine.key: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `paint` instead
    ///
    pub const Paint = paint;

    /// ### [Upstream resources](https://api.kde.org/kcountryflagemojiiconengine.html#paint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountryFlagEmojiIconEngine `
    ///
    /// ` painter: QPainter `
    ///
    /// ` rect: QRect `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn paint(self: KCountryFlagEmojiIconEngine, painter: anytype, rect: anytype, mode: i32, state: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.KCountryFlagEmojiIconEngine_Paint(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr), @bitCast(mode), @bitCast(state));
    }

    /// ### DEPRECATED: Use `onPaint` instead
    ///
    pub const OnPaint = onPaint;

    /// ### [Upstream resources](https://api.kde.org/kcountryflagemojiiconengine.html#paint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCountryFlagEmojiIconEngine `
    ///
    /// ` callback: *const fn (self: KCountryFlagEmojiIconEngine, painter: QPainter, rect: QRect, mode: qicon_enums.Mode, state: qicon_enums.State) callconv(.c) void `
    ///
    pub fn onPaint(self: KCountryFlagEmojiIconEngine, callback: *const fn (KCountryFlagEmojiIconEngine, QPainter, QRect, i32, i32) callconv(.c) void) void {
        qtc.KCountryFlagEmojiIconEngine_OnPaint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPaint` instead
    ///
    pub const SuperPaint = superPaint;

    /// ### [Upstream resources](https://api.kde.org/kcountryflagemojiiconengine.html#paint)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountryFlagEmojiIconEngine `
    ///
    /// ` painter: QPainter `
    ///
    /// ` rect: QRect `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn superPaint(self: KCountryFlagEmojiIconEngine, painter: anytype, rect: anytype, mode: i32, state: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.KCountryFlagEmojiIconEngine_SuperPaint(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr), @bitCast(mode), @bitCast(state));
    }

    /// ### DEPRECATED: Use `pixmap` instead
    ///
    pub const Pixmap = pixmap;

    /// ### [Upstream resources](https://api.kde.org/kcountryflagemojiiconengine.html#pixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountryFlagEmojiIconEngine `
    ///
    /// ` size: QSize `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn pixmap(self: KCountryFlagEmojiIconEngine, size: anytype, mode: i32, state: i32) QPixmap {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.KCountryFlagEmojiIconEngine_Pixmap(@ptrCast(self.ptr), @ptrCast(size.ptr), @bitCast(mode), @bitCast(state)) };
    }

    /// ### DEPRECATED: Use `onPixmap` instead
    ///
    pub const OnPixmap = onPixmap;

    /// ### [Upstream resources](https://api.kde.org/kcountryflagemojiiconengine.html#pixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCountryFlagEmojiIconEngine `
    ///
    /// ` callback: *const fn (self: KCountryFlagEmojiIconEngine, size: QSize, mode: qicon_enums.Mode, state: qicon_enums.State) callconv(.c) QPixmap `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onPixmap(self: KCountryFlagEmojiIconEngine, callback: *const fn (KCountryFlagEmojiIconEngine, QSize, i32, i32) callconv(.c) QPixmap) void {
        qtc.KCountryFlagEmojiIconEngine_OnPixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPixmap` instead
    ///
    pub const SuperPixmap = superPixmap;

    /// ### [Upstream resources](https://api.kde.org/kcountryflagemojiiconengine.html#pixmap)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountryFlagEmojiIconEngine `
    ///
    /// ` size: QSize `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn superPixmap(self: KCountryFlagEmojiIconEngine, size: anytype, mode: i32, state: i32) QPixmap {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.KCountryFlagEmojiIconEngine_SuperPixmap(@ptrCast(self.ptr), @ptrCast(size.ptr), @bitCast(mode), @bitCast(state)) };
    }

    /// ### DEPRECATED: Use `scaledPixmap` instead
    ///
    pub const ScaledPixmap = scaledPixmap;

    /// ### [Upstream resources](https://api.kde.org/kcountryflagemojiiconengine.html#scaledPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountryFlagEmojiIconEngine `
    ///
    /// ` size: QSize `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    /// ` scale: f64 `
    ///
    pub fn scaledPixmap(self: KCountryFlagEmojiIconEngine, size: anytype, mode: i32, state: i32, scale: f64) QPixmap {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.KCountryFlagEmojiIconEngine_ScaledPixmap(@ptrCast(self.ptr), @ptrCast(size.ptr), @bitCast(mode), @bitCast(state), @bitCast(scale)) };
    }

    /// ### DEPRECATED: Use `onScaledPixmap` instead
    ///
    pub const OnScaledPixmap = onScaledPixmap;

    /// ### [Upstream resources](https://api.kde.org/kcountryflagemojiiconengine.html#scaledPixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCountryFlagEmojiIconEngine `
    ///
    /// ` callback: *const fn (self: KCountryFlagEmojiIconEngine, size: QSize, mode: qicon_enums.Mode, state: qicon_enums.State, scale: f64) callconv(.c) QPixmap `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onScaledPixmap(self: KCountryFlagEmojiIconEngine, callback: *const fn (KCountryFlagEmojiIconEngine, QSize, i32, i32, f64) callconv(.c) QPixmap) void {
        qtc.KCountryFlagEmojiIconEngine_OnScaledPixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superScaledPixmap` instead
    ///
    pub const SuperScaledPixmap = superScaledPixmap;

    /// ### [Upstream resources](https://api.kde.org/kcountryflagemojiiconengine.html#scaledPixmap)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountryFlagEmojiIconEngine `
    ///
    /// ` size: QSize `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    /// ` scale: f64 `
    ///
    pub fn superScaledPixmap(self: KCountryFlagEmojiIconEngine, size: anytype, mode: i32, state: i32, scale: f64) QPixmap {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.KCountryFlagEmojiIconEngine_SuperScaledPixmap(@ptrCast(self.ptr), @ptrCast(size.ptr), @bitCast(mode), @bitCast(state), @bitCast(scale)) };
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://api.kde.org/kcountryflagemojiiconengine.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountryFlagEmojiIconEngine `
    ///
    pub fn isNull(self: KCountryFlagEmojiIconEngine) bool {
        return qtc.KCountryFlagEmojiIconEngine_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsNull` instead
    ///
    pub const OnIsNull = onIsNull;

    /// ### [Upstream resources](https://api.kde.org/kcountryflagemojiiconengine.html#isNull)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCountryFlagEmojiIconEngine `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onIsNull(self: KCountryFlagEmojiIconEngine, callback: *const fn () callconv(.c) bool) void {
        qtc.KCountryFlagEmojiIconEngine_OnIsNull(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsNull` instead
    ///
    pub const SuperIsNull = superIsNull;

    /// ### [Upstream resources](https://api.kde.org/kcountryflagemojiiconengine.html#isNull)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountryFlagEmojiIconEngine `
    ///
    pub fn superIsNull(self: KCountryFlagEmojiIconEngine) bool {
        return qtc.KCountryFlagEmojiIconEngine_SuperIsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setGlobalDefaultFont` instead
    ///
    pub const SetGlobalDefaultFont = setGlobalDefaultFont;

    /// ### [Upstream resources](https://api.kde.org/kcountryflagemojiiconengine.html#setGlobalDefaultFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` font: QFont `
    ///
    pub fn setGlobalDefaultFont(font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.KCountryFlagEmojiIconEngine_SetGlobalDefaultFont(@ptrCast(font.ptr));
    }

    /// ### DEPRECATED: Use `actualSize` instead
    ///
    pub const ActualSize = actualSize;

    /// Inherited from QIconEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#actualSize)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountryFlagEmojiIconEngine `
    ///
    /// ` size: QSize `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn actualSize(self: KCountryFlagEmojiIconEngine, size: anytype, mode: i32, state: i32) QSize {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.KCountryFlagEmojiIconEngine_ActualSize(@ptrCast(self.ptr), @ptrCast(size.ptr), @bitCast(mode), @bitCast(state)) };
    }

    /// ### DEPRECATED: Use `superActualSize` instead
    ///
    pub const SuperActualSize = superActualSize;

    /// Inherited from QIconEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#actualSize)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountryFlagEmojiIconEngine `
    ///
    /// ` size: QSize `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn superActualSize(self: KCountryFlagEmojiIconEngine, size: anytype, mode: i32, state: i32) QSize {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.KCountryFlagEmojiIconEngine_SuperActualSize(@ptrCast(self.ptr), @ptrCast(size.ptr), @bitCast(mode), @bitCast(state)) };
    }

    /// ### DEPRECATED: Use `onActualSize` instead
    ///
    pub const OnActualSize = onActualSize;

    /// Inherited from QIconEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#actualSize)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCountryFlagEmojiIconEngine`
    ///
    /// ` callback: *const fn (self: KCountryFlagEmojiIconEngine, size: QSize, mode: qicon_enums.Mode, state: qicon_enums.State) callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onActualSize(self: KCountryFlagEmojiIconEngine, callback: *const fn (KCountryFlagEmojiIconEngine, QSize, i32, i32) callconv(.c) QSize) void {
        qtc.KCountryFlagEmojiIconEngine_OnActualSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `addPixmap` instead
    ///
    pub const AddPixmap = addPixmap;

    /// Inherited from QIconEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#addPixmap)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountryFlagEmojiIconEngine `
    ///
    /// ` _pixmap: QPixmap `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn addPixmap(self: KCountryFlagEmojiIconEngine, _pixmap: anytype, mode: i32, state: i32) void {
        comptime _ = @TypeOf(_pixmap)._is_QPixmap;
        qtc.KCountryFlagEmojiIconEngine_AddPixmap(@ptrCast(self.ptr), @ptrCast(_pixmap.ptr), @bitCast(mode), @bitCast(state));
    }

    /// ### DEPRECATED: Use `superAddPixmap` instead
    ///
    pub const SuperAddPixmap = superAddPixmap;

    /// Inherited from QIconEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#addPixmap)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountryFlagEmojiIconEngine `
    ///
    /// ` _pixmap: QPixmap `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn superAddPixmap(self: KCountryFlagEmojiIconEngine, _pixmap: anytype, mode: i32, state: i32) void {
        comptime _ = @TypeOf(_pixmap)._is_QPixmap;
        qtc.KCountryFlagEmojiIconEngine_SuperAddPixmap(@ptrCast(self.ptr), @ptrCast(_pixmap.ptr), @bitCast(mode), @bitCast(state));
    }

    /// ### DEPRECATED: Use `onAddPixmap` instead
    ///
    pub const OnAddPixmap = onAddPixmap;

    /// Inherited from QIconEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#addPixmap)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCountryFlagEmojiIconEngine`
    ///
    /// ` callback: *const fn (self: KCountryFlagEmojiIconEngine, pixmap: QPixmap, mode: qicon_enums.Mode, state: qicon_enums.State) callconv(.c) void `
    ///
    pub fn onAddPixmap(self: KCountryFlagEmojiIconEngine, callback: *const fn (KCountryFlagEmojiIconEngine, QPixmap, i32, i32) callconv(.c) void) void {
        qtc.KCountryFlagEmojiIconEngine_OnAddPixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `addFile` instead
    ///
    pub const AddFile = addFile;

    /// Inherited from QIconEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#addFile)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountryFlagEmojiIconEngine `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` size: QSize `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn addFile(self: KCountryFlagEmojiIconEngine, fileName: []const u8, size: anytype, mode: i32, state: i32) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        comptime _ = @TypeOf(size)._is_QSize;
        qtc.KCountryFlagEmojiIconEngine_AddFile(@ptrCast(self.ptr), fileName_str, @ptrCast(size.ptr), @bitCast(mode), @bitCast(state));
    }

    /// ### DEPRECATED: Use `superAddFile` instead
    ///
    pub const SuperAddFile = superAddFile;

    /// Inherited from QIconEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#addFile)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountryFlagEmojiIconEngine `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` size: QSize `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn superAddFile(self: KCountryFlagEmojiIconEngine, fileName: []const u8, size: anytype, mode: i32, state: i32) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        comptime _ = @TypeOf(size)._is_QSize;
        qtc.KCountryFlagEmojiIconEngine_SuperAddFile(@ptrCast(self.ptr), fileName_str, @ptrCast(size.ptr), @bitCast(mode), @bitCast(state));
    }

    /// ### DEPRECATED: Use `onAddFile` instead
    ///
    pub const OnAddFile = onAddFile;

    /// Inherited from QIconEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#addFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCountryFlagEmojiIconEngine`
    ///
    /// ` callback: *const fn (self: KCountryFlagEmojiIconEngine, fileName: [*:0]const u8, size: QSize, mode: qicon_enums.Mode, state: qicon_enums.State) callconv(.c) void `
    ///
    pub fn onAddFile(self: KCountryFlagEmojiIconEngine, callback: *const fn (KCountryFlagEmojiIconEngine, [*:0]const u8, QSize, i32, i32) callconv(.c) void) void {
        qtc.KCountryFlagEmojiIconEngine_OnAddFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `read` instead
    ///
    pub const Read = read;

    /// Inherited from QIconEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#read)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountryFlagEmojiIconEngine `
    ///
    /// ` in: QDataStream `
    ///
    pub fn read(self: KCountryFlagEmojiIconEngine, in: anytype) bool {
        comptime _ = @TypeOf(in)._is_QDataStream;
        return qtc.KCountryFlagEmojiIconEngine_Read(@ptrCast(self.ptr), @ptrCast(in.ptr));
    }

    /// ### DEPRECATED: Use `superRead` instead
    ///
    pub const SuperRead = superRead;

    /// Inherited from QIconEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#read)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountryFlagEmojiIconEngine `
    ///
    /// ` in: QDataStream `
    ///
    pub fn superRead(self: KCountryFlagEmojiIconEngine, in: anytype) bool {
        comptime _ = @TypeOf(in)._is_QDataStream;
        return qtc.KCountryFlagEmojiIconEngine_SuperRead(@ptrCast(self.ptr), @ptrCast(in.ptr));
    }

    /// ### DEPRECATED: Use `onRead` instead
    ///
    pub const OnRead = onRead;

    /// Inherited from QIconEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#read)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCountryFlagEmojiIconEngine`
    ///
    /// ` callback: *const fn (self: KCountryFlagEmojiIconEngine, in: QDataStream) callconv(.c) bool `
    ///
    pub fn onRead(self: KCountryFlagEmojiIconEngine, callback: *const fn (KCountryFlagEmojiIconEngine, QDataStream) callconv(.c) bool) void {
        qtc.KCountryFlagEmojiIconEngine_OnRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `write` instead
    ///
    pub const Write = write;

    /// Inherited from QIconEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#write)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountryFlagEmojiIconEngine `
    ///
    /// ` out: QDataStream `
    ///
    pub fn write(self: KCountryFlagEmojiIconEngine, out: anytype) bool {
        comptime _ = @TypeOf(out)._is_QDataStream;
        return qtc.KCountryFlagEmojiIconEngine_Write(@ptrCast(self.ptr), @ptrCast(out.ptr));
    }

    /// ### DEPRECATED: Use `superWrite` instead
    ///
    pub const SuperWrite = superWrite;

    /// Inherited from QIconEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#write)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountryFlagEmojiIconEngine `
    ///
    /// ` out: QDataStream `
    ///
    pub fn superWrite(self: KCountryFlagEmojiIconEngine, out: anytype) bool {
        comptime _ = @TypeOf(out)._is_QDataStream;
        return qtc.KCountryFlagEmojiIconEngine_SuperWrite(@ptrCast(self.ptr), @ptrCast(out.ptr));
    }

    /// ### DEPRECATED: Use `onWrite` instead
    ///
    pub const OnWrite = onWrite;

    /// Inherited from QIconEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#write)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCountryFlagEmojiIconEngine`
    ///
    /// ` callback: *const fn (self: KCountryFlagEmojiIconEngine, out: QDataStream) callconv(.c) bool `
    ///
    pub fn onWrite(self: KCountryFlagEmojiIconEngine, callback: *const fn (KCountryFlagEmojiIconEngine, QDataStream) callconv(.c) bool) void {
        qtc.KCountryFlagEmojiIconEngine_OnWrite(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `availableSizes` instead
    ///
    pub const AvailableSizes = availableSizes;

    /// Inherited from QIconEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#availableSizes)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountryFlagEmojiIconEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn availableSizes(self: KCountryFlagEmojiIconEngine, allocator: std.mem.Allocator, mode: i32, state: i32) []QSize {
        const _arr: qtc.libqt_list = qtc.KCountryFlagEmojiIconEngine_AvailableSizes(@ptrCast(self.ptr), @bitCast(mode), @bitCast(state));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSize, _arr.len) catch @panic("KCountryFlagEmojiIconEngine.availableSizes: Memory allocation failed");
        const _data_val: [*]QtC.QSize = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `superAvailableSizes` instead
    ///
    pub const SuperAvailableSizes = superAvailableSizes;

    /// Inherited from QIconEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#availableSizes)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountryFlagEmojiIconEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn superAvailableSizes(self: KCountryFlagEmojiIconEngine, allocator: std.mem.Allocator, mode: i32, state: i32) []QSize {
        const _arr: qtc.libqt_list = qtc.KCountryFlagEmojiIconEngine_SuperAvailableSizes(@ptrCast(self.ptr), @bitCast(mode), @bitCast(state));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSize, _arr.len) catch @panic("KCountryFlagEmojiIconEngine.availableSizes: Memory allocation failed");
        const _data_val: [*]QtC.QSize = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `onAvailableSizes` instead
    ///
    pub const OnAvailableSizes = onAvailableSizes;

    /// Inherited from QIconEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#availableSizes)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KCountryFlagEmojiIconEngine`
    ///
    /// ` callback: *const fn (self: KCountryFlagEmojiIconEngine, mode: qicon_enums.Mode, state: qicon_enums.State) callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QSize `
    ///
    pub fn onAvailableSizes(self: KCountryFlagEmojiIconEngine, callback: *const fn (KCountryFlagEmojiIconEngine, i32, i32) callconv(.c) qtc.libqt_list) void {
        qtc.KCountryFlagEmojiIconEngine_OnAvailableSizes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `iconName` instead
    ///
    pub const IconName = iconName;

    /// Inherited from QIconEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#iconName)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountryFlagEmojiIconEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn iconName(self: KCountryFlagEmojiIconEngine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KCountryFlagEmojiIconEngine_IconName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KCountryFlagEmojiIconEngine.iconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `superIconName` instead
    ///
    pub const SuperIconName = superIconName;

    /// Inherited from QIconEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#iconName)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountryFlagEmojiIconEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superIconName(self: KCountryFlagEmojiIconEngine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KCountryFlagEmojiIconEngine_SuperIconName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KCountryFlagEmojiIconEngine.iconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onIconName` instead
    ///
    pub const OnIconName = onIconName;

    /// Inherited from QIconEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#iconName)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCountryFlagEmojiIconEngine`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onIconName(self: KCountryFlagEmojiIconEngine, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KCountryFlagEmojiIconEngine_OnIconName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `virtualHook` instead
    ///
    pub const VirtualHook = virtualHook;

    /// Inherited from QIconEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#virtual_hook)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountryFlagEmojiIconEngine `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn virtualHook(self: KCountryFlagEmojiIconEngine, id: i32, data: ?*anyopaque) void {
        qtc.KCountryFlagEmojiIconEngine_VirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `superVirtualHook` instead
    ///
    pub const SuperVirtualHook = superVirtualHook;

    /// Inherited from QIconEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#virtual_hook)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountryFlagEmojiIconEngine `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn superVirtualHook(self: KCountryFlagEmojiIconEngine, id: i32, data: ?*anyopaque) void {
        qtc.KCountryFlagEmojiIconEngine_SuperVirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `onVirtualHook` instead
    ///
    pub const OnVirtualHook = onVirtualHook;

    /// Inherited from QIconEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#virtual_hook)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCountryFlagEmojiIconEngine`
    ///
    /// ` callback: *const fn (self: KCountryFlagEmojiIconEngine, id: i32, data: ?*anyopaque) callconv(.c) void `
    ///
    pub fn onVirtualHook(self: KCountryFlagEmojiIconEngine, callback: *const fn (KCountryFlagEmojiIconEngine, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.KCountryFlagEmojiIconEngine_OnVirtualHook(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kcountryflagemojiiconengine.html#dtor.KCountryFlagEmojiIconEngine)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KCountryFlagEmojiIconEngine `
    ///
    pub fn delete(self: KCountryFlagEmojiIconEngine) void {
        qtc.KCountryFlagEmojiIconEngine_Delete(@ptrCast(self.ptr));
    }
};
