const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KPlotPoint = @import("libqt6").KPlotPoint;
const KPlotWidget = @import("libqt6").KPlotWidget;
const QBrush = @import("libqt6").QBrush;
const QColor = @import("libqt6").QColor;
const QPainter = @import("libqt6").QPainter;
const QPen = @import("libqt6").QPen;
const QPointF = @import("libqt6").QPointF;
const kplotobject_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kplotobject.html)
pub const KPlotObject = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kplotobject.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KPlotObject,

    pub const _is_KPlotObject = {};

    /// New constructs a new KPlotObject object.
    ///
    pub fn New() KPlotObject {
        return .{ .ptr = qtc.KPlotObject_new() };
    }

    /// New2 constructs a new KPlotObject object.
    ///
    /// ## Parameter(s):
    ///
    /// ` color: QColor `
    ///
    pub fn New2(color: anytype) KPlotObject {
        comptime _ = @TypeOf(color)._is_QColor;
        return .{ .ptr = qtc.KPlotObject_new2(@ptrCast(color.ptr)) };
    }

    /// New3 constructs a new KPlotObject object.
    ///
    /// ## Parameter(s):
    ///
    /// ` color: QColor `
    ///
    /// ` otype: kplotobject_enums.PlotType `
    ///
    pub fn New3(color: anytype, otype: i32) KPlotObject {
        comptime _ = @TypeOf(color)._is_QColor;
        return .{ .ptr = qtc.KPlotObject_new3(@ptrCast(color.ptr), @bitCast(otype)) };
    }

    /// New4 constructs a new KPlotObject object.
    ///
    /// ## Parameter(s):
    ///
    /// ` color: QColor `
    ///
    /// ` otype: kplotobject_enums.PlotType `
    ///
    /// ` size: f64 `
    ///
    pub fn New4(color: anytype, otype: i32, size: f64) KPlotObject {
        comptime _ = @TypeOf(color)._is_QColor;
        return .{ .ptr = qtc.KPlotObject_new4(@ptrCast(color.ptr), @bitCast(otype), @bitCast(size)) };
    }

    /// New5 constructs a new KPlotObject object.
    ///
    /// ## Parameter(s):
    ///
    /// ` color: QColor `
    ///
    /// ` otype: kplotobject_enums.PlotType `
    ///
    /// ` size: f64 `
    ///
    /// ` ps: kplotobject_enums.PointStyle `
    ///
    pub fn New5(color: anytype, otype: i32, size: f64, ps: i32) KPlotObject {
        comptime _ = @TypeOf(color)._is_QColor;
        return .{ .ptr = qtc.KPlotObject_new5(@ptrCast(color.ptr), @bitCast(otype), @bitCast(size), @bitCast(ps)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kplotobject.html#plotTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotObject `
    ///
    /// ## Returns:
    ///
    /// ` flag of kplotobject_enums.PlotType `
    ///
    pub fn PlotTypes(self: KPlotObject) i32 {
        return qtc.KPlotObject_PlotTypes(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kplotobject.html#setShowPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotObject `
    ///
    /// ` b: bool `
    ///
    pub fn SetShowPoints(self: KPlotObject, b: bool) void {
        qtc.KPlotObject_SetShowPoints(@ptrCast(self.ptr), b);
    }

    /// ### [Upstream resources](https://api.kde.org/kplotobject.html#setShowLines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotObject `
    ///
    /// ` b: bool `
    ///
    pub fn SetShowLines(self: KPlotObject, b: bool) void {
        qtc.KPlotObject_SetShowLines(@ptrCast(self.ptr), b);
    }

    /// ### [Upstream resources](https://api.kde.org/kplotobject.html#setShowBars)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotObject `
    ///
    /// ` b: bool `
    ///
    pub fn SetShowBars(self: KPlotObject, b: bool) void {
        qtc.KPlotObject_SetShowBars(@ptrCast(self.ptr), b);
    }

    /// ### [Upstream resources](https://api.kde.org/kplotobject.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotObject `
    ///
    pub fn Size(self: KPlotObject) f64 {
        return qtc.KPlotObject_Size(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kplotobject.html#setSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotObject `
    ///
    /// ` s: f64 `
    ///
    pub fn SetSize(self: KPlotObject, s: f64) void {
        qtc.KPlotObject_SetSize(@ptrCast(self.ptr), @bitCast(s));
    }

    /// ### [Upstream resources](https://api.kde.org/kplotobject.html#pointStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotObject `
    ///
    /// ## Returns:
    ///
    /// ` kplotobject_enums.PointStyle `
    ///
    pub fn PointStyle(self: KPlotObject) i32 {
        return qtc.KPlotObject_PointStyle(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kplotobject.html#setPointStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotObject `
    ///
    /// ` p: kplotobject_enums.PointStyle `
    ///
    pub fn SetPointStyle(self: KPlotObject, p: i32) void {
        qtc.KPlotObject_SetPointStyle(@ptrCast(self.ptr), @bitCast(p));
    }

    /// ### [Upstream resources](https://api.kde.org/kplotobject.html#pen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotObject `
    ///
    pub fn Pen(self: KPlotObject) QPen {
        return .{ .ptr = qtc.KPlotObject_Pen(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kplotobject.html#setPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotObject `
    ///
    /// ` p: QPen `
    ///
    pub fn SetPen(self: KPlotObject, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPen;
        qtc.KPlotObject_SetPen(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kplotobject.html#linePen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotObject `
    ///
    pub fn LinePen(self: KPlotObject) QPen {
        return .{ .ptr = qtc.KPlotObject_LinePen(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kplotobject.html#setLinePen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotObject `
    ///
    /// ` p: QPen `
    ///
    pub fn SetLinePen(self: KPlotObject, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPen;
        qtc.KPlotObject_SetLinePen(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kplotobject.html#barPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotObject `
    ///
    pub fn BarPen(self: KPlotObject) QPen {
        return .{ .ptr = qtc.KPlotObject_BarPen(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kplotobject.html#setBarPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotObject `
    ///
    /// ` p: QPen `
    ///
    pub fn SetBarPen(self: KPlotObject, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPen;
        qtc.KPlotObject_SetBarPen(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kplotobject.html#labelPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotObject `
    ///
    pub fn LabelPen(self: KPlotObject) QPen {
        return .{ .ptr = qtc.KPlotObject_LabelPen(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kplotobject.html#setLabelPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotObject `
    ///
    /// ` p: QPen `
    ///
    pub fn SetLabelPen(self: KPlotObject, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPen;
        qtc.KPlotObject_SetLabelPen(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kplotobject.html#brush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotObject `
    ///
    pub fn Brush(self: KPlotObject) QBrush {
        return .{ .ptr = qtc.KPlotObject_Brush(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kplotobject.html#setBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotObject `
    ///
    /// ` b: QBrush `
    ///
    pub fn SetBrush(self: KPlotObject, b: anytype) void {
        comptime _ = @TypeOf(b)._is_QBrush;
        qtc.KPlotObject_SetBrush(@ptrCast(self.ptr), @ptrCast(b.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kplotobject.html#barBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotObject `
    ///
    pub fn BarBrush(self: KPlotObject) QBrush {
        return .{ .ptr = qtc.KPlotObject_BarBrush(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kplotobject.html#setBarBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotObject `
    ///
    /// ` b: QBrush `
    ///
    pub fn SetBarBrush(self: KPlotObject, b: anytype) void {
        comptime _ = @TypeOf(b)._is_QBrush;
        qtc.KPlotObject_SetBarBrush(@ptrCast(self.ptr), @ptrCast(b.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kplotobject.html#points)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Points(self: KPlotObject, allocator: std.mem.Allocator) []KPlotPoint {
        const _arr: qtc.libqt_list = qtc.KPlotObject_Points(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KPlotPoint, _arr.len) catch @panic("kplotobject.Points: Memory allocation failed");
        const _data: [*]QtC.KPlotPoint = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kplotobject.html#addPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotObject `
    ///
    /// ` p: QPointF `
    ///
    pub fn AddPoint(self: KPlotObject, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        qtc.KPlotObject_AddPoint(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kplotobject.html#addPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotObject `
    ///
    /// ` p: KPlotPoint `
    ///
    pub fn AddPoint2(self: KPlotObject, p: anytype) void {
        comptime _ = @TypeOf(p)._is_KPlotPoint;
        qtc.KPlotObject_AddPoint2(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kplotobject.html#addPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotObject `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn AddPoint3(self: KPlotObject, x: f64, y: f64) void {
        qtc.KPlotObject_AddPoint3(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://api.kde.org/kplotobject.html#removePoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotObject `
    ///
    /// ` index: i32 `
    ///
    pub fn RemovePoint(self: KPlotObject, index: i32) void {
        qtc.KPlotObject_RemovePoint(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://api.kde.org/kplotobject.html#clearPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotObject `
    ///
    pub fn ClearPoints(self: KPlotObject) void {
        qtc.KPlotObject_ClearPoints(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kplotobject.html#draw)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotObject `
    ///
    /// ` p: QPainter `
    ///
    /// ` pw: KPlotWidget `
    ///
    pub fn Draw(self: KPlotObject, p: anytype, pw: anytype) void {
        comptime _ = @TypeOf(p)._is_QPainter;
        comptime _ = @TypeOf(pw)._is_KPlotWidget;
        qtc.KPlotObject_Draw(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(pw.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kplotobject.html#addPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotObject `
    ///
    /// ` p: QPointF `
    ///
    /// ` label: []const u8 `
    ///
    pub fn AddPoint22(self: KPlotObject, p: anytype, label: []const u8) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        qtc.KPlotObject_AddPoint22(@ptrCast(self.ptr), @ptrCast(p.ptr), label_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kplotobject.html#addPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotObject `
    ///
    /// ` p: QPointF `
    ///
    /// ` label: []const u8 `
    ///
    /// ` barWidth: f64 `
    ///
    pub fn AddPoint32(self: KPlotObject, p: anytype, label: []const u8, barWidth: f64) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        qtc.KPlotObject_AddPoint32(@ptrCast(self.ptr), @ptrCast(p.ptr), label_str, @bitCast(barWidth));
    }

    /// ### [Upstream resources](https://api.kde.org/kplotobject.html#addPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotObject `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` label: []const u8 `
    ///
    pub fn AddPoint33(self: KPlotObject, x: f64, y: f64, label: []const u8) void {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        qtc.KPlotObject_AddPoint33(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), label_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kplotobject.html#addPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotObject `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    /// ` label: []const u8 `
    ///
    /// ` barWidth: f64 `
    ///
    pub fn AddPoint4(self: KPlotObject, x: f64, y: f64, label: []const u8, barWidth: f64) void {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        qtc.KPlotObject_AddPoint4(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), label_str, @bitCast(barWidth));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kplotobject.html#dtor.KPlotObject)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KPlotObject `
    ///
    pub fn Delete(self: KPlotObject) void {
        qtc.KPlotObject_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kplotobject.html#public-types)
pub const enums = struct {
    pub const PlotType = enum(i32) {
        pub const UnknownType: i32 = 0;
        pub const Points: i32 = 1;
        pub const Lines: i32 = 2;
        pub const Bars: i32 = 4;
    };

    pub const PointStyle = enum(i32) {
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
