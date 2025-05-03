const C = @import("qt6c");
const qabstractseries_enums = @import("libqabstractseries.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qcandlestickseries.html
pub const qcandlestickseries = struct {
    /// New constructs a new QCandlestickSeries object.
    ///
    ///
    pub fn New() ?*C.QCandlestickSeries {
        return C.QCandlestickSeries_new();
    }

    /// New2 constructs a new QCandlestickSeries object.
    ///
    /// ``` parent: ?*C.QObject ```
    pub fn New2(parent: ?*anyopaque) ?*C.QCandlestickSeries {
        return C.QCandlestickSeries_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QCandlestickSeries ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QCandlestickSeries_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QCandlestickSeries, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QCandlestickSeries_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QCandlestickSeries, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QCandlestickSeries_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QCandlestickSeries, slot: fn (?*C.QCandlestickSeries, qobjectdefs_enums.Call, i32, ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        C.QCandlestickSeries_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QCandlestickSeries, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QCandlestickSeries_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QCandlestickSeries_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#append)
    ///
    /// ``` self: ?*C.QCandlestickSeries, set: ?*C.QCandlestickSet ```
    pub fn Append(self: ?*anyopaque, set: ?*anyopaque) bool {
        return C.QCandlestickSeries_Append(@ptrCast(self), @ptrCast(set));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#remove)
    ///
    /// ``` self: ?*C.QCandlestickSeries, set: ?*C.QCandlestickSet ```
    pub fn Remove(self: ?*anyopaque, set: ?*anyopaque) bool {
        return C.QCandlestickSeries_Remove(@ptrCast(self), @ptrCast(set));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#append)
    ///
    /// ``` self: ?*C.QCandlestickSeries, sets: []?*C.QCandlestickSet ```
    pub fn AppendWithSets(self: ?*anyopaque, sets: []?*anyopaque) bool {
        const sets_list = C.struct_libqt_list{
            .len = sets.len,
            .data = @ptrCast(sets.ptr),
        };
        return C.QCandlestickSeries_AppendWithSets(@ptrCast(self), sets_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#remove)
    ///
    /// ``` self: ?*C.QCandlestickSeries, sets: []?*C.QCandlestickSet ```
    pub fn RemoveWithSets(self: ?*anyopaque, sets: []?*anyopaque) bool {
        const sets_list = C.struct_libqt_list{
            .len = sets.len,
            .data = @ptrCast(sets.ptr),
        };
        return C.QCandlestickSeries_RemoveWithSets(@ptrCast(self), sets_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#insert)
    ///
    /// ``` self: ?*C.QCandlestickSeries, index: i32, set: ?*C.QCandlestickSet ```
    pub fn Insert(self: ?*anyopaque, index: i32, set: ?*anyopaque) bool {
        return C.QCandlestickSeries_Insert(@ptrCast(self), @intCast(index), @ptrCast(set));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#take)
    ///
    /// ``` self: ?*C.QCandlestickSeries, set: ?*C.QCandlestickSet ```
    pub fn Take(self: ?*anyopaque, set: ?*anyopaque) bool {
        return C.QCandlestickSeries_Take(@ptrCast(self), @ptrCast(set));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#clear)
    ///
    /// ``` self: ?*C.QCandlestickSeries ```
    pub fn Clear(self: ?*anyopaque) void {
        C.QCandlestickSeries_Clear(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#sets)
    ///
    /// ``` self: ?*C.QCandlestickSeries, allocator: std.mem.Allocator ```
    pub fn Sets(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QCandlestickSet {
        const _arr: C.struct_libqt_list = C.QCandlestickSeries_Sets(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QCandlestickSet, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QCandlestickSet = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#count)
    ///
    /// ``` self: ?*C.QCandlestickSeries ```
    pub fn Count(self: ?*anyopaque) i32 {
        return C.QCandlestickSeries_Count(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#type)
    ///
    /// ``` self: ?*C.QCandlestickSeries ```
    pub fn Type(self: ?*anyopaque) i64 {
        return C.QCandlestickSeries_Type(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QCandlestickSeries, slot: fn () callconv(.c) i64 ```
    pub fn OnType(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        C.QCandlestickSeries_OnType(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QCandlestickSeries ```
    pub fn QBaseType(self: ?*anyopaque) i64 {
        return C.QCandlestickSeries_QBaseType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#setMaximumColumnWidth)
    ///
    /// ``` self: ?*C.QCandlestickSeries, maximumColumnWidth: f64 ```
    pub fn SetMaximumColumnWidth(self: ?*anyopaque, maximumColumnWidth: f64) void {
        C.QCandlestickSeries_SetMaximumColumnWidth(@ptrCast(self), @floatCast(maximumColumnWidth));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#maximumColumnWidth)
    ///
    /// ``` self: ?*C.QCandlestickSeries ```
    pub fn MaximumColumnWidth(self: ?*anyopaque) f64 {
        return C.QCandlestickSeries_MaximumColumnWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#setMinimumColumnWidth)
    ///
    /// ``` self: ?*C.QCandlestickSeries, minimumColumnWidth: f64 ```
    pub fn SetMinimumColumnWidth(self: ?*anyopaque, minimumColumnWidth: f64) void {
        C.QCandlestickSeries_SetMinimumColumnWidth(@ptrCast(self), @floatCast(minimumColumnWidth));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#minimumColumnWidth)
    ///
    /// ``` self: ?*C.QCandlestickSeries ```
    pub fn MinimumColumnWidth(self: ?*anyopaque) f64 {
        return C.QCandlestickSeries_MinimumColumnWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#setBodyWidth)
    ///
    /// ``` self: ?*C.QCandlestickSeries, bodyWidth: f64 ```
    pub fn SetBodyWidth(self: ?*anyopaque, bodyWidth: f64) void {
        C.QCandlestickSeries_SetBodyWidth(@ptrCast(self), @floatCast(bodyWidth));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#bodyWidth)
    ///
    /// ``` self: ?*C.QCandlestickSeries ```
    pub fn BodyWidth(self: ?*anyopaque) f64 {
        return C.QCandlestickSeries_BodyWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#setBodyOutlineVisible)
    ///
    /// ``` self: ?*C.QCandlestickSeries, bodyOutlineVisible: bool ```
    pub fn SetBodyOutlineVisible(self: ?*anyopaque, bodyOutlineVisible: bool) void {
        C.QCandlestickSeries_SetBodyOutlineVisible(@ptrCast(self), bodyOutlineVisible);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#bodyOutlineVisible)
    ///
    /// ``` self: ?*C.QCandlestickSeries ```
    pub fn BodyOutlineVisible(self: ?*anyopaque) bool {
        return C.QCandlestickSeries_BodyOutlineVisible(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#setCapsWidth)
    ///
    /// ``` self: ?*C.QCandlestickSeries, capsWidth: f64 ```
    pub fn SetCapsWidth(self: ?*anyopaque, capsWidth: f64) void {
        C.QCandlestickSeries_SetCapsWidth(@ptrCast(self), @floatCast(capsWidth));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#capsWidth)
    ///
    /// ``` self: ?*C.QCandlestickSeries ```
    pub fn CapsWidth(self: ?*anyopaque) f64 {
        return C.QCandlestickSeries_CapsWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#setCapsVisible)
    ///
    /// ``` self: ?*C.QCandlestickSeries, capsVisible: bool ```
    pub fn SetCapsVisible(self: ?*anyopaque, capsVisible: bool) void {
        C.QCandlestickSeries_SetCapsVisible(@ptrCast(self), capsVisible);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#capsVisible)
    ///
    /// ``` self: ?*C.QCandlestickSeries ```
    pub fn CapsVisible(self: ?*anyopaque) bool {
        return C.QCandlestickSeries_CapsVisible(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#setIncreasingColor)
    ///
    /// ``` self: ?*C.QCandlestickSeries, increasingColor: ?*C.QColor ```
    pub fn SetIncreasingColor(self: ?*anyopaque, increasingColor: ?*anyopaque) void {
        C.QCandlestickSeries_SetIncreasingColor(@ptrCast(self), @ptrCast(increasingColor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#increasingColor)
    ///
    /// ``` self: ?*C.QCandlestickSeries ```
    pub fn IncreasingColor(self: ?*anyopaque) ?*C.QColor {
        return C.QCandlestickSeries_IncreasingColor(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#setDecreasingColor)
    ///
    /// ``` self: ?*C.QCandlestickSeries, decreasingColor: ?*C.QColor ```
    pub fn SetDecreasingColor(self: ?*anyopaque, decreasingColor: ?*anyopaque) void {
        C.QCandlestickSeries_SetDecreasingColor(@ptrCast(self), @ptrCast(decreasingColor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#decreasingColor)
    ///
    /// ``` self: ?*C.QCandlestickSeries ```
    pub fn DecreasingColor(self: ?*anyopaque) ?*C.QColor {
        return C.QCandlestickSeries_DecreasingColor(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#setBrush)
    ///
    /// ``` self: ?*C.QCandlestickSeries, brush: ?*C.QBrush ```
    pub fn SetBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        C.QCandlestickSeries_SetBrush(@ptrCast(self), @ptrCast(brush));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#brush)
    ///
    /// ``` self: ?*C.QCandlestickSeries ```
    pub fn Brush(self: ?*anyopaque) ?*C.QBrush {
        return C.QCandlestickSeries_Brush(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#setPen)
    ///
    /// ``` self: ?*C.QCandlestickSeries, pen: ?*C.QPen ```
    pub fn SetPen(self: ?*anyopaque, pen: ?*anyopaque) void {
        C.QCandlestickSeries_SetPen(@ptrCast(self), @ptrCast(pen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#pen)
    ///
    /// ``` self: ?*C.QCandlestickSeries ```
    pub fn Pen(self: ?*anyopaque) ?*C.QPen {
        return C.QCandlestickSeries_Pen(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#clicked)
    ///
    /// ``` self: ?*C.QCandlestickSeries, set: ?*C.QCandlestickSet ```
    pub fn Clicked(self: ?*anyopaque, set: ?*anyopaque) void {
        C.QCandlestickSeries_Clicked(@ptrCast(self), @ptrCast(set));
    }

    /// ``` self: ?*C.QCandlestickSeries, slot: fn (?*C.QCandlestickSeries, ?*C.QCandlestickSet) callconv(.c) void ```
    pub fn OnClicked(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QCandlestickSeries_Connect_Clicked(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#hovered)
    ///
    /// ``` self: ?*C.QCandlestickSeries, status: bool, set: ?*C.QCandlestickSet ```
    pub fn Hovered(self: ?*anyopaque, status: bool, set: ?*anyopaque) void {
        C.QCandlestickSeries_Hovered(@ptrCast(self), status, @ptrCast(set));
    }

    /// ``` self: ?*C.QCandlestickSeries, slot: fn (?*C.QCandlestickSeries, bool, ?*C.QCandlestickSet) callconv(.c) void ```
    pub fn OnHovered(self: ?*anyopaque, slot: fn (?*anyopaque, bool, ?*anyopaque) callconv(.c) void) void {
        C.QCandlestickSeries_Connect_Hovered(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#pressed)
    ///
    /// ``` self: ?*C.QCandlestickSeries, set: ?*C.QCandlestickSet ```
    pub fn Pressed(self: ?*anyopaque, set: ?*anyopaque) void {
        C.QCandlestickSeries_Pressed(@ptrCast(self), @ptrCast(set));
    }

    /// ``` self: ?*C.QCandlestickSeries, slot: fn (?*C.QCandlestickSeries, ?*C.QCandlestickSet) callconv(.c) void ```
    pub fn OnPressed(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QCandlestickSeries_Connect_Pressed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#released)
    ///
    /// ``` self: ?*C.QCandlestickSeries, set: ?*C.QCandlestickSet ```
    pub fn Released(self: ?*anyopaque, set: ?*anyopaque) void {
        C.QCandlestickSeries_Released(@ptrCast(self), @ptrCast(set));
    }

    /// ``` self: ?*C.QCandlestickSeries, slot: fn (?*C.QCandlestickSeries, ?*C.QCandlestickSet) callconv(.c) void ```
    pub fn OnReleased(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QCandlestickSeries_Connect_Released(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#doubleClicked)
    ///
    /// ``` self: ?*C.QCandlestickSeries, set: ?*C.QCandlestickSet ```
    pub fn DoubleClicked(self: ?*anyopaque, set: ?*anyopaque) void {
        C.QCandlestickSeries_DoubleClicked(@ptrCast(self), @ptrCast(set));
    }

    /// ``` self: ?*C.QCandlestickSeries, slot: fn (?*C.QCandlestickSeries, ?*C.QCandlestickSet) callconv(.c) void ```
    pub fn OnDoubleClicked(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QCandlestickSeries_Connect_DoubleClicked(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#candlestickSetsAdded)
    ///
    /// ``` self: ?*C.QCandlestickSeries, sets: []?*C.QCandlestickSet ```
    pub fn CandlestickSetsAdded(self: ?*anyopaque, sets: []?*anyopaque) void {
        const sets_list = C.struct_libqt_list{
            .len = sets.len,
            .data = @ptrCast(sets.ptr),
        };
        C.QCandlestickSeries_CandlestickSetsAdded(@ptrCast(self), sets_list);
    }

    /// ``` self: ?*C.QCandlestickSeries, slot: fn (?*C.QCandlestickSeries, []?*C.QCandlestickSet) callconv(.c) void ```
    pub fn OnCandlestickSetsAdded(self: ?*anyopaque, slot: fn (?*anyopaque, []?*anyopaque) callconv(.c) void) void {
        C.QCandlestickSeries_Connect_CandlestickSetsAdded(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#candlestickSetsRemoved)
    ///
    /// ``` self: ?*C.QCandlestickSeries, sets: []?*C.QCandlestickSet ```
    pub fn CandlestickSetsRemoved(self: ?*anyopaque, sets: []?*anyopaque) void {
        const sets_list = C.struct_libqt_list{
            .len = sets.len,
            .data = @ptrCast(sets.ptr),
        };
        C.QCandlestickSeries_CandlestickSetsRemoved(@ptrCast(self), sets_list);
    }

    /// ``` self: ?*C.QCandlestickSeries, slot: fn (?*C.QCandlestickSeries, []?*C.QCandlestickSet) callconv(.c) void ```
    pub fn OnCandlestickSetsRemoved(self: ?*anyopaque, slot: fn (?*anyopaque, []?*anyopaque) callconv(.c) void) void {
        C.QCandlestickSeries_Connect_CandlestickSetsRemoved(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#countChanged)
    ///
    /// ``` self: ?*C.QCandlestickSeries ```
    pub fn CountChanged(self: ?*anyopaque) void {
        C.QCandlestickSeries_CountChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QCandlestickSeries, slot: fn (?*C.QCandlestickSeries) callconv(.c) void ```
    pub fn OnCountChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QCandlestickSeries_Connect_CountChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#maximumColumnWidthChanged)
    ///
    /// ``` self: ?*C.QCandlestickSeries ```
    pub fn MaximumColumnWidthChanged(self: ?*anyopaque) void {
        C.QCandlestickSeries_MaximumColumnWidthChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QCandlestickSeries, slot: fn (?*C.QCandlestickSeries) callconv(.c) void ```
    pub fn OnMaximumColumnWidthChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QCandlestickSeries_Connect_MaximumColumnWidthChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#minimumColumnWidthChanged)
    ///
    /// ``` self: ?*C.QCandlestickSeries ```
    pub fn MinimumColumnWidthChanged(self: ?*anyopaque) void {
        C.QCandlestickSeries_MinimumColumnWidthChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QCandlestickSeries, slot: fn (?*C.QCandlestickSeries) callconv(.c) void ```
    pub fn OnMinimumColumnWidthChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QCandlestickSeries_Connect_MinimumColumnWidthChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#bodyWidthChanged)
    ///
    /// ``` self: ?*C.QCandlestickSeries ```
    pub fn BodyWidthChanged(self: ?*anyopaque) void {
        C.QCandlestickSeries_BodyWidthChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QCandlestickSeries, slot: fn (?*C.QCandlestickSeries) callconv(.c) void ```
    pub fn OnBodyWidthChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QCandlestickSeries_Connect_BodyWidthChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#bodyOutlineVisibilityChanged)
    ///
    /// ``` self: ?*C.QCandlestickSeries ```
    pub fn BodyOutlineVisibilityChanged(self: ?*anyopaque) void {
        C.QCandlestickSeries_BodyOutlineVisibilityChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QCandlestickSeries, slot: fn (?*C.QCandlestickSeries) callconv(.c) void ```
    pub fn OnBodyOutlineVisibilityChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QCandlestickSeries_Connect_BodyOutlineVisibilityChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#capsWidthChanged)
    ///
    /// ``` self: ?*C.QCandlestickSeries ```
    pub fn CapsWidthChanged(self: ?*anyopaque) void {
        C.QCandlestickSeries_CapsWidthChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QCandlestickSeries, slot: fn (?*C.QCandlestickSeries) callconv(.c) void ```
    pub fn OnCapsWidthChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QCandlestickSeries_Connect_CapsWidthChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#capsVisibilityChanged)
    ///
    /// ``` self: ?*C.QCandlestickSeries ```
    pub fn CapsVisibilityChanged(self: ?*anyopaque) void {
        C.QCandlestickSeries_CapsVisibilityChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QCandlestickSeries, slot: fn (?*C.QCandlestickSeries) callconv(.c) void ```
    pub fn OnCapsVisibilityChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QCandlestickSeries_Connect_CapsVisibilityChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#increasingColorChanged)
    ///
    /// ``` self: ?*C.QCandlestickSeries ```
    pub fn IncreasingColorChanged(self: ?*anyopaque) void {
        C.QCandlestickSeries_IncreasingColorChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QCandlestickSeries, slot: fn (?*C.QCandlestickSeries) callconv(.c) void ```
    pub fn OnIncreasingColorChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QCandlestickSeries_Connect_IncreasingColorChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#decreasingColorChanged)
    ///
    /// ``` self: ?*C.QCandlestickSeries ```
    pub fn DecreasingColorChanged(self: ?*anyopaque) void {
        C.QCandlestickSeries_DecreasingColorChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QCandlestickSeries, slot: fn (?*C.QCandlestickSeries) callconv(.c) void ```
    pub fn OnDecreasingColorChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QCandlestickSeries_Connect_DecreasingColorChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#brushChanged)
    ///
    /// ``` self: ?*C.QCandlestickSeries ```
    pub fn BrushChanged(self: ?*anyopaque) void {
        C.QCandlestickSeries_BrushChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QCandlestickSeries, slot: fn (?*C.QCandlestickSeries) callconv(.c) void ```
    pub fn OnBrushChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QCandlestickSeries_Connect_BrushChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#penChanged)
    ///
    /// ``` self: ?*C.QCandlestickSeries ```
    pub fn PenChanged(self: ?*anyopaque) void {
        C.QCandlestickSeries_PenChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QCandlestickSeries, slot: fn (?*C.QCandlestickSeries) callconv(.c) void ```
    pub fn OnPenChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QCandlestickSeries_Connect_PenChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QCandlestickSeries_Tr2(s_Cstring, c_Cstring);
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
        const _str = C.QCandlestickSeries_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setName)
    ///
    /// ``` self: ?*C.QCandlestickSeries, name: []const u8 ```
    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = C.struct_libqt_string{
            .len = name.len,
            .data = @constCast(name.ptr),
        };
        C.QAbstractSeries_SetName(@ptrCast(self), name_str);
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#name)
    ///
    /// ``` self: ?*C.QCandlestickSeries, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QAbstractSeries_Name(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
    ///
    /// ``` self: ?*C.QCandlestickSeries ```
    pub fn SetVisible(self: ?*anyopaque) void {
        C.QAbstractSeries_SetVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#isVisible)
    ///
    /// ``` self: ?*C.QCandlestickSeries ```
    pub fn IsVisible(self: ?*anyopaque) bool {
        return C.QAbstractSeries_IsVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacity)
    ///
    /// ``` self: ?*C.QCandlestickSeries ```
    pub fn Opacity(self: ?*anyopaque) f64 {
        return C.QAbstractSeries_Opacity(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setOpacity)
    ///
    /// ``` self: ?*C.QCandlestickSeries, opacity: f64 ```
    pub fn SetOpacity(self: ?*anyopaque, opacity: f64) void {
        C.QAbstractSeries_SetOpacity(@ptrCast(self), @floatCast(opacity));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
    ///
    /// ``` self: ?*C.QCandlestickSeries ```
    pub fn SetUseOpenGL(self: ?*anyopaque) void {
        C.QAbstractSeries_SetUseOpenGL(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGL)
    ///
    /// ``` self: ?*C.QCandlestickSeries ```
    pub fn UseOpenGL(self: ?*anyopaque) bool {
        return C.QAbstractSeries_UseOpenGL(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#chart)
    ///
    /// ``` self: ?*C.QCandlestickSeries ```
    pub fn Chart(self: ?*anyopaque) ?*C.QChart {
        return C.QAbstractSeries_Chart(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachAxis)
    ///
    /// ``` self: ?*C.QCandlestickSeries, axis: ?*C.QAbstractAxis ```
    pub fn AttachAxis(self: ?*anyopaque, axis: ?*anyopaque) bool {
        return C.QAbstractSeries_AttachAxis(@ptrCast(self), @ptrCast(axis));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#detachAxis)
    ///
    /// ``` self: ?*C.QCandlestickSeries, axis: ?*C.QAbstractAxis ```
    pub fn DetachAxis(self: ?*anyopaque, axis: ?*anyopaque) bool {
        return C.QAbstractSeries_DetachAxis(@ptrCast(self), @ptrCast(axis));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachedAxes)
    ///
    /// ``` self: ?*C.QCandlestickSeries, allocator: std.mem.Allocator ```
    pub fn AttachedAxes(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QAbstractAxis {
        const _arr: C.struct_libqt_list = C.QAbstractSeries_AttachedAxes(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QAbstractAxis, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QAbstractAxis = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#show)
    ///
    /// ``` self: ?*C.QCandlestickSeries ```
    pub fn Show(self: ?*anyopaque) void {
        C.QAbstractSeries_Show(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#hide)
    ///
    /// ``` self: ?*C.QCandlestickSeries ```
    pub fn Hide(self: ?*anyopaque) void {
        C.QAbstractSeries_Hide(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
    ///
    /// ``` self: ?*C.QCandlestickSeries ```
    pub fn NameChanged(self: ?*anyopaque) void {
        C.QAbstractSeries_NameChanged(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ``` self: ?*C.QAbstractSeries, slot: fn (?*C.QAbstractSeries) callconv(.c) void ```
    pub fn OnNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QAbstractSeries_Connect_NameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
    ///
    /// ``` self: ?*C.QCandlestickSeries ```
    pub fn VisibleChanged(self: ?*anyopaque) void {
        C.QAbstractSeries_VisibleChanged(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ``` self: ?*C.QAbstractSeries, slot: fn (?*C.QAbstractSeries) callconv(.c) void ```
    pub fn OnVisibleChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QAbstractSeries_Connect_VisibleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
    ///
    /// ``` self: ?*C.QCandlestickSeries ```
    pub fn OpacityChanged(self: ?*anyopaque) void {
        C.QAbstractSeries_OpacityChanged(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ``` self: ?*C.QAbstractSeries, slot: fn (?*C.QAbstractSeries) callconv(.c) void ```
    pub fn OnOpacityChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QAbstractSeries_Connect_OpacityChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
    ///
    /// ``` self: ?*C.QCandlestickSeries ```
    pub fn UseOpenGLChanged(self: ?*anyopaque) void {
        C.QAbstractSeries_UseOpenGLChanged(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// ``` self: ?*C.QAbstractSeries, slot: fn (?*C.QAbstractSeries) callconv(.c) void ```
    pub fn OnUseOpenGLChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QAbstractSeries_Connect_UseOpenGLChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
    ///
    /// ``` self: ?*C.QCandlestickSeries, visible: bool ```
    pub fn SetVisible1(self: ?*anyopaque, visible: bool) void {
        C.QAbstractSeries_SetVisible1(@ptrCast(self), visible);
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
    ///
    /// ``` self: ?*C.QCandlestickSeries, enable: bool ```
    pub fn SetUseOpenGL1(self: ?*anyopaque, enable: bool) void {
        C.QAbstractSeries_SetUseOpenGL1(@ptrCast(self), enable);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QCandlestickSeries, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QCandlestickSeries, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QCandlestickSeries ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QCandlestickSeries ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QCandlestickSeries ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QCandlestickSeries ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QCandlestickSeries, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QCandlestickSeries ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QCandlestickSeries, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QCandlestickSeries, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QCandlestickSeries, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QCandlestickSeries, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QCandlestickSeries, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QCandlestickSeries, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QCandlestickSeries, obj: ?*C.QObject ```
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
    /// ``` self: ?*C.QCandlestickSeries, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: ?*C.QCandlestickSeries ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QCandlestickSeries ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QCandlestickSeries, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QCandlestickSeries, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QCandlestickSeries, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QCandlestickSeries ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QCandlestickSeries ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QCandlestickSeries ```
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
    /// ``` self: ?*C.QCandlestickSeries ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QCandlestickSeries, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QCandlestickSeries ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QCandlestickSeries, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: ?*C.QCandlestickSeries, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QCandlestickSeries, param1: ?*C.QObject ```
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
    /// ``` self: ?*C.QCandlestickSeries, event: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QCandlestickSeries_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QCandlestickSeries, event: ?*C.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QCandlestickSeries_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QCandlestickSeries, slot: fn (?*C.QCandlestickSeries, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QCandlestickSeries_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QCandlestickSeries, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QCandlestickSeries_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QCandlestickSeries, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QCandlestickSeries_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QCandlestickSeries, slot: fn (?*C.QCandlestickSeries, ?*C.QObject, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QCandlestickSeries_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QCandlestickSeries, event: ?*C.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QCandlestickSeries_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QCandlestickSeries, event: ?*C.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QCandlestickSeries_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QCandlestickSeries, slot: fn (?*C.QCandlestickSeries, ?*C.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QCandlestickSeries_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QCandlestickSeries, event: ?*C.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QCandlestickSeries_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QCandlestickSeries, event: ?*C.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QCandlestickSeries_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QCandlestickSeries, slot: fn (?*C.QCandlestickSeries, ?*C.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QCandlestickSeries_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QCandlestickSeries, event: ?*C.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QCandlestickSeries_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QCandlestickSeries, event: ?*C.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QCandlestickSeries_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QCandlestickSeries, slot: fn (?*C.QCandlestickSeries, ?*C.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QCandlestickSeries_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QCandlestickSeries, signal: ?*C.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QCandlestickSeries_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QCandlestickSeries, signal: ?*C.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QCandlestickSeries_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QCandlestickSeries, slot: fn (?*C.QCandlestickSeries, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QCandlestickSeries_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QCandlestickSeries, signal: ?*C.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QCandlestickSeries_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QCandlestickSeries, signal: ?*C.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QCandlestickSeries_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QCandlestickSeries, slot: fn (?*C.QCandlestickSeries, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QCandlestickSeries_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QCandlestickSeries ```
    pub fn Sender(self: ?*anyopaque) ?*C.QObject {
        return C.QCandlestickSeries_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QCandlestickSeries ```
    pub fn QBaseSender(self: ?*anyopaque) ?*C.QObject {
        return C.QCandlestickSeries_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QCandlestickSeries, slot: fn () callconv(.c) ?*C.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QObject) void {
        C.QCandlestickSeries_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QCandlestickSeries ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QCandlestickSeries_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QCandlestickSeries ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QCandlestickSeries_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QCandlestickSeries, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QCandlestickSeries_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QCandlestickSeries, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QCandlestickSeries_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QCandlestickSeries, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QCandlestickSeries_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QCandlestickSeries, slot: fn (?*C.QCandlestickSeries, []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        C.QCandlestickSeries_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QCandlestickSeries, signal: ?*C.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QCandlestickSeries_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QCandlestickSeries, signal: ?*C.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QCandlestickSeries_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QCandlestickSeries, slot: fn (?*C.QCandlestickSeries, ?*C.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QCandlestickSeries_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QCandlestickSeries ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QCandlestickSeries_Delete(@ptrCast(self));
    }
};
