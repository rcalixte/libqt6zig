const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAbstractAxis = @import("libqt6").QAbstractAxis;
const QBarSet = @import("libqt6").QBarSet;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChart = @import("libqt6").QChart;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qabstractbarseries_enums = @import("libqabstractbarseries.zig").enums;
const qabstractseries_enums = @import("libqabstractseries.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpercentbarseries-qtcharts.html)
pub const QPercentBarSeries = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpercentbarseries-qtcharts.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPercentBarSeries,

    pub const _is_QPercentBarSeries = {};
    pub const _is_QAbstractBarSeries = {};
    pub const _is_QAbstractSeries = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPercentBarSeries object in C++ memory
    ///
    pub fn new() QPercentBarSeries {
        return .{ .ptr = qtc.QPercentBarSeries_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QPercentBarSeries object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QPercentBarSeries {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QPercentBarSeries_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    pub fn metaObject(self: QPercentBarSeries) QMetaObject {
        return .{ .ptr = qtc.QPercentBarSeries_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QPercentBarSeries, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QPercentBarSeries_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPercentBarSeries `
    ///
    pub fn superMetaObject(self: QPercentBarSeries) QMetaObject {
        return .{ .ptr = qtc.QPercentBarSeries_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QPercentBarSeries, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QPercentBarSeries_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QPercentBarSeries, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QPercentBarSeries_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QPercentBarSeries, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QPercentBarSeries_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QPercentBarSeries, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QPercentBarSeries_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QPercentBarSeries, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QPercentBarSeries_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QPercentBarSeries, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QPercentBarSeries_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPercentBarSeries.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpercentbarseries-qtcharts.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ## Returns:
    ///
    /// ` qabstractseries_enums.SeriesType `
    ///
    pub fn type0(self: QPercentBarSeries) i32 {
        return qtc.QPercentBarSeries_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onType` instead
    ///
    pub const OnType = onType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpercentbarseries-qtcharts.html#type)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onType(self: QPercentBarSeries, callback: *const fn () callconv(.c) i32) void {
        qtc.QPercentBarSeries_OnType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superType` instead
    ///
    pub const SuperType = superType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpercentbarseries-qtcharts.html#type)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ## Returns:
    ///
    /// ` qabstractseries_enums.SeriesType `
    ///
    pub fn superType(self: QPercentBarSeries) i32 {
        return qtc.QPercentBarSeries_SuperType(@ptrCast(self.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPercentBarSeries.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPercentBarSeries.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setBarWidth` instead
    ///
    pub const SetBarWidth = setBarWidth;

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#setBarWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` width: f64 `
    ///
    pub fn setBarWidth(self: QPercentBarSeries, width: f64) void {
        qtc.QAbstractBarSeries_SetBarWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### DEPRECATED: Use `barWidth` instead
    ///
    pub const BarWidth = barWidth;

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#barWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    pub fn barWidth(self: QPercentBarSeries) f64 {
        return qtc.QAbstractBarSeries_BarWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `append` instead
    ///
    pub const Append = append;

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` set: QBarSet `
    ///
    pub fn append(self: QPercentBarSeries, set: anytype) bool {
        comptime _ = @TypeOf(set)._is_QBarSet;
        return qtc.QAbstractBarSeries_Append(@ptrCast(self.ptr), @ptrCast(set.ptr));
    }

    /// ### DEPRECATED: Use `remove` instead
    ///
    pub const Remove = remove;

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` set: QBarSet `
    ///
    pub fn remove(self: QPercentBarSeries, set: anytype) bool {
        comptime _ = @TypeOf(set)._is_QBarSet;
        return qtc.QAbstractBarSeries_Remove(@ptrCast(self.ptr), @ptrCast(set.ptr));
    }

    /// ### DEPRECATED: Use `take` instead
    ///
    pub const Take = take;

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#take)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` set: QBarSet `
    ///
    pub fn take(self: QPercentBarSeries, set: anytype) bool {
        comptime _ = @TypeOf(set)._is_QBarSet;
        return qtc.QAbstractBarSeries_Take(@ptrCast(self.ptr), @ptrCast(set.ptr));
    }

    /// ### DEPRECATED: Use `append2` instead
    ///
    pub const Append2 = append2;

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` sets: []QBarSet `
    ///
    pub fn append2(self: QPercentBarSeries, sets: []QBarSet) bool {
        const sets_list = qtc.libqt_list{
            .len = sets.len,
            .data = @ptrCast(sets.ptr),
        };
        return qtc.QAbstractBarSeries_Append2(@ptrCast(self.ptr), sets_list);
    }

    /// ### DEPRECATED: Use `insert` instead
    ///
    pub const Insert = insert;

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` set: QBarSet `
    ///
    pub fn insert(self: QPercentBarSeries, index: i32, set: anytype) bool {
        comptime _ = @TypeOf(set)._is_QBarSet;
        return qtc.QAbstractBarSeries_Insert(@ptrCast(self.ptr), @bitCast(index), @ptrCast(set.ptr));
    }

    /// ### DEPRECATED: Use `count` instead
    ///
    pub const Count = count;

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    pub fn count(self: QPercentBarSeries) i32 {
        return qtc.QAbstractBarSeries_Count(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `barSets` instead
    ///
    pub const BarSets = barSets;

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#barSets)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn barSets(self: QPercentBarSeries, allocator: std.mem.Allocator) []QBarSet {
        const _arr: qtc.libqt_list = qtc.QAbstractBarSeries_BarSets(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QBarSet, _arr.len) catch @panic("QPercentBarSeries.barSets: Memory allocation failed");
        const _data_val: [*]QtC.QBarSet = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    pub fn clear(self: QPercentBarSeries) void {
        qtc.QAbstractBarSeries_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLabelsVisible` instead
    ///
    pub const SetLabelsVisible = setLabelsVisible;

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    pub fn setLabelsVisible(self: QPercentBarSeries) void {
        qtc.QAbstractBarSeries_SetLabelsVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isLabelsVisible` instead
    ///
    pub const IsLabelsVisible = isLabelsVisible;

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#isLabelsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    pub fn isLabelsVisible(self: QPercentBarSeries) bool {
        return qtc.QAbstractBarSeries_IsLabelsVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLabelsFormat` instead
    ///
    pub const SetLabelsFormat = setLabelsFormat;

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` format: []const u8 `
    ///
    pub fn setLabelsFormat(self: QPercentBarSeries, format: []const u8) void {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        qtc.QAbstractBarSeries_SetLabelsFormat(@ptrCast(self.ptr), format_str);
    }

    /// ### DEPRECATED: Use `labelsFormat` instead
    ///
    pub const LabelsFormat = labelsFormat;

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn labelsFormat(self: QPercentBarSeries, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractBarSeries_LabelsFormat(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPercentBarSeries.labelsFormat: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setLabelsAngle` instead
    ///
    pub const SetLabelsAngle = setLabelsAngle;

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsAngle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` angle: f64 `
    ///
    pub fn setLabelsAngle(self: QPercentBarSeries, angle: f64) void {
        qtc.QAbstractBarSeries_SetLabelsAngle(@ptrCast(self.ptr), @bitCast(angle));
    }

    /// ### DEPRECATED: Use `labelsAngle` instead
    ///
    pub const LabelsAngle = labelsAngle;

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsAngle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    pub fn labelsAngle(self: QPercentBarSeries) f64 {
        return qtc.QAbstractBarSeries_LabelsAngle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLabelsPosition` instead
    ///
    pub const SetLabelsPosition = setLabelsPosition;

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` position: qabstractbarseries_enums.LabelsPosition `
    ///
    pub fn setLabelsPosition(self: QPercentBarSeries, position: i32) void {
        qtc.QAbstractBarSeries_SetLabelsPosition(@ptrCast(self.ptr), @bitCast(position));
    }

    /// ### DEPRECATED: Use `labelsPosition` instead
    ///
    pub const LabelsPosition = labelsPosition;

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ## Returns:
    ///
    /// ` qabstractbarseries_enums.LabelsPosition `
    ///
    pub fn labelsPosition(self: QPercentBarSeries) i32 {
        return qtc.QAbstractBarSeries_LabelsPosition(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLabelsPrecision` instead
    ///
    pub const SetLabelsPrecision = setLabelsPrecision;

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsPrecision)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` precision: i32 `
    ///
    pub fn setLabelsPrecision(self: QPercentBarSeries, precision: i32) void {
        qtc.QAbstractBarSeries_SetLabelsPrecision(@ptrCast(self.ptr), @bitCast(precision));
    }

    /// ### DEPRECATED: Use `labelsPrecision` instead
    ///
    pub const LabelsPrecision = labelsPrecision;

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPrecision)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    pub fn labelsPrecision(self: QPercentBarSeries) i32 {
        return qtc.QAbstractBarSeries_LabelsPrecision(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clicked` instead
    ///
    pub const Clicked = clicked;

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#clicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` barset: QBarSet `
    ///
    pub fn clicked(self: QPercentBarSeries, index: i32, barset: anytype) void {
        comptime _ = @TypeOf(barset)._is_QBarSet;
        qtc.QAbstractBarSeries_Clicked(@ptrCast(self.ptr), @bitCast(index), @ptrCast(barset.ptr));
    }

    /// ### DEPRECATED: Use `onClicked` instead
    ///
    pub const OnClicked = onClicked;

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#clicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QPercentBarSeries, index: i32, barset: QBarSet) callconv(.c) void `
    ///
    pub fn onClicked(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries, i32, QBarSet) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_Clicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `hovered` instead
    ///
    pub const Hovered = hovered;

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#hovered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` status: bool `
    ///
    /// ` index: i32 `
    ///
    /// ` barset: QBarSet `
    ///
    pub fn hovered(self: QPercentBarSeries, status: bool, index: i32, barset: anytype) void {
        comptime _ = @TypeOf(barset)._is_QBarSet;
        qtc.QAbstractBarSeries_Hovered(@ptrCast(self.ptr), status, @bitCast(index), @ptrCast(barset.ptr));
    }

    /// ### DEPRECATED: Use `onHovered` instead
    ///
    pub const OnHovered = onHovered;

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#hovered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QPercentBarSeries, status: bool, index: i32, barset: QBarSet) callconv(.c) void `
    ///
    pub fn onHovered(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries, bool, i32, QBarSet) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_Hovered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `pressed` instead
    ///
    pub const Pressed = pressed;

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#pressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` barset: QBarSet `
    ///
    pub fn pressed(self: QPercentBarSeries, index: i32, barset: anytype) void {
        comptime _ = @TypeOf(barset)._is_QBarSet;
        qtc.QAbstractBarSeries_Pressed(@ptrCast(self.ptr), @bitCast(index), @ptrCast(barset.ptr));
    }

    /// ### DEPRECATED: Use `onPressed` instead
    ///
    pub const OnPressed = onPressed;

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#pressed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QPercentBarSeries, index: i32, barset: QBarSet) callconv(.c) void `
    ///
    pub fn onPressed(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries, i32, QBarSet) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_Pressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `released` instead
    ///
    pub const Released = released;

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#released)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` barset: QBarSet `
    ///
    pub fn released(self: QPercentBarSeries, index: i32, barset: anytype) void {
        comptime _ = @TypeOf(barset)._is_QBarSet;
        qtc.QAbstractBarSeries_Released(@ptrCast(self.ptr), @bitCast(index), @ptrCast(barset.ptr));
    }

    /// ### DEPRECATED: Use `onReleased` instead
    ///
    pub const OnReleased = onReleased;

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#released)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QPercentBarSeries, index: i32, barset: QBarSet) callconv(.c) void `
    ///
    pub fn onReleased(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries, i32, QBarSet) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_Released(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `doubleClicked` instead
    ///
    pub const DoubleClicked = doubleClicked;

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#doubleClicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` barset: QBarSet `
    ///
    pub fn doubleClicked(self: QPercentBarSeries, index: i32, barset: anytype) void {
        comptime _ = @TypeOf(barset)._is_QBarSet;
        qtc.QAbstractBarSeries_DoubleClicked(@ptrCast(self.ptr), @bitCast(index), @ptrCast(barset.ptr));
    }

    /// ### DEPRECATED: Use `onDoubleClicked` instead
    ///
    pub const OnDoubleClicked = onDoubleClicked;

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#doubleClicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QPercentBarSeries, index: i32, barset: QBarSet) callconv(.c) void `
    ///
    pub fn onDoubleClicked(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries, i32, QBarSet) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_DoubleClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `countChanged` instead
    ///
    pub const CountChanged = countChanged;

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#countChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    pub fn countChanged(self: QPercentBarSeries) void {
        qtc.QAbstractBarSeries_CountChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCountChanged` instead
    ///
    pub const OnCountChanged = onCountChanged;

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#countChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QPercentBarSeries) callconv(.c) void `
    ///
    pub fn onCountChanged(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_CountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `labelsVisibleChanged` instead
    ///
    pub const LabelsVisibleChanged = labelsVisibleChanged;

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsVisibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    pub fn labelsVisibleChanged(self: QPercentBarSeries) void {
        qtc.QAbstractBarSeries_LabelsVisibleChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onLabelsVisibleChanged` instead
    ///
    pub const OnLabelsVisibleChanged = onLabelsVisibleChanged;

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsVisibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QPercentBarSeries) callconv(.c) void `
    ///
    pub fn onLabelsVisibleChanged(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_LabelsVisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `labelsFormatChanged` instead
    ///
    pub const LabelsFormatChanged = labelsFormatChanged;

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsFormatChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` format: []const u8 `
    ///
    pub fn labelsFormatChanged(self: QPercentBarSeries, format: []const u8) void {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        qtc.QAbstractBarSeries_LabelsFormatChanged(@ptrCast(self.ptr), format_str);
    }

    /// ### DEPRECATED: Use `onLabelsFormatChanged` instead
    ///
    pub const OnLabelsFormatChanged = onLabelsFormatChanged;

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsFormatChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QPercentBarSeries, format: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onLabelsFormatChanged(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries, [*:0]const u8) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_LabelsFormatChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `labelsPositionChanged` instead
    ///
    pub const LabelsPositionChanged = labelsPositionChanged;

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPositionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` position: qabstractbarseries_enums.LabelsPosition `
    ///
    pub fn labelsPositionChanged(self: QPercentBarSeries, position: i32) void {
        qtc.QAbstractBarSeries_LabelsPositionChanged(@ptrCast(self.ptr), @bitCast(position));
    }

    /// ### DEPRECATED: Use `onLabelsPositionChanged` instead
    ///
    pub const OnLabelsPositionChanged = onLabelsPositionChanged;

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPositionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QPercentBarSeries, position: qabstractbarseries_enums.LabelsPosition) callconv(.c) void `
    ///
    pub fn onLabelsPositionChanged(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries, i32) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_LabelsPositionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `labelsAngleChanged` instead
    ///
    pub const LabelsAngleChanged = labelsAngleChanged;

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsAngleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` angle: f64 `
    ///
    pub fn labelsAngleChanged(self: QPercentBarSeries, angle: f64) void {
        qtc.QAbstractBarSeries_LabelsAngleChanged(@ptrCast(self.ptr), @bitCast(angle));
    }

    /// ### DEPRECATED: Use `onLabelsAngleChanged` instead
    ///
    pub const OnLabelsAngleChanged = onLabelsAngleChanged;

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsAngleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QPercentBarSeries, angle: f64) callconv(.c) void `
    ///
    pub fn onLabelsAngleChanged(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries, f64) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_LabelsAngleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `labelsPrecisionChanged` instead
    ///
    pub const LabelsPrecisionChanged = labelsPrecisionChanged;

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPrecisionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` precision: i32 `
    ///
    pub fn labelsPrecisionChanged(self: QPercentBarSeries, precision: i32) void {
        qtc.QAbstractBarSeries_LabelsPrecisionChanged(@ptrCast(self.ptr), @bitCast(precision));
    }

    /// ### DEPRECATED: Use `onLabelsPrecisionChanged` instead
    ///
    pub const OnLabelsPrecisionChanged = onLabelsPrecisionChanged;

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPrecisionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QPercentBarSeries, precision: i32) callconv(.c) void `
    ///
    pub fn onLabelsPrecisionChanged(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries, i32) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_LabelsPrecisionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `barsetsAdded` instead
    ///
    pub const BarsetsAdded = barsetsAdded;

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#barsetsAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` sets: []QBarSet `
    ///
    pub fn barsetsAdded(self: QPercentBarSeries, sets: []QBarSet) void {
        const sets_list = qtc.libqt_list{
            .len = sets.len,
            .data = @ptrCast(sets.ptr),
        };
        qtc.QAbstractBarSeries_BarsetsAdded(@ptrCast(self.ptr), sets_list);
    }

    /// ### DEPRECATED: Use `onBarsetsAdded` instead
    ///
    pub const OnBarsetsAdded = onBarsetsAdded;

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#barsetsAdded)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QPercentBarSeries, sets: qtc.libqt_list ([]QBarSet)) callconv(.c) void `
    ///
    pub fn onBarsetsAdded(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries, qtc.libqt_list) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_BarsetsAdded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `barsetsRemoved` instead
    ///
    pub const BarsetsRemoved = barsetsRemoved;

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#barsetsRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` sets: []QBarSet `
    ///
    pub fn barsetsRemoved(self: QPercentBarSeries, sets: []QBarSet) void {
        const sets_list = qtc.libqt_list{
            .len = sets.len,
            .data = @ptrCast(sets.ptr),
        };
        qtc.QAbstractBarSeries_BarsetsRemoved(@ptrCast(self.ptr), sets_list);
    }

    /// ### DEPRECATED: Use `onBarsetsRemoved` instead
    ///
    pub const OnBarsetsRemoved = onBarsetsRemoved;

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#barsetsRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QPercentBarSeries, sets: qtc.libqt_list ([]QBarSet)) callconv(.c) void `
    ///
    pub fn onBarsetsRemoved(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries, qtc.libqt_list) callconv(.c) void) void {
        qtc.QAbstractBarSeries_Connect_BarsetsRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setLabelsVisible1` instead
    ///
    pub const SetLabelsVisible1 = setLabelsVisible1;

    /// Inherited from QAbstractBarSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPercentBarSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn setLabelsVisible1(self: QPercentBarSeries, visible: bool) void {
        qtc.QAbstractBarSeries_SetLabelsVisible1(@ptrCast(self.ptr), visible);
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setName(self: QPercentBarSeries, _name: []const u8) void {
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: QPercentBarSeries, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractSeries_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPercentBarSeries.name: Memory allocation failed");
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
    /// ` self: QPercentBarSeries `
    ///
    pub fn setVisible(self: QPercentBarSeries) void {
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
    /// ` self: QPercentBarSeries `
    ///
    pub fn isVisible(self: QPercentBarSeries) bool {
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
    /// ` self: QPercentBarSeries `
    ///
    pub fn opacity(self: QPercentBarSeries) f64 {
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` _opacity: f64 `
    ///
    pub fn setOpacity(self: QPercentBarSeries, _opacity: f64) void {
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
    /// ` self: QPercentBarSeries `
    ///
    pub fn setUseOpenGL(self: QPercentBarSeries) void {
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
    /// ` self: QPercentBarSeries `
    ///
    pub fn useOpenGL(self: QPercentBarSeries) bool {
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
    /// ` self: QPercentBarSeries `
    ///
    pub fn chart(self: QPercentBarSeries) QChart {
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` axis: QAbstractAxis `
    ///
    pub fn attachAxis(self: QPercentBarSeries, axis: anytype) bool {
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` axis: QAbstractAxis `
    ///
    pub fn detachAxis(self: QPercentBarSeries, axis: anytype) bool {
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn attachedAxes(self: QPercentBarSeries, allocator: std.mem.Allocator) []QAbstractAxis {
        const _arr: qtc.libqt_list = qtc.QAbstractSeries_AttachedAxes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAbstractAxis, _arr.len) catch @panic("QPercentBarSeries.attachedAxes: Memory allocation failed");
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
    /// ` self: QPercentBarSeries `
    ///
    pub fn show(self: QPercentBarSeries) void {
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
    /// ` self: QPercentBarSeries `
    ///
    pub fn hide(self: QPercentBarSeries) void {
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
    /// ` self: QPercentBarSeries `
    ///
    pub fn nameChanged(self: QPercentBarSeries) void {
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QPercentBarSeries) callconv(.c) void `
    ///
    pub fn onNameChanged(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries) callconv(.c) void) void {
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
    /// ` self: QPercentBarSeries `
    ///
    pub fn visibleChanged(self: QPercentBarSeries) void {
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QPercentBarSeries) callconv(.c) void `
    ///
    pub fn onVisibleChanged(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries) callconv(.c) void) void {
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
    /// ` self: QPercentBarSeries `
    ///
    pub fn opacityChanged(self: QPercentBarSeries) void {
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QPercentBarSeries) callconv(.c) void `
    ///
    pub fn onOpacityChanged(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries) callconv(.c) void) void {
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
    /// ` self: QPercentBarSeries `
    ///
    pub fn useOpenGLChanged(self: QPercentBarSeries) void {
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QPercentBarSeries) callconv(.c) void `
    ///
    pub fn onUseOpenGLChanged(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries) callconv(.c) void) void {
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn setVisible1(self: QPercentBarSeries, visible: bool) void {
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` enable: bool `
    ///
    pub fn setUseOpenGL1(self: QPercentBarSeries, enable: bool) void {
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QPercentBarSeries, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPercentBarSeries.objectName: Memory allocation failed");
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setObjectName(self: QPercentBarSeries, _name: []const u8) void {
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
    /// ` self: QPercentBarSeries `
    ///
    pub fn isWidgetType(self: QPercentBarSeries) bool {
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
    /// ` self: QPercentBarSeries `
    ///
    pub fn isWindowType(self: QPercentBarSeries) bool {
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
    /// ` self: QPercentBarSeries `
    ///
    pub fn isQuickItemType(self: QPercentBarSeries) bool {
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
    /// ` self: QPercentBarSeries `
    ///
    pub fn signalsBlocked(self: QPercentBarSeries) bool {
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QPercentBarSeries, b: bool) bool {
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
    /// ` self: QPercentBarSeries `
    ///
    pub fn thread(self: QPercentBarSeries) QThread {
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QPercentBarSeries, _thread: anytype) bool {
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QPercentBarSeries, interval: i32) i32 {
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QPercentBarSeries, time: i64) i32 {
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QPercentBarSeries, id: i32) void {
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QPercentBarSeries, id: i32) void {
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QPercentBarSeries, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QPercentBarSeries.children: Memory allocation failed");
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QPercentBarSeries, _parent: anytype) void {
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QPercentBarSeries, filterObj: anytype) void {
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QPercentBarSeries, obj: anytype) void {
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QPercentBarSeries, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QPercentBarSeries `
    ///
    pub fn disconnect3(self: QPercentBarSeries) bool {
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QPercentBarSeries, receiver: anytype) bool {
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
    /// ` self: QPercentBarSeries `
    ///
    pub fn dumpObjectTree(self: QPercentBarSeries) void {
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
    /// ` self: QPercentBarSeries `
    ///
    pub fn dumpObjectInfo(self: QPercentBarSeries) void {
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` _name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QPercentBarSeries, _name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` _name: [:0]const u8 `
    ///
    pub fn property(self: QPercentBarSeries, _name: [:0]const u8) QVariant {
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QPercentBarSeries, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QPercentBarSeries.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QPercentBarSeries.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QPercentBarSeries `
    ///
    pub fn bindingStorage(self: QPercentBarSeries) QBindingStorage {
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
    /// ` self: QPercentBarSeries `
    ///
    pub fn bindingStorage2(self: QPercentBarSeries) QBindingStorage {
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
    /// ` self: QPercentBarSeries `
    ///
    pub fn destroyed(self: QPercentBarSeries) void {
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QPercentBarSeries) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries) callconv(.c) void) void {
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
    /// ` self: QPercentBarSeries `
    ///
    pub fn parent(self: QPercentBarSeries) QObject {
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QPercentBarSeries, classname: [:0]const u8) bool {
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
    /// ` self: QPercentBarSeries `
    ///
    pub fn deleteLater(self: QPercentBarSeries) void {
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QPercentBarSeries, interval: i32, timerType: i32) i32 {
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QPercentBarSeries, time: i64, timerType: i32) i32 {
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QPercentBarSeries, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QPercentBarSeries, signal: [:0]const u8) bool {
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QPercentBarSeries, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QPercentBarSeries, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QPercentBarSeries, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QPercentBarSeries, param1: anytype) void {
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QPercentBarSeries, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries, QObject) callconv(.c) void) void {
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QPercentBarSeries, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QPercentBarSeries_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QPercentBarSeries, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QPercentBarSeries_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPercentBarSeries`
    ///
    /// ` callback: *const fn (self: QPercentBarSeries, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries, QEvent) callconv(.c) bool) void {
        qtc.QPercentBarSeries_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QPercentBarSeries, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QPercentBarSeries_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QPercentBarSeries, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QPercentBarSeries_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPercentBarSeries`
    ///
    /// ` callback: *const fn (self: QPercentBarSeries, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries, QObject, QEvent) callconv(.c) bool) void {
        qtc.QPercentBarSeries_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QPercentBarSeries, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QPercentBarSeries_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QPercentBarSeries, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QPercentBarSeries_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPercentBarSeries`
    ///
    /// ` callback: *const fn (self: QPercentBarSeries, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries, QTimerEvent) callconv(.c) void) void {
        qtc.QPercentBarSeries_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QPercentBarSeries, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QPercentBarSeries_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QPercentBarSeries, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QPercentBarSeries_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPercentBarSeries`
    ///
    /// ` callback: *const fn (self: QPercentBarSeries, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries, QChildEvent) callconv(.c) void) void {
        qtc.QPercentBarSeries_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QPercentBarSeries, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QPercentBarSeries_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QPercentBarSeries, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QPercentBarSeries_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPercentBarSeries`
    ///
    /// ` callback: *const fn (self: QPercentBarSeries, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries, QEvent) callconv(.c) void) void {
        qtc.QPercentBarSeries_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QPercentBarSeries, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPercentBarSeries_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QPercentBarSeries, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPercentBarSeries_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPercentBarSeries`
    ///
    /// ` callback: *const fn (self: QPercentBarSeries, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries, QMetaMethod) callconv(.c) void) void {
        qtc.QPercentBarSeries_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QPercentBarSeries, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPercentBarSeries_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QPercentBarSeries, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPercentBarSeries_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPercentBarSeries`
    ///
    /// ` callback: *const fn (self: QPercentBarSeries, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries, QMetaMethod) callconv(.c) void) void {
        qtc.QPercentBarSeries_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPercentBarSeries `
    ///
    pub fn sender(self: QPercentBarSeries) QObject {
        return .{ .ptr = qtc.QPercentBarSeries_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QPercentBarSeries `
    ///
    pub fn superSender(self: QPercentBarSeries) QObject {
        return .{ .ptr = qtc.QPercentBarSeries_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QPercentBarSeries`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QPercentBarSeries, callback: *const fn () callconv(.c) QObject) void {
        qtc.QPercentBarSeries_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPercentBarSeries `
    ///
    pub fn senderSignalIndex(self: QPercentBarSeries) i32 {
        return qtc.QPercentBarSeries_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QPercentBarSeries `
    ///
    pub fn superSenderSignalIndex(self: QPercentBarSeries) i32 {
        return qtc.QPercentBarSeries_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QPercentBarSeries`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QPercentBarSeries, callback: *const fn () callconv(.c) i32) void {
        qtc.QPercentBarSeries_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QPercentBarSeries, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPercentBarSeries_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QPercentBarSeries, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPercentBarSeries_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QPercentBarSeries`
    ///
    /// ` callback: *const fn (self: QPercentBarSeries, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries, [*:0]const u8) callconv(.c) i32) void {
        qtc.QPercentBarSeries_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QPercentBarSeries, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QPercentBarSeries_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QPercentBarSeries, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QPercentBarSeries_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPercentBarSeries`
    ///
    /// ` callback: *const fn (self: QPercentBarSeries, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries, QMetaMethod) callconv(.c) bool) void {
        qtc.QPercentBarSeries_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPercentBarSeries `
    ///
    /// ` callback: *const fn (self: QPercentBarSeries, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QPercentBarSeries, callback: *const fn (QPercentBarSeries, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpercentbarseries-qtcharts.html#dtor.QPercentBarSeries)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPercentBarSeries `
    ///
    pub fn delete(self: QPercentBarSeries) void {
        qtc.QPercentBarSeries_Delete(@ptrCast(self.ptr));
    }
};
