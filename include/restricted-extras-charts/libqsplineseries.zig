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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QSplineSeries object in C++ memory
    ///
    pub fn new() QSplineSeries {
        return .{ .ptr = qtc.QSplineSeries_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QSplineSeries object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QSplineSeries {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QSplineSeries_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn metaObject(self: QSplineSeries) QMetaObject {
        return .{ .ptr = qtc.QSplineSeries_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMetaObject` instead
    ///
    pub const OnMetaObject = onMetaObject;

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
    pub fn onMetaObject(self: QSplineSeries, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QSplineSeries_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetaObject` instead
    ///
    pub const SuperMetaObject = superMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn superMetaObject(self: QSplineSeries) QMetaObject {
        return .{ .ptr = qtc.QSplineSeries_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QSplineSeries, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSplineSeries_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` callback: *const fn (self: QSplineSeries, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QSplineSeries, callback: *const fn (QSplineSeries, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QSplineSeries_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QSplineSeries, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSplineSeries_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QSplineSeries, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QSplineSeries_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` callback: *const fn (self: QSplineSeries, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QSplineSeries, callback: *const fn (QSplineSeries, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QSplineSeries_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: QSplineSeries, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QSplineSeries_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSplineSeries.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QSplineSeries) i32 {
        return qtc.QSplineSeries_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onType` instead
    ///
    pub const OnType = onType;

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
    pub fn onType(self: QSplineSeries, callback: *const fn () callconv(.c) i32) void {
        qtc.QSplineSeries_OnType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superType` instead
    ///
    pub const SuperType = superType;

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
    pub fn superType(self: QSplineSeries) i32 {
        return qtc.QSplineSeries_SuperType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

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
    pub fn tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSplineSeries.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

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
    pub fn tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSplineSeries.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `append` instead
    ///
    pub const Append = append;

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
    pub fn append(self: QSplineSeries, x: f64, y: f64) void {
        qtc.QXYSeries_Append(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `append2` instead
    ///
    pub const Append2 = append2;

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
    pub fn append2(self: QSplineSeries, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QPointF;
        qtc.QXYSeries_Append2(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// ### DEPRECATED: Use `append3` instead
    ///
    pub const Append3 = append3;

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` _points: []QPointF `
    ///
    pub fn append3(self: QSplineSeries, _points: []QPointF) void {
        const points_list = qtc.libqt_list{
            .len = _points.len,
            .data = @ptrCast(_points.ptr),
        };
        qtc.QXYSeries_Append3(@ptrCast(self.ptr), points_list);
    }

    /// ### DEPRECATED: Use `replace` instead
    ///
    pub const Replace = replace;

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
    pub fn replace(self: QSplineSeries, oldX: f64, oldY: f64, newX: f64, newY: f64) void {
        qtc.QXYSeries_Replace(@ptrCast(self.ptr), @bitCast(oldX), @bitCast(oldY), @bitCast(newX), @bitCast(newY));
    }

    /// ### DEPRECATED: Use `replace2` instead
    ///
    pub const Replace2 = replace2;

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
    pub fn replace2(self: QSplineSeries, oldPoint: anytype, newPoint: anytype) void {
        comptime _ = @TypeOf(oldPoint)._is_QPointF;
        comptime _ = @TypeOf(newPoint)._is_QPointF;
        qtc.QXYSeries_Replace2(@ptrCast(self.ptr), @ptrCast(oldPoint.ptr), @ptrCast(newPoint.ptr));
    }

    /// ### DEPRECATED: Use `replace3` instead
    ///
    pub const Replace3 = replace3;

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
    pub fn replace3(self: QSplineSeries, index: i32, newX: f64, newY: f64) void {
        qtc.QXYSeries_Replace3(@ptrCast(self.ptr), @bitCast(index), @bitCast(newX), @bitCast(newY));
    }

    /// ### DEPRECATED: Use `replace4` instead
    ///
    pub const Replace4 = replace4;

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
    pub fn replace4(self: QSplineSeries, index: i32, newPoint: anytype) void {
        comptime _ = @TypeOf(newPoint)._is_QPointF;
        qtc.QXYSeries_Replace4(@ptrCast(self.ptr), @bitCast(index), @ptrCast(newPoint.ptr));
    }

    /// ### DEPRECATED: Use `remove` instead
    ///
    pub const Remove = remove;

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
    pub fn remove(self: QSplineSeries, x: f64, y: f64) void {
        qtc.QXYSeries_Remove(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `remove2` instead
    ///
    pub const Remove2 = remove2;

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
    pub fn remove2(self: QSplineSeries, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QPointF;
        qtc.QXYSeries_Remove2(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// ### DEPRECATED: Use `remove3` instead
    ///
    pub const Remove3 = remove3;

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
    pub fn remove3(self: QSplineSeries, index: i32) void {
        qtc.QXYSeries_Remove3(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `removePoints` instead
    ///
    pub const RemovePoints = removePoints;

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
    /// ` _count: i32 `
    ///
    pub fn removePoints(self: QSplineSeries, index: i32, _count: i32) void {
        qtc.QXYSeries_RemovePoints(@ptrCast(self.ptr), @bitCast(index), @bitCast(_count));
    }

    /// ### DEPRECATED: Use `insert` instead
    ///
    pub const Insert = insert;

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
    pub fn insert(self: QSplineSeries, index: i32, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QPointF;
        qtc.QXYSeries_Insert(@ptrCast(self.ptr), @bitCast(index), @ptrCast(point.ptr));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn clear(self: QSplineSeries) void {
        qtc.QXYSeries_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `count` instead
    ///
    pub const Count = count;

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn count(self: QSplineSeries) i32 {
        return qtc.QXYSeries_Count(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `points` instead
    ///
    pub const Points = points;

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
    pub fn points(self: QSplineSeries, allocator: std.mem.Allocator) []QPointF {
        const _arr: qtc.libqt_list = qtc.QXYSeries_Points(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QPointF, _arr.len) catch @panic("QSplineSeries.points: Memory allocation failed");
        const _data_val: [*]QtC.QPointF = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `pointsVector` instead
    ///
    pub const PointsVector = pointsVector;

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
    pub fn pointsVector(self: QSplineSeries, allocator: std.mem.Allocator) []QPointF {
        const _arr: qtc.libqt_list = qtc.QXYSeries_PointsVector(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QPointF, _arr.len) catch @panic("QSplineSeries.pointsVector: Memory allocation failed");
        const _data_val: [*]QtC.QPointF = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `at` instead
    ///
    pub const At = at;

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
    pub fn at(self: QSplineSeries, index: i32) QPointF {
        return .{ .ptr = qtc.QXYSeries_At(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft` instead
    ///
    pub const OperatorShiftLeft = operatorShiftLeft;

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
    pub fn operatorShiftLeft(self: QSplineSeries, point: anytype) QXYSeries {
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QXYSeries_OperatorShiftLeft(@ptrCast(self.ptr), @ptrCast(point.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft2` instead
    ///
    pub const OperatorShiftLeft2 = operatorShiftLeft2;

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` _points: []QPointF `
    ///
    pub fn operatorShiftLeft2(self: QSplineSeries, _points: []QPointF) QXYSeries {
        const points_list = qtc.libqt_list{
            .len = _points.len,
            .data = @ptrCast(_points.ptr),
        };
        return .{ .ptr = qtc.QXYSeries_OperatorShiftLeft2(@ptrCast(self.ptr), points_list) };
    }

    /// ### DEPRECATED: Use `pen` instead
    ///
    pub const Pen = pen;

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn pen(self: QSplineSeries) QPen {
        return .{ .ptr = qtc.QXYSeries_Pen(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `brush` instead
    ///
    pub const Brush = brush;

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#brush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn brush(self: QSplineSeries) QBrush {
        return .{ .ptr = qtc.QXYSeries_Brush(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSelectedColor` instead
    ///
    pub const SetSelectedColor = setSelectedColor;

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setSelectedColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` _color: QColor `
    ///
    pub fn setSelectedColor(self: QSplineSeries, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QColor;
        qtc.QXYSeries_SetSelectedColor(@ptrCast(self.ptr), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `selectedColor` instead
    ///
    pub const SelectedColor = selectedColor;

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#selectedColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn selectedColor(self: QSplineSeries) QColor {
        return .{ .ptr = qtc.QXYSeries_SelectedColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPointsVisible` instead
    ///
    pub const SetPointsVisible = setPointsVisible;

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPointsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn setPointsVisible(self: QSplineSeries) void {
        qtc.QXYSeries_SetPointsVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `pointsVisible` instead
    ///
    pub const PointsVisible = pointsVisible;

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn pointsVisible(self: QSplineSeries) bool {
        return qtc.QXYSeries_PointsVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPointLabelsFormat` instead
    ///
    pub const SetPointLabelsFormat = setPointLabelsFormat;

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
    pub fn setPointLabelsFormat(self: QSplineSeries, format: []const u8) void {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        qtc.QXYSeries_SetPointLabelsFormat(@ptrCast(self.ptr), format_str);
    }

    /// ### DEPRECATED: Use `pointLabelsFormat` instead
    ///
    pub const PointLabelsFormat = pointLabelsFormat;

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
    pub fn pointLabelsFormat(self: QSplineSeries, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QXYSeries_PointLabelsFormat(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSplineSeries.pointLabelsFormat: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPointLabelsVisible` instead
    ///
    pub const SetPointLabelsVisible = setPointLabelsVisible;

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn setPointLabelsVisible(self: QSplineSeries) void {
        qtc.QXYSeries_SetPointLabelsVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `pointLabelsVisible` instead
    ///
    pub const PointLabelsVisible = pointLabelsVisible;

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn pointLabelsVisible(self: QSplineSeries) bool {
        return qtc.QXYSeries_PointLabelsVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPointLabelsFont` instead
    ///
    pub const SetPointLabelsFont = setPointLabelsFont;

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
    pub fn setPointLabelsFont(self: QSplineSeries, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QXYSeries_SetPointLabelsFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// ### DEPRECATED: Use `pointLabelsFont` instead
    ///
    pub const PointLabelsFont = pointLabelsFont;

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn pointLabelsFont(self: QSplineSeries) QFont {
        return .{ .ptr = qtc.QXYSeries_PointLabelsFont(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPointLabelsColor` instead
    ///
    pub const SetPointLabelsColor = setPointLabelsColor;

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` _color: QColor `
    ///
    pub fn setPointLabelsColor(self: QSplineSeries, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QColor;
        qtc.QXYSeries_SetPointLabelsColor(@ptrCast(self.ptr), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `pointLabelsColor` instead
    ///
    pub const PointLabelsColor = pointLabelsColor;

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn pointLabelsColor(self: QSplineSeries) QColor {
        return .{ .ptr = qtc.QXYSeries_PointLabelsColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPointLabelsClipping` instead
    ///
    pub const SetPointLabelsClipping = setPointLabelsClipping;

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsClipping)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn setPointLabelsClipping(self: QSplineSeries) void {
        qtc.QXYSeries_SetPointLabelsClipping(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `pointLabelsClipping` instead
    ///
    pub const PointLabelsClipping = pointLabelsClipping;

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsClipping)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn pointLabelsClipping(self: QSplineSeries) bool {
        return qtc.QXYSeries_PointLabelsClipping(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `replace5` instead
    ///
    pub const Replace5 = replace5;

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#replace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` _points: []QPointF `
    ///
    pub fn replace5(self: QSplineSeries, _points: []QPointF) void {
        const points_list = qtc.libqt_list{
            .len = _points.len,
            .data = @ptrCast(_points.ptr),
        };
        qtc.QXYSeries_Replace5(@ptrCast(self.ptr), points_list);
    }

    /// ### DEPRECATED: Use `isPointSelected` instead
    ///
    pub const IsPointSelected = isPointSelected;

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
    pub fn isPointSelected(self: QSplineSeries, index: i32) bool {
        return qtc.QXYSeries_IsPointSelected(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `selectPoint` instead
    ///
    pub const SelectPoint = selectPoint;

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
    pub fn selectPoint(self: QSplineSeries, index: i32) void {
        qtc.QXYSeries_SelectPoint(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `deselectPoint` instead
    ///
    pub const DeselectPoint = deselectPoint;

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
    pub fn deselectPoint(self: QSplineSeries, index: i32) void {
        qtc.QXYSeries_DeselectPoint(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `setPointSelected` instead
    ///
    pub const SetPointSelected = setPointSelected;

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
    pub fn setPointSelected(self: QSplineSeries, index: i32, selected: bool) void {
        qtc.QXYSeries_SetPointSelected(@ptrCast(self.ptr), @bitCast(index), selected);
    }

    /// ### DEPRECATED: Use `selectAllPoints` instead
    ///
    pub const SelectAllPoints = selectAllPoints;

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#selectAllPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn selectAllPoints(self: QSplineSeries) void {
        qtc.QXYSeries_SelectAllPoints(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `deselectAllPoints` instead
    ///
    pub const DeselectAllPoints = deselectAllPoints;

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#deselectAllPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn deselectAllPoints(self: QSplineSeries) void {
        qtc.QXYSeries_DeselectAllPoints(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `selectPoints` instead
    ///
    pub const SelectPoints = selectPoints;

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
    pub fn selectPoints(self: QSplineSeries, indexes: []i32) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = indexes.ptr,
        };
        qtc.QXYSeries_SelectPoints(@ptrCast(self.ptr), indexes_list);
    }

    /// ### DEPRECATED: Use `deselectPoints` instead
    ///
    pub const DeselectPoints = deselectPoints;

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
    pub fn deselectPoints(self: QSplineSeries, indexes: []i32) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = indexes.ptr,
        };
        qtc.QXYSeries_DeselectPoints(@ptrCast(self.ptr), indexes_list);
    }

    /// ### DEPRECATED: Use `toggleSelection` instead
    ///
    pub const ToggleSelection = toggleSelection;

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
    pub fn toggleSelection(self: QSplineSeries, indexes: []i32) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = indexes.ptr,
        };
        qtc.QXYSeries_ToggleSelection(@ptrCast(self.ptr), indexes_list);
    }

    /// ### DEPRECATED: Use `selectedPoints` instead
    ///
    pub const SelectedPoints = selectedPoints;

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
    pub fn selectedPoints(self: QSplineSeries, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QXYSeries_SelectedPoints(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("QSplineSeries.selectedPoints: Memory allocation failed");
        const _data_val: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setLightMarker` instead
    ///
    pub const SetLightMarker = setLightMarker;

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setLightMarker)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` _lightMarker: QImage `
    ///
    pub fn setLightMarker(self: QSplineSeries, _lightMarker: anytype) void {
        comptime _ = @TypeOf(_lightMarker)._is_QImage;
        qtc.QXYSeries_SetLightMarker(@ptrCast(self.ptr), @ptrCast(_lightMarker.ptr));
    }

    /// ### DEPRECATED: Use `lightMarker` instead
    ///
    pub const LightMarker = lightMarker;

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#lightMarker)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn lightMarker(self: QSplineSeries) QImage {
        return .{ .ptr = qtc.QXYSeries_LightMarker(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSelectedLightMarker` instead
    ///
    pub const SetSelectedLightMarker = setSelectedLightMarker;

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setSelectedLightMarker)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` _selectedLightMarker: QImage `
    ///
    pub fn setSelectedLightMarker(self: QSplineSeries, _selectedLightMarker: anytype) void {
        comptime _ = @TypeOf(_selectedLightMarker)._is_QImage;
        qtc.QXYSeries_SetSelectedLightMarker(@ptrCast(self.ptr), @ptrCast(_selectedLightMarker.ptr));
    }

    /// ### DEPRECATED: Use `selectedLightMarker` instead
    ///
    pub const SelectedLightMarker = selectedLightMarker;

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#selectedLightMarker)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn selectedLightMarker(self: QSplineSeries) QImage {
        return .{ .ptr = qtc.QXYSeries_SelectedLightMarker(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMarkerSize` instead
    ///
    pub const SetMarkerSize = setMarkerSize;

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
    pub fn setMarkerSize(self: QSplineSeries, size: f64) void {
        qtc.QXYSeries_SetMarkerSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### DEPRECATED: Use `markerSize` instead
    ///
    pub const MarkerSize = markerSize;

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#markerSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn markerSize(self: QSplineSeries) f64 {
        return qtc.QXYSeries_MarkerSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBestFitLineVisible` instead
    ///
    pub const SetBestFitLineVisible = setBestFitLineVisible;

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setBestFitLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn setBestFitLineVisible(self: QSplineSeries) void {
        qtc.QXYSeries_SetBestFitLineVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `bestFitLineVisible` instead
    ///
    pub const BestFitLineVisible = bestFitLineVisible;

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn bestFitLineVisible(self: QSplineSeries) bool {
        return qtc.QXYSeries_BestFitLineVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `bestFitLineEquation` instead
    ///
    pub const BestFitLineEquation = bestFitLineEquation;

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
    pub fn bestFitLineEquation(self: QSplineSeries, ok: *bool) Struct_f64_f64 {
        const _pair = qtc.QXYSeries_BestFitLineEquation(@ptrCast(self.ptr), @ptrCast(ok));
        return .{
            .first = @bitCast(_pair.first),
            .second = @bitCast(_pair.second),
        };
    }

    /// ### DEPRECATED: Use `setBestFitLinePen` instead
    ///
    pub const SetBestFitLinePen = setBestFitLinePen;

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setBestFitLinePen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` _pen: QPen `
    ///
    pub fn setBestFitLinePen(self: QSplineSeries, _pen: anytype) void {
        comptime _ = @TypeOf(_pen)._is_QPen;
        qtc.QXYSeries_SetBestFitLinePen(@ptrCast(self.ptr), @ptrCast(_pen.ptr));
    }

    /// ### DEPRECATED: Use `bestFitLinePen` instead
    ///
    pub const BestFitLinePen = bestFitLinePen;

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#bestFitLinePen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn bestFitLinePen(self: QSplineSeries) QPen {
        return .{ .ptr = qtc.QXYSeries_BestFitLinePen(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBestFitLineColor` instead
    ///
    pub const SetBestFitLineColor = setBestFitLineColor;

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setBestFitLineColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` _color: QColor `
    ///
    pub fn setBestFitLineColor(self: QSplineSeries, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QColor;
        qtc.QXYSeries_SetBestFitLineColor(@ptrCast(self.ptr), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `bestFitLineColor` instead
    ///
    pub const BestFitLineColor = bestFitLineColor;

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn bestFitLineColor(self: QSplineSeries) QColor {
        return .{ .ptr = qtc.QXYSeries_BestFitLineColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `clearPointConfiguration` instead
    ///
    pub const ClearPointConfiguration = clearPointConfiguration;

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
    pub fn clearPointConfiguration(self: QSplineSeries, index: i32) void {
        qtc.QXYSeries_ClearPointConfiguration(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `clearPointConfiguration2` instead
    ///
    pub const ClearPointConfiguration2 = clearPointConfiguration2;

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
    pub fn clearPointConfiguration2(self: QSplineSeries, index: i32, key: i32) void {
        qtc.QXYSeries_ClearPointConfiguration2(@ptrCast(self.ptr), @bitCast(index), @bitCast(key));
    }

    /// ### DEPRECATED: Use `clearPointsConfiguration` instead
    ///
    pub const ClearPointsConfiguration = clearPointsConfiguration;

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#clearPointsConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn clearPointsConfiguration(self: QSplineSeries) void {
        qtc.QXYSeries_ClearPointsConfiguration(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clearPointsConfiguration2` instead
    ///
    pub const ClearPointsConfiguration2 = clearPointsConfiguration2;

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
    pub fn clearPointsConfiguration2(self: QSplineSeries, key: i32) void {
        qtc.QXYSeries_ClearPointsConfiguration2(@ptrCast(self.ptr), @bitCast(key));
    }

    /// ### DEPRECATED: Use `setPointConfiguration` instead
    ///
    pub const SetPointConfiguration = setPointConfiguration;

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
    pub fn setPointConfiguration(self: QSplineSeries, allocator: std.mem.Allocator, index: i32, configuration: Map_i32_QVariant) void {
        const configuration_count = configuration.count();
        const configuration_keys = allocator.alloc(i32, configuration_count) catch @panic("QSplineSeries.setPointConfiguration: Memory allocation failed");
        defer allocator.free(configuration_keys);
        const configuration_values = allocator.alloc(QtC.QVariant, configuration_count) catch @panic("QSplineSeries.setPointConfiguration: Memory allocation failed");
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

    /// ### DEPRECATED: Use `setPointConfiguration2` instead
    ///
    pub const SetPointConfiguration2 = setPointConfiguration2;

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
    pub fn setPointConfiguration2(self: QSplineSeries, index: i32, key: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QXYSeries_SetPointConfiguration2(@ptrCast(self.ptr), @bitCast(index), @bitCast(key), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `setPointsConfiguration` instead
    ///
    pub const SetPointsConfiguration = setPointsConfiguration;

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
    /// ` _pointsConfiguration: Map_i32_Map_i32_QVariant `
    ///
    pub fn setPointsConfiguration(self: QSplineSeries, allocator: std.mem.Allocator, _pointsConfiguration: Map_i32_Map_i32_QVariant) void {
        const pointsConfiguration_count = _pointsConfiguration.count();
        const pointsConfiguration_keys = allocator.alloc(i32, pointsConfiguration_count) catch @panic("QSplineSeries.setPointsConfiguration: Memory allocation failed");
        defer allocator.free(pointsConfiguration_keys);
        const pointsConfiguration_values = allocator.alloc(Map_i32_QVariant, pointsConfiguration_count) catch @panic("QSplineSeries.setPointsConfiguration: Memory allocation failed");
        defer allocator.free(pointsConfiguration_values);
        var i: usize = 0;
        var pointsConfiguration_it = _pointsConfiguration.iterator();
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

    /// ### DEPRECATED: Use `pointConfiguration` instead
    ///
    pub const PointConfiguration = pointConfiguration;

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
    pub fn pointConfiguration(self: QSplineSeries, allocator: std.mem.Allocator, index: i32) Map_i32_QVariant {
        const _map: qtc.libqt_map = qtc.QXYSeries_PointConfiguration(@ptrCast(self.ptr), @bitCast(index));
        var _ret: Map_i32_QVariant = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("QSplineSeries.pointConfiguration: Total capacity allocation failed");
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
            _ret.putAssumeCapacity(_key, .{ .ptr = @ptrCast(_value) });
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `pointsConfiguration` instead
    ///
    pub const PointsConfiguration = pointsConfiguration;

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
    pub fn pointsConfiguration(self: QSplineSeries, allocator: std.mem.Allocator) Map_i32_Map_i32_QVariant {
        const _map: qtc.libqt_map = qtc.QXYSeries_PointsConfiguration(@ptrCast(self.ptr));
        var _ret: Map_i32_Map_i32_QVariant = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("QSplineSeries.pointsConfiguration: Total capacity allocation failed");
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
            _ret.putAssumeCapacity(_key, _value);
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `sizeBy` instead
    ///
    pub const SizeBy = sizeBy;

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
    pub fn sizeBy(self: QSplineSeries, sourceData: []f64, minSize: f64, maxSize: f64) void {
        const sourceData_list = qtc.libqt_list{
            .len = sourceData.len,
            .data = sourceData.ptr,
        };
        qtc.QXYSeries_SizeBy(@ptrCast(self.ptr), sourceData_list, @bitCast(minSize), @bitCast(maxSize));
    }

    /// ### DEPRECATED: Use `colorBy` instead
    ///
    pub const ColorBy = colorBy;

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
    pub fn colorBy(self: QSplineSeries, sourceData: []f64) void {
        const sourceData_list = qtc.libqt_list{
            .len = sourceData.len,
            .data = sourceData.ptr,
        };
        qtc.QXYSeries_ColorBy(@ptrCast(self.ptr), sourceData_list);
    }

    /// ### DEPRECATED: Use `clicked` instead
    ///
    pub const Clicked = clicked;

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
    pub fn clicked(self: QSplineSeries, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QPointF;
        qtc.QXYSeries_Clicked(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// ### DEPRECATED: Use `onClicked` instead
    ///
    pub const OnClicked = onClicked;

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
    pub fn onClicked(self: QSplineSeries, callback: *const fn (QSplineSeries, QPointF) callconv(.c) void) void {
        qtc.QXYSeries_Connect_Clicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `hovered` instead
    ///
    pub const Hovered = hovered;

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
    pub fn hovered(self: QSplineSeries, point: anytype, state: bool) void {
        comptime _ = @TypeOf(point)._is_QPointF;
        qtc.QXYSeries_Hovered(@ptrCast(self.ptr), @ptrCast(point.ptr), state);
    }

    /// ### DEPRECATED: Use `onHovered` instead
    ///
    pub const OnHovered = onHovered;

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
    pub fn onHovered(self: QSplineSeries, callback: *const fn (QSplineSeries, QPointF, bool) callconv(.c) void) void {
        qtc.QXYSeries_Connect_Hovered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `pressed` instead
    ///
    pub const Pressed = pressed;

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
    pub fn pressed(self: QSplineSeries, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QPointF;
        qtc.QXYSeries_Pressed(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// ### DEPRECATED: Use `onPressed` instead
    ///
    pub const OnPressed = onPressed;

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
    pub fn onPressed(self: QSplineSeries, callback: *const fn (QSplineSeries, QPointF) callconv(.c) void) void {
        qtc.QXYSeries_Connect_Pressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `released` instead
    ///
    pub const Released = released;

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
    pub fn released(self: QSplineSeries, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QPointF;
        qtc.QXYSeries_Released(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// ### DEPRECATED: Use `onReleased` instead
    ///
    pub const OnReleased = onReleased;

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
    pub fn onReleased(self: QSplineSeries, callback: *const fn (QSplineSeries, QPointF) callconv(.c) void) void {
        qtc.QXYSeries_Connect_Released(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `doubleClicked` instead
    ///
    pub const DoubleClicked = doubleClicked;

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
    pub fn doubleClicked(self: QSplineSeries, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QPointF;
        qtc.QXYSeries_DoubleClicked(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// ### DEPRECATED: Use `onDoubleClicked` instead
    ///
    pub const OnDoubleClicked = onDoubleClicked;

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
    pub fn onDoubleClicked(self: QSplineSeries, callback: *const fn (QSplineSeries, QPointF) callconv(.c) void) void {
        qtc.QXYSeries_Connect_DoubleClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `pointReplaced` instead
    ///
    pub const PointReplaced = pointReplaced;

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
    pub fn pointReplaced(self: QSplineSeries, index: i32) void {
        qtc.QXYSeries_PointReplaced(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `onPointReplaced` instead
    ///
    pub const OnPointReplaced = onPointReplaced;

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
    pub fn onPointReplaced(self: QSplineSeries, callback: *const fn (QSplineSeries, i32) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointReplaced(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `pointRemoved` instead
    ///
    pub const PointRemoved = pointRemoved;

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
    pub fn pointRemoved(self: QSplineSeries, index: i32) void {
        qtc.QXYSeries_PointRemoved(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `onPointRemoved` instead
    ///
    pub const OnPointRemoved = onPointRemoved;

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
    pub fn onPointRemoved(self: QSplineSeries, callback: *const fn (QSplineSeries, i32) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `pointAdded` instead
    ///
    pub const PointAdded = pointAdded;

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
    pub fn pointAdded(self: QSplineSeries, index: i32) void {
        qtc.QXYSeries_PointAdded(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `onPointAdded` instead
    ///
    pub const OnPointAdded = onPointAdded;

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
    pub fn onPointAdded(self: QSplineSeries, callback: *const fn (QSplineSeries, i32) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointAdded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `colorChanged` instead
    ///
    pub const ColorChanged = colorChanged;

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#colorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` _color: QColor `
    ///
    pub fn colorChanged(self: QSplineSeries, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QColor;
        qtc.QXYSeries_ColorChanged(@ptrCast(self.ptr), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `onColorChanged` instead
    ///
    pub const OnColorChanged = onColorChanged;

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
    pub fn onColorChanged(self: QSplineSeries, callback: *const fn (QSplineSeries, QColor) callconv(.c) void) void {
        qtc.QXYSeries_Connect_ColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `selectedColorChanged` instead
    ///
    pub const SelectedColorChanged = selectedColorChanged;

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#selectedColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` _color: QColor `
    ///
    pub fn selectedColorChanged(self: QSplineSeries, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QColor;
        qtc.QXYSeries_SelectedColorChanged(@ptrCast(self.ptr), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `onSelectedColorChanged` instead
    ///
    pub const OnSelectedColorChanged = onSelectedColorChanged;

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
    pub fn onSelectedColorChanged(self: QSplineSeries, callback: *const fn (QSplineSeries, QColor) callconv(.c) void) void {
        qtc.QXYSeries_Connect_SelectedColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `pointsReplaced` instead
    ///
    pub const PointsReplaced = pointsReplaced;

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointsReplaced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn pointsReplaced(self: QSplineSeries) void {
        qtc.QXYSeries_PointsReplaced(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onPointsReplaced` instead
    ///
    pub const OnPointsReplaced = onPointsReplaced;

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
    pub fn onPointsReplaced(self: QSplineSeries, callback: *const fn (QSplineSeries) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointsReplaced(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `pointLabelsFormatChanged` instead
    ///
    pub const PointLabelsFormatChanged = pointLabelsFormatChanged;

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
    pub fn pointLabelsFormatChanged(self: QSplineSeries, format: []const u8) void {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        qtc.QXYSeries_PointLabelsFormatChanged(@ptrCast(self.ptr), format_str);
    }

    /// ### DEPRECATED: Use `onPointLabelsFormatChanged` instead
    ///
    pub const OnPointLabelsFormatChanged = onPointLabelsFormatChanged;

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
    pub fn onPointLabelsFormatChanged(self: QSplineSeries, callback: *const fn (QSplineSeries, [*:0]const u8) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointLabelsFormatChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `pointLabelsVisibilityChanged` instead
    ///
    pub const PointLabelsVisibilityChanged = pointLabelsVisibilityChanged;

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
    pub fn pointLabelsVisibilityChanged(self: QSplineSeries, visible: bool) void {
        qtc.QXYSeries_PointLabelsVisibilityChanged(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `onPointLabelsVisibilityChanged` instead
    ///
    pub const OnPointLabelsVisibilityChanged = onPointLabelsVisibilityChanged;

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
    pub fn onPointLabelsVisibilityChanged(self: QSplineSeries, callback: *const fn (QSplineSeries, bool) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointLabelsVisibilityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `pointLabelsFontChanged` instead
    ///
    pub const PointLabelsFontChanged = pointLabelsFontChanged;

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
    pub fn pointLabelsFontChanged(self: QSplineSeries, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QXYSeries_PointLabelsFontChanged(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// ### DEPRECATED: Use `onPointLabelsFontChanged` instead
    ///
    pub const OnPointLabelsFontChanged = onPointLabelsFontChanged;

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
    pub fn onPointLabelsFontChanged(self: QSplineSeries, callback: *const fn (QSplineSeries, QFont) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointLabelsFontChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `pointLabelsColorChanged` instead
    ///
    pub const PointLabelsColorChanged = pointLabelsColorChanged;

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` _color: QColor `
    ///
    pub fn pointLabelsColorChanged(self: QSplineSeries, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QColor;
        qtc.QXYSeries_PointLabelsColorChanged(@ptrCast(self.ptr), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `onPointLabelsColorChanged` instead
    ///
    pub const OnPointLabelsColorChanged = onPointLabelsColorChanged;

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
    pub fn onPointLabelsColorChanged(self: QSplineSeries, callback: *const fn (QSplineSeries, QColor) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointLabelsColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `pointLabelsClippingChanged` instead
    ///
    pub const PointLabelsClippingChanged = pointLabelsClippingChanged;

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
    pub fn pointLabelsClippingChanged(self: QSplineSeries, clipping: bool) void {
        qtc.QXYSeries_PointLabelsClippingChanged(@ptrCast(self.ptr), clipping);
    }

    /// ### DEPRECATED: Use `onPointLabelsClippingChanged` instead
    ///
    pub const OnPointLabelsClippingChanged = onPointLabelsClippingChanged;

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
    pub fn onPointLabelsClippingChanged(self: QSplineSeries, callback: *const fn (QSplineSeries, bool) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointLabelsClippingChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `pointsRemoved` instead
    ///
    pub const PointsRemoved = pointsRemoved;

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
    /// ` _count: i32 `
    ///
    pub fn pointsRemoved(self: QSplineSeries, index: i32, _count: i32) void {
        qtc.QXYSeries_PointsRemoved(@ptrCast(self.ptr), @bitCast(index), @bitCast(_count));
    }

    /// ### DEPRECATED: Use `onPointsRemoved` instead
    ///
    pub const OnPointsRemoved = onPointsRemoved;

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
    pub fn onPointsRemoved(self: QSplineSeries, callback: *const fn (QSplineSeries, i32, i32) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointsRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `penChanged` instead
    ///
    pub const PenChanged = penChanged;

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#penChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` _pen: QPen `
    ///
    pub fn penChanged(self: QSplineSeries, _pen: anytype) void {
        comptime _ = @TypeOf(_pen)._is_QPen;
        qtc.QXYSeries_PenChanged(@ptrCast(self.ptr), @ptrCast(_pen.ptr));
    }

    /// ### DEPRECATED: Use `onPenChanged` instead
    ///
    pub const OnPenChanged = onPenChanged;

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
    pub fn onPenChanged(self: QSplineSeries, callback: *const fn (QSplineSeries, QPen) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `selectedPointsChanged` instead
    ///
    pub const SelectedPointsChanged = selectedPointsChanged;

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#selectedPointsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn selectedPointsChanged(self: QSplineSeries) void {
        qtc.QXYSeries_SelectedPointsChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSelectedPointsChanged` instead
    ///
    pub const OnSelectedPointsChanged = onSelectedPointsChanged;

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
    pub fn onSelectedPointsChanged(self: QSplineSeries, callback: *const fn (QSplineSeries) callconv(.c) void) void {
        qtc.QXYSeries_Connect_SelectedPointsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `lightMarkerChanged` instead
    ///
    pub const LightMarkerChanged = lightMarkerChanged;

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#lightMarkerChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` _lightMarker: QImage `
    ///
    pub fn lightMarkerChanged(self: QSplineSeries, _lightMarker: anytype) void {
        comptime _ = @TypeOf(_lightMarker)._is_QImage;
        qtc.QXYSeries_LightMarkerChanged(@ptrCast(self.ptr), @ptrCast(_lightMarker.ptr));
    }

    /// ### DEPRECATED: Use `onLightMarkerChanged` instead
    ///
    pub const OnLightMarkerChanged = onLightMarkerChanged;

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
    pub fn onLightMarkerChanged(self: QSplineSeries, callback: *const fn (QSplineSeries, QImage) callconv(.c) void) void {
        qtc.QXYSeries_Connect_LightMarkerChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `selectedLightMarkerChanged` instead
    ///
    pub const SelectedLightMarkerChanged = selectedLightMarkerChanged;

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#selectedLightMarkerChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` _selectedLightMarker: QImage `
    ///
    pub fn selectedLightMarkerChanged(self: QSplineSeries, _selectedLightMarker: anytype) void {
        comptime _ = @TypeOf(_selectedLightMarker)._is_QImage;
        qtc.QXYSeries_SelectedLightMarkerChanged(@ptrCast(self.ptr), @ptrCast(_selectedLightMarker.ptr));
    }

    /// ### DEPRECATED: Use `onSelectedLightMarkerChanged` instead
    ///
    pub const OnSelectedLightMarkerChanged = onSelectedLightMarkerChanged;

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
    pub fn onSelectedLightMarkerChanged(self: QSplineSeries, callback: *const fn (QSplineSeries, QImage) callconv(.c) void) void {
        qtc.QXYSeries_Connect_SelectedLightMarkerChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `bestFitLineVisibilityChanged` instead
    ///
    pub const BestFitLineVisibilityChanged = bestFitLineVisibilityChanged;

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
    pub fn bestFitLineVisibilityChanged(self: QSplineSeries, visible: bool) void {
        qtc.QXYSeries_BestFitLineVisibilityChanged(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `onBestFitLineVisibilityChanged` instead
    ///
    pub const OnBestFitLineVisibilityChanged = onBestFitLineVisibilityChanged;

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
    pub fn onBestFitLineVisibilityChanged(self: QSplineSeries, callback: *const fn (QSplineSeries, bool) callconv(.c) void) void {
        qtc.QXYSeries_Connect_BestFitLineVisibilityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `bestFitLinePenChanged` instead
    ///
    pub const BestFitLinePenChanged = bestFitLinePenChanged;

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#bestFitLinePenChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` _pen: QPen `
    ///
    pub fn bestFitLinePenChanged(self: QSplineSeries, _pen: anytype) void {
        comptime _ = @TypeOf(_pen)._is_QPen;
        qtc.QXYSeries_BestFitLinePenChanged(@ptrCast(self.ptr), @ptrCast(_pen.ptr));
    }

    /// ### DEPRECATED: Use `onBestFitLinePenChanged` instead
    ///
    pub const OnBestFitLinePenChanged = onBestFitLinePenChanged;

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
    pub fn onBestFitLinePenChanged(self: QSplineSeries, callback: *const fn (QSplineSeries, QPen) callconv(.c) void) void {
        qtc.QXYSeries_Connect_BestFitLinePenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `bestFitLineColorChanged` instead
    ///
    pub const BestFitLineColorChanged = bestFitLineColorChanged;

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` _color: QColor `
    ///
    pub fn bestFitLineColorChanged(self: QSplineSeries, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QColor;
        qtc.QXYSeries_BestFitLineColorChanged(@ptrCast(self.ptr), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `onBestFitLineColorChanged` instead
    ///
    pub const OnBestFitLineColorChanged = onBestFitLineColorChanged;

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
    pub fn onBestFitLineColorChanged(self: QSplineSeries, callback: *const fn (QSplineSeries, QColor) callconv(.c) void) void {
        qtc.QXYSeries_Connect_BestFitLineColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `pointsConfigurationChanged` instead
    ///
    pub const PointsConfigurationChanged = pointsConfigurationChanged;

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
    pub fn pointsConfigurationChanged(self: QSplineSeries, allocator: std.mem.Allocator, configuration: Map_i32_Map_i32_QVariant) void {
        const configuration_count = configuration.count();
        const configuration_keys = allocator.alloc(i32, configuration_count) catch @panic("QSplineSeries.pointsConfigurationChanged: Memory allocation failed");
        defer allocator.free(configuration_keys);
        const configuration_values = allocator.alloc(Map_i32_QVariant, configuration_count) catch @panic("QSplineSeries.pointsConfigurationChanged: Memory allocation failed");
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

    /// ### DEPRECATED: Use `onPointsConfigurationChanged` instead
    ///
    pub const OnPointsConfigurationChanged = onPointsConfigurationChanged;

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
    pub fn onPointsConfigurationChanged(self: QSplineSeries, callback: *const fn (QSplineSeries, qtc.libqt_map) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointsConfigurationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `markerSizeChanged` instead
    ///
    pub const MarkerSizeChanged = markerSizeChanged;

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
    pub fn markerSizeChanged(self: QSplineSeries, size: f64) void {
        qtc.QXYSeries_MarkerSizeChanged(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### DEPRECATED: Use `onMarkerSizeChanged` instead
    ///
    pub const OnMarkerSizeChanged = onMarkerSizeChanged;

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
    pub fn onMarkerSizeChanged(self: QSplineSeries, callback: *const fn (QSplineSeries, f64) callconv(.c) void) void {
        qtc.QXYSeries_Connect_MarkerSizeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setPointsVisible1` instead
    ///
    pub const SetPointsVisible1 = setPointsVisible1;

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
    pub fn setPointsVisible1(self: QSplineSeries, visible: bool) void {
        qtc.QXYSeries_SetPointsVisible1(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `setPointLabelsVisible1` instead
    ///
    pub const SetPointLabelsVisible1 = setPointLabelsVisible1;

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
    pub fn setPointLabelsVisible1(self: QSplineSeries, visible: bool) void {
        qtc.QXYSeries_SetPointLabelsVisible1(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `setPointLabelsClipping1` instead
    ///
    pub const SetPointLabelsClipping1 = setPointLabelsClipping1;

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
    pub fn setPointLabelsClipping1(self: QSplineSeries, enabled: bool) void {
        qtc.QXYSeries_SetPointLabelsClipping1(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `setBestFitLineVisible1` instead
    ///
    pub const SetBestFitLineVisible1 = setBestFitLineVisible1;

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
    pub fn setBestFitLineVisible1(self: QSplineSeries, visible: bool) void {
        qtc.QXYSeries_SetBestFitLineVisible1(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `colorBy2` instead
    ///
    pub const ColorBy2 = colorBy2;

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
    pub fn colorBy2(self: QSplineSeries, sourceData: []f64, gradient: anytype) void {
        const sourceData_list = qtc.libqt_list{
            .len = sourceData.len,
            .data = sourceData.ptr,
        };
        comptime _ = @TypeOf(gradient)._is_QLinearGradient;
        qtc.QXYSeries_ColorBy2(@ptrCast(self.ptr), sourceData_list, @ptrCast(gradient.ptr));
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setName(self: QSplineSeries, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.QAbstractSeries_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

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
    pub fn name(self: QSplineSeries, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractSeries_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSplineSeries.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setVisible` instead
    ///
    pub const SetVisible = setVisible;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn setVisible(self: QSplineSeries) void {
        qtc.QAbstractSeries_SetVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isVisible` instead
    ///
    pub const IsVisible = isVisible;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn isVisible(self: QSplineSeries) bool {
        return qtc.QAbstractSeries_IsVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `opacity` instead
    ///
    pub const Opacity = opacity;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn opacity(self: QSplineSeries) f64 {
        return qtc.QAbstractSeries_Opacity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setOpacity` instead
    ///
    pub const SetOpacity = setOpacity;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` _opacity: f64 `
    ///
    pub fn setOpacity(self: QSplineSeries, _opacity: f64) void {
        qtc.QAbstractSeries_SetOpacity(@ptrCast(self.ptr), @bitCast(_opacity));
    }

    /// ### DEPRECATED: Use `setUseOpenGL` instead
    ///
    pub const SetUseOpenGL = setUseOpenGL;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn setUseOpenGL(self: QSplineSeries) void {
        qtc.QAbstractSeries_SetUseOpenGL(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `useOpenGL` instead
    ///
    pub const UseOpenGL = useOpenGL;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn useOpenGL(self: QSplineSeries) bool {
        return qtc.QAbstractSeries_UseOpenGL(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `chart` instead
    ///
    pub const Chart = chart;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#chart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn chart(self: QSplineSeries) QChart {
        return .{ .ptr = qtc.QAbstractSeries_Chart(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `attachAxis` instead
    ///
    pub const AttachAxis = attachAxis;

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
    pub fn attachAxis(self: QSplineSeries, axis: anytype) bool {
        comptime _ = @TypeOf(axis)._is_QAbstractAxis;
        return qtc.QAbstractSeries_AttachAxis(@ptrCast(self.ptr), @ptrCast(axis.ptr));
    }

    /// ### DEPRECATED: Use `detachAxis` instead
    ///
    pub const DetachAxis = detachAxis;

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
    pub fn detachAxis(self: QSplineSeries, axis: anytype) bool {
        comptime _ = @TypeOf(axis)._is_QAbstractAxis;
        return qtc.QAbstractSeries_DetachAxis(@ptrCast(self.ptr), @ptrCast(axis.ptr));
    }

    /// ### DEPRECATED: Use `attachedAxes` instead
    ///
    pub const AttachedAxes = attachedAxes;

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
    pub fn attachedAxes(self: QSplineSeries, allocator: std.mem.Allocator) []QAbstractAxis {
        const _arr: qtc.libqt_list = qtc.QAbstractSeries_AttachedAxes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAbstractAxis, _arr.len) catch @panic("QSplineSeries.attachedAxes: Memory allocation failed");
        const _data_val: [*]QtC.QAbstractAxis = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `show` instead
    ///
    pub const Show = show;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn show(self: QSplineSeries) void {
        qtc.QAbstractSeries_Show(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hide` instead
    ///
    pub const Hide = hide;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn hide(self: QSplineSeries) void {
        qtc.QAbstractSeries_Hide(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `nameChanged` instead
    ///
    pub const NameChanged = nameChanged;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn nameChanged(self: QSplineSeries) void {
        qtc.QAbstractSeries_NameChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onNameChanged` instead
    ///
    pub const OnNameChanged = onNameChanged;

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
    pub fn onNameChanged(self: QSplineSeries, callback: *const fn (QSplineSeries) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_NameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `visibleChanged` instead
    ///
    pub const VisibleChanged = visibleChanged;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn visibleChanged(self: QSplineSeries) void {
        qtc.QAbstractSeries_VisibleChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onVisibleChanged` instead
    ///
    pub const OnVisibleChanged = onVisibleChanged;

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
    pub fn onVisibleChanged(self: QSplineSeries, callback: *const fn (QSplineSeries) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_VisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `opacityChanged` instead
    ///
    pub const OpacityChanged = opacityChanged;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn opacityChanged(self: QSplineSeries) void {
        qtc.QAbstractSeries_OpacityChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onOpacityChanged` instead
    ///
    pub const OnOpacityChanged = onOpacityChanged;

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
    pub fn onOpacityChanged(self: QSplineSeries, callback: *const fn (QSplineSeries) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_OpacityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `useOpenGLChanged` instead
    ///
    pub const UseOpenGLChanged = useOpenGLChanged;

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn useOpenGLChanged(self: QSplineSeries) void {
        qtc.QAbstractSeries_UseOpenGLChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUseOpenGLChanged` instead
    ///
    pub const OnUseOpenGLChanged = onUseOpenGLChanged;

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
    pub fn onUseOpenGLChanged(self: QSplineSeries, callback: *const fn (QSplineSeries) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_UseOpenGLChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setVisible1` instead
    ///
    pub const SetVisible1 = setVisible1;

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
    pub fn setVisible1(self: QSplineSeries, visible: bool) void {
        qtc.QAbstractSeries_SetVisible1(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `setUseOpenGL1` instead
    ///
    pub const SetUseOpenGL1 = setUseOpenGL1;

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
    pub fn setUseOpenGL1(self: QSplineSeries, enable: bool) void {
        qtc.QAbstractSeries_SetUseOpenGL1(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `objectName` instead
    ///
    pub const ObjectName = objectName;

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
    pub fn objectName(self: QSplineSeries, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSplineSeries.objectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setObjectName` instead
    ///
    pub const SetObjectName = setObjectName;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setObjectName(self: QSplineSeries, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `isWidgetType` instead
    ///
    pub const IsWidgetType = isWidgetType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn isWidgetType(self: QSplineSeries) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWindowType` instead
    ///
    pub const IsWindowType = isWindowType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn isWindowType(self: QSplineSeries) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isQuickItemType` instead
    ///
    pub const IsQuickItemType = isQuickItemType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn isQuickItemType(self: QSplineSeries) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `signalsBlocked` instead
    ///
    pub const SignalsBlocked = signalsBlocked;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn signalsBlocked(self: QSplineSeries) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `blockSignals` instead
    ///
    pub const BlockSignals = blockSignals;

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
    pub fn blockSignals(self: QSplineSeries, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `thread` instead
    ///
    pub const Thread = thread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn thread(self: QSplineSeries) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `moveToThread` instead
    ///
    pub const MoveToThread = moveToThread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QSplineSeries, _thread: anytype) bool {
        comptime _ = @TypeOf(_thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(_thread.ptr));
    }

    /// ### DEPRECATED: Use `startTimer` instead
    ///
    pub const StartTimer = startTimer;

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
    pub fn startTimer(self: QSplineSeries, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// ### DEPRECATED: Use `startTimer2` instead
    ///
    pub const StartTimer2 = startTimer2;

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
    pub fn startTimer2(self: QSplineSeries, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// ### DEPRECATED: Use `killTimer` instead
    ///
    pub const KillTimer = killTimer;

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
    pub fn killTimer(self: QSplineSeries, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `killTimer2` instead
    ///
    pub const KillTimer2 = killTimer2;

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
    pub fn killTimer2(self: QSplineSeries, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `children` instead
    ///
    pub const Children = children;

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
    pub fn children(self: QSplineSeries, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QSplineSeries.children: Memory allocation failed");
        const _data_val: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setParent` instead
    ///
    pub const SetParent = setParent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QSplineSeries, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `installEventFilter` instead
    ///
    pub const InstallEventFilter = installEventFilter;

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
    pub fn installEventFilter(self: QSplineSeries, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// ### DEPRECATED: Use `removeEventFilter` instead
    ///
    pub const RemoveEventFilter = removeEventFilter;

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
    pub fn removeEventFilter(self: QSplineSeries, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// ### DEPRECATED: Use `connect` instead
    ///
    pub const Connect = connect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// ### DEPRECATED: Use `connect2` instead
    ///
    pub const Connect2 = connect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn connect2(_sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// ### DEPRECATED: Use `connect3` instead
    ///
    pub const Connect3 = connect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QSplineSeries, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// ### DEPRECATED: Use `disconnect` instead
    ///
    pub const Disconnect = disconnect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect2` instead
    ///
    pub const Disconnect2 = disconnect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn disconnect2(_sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// ### DEPRECATED: Use `disconnect3` instead
    ///
    pub const Disconnect3 = disconnect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn disconnect3(self: QSplineSeries) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `disconnect4` instead
    ///
    pub const Disconnect4 = disconnect4;

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
    pub fn disconnect4(self: QSplineSeries, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect5` instead
    ///
    pub const Disconnect5 = disconnect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectTree` instead
    ///
    pub const DumpObjectTree = dumpObjectTree;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn dumpObjectTree(self: QSplineSeries) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectInfo` instead
    ///
    pub const DumpObjectInfo = dumpObjectInfo;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn dumpObjectInfo(self: QSplineSeries) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` _name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QSplineSeries, _name: [:0]const u8, value: anytype) bool {
        const name_Cstring = _name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` _name: [:0]const u8 `
    ///
    pub fn property(self: QSplineSeries, _name: [:0]const u8) QVariant {
        const name_Cstring = _name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// ### DEPRECATED: Use `dynamicPropertyNames` instead
    ///
    pub const DynamicPropertyNames = dynamicPropertyNames;

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
    pub fn dynamicPropertyNames(self: QSplineSeries, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QSplineSeries.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QSplineSeries.dynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `bindingStorage` instead
    ///
    pub const BindingStorage = bindingStorage;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn bindingStorage(self: QSplineSeries) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `bindingStorage2` instead
    ///
    pub const BindingStorage2 = bindingStorage2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn bindingStorage2(self: QSplineSeries) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `destroyed` instead
    ///
    pub const Destroyed = destroyed;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn destroyed(self: QSplineSeries) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed` instead
    ///
    pub const OnDestroyed = onDestroyed;

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
    pub fn onDestroyed(self: QSplineSeries, callback: *const fn (QSplineSeries) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn parent(self: QSplineSeries) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `inherits` instead
    ///
    pub const Inherits = inherits;

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
    pub fn inherits(self: QSplineSeries, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// ### DEPRECATED: Use `deleteLater` instead
    ///
    pub const DeleteLater = deleteLater;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn deleteLater(self: QSplineSeries) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startTimer22` instead
    ///
    pub const StartTimer22 = startTimer22;

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
    pub fn startTimer22(self: QSplineSeries, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `startTimer23` instead
    ///
    pub const StartTimer23 = startTimer23;

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
    pub fn startTimer23(self: QSplineSeries, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `connect5` instead
    ///
    pub const Connect5 = connect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn connect5(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// ### DEPRECATED: Use `connect52` instead
    ///
    pub const Connect52 = connect52;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect52(_sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `connect4` instead
    ///
    pub const Connect4 = connect4;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSplineSeries `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QSplineSeries, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `disconnect1` instead
    ///
    pub const Disconnect1 = disconnect1;

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
    pub fn disconnect1(self: QSplineSeries, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect22` instead
    ///
    pub const Disconnect22 = disconnect22;

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
    pub fn disconnect22(self: QSplineSeries, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect32` instead
    ///
    pub const Disconnect32 = disconnect32;

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
    pub fn disconnect32(self: QSplineSeries, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect23` instead
    ///
    pub const Disconnect23 = disconnect23;

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
    pub fn disconnect23(self: QSplineSeries, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `destroyed1` instead
    ///
    pub const Destroyed1 = destroyed1;

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
    pub fn destroyed1(self: QSplineSeries, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed1` instead
    ///
    pub const OnDestroyed1 = onDestroyed1;

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
    pub fn onDestroyed1(self: QSplineSeries, callback: *const fn (QSplineSeries, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setPen` instead
    ///
    pub const SetPen = setPen;

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
    /// ` _pen: QPen `
    ///
    pub fn setPen(self: QSplineSeries, _pen: anytype) void {
        comptime _ = @TypeOf(_pen)._is_QPen;
        qtc.QSplineSeries_SetPen(@ptrCast(self.ptr), @ptrCast(_pen.ptr));
    }

    /// ### DEPRECATED: Use `superSetPen` instead
    ///
    pub const SuperSetPen = superSetPen;

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
    /// ` _pen: QPen `
    ///
    pub fn superSetPen(self: QSplineSeries, _pen: anytype) void {
        comptime _ = @TypeOf(_pen)._is_QPen;
        qtc.QSplineSeries_SuperSetPen(@ptrCast(self.ptr), @ptrCast(_pen.ptr));
    }

    /// ### DEPRECATED: Use `onSetPen` instead
    ///
    pub const OnSetPen = onSetPen;

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
    pub fn onSetPen(self: QSplineSeries, callback: *const fn (QSplineSeries, QPen) callconv(.c) void) void {
        qtc.QSplineSeries_OnSetPen(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setBrush` instead
    ///
    pub const SetBrush = setBrush;

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
    /// ` _brush: QBrush `
    ///
    pub fn setBrush(self: QSplineSeries, _brush: anytype) void {
        comptime _ = @TypeOf(_brush)._is_QBrush;
        qtc.QSplineSeries_SetBrush(@ptrCast(self.ptr), @ptrCast(_brush.ptr));
    }

    /// ### DEPRECATED: Use `superSetBrush` instead
    ///
    pub const SuperSetBrush = superSetBrush;

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
    /// ` _brush: QBrush `
    ///
    pub fn superSetBrush(self: QSplineSeries, _brush: anytype) void {
        comptime _ = @TypeOf(_brush)._is_QBrush;
        qtc.QSplineSeries_SuperSetBrush(@ptrCast(self.ptr), @ptrCast(_brush.ptr));
    }

    /// ### DEPRECATED: Use `onSetBrush` instead
    ///
    pub const OnSetBrush = onSetBrush;

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
    pub fn onSetBrush(self: QSplineSeries, callback: *const fn (QSplineSeries, QBrush) callconv(.c) void) void {
        qtc.QSplineSeries_OnSetBrush(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setColor` instead
    ///
    pub const SetColor = setColor;

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
    /// ` _color: QColor `
    ///
    pub fn setColor(self: QSplineSeries, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QColor;
        qtc.QSplineSeries_SetColor(@ptrCast(self.ptr), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `superSetColor` instead
    ///
    pub const SuperSetColor = superSetColor;

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
    /// ` _color: QColor `
    ///
    pub fn superSetColor(self: QSplineSeries, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QColor;
        qtc.QSplineSeries_SuperSetColor(@ptrCast(self.ptr), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `onSetColor` instead
    ///
    pub const OnSetColor = onSetColor;

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
    pub fn onSetColor(self: QSplineSeries, callback: *const fn (QSplineSeries, QColor) callconv(.c) void) void {
        qtc.QSplineSeries_OnSetColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `color` instead
    ///
    pub const Color = color;

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
    pub fn color(self: QSplineSeries) QColor {
        return .{ .ptr = qtc.QSplineSeries_Color(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superColor` instead
    ///
    pub const SuperColor = superColor;

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
    pub fn superColor(self: QSplineSeries) QColor {
        return .{ .ptr = qtc.QSplineSeries_SuperColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onColor` instead
    ///
    pub const OnColor = onColor;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onColor(self: QSplineSeries, callback: *const fn () callconv(.c) QColor) void {
        qtc.QSplineSeries_OnColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

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
    /// ` _event: QEvent `
    ///
    pub fn event(self: QSplineSeries, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QSplineSeries_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QSplineSeries, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QSplineSeries_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

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
    pub fn onEvent(self: QSplineSeries, callback: *const fn (QSplineSeries, QEvent) callconv(.c) bool) void {
        qtc.QSplineSeries_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QSplineSeries, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QSplineSeries_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QSplineSeries, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QSplineSeries_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

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
    pub fn onEventFilter(self: QSplineSeries, callback: *const fn (QSplineSeries, QObject, QEvent) callconv(.c) bool) void {
        qtc.QSplineSeries_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `timerEvent` instead
    ///
    pub const TimerEvent = timerEvent;

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
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QSplineSeries, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QSplineSeries_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superTimerEvent` instead
    ///
    pub const SuperTimerEvent = superTimerEvent;

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
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QSplineSeries, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QSplineSeries_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onTimerEvent` instead
    ///
    pub const OnTimerEvent = onTimerEvent;

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
    pub fn onTimerEvent(self: QSplineSeries, callback: *const fn (QSplineSeries, QTimerEvent) callconv(.c) void) void {
        qtc.QSplineSeries_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `childEvent` instead
    ///
    pub const ChildEvent = childEvent;

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
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QSplineSeries, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QSplineSeries_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superChildEvent` instead
    ///
    pub const SuperChildEvent = superChildEvent;

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
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QSplineSeries, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QSplineSeries_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onChildEvent` instead
    ///
    pub const OnChildEvent = onChildEvent;

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
    pub fn onChildEvent(self: QSplineSeries, callback: *const fn (QSplineSeries, QChildEvent) callconv(.c) void) void {
        qtc.QSplineSeries_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `customEvent` instead
    ///
    pub const CustomEvent = customEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QSplineSeries, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QSplineSeries_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superCustomEvent` instead
    ///
    pub const SuperCustomEvent = superCustomEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QSplineSeries, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QSplineSeries_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onCustomEvent` instead
    ///
    pub const OnCustomEvent = onCustomEvent;

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
    pub fn onCustomEvent(self: QSplineSeries, callback: *const fn (QSplineSeries, QEvent) callconv(.c) void) void {
        qtc.QSplineSeries_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `connectNotify` instead
    ///
    pub const ConnectNotify = connectNotify;

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
    pub fn connectNotify(self: QSplineSeries, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSplineSeries_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superConnectNotify` instead
    ///
    pub const SuperConnectNotify = superConnectNotify;

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
    pub fn superConnectNotify(self: QSplineSeries, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSplineSeries_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onConnectNotify` instead
    ///
    pub const OnConnectNotify = onConnectNotify;

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
    pub fn onConnectNotify(self: QSplineSeries, callback: *const fn (QSplineSeries, QMetaMethod) callconv(.c) void) void {
        qtc.QSplineSeries_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `disconnectNotify` instead
    ///
    pub const DisconnectNotify = disconnectNotify;

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
    pub fn disconnectNotify(self: QSplineSeries, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSplineSeries_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superDisconnectNotify` instead
    ///
    pub const SuperDisconnectNotify = superDisconnectNotify;

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
    pub fn superDisconnectNotify(self: QSplineSeries, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSplineSeries_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onDisconnectNotify` instead
    ///
    pub const OnDisconnectNotify = onDisconnectNotify;

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
    pub fn onDisconnectNotify(self: QSplineSeries, callback: *const fn (QSplineSeries, QMetaMethod) callconv(.c) void) void {
        qtc.QSplineSeries_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sender` instead
    ///
    pub const Sender = sender;

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
    pub fn sender(self: QSplineSeries) QObject {
        return .{ .ptr = qtc.QSplineSeries_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSender` instead
    ///
    pub const SuperSender = superSender;

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
    pub fn superSender(self: QSplineSeries) QObject {
        return .{ .ptr = qtc.QSplineSeries_SuperSender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSender` instead
    ///
    pub const OnSender = onSender;

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
    pub fn onSender(self: QSplineSeries, callback: *const fn () callconv(.c) QObject) void {
        qtc.QSplineSeries_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `senderSignalIndex` instead
    ///
    pub const SenderSignalIndex = senderSignalIndex;

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
    pub fn senderSignalIndex(self: QSplineSeries) i32 {
        return qtc.QSplineSeries_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSenderSignalIndex` instead
    ///
    pub const SuperSenderSignalIndex = superSenderSignalIndex;

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
    pub fn superSenderSignalIndex(self: QSplineSeries) i32 {
        return qtc.QSplineSeries_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSenderSignalIndex` instead
    ///
    pub const OnSenderSignalIndex = onSenderSignalIndex;

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
    pub fn onSenderSignalIndex(self: QSplineSeries, callback: *const fn () callconv(.c) i32) void {
        qtc.QSplineSeries_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `receivers` instead
    ///
    pub const Receivers = receivers;

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
    pub fn receivers(self: QSplineSeries, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSplineSeries_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `superReceivers` instead
    ///
    pub const SuperReceivers = superReceivers;

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
    pub fn superReceivers(self: QSplineSeries, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSplineSeries_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `onReceivers` instead
    ///
    pub const OnReceivers = onReceivers;

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
    pub fn onReceivers(self: QSplineSeries, callback: *const fn (QSplineSeries, [*:0]const u8) callconv(.c) i32) void {
        qtc.QSplineSeries_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isSignalConnected` instead
    ///
    pub const IsSignalConnected = isSignalConnected;

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
    pub fn isSignalConnected(self: QSplineSeries, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QSplineSeries_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superIsSignalConnected` instead
    ///
    pub const SuperIsSignalConnected = superIsSignalConnected;

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
    pub fn superIsSignalConnected(self: QSplineSeries, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QSplineSeries_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onIsSignalConnected` instead
    ///
    pub const OnIsSignalConnected = onIsSignalConnected;

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
    pub fn onIsSignalConnected(self: QSplineSeries, callback: *const fn (QSplineSeries, QMetaMethod) callconv(.c) bool) void {
        qtc.QSplineSeries_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onObjectNameChanged` instead
    ///
    pub const OnObjectNameChanged = onObjectNameChanged;

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
    pub fn onObjectNameChanged(self: QSplineSeries, callback: *const fn (QSplineSeries, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsplineseries-qtcharts.html#dtor.QSplineSeries)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSplineSeries `
    ///
    pub fn delete(self: QSplineSeries) void {
        qtc.QSplineSeries_Delete(@ptrCast(self.ptr));
    }
};
