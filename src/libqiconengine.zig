const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QDataStream = @import("libqt6").QDataStream;
const QPainter = @import("libqt6").QPainter;
const QPixmap = @import("libqt6").QPixmap;
const QRect = @import("libqt6").QRect;
const QSize = @import("libqt6").QSize;
const qicon_enums = @import("libqicon.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html)
pub const QIconEngine = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QIconEngine,

    pub const _is_QIconEngine = {};

    /// New constructs a new QIconEngine object.
    ///
    pub fn New() QIconEngine {
        return .{ .ptr = qtc.QIconEngine_new() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#paint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconEngine `
    ///
    /// ` painter: QPainter `
    ///
    /// ` rect: QRect `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn Paint(self: QIconEngine, painter: anytype, rect: anytype, mode: i32, state: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QIconEngine_Paint(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr), @bitCast(mode), @bitCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#paint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QIconEngine `
    ///
    /// ` callback: *const fn (self: QIconEngine, painter: QPainter, rect: QRect, mode: qicon_enums.Mode, state: qicon_enums.State) callconv(.c) void `
    ///
    pub fn OnPaint(self: QIconEngine, callback: *const fn (QIconEngine, QPainter, QRect, i32, i32) callconv(.c) void) void {
        qtc.QIconEngine_OnPaint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QIconEngine `
    ///
    /// ` painter: QPainter `
    ///
    /// ` rect: QRect `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn SuperPaint(self: QIconEngine, painter: anytype, rect: anytype, mode: i32, state: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QIconEngine_SuperPaint(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr), @bitCast(mode), @bitCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#actualSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconEngine `
    ///
    /// ` size: QSize `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn ActualSize(self: QIconEngine, size: anytype, mode: i32, state: i32) QSize {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.QIconEngine_ActualSize(@ptrCast(self.ptr), @ptrCast(size.ptr), @bitCast(mode), @bitCast(state)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#actualSize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QIconEngine `
    ///
    /// ` callback: *const fn (self: QIconEngine, size: QSize, mode: qicon_enums.Mode, state: qicon_enums.State) callconv(.c) QSize `
    ///
    pub fn OnActualSize(self: QIconEngine, callback: *const fn (QIconEngine, QSize, i32, i32) callconv(.c) QSize) void {
        qtc.QIconEngine_OnActualSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QIconEngine `
    ///
    /// ` size: QSize `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn SuperActualSize(self: QIconEngine, size: anytype, mode: i32, state: i32) QSize {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.QIconEngine_SuperActualSize(@ptrCast(self.ptr), @ptrCast(size.ptr), @bitCast(mode), @bitCast(state)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#pixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconEngine `
    ///
    /// ` size: QSize `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn Pixmap(self: QIconEngine, size: anytype, mode: i32, state: i32) QPixmap {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.QIconEngine_Pixmap(@ptrCast(self.ptr), @ptrCast(size.ptr), @bitCast(mode), @bitCast(state)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#pixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QIconEngine `
    ///
    /// ` callback: *const fn (self: QIconEngine, size: QSize, mode: qicon_enums.Mode, state: qicon_enums.State) callconv(.c) QPixmap `
    ///
    pub fn OnPixmap(self: QIconEngine, callback: *const fn (QIconEngine, QSize, i32, i32) callconv(.c) QPixmap) void {
        qtc.QIconEngine_OnPixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QIconEngine `
    ///
    /// ` size: QSize `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn SuperPixmap(self: QIconEngine, size: anytype, mode: i32, state: i32) QPixmap {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.QIconEngine_SuperPixmap(@ptrCast(self.ptr), @ptrCast(size.ptr), @bitCast(mode), @bitCast(state)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#addPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconEngine `
    ///
    /// ` pixmap: QPixmap `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn AddPixmap(self: QIconEngine, pixmap: anytype, mode: i32, state: i32) void {
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        qtc.QIconEngine_AddPixmap(@ptrCast(self.ptr), @ptrCast(pixmap.ptr), @bitCast(mode), @bitCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#addPixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QIconEngine `
    ///
    /// ` callback: *const fn (self: QIconEngine, pixmap: QPixmap, mode: qicon_enums.Mode, state: qicon_enums.State) callconv(.c) void `
    ///
    pub fn OnAddPixmap(self: QIconEngine, callback: *const fn (QIconEngine, QPixmap, i32, i32) callconv(.c) void) void {
        qtc.QIconEngine_OnAddPixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QIconEngine `
    ///
    /// ` pixmap: QPixmap `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn SuperAddPixmap(self: QIconEngine, pixmap: anytype, mode: i32, state: i32) void {
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        qtc.QIconEngine_SuperAddPixmap(@ptrCast(self.ptr), @ptrCast(pixmap.ptr), @bitCast(mode), @bitCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#addFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconEngine `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` size: QSize `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn AddFile(self: QIconEngine, fileName: []const u8, size: anytype, mode: i32, state: i32) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        comptime _ = @TypeOf(size)._is_QSize;
        qtc.QIconEngine_AddFile(@ptrCast(self.ptr), fileName_str, @ptrCast(size.ptr), @bitCast(mode), @bitCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#addFile)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QIconEngine `
    ///
    /// ` callback: *const fn (self: QIconEngine, fileName: [*:0]const u8, size: QSize, mode: qicon_enums.Mode, state: qicon_enums.State) callconv(.c) void `
    ///
    pub fn OnAddFile(self: QIconEngine, callback: *const fn (QIconEngine, [*:0]const u8, QSize, i32, i32) callconv(.c) void) void {
        qtc.QIconEngine_OnAddFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QIconEngine `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` size: QSize `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn SuperAddFile(self: QIconEngine, fileName: []const u8, size: anytype, mode: i32, state: i32) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        comptime _ = @TypeOf(size)._is_QSize;
        qtc.QIconEngine_SuperAddFile(@ptrCast(self.ptr), fileName_str, @ptrCast(size.ptr), @bitCast(mode), @bitCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#key)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Key(self: QIconEngine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QIconEngine_Key(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qiconengine.Key: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#key)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QIconEngine `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnKey(self: QIconEngine, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QIconEngine_OnKey(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QIconEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperKey(self: QIconEngine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QIconEngine_SuperKey(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qiconengine.Key: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconEngine `
    ///
    pub fn Clone(self: QIconEngine) QIconEngine {
        return .{ .ptr = qtc.QIconEngine_Clone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QIconEngine `
    ///
    /// ` callback: *const fn () callconv(.c) QIconEngine `
    ///
    pub fn OnClone(self: QIconEngine, callback: *const fn () callconv(.c) QIconEngine) void {
        qtc.QIconEngine_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QIconEngine `
    ///
    pub fn SuperClone(self: QIconEngine) QIconEngine {
        return .{ .ptr = qtc.QIconEngine_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconEngine `
    ///
    /// ` in: QDataStream `
    ///
    pub fn Read(self: QIconEngine, in: anytype) bool {
        comptime _ = @TypeOf(in)._is_QDataStream;
        return qtc.QIconEngine_Read(@ptrCast(self.ptr), @ptrCast(in.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#read)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QIconEngine `
    ///
    /// ` callback: *const fn (self: QIconEngine, in: QDataStream) callconv(.c) bool `
    ///
    pub fn OnRead(self: QIconEngine, callback: *const fn (QIconEngine, QDataStream) callconv(.c) bool) void {
        qtc.QIconEngine_OnRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QIconEngine `
    ///
    /// ` in: QDataStream `
    ///
    pub fn SuperRead(self: QIconEngine, in: anytype) bool {
        comptime _ = @TypeOf(in)._is_QDataStream;
        return qtc.QIconEngine_SuperRead(@ptrCast(self.ptr), @ptrCast(in.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconEngine `
    ///
    /// ` out: QDataStream `
    ///
    pub fn Write(self: QIconEngine, out: anytype) bool {
        comptime _ = @TypeOf(out)._is_QDataStream;
        return qtc.QIconEngine_Write(@ptrCast(self.ptr), @ptrCast(out.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#write)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QIconEngine `
    ///
    /// ` callback: *const fn (self: QIconEngine, out: QDataStream) callconv(.c) bool `
    ///
    pub fn OnWrite(self: QIconEngine, callback: *const fn (QIconEngine, QDataStream) callconv(.c) bool) void {
        qtc.QIconEngine_OnWrite(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QIconEngine `
    ///
    /// ` out: QDataStream `
    ///
    pub fn SuperWrite(self: QIconEngine, out: anytype) bool {
        comptime _ = @TypeOf(out)._is_QDataStream;
        return qtc.QIconEngine_SuperWrite(@ptrCast(self.ptr), @ptrCast(out.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#availableSizes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn AvailableSizes(self: QIconEngine, allocator: std.mem.Allocator, mode: i32, state: i32) []QSize {
        const _arr: qtc.libqt_list = qtc.QIconEngine_AvailableSizes(@ptrCast(self.ptr), @bitCast(mode), @bitCast(state));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSize, _arr.len) catch @panic("qiconengine.AvailableSizes: Memory allocation failed");
        const _data: [*]QtC.QSize = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#availableSizes)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QIconEngine `
    ///
    /// ` callback: *const fn (self: QIconEngine, mode: qicon_enums.Mode, state: qicon_enums.State) callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QSize `
    ///
    pub fn OnAvailableSizes(self: QIconEngine, callback: *const fn (QIconEngine, i32, i32) callconv(.c) qtc.libqt_list) void {
        qtc.QIconEngine_OnAvailableSizes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QIconEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn SuperAvailableSizes(self: QIconEngine, allocator: std.mem.Allocator, mode: i32, state: i32) []QSize {
        const _arr: qtc.libqt_list = qtc.QIconEngine_SuperAvailableSizes(@ptrCast(self.ptr), @bitCast(mode), @bitCast(state));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSize, _arr.len) catch @panic("qiconengine.AvailableSizes: Memory allocation failed");
        const _data: [*]QtC.QSize = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#iconName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn IconName(self: QIconEngine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QIconEngine_IconName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qiconengine.IconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#iconName)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QIconEngine `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnIconName(self: QIconEngine, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QIconEngine_OnIconName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QIconEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperIconName(self: QIconEngine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QIconEngine_SuperIconName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qiconengine.IconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconEngine `
    ///
    pub fn IsNull(self: QIconEngine) bool {
        return qtc.QIconEngine_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#isNull)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QIconEngine `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsNull(self: QIconEngine, callback: *const fn () callconv(.c) bool) void {
        qtc.QIconEngine_OnIsNull(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QIconEngine `
    ///
    pub fn SuperIsNull(self: QIconEngine) bool {
        return qtc.QIconEngine_SuperIsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#scaledPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconEngine `
    ///
    /// ` size: QSize `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    /// ` scale: f64 `
    ///
    pub fn ScaledPixmap(self: QIconEngine, size: anytype, mode: i32, state: i32, scale: f64) QPixmap {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.QIconEngine_ScaledPixmap(@ptrCast(self.ptr), @ptrCast(size.ptr), @bitCast(mode), @bitCast(state), @bitCast(scale)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#scaledPixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QIconEngine `
    ///
    /// ` callback: *const fn (self: QIconEngine, size: QSize, mode: qicon_enums.Mode, state: qicon_enums.State, scale: f64) callconv(.c) QPixmap `
    ///
    pub fn OnScaledPixmap(self: QIconEngine, callback: *const fn (QIconEngine, QSize, i32, i32, f64) callconv(.c) QPixmap) void {
        qtc.QIconEngine_OnScaledPixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QIconEngine `
    ///
    /// ` size: QSize `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    /// ` scale: f64 `
    ///
    pub fn SuperScaledPixmap(self: QIconEngine, size: anytype, mode: i32, state: i32, scale: f64) QPixmap {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.QIconEngine_SuperScaledPixmap(@ptrCast(self.ptr), @ptrCast(size.ptr), @bitCast(mode), @bitCast(state), @bitCast(scale)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#virtual_hook)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconEngine `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn VirtualHook(self: QIconEngine, id: i32, data: ?*anyopaque) void {
        qtc.QIconEngine_VirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#virtual_hook)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QIconEngine `
    ///
    /// ` callback: *const fn (self: QIconEngine, id: i32, data: ?*anyopaque) callconv(.c) void `
    ///
    pub fn OnVirtualHook(self: QIconEngine, callback: *const fn (QIconEngine, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QIconEngine_OnVirtualHook(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QIconEngine `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn SuperVirtualHook(self: QIconEngine, id: i32, data: ?*anyopaque) void {
        qtc.QIconEngine_SuperVirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
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
    /// ` self: QIconEngine `
    ///
    pub fn Delete(self: QIconEngine) void {
        qtc.QIconEngine_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html)
pub const QIconEngine__ScaledPixmapArgument = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QIconEngine__ScaledPixmapArgument,

    pub const _is_QIconEngine__ScaledPixmapArgument = {};

    /// New constructs a new QIconEngine::ScaledPixmapArgument object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QIconEngine__ScaledPixmapArgument `
    ///
    pub fn New(param1: anytype) QIconEngine__ScaledPixmapArgument {
        comptime _ = @TypeOf(param1)._is_QIconEngine__ScaledPixmapArgument;
        return .{ .ptr = qtc.QIconEngine__ScaledPixmapArgument_new(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html#size-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconEngine__ScaledPixmapArgument `
    ///
    pub fn Size(self: QIconEngine__ScaledPixmapArgument) QSize {
        return .{ .ptr = qtc.QIconEngine__ScaledPixmapArgument_Size(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html#size-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconEngine__ScaledPixmapArgument `
    ///
    /// ` size: QSize `
    ///
    pub fn SetSize(self: QIconEngine__ScaledPixmapArgument, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSize;
        qtc.QIconEngine__ScaledPixmapArgument_SetSize(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html#mode-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconEngine__ScaledPixmapArgument `
    ///
    /// ## Returns:
    ///
    /// ` qicon_enums.Mode `
    ///
    pub fn Mode(self: QIconEngine__ScaledPixmapArgument) i32 {
        return qtc.QIconEngine__ScaledPixmapArgument_Mode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html#mode-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconEngine__ScaledPixmapArgument `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    pub fn SetMode(self: QIconEngine__ScaledPixmapArgument, mode: i32) void {
        qtc.QIconEngine__ScaledPixmapArgument_SetMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconEngine__ScaledPixmapArgument `
    ///
    /// ## Returns:
    ///
    /// ` qicon_enums.State `
    ///
    pub fn State(self: QIconEngine__ScaledPixmapArgument) i32 {
        return qtc.QIconEngine__ScaledPixmapArgument_State(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconEngine__ScaledPixmapArgument `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn SetState(self: QIconEngine__ScaledPixmapArgument, state: i32) void {
        qtc.QIconEngine__ScaledPixmapArgument_SetState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html#scale-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconEngine__ScaledPixmapArgument `
    ///
    pub fn Scale(self: QIconEngine__ScaledPixmapArgument) f64 {
        return qtc.QIconEngine__ScaledPixmapArgument_Scale(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html#scale-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconEngine__ScaledPixmapArgument `
    ///
    /// ` scale: f64 `
    ///
    pub fn SetScale(self: QIconEngine__ScaledPixmapArgument, scale: f64) void {
        qtc.QIconEngine__ScaledPixmapArgument_SetScale(@ptrCast(self.ptr), @bitCast(scale));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html#pixmap-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconEngine__ScaledPixmapArgument `
    ///
    pub fn Pixmap(self: QIconEngine__ScaledPixmapArgument) QPixmap {
        return .{ .ptr = qtc.QIconEngine__ScaledPixmapArgument_Pixmap(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html#pixmap-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconEngine__ScaledPixmapArgument `
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn SetPixmap(self: QIconEngine__ScaledPixmapArgument, pixmap: anytype) void {
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        qtc.QIconEngine__ScaledPixmapArgument_SetPixmap(@ptrCast(self.ptr), @ptrCast(pixmap.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconEngine__ScaledPixmapArgument `
    ///
    /// ` param1: QIconEngine__ScaledPixmapArgument `
    ///
    pub fn OperatorAssign(self: QIconEngine__ScaledPixmapArgument, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QIconEngine__ScaledPixmapArgument;
        qtc.QIconEngine__ScaledPixmapArgument_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QIconEngine__ScaledPixmapArgument `
    ///
    pub fn Delete(self: QIconEngine__ScaledPixmapArgument) void {
        qtc.QIconEngine__ScaledPixmapArgument_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#public-types)
pub const enums = struct {
    pub const IconEngineHook = enum(i32) {
        pub const IsNullHook: i32 = 3;
        pub const ScaledPixmapHook: i32 = 4;
    };
};
