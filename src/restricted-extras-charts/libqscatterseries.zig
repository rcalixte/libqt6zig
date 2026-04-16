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
const qscatterseries_enums = enums;
const qxyseries_enums = @import("libqxyseries.zig").enums;
const std = @import("std");
const Map_i32_Map_i32_QVariant = std.AutoHashMapUnmanaged(i32, Map_i32_QVariant);
const Map_i32_QVariant = std.AutoHashMapUnmanaged(i32, QVariant);
const Struct_f64_f64 = extern struct { first: f64, second: f64 };

/// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html)
pub const QScatterSeries = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QScatterSeries,

    pub const _is_QScatterSeries = {};
    pub const _is_QXYSeries = {};
    pub const _is_QAbstractSeries = {};
    pub const _is_QObject = {};

    /// New constructs a new QScatterSeries object.
    ///
    pub fn New() QScatterSeries {
        return .{ .ptr = qtc.QScatterSeries_new() };
    }

    /// New2 constructs a new QScatterSeries object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) QScatterSeries {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QScatterSeries_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    pub fn MetaObject(self: QScatterSeries) QMetaObject {
        return .{ .ptr = qtc.QScatterSeries_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QScatterSeries, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QScatterSeries_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QScatterSeries `
    ///
    pub fn SuperMetaObject(self: QScatterSeries) QMetaObject {
        return .{ .ptr = qtc.QScatterSeries_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QScatterSeries, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QScatterSeries_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` callback: *const fn (self: QScatterSeries, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QScatterSeries, callback: *const fn (QScatterSeries, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QScatterSeries_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QScatterSeries, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QScatterSeries_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QScatterSeries, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QScatterSeries_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` callback: *const fn (self: QScatterSeries, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QScatterSeries, callback: *const fn (QScatterSeries, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QScatterSeries_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QScatterSeries, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QScatterSeries_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qscatterseries.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ## Returns:
    ///
    /// ` qabstractseries_enums.SeriesType `
    ///
    pub fn Type(self: QScatterSeries) i32 {
        return qtc.QScatterSeries_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#type)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnType(self: QScatterSeries, callback: *const fn () callconv(.c) i32) void {
        qtc.QScatterSeries_OnType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperType` instead
    ///
    pub const QBaseType = SuperType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#type)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ## Returns:
    ///
    /// ` qabstractseries_enums.SeriesType `
    ///
    pub fn SuperType(self: QScatterSeries) i32 {
        return qtc.QScatterSeries_SuperType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#setPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` pen: QPen `
    ///
    pub fn SetPen(self: QScatterSeries, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QScatterSeries_SetPen(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#setPen)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` callback: *const fn (self: QScatterSeries, pen: QPen) callconv(.c) void `
    ///
    pub fn OnSetPen(self: QScatterSeries, callback: *const fn (QScatterSeries, QPen) callconv(.c) void) void {
        qtc.QScatterSeries_OnSetPen(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetPen` instead
    ///
    pub const QBaseSetPen = SuperSetPen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#setPen)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` pen: QPen `
    ///
    pub fn SuperSetPen(self: QScatterSeries, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QScatterSeries_SuperSetPen(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#setBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetBrush(self: QScatterSeries, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QScatterSeries_SetBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#setBrush)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` callback: *const fn (self: QScatterSeries, brush: QBrush) callconv(.c) void `
    ///
    pub fn OnSetBrush(self: QScatterSeries, callback: *const fn (QScatterSeries, QBrush) callconv(.c) void) void {
        qtc.QScatterSeries_OnSetBrush(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetBrush` instead
    ///
    pub const QBaseSetBrush = SuperSetBrush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#setBrush)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SuperSetBrush(self: QScatterSeries, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QScatterSeries_SuperSetBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#brush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    pub fn Brush(self: QScatterSeries) QBrush {
        return .{ .ptr = qtc.QScatterSeries_Brush(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#setColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` color: QColor `
    ///
    pub fn SetColor(self: QScatterSeries, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QScatterSeries_SetColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#setColor)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` callback: *const fn (self: QScatterSeries, color: QColor) callconv(.c) void `
    ///
    pub fn OnSetColor(self: QScatterSeries, callback: *const fn (QScatterSeries, QColor) callconv(.c) void) void {
        qtc.QScatterSeries_OnSetColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetColor` instead
    ///
    pub const QBaseSetColor = SuperSetColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#setColor)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` color: QColor `
    ///
    pub fn SuperSetColor(self: QScatterSeries, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QScatterSeries_SuperSetColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#color)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    pub fn Color(self: QScatterSeries) QColor {
        return .{ .ptr = qtc.QScatterSeries_Color(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#color)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` callback: *const fn () callconv(.c) QColor `
    ///
    pub fn OnColor(self: QScatterSeries, callback: *const fn () callconv(.c) QColor) void {
        qtc.QScatterSeries_OnColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperColor` instead
    ///
    pub const QBaseColor = SuperColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#color)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    pub fn SuperColor(self: QScatterSeries) QColor {
        return .{ .ptr = qtc.QScatterSeries_SuperColor(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#setBorderColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` color: QColor `
    ///
    pub fn SetBorderColor(self: QScatterSeries, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QScatterSeries_SetBorderColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#borderColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    pub fn BorderColor(self: QScatterSeries) QColor {
        return .{ .ptr = qtc.QScatterSeries_BorderColor(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#markerShape)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ## Returns:
    ///
    /// ` qscatterseries_enums.MarkerShape `
    ///
    pub fn MarkerShape(self: QScatterSeries) i32 {
        return qtc.QScatterSeries_MarkerShape(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#setMarkerShape)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` shape: qscatterseries_enums.MarkerShape `
    ///
    pub fn SetMarkerShape(self: QScatterSeries, shape: i32) void {
        qtc.QScatterSeries_SetMarkerShape(@ptrCast(self.ptr), @bitCast(shape));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#markerSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    pub fn MarkerSize(self: QScatterSeries) f64 {
        return qtc.QScatterSeries_MarkerSize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#setMarkerSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` size: f64 `
    ///
    pub fn SetMarkerSize(self: QScatterSeries, size: f64) void {
        qtc.QScatterSeries_SetMarkerSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#colorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` color: QColor `
    ///
    pub fn ColorChanged(self: QScatterSeries, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QScatterSeries_ColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#colorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` callback: *const fn (self: QScatterSeries, color: QColor) callconv(.c) void `
    ///
    pub fn OnColorChanged(self: QScatterSeries, callback: *const fn (QScatterSeries, QColor) callconv(.c) void) void {
        qtc.QScatterSeries_Connect_ColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#borderColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` color: QColor `
    ///
    pub fn BorderColorChanged(self: QScatterSeries, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QScatterSeries_BorderColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#borderColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` callback: *const fn (self: QScatterSeries, color: QColor) callconv(.c) void `
    ///
    pub fn OnBorderColorChanged(self: QScatterSeries, callback: *const fn (QScatterSeries, QColor) callconv(.c) void) void {
        qtc.QScatterSeries_Connect_BorderColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#markerShapeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` shape: qscatterseries_enums.MarkerShape `
    ///
    pub fn MarkerShapeChanged(self: QScatterSeries, shape: i32) void {
        qtc.QScatterSeries_MarkerShapeChanged(@ptrCast(self.ptr), @bitCast(shape));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#markerShapeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` callback: *const fn (self: QScatterSeries, shape: qscatterseries_enums.MarkerShape) callconv(.c) void `
    ///
    pub fn OnMarkerShapeChanged(self: QScatterSeries, callback: *const fn (QScatterSeries, i32) callconv(.c) void) void {
        qtc.QScatterSeries_Connect_MarkerShapeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#markerSizeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` size: f64 `
    ///
    pub fn MarkerSizeChanged(self: QScatterSeries, size: f64) void {
        qtc.QScatterSeries_MarkerSizeChanged(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#markerSizeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` callback: *const fn (self: QScatterSeries, size: f64) callconv(.c) void `
    ///
    pub fn OnMarkerSizeChanged(self: QScatterSeries, callback: *const fn (QScatterSeries, f64) callconv(.c) void) void {
        qtc.QScatterSeries_Connect_MarkerSizeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qscatterseries.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qscatterseries.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn Append(self: QScatterSeries, x: f64, y: f64) void {
        qtc.QXYSeries_Append(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` point: QPointF `
    ///
    pub fn Append2(self: QScatterSeries, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QPointF;
        qtc.QXYSeries_Append2(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` points: []QPointF `
    ///
    pub fn Append3(self: QScatterSeries, points: []QPointF) void {
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
    /// ` self: QScatterSeries `
    ///
    /// ` oldX: f64 `
    ///
    /// ` oldY: f64 `
    ///
    /// ` newX: f64 `
    ///
    /// ` newY: f64 `
    ///
    pub fn Replace(self: QScatterSeries, oldX: f64, oldY: f64, newX: f64, newY: f64) void {
        qtc.QXYSeries_Replace(@ptrCast(self.ptr), @bitCast(oldX), @bitCast(oldY), @bitCast(newX), @bitCast(newY));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#replace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` oldPoint: QPointF `
    ///
    /// ` newPoint: QPointF `
    ///
    pub fn Replace2(self: QScatterSeries, oldPoint: anytype, newPoint: anytype) void {
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
    /// ` self: QScatterSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` newX: f64 `
    ///
    /// ` newY: f64 `
    ///
    pub fn Replace3(self: QScatterSeries, index: i32, newX: f64, newY: f64) void {
        qtc.QXYSeries_Replace3(@ptrCast(self.ptr), @bitCast(index), @bitCast(newX), @bitCast(newY));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#replace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` newPoint: QPointF `
    ///
    pub fn Replace4(self: QScatterSeries, index: i32, newPoint: anytype) void {
        comptime _ = @TypeOf(newPoint)._is_QPointF;
        qtc.QXYSeries_Replace4(@ptrCast(self.ptr), @bitCast(index), @ptrCast(newPoint.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` x: f64 `
    ///
    /// ` y: f64 `
    ///
    pub fn Remove(self: QScatterSeries, x: f64, y: f64) void {
        qtc.QXYSeries_Remove(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` point: QPointF `
    ///
    pub fn Remove2(self: QScatterSeries, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QPointF;
        qtc.QXYSeries_Remove2(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` index: i32 `
    ///
    pub fn Remove3(self: QScatterSeries, index: i32) void {
        qtc.QXYSeries_Remove3(@ptrCast(self.ptr), @bitCast(index));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#removePoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn RemovePoints(self: QScatterSeries, index: i32, count: i32) void {
        qtc.QXYSeries_RemovePoints(@ptrCast(self.ptr), @bitCast(index), @bitCast(count));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` point: QPointF `
    ///
    pub fn Insert(self: QScatterSeries, index: i32, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QPointF;
        qtc.QXYSeries_Insert(@ptrCast(self.ptr), @bitCast(index), @ptrCast(point.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    pub fn Clear(self: QScatterSeries) void {
        qtc.QXYSeries_Clear(@ptrCast(self.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    pub fn Count(self: QScatterSeries) i32 {
        return qtc.QXYSeries_Count(@ptrCast(self.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#points)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Points(self: QScatterSeries, allocator: std.mem.Allocator) []QPointF {
        const _arr: qtc.libqt_list = qtc.QXYSeries_Points(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QPointF, _arr.len) catch @panic("qscatterseries.Points: Memory allocation failed");
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
    /// ` self: QScatterSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PointsVector(self: QScatterSeries, allocator: std.mem.Allocator) []QPointF {
        const _arr: qtc.libqt_list = qtc.QXYSeries_PointsVector(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QPointF, _arr.len) catch @panic("qscatterseries.PointsVector: Memory allocation failed");
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
    /// ` self: QScatterSeries `
    ///
    /// ` index: i32 `
    ///
    pub fn At(self: QScatterSeries, index: i32) QPointF {
        return .{ .ptr = qtc.QXYSeries_At(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` point: QPointF `
    ///
    pub fn OperatorShiftLeft(self: QScatterSeries, point: anytype) QXYSeries {
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QXYSeries_OperatorShiftLeft(@ptrCast(self.ptr), @ptrCast(point.ptr)) };
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` points: []QPointF `
    ///
    pub fn OperatorShiftLeft2(self: QScatterSeries, points: []QPointF) QXYSeries {
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
    /// ` self: QScatterSeries `
    ///
    pub fn Pen(self: QScatterSeries) QPen {
        return .{ .ptr = qtc.QXYSeries_Pen(@ptrCast(self.ptr)) };
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setSelectedColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` color: QColor `
    ///
    pub fn SetSelectedColor(self: QScatterSeries, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QXYSeries_SetSelectedColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#selectedColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    pub fn SelectedColor(self: QScatterSeries) QColor {
        return .{ .ptr = qtc.QXYSeries_SelectedColor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPointsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    pub fn SetPointsVisible(self: QScatterSeries) void {
        qtc.QXYSeries_SetPointsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    pub fn PointsVisible(self: QScatterSeries) bool {
        return qtc.QXYSeries_PointsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` format: []const u8 `
    ///
    pub fn SetPointLabelsFormat(self: QScatterSeries, format: []const u8) void {
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
    /// ` self: QScatterSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PointLabelsFormat(self: QScatterSeries, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QXYSeries_PointLabelsFormat(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qscatterseries.PointLabelsFormat: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    pub fn SetPointLabelsVisible(self: QScatterSeries) void {
        qtc.QXYSeries_SetPointLabelsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    pub fn PointLabelsVisible(self: QScatterSeries) bool {
        return qtc.QXYSeries_PointLabelsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` font: QFont `
    ///
    pub fn SetPointLabelsFont(self: QScatterSeries, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QXYSeries_SetPointLabelsFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    pub fn PointLabelsFont(self: QScatterSeries) QFont {
        return .{ .ptr = qtc.QXYSeries_PointLabelsFont(@ptrCast(self.ptr)) };
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` color: QColor `
    ///
    pub fn SetPointLabelsColor(self: QScatterSeries, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QXYSeries_SetPointLabelsColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    pub fn PointLabelsColor(self: QScatterSeries) QColor {
        return .{ .ptr = qtc.QXYSeries_PointLabelsColor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsClipping)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    pub fn SetPointLabelsClipping(self: QScatterSeries) void {
        qtc.QXYSeries_SetPointLabelsClipping(@ptrCast(self.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsClipping)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    pub fn PointLabelsClipping(self: QScatterSeries) bool {
        return qtc.QXYSeries_PointLabelsClipping(@ptrCast(self.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#replace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` points: []QPointF `
    ///
    pub fn Replace5(self: QScatterSeries, points: []QPointF) void {
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
    /// ` self: QScatterSeries `
    ///
    /// ` index: i32 `
    ///
    pub fn IsPointSelected(self: QScatterSeries, index: i32) bool {
        return qtc.QXYSeries_IsPointSelected(@ptrCast(self.ptr), @bitCast(index));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#selectPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` index: i32 `
    ///
    pub fn SelectPoint(self: QScatterSeries, index: i32) void {
        qtc.QXYSeries_SelectPoint(@ptrCast(self.ptr), @bitCast(index));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#deselectPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` index: i32 `
    ///
    pub fn DeselectPoint(self: QScatterSeries, index: i32) void {
        qtc.QXYSeries_DeselectPoint(@ptrCast(self.ptr), @bitCast(index));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPointSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` selected: bool `
    ///
    pub fn SetPointSelected(self: QScatterSeries, index: i32, selected: bool) void {
        qtc.QXYSeries_SetPointSelected(@ptrCast(self.ptr), @bitCast(index), selected);
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#selectAllPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    pub fn SelectAllPoints(self: QScatterSeries) void {
        qtc.QXYSeries_SelectAllPoints(@ptrCast(self.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#deselectAllPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    pub fn DeselectAllPoints(self: QScatterSeries) void {
        qtc.QXYSeries_DeselectAllPoints(@ptrCast(self.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#selectPoints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` indexes: []i32 `
    ///
    pub fn SelectPoints(self: QScatterSeries, indexes: []i32) void {
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
    /// ` self: QScatterSeries `
    ///
    /// ` indexes: []i32 `
    ///
    pub fn DeselectPoints(self: QScatterSeries, indexes: []i32) void {
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
    /// ` self: QScatterSeries `
    ///
    /// ` indexes: []i32 `
    ///
    pub fn ToggleSelection(self: QScatterSeries, indexes: []i32) void {
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
    /// ` self: QScatterSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SelectedPoints(self: QScatterSeries, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QXYSeries_SelectedPoints(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("qscatterseries.SelectedPoints: Memory allocation failed");
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
    /// ` self: QScatterSeries `
    ///
    /// ` lightMarker: QImage `
    ///
    pub fn SetLightMarker(self: QScatterSeries, lightMarker: anytype) void {
        comptime _ = @TypeOf(lightMarker)._is_QImage;
        qtc.QXYSeries_SetLightMarker(@ptrCast(self.ptr), @ptrCast(lightMarker.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#lightMarker)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    pub fn LightMarker(self: QScatterSeries) QImage {
        return .{ .ptr = qtc.QXYSeries_LightMarker(@ptrCast(self.ptr)) };
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setSelectedLightMarker)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` selectedLightMarker: QImage `
    ///
    pub fn SetSelectedLightMarker(self: QScatterSeries, selectedLightMarker: anytype) void {
        comptime _ = @TypeOf(selectedLightMarker)._is_QImage;
        qtc.QXYSeries_SetSelectedLightMarker(@ptrCast(self.ptr), @ptrCast(selectedLightMarker.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#selectedLightMarker)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    pub fn SelectedLightMarker(self: QScatterSeries) QImage {
        return .{ .ptr = qtc.QXYSeries_SelectedLightMarker(@ptrCast(self.ptr)) };
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setBestFitLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    pub fn SetBestFitLineVisible(self: QScatterSeries) void {
        qtc.QXYSeries_SetBestFitLineVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    pub fn BestFitLineVisible(self: QScatterSeries) bool {
        return qtc.QXYSeries_BestFitLineVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineEquation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` ok: *bool `
    ///
    pub fn BestFitLineEquation(self: QScatterSeries, ok: *bool) Struct_f64_f64 {
        const _pair = qtc.QXYSeries_BestFitLineEquation(@ptrCast(self.ptr), @ptrCast(ok));
        return @bitCast(_pair);
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setBestFitLinePen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` pen: QPen `
    ///
    pub fn SetBestFitLinePen(self: QScatterSeries, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QXYSeries_SetBestFitLinePen(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#bestFitLinePen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    pub fn BestFitLinePen(self: QScatterSeries) QPen {
        return .{ .ptr = qtc.QXYSeries_BestFitLinePen(@ptrCast(self.ptr)) };
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setBestFitLineColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` color: QColor `
    ///
    pub fn SetBestFitLineColor(self: QScatterSeries, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QXYSeries_SetBestFitLineColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    pub fn BestFitLineColor(self: QScatterSeries) QColor {
        return .{ .ptr = qtc.QXYSeries_BestFitLineColor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#clearPointConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` index: i32 `
    ///
    pub fn ClearPointConfiguration(self: QScatterSeries, index: i32) void {
        qtc.QXYSeries_ClearPointConfiguration(@ptrCast(self.ptr), @bitCast(index));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#clearPointConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` key: qxyseries_enums.PointConfiguration `
    ///
    pub fn ClearPointConfiguration2(self: QScatterSeries, index: i32, key: i32) void {
        qtc.QXYSeries_ClearPointConfiguration2(@ptrCast(self.ptr), @bitCast(index), @bitCast(key));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#clearPointsConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    pub fn ClearPointsConfiguration(self: QScatterSeries) void {
        qtc.QXYSeries_ClearPointsConfiguration(@ptrCast(self.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#clearPointsConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` key: qxyseries_enums.PointConfiguration `
    ///
    pub fn ClearPointsConfiguration2(self: QScatterSeries, key: i32) void {
        qtc.QXYSeries_ClearPointsConfiguration2(@ptrCast(self.ptr), @bitCast(key));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPointConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: i32 `
    ///
    /// ` configuration: Map_i32_QVariant (key: qxyseries_enums.PointConfiguration) `
    ///
    pub fn SetPointConfiguration(self: QScatterSeries, allocator: std.mem.Allocator, index: i32, configuration: Map_i32_QVariant) void {
        const configuration_count = configuration.count();
        const configuration_keys = allocator.alloc(i32, configuration_count) catch @panic("qscatterseries.SetPointConfiguration: Memory allocation failed");
        defer allocator.free(configuration_keys);
        const configuration_values = allocator.alloc(QtC.QVariant, configuration_count) catch @panic("qscatterseries.SetPointConfiguration: Memory allocation failed");
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
    /// ` self: QScatterSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` key: qxyseries_enums.PointConfiguration `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetPointConfiguration2(self: QScatterSeries, index: i32, key: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QXYSeries_SetPointConfiguration2(@ptrCast(self.ptr), @bitCast(index), @bitCast(key), @ptrCast(value.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPointsConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` pointsConfiguration: Map_i32_Map_i32_QVariant `
    ///
    pub fn SetPointsConfiguration(self: QScatterSeries, allocator: std.mem.Allocator, pointsConfiguration: Map_i32_Map_i32_QVariant) void {
        const pointsConfiguration_count = pointsConfiguration.count();
        const pointsConfiguration_keys = allocator.alloc(i32, pointsConfiguration_count) catch @panic("qscatterseries.SetPointsConfiguration: Memory allocation failed");
        defer allocator.free(pointsConfiguration_keys);
        const pointsConfiguration_values = allocator.alloc(Map_i32_QVariant, pointsConfiguration_count) catch @panic("qscatterseries.SetPointsConfiguration: Memory allocation failed");
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
    /// ` self: QScatterSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: i32 `
    ///
    /// ## Returns:
    ///
    /// ` Map_i32_QVariant (key: qxyseries_enums.PointConfiguration) `
    ///
    pub fn PointConfiguration(self: QScatterSeries, allocator: std.mem.Allocator, index: i32) Map_i32_QVariant {
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
            _ret.put(allocator, _key, .{ .ptr = @ptrCast(_value) }) catch @panic("qscatterseries.PointConfiguration: Memory allocation failed");
        }
        return _ret;
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointsConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PointsConfiguration(self: QScatterSeries, allocator: std.mem.Allocator) Map_i32_Map_i32_QVariant {
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
            _ret.put(allocator, _key, _value) catch @panic("qscatterseries.PointsConfiguration: Memory allocation failed");
        }
        return _ret;
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#sizeBy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` sourceData: []f64 `
    ///
    /// ` minSize: f64 `
    ///
    /// ` maxSize: f64 `
    ///
    pub fn SizeBy(self: QScatterSeries, sourceData: []f64, minSize: f64, maxSize: f64) void {
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
    /// ` self: QScatterSeries `
    ///
    /// ` sourceData: []f64 `
    ///
    pub fn ColorBy(self: QScatterSeries, sourceData: []f64) void {
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
    /// ` self: QScatterSeries `
    ///
    /// ` point: QPointF `
    ///
    pub fn Clicked(self: QScatterSeries, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QPointF;
        qtc.QXYSeries_Clicked(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#clicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` callback: *const fn (self: QScatterSeries, point: QPointF) callconv(.c) void `
    ///
    pub fn OnClicked(self: QScatterSeries, callback: *const fn (QScatterSeries, QPointF) callconv(.c) void) void {
        qtc.QXYSeries_Connect_Clicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#hovered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` point: QPointF `
    ///
    /// ` state: bool `
    ///
    pub fn Hovered(self: QScatterSeries, point: anytype, state: bool) void {
        comptime _ = @TypeOf(point)._is_QPointF;
        qtc.QXYSeries_Hovered(@ptrCast(self.ptr), @ptrCast(point.ptr), state);
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#hovered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` callback: *const fn (self: QScatterSeries, point: QPointF, state: bool) callconv(.c) void `
    ///
    pub fn OnHovered(self: QScatterSeries, callback: *const fn (QScatterSeries, QPointF, bool) callconv(.c) void) void {
        qtc.QXYSeries_Connect_Hovered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` point: QPointF `
    ///
    pub fn Pressed(self: QScatterSeries, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QPointF;
        qtc.QXYSeries_Pressed(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pressed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` callback: *const fn (self: QScatterSeries, point: QPointF) callconv(.c) void `
    ///
    pub fn OnPressed(self: QScatterSeries, callback: *const fn (QScatterSeries, QPointF) callconv(.c) void) void {
        qtc.QXYSeries_Connect_Pressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#released)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` point: QPointF `
    ///
    pub fn Released(self: QScatterSeries, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QPointF;
        qtc.QXYSeries_Released(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#released)
    ///
    /// ## Parameters:
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` callback: *const fn (self: QScatterSeries, point: QPointF) callconv(.c) void `
    ///
    pub fn OnReleased(self: QScatterSeries, callback: *const fn (QScatterSeries, QPointF) callconv(.c) void) void {
        qtc.QXYSeries_Connect_Released(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#doubleClicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` point: QPointF `
    ///
    pub fn DoubleClicked(self: QScatterSeries, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QPointF;
        qtc.QXYSeries_DoubleClicked(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#doubleClicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` callback: *const fn (self: QScatterSeries, point: QPointF) callconv(.c) void `
    ///
    pub fn OnDoubleClicked(self: QScatterSeries, callback: *const fn (QScatterSeries, QPointF) callconv(.c) void) void {
        qtc.QXYSeries_Connect_DoubleClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointReplaced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` index: i32 `
    ///
    pub fn PointReplaced(self: QScatterSeries, index: i32) void {
        qtc.QXYSeries_PointReplaced(@ptrCast(self.ptr), @bitCast(index));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointReplaced)
    ///
    /// ## Parameters:
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` callback: *const fn (self: QScatterSeries, index: i32) callconv(.c) void `
    ///
    pub fn OnPointReplaced(self: QScatterSeries, callback: *const fn (QScatterSeries, i32) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointReplaced(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` index: i32 `
    ///
    pub fn PointRemoved(self: QScatterSeries, index: i32) void {
        qtc.QXYSeries_PointRemoved(@ptrCast(self.ptr), @bitCast(index));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` callback: *const fn (self: QScatterSeries, index: i32) callconv(.c) void `
    ///
    pub fn OnPointRemoved(self: QScatterSeries, callback: *const fn (QScatterSeries, i32) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` index: i32 `
    ///
    pub fn PointAdded(self: QScatterSeries, index: i32) void {
        qtc.QXYSeries_PointAdded(@ptrCast(self.ptr), @bitCast(index));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointAdded)
    ///
    /// ## Parameters:
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` callback: *const fn (self: QScatterSeries, index: i32) callconv(.c) void `
    ///
    pub fn OnPointAdded(self: QScatterSeries, callback: *const fn (QScatterSeries, i32) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointAdded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#selectedColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` color: QColor `
    ///
    pub fn SelectedColorChanged(self: QScatterSeries, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QXYSeries_SelectedColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#selectedColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` callback: *const fn (self: QScatterSeries, color: QColor) callconv(.c) void `
    ///
    pub fn OnSelectedColorChanged(self: QScatterSeries, callback: *const fn (QScatterSeries, QColor) callconv(.c) void) void {
        qtc.QXYSeries_Connect_SelectedColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointsReplaced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    pub fn PointsReplaced(self: QScatterSeries) void {
        qtc.QXYSeries_PointsReplaced(@ptrCast(self.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointsReplaced)
    ///
    /// ## Parameters:
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` callback: *const fn (self: QScatterSeries) callconv(.c) void `
    ///
    pub fn OnPointsReplaced(self: QScatterSeries, callback: *const fn (QScatterSeries) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointsReplaced(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFormatChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` format: []const u8 `
    ///
    pub fn PointLabelsFormatChanged(self: QScatterSeries, format: []const u8) void {
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
    /// ` self: QScatterSeries `
    ///
    /// ` callback: *const fn (self: QScatterSeries, format: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnPointLabelsFormatChanged(self: QScatterSeries, callback: *const fn (QScatterSeries, [*:0]const u8) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointLabelsFormatChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsVisibilityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn PointLabelsVisibilityChanged(self: QScatterSeries, visible: bool) void {
        qtc.QXYSeries_PointLabelsVisibilityChanged(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsVisibilityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` callback: *const fn (self: QScatterSeries, visible: bool) callconv(.c) void `
    ///
    pub fn OnPointLabelsVisibilityChanged(self: QScatterSeries, callback: *const fn (QScatterSeries, bool) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointLabelsVisibilityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFontChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` font: QFont `
    ///
    pub fn PointLabelsFontChanged(self: QScatterSeries, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QXYSeries_PointLabelsFontChanged(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFontChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` callback: *const fn (self: QScatterSeries, font: QFont) callconv(.c) void `
    ///
    pub fn OnPointLabelsFontChanged(self: QScatterSeries, callback: *const fn (QScatterSeries, QFont) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointLabelsFontChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` color: QColor `
    ///
    pub fn PointLabelsColorChanged(self: QScatterSeries, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QXYSeries_PointLabelsColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` callback: *const fn (self: QScatterSeries, color: QColor) callconv(.c) void `
    ///
    pub fn OnPointLabelsColorChanged(self: QScatterSeries, callback: *const fn (QScatterSeries, QColor) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointLabelsColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsClippingChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` clipping: bool `
    ///
    pub fn PointLabelsClippingChanged(self: QScatterSeries, clipping: bool) void {
        qtc.QXYSeries_PointLabelsClippingChanged(@ptrCast(self.ptr), clipping);
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsClippingChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` callback: *const fn (self: QScatterSeries, clipping: bool) callconv(.c) void `
    ///
    pub fn OnPointLabelsClippingChanged(self: QScatterSeries, callback: *const fn (QScatterSeries, bool) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointLabelsClippingChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointsRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` index: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn PointsRemoved(self: QScatterSeries, index: i32, count: i32) void {
        qtc.QXYSeries_PointsRemoved(@ptrCast(self.ptr), @bitCast(index), @bitCast(count));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointsRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` callback: *const fn (self: QScatterSeries, index: i32, count: i32) callconv(.c) void `
    ///
    pub fn OnPointsRemoved(self: QScatterSeries, callback: *const fn (QScatterSeries, i32, i32) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointsRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#penChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` pen: QPen `
    ///
    pub fn PenChanged(self: QScatterSeries, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QXYSeries_PenChanged(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#penChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` callback: *const fn (self: QScatterSeries, pen: QPen) callconv(.c) void `
    ///
    pub fn OnPenChanged(self: QScatterSeries, callback: *const fn (QScatterSeries, QPen) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#selectedPointsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    pub fn SelectedPointsChanged(self: QScatterSeries) void {
        qtc.QXYSeries_SelectedPointsChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#selectedPointsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` callback: *const fn (self: QScatterSeries) callconv(.c) void `
    ///
    pub fn OnSelectedPointsChanged(self: QScatterSeries, callback: *const fn (QScatterSeries) callconv(.c) void) void {
        qtc.QXYSeries_Connect_SelectedPointsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#lightMarkerChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` lightMarker: QImage `
    ///
    pub fn LightMarkerChanged(self: QScatterSeries, lightMarker: anytype) void {
        comptime _ = @TypeOf(lightMarker)._is_QImage;
        qtc.QXYSeries_LightMarkerChanged(@ptrCast(self.ptr), @ptrCast(lightMarker.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#lightMarkerChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` callback: *const fn (self: QScatterSeries, lightMarker: QImage) callconv(.c) void `
    ///
    pub fn OnLightMarkerChanged(self: QScatterSeries, callback: *const fn (QScatterSeries, QImage) callconv(.c) void) void {
        qtc.QXYSeries_Connect_LightMarkerChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#selectedLightMarkerChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` selectedLightMarker: QImage `
    ///
    pub fn SelectedLightMarkerChanged(self: QScatterSeries, selectedLightMarker: anytype) void {
        comptime _ = @TypeOf(selectedLightMarker)._is_QImage;
        qtc.QXYSeries_SelectedLightMarkerChanged(@ptrCast(self.ptr), @ptrCast(selectedLightMarker.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#selectedLightMarkerChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` callback: *const fn (self: QScatterSeries, selectedLightMarker: QImage) callconv(.c) void `
    ///
    pub fn OnSelectedLightMarkerChanged(self: QScatterSeries, callback: *const fn (QScatterSeries, QImage) callconv(.c) void) void {
        qtc.QXYSeries_Connect_SelectedLightMarkerChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineVisibilityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn BestFitLineVisibilityChanged(self: QScatterSeries, visible: bool) void {
        qtc.QXYSeries_BestFitLineVisibilityChanged(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineVisibilityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` callback: *const fn (self: QScatterSeries, visible: bool) callconv(.c) void `
    ///
    pub fn OnBestFitLineVisibilityChanged(self: QScatterSeries, callback: *const fn (QScatterSeries, bool) callconv(.c) void) void {
        qtc.QXYSeries_Connect_BestFitLineVisibilityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#bestFitLinePenChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` pen: QPen `
    ///
    pub fn BestFitLinePenChanged(self: QScatterSeries, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QXYSeries_BestFitLinePenChanged(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#bestFitLinePenChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` callback: *const fn (self: QScatterSeries, pen: QPen) callconv(.c) void `
    ///
    pub fn OnBestFitLinePenChanged(self: QScatterSeries, callback: *const fn (QScatterSeries, QPen) callconv(.c) void) void {
        qtc.QXYSeries_Connect_BestFitLinePenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` color: QColor `
    ///
    pub fn BestFitLineColorChanged(self: QScatterSeries, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QXYSeries_BestFitLineColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` callback: *const fn (self: QScatterSeries, color: QColor) callconv(.c) void `
    ///
    pub fn OnBestFitLineColorChanged(self: QScatterSeries, callback: *const fn (QScatterSeries, QColor) callconv(.c) void) void {
        qtc.QXYSeries_Connect_BestFitLineColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#pointsConfigurationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` configuration: Map_i32_Map_i32_QVariant `
    ///
    pub fn PointsConfigurationChanged(self: QScatterSeries, allocator: std.mem.Allocator, configuration: Map_i32_Map_i32_QVariant) void {
        const configuration_count = configuration.count();
        const configuration_keys = allocator.alloc(i32, configuration_count) catch @panic("qscatterseries.PointsConfigurationChanged: Memory allocation failed");
        defer allocator.free(configuration_keys);
        const configuration_values = allocator.alloc(Map_i32_QVariant, configuration_count) catch @panic("qscatterseries.PointsConfigurationChanged: Memory allocation failed");
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
    /// ` self: QScatterSeries `
    ///
    /// ` callback: *const fn (self: QScatterSeries, configuration: qtc.libqt_map (Map_i32_Map_i32_QVariant)) callconv(.c) void `
    ///
    pub fn OnPointsConfigurationChanged(self: QScatterSeries, callback: *const fn (QScatterSeries, qtc.libqt_map) callconv(.c) void) void {
        qtc.QXYSeries_Connect_PointsConfigurationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPointsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn SetPointsVisible1(self: QScatterSeries, visible: bool) void {
        qtc.QXYSeries_SetPointsVisible1(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn SetPointLabelsVisible1(self: QScatterSeries, visible: bool) void {
        qtc.QXYSeries_SetPointLabelsVisible1(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsClipping)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetPointLabelsClipping1(self: QScatterSeries, enabled: bool) void {
        qtc.QXYSeries_SetPointLabelsClipping1(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#setBestFitLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn SetBestFitLineVisible1(self: QScatterSeries, visible: bool) void {
        qtc.QXYSeries_SetBestFitLineVisible1(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QXYSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qxyseries.html#colorBy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` sourceData: []f64 `
    ///
    /// ` gradient: QLinearGradient `
    ///
    pub fn ColorBy2(self: QScatterSeries, sourceData: []f64, gradient: anytype) void {
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
    /// ` self: QScatterSeries `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: QScatterSeries, name: []const u8) void {
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
    /// ` self: QScatterSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: QScatterSeries, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractSeries_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qscatterseries.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    pub fn SetVisible(self: QScatterSeries) void {
        qtc.QAbstractSeries_SetVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    pub fn IsVisible(self: QScatterSeries) bool {
        return qtc.QAbstractSeries_IsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    pub fn Opacity(self: QScatterSeries) f64 {
        return qtc.QAbstractSeries_Opacity(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` opacity: f64 `
    ///
    pub fn SetOpacity(self: QScatterSeries, opacity: f64) void {
        qtc.QAbstractSeries_SetOpacity(@ptrCast(self.ptr), @bitCast(opacity));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    pub fn SetUseOpenGL(self: QScatterSeries) void {
        qtc.QAbstractSeries_SetUseOpenGL(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    pub fn UseOpenGL(self: QScatterSeries) bool {
        return qtc.QAbstractSeries_UseOpenGL(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#chart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    pub fn Chart(self: QScatterSeries) QChart {
        return .{ .ptr = qtc.QAbstractSeries_Chart(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#attachAxis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` axis: QAbstractAxis `
    ///
    pub fn AttachAxis(self: QScatterSeries, axis: anytype) bool {
        comptime _ = @TypeOf(axis)._is_QAbstractAxis;
        return qtc.QAbstractSeries_AttachAxis(@ptrCast(self.ptr), @ptrCast(axis.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#detachAxis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` axis: QAbstractAxis `
    ///
    pub fn DetachAxis(self: QScatterSeries, axis: anytype) bool {
        comptime _ = @TypeOf(axis)._is_QAbstractAxis;
        return qtc.QAbstractSeries_DetachAxis(@ptrCast(self.ptr), @ptrCast(axis.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#attachedAxes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AttachedAxes(self: QScatterSeries, allocator: std.mem.Allocator) []QAbstractAxis {
        const _arr: qtc.libqt_list = qtc.QAbstractSeries_AttachedAxes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAbstractAxis, _arr.len) catch @panic("qscatterseries.AttachedAxes: Memory allocation failed");
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
    /// ` self: QScatterSeries `
    ///
    pub fn Show(self: QScatterSeries) void {
        qtc.QAbstractSeries_Show(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    pub fn Hide(self: QScatterSeries) void {
        qtc.QAbstractSeries_Hide(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    pub fn NameChanged(self: QScatterSeries) void {
        qtc.QAbstractSeries_NameChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` callback: *const fn (self: QScatterSeries) callconv(.c) void `
    ///
    pub fn OnNameChanged(self: QScatterSeries, callback: *const fn (QScatterSeries) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_NameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    pub fn VisibleChanged(self: QScatterSeries) void {
        qtc.QAbstractSeries_VisibleChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` callback: *const fn (self: QScatterSeries) callconv(.c) void `
    ///
    pub fn OnVisibleChanged(self: QScatterSeries, callback: *const fn (QScatterSeries) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_VisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    pub fn OpacityChanged(self: QScatterSeries) void {
        qtc.QAbstractSeries_OpacityChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` callback: *const fn (self: QScatterSeries) callconv(.c) void `
    ///
    pub fn OnOpacityChanged(self: QScatterSeries, callback: *const fn (QScatterSeries) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_OpacityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    pub fn UseOpenGLChanged(self: QScatterSeries) void {
        qtc.QAbstractSeries_UseOpenGLChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` callback: *const fn (self: QScatterSeries) callconv(.c) void `
    ///
    pub fn OnUseOpenGLChanged(self: QScatterSeries, callback: *const fn (QScatterSeries) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_UseOpenGLChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible1(self: QScatterSeries, visible: bool) void {
        qtc.QAbstractSeries_SetVisible1(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QAbstractSeries
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` enable: bool `
    ///
    pub fn SetUseOpenGL1(self: QScatterSeries, enable: bool) void {
        qtc.QAbstractSeries_SetUseOpenGL1(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QScatterSeries, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qscatterseries.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QScatterSeries, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    pub fn IsWidgetType(self: QScatterSeries) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    pub fn IsWindowType(self: QScatterSeries) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    pub fn IsQuickItemType(self: QScatterSeries) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    pub fn SignalsBlocked(self: QScatterSeries) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QScatterSeries, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    pub fn Thread(self: QScatterSeries) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QScatterSeries, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QScatterSeries, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QScatterSeries, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QScatterSeries, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QScatterSeries, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QScatterSeries, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qscatterseries.Children: Memory allocation failed");
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
    /// ` self: QScatterSeries `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QScatterSeries, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QScatterSeries, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QScatterSeries, obj: anytype) void {
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
    /// ` self: QScatterSeries `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QScatterSeries, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QScatterSeries `
    ///
    pub fn Disconnect3(self: QScatterSeries) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QScatterSeries, receiver: anytype) bool {
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
    /// ` self: QScatterSeries `
    ///
    pub fn DumpObjectTree(self: QScatterSeries) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    pub fn DumpObjectInfo(self: QScatterSeries) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QScatterSeries, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QScatterSeries `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QScatterSeries, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QScatterSeries, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qscatterseries.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qscatterseries.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QScatterSeries `
    ///
    pub fn BindingStorage(self: QScatterSeries) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    pub fn BindingStorage2(self: QScatterSeries) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    pub fn Destroyed(self: QScatterSeries) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` callback: *const fn (self: QScatterSeries) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QScatterSeries, callback: *const fn (QScatterSeries) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    pub fn Parent(self: QScatterSeries) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QScatterSeries, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    pub fn DeleteLater(self: QScatterSeries) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QScatterSeries, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QScatterSeries, time: i64, timerType: i32) i32 {
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
    /// ` self: QScatterSeries `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QScatterSeries, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QScatterSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QScatterSeries, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QScatterSeries, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QScatterSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QScatterSeries, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QScatterSeries `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QScatterSeries, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QScatterSeries `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QScatterSeries, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` callback: *const fn (self: QScatterSeries, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QScatterSeries, callback: *const fn (QScatterSeries, QObject) callconv(.c) void) void {
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
    /// ` self: QScatterSeries `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QScatterSeries, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QScatterSeries_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QScatterSeries `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QScatterSeries, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QScatterSeries_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScatterSeries`
    ///
    /// ` callback: *const fn (self: QScatterSeries, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QScatterSeries, callback: *const fn (QScatterSeries, QEvent) callconv(.c) bool) void {
        qtc.QScatterSeries_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QScatterSeries, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QScatterSeries_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QScatterSeries `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QScatterSeries, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QScatterSeries_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScatterSeries`
    ///
    /// ` callback: *const fn (self: QScatterSeries, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QScatterSeries, callback: *const fn (QScatterSeries, QObject, QEvent) callconv(.c) bool) void {
        qtc.QScatterSeries_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QScatterSeries, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QScatterSeries_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QScatterSeries `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QScatterSeries, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QScatterSeries_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScatterSeries`
    ///
    /// ` callback: *const fn (self: QScatterSeries, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QScatterSeries, callback: *const fn (QScatterSeries, QTimerEvent) callconv(.c) void) void {
        qtc.QScatterSeries_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QScatterSeries, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QScatterSeries_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QScatterSeries `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QScatterSeries, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QScatterSeries_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScatterSeries`
    ///
    /// ` callback: *const fn (self: QScatterSeries, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QScatterSeries, callback: *const fn (QScatterSeries, QChildEvent) callconv(.c) void) void {
        qtc.QScatterSeries_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QScatterSeries, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QScatterSeries_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QScatterSeries `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QScatterSeries, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QScatterSeries_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScatterSeries`
    ///
    /// ` callback: *const fn (self: QScatterSeries, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QScatterSeries, callback: *const fn (QScatterSeries, QEvent) callconv(.c) void) void {
        qtc.QScatterSeries_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QScatterSeries, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QScatterSeries_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QScatterSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QScatterSeries, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QScatterSeries_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScatterSeries`
    ///
    /// ` callback: *const fn (self: QScatterSeries, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QScatterSeries, callback: *const fn (QScatterSeries, QMetaMethod) callconv(.c) void) void {
        qtc.QScatterSeries_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QScatterSeries, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QScatterSeries_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QScatterSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QScatterSeries, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QScatterSeries_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScatterSeries`
    ///
    /// ` callback: *const fn (self: QScatterSeries, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QScatterSeries, callback: *const fn (QScatterSeries, QMetaMethod) callconv(.c) void) void {
        qtc.QScatterSeries_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    pub fn Sender(self: QScatterSeries) QObject {
        return .{ .ptr = qtc.QScatterSeries_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QScatterSeries `
    ///
    pub fn SuperSender(self: QScatterSeries) QObject {
        return .{ .ptr = qtc.QScatterSeries_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScatterSeries`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QScatterSeries, callback: *const fn () callconv(.c) QObject) void {
        qtc.QScatterSeries_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    pub fn SenderSignalIndex(self: QScatterSeries) i32 {
        return qtc.QScatterSeries_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QScatterSeries `
    ///
    pub fn SuperSenderSignalIndex(self: QScatterSeries) i32 {
        return qtc.QScatterSeries_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScatterSeries`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QScatterSeries, callback: *const fn () callconv(.c) i32) void {
        qtc.QScatterSeries_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QScatterSeries, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QScatterSeries_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QScatterSeries `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QScatterSeries, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QScatterSeries_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScatterSeries`
    ///
    /// ` callback: *const fn (self: QScatterSeries, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QScatterSeries, callback: *const fn (QScatterSeries, [*:0]const u8) callconv(.c) i32) void {
        qtc.QScatterSeries_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QScatterSeries, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QScatterSeries_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QScatterSeries `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QScatterSeries, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QScatterSeries_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QScatterSeries`
    ///
    /// ` callback: *const fn (self: QScatterSeries, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QScatterSeries, callback: *const fn (QScatterSeries, QMetaMethod) callconv(.c) bool) void {
        qtc.QScatterSeries_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QScatterSeries `
    ///
    /// ` callback: *const fn (self: QScatterSeries, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QScatterSeries, callback: *const fn (QScatterSeries, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#dtor.QScatterSeries)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QScatterSeries `
    ///
    pub fn Delete(self: QScatterSeries) void {
        qtc.QScatterSeries_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qscatterseries-qtcharts.html#public-types)
pub const enums = struct {
    pub const MarkerShape = enum(i32) {
        pub const MarkerShapeCircle: i32 = 0;
        pub const MarkerShapeRectangle: i32 = 1;
        pub const MarkerShapeRotatedRectangle: i32 = 2;
        pub const MarkerShapeTriangle: i32 = 3;
        pub const MarkerShapeStar: i32 = 4;
        pub const MarkerShapePentagon: i32 = 5;
    };
};
