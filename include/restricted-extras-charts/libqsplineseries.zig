const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAbstractAxis = @import("libqt6").QAbstractAxis;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QBrush = @import("libqt6").QBrush;
const QChart = @import("libqt6").QChart;
const QChildEvent = @import("libqt6").QChildEvent;
const QColor = @import("libqt6").QColor;
const QEvent = @import("libqt6").QEvent;
const QFont = @import("libqt6").QFont;
const QImage = @import("libqt6").QImage;
const QLinearGradient = @import("libqt6").QLinearGradient;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPen = @import("libqt6").QPen;
const QPointF = @import("libqt6").QPointF;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const QXYSeries = @import("libqt6").QXYSeries;
const qabstractseries_enums = @import("libqabstractseries.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qxyseries_enums = @import("libqxyseries.zig").enums;
const std = @import("std");
const Map_i32_Map_i32_QVariant = std.AutoHashMapUnmanaged(i32, Map_i32_QVariant);
const Map_i32_QVariant = std.AutoHashMapUnmanaged(i32, QVariant);
const Struct_f64_f64 = extern struct { first: f64, second: f64 };

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsplineseries-qtcharts.html)
pub const QSplineSeries = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsplineseries-qtcharts.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSplineSeries,

    pub const _is_QSplineSeries = {};
    pub const _is_QLineSeries = {};
    pub const _is_QXYSeries = {};
    pub const _is_QAbstractSeries = {};
    pub const _is_QObject = {};

    /// New constructs a new QSplineSeries object.
    ///
    pub fn New() QSplineSeries {
        return .{ .ptr = qtc.QSplineSeries_new() };
    }

    /// New2 constructs a new QSplineSeries object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) QSplineSeries {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QSplineSeries_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn MetaObject(self: QSplineSeries) QMetaObject {
        return .{ .ptr = qtc.QSplineSeries_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QSplineSeries, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QSplineSeries_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSplineSeries `
    ///
    pub fn SuperMetaObject(self: QSplineSeries) QMetaObject {
        return .{ .ptr = qtc.QSplineSeries_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QSplineSeries, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSplineSeries_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` callback: *const fn (self: QSplineSeries, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QSplineSeries, callback: *const fn (QSplineSeries, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QSplineSeries_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QSplineSeries, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSplineSeries_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QSplineSeries, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QSplineSeries_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` callback: *const fn (self: QSplineSeries, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QSplineSeries, callback: *const fn (QSplineSeries, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QSplineSeries_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QSplineSeries, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QSplineSeries_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn Tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsplineseries.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsplineseries-qtcharts.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ## Returns:
    ///
    /// ` qabstractseries_enums.SeriesType `
    ///
    pub fn Type(self: QSplineSeries) i32 {
        return qtc.QSplineSeries_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsplineseries-qtcharts.html#type)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnType(self: QSplineSeries, callback: *const fn () callconv(.c) i32) void {
        qtc.QSplineSeries_OnType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperType` instead
    ///
    pub const QBaseType = SuperType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsplineseries-qtcharts.html#type)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ## Returns:
    ///
    /// ` qabstractseries_enums.SeriesType `
    ///
    pub fn SuperType(self: QSplineSeries) i32 {
        return qtc.QSplineSeries_SuperType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    pub fn Tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsplineseries.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    pub fn Tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsplineseries.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn Append(self: QSplineSeries, x: f64, y: f64) void {
        qtc.QXYSeries_Append(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` point: QPointF `
    ///
    pub fn Append2(self: QSplineSeries, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QPointF;
        qtc.QXYSeries_Append2(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` points: []QPointF `
    ///
    pub fn Append3(self: QSplineSeries, points: []QPointF) void {
        const points_list = qtc.libqt_list{
            .len = points.len,
            .data = @ptrCast(points.ptr),
        };
        qtc.QXYSeries_Append3(@ptrCast(self.ptr), points_list);
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#replace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` oldX: f64 `
    ///
    /// ` oldY: f64 `
    ///
    /// ` newX: f64 `
    ///
    /// ` newY: f64 `
    ///
    pub fn Replace(self: QSplineSeries, oldX: f64, oldY: f64, newX: f64, newY: f64) void {
        qtc.QXYSeries_Replace(@ptrCast(self.ptr), @bitCast(oldX), @bitCast(oldY), @bitCast(newX), @bitCast(newY));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#replace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` oldPoint: QPointF `
    ///
    /// ` newPoint: QPointF `
    ///
    pub fn Replace2(self: QSplineSeries, oldPoint: anytype, newPoint: anytype) void {
        comptime _ = @TypeOf(oldPoint)._is_QPointF;
        comptime _ = @TypeOf(newPoint)._is_QPointF;
        qtc.QXYSeries_Replace2(@ptrCast(self.ptr), @ptrCast(oldPoint.ptr), @ptrCast(newPoint.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#replace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` newX: f64 `
    ///
    /// ` newY: f64 `
    ///
    pub fn Replace3(self: QSplineSeries, index: i32, newX: f64, newY: f64) void {
        qtc.QXYSeries_Replace3(@ptrCast(self.ptr), @bitCast(index), @bitCast(newX), @bitCast(newY));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#replace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` newPoint: QPointF `
    ///
    pub fn Replace4(self: QSplineSeries, index: i32, newPoint: anytype) void {
        comptime _ = @TypeOf(newPoint)._is_QPointF;
        qtc.QXYSeries_Replace4(@ptrCast(self.ptr), @bitCast(index), @ptrCast(newPoint.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn Remove(self: QSplineSeries, x: f64, y: f64) void {
        qtc.QXYSeries_Remove(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` point: QPointF `
    ///
    pub fn Remove2(self: QSplineSeries, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QPointF;
        qtc.QXYSeries_Remove2(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` index: i32 `
    ///
    pub fn Remove3(self: QSplineSeries, index: i32) void {
        qtc.QXYSeries_Remove3(@ptrCast(self.ptr), @bitCast(index));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#removePoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn RemovePoints(self: QSplineSeries, index: i32, count: i32) void {
        qtc.QXYSeries_RemovePoints(@ptrCast(self.ptr), @bitCast(index), @bitCast(count));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` point: QPointF `
    ///
    pub fn Insert(self: QSplineSeries, index: i32, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QPointF;
        qtc.QXYSeries_Insert(@ptrCast(self.ptr), @bitCast(index), @ptrCast(point.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn Clear(self: QSplineSeries) void {
        qtc.QXYSeries_Clear(@ptrCast(self.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn Count(self: QSplineSeries) i32 {
        return qtc.QXYSeries_Count(@ptrCast(self.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#points)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Points(self: QSplineSeries, allocator: std.mem.Allocator) []QPointF {
        const _arr: qtc.libqt_list = qtc.QXYSeries_Points(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QPointF, _arr.len) catch @panic("qsplineseries.Points: Memory allocation failed");
        const _data: [*]QtC.QPointF = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointsVector)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PointsVector(self: QSplineSeries, allocator: std.mem.Allocator) []QPointF {
        const _arr: qtc.libqt_list = qtc.QXYSeries_PointsVector(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QPointF, _arr.len) catch @panic("qsplineseries.PointsVector: Memory allocation failed");
        const _data: [*]QtC.QPointF = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#at)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` index: i32 `
    ///
    pub fn At(self: QSplineSeries, index: i32) QPointF {
        return .{ .ptr = qtc.QXYSeries_At(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` point: QPointF `
    ///
    pub fn OperatorShiftLeft(self: QSplineSeries, point: anytype) QXYSeries {
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QXYSeries_OperatorShiftLeft(@ptrCast(self.ptr), @ptrCast(point.ptr)) };
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` points: []QPointF `
    ///
    pub fn OperatorShiftLeft2(self: QSplineSeries, points: []QPointF) QXYSeries {
        const points_list = qtc.libqt_list{
            .len = points.len,
            .data = @ptrCast(points.ptr),
        };
        return .{ .ptr = qtc.QXYSeries_OperatorShiftLeft2(@ptrCast(self.ptr), points_list) };
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn Pen(self: QSplineSeries) QPen {
        return .{ .ptr = qtc.QXYSeries_Pen(@ptrCast(self.ptr)) };
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#brush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn Brush(self: QSplineSeries) QBrush {
        return .{ .ptr = qtc.QXYSeries_Brush(@ptrCast(self.ptr)) };
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setSelectedColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` color: QColor `
    ///
    pub fn SetSelectedColor(self: QSplineSeries, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QXYSeries_SetSelectedColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#selectedColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn SelectedColor(self: QSplineSeries) QColor {
        return .{ .ptr = qtc.QXYSeries_SelectedColor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPointsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn SetPointsVisible(self: QSplineSeries) void {
        qtc.QXYSeries_SetPointsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn PointsVisible(self: QSplineSeries) bool {
        return qtc.QXYSeries_PointsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` format: []const u8 `
    ///
    pub fn SetPointLabelsFormat(self: QSplineSeries, format: []const u8) void {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        qtc.QXYSeries_SetPointLabelsFormat(@ptrCast(self.ptr), format_str);
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PointLabelsFormat(self: QSplineSeries, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QXYSeries_PointLabelsFormat(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsplineseries.PointLabelsFormat: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn SetPointLabelsVisible(self: QSplineSeries) void {
        qtc.QXYSeries_SetPointLabelsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn PointLabelsVisible(self: QSplineSeries) bool {
        return qtc.QXYSeries_PointLabelsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` font: QFont `
    ///
    pub fn SetPointLabelsFont(self: QSplineSeries, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QXYSeries_SetPointLabelsFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn PointLabelsFont(self: QSplineSeries) QFont {
        return .{ .ptr = qtc.QXYSeries_PointLabelsFont(@ptrCast(self.ptr)) };
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` color: QColor `
    ///
    pub fn SetPointLabelsColor(self: QSplineSeries, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QXYSeries_SetPointLabelsColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn PointLabelsColor(self: QSplineSeries) QColor {
        return .{ .ptr = qtc.QXYSeries_PointLabelsColor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsClipping)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn SetPointLabelsClipping(self: QSplineSeries) void {
        qtc.QXYSeries_SetPointLabelsClipping(@ptrCast(self.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsClipping)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn PointLabelsClipping(self: QSplineSeries) bool {
        return qtc.QXYSeries_PointLabelsClipping(@ptrCast(self.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#replace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` points: []QPointF `
    ///
    pub fn Replace5(self: QSplineSeries, points: []QPointF) void {
        const points_list = qtc.libqt_list{
            .len = points.len,
            .data = @ptrCast(points.ptr),
        };
        qtc.QXYSeries_Replace5(@ptrCast(self.ptr), points_list);
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#isPointSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` index: i32 `
    ///
    pub fn IsPointSelected(self: QSplineSeries, index: i32) bool {
        return qtc.QXYSeries_IsPointSelected(@ptrCast(self.ptr), @bitCast(index));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#selectPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` index: i32 `
    ///
    pub fn SelectPoint(self: QSplineSeries, index: i32) void {
        qtc.QXYSeries_SelectPoint(@ptrCast(self.ptr), @bitCast(index));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#deselectPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` index: i32 `
    ///
    pub fn DeselectPoint(self: QSplineSeries, index: i32) void {
        qtc.QXYSeries_DeselectPoint(@ptrCast(self.ptr), @bitCast(index));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPointSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` selected: bool `
    ///
    pub fn SetPointSelected(self: QSplineSeries, index: i32, selected: bool) void {
        qtc.QXYSeries_SetPointSelected(@ptrCast(self.ptr), @bitCast(index), selected);
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#selectAllPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn SelectAllPoints(self: QSplineSeries) void {
        qtc.QXYSeries_SelectAllPoints(@ptrCast(self.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#deselectAllPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn DeselectAllPoints(self: QSplineSeries) void {
        qtc.QXYSeries_DeselectAllPoints(@ptrCast(self.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#selectPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` indexes: []i32 `
    ///
    pub fn SelectPoints(self: QSplineSeries, indexes: []i32) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = indexes.ptr,
        };
        qtc.QXYSeries_SelectPoints(@ptrCast(self.ptr), indexes_list);
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#deselectPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` indexes: []i32 `
    ///
    pub fn DeselectPoints(self: QSplineSeries, indexes: []i32) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = indexes.ptr,
        };
        qtc.QXYSeries_DeselectPoints(@ptrCast(self.ptr), indexes_list);
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#toggleSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` indexes: []i32 `
    ///
    pub fn ToggleSelection(self: QSplineSeries, indexes: []i32) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = indexes.ptr,
        };
        qtc.QXYSeries_ToggleSelection(@ptrCast(self.ptr), indexes_list);
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#selectedPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SelectedPoints(self: QSplineSeries, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QXYSeries_SelectedPoints(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("qsplineseries.SelectedPoints: Memory allocation failed");
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
    /// ` self: QSplineSeries `
    ///
    /// ` lightMarker: QImage `
    ///
    pub fn SetLightMarker(self: QSplineSeries, lightMarker: anytype) void {
        comptime _ = @TypeOf(lightMarker)._is_QImage;
        qtc.QXYSeries_SetLightMarker(@ptrCast(self.ptr), @ptrCast(lightMarker.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#lightMarker)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn LightMarker(self: QSplineSeries) QImage {
        return .{ .ptr = qtc.QXYSeries_LightMarker(@ptrCast(self.ptr)) };
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setSelectedLightMarker)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` selectedLightMarker: QImage `
    ///
    pub fn SetSelectedLightMarker(self: QSplineSeries, selectedLightMarker: anytype) void {
        comptime _ = @TypeOf(selectedLightMarker)._is_QImage;
        qtc.QXYSeries_SetSelectedLightMarker(@ptrCast(self.ptr), @ptrCast(selectedLightMarker.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#selectedLightMarker)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn SelectedLightMarker(self: QSplineSeries) QImage {
        return .{ .ptr = qtc.QXYSeries_SelectedLightMarker(@ptrCast(self.ptr)) };
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setMarkerSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` size: f64 `
    ///
    pub fn SetMarkerSize(self: QSplineSeries, size: f64) void {
        qtc.QXYSeries_SetMarkerSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#markerSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn MarkerSize(self: QSplineSeries) f64 {
        return qtc.QXYSeries_MarkerSize(@ptrCast(self.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setBestFitLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn SetBestFitLineVisible(self: QSplineSeries) void {
        qtc.QXYSeries_SetBestFitLineVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn BestFitLineVisible(self: QSplineSeries) bool {
        return qtc.QXYSeries_BestFitLineVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineEquation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` ok: *bool `
    ///
    pub fn BestFitLineEquation(self: QSplineSeries, ok: *bool) Struct_f64_f64 {
        const _pair = qtc.QXYSeries_BestFitLineEquation(@ptrCast(self.ptr), @ptrCast(ok));
        return @bitCast(_pair);
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setBestFitLinePen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` pen: QPen `
    ///
    pub fn SetBestFitLinePen(self: QSplineSeries, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QXYSeries_SetBestFitLinePen(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#bestFitLinePen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn BestFitLinePen(self: QSplineSeries) QPen {
        return .{ .ptr = qtc.QXYSeries_BestFitLinePen(@ptrCast(self.ptr)) };
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setBestFitLineColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` color: QColor `
    ///
    pub fn SetBestFitLineColor(self: QSplineSeries, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QXYSeries_SetBestFitLineColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn BestFitLineColor(self: QSplineSeries) QColor {
        return .{ .ptr = qtc.QXYSeries_BestFitLineColor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#clearPointConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` index: i32 `
    ///
    pub fn ClearPointConfiguration(self: QSplineSeries, index: i32) void {
        qtc.QXYSeries_ClearPointConfiguration(@ptrCast(self.ptr), @bitCast(index));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#clearPointConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` key: qxyseries_enums.PointConfiguration `
    ///
    pub fn ClearPointConfiguration2(self: QSplineSeries, index: i32, key: i32) void {
        qtc.QXYSeries_ClearPointConfiguration2(@ptrCast(self.ptr), @bitCast(index), @bitCast(key));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#clearPointsConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn ClearPointsConfiguration(self: QSplineSeries) void {
        qtc.QXYSeries_ClearPointsConfiguration(@ptrCast(self.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#clearPointsConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` key: qxyseries_enums.PointConfiguration `
    ///
    pub fn ClearPointsConfiguration2(self: QSplineSeries, key: i32) void {
        qtc.QXYSeries_ClearPointsConfiguration2(@ptrCast(self.ptr), @bitCast(key));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPointConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: i32 `
    ///
    /// ` configuration: Map_i32_QVariant (key: qxyseries_enums.PointConfiguration) `
    ///
    pub fn SetPointConfiguration(self: QSplineSeries, allocator: std.mem.Allocator, index: i32, configuration: Map_i32_QVariant) void {
        const configuration_count = configuration.count();
        const configuration_keys = allocator.alloc(i32, configuration_count) catch @panic("qsplineseries.SetPointConfiguration: Memory allocation failed");
        defer allocator.free(configuration_keys);
        const configuration_values = allocator.alloc(QtC.QVariant, configuration_count) catch @panic("qsplineseries.SetPointConfiguration: Memory allocation failed");
        defer allocator.free(configuration_values);
        var i: usize = 0;
        var configuration_it = configuration.iterator();
        while (configuration_it.next()) |it_entry| : (i += 1) {
            const configuration_key = it_entry.key_ptr.*;
            configuration_keys[i] = @bitCast(configuration_key);
            configuration_values[i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const configuration_map = qtc.libqt_map{
            .len = configuration_count,
            .keys = @ptrCast(configuration_keys.ptr),
            .values = @ptrCast(configuration_values.ptr),
        };
        qtc.QXYSeries_SetPointConfiguration(@ptrCast(self.ptr), @bitCast(index), configuration_map);
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPointConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` key: qxyseries_enums.PointConfiguration `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetPointConfiguration2(self: QSplineSeries, index: i32, key: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QXYSeries_SetPointConfiguration2(@ptrCast(self.ptr), @bitCast(index), @bitCast(key), @ptrCast(value.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPointsConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` pointsConfiguration: Map_i32_Map_i32_QVariant `
    ///
    pub fn SetPointsConfiguration(self: QSplineSeries, allocator: std.mem.Allocator, pointsConfiguration: Map_i32_Map_i32_QVariant) void {
        const pointsConfiguration_count = pointsConfiguration.count();
        const pointsConfiguration_keys = allocator.alloc(i32, pointsConfiguration_count) catch @panic("qsplineseries.SetPointsConfiguration: Memory allocation failed");
        defer allocator.free(pointsConfiguration_keys);
        const pointsConfiguration_values = allocator.alloc(Map_i32_QVariant, pointsConfiguration_count) catch @panic("qsplineseries.SetPointsConfiguration: Memory allocation failed");
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
        qtc.QXYSeries_SetPointsConfiguration(@ptrCast(self.ptr), pointsConfiguration_map);
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: i32 `
    ///
    /// ## Returns:
    ///
    /// ` Map_i32_QVariant (key: qxyseries_enums.PointConfiguration) `
    ///
    pub fn PointConfiguration(self: QSplineSeries, allocator: std.mem.Allocator, index: i32) Map_i32_QVariant {
        const _map: qtc.libqt_map = qtc.QXYSeries_PointConfiguration(@ptrCast(self.ptr), @bitCast(index));
        var _ret: Map_i32_QVariant = .empty;
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
            _ret.put(allocator, _key, .{ .ptr = @ptrCast(_value) }) catch @panic("qsplineseries.PointConfiguration: Memory allocation failed");
        }
        return _ret;
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointsConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PointsConfiguration(self: QSplineSeries, allocator: std.mem.Allocator) Map_i32_Map_i32_QVariant {
        const _map: qtc.libqt_map = qtc.QXYSeries_PointsConfiguration(@ptrCast(self.ptr));
        var _ret: Map_i32_Map_i32_QVariant = .empty;
        defer {
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]Map_i32_QVariant = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            _ret.put(allocator, _key, _value) catch @panic("qsplineseries.PointsConfiguration: Memory allocation failed");
        }
        return _ret;
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#sizeBy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` sourceData: []f64 `
    ///
    /// ` minSize: f64 `
    ///
    /// ` maxSize: f64 `
    ///
    pub fn SizeBy(self: QSplineSeries, sourceData: []f64, minSize: f64, maxSize: f64) void {
        const sourceData_list = qtc.libqt_list{
            .len = sourceData.len,
            .data = sourceData.ptr,
        };
        qtc.QXYSeries_SizeBy(@ptrCast(self.ptr), sourceData_list, @bitCast(minSize), @bitCast(maxSize));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#colorBy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` sourceData: []f64 `
    ///
    pub fn ColorBy(self: QSplineSeries, sourceData: []f64) void {
        const sourceData_list = qtc.libqt_list{
            .len = sourceData.len,
            .data = sourceData.ptr,
        };
        qtc.QXYSeries_ColorBy(@ptrCast(self.ptr), sourceData_list);
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#clicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` point: QPointF `
    ///
    pub fn Clicked(self: QSplineSeries, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QPointF;
        qtc.QXYSeries_Clicked(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#clicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` callback: *const fn (self: QSplineSeries, point: QPointF) callconv(.c) void `
    ///
    pub fn OnClicked(self: QSplineSeries, callback: *const fn (QSplineSeries, QPointF) callconv(.c) void) void {
        qtc.QXYSeries_Connect_Clicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#hovered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` point: QPointF `
    ///
    /// ` state: bool `
    ///
    pub fn Hovered(self: QSplineSeries, point: anytype, state: bool) void {
        comptime _ = @TypeOf(point)._is_QPointF;
        qtc.QXYSeries_Hovered(@ptrCast(self.ptr), @ptrCast(point.ptr), state);
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#hovered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` callback: *const fn (self: QSplineSeries, point: QPointF, state: bool) callconv(.c) void `
    ///
    pub fn OnHovered(self: QSplineSeries, callback: *const fn (QSplineSeries, QPointF, bool) callconv(.c) void) void {
        qtc.QXYSeries_Connect_Hovered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` point: QPointF `
    ///
    pub fn Pressed(self: QSplineSeries, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QPointF;
        qtc.QXYSeries_Pressed(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pressed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` callback: *const fn (self: QSplineSeries, point: QPointF) callconv(.c) void `
    ///
    pub fn OnPressed(self: QSplineSeries, callback: *const fn (QSplineSeries, QPointF) callconv(.c) void) void {
        qtc.QXYSeries_Connect_Pressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#released)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` point: QPointF `
    ///
    pub fn Released(self: QSplineSeries, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QPointF;
        qtc.QXYSeries_Released(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#released)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` callback: *const fn (self: QSplineSeries, point: QPointF) callconv(.c) void `
    ///
    pub fn OnReleased(self: QSplineSeries, callback: *const fn (QSplineSeries, QPointF) callconv(.c) void) void {
        qtc.QXYSeries_Connect_Released(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#doubleClicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` point: QPointF `
    ///
    pub fn DoubleClicked(self: QSplineSeries, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QPointF;
        qtc.QXYSeries_DoubleClicked(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#doubleClicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` callback: *const fn (self: QSplineSeries, point: QPointF) callconv(.c) void `
    ///
    pub fn OnDoubleClicked(self: QSplineSeries, callback: *const fn (QSplineSeries, QPointF) callconv(.c) void) void {
        qtc.QXYSeries_Connect_DoubleClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointReplaced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` index: i32 `
    ///
    pub fn PointReplaced(self: QSplineSeries, index: i32) void {
        qtc.QXYSeries_PointReplaced(@ptrCast(self.ptr), @bitCast(index));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointReplaced)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` callback: *const fn (self: QSplineSeries, index: i32) callconv(.c) void `
    ///
    pub fn OnPointReplaced(self: QSplineSeries, callback: *const fn (QSplineSeries, i32) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointReplaced(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` index: i32 `
    ///
    pub fn PointRemoved(self: QSplineSeries, index: i32) void {
        qtc.QXYSeries_PointRemoved(@ptrCast(self.ptr), @bitCast(index));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` callback: *const fn (self: QSplineSeries, index: i32) callconv(.c) void `
    ///
    pub fn OnPointRemoved(self: QSplineSeries, callback: *const fn (QSplineSeries, i32) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` index: i32 `
    ///
    pub fn PointAdded(self: QSplineSeries, index: i32) void {
        qtc.QXYSeries_PointAdded(@ptrCast(self.ptr), @bitCast(index));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointAdded)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` callback: *const fn (self: QSplineSeries, index: i32) callconv(.c) void `
    ///
    pub fn OnPointAdded(self: QSplineSeries, callback: *const fn (QSplineSeries, i32) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointAdded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#colorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` color: QColor `
    ///
    pub fn ColorChanged(self: QSplineSeries, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QXYSeries_ColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#colorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` callback: *const fn (self: QSplineSeries, color: QColor) callconv(.c) void `
    ///
    pub fn OnColorChanged(self: QSplineSeries, callback: *const fn (QSplineSeries, QColor) callconv(.c) void) void {
        qtc.QXYSeries_Connect_ColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#selectedColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` color: QColor `
    ///
    pub fn SelectedColorChanged(self: QSplineSeries, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QXYSeries_SelectedColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#selectedColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` callback: *const fn (self: QSplineSeries, color: QColor) callconv(.c) void `
    ///
    pub fn OnSelectedColorChanged(self: QSplineSeries, callback: *const fn (QSplineSeries, QColor) callconv(.c) void) void {
        qtc.QXYSeries_Connect_SelectedColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointsReplaced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn PointsReplaced(self: QSplineSeries) void {
        qtc.QXYSeries_PointsReplaced(@ptrCast(self.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointsReplaced)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` callback: *const fn (self: QSplineSeries) callconv(.c) void `
    ///
    pub fn OnPointsReplaced(self: QSplineSeries, callback: *const fn (QSplineSeries) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointsReplaced(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFormatChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` format: []const u8 `
    ///
    pub fn PointLabelsFormatChanged(self: QSplineSeries, format: []const u8) void {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        qtc.QXYSeries_PointLabelsFormatChanged(@ptrCast(self.ptr), format_str);
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFormatChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` callback: *const fn (self: QSplineSeries, format: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnPointLabelsFormatChanged(self: QSplineSeries, callback: *const fn (QSplineSeries, [*:0]const u8) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointLabelsFormatChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsVisibilityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn PointLabelsVisibilityChanged(self: QSplineSeries, visible: bool) void {
        qtc.QXYSeries_PointLabelsVisibilityChanged(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsVisibilityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` callback: *const fn (self: QSplineSeries, visible: bool) callconv(.c) void `
    ///
    pub fn OnPointLabelsVisibilityChanged(self: QSplineSeries, callback: *const fn (QSplineSeries, bool) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointLabelsVisibilityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFontChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` font: QFont `
    ///
    pub fn PointLabelsFontChanged(self: QSplineSeries, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QXYSeries_PointLabelsFontChanged(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFontChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` callback: *const fn (self: QSplineSeries, font: QFont) callconv(.c) void `
    ///
    pub fn OnPointLabelsFontChanged(self: QSplineSeries, callback: *const fn (QSplineSeries, QFont) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointLabelsFontChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` color: QColor `
    ///
    pub fn PointLabelsColorChanged(self: QSplineSeries, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QXYSeries_PointLabelsColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` callback: *const fn (self: QSplineSeries, color: QColor) callconv(.c) void `
    ///
    pub fn OnPointLabelsColorChanged(self: QSplineSeries, callback: *const fn (QSplineSeries, QColor) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointLabelsColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsClippingChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` clipping: bool `
    ///
    pub fn PointLabelsClippingChanged(self: QSplineSeries, clipping: bool) void {
        qtc.QXYSeries_PointLabelsClippingChanged(@ptrCast(self.ptr), clipping);
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsClippingChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` callback: *const fn (self: QSplineSeries, clipping: bool) callconv(.c) void `
    ///
    pub fn OnPointLabelsClippingChanged(self: QSplineSeries, callback: *const fn (QSplineSeries, bool) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointLabelsClippingChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointsRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn PointsRemoved(self: QSplineSeries, index: i32, count: i32) void {
        qtc.QXYSeries_PointsRemoved(@ptrCast(self.ptr), @bitCast(index), @bitCast(count));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointsRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` callback: *const fn (self: QSplineSeries, index: i32, count: i32) callconv(.c) void `
    ///
    pub fn OnPointsRemoved(self: QSplineSeries, callback: *const fn (QSplineSeries, i32, i32) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointsRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#penChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` pen: QPen `
    ///
    pub fn PenChanged(self: QSplineSeries, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QXYSeries_PenChanged(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#penChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` callback: *const fn (self: QSplineSeries, pen: QPen) callconv(.c) void `
    ///
    pub fn OnPenChanged(self: QSplineSeries, callback: *const fn (QSplineSeries, QPen) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#selectedPointsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn SelectedPointsChanged(self: QSplineSeries) void {
        qtc.QXYSeries_SelectedPointsChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#selectedPointsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` callback: *const fn (self: QSplineSeries) callconv(.c) void `
    ///
    pub fn OnSelectedPointsChanged(self: QSplineSeries, callback: *const fn (QSplineSeries) callconv(.c) void) void {
        qtc.QXYSeries_Connect_SelectedPointsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#lightMarkerChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` lightMarker: QImage `
    ///
    pub fn LightMarkerChanged(self: QSplineSeries, lightMarker: anytype) void {
        comptime _ = @TypeOf(lightMarker)._is_QImage;
        qtc.QXYSeries_LightMarkerChanged(@ptrCast(self.ptr), @ptrCast(lightMarker.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#lightMarkerChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` callback: *const fn (self: QSplineSeries, lightMarker: QImage) callconv(.c) void `
    ///
    pub fn OnLightMarkerChanged(self: QSplineSeries, callback: *const fn (QSplineSeries, QImage) callconv(.c) void) void {
        qtc.QXYSeries_Connect_LightMarkerChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#selectedLightMarkerChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` selectedLightMarker: QImage `
    ///
    pub fn SelectedLightMarkerChanged(self: QSplineSeries, selectedLightMarker: anytype) void {
        comptime _ = @TypeOf(selectedLightMarker)._is_QImage;
        qtc.QXYSeries_SelectedLightMarkerChanged(@ptrCast(self.ptr), @ptrCast(selectedLightMarker.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#selectedLightMarkerChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` callback: *const fn (self: QSplineSeries, selectedLightMarker: QImage) callconv(.c) void `
    ///
    pub fn OnSelectedLightMarkerChanged(self: QSplineSeries, callback: *const fn (QSplineSeries, QImage) callconv(.c) void) void {
        qtc.QXYSeries_Connect_SelectedLightMarkerChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineVisibilityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn BestFitLineVisibilityChanged(self: QSplineSeries, visible: bool) void {
        qtc.QXYSeries_BestFitLineVisibilityChanged(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineVisibilityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` callback: *const fn (self: QSplineSeries, visible: bool) callconv(.c) void `
    ///
    pub fn OnBestFitLineVisibilityChanged(self: QSplineSeries, callback: *const fn (QSplineSeries, bool) callconv(.c) void) void {
        qtc.QXYSeries_Connect_BestFitLineVisibilityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#bestFitLinePenChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` pen: QPen `
    ///
    pub fn BestFitLinePenChanged(self: QSplineSeries, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QXYSeries_BestFitLinePenChanged(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#bestFitLinePenChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` callback: *const fn (self: QSplineSeries, pen: QPen) callconv(.c) void `
    ///
    pub fn OnBestFitLinePenChanged(self: QSplineSeries, callback: *const fn (QSplineSeries, QPen) callconv(.c) void) void {
        qtc.QXYSeries_Connect_BestFitLinePenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` color: QColor `
    ///
    pub fn BestFitLineColorChanged(self: QSplineSeries, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QXYSeries_BestFitLineColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` callback: *const fn (self: QSplineSeries, color: QColor) callconv(.c) void `
    ///
    pub fn OnBestFitLineColorChanged(self: QSplineSeries, callback: *const fn (QSplineSeries, QColor) callconv(.c) void) void {
        qtc.QXYSeries_Connect_BestFitLineColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointsConfigurationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` configuration: Map_i32_Map_i32_QVariant `
    ///
    pub fn PointsConfigurationChanged(self: QSplineSeries, allocator: std.mem.Allocator, configuration: Map_i32_Map_i32_QVariant) void {
        const configuration_count = configuration.count();
        const configuration_keys = allocator.alloc(i32, configuration_count) catch @panic("qsplineseries.PointsConfigurationChanged: Memory allocation failed");
        defer allocator.free(configuration_keys);
        const configuration_values = allocator.alloc(Map_i32_QVariant, configuration_count) catch @panic("qsplineseries.PointsConfigurationChanged: Memory allocation failed");
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
        qtc.QXYSeries_PointsConfigurationChanged(@ptrCast(self.ptr), configuration_map);
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointsConfigurationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` callback: *const fn (self: QSplineSeries, configuration: qtc.libqt_map (Map_i32_Map_i32_QVariant)) callconv(.c) void `
    ///
    pub fn OnPointsConfigurationChanged(self: QSplineSeries, callback: *const fn (QSplineSeries, qtc.libqt_map) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointsConfigurationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#markerSizeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` size: f64 `
    ///
    pub fn MarkerSizeChanged(self: QSplineSeries, size: f64) void {
        qtc.QXYSeries_MarkerSizeChanged(@ptrCast(self.ptr), @bitCast(size));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#markerSizeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` callback: *const fn (self: QSplineSeries, size: f64) callconv(.c) void `
    ///
    pub fn OnMarkerSizeChanged(self: QSplineSeries, callback: *const fn (QSplineSeries, f64) callconv(.c) void) void {
        qtc.QXYSeries_Connect_MarkerSizeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPointsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn SetPointsVisible1(self: QSplineSeries, visible: bool) void {
        qtc.QXYSeries_SetPointsVisible1(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn SetPointLabelsVisible1(self: QSplineSeries, visible: bool) void {
        qtc.QXYSeries_SetPointLabelsVisible1(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsClipping)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetPointLabelsClipping1(self: QSplineSeries, enabled: bool) void {
        qtc.QXYSeries_SetPointLabelsClipping1(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setBestFitLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn SetBestFitLineVisible1(self: QSplineSeries, visible: bool) void {
        qtc.QXYSeries_SetBestFitLineVisible1(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#colorBy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` sourceData: []f64 `
    ///
    /// ` gradient: QLinearGradient `
    ///
    pub fn ColorBy2(self: QSplineSeries, sourceData: []f64, gradient: anytype) void {
        const sourceData_list = qtc.libqt_list{
            .len = sourceData.len,
            .data = sourceData.ptr,
        };
        comptime _ = @TypeOf(gradient)._is_QLinearGradient;
        qtc.QXYSeries_ColorBy2(@ptrCast(self.ptr), sourceData_list, @ptrCast(gradient.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: QSplineSeries, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QAbstractSeries_SetName(@ptrCast(self.ptr), name_str);
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: QSplineSeries, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractSeries_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsplineseries.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn SetVisible(self: QSplineSeries) void {
        qtc.QAbstractSeries_SetVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn IsVisible(self: QSplineSeries) bool {
        return qtc.QAbstractSeries_IsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn Opacity(self: QSplineSeries) f64 {
        return qtc.QAbstractSeries_Opacity(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` opacity: f64 `
    ///
    pub fn SetOpacity(self: QSplineSeries, opacity: f64) void {
        qtc.QAbstractSeries_SetOpacity(@ptrCast(self.ptr), @bitCast(opacity));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn SetUseOpenGL(self: QSplineSeries) void {
        qtc.QAbstractSeries_SetUseOpenGL(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn UseOpenGL(self: QSplineSeries) bool {
        return qtc.QAbstractSeries_UseOpenGL(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#chart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn Chart(self: QSplineSeries) QChart {
        return .{ .ptr = qtc.QAbstractSeries_Chart(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#attachAxis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` axis: QAbstractAxis `
    ///
    pub fn AttachAxis(self: QSplineSeries, axis: anytype) bool {
        comptime _ = @TypeOf(axis)._is_QAbstractAxis;
        return qtc.QAbstractSeries_AttachAxis(@ptrCast(self.ptr), @ptrCast(axis.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#detachAxis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` axis: QAbstractAxis `
    ///
    pub fn DetachAxis(self: QSplineSeries, axis: anytype) bool {
        comptime _ = @TypeOf(axis)._is_QAbstractAxis;
        return qtc.QAbstractSeries_DetachAxis(@ptrCast(self.ptr), @ptrCast(axis.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#attachedAxes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AttachedAxes(self: QSplineSeries, allocator: std.mem.Allocator) []QAbstractAxis {
        const _arr: qtc.libqt_list = qtc.QAbstractSeries_AttachedAxes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAbstractAxis, _arr.len) catch @panic("qsplineseries.AttachedAxes: Memory allocation failed");
        const _data: [*]QtC.QAbstractAxis = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn Show(self: QSplineSeries) void {
        qtc.QAbstractSeries_Show(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn Hide(self: QSplineSeries) void {
        qtc.QAbstractSeries_Hide(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn NameChanged(self: QSplineSeries) void {
        qtc.QAbstractSeries_NameChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` callback: *const fn (self: QSplineSeries) callconv(.c) void `
    ///
    pub fn OnNameChanged(self: QSplineSeries, callback: *const fn (QSplineSeries) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_NameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn VisibleChanged(self: QSplineSeries) void {
        qtc.QAbstractSeries_VisibleChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` callback: *const fn (self: QSplineSeries) callconv(.c) void `
    ///
    pub fn OnVisibleChanged(self: QSplineSeries, callback: *const fn (QSplineSeries) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_VisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn OpacityChanged(self: QSplineSeries) void {
        qtc.QAbstractSeries_OpacityChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` callback: *const fn (self: QSplineSeries) callconv(.c) void `
    ///
    pub fn OnOpacityChanged(self: QSplineSeries, callback: *const fn (QSplineSeries) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_OpacityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn UseOpenGLChanged(self: QSplineSeries) void {
        qtc.QAbstractSeries_UseOpenGLChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` callback: *const fn (self: QSplineSeries) callconv(.c) void `
    ///
    pub fn OnUseOpenGLChanged(self: QSplineSeries, callback: *const fn (QSplineSeries) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_UseOpenGLChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible1(self: QSplineSeries, visible: bool) void {
        qtc.QAbstractSeries_SetVisible1(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` enable: bool `
    ///
    pub fn SetUseOpenGL1(self: QSplineSeries, enable: bool) void {
        qtc.QAbstractSeries_SetUseOpenGL1(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QSplineSeries, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsplineseries.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QSplineSeries, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn IsWidgetType(self: QSplineSeries) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn IsWindowType(self: QSplineSeries) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn IsQuickItemType(self: QSplineSeries) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn SignalsBlocked(self: QSplineSeries) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QSplineSeries, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn Thread(self: QSplineSeries) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QSplineSeries, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QSplineSeries, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QSplineSeries, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QSplineSeries, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QSplineSeries, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QSplineSeries, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qsplineseries.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QSplineSeries, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QSplineSeries, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QSplineSeries, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn Connect2(sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QSplineSeries, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn Disconnect2(sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn Disconnect3(self: QSplineSeries) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QSplineSeries, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn DumpObjectTree(self: QSplineSeries) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn DumpObjectInfo(self: QSplineSeries) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QSplineSeries, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QSplineSeries, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QSplineSeries, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qsplineseries.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qsplineseries.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QSplineSeries `
    ///
    pub fn BindingStorage(self: QSplineSeries) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn BindingStorage2(self: QSplineSeries) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn Destroyed(self: QSplineSeries) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` callback: *const fn (self: QSplineSeries) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QSplineSeries, callback: *const fn (QSplineSeries) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn Parent(self: QSplineSeries) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QSplineSeries, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn DeleteLater(self: QSplineSeries) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QSplineSeries, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QSplineSeries, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QSplineSeries, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QSplineSeries, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QSplineSeries, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QSplineSeries, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QSplineSeries, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QSplineSeries, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` callback: *const fn (self: QSplineSeries, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QSplineSeries, callback: *const fn (QSplineSeries, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPen)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` pen: QPen `
    ///
    pub fn SetPen(self: QSplineSeries, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QSplineSeries_SetPen(@ptrCast(self.ptr), @ptrCast(pen.ptr));
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
    /// ` self: QSplineSeries `
    ///
    /// ` pen: QPen `
    ///
    pub fn SuperSetPen(self: QSplineSeries, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QSplineSeries_SuperSetPen(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPen)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSplineSeries`
    ///
    /// ` callback: *const fn (self: QSplineSeries, pen: QPen) callconv(.c) void `
    ///
    pub fn OnSetPen(self: QSplineSeries, callback: *const fn (QSplineSeries, QPen) callconv(.c) void) void {
        qtc.QSplineSeries_OnSetPen(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setBrush)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetBrush(self: QSplineSeries, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QSplineSeries_SetBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
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
    /// ` self: QSplineSeries `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SuperSetBrush(self: QSplineSeries, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QSplineSeries_SuperSetBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setBrush)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSplineSeries`
    ///
    /// ` callback: *const fn (self: QSplineSeries, brush: QBrush) callconv(.c) void `
    ///
    pub fn OnSetBrush(self: QSplineSeries, callback: *const fn (QSplineSeries, QBrush) callconv(.c) void) void {
        qtc.QSplineSeries_OnSetBrush(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setColor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` color: QColor `
    ///
    pub fn SetColor(self: QSplineSeries, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QSplineSeries_SetColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
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
    /// ` self: QSplineSeries `
    ///
    /// ` color: QColor `
    ///
    pub fn SuperSetColor(self: QSplineSeries, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QSplineSeries_SuperSetColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setColor)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSplineSeries`
    ///
    /// ` callback: *const fn (self: QSplineSeries, color: QColor) callconv(.c) void `
    ///
    pub fn OnSetColor(self: QSplineSeries, callback: *const fn (QSplineSeries, QColor) callconv(.c) void) void {
        qtc.QSplineSeries_OnSetColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#color)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn Color(self: QSplineSeries) QColor {
        return .{ .ptr = qtc.QSplineSeries_Color(@ptrCast(self.ptr)) };
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
    /// ` self: QSplineSeries `
    ///
    pub fn SuperColor(self: QSplineSeries) QColor {
        return .{ .ptr = qtc.QSplineSeries_SuperColor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#color)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSplineSeries`
    ///
    /// ` callback: *const fn () callconv(.c) QColor `
    ///
    pub fn OnColor(self: QSplineSeries, callback: *const fn () callconv(.c) QColor) void {
        qtc.QSplineSeries_OnColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QSplineSeries, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QSplineSeries_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSplineSeries `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QSplineSeries, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QSplineSeries_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSplineSeries`
    ///
    /// ` callback: *const fn (self: QSplineSeries, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QSplineSeries, callback: *const fn (QSplineSeries, QEvent) callconv(.c) bool) void {
        qtc.QSplineSeries_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QSplineSeries, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QSplineSeries_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSplineSeries `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QSplineSeries, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QSplineSeries_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSplineSeries`
    ///
    /// ` callback: *const fn (self: QSplineSeries, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QSplineSeries, callback: *const fn (QSplineSeries, QObject, QEvent) callconv(.c) bool) void {
        qtc.QSplineSeries_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QSplineSeries, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QSplineSeries_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSplineSeries `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QSplineSeries, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QSplineSeries_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSplineSeries`
    ///
    /// ` callback: *const fn (self: QSplineSeries, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QSplineSeries, callback: *const fn (QSplineSeries, QTimerEvent) callconv(.c) void) void {
        qtc.QSplineSeries_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QSplineSeries, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QSplineSeries_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSplineSeries `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QSplineSeries, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QSplineSeries_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSplineSeries`
    ///
    /// ` callback: *const fn (self: QSplineSeries, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QSplineSeries, callback: *const fn (QSplineSeries, QChildEvent) callconv(.c) void) void {
        qtc.QSplineSeries_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QSplineSeries, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QSplineSeries_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSplineSeries `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QSplineSeries, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QSplineSeries_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSplineSeries`
    ///
    /// ` callback: *const fn (self: QSplineSeries, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QSplineSeries, callback: *const fn (QSplineSeries, QEvent) callconv(.c) void) void {
        qtc.QSplineSeries_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QSplineSeries, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSplineSeries_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSplineSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QSplineSeries, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSplineSeries_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSplineSeries`
    ///
    /// ` callback: *const fn (self: QSplineSeries, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QSplineSeries, callback: *const fn (QSplineSeries, QMetaMethod) callconv(.c) void) void {
        qtc.QSplineSeries_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QSplineSeries, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSplineSeries_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSplineSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QSplineSeries, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSplineSeries_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSplineSeries`
    ///
    /// ` callback: *const fn (self: QSplineSeries, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QSplineSeries, callback: *const fn (QSplineSeries, QMetaMethod) callconv(.c) void) void {
        qtc.QSplineSeries_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn Sender(self: QSplineSeries) QObject {
        return .{ .ptr = qtc.QSplineSeries_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QSplineSeries `
    ///
    pub fn SuperSender(self: QSplineSeries) QObject {
        return .{ .ptr = qtc.QSplineSeries_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSplineSeries`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QSplineSeries, callback: *const fn () callconv(.c) QObject) void {
        qtc.QSplineSeries_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn SenderSignalIndex(self: QSplineSeries) i32 {
        return qtc.QSplineSeries_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QSplineSeries `
    ///
    pub fn SuperSenderSignalIndex(self: QSplineSeries) i32 {
        return qtc.QSplineSeries_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSplineSeries`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QSplineSeries, callback: *const fn () callconv(.c) i32) void {
        qtc.QSplineSeries_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QSplineSeries, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSplineSeries_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QSplineSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QSplineSeries, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSplineSeries_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSplineSeries`
    ///
    /// ` callback: *const fn (self: QSplineSeries, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QSplineSeries, callback: *const fn (QSplineSeries, [*:0]const u8) callconv(.c) i32) void {
        qtc.QSplineSeries_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QSplineSeries, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QSplineSeries_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSplineSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QSplineSeries, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QSplineSeries_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSplineSeries`
    ///
    /// ` callback: *const fn (self: QSplineSeries, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QSplineSeries, callback: *const fn (QSplineSeries, QMetaMethod) callconv(.c) bool) void {
        qtc.QSplineSeries_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` callback: *const fn (self: QSplineSeries, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QSplineSeries, callback: *const fn (QSplineSeries, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsplineseries-qtcharts.html#dtor.QSplineSeries)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn Delete(self: QSplineSeries) void {
        qtc.QSplineSeries_Delete(@ptrCast(self.ptr));
    }
};
