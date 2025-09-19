const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qicon_enums = @import("../libqicon.zig").enums;
const std = @import("std");

/// https://api.kde.org/kcountryflagemojiiconengine.html
pub const kcountryflagemojiiconengine = struct {
    /// New constructs a new KCountryFlagEmojiIconEngine object.
    ///
    /// ``` regionOrCountry: []const u8 ```
    pub fn New(regionOrCountry: []const u8) QtC.KCountryFlagEmojiIconEngine {
        const regionOrCountry_str = qtc.libqt_string{
            .len = regionOrCountry.len,
            .data = regionOrCountry.ptr,
        };

        return qtc.KCountryFlagEmojiIconEngine_new(regionOrCountry_str);
    }

    /// [Qt documentation](https://api.kde.org/kcountryflagemojiiconengine.html#clone)
    ///
    /// ``` self: QtC.KCountryFlagEmojiIconEngine ```
    pub fn Clone(self: ?*anyopaque) QtC.QIconEngine {
        return qtc.KCountryFlagEmojiIconEngine_Clone(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kcountryflagemojiiconengine.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KCountryFlagEmojiIconEngine, callback: *const fn () callconv(.c) QtC.QIconEngine ```
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QIconEngine) void {
        qtc.KCountryFlagEmojiIconEngine_OnClone(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kcountryflagemojiiconengine.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KCountryFlagEmojiIconEngine ```
    pub fn QBaseClone(self: ?*anyopaque) QtC.QIconEngine {
        return qtc.KCountryFlagEmojiIconEngine_QBaseClone(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kcountryflagemojiiconengine.html#key)
    ///
    /// ``` self: QtC.KCountryFlagEmojiIconEngine, allocator: std.mem.Allocator ```
    pub fn Key(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KCountryFlagEmojiIconEngine_Key(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcountryflagemojiiconengine.Key: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kcountryflagemojiiconengine.html#key)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KCountryFlagEmojiIconEngine, callback: *const fn () callconv(.c) [*:0]const u8 ```
    pub fn OnKey(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KCountryFlagEmojiIconEngine_OnKey(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kcountryflagemojiiconengine.html#key)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KCountryFlagEmojiIconEngine, allocator: std.mem.Allocator ```
    pub fn QBaseKey(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KCountryFlagEmojiIconEngine_QBaseKey(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcountryflagemojiiconengine.Key: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kcountryflagemojiiconengine.html#paint)
    ///
    /// ``` self: QtC.KCountryFlagEmojiIconEngine, painter: QtC.QPainter, rect: QtC.QRect, mode: qicon_enums.Mode, state: qicon_enums.State ```
    pub fn Paint(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, mode: i32, state: i32) void {
        qtc.KCountryFlagEmojiIconEngine_Paint(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @intCast(mode), @intCast(state));
    }

    /// [Qt documentation](https://api.kde.org/kcountryflagemojiiconengine.html#paint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KCountryFlagEmojiIconEngine, callback: *const fn (self: QtC.KCountryFlagEmojiIconEngine, painter: QtC.QPainter, rect: QtC.QRect, mode: qicon_enums.Mode, state: qicon_enums.State) callconv(.c) void ```
    pub fn OnPaint(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.KCountryFlagEmojiIconEngine_OnPaint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kcountryflagemojiiconengine.html#paint)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KCountryFlagEmojiIconEngine, painter: QtC.QPainter, rect: QtC.QRect, mode: qicon_enums.Mode, state: qicon_enums.State ```
    pub fn QBasePaint(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, mode: i32, state: i32) void {
        qtc.KCountryFlagEmojiIconEngine_QBasePaint(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @intCast(mode), @intCast(state));
    }

    /// [Qt documentation](https://api.kde.org/kcountryflagemojiiconengine.html#pixmap)
    ///
    /// ``` self: QtC.KCountryFlagEmojiIconEngine, size: QtC.QSize, mode: qicon_enums.Mode, state: qicon_enums.State ```
    pub fn Pixmap(self: ?*anyopaque, size: ?*anyopaque, mode: i32, state: i32) QtC.QPixmap {
        return qtc.KCountryFlagEmojiIconEngine_Pixmap(@ptrCast(self), @ptrCast(size), @intCast(mode), @intCast(state));
    }

    /// [Qt documentation](https://api.kde.org/kcountryflagemojiiconengine.html#pixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KCountryFlagEmojiIconEngine, callback: *const fn (self: QtC.KCountryFlagEmojiIconEngine, size: QtC.QSize, mode: qicon_enums.Mode, state: qicon_enums.State) callconv(.c) QtC.QPixmap ```
    pub fn OnPixmap(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) QtC.QPixmap) void {
        qtc.KCountryFlagEmojiIconEngine_OnPixmap(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kcountryflagemojiiconengine.html#pixmap)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KCountryFlagEmojiIconEngine, size: QtC.QSize, mode: qicon_enums.Mode, state: qicon_enums.State ```
    pub fn QBasePixmap(self: ?*anyopaque, size: ?*anyopaque, mode: i32, state: i32) QtC.QPixmap {
        return qtc.KCountryFlagEmojiIconEngine_QBasePixmap(@ptrCast(self), @ptrCast(size), @intCast(mode), @intCast(state));
    }

    /// [Qt documentation](https://api.kde.org/kcountryflagemojiiconengine.html#scaledPixmap)
    ///
    /// ``` self: QtC.KCountryFlagEmojiIconEngine, size: QtC.QSize, mode: qicon_enums.Mode, state: qicon_enums.State, scale: f64 ```
    pub fn ScaledPixmap(self: ?*anyopaque, size: ?*anyopaque, mode: i32, state: i32, scale: f64) QtC.QPixmap {
        return qtc.KCountryFlagEmojiIconEngine_ScaledPixmap(@ptrCast(self), @ptrCast(size), @intCast(mode), @intCast(state), @floatCast(scale));
    }

    /// [Qt documentation](https://api.kde.org/kcountryflagemojiiconengine.html#scaledPixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KCountryFlagEmojiIconEngine, callback: *const fn (self: QtC.KCountryFlagEmojiIconEngine, size: QtC.QSize, mode: qicon_enums.Mode, state: qicon_enums.State, scale: f64) callconv(.c) QtC.QPixmap ```
    pub fn OnScaledPixmap(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, f64) callconv(.c) QtC.QPixmap) void {
        qtc.KCountryFlagEmojiIconEngine_OnScaledPixmap(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kcountryflagemojiiconengine.html#scaledPixmap)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KCountryFlagEmojiIconEngine, size: QtC.QSize, mode: qicon_enums.Mode, state: qicon_enums.State, scale: f64 ```
    pub fn QBaseScaledPixmap(self: ?*anyopaque, size: ?*anyopaque, mode: i32, state: i32, scale: f64) QtC.QPixmap {
        return qtc.KCountryFlagEmojiIconEngine_QBaseScaledPixmap(@ptrCast(self), @ptrCast(size), @intCast(mode), @intCast(state), @floatCast(scale));
    }

    /// [Qt documentation](https://api.kde.org/kcountryflagemojiiconengine.html#isNull)
    ///
    /// ``` self: QtC.KCountryFlagEmojiIconEngine ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.KCountryFlagEmojiIconEngine_IsNull(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kcountryflagemojiiconengine.html#isNull)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KCountryFlagEmojiIconEngine, callback: *const fn () callconv(.c) bool ```
    pub fn OnIsNull(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KCountryFlagEmojiIconEngine_OnIsNull(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kcountryflagemojiiconengine.html#isNull)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KCountryFlagEmojiIconEngine ```
    pub fn QBaseIsNull(self: ?*anyopaque) bool {
        return qtc.KCountryFlagEmojiIconEngine_QBaseIsNull(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kcountryflagemojiiconengine.html#setGlobalDefaultFont)
    ///
    /// ``` font: QtC.QFont ```
    pub fn SetGlobalDefaultFont(font: ?*anyopaque) void {
        qtc.KCountryFlagEmojiIconEngine_SetGlobalDefaultFont(@ptrCast(font));
    }

    /// Inherited from QIconEngine
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#actualSize)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCountryFlagEmojiIconEngine, size: QtC.QSize, mode: qicon_enums.Mode, state: qicon_enums.State ```
    pub fn ActualSize(self: ?*anyopaque, size: ?*anyopaque, mode: i32, state: i32) QtC.QSize {
        return qtc.KCountryFlagEmojiIconEngine_ActualSize(@ptrCast(self), @ptrCast(size), @intCast(mode), @intCast(state));
    }

    /// Inherited from QIconEngine
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#actualSize)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCountryFlagEmojiIconEngine, size: QtC.QSize, mode: qicon_enums.Mode, state: qicon_enums.State ```
    pub fn QBaseActualSize(self: ?*anyopaque, size: ?*anyopaque, mode: i32, state: i32) QtC.QSize {
        return qtc.KCountryFlagEmojiIconEngine_QBaseActualSize(@ptrCast(self), @ptrCast(size), @intCast(mode), @intCast(state));
    }

    /// Inherited from QIconEngine
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#actualSize)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCountryFlagEmojiIconEngine, callback: *const fn (self: QtC.KCountryFlagEmojiIconEngine, size: QtC.QSize, mode: qicon_enums.Mode, state: qicon_enums.State) callconv(.c) QtC.QSize ```
    pub fn OnActualSize(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) QtC.QSize) void {
        qtc.KCountryFlagEmojiIconEngine_OnActualSize(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QIconEngine
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#addPixmap)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCountryFlagEmojiIconEngine, pixmap: QtC.QPixmap, mode: qicon_enums.Mode, state: qicon_enums.State ```
    pub fn AddPixmap(self: ?*anyopaque, pixmap: ?*anyopaque, mode: i32, state: i32) void {
        qtc.KCountryFlagEmojiIconEngine_AddPixmap(@ptrCast(self), @ptrCast(pixmap), @intCast(mode), @intCast(state));
    }

    /// Inherited from QIconEngine
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#addPixmap)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCountryFlagEmojiIconEngine, pixmap: QtC.QPixmap, mode: qicon_enums.Mode, state: qicon_enums.State ```
    pub fn QBaseAddPixmap(self: ?*anyopaque, pixmap: ?*anyopaque, mode: i32, state: i32) void {
        qtc.KCountryFlagEmojiIconEngine_QBaseAddPixmap(@ptrCast(self), @ptrCast(pixmap), @intCast(mode), @intCast(state));
    }

    /// Inherited from QIconEngine
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#addPixmap)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCountryFlagEmojiIconEngine, callback: *const fn (self: QtC.KCountryFlagEmojiIconEngine, pixmap: QtC.QPixmap, mode: qicon_enums.Mode, state: qicon_enums.State) callconv(.c) void ```
    pub fn OnAddPixmap(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.KCountryFlagEmojiIconEngine_OnAddPixmap(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QIconEngine
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#addFile)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCountryFlagEmojiIconEngine, fileName: []const u8, size: QtC.QSize, mode: qicon_enums.Mode, state: qicon_enums.State ```
    pub fn AddFile(self: ?*anyopaque, fileName: []const u8, size: ?*anyopaque, mode: i32, state: i32) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.KCountryFlagEmojiIconEngine_AddFile(@ptrCast(self), fileName_str, @ptrCast(size), @intCast(mode), @intCast(state));
    }

    /// Inherited from QIconEngine
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#addFile)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCountryFlagEmojiIconEngine, fileName: []const u8, size: QtC.QSize, mode: qicon_enums.Mode, state: qicon_enums.State ```
    pub fn QBaseAddFile(self: ?*anyopaque, fileName: []const u8, size: ?*anyopaque, mode: i32, state: i32) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.KCountryFlagEmojiIconEngine_QBaseAddFile(@ptrCast(self), fileName_str, @ptrCast(size), @intCast(mode), @intCast(state));
    }

    /// Inherited from QIconEngine
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#addFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCountryFlagEmojiIconEngine, callback: *const fn (self: QtC.KCountryFlagEmojiIconEngine, fileName: [*:0]const u8, size: QtC.QSize, mode: qicon_enums.Mode, state: qicon_enums.State) callconv(.c) void ```
    pub fn OnAddFile(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.KCountryFlagEmojiIconEngine_OnAddFile(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QIconEngine
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#read)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCountryFlagEmojiIconEngine, in: QtC.QDataStream ```
    pub fn Read(self: ?*anyopaque, in: ?*anyopaque) bool {
        return qtc.KCountryFlagEmojiIconEngine_Read(@ptrCast(self), @ptrCast(in));
    }

    /// Inherited from QIconEngine
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#read)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCountryFlagEmojiIconEngine, in: QtC.QDataStream ```
    pub fn QBaseRead(self: ?*anyopaque, in: ?*anyopaque) bool {
        return qtc.KCountryFlagEmojiIconEngine_QBaseRead(@ptrCast(self), @ptrCast(in));
    }

    /// Inherited from QIconEngine
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#read)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCountryFlagEmojiIconEngine, callback: *const fn (self: QtC.KCountryFlagEmojiIconEngine, in: QtC.QDataStream) callconv(.c) bool ```
    pub fn OnRead(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KCountryFlagEmojiIconEngine_OnRead(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QIconEngine
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#write)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCountryFlagEmojiIconEngine, out: QtC.QDataStream ```
    pub fn Write(self: ?*anyopaque, out: ?*anyopaque) bool {
        return qtc.KCountryFlagEmojiIconEngine_Write(@ptrCast(self), @ptrCast(out));
    }

    /// Inherited from QIconEngine
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#write)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCountryFlagEmojiIconEngine, out: QtC.QDataStream ```
    pub fn QBaseWrite(self: ?*anyopaque, out: ?*anyopaque) bool {
        return qtc.KCountryFlagEmojiIconEngine_QBaseWrite(@ptrCast(self), @ptrCast(out));
    }

    /// Inherited from QIconEngine
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#write)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCountryFlagEmojiIconEngine, callback: *const fn (self: QtC.KCountryFlagEmojiIconEngine, out: QtC.QDataStream) callconv(.c) bool ```
    pub fn OnWrite(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KCountryFlagEmojiIconEngine_OnWrite(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QIconEngine
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#availableSizes)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCountryFlagEmojiIconEngine, mode: qicon_enums.Mode, state: qicon_enums.State, allocator: std.mem.Allocator ```
    pub fn AvailableSizes(self: ?*anyopaque, mode: i32, state: i32, allocator: std.mem.Allocator) []QtC.QSize {
        const _arr: qtc.libqt_list = qtc.KCountryFlagEmojiIconEngine_AvailableSizes(@ptrCast(self), @intCast(mode), @intCast(state));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QSize, _arr.len) catch @panic("kcountryflagemojiiconengine.AvailableSizes: Memory allocation failed");
        const _data: [*]QtC.QSize = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QIconEngine
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#availableSizes)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCountryFlagEmojiIconEngine, mode: qicon_enums.Mode, state: qicon_enums.State, allocator: std.mem.Allocator ```
    pub fn QBaseAvailableSizes(self: ?*anyopaque, mode: i32, state: i32, allocator: std.mem.Allocator) []QtC.QSize {
        const _arr: qtc.libqt_list = qtc.KCountryFlagEmojiIconEngine_QBaseAvailableSizes(@ptrCast(self), @intCast(mode), @intCast(state));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QSize, _arr.len) catch @panic("kcountryflagemojiiconengine.AvailableSizes: Memory allocation failed");
        const _data: [*]QtC.QSize = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QIconEngine
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#availableSizes)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCountryFlagEmojiIconEngine, callback: *const fn (self: QtC.KCountryFlagEmojiIconEngine, mode: qicon_enums.Mode, state: qicon_enums.State) callconv(.c) [*:null]QtC.QSize ```
    pub fn OnAvailableSizes(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) [*:null]QtC.QSize) void {
        qtc.KCountryFlagEmojiIconEngine_OnAvailableSizes(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QIconEngine
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#iconName)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCountryFlagEmojiIconEngine, allocator: std.mem.Allocator ```
    pub fn IconName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KCountryFlagEmojiIconEngine_IconName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcountryflagemojiiconengine.IconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QIconEngine
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#iconName)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCountryFlagEmojiIconEngine, allocator: std.mem.Allocator ```
    pub fn QBaseIconName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KCountryFlagEmojiIconEngine_QBaseIconName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcountryflagemojiiconengine.IconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QIconEngine
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#iconName)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCountryFlagEmojiIconEngine, callback: *const fn () callconv(.c) [*:0]const u8 ```
    pub fn OnIconName(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KCountryFlagEmojiIconEngine_OnIconName(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QIconEngine
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#virtual_hook)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCountryFlagEmojiIconEngine, id: i32, data: ?*anyopaque ```
    pub fn VirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.KCountryFlagEmojiIconEngine_VirtualHook(@ptrCast(self), @intCast(id), data);
    }

    /// Inherited from QIconEngine
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#virtual_hook)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCountryFlagEmojiIconEngine, id: i32, data: ?*anyopaque ```
    pub fn QBaseVirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.KCountryFlagEmojiIconEngine_QBaseVirtualHook(@ptrCast(self), @intCast(id), data);
    }

    /// Inherited from QIconEngine
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#virtual_hook)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCountryFlagEmojiIconEngine, callback: *const fn (self: QtC.KCountryFlagEmojiIconEngine, id: i32, data: ?*anyopaque) callconv(.c) void ```
    pub fn OnVirtualHook(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.KCountryFlagEmojiIconEngine_OnVirtualHook(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kcountryflagemojiiconengine.html#dtor.KCountryFlagEmojiIconEngine)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KCountryFlagEmojiIconEngine ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KCountryFlagEmojiIconEngine_Delete(@ptrCast(self));
    }
};
