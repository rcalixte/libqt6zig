const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QBrush = @import("libqt6").QBrush;
const QChildEvent = @import("libqt6").QChildEvent;
const QColor = @import("libqt6").QColor;
const QEvent = @import("libqt6").QEvent;
const QFont = @import("libqt6").QFont;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPen = @import("libqt6").QPen;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qabstractaxis_enums = @import("libqabstractaxis.zig").enums;
const qcategoryaxis_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qvalueaxis_enums = @import("libqvalueaxis.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcategoryaxis-qtcharts.html)
pub const QCategoryAxis = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcategoryaxis-qtcharts.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QCategoryAxis,

    pub const _is_QCategoryAxis = {};
    pub const _is_QValueAxis = {};
    pub const _is_QAbstractAxis = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QCategoryAxis object in C++ memory
    ///
    pub fn new() QCategoryAxis {
        return .{ .ptr = qtc.QCategoryAxis_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QCategoryAxis object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QCategoryAxis {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QCategoryAxis_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn metaObject(self: QCategoryAxis) QMetaObject {
        return .{ .ptr = qtc.QCategoryAxis_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QCategoryAxis `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QCategoryAxis, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QCategoryAxis_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCategoryAxis `
    ///
    pub fn superMetaObject(self: QCategoryAxis) QMetaObject {
        return .{ .ptr = qtc.QCategoryAxis_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QCategoryAxis, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QCategoryAxis_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` callback: *const fn (self: QCategoryAxis, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QCategoryAxis, callback: *const fn (QCategoryAxis, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QCategoryAxis_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QCategoryAxis, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QCategoryAxis_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QCategoryAxis, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QCategoryAxis_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` callback: *const fn (self: QCategoryAxis, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QCategoryAxis, callback: *const fn (QCategoryAxis, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QCategoryAxis_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QCategoryAxis, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QCategoryAxis_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCategoryAxis.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcategoryaxis-qtcharts.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ## Returns:
    ///
    /// ` qabstractaxis_enums.AxisType `
    ///
    pub fn type0(self: QCategoryAxis) i32 {
        return qtc.QCategoryAxis_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onType` instead
    ///
    pub const OnType = onType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcategoryaxis-qtcharts.html#type)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onType(self: QCategoryAxis, callback: *const fn () callconv(.c) i32) void {
        qtc.QCategoryAxis_OnType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superType` instead
    ///
    pub const SuperType = superType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcategoryaxis-qtcharts.html#type)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ## Returns:
    ///
    /// ` qabstractaxis_enums.AxisType `
    ///
    pub fn superType(self: QCategoryAxis) i32 {
        return qtc.QCategoryAxis_SuperType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `append` instead
    ///
    pub const Append = append;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcategoryaxis-qtcharts.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` label: []const u8 `
    ///
    /// ` categoryEndValue: f64 `
    ///
    pub fn append(self: QCategoryAxis, label: []const u8, categoryEndValue: f64) void {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        qtc.QCategoryAxis_Append(@ptrCast(self.ptr), label_str, @bitCast(categoryEndValue));
    }

    /// ### DEPRECATED: Use `remove` instead
    ///
    pub const Remove = remove;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcategoryaxis-qtcharts.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` label: []const u8 `
    ///
    pub fn remove(self: QCategoryAxis, label: []const u8) void {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        qtc.QCategoryAxis_Remove(@ptrCast(self.ptr), label_str);
    }

    /// ### DEPRECATED: Use `replaceLabel` instead
    ///
    pub const ReplaceLabel = replaceLabel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcategoryaxis-qtcharts.html#replaceLabel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` oldLabel: []const u8 `
    ///
    /// ` newLabel: []const u8 `
    ///
    pub fn replaceLabel(self: QCategoryAxis, oldLabel: []const u8, newLabel: []const u8) void {
        const oldLabel_str = qtc.libqt_string{
            .len = oldLabel.len,
            .data = oldLabel.ptr,
        };
        const newLabel_str = qtc.libqt_string{
            .len = newLabel.len,
            .data = newLabel.ptr,
        };
        qtc.QCategoryAxis_ReplaceLabel(@ptrCast(self.ptr), oldLabel_str, newLabel_str);
    }

    /// ### DEPRECATED: Use `startValue` instead
    ///
    pub const StartValue = startValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcategoryaxis-qtcharts.html#startValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn startValue(self: QCategoryAxis) f64 {
        return qtc.QCategoryAxis_StartValue(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setStartValue` instead
    ///
    pub const SetStartValue = setStartValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcategoryaxis-qtcharts.html#setStartValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` _min: f64 `
    ///
    pub fn setStartValue(self: QCategoryAxis, _min: f64) void {
        qtc.QCategoryAxis_SetStartValue(@ptrCast(self.ptr), @bitCast(_min));
    }

    /// ### DEPRECATED: Use `endValue` instead
    ///
    pub const EndValue = endValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcategoryaxis-qtcharts.html#endValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` categoryLabel: []const u8 `
    ///
    pub fn endValue(self: QCategoryAxis, categoryLabel: []const u8) f64 {
        const categoryLabel_str = qtc.libqt_string{
            .len = categoryLabel.len,
            .data = categoryLabel.ptr,
        };
        return qtc.QCategoryAxis_EndValue(@ptrCast(self.ptr), categoryLabel_str);
    }

    /// ### DEPRECATED: Use `categoriesLabels` instead
    ///
    pub const CategoriesLabels = categoriesLabels;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcategoryaxis-qtcharts.html#categoriesLabels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn categoriesLabels(self: QCategoryAxis, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QCategoryAxis_CategoriesLabels(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QCategoryAxis.categoriesLabels: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QCategoryAxis.categoriesLabels: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `count` instead
    ///
    pub const Count = count;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcategoryaxis-qtcharts.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn count(self: QCategoryAxis) i32 {
        return qtc.QCategoryAxis_Count(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `labelsPosition` instead
    ///
    pub const LabelsPosition = labelsPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcategoryaxis-qtcharts.html#labelsPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ## Returns:
    ///
    /// ` qcategoryaxis_enums.AxisLabelsPosition `
    ///
    pub fn labelsPosition(self: QCategoryAxis) i32 {
        return qtc.QCategoryAxis_LabelsPosition(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLabelsPosition` instead
    ///
    pub const SetLabelsPosition = setLabelsPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcategoryaxis-qtcharts.html#setLabelsPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` position: qcategoryaxis_enums.AxisLabelsPosition `
    ///
    pub fn setLabelsPosition(self: QCategoryAxis, position: i32) void {
        qtc.QCategoryAxis_SetLabelsPosition(@ptrCast(self.ptr), @bitCast(position));
    }

    /// ### DEPRECATED: Use `categoriesChanged` instead
    ///
    pub const CategoriesChanged = categoriesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcategoryaxis-qtcharts.html#categoriesChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn categoriesChanged(self: QCategoryAxis) void {
        qtc.QCategoryAxis_CategoriesChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCategoriesChanged` instead
    ///
    pub const OnCategoriesChanged = onCategoriesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcategoryaxis-qtcharts.html#categoriesChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` callback: *const fn (self: QCategoryAxis) callconv(.c) void `
    ///
    pub fn onCategoriesChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis) callconv(.c) void) void {
        qtc.QCategoryAxis_Connect_CategoriesChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `labelsPositionChanged` instead
    ///
    pub const LabelsPositionChanged = labelsPositionChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcategoryaxis-qtcharts.html#labelsPositionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` position: qcategoryaxis_enums.AxisLabelsPosition `
    ///
    pub fn labelsPositionChanged(self: QCategoryAxis, position: i32) void {
        qtc.QCategoryAxis_LabelsPositionChanged(@ptrCast(self.ptr), @bitCast(position));
    }

    /// ### DEPRECATED: Use `onLabelsPositionChanged` instead
    ///
    pub const OnLabelsPositionChanged = onLabelsPositionChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcategoryaxis-qtcharts.html#labelsPositionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` callback: *const fn (self: QCategoryAxis, position: qcategoryaxis_enums.AxisLabelsPosition) callconv(.c) void `
    ///
    pub fn onLabelsPositionChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, i32) callconv(.c) void) void {
        qtc.QCategoryAxis_Connect_LabelsPositionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCategoryAxis.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCategoryAxis.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `startValue1` instead
    ///
    pub const StartValue1 = startValue1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcategoryaxis-qtcharts.html#startValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` categoryLabel: []const u8 `
    ///
    pub fn startValue1(self: QCategoryAxis, categoryLabel: []const u8) f64 {
        const categoryLabel_str = qtc.libqt_string{
            .len = categoryLabel.len,
            .data = categoryLabel.ptr,
        };
        return qtc.QCategoryAxis_StartValue1(@ptrCast(self.ptr), categoryLabel_str);
    }

    /// ### DEPRECATED: Use `setMin` instead
    ///
    pub const SetMin = setMin;

    /// Inherited from QValueAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis.html#setMin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` _min: f64 `
    ///
    pub fn setMin(self: QCategoryAxis, _min: f64) void {
        qtc.QValueAxis_SetMin(@ptrCast(self.ptr), @bitCast(_min));
    }

    /// ### DEPRECATED: Use `min` instead
    ///
    pub const Min = min;

    /// Inherited from QValueAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis.html#min)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn min(self: QCategoryAxis) f64 {
        return qtc.QValueAxis_Min(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMax` instead
    ///
    pub const SetMax = setMax;

    /// Inherited from QValueAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis.html#setMax)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` _max: f64 `
    ///
    pub fn setMax(self: QCategoryAxis, _max: f64) void {
        qtc.QValueAxis_SetMax(@ptrCast(self.ptr), @bitCast(_max));
    }

    /// ### DEPRECATED: Use `max` instead
    ///
    pub const Max = max;

    /// Inherited from QValueAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis.html#max)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn max(self: QCategoryAxis) f64 {
        return qtc.QValueAxis_Max(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRange` instead
    ///
    pub const SetRange = setRange;

    /// Inherited from QValueAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis.html#setRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` _min: f64 `
    ///
    /// ` _max: f64 `
    ///
    pub fn setRange(self: QCategoryAxis, _min: f64, _max: f64) void {
        qtc.QValueAxis_SetRange(@ptrCast(self.ptr), @bitCast(_min), @bitCast(_max));
    }

    /// ### DEPRECATED: Use `setTickCount` instead
    ///
    pub const SetTickCount = setTickCount;

    /// Inherited from QValueAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis.html#setTickCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` _count: i32 `
    ///
    pub fn setTickCount(self: QCategoryAxis, _count: i32) void {
        qtc.QValueAxis_SetTickCount(@ptrCast(self.ptr), @bitCast(_count));
    }

    /// ### DEPRECATED: Use `tickCount` instead
    ///
    pub const TickCount = tickCount;

    /// Inherited from QValueAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis.html#tickCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn tickCount(self: QCategoryAxis) i32 {
        return qtc.QValueAxis_TickCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMinorTickCount` instead
    ///
    pub const SetMinorTickCount = setMinorTickCount;

    /// Inherited from QValueAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis.html#setMinorTickCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` _count: i32 `
    ///
    pub fn setMinorTickCount(self: QCategoryAxis, _count: i32) void {
        qtc.QValueAxis_SetMinorTickCount(@ptrCast(self.ptr), @bitCast(_count));
    }

    /// ### DEPRECATED: Use `minorTickCount` instead
    ///
    pub const MinorTickCount = minorTickCount;

    /// Inherited from QValueAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis.html#minorTickCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn minorTickCount(self: QCategoryAxis) i32 {
        return qtc.QValueAxis_MinorTickCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTickAnchor` instead
    ///
    pub const SetTickAnchor = setTickAnchor;

    /// Inherited from QValueAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis.html#setTickAnchor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` anchor: f64 `
    ///
    pub fn setTickAnchor(self: QCategoryAxis, anchor: f64) void {
        qtc.QValueAxis_SetTickAnchor(@ptrCast(self.ptr), @bitCast(anchor));
    }

    /// ### DEPRECATED: Use `tickAnchor` instead
    ///
    pub const TickAnchor = tickAnchor;

    /// Inherited from QValueAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis.html#tickAnchor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn tickAnchor(self: QCategoryAxis) f64 {
        return qtc.QValueAxis_TickAnchor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTickInterval` instead
    ///
    pub const SetTickInterval = setTickInterval;

    /// Inherited from QValueAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis.html#setTickInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` insterval: f64 `
    ///
    pub fn setTickInterval(self: QCategoryAxis, insterval: f64) void {
        qtc.QValueAxis_SetTickInterval(@ptrCast(self.ptr), @bitCast(insterval));
    }

    /// ### DEPRECATED: Use `tickInterval` instead
    ///
    pub const TickInterval = tickInterval;

    /// Inherited from QValueAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis.html#tickInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn tickInterval(self: QCategoryAxis) f64 {
        return qtc.QValueAxis_TickInterval(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTickType` instead
    ///
    pub const SetTickType = setTickType;

    /// Inherited from QValueAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis.html#setTickType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` typeVal: qvalueaxis_enums.TickType `
    ///
    pub fn setTickType(self: QCategoryAxis, typeVal: i32) void {
        qtc.QValueAxis_SetTickType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `tickType` instead
    ///
    pub const TickType = tickType;

    /// Inherited from QValueAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis.html#tickType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ## Returns:
    ///
    /// ` qvalueaxis_enums.TickType `
    ///
    pub fn tickType(self: QCategoryAxis) i32 {
        return qtc.QValueAxis_TickType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLabelFormat` instead
    ///
    pub const SetLabelFormat = setLabelFormat;

    /// Inherited from QValueAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis.html#setLabelFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` format: []const u8 `
    ///
    pub fn setLabelFormat(self: QCategoryAxis, format: []const u8) void {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        qtc.QValueAxis_SetLabelFormat(@ptrCast(self.ptr), format_str);
    }

    /// ### DEPRECATED: Use `labelFormat` instead
    ///
    pub const LabelFormat = labelFormat;

    /// Inherited from QValueAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis.html#labelFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn labelFormat(self: QCategoryAxis, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QValueAxis_LabelFormat(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCategoryAxis.labelFormat: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `applyNiceNumbers` instead
    ///
    pub const ApplyNiceNumbers = applyNiceNumbers;

    /// Inherited from QValueAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis.html#applyNiceNumbers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn applyNiceNumbers(self: QCategoryAxis) void {
        qtc.QValueAxis_ApplyNiceNumbers(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `minChanged` instead
    ///
    pub const MinChanged = minChanged;

    /// Inherited from QValueAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis.html#minChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` _min: f64 `
    ///
    pub fn minChanged(self: QCategoryAxis, _min: f64) void {
        qtc.QValueAxis_MinChanged(@ptrCast(self.ptr), @bitCast(_min));
    }

    /// ### DEPRECATED: Use `onMinChanged` instead
    ///
    pub const OnMinChanged = onMinChanged;

    /// Inherited from QValueAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis.html#minChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` callback: *const fn (self: QCategoryAxis, min: f64) callconv(.c) void `
    ///
    pub fn onMinChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, f64) callconv(.c) void) void {
        qtc.QValueAxis_Connect_MinChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `maxChanged` instead
    ///
    pub const MaxChanged = maxChanged;

    /// Inherited from QValueAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis.html#maxChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` _max: f64 `
    ///
    pub fn maxChanged(self: QCategoryAxis, _max: f64) void {
        qtc.QValueAxis_MaxChanged(@ptrCast(self.ptr), @bitCast(_max));
    }

    /// ### DEPRECATED: Use `onMaxChanged` instead
    ///
    pub const OnMaxChanged = onMaxChanged;

    /// Inherited from QValueAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis.html#maxChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` callback: *const fn (self: QCategoryAxis, max: f64) callconv(.c) void `
    ///
    pub fn onMaxChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, f64) callconv(.c) void) void {
        qtc.QValueAxis_Connect_MaxChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rangeChanged` instead
    ///
    pub const RangeChanged = rangeChanged;

    /// Inherited from QValueAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis.html#rangeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` _min: f64 `
    ///
    /// ` _max: f64 `
    ///
    pub fn rangeChanged(self: QCategoryAxis, _min: f64, _max: f64) void {
        qtc.QValueAxis_RangeChanged(@ptrCast(self.ptr), @bitCast(_min), @bitCast(_max));
    }

    /// ### DEPRECATED: Use `onRangeChanged` instead
    ///
    pub const OnRangeChanged = onRangeChanged;

    /// Inherited from QValueAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis.html#rangeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` callback: *const fn (self: QCategoryAxis, min: f64, max: f64) callconv(.c) void `
    ///
    pub fn onRangeChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, f64, f64) callconv(.c) void) void {
        qtc.QValueAxis_Connect_RangeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `tickCountChanged` instead
    ///
    pub const TickCountChanged = tickCountChanged;

    /// Inherited from QValueAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis.html#tickCountChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` _tickCount: i32 `
    ///
    pub fn tickCountChanged(self: QCategoryAxis, _tickCount: i32) void {
        qtc.QValueAxis_TickCountChanged(@ptrCast(self.ptr), @bitCast(_tickCount));
    }

    /// ### DEPRECATED: Use `onTickCountChanged` instead
    ///
    pub const OnTickCountChanged = onTickCountChanged;

    /// Inherited from QValueAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis.html#tickCountChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` callback: *const fn (self: QCategoryAxis, tickCount: i32) callconv(.c) void `
    ///
    pub fn onTickCountChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, i32) callconv(.c) void) void {
        qtc.QValueAxis_Connect_TickCountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `minorTickCountChanged` instead
    ///
    pub const MinorTickCountChanged = minorTickCountChanged;

    /// Inherited from QValueAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis.html#minorTickCountChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` _tickCount: i32 `
    ///
    pub fn minorTickCountChanged(self: QCategoryAxis, _tickCount: i32) void {
        qtc.QValueAxis_MinorTickCountChanged(@ptrCast(self.ptr), @bitCast(_tickCount));
    }

    /// ### DEPRECATED: Use `onMinorTickCountChanged` instead
    ///
    pub const OnMinorTickCountChanged = onMinorTickCountChanged;

    /// Inherited from QValueAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis.html#minorTickCountChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` callback: *const fn (self: QCategoryAxis, tickCount: i32) callconv(.c) void `
    ///
    pub fn onMinorTickCountChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, i32) callconv(.c) void) void {
        qtc.QValueAxis_Connect_MinorTickCountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `labelFormatChanged` instead
    ///
    pub const LabelFormatChanged = labelFormatChanged;

    /// Inherited from QValueAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis.html#labelFormatChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` format: []const u8 `
    ///
    pub fn labelFormatChanged(self: QCategoryAxis, format: []const u8) void {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        qtc.QValueAxis_LabelFormatChanged(@ptrCast(self.ptr), format_str);
    }

    /// ### DEPRECATED: Use `onLabelFormatChanged` instead
    ///
    pub const OnLabelFormatChanged = onLabelFormatChanged;

    /// Inherited from QValueAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis.html#labelFormatChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` callback: *const fn (self: QCategoryAxis, format: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onLabelFormatChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, [*:0]const u8) callconv(.c) void) void {
        qtc.QValueAxis_Connect_LabelFormatChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `tickIntervalChanged` instead
    ///
    pub const TickIntervalChanged = tickIntervalChanged;

    /// Inherited from QValueAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis.html#tickIntervalChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` interval: f64 `
    ///
    pub fn tickIntervalChanged(self: QCategoryAxis, interval: f64) void {
        qtc.QValueAxis_TickIntervalChanged(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// ### DEPRECATED: Use `onTickIntervalChanged` instead
    ///
    pub const OnTickIntervalChanged = onTickIntervalChanged;

    /// Inherited from QValueAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis.html#tickIntervalChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` callback: *const fn (self: QCategoryAxis, interval: f64) callconv(.c) void `
    ///
    pub fn onTickIntervalChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, f64) callconv(.c) void) void {
        qtc.QValueAxis_Connect_TickIntervalChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `tickAnchorChanged` instead
    ///
    pub const TickAnchorChanged = tickAnchorChanged;

    /// Inherited from QValueAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis.html#tickAnchorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` anchor: f64 `
    ///
    pub fn tickAnchorChanged(self: QCategoryAxis, anchor: f64) void {
        qtc.QValueAxis_TickAnchorChanged(@ptrCast(self.ptr), @bitCast(anchor));
    }

    /// ### DEPRECATED: Use `onTickAnchorChanged` instead
    ///
    pub const OnTickAnchorChanged = onTickAnchorChanged;

    /// Inherited from QValueAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis.html#tickAnchorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` callback: *const fn (self: QCategoryAxis, anchor: f64) callconv(.c) void `
    ///
    pub fn onTickAnchorChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, f64) callconv(.c) void) void {
        qtc.QValueAxis_Connect_TickAnchorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `tickTypeChanged` instead
    ///
    pub const TickTypeChanged = tickTypeChanged;

    /// Inherited from QValueAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis.html#tickTypeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` typeVal: qvalueaxis_enums.TickType `
    ///
    pub fn tickTypeChanged(self: QCategoryAxis, typeVal: i32) void {
        qtc.QValueAxis_TickTypeChanged(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `onTickTypeChanged` instead
    ///
    pub const OnTickTypeChanged = onTickTypeChanged;

    /// Inherited from QValueAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis.html#tickTypeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` callback: *const fn (self: QCategoryAxis, typeVal: qvalueaxis_enums.TickType) callconv(.c) void `
    ///
    pub fn onTickTypeChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, i32) callconv(.c) void) void {
        qtc.QValueAxis_Connect_TickTypeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isVisible` instead
    ///
    pub const IsVisible = isVisible;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn isVisible(self: QCategoryAxis) bool {
        return qtc.QAbstractAxis_IsVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVisible` instead
    ///
    pub const SetVisible = setVisible;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn setVisible(self: QCategoryAxis) void {
        qtc.QAbstractAxis_SetVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `show` instead
    ///
    pub const Show = show;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn show(self: QCategoryAxis) void {
        qtc.QAbstractAxis_Show(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hide` instead
    ///
    pub const Hide = hide;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn hide(self: QCategoryAxis) void {
        qtc.QAbstractAxis_Hide(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isLineVisible` instead
    ///
    pub const IsLineVisible = isLineVisible;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#isLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn isLineVisible(self: QCategoryAxis) bool {
        return qtc.QAbstractAxis_IsLineVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLineVisible` instead
    ///
    pub const SetLineVisible = setLineVisible;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn setLineVisible(self: QCategoryAxis) void {
        qtc.QAbstractAxis_SetLineVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLinePen` instead
    ///
    pub const SetLinePen = setLinePen;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLinePen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` pen: QPen `
    ///
    pub fn setLinePen(self: QCategoryAxis, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QAbstractAxis_SetLinePen(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// ### DEPRECATED: Use `linePen` instead
    ///
    pub const LinePen = linePen;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#linePen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn linePen(self: QCategoryAxis) QPen {
        return .{ .ptr = qtc.QAbstractAxis_LinePen(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setLinePenColor` instead
    ///
    pub const SetLinePenColor = setLinePenColor;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLinePenColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn setLinePenColor(self: QCategoryAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_SetLinePenColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `linePenColor` instead
    ///
    pub const LinePenColor = linePenColor;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#linePenColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn linePenColor(self: QCategoryAxis) QColor {
        return .{ .ptr = qtc.QAbstractAxis_LinePenColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isGridLineVisible` instead
    ///
    pub const IsGridLineVisible = isGridLineVisible;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#isGridLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn isGridLineVisible(self: QCategoryAxis) bool {
        return qtc.QAbstractAxis_IsGridLineVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setGridLineVisible` instead
    ///
    pub const SetGridLineVisible = setGridLineVisible;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn setGridLineVisible(self: QCategoryAxis) void {
        qtc.QAbstractAxis_SetGridLineVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setGridLinePen` instead
    ///
    pub const SetGridLinePen = setGridLinePen;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLinePen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` pen: QPen `
    ///
    pub fn setGridLinePen(self: QCategoryAxis, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QAbstractAxis_SetGridLinePen(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// ### DEPRECATED: Use `gridLinePen` instead
    ///
    pub const GridLinePen = gridLinePen;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn gridLinePen(self: QCategoryAxis) QPen {
        return .{ .ptr = qtc.QAbstractAxis_GridLinePen(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isMinorGridLineVisible` instead
    ///
    pub const IsMinorGridLineVisible = isMinorGridLineVisible;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#isMinorGridLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn isMinorGridLineVisible(self: QCategoryAxis) bool {
        return qtc.QAbstractAxis_IsMinorGridLineVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMinorGridLineVisible` instead
    ///
    pub const SetMinorGridLineVisible = setMinorGridLineVisible;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn setMinorGridLineVisible(self: QCategoryAxis) void {
        qtc.QAbstractAxis_SetMinorGridLineVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMinorGridLinePen` instead
    ///
    pub const SetMinorGridLinePen = setMinorGridLinePen;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLinePen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` pen: QPen `
    ///
    pub fn setMinorGridLinePen(self: QCategoryAxis, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QAbstractAxis_SetMinorGridLinePen(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// ### DEPRECATED: Use `minorGridLinePen` instead
    ///
    pub const MinorGridLinePen = minorGridLinePen;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn minorGridLinePen(self: QCategoryAxis) QPen {
        return .{ .ptr = qtc.QAbstractAxis_MinorGridLinePen(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setGridLineColor` instead
    ///
    pub const SetGridLineColor = setGridLineColor;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn setGridLineColor(self: QCategoryAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_SetGridLineColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `gridLineColor` instead
    ///
    pub const GridLineColor = gridLineColor;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn gridLineColor(self: QCategoryAxis) QColor {
        return .{ .ptr = qtc.QAbstractAxis_GridLineColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMinorGridLineColor` instead
    ///
    pub const SetMinorGridLineColor = setMinorGridLineColor;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn setMinorGridLineColor(self: QCategoryAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_SetMinorGridLineColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `minorGridLineColor` instead
    ///
    pub const MinorGridLineColor = minorGridLineColor;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn minorGridLineColor(self: QCategoryAxis) QColor {
        return .{ .ptr = qtc.QAbstractAxis_MinorGridLineColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `labelsVisible` instead
    ///
    pub const LabelsVisible = labelsVisible;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn labelsVisible(self: QCategoryAxis) bool {
        return qtc.QAbstractAxis_LabelsVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLabelsVisible` instead
    ///
    pub const SetLabelsVisible = setLabelsVisible;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn setLabelsVisible(self: QCategoryAxis) void {
        qtc.QAbstractAxis_SetLabelsVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLabelsBrush` instead
    ///
    pub const SetLabelsBrush = setLabelsBrush;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` brush: QBrush `
    ///
    pub fn setLabelsBrush(self: QCategoryAxis, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QAbstractAxis_SetLabelsBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### DEPRECATED: Use `labelsBrush` instead
    ///
    pub const LabelsBrush = labelsBrush;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn labelsBrush(self: QCategoryAxis) QBrush {
        return .{ .ptr = qtc.QAbstractAxis_LabelsBrush(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setLabelsFont` instead
    ///
    pub const SetLabelsFont = setLabelsFont;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` font: QFont `
    ///
    pub fn setLabelsFont(self: QCategoryAxis, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QAbstractAxis_SetLabelsFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// ### DEPRECATED: Use `labelsFont` instead
    ///
    pub const LabelsFont = labelsFont;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn labelsFont(self: QCategoryAxis) QFont {
        return .{ .ptr = qtc.QAbstractAxis_LabelsFont(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setLabelsAngle` instead
    ///
    pub const SetLabelsAngle = setLabelsAngle;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsAngle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` angle: i32 `
    ///
    pub fn setLabelsAngle(self: QCategoryAxis, angle: i32) void {
        qtc.QAbstractAxis_SetLabelsAngle(@ptrCast(self.ptr), @bitCast(angle));
    }

    /// ### DEPRECATED: Use `labelsAngle` instead
    ///
    pub const LabelsAngle = labelsAngle;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn labelsAngle(self: QCategoryAxis) i32 {
        return qtc.QAbstractAxis_LabelsAngle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLabelsColor` instead
    ///
    pub const SetLabelsColor = setLabelsColor;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn setLabelsColor(self: QCategoryAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_SetLabelsColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `labelsColor` instead
    ///
    pub const LabelsColor = labelsColor;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn labelsColor(self: QCategoryAxis) QColor {
        return .{ .ptr = qtc.QAbstractAxis_LabelsColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isTitleVisible` instead
    ///
    pub const IsTitleVisible = isTitleVisible;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#isTitleVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn isTitleVisible(self: QCategoryAxis) bool {
        return qtc.QAbstractAxis_IsTitleVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTitleVisible` instead
    ///
    pub const SetTitleVisible = setTitleVisible;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn setTitleVisible(self: QCategoryAxis) void {
        qtc.QAbstractAxis_SetTitleVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTitleBrush` instead
    ///
    pub const SetTitleBrush = setTitleBrush;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` brush: QBrush `
    ///
    pub fn setTitleBrush(self: QCategoryAxis, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QAbstractAxis_SetTitleBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### DEPRECATED: Use `titleBrush` instead
    ///
    pub const TitleBrush = titleBrush;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn titleBrush(self: QCategoryAxis) QBrush {
        return .{ .ptr = qtc.QAbstractAxis_TitleBrush(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setTitleFont` instead
    ///
    pub const SetTitleFont = setTitleFont;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` font: QFont `
    ///
    pub fn setTitleFont(self: QCategoryAxis, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QAbstractAxis_SetTitleFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// ### DEPRECATED: Use `titleFont` instead
    ///
    pub const TitleFont = titleFont;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn titleFont(self: QCategoryAxis) QFont {
        return .{ .ptr = qtc.QAbstractAxis_TitleFont(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setTitleText` instead
    ///
    pub const SetTitleText = setTitleText;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` title: []const u8 `
    ///
    pub fn setTitleText(self: QCategoryAxis, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QAbstractAxis_SetTitleText(@ptrCast(self.ptr), title_str);
    }

    /// ### DEPRECATED: Use `titleText` instead
    ///
    pub const TitleText = titleText;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn titleText(self: QCategoryAxis, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractAxis_TitleText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCategoryAxis.titleText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `shadesVisible` instead
    ///
    pub const ShadesVisible = shadesVisible;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn shadesVisible(self: QCategoryAxis) bool {
        return qtc.QAbstractAxis_ShadesVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setShadesVisible` instead
    ///
    pub const SetShadesVisible = setShadesVisible;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn setShadesVisible(self: QCategoryAxis) void {
        qtc.QAbstractAxis_SetShadesVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setShadesPen` instead
    ///
    pub const SetShadesPen = setShadesPen;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` pen: QPen `
    ///
    pub fn setShadesPen(self: QCategoryAxis, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QAbstractAxis_SetShadesPen(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// ### DEPRECATED: Use `shadesPen` instead
    ///
    pub const ShadesPen = shadesPen;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn shadesPen(self: QCategoryAxis) QPen {
        return .{ .ptr = qtc.QAbstractAxis_ShadesPen(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setShadesBrush` instead
    ///
    pub const SetShadesBrush = setShadesBrush;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` brush: QBrush `
    ///
    pub fn setShadesBrush(self: QCategoryAxis, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QAbstractAxis_SetShadesBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### DEPRECATED: Use `shadesBrush` instead
    ///
    pub const ShadesBrush = shadesBrush;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn shadesBrush(self: QCategoryAxis) QBrush {
        return .{ .ptr = qtc.QAbstractAxis_ShadesBrush(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setShadesColor` instead
    ///
    pub const SetShadesColor = setShadesColor;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn setShadesColor(self: QCategoryAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_SetShadesColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `shadesColor` instead
    ///
    pub const ShadesColor = shadesColor;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn shadesColor(self: QCategoryAxis) QColor {
        return .{ .ptr = qtc.QAbstractAxis_ShadesColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setShadesBorderColor` instead
    ///
    pub const SetShadesBorderColor = setShadesBorderColor;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesBorderColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn setShadesBorderColor(self: QCategoryAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_SetShadesBorderColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `shadesBorderColor` instead
    ///
    pub const ShadesBorderColor = shadesBorderColor;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn shadesBorderColor(self: QCategoryAxis) QColor {
        return .{ .ptr = qtc.QAbstractAxis_ShadesBorderColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `orientation` instead
    ///
    pub const Orientation = orientation;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#orientation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.Orientation `
    ///
    pub fn orientation(self: QCategoryAxis) i32 {
        return qtc.QAbstractAxis_Orientation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `alignment` instead
    ///
    pub const Alignment = alignment;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#alignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn alignment(self: QCategoryAxis) i32 {
        return qtc.QAbstractAxis_Alignment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setReverse` instead
    ///
    pub const SetReverse = setReverse;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setReverse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn setReverse(self: QCategoryAxis) void {
        qtc.QAbstractAxis_SetReverse(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isReverse` instead
    ///
    pub const IsReverse = isReverse;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#isReverse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn isReverse(self: QCategoryAxis) bool {
        return qtc.QAbstractAxis_IsReverse(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLabelsEditable` instead
    ///
    pub const SetLabelsEditable = setLabelsEditable;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsEditable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn setLabelsEditable(self: QCategoryAxis) void {
        qtc.QAbstractAxis_SetLabelsEditable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `labelsEditable` instead
    ///
    pub const LabelsEditable = labelsEditable;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn labelsEditable(self: QCategoryAxis) bool {
        return qtc.QAbstractAxis_LabelsEditable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `labelsTruncated` instead
    ///
    pub const LabelsTruncated = labelsTruncated;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn labelsTruncated(self: QCategoryAxis) bool {
        return qtc.QAbstractAxis_LabelsTruncated(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTruncateLabels` instead
    ///
    pub const SetTruncateLabels = setTruncateLabels;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setTruncateLabels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn setTruncateLabels(self: QCategoryAxis) void {
        qtc.QAbstractAxis_SetTruncateLabels(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `truncateLabels` instead
    ///
    pub const TruncateLabels = truncateLabels;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn truncateLabels(self: QCategoryAxis) bool {
        return qtc.QAbstractAxis_TruncateLabels(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `visibleChanged` instead
    ///
    pub const VisibleChanged = visibleChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#visibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn visibleChanged(self: QCategoryAxis, visible: bool) void {
        qtc.QAbstractAxis_VisibleChanged(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `onVisibleChanged` instead
    ///
    pub const OnVisibleChanged = onVisibleChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#visibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` callback: *const fn (self: QCategoryAxis, visible: bool) callconv(.c) void `
    ///
    pub fn onVisibleChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_VisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `linePenChanged` instead
    ///
    pub const LinePenChanged = linePenChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#linePenChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` pen: QPen `
    ///
    pub fn linePenChanged(self: QCategoryAxis, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QAbstractAxis_LinePenChanged(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// ### DEPRECATED: Use `onLinePenChanged` instead
    ///
    pub const OnLinePenChanged = onLinePenChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#linePenChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` callback: *const fn (self: QCategoryAxis, pen: QPen) callconv(.c) void `
    ///
    pub fn onLinePenChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, QPen) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LinePenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `lineVisibleChanged` instead
    ///
    pub const LineVisibleChanged = lineVisibleChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#lineVisibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn lineVisibleChanged(self: QCategoryAxis, visible: bool) void {
        qtc.QAbstractAxis_LineVisibleChanged(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `onLineVisibleChanged` instead
    ///
    pub const OnLineVisibleChanged = onLineVisibleChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#lineVisibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` callback: *const fn (self: QCategoryAxis, visible: bool) callconv(.c) void `
    ///
    pub fn onLineVisibleChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LineVisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `labelsVisibleChanged` instead
    ///
    pub const LabelsVisibleChanged = labelsVisibleChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn labelsVisibleChanged(self: QCategoryAxis, visible: bool) void {
        qtc.QAbstractAxis_LabelsVisibleChanged(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `onLabelsVisibleChanged` instead
    ///
    pub const OnLabelsVisibleChanged = onLabelsVisibleChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` callback: *const fn (self: QCategoryAxis, visible: bool) callconv(.c) void `
    ///
    pub fn onLabelsVisibleChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsVisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `labelsBrushChanged` instead
    ///
    pub const LabelsBrushChanged = labelsBrushChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrushChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` brush: QBrush `
    ///
    pub fn labelsBrushChanged(self: QCategoryAxis, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QAbstractAxis_LabelsBrushChanged(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### DEPRECATED: Use `onLabelsBrushChanged` instead
    ///
    pub const OnLabelsBrushChanged = onLabelsBrushChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrushChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` callback: *const fn (self: QCategoryAxis, brush: QBrush) callconv(.c) void `
    ///
    pub fn onLabelsBrushChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, QBrush) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsBrushChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `labelsFontChanged` instead
    ///
    pub const LabelsFontChanged = labelsFontChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFontChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` pen: QFont `
    ///
    pub fn labelsFontChanged(self: QCategoryAxis, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QFont;
        qtc.QAbstractAxis_LabelsFontChanged(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// ### DEPRECATED: Use `onLabelsFontChanged` instead
    ///
    pub const OnLabelsFontChanged = onLabelsFontChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFontChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` callback: *const fn (self: QCategoryAxis, pen: QFont) callconv(.c) void `
    ///
    pub fn onLabelsFontChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, QFont) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsFontChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `labelsAngleChanged` instead
    ///
    pub const LabelsAngleChanged = labelsAngleChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` angle: i32 `
    ///
    pub fn labelsAngleChanged(self: QCategoryAxis, angle: i32) void {
        qtc.QAbstractAxis_LabelsAngleChanged(@ptrCast(self.ptr), @bitCast(angle));
    }

    /// ### DEPRECATED: Use `onLabelsAngleChanged` instead
    ///
    pub const OnLabelsAngleChanged = onLabelsAngleChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` callback: *const fn (self: QCategoryAxis, angle: i32) callconv(.c) void `
    ///
    pub fn onLabelsAngleChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, i32) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsAngleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `gridLinePenChanged` instead
    ///
    pub const GridLinePenChanged = gridLinePenChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePenChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` pen: QPen `
    ///
    pub fn gridLinePenChanged(self: QCategoryAxis, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QAbstractAxis_GridLinePenChanged(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// ### DEPRECATED: Use `onGridLinePenChanged` instead
    ///
    pub const OnGridLinePenChanged = onGridLinePenChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePenChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` callback: *const fn (self: QCategoryAxis, pen: QPen) callconv(.c) void `
    ///
    pub fn onGridLinePenChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, QPen) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_GridLinePenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `gridVisibleChanged` instead
    ///
    pub const GridVisibleChanged = gridVisibleChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridVisibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn gridVisibleChanged(self: QCategoryAxis, visible: bool) void {
        qtc.QAbstractAxis_GridVisibleChanged(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `onGridVisibleChanged` instead
    ///
    pub const OnGridVisibleChanged = onGridVisibleChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridVisibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` callback: *const fn (self: QCategoryAxis, visible: bool) callconv(.c) void `
    ///
    pub fn onGridVisibleChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_GridVisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `minorGridVisibleChanged` instead
    ///
    pub const MinorGridVisibleChanged = minorGridVisibleChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridVisibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn minorGridVisibleChanged(self: QCategoryAxis, visible: bool) void {
        qtc.QAbstractAxis_MinorGridVisibleChanged(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `onMinorGridVisibleChanged` instead
    ///
    pub const OnMinorGridVisibleChanged = onMinorGridVisibleChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridVisibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` callback: *const fn (self: QCategoryAxis, visible: bool) callconv(.c) void `
    ///
    pub fn onMinorGridVisibleChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_MinorGridVisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `minorGridLinePenChanged` instead
    ///
    pub const MinorGridLinePenChanged = minorGridLinePenChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePenChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` pen: QPen `
    ///
    pub fn minorGridLinePenChanged(self: QCategoryAxis, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QAbstractAxis_MinorGridLinePenChanged(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// ### DEPRECATED: Use `onMinorGridLinePenChanged` instead
    ///
    pub const OnMinorGridLinePenChanged = onMinorGridLinePenChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePenChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` callback: *const fn (self: QCategoryAxis, pen: QPen) callconv(.c) void `
    ///
    pub fn onMinorGridLinePenChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, QPen) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_MinorGridLinePenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `gridLineColorChanged` instead
    ///
    pub const GridLineColorChanged = gridLineColorChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn gridLineColorChanged(self: QCategoryAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_GridLineColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `onGridLineColorChanged` instead
    ///
    pub const OnGridLineColorChanged = onGridLineColorChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` callback: *const fn (self: QCategoryAxis, color: QColor) callconv(.c) void `
    ///
    pub fn onGridLineColorChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, QColor) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_GridLineColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `minorGridLineColorChanged` instead
    ///
    pub const MinorGridLineColorChanged = minorGridLineColorChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn minorGridLineColorChanged(self: QCategoryAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_MinorGridLineColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `onMinorGridLineColorChanged` instead
    ///
    pub const OnMinorGridLineColorChanged = onMinorGridLineColorChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` callback: *const fn (self: QCategoryAxis, color: QColor) callconv(.c) void `
    ///
    pub fn onMinorGridLineColorChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, QColor) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_MinorGridLineColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `colorChanged` instead
    ///
    pub const ColorChanged = colorChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#colorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn colorChanged(self: QCategoryAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_ColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `onColorChanged` instead
    ///
    pub const OnColorChanged = onColorChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#colorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` callback: *const fn (self: QCategoryAxis, color: QColor) callconv(.c) void `
    ///
    pub fn onColorChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, QColor) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `labelsColorChanged` instead
    ///
    pub const LabelsColorChanged = labelsColorChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn labelsColorChanged(self: QCategoryAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_LabelsColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `onLabelsColorChanged` instead
    ///
    pub const OnLabelsColorChanged = onLabelsColorChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` callback: *const fn (self: QCategoryAxis, color: QColor) callconv(.c) void `
    ///
    pub fn onLabelsColorChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, QColor) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `titleTextChanged` instead
    ///
    pub const TitleTextChanged = titleTextChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` title: []const u8 `
    ///
    pub fn titleTextChanged(self: QCategoryAxis, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QAbstractAxis_TitleTextChanged(@ptrCast(self.ptr), title_str);
    }

    /// ### DEPRECATED: Use `onTitleTextChanged` instead
    ///
    pub const OnTitleTextChanged = onTitleTextChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleTextChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` callback: *const fn (self: QCategoryAxis, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onTitleTextChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, [*:0]const u8) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_TitleTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `titleBrushChanged` instead
    ///
    pub const TitleBrushChanged = titleBrushChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrushChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` brush: QBrush `
    ///
    pub fn titleBrushChanged(self: QCategoryAxis, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QAbstractAxis_TitleBrushChanged(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### DEPRECATED: Use `onTitleBrushChanged` instead
    ///
    pub const OnTitleBrushChanged = onTitleBrushChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrushChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` callback: *const fn (self: QCategoryAxis, brush: QBrush) callconv(.c) void `
    ///
    pub fn onTitleBrushChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, QBrush) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_TitleBrushChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `titleVisibleChanged` instead
    ///
    pub const TitleVisibleChanged = titleVisibleChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleVisibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn titleVisibleChanged(self: QCategoryAxis, visible: bool) void {
        qtc.QAbstractAxis_TitleVisibleChanged(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `onTitleVisibleChanged` instead
    ///
    pub const OnTitleVisibleChanged = onTitleVisibleChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleVisibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` callback: *const fn (self: QCategoryAxis, visible: bool) callconv(.c) void `
    ///
    pub fn onTitleVisibleChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_TitleVisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `titleFontChanged` instead
    ///
    pub const TitleFontChanged = titleFontChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleFontChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` font: QFont `
    ///
    pub fn titleFontChanged(self: QCategoryAxis, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QAbstractAxis_TitleFontChanged(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// ### DEPRECATED: Use `onTitleFontChanged` instead
    ///
    pub const OnTitleFontChanged = onTitleFontChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleFontChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` callback: *const fn (self: QCategoryAxis, font: QFont) callconv(.c) void `
    ///
    pub fn onTitleFontChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, QFont) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_TitleFontChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `shadesVisibleChanged` instead
    ///
    pub const ShadesVisibleChanged = shadesVisibleChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn shadesVisibleChanged(self: QCategoryAxis, visible: bool) void {
        qtc.QAbstractAxis_ShadesVisibleChanged(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `onShadesVisibleChanged` instead
    ///
    pub const OnShadesVisibleChanged = onShadesVisibleChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` callback: *const fn (self: QCategoryAxis, visible: bool) callconv(.c) void `
    ///
    pub fn onShadesVisibleChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ShadesVisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `shadesColorChanged` instead
    ///
    pub const ShadesColorChanged = shadesColorChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn shadesColorChanged(self: QCategoryAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_ShadesColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `onShadesColorChanged` instead
    ///
    pub const OnShadesColorChanged = onShadesColorChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` callback: *const fn (self: QCategoryAxis, color: QColor) callconv(.c) void `
    ///
    pub fn onShadesColorChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, QColor) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ShadesColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `shadesBorderColorChanged` instead
    ///
    pub const ShadesBorderColorChanged = shadesBorderColorChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn shadesBorderColorChanged(self: QCategoryAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_ShadesBorderColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `onShadesBorderColorChanged` instead
    ///
    pub const OnShadesBorderColorChanged = onShadesBorderColorChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` callback: *const fn (self: QCategoryAxis, color: QColor) callconv(.c) void `
    ///
    pub fn onShadesBorderColorChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, QColor) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ShadesBorderColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `shadesPenChanged` instead
    ///
    pub const ShadesPenChanged = shadesPenChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPenChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` pen: QPen `
    ///
    pub fn shadesPenChanged(self: QCategoryAxis, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QAbstractAxis_ShadesPenChanged(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// ### DEPRECATED: Use `onShadesPenChanged` instead
    ///
    pub const OnShadesPenChanged = onShadesPenChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPenChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` callback: *const fn (self: QCategoryAxis, pen: QPen) callconv(.c) void `
    ///
    pub fn onShadesPenChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, QPen) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ShadesPenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `shadesBrushChanged` instead
    ///
    pub const ShadesBrushChanged = shadesBrushChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrushChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` brush: QBrush `
    ///
    pub fn shadesBrushChanged(self: QCategoryAxis, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QAbstractAxis_ShadesBrushChanged(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### DEPRECATED: Use `onShadesBrushChanged` instead
    ///
    pub const OnShadesBrushChanged = onShadesBrushChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrushChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` callback: *const fn (self: QCategoryAxis, brush: QBrush) callconv(.c) void `
    ///
    pub fn onShadesBrushChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, QBrush) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ShadesBrushChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `reverseChanged` instead
    ///
    pub const ReverseChanged = reverseChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#reverseChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` reverse: bool `
    ///
    pub fn reverseChanged(self: QCategoryAxis, reverse: bool) void {
        qtc.QAbstractAxis_ReverseChanged(@ptrCast(self.ptr), reverse);
    }

    /// ### DEPRECATED: Use `onReverseChanged` instead
    ///
    pub const OnReverseChanged = onReverseChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#reverseChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` callback: *const fn (self: QCategoryAxis, reverse: bool) callconv(.c) void `
    ///
    pub fn onReverseChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ReverseChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `labelsEditableChanged` instead
    ///
    pub const LabelsEditableChanged = labelsEditableChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditableChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` editable: bool `
    ///
    pub fn labelsEditableChanged(self: QCategoryAxis, editable: bool) void {
        qtc.QAbstractAxis_LabelsEditableChanged(@ptrCast(self.ptr), editable);
    }

    /// ### DEPRECATED: Use `onLabelsEditableChanged` instead
    ///
    pub const OnLabelsEditableChanged = onLabelsEditableChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditableChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` callback: *const fn (self: QCategoryAxis, editable: bool) callconv(.c) void `
    ///
    pub fn onLabelsEditableChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsEditableChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `labelsTruncatedChanged` instead
    ///
    pub const LabelsTruncatedChanged = labelsTruncatedChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncatedChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` _labelsTruncated: bool `
    ///
    pub fn labelsTruncatedChanged(self: QCategoryAxis, _labelsTruncated: bool) void {
        qtc.QAbstractAxis_LabelsTruncatedChanged(@ptrCast(self.ptr), _labelsTruncated);
    }

    /// ### DEPRECATED: Use `onLabelsTruncatedChanged` instead
    ///
    pub const OnLabelsTruncatedChanged = onLabelsTruncatedChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncatedChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` callback: *const fn (self: QCategoryAxis, labelsTruncated: bool) callconv(.c) void `
    ///
    pub fn onLabelsTruncatedChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsTruncatedChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `truncateLabelsChanged` instead
    ///
    pub const TruncateLabelsChanged = truncateLabelsChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabelsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` _truncateLabels: bool `
    ///
    pub fn truncateLabelsChanged(self: QCategoryAxis, _truncateLabels: bool) void {
        qtc.QAbstractAxis_TruncateLabelsChanged(@ptrCast(self.ptr), _truncateLabels);
    }

    /// ### DEPRECATED: Use `onTruncateLabelsChanged` instead
    ///
    pub const OnTruncateLabelsChanged = onTruncateLabelsChanged;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabelsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` callback: *const fn (self: QCategoryAxis, truncateLabels: bool) callconv(.c) void `
    ///
    pub fn onTruncateLabelsChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_TruncateLabelsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setVisible1` instead
    ///
    pub const SetVisible1 = setVisible1;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn setVisible1(self: QCategoryAxis, visible: bool) void {
        qtc.QAbstractAxis_SetVisible1(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `setLineVisible1` instead
    ///
    pub const SetLineVisible1 = setLineVisible1;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn setLineVisible1(self: QCategoryAxis, visible: bool) void {
        qtc.QAbstractAxis_SetLineVisible1(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `setGridLineVisible1` instead
    ///
    pub const SetGridLineVisible1 = setGridLineVisible1;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn setGridLineVisible1(self: QCategoryAxis, visible: bool) void {
        qtc.QAbstractAxis_SetGridLineVisible1(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `setMinorGridLineVisible1` instead
    ///
    pub const SetMinorGridLineVisible1 = setMinorGridLineVisible1;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn setMinorGridLineVisible1(self: QCategoryAxis, visible: bool) void {
        qtc.QAbstractAxis_SetMinorGridLineVisible1(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `setLabelsVisible1` instead
    ///
    pub const SetLabelsVisible1 = setLabelsVisible1;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn setLabelsVisible1(self: QCategoryAxis, visible: bool) void {
        qtc.QAbstractAxis_SetLabelsVisible1(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `setTitleVisible1` instead
    ///
    pub const SetTitleVisible1 = setTitleVisible1;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn setTitleVisible1(self: QCategoryAxis, visible: bool) void {
        qtc.QAbstractAxis_SetTitleVisible1(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `setShadesVisible1` instead
    ///
    pub const SetShadesVisible1 = setShadesVisible1;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn setShadesVisible1(self: QCategoryAxis, visible: bool) void {
        qtc.QAbstractAxis_SetShadesVisible1(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `setReverse1` instead
    ///
    pub const SetReverse1 = setReverse1;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setReverse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` reverse: bool `
    ///
    pub fn setReverse1(self: QCategoryAxis, reverse: bool) void {
        qtc.QAbstractAxis_SetReverse1(@ptrCast(self.ptr), reverse);
    }

    /// ### DEPRECATED: Use `setLabelsEditable1` instead
    ///
    pub const SetLabelsEditable1 = setLabelsEditable1;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsEditable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` editable: bool `
    ///
    pub fn setLabelsEditable1(self: QCategoryAxis, editable: bool) void {
        qtc.QAbstractAxis_SetLabelsEditable1(@ptrCast(self.ptr), editable);
    }

    /// ### DEPRECATED: Use `setTruncateLabels1` instead
    ///
    pub const SetTruncateLabels1 = setTruncateLabels1;

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setTruncateLabels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` _truncateLabels: bool `
    ///
    pub fn setTruncateLabels1(self: QCategoryAxis, _truncateLabels: bool) void {
        qtc.QAbstractAxis_SetTruncateLabels1(@ptrCast(self.ptr), _truncateLabels);
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
    /// ` self: QCategoryAxis `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QCategoryAxis, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCategoryAxis.objectName: Memory allocation failed");
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
    /// ` self: QCategoryAxis `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QCategoryAxis, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
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
    /// ` self: QCategoryAxis `
    ///
    pub fn isWidgetType(self: QCategoryAxis) bool {
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
    /// ` self: QCategoryAxis `
    ///
    pub fn isWindowType(self: QCategoryAxis) bool {
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
    /// ` self: QCategoryAxis `
    ///
    pub fn isQuickItemType(self: QCategoryAxis) bool {
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
    /// ` self: QCategoryAxis `
    ///
    pub fn signalsBlocked(self: QCategoryAxis) bool {
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
    /// ` self: QCategoryAxis `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QCategoryAxis, b: bool) bool {
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
    /// ` self: QCategoryAxis `
    ///
    pub fn thread(self: QCategoryAxis) QThread {
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
    /// ` self: QCategoryAxis `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QCategoryAxis, _thread: anytype) bool {
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
    /// ` self: QCategoryAxis `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QCategoryAxis, interval: i32) i32 {
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
    /// ` self: QCategoryAxis `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QCategoryAxis, time: i64) i32 {
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
    /// ` self: QCategoryAxis `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QCategoryAxis, id: i32) void {
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
    /// ` self: QCategoryAxis `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QCategoryAxis, id: i32) void {
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
    /// ` self: QCategoryAxis `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QCategoryAxis, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QCategoryAxis.children: Memory allocation failed");
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
    /// ` self: QCategoryAxis `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QCategoryAxis, _parent: anytype) void {
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
    /// ` self: QCategoryAxis `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QCategoryAxis, filterObj: anytype) void {
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
    /// ` self: QCategoryAxis `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QCategoryAxis, obj: anytype) void {
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
    /// ` self: QCategoryAxis `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QCategoryAxis, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QCategoryAxis `
    ///
    pub fn disconnect3(self: QCategoryAxis) bool {
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
    /// ` self: QCategoryAxis `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QCategoryAxis, receiver: anytype) bool {
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
    /// ` self: QCategoryAxis `
    ///
    pub fn dumpObjectTree(self: QCategoryAxis) void {
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
    /// ` self: QCategoryAxis `
    ///
    pub fn dumpObjectInfo(self: QCategoryAxis) void {
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
    /// ` self: QCategoryAxis `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QCategoryAxis, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
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
    /// ` self: QCategoryAxis `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QCategoryAxis, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
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
    /// ` self: QCategoryAxis `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QCategoryAxis, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QCategoryAxis.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QCategoryAxis.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QCategoryAxis `
    ///
    pub fn bindingStorage(self: QCategoryAxis) QBindingStorage {
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
    /// ` self: QCategoryAxis `
    ///
    pub fn bindingStorage2(self: QCategoryAxis) QBindingStorage {
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
    /// ` self: QCategoryAxis `
    ///
    pub fn destroyed(self: QCategoryAxis) void {
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
    /// ` self: QCategoryAxis `
    ///
    /// ` callback: *const fn (self: QCategoryAxis) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QCategoryAxis, callback: *const fn (QCategoryAxis) callconv(.c) void) void {
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
    /// ` self: QCategoryAxis `
    ///
    pub fn parent(self: QCategoryAxis) QObject {
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
    /// ` self: QCategoryAxis `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QCategoryAxis, classname: [:0]const u8) bool {
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
    /// ` self: QCategoryAxis `
    ///
    pub fn deleteLater(self: QCategoryAxis) void {
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
    /// ` self: QCategoryAxis `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QCategoryAxis, interval: i32, timerType: i32) i32 {
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
    /// ` self: QCategoryAxis `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QCategoryAxis, time: i64, timerType: i32) i32 {
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
    /// ` self: QCategoryAxis `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QCategoryAxis, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QCategoryAxis `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QCategoryAxis, signal: [:0]const u8) bool {
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
    /// ` self: QCategoryAxis `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QCategoryAxis, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QCategoryAxis `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QCategoryAxis, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QCategoryAxis `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QCategoryAxis, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QCategoryAxis `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QCategoryAxis, param1: anytype) void {
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
    /// ` self: QCategoryAxis `
    ///
    /// ` callback: *const fn (self: QCategoryAxis, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QCategoryAxis, callback: *const fn (QCategoryAxis, QObject) callconv(.c) void) void {
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
    /// ` self: QCategoryAxis `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QCategoryAxis, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QCategoryAxis_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCategoryAxis `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QCategoryAxis, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QCategoryAxis_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCategoryAxis`
    ///
    /// ` callback: *const fn (self: QCategoryAxis, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QCategoryAxis, callback: *const fn (QCategoryAxis, QEvent) callconv(.c) bool) void {
        qtc.QCategoryAxis_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCategoryAxis `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QCategoryAxis, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QCategoryAxis_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCategoryAxis `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QCategoryAxis, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QCategoryAxis_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCategoryAxis`
    ///
    /// ` callback: *const fn (self: QCategoryAxis, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QCategoryAxis, callback: *const fn (QCategoryAxis, QObject, QEvent) callconv(.c) bool) void {
        qtc.QCategoryAxis_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCategoryAxis `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QCategoryAxis, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QCategoryAxis_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCategoryAxis `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QCategoryAxis, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QCategoryAxis_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCategoryAxis`
    ///
    /// ` callback: *const fn (self: QCategoryAxis, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QCategoryAxis, callback: *const fn (QCategoryAxis, QTimerEvent) callconv(.c) void) void {
        qtc.QCategoryAxis_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCategoryAxis `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QCategoryAxis, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QCategoryAxis_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCategoryAxis `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QCategoryAxis, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QCategoryAxis_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCategoryAxis`
    ///
    /// ` callback: *const fn (self: QCategoryAxis, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QCategoryAxis, callback: *const fn (QCategoryAxis, QChildEvent) callconv(.c) void) void {
        qtc.QCategoryAxis_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCategoryAxis `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QCategoryAxis, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QCategoryAxis_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCategoryAxis `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QCategoryAxis, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QCategoryAxis_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QCategoryAxis`
    ///
    /// ` callback: *const fn (self: QCategoryAxis, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QCategoryAxis, callback: *const fn (QCategoryAxis, QEvent) callconv(.c) void) void {
        qtc.QCategoryAxis_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCategoryAxis `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QCategoryAxis, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QCategoryAxis_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCategoryAxis `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QCategoryAxis, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QCategoryAxis_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCategoryAxis`
    ///
    /// ` callback: *const fn (self: QCategoryAxis, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QCategoryAxis, callback: *const fn (QCategoryAxis, QMetaMethod) callconv(.c) void) void {
        qtc.QCategoryAxis_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCategoryAxis `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QCategoryAxis, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QCategoryAxis_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCategoryAxis `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QCategoryAxis, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QCategoryAxis_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCategoryAxis`
    ///
    /// ` callback: *const fn (self: QCategoryAxis, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QCategoryAxis, callback: *const fn (QCategoryAxis, QMetaMethod) callconv(.c) void) void {
        qtc.QCategoryAxis_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCategoryAxis `
    ///
    pub fn sender(self: QCategoryAxis) QObject {
        return .{ .ptr = qtc.QCategoryAxis_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QCategoryAxis `
    ///
    pub fn superSender(self: QCategoryAxis) QObject {
        return .{ .ptr = qtc.QCategoryAxis_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QCategoryAxis`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QCategoryAxis, callback: *const fn () callconv(.c) QObject) void {
        qtc.QCategoryAxis_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCategoryAxis `
    ///
    pub fn senderSignalIndex(self: QCategoryAxis) i32 {
        return qtc.QCategoryAxis_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QCategoryAxis `
    ///
    pub fn superSenderSignalIndex(self: QCategoryAxis) i32 {
        return qtc.QCategoryAxis_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QCategoryAxis`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QCategoryAxis, callback: *const fn () callconv(.c) i32) void {
        qtc.QCategoryAxis_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCategoryAxis `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QCategoryAxis, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QCategoryAxis_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QCategoryAxis `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QCategoryAxis, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QCategoryAxis_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QCategoryAxis`
    ///
    /// ` callback: *const fn (self: QCategoryAxis, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QCategoryAxis, callback: *const fn (QCategoryAxis, [*:0]const u8) callconv(.c) i32) void {
        qtc.QCategoryAxis_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCategoryAxis `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QCategoryAxis, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QCategoryAxis_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCategoryAxis `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QCategoryAxis, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QCategoryAxis_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCategoryAxis`
    ///
    /// ` callback: *const fn (self: QCategoryAxis, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QCategoryAxis, callback: *const fn (QCategoryAxis, QMetaMethod) callconv(.c) bool) void {
        qtc.QCategoryAxis_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCategoryAxis `
    ///
    /// ` callback: *const fn (self: QCategoryAxis, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcategoryaxis-qtcharts.html#dtor.QCategoryAxis)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn delete(self: QCategoryAxis) void {
        qtc.QCategoryAxis_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcategoryaxis-qtcharts.html#public-types)
pub const enums = struct {
    pub const AxisLabelsPosition = enum {
        pub const AxisLabelsPositionCenter: i32 = 0;
        pub const AxisLabelsPositionOnValue: i32 = 1;
    };
};
