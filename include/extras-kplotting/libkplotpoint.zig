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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KPlotPoint object in C++ memory
    ///
    pub fn new() KPlotPoint {
        return .{ .ptr = qtc.KPlotPoint_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KPlotPoint object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    pub fn new2(_x: f64, _y: f64) KPlotPoint {
        return .{ .ptr = qtc.KPlotPoint_new2(@bitCast(_x), @bitCast(_y)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KPlotPoint object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` p: QPointF `
    ///
    pub fn new3(p: anytype) KPlotPoint {
        comptime _ = @TypeOf(p)._is_QPointF;
        return .{ .ptr = qtc.KPlotPoint_new3(@ptrCast(p.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new KPlotPoint object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    /// ` _label: []const u8 `
    ///
    pub fn new4(_x: f64, _y: f64, _label: []const u8) KPlotPoint {
        const label_str = qtc.libqt_string{
            .len = _label.len,
            .data = _label.ptr,
        };
        return .{ .ptr = qtc.KPlotPoint_new4(@bitCast(_x), @bitCast(_y), label_str) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new KPlotPoint object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    /// ` _label: []const u8 `
    ///
    /// ` width: f64 `
    ///
    pub fn new5(_x: f64, _y: f64, _label: []const u8, width: f64) KPlotPoint {
        const label_str = qtc.libqt_string{
            .len = _label.len,
            .data = _label.ptr,
        };
        return .{ .ptr = qtc.KPlotPoint_new5(@bitCast(_x), @bitCast(_y), label_str, @bitCast(width)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new KPlotPoint object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` p: QPointF `
    ///
    /// ` _label: []const u8 `
    ///
    pub fn new6(p: anytype, _label: []const u8) KPlotPoint {
        comptime _ = @TypeOf(p)._is_QPointF;
        const label_str = qtc.libqt_string{
            .len = _label.len,
            .data = _label.ptr,
        };
        return .{ .ptr = qtc.KPlotPoint_new6(@ptrCast(p.ptr), label_str) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new KPlotPoint object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` p: QPointF `
    ///
    /// ` _label: []const u8 `
    ///
    /// ` width: f64 `
    ///
    pub fn new7(p: anytype, _label: []const u8, width: f64) KPlotPoint {
        comptime _ = @TypeOf(p)._is_QPointF;
        const label_str = qtc.libqt_string{
            .len = _label.len,
            .data = _label.ptr,
        };
        return .{ .ptr = qtc.KPlotPoint_new7(@ptrCast(p.ptr), label_str, @bitCast(width)) };
    }

    /// ### DEPRECATED: Use `position` instead
    ///
    pub const Position = position;

    /// ### [Upstream resources](https://api.kde.org/kplotpoint.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotPoint `
    ///
    pub fn position(self: KPlotPoint) QPointF {
        return .{ .ptr = qtc.KPlotPoint_Position(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPosition` instead
    ///
    pub const SetPosition = setPosition;

    /// ### [Upstream resources](https://api.kde.org/kplotpoint.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotPoint `
    ///
    /// ` pos: QPointF `
    ///
    pub fn setPosition(self: KPlotPoint, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPointF;
        qtc.KPlotPoint_SetPosition(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// ### DEPRECATED: Use `x` instead
    ///
    pub const X = x;

    /// ### [Upstream resources](https://api.kde.org/kplotpoint.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotPoint `
    ///
    pub fn x(self: KPlotPoint) f64 {
        return qtc.KPlotPoint_X(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setX` instead
    ///
    pub const SetX = setX;

    /// ### [Upstream resources](https://api.kde.org/kplotpoint.html#setX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotPoint `
    ///
    /// ` _x: f64 `
    ///
    pub fn setX(self: KPlotPoint, _x: f64) void {
        qtc.KPlotPoint_SetX(@ptrCast(self.ptr), @bitCast(_x));
    }

    /// ### DEPRECATED: Use `y` instead
    ///
    pub const Y = y;

    /// ### [Upstream resources](https://api.kde.org/kplotpoint.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotPoint `
    ///
    pub fn y(self: KPlotPoint) f64 {
        return qtc.KPlotPoint_Y(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setY` instead
    ///
    pub const SetY = setY;

    /// ### [Upstream resources](https://api.kde.org/kplotpoint.html#setY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotPoint `
    ///
    /// ` _y: f64 `
    ///
    pub fn setY(self: KPlotPoint, _y: f64) void {
        qtc.KPlotPoint_SetY(@ptrCast(self.ptr), @bitCast(_y));
    }

    /// ### DEPRECATED: Use `label` instead
    ///
    pub const Label = label;

    /// ### [Upstream resources](https://api.kde.org/kplotpoint.html#label)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotPoint `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn label(self: KPlotPoint, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KPlotPoint_Label(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KPlotPoint.label: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setLabel` instead
    ///
    pub const SetLabel = setLabel;

    /// ### [Upstream resources](https://api.kde.org/kplotpoint.html#setLabel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotPoint `
    ///
    /// ` _label: []const u8 `
    ///
    pub fn setLabel(self: KPlotPoint, _label: []const u8) void {
        const label_str = qtc.libqt_string{
            .len = _label.len,
            .data = _label.ptr,
        };
        qtc.KPlotPoint_SetLabel(@ptrCast(self.ptr), label_str);
    }

    /// ### DEPRECATED: Use `barWidth` instead
    ///
    pub const BarWidth = barWidth;

    /// ### [Upstream resources](https://api.kde.org/kplotpoint.html#barWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotPoint `
    ///
    pub fn barWidth(self: KPlotPoint) f64 {
        return qtc.KPlotPoint_BarWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBarWidth` instead
    ///
    pub const SetBarWidth = setBarWidth;

    /// ### [Upstream resources](https://api.kde.org/kplotpoint.html#setBarWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotPoint `
    ///
    /// ` w: f64 `
    ///
    pub fn setBarWidth(self: KPlotPoint, w: f64) void {
        qtc.KPlotPoint_SetBarWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kplotpoint.html#dtor.KPlotPoint)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KPlotPoint `
    ///
    pub fn delete(self: KPlotPoint) void {
        qtc.KPlotPoint_Delete(@ptrCast(self.ptr));
    }
};
