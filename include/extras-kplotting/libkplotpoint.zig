const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QPointF = @import("libqt6").QPointF;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kplotpoint.html)
pub const KPlotPoint = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kplotpoint.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KPlotPoint,

    pub const _is_KPlotPoint = {};

    /// New constructs a new KPlotPoint object.
    ///
    pub fn New() KPlotPoint {
        return .{ .ptr = qtc.KPlotPoint_new() };
    }

    /// New2 constructs a new KPlotPoint object.
    ///
    /// ## Parameter(s):
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn New2(x: f64, y: f64) KPlotPoint {
        return .{ .ptr = qtc.KPlotPoint_new2(@bitCast(x), @bitCast(y)) };
    }

    /// New3 constructs a new KPlotPoint object.
    ///
    /// ## Parameter(s):
    ///
    /// ` p: QPointF `
    ///
    pub fn New3(p: anytype) KPlotPoint {
        comptime _ = @TypeOf(p)._is_QPointF;
        return .{ .ptr = qtc.KPlotPoint_new3(@ptrCast(p.ptr)) };
    }

    /// New4 constructs a new KPlotPoint object.
    ///
    /// ## Parameter(s):
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` label: []const u8 `
    ///
    pub fn New4(x: f64, y: f64, label: []const u8) KPlotPoint {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        return .{ .ptr = qtc.KPlotPoint_new4(@bitCast(x), @bitCast(y), label_str) };
    }

    /// New5 constructs a new KPlotPoint object.
    ///
    /// ## Parameter(s):
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` label: []const u8 `
    ///
    /// ` width: f64 `
    ///
    pub fn New5(x: f64, y: f64, label: []const u8, width: f64) KPlotPoint {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        return .{ .ptr = qtc.KPlotPoint_new5(@bitCast(x), @bitCast(y), label_str, @bitCast(width)) };
    }

    /// New6 constructs a new KPlotPoint object.
    ///
    /// ## Parameter(s):
    ///
    /// ` p: QPointF `
    ///
    /// ` label: []const u8 `
    ///
    pub fn New6(p: anytype, label: []const u8) KPlotPoint {
        comptime _ = @TypeOf(p)._is_QPointF;
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        return .{ .ptr = qtc.KPlotPoint_new6(@ptrCast(p.ptr), label_str) };
    }

    /// New7 constructs a new KPlotPoint object.
    ///
    /// ## Parameter(s):
    ///
    /// ` p: QPointF `
    ///
    /// ` label: []const u8 `
    ///
    /// ` width: f64 `
    ///
    pub fn New7(p: anytype, label: []const u8, width: f64) KPlotPoint {
        comptime _ = @TypeOf(p)._is_QPointF;
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        return .{ .ptr = qtc.KPlotPoint_new7(@ptrCast(p.ptr), label_str, @bitCast(width)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kplotpoint.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotPoint `
    ///
    pub fn Position(self: KPlotPoint) QPointF {
        return .{ .ptr = qtc.KPlotPoint_Position(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kplotpoint.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotPoint `
    ///
    /// ` pos: QPointF `
    ///
    pub fn SetPosition(self: KPlotPoint, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPointF;
        qtc.KPlotPoint_SetPosition(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kplotpoint.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotPoint `
    ///
    pub fn X(self: KPlotPoint) f64 {
        return qtc.KPlotPoint_X(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kplotpoint.html#setX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotPoint `
    ///
    /// ` x: f64 `
    ///
    pub fn SetX(self: KPlotPoint, x: f64) void {
        qtc.KPlotPoint_SetX(@ptrCast(self.ptr), @bitCast(x));
    }

    /// ### [Upstream resources](https://api.kde.org/kplotpoint.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotPoint `
    ///
    pub fn Y(self: KPlotPoint) f64 {
        return qtc.KPlotPoint_Y(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kplotpoint.html#setY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotPoint `
    ///
    /// ` y: f64 `
    ///
    pub fn SetY(self: KPlotPoint, y: f64) void {
        qtc.KPlotPoint_SetY(@ptrCast(self.ptr), @bitCast(y));
    }

    /// ### [Upstream resources](https://api.kde.org/kplotpoint.html#label)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotPoint `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Label(self: KPlotPoint, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KPlotPoint_Label(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kplotpoint.Label: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kplotpoint.html#setLabel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotPoint `
    ///
    /// ` label: []const u8 `
    ///
    pub fn SetLabel(self: KPlotPoint, label: []const u8) void {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        qtc.KPlotPoint_SetLabel(@ptrCast(self.ptr), label_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kplotpoint.html#barWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotPoint `
    ///
    pub fn BarWidth(self: KPlotPoint) f64 {
        return qtc.KPlotPoint_BarWidth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kplotpoint.html#setBarWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotPoint `
    ///
    /// ` w: f64 `
    ///
    pub fn SetBarWidth(self: KPlotPoint, w: f64) void {
        qtc.KPlotPoint_SetBarWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kplotpoint.html#dtor.KPlotPoint)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KPlotPoint `
    ///
    pub fn Delete(self: KPlotPoint) void {
        qtc.KPlotPoint_Delete(@ptrCast(self.ptr));
    }
};
