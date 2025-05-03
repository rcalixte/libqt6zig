const C = @import("qt6c");
const qabstractaxis_enums = @import("libqabstractaxis.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qcoloraxis.html
pub const qcoloraxis = struct {
    /// New constructs a new QColorAxis object.
    ///
    ///
    pub fn New() ?*C.QColorAxis {
        return C.QColorAxis_new();
    }

    /// New2 constructs a new QColorAxis object.
    ///
    /// ``` parent: ?*C.QObject ```
    pub fn New2(parent: ?*anyopaque) ?*C.QColorAxis {
        return C.QColorAxis_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QColorAxis_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QColorAxis, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QColorAxis_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QColorAxis, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QColorAxis_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QColorAxis, slot: fn (?*C.QColorAxis, qobjectdefs_enums.Call, i32, ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        C.QColorAxis_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QColorAxis, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QColorAxis_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QColorAxis_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#type)
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn Type(self: ?*anyopaque) i64 {
        return C.QColorAxis_Type(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QColorAxis, slot: fn () callconv(.c) i64 ```
    pub fn OnType(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        C.QColorAxis_OnType(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn QBaseType(self: ?*anyopaque) i64 {
        return C.QColorAxis_QBaseType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#setMin)
    ///
    /// ``` self: ?*C.QColorAxis, min: f64 ```
    pub fn SetMin(self: ?*anyopaque, min: f64) void {
        C.QColorAxis_SetMin(@ptrCast(self), @floatCast(min));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#min)
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn Min(self: ?*anyopaque) f64 {
        return C.QColorAxis_Min(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#setMax)
    ///
    /// ``` self: ?*C.QColorAxis, max: f64 ```
    pub fn SetMax(self: ?*anyopaque, max: f64) void {
        C.QColorAxis_SetMax(@ptrCast(self), @floatCast(max));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#max)
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn Max(self: ?*anyopaque) f64 {
        return C.QColorAxis_Max(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#setRange)
    ///
    /// ``` self: ?*C.QColorAxis, min: f64, max: f64 ```
    pub fn SetRange(self: ?*anyopaque, min: f64, max: f64) void {
        C.QColorAxis_SetRange(@ptrCast(self), @floatCast(min), @floatCast(max));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#setTickCount)
    ///
    /// ``` self: ?*C.QColorAxis, count: i32 ```
    pub fn SetTickCount(self: ?*anyopaque, count: i32) void {
        C.QColorAxis_SetTickCount(@ptrCast(self), @intCast(count));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#tickCount)
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn TickCount(self: ?*anyopaque) i32 {
        return C.QColorAxis_TickCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#setSize)
    ///
    /// ``` self: ?*C.QColorAxis, size: f64 ```
    pub fn SetSize(self: ?*anyopaque, size: f64) void {
        C.QColorAxis_SetSize(@ptrCast(self), @floatCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#size)
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn Size(self: ?*anyopaque) f64 {
        return C.QColorAxis_Size(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#setGradient)
    ///
    /// ``` self: ?*C.QColorAxis, gradient: ?*C.QLinearGradient ```
    pub fn SetGradient(self: ?*anyopaque, gradient: ?*anyopaque) void {
        C.QColorAxis_SetGradient(@ptrCast(self), @ptrCast(gradient));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#gradient)
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn Gradient(self: ?*anyopaque) ?*C.QLinearGradient {
        return C.QColorAxis_Gradient(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#setAutoRange)
    ///
    /// ``` self: ?*C.QColorAxis, autoRange: bool ```
    pub fn SetAutoRange(self: ?*anyopaque, autoRange: bool) void {
        C.QColorAxis_SetAutoRange(@ptrCast(self), autoRange);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#autoRange)
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn AutoRange(self: ?*anyopaque) bool {
        return C.QColorAxis_AutoRange(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#minChanged)
    ///
    /// ``` self: ?*C.QColorAxis, min: f64 ```
    pub fn MinChanged(self: ?*anyopaque, min: f64) void {
        C.QColorAxis_MinChanged(@ptrCast(self), @floatCast(min));
    }

    /// ``` self: ?*C.QColorAxis, slot: fn (?*C.QColorAxis, f64) callconv(.c) void ```
    pub fn OnMinChanged(self: ?*anyopaque, slot: fn (?*anyopaque, f64) callconv(.c) void) void {
        C.QColorAxis_Connect_MinChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#maxChanged)
    ///
    /// ``` self: ?*C.QColorAxis, max: f64 ```
    pub fn MaxChanged(self: ?*anyopaque, max: f64) void {
        C.QColorAxis_MaxChanged(@ptrCast(self), @floatCast(max));
    }

    /// ``` self: ?*C.QColorAxis, slot: fn (?*C.QColorAxis, f64) callconv(.c) void ```
    pub fn OnMaxChanged(self: ?*anyopaque, slot: fn (?*anyopaque, f64) callconv(.c) void) void {
        C.QColorAxis_Connect_MaxChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#rangeChanged)
    ///
    /// ``` self: ?*C.QColorAxis, min: f64, max: f64 ```
    pub fn RangeChanged(self: ?*anyopaque, min: f64, max: f64) void {
        C.QColorAxis_RangeChanged(@ptrCast(self), @floatCast(min), @floatCast(max));
    }

    /// ``` self: ?*C.QColorAxis, slot: fn (?*C.QColorAxis, f64, f64) callconv(.c) void ```
    pub fn OnRangeChanged(self: ?*anyopaque, slot: fn (?*anyopaque, f64, f64) callconv(.c) void) void {
        C.QColorAxis_Connect_RangeChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#tickCountChanged)
    ///
    /// ``` self: ?*C.QColorAxis, tickCount: i32 ```
    pub fn TickCountChanged(self: ?*anyopaque, tickCount: i32) void {
        C.QColorAxis_TickCountChanged(@ptrCast(self), @intCast(tickCount));
    }

    /// ``` self: ?*C.QColorAxis, slot: fn (?*C.QColorAxis, i32) callconv(.c) void ```
    pub fn OnTickCountChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QColorAxis_Connect_TickCountChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#gradientChanged)
    ///
    /// ``` self: ?*C.QColorAxis, gradient: ?*C.QLinearGradient ```
    pub fn GradientChanged(self: ?*anyopaque, gradient: ?*anyopaque) void {
        C.QColorAxis_GradientChanged(@ptrCast(self), @ptrCast(gradient));
    }

    /// ``` self: ?*C.QColorAxis, slot: fn (?*C.QColorAxis, ?*C.QLinearGradient) callconv(.c) void ```
    pub fn OnGradientChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QColorAxis_Connect_GradientChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#sizeChanged)
    ///
    /// ``` self: ?*C.QColorAxis, size: f64 ```
    pub fn SizeChanged(self: ?*anyopaque, size: f64) void {
        C.QColorAxis_SizeChanged(@ptrCast(self), @floatCast(size));
    }

    /// ``` self: ?*C.QColorAxis, slot: fn (?*C.QColorAxis, f64) callconv(.c) void ```
    pub fn OnSizeChanged(self: ?*anyopaque, slot: fn (?*anyopaque, f64) callconv(.c) void) void {
        C.QColorAxis_Connect_SizeChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#autoRangeChanged)
    ///
    /// ``` self: ?*C.QColorAxis, autoRange: bool ```
    pub fn AutoRangeChanged(self: ?*anyopaque, autoRange: bool) void {
        C.QColorAxis_AutoRangeChanged(@ptrCast(self), autoRange);
    }

    /// ``` self: ?*C.QColorAxis, slot: fn (?*C.QColorAxis, bool) callconv(.c) void ```
    pub fn OnAutoRangeChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QColorAxis_Connect_AutoRangeChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QColorAxis_Tr2(s_Cstring, c_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
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
        const _str = C.QColorAxis_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isVisible)
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn IsVisible(self: ?*anyopaque) bool {
        return C.QAbstractAxis_IsVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setVisible)
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn SetVisible(self: ?*anyopaque) void {
        C.QAbstractAxis_SetVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#show)
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn Show(self: ?*anyopaque) void {
        C.QAbstractAxis_Show(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#hide)
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn Hide(self: ?*anyopaque) void {
        C.QAbstractAxis_Hide(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isLineVisible)
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn IsLineVisible(self: ?*anyopaque) bool {
        return C.QAbstractAxis_IsLineVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLineVisible)
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn SetLineVisible(self: ?*anyopaque) void {
        C.QAbstractAxis_SetLineVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLinePen)
    ///
    /// ``` self: ?*C.QColorAxis, pen: ?*C.QPen ```
    pub fn SetLinePen(self: ?*anyopaque, pen: ?*anyopaque) void {
        C.QAbstractAxis_SetLinePen(@ptrCast(self), @ptrCast(pen));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#linePen)
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn LinePen(self: ?*anyopaque) ?*C.QPen {
        return C.QAbstractAxis_LinePen(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLinePenColor)
    ///
    /// ``` self: ?*C.QColorAxis, color: C.QColor ```
    pub fn SetLinePenColor(self: ?*anyopaque, color: C.QColor) void {
        C.QAbstractAxis_SetLinePenColor(@ptrCast(self), @ptrCast(color));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#linePenColor)
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn LinePenColor(self: ?*anyopaque) ?*C.QColor {
        return C.QAbstractAxis_LinePenColor(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isGridLineVisible)
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn IsGridLineVisible(self: ?*anyopaque) bool {
        return C.QAbstractAxis_IsGridLineVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineVisible)
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn SetGridLineVisible(self: ?*anyopaque) void {
        C.QAbstractAxis_SetGridLineVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLinePen)
    ///
    /// ``` self: ?*C.QColorAxis, pen: ?*C.QPen ```
    pub fn SetGridLinePen(self: ?*anyopaque, pen: ?*anyopaque) void {
        C.QAbstractAxis_SetGridLinePen(@ptrCast(self), @ptrCast(pen));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePen)
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn GridLinePen(self: ?*anyopaque) ?*C.QPen {
        return C.QAbstractAxis_GridLinePen(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isMinorGridLineVisible)
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn IsMinorGridLineVisible(self: ?*anyopaque) bool {
        return C.QAbstractAxis_IsMinorGridLineVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineVisible)
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn SetMinorGridLineVisible(self: ?*anyopaque) void {
        C.QAbstractAxis_SetMinorGridLineVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLinePen)
    ///
    /// ``` self: ?*C.QColorAxis, pen: ?*C.QPen ```
    pub fn SetMinorGridLinePen(self: ?*anyopaque, pen: ?*anyopaque) void {
        C.QAbstractAxis_SetMinorGridLinePen(@ptrCast(self), @ptrCast(pen));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePen)
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn MinorGridLinePen(self: ?*anyopaque) ?*C.QPen {
        return C.QAbstractAxis_MinorGridLinePen(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineColor)
    ///
    /// ``` self: ?*C.QColorAxis, color: ?*C.QColor ```
    pub fn SetGridLineColor(self: ?*anyopaque, color: ?*anyopaque) void {
        C.QAbstractAxis_SetGridLineColor(@ptrCast(self), @ptrCast(color));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColor)
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn GridLineColor(self: ?*anyopaque) ?*C.QColor {
        return C.QAbstractAxis_GridLineColor(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineColor)
    ///
    /// ``` self: ?*C.QColorAxis, color: ?*C.QColor ```
    pub fn SetMinorGridLineColor(self: ?*anyopaque, color: ?*anyopaque) void {
        C.QAbstractAxis_SetMinorGridLineColor(@ptrCast(self), @ptrCast(color));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColor)
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn MinorGridLineColor(self: ?*anyopaque) ?*C.QColor {
        return C.QAbstractAxis_MinorGridLineColor(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisible)
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn LabelsVisible(self: ?*anyopaque) bool {
        return C.QAbstractAxis_LabelsVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsVisible)
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn SetLabelsVisible(self: ?*anyopaque) void {
        C.QAbstractAxis_SetLabelsVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsBrush)
    ///
    /// ``` self: ?*C.QColorAxis, brush: ?*C.QBrush ```
    pub fn SetLabelsBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        C.QAbstractAxis_SetLabelsBrush(@ptrCast(self), @ptrCast(brush));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrush)
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn LabelsBrush(self: ?*anyopaque) ?*C.QBrush {
        return C.QAbstractAxis_LabelsBrush(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsFont)
    ///
    /// ``` self: ?*C.QColorAxis, font: ?*C.QFont ```
    pub fn SetLabelsFont(self: ?*anyopaque, font: ?*anyopaque) void {
        C.QAbstractAxis_SetLabelsFont(@ptrCast(self), @ptrCast(font));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFont)
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn LabelsFont(self: ?*anyopaque) ?*C.QFont {
        return C.QAbstractAxis_LabelsFont(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsAngle)
    ///
    /// ``` self: ?*C.QColorAxis, angle: i32 ```
    pub fn SetLabelsAngle(self: ?*anyopaque, angle: i32) void {
        C.QAbstractAxis_SetLabelsAngle(@ptrCast(self), @intCast(angle));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngle)
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn LabelsAngle(self: ?*anyopaque) i32 {
        return C.QAbstractAxis_LabelsAngle(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsColor)
    ///
    /// ``` self: ?*C.QColorAxis, color: C.QColor ```
    pub fn SetLabelsColor(self: ?*anyopaque, color: C.QColor) void {
        C.QAbstractAxis_SetLabelsColor(@ptrCast(self), @ptrCast(color));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColor)
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn LabelsColor(self: ?*anyopaque) ?*C.QColor {
        return C.QAbstractAxis_LabelsColor(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isTitleVisible)
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn IsTitleVisible(self: ?*anyopaque) bool {
        return C.QAbstractAxis_IsTitleVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleVisible)
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn SetTitleVisible(self: ?*anyopaque) void {
        C.QAbstractAxis_SetTitleVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleBrush)
    ///
    /// ``` self: ?*C.QColorAxis, brush: ?*C.QBrush ```
    pub fn SetTitleBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        C.QAbstractAxis_SetTitleBrush(@ptrCast(self), @ptrCast(brush));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrush)
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn TitleBrush(self: ?*anyopaque) ?*C.QBrush {
        return C.QAbstractAxis_TitleBrush(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleFont)
    ///
    /// ``` self: ?*C.QColorAxis, font: ?*C.QFont ```
    pub fn SetTitleFont(self: ?*anyopaque, font: ?*anyopaque) void {
        C.QAbstractAxis_SetTitleFont(@ptrCast(self), @ptrCast(font));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleFont)
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn TitleFont(self: ?*anyopaque) ?*C.QFont {
        return C.QAbstractAxis_TitleFont(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleText)
    ///
    /// ``` self: ?*C.QColorAxis, title: []const u8 ```
    pub fn SetTitleText(self: ?*anyopaque, title: []const u8) void {
        const title_str = C.struct_libqt_string{
            .len = title.len,
            .data = @constCast(title.ptr),
        };
        C.QAbstractAxis_SetTitleText(@ptrCast(self), title_str);
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleText)
    ///
    /// ``` self: ?*C.QColorAxis, allocator: std.mem.Allocator ```
    pub fn TitleText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QAbstractAxis_TitleText(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisible)
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn ShadesVisible(self: ?*anyopaque) bool {
        return C.QAbstractAxis_ShadesVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesVisible)
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn SetShadesVisible(self: ?*anyopaque) void {
        C.QAbstractAxis_SetShadesVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesPen)
    ///
    /// ``` self: ?*C.QColorAxis, pen: ?*C.QPen ```
    pub fn SetShadesPen(self: ?*anyopaque, pen: ?*anyopaque) void {
        C.QAbstractAxis_SetShadesPen(@ptrCast(self), @ptrCast(pen));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPen)
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn ShadesPen(self: ?*anyopaque) ?*C.QPen {
        return C.QAbstractAxis_ShadesPen(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesBrush)
    ///
    /// ``` self: ?*C.QColorAxis, brush: ?*C.QBrush ```
    pub fn SetShadesBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        C.QAbstractAxis_SetShadesBrush(@ptrCast(self), @ptrCast(brush));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrush)
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn ShadesBrush(self: ?*anyopaque) ?*C.QBrush {
        return C.QAbstractAxis_ShadesBrush(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesColor)
    ///
    /// ``` self: ?*C.QColorAxis, color: C.QColor ```
    pub fn SetShadesColor(self: ?*anyopaque, color: C.QColor) void {
        C.QAbstractAxis_SetShadesColor(@ptrCast(self), @ptrCast(color));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColor)
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn ShadesColor(self: ?*anyopaque) ?*C.QColor {
        return C.QAbstractAxis_ShadesColor(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesBorderColor)
    ///
    /// ``` self: ?*C.QColorAxis, color: C.QColor ```
    pub fn SetShadesBorderColor(self: ?*anyopaque, color: C.QColor) void {
        C.QAbstractAxis_SetShadesBorderColor(@ptrCast(self), @ptrCast(color));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColor)
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn ShadesBorderColor(self: ?*anyopaque) ?*C.QColor {
        return C.QAbstractAxis_ShadesBorderColor(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#orientation)
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn Orientation(self: ?*anyopaque) i64 {
        return C.QAbstractAxis_Orientation(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#alignment)
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn Alignment(self: ?*anyopaque) i64 {
        return C.QAbstractAxis_Alignment(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setReverse)
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn SetReverse(self: ?*anyopaque) void {
        C.QAbstractAxis_SetReverse(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isReverse)
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn IsReverse(self: ?*anyopaque) bool {
        return C.QAbstractAxis_IsReverse(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsEditable)
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn SetLabelsEditable(self: ?*anyopaque) void {
        C.QAbstractAxis_SetLabelsEditable(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditable)
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn LabelsEditable(self: ?*anyopaque) bool {
        return C.QAbstractAxis_LabelsEditable(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncated)
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn LabelsTruncated(self: ?*anyopaque) bool {
        return C.QAbstractAxis_LabelsTruncated(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTruncateLabels)
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn SetTruncateLabels(self: ?*anyopaque) void {
        C.QAbstractAxis_SetTruncateLabels(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabels)
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn TruncateLabels(self: ?*anyopaque) bool {
        return C.QAbstractAxis_TruncateLabels(@ptrCast(self));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#visibleChanged)
    ///
    /// ``` self: ?*C.QColorAxis, visible: bool ```
    pub fn VisibleChanged(self: ?*anyopaque, visible: bool) void {
        C.QAbstractAxis_VisibleChanged(@ptrCast(self), visible);
    }

    /// Inherited from QAbstractAxis
    ///
    /// ``` self: ?*C.QAbstractAxis, slot: fn (?*C.QAbstractAxis, bool) callconv(.c) void ```
    pub fn OnVisibleChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QAbstractAxis_Connect_VisibleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#linePenChanged)
    ///
    /// ``` self: ?*C.QColorAxis, pen: ?*C.QPen ```
    pub fn LinePenChanged(self: ?*anyopaque, pen: ?*anyopaque) void {
        C.QAbstractAxis_LinePenChanged(@ptrCast(self), @ptrCast(pen));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ``` self: ?*C.QAbstractAxis, slot: fn (?*C.QAbstractAxis, ?*C.QPen) callconv(.c) void ```
    pub fn OnLinePenChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QAbstractAxis_Connect_LinePenChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#lineVisibleChanged)
    ///
    /// ``` self: ?*C.QColorAxis, visible: bool ```
    pub fn LineVisibleChanged(self: ?*anyopaque, visible: bool) void {
        C.QAbstractAxis_LineVisibleChanged(@ptrCast(self), visible);
    }

    /// Inherited from QAbstractAxis
    ///
    /// ``` self: ?*C.QAbstractAxis, slot: fn (?*C.QAbstractAxis, bool) callconv(.c) void ```
    pub fn OnLineVisibleChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QAbstractAxis_Connect_LineVisibleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisibleChanged)
    ///
    /// ``` self: ?*C.QColorAxis, visible: bool ```
    pub fn LabelsVisibleChanged(self: ?*anyopaque, visible: bool) void {
        C.QAbstractAxis_LabelsVisibleChanged(@ptrCast(self), visible);
    }

    /// Inherited from QAbstractAxis
    ///
    /// ``` self: ?*C.QAbstractAxis, slot: fn (?*C.QAbstractAxis, bool) callconv(.c) void ```
    pub fn OnLabelsVisibleChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QAbstractAxis_Connect_LabelsVisibleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrushChanged)
    ///
    /// ``` self: ?*C.QColorAxis, brush: ?*C.QBrush ```
    pub fn LabelsBrushChanged(self: ?*anyopaque, brush: ?*anyopaque) void {
        C.QAbstractAxis_LabelsBrushChanged(@ptrCast(self), @ptrCast(brush));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ``` self: ?*C.QAbstractAxis, slot: fn (?*C.QAbstractAxis, ?*C.QBrush) callconv(.c) void ```
    pub fn OnLabelsBrushChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QAbstractAxis_Connect_LabelsBrushChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFontChanged)
    ///
    /// ``` self: ?*C.QColorAxis, pen: ?*C.QFont ```
    pub fn LabelsFontChanged(self: ?*anyopaque, pen: ?*anyopaque) void {
        C.QAbstractAxis_LabelsFontChanged(@ptrCast(self), @ptrCast(pen));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ``` self: ?*C.QAbstractAxis, slot: fn (?*C.QAbstractAxis, ?*C.QFont) callconv(.c) void ```
    pub fn OnLabelsFontChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QAbstractAxis_Connect_LabelsFontChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngleChanged)
    ///
    /// ``` self: ?*C.QColorAxis, angle: i32 ```
    pub fn LabelsAngleChanged(self: ?*anyopaque, angle: i32) void {
        C.QAbstractAxis_LabelsAngleChanged(@ptrCast(self), @intCast(angle));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ``` self: ?*C.QAbstractAxis, slot: fn (?*C.QAbstractAxis, i32) callconv(.c) void ```
    pub fn OnLabelsAngleChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QAbstractAxis_Connect_LabelsAngleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePenChanged)
    ///
    /// ``` self: ?*C.QColorAxis, pen: ?*C.QPen ```
    pub fn GridLinePenChanged(self: ?*anyopaque, pen: ?*anyopaque) void {
        C.QAbstractAxis_GridLinePenChanged(@ptrCast(self), @ptrCast(pen));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ``` self: ?*C.QAbstractAxis, slot: fn (?*C.QAbstractAxis, ?*C.QPen) callconv(.c) void ```
    pub fn OnGridLinePenChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QAbstractAxis_Connect_GridLinePenChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridVisibleChanged)
    ///
    /// ``` self: ?*C.QColorAxis, visible: bool ```
    pub fn GridVisibleChanged(self: ?*anyopaque, visible: bool) void {
        C.QAbstractAxis_GridVisibleChanged(@ptrCast(self), visible);
    }

    /// Inherited from QAbstractAxis
    ///
    /// ``` self: ?*C.QAbstractAxis, slot: fn (?*C.QAbstractAxis, bool) callconv(.c) void ```
    pub fn OnGridVisibleChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QAbstractAxis_Connect_GridVisibleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridVisibleChanged)
    ///
    /// ``` self: ?*C.QColorAxis, visible: bool ```
    pub fn MinorGridVisibleChanged(self: ?*anyopaque, visible: bool) void {
        C.QAbstractAxis_MinorGridVisibleChanged(@ptrCast(self), visible);
    }

    /// Inherited from QAbstractAxis
    ///
    /// ``` self: ?*C.QAbstractAxis, slot: fn (?*C.QAbstractAxis, bool) callconv(.c) void ```
    pub fn OnMinorGridVisibleChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QAbstractAxis_Connect_MinorGridVisibleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePenChanged)
    ///
    /// ``` self: ?*C.QColorAxis, pen: ?*C.QPen ```
    pub fn MinorGridLinePenChanged(self: ?*anyopaque, pen: ?*anyopaque) void {
        C.QAbstractAxis_MinorGridLinePenChanged(@ptrCast(self), @ptrCast(pen));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ``` self: ?*C.QAbstractAxis, slot: fn (?*C.QAbstractAxis, ?*C.QPen) callconv(.c) void ```
    pub fn OnMinorGridLinePenChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QAbstractAxis_Connect_MinorGridLinePenChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColorChanged)
    ///
    /// ``` self: ?*C.QColorAxis, color: ?*C.QColor ```
    pub fn GridLineColorChanged(self: ?*anyopaque, color: ?*anyopaque) void {
        C.QAbstractAxis_GridLineColorChanged(@ptrCast(self), @ptrCast(color));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ``` self: ?*C.QAbstractAxis, slot: fn (?*C.QAbstractAxis, ?*C.QColor) callconv(.c) void ```
    pub fn OnGridLineColorChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QAbstractAxis_Connect_GridLineColorChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColorChanged)
    ///
    /// ``` self: ?*C.QColorAxis, color: ?*C.QColor ```
    pub fn MinorGridLineColorChanged(self: ?*anyopaque, color: ?*anyopaque) void {
        C.QAbstractAxis_MinorGridLineColorChanged(@ptrCast(self), @ptrCast(color));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ``` self: ?*C.QAbstractAxis, slot: fn (?*C.QAbstractAxis, ?*C.QColor) callconv(.c) void ```
    pub fn OnMinorGridLineColorChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QAbstractAxis_Connect_MinorGridLineColorChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#colorChanged)
    ///
    /// ``` self: ?*C.QColorAxis, color: C.QColor ```
    pub fn ColorChanged(self: ?*anyopaque, color: C.QColor) void {
        C.QAbstractAxis_ColorChanged(@ptrCast(self), @ptrCast(color));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ``` self: ?*C.QAbstractAxis, slot: fn (?*C.QAbstractAxis, C.QColor) callconv(.c) void ```
    pub fn OnColorChanged(self: ?*anyopaque, slot: fn (?*anyopaque, C.QColor) callconv(.c) void) void {
        C.QAbstractAxis_Connect_ColorChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColorChanged)
    ///
    /// ``` self: ?*C.QColorAxis, color: C.QColor ```
    pub fn LabelsColorChanged(self: ?*anyopaque, color: C.QColor) void {
        C.QAbstractAxis_LabelsColorChanged(@ptrCast(self), @ptrCast(color));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ``` self: ?*C.QAbstractAxis, slot: fn (?*C.QAbstractAxis, C.QColor) callconv(.c) void ```
    pub fn OnLabelsColorChanged(self: ?*anyopaque, slot: fn (?*anyopaque, C.QColor) callconv(.c) void) void {
        C.QAbstractAxis_Connect_LabelsColorChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleTextChanged)
    ///
    /// ``` self: ?*C.QColorAxis, title: []const u8 ```
    pub fn TitleTextChanged(self: ?*anyopaque, title: []const u8) void {
        const title_str = C.struct_libqt_string{
            .len = title.len,
            .data = @constCast(title.ptr),
        };
        C.QAbstractAxis_TitleTextChanged(@ptrCast(self), title_str);
    }

    /// Inherited from QAbstractAxis
    ///
    /// ``` self: ?*C.QAbstractAxis, slot: fn (?*C.QAbstractAxis, []const u8) callconv(.c) void ```
    pub fn OnTitleTextChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        C.QAbstractAxis_Connect_TitleTextChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrushChanged)
    ///
    /// ``` self: ?*C.QColorAxis, brush: ?*C.QBrush ```
    pub fn TitleBrushChanged(self: ?*anyopaque, brush: ?*anyopaque) void {
        C.QAbstractAxis_TitleBrushChanged(@ptrCast(self), @ptrCast(brush));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ``` self: ?*C.QAbstractAxis, slot: fn (?*C.QAbstractAxis, ?*C.QBrush) callconv(.c) void ```
    pub fn OnTitleBrushChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QAbstractAxis_Connect_TitleBrushChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleVisibleChanged)
    ///
    /// ``` self: ?*C.QColorAxis, visible: bool ```
    pub fn TitleVisibleChanged(self: ?*anyopaque, visible: bool) void {
        C.QAbstractAxis_TitleVisibleChanged(@ptrCast(self), visible);
    }

    /// Inherited from QAbstractAxis
    ///
    /// ``` self: ?*C.QAbstractAxis, slot: fn (?*C.QAbstractAxis, bool) callconv(.c) void ```
    pub fn OnTitleVisibleChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QAbstractAxis_Connect_TitleVisibleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleFontChanged)
    ///
    /// ``` self: ?*C.QColorAxis, font: ?*C.QFont ```
    pub fn TitleFontChanged(self: ?*anyopaque, font: ?*anyopaque) void {
        C.QAbstractAxis_TitleFontChanged(@ptrCast(self), @ptrCast(font));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ``` self: ?*C.QAbstractAxis, slot: fn (?*C.QAbstractAxis, ?*C.QFont) callconv(.c) void ```
    pub fn OnTitleFontChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QAbstractAxis_Connect_TitleFontChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisibleChanged)
    ///
    /// ``` self: ?*C.QColorAxis, visible: bool ```
    pub fn ShadesVisibleChanged(self: ?*anyopaque, visible: bool) void {
        C.QAbstractAxis_ShadesVisibleChanged(@ptrCast(self), visible);
    }

    /// Inherited from QAbstractAxis
    ///
    /// ``` self: ?*C.QAbstractAxis, slot: fn (?*C.QAbstractAxis, bool) callconv(.c) void ```
    pub fn OnShadesVisibleChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QAbstractAxis_Connect_ShadesVisibleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColorChanged)
    ///
    /// ``` self: ?*C.QColorAxis, color: C.QColor ```
    pub fn ShadesColorChanged(self: ?*anyopaque, color: C.QColor) void {
        C.QAbstractAxis_ShadesColorChanged(@ptrCast(self), @ptrCast(color));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ``` self: ?*C.QAbstractAxis, slot: fn (?*C.QAbstractAxis, C.QColor) callconv(.c) void ```
    pub fn OnShadesColorChanged(self: ?*anyopaque, slot: fn (?*anyopaque, C.QColor) callconv(.c) void) void {
        C.QAbstractAxis_Connect_ShadesColorChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColorChanged)
    ///
    /// ``` self: ?*C.QColorAxis, color: C.QColor ```
    pub fn ShadesBorderColorChanged(self: ?*anyopaque, color: C.QColor) void {
        C.QAbstractAxis_ShadesBorderColorChanged(@ptrCast(self), @ptrCast(color));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ``` self: ?*C.QAbstractAxis, slot: fn (?*C.QAbstractAxis, C.QColor) callconv(.c) void ```
    pub fn OnShadesBorderColorChanged(self: ?*anyopaque, slot: fn (?*anyopaque, C.QColor) callconv(.c) void) void {
        C.QAbstractAxis_Connect_ShadesBorderColorChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPenChanged)
    ///
    /// ``` self: ?*C.QColorAxis, pen: ?*C.QPen ```
    pub fn ShadesPenChanged(self: ?*anyopaque, pen: ?*anyopaque) void {
        C.QAbstractAxis_ShadesPenChanged(@ptrCast(self), @ptrCast(pen));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ``` self: ?*C.QAbstractAxis, slot: fn (?*C.QAbstractAxis, ?*C.QPen) callconv(.c) void ```
    pub fn OnShadesPenChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QAbstractAxis_Connect_ShadesPenChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrushChanged)
    ///
    /// ``` self: ?*C.QColorAxis, brush: ?*C.QBrush ```
    pub fn ShadesBrushChanged(self: ?*anyopaque, brush: ?*anyopaque) void {
        C.QAbstractAxis_ShadesBrushChanged(@ptrCast(self), @ptrCast(brush));
    }

    /// Inherited from QAbstractAxis
    ///
    /// ``` self: ?*C.QAbstractAxis, slot: fn (?*C.QAbstractAxis, ?*C.QBrush) callconv(.c) void ```
    pub fn OnShadesBrushChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QAbstractAxis_Connect_ShadesBrushChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#reverseChanged)
    ///
    /// ``` self: ?*C.QColorAxis, reverse: bool ```
    pub fn ReverseChanged(self: ?*anyopaque, reverse: bool) void {
        C.QAbstractAxis_ReverseChanged(@ptrCast(self), reverse);
    }

    /// Inherited from QAbstractAxis
    ///
    /// ``` self: ?*C.QAbstractAxis, slot: fn (?*C.QAbstractAxis, bool) callconv(.c) void ```
    pub fn OnReverseChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QAbstractAxis_Connect_ReverseChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditableChanged)
    ///
    /// ``` self: ?*C.QColorAxis, editable: bool ```
    pub fn LabelsEditableChanged(self: ?*anyopaque, editable: bool) void {
        C.QAbstractAxis_LabelsEditableChanged(@ptrCast(self), editable);
    }

    /// Inherited from QAbstractAxis
    ///
    /// ``` self: ?*C.QAbstractAxis, slot: fn (?*C.QAbstractAxis, bool) callconv(.c) void ```
    pub fn OnLabelsEditableChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QAbstractAxis_Connect_LabelsEditableChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncatedChanged)
    ///
    /// ``` self: ?*C.QColorAxis, labelsTruncated: bool ```
    pub fn LabelsTruncatedChanged(self: ?*anyopaque, labelsTruncated: bool) void {
        C.QAbstractAxis_LabelsTruncatedChanged(@ptrCast(self), labelsTruncated);
    }

    /// Inherited from QAbstractAxis
    ///
    /// ``` self: ?*C.QAbstractAxis, slot: fn (?*C.QAbstractAxis, bool) callconv(.c) void ```
    pub fn OnLabelsTruncatedChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QAbstractAxis_Connect_LabelsTruncatedChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabelsChanged)
    ///
    /// ``` self: ?*C.QColorAxis, truncateLabels: bool ```
    pub fn TruncateLabelsChanged(self: ?*anyopaque, truncateLabels: bool) void {
        C.QAbstractAxis_TruncateLabelsChanged(@ptrCast(self), truncateLabels);
    }

    /// Inherited from QAbstractAxis
    ///
    /// ``` self: ?*C.QAbstractAxis, slot: fn (?*C.QAbstractAxis, bool) callconv(.c) void ```
    pub fn OnTruncateLabelsChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QAbstractAxis_Connect_TruncateLabelsChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setVisible)
    ///
    /// ``` self: ?*C.QColorAxis, visible: bool ```
    pub fn SetVisible1(self: ?*anyopaque, visible: bool) void {
        C.QAbstractAxis_SetVisible1(@ptrCast(self), visible);
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLineVisible)
    ///
    /// ``` self: ?*C.QColorAxis, visible: bool ```
    pub fn SetLineVisible1(self: ?*anyopaque, visible: bool) void {
        C.QAbstractAxis_SetLineVisible1(@ptrCast(self), visible);
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineVisible)
    ///
    /// ``` self: ?*C.QColorAxis, visible: bool ```
    pub fn SetGridLineVisible1(self: ?*anyopaque, visible: bool) void {
        C.QAbstractAxis_SetGridLineVisible1(@ptrCast(self), visible);
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineVisible)
    ///
    /// ``` self: ?*C.QColorAxis, visible: bool ```
    pub fn SetMinorGridLineVisible1(self: ?*anyopaque, visible: bool) void {
        C.QAbstractAxis_SetMinorGridLineVisible1(@ptrCast(self), visible);
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsVisible)
    ///
    /// ``` self: ?*C.QColorAxis, visible: bool ```
    pub fn SetLabelsVisible1(self: ?*anyopaque, visible: bool) void {
        C.QAbstractAxis_SetLabelsVisible1(@ptrCast(self), visible);
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleVisible)
    ///
    /// ``` self: ?*C.QColorAxis, visible: bool ```
    pub fn SetTitleVisible1(self: ?*anyopaque, visible: bool) void {
        C.QAbstractAxis_SetTitleVisible1(@ptrCast(self), visible);
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesVisible)
    ///
    /// ``` self: ?*C.QColorAxis, visible: bool ```
    pub fn SetShadesVisible1(self: ?*anyopaque, visible: bool) void {
        C.QAbstractAxis_SetShadesVisible1(@ptrCast(self), visible);
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setReverse)
    ///
    /// ``` self: ?*C.QColorAxis, reverse: bool ```
    pub fn SetReverse1(self: ?*anyopaque, reverse: bool) void {
        C.QAbstractAxis_SetReverse1(@ptrCast(self), reverse);
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsEditable)
    ///
    /// ``` self: ?*C.QColorAxis, editable: bool ```
    pub fn SetLabelsEditable1(self: ?*anyopaque, editable: bool) void {
        C.QAbstractAxis_SetLabelsEditable1(@ptrCast(self), editable);
    }

    /// Inherited from QAbstractAxis
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTruncateLabels)
    ///
    /// ``` self: ?*C.QColorAxis, truncateLabels: bool ```
    pub fn SetTruncateLabels1(self: ?*anyopaque, truncateLabels: bool) void {
        C.QAbstractAxis_SetTruncateLabels1(@ptrCast(self), truncateLabels);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QColorAxis, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QObject_ObjectName(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: ?*C.QColorAxis, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QColorAxis, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QColorAxis, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QColorAxis, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QColorAxis, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QColorAxis, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QObject {
        const _arr: C.struct_libqt_list = C.QObject_Children(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QObject, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: ?*C.QColorAxis, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QColorAxis, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QColorAxis, obj: ?*C.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        C.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) ?*C.QMetaObject__Connection {
        return C.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QColorAxis, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, member: ?*C.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return C.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: ?*C.QMetaObject__Connection ```
    pub fn DisconnectWithQMetaObjectConnection(param1: ?*anyopaque) bool {
        return C.QObject_DisconnectWithQMetaObjectConnection(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QColorAxis, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QColorAxis, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QColorAxis, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: C.struct_libqt_list = C.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn Destroyed(self: ?*anyopaque) void {
        C.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QColorAxis, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QColorAxis, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer2(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return C.QObject_StartTimer2(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) ?*C.QMetaObject__Connection {
        return C.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QColorAxis, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QColorAxis, param1: ?*C.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject, ?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QColorAxis, event: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QColorAxis_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QColorAxis, event: ?*C.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QColorAxis_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QColorAxis, slot: fn (?*C.QColorAxis, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QColorAxis_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QColorAxis, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QColorAxis_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QColorAxis, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QColorAxis_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QColorAxis, slot: fn (?*C.QColorAxis, ?*C.QObject, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QColorAxis_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QColorAxis, event: ?*C.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QColorAxis_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QColorAxis, event: ?*C.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QColorAxis_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QColorAxis, slot: fn (?*C.QColorAxis, ?*C.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QColorAxis_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QColorAxis, event: ?*C.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QColorAxis_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QColorAxis, event: ?*C.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QColorAxis_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QColorAxis, slot: fn (?*C.QColorAxis, ?*C.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QColorAxis_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QColorAxis, event: ?*C.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QColorAxis_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QColorAxis, event: ?*C.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QColorAxis_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QColorAxis, slot: fn (?*C.QColorAxis, ?*C.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QColorAxis_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QColorAxis, signal: ?*C.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QColorAxis_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QColorAxis, signal: ?*C.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QColorAxis_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QColorAxis, slot: fn (?*C.QColorAxis, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QColorAxis_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QColorAxis, signal: ?*C.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QColorAxis_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QColorAxis, signal: ?*C.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QColorAxis_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QColorAxis, slot: fn (?*C.QColorAxis, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QColorAxis_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn Sender(self: ?*anyopaque) ?*C.QObject {
        return C.QColorAxis_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn QBaseSender(self: ?*anyopaque) ?*C.QObject {
        return C.QColorAxis_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QColorAxis, slot: fn () callconv(.c) ?*C.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QObject) void {
        C.QColorAxis_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QColorAxis_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QColorAxis_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QColorAxis, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QColorAxis_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QColorAxis, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QColorAxis_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QColorAxis, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QColorAxis_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QColorAxis, slot: fn (?*C.QColorAxis, []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        C.QColorAxis_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QColorAxis, signal: ?*C.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QColorAxis_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QColorAxis, signal: ?*C.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QColorAxis_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QColorAxis, slot: fn (?*C.QColorAxis, ?*C.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QColorAxis_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QColorAxis ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QColorAxis_Delete(@ptrCast(self));
    }
};
