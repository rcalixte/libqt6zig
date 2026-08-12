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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDateTimeAxis object in C++ memory
    ///
    pub fn new() QDateTimeAxis {
        return .{ .ptr = qtc.QDateTimeAxis_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDateTimeAxis object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QDateTimeAxis {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QDateTimeAxis_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    pub fn metaObject(self: QDateTimeAxis) QMetaObject {
        return .{ .ptr = qtc.QDateTimeAxis_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QDateTimeAxis, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QDateTimeAxis_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn superMetaObject(self: QDateTimeAxis) QMetaObject {
        return .{ .ptr = qtc.QDateTimeAxis_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QDateTimeAxis, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDateTimeAxis_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QDateTimeAxis_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QDateTimeAxis, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDateTimeAxis_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QDateTimeAxis, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDateTimeAxis_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QDateTimeAxis_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: QDateTimeAxis, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDateTimeAxis_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDateTimeAxis.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QDateTimeAxis) i32 {
        return qtc.QDateTimeAxis_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onType` instead
    ///
    pub const OnType = onType;

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
    pub fn onType(self: QDateTimeAxis, callback: *const fn () callconv(.c) i32) void {
        qtc.QDateTimeAxis_OnType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superType` instead
    ///
    pub const SuperType = superType;

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
    pub fn superType(self: QDateTimeAxis) i32 {
        return qtc.QDateTimeAxis_SuperType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMin` instead
    ///
    pub const SetMin = setMin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#setMin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` _min: QDateTime `
    ///
    pub fn setMin(self: QDateTimeAxis, _min: anytype) void {
        comptime _ = @TypeOf(_min)._is_QDateTime;
        qtc.QDateTimeAxis_SetMin(@ptrCast(self.ptr), @ptrCast(_min.ptr));
    }

    /// ### DEPRECATED: Use `min` instead
    ///
    pub const Min = min;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#min)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    pub fn min(self: QDateTimeAxis) QDateTime {
        return .{ .ptr = qtc.QDateTimeAxis_Min(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMax` instead
    ///
    pub const SetMax = setMax;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#setMax)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` _max: QDateTime `
    ///
    pub fn setMax(self: QDateTimeAxis, _max: anytype) void {
        comptime _ = @TypeOf(_max)._is_QDateTime;
        qtc.QDateTimeAxis_SetMax(@ptrCast(self.ptr), @ptrCast(_max.ptr));
    }

    /// ### DEPRECATED: Use `max` instead
    ///
    pub const Max = max;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#max)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    pub fn max(self: QDateTimeAxis) QDateTime {
        return .{ .ptr = qtc.QDateTimeAxis_Max(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRange` instead
    ///
    pub const SetRange = setRange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#setRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` _min: QDateTime `
    ///
    /// ` _max: QDateTime `
    ///
    pub fn setRange(self: QDateTimeAxis, _min: anytype, _max: anytype) void {
        comptime _ = @TypeOf(_min)._is_QDateTime;
        comptime _ = @TypeOf(_max)._is_QDateTime;
        qtc.QDateTimeAxis_SetRange(@ptrCast(self.ptr), @ptrCast(_min.ptr), @ptrCast(_max.ptr));
    }

    /// ### DEPRECATED: Use `setFormat` instead
    ///
    pub const SetFormat = setFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#setFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` _format: []const u8 `
    ///
    pub fn setFormat(self: QDateTimeAxis, _format: []const u8) void {
        const format_str = qtc.libqt_string{
            .len = _format.len,
            .data = _format.ptr,
        };
        qtc.QDateTimeAxis_SetFormat(@ptrCast(self.ptr), format_str);
    }

    /// ### DEPRECATED: Use `format` instead
    ///
    pub const Format = format;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#format)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn format(self: QDateTimeAxis, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDateTimeAxis_Format(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDateTimeAxis.format: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setTickCount` instead
    ///
    pub const SetTickCount = setTickCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#setTickCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` count: i32 `
    ///
    pub fn setTickCount(self: QDateTimeAxis, count: i32) void {
        qtc.QDateTimeAxis_SetTickCount(@ptrCast(self.ptr), @bitCast(count));
    }

    /// ### DEPRECATED: Use `tickCount` instead
    ///
    pub const TickCount = tickCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#tickCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    pub fn tickCount(self: QDateTimeAxis) i32 {
        return qtc.QDateTimeAxis_TickCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `minChanged` instead
    ///
    pub const MinChanged = minChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#minChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` _min: QDateTime `
    ///
    pub fn minChanged(self: QDateTimeAxis, _min: anytype) void {
        comptime _ = @TypeOf(_min)._is_QDateTime;
        qtc.QDateTimeAxis_MinChanged(@ptrCast(self.ptr), @ptrCast(_min.ptr));
    }

    /// ### DEPRECATED: Use `onMinChanged` instead
    ///
    pub const OnMinChanged = onMinChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#minChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, min: QDateTime) callconv(.c) void `
    ///
    pub fn onMinChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, QDateTime) callconv(.c) void) void {
        qtc.QDateTimeAxis_Connect_MinChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `maxChanged` instead
    ///
    pub const MaxChanged = maxChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#maxChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` _max: QDateTime `
    ///
    pub fn maxChanged(self: QDateTimeAxis, _max: anytype) void {
        comptime _ = @TypeOf(_max)._is_QDateTime;
        qtc.QDateTimeAxis_MaxChanged(@ptrCast(self.ptr), @ptrCast(_max.ptr));
    }

    /// ### DEPRECATED: Use `onMaxChanged` instead
    ///
    pub const OnMaxChanged = onMaxChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#maxChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, max: QDateTime) callconv(.c) void `
    ///
    pub fn onMaxChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, QDateTime) callconv(.c) void) void {
        qtc.QDateTimeAxis_Connect_MaxChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rangeChanged` instead
    ///
    pub const RangeChanged = rangeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#rangeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` _min: QDateTime `
    ///
    /// ` _max: QDateTime `
    ///
    pub fn rangeChanged(self: QDateTimeAxis, _min: anytype, _max: anytype) void {
        comptime _ = @TypeOf(_min)._is_QDateTime;
        comptime _ = @TypeOf(_max)._is_QDateTime;
        qtc.QDateTimeAxis_RangeChanged(@ptrCast(self.ptr), @ptrCast(_min.ptr), @ptrCast(_max.ptr));
    }

    /// ### DEPRECATED: Use `onRangeChanged` instead
    ///
    pub const OnRangeChanged = onRangeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#rangeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, min: QDateTime, max: QDateTime) callconv(.c) void `
    ///
    pub fn onRangeChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, QDateTime, QDateTime) callconv(.c) void) void {
        qtc.QDateTimeAxis_Connect_RangeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `formatChanged` instead
    ///
    pub const FormatChanged = formatChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#formatChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` _format: []const u8 `
    ///
    pub fn formatChanged(self: QDateTimeAxis, _format: []const u8) void {
        const format_str = qtc.libqt_string{
            .len = _format.len,
            .data = _format.ptr,
        };
        qtc.QDateTimeAxis_FormatChanged(@ptrCast(self.ptr), format_str);
    }

    /// ### DEPRECATED: Use `onFormatChanged` instead
    ///
    pub const OnFormatChanged = onFormatChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#formatChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, format: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onFormatChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, [*:0]const u8) callconv(.c) void) void {
        qtc.QDateTimeAxis_Connect_FormatChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `tickCountChanged` instead
    ///
    pub const TickCountChanged = tickCountChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#tickCountChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` tick: i32 `
    ///
    pub fn tickCountChanged(self: QDateTimeAxis, tick: i32) void {
        qtc.QDateTimeAxis_TickCountChanged(@ptrCast(self.ptr), @bitCast(tick));
    }

    /// ### DEPRECATED: Use `onTickCountChanged` instead
    ///
    pub const OnTickCountChanged = onTickCountChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#tickCountChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, tick: i32) callconv(.c) void `
    ///
    pub fn onTickCountChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, i32) callconv(.c) void) void {
        qtc.QDateTimeAxis_Connect_TickCountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDateTimeAxis.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDateTimeAxis.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn isVisible(self: QDateTimeAxis) bool {
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn setVisible(self: QDateTimeAxis) void {
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn show(self: QDateTimeAxis) void {
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn hide(self: QDateTimeAxis) void {
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn isLineVisible(self: QDateTimeAxis) bool {
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn setLineVisible(self: QDateTimeAxis) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` pen: QPen `
    ///
    pub fn setLinePen(self: QDateTimeAxis, pen: anytype) void {
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn linePen(self: QDateTimeAxis) QPen {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn setLinePenColor(self: QDateTimeAxis, color: anytype) void {
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn linePenColor(self: QDateTimeAxis) QColor {
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn isGridLineVisible(self: QDateTimeAxis) bool {
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn setGridLineVisible(self: QDateTimeAxis) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` pen: QPen `
    ///
    pub fn setGridLinePen(self: QDateTimeAxis, pen: anytype) void {
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn gridLinePen(self: QDateTimeAxis) QPen {
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn isMinorGridLineVisible(self: QDateTimeAxis) bool {
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn setMinorGridLineVisible(self: QDateTimeAxis) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` pen: QPen `
    ///
    pub fn setMinorGridLinePen(self: QDateTimeAxis, pen: anytype) void {
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn minorGridLinePen(self: QDateTimeAxis) QPen {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn setGridLineColor(self: QDateTimeAxis, color: anytype) void {
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn gridLineColor(self: QDateTimeAxis) QColor {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn setMinorGridLineColor(self: QDateTimeAxis, color: anytype) void {
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn minorGridLineColor(self: QDateTimeAxis) QColor {
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn labelsVisible(self: QDateTimeAxis) bool {
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn setLabelsVisible(self: QDateTimeAxis) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` brush: QBrush `
    ///
    pub fn setLabelsBrush(self: QDateTimeAxis, brush: anytype) void {
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn labelsBrush(self: QDateTimeAxis) QBrush {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` font: QFont `
    ///
    pub fn setLabelsFont(self: QDateTimeAxis, font: anytype) void {
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn labelsFont(self: QDateTimeAxis) QFont {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` angle: i32 `
    ///
    pub fn setLabelsAngle(self: QDateTimeAxis, angle: i32) void {
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn labelsAngle(self: QDateTimeAxis) i32 {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn setLabelsColor(self: QDateTimeAxis, color: anytype) void {
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn labelsColor(self: QDateTimeAxis) QColor {
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn isTitleVisible(self: QDateTimeAxis) bool {
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn setTitleVisible(self: QDateTimeAxis) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` brush: QBrush `
    ///
    pub fn setTitleBrush(self: QDateTimeAxis, brush: anytype) void {
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn titleBrush(self: QDateTimeAxis) QBrush {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` font: QFont `
    ///
    pub fn setTitleFont(self: QDateTimeAxis, font: anytype) void {
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn titleFont(self: QDateTimeAxis) QFont {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` title: []const u8 `
    ///
    pub fn setTitleText(self: QDateTimeAxis, title: []const u8) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn titleText(self: QDateTimeAxis, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractAxis_TitleText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDateTimeAxis.titleText: Memory allocation failed");
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn shadesVisible(self: QDateTimeAxis) bool {
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn setShadesVisible(self: QDateTimeAxis) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` pen: QPen `
    ///
    pub fn setShadesPen(self: QDateTimeAxis, pen: anytype) void {
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn shadesPen(self: QDateTimeAxis) QPen {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` brush: QBrush `
    ///
    pub fn setShadesBrush(self: QDateTimeAxis, brush: anytype) void {
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn shadesBrush(self: QDateTimeAxis) QBrush {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn setShadesColor(self: QDateTimeAxis, color: anytype) void {
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn shadesColor(self: QDateTimeAxis) QColor {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn setShadesBorderColor(self: QDateTimeAxis, color: anytype) void {
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn shadesBorderColor(self: QDateTimeAxis) QColor {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.Orientation `
    ///
    pub fn orientation(self: QDateTimeAxis) i32 {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn alignment(self: QDateTimeAxis) i32 {
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn setReverse(self: QDateTimeAxis) void {
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn isReverse(self: QDateTimeAxis) bool {
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn setLabelsEditable(self: QDateTimeAxis) void {
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn labelsEditable(self: QDateTimeAxis) bool {
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn labelsTruncated(self: QDateTimeAxis) bool {
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn setTruncateLabels(self: QDateTimeAxis) void {
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn truncateLabels(self: QDateTimeAxis) bool {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn visibleChanged(self: QDateTimeAxis, visible: bool) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, visible: bool) callconv(.c) void `
    ///
    pub fn onVisibleChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, bool) callconv(.c) void) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` pen: QPen `
    ///
    pub fn linePenChanged(self: QDateTimeAxis, pen: anytype) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, pen: QPen) callconv(.c) void `
    ///
    pub fn onLinePenChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, QPen) callconv(.c) void) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn lineVisibleChanged(self: QDateTimeAxis, visible: bool) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, visible: bool) callconv(.c) void `
    ///
    pub fn onLineVisibleChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, bool) callconv(.c) void) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn labelsVisibleChanged(self: QDateTimeAxis, visible: bool) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, visible: bool) callconv(.c) void `
    ///
    pub fn onLabelsVisibleChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, bool) callconv(.c) void) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` brush: QBrush `
    ///
    pub fn labelsBrushChanged(self: QDateTimeAxis, brush: anytype) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, brush: QBrush) callconv(.c) void `
    ///
    pub fn onLabelsBrushChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, QBrush) callconv(.c) void) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` pen: QFont `
    ///
    pub fn labelsFontChanged(self: QDateTimeAxis, pen: anytype) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, pen: QFont) callconv(.c) void `
    ///
    pub fn onLabelsFontChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, QFont) callconv(.c) void) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` angle: i32 `
    ///
    pub fn labelsAngleChanged(self: QDateTimeAxis, angle: i32) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, angle: i32) callconv(.c) void `
    ///
    pub fn onLabelsAngleChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, i32) callconv(.c) void) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` pen: QPen `
    ///
    pub fn gridLinePenChanged(self: QDateTimeAxis, pen: anytype) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, pen: QPen) callconv(.c) void `
    ///
    pub fn onGridLinePenChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, QPen) callconv(.c) void) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn gridVisibleChanged(self: QDateTimeAxis, visible: bool) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, visible: bool) callconv(.c) void `
    ///
    pub fn onGridVisibleChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, bool) callconv(.c) void) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn minorGridVisibleChanged(self: QDateTimeAxis, visible: bool) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, visible: bool) callconv(.c) void `
    ///
    pub fn onMinorGridVisibleChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, bool) callconv(.c) void) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` pen: QPen `
    ///
    pub fn minorGridLinePenChanged(self: QDateTimeAxis, pen: anytype) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, pen: QPen) callconv(.c) void `
    ///
    pub fn onMinorGridLinePenChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, QPen) callconv(.c) void) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn gridLineColorChanged(self: QDateTimeAxis, color: anytype) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, color: QColor) callconv(.c) void `
    ///
    pub fn onGridLineColorChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, QColor) callconv(.c) void) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn minorGridLineColorChanged(self: QDateTimeAxis, color: anytype) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, color: QColor) callconv(.c) void `
    ///
    pub fn onMinorGridLineColorChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, QColor) callconv(.c) void) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn colorChanged(self: QDateTimeAxis, color: anytype) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, color: QColor) callconv(.c) void `
    ///
    pub fn onColorChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, QColor) callconv(.c) void) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn labelsColorChanged(self: QDateTimeAxis, color: anytype) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, color: QColor) callconv(.c) void `
    ///
    pub fn onLabelsColorChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, QColor) callconv(.c) void) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` title: []const u8 `
    ///
    pub fn titleTextChanged(self: QDateTimeAxis, title: []const u8) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onTitleTextChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, [*:0]const u8) callconv(.c) void) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` brush: QBrush `
    ///
    pub fn titleBrushChanged(self: QDateTimeAxis, brush: anytype) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, brush: QBrush) callconv(.c) void `
    ///
    pub fn onTitleBrushChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, QBrush) callconv(.c) void) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn titleVisibleChanged(self: QDateTimeAxis, visible: bool) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, visible: bool) callconv(.c) void `
    ///
    pub fn onTitleVisibleChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, bool) callconv(.c) void) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` font: QFont `
    ///
    pub fn titleFontChanged(self: QDateTimeAxis, font: anytype) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, font: QFont) callconv(.c) void `
    ///
    pub fn onTitleFontChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, QFont) callconv(.c) void) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn shadesVisibleChanged(self: QDateTimeAxis, visible: bool) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, visible: bool) callconv(.c) void `
    ///
    pub fn onShadesVisibleChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, bool) callconv(.c) void) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn shadesColorChanged(self: QDateTimeAxis, color: anytype) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, color: QColor) callconv(.c) void `
    ///
    pub fn onShadesColorChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, QColor) callconv(.c) void) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` color: QColor `
    ///
    pub fn shadesBorderColorChanged(self: QDateTimeAxis, color: anytype) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, color: QColor) callconv(.c) void `
    ///
    pub fn onShadesBorderColorChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, QColor) callconv(.c) void) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` pen: QPen `
    ///
    pub fn shadesPenChanged(self: QDateTimeAxis, pen: anytype) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, pen: QPen) callconv(.c) void `
    ///
    pub fn onShadesPenChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, QPen) callconv(.c) void) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` brush: QBrush `
    ///
    pub fn shadesBrushChanged(self: QDateTimeAxis, brush: anytype) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, brush: QBrush) callconv(.c) void `
    ///
    pub fn onShadesBrushChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, QBrush) callconv(.c) void) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` reverse: bool `
    ///
    pub fn reverseChanged(self: QDateTimeAxis, reverse: bool) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, reverse: bool) callconv(.c) void `
    ///
    pub fn onReverseChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, bool) callconv(.c) void) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` editable: bool `
    ///
    pub fn labelsEditableChanged(self: QDateTimeAxis, editable: bool) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, editable: bool) callconv(.c) void `
    ///
    pub fn onLabelsEditableChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, bool) callconv(.c) void) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` _labelsTruncated: bool `
    ///
    pub fn labelsTruncatedChanged(self: QDateTimeAxis, _labelsTruncated: bool) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, labelsTruncated: bool) callconv(.c) void `
    ///
    pub fn onLabelsTruncatedChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, bool) callconv(.c) void) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` _truncateLabels: bool `
    ///
    pub fn truncateLabelsChanged(self: QDateTimeAxis, _truncateLabels: bool) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, truncateLabels: bool) callconv(.c) void `
    ///
    pub fn onTruncateLabelsChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, bool) callconv(.c) void) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn setVisible1(self: QDateTimeAxis, visible: bool) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn setLineVisible1(self: QDateTimeAxis, visible: bool) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn setGridLineVisible1(self: QDateTimeAxis, visible: bool) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn setMinorGridLineVisible1(self: QDateTimeAxis, visible: bool) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn setLabelsVisible1(self: QDateTimeAxis, visible: bool) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn setTitleVisible1(self: QDateTimeAxis, visible: bool) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` visible: bool `
    ///
    pub fn setShadesVisible1(self: QDateTimeAxis, visible: bool) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` reverse: bool `
    ///
    pub fn setReverse1(self: QDateTimeAxis, reverse: bool) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` editable: bool `
    ///
    pub fn setLabelsEditable1(self: QDateTimeAxis, editable: bool) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` _truncateLabels: bool `
    ///
    pub fn setTruncateLabels1(self: QDateTimeAxis, _truncateLabels: bool) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QDateTimeAxis, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDateTimeAxis.objectName: Memory allocation failed");
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QDateTimeAxis, name: []const u8) void {
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn isWidgetType(self: QDateTimeAxis) bool {
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn isWindowType(self: QDateTimeAxis) bool {
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn isQuickItemType(self: QDateTimeAxis) bool {
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn signalsBlocked(self: QDateTimeAxis) bool {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QDateTimeAxis, b: bool) bool {
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn thread(self: QDateTimeAxis) QThread {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QDateTimeAxis, _thread: anytype) bool {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QDateTimeAxis, interval: i32) i32 {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QDateTimeAxis, time: i64) i32 {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QDateTimeAxis, id: i32) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QDateTimeAxis, id: i32) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QDateTimeAxis, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QDateTimeAxis.children: Memory allocation failed");
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QDateTimeAxis, _parent: anytype) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QDateTimeAxis, filterObj: anytype) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QDateTimeAxis, obj: anytype) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QDateTimeAxis, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn disconnect3(self: QDateTimeAxis) bool {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QDateTimeAxis, receiver: anytype) bool {
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn dumpObjectTree(self: QDateTimeAxis) void {
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn dumpObjectInfo(self: QDateTimeAxis) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QDateTimeAxis, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QDateTimeAxis, name: [:0]const u8) QVariant {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QDateTimeAxis, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QDateTimeAxis.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QDateTimeAxis.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn bindingStorage(self: QDateTimeAxis) QBindingStorage {
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn bindingStorage2(self: QDateTimeAxis) QBindingStorage {
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn destroyed(self: QDateTimeAxis) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis) callconv(.c) void) void {
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn parent(self: QDateTimeAxis) QObject {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QDateTimeAxis, classname: [:0]const u8) bool {
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn deleteLater(self: QDateTimeAxis) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QDateTimeAxis, interval: i32, timerType: i32) i32 {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QDateTimeAxis, time: i64, timerType: i32) i32 {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QDateTimeAxis, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QDateTimeAxis, signal: [:0]const u8) bool {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QDateTimeAxis, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QDateTimeAxis, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QDateTimeAxis, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QDateTimeAxis, param1: anytype) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, QObject) callconv(.c) void) void {
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QDateTimeAxis, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDateTimeAxis_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QDateTimeAxis, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDateTimeAxis_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDateTimeAxis`
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, QEvent) callconv(.c) bool) void {
        qtc.QDateTimeAxis_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QDateTimeAxis, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDateTimeAxis_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QDateTimeAxis, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDateTimeAxis_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDateTimeAxis`
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, QObject, QEvent) callconv(.c) bool) void {
        qtc.QDateTimeAxis_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QDateTimeAxis, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QDateTimeAxis_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QDateTimeAxis, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QDateTimeAxis_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDateTimeAxis`
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, QTimerEvent) callconv(.c) void) void {
        qtc.QDateTimeAxis_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QDateTimeAxis, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QDateTimeAxis_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QDateTimeAxis, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QDateTimeAxis_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDateTimeAxis`
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, QChildEvent) callconv(.c) void) void {
        qtc.QDateTimeAxis_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QDateTimeAxis, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QDateTimeAxis_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QDateTimeAxis, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QDateTimeAxis_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDateTimeAxis`
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, QEvent) callconv(.c) void) void {
        qtc.QDateTimeAxis_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QDateTimeAxis, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDateTimeAxis_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QDateTimeAxis, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDateTimeAxis_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDateTimeAxis`
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, QMetaMethod) callconv(.c) void) void {
        qtc.QDateTimeAxis_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QDateTimeAxis, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDateTimeAxis_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QDateTimeAxis, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDateTimeAxis_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDateTimeAxis`
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, QMetaMethod) callconv(.c) void) void {
        qtc.QDateTimeAxis_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn sender(self: QDateTimeAxis) QObject {
        return .{ .ptr = qtc.QDateTimeAxis_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn superSender(self: QDateTimeAxis) QObject {
        return .{ .ptr = qtc.QDateTimeAxis_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QDateTimeAxis`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QDateTimeAxis, callback: *const fn () callconv(.c) QObject) void {
        qtc.QDateTimeAxis_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn senderSignalIndex(self: QDateTimeAxis) i32 {
        return qtc.QDateTimeAxis_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QDateTimeAxis `
    ///
    pub fn superSenderSignalIndex(self: QDateTimeAxis) i32 {
        return qtc.QDateTimeAxis_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QDateTimeAxis`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QDateTimeAxis, callback: *const fn () callconv(.c) i32) void {
        qtc.QDateTimeAxis_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QDateTimeAxis, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDateTimeAxis_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QDateTimeAxis, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDateTimeAxis_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QDateTimeAxis`
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, [*:0]const u8) callconv(.c) i32) void {
        qtc.QDateTimeAxis_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QDateTimeAxis, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QDateTimeAxis_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QDateTimeAxis, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QDateTimeAxis_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDateTimeAxis`
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, QMetaMethod) callconv(.c) bool) void {
        qtc.QDateTimeAxis_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDateTimeAxis `
    ///
    /// ` callback: *const fn (self: QDateTimeAxis, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QDateTimeAxis, callback: *const fn (QDateTimeAxis, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#dtor.QDateTimeAxis)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDateTimeAxis `
    ///
    pub fn delete(self: QDateTimeAxis) void {
        qtc.QDateTimeAxis_Delete(@ptrCast(self.ptr));
    }
};
