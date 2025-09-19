const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qicon_enums = @import("libqicon.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qiconengine.html
pub const qiconengine = struct {
    /// New constructs a new QIconEngine object.
    ///
    ///
    pub fn New() QtC.QIconEngine {
        return qtc.QIconEngine_new();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#paint)
    ///
    /// ``` self: QtC.QIconEngine, painter: QtC.QPainter, rect: QtC.QRect, mode: qicon_enums.Mode, state: qicon_enums.State ```
    pub fn Paint(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, mode: i32, state: i32) void {
        qtc.QIconEngine_Paint(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @intCast(mode), @intCast(state));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#paint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QIconEngine, callback: *const fn (self: QtC.QIconEngine, painter: QtC.QPainter, rect: QtC.QRect, mode: qicon_enums.Mode, state: qicon_enums.State) callconv(.c) void ```
    pub fn OnPaint(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QIconEngine_OnPaint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#paint)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QIconEngine, painter: QtC.QPainter, rect: QtC.QRect, mode: qicon_enums.Mode, state: qicon_enums.State ```
    pub fn QBasePaint(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, mode: i32, state: i32) void {
        qtc.QIconEngine_QBasePaint(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @intCast(mode), @intCast(state));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#actualSize)
    ///
    /// ``` self: QtC.QIconEngine, size: QtC.QSize, mode: qicon_enums.Mode, state: qicon_enums.State ```
    pub fn ActualSize(self: ?*anyopaque, size: ?*anyopaque, mode: i32, state: i32) QtC.QSize {
        return qtc.QIconEngine_ActualSize(@ptrCast(self), @ptrCast(size), @intCast(mode), @intCast(state));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#actualSize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QIconEngine, callback: *const fn (self: QtC.QIconEngine, size: QtC.QSize, mode: qicon_enums.Mode, state: qicon_enums.State) callconv(.c) QtC.QSize ```
    pub fn OnActualSize(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) QtC.QSize) void {
        qtc.QIconEngine_OnActualSize(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#actualSize)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QIconEngine, size: QtC.QSize, mode: qicon_enums.Mode, state: qicon_enums.State ```
    pub fn QBaseActualSize(self: ?*anyopaque, size: ?*anyopaque, mode: i32, state: i32) QtC.QSize {
        return qtc.QIconEngine_QBaseActualSize(@ptrCast(self), @ptrCast(size), @intCast(mode), @intCast(state));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#pixmap)
    ///
    /// ``` self: QtC.QIconEngine, size: QtC.QSize, mode: qicon_enums.Mode, state: qicon_enums.State ```
    pub fn Pixmap(self: ?*anyopaque, size: ?*anyopaque, mode: i32, state: i32) QtC.QPixmap {
        return qtc.QIconEngine_Pixmap(@ptrCast(self), @ptrCast(size), @intCast(mode), @intCast(state));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#pixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QIconEngine, callback: *const fn (self: QtC.QIconEngine, size: QtC.QSize, mode: qicon_enums.Mode, state: qicon_enums.State) callconv(.c) QtC.QPixmap ```
    pub fn OnPixmap(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) QtC.QPixmap) void {
        qtc.QIconEngine_OnPixmap(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#pixmap)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QIconEngine, size: QtC.QSize, mode: qicon_enums.Mode, state: qicon_enums.State ```
    pub fn QBasePixmap(self: ?*anyopaque, size: ?*anyopaque, mode: i32, state: i32) QtC.QPixmap {
        return qtc.QIconEngine_QBasePixmap(@ptrCast(self), @ptrCast(size), @intCast(mode), @intCast(state));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#addPixmap)
    ///
    /// ``` self: QtC.QIconEngine, pixmap: QtC.QPixmap, mode: qicon_enums.Mode, state: qicon_enums.State ```
    pub fn AddPixmap(self: ?*anyopaque, pixmap: ?*anyopaque, mode: i32, state: i32) void {
        qtc.QIconEngine_AddPixmap(@ptrCast(self), @ptrCast(pixmap), @intCast(mode), @intCast(state));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#addPixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QIconEngine, callback: *const fn (self: QtC.QIconEngine, pixmap: QtC.QPixmap, mode: qicon_enums.Mode, state: qicon_enums.State) callconv(.c) void ```
    pub fn OnAddPixmap(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QIconEngine_OnAddPixmap(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#addPixmap)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QIconEngine, pixmap: QtC.QPixmap, mode: qicon_enums.Mode, state: qicon_enums.State ```
    pub fn QBaseAddPixmap(self: ?*anyopaque, pixmap: ?*anyopaque, mode: i32, state: i32) void {
        qtc.QIconEngine_QBaseAddPixmap(@ptrCast(self), @ptrCast(pixmap), @intCast(mode), @intCast(state));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#addFile)
    ///
    /// ``` self: QtC.QIconEngine, fileName: []const u8, size: QtC.QSize, mode: qicon_enums.Mode, state: qicon_enums.State ```
    pub fn AddFile(self: ?*anyopaque, fileName: []const u8, size: ?*anyopaque, mode: i32, state: i32) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QIconEngine_AddFile(@ptrCast(self), fileName_str, @ptrCast(size), @intCast(mode), @intCast(state));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#addFile)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QIconEngine, callback: *const fn (self: QtC.QIconEngine, fileName: [*:0]const u8, size: QtC.QSize, mode: qicon_enums.Mode, state: qicon_enums.State) callconv(.c) void ```
    pub fn OnAddFile(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QIconEngine_OnAddFile(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#addFile)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QIconEngine, fileName: []const u8, size: QtC.QSize, mode: qicon_enums.Mode, state: qicon_enums.State ```
    pub fn QBaseAddFile(self: ?*anyopaque, fileName: []const u8, size: ?*anyopaque, mode: i32, state: i32) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QIconEngine_QBaseAddFile(@ptrCast(self), fileName_str, @ptrCast(size), @intCast(mode), @intCast(state));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#key)
    ///
    /// ``` self: QtC.QIconEngine, allocator: std.mem.Allocator ```
    pub fn Key(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QIconEngine_Key(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qiconengine.Key: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#key)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QIconEngine, callback: *const fn () callconv(.c) [*:0]const u8 ```
    pub fn OnKey(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QIconEngine_OnKey(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#key)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QIconEngine, allocator: std.mem.Allocator ```
    pub fn QBaseKey(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QIconEngine_QBaseKey(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qiconengine.Key: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#clone)
    ///
    /// ``` self: QtC.QIconEngine ```
    pub fn Clone(self: ?*anyopaque) QtC.QIconEngine {
        return qtc.QIconEngine_Clone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QIconEngine, callback: *const fn () callconv(.c) QtC.QIconEngine ```
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QIconEngine) void {
        qtc.QIconEngine_OnClone(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QIconEngine ```
    pub fn QBaseClone(self: ?*anyopaque) QtC.QIconEngine {
        return qtc.QIconEngine_QBaseClone(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#read)
    ///
    /// ``` self: QtC.QIconEngine, in: QtC.QDataStream ```
    pub fn Read(self: ?*anyopaque, in: ?*anyopaque) bool {
        return qtc.QIconEngine_Read(@ptrCast(self), @ptrCast(in));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#read)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QIconEngine, callback: *const fn (self: QtC.QIconEngine, in: QtC.QDataStream) callconv(.c) bool ```
    pub fn OnRead(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QIconEngine_OnRead(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#read)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QIconEngine, in: QtC.QDataStream ```
    pub fn QBaseRead(self: ?*anyopaque, in: ?*anyopaque) bool {
        return qtc.QIconEngine_QBaseRead(@ptrCast(self), @ptrCast(in));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#write)
    ///
    /// ``` self: QtC.QIconEngine, out: QtC.QDataStream ```
    pub fn Write(self: ?*anyopaque, out: ?*anyopaque) bool {
        return qtc.QIconEngine_Write(@ptrCast(self), @ptrCast(out));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#write)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QIconEngine, callback: *const fn (self: QtC.QIconEngine, out: QtC.QDataStream) callconv(.c) bool ```
    pub fn OnWrite(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QIconEngine_OnWrite(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#write)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QIconEngine, out: QtC.QDataStream ```
    pub fn QBaseWrite(self: ?*anyopaque, out: ?*anyopaque) bool {
        return qtc.QIconEngine_QBaseWrite(@ptrCast(self), @ptrCast(out));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#availableSizes)
    ///
    /// ``` self: QtC.QIconEngine, mode: qicon_enums.Mode, state: qicon_enums.State, allocator: std.mem.Allocator ```
    pub fn AvailableSizes(self: ?*anyopaque, mode: i32, state: i32, allocator: std.mem.Allocator) []QtC.QSize {
        const _arr: qtc.libqt_list = qtc.QIconEngine_AvailableSizes(@ptrCast(self), @intCast(mode), @intCast(state));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QSize, _arr.len) catch @panic("qiconengine.AvailableSizes: Memory allocation failed");
        const _data: [*]QtC.QSize = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#availableSizes)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QIconEngine, callback: *const fn (self: QtC.QIconEngine, mode: qicon_enums.Mode, state: qicon_enums.State) callconv(.c) [*:null]QtC.QSize ```
    pub fn OnAvailableSizes(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) [*:null]QtC.QSize) void {
        qtc.QIconEngine_OnAvailableSizes(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#availableSizes)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QIconEngine, mode: qicon_enums.Mode, state: qicon_enums.State, allocator: std.mem.Allocator ```
    pub fn QBaseAvailableSizes(self: ?*anyopaque, mode: i32, state: i32, allocator: std.mem.Allocator) []QtC.QSize {
        const _arr: qtc.libqt_list = qtc.QIconEngine_QBaseAvailableSizes(@ptrCast(self), @intCast(mode), @intCast(state));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QSize, _arr.len) catch @panic("qiconengine.AvailableSizes: Memory allocation failed");
        const _data: [*]QtC.QSize = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#iconName)
    ///
    /// ``` self: QtC.QIconEngine, allocator: std.mem.Allocator ```
    pub fn IconName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QIconEngine_IconName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qiconengine.IconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#iconName)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QIconEngine, callback: *const fn () callconv(.c) [*:0]const u8 ```
    pub fn OnIconName(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QIconEngine_OnIconName(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#iconName)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QIconEngine, allocator: std.mem.Allocator ```
    pub fn QBaseIconName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QIconEngine_QBaseIconName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qiconengine.IconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#isNull)
    ///
    /// ``` self: QtC.QIconEngine ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QIconEngine_IsNull(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#isNull)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QIconEngine, callback: *const fn () callconv(.c) bool ```
    pub fn OnIsNull(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QIconEngine_OnIsNull(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#isNull)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QIconEngine ```
    pub fn QBaseIsNull(self: ?*anyopaque) bool {
        return qtc.QIconEngine_QBaseIsNull(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#scaledPixmap)
    ///
    /// ``` self: QtC.QIconEngine, size: QtC.QSize, mode: qicon_enums.Mode, state: qicon_enums.State, scale: f64 ```
    pub fn ScaledPixmap(self: ?*anyopaque, size: ?*anyopaque, mode: i32, state: i32, scale: f64) QtC.QPixmap {
        return qtc.QIconEngine_ScaledPixmap(@ptrCast(self), @ptrCast(size), @intCast(mode), @intCast(state), @floatCast(scale));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#scaledPixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QIconEngine, callback: *const fn (self: QtC.QIconEngine, size: QtC.QSize, mode: qicon_enums.Mode, state: qicon_enums.State, scale: f64) callconv(.c) QtC.QPixmap ```
    pub fn OnScaledPixmap(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, f64) callconv(.c) QtC.QPixmap) void {
        qtc.QIconEngine_OnScaledPixmap(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#scaledPixmap)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QIconEngine, size: QtC.QSize, mode: qicon_enums.Mode, state: qicon_enums.State, scale: f64 ```
    pub fn QBaseScaledPixmap(self: ?*anyopaque, size: ?*anyopaque, mode: i32, state: i32, scale: f64) QtC.QPixmap {
        return qtc.QIconEngine_QBaseScaledPixmap(@ptrCast(self), @ptrCast(size), @intCast(mode), @intCast(state), @floatCast(scale));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#virtual_hook)
    ///
    /// ``` self: QtC.QIconEngine, id: i32, data: ?*anyopaque ```
    pub fn VirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.QIconEngine_VirtualHook(@ptrCast(self), @intCast(id), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#virtual_hook)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QIconEngine, callback: *const fn (self: QtC.QIconEngine, id: i32, data: ?*anyopaque) callconv(.c) void ```
    pub fn OnVirtualHook(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QIconEngine_OnVirtualHook(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#virtual_hook)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QIconEngine, id: i32, data: ?*anyopaque ```
    pub fn QBaseVirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.QIconEngine_QBaseVirtualHook(@ptrCast(self), @intCast(id), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#dtor.QIconEngine)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QIconEngine ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QIconEngine_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html
pub const qiconengine__scaledpixmapargument = struct {
    /// New constructs a new QIconEngine::ScaledPixmapArgument object.
    ///
    /// ``` param1: QtC.QIconEngine__ScaledPixmapArgument ```
    pub fn New(param1: ?*anyopaque) QtC.QIconEngine__ScaledPixmapArgument {
        return qtc.QIconEngine__ScaledPixmapArgument_new(@ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html#size-var)
    ///
    /// ``` self: QtC.QIconEngine__ScaledPixmapArgument ```
    pub fn Size(self: ?*anyopaque) QtC.QSize {
        return qtc.QIconEngine__ScaledPixmapArgument_Size(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html#size-var)
    ///
    /// ``` self: QtC.QIconEngine__ScaledPixmapArgument, size: QtC.QSize ```
    pub fn SetSize(self: ?*anyopaque, size: QtC.QSize) void {
        qtc.QIconEngine__ScaledPixmapArgument_SetSize(@ptrCast(self), @ptrCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html#mode-var)
    ///
    /// ``` self: QtC.QIconEngine__ScaledPixmapArgument ```
    ///
    /// Returns: ``` qicon_enums.Mode ```
    pub fn Mode(self: ?*anyopaque) i32 {
        return qtc.QIconEngine__ScaledPixmapArgument_Mode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html#mode-var)
    ///
    /// ``` self: QtC.QIconEngine__ScaledPixmapArgument, mode: qicon_enums.Mode ```
    pub fn SetMode(self: ?*anyopaque, mode: i32) void {
        qtc.QIconEngine__ScaledPixmapArgument_SetMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html#state-var)
    ///
    /// ``` self: QtC.QIconEngine__ScaledPixmapArgument ```
    ///
    /// Returns: ``` qicon_enums.State ```
    pub fn State(self: ?*anyopaque) i32 {
        return qtc.QIconEngine__ScaledPixmapArgument_State(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html#state-var)
    ///
    /// ``` self: QtC.QIconEngine__ScaledPixmapArgument, state: qicon_enums.State ```
    pub fn SetState(self: ?*anyopaque, state: i32) void {
        qtc.QIconEngine__ScaledPixmapArgument_SetState(@ptrCast(self), @intCast(state));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html#scale-var)
    ///
    /// ``` self: QtC.QIconEngine__ScaledPixmapArgument ```
    pub fn Scale(self: ?*anyopaque) f64 {
        return qtc.QIconEngine__ScaledPixmapArgument_Scale(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html#scale-var)
    ///
    /// ``` self: QtC.QIconEngine__ScaledPixmapArgument, scale: f64 ```
    pub fn SetScale(self: ?*anyopaque, scale: f64) void {
        qtc.QIconEngine__ScaledPixmapArgument_SetScale(@ptrCast(self), @floatCast(scale));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html#pixmap-var)
    ///
    /// ``` self: QtC.QIconEngine__ScaledPixmapArgument ```
    pub fn Pixmap(self: ?*anyopaque) QtC.QPixmap {
        return qtc.QIconEngine__ScaledPixmapArgument_Pixmap(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html#pixmap-var)
    ///
    /// ``` self: QtC.QIconEngine__ScaledPixmapArgument, pixmap: QtC.QPixmap ```
    pub fn SetPixmap(self: ?*anyopaque, pixmap: QtC.QPixmap) void {
        qtc.QIconEngine__ScaledPixmapArgument_SetPixmap(@ptrCast(self), @ptrCast(pixmap));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html#operator-eq)
    ///
    /// ``` self: QtC.QIconEngine__ScaledPixmapArgument, param1: QtC.QIconEngine__ScaledPixmapArgument ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QIconEngine__ScaledPixmapArgument_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QIconEngine__ScaledPixmapArgument ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QIconEngine__ScaledPixmapArgument_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qiconengine.html#types
pub const enums = struct {
    pub const IconEngineHook = enum {
        pub const IsNullHook: i32 = 3;
        pub const ScaledPixmapHook: i32 = 4;
    };
};
