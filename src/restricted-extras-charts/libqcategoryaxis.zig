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

    /// New constructs a new QCategoryAxis object.
    ///
    pub fn New() QCategoryAxis {
        return .{ .ptr = qtc.QCategoryAxis_new() };
    }

    /// New2 constructs a new QCategoryAxis object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) QCategoryAxis {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QCategoryAxis_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn MetaObject(self: QCategoryAxis) QMetaObject {
        return .{ .ptr = qtc.QCategoryAxis_MetaObject(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMetaObject(self: QCategoryAxis, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QCategoryAxis_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QCategoryAxis `
    ///
    pub fn SuperMetaObject(self: QCategoryAxis) QMetaObject {
        return .{ .ptr = qtc.QCategoryAxis_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QCategoryAxis, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QCategoryAxis_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` callback: *const fn (self: QCategoryAxis, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QCategoryAxis, callback: *const fn (QCategoryAxis, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QCategoryAxis_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QCategoryAxis, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QCategoryAxis_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

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
    pub fn Metacall(self: QCategoryAxis, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QCategoryAxis_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` callback: *const fn (self: QCategoryAxis, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QCategoryAxis, callback: *const fn (QCategoryAxis, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QCategoryAxis_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

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
    pub fn SuperMetacall(self: QCategoryAxis, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QCategoryAxis_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcategoryaxis.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn Type(self: QCategoryAxis) i32 {
        return qtc.QCategoryAxis_Type(@ptrCast(self.ptr));
    }

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
    pub fn OnType(self: QCategoryAxis, callback: *const fn () callconv(.c) i32) void {
        qtc.QCategoryAxis_OnType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperType` instead
    ///
    pub const QBaseType = SuperType;

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
    pub fn SuperType(self: QCategoryAxis) i32 {
        return qtc.QCategoryAxis_SuperType(@ptrCast(self.ptr));
    }

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
    pub fn Append(self: QCategoryAxis, label: []const u8, categoryEndValue: f64) void {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        qtc.QCategoryAxis_Append(@ptrCast(self.ptr), label_str, @bitCast(categoryEndValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcategoryaxis-qtcharts.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` label: []const u8 `
    ///
    pub fn Remove(self: QCategoryAxis, label: []const u8) void {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        qtc.QCategoryAxis_Remove(@ptrCast(self.ptr), label_str);
    }

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
    pub fn ReplaceLabel(self: QCategoryAxis, oldLabel: []const u8, newLabel: []const u8) void {
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcategoryaxis-qtcharts.html#startValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn StartValue(self: QCategoryAxis) f64 {
        return qtc.QCategoryAxis_StartValue(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcategoryaxis-qtcharts.html#setStartValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` min: f64 `
    ///
    pub fn SetStartValue(self: QCategoryAxis, min: f64) void {
        qtc.QCategoryAxis_SetStartValue(@ptrCast(self.ptr), @bitCast(min));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcategoryaxis-qtcharts.html#endValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` categoryLabel: []const u8 `
    ///
    pub fn EndValue(self: QCategoryAxis, categoryLabel: []const u8) f64 {
        const categoryLabel_str = qtc.libqt_string{
            .len = categoryLabel.len,
            .data = categoryLabel.ptr,
        };
        return qtc.QCategoryAxis_EndValue(@ptrCast(self.ptr), categoryLabel_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcategoryaxis-qtcharts.html#categoriesLabels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CategoriesLabels(self: QCategoryAxis, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QCategoryAxis_CategoriesLabels(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qcategoryaxis.CategoriesLabels: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qcategoryaxis.CategoriesLabels: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcategoryaxis-qtcharts.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn Count(self: QCategoryAxis) i32 {
        return qtc.QCategoryAxis_Count(@ptrCast(self.ptr));
    }

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
    pub fn LabelsPosition(self: QCategoryAxis) i32 {
        return qtc.QCategoryAxis_LabelsPosition(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcategoryaxis-qtcharts.html#setLabelsPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` position: qcategoryaxis_enums.AxisLabelsPosition `
    ///
    pub fn SetLabelsPosition(self: QCategoryAxis, position: i32) void {
        qtc.QCategoryAxis_SetLabelsPosition(@ptrCast(self.ptr), @bitCast(position));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcategoryaxis-qtcharts.html#categoriesChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn CategoriesChanged(self: QCategoryAxis) void {
        qtc.QCategoryAxis_CategoriesChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcategoryaxis-qtcharts.html#categoriesChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` callback: *const fn (self: QCategoryAxis) callconv(.c) void `
    ///
    pub fn OnCategoriesChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis) callconv(.c) void) void {
        qtc.QCategoryAxis_Connect_CategoriesChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcategoryaxis-qtcharts.html#labelsPositionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` position: qcategoryaxis_enums.AxisLabelsPosition `
    ///
    pub fn LabelsPositionChanged(self: QCategoryAxis, position: i32) void {
        qtc.QCategoryAxis_LabelsPositionChanged(@ptrCast(self.ptr), @bitCast(position));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcategoryaxis-qtcharts.html#labelsPositionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` callback: *const fn (self: QCategoryAxis, position: qcategoryaxis_enums.AxisLabelsPosition) callconv(.c) void `
    ///
    pub fn OnLabelsPositionChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, i32) callconv(.c) void) void {
        qtc.QCategoryAxis_Connect_LabelsPositionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcategoryaxis.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcategoryaxis.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcategoryaxis-qtcharts.html#startValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` categoryLabel: []const u8 `
    ///
    pub fn StartValue1(self: QCategoryAxis, categoryLabel: []const u8) f64 {
        const categoryLabel_str = qtc.libqt_string{
            .len = categoryLabel.len,
            .data = categoryLabel.ptr,
        };
        return qtc.QCategoryAxis_StartValue1(@ptrCast(self.ptr), categoryLabel_str);
    }

    /// Inherited from QValueAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis.html#setMin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` min: f64 `
    ///
    pub fn SetMin(self: QCategoryAxis, min: f64) void {
        qtc.QValueAxis_SetMin(@ptrCast(self.ptr), @bitCast(min));
    }

    /// Inherited from QValueAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis.html#min)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn Min(self: QCategoryAxis) f64 {
        return qtc.QValueAxis_Min(@ptrCast(self.ptr));
    }

    /// Inherited from QValueAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis.html#setMax)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` max: f64 `
    ///
    pub fn SetMax(self: QCategoryAxis, max: f64) void {
        qtc.QValueAxis_SetMax(@ptrCast(self.ptr), @bitCast(max));
    }

    /// Inherited from QValueAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis.html#max)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn Max(self: QCategoryAxis) f64 {
        return qtc.QValueAxis_Max(@ptrCast(self.ptr));
    }

    /// Inherited from QValueAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis.html#setRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` min: f64 `
    ///
    /// ` max: f64 `
    ///
    pub fn SetRange(self: QCategoryAxis, min: f64, max: f64) void {
        qtc.QValueAxis_SetRange(@ptrCast(self.ptr), @bitCast(min), @bitCast(max));
    }

    /// Inherited from QValueAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis.html#setTickCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` count: i32 `
    ///
    pub fn SetTickCount(self: QCategoryAxis, count: i32) void {
        qtc.QValueAxis_SetTickCount(@ptrCast(self.ptr), @bitCast(count));
    }

    /// Inherited from QValueAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis.html#tickCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn TickCount(self: QCategoryAxis) i32 {
        return qtc.QValueAxis_TickCount(@ptrCast(self.ptr));
    }

    /// Inherited from QValueAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis.html#setMinorTickCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` count: i32 `
    ///
    pub fn SetMinorTickCount(self: QCategoryAxis, count: i32) void {
        qtc.QValueAxis_SetMinorTickCount(@ptrCast(self.ptr), @bitCast(count));
    }

    /// Inherited from QValueAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis.html#minorTickCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn MinorTickCount(self: QCategoryAxis) i32 {
        return qtc.QValueAxis_MinorTickCount(@ptrCast(self.ptr));
    }

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
    pub fn SetTickAnchor(self: QCategoryAxis, anchor: f64) void {
        qtc.QValueAxis_SetTickAnchor(@ptrCast(self.ptr), @bitCast(anchor));
    }

    /// Inherited from QValueAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis.html#tickAnchor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn TickAnchor(self: QCategoryAxis) f64 {
        return qtc.QValueAxis_TickAnchor(@ptrCast(self.ptr));
    }

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
    pub fn SetTickInterval(self: QCategoryAxis, insterval: f64) void {
        qtc.QValueAxis_SetTickInterval(@ptrCast(self.ptr), @bitCast(insterval));
    }

    /// Inherited from QValueAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis.html#tickInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn TickInterval(self: QCategoryAxis) f64 {
        return qtc.QValueAxis_TickInterval(@ptrCast(self.ptr));
    }

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
    pub fn SetTickType(self: QCategoryAxis, typeVal: i32) void {
        qtc.QValueAxis_SetTickType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

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
    pub fn TickType(self: QCategoryAxis) i32 {
        return qtc.QValueAxis_TickType(@ptrCast(self.ptr));
    }

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
    pub fn SetLabelFormat(self: QCategoryAxis, format: []const u8) void {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        qtc.QValueAxis_SetLabelFormat(@ptrCast(self.ptr), format_str);
    }

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
    pub fn LabelFormat(self: QCategoryAxis, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QValueAxis_LabelFormat(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcategoryaxis.LabelFormat: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QValueAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis.html#applyNiceNumbers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn ApplyNiceNumbers(self: QCategoryAxis) void {
        qtc.QValueAxis_ApplyNiceNumbers(@ptrCast(self.ptr));
    }

    /// Inherited from QValueAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis.html#minChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` min: f64 `
    ///
    pub fn MinChanged(self: QCategoryAxis, min: f64) void {
        qtc.QValueAxis_MinChanged(@ptrCast(self.ptr), @bitCast(min));
    }

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
    pub fn OnMinChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, f64) callconv(.c) void) void {
        qtc.QValueAxis_Connect_MinChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QValueAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis.html#maxChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` max: f64 `
    ///
    pub fn MaxChanged(self: QCategoryAxis, max: f64) void {
        qtc.QValueAxis_MaxChanged(@ptrCast(self.ptr), @bitCast(max));
    }

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
    pub fn OnMaxChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, f64) callconv(.c) void) void {
        qtc.QValueAxis_Connect_MaxChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QValueAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis.html#rangeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` min: f64 `
    ///
    /// ` max: f64 `
    ///
    pub fn RangeChanged(self: QCategoryAxis, min: f64, max: f64) void {
        qtc.QValueAxis_RangeChanged(@ptrCast(self.ptr), @bitCast(min), @bitCast(max));
    }

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
    pub fn OnRangeChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, f64, f64) callconv(.c) void) void {
        qtc.QValueAxis_Connect_RangeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QValueAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis.html#tickCountChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` tickCount: i32 `
    ///
    pub fn TickCountChanged(self: QCategoryAxis, tickCount: i32) void {
        qtc.QValueAxis_TickCountChanged(@ptrCast(self.ptr), @bitCast(tickCount));
    }

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
    pub fn OnTickCountChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, i32) callconv(.c) void) void {
        qtc.QValueAxis_Connect_TickCountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QValueAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvalueaxis.html#minorTickCountChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` tickCount: i32 `
    ///
    pub fn MinorTickCountChanged(self: QCategoryAxis, tickCount: i32) void {
        qtc.QValueAxis_MinorTickCountChanged(@ptrCast(self.ptr), @bitCast(tickCount));
    }

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
    pub fn OnMinorTickCountChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, i32) callconv(.c) void) void {
        qtc.QValueAxis_Connect_MinorTickCountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn LabelFormatChanged(self: QCategoryAxis, format: []const u8) void {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        qtc.QValueAxis_LabelFormatChanged(@ptrCast(self.ptr), format_str);
    }

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
    pub fn OnLabelFormatChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, [*:0]const u8) callconv(.c) void) void {
        qtc.QValueAxis_Connect_LabelFormatChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn TickIntervalChanged(self: QCategoryAxis, interval: f64) void {
        qtc.QValueAxis_TickIntervalChanged(@ptrCast(self.ptr), @bitCast(interval));
    }

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
    pub fn OnTickIntervalChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, f64) callconv(.c) void) void {
        qtc.QValueAxis_Connect_TickIntervalChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn TickAnchorChanged(self: QCategoryAxis, anchor: f64) void {
        qtc.QValueAxis_TickAnchorChanged(@ptrCast(self.ptr), @bitCast(anchor));
    }

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
    pub fn OnTickAnchorChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, f64) callconv(.c) void) void {
        qtc.QValueAxis_Connect_TickAnchorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn TickTypeChanged(self: QCategoryAxis, typeVal: i32) void {
        qtc.QValueAxis_TickTypeChanged(@ptrCast(self.ptr), @bitCast(typeVal));
    }

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
    pub fn OnTickTypeChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, i32) callconv(.c) void) void {
        qtc.QValueAxis_Connect_TickTypeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn IsVisible(self: QCategoryAxis) bool {
        return qtc.QAbstractAxis_IsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn SetVisible(self: QCategoryAxis) void {
        qtc.QAbstractAxis_SetVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn Show(self: QCategoryAxis) void {
        qtc.QAbstractAxis_Show(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn Hide(self: QCategoryAxis) void {
        qtc.QAbstractAxis_Hide(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#isLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn IsLineVisible(self: QCategoryAxis) bool {
        return qtc.QAbstractAxis_IsLineVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn SetLineVisible(self: QCategoryAxis) void {
        qtc.QAbstractAxis_SetLineVisible(@ptrCast(self.ptr));
    }

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
    pub fn SetLinePen(self: QCategoryAxis, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QAbstractAxis_SetLinePen(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#linePen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn LinePen(self: QCategoryAxis) QPen {
        return .{ .ptr = qtc.QAbstractAxis_LinePen(@ptrCast(self.ptr)) };
    }

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
    pub fn SetLinePenColor(self: QCategoryAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_SetLinePenColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#linePenColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn LinePenColor(self: QCategoryAxis) QColor {
        return .{ .ptr = qtc.QAbstractAxis_LinePenColor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#isGridLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn IsGridLineVisible(self: QCategoryAxis) bool {
        return qtc.QAbstractAxis_IsGridLineVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn SetGridLineVisible(self: QCategoryAxis) void {
        qtc.QAbstractAxis_SetGridLineVisible(@ptrCast(self.ptr));
    }

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
    pub fn SetGridLinePen(self: QCategoryAxis, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QAbstractAxis_SetGridLinePen(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn GridLinePen(self: QCategoryAxis) QPen {
        return .{ .ptr = qtc.QAbstractAxis_GridLinePen(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#isMinorGridLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn IsMinorGridLineVisible(self: QCategoryAxis) bool {
        return qtc.QAbstractAxis_IsMinorGridLineVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn SetMinorGridLineVisible(self: QCategoryAxis) void {
        qtc.QAbstractAxis_SetMinorGridLineVisible(@ptrCast(self.ptr));
    }

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
    pub fn SetMinorGridLinePen(self: QCategoryAxis, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QAbstractAxis_SetMinorGridLinePen(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn MinorGridLinePen(self: QCategoryAxis) QPen {
        return .{ .ptr = qtc.QAbstractAxis_MinorGridLinePen(@ptrCast(self.ptr)) };
    }

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
    pub fn SetGridLineColor(self: QCategoryAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_SetGridLineColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn GridLineColor(self: QCategoryAxis) QColor {
        return .{ .ptr = qtc.QAbstractAxis_GridLineColor(@ptrCast(self.ptr)) };
    }

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
    pub fn SetMinorGridLineColor(self: QCategoryAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_SetMinorGridLineColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn MinorGridLineColor(self: QCategoryAxis) QColor {
        return .{ .ptr = qtc.QAbstractAxis_MinorGridLineColor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn LabelsVisible(self: QCategoryAxis) bool {
        return qtc.QAbstractAxis_LabelsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn SetLabelsVisible(self: QCategoryAxis) void {
        qtc.QAbstractAxis_SetLabelsVisible(@ptrCast(self.ptr));
    }

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
    pub fn SetLabelsBrush(self: QCategoryAxis, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QAbstractAxis_SetLabelsBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn LabelsBrush(self: QCategoryAxis) QBrush {
        return .{ .ptr = qtc.QAbstractAxis_LabelsBrush(@ptrCast(self.ptr)) };
    }

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
    pub fn SetLabelsFont(self: QCategoryAxis, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QAbstractAxis_SetLabelsFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn LabelsFont(self: QCategoryAxis) QFont {
        return .{ .ptr = qtc.QAbstractAxis_LabelsFont(@ptrCast(self.ptr)) };
    }

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
    pub fn SetLabelsAngle(self: QCategoryAxis, angle: i32) void {
        qtc.QAbstractAxis_SetLabelsAngle(@ptrCast(self.ptr), @bitCast(angle));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn LabelsAngle(self: QCategoryAxis) i32 {
        return qtc.QAbstractAxis_LabelsAngle(@ptrCast(self.ptr));
    }

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
    pub fn SetLabelsColor(self: QCategoryAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_SetLabelsColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn LabelsColor(self: QCategoryAxis) QColor {
        return .{ .ptr = qtc.QAbstractAxis_LabelsColor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#isTitleVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn IsTitleVisible(self: QCategoryAxis) bool {
        return qtc.QAbstractAxis_IsTitleVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn SetTitleVisible(self: QCategoryAxis) void {
        qtc.QAbstractAxis_SetTitleVisible(@ptrCast(self.ptr));
    }

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
    pub fn SetTitleBrush(self: QCategoryAxis, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QAbstractAxis_SetTitleBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn TitleBrush(self: QCategoryAxis) QBrush {
        return .{ .ptr = qtc.QAbstractAxis_TitleBrush(@ptrCast(self.ptr)) };
    }

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
    pub fn SetTitleFont(self: QCategoryAxis, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QAbstractAxis_SetTitleFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn TitleFont(self: QCategoryAxis) QFont {
        return .{ .ptr = qtc.QAbstractAxis_TitleFont(@ptrCast(self.ptr)) };
    }

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
    pub fn SetTitleText(self: QCategoryAxis, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QAbstractAxis_SetTitleText(@ptrCast(self.ptr), title_str);
    }

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
    pub fn TitleText(self: QCategoryAxis, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractAxis_TitleText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcategoryaxis.TitleText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn ShadesVisible(self: QCategoryAxis) bool {
        return qtc.QAbstractAxis_ShadesVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn SetShadesVisible(self: QCategoryAxis) void {
        qtc.QAbstractAxis_SetShadesVisible(@ptrCast(self.ptr));
    }

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
    pub fn SetShadesPen(self: QCategoryAxis, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QAbstractAxis_SetShadesPen(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn ShadesPen(self: QCategoryAxis) QPen {
        return .{ .ptr = qtc.QAbstractAxis_ShadesPen(@ptrCast(self.ptr)) };
    }

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
    pub fn SetShadesBrush(self: QCategoryAxis, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QAbstractAxis_SetShadesBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn ShadesBrush(self: QCategoryAxis) QBrush {
        return .{ .ptr = qtc.QAbstractAxis_ShadesBrush(@ptrCast(self.ptr)) };
    }

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
    pub fn SetShadesColor(self: QCategoryAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_SetShadesColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn ShadesColor(self: QCategoryAxis) QColor {
        return .{ .ptr = qtc.QAbstractAxis_ShadesColor(@ptrCast(self.ptr)) };
    }

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
    pub fn SetShadesBorderColor(self: QCategoryAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_SetShadesBorderColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn ShadesBorderColor(self: QCategoryAxis) QColor {
        return .{ .ptr = qtc.QAbstractAxis_ShadesBorderColor(@ptrCast(self.ptr)) };
    }

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
    pub fn Orientation(self: QCategoryAxis) i32 {
        return qtc.QAbstractAxis_Orientation(@ptrCast(self.ptr));
    }

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
    pub fn Alignment(self: QCategoryAxis) i32 {
        return qtc.QAbstractAxis_Alignment(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setReverse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn SetReverse(self: QCategoryAxis) void {
        qtc.QAbstractAxis_SetReverse(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#isReverse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn IsReverse(self: QCategoryAxis) bool {
        return qtc.QAbstractAxis_IsReverse(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsEditable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn SetLabelsEditable(self: QCategoryAxis) void {
        qtc.QAbstractAxis_SetLabelsEditable(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn LabelsEditable(self: QCategoryAxis) bool {
        return qtc.QAbstractAxis_LabelsEditable(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn LabelsTruncated(self: QCategoryAxis) bool {
        return qtc.QAbstractAxis_LabelsTruncated(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setTruncateLabels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn SetTruncateLabels(self: QCategoryAxis) void {
        qtc.QAbstractAxis_SetTruncateLabels(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn TruncateLabels(self: QCategoryAxis) bool {
        return qtc.QAbstractAxis_TruncateLabels(@ptrCast(self.ptr));
    }

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
    pub fn VisibleChanged(self: QCategoryAxis, visible: bool) void {
        qtc.QAbstractAxis_VisibleChanged(@ptrCast(self.ptr), visible);
    }

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
    pub fn OnVisibleChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_VisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn LinePenChanged(self: QCategoryAxis, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QAbstractAxis_LinePenChanged(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

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
    pub fn OnLinePenChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, QPen) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LinePenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn LineVisibleChanged(self: QCategoryAxis, visible: bool) void {
        qtc.QAbstractAxis_LineVisibleChanged(@ptrCast(self.ptr), visible);
    }

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
    pub fn OnLineVisibleChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LineVisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn LabelsVisibleChanged(self: QCategoryAxis, visible: bool) void {
        qtc.QAbstractAxis_LabelsVisibleChanged(@ptrCast(self.ptr), visible);
    }

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
    pub fn OnLabelsVisibleChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsVisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn LabelsBrushChanged(self: QCategoryAxis, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QAbstractAxis_LabelsBrushChanged(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

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
    pub fn OnLabelsBrushChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, QBrush) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsBrushChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn LabelsFontChanged(self: QCategoryAxis, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QFont;
        qtc.QAbstractAxis_LabelsFontChanged(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

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
    pub fn OnLabelsFontChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, QFont) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsFontChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn LabelsAngleChanged(self: QCategoryAxis, angle: i32) void {
        qtc.QAbstractAxis_LabelsAngleChanged(@ptrCast(self.ptr), @bitCast(angle));
    }

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
    pub fn OnLabelsAngleChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, i32) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsAngleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn GridLinePenChanged(self: QCategoryAxis, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QAbstractAxis_GridLinePenChanged(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

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
    pub fn OnGridLinePenChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, QPen) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_GridLinePenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn GridVisibleChanged(self: QCategoryAxis, visible: bool) void {
        qtc.QAbstractAxis_GridVisibleChanged(@ptrCast(self.ptr), visible);
    }

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
    pub fn OnGridVisibleChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_GridVisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn MinorGridVisibleChanged(self: QCategoryAxis, visible: bool) void {
        qtc.QAbstractAxis_MinorGridVisibleChanged(@ptrCast(self.ptr), visible);
    }

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
    pub fn OnMinorGridVisibleChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_MinorGridVisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn MinorGridLinePenChanged(self: QCategoryAxis, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QAbstractAxis_MinorGridLinePenChanged(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

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
    pub fn OnMinorGridLinePenChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, QPen) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_MinorGridLinePenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn GridLineColorChanged(self: QCategoryAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_GridLineColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

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
    pub fn OnGridLineColorChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, QColor) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_GridLineColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn MinorGridLineColorChanged(self: QCategoryAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_MinorGridLineColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

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
    pub fn OnMinorGridLineColorChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, QColor) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_MinorGridLineColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ColorChanged(self: QCategoryAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_ColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

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
    pub fn OnColorChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, QColor) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn LabelsColorChanged(self: QCategoryAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_LabelsColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

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
    pub fn OnLabelsColorChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, QColor) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn TitleTextChanged(self: QCategoryAxis, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QAbstractAxis_TitleTextChanged(@ptrCast(self.ptr), title_str);
    }

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
    pub fn OnTitleTextChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, [*:0]const u8) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_TitleTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn TitleBrushChanged(self: QCategoryAxis, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QAbstractAxis_TitleBrushChanged(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

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
    pub fn OnTitleBrushChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, QBrush) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_TitleBrushChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn TitleVisibleChanged(self: QCategoryAxis, visible: bool) void {
        qtc.QAbstractAxis_TitleVisibleChanged(@ptrCast(self.ptr), visible);
    }

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
    pub fn OnTitleVisibleChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_TitleVisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn TitleFontChanged(self: QCategoryAxis, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QAbstractAxis_TitleFontChanged(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

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
    pub fn OnTitleFontChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, QFont) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_TitleFontChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ShadesVisibleChanged(self: QCategoryAxis, visible: bool) void {
        qtc.QAbstractAxis_ShadesVisibleChanged(@ptrCast(self.ptr), visible);
    }

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
    pub fn OnShadesVisibleChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ShadesVisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ShadesColorChanged(self: QCategoryAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_ShadesColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

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
    pub fn OnShadesColorChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, QColor) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ShadesColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ShadesBorderColorChanged(self: QCategoryAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_ShadesBorderColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

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
    pub fn OnShadesBorderColorChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, QColor) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ShadesBorderColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ShadesPenChanged(self: QCategoryAxis, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QAbstractAxis_ShadesPenChanged(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

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
    pub fn OnShadesPenChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, QPen) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ShadesPenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ShadesBrushChanged(self: QCategoryAxis, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QAbstractAxis_ShadesBrushChanged(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

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
    pub fn OnShadesBrushChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, QBrush) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ShadesBrushChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ReverseChanged(self: QCategoryAxis, reverse: bool) void {
        qtc.QAbstractAxis_ReverseChanged(@ptrCast(self.ptr), reverse);
    }

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
    pub fn OnReverseChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ReverseChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn LabelsEditableChanged(self: QCategoryAxis, editable: bool) void {
        qtc.QAbstractAxis_LabelsEditableChanged(@ptrCast(self.ptr), editable);
    }

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
    pub fn OnLabelsEditableChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsEditableChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncatedChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` labelsTruncated: bool `
    ///
    pub fn LabelsTruncatedChanged(self: QCategoryAxis, labelsTruncated: bool) void {
        qtc.QAbstractAxis_LabelsTruncatedChanged(@ptrCast(self.ptr), labelsTruncated);
    }

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
    pub fn OnLabelsTruncatedChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsTruncatedChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabelsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` truncateLabels: bool `
    ///
    pub fn TruncateLabelsChanged(self: QCategoryAxis, truncateLabels: bool) void {
        qtc.QAbstractAxis_TruncateLabelsChanged(@ptrCast(self.ptr), truncateLabels);
    }

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
    pub fn OnTruncateLabelsChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_TruncateLabelsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SetVisible1(self: QCategoryAxis, visible: bool) void {
        qtc.QAbstractAxis_SetVisible1(@ptrCast(self.ptr), visible);
    }

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
    pub fn SetLineVisible1(self: QCategoryAxis, visible: bool) void {
        qtc.QAbstractAxis_SetLineVisible1(@ptrCast(self.ptr), visible);
    }

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
    pub fn SetGridLineVisible1(self: QCategoryAxis, visible: bool) void {
        qtc.QAbstractAxis_SetGridLineVisible1(@ptrCast(self.ptr), visible);
    }

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
    pub fn SetMinorGridLineVisible1(self: QCategoryAxis, visible: bool) void {
        qtc.QAbstractAxis_SetMinorGridLineVisible1(@ptrCast(self.ptr), visible);
    }

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
    pub fn SetLabelsVisible1(self: QCategoryAxis, visible: bool) void {
        qtc.QAbstractAxis_SetLabelsVisible1(@ptrCast(self.ptr), visible);
    }

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
    pub fn SetTitleVisible1(self: QCategoryAxis, visible: bool) void {
        qtc.QAbstractAxis_SetTitleVisible1(@ptrCast(self.ptr), visible);
    }

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
    pub fn SetShadesVisible1(self: QCategoryAxis, visible: bool) void {
        qtc.QAbstractAxis_SetShadesVisible1(@ptrCast(self.ptr), visible);
    }

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
    pub fn SetReverse1(self: QCategoryAxis, reverse: bool) void {
        qtc.QAbstractAxis_SetReverse1(@ptrCast(self.ptr), reverse);
    }

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
    pub fn SetLabelsEditable1(self: QCategoryAxis, editable: bool) void {
        qtc.QAbstractAxis_SetLabelsEditable1(@ptrCast(self.ptr), editable);
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setTruncateLabels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` truncateLabels: bool `
    ///
    pub fn SetTruncateLabels1(self: QCategoryAxis, truncateLabels: bool) void {
        qtc.QAbstractAxis_SetTruncateLabels1(@ptrCast(self.ptr), truncateLabels);
    }

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
    pub fn ObjectName(self: QCategoryAxis, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcategoryaxis.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetObjectName(self: QCategoryAxis, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn IsWidgetType(self: QCategoryAxis) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn IsWindowType(self: QCategoryAxis) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn IsQuickItemType(self: QCategoryAxis) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn SignalsBlocked(self: QCategoryAxis) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

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
    pub fn BlockSignals(self: QCategoryAxis, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn Thread(self: QCategoryAxis) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QCategoryAxis, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

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
    pub fn StartTimer(self: QCategoryAxis, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

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
    pub fn StartTimer2(self: QCategoryAxis, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

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
    pub fn KillTimer(self: QCategoryAxis, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn KillTimer2(self: QCategoryAxis, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn Children(self: QCategoryAxis, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qcategoryaxis.Children: Memory allocation failed");
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
    /// ` self: QCategoryAxis `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QCategoryAxis, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

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
    pub fn InstallEventFilter(self: QCategoryAxis, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

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
    pub fn RemoveEventFilter(self: QCategoryAxis, obj: anytype) void {
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
    /// ` self: QCategoryAxis `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QCategoryAxis, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QCategoryAxis `
    ///
    pub fn Disconnect3(self: QCategoryAxis) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

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
    pub fn Disconnect4(self: QCategoryAxis, receiver: anytype) bool {
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
    /// ` self: QCategoryAxis `
    ///
    pub fn DumpObjectTree(self: QCategoryAxis) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn DumpObjectInfo(self: QCategoryAxis) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

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
    pub fn SetProperty(self: QCategoryAxis, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QCategoryAxis `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QCategoryAxis, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

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
    pub fn DynamicPropertyNames(self: QCategoryAxis, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qcategoryaxis.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qcategoryaxis.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QCategoryAxis `
    ///
    pub fn BindingStorage(self: QCategoryAxis) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn BindingStorage2(self: QCategoryAxis) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn Destroyed(self: QCategoryAxis) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

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
    pub fn OnDestroyed(self: QCategoryAxis, callback: *const fn (QCategoryAxis) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn Parent(self: QCategoryAxis) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

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
    pub fn Inherits(self: QCategoryAxis, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn DeleteLater(self: QCategoryAxis) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

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
    pub fn StartTimer22(self: QCategoryAxis, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

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
    pub fn StartTimer23(self: QCategoryAxis, time: i64, timerType: i32) i32 {
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
    /// ` self: QCategoryAxis `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QCategoryAxis, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QCategoryAxis `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QCategoryAxis, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn Disconnect22(self: QCategoryAxis, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QCategoryAxis `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QCategoryAxis, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QCategoryAxis `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QCategoryAxis, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QCategoryAxis `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QCategoryAxis, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnDestroyed1(self: QCategoryAxis, callback: *const fn (QCategoryAxis, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn Event(self: QCategoryAxis, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QCategoryAxis_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QCategoryAxis `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QCategoryAxis, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QCategoryAxis_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEvent(self: QCategoryAxis, callback: *const fn (QCategoryAxis, QEvent) callconv(.c) bool) void {
        qtc.QCategoryAxis_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QCategoryAxis, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QCategoryAxis_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QCategoryAxis `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QCategoryAxis, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QCategoryAxis_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEventFilter(self: QCategoryAxis, callback: *const fn (QCategoryAxis, QObject, QEvent) callconv(.c) bool) void {
        qtc.QCategoryAxis_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QCategoryAxis, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QCategoryAxis_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QCategoryAxis `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QCategoryAxis, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QCategoryAxis_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnTimerEvent(self: QCategoryAxis, callback: *const fn (QCategoryAxis, QTimerEvent) callconv(.c) void) void {
        qtc.QCategoryAxis_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QCategoryAxis, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QCategoryAxis_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QCategoryAxis `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QCategoryAxis, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QCategoryAxis_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnChildEvent(self: QCategoryAxis, callback: *const fn (QCategoryAxis, QChildEvent) callconv(.c) void) void {
        qtc.QCategoryAxis_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QCategoryAxis, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QCategoryAxis_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QCategoryAxis `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QCategoryAxis, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QCategoryAxis_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnCustomEvent(self: QCategoryAxis, callback: *const fn (QCategoryAxis, QEvent) callconv(.c) void) void {
        qtc.QCategoryAxis_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ConnectNotify(self: QCategoryAxis, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QCategoryAxis_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCategoryAxis `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QCategoryAxis, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QCategoryAxis_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnConnectNotify(self: QCategoryAxis, callback: *const fn (QCategoryAxis, QMetaMethod) callconv(.c) void) void {
        qtc.QCategoryAxis_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DisconnectNotify(self: QCategoryAxis, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QCategoryAxis_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCategoryAxis `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QCategoryAxis, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QCategoryAxis_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnDisconnectNotify(self: QCategoryAxis, callback: *const fn (QCategoryAxis, QMetaMethod) callconv(.c) void) void {
        qtc.QCategoryAxis_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Sender(self: QCategoryAxis) QObject {
        return .{ .ptr = qtc.QCategoryAxis_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QCategoryAxis `
    ///
    pub fn SuperSender(self: QCategoryAxis) QObject {
        return .{ .ptr = qtc.QCategoryAxis_SuperSender(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSender(self: QCategoryAxis, callback: *const fn () callconv(.c) QObject) void {
        qtc.QCategoryAxis_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SenderSignalIndex(self: QCategoryAxis) i32 {
        return qtc.QCategoryAxis_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QCategoryAxis `
    ///
    pub fn SuperSenderSignalIndex(self: QCategoryAxis) i32 {
        return qtc.QCategoryAxis_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

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
    pub fn OnSenderSignalIndex(self: QCategoryAxis, callback: *const fn () callconv(.c) i32) void {
        qtc.QCategoryAxis_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Receivers(self: QCategoryAxis, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QCategoryAxis_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QCategoryAxis `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QCategoryAxis, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QCategoryAxis_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn OnReceivers(self: QCategoryAxis, callback: *const fn (QCategoryAxis, [*:0]const u8) callconv(.c) i32) void {
        qtc.QCategoryAxis_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IsSignalConnected(self: QCategoryAxis, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QCategoryAxis_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QCategoryAxis `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QCategoryAxis, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QCategoryAxis_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnIsSignalConnected(self: QCategoryAxis, callback: *const fn (QCategoryAxis, QMetaMethod) callconv(.c) bool) void {
        qtc.QCategoryAxis_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn OnObjectNameChanged(self: QCategoryAxis, callback: *const fn (QCategoryAxis, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcategoryaxis-qtcharts.html#dtor.QCategoryAxis)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QCategoryAxis `
    ///
    pub fn Delete(self: QCategoryAxis) void {
        qtc.QCategoryAxis_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcategoryaxis-qtcharts.html#public-types)
pub const enums = struct {
    pub const AxisLabelsPosition = enum(i32) {
        pub const AxisLabelsPositionCenter: i32 = 0;
        pub const AxisLabelsPositionOnValue: i32 = 1;
    };
};
