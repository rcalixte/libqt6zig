const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qicon_enums = @import("../libqicon.zig").enums;
const std = @import("std");

/// https://api-staging.kde.org/kiconengine.html
pub const kiconengine = struct {
    /// New constructs a new KIconEngine object.
    ///
    /// ``` iconName: []const u8, iconLoader: QtC.KIconLoader, overlays: [][]const u8, allocator: std.mem.Allocator ```
    pub fn New(iconName: []const u8, iconLoader: ?*anyopaque, overlays: [][]const u8, allocator: std.mem.Allocator) QtC.KIconEngine {
        const iconName_str = qtc.libqt_string{
            .len = iconName.len,
            .data = iconName.ptr,
        };
        var overlays_arr = allocator.alloc(qtc.libqt_string, overlays.len) catch @panic("kiconengine.: Memory allocation failed");
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
    /// ``` iconName: []const u8, iconLoader: QtC.KIconLoader ```
    pub fn New2(iconName: []const u8, iconLoader: ?*anyopaque) QtC.KIconEngine {
        const iconName_str = qtc.libqt_string{
            .len = iconName.len,
            .data = iconName.ptr,
        };

        return qtc.KIconEngine_new2(iconName_str, @ptrCast(iconLoader));
    }

    /// New3 constructs a new KIconEngine object.
    ///
    /// ``` iconName: []const u8, colors: QtC.KIconColors, iconLoader: QtC.KIconLoader ```
    pub fn New3(iconName: []const u8, colors: ?*anyopaque, iconLoader: ?*anyopaque) QtC.KIconEngine {
        const iconName_str = qtc.libqt_string{
            .len = iconName.len,
            .data = iconName.ptr,
        };

        return qtc.KIconEngine_new3(iconName_str, @ptrCast(colors), @ptrCast(iconLoader));
    }

    /// New4 constructs a new KIconEngine object.
    ///
    /// ``` iconName: []const u8, colors: QtC.KIconColors, iconLoader: QtC.KIconLoader, overlays: [][]const u8, allocator: std.mem.Allocator ```
    pub fn New4(iconName: []const u8, colors: ?*anyopaque, iconLoader: ?*anyopaque, overlays: [][]const u8, allocator: std.mem.Allocator) QtC.KIconEngine {
        const iconName_str = qtc.libqt_string{
            .len = iconName.len,
            .data = iconName.ptr,
        };
        var overlays_arr = allocator.alloc(qtc.libqt_string, overlays.len) catch @panic("kiconengine.: Memory allocation failed");
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
    /// ``` param1: QtC.KIconEngine ```
    pub fn New5(param1: ?*anyopaque) QtC.KIconEngine {
        return qtc.KIconEngine_new5(@ptrCast(param1));
    }

    /// [Qt documentation](https://api-staging.kde.org/kiconengine.html#actualSize)
    ///
    /// ``` self: QtC.KIconEngine, size: QtC.QSize, mode: qicon_enums.Mode, state: qicon_enums.State ```
    pub fn ActualSize(self: ?*anyopaque, size: ?*anyopaque, mode: i32, state: i32) QtC.QSize {
        return qtc.KIconEngine_ActualSize(@ptrCast(self), @ptrCast(size), @intCast(mode), @intCast(state));
    }

    /// [Qt documentation](https://api-staging.kde.org/kiconengine.html#actualSize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KIconEngine, slot: fn (self: QtC.KIconEngine, size: QtC.QSize, mode: qicon_enums.Mode, state: qicon_enums.State) callconv(.c) QtC.QSize ```
    pub fn OnActualSize(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) QtC.QSize) void {
        qtc.KIconEngine_OnActualSize(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kiconengine.html#actualSize)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KIconEngine, size: QtC.QSize, mode: qicon_enums.Mode, state: qicon_enums.State ```
    pub fn QBaseActualSize(self: ?*anyopaque, size: ?*anyopaque, mode: i32, state: i32) QtC.QSize {
        return qtc.KIconEngine_QBaseActualSize(@ptrCast(self), @ptrCast(size), @intCast(mode), @intCast(state));
    }

    /// [Qt documentation](https://api-staging.kde.org/kiconengine.html#paint)
    ///
    /// ``` self: QtC.KIconEngine, painter: QtC.QPainter, rect: QtC.QRect, mode: qicon_enums.Mode, state: qicon_enums.State ```
    pub fn Paint(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, mode: i32, state: i32) void {
        qtc.KIconEngine_Paint(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @intCast(mode), @intCast(state));
    }

    /// [Qt documentation](https://api-staging.kde.org/kiconengine.html#paint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KIconEngine, slot: fn (self: QtC.KIconEngine, painter: QtC.QPainter, rect: QtC.QRect, mode: qicon_enums.Mode, state: qicon_enums.State) callconv(.c) void ```
    pub fn OnPaint(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.KIconEngine_OnPaint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kiconengine.html#paint)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KIconEngine, painter: QtC.QPainter, rect: QtC.QRect, mode: qicon_enums.Mode, state: qicon_enums.State ```
    pub fn QBasePaint(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, mode: i32, state: i32) void {
        qtc.KIconEngine_QBasePaint(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @intCast(mode), @intCast(state));
    }

    /// [Qt documentation](https://api-staging.kde.org/kiconengine.html#pixmap)
    ///
    /// ``` self: QtC.KIconEngine, size: QtC.QSize, mode: qicon_enums.Mode, state: qicon_enums.State ```
    pub fn Pixmap(self: ?*anyopaque, size: ?*anyopaque, mode: i32, state: i32) QtC.QPixmap {
        return qtc.KIconEngine_Pixmap(@ptrCast(self), @ptrCast(size), @intCast(mode), @intCast(state));
    }

    /// [Qt documentation](https://api-staging.kde.org/kiconengine.html#pixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KIconEngine, slot: fn (self: QtC.KIconEngine, size: QtC.QSize, mode: qicon_enums.Mode, state: qicon_enums.State) callconv(.c) QtC.QPixmap ```
    pub fn OnPixmap(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) QtC.QPixmap) void {
        qtc.KIconEngine_OnPixmap(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kiconengine.html#pixmap)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KIconEngine, size: QtC.QSize, mode: qicon_enums.Mode, state: qicon_enums.State ```
    pub fn QBasePixmap(self: ?*anyopaque, size: ?*anyopaque, mode: i32, state: i32) QtC.QPixmap {
        return qtc.KIconEngine_QBasePixmap(@ptrCast(self), @ptrCast(size), @intCast(mode), @intCast(state));
    }

    /// [Qt documentation](https://api-staging.kde.org/kiconengine.html#scaledPixmap)
    ///
    /// ``` self: QtC.KIconEngine, size: QtC.QSize, mode: qicon_enums.Mode, state: qicon_enums.State, scale: f64 ```
    pub fn ScaledPixmap(self: ?*anyopaque, size: ?*anyopaque, mode: i32, state: i32, scale: f64) QtC.QPixmap {
        return qtc.KIconEngine_ScaledPixmap(@ptrCast(self), @ptrCast(size), @intCast(mode), @intCast(state), @floatCast(scale));
    }

    /// [Qt documentation](https://api-staging.kde.org/kiconengine.html#scaledPixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KIconEngine, slot: fn (self: QtC.KIconEngine, size: QtC.QSize, mode: qicon_enums.Mode, state: qicon_enums.State, scale: f64) callconv(.c) QtC.QPixmap ```
    pub fn OnScaledPixmap(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32, i32, f64) callconv(.c) QtC.QPixmap) void {
        qtc.KIconEngine_OnScaledPixmap(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kiconengine.html#scaledPixmap)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KIconEngine, size: QtC.QSize, mode: qicon_enums.Mode, state: qicon_enums.State, scale: f64 ```
    pub fn QBaseScaledPixmap(self: ?*anyopaque, size: ?*anyopaque, mode: i32, state: i32, scale: f64) QtC.QPixmap {
        return qtc.KIconEngine_QBaseScaledPixmap(@ptrCast(self), @ptrCast(size), @intCast(mode), @intCast(state), @floatCast(scale));
    }

    /// [Qt documentation](https://api-staging.kde.org/kiconengine.html#iconName)
    ///
    /// ``` self: QtC.KIconEngine, allocator: std.mem.Allocator ```
    pub fn IconName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KIconEngine_IconName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kiconengine.IconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kiconengine.html#iconName)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KIconEngine, slot: fn () callconv(.c) [*:0]const u8 ```
    pub fn OnIconName(self: ?*anyopaque, slot: fn () callconv(.c) [*:0]const u8) void {
        qtc.KIconEngine_OnIconName(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kiconengine.html#iconName)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KIconEngine, allocator: std.mem.Allocator ```
    pub fn QBaseIconName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KIconEngine_QBaseIconName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kiconengine.IconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kiconengine.html#availableSizes)
    ///
    /// ``` self: QtC.KIconEngine, mode: qicon_enums.Mode, state: qicon_enums.State, allocator: std.mem.Allocator ```
    pub fn AvailableSizes(self: ?*anyopaque, mode: i32, state: i32, allocator: std.mem.Allocator) []QtC.QSize {
        const _arr: qtc.libqt_list = qtc.KIconEngine_AvailableSizes(@ptrCast(self), @intCast(mode), @intCast(state));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QSize, _arr.len) catch @panic("kiconengine.AvailableSizes: Memory allocation failed");
        const _data: [*]QtC.QSize = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kiconengine.html#availableSizes)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KIconEngine, slot: fn (self: QtC.KIconEngine, mode: qicon_enums.Mode, state: qicon_enums.State) callconv(.c) [*:null]QtC.QSize ```
    pub fn OnAvailableSizes(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) [*:null]QtC.QSize) void {
        qtc.KIconEngine_OnAvailableSizes(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kiconengine.html#availableSizes)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KIconEngine, mode: qicon_enums.Mode, state: qicon_enums.State, allocator: std.mem.Allocator ```
    pub fn QBaseAvailableSizes(self: ?*anyopaque, mode: i32, state: i32, allocator: std.mem.Allocator) []QtC.QSize {
        const _arr: qtc.libqt_list = qtc.KIconEngine_QBaseAvailableSizes(@ptrCast(self), @intCast(mode), @intCast(state));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QSize, _arr.len) catch @panic("kiconengine.AvailableSizes: Memory allocation failed");
        const _data: [*]QtC.QSize = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kiconengine.html#isNull)
    ///
    /// ``` self: QtC.KIconEngine ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.KIconEngine_IsNull(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kiconengine.html#isNull)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KIconEngine, slot: fn () callconv(.c) bool ```
    pub fn OnIsNull(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.KIconEngine_OnIsNull(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kiconengine.html#isNull)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KIconEngine ```
    pub fn QBaseIsNull(self: ?*anyopaque) bool {
        return qtc.KIconEngine_QBaseIsNull(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kiconengine.html#key)
    ///
    /// ``` self: QtC.KIconEngine, allocator: std.mem.Allocator ```
    pub fn Key(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KIconEngine_Key(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kiconengine.Key: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kiconengine.html#key)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KIconEngine, slot: fn () callconv(.c) [*:0]const u8 ```
    pub fn OnKey(self: ?*anyopaque, slot: fn () callconv(.c) [*:0]const u8) void {
        qtc.KIconEngine_OnKey(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kiconengine.html#key)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KIconEngine, allocator: std.mem.Allocator ```
    pub fn QBaseKey(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KIconEngine_QBaseKey(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kiconengine.Key: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kiconengine.html#clone)
    ///
    /// ``` self: QtC.KIconEngine ```
    pub fn Clone(self: ?*anyopaque) QtC.QIconEngine {
        return qtc.KIconEngine_Clone(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kiconengine.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KIconEngine, slot: fn () callconv(.c) QtC.QIconEngine ```
    pub fn OnClone(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QIconEngine) void {
        qtc.KIconEngine_OnClone(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kiconengine.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KIconEngine ```
    pub fn QBaseClone(self: ?*anyopaque) QtC.QIconEngine {
        return qtc.KIconEngine_QBaseClone(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kiconengine.html#read)
    ///
    /// ``` self: QtC.KIconEngine, in: QtC.QDataStream ```
    pub fn Read(self: ?*anyopaque, in: ?*anyopaque) bool {
        return qtc.KIconEngine_Read(@ptrCast(self), @ptrCast(in));
    }

    /// [Qt documentation](https://api-staging.kde.org/kiconengine.html#read)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KIconEngine, slot: fn (self: QtC.KIconEngine, in: QtC.QDataStream) callconv(.c) bool ```
    pub fn OnRead(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KIconEngine_OnRead(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kiconengine.html#read)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KIconEngine, in: QtC.QDataStream ```
    pub fn QBaseRead(self: ?*anyopaque, in: ?*anyopaque) bool {
        return qtc.KIconEngine_QBaseRead(@ptrCast(self), @ptrCast(in));
    }

    /// [Qt documentation](https://api-staging.kde.org/kiconengine.html#write)
    ///
    /// ``` self: QtC.KIconEngine, out: QtC.QDataStream ```
    pub fn Write(self: ?*anyopaque, out: ?*anyopaque) bool {
        return qtc.KIconEngine_Write(@ptrCast(self), @ptrCast(out));
    }

    /// [Qt documentation](https://api-staging.kde.org/kiconengine.html#write)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KIconEngine, slot: fn (self: QtC.KIconEngine, out: QtC.QDataStream) callconv(.c) bool ```
    pub fn OnWrite(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KIconEngine_OnWrite(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kiconengine.html#write)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KIconEngine, out: QtC.QDataStream ```
    pub fn QBaseWrite(self: ?*anyopaque, out: ?*anyopaque) bool {
        return qtc.KIconEngine_QBaseWrite(@ptrCast(self), @ptrCast(out));
    }

    /// Inherited from QIconEngine
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#addPixmap)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KIconEngine, pixmap: QtC.QPixmap, mode: qicon_enums.Mode, state: qicon_enums.State ```
    pub fn AddPixmap(self: ?*anyopaque, pixmap: ?*anyopaque, mode: i32, state: i32) void {
        qtc.KIconEngine_AddPixmap(@ptrCast(self), @ptrCast(pixmap), @intCast(mode), @intCast(state));
    }

    /// Inherited from QIconEngine
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#addPixmap)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KIconEngine, pixmap: QtC.QPixmap, mode: qicon_enums.Mode, state: qicon_enums.State ```
    pub fn QBaseAddPixmap(self: ?*anyopaque, pixmap: ?*anyopaque, mode: i32, state: i32) void {
        qtc.KIconEngine_QBaseAddPixmap(@ptrCast(self), @ptrCast(pixmap), @intCast(mode), @intCast(state));
    }

    /// Inherited from QIconEngine
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#addPixmap)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KIconEngine, slot: fn (self: QtC.KIconEngine, pixmap: QtC.QPixmap, mode: qicon_enums.Mode, state: qicon_enums.State) callconv(.c) void ```
    pub fn OnAddPixmap(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.KIconEngine_OnAddPixmap(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIconEngine
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#addFile)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KIconEngine, fileName: []const u8, size: QtC.QSize, mode: qicon_enums.Mode, state: qicon_enums.State ```
    pub fn AddFile(self: ?*anyopaque, fileName: []const u8, size: ?*anyopaque, mode: i32, state: i32) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.KIconEngine_AddFile(@ptrCast(self), fileName_str, @ptrCast(size), @intCast(mode), @intCast(state));
    }

    /// Inherited from QIconEngine
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#addFile)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KIconEngine, fileName: []const u8, size: QtC.QSize, mode: qicon_enums.Mode, state: qicon_enums.State ```
    pub fn QBaseAddFile(self: ?*anyopaque, fileName: []const u8, size: ?*anyopaque, mode: i32, state: i32) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.KIconEngine_QBaseAddFile(@ptrCast(self), fileName_str, @ptrCast(size), @intCast(mode), @intCast(state));
    }

    /// Inherited from QIconEngine
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#addFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KIconEngine, slot: fn (self: QtC.KIconEngine, fileName: [*:0]const u8, size: QtC.QSize, mode: qicon_enums.Mode, state: qicon_enums.State) callconv(.c) void ```
    pub fn OnAddFile(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.KIconEngine_OnAddFile(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIconEngine
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#virtual_hook)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KIconEngine, id: i32, data: ?*anyopaque ```
    pub fn VirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.KIconEngine_VirtualHook(@ptrCast(self), @intCast(id), data);
    }

    /// Inherited from QIconEngine
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#virtual_hook)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KIconEngine, id: i32, data: ?*anyopaque ```
    pub fn QBaseVirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.KIconEngine_QBaseVirtualHook(@ptrCast(self), @intCast(id), data);
    }

    /// Inherited from QIconEngine
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#virtual_hook)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KIconEngine, slot: fn (self: QtC.KIconEngine, id: i32, data: ?*anyopaque) callconv(.c) void ```
    pub fn OnVirtualHook(self: ?*anyopaque, slot: fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.KIconEngine_OnVirtualHook(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kiconengine.html#dtor.KIconEngine)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KIconEngine ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KIconEngine_Delete(@ptrCast(self));
    }
};
