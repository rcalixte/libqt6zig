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

    /// New constructs a new KCountryFlagEmojiIconEngine object.
    ///
    /// ## Parameter(s):
    ///
    /// ` regionOrCountry: []const u8 `
    ///
    pub fn New(regionOrCountry: []const u8) KCountryFlagEmojiIconEngine {
        const regionOrCountry_str = qtc.libqt_string{
            .len = regionOrCountry.len,
            .data = regionOrCountry.ptr,
        };
        return .{ .ptr = qtc.KCountryFlagEmojiIconEngine_new(regionOrCountry_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcountryflagemojiiconengine.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountryFlagEmojiIconEngine `
    ///
    pub fn Clone(self: KCountryFlagEmojiIconEngine) QIconEngine {
        return .{ .ptr = qtc.KCountryFlagEmojiIconEngine_Clone(@ptrCast(self.ptr)) };
    }

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
    pub fn OnClone(self: KCountryFlagEmojiIconEngine, callback: *const fn () callconv(.c) QIconEngine) void {
        qtc.KCountryFlagEmojiIconEngine_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClone` instead
    ///
    pub const QBaseClone = SuperClone;

    /// ### [Upstream resources](https://api.kde.org/kcountryflagemojiiconengine.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountryFlagEmojiIconEngine `
    ///
    pub fn SuperClone(self: KCountryFlagEmojiIconEngine) QIconEngine {
        return .{ .ptr = qtc.KCountryFlagEmojiIconEngine_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcountryflagemojiiconengine.html#key)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountryFlagEmojiIconEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Key(self: KCountryFlagEmojiIconEngine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KCountryFlagEmojiIconEngine_Key(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcountryflagemojiiconengine.Key: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcountryflagemojiiconengine.html#key)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KCountryFlagEmojiIconEngine `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnKey(self: KCountryFlagEmojiIconEngine, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KCountryFlagEmojiIconEngine_OnKey(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperKey` instead
    ///
    pub const QBaseKey = SuperKey;

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
    pub fn SuperKey(self: KCountryFlagEmojiIconEngine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KCountryFlagEmojiIconEngine_SuperKey(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcountryflagemojiiconengine.Key: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn Paint(self: KCountryFlagEmojiIconEngine, painter: anytype, rect: anytype, mode: i32, state: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.KCountryFlagEmojiIconEngine_Paint(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr), @bitCast(mode), @bitCast(state));
    }

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
    pub fn OnPaint(self: KCountryFlagEmojiIconEngine, callback: *const fn (KCountryFlagEmojiIconEngine, QPainter, QRect, i32, i32) callconv(.c) void) void {
        qtc.KCountryFlagEmojiIconEngine_OnPaint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPaint` instead
    ///
    pub const QBasePaint = SuperPaint;

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
    pub fn SuperPaint(self: KCountryFlagEmojiIconEngine, painter: anytype, rect: anytype, mode: i32, state: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.KCountryFlagEmojiIconEngine_SuperPaint(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr), @bitCast(mode), @bitCast(state));
    }

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
    pub fn Pixmap(self: KCountryFlagEmojiIconEngine, size: anytype, mode: i32, state: i32) QPixmap {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.KCountryFlagEmojiIconEngine_Pixmap(@ptrCast(self.ptr), @ptrCast(size.ptr), @bitCast(mode), @bitCast(state)) };
    }

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
    pub fn OnPixmap(self: KCountryFlagEmojiIconEngine, callback: *const fn (KCountryFlagEmojiIconEngine, QSize, i32, i32) callconv(.c) QPixmap) void {
        qtc.KCountryFlagEmojiIconEngine_OnPixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPixmap` instead
    ///
    pub const QBasePixmap = SuperPixmap;

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
    pub fn SuperPixmap(self: KCountryFlagEmojiIconEngine, size: anytype, mode: i32, state: i32) QPixmap {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.KCountryFlagEmojiIconEngine_SuperPixmap(@ptrCast(self.ptr), @ptrCast(size.ptr), @bitCast(mode), @bitCast(state)) };
    }

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
    pub fn ScaledPixmap(self: KCountryFlagEmojiIconEngine, size: anytype, mode: i32, state: i32, scale: f64) QPixmap {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.KCountryFlagEmojiIconEngine_ScaledPixmap(@ptrCast(self.ptr), @ptrCast(size.ptr), @bitCast(mode), @bitCast(state), @bitCast(scale)) };
    }

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
    pub fn OnScaledPixmap(self: KCountryFlagEmojiIconEngine, callback: *const fn (KCountryFlagEmojiIconEngine, QSize, i32, i32, f64) callconv(.c) QPixmap) void {
        qtc.KCountryFlagEmojiIconEngine_OnScaledPixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperScaledPixmap` instead
    ///
    pub const QBaseScaledPixmap = SuperScaledPixmap;

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
    pub fn SuperScaledPixmap(self: KCountryFlagEmojiIconEngine, size: anytype, mode: i32, state: i32, scale: f64) QPixmap {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.KCountryFlagEmojiIconEngine_SuperScaledPixmap(@ptrCast(self.ptr), @ptrCast(size.ptr), @bitCast(mode), @bitCast(state), @bitCast(scale)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kcountryflagemojiiconengine.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountryFlagEmojiIconEngine `
    ///
    pub fn IsNull(self: KCountryFlagEmojiIconEngine) bool {
        return qtc.KCountryFlagEmojiIconEngine_IsNull(@ptrCast(self.ptr));
    }

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
    pub fn OnIsNull(self: KCountryFlagEmojiIconEngine, callback: *const fn () callconv(.c) bool) void {
        qtc.KCountryFlagEmojiIconEngine_OnIsNull(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsNull` instead
    ///
    pub const QBaseIsNull = SuperIsNull;

    /// ### [Upstream resources](https://api.kde.org/kcountryflagemojiiconengine.html#isNull)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCountryFlagEmojiIconEngine `
    ///
    pub fn SuperIsNull(self: KCountryFlagEmojiIconEngine) bool {
        return qtc.KCountryFlagEmojiIconEngine_SuperIsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcountryflagemojiiconengine.html#setGlobalDefaultFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` font: QFont `
    ///
    pub fn SetGlobalDefaultFont(font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.KCountryFlagEmojiIconEngine_SetGlobalDefaultFont(@ptrCast(font.ptr));
    }

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
    pub fn ActualSize(self: KCountryFlagEmojiIconEngine, size: anytype, mode: i32, state: i32) QSize {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.KCountryFlagEmojiIconEngine_ActualSize(@ptrCast(self.ptr), @ptrCast(size.ptr), @bitCast(mode), @bitCast(state)) };
    }

    /// ### DEPRECATED: Use `SuperActualSize` instead
    ///
    pub const QBaseActualSize = SuperActualSize;

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
    pub fn SuperActualSize(self: KCountryFlagEmojiIconEngine, size: anytype, mode: i32, state: i32) QSize {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.KCountryFlagEmojiIconEngine_SuperActualSize(@ptrCast(self.ptr), @ptrCast(size.ptr), @bitCast(mode), @bitCast(state)) };
    }

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
    pub fn OnActualSize(self: KCountryFlagEmojiIconEngine, callback: *const fn (KCountryFlagEmojiIconEngine, QSize, i32, i32) callconv(.c) QSize) void {
        qtc.KCountryFlagEmojiIconEngine_OnActualSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` pixmap: QPixmap `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn AddPixmap(self: KCountryFlagEmojiIconEngine, pixmap: anytype, mode: i32, state: i32) void {
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        qtc.KCountryFlagEmojiIconEngine_AddPixmap(@ptrCast(self.ptr), @ptrCast(pixmap.ptr), @bitCast(mode), @bitCast(state));
    }

    /// ### DEPRECATED: Use `SuperAddPixmap` instead
    ///
    pub const QBaseAddPixmap = SuperAddPixmap;

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
    /// ` pixmap: QPixmap `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn SuperAddPixmap(self: KCountryFlagEmojiIconEngine, pixmap: anytype, mode: i32, state: i32) void {
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        qtc.KCountryFlagEmojiIconEngine_SuperAddPixmap(@ptrCast(self.ptr), @ptrCast(pixmap.ptr), @bitCast(mode), @bitCast(state));
    }

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
    pub fn OnAddPixmap(self: KCountryFlagEmojiIconEngine, callback: *const fn (KCountryFlagEmojiIconEngine, QPixmap, i32, i32) callconv(.c) void) void {
        qtc.KCountryFlagEmojiIconEngine_OnAddPixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn AddFile(self: KCountryFlagEmojiIconEngine, fileName: []const u8, size: anytype, mode: i32, state: i32) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        comptime _ = @TypeOf(size)._is_QSize;
        qtc.KCountryFlagEmojiIconEngine_AddFile(@ptrCast(self.ptr), fileName_str, @ptrCast(size.ptr), @bitCast(mode), @bitCast(state));
    }

    /// ### DEPRECATED: Use `SuperAddFile` instead
    ///
    pub const QBaseAddFile = SuperAddFile;

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
    pub fn SuperAddFile(self: KCountryFlagEmojiIconEngine, fileName: []const u8, size: anytype, mode: i32, state: i32) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        comptime _ = @TypeOf(size)._is_QSize;
        qtc.KCountryFlagEmojiIconEngine_SuperAddFile(@ptrCast(self.ptr), fileName_str, @ptrCast(size.ptr), @bitCast(mode), @bitCast(state));
    }

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
    pub fn OnAddFile(self: KCountryFlagEmojiIconEngine, callback: *const fn (KCountryFlagEmojiIconEngine, [*:0]const u8, QSize, i32, i32) callconv(.c) void) void {
        qtc.KCountryFlagEmojiIconEngine_OnAddFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Read(self: KCountryFlagEmojiIconEngine, in: anytype) bool {
        comptime _ = @TypeOf(in)._is_QDataStream;
        return qtc.KCountryFlagEmojiIconEngine_Read(@ptrCast(self.ptr), @ptrCast(in.ptr));
    }

    /// ### DEPRECATED: Use `SuperRead` instead
    ///
    pub const QBaseRead = SuperRead;

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
    pub fn SuperRead(self: KCountryFlagEmojiIconEngine, in: anytype) bool {
        comptime _ = @TypeOf(in)._is_QDataStream;
        return qtc.KCountryFlagEmojiIconEngine_SuperRead(@ptrCast(self.ptr), @ptrCast(in.ptr));
    }

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
    pub fn OnRead(self: KCountryFlagEmojiIconEngine, callback: *const fn (KCountryFlagEmojiIconEngine, QDataStream) callconv(.c) bool) void {
        qtc.KCountryFlagEmojiIconEngine_OnRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Write(self: KCountryFlagEmojiIconEngine, out: anytype) bool {
        comptime _ = @TypeOf(out)._is_QDataStream;
        return qtc.KCountryFlagEmojiIconEngine_Write(@ptrCast(self.ptr), @ptrCast(out.ptr));
    }

    /// ### DEPRECATED: Use `SuperWrite` instead
    ///
    pub const QBaseWrite = SuperWrite;

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
    pub fn SuperWrite(self: KCountryFlagEmojiIconEngine, out: anytype) bool {
        comptime _ = @TypeOf(out)._is_QDataStream;
        return qtc.KCountryFlagEmojiIconEngine_SuperWrite(@ptrCast(self.ptr), @ptrCast(out.ptr));
    }

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
    pub fn OnWrite(self: KCountryFlagEmojiIconEngine, callback: *const fn (KCountryFlagEmojiIconEngine, QDataStream) callconv(.c) bool) void {
        qtc.KCountryFlagEmojiIconEngine_OnWrite(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn AvailableSizes(self: KCountryFlagEmojiIconEngine, allocator: std.mem.Allocator, mode: i32, state: i32) []QSize {
        const _arr: qtc.libqt_list = qtc.KCountryFlagEmojiIconEngine_AvailableSizes(@ptrCast(self.ptr), @bitCast(mode), @bitCast(state));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSize, _arr.len) catch @panic("kcountryflagemojiiconengine.AvailableSizes: Memory allocation failed");
        const _data: [*]QtC.QSize = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperAvailableSizes` instead
    ///
    pub const QBaseAvailableSizes = SuperAvailableSizes;

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
    pub fn SuperAvailableSizes(self: KCountryFlagEmojiIconEngine, allocator: std.mem.Allocator, mode: i32, state: i32) []QSize {
        const _arr: qtc.libqt_list = qtc.KCountryFlagEmojiIconEngine_SuperAvailableSizes(@ptrCast(self.ptr), @bitCast(mode), @bitCast(state));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSize, _arr.len) catch @panic("kcountryflagemojiiconengine.AvailableSizes: Memory allocation failed");
        const _data: [*]QtC.QSize = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

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
    pub fn OnAvailableSizes(self: KCountryFlagEmojiIconEngine, callback: *const fn (KCountryFlagEmojiIconEngine, i32, i32) callconv(.c) qtc.libqt_list) void {
        qtc.KCountryFlagEmojiIconEngine_OnAvailableSizes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IconName(self: KCountryFlagEmojiIconEngine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KCountryFlagEmojiIconEngine_IconName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcountryflagemojiiconengine.IconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperIconName` instead
    ///
    pub const QBaseIconName = SuperIconName;

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
    pub fn SuperIconName(self: KCountryFlagEmojiIconEngine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KCountryFlagEmojiIconEngine_SuperIconName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcountryflagemojiiconengine.IconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QIconEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#iconName)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KCountryFlagEmojiIconEngine`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnIconName(self: KCountryFlagEmojiIconEngine, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KCountryFlagEmojiIconEngine_OnIconName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn VirtualHook(self: KCountryFlagEmojiIconEngine, id: i32, data: ?*anyopaque) void {
        qtc.KCountryFlagEmojiIconEngine_VirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `SuperVirtualHook` instead
    ///
    pub const QBaseVirtualHook = SuperVirtualHook;

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
    pub fn SuperVirtualHook(self: KCountryFlagEmojiIconEngine, id: i32, data: ?*anyopaque) void {
        qtc.KCountryFlagEmojiIconEngine_SuperVirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

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
    pub fn OnVirtualHook(self: KCountryFlagEmojiIconEngine, callback: *const fn (KCountryFlagEmojiIconEngine, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.KCountryFlagEmojiIconEngine_OnVirtualHook(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kcountryflagemojiiconengine.html#dtor.KCountryFlagEmojiIconEngine)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KCountryFlagEmojiIconEngine `
    ///
    pub fn Delete(self: KCountryFlagEmojiIconEngine) void {
        qtc.KCountryFlagEmojiIconEngine_Delete(@ptrCast(self.ptr));
    }
};
