const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QBrush = @import("libqt6").QBrush;
const QChildEvent = @import("libqt6").QChildEvent;
const QColor = @import("libqt6").QColor;
const QDateTime = @import("libqt6").QDateTime;
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
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html)
pub const QDateTimeAxis = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDateTimeAxis,

    pub const _is_QDateTimeAxis = {};
    pub const _is_QAbstractAxis = {};
    pub const _is_QObject = {};

    /// New constructs a new QDateTimeAxis object.
    ///
    pub fn New() QDateTimeAxis {
        return .{ .ptr = qtc.QDateTimeAxis_new() };
    }

    /// New2 constructs a new QDateTimeAxis object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) QDateTimeAxis {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QDateTimeAxis_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    pub fn MetaObject(self: QDateTimeAxis) QMetaObject {
        return .{ .ptr = qtc.QDateTimeAxis_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QDateTimeAxis, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QDateTimeAxis_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn SuperMetaObject(self: QDateTimeAxis) QMetaObject {
        return .{ .ptr = qtc.QDateTimeAxis_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QDateTimeAxis, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDateTimeAxis_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QDateTimeAxis_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QDateTimeAxis, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDateTimeAxis_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QDateTimeAxis, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDateTimeAxis_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QDateTimeAxis_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QDateTimeAxis, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDateTimeAxis_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatetimeaxis.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ## Returns:
    ///
    /// ` qabstractaxis_enums.AxisType `
    ///
    pub fn Type(self: QDateTimeAxis) i32 {
        return qtc.QDateTimeAxis_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#type)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnType(self: QDateTimeAxis, callback: *const fn () callconv(.c) i32) void {
        qtc.QDateTimeAxis_OnType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperType` instead
    ///
    pub const QBaseType = SuperType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#type)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ## Returns:
    ///
    /// ` qabstractaxis_enums.AxisType `
    ///
    pub fn SuperType(self: QDateTimeAxis) i32 {
        return qtc.QDateTimeAxis_SuperType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#setMin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` min: QDateTime `
    ///
    pub fn SetMin(self: QDateTimeAxis, min: anytype) void {
        comptime _ = @TypeOf(min)._is_QDateTime;
        qtc.QDateTimeAxis_SetMin(@ptrCast(self.ptr), @ptrCast(min.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#min)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    pub fn Min(self: QDateTimeAxis) QDateTime {
        return .{ .ptr = qtc.QDateTimeAxis_Min(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#setMax)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` max: QDateTime `
    ///
    pub fn SetMax(self: QDateTimeAxis, max: anytype) void {
        comptime _ = @TypeOf(max)._is_QDateTime;
        qtc.QDateTimeAxis_SetMax(@ptrCast(self.ptr), @ptrCast(max.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#max)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    pub fn Max(self: QDateTimeAxis) QDateTime {
        return .{ .ptr = qtc.QDateTimeAxis_Max(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#setRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` min: QDateTime `
    ///
    /// ` max: QDateTime `
    ///
    pub fn SetRange(self: QDateTimeAxis, min: anytype, max: anytype) void {
        comptime _ = @TypeOf(min)._is_QDateTime;
        comptime _ = @TypeOf(max)._is_QDateTime;
        qtc.QDateTimeAxis_SetRange(@ptrCast(self.ptr), @ptrCast(min.ptr), @ptrCast(max.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#setFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` format: []const u8 `
    ///
    pub fn SetFormat(self: QDateTimeAxis, format: []const u8) void {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        qtc.QDateTimeAxis_SetFormat(@ptrCast(self.ptr), format_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#format)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Format(self: QDateTimeAxis, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDateTimeAxis_Format(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatetimeaxis.Format: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#setTickCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` count: i32 `
    ///
    pub fn SetTickCount(self: QDateTimeAxis, count: i32) void {
        qtc.QDateTimeAxis_SetTickCount(@ptrCast(self.ptr), @bitCast(count));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#tickCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    pub fn TickCount(self: QDateTimeAxis) i32 {
        return qtc.QDateTimeAxis_TickCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#minChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` min: QDateTime `
    ///
    pub fn MinChanged(self: QDateTimeAxis, min: anytype) void {
        comptime _ = @TypeOf(min)._is_QDateTime;
        qtc.QDateTimeAxis_MinChanged(@ptrCast(self.ptr), @ptrCast(min.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#minChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, min: QDateTime) callconv(.c) void `
    ///
    pub fn OnMinChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, QDateTime) callconv(.c) void) void {
        qtc.QDateTimeAxis_Connect_MinChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#maxChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` max: QDateTime `
    ///
    pub fn MaxChanged(self: QDateTimeAxis, max: anytype) void {
        comptime _ = @TypeOf(max)._is_QDateTime;
        qtc.QDateTimeAxis_MaxChanged(@ptrCast(self.ptr), @ptrCast(max.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#maxChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, max: QDateTime) callconv(.c) void `
    ///
    pub fn OnMaxChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, QDateTime) callconv(.c) void) void {
        qtc.QDateTimeAxis_Connect_MaxChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#rangeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` min: QDateTime `
    ///
    /// ` max: QDateTime `
    ///
    pub fn RangeChanged(self: QDateTimeAxis, min: anytype, max: anytype) void {
        comptime _ = @TypeOf(min)._is_QDateTime;
        comptime _ = @TypeOf(max)._is_QDateTime;
        qtc.QDateTimeAxis_RangeChanged(@ptrCast(self.ptr), @ptrCast(min.ptr), @ptrCast(max.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#rangeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, min: QDateTime, max: QDateTime) callconv(.c) void `
    ///
    pub fn OnRangeChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, QDateTime, QDateTime) callconv(.c) void) void {
        qtc.QDateTimeAxis_Connect_RangeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#formatChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` format: []const u8 `
    ///
    pub fn FormatChanged(self: QDateTimeAxis, format: []const u8) void {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        qtc.QDateTimeAxis_FormatChanged(@ptrCast(self.ptr), format_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#formatChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, format: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnFormatChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, [*:0]const u8) callconv(.c) void) void {
        qtc.QDateTimeAxis_Connect_FormatChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#tickCountChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` tick: i32 `
    ///
    pub fn TickCountChanged(self: QDateTimeAxis, tick: i32) void {
        qtc.QDateTimeAxis_TickCountChanged(@ptrCast(self.ptr), @bitCast(tick));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#tickCountChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, tick: i32) callconv(.c) void `
    ///
    pub fn OnTickCountChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, i32) callconv(.c) void) void {
        qtc.QDateTimeAxis_Connect_TickCountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatetimeaxis.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatetimeaxis.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    pub fn IsVisible(self: QDateTimeAxis) bool {
        return qtc.QAbstractAxis_IsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    pub fn SetVisible(self: QDateTimeAxis) void {
        qtc.QAbstractAxis_SetVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    pub fn Show(self: QDateTimeAxis) void {
        qtc.QAbstractAxis_Show(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    pub fn Hide(self: QDateTimeAxis) void {
        qtc.QAbstractAxis_Hide(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#isLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    pub fn IsLineVisible(self: QDateTimeAxis) bool {
        return qtc.QAbstractAxis_IsLineVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    pub fn SetLineVisible(self: QDateTimeAxis) void {
        qtc.QAbstractAxis_SetLineVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLinePen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` pen: QPen `
    ///
    pub fn SetLinePen(self: QDateTimeAxis, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QAbstractAxis_SetLinePen(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#linePen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    pub fn LinePen(self: QDateTimeAxis) QPen {
        return .{ .ptr = qtc.QAbstractAxis_LinePen(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLinePenColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn SetLinePenColor(self: QDateTimeAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_SetLinePenColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#linePenColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    pub fn LinePenColor(self: QDateTimeAxis) QColor {
        return .{ .ptr = qtc.QAbstractAxis_LinePenColor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#isGridLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    pub fn IsGridLineVisible(self: QDateTimeAxis) bool {
        return qtc.QAbstractAxis_IsGridLineVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    pub fn SetGridLineVisible(self: QDateTimeAxis) void {
        qtc.QAbstractAxis_SetGridLineVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLinePen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` pen: QPen `
    ///
    pub fn SetGridLinePen(self: QDateTimeAxis, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QAbstractAxis_SetGridLinePen(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    pub fn GridLinePen(self: QDateTimeAxis) QPen {
        return .{ .ptr = qtc.QAbstractAxis_GridLinePen(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#isMinorGridLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    pub fn IsMinorGridLineVisible(self: QDateTimeAxis) bool {
        return qtc.QAbstractAxis_IsMinorGridLineVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    pub fn SetMinorGridLineVisible(self: QDateTimeAxis) void {
        qtc.QAbstractAxis_SetMinorGridLineVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLinePen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` pen: QPen `
    ///
    pub fn SetMinorGridLinePen(self: QDateTimeAxis, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QAbstractAxis_SetMinorGridLinePen(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    pub fn MinorGridLinePen(self: QDateTimeAxis) QPen {
        return .{ .ptr = qtc.QAbstractAxis_MinorGridLinePen(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn SetGridLineColor(self: QDateTimeAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_SetGridLineColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    pub fn GridLineColor(self: QDateTimeAxis) QColor {
        return .{ .ptr = qtc.QAbstractAxis_GridLineColor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn SetMinorGridLineColor(self: QDateTimeAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_SetMinorGridLineColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    pub fn MinorGridLineColor(self: QDateTimeAxis) QColor {
        return .{ .ptr = qtc.QAbstractAxis_MinorGridLineColor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    pub fn LabelsVisible(self: QDateTimeAxis) bool {
        return qtc.QAbstractAxis_LabelsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    pub fn SetLabelsVisible(self: QDateTimeAxis) void {
        qtc.QAbstractAxis_SetLabelsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetLabelsBrush(self: QDateTimeAxis, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QAbstractAxis_SetLabelsBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    pub fn LabelsBrush(self: QDateTimeAxis) QBrush {
        return .{ .ptr = qtc.QAbstractAxis_LabelsBrush(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` font: QFont `
    ///
    pub fn SetLabelsFont(self: QDateTimeAxis, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QAbstractAxis_SetLabelsFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    pub fn LabelsFont(self: QDateTimeAxis) QFont {
        return .{ .ptr = qtc.QAbstractAxis_LabelsFont(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsAngle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` angle: i32 `
    ///
    pub fn SetLabelsAngle(self: QDateTimeAxis, angle: i32) void {
        qtc.QAbstractAxis_SetLabelsAngle(@ptrCast(self.ptr), @bitCast(angle));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    pub fn LabelsAngle(self: QDateTimeAxis) i32 {
        return qtc.QAbstractAxis_LabelsAngle(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn SetLabelsColor(self: QDateTimeAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_SetLabelsColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    pub fn LabelsColor(self: QDateTimeAxis) QColor {
        return .{ .ptr = qtc.QAbstractAxis_LabelsColor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#isTitleVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    pub fn IsTitleVisible(self: QDateTimeAxis) bool {
        return qtc.QAbstractAxis_IsTitleVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    pub fn SetTitleVisible(self: QDateTimeAxis) void {
        qtc.QAbstractAxis_SetTitleVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetTitleBrush(self: QDateTimeAxis, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QAbstractAxis_SetTitleBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    pub fn TitleBrush(self: QDateTimeAxis) QBrush {
        return .{ .ptr = qtc.QAbstractAxis_TitleBrush(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` font: QFont `
    ///
    pub fn SetTitleFont(self: QDateTimeAxis, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QAbstractAxis_SetTitleFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    pub fn TitleFont(self: QDateTimeAxis) QFont {
        return .{ .ptr = qtc.QAbstractAxis_TitleFont(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` title: []const u8 `
    ///
    pub fn SetTitleText(self: QDateTimeAxis, title: []const u8) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TitleText(self: QDateTimeAxis, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractAxis_TitleText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatetimeaxis.TitleText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    pub fn ShadesVisible(self: QDateTimeAxis) bool {
        return qtc.QAbstractAxis_ShadesVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    pub fn SetShadesVisible(self: QDateTimeAxis) void {
        qtc.QAbstractAxis_SetShadesVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` pen: QPen `
    ///
    pub fn SetShadesPen(self: QDateTimeAxis, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QAbstractAxis_SetShadesPen(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    pub fn ShadesPen(self: QDateTimeAxis) QPen {
        return .{ .ptr = qtc.QAbstractAxis_ShadesPen(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetShadesBrush(self: QDateTimeAxis, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QAbstractAxis_SetShadesBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    pub fn ShadesBrush(self: QDateTimeAxis) QBrush {
        return .{ .ptr = qtc.QAbstractAxis_ShadesBrush(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn SetShadesColor(self: QDateTimeAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_SetShadesColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    pub fn ShadesColor(self: QDateTimeAxis) QColor {
        return .{ .ptr = qtc.QAbstractAxis_ShadesColor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesBorderColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn SetShadesBorderColor(self: QDateTimeAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_SetShadesBorderColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    pub fn ShadesBorderColor(self: QDateTimeAxis) QColor {
        return .{ .ptr = qtc.QAbstractAxis_ShadesBorderColor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#orientation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.Orientation `
    ///
    pub fn Orientation(self: QDateTimeAxis) i32 {
        return qtc.QAbstractAxis_Orientation(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#alignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn Alignment(self: QDateTimeAxis) i32 {
        return qtc.QAbstractAxis_Alignment(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setReverse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    pub fn SetReverse(self: QDateTimeAxis) void {
        qtc.QAbstractAxis_SetReverse(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#isReverse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    pub fn IsReverse(self: QDateTimeAxis) bool {
        return qtc.QAbstractAxis_IsReverse(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsEditable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    pub fn SetLabelsEditable(self: QDateTimeAxis) void {
        qtc.QAbstractAxis_SetLabelsEditable(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    pub fn LabelsEditable(self: QDateTimeAxis) bool {
        return qtc.QAbstractAxis_LabelsEditable(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    pub fn LabelsTruncated(self: QDateTimeAxis) bool {
        return qtc.QAbstractAxis_LabelsTruncated(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setTruncateLabels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    pub fn SetTruncateLabels(self: QDateTimeAxis) void {
        qtc.QAbstractAxis_SetTruncateLabels(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    pub fn TruncateLabels(self: QDateTimeAxis) bool {
        return qtc.QAbstractAxis_TruncateLabels(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#visibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn VisibleChanged(self: QDateTimeAxis, visible: bool) void {
        qtc.QAbstractAxis_VisibleChanged(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#visibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, visible: bool) callconv(.c) void `
    ///
    pub fn OnVisibleChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_VisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#linePenChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` pen: QPen `
    ///
    pub fn LinePenChanged(self: QDateTimeAxis, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QAbstractAxis_LinePenChanged(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#linePenChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, pen: QPen) callconv(.c) void `
    ///
    pub fn OnLinePenChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, QPen) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LinePenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#lineVisibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn LineVisibleChanged(self: QDateTimeAxis, visible: bool) void {
        qtc.QAbstractAxis_LineVisibleChanged(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#lineVisibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, visible: bool) callconv(.c) void `
    ///
    pub fn OnLineVisibleChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LineVisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn LabelsVisibleChanged(self: QDateTimeAxis, visible: bool) void {
        qtc.QAbstractAxis_LabelsVisibleChanged(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, visible: bool) callconv(.c) void `
    ///
    pub fn OnLabelsVisibleChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsVisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrushChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` brush: QBrush `
    ///
    pub fn LabelsBrushChanged(self: QDateTimeAxis, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QAbstractAxis_LabelsBrushChanged(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrushChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, brush: QBrush) callconv(.c) void `
    ///
    pub fn OnLabelsBrushChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, QBrush) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsBrushChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFontChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` pen: QFont `
    ///
    pub fn LabelsFontChanged(self: QDateTimeAxis, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QFont;
        qtc.QAbstractAxis_LabelsFontChanged(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFontChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, pen: QFont) callconv(.c) void `
    ///
    pub fn OnLabelsFontChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, QFont) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsFontChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` angle: i32 `
    ///
    pub fn LabelsAngleChanged(self: QDateTimeAxis, angle: i32) void {
        qtc.QAbstractAxis_LabelsAngleChanged(@ptrCast(self.ptr), @bitCast(angle));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, angle: i32) callconv(.c) void `
    ///
    pub fn OnLabelsAngleChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, i32) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsAngleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePenChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` pen: QPen `
    ///
    pub fn GridLinePenChanged(self: QDateTimeAxis, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QAbstractAxis_GridLinePenChanged(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePenChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, pen: QPen) callconv(.c) void `
    ///
    pub fn OnGridLinePenChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, QPen) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_GridLinePenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridVisibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn GridVisibleChanged(self: QDateTimeAxis, visible: bool) void {
        qtc.QAbstractAxis_GridVisibleChanged(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridVisibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, visible: bool) callconv(.c) void `
    ///
    pub fn OnGridVisibleChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_GridVisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridVisibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn MinorGridVisibleChanged(self: QDateTimeAxis, visible: bool) void {
        qtc.QAbstractAxis_MinorGridVisibleChanged(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridVisibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, visible: bool) callconv(.c) void `
    ///
    pub fn OnMinorGridVisibleChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_MinorGridVisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePenChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` pen: QPen `
    ///
    pub fn MinorGridLinePenChanged(self: QDateTimeAxis, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QAbstractAxis_MinorGridLinePenChanged(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePenChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, pen: QPen) callconv(.c) void `
    ///
    pub fn OnMinorGridLinePenChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, QPen) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_MinorGridLinePenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn GridLineColorChanged(self: QDateTimeAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_GridLineColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, color: QColor) callconv(.c) void `
    ///
    pub fn OnGridLineColorChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, QColor) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_GridLineColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn MinorGridLineColorChanged(self: QDateTimeAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_MinorGridLineColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, color: QColor) callconv(.c) void `
    ///
    pub fn OnMinorGridLineColorChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, QColor) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_MinorGridLineColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#colorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn ColorChanged(self: QDateTimeAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_ColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#colorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, color: QColor) callconv(.c) void `
    ///
    pub fn OnColorChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, QColor) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn LabelsColorChanged(self: QDateTimeAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_LabelsColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, color: QColor) callconv(.c) void `
    ///
    pub fn OnLabelsColorChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, QColor) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` title: []const u8 `
    ///
    pub fn TitleTextChanged(self: QDateTimeAxis, title: []const u8) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnTitleTextChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, [*:0]const u8) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_TitleTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrushChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` brush: QBrush `
    ///
    pub fn TitleBrushChanged(self: QDateTimeAxis, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QAbstractAxis_TitleBrushChanged(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrushChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, brush: QBrush) callconv(.c) void `
    ///
    pub fn OnTitleBrushChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, QBrush) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_TitleBrushChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleVisibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn TitleVisibleChanged(self: QDateTimeAxis, visible: bool) void {
        qtc.QAbstractAxis_TitleVisibleChanged(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleVisibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, visible: bool) callconv(.c) void `
    ///
    pub fn OnTitleVisibleChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_TitleVisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleFontChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` font: QFont `
    ///
    pub fn TitleFontChanged(self: QDateTimeAxis, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QAbstractAxis_TitleFontChanged(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleFontChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, font: QFont) callconv(.c) void `
    ///
    pub fn OnTitleFontChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, QFont) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_TitleFontChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn ShadesVisibleChanged(self: QDateTimeAxis, visible: bool) void {
        qtc.QAbstractAxis_ShadesVisibleChanged(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, visible: bool) callconv(.c) void `
    ///
    pub fn OnShadesVisibleChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ShadesVisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn ShadesColorChanged(self: QDateTimeAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_ShadesColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, color: QColor) callconv(.c) void `
    ///
    pub fn OnShadesColorChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, QColor) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ShadesColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn ShadesBorderColorChanged(self: QDateTimeAxis, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QAbstractAxis_ShadesBorderColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, color: QColor) callconv(.c) void `
    ///
    pub fn OnShadesBorderColorChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, QColor) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ShadesBorderColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPenChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` pen: QPen `
    ///
    pub fn ShadesPenChanged(self: QDateTimeAxis, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QAbstractAxis_ShadesPenChanged(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPenChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, pen: QPen) callconv(.c) void `
    ///
    pub fn OnShadesPenChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, QPen) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ShadesPenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrushChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` brush: QBrush `
    ///
    pub fn ShadesBrushChanged(self: QDateTimeAxis, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QAbstractAxis_ShadesBrushChanged(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrushChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, brush: QBrush) callconv(.c) void `
    ///
    pub fn OnShadesBrushChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, QBrush) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ShadesBrushChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#reverseChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` reverse: bool `
    ///
    pub fn ReverseChanged(self: QDateTimeAxis, reverse: bool) void {
        qtc.QAbstractAxis_ReverseChanged(@ptrCast(self.ptr), reverse);
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#reverseChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, reverse: bool) callconv(.c) void `
    ///
    pub fn OnReverseChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ReverseChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditableChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` editable: bool `
    ///
    pub fn LabelsEditableChanged(self: QDateTimeAxis, editable: bool) void {
        qtc.QAbstractAxis_LabelsEditableChanged(@ptrCast(self.ptr), editable);
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditableChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, editable: bool) callconv(.c) void `
    ///
    pub fn OnLabelsEditableChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsEditableChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncatedChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` labelsTruncated: bool `
    ///
    pub fn LabelsTruncatedChanged(self: QDateTimeAxis, labelsTruncated: bool) void {
        qtc.QAbstractAxis_LabelsTruncatedChanged(@ptrCast(self.ptr), labelsTruncated);
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncatedChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, labelsTruncated: bool) callconv(.c) void `
    ///
    pub fn OnLabelsTruncatedChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsTruncatedChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabelsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` truncateLabels: bool `
    ///
    pub fn TruncateLabelsChanged(self: QDateTimeAxis, truncateLabels: bool) void {
        qtc.QAbstractAxis_TruncateLabelsChanged(@ptrCast(self.ptr), truncateLabels);
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabelsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, truncateLabels: bool) callconv(.c) void `
    ///
    pub fn OnTruncateLabelsChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_TruncateLabelsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible1(self: QDateTimeAxis, visible: bool) void {
        qtc.QAbstractAxis_SetVisible1(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn SetLineVisible1(self: QDateTimeAxis, visible: bool) void {
        qtc.QAbstractAxis_SetLineVisible1(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn SetGridLineVisible1(self: QDateTimeAxis, visible: bool) void {
        qtc.QAbstractAxis_SetGridLineVisible1(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn SetMinorGridLineVisible1(self: QDateTimeAxis, visible: bool) void {
        qtc.QAbstractAxis_SetMinorGridLineVisible1(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn SetLabelsVisible1(self: QDateTimeAxis, visible: bool) void {
        qtc.QAbstractAxis_SetLabelsVisible1(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn SetTitleVisible1(self: QDateTimeAxis, visible: bool) void {
        qtc.QAbstractAxis_SetTitleVisible1(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn SetShadesVisible1(self: QDateTimeAxis, visible: bool) void {
        qtc.QAbstractAxis_SetShadesVisible1(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setReverse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` reverse: bool `
    ///
    pub fn SetReverse1(self: QDateTimeAxis, reverse: bool) void {
        qtc.QAbstractAxis_SetReverse1(@ptrCast(self.ptr), reverse);
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsEditable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` editable: bool `
    ///
    pub fn SetLabelsEditable1(self: QDateTimeAxis, editable: bool) void {
        qtc.QAbstractAxis_SetLabelsEditable1(@ptrCast(self.ptr), editable);
    }

    /// Inherited from QAbstractAxis
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setTruncateLabels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` truncateLabels: bool `
    ///
    pub fn SetTruncateLabels1(self: QDateTimeAxis, truncateLabels: bool) void {
        qtc.QAbstractAxis_SetTruncateLabels1(@ptrCast(self.ptr), truncateLabels);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QDateTimeAxis, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatetimeaxis.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QDateTimeAxis, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    pub fn IsWidgetType(self: QDateTimeAxis) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    pub fn IsWindowType(self: QDateTimeAxis) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    pub fn IsQuickItemType(self: QDateTimeAxis) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    pub fn SignalsBlocked(self: QDateTimeAxis) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QDateTimeAxis, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    pub fn Thread(self: QDateTimeAxis) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QDateTimeAxis, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QDateTimeAxis, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QDateTimeAxis, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QDateTimeAxis, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QDateTimeAxis, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QDateTimeAxis, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qdatetimeaxis.Children: Memory allocation failed");
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QDateTimeAxis, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QDateTimeAxis, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QDateTimeAxis, obj: anytype) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QDateTimeAxis, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn Disconnect3(self: QDateTimeAxis) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QDateTimeAxis, receiver: anytype) bool {
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn DumpObjectTree(self: QDateTimeAxis) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    pub fn DumpObjectInfo(self: QDateTimeAxis) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QDateTimeAxis, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QDateTimeAxis, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QDateTimeAxis, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qdatetimeaxis.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qdatetimeaxis.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn BindingStorage(self: QDateTimeAxis) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    pub fn BindingStorage2(self: QDateTimeAxis) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    pub fn Destroyed(self: QDateTimeAxis) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    pub fn Parent(self: QDateTimeAxis) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QDateTimeAxis, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    pub fn DeleteLater(self: QDateTimeAxis) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QDateTimeAxis, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QDateTimeAxis, time: i64, timerType: i32) i32 {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QDateTimeAxis, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QDateTimeAxis, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QDateTimeAxis, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QDateTimeAxis, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QDateTimeAxis, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QDateTimeAxis, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, QObject) callconv(.c) void) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QDateTimeAxis, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QDateTimeAxis_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QDateTimeAxis, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QDateTimeAxis_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeAxis`
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, QEvent) callconv(.c) bool) void {
        qtc.QDateTimeAxis_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QDateTimeAxis, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QDateTimeAxis_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QDateTimeAxis, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QDateTimeAxis_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeAxis`
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, QObject, QEvent) callconv(.c) bool) void {
        qtc.QDateTimeAxis_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QDateTimeAxis, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QDateTimeAxis_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QDateTimeAxis, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QDateTimeAxis_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeAxis`
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, QTimerEvent) callconv(.c) void) void {
        qtc.QDateTimeAxis_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QDateTimeAxis, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QDateTimeAxis_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QDateTimeAxis, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QDateTimeAxis_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeAxis`
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, QChildEvent) callconv(.c) void) void {
        qtc.QDateTimeAxis_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QDateTimeAxis, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QDateTimeAxis_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QDateTimeAxis, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QDateTimeAxis_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeAxis`
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, QEvent) callconv(.c) void) void {
        qtc.QDateTimeAxis_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QDateTimeAxis, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDateTimeAxis_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QDateTimeAxis, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDateTimeAxis_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeAxis`
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, QMetaMethod) callconv(.c) void) void {
        qtc.QDateTimeAxis_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QDateTimeAxis, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDateTimeAxis_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QDateTimeAxis, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDateTimeAxis_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeAxis`
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, QMetaMethod) callconv(.c) void) void {
        qtc.QDateTimeAxis_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    pub fn Sender(self: QDateTimeAxis) QObject {
        return .{ .ptr = qtc.QDateTimeAxis_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn SuperSender(self: QDateTimeAxis) QObject {
        return .{ .ptr = qtc.QDateTimeAxis_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeAxis`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QDateTimeAxis, callback: *const fn () callconv(.c) QObject) void {
        qtc.QDateTimeAxis_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    pub fn SenderSignalIndex(self: QDateTimeAxis) i32 {
        return qtc.QDateTimeAxis_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn SuperSenderSignalIndex(self: QDateTimeAxis) i32 {
        return qtc.QDateTimeAxis_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeAxis`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QDateTimeAxis, callback: *const fn () callconv(.c) i32) void {
        qtc.QDateTimeAxis_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QDateTimeAxis, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDateTimeAxis_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QDateTimeAxis, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDateTimeAxis_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeAxis`
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, [*:0]const u8) callconv(.c) i32) void {
        qtc.QDateTimeAxis_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QDateTimeAxis, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QDateTimeAxis_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QDateTimeAxis, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QDateTimeAxis_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeAxis`
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, QMetaMethod) callconv(.c) bool) void {
        qtc.QDateTimeAxis_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#dtor.QDateTimeAxis)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDateTimeAxis `
    ///
    pub fn Delete(self: QDateTimeAxis) void {
        qtc.QDateTimeAxis_Delete(@ptrCast(self.ptr));
    }
};
