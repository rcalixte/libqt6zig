const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qicon_enums = @import("libqicon.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html)
pub const qiconengine = struct {
    /// New constructs a new QIconEngine object.
    ///
    pub fn New() QtC.QIconEngine {
        return qtc.QIconEngine_new();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#paint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QIconEngine `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` rect: QtC.QRect `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn Paint(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, mode: i32, state: i32) void {
        qtc.QIconEngine_Paint(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @bitCast(mode), @bitCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#paint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QIconEngine `
    ///
    /// ` callback: *const fn (self: QtC.QIconEngine, painter: QtC.QPainter, rect: QtC.QRect, mode: qicon_enums.Mode, state: qicon_enums.State) callconv(.c) void `
    ///
    pub fn OnPaint(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QIconEngine_OnPaint(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPaint` instead
    ///
    pub const QBasePaint = SuperPaint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#paint)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QIconEngine `
    ///
    /// ` painter: QtC.QPainter `
    ///
    /// ` rect: QtC.QRect `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn SuperPaint(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, mode: i32, state: i32) void {
        qtc.QIconEngine_SuperPaint(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @bitCast(mode), @bitCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#actualSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QIconEngine `
    ///
    /// ` size: QtC.QSize `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn ActualSize(self: ?*anyopaque, size: ?*anyopaque, mode: i32, state: i32) QtC.QSize {
        return qtc.QIconEngine_ActualSize(@ptrCast(self), @ptrCast(size), @bitCast(mode), @bitCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#actualSize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QIconEngine `
    ///
    /// ` callback: *const fn (self: QtC.QIconEngine, size: QtC.QSize, mode: qicon_enums.Mode, state: qicon_enums.State) callconv(.c) QtC.QSize `
    ///
    pub fn OnActualSize(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) QtC.QSize) void {
        qtc.QIconEngine_OnActualSize(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperActualSize` instead
    ///
    pub const QBaseActualSize = SuperActualSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#actualSize)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QIconEngine `
    ///
    /// ` size: QtC.QSize `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn SuperActualSize(self: ?*anyopaque, size: ?*anyopaque, mode: i32, state: i32) QtC.QSize {
        return qtc.QIconEngine_SuperActualSize(@ptrCast(self), @ptrCast(size), @bitCast(mode), @bitCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#pixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QIconEngine `
    ///
    /// ` size: QtC.QSize `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn Pixmap(self: ?*anyopaque, size: ?*anyopaque, mode: i32, state: i32) QtC.QPixmap {
        return qtc.QIconEngine_Pixmap(@ptrCast(self), @ptrCast(size), @bitCast(mode), @bitCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#pixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QIconEngine `
    ///
    /// ` callback: *const fn (self: QtC.QIconEngine, size: QtC.QSize, mode: qicon_enums.Mode, state: qicon_enums.State) callconv(.c) QtC.QPixmap `
    ///
    pub fn OnPixmap(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) QtC.QPixmap) void {
        qtc.QIconEngine_OnPixmap(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPixmap` instead
    ///
    pub const QBasePixmap = SuperPixmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#pixmap)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QIconEngine `
    ///
    /// ` size: QtC.QSize `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn SuperPixmap(self: ?*anyopaque, size: ?*anyopaque, mode: i32, state: i32) QtC.QPixmap {
        return qtc.QIconEngine_SuperPixmap(@ptrCast(self), @ptrCast(size), @bitCast(mode), @bitCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#addPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QIconEngine `
    ///
    /// ` pixmap: QtC.QPixmap `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn AddPixmap(self: ?*anyopaque, pixmap: ?*anyopaque, mode: i32, state: i32) void {
        qtc.QIconEngine_AddPixmap(@ptrCast(self), @ptrCast(pixmap), @bitCast(mode), @bitCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#addPixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QIconEngine `
    ///
    /// ` callback: *const fn (self: QtC.QIconEngine, pixmap: QtC.QPixmap, mode: qicon_enums.Mode, state: qicon_enums.State) callconv(.c) void `
    ///
    pub fn OnAddPixmap(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QIconEngine_OnAddPixmap(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAddPixmap` instead
    ///
    pub const QBaseAddPixmap = SuperAddPixmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#addPixmap)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QIconEngine `
    ///
    /// ` pixmap: QtC.QPixmap `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn SuperAddPixmap(self: ?*anyopaque, pixmap: ?*anyopaque, mode: i32, state: i32) void {
        qtc.QIconEngine_SuperAddPixmap(@ptrCast(self), @ptrCast(pixmap), @bitCast(mode), @bitCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#addFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QIconEngine `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` size: QtC.QSize `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn AddFile(self: ?*anyopaque, fileName: []const u8, size: ?*anyopaque, mode: i32, state: i32) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QIconEngine_AddFile(@ptrCast(self), fileName_str, @ptrCast(size), @bitCast(mode), @bitCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#addFile)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QIconEngine `
    ///
    /// ` callback: *const fn (self: QtC.QIconEngine, fileName: [*:0]const u8, size: QtC.QSize, mode: qicon_enums.Mode, state: qicon_enums.State) callconv(.c) void `
    ///
    pub fn OnAddFile(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QIconEngine_OnAddFile(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAddFile` instead
    ///
    pub const QBaseAddFile = SuperAddFile;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#addFile)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QIconEngine `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` size: QtC.QSize `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn SuperAddFile(self: ?*anyopaque, fileName: []const u8, size: ?*anyopaque, mode: i32, state: i32) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QIconEngine_SuperAddFile(@ptrCast(self), fileName_str, @ptrCast(size), @bitCast(mode), @bitCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#key)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QIconEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Key(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QIconEngine_Key(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qiconengine.Key: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#key)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QIconEngine `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnKey(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QIconEngine_OnKey(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperKey` instead
    ///
    pub const QBaseKey = SuperKey;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#key)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QIconEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperKey(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QIconEngine_SuperKey(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qiconengine.Key: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QIconEngine `
    ///
    pub fn Clone(self: ?*anyopaque) QtC.QIconEngine {
        return qtc.QIconEngine_Clone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QIconEngine `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QIconEngine `
    ///
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QIconEngine) void {
        qtc.QIconEngine_OnClone(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClone` instead
    ///
    pub const QBaseClone = SuperClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QIconEngine `
    ///
    pub fn SuperClone(self: ?*anyopaque) QtC.QIconEngine {
        return qtc.QIconEngine_SuperClone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QIconEngine `
    ///
    /// ` in: QtC.QDataStream `
    ///
    pub fn Read(self: ?*anyopaque, in: ?*anyopaque) bool {
        return qtc.QIconEngine_Read(@ptrCast(self), @ptrCast(in));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#read)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QIconEngine `
    ///
    /// ` callback: *const fn (self: QtC.QIconEngine, in: QtC.QDataStream) callconv(.c) bool `
    ///
    pub fn OnRead(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QIconEngine_OnRead(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRead` instead
    ///
    pub const QBaseRead = SuperRead;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#read)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QIconEngine `
    ///
    /// ` in: QtC.QDataStream `
    ///
    pub fn SuperRead(self: ?*anyopaque, in: ?*anyopaque) bool {
        return qtc.QIconEngine_SuperRead(@ptrCast(self), @ptrCast(in));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QIconEngine `
    ///
    /// ` out: QtC.QDataStream `
    ///
    pub fn Write(self: ?*anyopaque, out: ?*anyopaque) bool {
        return qtc.QIconEngine_Write(@ptrCast(self), @ptrCast(out));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#write)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QIconEngine `
    ///
    /// ` callback: *const fn (self: QtC.QIconEngine, out: QtC.QDataStream) callconv(.c) bool `
    ///
    pub fn OnWrite(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QIconEngine_OnWrite(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperWrite` instead
    ///
    pub const QBaseWrite = SuperWrite;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#write)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QIconEngine `
    ///
    /// ` out: QtC.QDataStream `
    ///
    pub fn SuperWrite(self: ?*anyopaque, out: ?*anyopaque) bool {
        return qtc.QIconEngine_SuperWrite(@ptrCast(self), @ptrCast(out));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#availableSizes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QIconEngine `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AvailableSizes(self: ?*anyopaque, mode: i32, state: i32, allocator: std.mem.Allocator) []QtC.QSize {
        const _arr: qtc.libqt_list = qtc.QIconEngine_AvailableSizes(@ptrCast(self), @bitCast(mode), @bitCast(state));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QSize, _arr.len) catch @panic("qiconengine.AvailableSizes: Memory allocation failed");
        const _data: [*]QtC.QSize = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#availableSizes)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QIconEngine `
    ///
    /// ` callback: *const fn (self: QtC.QIconEngine, mode: qicon_enums.Mode, state: qicon_enums.State) callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QtC.QSize `
    ///
    pub fn OnAvailableSizes(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) qtc.libqt_list) void {
        qtc.QIconEngine_OnAvailableSizes(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAvailableSizes` instead
    ///
    pub const QBaseAvailableSizes = SuperAvailableSizes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#availableSizes)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QIconEngine `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperAvailableSizes(self: ?*anyopaque, mode: i32, state: i32, allocator: std.mem.Allocator) []QtC.QSize {
        const _arr: qtc.libqt_list = qtc.QIconEngine_SuperAvailableSizes(@ptrCast(self), @bitCast(mode), @bitCast(state));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QSize, _arr.len) catch @panic("qiconengine.AvailableSizes: Memory allocation failed");
        const _data: [*]QtC.QSize = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#iconName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QIconEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn IconName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QIconEngine_IconName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qiconengine.IconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#iconName)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QIconEngine `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnIconName(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QIconEngine_OnIconName(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIconName` instead
    ///
    pub const QBaseIconName = SuperIconName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#iconName)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QIconEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperIconName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QIconEngine_SuperIconName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qiconengine.IconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QIconEngine `
    ///
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QIconEngine_IsNull(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#isNull)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QIconEngine `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsNull(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QIconEngine_OnIsNull(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsNull` instead
    ///
    pub const QBaseIsNull = SuperIsNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#isNull)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QIconEngine `
    ///
    pub fn SuperIsNull(self: ?*anyopaque) bool {
        return qtc.QIconEngine_SuperIsNull(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#scaledPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QIconEngine `
    ///
    /// ` size: QtC.QSize `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    /// ` scale: f64 `
    ///
    pub fn ScaledPixmap(self: ?*anyopaque, size: ?*anyopaque, mode: i32, state: i32, scale: f64) QtC.QPixmap {
        return qtc.QIconEngine_ScaledPixmap(@ptrCast(self), @ptrCast(size), @bitCast(mode), @bitCast(state), @bitCast(scale));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#scaledPixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QIconEngine `
    ///
    /// ` callback: *const fn (self: QtC.QIconEngine, size: QtC.QSize, mode: qicon_enums.Mode, state: qicon_enums.State, scale: f64) callconv(.c) QtC.QPixmap `
    ///
    pub fn OnScaledPixmap(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, f64) callconv(.c) QtC.QPixmap) void {
        qtc.QIconEngine_OnScaledPixmap(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperScaledPixmap` instead
    ///
    pub const QBaseScaledPixmap = SuperScaledPixmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#scaledPixmap)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QIconEngine `
    ///
    /// ` size: QtC.QSize `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    /// ` scale: f64 `
    ///
    pub fn SuperScaledPixmap(self: ?*anyopaque, size: ?*anyopaque, mode: i32, state: i32, scale: f64) QtC.QPixmap {
        return qtc.QIconEngine_SuperScaledPixmap(@ptrCast(self), @ptrCast(size), @bitCast(mode), @bitCast(state), @bitCast(scale));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#virtual_hook)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QIconEngine `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn VirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.QIconEngine_VirtualHook(@ptrCast(self), @bitCast(id), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#virtual_hook)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QIconEngine `
    ///
    /// ` callback: *const fn (self: QtC.QIconEngine, id: i32, data: ?*anyopaque) callconv(.c) void `
    ///
    pub fn OnVirtualHook(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QIconEngine_OnVirtualHook(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperVirtualHook` instead
    ///
    pub const QBaseVirtualHook = SuperVirtualHook;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#virtual_hook)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QIconEngine `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn SuperVirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.QIconEngine_SuperVirtualHook(@ptrCast(self), @bitCast(id), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#dtor.QIconEngine)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QIconEngine `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QIconEngine_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html)
pub const qiconengine__scaledpixmapargument = struct {
    /// New constructs a new QIconEngine::ScaledPixmapArgument object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QIconEngine__ScaledPixmapArgument `
    ///
    pub fn New(param1: ?*anyopaque) QtC.QIconEngine__ScaledPixmapArgument {
        return qtc.QIconEngine__ScaledPixmapArgument_new(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html#size-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QIconEngine__ScaledPixmapArgument `
    ///
    pub fn Size(self: ?*anyopaque) QtC.QSize {
        return qtc.QIconEngine__ScaledPixmapArgument_Size(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html#size-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QIconEngine__ScaledPixmapArgument `
    ///
    /// ` size: QtC.QSize `
    ///
    pub fn SetSize(self: ?*anyopaque, size: QtC.QSize) void {
        qtc.QIconEngine__ScaledPixmapArgument_SetSize(@ptrCast(self), @ptrCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html#mode-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QIconEngine__ScaledPixmapArgument `
    ///
    /// ## Returns:
    ///
    /// ` qicon_enums.Mode `
    ///
    pub fn Mode(self: ?*anyopaque) i32 {
        return qtc.QIconEngine__ScaledPixmapArgument_Mode(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html#mode-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QIconEngine__ScaledPixmapArgument `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    pub fn SetMode(self: ?*anyopaque, mode: i32) void {
        qtc.QIconEngine__ScaledPixmapArgument_SetMode(@ptrCast(self), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QIconEngine__ScaledPixmapArgument `
    ///
    /// ## Returns:
    ///
    /// ` qicon_enums.State `
    ///
    pub fn State(self: ?*anyopaque) i32 {
        return qtc.QIconEngine__ScaledPixmapArgument_State(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QIconEngine__ScaledPixmapArgument `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn SetState(self: ?*anyopaque, state: i32) void {
        qtc.QIconEngine__ScaledPixmapArgument_SetState(@ptrCast(self), @bitCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html#scale-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QIconEngine__ScaledPixmapArgument `
    ///
    pub fn Scale(self: ?*anyopaque) f64 {
        return qtc.QIconEngine__ScaledPixmapArgument_Scale(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html#scale-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QIconEngine__ScaledPixmapArgument `
    ///
    /// ` scale: f64 `
    ///
    pub fn SetScale(self: ?*anyopaque, scale: f64) void {
        qtc.QIconEngine__ScaledPixmapArgument_SetScale(@ptrCast(self), @bitCast(scale));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html#pixmap-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QIconEngine__ScaledPixmapArgument `
    ///
    pub fn Pixmap(self: ?*anyopaque) QtC.QPixmap {
        return qtc.QIconEngine__ScaledPixmapArgument_Pixmap(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html#pixmap-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QIconEngine__ScaledPixmapArgument `
    ///
    /// ` pixmap: QtC.QPixmap `
    ///
    pub fn SetPixmap(self: ?*anyopaque, pixmap: QtC.QPixmap) void {
        qtc.QIconEngine__ScaledPixmapArgument_SetPixmap(@ptrCast(self), @ptrCast(pixmap));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QIconEngine__ScaledPixmapArgument `
    ///
    /// ` param1: QtC.QIconEngine__ScaledPixmapArgument `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QIconEngine__ScaledPixmapArgument_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QIconEngine__ScaledPixmapArgument `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QIconEngine__ScaledPixmapArgument_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#public-types)
pub const enums = struct {
    pub const IconEngineHook = enum(i32) {
        pub const IsNullHook: i32 = 3;
        pub const ScaledPixmapHook: i32 = 4;
    };
};
