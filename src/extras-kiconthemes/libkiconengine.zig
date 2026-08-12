const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KIconColors = @import("libqt6").KIconColors;
const KIconLoader = @import("libqt6").KIconLoader;
const QDataStream = @import("libqt6").QDataStream;
const QIconEngine = @import("libqt6").QIconEngine;
const QPainter = @import("libqt6").QPainter;
const QPixmap = @import("libqt6").QPixmap;
const QRect = @import("libqt6").QRect;
const QSize = @import("libqt6").QSize;
const qicon_enums = @import("../libqicon.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kiconengine.html)
pub const KIconEngine = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kiconengine.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KIconEngine,

    pub const _is_KIconEngine = {};
    pub const _is_QIconEngine = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KIconEngine object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _iconName: []const u8 `
    ///
    /// ` iconLoader: KIconLoader `
    ///
    /// ` overlays: []const []const u8 `
    ///
    pub fn new(allocator: std.mem.Allocator, _iconName: []const u8, iconLoader: anytype, overlays: []const []const u8) KIconEngine {
        const iconName_str = qtc.libqt_string{
            .len = _iconName.len,
            .data = _iconName.ptr,
        };
        comptime _ = @TypeOf(iconLoader)._is_KIconLoader;
        const overlays_arr = allocator.alloc(qtc.libqt_string, overlays.len) catch @panic("KIconEngine.new: Memory allocation failed");
        defer allocator.free(overlays_arr);
        for (overlays, 0..overlays.len) |str_item, i|
            overlays_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const overlays_list = qtc.libqt_list{
            .len = overlays.len,
            .data = overlays_arr.ptr,
        };
        return .{ .ptr = qtc.KIconEngine_new(iconName_str, @ptrCast(iconLoader.ptr), overlays_list) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KIconEngine object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _iconName: []const u8 `
    ///
    /// ` iconLoader: KIconLoader `
    ///
    pub fn new2(_iconName: []const u8, iconLoader: anytype) KIconEngine {
        const iconName_str = qtc.libqt_string{
            .len = _iconName.len,
            .data = _iconName.ptr,
        };
        comptime _ = @TypeOf(iconLoader)._is_KIconLoader;
        return .{ .ptr = qtc.KIconEngine_new2(iconName_str, @ptrCast(iconLoader.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KIconEngine object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _iconName: []const u8 `
    ///
    /// ` colors: KIconColors `
    ///
    /// ` iconLoader: KIconLoader `
    ///
    pub fn new3(_iconName: []const u8, colors: anytype, iconLoader: anytype) KIconEngine {
        const iconName_str = qtc.libqt_string{
            .len = _iconName.len,
            .data = _iconName.ptr,
        };
        comptime _ = @TypeOf(colors)._is_KIconColors;
        comptime _ = @TypeOf(iconLoader)._is_KIconLoader;
        return .{ .ptr = qtc.KIconEngine_new3(iconName_str, @ptrCast(colors.ptr), @ptrCast(iconLoader.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new KIconEngine object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _iconName: []const u8 `
    ///
    /// ` colors: KIconColors `
    ///
    /// ` iconLoader: KIconLoader `
    ///
    /// ` overlays: []const []const u8 `
    ///
    pub fn new4(allocator: std.mem.Allocator, _iconName: []const u8, colors: anytype, iconLoader: anytype, overlays: []const []const u8) KIconEngine {
        const iconName_str = qtc.libqt_string{
            .len = _iconName.len,
            .data = _iconName.ptr,
        };
        comptime _ = @TypeOf(colors)._is_KIconColors;
        comptime _ = @TypeOf(iconLoader)._is_KIconLoader;
        const overlays_arr = allocator.alloc(qtc.libqt_string, overlays.len) catch @panic("KIconEngine.new4: Memory allocation failed");
        defer allocator.free(overlays_arr);
        for (overlays, 0..overlays.len) |str_item, i|
            overlays_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const overlays_list = qtc.libqt_list{
            .len = overlays.len,
            .data = overlays_arr.ptr,
        };
        return .{ .ptr = qtc.KIconEngine_new4(iconName_str, @ptrCast(colors.ptr), @ptrCast(iconLoader.ptr), overlays_list) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new KIconEngine object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KIconEngine `
    ///
    pub fn new5(param1: anytype) KIconEngine {
        comptime _ = @TypeOf(param1)._is_KIconEngine;
        return .{ .ptr = qtc.KIconEngine_new5(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `actualSize` instead
    ///
    pub const ActualSize = actualSize;

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#actualSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconEngine `
    ///
    /// ` size: QSize `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn actualSize(self: KIconEngine, size: anytype, mode: i32, state: i32) QSize {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.KIconEngine_ActualSize(@ptrCast(self.ptr), @ptrCast(size.ptr), @bitCast(mode), @bitCast(state)) };
    }

    /// ### DEPRECATED: Use `onActualSize` instead
    ///
    pub const OnActualSize = onActualSize;

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#actualSize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIconEngine `
    ///
    /// ` callback: *const fn (self: KIconEngine, size: QSize, mode: qicon_enums.Mode, state: qicon_enums.State) callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onActualSize(self: KIconEngine, callback: *const fn (KIconEngine, QSize, i32, i32) callconv(.c) QSize) void {
        qtc.KIconEngine_OnActualSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superActualSize` instead
    ///
    pub const SuperActualSize = superActualSize;

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#actualSize)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconEngine `
    ///
    /// ` size: QSize `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn superActualSize(self: KIconEngine, size: anytype, mode: i32, state: i32) QSize {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.KIconEngine_SuperActualSize(@ptrCast(self.ptr), @ptrCast(size.ptr), @bitCast(mode), @bitCast(state)) };
    }

    /// ### DEPRECATED: Use `paint` instead
    ///
    pub const Paint = paint;

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#paint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconEngine `
    ///
    /// ` painter: QPainter `
    ///
    /// ` rect: QRect `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn paint(self: KIconEngine, painter: anytype, rect: anytype, mode: i32, state: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.KIconEngine_Paint(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr), @bitCast(mode), @bitCast(state));
    }

    /// ### DEPRECATED: Use `onPaint` instead
    ///
    pub const OnPaint = onPaint;

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#paint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIconEngine `
    ///
    /// ` callback: *const fn (self: KIconEngine, painter: QPainter, rect: QRect, mode: qicon_enums.Mode, state: qicon_enums.State) callconv(.c) void `
    ///
    pub fn onPaint(self: KIconEngine, callback: *const fn (KIconEngine, QPainter, QRect, i32, i32) callconv(.c) void) void {
        qtc.KIconEngine_OnPaint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPaint` instead
    ///
    pub const SuperPaint = superPaint;

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#paint)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconEngine `
    ///
    /// ` painter: QPainter `
    ///
    /// ` rect: QRect `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn superPaint(self: KIconEngine, painter: anytype, rect: anytype, mode: i32, state: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.KIconEngine_SuperPaint(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr), @bitCast(mode), @bitCast(state));
    }

    /// ### DEPRECATED: Use `pixmap` instead
    ///
    pub const Pixmap = pixmap;

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#pixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconEngine `
    ///
    /// ` size: QSize `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn pixmap(self: KIconEngine, size: anytype, mode: i32, state: i32) QPixmap {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.KIconEngine_Pixmap(@ptrCast(self.ptr), @ptrCast(size.ptr), @bitCast(mode), @bitCast(state)) };
    }

    /// ### DEPRECATED: Use `onPixmap` instead
    ///
    pub const OnPixmap = onPixmap;

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#pixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIconEngine `
    ///
    /// ` callback: *const fn (self: KIconEngine, size: QSize, mode: qicon_enums.Mode, state: qicon_enums.State) callconv(.c) QPixmap `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onPixmap(self: KIconEngine, callback: *const fn (KIconEngine, QSize, i32, i32) callconv(.c) QPixmap) void {
        qtc.KIconEngine_OnPixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPixmap` instead
    ///
    pub const SuperPixmap = superPixmap;

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#pixmap)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconEngine `
    ///
    /// ` size: QSize `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn superPixmap(self: KIconEngine, size: anytype, mode: i32, state: i32) QPixmap {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.KIconEngine_SuperPixmap(@ptrCast(self.ptr), @ptrCast(size.ptr), @bitCast(mode), @bitCast(state)) };
    }

    /// ### DEPRECATED: Use `scaledPixmap` instead
    ///
    pub const ScaledPixmap = scaledPixmap;

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#scaledPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconEngine `
    ///
    /// ` size: QSize `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    /// ` scale: f64 `
    ///
    pub fn scaledPixmap(self: KIconEngine, size: anytype, mode: i32, state: i32, scale: f64) QPixmap {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.KIconEngine_ScaledPixmap(@ptrCast(self.ptr), @ptrCast(size.ptr), @bitCast(mode), @bitCast(state), @bitCast(scale)) };
    }

    /// ### DEPRECATED: Use `onScaledPixmap` instead
    ///
    pub const OnScaledPixmap = onScaledPixmap;

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#scaledPixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIconEngine `
    ///
    /// ` callback: *const fn (self: KIconEngine, size: QSize, mode: qicon_enums.Mode, state: qicon_enums.State, scale: f64) callconv(.c) QPixmap `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onScaledPixmap(self: KIconEngine, callback: *const fn (KIconEngine, QSize, i32, i32, f64) callconv(.c) QPixmap) void {
        qtc.KIconEngine_OnScaledPixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superScaledPixmap` instead
    ///
    pub const SuperScaledPixmap = superScaledPixmap;

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#scaledPixmap)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconEngine `
    ///
    /// ` size: QSize `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    /// ` scale: f64 `
    ///
    pub fn superScaledPixmap(self: KIconEngine, size: anytype, mode: i32, state: i32, scale: f64) QPixmap {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.KIconEngine_SuperScaledPixmap(@ptrCast(self.ptr), @ptrCast(size.ptr), @bitCast(mode), @bitCast(state), @bitCast(scale)) };
    }

    /// ### DEPRECATED: Use `iconName` instead
    ///
    pub const IconName = iconName;

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#iconName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn iconName(self: KIconEngine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KIconEngine_IconName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIconEngine.iconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onIconName` instead
    ///
    pub const OnIconName = onIconName;

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#iconName)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIconEngine `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onIconName(self: KIconEngine, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KIconEngine_OnIconName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIconName` instead
    ///
    pub const SuperIconName = superIconName;

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#iconName)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superIconName(self: KIconEngine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KIconEngine_SuperIconName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIconEngine.iconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `availableSizes` instead
    ///
    pub const AvailableSizes = availableSizes;

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#availableSizes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn availableSizes(self: KIconEngine, allocator: std.mem.Allocator, mode: i32, state: i32) []QSize {
        const _arr: qtc.libqt_list = qtc.KIconEngine_AvailableSizes(@ptrCast(self.ptr), @bitCast(mode), @bitCast(state));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSize, _arr.len) catch @panic("KIconEngine.availableSizes: Memory allocation failed");
        const _data_val: [*]QtC.QSize = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `onAvailableSizes` instead
    ///
    pub const OnAvailableSizes = onAvailableSizes;

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#availableSizes)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KIconEngine `
    ///
    /// ` callback: *const fn (self: KIconEngine, mode: qicon_enums.Mode, state: qicon_enums.State) callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QSize `
    ///
    pub fn onAvailableSizes(self: KIconEngine, callback: *const fn (KIconEngine, i32, i32) callconv(.c) qtc.libqt_list) void {
        qtc.KIconEngine_OnAvailableSizes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superAvailableSizes` instead
    ///
    pub const SuperAvailableSizes = superAvailableSizes;

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#availableSizes)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn superAvailableSizes(self: KIconEngine, allocator: std.mem.Allocator, mode: i32, state: i32) []QSize {
        const _arr: qtc.libqt_list = qtc.KIconEngine_SuperAvailableSizes(@ptrCast(self.ptr), @bitCast(mode), @bitCast(state));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSize, _arr.len) catch @panic("KIconEngine.availableSizes: Memory allocation failed");
        const _data_val: [*]QtC.QSize = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconEngine `
    ///
    pub fn isNull(self: KIconEngine) bool {
        return qtc.KIconEngine_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsNull` instead
    ///
    pub const OnIsNull = onIsNull;

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#isNull)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIconEngine `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onIsNull(self: KIconEngine, callback: *const fn () callconv(.c) bool) void {
        qtc.KIconEngine_OnIsNull(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsNull` instead
    ///
    pub const SuperIsNull = superIsNull;

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#isNull)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconEngine `
    ///
    pub fn superIsNull(self: KIconEngine) bool {
        return qtc.KIconEngine_SuperIsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `key` instead
    ///
    pub const Key = key;

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#key)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn key(self: KIconEngine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KIconEngine_Key(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIconEngine.key: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onKey` instead
    ///
    pub const OnKey = onKey;

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#key)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIconEngine `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onKey(self: KIconEngine, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KIconEngine_OnKey(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superKey` instead
    ///
    pub const SuperKey = superKey;

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#key)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superKey(self: KIconEngine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KIconEngine_SuperKey(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIconEngine.key: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `clone` instead
    ///
    pub const Clone = clone;

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconEngine `
    ///
    pub fn clone(self: KIconEngine) QIconEngine {
        return .{ .ptr = qtc.KIconEngine_Clone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onClone` instead
    ///
    pub const OnClone = onClone;

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIconEngine `
    ///
    /// ` callback: *const fn () callconv(.c) QIconEngine `
    ///
    pub fn onClone(self: KIconEngine, callback: *const fn () callconv(.c) QIconEngine) void {
        qtc.KIconEngine_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClone` instead
    ///
    pub const SuperClone = superClone;

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconEngine `
    ///
    pub fn superClone(self: KIconEngine) QIconEngine {
        return .{ .ptr = qtc.KIconEngine_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `read` instead
    ///
    pub const Read = read;

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconEngine `
    ///
    /// ` in: QDataStream `
    ///
    pub fn read(self: KIconEngine, in: anytype) bool {
        comptime _ = @TypeOf(in)._is_QDataStream;
        return qtc.KIconEngine_Read(@ptrCast(self.ptr), @ptrCast(in.ptr));
    }

    /// ### DEPRECATED: Use `onRead` instead
    ///
    pub const OnRead = onRead;

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#read)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIconEngine `
    ///
    /// ` callback: *const fn (self: KIconEngine, in: QDataStream) callconv(.c) bool `
    ///
    pub fn onRead(self: KIconEngine, callback: *const fn (KIconEngine, QDataStream) callconv(.c) bool) void {
        qtc.KIconEngine_OnRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRead` instead
    ///
    pub const SuperRead = superRead;

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#read)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconEngine `
    ///
    /// ` in: QDataStream `
    ///
    pub fn superRead(self: KIconEngine, in: anytype) bool {
        comptime _ = @TypeOf(in)._is_QDataStream;
        return qtc.KIconEngine_SuperRead(@ptrCast(self.ptr), @ptrCast(in.ptr));
    }

    /// ### DEPRECATED: Use `write` instead
    ///
    pub const Write = write;

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconEngine `
    ///
    /// ` out: QDataStream `
    ///
    pub fn write(self: KIconEngine, out: anytype) bool {
        comptime _ = @TypeOf(out)._is_QDataStream;
        return qtc.KIconEngine_Write(@ptrCast(self.ptr), @ptrCast(out.ptr));
    }

    /// ### DEPRECATED: Use `onWrite` instead
    ///
    pub const OnWrite = onWrite;

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#write)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIconEngine `
    ///
    /// ` callback: *const fn (self: KIconEngine, out: QDataStream) callconv(.c) bool `
    ///
    pub fn onWrite(self: KIconEngine, callback: *const fn (KIconEngine, QDataStream) callconv(.c) bool) void {
        qtc.KIconEngine_OnWrite(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superWrite` instead
    ///
    pub const SuperWrite = superWrite;

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#write)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconEngine `
    ///
    /// ` out: QDataStream `
    ///
    pub fn superWrite(self: KIconEngine, out: anytype) bool {
        comptime _ = @TypeOf(out)._is_QDataStream;
        return qtc.KIconEngine_SuperWrite(@ptrCast(self.ptr), @ptrCast(out.ptr));
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
    /// ` self: KIconEngine `
    ///
    /// ` _pixmap: QPixmap `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn addPixmap(self: KIconEngine, _pixmap: anytype, mode: i32, state: i32) void {
        comptime _ = @TypeOf(_pixmap)._is_QPixmap;
        qtc.KIconEngine_AddPixmap(@ptrCast(self.ptr), @ptrCast(_pixmap.ptr), @bitCast(mode), @bitCast(state));
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
    /// ` self: KIconEngine `
    ///
    /// ` _pixmap: QPixmap `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn superAddPixmap(self: KIconEngine, _pixmap: anytype, mode: i32, state: i32) void {
        comptime _ = @TypeOf(_pixmap)._is_QPixmap;
        qtc.KIconEngine_SuperAddPixmap(@ptrCast(self.ptr), @ptrCast(_pixmap.ptr), @bitCast(mode), @bitCast(state));
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
    /// ` self: KIconEngine`
    ///
    /// ` callback: *const fn (self: KIconEngine, pixmap: QPixmap, mode: qicon_enums.Mode, state: qicon_enums.State) callconv(.c) void `
    ///
    pub fn onAddPixmap(self: KIconEngine, callback: *const fn (KIconEngine, QPixmap, i32, i32) callconv(.c) void) void {
        qtc.KIconEngine_OnAddPixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KIconEngine `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` size: QSize `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn addFile(self: KIconEngine, fileName: []const u8, size: anytype, mode: i32, state: i32) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        comptime _ = @TypeOf(size)._is_QSize;
        qtc.KIconEngine_AddFile(@ptrCast(self.ptr), fileName_str, @ptrCast(size.ptr), @bitCast(mode), @bitCast(state));
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
    /// ` self: KIconEngine `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` size: QSize `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn superAddFile(self: KIconEngine, fileName: []const u8, size: anytype, mode: i32, state: i32) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        comptime _ = @TypeOf(size)._is_QSize;
        qtc.KIconEngine_SuperAddFile(@ptrCast(self.ptr), fileName_str, @ptrCast(size.ptr), @bitCast(mode), @bitCast(state));
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
    /// ` self: KIconEngine`
    ///
    /// ` callback: *const fn (self: KIconEngine, fileName: [*:0]const u8, size: QSize, mode: qicon_enums.Mode, state: qicon_enums.State) callconv(.c) void `
    ///
    pub fn onAddFile(self: KIconEngine, callback: *const fn (KIconEngine, [*:0]const u8, QSize, i32, i32) callconv(.c) void) void {
        qtc.KIconEngine_OnAddFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KIconEngine `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn virtualHook(self: KIconEngine, id: i32, data: ?*anyopaque) void {
        qtc.KIconEngine_VirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
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
    /// ` self: KIconEngine `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn superVirtualHook(self: KIconEngine, id: i32, data: ?*anyopaque) void {
        qtc.KIconEngine_SuperVirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
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
    /// ` self: KIconEngine`
    ///
    /// ` callback: *const fn (self: KIconEngine, id: i32, data: ?*anyopaque) callconv(.c) void `
    ///
    pub fn onVirtualHook(self: KIconEngine, callback: *const fn (KIconEngine, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.KIconEngine_OnVirtualHook(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#dtor.KIconEngine)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KIconEngine `
    ///
    pub fn delete(self: KIconEngine) void {
        qtc.KIconEngine_Delete(@ptrCast(self.ptr));
    }
};
