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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KPlotObject object in C++ memory
    ///
    pub fn new() KPlotObject {
        return .{ .ptr = qtc.KPlotObject_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KPlotObject object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` color: QColor `
    ///
    pub fn new2(color: anytype) KPlotObject {
        comptime _ = @TypeOf(color)._is_QColor;
        return .{ .ptr = qtc.KPlotObject_new2(@ptrCast(color.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KPlotObject object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` color: QColor `
    ///
    /// ` otype: kplotobject_enums.PlotType `
    ///
    pub fn new3(color: anytype, otype: i32) KPlotObject {
        comptime _ = @TypeOf(color)._is_QColor;
        return .{ .ptr = qtc.KPlotObject_new3(@ptrCast(color.ptr), @bitCast(otype)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new KPlotObject object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` color: QColor `
    ///
    /// ` otype: kplotobject_enums.PlotType `
    ///
    /// ` _size: f64 `
    ///
    pub fn new4(color: anytype, otype: i32, _size: f64) KPlotObject {
        comptime _ = @TypeOf(color)._is_QColor;
        return .{ .ptr = qtc.KPlotObject_new4(@ptrCast(color.ptr), @bitCast(otype), @bitCast(_size)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new KPlotObject object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` color: QColor `
    ///
    /// ` otype: kplotobject_enums.PlotType `
    ///
    /// ` _size: f64 `
    ///
    /// ` ps: kplotobject_enums.PointStyle `
    ///
    pub fn new5(color: anytype, otype: i32, _size: f64, ps: i32) KPlotObject {
        comptime _ = @TypeOf(color)._is_QColor;
        return .{ .ptr = qtc.KPlotObject_new5(@ptrCast(color.ptr), @bitCast(otype), @bitCast(_size), @bitCast(ps)) };
    }

    /// ### DEPRECATED: Use `plotTypes` instead
    ///
    pub const PlotTypes = plotTypes;

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
    pub fn plotTypes(self: KPlotObject) i32 {
        return qtc.KPlotObject_PlotTypes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setShowPoints` instead
    ///
    pub const SetShowPoints = setShowPoints;

    /// ### [Upstream resources](https://api.kde.org/kplotobject.html#setShowPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotObject `
    ///
    /// ` b: bool `
    ///
    pub fn setShowPoints(self: KPlotObject, b: bool) void {
        qtc.KPlotObject_SetShowPoints(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `setShowLines` instead
    ///
    pub const SetShowLines = setShowLines;

    /// ### [Upstream resources](https://api.kde.org/kplotobject.html#setShowLines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotObject `
    ///
    /// ` b: bool `
    ///
    pub fn setShowLines(self: KPlotObject, b: bool) void {
        qtc.KPlotObject_SetShowLines(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `setShowBars` instead
    ///
    pub const SetShowBars = setShowBars;

    /// ### [Upstream resources](https://api.kde.org/kplotobject.html#setShowBars)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotObject `
    ///
    /// ` b: bool `
    ///
    pub fn setShowBars(self: KPlotObject, b: bool) void {
        qtc.KPlotObject_SetShowBars(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// ### [Upstream resources](https://api.kde.org/kplotobject.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotObject `
    ///
    pub fn size(self: KPlotObject) f64 {
        return qtc.KPlotObject_Size(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSize` instead
    ///
    pub const SetSize = setSize;

    /// ### [Upstream resources](https://api.kde.org/kplotobject.html#setSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotObject `
    ///
    /// ` s: f64 `
    ///
    pub fn setSize(self: KPlotObject, s: f64) void {
        qtc.KPlotObject_SetSize(@ptrCast(self.ptr), @bitCast(s));
    }

    /// ### DEPRECATED: Use `pointStyle` instead
    ///
    pub const PointStyle = pointStyle;

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
    pub fn pointStyle(self: KPlotObject) i32 {
        return qtc.KPlotObject_PointStyle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPointStyle` instead
    ///
    pub const SetPointStyle = setPointStyle;

    /// ### [Upstream resources](https://api.kde.org/kplotobject.html#setPointStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotObject `
    ///
    /// ` p: kplotobject_enums.PointStyle `
    ///
    pub fn setPointStyle(self: KPlotObject, p: i32) void {
        qtc.KPlotObject_SetPointStyle(@ptrCast(self.ptr), @bitCast(p));
    }

    /// ### DEPRECATED: Use `pen` instead
    ///
    pub const Pen = pen;

    /// ### [Upstream resources](https://api.kde.org/kplotobject.html#pen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotObject `
    ///
    pub fn pen(self: KPlotObject) QPen {
        return .{ .ptr = qtc.KPlotObject_Pen(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPen` instead
    ///
    pub const SetPen = setPen;

    /// ### [Upstream resources](https://api.kde.org/kplotobject.html#setPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotObject `
    ///
    /// ` p: QPen `
    ///
    pub fn setPen(self: KPlotObject, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPen;
        qtc.KPlotObject_SetPen(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `linePen` instead
    ///
    pub const LinePen = linePen;

    /// ### [Upstream resources](https://api.kde.org/kplotobject.html#linePen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotObject `
    ///
    pub fn linePen(self: KPlotObject) QPen {
        return .{ .ptr = qtc.KPlotObject_LinePen(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setLinePen` instead
    ///
    pub const SetLinePen = setLinePen;

    /// ### [Upstream resources](https://api.kde.org/kplotobject.html#setLinePen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotObject `
    ///
    /// ` p: QPen `
    ///
    pub fn setLinePen(self: KPlotObject, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPen;
        qtc.KPlotObject_SetLinePen(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `barPen` instead
    ///
    pub const BarPen = barPen;

    /// ### [Upstream resources](https://api.kde.org/kplotobject.html#barPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotObject `
    ///
    pub fn barPen(self: KPlotObject) QPen {
        return .{ .ptr = qtc.KPlotObject_BarPen(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBarPen` instead
    ///
    pub const SetBarPen = setBarPen;

    /// ### [Upstream resources](https://api.kde.org/kplotobject.html#setBarPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotObject `
    ///
    /// ` p: QPen `
    ///
    pub fn setBarPen(self: KPlotObject, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPen;
        qtc.KPlotObject_SetBarPen(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `labelPen` instead
    ///
    pub const LabelPen = labelPen;

    /// ### [Upstream resources](https://api.kde.org/kplotobject.html#labelPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotObject `
    ///
    pub fn labelPen(self: KPlotObject) QPen {
        return .{ .ptr = qtc.KPlotObject_LabelPen(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setLabelPen` instead
    ///
    pub const SetLabelPen = setLabelPen;

    /// ### [Upstream resources](https://api.kde.org/kplotobject.html#setLabelPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotObject `
    ///
    /// ` p: QPen `
    ///
    pub fn setLabelPen(self: KPlotObject, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPen;
        qtc.KPlotObject_SetLabelPen(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `brush` instead
    ///
    pub const Brush = brush;

    /// ### [Upstream resources](https://api.kde.org/kplotobject.html#brush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotObject `
    ///
    pub fn brush(self: KPlotObject) QBrush {
        return .{ .ptr = qtc.KPlotObject_Brush(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBrush` instead
    ///
    pub const SetBrush = setBrush;

    /// ### [Upstream resources](https://api.kde.org/kplotobject.html#setBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotObject `
    ///
    /// ` b: QBrush `
    ///
    pub fn setBrush(self: KPlotObject, b: anytype) void {
        comptime _ = @TypeOf(b)._is_QBrush;
        qtc.KPlotObject_SetBrush(@ptrCast(self.ptr), @ptrCast(b.ptr));
    }

    /// ### DEPRECATED: Use `barBrush` instead
    ///
    pub const BarBrush = barBrush;

    /// ### [Upstream resources](https://api.kde.org/kplotobject.html#barBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotObject `
    ///
    pub fn barBrush(self: KPlotObject) QBrush {
        return .{ .ptr = qtc.KPlotObject_BarBrush(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBarBrush` instead
    ///
    pub const SetBarBrush = setBarBrush;

    /// ### [Upstream resources](https://api.kde.org/kplotobject.html#setBarBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotObject `
    ///
    /// ` b: QBrush `
    ///
    pub fn setBarBrush(self: KPlotObject, b: anytype) void {
        comptime _ = @TypeOf(b)._is_QBrush;
        qtc.KPlotObject_SetBarBrush(@ptrCast(self.ptr), @ptrCast(b.ptr));
    }

    /// ### DEPRECATED: Use `points` instead
    ///
    pub const Points = points;

    /// ### [Upstream resources](https://api.kde.org/kplotobject.html#points)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn points(self: KPlotObject, allocator: std.mem.Allocator) []KPlotPoint {
        const _arr: qtc.libqt_list = qtc.KPlotObject_Points(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KPlotPoint, _arr.len) catch @panic("KPlotObject.points: Memory allocation failed");
        const _data_val: [*]QtC.KPlotPoint = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `addPoint` instead
    ///
    pub const AddPoint = addPoint;

    /// ### [Upstream resources](https://api.kde.org/kplotobject.html#addPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotObject `
    ///
    /// ` p: QPointF `
    ///
    pub fn addPoint(self: KPlotObject, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        qtc.KPlotObject_AddPoint(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `addPoint2` instead
    ///
    pub const AddPoint2 = addPoint2;

    /// ### [Upstream resources](https://api.kde.org/kplotobject.html#addPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotObject `
    ///
    /// ` p: KPlotPoint `
    ///
    pub fn addPoint2(self: KPlotObject, p: anytype) void {
        comptime _ = @TypeOf(p)._is_KPlotPoint;
        qtc.KPlotObject_AddPoint2(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `addPoint3` instead
    ///
    pub const AddPoint3 = addPoint3;

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
    pub fn addPoint3(self: KPlotObject, x: f64, y: f64) void {
        qtc.KPlotObject_AddPoint3(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `removePoint` instead
    ///
    pub const RemovePoint = removePoint;

    /// ### [Upstream resources](https://api.kde.org/kplotobject.html#removePoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotObject `
    ///
    /// ` index: i32 `
    ///
    pub fn removePoint(self: KPlotObject, index: i32) void {
        qtc.KPlotObject_RemovePoint(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `clearPoints` instead
    ///
    pub const ClearPoints = clearPoints;

    /// ### [Upstream resources](https://api.kde.org/kplotobject.html#clearPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPlotObject `
    ///
    pub fn clearPoints(self: KPlotObject) void {
        qtc.KPlotObject_ClearPoints(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `draw` instead
    ///
    pub const Draw = draw;

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
    pub fn draw(self: KPlotObject, p: anytype, pw: anytype) void {
        comptime _ = @TypeOf(p)._is_QPainter;
        comptime _ = @TypeOf(pw)._is_KPlotWidget;
        qtc.KPlotObject_Draw(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(pw.ptr));
    }

    /// ### DEPRECATED: Use `addPoint22` instead
    ///
    pub const AddPoint22 = addPoint22;

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
    pub fn addPoint22(self: KPlotObject, p: anytype, label: []const u8) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        qtc.KPlotObject_AddPoint22(@ptrCast(self.ptr), @ptrCast(p.ptr), label_str);
    }

    /// ### DEPRECATED: Use `addPoint32` instead
    ///
    pub const AddPoint32 = addPoint32;

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
    pub fn addPoint32(self: KPlotObject, p: anytype, label: []const u8, barWidth: f64) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        qtc.KPlotObject_AddPoint32(@ptrCast(self.ptr), @ptrCast(p.ptr), label_str, @bitCast(barWidth));
    }

    /// ### DEPRECATED: Use `addPoint33` instead
    ///
    pub const AddPoint33 = addPoint33;

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
    pub fn addPoint33(self: KPlotObject, x: f64, y: f64, label: []const u8) void {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        qtc.KPlotObject_AddPoint33(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), label_str);
    }

    /// ### DEPRECATED: Use `addPoint4` instead
    ///
    pub const AddPoint4 = addPoint4;

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
    pub fn addPoint4(self: KPlotObject, x: f64, y: f64, label: []const u8, barWidth: f64) void {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        qtc.KPlotObject_AddPoint4(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), label_str, @bitCast(barWidth));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kplotobject.html#dtor.KPlotObject)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KPlotObject `
    ///
    pub fn delete(self: KPlotObject) void {
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
