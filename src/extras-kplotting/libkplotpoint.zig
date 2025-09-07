const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://api.kde.org/kplotpoint.html
pub const kplotpoint = struct {
    /// New constructs a new KPlotPoint object.
    ///
    ///
    pub fn New() QtC.KPlotPoint {
        return qtc.KPlotPoint_new();
    }

    /// New2 constructs a new KPlotPoint object.
    ///
    /// ``` x: f64, y: f64 ```
    pub fn New2(x: f64, y: f64) QtC.KPlotPoint {
        return qtc.KPlotPoint_new2(@floatCast(x), @floatCast(y));
    }

    /// New3 constructs a new KPlotPoint object.
    ///
    /// ``` p: QtC.QPointF ```
    pub fn New3(p: ?*anyopaque) QtC.KPlotPoint {
        return qtc.KPlotPoint_new3(@ptrCast(p));
    }

    /// New4 constructs a new KPlotPoint object.
    ///
    /// ``` x: f64, y: f64, label: []const u8 ```
    pub fn New4(x: f64, y: f64, label: []const u8) QtC.KPlotPoint {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };

        return qtc.KPlotPoint_new4(@floatCast(x), @floatCast(y), label_str);
    }

    /// New5 constructs a new KPlotPoint object.
    ///
    /// ``` x: f64, y: f64, label: []const u8, width: f64 ```
    pub fn New5(x: f64, y: f64, label: []const u8, width: f64) QtC.KPlotPoint {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };

        return qtc.KPlotPoint_new5(@floatCast(x), @floatCast(y), label_str, @floatCast(width));
    }

    /// New6 constructs a new KPlotPoint object.
    ///
    /// ``` p: QtC.QPointF, label: []const u8 ```
    pub fn New6(p: ?*anyopaque, label: []const u8) QtC.KPlotPoint {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };

        return qtc.KPlotPoint_new6(@ptrCast(p), label_str);
    }

    /// New7 constructs a new KPlotPoint object.
    ///
    /// ``` p: QtC.QPointF, label: []const u8, width: f64 ```
    pub fn New7(p: ?*anyopaque, label: []const u8, width: f64) QtC.KPlotPoint {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };

        return qtc.KPlotPoint_new7(@ptrCast(p), label_str, @floatCast(width));
    }

    /// [Qt documentation](https://api.kde.org/kplotpoint.html#position)
    ///
    /// ``` self: QtC.KPlotPoint ```
    pub fn Position(self: ?*anyopaque) QtC.QPointF {
        return qtc.KPlotPoint_Position(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kplotpoint.html#setPosition)
    ///
    /// ``` self: QtC.KPlotPoint, pos: QtC.QPointF ```
    pub fn SetPosition(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.KPlotPoint_SetPosition(@ptrCast(self), @ptrCast(pos));
    }

    /// [Qt documentation](https://api.kde.org/kplotpoint.html#x)
    ///
    /// ``` self: QtC.KPlotPoint ```
    pub fn X(self: ?*anyopaque) f64 {
        return qtc.KPlotPoint_X(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kplotpoint.html#setX)
    ///
    /// ``` self: QtC.KPlotPoint, x: f64 ```
    pub fn SetX(self: ?*anyopaque, x: f64) void {
        qtc.KPlotPoint_SetX(@ptrCast(self), @floatCast(x));
    }

    /// [Qt documentation](https://api.kde.org/kplotpoint.html#y)
    ///
    /// ``` self: QtC.KPlotPoint ```
    pub fn Y(self: ?*anyopaque) f64 {
        return qtc.KPlotPoint_Y(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kplotpoint.html#setY)
    ///
    /// ``` self: QtC.KPlotPoint, y: f64 ```
    pub fn SetY(self: ?*anyopaque, y: f64) void {
        qtc.KPlotPoint_SetY(@ptrCast(self), @floatCast(y));
    }

    /// [Qt documentation](https://api.kde.org/kplotpoint.html#label)
    ///
    /// ``` self: QtC.KPlotPoint, allocator: std.mem.Allocator ```
    pub fn Label(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KPlotPoint_Label(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kplotpoint.Label: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kplotpoint.html#setLabel)
    ///
    /// ``` self: QtC.KPlotPoint, label: []const u8 ```
    pub fn SetLabel(self: ?*anyopaque, label: []const u8) void {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        qtc.KPlotPoint_SetLabel(@ptrCast(self), label_str);
    }

    /// [Qt documentation](https://api.kde.org/kplotpoint.html#barWidth)
    ///
    /// ``` self: QtC.KPlotPoint ```
    pub fn BarWidth(self: ?*anyopaque) f64 {
        return qtc.KPlotPoint_BarWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kplotpoint.html#setBarWidth)
    ///
    /// ``` self: QtC.KPlotPoint, w: f64 ```
    pub fn SetBarWidth(self: ?*anyopaque, w: f64) void {
        qtc.KPlotPoint_SetBarWidth(@ptrCast(self), @floatCast(w));
    }

    /// [Qt documentation](https://api.kde.org/kplotpoint.html#dtor.KPlotPoint)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KPlotPoint ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KPlotPoint_Delete(@ptrCast(self));
    }
};
