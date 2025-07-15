const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qabstractseries_enums = @import("libqabstractseries.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qpieslice_enums = @import("libqpieslice.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qpieseries-qtcharts.html
pub const qpieseries = struct {
    /// New constructs a new QPieSeries object.
    ///
    ///
    pub fn New() QtC.QPieSeries {
        return qtc.QPieSeries_new();
    }

    /// New2 constructs a new QPieSeries object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New2(parent: ?*anyopaque) QtC.QPieSeries {
        return qtc.QPieSeries_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QPieSeries ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QPieSeries_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QPieSeries, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QPieSeries_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QPieSeries, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QPieSeries_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPieSeries, slot: fn (self: QtC.QPieSeries, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QPieSeries_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QPieSeries, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QPieSeries_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QPieSeries_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpieseries.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#type)
    ///
    /// ``` self: QtC.QPieSeries ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QPieSeries_Type(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#type)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QPieSeries, slot: fn () callconv(.c) i64 ```
    pub fn OnType(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        qtc.QPieSeries_OnType(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#type)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QPieSeries ```
    pub fn QBaseType(self: ?*anyopaque) i64 {
        return qtc.QPieSeries_QBaseType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#append)
    ///
    /// ``` self: QtC.QPieSeries, slice: QtC.QPieSlice ```
    pub fn Append(self: ?*anyopaque, slice: ?*anyopaque) bool {
        return qtc.QPieSeries_Append(@ptrCast(self), @ptrCast(slice));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#append)
    ///
    /// ``` self: QtC.QPieSeries, slices: []QtC.QPieSlice ```
    pub fn Append2(self: ?*anyopaque, slices: []?*anyopaque) bool {
        const slices_list = qtc.struct_libqt_list{
            .len = slices.len,
            .data = @ptrCast(slices.ptr),
        };
        return qtc.QPieSeries_Append2(@ptrCast(self), slices_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#operator<<)
    ///
    /// ``` self: QtC.QPieSeries, slice: QtC.QPieSlice ```
    pub fn OperatorShiftLeft(self: ?*anyopaque, slice: ?*anyopaque) QtC.QPieSeries {
        return qtc.QPieSeries_OperatorShiftLeft(@ptrCast(self), @ptrCast(slice));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#append)
    ///
    /// ``` self: QtC.QPieSeries, label: []const u8, value: f64 ```
    pub fn Append3(self: ?*anyopaque, label: []const u8, value: f64) QtC.QPieSlice {
        const label_str = qtc.struct_libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        return qtc.QPieSeries_Append3(@ptrCast(self), label_str, @floatCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#insert)
    ///
    /// ``` self: QtC.QPieSeries, index: i32, slice: QtC.QPieSlice ```
    pub fn Insert(self: ?*anyopaque, index: i32, slice: ?*anyopaque) bool {
        return qtc.QPieSeries_Insert(@ptrCast(self), @intCast(index), @ptrCast(slice));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#remove)
    ///
    /// ``` self: QtC.QPieSeries, slice: QtC.QPieSlice ```
    pub fn Remove(self: ?*anyopaque, slice: ?*anyopaque) bool {
        return qtc.QPieSeries_Remove(@ptrCast(self), @ptrCast(slice));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#take)
    ///
    /// ``` self: QtC.QPieSeries, slice: QtC.QPieSlice ```
    pub fn Take(self: ?*anyopaque, slice: ?*anyopaque) bool {
        return qtc.QPieSeries_Take(@ptrCast(self), @ptrCast(slice));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#clear)
    ///
    /// ``` self: QtC.QPieSeries ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QPieSeries_Clear(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#slices)
    ///
    /// ``` self: QtC.QPieSeries, allocator: std.mem.Allocator ```
    pub fn Slices(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QPieSlice {
        const _arr: qtc.struct_libqt_list = qtc.QPieSeries_Slices(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QPieSlice, _arr.len) catch @panic("qpieseries.Slices: Memory allocation failed");
        const _data: [*]QtC.QPieSlice = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#count)
    ///
    /// ``` self: QtC.QPieSeries ```
    pub fn Count(self: ?*anyopaque) i32 {
        return qtc.QPieSeries_Count(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#isEmpty)
    ///
    /// ``` self: QtC.QPieSeries ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QPieSeries_IsEmpty(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#sum)
    ///
    /// ``` self: QtC.QPieSeries ```
    pub fn Sum(self: ?*anyopaque) f64 {
        return qtc.QPieSeries_Sum(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#setHoleSize)
    ///
    /// ``` self: QtC.QPieSeries, holeSize: f64 ```
    pub fn SetHoleSize(self: ?*anyopaque, holeSize: f64) void {
        qtc.QPieSeries_SetHoleSize(@ptrCast(self), @floatCast(holeSize));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#holeSize)
    ///
    /// ``` self: QtC.QPieSeries ```
    pub fn HoleSize(self: ?*anyopaque) f64 {
        return qtc.QPieSeries_HoleSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#setHorizontalPosition)
    ///
    /// ``` self: QtC.QPieSeries, relativePosition: f64 ```
    pub fn SetHorizontalPosition(self: ?*anyopaque, relativePosition: f64) void {
        qtc.QPieSeries_SetHorizontalPosition(@ptrCast(self), @floatCast(relativePosition));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#horizontalPosition)
    ///
    /// ``` self: QtC.QPieSeries ```
    pub fn HorizontalPosition(self: ?*anyopaque) f64 {
        return qtc.QPieSeries_HorizontalPosition(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#setVerticalPosition)
    ///
    /// ``` self: QtC.QPieSeries, relativePosition: f64 ```
    pub fn SetVerticalPosition(self: ?*anyopaque, relativePosition: f64) void {
        qtc.QPieSeries_SetVerticalPosition(@ptrCast(self), @floatCast(relativePosition));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#verticalPosition)
    ///
    /// ``` self: QtC.QPieSeries ```
    pub fn VerticalPosition(self: ?*anyopaque) f64 {
        return qtc.QPieSeries_VerticalPosition(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#setPieSize)
    ///
    /// ``` self: QtC.QPieSeries, relativeSize: f64 ```
    pub fn SetPieSize(self: ?*anyopaque, relativeSize: f64) void {
        qtc.QPieSeries_SetPieSize(@ptrCast(self), @floatCast(relativeSize));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#pieSize)
    ///
    /// ``` self: QtC.QPieSeries ```
    pub fn PieSize(self: ?*anyopaque) f64 {
        return qtc.QPieSeries_PieSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#setPieStartAngle)
    ///
    /// ``` self: QtC.QPieSeries, startAngle: f64 ```
    pub fn SetPieStartAngle(self: ?*anyopaque, startAngle: f64) void {
        qtc.QPieSeries_SetPieStartAngle(@ptrCast(self), @floatCast(startAngle));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#pieStartAngle)
    ///
    /// ``` self: QtC.QPieSeries ```
    pub fn PieStartAngle(self: ?*anyopaque) f64 {
        return qtc.QPieSeries_PieStartAngle(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#setPieEndAngle)
    ///
    /// ``` self: QtC.QPieSeries, endAngle: f64 ```
    pub fn SetPieEndAngle(self: ?*anyopaque, endAngle: f64) void {
        qtc.QPieSeries_SetPieEndAngle(@ptrCast(self), @floatCast(endAngle));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#pieEndAngle)
    ///
    /// ``` self: QtC.QPieSeries ```
    pub fn PieEndAngle(self: ?*anyopaque) f64 {
        return qtc.QPieSeries_PieEndAngle(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#setLabelsVisible)
    ///
    /// ``` self: QtC.QPieSeries ```
    pub fn SetLabelsVisible(self: ?*anyopaque) void {
        qtc.QPieSeries_SetLabelsVisible(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#setLabelsPosition)
    ///
    /// ``` self: QtC.QPieSeries, position: qpieslice_enums.LabelPosition ```
    pub fn SetLabelsPosition(self: ?*anyopaque, position: i64) void {
        qtc.QPieSeries_SetLabelsPosition(@ptrCast(self), @intCast(position));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#added)
    ///
    /// ``` self: QtC.QPieSeries, slices: []QtC.QPieSlice ```
    pub fn Added(self: ?*anyopaque, slices: []?*anyopaque) void {
        const slices_list = qtc.struct_libqt_list{
            .len = slices.len,
            .data = @ptrCast(slices.ptr),
        };
        qtc.QPieSeries_Added(@ptrCast(self), slices_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#added)
    ///
    /// ``` self: QtC.QPieSeries, slot: fn (self: QtC.QPieSeries, slices: []QtC.QPieSlice) callconv(.c) void ```
    pub fn OnAdded(self: ?*anyopaque, slot: fn (?*anyopaque, []?*anyopaque) callconv(.c) void) void {
        qtc.QPieSeries_Connect_Added(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#removed)
    ///
    /// ``` self: QtC.QPieSeries, slices: []QtC.QPieSlice ```
    pub fn Removed(self: ?*anyopaque, slices: []?*anyopaque) void {
        const slices_list = qtc.struct_libqt_list{
            .len = slices.len,
            .data = @ptrCast(slices.ptr),
        };
        qtc.QPieSeries_Removed(@ptrCast(self), slices_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#removed)
    ///
    /// ``` self: QtC.QPieSeries, slot: fn (self: QtC.QPieSeries, slices: []QtC.QPieSlice) callconv(.c) void ```
    pub fn OnRemoved(self: ?*anyopaque, slot: fn (?*anyopaque, []?*anyopaque) callconv(.c) void) void {
        qtc.QPieSeries_Connect_Removed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#clicked)
    ///
    /// ``` self: QtC.QPieSeries, slice: QtC.QPieSlice ```
    pub fn Clicked(self: ?*anyopaque, slice: ?*anyopaque) void {
        qtc.QPieSeries_Clicked(@ptrCast(self), @ptrCast(slice));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#clicked)
    ///
    /// ``` self: QtC.QPieSeries, slot: fn (self: QtC.QPieSeries, slice: QtC.QPieSlice) callconv(.c) void ```
    pub fn OnClicked(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPieSeries_Connect_Clicked(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#hovered)
    ///
    /// ``` self: QtC.QPieSeries, slice: QtC.QPieSlice, state: bool ```
    pub fn Hovered(self: ?*anyopaque, slice: ?*anyopaque, state: bool) void {
        qtc.QPieSeries_Hovered(@ptrCast(self), @ptrCast(slice), state);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#hovered)
    ///
    /// ``` self: QtC.QPieSeries, slot: fn (self: QtC.QPieSeries, slice: QtC.QPieSlice, state: bool) callconv(.c) void ```
    pub fn OnHovered(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, bool) callconv(.c) void) void {
        qtc.QPieSeries_Connect_Hovered(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#pressed)
    ///
    /// ``` self: QtC.QPieSeries, slice: QtC.QPieSlice ```
    pub fn Pressed(self: ?*anyopaque, slice: ?*anyopaque) void {
        qtc.QPieSeries_Pressed(@ptrCast(self), @ptrCast(slice));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#pressed)
    ///
    /// ``` self: QtC.QPieSeries, slot: fn (self: QtC.QPieSeries, slice: QtC.QPieSlice) callconv(.c) void ```
    pub fn OnPressed(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPieSeries_Connect_Pressed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#released)
    ///
    /// ``` self: QtC.QPieSeries, slice: QtC.QPieSlice ```
    pub fn Released(self: ?*anyopaque, slice: ?*anyopaque) void {
        qtc.QPieSeries_Released(@ptrCast(self), @ptrCast(slice));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#released)
    ///
    /// ``` self: QtC.QPieSeries, slot: fn (self: QtC.QPieSeries, slice: QtC.QPieSlice) callconv(.c) void ```
    pub fn OnReleased(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPieSeries_Connect_Released(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#doubleClicked)
    ///
    /// ``` self: QtC.QPieSeries, slice: QtC.QPieSlice ```
    pub fn DoubleClicked(self: ?*anyopaque, slice: ?*anyopaque) void {
        qtc.QPieSeries_DoubleClicked(@ptrCast(self), @ptrCast(slice));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#doubleClicked)
    ///
    /// ``` self: QtC.QPieSeries, slot: fn (self: QtC.QPieSeries, slice: QtC.QPieSlice) callconv(.c) void ```
    pub fn OnDoubleClicked(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPieSeries_Connect_DoubleClicked(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#countChanged)
    ///
    /// ``` self: QtC.QPieSeries ```
    pub fn CountChanged(self: ?*anyopaque) void {
        qtc.QPieSeries_CountChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#countChanged)
    ///
    /// ``` self: QtC.QPieSeries, slot: fn (self: QtC.QPieSeries) callconv(.c) void ```
    pub fn OnCountChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QPieSeries_Connect_CountChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#sumChanged)
    ///
    /// ``` self: QtC.QPieSeries ```
    pub fn SumChanged(self: ?*anyopaque) void {
        qtc.QPieSeries_SumChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#sumChanged)
    ///
    /// ``` self: QtC.QPieSeries, slot: fn (self: QtC.QPieSeries) callconv(.c) void ```
    pub fn OnSumChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QPieSeries_Connect_SumChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QPieSeries_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpieseries.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QPieSeries_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpieseries.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#setLabelsVisible)
    ///
    /// ``` self: QtC.QPieSeries, visible: bool ```
    pub fn SetLabelsVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QPieSeries_SetLabelsVisible1(@ptrCast(self), visible);
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setName)
    ///
    /// ``` self: QtC.QPieSeries, name: []const u8 ```
    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QAbstractSeries_SetName(@ptrCast(self), name_str);
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#name)
    ///
    /// ``` self: QtC.QPieSeries, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractSeries_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpieseries.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
    ///
    /// ``` self: QtC.QPieSeries ```
    pub fn SetVisible(self: ?*anyopaque) void {
        qtc.QAbstractSeries_SetVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#isVisible)
    ///
    /// ``` self: QtC.QPieSeries ```
    pub fn IsVisible(self: ?*anyopaque) bool {
        return qtc.QAbstractSeries_IsVisible(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacity)
    ///
    /// ``` self: QtC.QPieSeries ```
    pub fn Opacity(self: ?*anyopaque) f64 {
        return qtc.QAbstractSeries_Opacity(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setOpacity)
    ///
    /// ``` self: QtC.QPieSeries, opacity: f64 ```
    pub fn SetOpacity(self: ?*anyopaque, opacity: f64) void {
        qtc.QAbstractSeries_SetOpacity(@ptrCast(self), @floatCast(opacity));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
    ///
    /// ``` self: QtC.QPieSeries ```
    pub fn SetUseOpenGL(self: ?*anyopaque) void {
        qtc.QAbstractSeries_SetUseOpenGL(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGL)
    ///
    /// ``` self: QtC.QPieSeries ```
    pub fn UseOpenGL(self: ?*anyopaque) bool {
        return qtc.QAbstractSeries_UseOpenGL(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#chart)
    ///
    /// ``` self: QtC.QPieSeries ```
    pub fn Chart(self: ?*anyopaque) QtC.QChart {
        return qtc.QAbstractSeries_Chart(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachAxis)
    ///
    /// ``` self: QtC.QPieSeries, axis: QtC.QAbstractAxis ```
    pub fn AttachAxis(self: ?*anyopaque, axis: ?*anyopaque) bool {
        return qtc.QAbstractSeries_AttachAxis(@ptrCast(self), @ptrCast(axis));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#detachAxis)
    ///
    /// ``` self: QtC.QPieSeries, axis: QtC.QAbstractAxis ```
    pub fn DetachAxis(self: ?*anyopaque, axis: ?*anyopaque) bool {
        return qtc.QAbstractSeries_DetachAxis(@ptrCast(self), @ptrCast(axis));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachedAxes)
    ///
    /// ``` self: QtC.QPieSeries, allocator: std.mem.Allocator ```
    pub fn AttachedAxes(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QAbstractAxis {
        const _arr: qtc.struct_libqt_list = qtc.QAbstractSeries_AttachedAxes(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QAbstractAxis, _arr.len) catch @panic("qpieseries.AttachedAxes: Memory allocation failed");
        const _data: [*]QtC.QAbstractAxis = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#show)
    ///
    /// ``` self: QtC.QPieSeries ```
    pub fn Show(self: ?*anyopaque) void {
        qtc.QAbstractSeries_Show(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#hide)
    ///
    /// ``` self: QtC.QPieSeries ```
    pub fn Hide(self: ?*anyopaque) void {
        qtc.QAbstractSeries_Hide(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
    ///
    /// ``` self: QtC.QPieSeries ```
    pub fn NameChanged(self: ?*anyopaque) void {
        qtc.QAbstractSeries_NameChanged(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
    ///
    /// ``` self: QtC.QAbstractSeries, slot: fn (self: QtC.QAbstractSeries) callconv(.c) void ```
    pub fn OnNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_NameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
    ///
    /// ``` self: QtC.QPieSeries ```
    pub fn VisibleChanged(self: ?*anyopaque) void {
        qtc.QAbstractSeries_VisibleChanged(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
    ///
    /// ``` self: QtC.QAbstractSeries, slot: fn (self: QtC.QAbstractSeries) callconv(.c) void ```
    pub fn OnVisibleChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_VisibleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
    ///
    /// ``` self: QtC.QPieSeries ```
    pub fn OpacityChanged(self: ?*anyopaque) void {
        qtc.QAbstractSeries_OpacityChanged(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
    ///
    /// ``` self: QtC.QAbstractSeries, slot: fn (self: QtC.QAbstractSeries) callconv(.c) void ```
    pub fn OnOpacityChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_OpacityChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
    ///
    /// ``` self: QtC.QPieSeries ```
    pub fn UseOpenGLChanged(self: ?*anyopaque) void {
        qtc.QAbstractSeries_UseOpenGLChanged(@ptrCast(self));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
    ///
    /// ``` self: QtC.QAbstractSeries, slot: fn (self: QtC.QAbstractSeries) callconv(.c) void ```
    pub fn OnUseOpenGLChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSeries_Connect_UseOpenGLChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
    ///
    /// ``` self: QtC.QPieSeries, visible: bool ```
    pub fn SetVisible1(self: ?*anyopaque, visible: bool) void {
        qtc.QAbstractSeries_SetVisible1(@ptrCast(self), visible);
    }

    /// Inherited from QAbstractSeries
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
    ///
    /// ``` self: QtC.QPieSeries, enable: bool ```
    pub fn SetUseOpenGL1(self: ?*anyopaque, enable: bool) void {
        qtc.QAbstractSeries_SetUseOpenGL1(@ptrCast(self), enable);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QPieSeries, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpieseries.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QPieSeries, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.QPieSeries ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QPieSeries ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QPieSeries ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QPieSeries ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QPieSeries, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QPieSeries ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QPieSeries, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QPieSeries, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QPieSeries, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QPieSeries, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i64) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QPieSeries, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.struct_libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qpieseries.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QPieSeries, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QPieSeries, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QPieSeries, obj: QtC.QObject ```
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
    /// ``` self: QtC.QPieSeries, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
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
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.QPieSeries ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QPieSeries ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QPieSeries, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QPieSeries, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QPieSeries, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.struct_libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qpieseries.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qpieseries.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QPieSeries ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QPieSeries ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QPieSeries ```
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
    /// ``` self: QtC.QPieSeries ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QPieSeries, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QPieSeries ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QPieSeries, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QPieSeries, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
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
    /// ``` self: QtC.QPieSeries, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QPieSeries, param1: QtC.QObject ```
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
    /// ``` self: QtC.QPieSeries, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QPieSeries_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPieSeries, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QPieSeries_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPieSeries, slot: fn (self: QtC.QPieSeries, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPieSeries_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPieSeries, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QPieSeries_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPieSeries, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QPieSeries_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPieSeries, slot: fn (self: QtC.QPieSeries, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPieSeries_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPieSeries, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPieSeries_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPieSeries, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPieSeries_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPieSeries, slot: fn (self: QtC.QPieSeries, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPieSeries_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPieSeries, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPieSeries_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPieSeries, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPieSeries_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPieSeries, slot: fn (self: QtC.QPieSeries, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPieSeries_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPieSeries, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPieSeries_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPieSeries, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPieSeries_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPieSeries, slot: fn (self: QtC.QPieSeries, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPieSeries_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPieSeries, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QPieSeries_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPieSeries, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QPieSeries_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPieSeries, slot: fn (self: QtC.QPieSeries, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPieSeries_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPieSeries, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QPieSeries_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPieSeries, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QPieSeries_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPieSeries, slot: fn (self: QtC.QPieSeries, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPieSeries_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPieSeries ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QPieSeries_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPieSeries ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QPieSeries_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPieSeries, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.QPieSeries_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPieSeries ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QPieSeries_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPieSeries ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QPieSeries_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPieSeries, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QPieSeries_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPieSeries, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPieSeries_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPieSeries, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPieSeries_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPieSeries, slot: fn (self: QtC.QPieSeries, signal: []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        qtc.QPieSeries_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QPieSeries, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QPieSeries_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QPieSeries, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QPieSeries_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QPieSeries, slot: fn (self: QtC.QPieSeries, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPieSeries_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QPieSeries, slot: fn (self: QtC.QObject, objectName: []const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#dtor.QPieSeries)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QPieSeries ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPieSeries_Delete(@ptrCast(self));
    }
};
