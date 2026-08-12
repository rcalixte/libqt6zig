const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAbstractAxis = @import("libqt6").QAbstractAxis;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QBrush = @import("libqt6").QBrush;
const QCandlestickSet = @import("libqt6").QCandlestickSet;
const QChart = @import("libqt6").QChart;
const QChildEvent = @import("libqt6").QChildEvent;
const QColor = @import("libqt6").QColor;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPen = @import("libqt6").QPen;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qabstractseries_enums = @import("libqabstractseries.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html)
pub const QCandlestickSeries = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QCandlestickSeries,

    pub const _is_QCandlestickSeries = {};
    pub const _is_QAbstractSeries = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QCandlestickSeries object in C++ memory
    ///
    pub fn new() QCandlestickSeries {
        return .{ .ptr = qtc.QCandlestickSeries_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QCandlestickSeries object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QCandlestickSeries {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QCandlestickSeries_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn metaObject(self: QCandlestickSeries) QMetaObject {
        return .{ .ptr = qtc.QCandlestickSeries_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QCandlestickSeries, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QCandlestickSeries_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCandlestickSeries `
    ///
    pub fn superMetaObject(self: QCandlestickSeries) QMetaObject {
        return .{ .ptr = qtc.QCandlestickSeries_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QCandlestickSeries, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QCandlestickSeries_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` callback: *const fn (self: QCandlestickSeries, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QCandlestickSeries_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QCandlestickSeries, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QCandlestickSeries_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QCandlestickSeries, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QCandlestickSeries_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` callback: *const fn (self: QCandlestickSeries, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QCandlestickSeries_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QCandlestickSeries, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QCandlestickSeries_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCandlestickSeries.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `append` instead
    ///
    pub const Append = append;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` set: QCandlestickSet `
    ///
    pub fn append(self: QCandlestickSeries, set: anytype) bool {
        comptime _ = @TypeOf(set)._is_QCandlestickSet;
        return qtc.QCandlestickSeries_Append(@ptrCast(self.ptr), @ptrCast(set.ptr));
    }

    /// ### DEPRECATED: Use `remove` instead
    ///
    pub const Remove = remove;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` set: QCandlestickSet `
    ///
    pub fn remove(self: QCandlestickSeries, set: anytype) bool {
        comptime _ = @TypeOf(set)._is_QCandlestickSet;
        return qtc.QCandlestickSeries_Remove(@ptrCast(self.ptr), @ptrCast(set.ptr));
    }

    /// ### DEPRECATED: Use `append2` instead
    ///
    pub const Append2 = append2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` _sets: []QCandlestickSet `
    ///
    pub fn append2(self: QCandlestickSeries, _sets: []QCandlestickSet) bool {
        const sets_list = qtc.libqt_list{
            .len = _sets.len,
            .data = @ptrCast(_sets.ptr),
        };
        return qtc.QCandlestickSeries_Append2(@ptrCast(self.ptr), sets_list);
    }

    /// ### DEPRECATED: Use `remove2` instead
    ///
    pub const Remove2 = remove2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` _sets: []QCandlestickSet `
    ///
    pub fn remove2(self: QCandlestickSeries, _sets: []QCandlestickSet) bool {
        const sets_list = qtc.libqt_list{
            .len = _sets.len,
            .data = @ptrCast(_sets.ptr),
        };
        return qtc.QCandlestickSeries_Remove2(@ptrCast(self.ptr), sets_list);
    }

    /// ### DEPRECATED: Use `insert` instead
    ///
    pub const Insert = insert;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` set: QCandlestickSet `
    ///
    pub fn insert(self: QCandlestickSeries, index: i32, set: anytype) bool {
        comptime _ = @TypeOf(set)._is_QCandlestickSet;
        return qtc.QCandlestickSeries_Insert(@ptrCast(self.ptr), @bitCast(index), @ptrCast(set.ptr));
    }

    /// ### DEPRECATED: Use `take` instead
    ///
    pub const Take = take;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#take)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` set: QCandlestickSet `
    ///
    pub fn take(self: QCandlestickSeries, set: anytype) bool {
        comptime _ = @TypeOf(set)._is_QCandlestickSet;
        return qtc.QCandlestickSeries_Take(@ptrCast(self.ptr), @ptrCast(set.ptr));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn clear(self: QCandlestickSeries) void {
        qtc.QCandlestickSeries_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `sets` instead
    ///
    pub const Sets = sets;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#sets)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn sets(self: QCandlestickSeries, allocator: std.mem.Allocator) []QCandlestickSet {
        const _arr: qtc.libqt_list = qtc.QCandlestickSeries_Sets(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QCandlestickSet, _arr.len) catch @panic("QCandlestickSeries.sets: Memory allocation failed");
        const _data_val: [*]QtC.QCandlestickSet = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `count` instead
    ///
    pub const Count = count;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn count(self: QCandlestickSeries) i32 {
        return qtc.QCandlestickSeries_Count(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ## Returns:
    ///
    /// ` qabstractseries_enums.SeriesType `
    ///
    pub fn type0(self: QCandlestickSeries) i32 {
        return qtc.QCandlestickSeries_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onType` instead
    ///
    pub const OnType = onType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#type)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onType(self: QCandlestickSeries, callback: *const fn () callconv(.c) i32) void {
        qtc.QCandlestickSeries_OnType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superType` instead
    ///
    pub const SuperType = superType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#type)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ## Returns:
    ///
    /// ` qabstractseries_enums.SeriesType `
    ///
    pub fn superType(self: QCandlestickSeries) i32 {
        return qtc.QCandlestickSeries_SuperType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMaximumColumnWidth` instead
    ///
    pub const SetMaximumColumnWidth = setMaximumColumnWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#setMaximumColumnWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` _maximumColumnWidth: f64 `
    ///
    pub fn setMaximumColumnWidth(self: QCandlestickSeries, _maximumColumnWidth: f64) void {
        qtc.QCandlestickSeries_SetMaximumColumnWidth(@ptrCast(self.ptr), @bitCast(_maximumColumnWidth));
    }

    /// ### DEPRECATED: Use `maximumColumnWidth` instead
    ///
    pub const MaximumColumnWidth = maximumColumnWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#maximumColumnWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn maximumColumnWidth(self: QCandlestickSeries) f64 {
        return qtc.QCandlestickSeries_MaximumColumnWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMinimumColumnWidth` instead
    ///
    pub const SetMinimumColumnWidth = setMinimumColumnWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#setMinimumColumnWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` _minimumColumnWidth: f64 `
    ///
    pub fn setMinimumColumnWidth(self: QCandlestickSeries, _minimumColumnWidth: f64) void {
        qtc.QCandlestickSeries_SetMinimumColumnWidth(@ptrCast(self.ptr), @bitCast(_minimumColumnWidth));
    }

    /// ### DEPRECATED: Use `minimumColumnWidth` instead
    ///
    pub const MinimumColumnWidth = minimumColumnWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#minimumColumnWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn minimumColumnWidth(self: QCandlestickSeries) f64 {
        return qtc.QCandlestickSeries_MinimumColumnWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBodyWidth` instead
    ///
    pub const SetBodyWidth = setBodyWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#setBodyWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` _bodyWidth: f64 `
    ///
    pub fn setBodyWidth(self: QCandlestickSeries, _bodyWidth: f64) void {
        qtc.QCandlestickSeries_SetBodyWidth(@ptrCast(self.ptr), @bitCast(_bodyWidth));
    }

    /// ### DEPRECATED: Use `bodyWidth` instead
    ///
    pub const BodyWidth = bodyWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#bodyWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn bodyWidth(self: QCandlestickSeries) f64 {
        return qtc.QCandlestickSeries_BodyWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBodyOutlineVisible` instead
    ///
    pub const SetBodyOutlineVisible = setBodyOutlineVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#setBodyOutlineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` _bodyOutlineVisible: bool `
    ///
    pub fn setBodyOutlineVisible(self: QCandlestickSeries, _bodyOutlineVisible: bool) void {
        qtc.QCandlestickSeries_SetBodyOutlineVisible(@ptrCast(self.ptr), _bodyOutlineVisible);
    }

    /// ### DEPRECATED: Use `bodyOutlineVisible` instead
    ///
    pub const BodyOutlineVisible = bodyOutlineVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#bodyOutlineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn bodyOutlineVisible(self: QCandlestickSeries) bool {
        return qtc.QCandlestickSeries_BodyOutlineVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCapsWidth` instead
    ///
    pub const SetCapsWidth = setCapsWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#setCapsWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` _capsWidth: f64 `
    ///
    pub fn setCapsWidth(self: QCandlestickSeries, _capsWidth: f64) void {
        qtc.QCandlestickSeries_SetCapsWidth(@ptrCast(self.ptr), @bitCast(_capsWidth));
    }

    /// ### DEPRECATED: Use `capsWidth` instead
    ///
    pub const CapsWidth = capsWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#capsWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn capsWidth(self: QCandlestickSeries) f64 {
        return qtc.QCandlestickSeries_CapsWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCapsVisible` instead
    ///
    pub const SetCapsVisible = setCapsVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#setCapsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` _capsVisible: bool `
    ///
    pub fn setCapsVisible(self: QCandlestickSeries, _capsVisible: bool) void {
        qtc.QCandlestickSeries_SetCapsVisible(@ptrCast(self.ptr), _capsVisible);
    }

    /// ### DEPRECATED: Use `capsVisible` instead
    ///
    pub const CapsVisible = capsVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#capsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn capsVisible(self: QCandlestickSeries) bool {
        return qtc.QCandlestickSeries_CapsVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setIncreasingColor` instead
    ///
    pub const SetIncreasingColor = setIncreasingColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#setIncreasingColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` _increasingColor: QColor `
    ///
    pub fn setIncreasingColor(self: QCandlestickSeries, _increasingColor: anytype) void {
        comptime _ = @TypeOf(_increasingColor)._is_QColor;
        qtc.QCandlestickSeries_SetIncreasingColor(@ptrCast(self.ptr), @ptrCast(_increasingColor.ptr));
    }

    /// ### DEPRECATED: Use `increasingColor` instead
    ///
    pub const IncreasingColor = increasingColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#increasingColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn increasingColor(self: QCandlestickSeries) QColor {
        return .{ .ptr = qtc.QCandlestickSeries_IncreasingColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setDecreasingColor` instead
    ///
    pub const SetDecreasingColor = setDecreasingColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#setDecreasingColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` _decreasingColor: QColor `
    ///
    pub fn setDecreasingColor(self: QCandlestickSeries, _decreasingColor: anytype) void {
        comptime _ = @TypeOf(_decreasingColor)._is_QColor;
        qtc.QCandlestickSeries_SetDecreasingColor(@ptrCast(self.ptr), @ptrCast(_decreasingColor.ptr));
    }

    /// ### DEPRECATED: Use `decreasingColor` instead
    ///
    pub const DecreasingColor = decreasingColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#decreasingColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn decreasingColor(self: QCandlestickSeries) QColor {
        return .{ .ptr = qtc.QCandlestickSeries_DecreasingColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBrush` instead
    ///
    pub const SetBrush = setBrush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#setBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` _brush: QBrush `
    ///
    pub fn setBrush(self: QCandlestickSeries, _brush: anytype) void {
        comptime _ = @TypeOf(_brush)._is_QBrush;
        qtc.QCandlestickSeries_SetBrush(@ptrCast(self.ptr), @ptrCast(_brush.ptr));
    }

    /// ### DEPRECATED: Use `brush` instead
    ///
    pub const Brush = brush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#brush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn brush(self: QCandlestickSeries) QBrush {
        return .{ .ptr = qtc.QCandlestickSeries_Brush(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPen` instead
    ///
    pub const SetPen = setPen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#setPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` _pen: QPen `
    ///
    pub fn setPen(self: QCandlestickSeries, _pen: anytype) void {
        comptime _ = @TypeOf(_pen)._is_QPen;
        qtc.QCandlestickSeries_SetPen(@ptrCast(self.ptr), @ptrCast(_pen.ptr));
    }

    /// ### DEPRECATED: Use `pen` instead
    ///
    pub const Pen = pen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#pen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn pen(self: QCandlestickSeries) QPen {
        return .{ .ptr = qtc.QCandlestickSeries_Pen(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `clicked` instead
    ///
    pub const Clicked = clicked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#clicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` set: QCandlestickSet `
    ///
    pub fn clicked(self: QCandlestickSeries, set: anytype) void {
        comptime _ = @TypeOf(set)._is_QCandlestickSet;
        qtc.QCandlestickSeries_Clicked(@ptrCast(self.ptr), @ptrCast(set.ptr));
    }

    /// ### DEPRECATED: Use `onClicked` instead
    ///
    pub const OnClicked = onClicked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#clicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` callback: *const fn (self: QCandlestickSeries, set: QCandlestickSet) callconv(.c) void `
    ///
    pub fn onClicked(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries, QCandlestickSet) callconv(.c) void) void {
        qtc.QCandlestickSeries_Connect_Clicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `hovered` instead
    ///
    pub const Hovered = hovered;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#hovered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` status: bool `
    ///
    /// ` set: QCandlestickSet `
    ///
    pub fn hovered(self: QCandlestickSeries, status: bool, set: anytype) void {
        comptime _ = @TypeOf(set)._is_QCandlestickSet;
        qtc.QCandlestickSeries_Hovered(@ptrCast(self.ptr), status, @ptrCast(set.ptr));
    }

    /// ### DEPRECATED: Use `onHovered` instead
    ///
    pub const OnHovered = onHovered;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#hovered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` callback: *const fn (self: QCandlestickSeries, status: bool, set: QCandlestickSet) callconv(.c) void `
    ///
    pub fn onHovered(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries, bool, QCandlestickSet) callconv(.c) void) void {
        qtc.QCandlestickSeries_Connect_Hovered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `pressed` instead
    ///
    pub const Pressed = pressed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#pressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` set: QCandlestickSet `
    ///
    pub fn pressed(self: QCandlestickSeries, set: anytype) void {
        comptime _ = @TypeOf(set)._is_QCandlestickSet;
        qtc.QCandlestickSeries_Pressed(@ptrCast(self.ptr), @ptrCast(set.ptr));
    }

    /// ### DEPRECATED: Use `onPressed` instead
    ///
    pub const OnPressed = onPressed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#pressed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` callback: *const fn (self: QCandlestickSeries, set: QCandlestickSet) callconv(.c) void `
    ///
    pub fn onPressed(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries, QCandlestickSet) callconv(.c) void) void {
        qtc.QCandlestickSeries_Connect_Pressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `released` instead
    ///
    pub const Released = released;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#released)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` set: QCandlestickSet `
    ///
    pub fn released(self: QCandlestickSeries, set: anytype) void {
        comptime _ = @TypeOf(set)._is_QCandlestickSet;
        qtc.QCandlestickSeries_Released(@ptrCast(self.ptr), @ptrCast(set.ptr));
    }

    /// ### DEPRECATED: Use `onReleased` instead
    ///
    pub const OnReleased = onReleased;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#released)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` callback: *const fn (self: QCandlestickSeries, set: QCandlestickSet) callconv(.c) void `
    ///
    pub fn onReleased(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries, QCandlestickSet) callconv(.c) void) void {
        qtc.QCandlestickSeries_Connect_Released(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `doubleClicked` instead
    ///
    pub const DoubleClicked = doubleClicked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#doubleClicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` set: QCandlestickSet `
    ///
    pub fn doubleClicked(self: QCandlestickSeries, set: anytype) void {
        comptime _ = @TypeOf(set)._is_QCandlestickSet;
        qtc.QCandlestickSeries_DoubleClicked(@ptrCast(self.ptr), @ptrCast(set.ptr));
    }

    /// ### DEPRECATED: Use `onDoubleClicked` instead
    ///
    pub const OnDoubleClicked = onDoubleClicked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#doubleClicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` callback: *const fn (self: QCandlestickSeries, set: QCandlestickSet) callconv(.c) void `
    ///
    pub fn onDoubleClicked(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries, QCandlestickSet) callconv(.c) void) void {
        qtc.QCandlestickSeries_Connect_DoubleClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `candlestickSetsAdded` instead
    ///
    pub const CandlestickSetsAdded = candlestickSetsAdded;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#candlestickSetsAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` _sets: []QCandlestickSet `
    ///
    pub fn candlestickSetsAdded(self: QCandlestickSeries, _sets: []QCandlestickSet) void {
        const sets_list = qtc.libqt_list{
            .len = _sets.len,
            .data = @ptrCast(_sets.ptr),
        };
        qtc.QCandlestickSeries_CandlestickSetsAdded(@ptrCast(self.ptr), sets_list);
    }

    /// ### DEPRECATED: Use `onCandlestickSetsAdded` instead
    ///
    pub const OnCandlestickSetsAdded = onCandlestickSetsAdded;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#candlestickSetsAdded)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` callback: *const fn (self: QCandlestickSeries, sets: qtc.libqt_list ([]QCandlestickSet)) callconv(.c) void `
    ///
    pub fn onCandlestickSetsAdded(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries, qtc.libqt_list) callconv(.c) void) void {
        qtc.QCandlestickSeries_Connect_CandlestickSetsAdded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `candlestickSetsRemoved` instead
    ///
    pub const CandlestickSetsRemoved = candlestickSetsRemoved;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#candlestickSetsRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` _sets: []QCandlestickSet `
    ///
    pub fn candlestickSetsRemoved(self: QCandlestickSeries, _sets: []QCandlestickSet) void {
        const sets_list = qtc.libqt_list{
            .len = _sets.len,
            .data = @ptrCast(_sets.ptr),
        };
        qtc.QCandlestickSeries_CandlestickSetsRemoved(@ptrCast(self.ptr), sets_list);
    }

    /// ### DEPRECATED: Use `onCandlestickSetsRemoved` instead
    ///
    pub const OnCandlestickSetsRemoved = onCandlestickSetsRemoved;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#candlestickSetsRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` callback: *const fn (self: QCandlestickSeries, sets: qtc.libqt_list ([]QCandlestickSet)) callconv(.c) void `
    ///
    pub fn onCandlestickSetsRemoved(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries, qtc.libqt_list) callconv(.c) void) void {
        qtc.QCandlestickSeries_Connect_CandlestickSetsRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `countChanged` instead
    ///
    pub const CountChanged = countChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#countChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn countChanged(self: QCandlestickSeries) void {
        qtc.QCandlestickSeries_CountChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCountChanged` instead
    ///
    pub const OnCountChanged = onCountChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#countChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` callback: *const fn (self: QCandlestickSeries) callconv(.c) void `
    ///
    pub fn onCountChanged(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries) callconv(.c) void) void {
        qtc.QCandlestickSeries_Connect_CountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `maximumColumnWidthChanged` instead
    ///
    pub const MaximumColumnWidthChanged = maximumColumnWidthChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#maximumColumnWidthChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn maximumColumnWidthChanged(self: QCandlestickSeries) void {
        qtc.QCandlestickSeries_MaximumColumnWidthChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onMaximumColumnWidthChanged` instead
    ///
    pub const OnMaximumColumnWidthChanged = onMaximumColumnWidthChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#maximumColumnWidthChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` callback: *const fn (self: QCandlestickSeries) callconv(.c) void `
    ///
    pub fn onMaximumColumnWidthChanged(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries) callconv(.c) void) void {
        qtc.QCandlestickSeries_Connect_MaximumColumnWidthChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `minimumColumnWidthChanged` instead
    ///
    pub const MinimumColumnWidthChanged = minimumColumnWidthChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#minimumColumnWidthChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn minimumColumnWidthChanged(self: QCandlestickSeries) void {
        qtc.QCandlestickSeries_MinimumColumnWidthChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onMinimumColumnWidthChanged` instead
    ///
    pub const OnMinimumColumnWidthChanged = onMinimumColumnWidthChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#minimumColumnWidthChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` callback: *const fn (self: QCandlestickSeries) callconv(.c) void `
    ///
    pub fn onMinimumColumnWidthChanged(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries) callconv(.c) void) void {
        qtc.QCandlestickSeries_Connect_MinimumColumnWidthChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `bodyWidthChanged` instead
    ///
    pub const BodyWidthChanged = bodyWidthChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#bodyWidthChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn bodyWidthChanged(self: QCandlestickSeries) void {
        qtc.QCandlestickSeries_BodyWidthChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onBodyWidthChanged` instead
    ///
    pub const OnBodyWidthChanged = onBodyWidthChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#bodyWidthChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` callback: *const fn (self: QCandlestickSeries) callconv(.c) void `
    ///
    pub fn onBodyWidthChanged(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries) callconv(.c) void) void {
        qtc.QCandlestickSeries_Connect_BodyWidthChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `bodyOutlineVisibilityChanged` instead
    ///
    pub const BodyOutlineVisibilityChanged = bodyOutlineVisibilityChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#bodyOutlineVisibilityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn bodyOutlineVisibilityChanged(self: QCandlestickSeries) void {
        qtc.QCandlestickSeries_BodyOutlineVisibilityChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onBodyOutlineVisibilityChanged` instead
    ///
    pub const OnBodyOutlineVisibilityChanged = onBodyOutlineVisibilityChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#bodyOutlineVisibilityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` callback: *const fn (self: QCandlestickSeries) callconv(.c) void `
    ///
    pub fn onBodyOutlineVisibilityChanged(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries) callconv(.c) void) void {
        qtc.QCandlestickSeries_Connect_BodyOutlineVisibilityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `capsWidthChanged` instead
    ///
    pub const CapsWidthChanged = capsWidthChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#capsWidthChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn capsWidthChanged(self: QCandlestickSeries) void {
        qtc.QCandlestickSeries_CapsWidthChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCapsWidthChanged` instead
    ///
    pub const OnCapsWidthChanged = onCapsWidthChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#capsWidthChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` callback: *const fn (self: QCandlestickSeries) callconv(.c) void `
    ///
    pub fn onCapsWidthChanged(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries) callconv(.c) void) void {
        qtc.QCandlestickSeries_Connect_CapsWidthChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `capsVisibilityChanged` instead
    ///
    pub const CapsVisibilityChanged = capsVisibilityChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#capsVisibilityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn capsVisibilityChanged(self: QCandlestickSeries) void {
        qtc.QCandlestickSeries_CapsVisibilityChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCapsVisibilityChanged` instead
    ///
    pub const OnCapsVisibilityChanged = onCapsVisibilityChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#capsVisibilityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` callback: *const fn (self: QCandlestickSeries) callconv(.c) void `
    ///
    pub fn onCapsVisibilityChanged(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries) callconv(.c) void) void {
        qtc.QCandlestickSeries_Connect_CapsVisibilityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `increasingColorChanged` instead
    ///
    pub const IncreasingColorChanged = increasingColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#increasingColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn increasingColorChanged(self: QCandlestickSeries) void {
        qtc.QCandlestickSeries_IncreasingColorChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIncreasingColorChanged` instead
    ///
    pub const OnIncreasingColorChanged = onIncreasingColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#increasingColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` callback: *const fn (self: QCandlestickSeries) callconv(.c) void `
    ///
    pub fn onIncreasingColorChanged(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries) callconv(.c) void) void {
        qtc.QCandlestickSeries_Connect_IncreasingColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `decreasingColorChanged` instead
    ///
    pub const DecreasingColorChanged = decreasingColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#decreasingColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn decreasingColorChanged(self: QCandlestickSeries) void {
        qtc.QCandlestickSeries_DecreasingColorChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDecreasingColorChanged` instead
    ///
    pub const OnDecreasingColorChanged = onDecreasingColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#decreasingColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` callback: *const fn (self: QCandlestickSeries) callconv(.c) void `
    ///
    pub fn onDecreasingColorChanged(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries) callconv(.c) void) void {
        qtc.QCandlestickSeries_Connect_DecreasingColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `brushChanged` instead
    ///
    pub const BrushChanged = brushChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#brushChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn brushChanged(self: QCandlestickSeries) void {
        qtc.QCandlestickSeries_BrushChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onBrushChanged` instead
    ///
    pub const OnBrushChanged = onBrushChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#brushChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` callback: *const fn (self: QCandlestickSeries) callconv(.c) void `
    ///
    pub fn onBrushChanged(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries) callconv(.c) void) void {
        qtc.QCandlestickSeries_Connect_BrushChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `penChanged` instead
    ///
    pub const PenChanged = penChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#penChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn penChanged(self: QCandlestickSeries) void {
        qtc.QCandlestickSeries_PenChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onPenChanged` instead
    ///
    pub const OnPenChanged = onPenChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#penChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCandlestickSeries `
    ///
    /// ` callback: *const fn (self: QCandlestickSeries) callconv(.c) void `
    ///
    pub fn onPenChanged(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries) callconv(.c) void) void {
        qtc.QCandlestickSeries_Connect_PenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCandlestickSeries.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCandlestickSeries.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setName(self: QCandlestickSeries, _name: []const u8) void {
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: QCandlestickSeries, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractSeries_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCandlestickSeries.name: Memory allocation failed");
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
    /// ` self: QCandlestickSeries `
    ///
    pub fn setVisible(self: QCandlestickSeries) void {
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
    /// ` self: QCandlestickSeries `
    ///
    pub fn isVisible(self: QCandlestickSeries) bool {
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
    /// ` self: QCandlestickSeries `
    ///
    pub fn opacity(self: QCandlestickSeries) f64 {
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` _opacity: f64 `
    ///
    pub fn setOpacity(self: QCandlestickSeries, _opacity: f64) void {
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
    /// ` self: QCandlestickSeries `
    ///
    pub fn setUseOpenGL(self: QCandlestickSeries) void {
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
    /// ` self: QCandlestickSeries `
    ///
    pub fn useOpenGL(self: QCandlestickSeries) bool {
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
    /// ` self: QCandlestickSeries `
    ///
    pub fn chart(self: QCandlestickSeries) QChart {
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` axis: QAbstractAxis `
    ///
    pub fn attachAxis(self: QCandlestickSeries, axis: anytype) bool {
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` axis: QAbstractAxis `
    ///
    pub fn detachAxis(self: QCandlestickSeries, axis: anytype) bool {
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn attachedAxes(self: QCandlestickSeries, allocator: std.mem.Allocator) []QAbstractAxis {
        const _arr: qtc.libqt_list = qtc.QAbstractSeries_AttachedAxes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAbstractAxis, _arr.len) catch @panic("QCandlestickSeries.attachedAxes: Memory allocation failed");
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
    /// ` self: QCandlestickSeries `
    ///
    pub fn show(self: QCandlestickSeries) void {
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
    /// ` self: QCandlestickSeries `
    ///
    pub fn hide(self: QCandlestickSeries) void {
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
    /// ` self: QCandlestickSeries `
    ///
    pub fn nameChanged(self: QCandlestickSeries) void {
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` callback: *const fn (self: QCandlestickSeries) callconv(.c) void `
    ///
    pub fn onNameChanged(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries) callconv(.c) void) void {
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
    /// ` self: QCandlestickSeries `
    ///
    pub fn visibleChanged(self: QCandlestickSeries) void {
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` callback: *const fn (self: QCandlestickSeries) callconv(.c) void `
    ///
    pub fn onVisibleChanged(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries) callconv(.c) void) void {
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
    /// ` self: QCandlestickSeries `
    ///
    pub fn opacityChanged(self: QCandlestickSeries) void {
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` callback: *const fn (self: QCandlestickSeries) callconv(.c) void `
    ///
    pub fn onOpacityChanged(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries) callconv(.c) void) void {
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
    /// ` self: QCandlestickSeries `
    ///
    pub fn useOpenGLChanged(self: QCandlestickSeries) void {
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` callback: *const fn (self: QCandlestickSeries) callconv(.c) void `
    ///
    pub fn onUseOpenGLChanged(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries) callconv(.c) void) void {
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn setVisible1(self: QCandlestickSeries, visible: bool) void {
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` enable: bool `
    ///
    pub fn setUseOpenGL1(self: QCandlestickSeries, enable: bool) void {
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QCandlestickSeries, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCandlestickSeries.objectName: Memory allocation failed");
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setObjectName(self: QCandlestickSeries, _name: []const u8) void {
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
    /// ` self: QCandlestickSeries `
    ///
    pub fn isWidgetType(self: QCandlestickSeries) bool {
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
    /// ` self: QCandlestickSeries `
    ///
    pub fn isWindowType(self: QCandlestickSeries) bool {
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
    /// ` self: QCandlestickSeries `
    ///
    pub fn isQuickItemType(self: QCandlestickSeries) bool {
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
    /// ` self: QCandlestickSeries `
    ///
    pub fn signalsBlocked(self: QCandlestickSeries) bool {
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QCandlestickSeries, b: bool) bool {
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
    /// ` self: QCandlestickSeries `
    ///
    pub fn thread(self: QCandlestickSeries) QThread {
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QCandlestickSeries, _thread: anytype) bool {
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QCandlestickSeries, interval: i32) i32 {
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QCandlestickSeries, time: i64) i32 {
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QCandlestickSeries, id: i32) void {
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QCandlestickSeries, id: i32) void {
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QCandlestickSeries, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QCandlestickSeries.children: Memory allocation failed");
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QCandlestickSeries, _parent: anytype) void {
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QCandlestickSeries, filterObj: anytype) void {
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QCandlestickSeries, obj: anytype) void {
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QCandlestickSeries, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QCandlestickSeries `
    ///
    pub fn disconnect3(self: QCandlestickSeries) bool {
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QCandlestickSeries, receiver: anytype) bool {
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
    /// ` self: QCandlestickSeries `
    ///
    pub fn dumpObjectTree(self: QCandlestickSeries) void {
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
    /// ` self: QCandlestickSeries `
    ///
    pub fn dumpObjectInfo(self: QCandlestickSeries) void {
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` _name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QCandlestickSeries, _name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` _name: [:0]const u8 `
    ///
    pub fn property(self: QCandlestickSeries, _name: [:0]const u8) QVariant {
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QCandlestickSeries, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QCandlestickSeries.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QCandlestickSeries.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QCandlestickSeries `
    ///
    pub fn bindingStorage(self: QCandlestickSeries) QBindingStorage {
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
    /// ` self: QCandlestickSeries `
    ///
    pub fn bindingStorage2(self: QCandlestickSeries) QBindingStorage {
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
    /// ` self: QCandlestickSeries `
    ///
    pub fn destroyed(self: QCandlestickSeries) void {
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` callback: *const fn (self: QCandlestickSeries) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries) callconv(.c) void) void {
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
    /// ` self: QCandlestickSeries `
    ///
    pub fn parent(self: QCandlestickSeries) QObject {
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QCandlestickSeries, classname: [:0]const u8) bool {
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
    /// ` self: QCandlestickSeries `
    ///
    pub fn deleteLater(self: QCandlestickSeries) void {
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QCandlestickSeries, interval: i32, timerType: i32) i32 {
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QCandlestickSeries, time: i64, timerType: i32) i32 {
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QCandlestickSeries, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QCandlestickSeries, signal: [:0]const u8) bool {
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QCandlestickSeries, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QCandlestickSeries, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QCandlestickSeries, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QCandlestickSeries, param1: anytype) void {
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` callback: *const fn (self: QCandlestickSeries, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QCandlestickSeries, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QCandlestickSeries_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QCandlestickSeries, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QCandlestickSeries_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCandlestickSeries`
    ///
    /// ` callback: *const fn (self: QCandlestickSeries, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries, QEvent) callconv(.c) bool) void {
        qtc.QCandlestickSeries_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QCandlestickSeries, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QCandlestickSeries_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QCandlestickSeries, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QCandlestickSeries_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCandlestickSeries`
    ///
    /// ` callback: *const fn (self: QCandlestickSeries, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries, QObject, QEvent) callconv(.c) bool) void {
        qtc.QCandlestickSeries_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QCandlestickSeries, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QCandlestickSeries_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QCandlestickSeries, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QCandlestickSeries_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCandlestickSeries`
    ///
    /// ` callback: *const fn (self: QCandlestickSeries, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries, QTimerEvent) callconv(.c) void) void {
        qtc.QCandlestickSeries_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QCandlestickSeries, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QCandlestickSeries_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QCandlestickSeries, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QCandlestickSeries_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCandlestickSeries`
    ///
    /// ` callback: *const fn (self: QCandlestickSeries, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries, QChildEvent) callconv(.c) void) void {
        qtc.QCandlestickSeries_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QCandlestickSeries, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QCandlestickSeries_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QCandlestickSeries, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QCandlestickSeries_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCandlestickSeries`
    ///
    /// ` callback: *const fn (self: QCandlestickSeries, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries, QEvent) callconv(.c) void) void {
        qtc.QCandlestickSeries_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QCandlestickSeries, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QCandlestickSeries_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QCandlestickSeries, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QCandlestickSeries_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCandlestickSeries`
    ///
    /// ` callback: *const fn (self: QCandlestickSeries, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries, QMetaMethod) callconv(.c) void) void {
        qtc.QCandlestickSeries_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QCandlestickSeries, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QCandlestickSeries_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QCandlestickSeries, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QCandlestickSeries_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCandlestickSeries`
    ///
    /// ` callback: *const fn (self: QCandlestickSeries, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries, QMetaMethod) callconv(.c) void) void {
        qtc.QCandlestickSeries_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCandlestickSeries `
    ///
    pub fn sender(self: QCandlestickSeries) QObject {
        return .{ .ptr = qtc.QCandlestickSeries_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QCandlestickSeries `
    ///
    pub fn superSender(self: QCandlestickSeries) QObject {
        return .{ .ptr = qtc.QCandlestickSeries_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QCandlestickSeries`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QCandlestickSeries, callback: *const fn () callconv(.c) QObject) void {
        qtc.QCandlestickSeries_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCandlestickSeries `
    ///
    pub fn senderSignalIndex(self: QCandlestickSeries) i32 {
        return qtc.QCandlestickSeries_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QCandlestickSeries `
    ///
    pub fn superSenderSignalIndex(self: QCandlestickSeries) i32 {
        return qtc.QCandlestickSeries_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QCandlestickSeries`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QCandlestickSeries, callback: *const fn () callconv(.c) i32) void {
        qtc.QCandlestickSeries_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QCandlestickSeries, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QCandlestickSeries_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QCandlestickSeries, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QCandlestickSeries_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QCandlestickSeries`
    ///
    /// ` callback: *const fn (self: QCandlestickSeries, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries, [*:0]const u8) callconv(.c) i32) void {
        qtc.QCandlestickSeries_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QCandlestickSeries, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QCandlestickSeries_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QCandlestickSeries, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QCandlestickSeries_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCandlestickSeries`
    ///
    /// ` callback: *const fn (self: QCandlestickSeries, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries, QMetaMethod) callconv(.c) bool) void {
        qtc.QCandlestickSeries_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCandlestickSeries `
    ///
    /// ` callback: *const fn (self: QCandlestickSeries, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QCandlestickSeries, callback: *const fn (QCandlestickSeries, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcandlestickseries-qtcharts.html#dtor.QCandlestickSeries)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QCandlestickSeries `
    ///
    pub fn delete(self: QCandlestickSeries) void {
        qtc.QCandlestickSeries_Delete(@ptrCast(self.ptr));
    }
};
