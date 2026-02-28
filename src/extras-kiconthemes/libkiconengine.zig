const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qicon_enums = @import("../libqicon.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kiconengine.html)
pub const kiconengine = struct {
    /// New constructs a new KIconEngine object.
    ///
    /// ## Parameter(s):
    ///
    /// ` iconName: []const u8 `
    ///
    /// ` iconLoader: QtC.KIconLoader `
    ///
    /// ` overlays: []const []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn New(iconName: []const u8, iconLoader: ?*anyopaque, overlays: []const []const u8, allocator: std.mem.Allocator) QtC.KIconEngine {
        const iconName_str = qtc.libqt_string{
            .len = iconName.len,
            .data = iconName.ptr,
        };
        const overlays_arr = allocator.alloc(qtc.libqt_string, overlays.len) catch @panic("kiconengine.New: Memory allocation failed");
        defer allocator.free(overlays_arr);
        for (overlays, 0..overlays.len) |item, i| {
            overlays_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const overlays_list = qtc.libqt_list{
            .len = overlays.len,
            .data = overlays_arr.ptr,
        };

        return qtc.KIconEngine_new(iconName_str, @ptrCast(iconLoader), overlays_list);
    }

    /// New2 constructs a new KIconEngine object.
    ///
    /// ## Parameter(s):
    ///
    /// ` iconName: []const u8 `
    ///
    /// ` iconLoader: QtC.KIconLoader `
    ///
    pub fn New2(iconName: []const u8, iconLoader: ?*anyopaque) QtC.KIconEngine {
        const iconName_str = qtc.libqt_string{
            .len = iconName.len,
            .data = iconName.ptr,
        };

        return qtc.KIconEngine_new2(iconName_str, @ptrCast(iconLoader));
    }

    /// New3 constructs a new KIconEngine object.
    ///
    /// ## Parameter(s):
    ///
    /// ` iconName: []const u8 `
    ///
    /// ` colors: QtC.KIconColors `
    ///
    /// ` iconLoader: QtC.KIconLoader `
    ///
    pub fn New3(iconName: []const u8, colors: ?*anyopaque, iconLoader: ?*anyopaque) QtC.KIconEngine {
        const iconName_str = qtc.libqt_string{
            .len = iconName.len,
            .data = iconName.ptr,
        };

        return qtc.KIconEngine_new3(iconName_str, @ptrCast(colors), @ptrCast(iconLoader));
    }

    /// New4 constructs a new KIconEngine object.
    ///
    /// ## Parameter(s):
    ///
    /// ` iconName: []const u8 `
    ///
    /// ` colors: QtC.KIconColors `
    ///
    /// ` iconLoader: QtC.KIconLoader `
    ///
    /// ` overlays: []const []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn New4(iconName: []const u8, colors: ?*anyopaque, iconLoader: ?*anyopaque, overlays: []const []const u8, allocator: std.mem.Allocator) QtC.KIconEngine {
        const iconName_str = qtc.libqt_string{
            .len = iconName.len,
            .data = iconName.ptr,
        };
        const overlays_arr = allocator.alloc(qtc.libqt_string, overlays.len) catch @panic("kiconengine.New4: Memory allocation failed");
        defer allocator.free(overlays_arr);
        for (overlays, 0..overlays.len) |item, i| {
            overlays_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const overlays_list = qtc.libqt_list{
            .len = overlays.len,
            .data = overlays_arr.ptr,
        };

        return qtc.KIconEngine_new4(iconName_str, @ptrCast(colors), @ptrCast(iconLoader), overlays_list);
    }

    /// New5 constructs a new KIconEngine object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.KIconEngine `
    ///
    pub fn New5(param1: ?*anyopaque) QtC.KIconEngine {
        return qtc.KIconEngine_new5(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#actualSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIconEngine `
    ///
    /// ` size: QtC.QSize `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn ActualSize(self: ?*anyopaque, size: ?*anyopaque, mode: i32, state: i32) QtC.QSize {
        return qtc.KIconEngine_ActualSize(@ptrCast(self), @ptrCast(size), @bitCast(mode), @bitCast(state));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#actualSize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIconEngine `
    ///
    /// ` callback: *const fn (self: QtC.KIconEngine, size: QtC.QSize, mode: qicon_enums.Mode, state: qicon_enums.State) callconv(.c) QtC.QSize `
    ///
    pub fn OnActualSize(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) QtC.QSize) void {
        qtc.KIconEngine_OnActualSize(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KIconEngine `
    ///
    /// ` size: QtC.QSize `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn SuperActualSize(self: ?*anyopaque, size: ?*anyopaque, mode: i32, state: i32) QtC.QSize {
        return qtc.KIconEngine_SuperActualSize(@ptrCast(self), @ptrCast(size), @bitCast(mode), @bitCast(state));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#paint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIconEngine `
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
        qtc.KIconEngine_Paint(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @bitCast(mode), @bitCast(state));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#paint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIconEngine `
    ///
    /// ` callback: *const fn (self: QtC.KIconEngine, painter: QtC.QPainter, rect: QtC.QRect, mode: qicon_enums.Mode, state: qicon_enums.State) callconv(.c) void `
    ///
    pub fn OnPaint(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.KIconEngine_OnPaint(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KIconEngine `
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
        qtc.KIconEngine_SuperPaint(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @bitCast(mode), @bitCast(state));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#pixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIconEngine `
    ///
    /// ` size: QtC.QSize `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn Pixmap(self: ?*anyopaque, size: ?*anyopaque, mode: i32, state: i32) QtC.QPixmap {
        return qtc.KIconEngine_Pixmap(@ptrCast(self), @ptrCast(size), @bitCast(mode), @bitCast(state));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#pixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIconEngine `
    ///
    /// ` callback: *const fn (self: QtC.KIconEngine, size: QtC.QSize, mode: qicon_enums.Mode, state: qicon_enums.State) callconv(.c) QtC.QPixmap `
    ///
    pub fn OnPixmap(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) QtC.QPixmap) void {
        qtc.KIconEngine_OnPixmap(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KIconEngine `
    ///
    /// ` size: QtC.QSize `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn SuperPixmap(self: ?*anyopaque, size: ?*anyopaque, mode: i32, state: i32) QtC.QPixmap {
        return qtc.KIconEngine_SuperPixmap(@ptrCast(self), @ptrCast(size), @bitCast(mode), @bitCast(state));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#scaledPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIconEngine `
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
        return qtc.KIconEngine_ScaledPixmap(@ptrCast(self), @ptrCast(size), @bitCast(mode), @bitCast(state), @bitCast(scale));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#scaledPixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIconEngine `
    ///
    /// ` callback: *const fn (self: QtC.KIconEngine, size: QtC.QSize, mode: qicon_enums.Mode, state: qicon_enums.State, scale: f64) callconv(.c) QtC.QPixmap `
    ///
    pub fn OnScaledPixmap(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, f64) callconv(.c) QtC.QPixmap) void {
        qtc.KIconEngine_OnScaledPixmap(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KIconEngine `
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
        return qtc.KIconEngine_SuperScaledPixmap(@ptrCast(self), @ptrCast(size), @bitCast(mode), @bitCast(state), @bitCast(scale));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#iconName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIconEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn IconName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KIconEngine_IconName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kiconengine.IconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#iconName)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIconEngine `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnIconName(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KIconEngine_OnIconName(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KIconEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperIconName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KIconEngine_SuperIconName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kiconengine.IconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#availableSizes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIconEngine `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AvailableSizes(self: ?*anyopaque, mode: i32, state: i32, allocator: std.mem.Allocator) []QtC.QSize {
        const _arr: qtc.libqt_list = qtc.KIconEngine_AvailableSizes(@ptrCast(self), @bitCast(mode), @bitCast(state));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QSize, _arr.len) catch @panic("kiconengine.AvailableSizes: Memory allocation failed");
        const _data: [*]QtC.QSize = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#availableSizes)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIconEngine `
    ///
    /// ` callback: *const fn (self: QtC.KIconEngine, mode: qicon_enums.Mode, state: qicon_enums.State) callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QtC.QSize `
    ///
    pub fn OnAvailableSizes(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) qtc.libqt_list) void {
        qtc.KIconEngine_OnAvailableSizes(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KIconEngine `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperAvailableSizes(self: ?*anyopaque, mode: i32, state: i32, allocator: std.mem.Allocator) []QtC.QSize {
        const _arr: qtc.libqt_list = qtc.KIconEngine_SuperAvailableSizes(@ptrCast(self), @bitCast(mode), @bitCast(state));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QSize, _arr.len) catch @panic("kiconengine.AvailableSizes: Memory allocation failed");
        const _data: [*]QtC.QSize = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIconEngine `
    ///
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.KIconEngine_IsNull(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#isNull)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIconEngine `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsNull(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KIconEngine_OnIsNull(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KIconEngine `
    ///
    pub fn SuperIsNull(self: ?*anyopaque) bool {
        return qtc.KIconEngine_SuperIsNull(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#key)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIconEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Key(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KIconEngine_Key(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kiconengine.Key: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#key)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIconEngine `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnKey(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KIconEngine_OnKey(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KIconEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperKey(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KIconEngine_SuperKey(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kiconengine.Key: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIconEngine `
    ///
    pub fn Clone(self: ?*anyopaque) QtC.QIconEngine {
        return qtc.KIconEngine_Clone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIconEngine `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QIconEngine `
    ///
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QIconEngine) void {
        qtc.KIconEngine_OnClone(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KIconEngine `
    ///
    pub fn SuperClone(self: ?*anyopaque) QtC.QIconEngine {
        return qtc.KIconEngine_SuperClone(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIconEngine `
    ///
    /// ` in: QtC.QDataStream `
    ///
    pub fn Read(self: ?*anyopaque, in: ?*anyopaque) bool {
        return qtc.KIconEngine_Read(@ptrCast(self), @ptrCast(in));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#read)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIconEngine `
    ///
    /// ` callback: *const fn (self: QtC.KIconEngine, in: QtC.QDataStream) callconv(.c) bool `
    ///
    pub fn OnRead(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KIconEngine_OnRead(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KIconEngine `
    ///
    /// ` in: QtC.QDataStream `
    ///
    pub fn SuperRead(self: ?*anyopaque, in: ?*anyopaque) bool {
        return qtc.KIconEngine_SuperRead(@ptrCast(self), @ptrCast(in));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIconEngine `
    ///
    /// ` out: QtC.QDataStream `
    ///
    pub fn Write(self: ?*anyopaque, out: ?*anyopaque) bool {
        return qtc.KIconEngine_Write(@ptrCast(self), @ptrCast(out));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconengine.html#write)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIconEngine `
    ///
    /// ` callback: *const fn (self: QtC.KIconEngine, out: QtC.QDataStream) callconv(.c) bool `
    ///
    pub fn OnWrite(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KIconEngine_OnWrite(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KIconEngine `
    ///
    /// ` out: QtC.QDataStream `
    ///
    pub fn SuperWrite(self: ?*anyopaque, out: ?*anyopaque) bool {
        return qtc.KIconEngine_SuperWrite(@ptrCast(self), @ptrCast(out));
    }

    /// Inherited from QIconEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#addPixmap)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIconEngine `
    ///
    /// ` pixmap: QtC.QPixmap `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn AddPixmap(self: ?*anyopaque, pixmap: ?*anyopaque, mode: i32, state: i32) void {
        qtc.KIconEngine_AddPixmap(@ptrCast(self), @ptrCast(pixmap), @bitCast(mode), @bitCast(state));
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
    /// ` self: QtC.KIconEngine `
    ///
    /// ` pixmap: QtC.QPixmap `
    ///
    /// ` mode: qicon_enums.Mode `
    ///
    /// ` state: qicon_enums.State `
    ///
    pub fn SuperAddPixmap(self: ?*anyopaque, pixmap: ?*anyopaque, mode: i32, state: i32) void {
        qtc.KIconEngine_SuperAddPixmap(@ptrCast(self), @ptrCast(pixmap), @bitCast(mode), @bitCast(state));
    }

    /// Inherited from QIconEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#addPixmap)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIconEngine`
    ///
    /// ` callback: *const fn (self: QtC.KIconEngine, pixmap: QtC.QPixmap, mode: qicon_enums.Mode, state: qicon_enums.State) callconv(.c) void `
    ///
    pub fn OnAddPixmap(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.KIconEngine_OnAddPixmap(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIconEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#addFile)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIconEngine `
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
        qtc.KIconEngine_AddFile(@ptrCast(self), fileName_str, @ptrCast(size), @bitCast(mode), @bitCast(state));
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
    /// ` self: QtC.KIconEngine `
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
        qtc.KIconEngine_SuperAddFile(@ptrCast(self), fileName_str, @ptrCast(size), @bitCast(mode), @bitCast(state));
    }

    /// Inherited from QIconEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#addFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIconEngine`
    ///
    /// ` callback: *const fn (self: QtC.KIconEngine, fileName: [*:0]const u8, size: QtC.QSize, mode: qicon_enums.Mode, state: qicon_enums.State) callconv(.c) void `
    ///
    pub fn OnAddFile(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.KIconEngine_OnAddFile(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIconEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#virtual_hook)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIconEngine `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn VirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.KIconEngine_VirtualHook(@ptrCast(self), @bitCast(id), @ptrCast(data));
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
    /// ` self: QtC.KIconEngine `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn SuperVirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.KIconEngine_SuperVirtualHook(@ptrCast(self), @bitCast(id), @ptrCast(data));
    }

    /// Inherited from QIconEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#virtual_hook)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIconEngine`
    ///
    /// ` callback: *const fn (self: QtC.KIconEngine, id: i32, data: ?*anyopaque) callconv(.c) void `
    ///
    pub fn OnVirtualHook(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.KIconEngine_OnVirtualHook(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KIconEngine `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.KIconEngine_Delete(@ptrCast(self));
    }
};
