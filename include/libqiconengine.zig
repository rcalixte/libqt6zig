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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QIconEngine object in C++ memory
    ///
    pub fn new() QIconEngine {
        return .{ .ptr = qtc.QIconEngine_new() };
    }

    /// ### DEPRECATED: Use `paint` instead
    ///
    pub const Paint = paint;

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
    pub fn paint(self: QIconEngine, painter: anytype, rect: anytype, mode: i32, state: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QIconEngine_Paint(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr), @bitCast(mode), @bitCast(state));
    }

    /// ### DEPRECATED: Use `onPaint` instead
    ///
    pub const OnPaint = onPaint;

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
    pub fn onPaint(self: QIconEngine, callback: *const fn (QIconEngine, QPainter, QRect, i32, i32) callconv(.c) void) void {
        qtc.QIconEngine_OnPaint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPaint` instead
    ///
    pub const SuperPaint = superPaint;

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
    pub fn superPaint(self: QIconEngine, painter: anytype, rect: anytype, mode: i32, state: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QIconEngine_SuperPaint(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr), @bitCast(mode), @bitCast(state));
    }

    /// ### DEPRECATED: Use `actualSize` instead
    ///
    pub const ActualSize = actualSize;

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
    pub fn actualSize(self: QIconEngine, size: anytype, mode: i32, state: i32) QSize {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.QIconEngine_ActualSize(@ptrCast(self.ptr), @ptrCast(size.ptr), @bitCast(mode), @bitCast(state)) };
    }

    /// ### DEPRECATED: Use `onActualSize` instead
    ///
    pub const OnActualSize = onActualSize;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onActualSize(self: QIconEngine, callback: *const fn (QIconEngine, QSize, i32, i32) callconv(.c) QSize) void {
        qtc.QIconEngine_OnActualSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superActualSize` instead
    ///
    pub const SuperActualSize = superActualSize;

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
    pub fn superActualSize(self: QIconEngine, size: anytype, mode: i32, state: i32) QSize {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.QIconEngine_SuperActualSize(@ptrCast(self.ptr), @ptrCast(size.ptr), @bitCast(mode), @bitCast(state)) };
    }

    /// ### DEPRECATED: Use `pixmap` instead
    ///
    pub const Pixmap = pixmap;

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
    pub fn pixmap(self: QIconEngine, size: anytype, mode: i32, state: i32) QPixmap {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.QIconEngine_Pixmap(@ptrCast(self.ptr), @ptrCast(size.ptr), @bitCast(mode), @bitCast(state)) };
    }

    /// ### DEPRECATED: Use `onPixmap` instead
    ///
    pub const OnPixmap = onPixmap;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onPixmap(self: QIconEngine, callback: *const fn (QIconEngine, QSize, i32, i32) callconv(.c) QPixmap) void {
        qtc.QIconEngine_OnPixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPixmap` instead
    ///
    pub const SuperPixmap = superPixmap;

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
    pub fn superPixmap(self: QIconEngine, size: anytype, mode: i32, state: i32) QPixmap {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.QIconEngine_SuperPixmap(@ptrCast(self.ptr), @ptrCast(size.ptr), @bitCast(mode), @bitCast(state)) };
    }

    /// ### DEPRECATED: Use `addPixmap` instead
    ///
    pub const AddPixmap = addPixmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#addPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconEngine `
    ///
    /// ` _pixmap: QPixmap `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn addPixmap(self: QIconEngine, _pixmap: anytype, mode: i32, state: i32) void {
        comptime _ = @TypeOf(_pixmap)._is_QPixmap;
        qtc.QIconEngine_AddPixmap(@ptrCast(self.ptr), @ptrCast(_pixmap.ptr), @bitCast(mode), @bitCast(state));
    }

    /// ### DEPRECATED: Use `onAddPixmap` instead
    ///
    pub const OnAddPixmap = onAddPixmap;

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
    pub fn onAddPixmap(self: QIconEngine, callback: *const fn (QIconEngine, QPixmap, i32, i32) callconv(.c) void) void {
        qtc.QIconEngine_OnAddPixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superAddPixmap` instead
    ///
    pub const SuperAddPixmap = superAddPixmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#addPixmap)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconEngine `
    ///
    /// ` _pixmap: QPixmap `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn superAddPixmap(self: QIconEngine, _pixmap: anytype, mode: i32, state: i32) void {
        comptime _ = @TypeOf(_pixmap)._is_QPixmap;
        qtc.QIconEngine_SuperAddPixmap(@ptrCast(self.ptr), @ptrCast(_pixmap.ptr), @bitCast(mode), @bitCast(state));
    }

    /// ### DEPRECATED: Use `addFile` instead
    ///
    pub const AddFile = addFile;

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
    pub fn addFile(self: QIconEngine, fileName: []const u8, size: anytype, mode: i32, state: i32) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        comptime _ = @TypeOf(size)._is_QSize;
        qtc.QIconEngine_AddFile(@ptrCast(self.ptr), fileName_str, @ptrCast(size.ptr), @bitCast(mode), @bitCast(state));
    }

    /// ### DEPRECATED: Use `onAddFile` instead
    ///
    pub const OnAddFile = onAddFile;

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
    pub fn onAddFile(self: QIconEngine, callback: *const fn (QIconEngine, [*:0]const u8, QSize, i32, i32) callconv(.c) void) void {
        qtc.QIconEngine_OnAddFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superAddFile` instead
    ///
    pub const SuperAddFile = superAddFile;

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
    pub fn superAddFile(self: QIconEngine, fileName: []const u8, size: anytype, mode: i32, state: i32) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        comptime _ = @TypeOf(size)._is_QSize;
        qtc.QIconEngine_SuperAddFile(@ptrCast(self.ptr), fileName_str, @ptrCast(size.ptr), @bitCast(mode), @bitCast(state));
    }

    /// ### DEPRECATED: Use `key` instead
    ///
    pub const Key = key;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#key)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn key(self: QIconEngine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QIconEngine_Key(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QIconEngine.key: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onKey` instead
    ///
    pub const OnKey = onKey;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#key)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QIconEngine `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onKey(self: QIconEngine, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QIconEngine_OnKey(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superKey` instead
    ///
    pub const SuperKey = superKey;

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
    pub fn superKey(self: QIconEngine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QIconEngine_SuperKey(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QIconEngine.key: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `clone` instead
    ///
    pub const Clone = clone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconEngine `
    ///
    pub fn clone(self: QIconEngine) QIconEngine {
        return .{ .ptr = qtc.QIconEngine_Clone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onClone` instead
    ///
    pub const OnClone = onClone;

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
    pub fn onClone(self: QIconEngine, callback: *const fn () callconv(.c) QIconEngine) void {
        qtc.QIconEngine_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClone` instead
    ///
    pub const SuperClone = superClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconEngine `
    ///
    pub fn superClone(self: QIconEngine) QIconEngine {
        return .{ .ptr = qtc.QIconEngine_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `read` instead
    ///
    pub const Read = read;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconEngine `
    ///
    /// ` in: QDataStream `
    ///
    pub fn read(self: QIconEngine, in: anytype) bool {
        comptime _ = @TypeOf(in)._is_QDataStream;
        return qtc.QIconEngine_Read(@ptrCast(self.ptr), @ptrCast(in.ptr));
    }

    /// ### DEPRECATED: Use `onRead` instead
    ///
    pub const OnRead = onRead;

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
    pub fn onRead(self: QIconEngine, callback: *const fn (QIconEngine, QDataStream) callconv(.c) bool) void {
        qtc.QIconEngine_OnRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRead` instead
    ///
    pub const SuperRead = superRead;

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
    pub fn superRead(self: QIconEngine, in: anytype) bool {
        comptime _ = @TypeOf(in)._is_QDataStream;
        return qtc.QIconEngine_SuperRead(@ptrCast(self.ptr), @ptrCast(in.ptr));
    }

    /// ### DEPRECATED: Use `write` instead
    ///
    pub const Write = write;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconEngine `
    ///
    /// ` out: QDataStream `
    ///
    pub fn write(self: QIconEngine, out: anytype) bool {
        comptime _ = @TypeOf(out)._is_QDataStream;
        return qtc.QIconEngine_Write(@ptrCast(self.ptr), @ptrCast(out.ptr));
    }

    /// ### DEPRECATED: Use `onWrite` instead
    ///
    pub const OnWrite = onWrite;

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
    pub fn onWrite(self: QIconEngine, callback: *const fn (QIconEngine, QDataStream) callconv(.c) bool) void {
        qtc.QIconEngine_OnWrite(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superWrite` instead
    ///
    pub const SuperWrite = superWrite;

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
    pub fn superWrite(self: QIconEngine, out: anytype) bool {
        comptime _ = @TypeOf(out)._is_QDataStream;
        return qtc.QIconEngine_SuperWrite(@ptrCast(self.ptr), @ptrCast(out.ptr));
    }

    /// ### DEPRECATED: Use `availableSizes` instead
    ///
    pub const AvailableSizes = availableSizes;

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
    pub fn availableSizes(self: QIconEngine, allocator: std.mem.Allocator, mode: i32, state: i32) []QSize {
        const _arr: qtc.libqt_list = qtc.QIconEngine_AvailableSizes(@ptrCast(self.ptr), @bitCast(mode), @bitCast(state));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSize, _arr.len) catch @panic("QIconEngine.availableSizes: Memory allocation failed");
        const _data_val: [*]QtC.QSize = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `onAvailableSizes` instead
    ///
    pub const OnAvailableSizes = onAvailableSizes;

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
    pub fn onAvailableSizes(self: QIconEngine, callback: *const fn (QIconEngine, i32, i32) callconv(.c) qtc.libqt_list) void {
        qtc.QIconEngine_OnAvailableSizes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superAvailableSizes` instead
    ///
    pub const SuperAvailableSizes = superAvailableSizes;

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
    pub fn superAvailableSizes(self: QIconEngine, allocator: std.mem.Allocator, mode: i32, state: i32) []QSize {
        const _arr: qtc.libqt_list = qtc.QIconEngine_SuperAvailableSizes(@ptrCast(self.ptr), @bitCast(mode), @bitCast(state));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSize, _arr.len) catch @panic("QIconEngine.availableSizes: Memory allocation failed");
        const _data_val: [*]QtC.QSize = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `iconName` instead
    ///
    pub const IconName = iconName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#iconName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn iconName(self: QIconEngine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QIconEngine_IconName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QIconEngine.iconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onIconName` instead
    ///
    pub const OnIconName = onIconName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#iconName)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QIconEngine `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onIconName(self: QIconEngine, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QIconEngine_OnIconName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIconName` instead
    ///
    pub const SuperIconName = superIconName;

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
    pub fn superIconName(self: QIconEngine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QIconEngine_SuperIconName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QIconEngine.iconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconEngine `
    ///
    pub fn isNull(self: QIconEngine) bool {
        return qtc.QIconEngine_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsNull` instead
    ///
    pub const OnIsNull = onIsNull;

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
    pub fn onIsNull(self: QIconEngine, callback: *const fn () callconv(.c) bool) void {
        qtc.QIconEngine_OnIsNull(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsNull` instead
    ///
    pub const SuperIsNull = superIsNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#isNull)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconEngine `
    ///
    pub fn superIsNull(self: QIconEngine) bool {
        return qtc.QIconEngine_SuperIsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `scaledPixmap` instead
    ///
    pub const ScaledPixmap = scaledPixmap;

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
    pub fn scaledPixmap(self: QIconEngine, size: anytype, mode: i32, state: i32, scale: f64) QPixmap {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.QIconEngine_ScaledPixmap(@ptrCast(self.ptr), @ptrCast(size.ptr), @bitCast(mode), @bitCast(state), @bitCast(scale)) };
    }

    /// ### DEPRECATED: Use `onScaledPixmap` instead
    ///
    pub const OnScaledPixmap = onScaledPixmap;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onScaledPixmap(self: QIconEngine, callback: *const fn (QIconEngine, QSize, i32, i32, f64) callconv(.c) QPixmap) void {
        qtc.QIconEngine_OnScaledPixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superScaledPixmap` instead
    ///
    pub const SuperScaledPixmap = superScaledPixmap;

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
    pub fn superScaledPixmap(self: QIconEngine, size: anytype, mode: i32, state: i32, scale: f64) QPixmap {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.QIconEngine_SuperScaledPixmap(@ptrCast(self.ptr), @ptrCast(size.ptr), @bitCast(mode), @bitCast(state), @bitCast(scale)) };
    }

    /// ### DEPRECATED: Use `virtualHook` instead
    ///
    pub const VirtualHook = virtualHook;

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
    pub fn virtualHook(self: QIconEngine, id: i32, data: ?*anyopaque) void {
        qtc.QIconEngine_VirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `onVirtualHook` instead
    ///
    pub const OnVirtualHook = onVirtualHook;

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
    pub fn onVirtualHook(self: QIconEngine, callback: *const fn (QIconEngine, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QIconEngine_OnVirtualHook(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superVirtualHook` instead
    ///
    pub const SuperVirtualHook = superVirtualHook;

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
    pub fn superVirtualHook(self: QIconEngine, id: i32, data: ?*anyopaque) void {
        qtc.QIconEngine_SuperVirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#dtor.QIconEngine)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QIconEngine `
    ///
    pub fn delete(self: QIconEngine) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QIconEngine::ScaledPixmapArgument object in C++ memory
    ///
    pub fn new() QIconEngine__ScaledPixmapArgument {
        return .{ .ptr = qtc.QIconEngine__ScaledPixmapArgument_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QIconEngine::ScaledPixmapArgument object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QIconEngine__ScaledPixmapArgument `
    ///
    pub fn new2(param1: anytype) QIconEngine__ScaledPixmapArgument {
        comptime _ = @TypeOf(param1)._is_QIconEngine__ScaledPixmapArgument;
        return .{ .ptr = qtc.QIconEngine__ScaledPixmapArgument_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html#size-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconEngine__ScaledPixmapArgument `
    ///
    pub fn size(self: QIconEngine__ScaledPixmapArgument) QSize {
        return .{ .ptr = qtc.QIconEngine__ScaledPixmapArgument_Size(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSize` instead
    ///
    pub const SetSize = setSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html#size-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconEngine__ScaledPixmapArgument `
    ///
    /// ` _size: QSize `
    ///
    pub fn setSize(self: QIconEngine__ScaledPixmapArgument, _size: anytype) void {
        comptime _ = @TypeOf(_size)._is_QSize;
        qtc.QIconEngine__ScaledPixmapArgument_SetSize(@ptrCast(self.ptr), @ptrCast(_size.ptr));
    }

    /// ### DEPRECATED: Use `mode` instead
    ///
    pub const Mode = mode;

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
    pub fn mode(self: QIconEngine__ScaledPixmapArgument) i32 {
        return qtc.QIconEngine__ScaledPixmapArgument_Mode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMode` instead
    ///
    pub const SetMode = setMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html#mode-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconEngine__ScaledPixmapArgument `
    ///
    /// ` _mode: qicon_enums.Mode `
    ///
    pub fn setMode(self: QIconEngine__ScaledPixmapArgument, _mode: i32) void {
        qtc.QIconEngine__ScaledPixmapArgument_SetMode(@ptrCast(self.ptr), @bitCast(_mode));
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

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
    pub fn state(self: QIconEngine__ScaledPixmapArgument) i32 {
        return qtc.QIconEngine__ScaledPixmapArgument_State(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setState` instead
    ///
    pub const SetState = setState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html#state-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconEngine__ScaledPixmapArgument `
    ///
    /// ` _state: qicon_enums.State `
    ///
    pub fn setState(self: QIconEngine__ScaledPixmapArgument, _state: i32) void {
        qtc.QIconEngine__ScaledPixmapArgument_SetState(@ptrCast(self.ptr), @bitCast(_state));
    }

    /// ### DEPRECATED: Use `scale` instead
    ///
    pub const Scale = scale;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html#scale-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconEngine__ScaledPixmapArgument `
    ///
    pub fn scale(self: QIconEngine__ScaledPixmapArgument) f64 {
        return qtc.QIconEngine__ScaledPixmapArgument_Scale(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setScale` instead
    ///
    pub const SetScale = setScale;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html#scale-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconEngine__ScaledPixmapArgument `
    ///
    /// ` _scale: f64 `
    ///
    pub fn setScale(self: QIconEngine__ScaledPixmapArgument, _scale: f64) void {
        qtc.QIconEngine__ScaledPixmapArgument_SetScale(@ptrCast(self.ptr), @bitCast(_scale));
    }

    /// ### DEPRECATED: Use `pixmap` instead
    ///
    pub const Pixmap = pixmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html#pixmap-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconEngine__ScaledPixmapArgument `
    ///
    pub fn pixmap(self: QIconEngine__ScaledPixmapArgument) QPixmap {
        return .{ .ptr = qtc.QIconEngine__ScaledPixmapArgument_Pixmap(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPixmap` instead
    ///
    pub const SetPixmap = setPixmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html#pixmap-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconEngine__ScaledPixmapArgument `
    ///
    /// ` _pixmap: QPixmap `
    ///
    pub fn setPixmap(self: QIconEngine__ScaledPixmapArgument, _pixmap: anytype) void {
        comptime _ = @TypeOf(_pixmap)._is_QPixmap;
        qtc.QIconEngine__ScaledPixmapArgument_SetPixmap(@ptrCast(self.ptr), @ptrCast(_pixmap.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QIconEngine__ScaledPixmapArgument `
    ///
    /// ` param1: QIconEngine__ScaledPixmapArgument `
    ///
    pub fn operatorAssign(self: QIconEngine__ScaledPixmapArgument, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QIconEngine__ScaledPixmapArgument;
        qtc.QIconEngine__ScaledPixmapArgument_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QIconEngine__ScaledPixmapArgument `
    ///
    pub fn delete(self: QIconEngine__ScaledPixmapArgument) void {
        qtc.QIconEngine__ScaledPixmapArgument_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#public-types)
pub const enums = struct {
    pub const IconEngineHook = enum {
        pub const IsNullHook: i32 = 3;
        pub const ScaledPixmapHook: i32 = 4;
    };
};
