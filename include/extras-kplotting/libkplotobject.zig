const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kplotobject_enums = enums;
const std = @import("std");

/// https://api.kde.org/kplotobject.html
pub const kplotobject = struct {
    /// New constructs a new KPlotObject object.
    ///
    ///
    pub fn New() QtC.KPlotObject {
        return qtc.KPlotObject_new();
    }

    /// New2 constructs a new KPlotObject object.
    ///
    /// ``` color: QtC.QColor ```
    pub fn New2(color: ?*anyopaque) QtC.KPlotObject {
        return qtc.KPlotObject_new2(@ptrCast(color));
    }

    /// New3 constructs a new KPlotObject object.
    ///
    /// ``` color: QtC.QColor, otype: kplotobject_enums.PlotType ```
    pub fn New3(color: ?*anyopaque, otype: i32) QtC.KPlotObject {
        return qtc.KPlotObject_new3(@ptrCast(color), @intCast(otype));
    }

    /// New4 constructs a new KPlotObject object.
    ///
    /// ``` color: QtC.QColor, otype: kplotobject_enums.PlotType, size: f64 ```
    pub fn New4(color: ?*anyopaque, otype: i32, size: f64) QtC.KPlotObject {
        return qtc.KPlotObject_new4(@ptrCast(color), @intCast(otype), @floatCast(size));
    }

    /// New5 constructs a new KPlotObject object.
    ///
    /// ``` color: QtC.QColor, otype: kplotobject_enums.PlotType, size: f64, ps: kplotobject_enums.PointStyle ```
    pub fn New5(color: ?*anyopaque, otype: i32, size: f64, ps: i32) QtC.KPlotObject {
        return qtc.KPlotObject_new5(@ptrCast(color), @intCast(otype), @floatCast(size), @intCast(ps));
    }

    /// [Qt documentation](https://api.kde.org/kplotobject.html#plotTypes)
    ///
    /// ``` self: QtC.KPlotObject ```
    ///
    /// Returns: ``` flag of kplotobject_enums.PlotType ```
    pub fn PlotTypes(self: ?*anyopaque) i32 {
        return qtc.KPlotObject_PlotTypes(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kplotobject.html#setShowPoints)
    ///
    /// ``` self: QtC.KPlotObject, b: bool ```
    pub fn SetShowPoints(self: ?*anyopaque, b: bool) void {
        qtc.KPlotObject_SetShowPoints(@ptrCast(self), b);
    }

    /// [Qt documentation](https://api.kde.org/kplotobject.html#setShowLines)
    ///
    /// ``` self: QtC.KPlotObject, b: bool ```
    pub fn SetShowLines(self: ?*anyopaque, b: bool) void {
        qtc.KPlotObject_SetShowLines(@ptrCast(self), b);
    }

    /// [Qt documentation](https://api.kde.org/kplotobject.html#setShowBars)
    ///
    /// ``` self: QtC.KPlotObject, b: bool ```
    pub fn SetShowBars(self: ?*anyopaque, b: bool) void {
        qtc.KPlotObject_SetShowBars(@ptrCast(self), b);
    }

    /// [Qt documentation](https://api.kde.org/kplotobject.html#size)
    ///
    /// ``` self: QtC.KPlotObject ```
    pub fn Size(self: ?*anyopaque) f64 {
        return qtc.KPlotObject_Size(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kplotobject.html#setSize)
    ///
    /// ``` self: QtC.KPlotObject, s: f64 ```
    pub fn SetSize(self: ?*anyopaque, s: f64) void {
        qtc.KPlotObject_SetSize(@ptrCast(self), @floatCast(s));
    }

    /// [Qt documentation](https://api.kde.org/kplotobject.html#pointStyle)
    ///
    /// ``` self: QtC.KPlotObject ```
    ///
    /// Returns: ``` kplotobject_enums.PointStyle ```
    pub fn PointStyle(self: ?*anyopaque) i32 {
        return qtc.KPlotObject_PointStyle(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kplotobject.html#setPointStyle)
    ///
    /// ``` self: QtC.KPlotObject, p: kplotobject_enums.PointStyle ```
    pub fn SetPointStyle(self: ?*anyopaque, p: i32) void {
        qtc.KPlotObject_SetPointStyle(@ptrCast(self), @intCast(p));
    }

    /// [Qt documentation](https://api.kde.org/kplotobject.html#pen)
    ///
    /// ``` self: QtC.KPlotObject ```
    pub fn Pen(self: ?*anyopaque) QtC.QPen {
        return qtc.KPlotObject_Pen(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kplotobject.html#setPen)
    ///
    /// ``` self: QtC.KPlotObject, p: QtC.QPen ```
    pub fn SetPen(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.KPlotObject_SetPen(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://api.kde.org/kplotobject.html#linePen)
    ///
    /// ``` self: QtC.KPlotObject ```
    pub fn LinePen(self: ?*anyopaque) QtC.QPen {
        return qtc.KPlotObject_LinePen(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kplotobject.html#setLinePen)
    ///
    /// ``` self: QtC.KPlotObject, p: QtC.QPen ```
    pub fn SetLinePen(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.KPlotObject_SetLinePen(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://api.kde.org/kplotobject.html#barPen)
    ///
    /// ``` self: QtC.KPlotObject ```
    pub fn BarPen(self: ?*anyopaque) QtC.QPen {
        return qtc.KPlotObject_BarPen(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kplotobject.html#setBarPen)
    ///
    /// ``` self: QtC.KPlotObject, p: QtC.QPen ```
    pub fn SetBarPen(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.KPlotObject_SetBarPen(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://api.kde.org/kplotobject.html#labelPen)
    ///
    /// ``` self: QtC.KPlotObject ```
    pub fn LabelPen(self: ?*anyopaque) QtC.QPen {
        return qtc.KPlotObject_LabelPen(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kplotobject.html#setLabelPen)
    ///
    /// ``` self: QtC.KPlotObject, p: QtC.QPen ```
    pub fn SetLabelPen(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.KPlotObject_SetLabelPen(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://api.kde.org/kplotobject.html#brush)
    ///
    /// ``` self: QtC.KPlotObject ```
    pub fn Brush(self: ?*anyopaque) QtC.QBrush {
        return qtc.KPlotObject_Brush(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kplotobject.html#setBrush)
    ///
    /// ``` self: QtC.KPlotObject, b: QtC.QBrush ```
    pub fn SetBrush(self: ?*anyopaque, b: ?*anyopaque) void {
        qtc.KPlotObject_SetBrush(@ptrCast(self), @ptrCast(b));
    }

    /// [Qt documentation](https://api.kde.org/kplotobject.html#barBrush)
    ///
    /// ``` self: QtC.KPlotObject ```
    pub fn BarBrush(self: ?*anyopaque) QtC.QBrush {
        return qtc.KPlotObject_BarBrush(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kplotobject.html#setBarBrush)
    ///
    /// ``` self: QtC.KPlotObject, b: QtC.QBrush ```
    pub fn SetBarBrush(self: ?*anyopaque, b: ?*anyopaque) void {
        qtc.KPlotObject_SetBarBrush(@ptrCast(self), @ptrCast(b));
    }

    /// [Qt documentation](https://api.kde.org/kplotobject.html#points)
    ///
    /// ``` self: QtC.KPlotObject, allocator: std.mem.Allocator ```
    pub fn Points(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.KPlotPoint {
        const _arr: qtc.libqt_list = qtc.KPlotObject_Points(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KPlotPoint, _arr.len) catch @panic("kplotobject.Points: Memory allocation failed");
        const _data: [*]QtC.KPlotPoint = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kplotobject.html#addPoint)
    ///
    /// ``` self: QtC.KPlotObject, p: QtC.QPointF ```
    pub fn AddPoint(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.KPlotObject_AddPoint(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://api.kde.org/kplotobject.html#addPoint)
    ///
    /// ``` self: QtC.KPlotObject, p: QtC.KPlotPoint ```
    pub fn AddPoint2(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.KPlotObject_AddPoint2(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://api.kde.org/kplotobject.html#addPoint)
    ///
    /// ``` self: QtC.KPlotObject, x: f64, y: f64 ```
    pub fn AddPoint3(self: ?*anyopaque, x: f64, y: f64) void {
        qtc.KPlotObject_AddPoint3(@ptrCast(self), @floatCast(x), @floatCast(y));
    }

    /// [Qt documentation](https://api.kde.org/kplotobject.html#removePoint)
    ///
    /// ``` self: QtC.KPlotObject, index: i32 ```
    pub fn RemovePoint(self: ?*anyopaque, index: i32) void {
        qtc.KPlotObject_RemovePoint(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://api.kde.org/kplotobject.html#clearPoints)
    ///
    /// ``` self: QtC.KPlotObject ```
    pub fn ClearPoints(self: ?*anyopaque) void {
        qtc.KPlotObject_ClearPoints(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kplotobject.html#draw)
    ///
    /// ``` self: QtC.KPlotObject, p: QtC.QPainter, pw: QtC.KPlotWidget ```
    pub fn Draw(self: ?*anyopaque, p: ?*anyopaque, pw: ?*anyopaque) void {
        qtc.KPlotObject_Draw(@ptrCast(self), @ptrCast(p), @ptrCast(pw));
    }

    /// [Qt documentation](https://api.kde.org/kplotobject.html#addPoint)
    ///
    /// ``` self: QtC.KPlotObject, p: QtC.QPointF, label: []const u8 ```
    pub fn AddPoint22(self: ?*anyopaque, p: ?*anyopaque, label: []const u8) void {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        qtc.KPlotObject_AddPoint22(@ptrCast(self), @ptrCast(p), label_str);
    }

    /// [Qt documentation](https://api.kde.org/kplotobject.html#addPoint)
    ///
    /// ``` self: QtC.KPlotObject, p: QtC.QPointF, label: []const u8, barWidth: f64 ```
    pub fn AddPoint32(self: ?*anyopaque, p: ?*anyopaque, label: []const u8, barWidth: f64) void {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        qtc.KPlotObject_AddPoint32(@ptrCast(self), @ptrCast(p), label_str, @floatCast(barWidth));
    }

    /// [Qt documentation](https://api.kde.org/kplotobject.html#addPoint)
    ///
    /// ``` self: QtC.KPlotObject, x: f64, y: f64, label: []const u8 ```
    pub fn AddPoint33(self: ?*anyopaque, x: f64, y: f64, label: []const u8) void {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        qtc.KPlotObject_AddPoint33(@ptrCast(self), @floatCast(x), @floatCast(y), label_str);
    }

    /// [Qt documentation](https://api.kde.org/kplotobject.html#addPoint)
    ///
    /// ``` self: QtC.KPlotObject, x: f64, y: f64, label: []const u8, barWidth: f64 ```
    pub fn AddPoint4(self: ?*anyopaque, x: f64, y: f64, label: []const u8, barWidth: f64) void {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        qtc.KPlotObject_AddPoint4(@ptrCast(self), @floatCast(x), @floatCast(y), label_str, @floatCast(barWidth));
    }

    /// [Qt documentation](https://api.kde.org/kplotobject.html#dtor.KPlotObject)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KPlotObject ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KPlotObject_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/kplotobject.html#types
pub const enums = struct {
    pub const PlotType = enum {
        pub const UnknownType: i32 = 0;
        pub const Points: i32 = 1;
        pub const Lines: i32 = 2;
        pub const Bars: i32 = 4;
    };

    pub const PointStyle = enum {
        pub const NoPoints: i32 = 0;
        pub const Circle: i32 = 1;
        pub const Letter: i32 = 2;
        pub const Triangle: i32 = 3;
        pub const Square: i32 = 4;
        pub const Pentagon: i32 = 5;
        pub const Hexagon: i32 = 6;
        pub const Asterisk: i32 = 7;
        pub const Star: i32 = 8;
        pub const UnknownPoint: i32 = 9;
    };
};
