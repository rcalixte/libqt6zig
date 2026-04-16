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

    /// New constructs a new KIconEngine object.
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` iconName: []const u8 `
    ///
    /// ` iconLoader: KIconLoader `
    ///
    /// ` overlays: []const []const u8 `
    ///
    pub fn New(allocator: std.mem.Allocator, iconName: []const u8, iconLoader: anytype, overlays: []const []const u8) KIconEngine {
        const iconName_str = qtc.libqt_string{
            .len = iconName.len,
            .data = iconName.ptr,
        };
        comptime _ = @TypeOf(iconLoader)._is_KIconLoader;
        const overlays_arr = allocator.alloc(qtc.libqt_string, overlays.len) catch @panic("kiconengine.New: Memory allocation failed");
        defer allocator.free(overlays_arr);
        for (overlays, 0..overlays.len) |item, i|
            overlays_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const overlays_list = qtc.libqt_list{
            .len = overlays.len,
            .data = overlays_arr.ptr,
        };
        return .{ .ptr = qtc.KIconEngine_new(iconName_str, @ptrCast(iconLoader.ptr), overlays_list) };
    }

    /// New2 constructs a new KIconEngine object.
    ///
    /// ## Parameter(s):
    ///
    /// ` iconName: []const u8 `
    ///
    /// ` iconLoader: KIconLoader `
    ///
    pub fn New2(iconName: []const u8, iconLoader: anytype) KIconEngine {
        const iconName_str = qtc.libqt_string{
            .len = iconName.len,
            .data = iconName.ptr,
        };
        comptime _ = @TypeOf(iconLoader)._is_KIconLoader;
        return .{ .ptr = qtc.KIconEngine_new2(iconName_str, @ptrCast(iconLoader.ptr)) };
    }

    /// New3 constructs a new KIconEngine object.
    ///
    /// ## Parameter(s):
    ///
    /// ` iconName: []const u8 `
    ///
    /// ` colors: KIconColors `
    ///
    /// ` iconLoader: KIconLoader `
    ///
    pub fn New3(iconName: []const u8, colors: anytype, iconLoader: anytype) KIconEngine {
        const iconName_str = qtc.libqt_string{
            .len = iconName.len,
            .data = iconName.ptr,
        };
        comptime _ = @TypeOf(colors)._is_KIconColors;
        comptime _ = @TypeOf(iconLoader)._is_KIconLoader;
        return .{ .ptr = qtc.KIconEngine_new3(iconName_str, @ptrCast(colors.ptr), @ptrCast(iconLoader.ptr)) };
    }

    /// New4 constructs a new KIconEngine object.
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` iconName: []const u8 `
    ///
    /// ` colors: KIconColors `
    ///
    /// ` iconLoader: KIconLoader `
    ///
    /// ` overlays: []const []const u8 `
    ///
    pub fn New4(allocator: std.mem.Allocator, iconName: []const u8, colors: anytype, iconLoader: anytype, overlays: []const []const u8) KIconEngine {
        const iconName_str = qtc.libqt_string{
            .len = iconName.len,
            .data = iconName.ptr,
        };
        comptime _ = @TypeOf(colors)._is_KIconColors;
        comptime _ = @TypeOf(iconLoader)._is_KIconLoader;
        const overlays_arr = allocator.alloc(qtc.libqt_string, overlays.len) catch @panic("kiconengine.New4: Memory allocation failed");
        defer allocator.free(overlays_arr);
        for (overlays, 0..overlays.len) |item, i|
            overlays_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const overlays_list = qtc.libqt_list{
            .len = overlays.len,
            .data = overlays_arr.ptr,
        };
        return .{ .ptr = qtc.KIconEngine_new4(iconName_str, @ptrCast(colors.ptr), @ptrCast(iconLoader.ptr), overlays_list) };
    }

    /// New5 constructs a new KIconEngine object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KIconEngine `
    ///
    pub fn New5(param1: anytype) KIconEngine {
        comptime _ = @TypeOf(param1)._is_KIconEngine;
        return .{ .ptr = qtc.KIconEngine_new5(@ptrCast(param1.ptr)) };
    }

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
    pub fn ActualSize(self: KIconEngine, size: anytype, mode: i32, state: i32) QSize {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.KIconEngine_ActualSize(@ptrCast(self.ptr), @ptrCast(size.ptr), @bitCast(mode), @bitCast(state)) };
    }

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
    pub fn OnActualSize(self: KIconEngine, callback: *const fn (KIconEngine, QSize, i32, i32) callconv(.c) QSize) void {
        qtc.KIconEngine_OnActualSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperActualSize` instead
    ///
    pub const QBaseActualSize = SuperActualSize;

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
    pub fn SuperActualSize(self: KIconEngine, size: anytype, mode: i32, state: i32) QSize {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.KIconEngine_SuperActualSize(@ptrCast(self.ptr), @ptrCast(size.ptr), @bitCast(mode), @bitCast(state)) };
    }

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
    pub fn Paint(self: KIconEngine, painter: anytype, rect: anytype, mode: i32, state: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.KIconEngine_Paint(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr), @bitCast(mode), @bitCast(state));
    }

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
    pub fn OnPaint(self: KIconEngine, callback: *const fn (KIconEngine, QPainter, QRect, i32, i32) callconv(.c) void) void {
        qtc.KIconEngine_OnPaint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPaint` instead
    ///
    pub const QBasePaint = SuperPaint;

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
    pub fn SuperPaint(self: KIconEngine, painter: anytype, rect: anytype, mode: i32, state: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.KIconEngine_SuperPaint(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr), @bitCast(mode), @bitCast(state));
    }

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
    pub fn Pixmap(self: KIconEngine, size: anytype, mode: i32, state: i32) QPixmap {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.KIconEngine_Pixmap(@ptrCast(self.ptr), @ptrCast(size.ptr), @bitCast(mode), @bitCast(state)) };
    }

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
    pub fn OnPixmap(self: KIconEngine, callback: *const fn (KIconEngine, QSize, i32, i32) callconv(.c) QPixmap) void {
        qtc.KIconEngine_OnPixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPixmap` instead
    ///
    pub const QBasePixmap = SuperPixmap;

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
    pub fn SuperPixmap(self: KIconEngine, size: anytype, mode: i32, state: i32) QPixmap {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.KIconEngine_SuperPixmap(@ptrCast(self.ptr), @ptrCast(size.ptr), @bitCast(mode), @bitCast(state)) };
    }

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
    pub fn ScaledPixmap(self: KIconEngine, size: anytype, mode: i32, state: i32, scale: f64) QPixmap {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.KIconEngine_ScaledPixmap(@ptrCast(self.ptr), @ptrCast(size.ptr), @bitCast(mode), @bitCast(state), @bitCast(scale)) };
    }

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
    pub fn OnScaledPixmap(self: KIconEngine, callback: *const fn (KIconEngine, QSize, i32, i32, f64) callconv(.c) QPixmap) void {
        qtc.KIconEngine_OnScaledPixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperScaledPixmap` instead
    ///
    pub const QBaseScaledPixmap = SuperScaledPixmap;

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
    pub fn SuperScaledPixmap(self: KIconEngine, size: anytype, mode: i32, state: i32, scale: f64) QPixmap {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.KIconEngine_SuperScaledPixmap(@ptrCast(self.ptr), @ptrCast(size.ptr), @bitCast(mode), @bitCast(state), @bitCast(scale)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#iconName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn IconName(self: KIconEngine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KIconEngine_IconName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kiconengine.IconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#iconName)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KIconEngine `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnIconName(self: KIconEngine, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KIconEngine_OnIconName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIconName` instead
    ///
    pub const QBaseIconName = SuperIconName;

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
    pub fn SuperIconName(self: KIconEngine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KIconEngine_SuperIconName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kiconengine.IconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn AvailableSizes(self: KIconEngine, allocator: std.mem.Allocator, mode: i32, state: i32) []QSize {
        const _arr: qtc.libqt_list = qtc.KIconEngine_AvailableSizes(@ptrCast(self.ptr), @bitCast(mode), @bitCast(state));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSize, _arr.len) catch @panic("kiconengine.AvailableSizes: Memory allocation failed");
        const _data: [*]QtC.QSize = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

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
    pub fn OnAvailableSizes(self: KIconEngine, callback: *const fn (KIconEngine, i32, i32) callconv(.c) qtc.libqt_list) void {
        qtc.KIconEngine_OnAvailableSizes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAvailableSizes` instead
    ///
    pub const QBaseAvailableSizes = SuperAvailableSizes;

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
    pub fn SuperAvailableSizes(self: KIconEngine, allocator: std.mem.Allocator, mode: i32, state: i32) []QSize {
        const _arr: qtc.libqt_list = qtc.KIconEngine_SuperAvailableSizes(@ptrCast(self.ptr), @bitCast(mode), @bitCast(state));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSize, _arr.len) catch @panic("kiconengine.AvailableSizes: Memory allocation failed");
        const _data: [*]QtC.QSize = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconEngine `
    ///
    pub fn IsNull(self: KIconEngine) bool {
        return qtc.KIconEngine_IsNull(@ptrCast(self.ptr));
    }

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
    pub fn OnIsNull(self: KIconEngine, callback: *const fn () callconv(.c) bool) void {
        qtc.KIconEngine_OnIsNull(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsNull` instead
    ///
    pub const QBaseIsNull = SuperIsNull;

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#isNull)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconEngine `
    ///
    pub fn SuperIsNull(self: KIconEngine) bool {
        return qtc.KIconEngine_SuperIsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#key)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Key(self: KIconEngine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KIconEngine_Key(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kiconengine.Key: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#key)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KIconEngine `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnKey(self: KIconEngine, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KIconEngine_OnKey(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperKey` instead
    ///
    pub const QBaseKey = SuperKey;

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
    pub fn SuperKey(self: KIconEngine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KIconEngine_SuperKey(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kiconengine.Key: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconEngine `
    ///
    pub fn Clone(self: KIconEngine) QIconEngine {
        return .{ .ptr = qtc.KIconEngine_Clone(@ptrCast(self.ptr)) };
    }

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
    pub fn OnClone(self: KIconEngine, callback: *const fn () callconv(.c) QIconEngine) void {
        qtc.KIconEngine_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClone` instead
    ///
    pub const QBaseClone = SuperClone;

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconEngine `
    ///
    pub fn SuperClone(self: KIconEngine) QIconEngine {
        return .{ .ptr = qtc.KIconEngine_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconEngine `
    ///
    /// ` in: QDataStream `
    ///
    pub fn Read(self: KIconEngine, in: anytype) bool {
        comptime _ = @TypeOf(in)._is_QDataStream;
        return qtc.KIconEngine_Read(@ptrCast(self.ptr), @ptrCast(in.ptr));
    }

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
    pub fn OnRead(self: KIconEngine, callback: *const fn (KIconEngine, QDataStream) callconv(.c) bool) void {
        qtc.KIconEngine_OnRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRead` instead
    ///
    pub const QBaseRead = SuperRead;

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
    pub fn SuperRead(self: KIconEngine, in: anytype) bool {
        comptime _ = @TypeOf(in)._is_QDataStream;
        return qtc.KIconEngine_SuperRead(@ptrCast(self.ptr), @ptrCast(in.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconEngine `
    ///
    /// ` out: QDataStream `
    ///
    pub fn Write(self: KIconEngine, out: anytype) bool {
        comptime _ = @TypeOf(out)._is_QDataStream;
        return qtc.KIconEngine_Write(@ptrCast(self.ptr), @ptrCast(out.ptr));
    }

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
    pub fn OnWrite(self: KIconEngine, callback: *const fn (KIconEngine, QDataStream) callconv(.c) bool) void {
        qtc.KIconEngine_OnWrite(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperWrite` instead
    ///
    pub const QBaseWrite = SuperWrite;

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
    pub fn SuperWrite(self: KIconEngine, out: anytype) bool {
        comptime _ = @TypeOf(out)._is_QDataStream;
        return qtc.KIconEngine_SuperWrite(@ptrCast(self.ptr), @ptrCast(out.ptr));
    }

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
    /// ` pixmap: QPixmap `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn AddPixmap(self: KIconEngine, pixmap: anytype, mode: i32, state: i32) void {
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        qtc.KIconEngine_AddPixmap(@ptrCast(self.ptr), @ptrCast(pixmap.ptr), @bitCast(mode), @bitCast(state));
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
    /// ` self: KIconEngine `
    ///
    /// ` pixmap: QPixmap `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn SuperAddPixmap(self: KIconEngine, pixmap: anytype, mode: i32, state: i32) void {
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        qtc.KIconEngine_SuperAddPixmap(@ptrCast(self.ptr), @ptrCast(pixmap.ptr), @bitCast(mode), @bitCast(state));
    }

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
    pub fn OnAddPixmap(self: KIconEngine, callback: *const fn (KIconEngine, QPixmap, i32, i32) callconv(.c) void) void {
        qtc.KIconEngine_OnAddPixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn AddFile(self: KIconEngine, fileName: []const u8, size: anytype, mode: i32, state: i32) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        comptime _ = @TypeOf(size)._is_QSize;
        qtc.KIconEngine_AddFile(@ptrCast(self.ptr), fileName_str, @ptrCast(size.ptr), @bitCast(mode), @bitCast(state));
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
    pub fn SuperAddFile(self: KIconEngine, fileName: []const u8, size: anytype, mode: i32, state: i32) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        comptime _ = @TypeOf(size)._is_QSize;
        qtc.KIconEngine_SuperAddFile(@ptrCast(self.ptr), fileName_str, @ptrCast(size.ptr), @bitCast(mode), @bitCast(state));
    }

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
    pub fn OnAddFile(self: KIconEngine, callback: *const fn (KIconEngine, [*:0]const u8, QSize, i32, i32) callconv(.c) void) void {
        qtc.KIconEngine_OnAddFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn VirtualHook(self: KIconEngine, id: i32, data: ?*anyopaque) void {
        qtc.KIconEngine_VirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
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
    /// ` self: KIconEngine `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn SuperVirtualHook(self: KIconEngine, id: i32, data: ?*anyopaque) void {
        qtc.KIconEngine_SuperVirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

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
    pub fn OnVirtualHook(self: KIconEngine, callback: *const fn (KIconEngine, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.KIconEngine_OnVirtualHook(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#dtor.KIconEngine)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KIconEngine `
    ///
    pub fn Delete(self: KIconEngine) void {
        qtc.KIconEngine_Delete(@ptrCast(self.ptr));
    }
};
