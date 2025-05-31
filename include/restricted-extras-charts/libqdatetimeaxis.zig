const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qabstractaxis_enums = @import("libqabstractaxis.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html
pub const qdatetimeaxis = struct {
    /// New constructs a new QDateTimeAxis object.
    ///
    ///
    pub fn New() QtC.QDateTimeAxis {
        return qtc.QDateTimeAxis_new();
    }

    /// New2 constructs a new QDateTimeAxis object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New2(parent: ?*anyopaque) QtC.QDateTimeAxis {
        return qtc.QDateTimeAxis_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QDateTimeAxis_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QDateTimeAxis, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return qtc.QDateTimeAxis_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QDateTimeAxis, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QDateTimeAxis_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QDateTimeAxis, slot: fn (self: QtC.QDateTimeAxis, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QDateTimeAxis_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QDateTimeAxis, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QDateTimeAxis_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = qtc.QDateTimeAxis_Tr(s_Cstring);
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatetimeaxis.Tr: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#type)
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QDateTimeAxis_Type(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#type)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QDateTimeAxis, slot: fn () callconv(.c) i64 ```
    pub fn OnType(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        qtc.QDateTimeAxis_OnType(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#type)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn QBaseType(self: ?*anyopaque) i64 {
        return qtc.QDateTimeAxis_QBaseType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#setMin)
    ///
    /// ``` self: QtC.QDateTimeAxis, min: QtC.QDateTime ```
    pub fn SetMin(self: ?*anyopaque, min: QtC.QDateTime) void {
        qtc.QDateTimeAxis_SetMin(@ptrCast(self), @ptrCast(min));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#min)
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn Min(self: ?*anyopaque) QtC.QDateTime {
        return qtc.QDateTimeAxis_Min(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#setMax)
    ///
    /// ``` self: QtC.QDateTimeAxis, max: QtC.QDateTime ```
    pub fn SetMax(self: ?*anyopaque, max: QtC.QDateTime) void {
        qtc.QDateTimeAxis_SetMax(@ptrCast(self), @ptrCast(max));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#max)
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn Max(self: ?*anyopaque) QtC.QDateTime {
        return qtc.QDateTimeAxis_Max(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#setRange)
    ///
    /// ``` self: QtC.QDateTimeAxis, min: QtC.QDateTime, max: QtC.QDateTime ```
    pub fn SetRange(self: ?*anyopaque, min: QtC.QDateTime, max: QtC.QDateTime) void {
        qtc.QDateTimeAxis_SetRange(@ptrCast(self), @ptrCast(min), @ptrCast(max));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#setFormat)
    ///
    /// ``` self: QtC.QDateTimeAxis, format: []const u8 ```
    pub fn SetFormat(self: ?*anyopaque, format: []const u8) void {
        const format_str = qtc.struct_libqt_string{
            .len = format.len,
            .data = @constCast(format.ptr),
        };
        qtc.QDateTimeAxis_SetFormat(@ptrCast(self), format_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#format)
    ///
    /// ``` self: QtC.QDateTimeAxis, allocator: std.mem.Allocator ```
    pub fn Format(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDateTimeAxis_Format(@ptrCast(self));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatetimeaxis.Format: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#setTickCount)
    ///
    /// ``` self: QtC.QDateTimeAxis, count: i32 ```
    pub fn SetTickCount(self: ?*anyopaque, count: i32) void {
        qtc.QDateTimeAxis_SetTickCount(@ptrCast(self), @intCast(count));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#tickCount)
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn TickCount(self: ?*anyopaque) i32 {
        return qtc.QDateTimeAxis_TickCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#minChanged)
    ///
    /// ``` self: QtC.QDateTimeAxis, min: QtC.QDateTime ```
    pub fn MinChanged(self: ?*anyopaque, min: QtC.QDateTime) void {
        qtc.QDateTimeAxis_MinChanged(@ptrCast(self), @ptrCast(min));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#minChanged)
    ///
    /// ``` self: QtC.QDateTimeAxis, slot: fn (self: QtC.QDateTimeAxis, min: QtC.QDateTime) callconv(.c) void ```
    pub fn OnMinChanged(self: ?*anyopaque, slot: fn (?*anyopaque, QtC.QDateTime) callconv(.c) void) void {
        qtc.QDateTimeAxis_Connect_MinChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#maxChanged)
    ///
    /// ``` self: QtC.QDateTimeAxis, max: QtC.QDateTime ```
    pub fn MaxChanged(self: ?*anyopaque, max: QtC.QDateTime) void {
        qtc.QDateTimeAxis_MaxChanged(@ptrCast(self), @ptrCast(max));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#maxChanged)
    ///
    /// ``` self: QtC.QDateTimeAxis, slot: fn (self: QtC.QDateTimeAxis, max: QtC.QDateTime) callconv(.c) void ```
    pub fn OnMaxChanged(self: ?*anyopaque, slot: fn (?*anyopaque, QtC.QDateTime) callconv(.c) void) void {
        qtc.QDateTimeAxis_Connect_MaxChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#rangeChanged)
    ///
    /// ``` self: QtC.QDateTimeAxis, min: QtC.QDateTime, max: QtC.QDateTime ```
    pub fn RangeChanged(self: ?*anyopaque, min: QtC.QDateTime, max: QtC.QDateTime) void {
        qtc.QDateTimeAxis_RangeChanged(@ptrCast(self), @ptrCast(min), @ptrCast(max));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#rangeChanged)
    ///
    /// ``` self: QtC.QDateTimeAxis, slot: fn (self: QtC.QDateTimeAxis, min: QtC.QDateTime, max: QtC.QDateTime) callconv(.c) void ```
    pub fn OnRangeChanged(self: ?*anyopaque, slot: fn (?*anyopaque, QtC.QDateTime, QtC.QDateTime) callconv(.c) void) void {
        qtc.QDateTimeAxis_Connect_RangeChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#formatChanged)
    ///
    /// ``` self: QtC.QDateTimeAxis, format: []const u8 ```
    pub fn FormatChanged(self: ?*anyopaque, format: []const u8) void {
        const format_str = qtc.struct_libqt_string{
            .len = format.len,
            .data = @constCast(format.ptr),
        };
        qtc.QDateTimeAxis_FormatChanged(@ptrCast(self), format_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#formatChanged)
    ///
    /// ``` self: QtC.QDateTimeAxis, slot: fn (self: QtC.QDateTimeAxis, format: []const u8) callconv(.c) void ```
    pub fn OnFormatChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QDateTimeAxis_Connect_FormatChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#tickCountChanged)
    ///
    /// ``` self: QtC.QDateTimeAxis, tick: i32 ```
    pub fn TickCountChanged(self: ?*anyopaque, tick: i32) void {
        qtc.QDateTimeAxis_TickCountChanged(@ptrCast(self), @intCast(tick));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#tickCountChanged)
    ///
    /// ``` self: QtC.QDateTimeAxis, slot: fn (self: QtC.QDateTimeAxis, tick: i32) callconv(.c) void ```
    pub fn OnTickCountChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QDateTimeAxis_Connect_TickCountChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = qtc.QDateTimeAxis_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatetimeaxis.Tr2: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = qtc.QDateTimeAxis_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatetimeaxis.Tr3: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isVisible)
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn IsVisible(self: ?*anyopaque) bool {
        return qtc.QAbstractAxis_IsVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setVisible)
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn SetVisible(self: ?*anyopaque) void {
        qtc.QAbstractAxis_SetVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#show)
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn Show(self: ?*anyopaque) void {
        qtc.QAbstractAxis_Show(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#hide)
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn Hide(self: ?*anyopaque) void {
        qtc.QAbstractAxis_Hide(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isLineVisible)
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn IsLineVisible(self: ?*anyopaque) bool {
        return qtc.QAbstractAxis_IsLineVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLineVisible)
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn SetLineVisible(self: ?*anyopaque) void {
        qtc.QAbstractAxis_SetLineVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLinePen)
    ///
    /// ``` self: QtC.QDateTimeAxis, pen: QtC.QPen ```
    pub fn SetLinePen(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QAbstractAxis_SetLinePen(@ptrCast(self), @ptrCast(pen));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#linePen)
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn LinePen(self: ?*anyopaque) QtC.QPen {
        return qtc.QAbstractAxis_LinePen(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLinePenColor)
    ///
    /// ``` self: QtC.QDateTimeAxis, color: QtC.QColor ```
    pub fn SetLinePenColor(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QAbstractAxis_SetLinePenColor(@ptrCast(self), @ptrCast(color));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#linePenColor)
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn LinePenColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QAbstractAxis_LinePenColor(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isGridLineVisible)
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn IsGridLineVisible(self: ?*anyopaque) bool {
        return qtc.QAbstractAxis_IsGridLineVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineVisible)
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn SetGridLineVisible(self: ?*anyopaque) void {
        qtc.QAbstractAxis_SetGridLineVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLinePen)
    ///
    /// ``` self: QtC.QDateTimeAxis, pen: QtC.QPen ```
    pub fn SetGridLinePen(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QAbstractAxis_SetGridLinePen(@ptrCast(self), @ptrCast(pen));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePen)
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn GridLinePen(self: ?*anyopaque) QtC.QPen {
        return qtc.QAbstractAxis_GridLinePen(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isMinorGridLineVisible)
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn IsMinorGridLineVisible(self: ?*anyopaque) bool {
        return qtc.QAbstractAxis_IsMinorGridLineVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineVisible)
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn SetMinorGridLineVisible(self: ?*anyopaque) void {
        qtc.QAbstractAxis_SetMinorGridLineVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLinePen)
    ///
    /// ``` self: QtC.QDateTimeAxis, pen: QtC.QPen ```
    pub fn SetMinorGridLinePen(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QAbstractAxis_SetMinorGridLinePen(@ptrCast(self), @ptrCast(pen));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePen)
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn MinorGridLinePen(self: ?*anyopaque) QtC.QPen {
        return qtc.QAbstractAxis_MinorGridLinePen(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineColor)
    ///
    /// ``` self: QtC.QDateTimeAxis, color: QtC.QColor ```
    pub fn SetGridLineColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QAbstractAxis_SetGridLineColor(@ptrCast(self), @ptrCast(color));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColor)
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn GridLineColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QAbstractAxis_GridLineColor(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineColor)
    ///
    /// ``` self: QtC.QDateTimeAxis, color: QtC.QColor ```
    pub fn SetMinorGridLineColor(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QAbstractAxis_SetMinorGridLineColor(@ptrCast(self), @ptrCast(color));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColor)
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn MinorGridLineColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QAbstractAxis_MinorGridLineColor(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisible)
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn LabelsVisible(self: ?*anyopaque) bool {
        return qtc.QAbstractAxis_LabelsVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsVisible)
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn SetLabelsVisible(self: ?*anyopaque) void {
        qtc.QAbstractAxis_SetLabelsVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsBrush)
    ///
    /// ``` self: QtC.QDateTimeAxis, brush: QtC.QBrush ```
    pub fn SetLabelsBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QAbstractAxis_SetLabelsBrush(@ptrCast(self), @ptrCast(brush));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrush)
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn LabelsBrush(self: ?*anyopaque) QtC.QBrush {
        return qtc.QAbstractAxis_LabelsBrush(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsFont)
    ///
    /// ``` self: QtC.QDateTimeAxis, font: QtC.QFont ```
    pub fn SetLabelsFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QAbstractAxis_SetLabelsFont(@ptrCast(self), @ptrCast(font));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFont)
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn LabelsFont(self: ?*anyopaque) QtC.QFont {
        return qtc.QAbstractAxis_LabelsFont(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsAngle)
    ///
    /// ``` self: QtC.QDateTimeAxis, angle: i32 ```
    pub fn SetLabelsAngle(self: ?*anyopaque, angle: i32) void {
        qtc.QAbstractAxis_SetLabelsAngle(@ptrCast(self), @intCast(angle));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngle)
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn LabelsAngle(self: ?*anyopaque) i32 {
        return qtc.QAbstractAxis_LabelsAngle(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsColor)
    ///
    /// ``` self: QtC.QDateTimeAxis, color: QtC.QColor ```
    pub fn SetLabelsColor(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QAbstractAxis_SetLabelsColor(@ptrCast(self), @ptrCast(color));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColor)
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn LabelsColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QAbstractAxis_LabelsColor(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isTitleVisible)
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn IsTitleVisible(self: ?*anyopaque) bool {
        return qtc.QAbstractAxis_IsTitleVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleVisible)
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn SetTitleVisible(self: ?*anyopaque) void {
        qtc.QAbstractAxis_SetTitleVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleBrush)
    ///
    /// ``` self: QtC.QDateTimeAxis, brush: QtC.QBrush ```
    pub fn SetTitleBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QAbstractAxis_SetTitleBrush(@ptrCast(self), @ptrCast(brush));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrush)
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn TitleBrush(self: ?*anyopaque) QtC.QBrush {
        return qtc.QAbstractAxis_TitleBrush(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleFont)
    ///
    /// ``` self: QtC.QDateTimeAxis, font: QtC.QFont ```
    pub fn SetTitleFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QAbstractAxis_SetTitleFont(@ptrCast(self), @ptrCast(font));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleFont)
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn TitleFont(self: ?*anyopaque) QtC.QFont {
        return qtc.QAbstractAxis_TitleFont(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleText)
    ///
    /// ``` self: QtC.QDateTimeAxis, title: []const u8 ```
    pub fn SetTitleText(self: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.struct_libqt_string{
            .len = title.len,
            .data = @constCast(title.ptr),
        };
        qtc.QAbstractAxis_SetTitleText(@ptrCast(self), title_str);
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleText)
    ///
    /// ``` self: QtC.QDateTimeAxis, allocator: std.mem.Allocator ```
    pub fn TitleText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractAxis_TitleText(@ptrCast(self));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatetimeaxis.TitleText: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisible)
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn ShadesVisible(self: ?*anyopaque) bool {
        return qtc.QAbstractAxis_ShadesVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesVisible)
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn SetShadesVisible(self: ?*anyopaque) void {
        qtc.QAbstractAxis_SetShadesVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesPen)
    ///
    /// ``` self: QtC.QDateTimeAxis, pen: QtC.QPen ```
    pub fn SetShadesPen(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QAbstractAxis_SetShadesPen(@ptrCast(self), @ptrCast(pen));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPen)
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn ShadesPen(self: ?*anyopaque) QtC.QPen {
        return qtc.QAbstractAxis_ShadesPen(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesBrush)
    ///
    /// ``` self: QtC.QDateTimeAxis, brush: QtC.QBrush ```
    pub fn SetShadesBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QAbstractAxis_SetShadesBrush(@ptrCast(self), @ptrCast(brush));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrush)
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn ShadesBrush(self: ?*anyopaque) QtC.QBrush {
        return qtc.QAbstractAxis_ShadesBrush(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesColor)
    ///
    /// ``` self: QtC.QDateTimeAxis, color: QtC.QColor ```
    pub fn SetShadesColor(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QAbstractAxis_SetShadesColor(@ptrCast(self), @ptrCast(color));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColor)
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn ShadesColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QAbstractAxis_ShadesColor(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesBorderColor)
    ///
    /// ``` self: QtC.QDateTimeAxis, color: QtC.QColor ```
    pub fn SetShadesBorderColor(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QAbstractAxis_SetShadesBorderColor(@ptrCast(self), @ptrCast(color));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColor)
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn ShadesBorderColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QAbstractAxis_ShadesBorderColor(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#orientation)
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn Orientation(self: ?*anyopaque) i64 {
        return qtc.QAbstractAxis_Orientation(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#alignment)
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn Alignment(self: ?*anyopaque) i64 {
        return qtc.QAbstractAxis_Alignment(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setReverse)
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn SetReverse(self: ?*anyopaque) void {
        qtc.QAbstractAxis_SetReverse(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isReverse)
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn IsReverse(self: ?*anyopaque) bool {
        return qtc.QAbstractAxis_IsReverse(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsEditable)
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn SetLabelsEditable(self: ?*anyopaque) void {
        qtc.QAbstractAxis_SetLabelsEditable(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditable)
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn LabelsEditable(self: ?*anyopaque) bool {
        return qtc.QAbstractAxis_LabelsEditable(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncated)
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn LabelsTruncated(self: ?*anyopaque) bool {
        return qtc.QAbstractAxis_LabelsTruncated(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTruncateLabels)
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn SetTruncateLabels(self: ?*anyopaque) void {
        qtc.QAbstractAxis_SetTruncateLabels(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabels)
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn TruncateLabels(self: ?*anyopaque) bool {
        return qtc.QAbstractAxis_TruncateLabels(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#visibleChanged)
    ///
    /// ``` self: QtC.QDateTimeAxis, visible: bool ```
    pub fn VisibleChanged(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractAxis_VisibleChanged(@ptrCast(self), visible);
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#visibleChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, slot: fn (self: QtC.QAbstractAxis, visible: bool) callconv(.c) void ```
    pub fn OnVisibleChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_VisibleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#linePenChanged)
    ///
    /// ``` self: QtC.QDateTimeAxis, pen: QtC.QPen ```
    pub fn LinePenChanged(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QAbstractAxis_LinePenChanged(@ptrCast(self), @ptrCast(pen));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#linePenChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, slot: fn (self: QtC.QAbstractAxis, pen: QtC.QPen) callconv(.c) void ```
    pub fn OnLinePenChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LinePenChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#lineVisibleChanged)
    ///
    /// ``` self: QtC.QDateTimeAxis, visible: bool ```
    pub fn LineVisibleChanged(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractAxis_LineVisibleChanged(@ptrCast(self), visible);
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#lineVisibleChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, slot: fn (self: QtC.QAbstractAxis, visible: bool) callconv(.c) void ```
    pub fn OnLineVisibleChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LineVisibleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisibleChanged)
    ///
    /// ``` self: QtC.QDateTimeAxis, visible: bool ```
    pub fn LabelsVisibleChanged(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractAxis_LabelsVisibleChanged(@ptrCast(self), visible);
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisibleChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, slot: fn (self: QtC.QAbstractAxis, visible: bool) callconv(.c) void ```
    pub fn OnLabelsVisibleChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsVisibleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrushChanged)
    ///
    /// ``` self: QtC.QDateTimeAxis, brush: QtC.QBrush ```
    pub fn LabelsBrushChanged(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QAbstractAxis_LabelsBrushChanged(@ptrCast(self), @ptrCast(brush));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrushChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, slot: fn (self: QtC.QAbstractAxis, brush: QtC.QBrush) callconv(.c) void ```
    pub fn OnLabelsBrushChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsBrushChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFontChanged)
    ///
    /// ``` self: QtC.QDateTimeAxis, pen: QtC.QFont ```
    pub fn LabelsFontChanged(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QAbstractAxis_LabelsFontChanged(@ptrCast(self), @ptrCast(pen));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFontChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, slot: fn (self: QtC.QAbstractAxis, pen: QtC.QFont) callconv(.c) void ```
    pub fn OnLabelsFontChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsFontChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngleChanged)
    ///
    /// ``` self: QtC.QDateTimeAxis, angle: i32 ```
    pub fn LabelsAngleChanged(self: ?*anyopaque, angle: i32) void {
        qtc.QAbstractAxis_LabelsAngleChanged(@ptrCast(self), @intCast(angle));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngleChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, slot: fn (self: QtC.QAbstractAxis, angle: i32) callconv(.c) void ```
    pub fn OnLabelsAngleChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsAngleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePenChanged)
    ///
    /// ``` self: QtC.QDateTimeAxis, pen: QtC.QPen ```
    pub fn GridLinePenChanged(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QAbstractAxis_GridLinePenChanged(@ptrCast(self), @ptrCast(pen));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePenChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, slot: fn (self: QtC.QAbstractAxis, pen: QtC.QPen) callconv(.c) void ```
    pub fn OnGridLinePenChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_GridLinePenChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridVisibleChanged)
    ///
    /// ``` self: QtC.QDateTimeAxis, visible: bool ```
    pub fn GridVisibleChanged(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractAxis_GridVisibleChanged(@ptrCast(self), visible);
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridVisibleChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, slot: fn (self: QtC.QAbstractAxis, visible: bool) callconv(.c) void ```
    pub fn OnGridVisibleChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_GridVisibleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridVisibleChanged)
    ///
    /// ``` self: QtC.QDateTimeAxis, visible: bool ```
    pub fn MinorGridVisibleChanged(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractAxis_MinorGridVisibleChanged(@ptrCast(self), visible);
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridVisibleChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, slot: fn (self: QtC.QAbstractAxis, visible: bool) callconv(.c) void ```
    pub fn OnMinorGridVisibleChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_MinorGridVisibleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePenChanged)
    ///
    /// ``` self: QtC.QDateTimeAxis, pen: QtC.QPen ```
    pub fn MinorGridLinePenChanged(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QAbstractAxis_MinorGridLinePenChanged(@ptrCast(self), @ptrCast(pen));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePenChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, slot: fn (self: QtC.QAbstractAxis, pen: QtC.QPen) callconv(.c) void ```
    pub fn OnMinorGridLinePenChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_MinorGridLinePenChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColorChanged)
    ///
    /// ``` self: QtC.QDateTimeAxis, color: QtC.QColor ```
    pub fn GridLineColorChanged(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QAbstractAxis_GridLineColorChanged(@ptrCast(self), @ptrCast(color));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColorChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, slot: fn (self: QtC.QAbstractAxis, color: QtC.QColor) callconv(.c) void ```
    pub fn OnGridLineColorChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_GridLineColorChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColorChanged)
    ///
    /// ``` self: QtC.QDateTimeAxis, color: QtC.QColor ```
    pub fn MinorGridLineColorChanged(self: ?*anyopaque, color: ?*anyopaque) void {
        qtc.QAbstractAxis_MinorGridLineColorChanged(@ptrCast(self), @ptrCast(color));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColorChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, slot: fn (self: QtC.QAbstractAxis, color: QtC.QColor) callconv(.c) void ```
    pub fn OnMinorGridLineColorChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_MinorGridLineColorChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#colorChanged)
    ///
    /// ``` self: QtC.QDateTimeAxis, color: QtC.QColor ```
    pub fn ColorChanged(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QAbstractAxis_ColorChanged(@ptrCast(self), @ptrCast(color));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#colorChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, slot: fn (self: QtC.QAbstractAxis, color: QtC.QColor) callconv(.c) void ```
    pub fn OnColorChanged(self: ?*anyopaque, slot: fn (?*anyopaque, QtC.QColor) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ColorChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColorChanged)
    ///
    /// ``` self: QtC.QDateTimeAxis, color: QtC.QColor ```
    pub fn LabelsColorChanged(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QAbstractAxis_LabelsColorChanged(@ptrCast(self), @ptrCast(color));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColorChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, slot: fn (self: QtC.QAbstractAxis, color: QtC.QColor) callconv(.c) void ```
    pub fn OnLabelsColorChanged(self: ?*anyopaque, slot: fn (?*anyopaque, QtC.QColor) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsColorChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleTextChanged)
    ///
    /// ``` self: QtC.QDateTimeAxis, title: []const u8 ```
    pub fn TitleTextChanged(self: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.struct_libqt_string{
            .len = title.len,
            .data = @constCast(title.ptr),
        };
        qtc.QAbstractAxis_TitleTextChanged(@ptrCast(self), title_str);
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleTextChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, slot: fn (self: QtC.QAbstractAxis, title: []const u8) callconv(.c) void ```
    pub fn OnTitleTextChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_TitleTextChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrushChanged)
    ///
    /// ``` self: QtC.QDateTimeAxis, brush: QtC.QBrush ```
    pub fn TitleBrushChanged(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QAbstractAxis_TitleBrushChanged(@ptrCast(self), @ptrCast(brush));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrushChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, slot: fn (self: QtC.QAbstractAxis, brush: QtC.QBrush) callconv(.c) void ```
    pub fn OnTitleBrushChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_TitleBrushChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleVisibleChanged)
    ///
    /// ``` self: QtC.QDateTimeAxis, visible: bool ```
    pub fn TitleVisibleChanged(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractAxis_TitleVisibleChanged(@ptrCast(self), visible);
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleVisibleChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, slot: fn (self: QtC.QAbstractAxis, visible: bool) callconv(.c) void ```
    pub fn OnTitleVisibleChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_TitleVisibleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleFontChanged)
    ///
    /// ``` self: QtC.QDateTimeAxis, font: QtC.QFont ```
    pub fn TitleFontChanged(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QAbstractAxis_TitleFontChanged(@ptrCast(self), @ptrCast(font));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleFontChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, slot: fn (self: QtC.QAbstractAxis, font: QtC.QFont) callconv(.c) void ```
    pub fn OnTitleFontChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_TitleFontChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisibleChanged)
    ///
    /// ``` self: QtC.QDateTimeAxis, visible: bool ```
    pub fn ShadesVisibleChanged(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractAxis_ShadesVisibleChanged(@ptrCast(self), visible);
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisibleChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, slot: fn (self: QtC.QAbstractAxis, visible: bool) callconv(.c) void ```
    pub fn OnShadesVisibleChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ShadesVisibleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColorChanged)
    ///
    /// ``` self: QtC.QDateTimeAxis, color: QtC.QColor ```
    pub fn ShadesColorChanged(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QAbstractAxis_ShadesColorChanged(@ptrCast(self), @ptrCast(color));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColorChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, slot: fn (self: QtC.QAbstractAxis, color: QtC.QColor) callconv(.c) void ```
    pub fn OnShadesColorChanged(self: ?*anyopaque, slot: fn (?*anyopaque, QtC.QColor) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ShadesColorChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColorChanged)
    ///
    /// ``` self: QtC.QDateTimeAxis, color: QtC.QColor ```
    pub fn ShadesBorderColorChanged(self: ?*anyopaque, color: QtC.QColor) void {
        qtc.QAbstractAxis_ShadesBorderColorChanged(@ptrCast(self), @ptrCast(color));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColorChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, slot: fn (self: QtC.QAbstractAxis, color: QtC.QColor) callconv(.c) void ```
    pub fn OnShadesBorderColorChanged(self: ?*anyopaque, slot: fn (?*anyopaque, QtC.QColor) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ShadesBorderColorChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPenChanged)
    ///
    /// ``` self: QtC.QDateTimeAxis, pen: QtC.QPen ```
    pub fn ShadesPenChanged(self: ?*anyopaque, pen: ?*anyopaque) void {
        qtc.QAbstractAxis_ShadesPenChanged(@ptrCast(self), @ptrCast(pen));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPenChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, slot: fn (self: QtC.QAbstractAxis, pen: QtC.QPen) callconv(.c) void ```
    pub fn OnShadesPenChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ShadesPenChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrushChanged)
    ///
    /// ``` self: QtC.QDateTimeAxis, brush: QtC.QBrush ```
    pub fn ShadesBrushChanged(self: ?*anyopaque, brush: ?*anyopaque) void {
        qtc.QAbstractAxis_ShadesBrushChanged(@ptrCast(self), @ptrCast(brush));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrushChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, slot: fn (self: QtC.QAbstractAxis, brush: QtC.QBrush) callconv(.c) void ```
    pub fn OnShadesBrushChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ShadesBrushChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#reverseChanged)
    ///
    /// ``` self: QtC.QDateTimeAxis, reverse: bool ```
    pub fn ReverseChanged(self: ?*anyopaque, reverse: bool) void {
        qtc.QAbstractAxis_ReverseChanged(@ptrCast(self), reverse);
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#reverseChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, slot: fn (self: QtC.QAbstractAxis, reverse: bool) callconv(.c) void ```
    pub fn OnReverseChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_ReverseChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditableChanged)
    ///
    /// ``` self: QtC.QDateTimeAxis, editable: bool ```
    pub fn LabelsEditableChanged(self: ?*anyopaque, editable: bool) void {
        qtc.QAbstractAxis_LabelsEditableChanged(@ptrCast(self), editable);
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditableChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, slot: fn (self: QtC.QAbstractAxis, editable: bool) callconv(.c) void ```
    pub fn OnLabelsEditableChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsEditableChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncatedChanged)
    ///
    /// ``` self: QtC.QDateTimeAxis, labelsTruncated: bool ```
    pub fn LabelsTruncatedChanged(self: ?*anyopaque, labelsTruncated: bool) void {
        qtc.QAbstractAxis_LabelsTruncatedChanged(@ptrCast(self), labelsTruncated);
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncatedChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, slot: fn (self: QtC.QAbstractAxis, labelsTruncated: bool) callconv(.c) void ```
    pub fn OnLabelsTruncatedChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_LabelsTruncatedChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabelsChanged)
    ///
    /// ``` self: QtC.QDateTimeAxis, truncateLabels: bool ```
    pub fn TruncateLabelsChanged(self: ?*anyopaque, truncateLabels: bool) void {
        qtc.QAbstractAxis_TruncateLabelsChanged(@ptrCast(self), truncateLabels);
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabelsChanged)
    ///
    /// ``` self: QtC.QAbstractAxis, slot: fn (self: QtC.QAbstractAxis, truncateLabels: bool) callconv(.c) void ```
    pub fn OnTruncateLabelsChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAbstractAxis_Connect_TruncateLabelsChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setVisible)
    ///
    /// ``` self: QtC.QDateTimeAxis, visible: bool ```
    pub fn SetVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractAxis_SetVisible1(@ptrCast(self), visible);
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLineVisible)
    ///
    /// ``` self: QtC.QDateTimeAxis, visible: bool ```
    pub fn SetLineVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractAxis_SetLineVisible1(@ptrCast(self), visible);
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineVisible)
    ///
    /// ``` self: QtC.QDateTimeAxis, visible: bool ```
    pub fn SetGridLineVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractAxis_SetGridLineVisible1(@ptrCast(self), visible);
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineVisible)
    ///
    /// ``` self: QtC.QDateTimeAxis, visible: bool ```
    pub fn SetMinorGridLineVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractAxis_SetMinorGridLineVisible1(@ptrCast(self), visible);
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsVisible)
    ///
    /// ``` self: QtC.QDateTimeAxis, visible: bool ```
    pub fn SetLabelsVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractAxis_SetLabelsVisible1(@ptrCast(self), visible);
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleVisible)
    ///
    /// ``` self: QtC.QDateTimeAxis, visible: bool ```
    pub fn SetTitleVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractAxis_SetTitleVisible1(@ptrCast(self), visible);
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesVisible)
    ///
    /// ``` self: QtC.QDateTimeAxis, visible: bool ```
    pub fn SetShadesVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractAxis_SetShadesVisible1(@ptrCast(self), visible);
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setReverse)
    ///
    /// ``` self: QtC.QDateTimeAxis, reverse: bool ```
    pub fn SetReverse1(self: ?*anyopaque, reverse: bool) void {
        qtc.QAbstractAxis_SetReverse1(@ptrCast(self), reverse);
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsEditable)
    ///
    /// ``` self: QtC.QDateTimeAxis, editable: bool ```
    pub fn SetLabelsEditable1(self: ?*anyopaque, editable: bool) void {
        qtc.QAbstractAxis_SetLabelsEditable1(@ptrCast(self), editable);
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTruncateLabels)
    ///
    /// ``` self: QtC.QDateTimeAxis, truncateLabels: bool ```
    pub fn SetTruncateLabels1(self: ?*anyopaque, truncateLabels: bool) void {
        qtc.QAbstractAxis_SetTruncateLabels1(@ptrCast(self), truncateLabels);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QDateTimeAxis, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatetimeaxis.ObjectName: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QDateTimeAxis, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QDateTimeAxis, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QDateTimeAxis, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QDateTimeAxis, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QDateTimeAxis, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QDateTimeAxis, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.struct_libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qdatetimeaxis.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QDateTimeAxis, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QDateTimeAxis, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QDateTimeAxis, obj: QtC.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QDateTimeAxis, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, member: QtC.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: QtC.QMetaObject__Connection ```
    pub fn DisconnectWithQMetaObjectConnection(param1: ?*anyopaque) bool {
        return qtc.QObject_DisconnectWithQMetaObjectConnection(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QDateTimeAxis, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QDateTimeAxis, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QDateTimeAxis, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.struct_libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                qtc.libqt_string_free(@ptrCast(&_str[_i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qdatetimeaxis.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qdatetimeaxis.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QDateTimeAxis, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QDateTimeAxis, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer2(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QDateTimeAxis, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) QtC.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QDateTimeAxis, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QDateTimeAxis, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QDateTimeAxis_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QDateTimeAxis, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QDateTimeAxis_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QDateTimeAxis, slot: fn (self: QtC.QDateTimeAxis, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QDateTimeAxis_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QDateTimeAxis, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QDateTimeAxis_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QDateTimeAxis, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QDateTimeAxis_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QDateTimeAxis, slot: fn (self: QtC.QDateTimeAxis, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QDateTimeAxis_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QDateTimeAxis, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDateTimeAxis_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QDateTimeAxis, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDateTimeAxis_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QDateTimeAxis, slot: fn (self: QtC.QDateTimeAxis, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDateTimeAxis_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QDateTimeAxis, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDateTimeAxis_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QDateTimeAxis, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDateTimeAxis_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QDateTimeAxis, slot: fn (self: QtC.QDateTimeAxis, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDateTimeAxis_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QDateTimeAxis, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDateTimeAxis_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QDateTimeAxis, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDateTimeAxis_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QDateTimeAxis, slot: fn (self: QtC.QDateTimeAxis, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDateTimeAxis_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QDateTimeAxis, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QDateTimeAxis_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QDateTimeAxis, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QDateTimeAxis_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QDateTimeAxis, slot: fn (self: QtC.QDateTimeAxis, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDateTimeAxis_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QDateTimeAxis, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QDateTimeAxis_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QDateTimeAxis, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QDateTimeAxis_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QDateTimeAxis, slot: fn (self: QtC.QDateTimeAxis, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDateTimeAxis_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QDateTimeAxis_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QDateTimeAxis_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QDateTimeAxis, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.QDateTimeAxis_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QDateTimeAxis_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QDateTimeAxis_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QDateTimeAxis, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QDateTimeAxis_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QDateTimeAxis, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return qtc.QDateTimeAxis_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QDateTimeAxis, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return qtc.QDateTimeAxis_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QDateTimeAxis, slot: fn (self: QtC.QDateTimeAxis, signal: []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        qtc.QDateTimeAxis_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QDateTimeAxis, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QDateTimeAxis_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QDateTimeAxis, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QDateTimeAxis_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QDateTimeAxis, slot: fn (self: QtC.QDateTimeAxis, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QDateTimeAxis_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QDateTimeAxis, slot: fn (self: QtC.QObject, objectName: []const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeaxis-qtcharts.html#dtor.QDateTimeAxis)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QDateTimeAxis ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDateTimeAxis_Delete(@ptrCast(self));
    }
};
