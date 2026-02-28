const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qabstractseries_enums = @import("libqabstractseries.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qxyseries_enums = @import("libqxyseries.zig").enums;
const std = @import("std");
const map_i32_map_i32_qtcqvariant = std.AutoHashMapUnmanaged(i32, map_i32_qtcqvariant);
const map_i32_qtcqvariant = std.AutoHashMapUnmanaged(i32, QtC.QVariant);
const struct_f64_f64 = extern struct { first: f64, second: f64 };

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlineseries-qtcharts.html)
pub const qlineseries = struct {
    /// New constructs a new QLineSeries object.
    ///
    pub fn New() QtC.QLineSeries {
        return qtc.QLineSeries_new();
    }

    /// New2 constructs a new QLineSeries object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn New2(parent: ?*anyopaque) QtC.QLineSeries {
        return qtc.QLineSeries_new2(@ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QLineSeries_MetaObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMetaObject `
    ///
    pub fn OnMetaObject(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMetaObject) void {
        qtc.QLineSeries_OnMetaObject(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    pub fn SuperMetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QLineSeries_SuperMetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QLineSeries_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` callback: *const fn (self: QtC.QLineSeries, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QLineSeries_OnMetacast(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QLineSeries_SuperMetacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QLineSeries_Metacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` callback: *const fn (self: QtC.QLineSeries, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QLineSeries_OnMetacall(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QLineSeries_SuperMetacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr(s: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlineseries.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineseries-qtcharts.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ## Returns:
    ///
    /// ` qabstractseries_enums.SeriesType `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QLineSeries_Type(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineseries-qtcharts.html#type)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnType(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QLineSeries_OnType(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperType` instead
    ///
    pub const QBaseType = SuperType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineseries-qtcharts.html#type)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ## Returns:
    ///
    /// ` qabstractseries_enums.SeriesType `
    ///
    pub fn SuperType(self: ?*anyopaque) i32 {
        return qtc.QLineSeries_SuperType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr2(s: [:0]const u8, c: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlineseries.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr3(s: [:0]const u8, c: [:0]const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlineseries.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn Append(self: ?*anyopaque, x: f64, y: f64) void {
        qtc.QXYSeries_Append(@ptrCast(self), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` point: QtC.QPointF `
    ///
    pub fn Append2(self: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QXYSeries_Append2(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` points: []QtC.QPointF `
    ///
    pub fn Append3(self: ?*anyopaque, points: []QtC.QPointF) void {
        const points_list = qtc.libqt_list{
            .len = points.len,
            .data = @ptrCast(points.ptr),
        };
        qtc.QXYSeries_Append3(@ptrCast(self), points_list);
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#replace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` oldX: f64 `
    ///
    /// ` oldY: f64 `
    ///
    /// ` newX: f64 `
    ///
    /// ` newY: f64 `
    ///
    pub fn Replace(self: ?*anyopaque, oldX: f64, oldY: f64, newX: f64, newY: f64) void {
        qtc.QXYSeries_Replace(@ptrCast(self), @bitCast(oldX), @bitCast(oldY), @bitCast(newX), @bitCast(newY));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#replace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` oldPoint: QtC.QPointF `
    ///
    /// ` newPoint: QtC.QPointF `
    ///
    pub fn Replace2(self: ?*anyopaque, oldPoint: ?*anyopaque, newPoint: ?*anyopaque) void {
        qtc.QXYSeries_Replace2(@ptrCast(self), @ptrCast(oldPoint), @ptrCast(newPoint));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#replace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` newX: f64 `
    ///
    /// ` newY: f64 `
    ///
    pub fn Replace3(self: ?*anyopaque, index: i32, newX: f64, newY: f64) void {
        qtc.QXYSeries_Replace3(@ptrCast(self), @bitCast(index), @bitCast(newX), @bitCast(newY));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#replace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` newPoint: QtC.QPointF `
    ///
    pub fn Replace4(self: ?*anyopaque, index: i32, newPoint: ?*anyopaque) void {
        qtc.QXYSeries_Replace4(@ptrCast(self), @bitCast(index), @ptrCast(newPoint));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn Remove(self: ?*anyopaque, x: f64, y: f64) void {
        qtc.QXYSeries_Remove(@ptrCast(self), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` point: QtC.QPointF `
    ///
    pub fn Remove2(self: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QXYSeries_Remove2(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` index: i32 `
    ///
    pub fn Remove3(self: ?*anyopaque, index: i32) void {
        qtc.QXYSeries_Remove3(@ptrCast(self), @bitCast(index));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#removePoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn RemovePoints(self: ?*anyopaque, index: i32, count: i32) void {
        qtc.QXYSeries_RemovePoints(@ptrCast(self), @bitCast(index), @bitCast(count));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` point: QtC.QPointF `
    ///
    pub fn Insert(self: ?*anyopaque, index: i32, point: ?*anyopaque) void {
        qtc.QXYSeries_Insert(@ptrCast(self), @bitCast(index), @ptrCast(point));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QXYSeries_Clear(@ptrCast(self));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    pub fn Count(self: ?*anyopaque) i32 {
        return qtc.QXYSeries_Count(@ptrCast(self));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#points)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Points(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QPointF {
        const _arr: qtc.libqt_list = qtc.QXYSeries_Points(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QPointF, _arr.len) catch @panic("qlineseries.Points: Memory allocation failed");
        const _data: [*]QtC.QPointF = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointsVector)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PointsVector(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QPointF {
        const _arr: qtc.libqt_list = qtc.QXYSeries_PointsVector(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QPointF, _arr.len) catch @panic("qlineseries.PointsVector: Memory allocation failed");
        const _data: [*]QtC.QPointF = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#at)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` index: i32 `
    ///
    pub fn At(self: ?*anyopaque, index: i32) QtC.QPointF {
        return qtc.QXYSeries_At(@ptrCast(self), @bitCast(index));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` point: QtC.QPointF `
    ///
    pub fn OperatorShiftLeft(self: ?*anyopaque, point: ?*anyopaque) QtC.QXYSeries {
        return qtc.QXYSeries_OperatorShiftLeft(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` points: []QtC.QPointF `
    ///
    pub fn OperatorShiftLeft2(self: ?*anyopaque, points: []QtC.QPointF) QtC.QXYSeries {
        const points_list = qtc.libqt_list{
            .len = points.len,
            .data = @ptrCast(points.ptr),
        };
        return qtc.QXYSeries_OperatorShiftLeft2(@ptrCast(self), points_list);
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    pub fn Pen(self: ?*anyopaque) QtC.QPen {
        return qtc.QXYSeries_Pen(@ptrCast(self));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#brush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    pub fn Brush(self: ?*anyopaque) QtC.QBrush {
        return qtc.QXYSeries_Brush(@ptrCast(self));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setSelectedColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` color: QtC.QColor `
    ///
    pub fn SetSelectedColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QXYSeries_SetSelectedColor(@ptrCast(self), @ptrCast(color));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#selectedColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    pub fn SelectedColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QXYSeries_SelectedColor(@ptrCast(self));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPointsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    pub fn SetPointsVisible(self: ?*anyopaque) void {
        qtc.QXYSeries_SetPointsVisible(@ptrCast(self));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    pub fn PointsVisible(self: ?*anyopaque) bool {
        return qtc.QXYSeries_PointsVisible(@ptrCast(self));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` format: []const u8 `
    ///
    pub fn SetPointLabelsFormat(self: ?*anyopaque, format: []const u8) void {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        qtc.QXYSeries_SetPointLabelsFormat(@ptrCast(self), format_str);
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PointLabelsFormat(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QXYSeries_PointLabelsFormat(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlineseries.PointLabelsFormat: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    pub fn SetPointLabelsVisible(self: ?*anyopaque) void {
        qtc.QXYSeries_SetPointLabelsVisible(@ptrCast(self));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    pub fn PointLabelsVisible(self: ?*anyopaque) bool {
        return qtc.QXYSeries_PointLabelsVisible(@ptrCast(self));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` font: QtC.QFont `
    ///
    pub fn SetPointLabelsFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QXYSeries_SetPointLabelsFont(@ptrCast(self), @ptrCast(font));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    pub fn PointLabelsFont(self: ?*anyopaque) QtC.QFont {
        return qtc.QXYSeries_PointLabelsFont(@ptrCast(self));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` color: QtC.QColor `
    ///
    pub fn SetPointLabelsColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QXYSeries_SetPointLabelsColor(@ptrCast(self), @ptrCast(color));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    pub fn PointLabelsColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QXYSeries_PointLabelsColor(@ptrCast(self));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsClipping)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    pub fn SetPointLabelsClipping(self: ?*anyopaque) void {
        qtc.QXYSeries_SetPointLabelsClipping(@ptrCast(self));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsClipping)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    pub fn PointLabelsClipping(self: ?*anyopaque) bool {
        return qtc.QXYSeries_PointLabelsClipping(@ptrCast(self));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#replace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` points: []QtC.QPointF `
    ///
    pub fn Replace5(self: ?*anyopaque, points: []QtC.QPointF) void {
        const points_list = qtc.libqt_list{
            .len = points.len,
            .data = @ptrCast(points.ptr),
        };
        qtc.QXYSeries_Replace5(@ptrCast(self), points_list);
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#isPointSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` index: i32 `
    ///
    pub fn IsPointSelected(self: ?*anyopaque, index: i32) bool {
        return qtc.QXYSeries_IsPointSelected(@ptrCast(self), @bitCast(index));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#selectPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` index: i32 `
    ///
    pub fn SelectPoint(self: ?*anyopaque, index: i32) void {
        qtc.QXYSeries_SelectPoint(@ptrCast(self), @bitCast(index));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#deselectPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` index: i32 `
    ///
    pub fn DeselectPoint(self: ?*anyopaque, index: i32) void {
        qtc.QXYSeries_DeselectPoint(@ptrCast(self), @bitCast(index));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPointSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` selected: bool `
    ///
    pub fn SetPointSelected(self: ?*anyopaque, index: i32, selected: bool) void {
        qtc.QXYSeries_SetPointSelected(@ptrCast(self), @bitCast(index), selected);
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#selectAllPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    pub fn SelectAllPoints(self: ?*anyopaque) void {
        qtc.QXYSeries_SelectAllPoints(@ptrCast(self));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#deselectAllPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    pub fn DeselectAllPoints(self: ?*anyopaque) void {
        qtc.QXYSeries_DeselectAllPoints(@ptrCast(self));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#selectPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` indexes: []i32 `
    ///
    pub fn SelectPoints(self: ?*anyopaque, indexes: []i32) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = indexes.ptr,
        };
        qtc.QXYSeries_SelectPoints(@ptrCast(self), indexes_list);
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#deselectPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` indexes: []i32 `
    ///
    pub fn DeselectPoints(self: ?*anyopaque, indexes: []i32) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = indexes.ptr,
        };
        qtc.QXYSeries_DeselectPoints(@ptrCast(self), indexes_list);
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#toggleSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` indexes: []i32 `
    ///
    pub fn ToggleSelection(self: ?*anyopaque, indexes: []i32) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = indexes.ptr,
        };
        qtc.QXYSeries_ToggleSelection(@ptrCast(self), indexes_list);
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#selectedPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SelectedPoints(self: ?*anyopaque, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QXYSeries_SelectedPoints(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("qlineseries.SelectedPoints: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setLightMarker)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` lightMarker: QtC.QImage `
    ///
    pub fn SetLightMarker(self: ?*anyopaque, lightMarker: ?*anyopaque) void {
        qtc.QXYSeries_SetLightMarker(@ptrCast(self), @ptrCast(lightMarker));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#lightMarker)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    pub fn LightMarker(self: ?*anyopaque) QtC.QImage {
        return qtc.QXYSeries_LightMarker(@ptrCast(self));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setSelectedLightMarker)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` selectedLightMarker: QtC.QImage `
    ///
    pub fn SetSelectedLightMarker(self: ?*anyopaque, selectedLightMarker: ?*anyopaque) void {
        qtc.QXYSeries_SetSelectedLightMarker(@ptrCast(self), @ptrCast(selectedLightMarker));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#selectedLightMarker)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    pub fn SelectedLightMarker(self: ?*anyopaque) QtC.QImage {
        return qtc.QXYSeries_SelectedLightMarker(@ptrCast(self));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setMarkerSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` size: f64 `
    ///
    pub fn SetMarkerSize(self: ?*anyopaque, size: f64) void {
        qtc.QXYSeries_SetMarkerSize(@ptrCast(self), @bitCast(size));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#markerSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    pub fn MarkerSize(self: ?*anyopaque) f64 {
        return qtc.QXYSeries_MarkerSize(@ptrCast(self));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setBestFitLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    pub fn SetBestFitLineVisible(self: ?*anyopaque) void {
        qtc.QXYSeries_SetBestFitLineVisible(@ptrCast(self));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    pub fn BestFitLineVisible(self: ?*anyopaque) bool {
        return qtc.QXYSeries_BestFitLineVisible(@ptrCast(self));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineEquation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` ok: *bool `
    ///
    pub fn BestFitLineEquation(self: ?*anyopaque, ok: *bool) struct_f64_f64 {
        const _pair = qtc.QXYSeries_BestFitLineEquation(@ptrCast(self), @ptrCast(ok));
        return @bitCast(_pair);
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setBestFitLinePen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` pen: QtC.QPen `
    ///
    pub fn SetBestFitLinePen(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QXYSeries_SetBestFitLinePen(@ptrCast(self), @ptrCast(pen));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#bestFitLinePen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    pub fn BestFitLinePen(self: ?*anyopaque) QtC.QPen {
        return qtc.QXYSeries_BestFitLinePen(@ptrCast(self));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setBestFitLineColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` color: QtC.QColor `
    ///
    pub fn SetBestFitLineColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QXYSeries_SetBestFitLineColor(@ptrCast(self), @ptrCast(color));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    pub fn BestFitLineColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QXYSeries_BestFitLineColor(@ptrCast(self));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#clearPointConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` index: i32 `
    ///
    pub fn ClearPointConfiguration(self: ?*anyopaque, index: i32) void {
        qtc.QXYSeries_ClearPointConfiguration(@ptrCast(self), @bitCast(index));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#clearPointConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` key: qxyseries_enums.PointConfiguration `
    ///
    pub fn ClearPointConfiguration2(self: ?*anyopaque, index: i32, key: i32) void {
        qtc.QXYSeries_ClearPointConfiguration2(@ptrCast(self), @bitCast(index), @bitCast(key));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#clearPointsConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    pub fn ClearPointsConfiguration(self: ?*anyopaque) void {
        qtc.QXYSeries_ClearPointsConfiguration(@ptrCast(self));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#clearPointsConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` key: qxyseries_enums.PointConfiguration `
    ///
    pub fn ClearPointsConfiguration2(self: ?*anyopaque, key: i32) void {
        qtc.QXYSeries_ClearPointsConfiguration2(@ptrCast(self), @bitCast(key));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPointConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` configuration: map_i32_qtcqvariant (key: qxyseries_enums.PointConfiguration) `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SetPointConfiguration(self: ?*anyopaque, index: i32, configuration: map_i32_qtcqvariant, allocator: std.mem.Allocator) void {
        const configuration_count = configuration.count();
        const configuration_keys = allocator.alloc(i32, configuration_count) catch @panic("qlineseries.SetPointConfiguration: Memory allocation failed");
        defer allocator.free(configuration_keys);
        const configuration_values = allocator.alloc(QtC.QVariant, configuration_count) catch @panic("qlineseries.SetPointConfiguration: Memory allocation failed");
        defer allocator.free(configuration_values);
        var i: usize = 0;
        var configuration_it = configuration.iterator();
        while (configuration_it.next()) |it_entry| : (i += 1) {
            const configuration_key = it_entry.key_ptr.*;
            configuration_keys[i] = @bitCast(configuration_key);
            configuration_values[i] = @ptrCast(it_entry.value_ptr.*);
        }
        const configuration_map = qtc.libqt_map{
            .len = configuration_count,
            .keys = @ptrCast(configuration_keys.ptr),
            .values = @ptrCast(configuration_values.ptr),
        };
        qtc.QXYSeries_SetPointConfiguration(@ptrCast(self), @bitCast(index), configuration_map);
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPointConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` key: qxyseries_enums.PointConfiguration `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SetPointConfiguration2(self: ?*anyopaque, index: i32, key: i32, value: ?*anyopaque) void {
        qtc.QXYSeries_SetPointConfiguration2(@ptrCast(self), @bitCast(index), @bitCast(key), @ptrCast(value));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPointsConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` pointsConfiguration: map_i32_map_i32_qtcqvariant `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SetPointsConfiguration(self: ?*anyopaque, pointsConfiguration: map_i32_map_i32_qtcqvariant, allocator: std.mem.Allocator) void {
        const pointsConfiguration_count = pointsConfiguration.count();
        const pointsConfiguration_keys = allocator.alloc(i32, pointsConfiguration_count) catch @panic("qlineseries.SetPointsConfiguration: Memory allocation failed");
        defer allocator.free(pointsConfiguration_keys);
        const pointsConfiguration_values = allocator.alloc(map_i32_qtcqvariant, pointsConfiguration_count) catch @panic("qlineseries.SetPointsConfiguration: Memory allocation failed");
        defer allocator.free(pointsConfiguration_values);
        var i: usize = 0;
        var pointsConfiguration_it = pointsConfiguration.iterator();
        while (pointsConfiguration_it.next()) |it_entry| : (i += 1) {
            const pointsConfiguration_key = it_entry.key_ptr.*;
            pointsConfiguration_keys[i] = @bitCast(pointsConfiguration_key);
            pointsConfiguration_values[i] = it_entry.value_ptr.*;
        }
        const pointsConfiguration_map = qtc.libqt_map{
            .len = pointsConfiguration_count,
            .keys = @ptrCast(pointsConfiguration_keys.ptr),
            .values = @ptrCast(pointsConfiguration_values.ptr),
        };
        qtc.QXYSeries_SetPointsConfiguration(@ptrCast(self), pointsConfiguration_map);
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` map_i32_qtcqvariant (key: qxyseries_enums.PointConfiguration) `
    ///
    pub fn PointConfiguration(self: ?*anyopaque, index: i32, allocator: std.mem.Allocator) map_i32_qtcqvariant {
        const _map: qtc.libqt_map = qtc.QXYSeries_PointConfiguration(@ptrCast(self), @bitCast(index));
        var _ret: map_i32_qtcqvariant = .empty;
        defer {
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]QtC.QVariant = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            _ret.put(allocator, _key, @ptrCast(_value)) catch @panic("qlineseries.PointConfiguration: Memory allocation failed");
        }
        return _ret;
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointsConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PointsConfiguration(self: ?*anyopaque, allocator: std.mem.Allocator) map_i32_map_i32_qtcqvariant {
        const _map: qtc.libqt_map = qtc.QXYSeries_PointsConfiguration(@ptrCast(self));
        var _ret: map_i32_map_i32_qtcqvariant = .empty;
        defer {
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]map_i32_qtcqvariant = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            _ret.put(allocator, _key, _value) catch @panic("qlineseries.PointsConfiguration: Memory allocation failed");
        }
        return _ret;
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#sizeBy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` sourceData: []f64 `
    ///
    /// ` minSize: f64 `
    ///
    /// ` maxSize: f64 `
    ///
    pub fn SizeBy(self: ?*anyopaque, sourceData: []f64, minSize: f64, maxSize: f64) void {
        const sourceData_list = qtc.libqt_list{
            .len = sourceData.len,
            .data = sourceData.ptr,
        };
        qtc.QXYSeries_SizeBy(@ptrCast(self), sourceData_list, @bitCast(minSize), @bitCast(maxSize));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#colorBy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` sourceData: []f64 `
    ///
    pub fn ColorBy(self: ?*anyopaque, sourceData: []f64) void {
        const sourceData_list = qtc.libqt_list{
            .len = sourceData.len,
            .data = sourceData.ptr,
        };
        qtc.QXYSeries_ColorBy(@ptrCast(self), sourceData_list);
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#clicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` point: QtC.QPointF `
    ///
    pub fn Clicked(self: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QXYSeries_Clicked(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#clicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` callback: *const fn (self: QtC.QLineSeries, point: QtC.QPointF) callconv(.c) void `
    ///
    pub fn OnClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QXYSeries_Connect_Clicked(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#hovered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` point: QtC.QPointF `
    ///
    /// ` state: bool `
    ///
    pub fn Hovered(self: ?*anyopaque, point: ?*anyopaque, state: bool) void {
        qtc.QXYSeries_Hovered(@ptrCast(self), @ptrCast(point), state);
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#hovered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` callback: *const fn (self: QtC.QLineSeries, point: QtC.QPointF, state: bool) callconv(.c) void `
    ///
    pub fn OnHovered(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, bool) callconv(.c) void) void {
        qtc.QXYSeries_Connect_Hovered(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` point: QtC.QPointF `
    ///
    pub fn Pressed(self: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QXYSeries_Pressed(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pressed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` callback: *const fn (self: QtC.QLineSeries, point: QtC.QPointF) callconv(.c) void `
    ///
    pub fn OnPressed(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QXYSeries_Connect_Pressed(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#released)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` point: QtC.QPointF `
    ///
    pub fn Released(self: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QXYSeries_Released(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#released)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` callback: *const fn (self: QtC.QLineSeries, point: QtC.QPointF) callconv(.c) void `
    ///
    pub fn OnReleased(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QXYSeries_Connect_Released(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#doubleClicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` point: QtC.QPointF `
    ///
    pub fn DoubleClicked(self: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QXYSeries_DoubleClicked(@ptrCast(self), @ptrCast(point));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#doubleClicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` callback: *const fn (self: QtC.QLineSeries, point: QtC.QPointF) callconv(.c) void `
    ///
    pub fn OnDoubleClicked(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QXYSeries_Connect_DoubleClicked(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointReplaced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` index: i32 `
    ///
    pub fn PointReplaced(self: ?*anyopaque, index: i32) void {
        qtc.QXYSeries_PointReplaced(@ptrCast(self), @bitCast(index));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointReplaced)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` callback: *const fn (self: QtC.QLineSeries, index: i32) callconv(.c) void `
    ///
    pub fn OnPointReplaced(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointReplaced(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` index: i32 `
    ///
    pub fn PointRemoved(self: ?*anyopaque, index: i32) void {
        qtc.QXYSeries_PointRemoved(@ptrCast(self), @bitCast(index));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` callback: *const fn (self: QtC.QLineSeries, index: i32) callconv(.c) void `
    ///
    pub fn OnPointRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointRemoved(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` index: i32 `
    ///
    pub fn PointAdded(self: ?*anyopaque, index: i32) void {
        qtc.QXYSeries_PointAdded(@ptrCast(self), @bitCast(index));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointAdded)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` callback: *const fn (self: QtC.QLineSeries, index: i32) callconv(.c) void `
    ///
    pub fn OnPointAdded(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointAdded(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#colorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` color: QtC.QColor `
    ///
    pub fn ColorChanged(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QXYSeries_ColorChanged(@ptrCast(self), @ptrCast(color));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#colorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` callback: *const fn (self: QtC.QLineSeries, color: QtC.QColor) callconv(.c) void `
    ///
    pub fn OnColorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, QtC.QColor) callconv(.c) void) void {
        qtc.QXYSeries_Connect_ColorChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#selectedColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` color: QtC.QColor `
    ///
    pub fn SelectedColorChanged(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QXYSeries_SelectedColorChanged(@ptrCast(self), @ptrCast(color));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#selectedColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` callback: *const fn (self: QtC.QLineSeries, color: QtC.QColor) callconv(.c) void `
    ///
    pub fn OnSelectedColorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QXYSeries_Connect_SelectedColorChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointsReplaced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    pub fn PointsReplaced(self: ?*anyopaque) void {
        qtc.QXYSeries_PointsReplaced(@ptrCast(self));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointsReplaced)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` callback: *const fn (self: QtC.QLineSeries) callconv(.c) void `
    ///
    pub fn OnPointsReplaced(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointsReplaced(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFormatChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` format: []const u8 `
    ///
    pub fn PointLabelsFormatChanged(self: ?*anyopaque, format: []const u8) void {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        qtc.QXYSeries_PointLabelsFormatChanged(@ptrCast(self), format_str);
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFormatChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` callback: *const fn (self: QtC.QLineSeries, format: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnPointLabelsFormatChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointLabelsFormatChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsVisibilityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn PointLabelsVisibilityChanged(self: ?*anyopaque, visible: bool) void {
        qtc.QXYSeries_PointLabelsVisibilityChanged(@ptrCast(self), visible);
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsVisibilityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` callback: *const fn (self: QtC.QLineSeries, visible: bool) callconv(.c) void `
    ///
    pub fn OnPointLabelsVisibilityChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointLabelsVisibilityChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFontChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` font: QtC.QFont `
    ///
    pub fn PointLabelsFontChanged(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QXYSeries_PointLabelsFontChanged(@ptrCast(self), @ptrCast(font));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFontChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` callback: *const fn (self: QtC.QLineSeries, font: QtC.QFont) callconv(.c) void `
    ///
    pub fn OnPointLabelsFontChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointLabelsFontChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` color: QtC.QColor `
    ///
    pub fn PointLabelsColorChanged(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QXYSeries_PointLabelsColorChanged(@ptrCast(self), @ptrCast(color));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` callback: *const fn (self: QtC.QLineSeries, color: QtC.QColor) callconv(.c) void `
    ///
    pub fn OnPointLabelsColorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointLabelsColorChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsClippingChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` clipping: bool `
    ///
    pub fn PointLabelsClippingChanged(self: ?*anyopaque, clipping: bool) void {
        qtc.QXYSeries_PointLabelsClippingChanged(@ptrCast(self), clipping);
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsClippingChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` callback: *const fn (self: QtC.QLineSeries, clipping: bool) callconv(.c) void `
    ///
    pub fn OnPointLabelsClippingChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointLabelsClippingChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointsRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn PointsRemoved(self: ?*anyopaque, index: i32, count: i32) void {
        qtc.QXYSeries_PointsRemoved(@ptrCast(self), @bitCast(index), @bitCast(count));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointsRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` callback: *const fn (self: QtC.QLineSeries, index: i32, count: i32) callconv(.c) void `
    ///
    pub fn OnPointsRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointsRemoved(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#penChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` pen: QtC.QPen `
    ///
    pub fn PenChanged(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QXYSeries_PenChanged(@ptrCast(self), @ptrCast(pen));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#penChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` callback: *const fn (self: QtC.QLineSeries, pen: QtC.QPen) callconv(.c) void `
    ///
    pub fn OnPenChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PenChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#selectedPointsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    pub fn SelectedPointsChanged(self: ?*anyopaque) void {
        qtc.QXYSeries_SelectedPointsChanged(@ptrCast(self));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#selectedPointsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` callback: *const fn (self: QtC.QLineSeries) callconv(.c) void `
    ///
    pub fn OnSelectedPointsChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QXYSeries_Connect_SelectedPointsChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#lightMarkerChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` lightMarker: QtC.QImage `
    ///
    pub fn LightMarkerChanged(self: ?*anyopaque, lightMarker: ?*anyopaque) void {
        qtc.QXYSeries_LightMarkerChanged(@ptrCast(self), @ptrCast(lightMarker));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#lightMarkerChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` callback: *const fn (self: QtC.QLineSeries, lightMarker: QtC.QImage) callconv(.c) void `
    ///
    pub fn OnLightMarkerChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QXYSeries_Connect_LightMarkerChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#selectedLightMarkerChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` selectedLightMarker: QtC.QImage `
    ///
    pub fn SelectedLightMarkerChanged(self: ?*anyopaque, selectedLightMarker: ?*anyopaque) void {
        qtc.QXYSeries_SelectedLightMarkerChanged(@ptrCast(self), @ptrCast(selectedLightMarker));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#selectedLightMarkerChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` callback: *const fn (self: QtC.QLineSeries, selectedLightMarker: QtC.QImage) callconv(.c) void `
    ///
    pub fn OnSelectedLightMarkerChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QXYSeries_Connect_SelectedLightMarkerChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineVisibilityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn BestFitLineVisibilityChanged(self: ?*anyopaque, visible: bool) void {
        qtc.QXYSeries_BestFitLineVisibilityChanged(@ptrCast(self), visible);
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineVisibilityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` callback: *const fn (self: QtC.QLineSeries, visible: bool) callconv(.c) void `
    ///
    pub fn OnBestFitLineVisibilityChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QXYSeries_Connect_BestFitLineVisibilityChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#bestFitLinePenChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` pen: QtC.QPen `
    ///
    pub fn BestFitLinePenChanged(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QXYSeries_BestFitLinePenChanged(@ptrCast(self), @ptrCast(pen));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#bestFitLinePenChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` callback: *const fn (self: QtC.QLineSeries, pen: QtC.QPen) callconv(.c) void `
    ///
    pub fn OnBestFitLinePenChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QXYSeries_Connect_BestFitLinePenChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` color: QtC.QColor `
    ///
    pub fn BestFitLineColorChanged(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QXYSeries_BestFitLineColorChanged(@ptrCast(self), @ptrCast(color));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` callback: *const fn (self: QtC.QLineSeries, color: QtC.QColor) callconv(.c) void `
    ///
    pub fn OnBestFitLineColorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QXYSeries_Connect_BestFitLineColorChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointsConfigurationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` configuration: map_i32_map_i32_qtcqvariant `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PointsConfigurationChanged(self: ?*anyopaque, configuration: map_i32_map_i32_qtcqvariant, allocator: std.mem.Allocator) void {
        const configuration_count = configuration.count();
        const configuration_keys = allocator.alloc(i32, configuration_count) catch @panic("qlineseries.PointsConfigurationChanged: Memory allocation failed");
        defer allocator.free(configuration_keys);
        const configuration_values = allocator.alloc(map_i32_qtcqvariant, configuration_count) catch @panic("qlineseries.PointsConfigurationChanged: Memory allocation failed");
        defer allocator.free(configuration_values);
        var i: usize = 0;
        var configuration_it = configuration.iterator();
        while (configuration_it.next()) |it_entry| : (i += 1) {
            const configuration_key = it_entry.key_ptr.*;
            configuration_keys[i] = @bitCast(configuration_key);
            configuration_values[i] = it_entry.value_ptr.*;
        }
        const configuration_map = qtc.libqt_map{
            .len = configuration_count,
            .keys = @ptrCast(configuration_keys.ptr),
            .values = @ptrCast(configuration_values.ptr),
        };
        qtc.QXYSeries_PointsConfigurationChanged(@ptrCast(self), configuration_map);
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointsConfigurationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` callback: *const fn (self: QtC.QLineSeries, configuration: qtc.libqt_map (map_i32_map_i32_qtcqvariant)) callconv(.c) void `
    ///
    pub fn OnPointsConfigurationChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, qtc.libqt_map) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointsConfigurationChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#markerSizeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` size: f64 `
    ///
    pub fn MarkerSizeChanged(self: ?*anyopaque, size: f64) void {
        qtc.QXYSeries_MarkerSizeChanged(@ptrCast(self), @bitCast(size));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#markerSizeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` callback: *const fn (self: QtC.QLineSeries, size: f64) callconv(.c) void `
    ///
    pub fn OnMarkerSizeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f64) callconv(.c) void) void {
        qtc.QXYSeries_Connect_MarkerSizeChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPointsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn SetPointsVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QXYSeries_SetPointsVisible1(@ptrCast(self), visible);
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn SetPointLabelsVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QXYSeries_SetPointLabelsVisible1(@ptrCast(self), visible);
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsClipping)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetPointLabelsClipping1(self: ?*anyopaque, enabled: bool) void {
        qtc.QXYSeries_SetPointLabelsClipping1(@ptrCast(self), enabled);
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setBestFitLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn SetBestFitLineVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QXYSeries_SetBestFitLineVisible1(@ptrCast(self), visible);
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#colorBy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` sourceData: []f64 `
    ///
    /// ` gradient: QtC.QLinearGradient `
    ///
    pub fn ColorBy2(self: ?*anyopaque, sourceData: []f64, gradient: ?*anyopaque) void {
        const sourceData_list = qtc.libqt_list{
            .len = sourceData.len,
            .data = sourceData.ptr,
        };
        qtc.QXYSeries_ColorBy2(@ptrCast(self), sourceData_list, @ptrCast(gradient));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QAbstractSeries_SetName(@ptrCast(self), name_str);
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractSeries_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlineseries.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    pub fn SetVisible(self: ?*anyopaque) void {
        qtc.QAbstractSeries_SetVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    pub fn IsVisible(self: ?*anyopaque) bool {
        return qtc.QAbstractSeries_IsVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    pub fn Opacity(self: ?*anyopaque) f64 {
        return qtc.QAbstractSeries_Opacity(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` opacity: f64 `
    ///
    pub fn SetOpacity(self: ?*anyopaque, opacity: f64) void {
        qtc.QAbstractSeries_SetOpacity(@ptrCast(self), @bitCast(opacity));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    pub fn SetUseOpenGL(self: ?*anyopaque) void {
        qtc.QAbstractSeries_SetUseOpenGL(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    pub fn UseOpenGL(self: ?*anyopaque) bool {
        return qtc.QAbstractSeries_UseOpenGL(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#chart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    pub fn Chart(self: ?*anyopaque) QtC.QChart {
        return qtc.QAbstractSeries_Chart(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#attachAxis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` axis: QtC.QAbstractAxis `
    ///
    pub fn AttachAxis(self: ?*anyopaque, axis: ?*anyopaque) bool {
        return qtc.QAbstractSeries_AttachAxis(@ptrCast(self), @ptrCast(axis));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#detachAxis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` axis: QtC.QAbstractAxis `
    ///
    pub fn DetachAxis(self: ?*anyopaque, axis: ?*anyopaque) bool {
        return qtc.QAbstractSeries_DetachAxis(@ptrCast(self), @ptrCast(axis));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#attachedAxes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AttachedAxes(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QAbstractAxis {
        const _arr: qtc.libqt_list = qtc.QAbstractSeries_AttachedAxes(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QAbstractAxis, _arr.len) catch @panic("qlineseries.AttachedAxes: Memory allocation failed");
        const _data: [*]QtC.QAbstractAxis = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    pub fn Show(self: ?*anyopaque) void {
        qtc.QAbstractSeries_Show(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    pub fn Hide(self: ?*anyopaque) void {
        qtc.QAbstractSeries_Hide(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    pub fn NameChanged(self: ?*anyopaque) void {
        qtc.QAbstractSeries_NameChanged(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` callback: *const fn (self: QtC.QLineSeries) callconv(.c) void `
    ///
    pub fn OnNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_NameChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    pub fn VisibleChanged(self: ?*anyopaque) void {
        qtc.QAbstractSeries_VisibleChanged(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` callback: *const fn (self: QtC.QLineSeries) callconv(.c) void `
    ///
    pub fn OnVisibleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_VisibleChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    pub fn OpacityChanged(self: ?*anyopaque) void {
        qtc.QAbstractSeries_OpacityChanged(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` callback: *const fn (self: QtC.QLineSeries) callconv(.c) void `
    ///
    pub fn OnOpacityChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_OpacityChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    pub fn UseOpenGLChanged(self: ?*anyopaque) void {
        qtc.QAbstractSeries_UseOpenGLChanged(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` callback: *const fn (self: QtC.QLineSeries) callconv(.c) void `
    ///
    pub fn OnUseOpenGLChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_UseOpenGLChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractSeries_SetVisible1(@ptrCast(self), visible);
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` enable: bool `
    ///
    pub fn SetUseOpenGL1(self: ?*anyopaque, enable: bool) void {
        qtc.QAbstractSeries_SetUseOpenGL1(@ptrCast(self), enable);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlineseries.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` thread: QtC.QThread `
    ///
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: ?*anyopaque, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qlineseries.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` filterObj: QtC.QObject `
    ///
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` obj: QtC.QObject `
    ///
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    pub fn Connect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect3(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: QtC.QMetaMethod `
    ///
    pub fn Disconnect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    pub fn Disconnect3(self: ?*anyopaque) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect4(self: ?*anyopaque, receiver: ?*anyopaque) bool {
        return qtc.QObject_Disconnect4(@ptrCast(self), @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect5(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, name: [:0]const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: ?*anyopaque, name: [:0]const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qlineseries.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qlineseries.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` callback: *const fn (self: QtC.QLineSeries) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: ?*anyopaque, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: ?*anyopaque, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8, param5: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect5(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring, @bitCast(param5));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect52(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @bitCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @bitCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: ?*anyopaque, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect22(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect22(@ptrCast(self), signal_Cstring, @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: ?*anyopaque, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self), @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` param1: QtC.QObject `
    ///
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` callback: *const fn (self: QtC.QLineSeries, param1: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPen)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` pen: QtC.QPen `
    ///
    pub fn SetPen(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QLineSeries_SetPen(@ptrCast(self), @ptrCast(pen));
    }

    /// ### DEPRECATED: Use `SuperSetPen` instead
    ///
    pub const QBaseSetPen = SuperSetPen;

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPen)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` pen: QtC.QPen `
    ///
    pub fn SuperSetPen(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QLineSeries_SuperSetPen(@ptrCast(self), @ptrCast(pen));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPen)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLineSeries`
    ///
    /// ` callback: *const fn (self: QtC.QLineSeries, pen: QtC.QPen) callconv(.c) void `
    ///
    pub fn OnSetPen(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLineSeries_OnSetPen(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setBrush)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` brush: QtC.QBrush `
    ///
    pub fn SetBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QLineSeries_SetBrush(@ptrCast(self), @ptrCast(brush));
    }

    /// ### DEPRECATED: Use `SuperSetBrush` instead
    ///
    pub const QBaseSetBrush = SuperSetBrush;

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setBrush)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` brush: QtC.QBrush `
    ///
    pub fn SuperSetBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QLineSeries_SuperSetBrush(@ptrCast(self), @ptrCast(brush));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setBrush)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLineSeries`
    ///
    /// ` callback: *const fn (self: QtC.QLineSeries, brush: QtC.QBrush) callconv(.c) void `
    ///
    pub fn OnSetBrush(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLineSeries_OnSetBrush(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setColor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` color: QtC.QColor `
    ///
    pub fn SetColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QLineSeries_SetColor(@ptrCast(self), @ptrCast(color));
    }

    /// ### DEPRECATED: Use `SuperSetColor` instead
    ///
    pub const QBaseSetColor = SuperSetColor;

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setColor)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` color: QtC.QColor `
    ///
    pub fn SuperSetColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QLineSeries_SuperSetColor(@ptrCast(self), @ptrCast(color));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setColor)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLineSeries`
    ///
    /// ` callback: *const fn (self: QtC.QLineSeries, color: QtC.QColor) callconv(.c) void `
    ///
    pub fn OnSetColor(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLineSeries_OnSetColor(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#color)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    pub fn Color(self: ?*anyopaque) QtC.QColor {
        return qtc.QLineSeries_Color(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperColor` instead
    ///
    pub const QBaseColor = SuperColor;

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#color)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    pub fn SuperColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QLineSeries_SuperColor(@ptrCast(self));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#color)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLineSeries`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QColor `
    ///
    pub fn OnColor(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QColor) void {
        qtc.QLineSeries_OnColor(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QLineSeries_Event(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QLineSeries_SuperEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLineSeries`
    ///
    /// ` callback: *const fn (self: QtC.QLineSeries, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QLineSeries_OnEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QLineSeries_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QLineSeries_SuperEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLineSeries`
    ///
    /// ` callback: *const fn (self: QtC.QLineSeries, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QLineSeries_OnEventFilter(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLineSeries_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLineSeries_SuperTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLineSeries`
    ///
    /// ` callback: *const fn (self: QtC.QLineSeries, event: QtC.QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLineSeries_OnTimerEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLineSeries_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperChildEvent` instead
    ///
    pub const QBaseChildEvent = SuperChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn SuperChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLineSeries_SuperChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLineSeries`
    ///
    /// ` callback: *const fn (self: QtC.QLineSeries, event: QtC.QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLineSeries_OnChildEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLineSeries_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperCustomEvent` instead
    ///
    pub const QBaseCustomEvent = SuperCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLineSeries_SuperCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLineSeries`
    ///
    /// ` callback: *const fn (self: QtC.QLineSeries, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLineSeries_OnCustomEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QLineSeries_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// ### DEPRECATED: Use `SuperConnectNotify` instead
    ///
    pub const QBaseConnectNotify = SuperConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QLineSeries_SuperConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLineSeries`
    ///
    /// ` callback: *const fn (self: QtC.QLineSeries, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLineSeries_OnConnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QLineSeries_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// ### DEPRECATED: Use `SuperDisconnectNotify` instead
    ///
    pub const QBaseDisconnectNotify = SuperDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QLineSeries_SuperDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLineSeries`
    ///
    /// ` callback: *const fn (self: QtC.QLineSeries, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLineSeries_OnDisconnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QLineSeries_Sender(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperSender` instead
    ///
    pub const QBaseSender = SuperSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    pub fn SuperSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QLineSeries_SuperSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLineSeries`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QLineSeries_OnSender(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QLineSeries_SenderSignalIndex(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperSenderSignalIndex` instead
    ///
    pub const QBaseSenderSignalIndex = SuperSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    pub fn SuperSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QLineSeries_SuperSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLineSeries`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QLineSeries_OnSenderSignalIndex(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QLineSeries_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// ### DEPRECATED: Use `SuperReceivers` instead
    ///
    pub const QBaseReceivers = SuperReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QLineSeries_SuperReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLineSeries`
    ///
    /// ` callback: *const fn (self: QtC.QLineSeries, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QLineSeries_OnReceivers(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QLineSeries_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// ### DEPRECATED: Use `SuperIsSignalConnected` instead
    ///
    pub const QBaseIsSignalConnected = SuperIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QLineSeries_SuperIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLineSeries`
    ///
    /// ` callback: *const fn (self: QtC.QLineSeries, signal: QtC.QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QLineSeries_OnIsSignalConnected(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLineSeries `
    ///
    /// ` callback: *const fn (self: QtC.QLineSeries, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineseries-qtcharts.html#dtor.QLineSeries)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QLineSeries `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QLineSeries_Delete(@ptrCast(self));
    }
};
