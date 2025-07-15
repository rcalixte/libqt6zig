const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html
pub const qvboxplotmodelmapper = struct {
    /// New constructs a new QVBoxPlotModelMapper object.
    ///
    ///
    pub fn New() QtC.QVBoxPlotModelMapper {
        return qtc.QVBoxPlotModelMapper_new();
    }

    /// New2 constructs a new QVBoxPlotModelMapper object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New2(parent: ?*anyopaque) QtC.QVBoxPlotModelMapper {
        return qtc.QVBoxPlotModelMapper_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QVBoxPlotModelMapper_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QVBoxPlotModelMapper, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QVBoxPlotModelMapper_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QVBoxPlotModelMapper, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QVBoxPlotModelMapper_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, slot: fn (self: QtC.QVBoxPlotModelMapper, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QVBoxPlotModelMapper_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QVBoxPlotModelMapper_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QVBoxPlotModelMapper_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qvboxplotmodelmapper.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#model)
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper ```
    pub fn Model(self: ?*anyopaque) QtC.QAbstractItemModel {
        return qtc.QVBoxPlotModelMapper_Model(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#setModel)
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, model: QtC.QAbstractItemModel ```
    pub fn SetModel(self: ?*anyopaque, model: ?*anyopaque) void {
        qtc.QVBoxPlotModelMapper_SetModel(@ptrCast(self), @ptrCast(model));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#series)
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper ```
    pub fn Series(self: ?*anyopaque) QtC.QBoxPlotSeries {
        return qtc.QVBoxPlotModelMapper_Series(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#setSeries)
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, series: QtC.QBoxPlotSeries ```
    pub fn SetSeries(self: ?*anyopaque, series: ?*anyopaque) void {
        qtc.QVBoxPlotModelMapper_SetSeries(@ptrCast(self), @ptrCast(series));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#firstBoxSetColumn)
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper ```
    pub fn FirstBoxSetColumn(self: ?*anyopaque) i32 {
        return qtc.QVBoxPlotModelMapper_FirstBoxSetColumn(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#setFirstBoxSetColumn)
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, firstBoxSetColumn: i32 ```
    pub fn SetFirstBoxSetColumn(self: ?*anyopaque, firstBoxSetColumn: i32) void {
        qtc.QVBoxPlotModelMapper_SetFirstBoxSetColumn(@ptrCast(self), @intCast(firstBoxSetColumn));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#lastBoxSetColumn)
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper ```
    pub fn LastBoxSetColumn(self: ?*anyopaque) i32 {
        return qtc.QVBoxPlotModelMapper_LastBoxSetColumn(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#setLastBoxSetColumn)
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, lastBoxSetColumn: i32 ```
    pub fn SetLastBoxSetColumn(self: ?*anyopaque, lastBoxSetColumn: i32) void {
        qtc.QVBoxPlotModelMapper_SetLastBoxSetColumn(@ptrCast(self), @intCast(lastBoxSetColumn));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#firstRow)
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper ```
    pub fn FirstRow(self: ?*anyopaque) i32 {
        return qtc.QVBoxPlotModelMapper_FirstRow(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#setFirstRow)
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, firstRow: i32 ```
    pub fn SetFirstRow(self: ?*anyopaque, firstRow: i32) void {
        qtc.QVBoxPlotModelMapper_SetFirstRow(@ptrCast(self), @intCast(firstRow));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#rowCount)
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper ```
    pub fn RowCount(self: ?*anyopaque) i32 {
        return qtc.QVBoxPlotModelMapper_RowCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#setRowCount)
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, rowCount: i32 ```
    pub fn SetRowCount(self: ?*anyopaque, rowCount: i32) void {
        qtc.QVBoxPlotModelMapper_SetRowCount(@ptrCast(self), @intCast(rowCount));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#seriesReplaced)
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper ```
    pub fn SeriesReplaced(self: ?*anyopaque) void {
        qtc.QVBoxPlotModelMapper_SeriesReplaced(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#seriesReplaced)
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, slot: fn (self: QtC.QVBoxPlotModelMapper) callconv(.c) void ```
    pub fn OnSeriesReplaced(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QVBoxPlotModelMapper_Connect_SeriesReplaced(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#modelReplaced)
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper ```
    pub fn ModelReplaced(self: ?*anyopaque) void {
        qtc.QVBoxPlotModelMapper_ModelReplaced(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#modelReplaced)
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, slot: fn (self: QtC.QVBoxPlotModelMapper) callconv(.c) void ```
    pub fn OnModelReplaced(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QVBoxPlotModelMapper_Connect_ModelReplaced(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#firstBoxSetColumnChanged)
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper ```
    pub fn FirstBoxSetColumnChanged(self: ?*anyopaque) void {
        qtc.QVBoxPlotModelMapper_FirstBoxSetColumnChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#firstBoxSetColumnChanged)
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, slot: fn (self: QtC.QVBoxPlotModelMapper) callconv(.c) void ```
    pub fn OnFirstBoxSetColumnChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QVBoxPlotModelMapper_Connect_FirstBoxSetColumnChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#lastBoxSetColumnChanged)
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper ```
    pub fn LastBoxSetColumnChanged(self: ?*anyopaque) void {
        qtc.QVBoxPlotModelMapper_LastBoxSetColumnChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#lastBoxSetColumnChanged)
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, slot: fn (self: QtC.QVBoxPlotModelMapper) callconv(.c) void ```
    pub fn OnLastBoxSetColumnChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QVBoxPlotModelMapper_Connect_LastBoxSetColumnChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#firstRowChanged)
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper ```
    pub fn FirstRowChanged(self: ?*anyopaque) void {
        qtc.QVBoxPlotModelMapper_FirstRowChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#firstRowChanged)
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, slot: fn (self: QtC.QVBoxPlotModelMapper) callconv(.c) void ```
    pub fn OnFirstRowChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QVBoxPlotModelMapper_Connect_FirstRowChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#rowCountChanged)
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper ```
    pub fn RowCountChanged(self: ?*anyopaque) void {
        qtc.QVBoxPlotModelMapper_RowCountChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#rowCountChanged)
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, slot: fn (self: QtC.QVBoxPlotModelMapper) callconv(.c) void ```
    pub fn OnRowCountChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QVBoxPlotModelMapper_Connect_RowCountChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QVBoxPlotModelMapper_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qvboxplotmodelmapper.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QVBoxPlotModelMapper_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qvboxplotmodelmapper.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qvboxplotmodelmapper.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, name: []const u8 ```
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
    /// ``` self: QtC.QVBoxPlotModelMapper ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i64) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.struct_libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qvboxplotmodelmapper.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, obj: QtC.QObject ```
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
    /// ``` self: QtC.QVBoxPlotModelMapper, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.QVBoxPlotModelMapper ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.struct_libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qvboxplotmodelmapper.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qvboxplotmodelmapper.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper ```
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
    /// ``` self: QtC.QVBoxPlotModelMapper ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.QVBoxPlotModelMapper, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, param1: QtC.QObject ```
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
    /// ``` self: QtC.QVBoxPlotModelMapper, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QVBoxPlotModelMapper_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QVBoxPlotModelMapper_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, slot: fn (self: QtC.QVBoxPlotModelMapper, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QVBoxPlotModelMapper_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QVBoxPlotModelMapper_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QVBoxPlotModelMapper_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, slot: fn (self: QtC.QVBoxPlotModelMapper, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QVBoxPlotModelMapper_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QVBoxPlotModelMapper_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QVBoxPlotModelMapper_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, slot: fn (self: QtC.QVBoxPlotModelMapper, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QVBoxPlotModelMapper_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QVBoxPlotModelMapper_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QVBoxPlotModelMapper_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, slot: fn (self: QtC.QVBoxPlotModelMapper, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QVBoxPlotModelMapper_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QVBoxPlotModelMapper_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QVBoxPlotModelMapper_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, slot: fn (self: QtC.QVBoxPlotModelMapper, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QVBoxPlotModelMapper_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QVBoxPlotModelMapper_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QVBoxPlotModelMapper_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, slot: fn (self: QtC.QVBoxPlotModelMapper, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QVBoxPlotModelMapper_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QVBoxPlotModelMapper_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QVBoxPlotModelMapper_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, slot: fn (self: QtC.QVBoxPlotModelMapper, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QVBoxPlotModelMapper_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#first)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper ```
    pub fn First(self: ?*anyopaque) i32 {
        return qtc.QVBoxPlotModelMapper_First(@ptrCast(self));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#first)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper ```
    pub fn QBaseFirst(self: ?*anyopaque) i32 {
        return qtc.QVBoxPlotModelMapper_QBaseFirst(@ptrCast(self));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#first)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, slot: fn () callconv(.c) i32 ```
    pub fn OnFirst(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QVBoxPlotModelMapper_OnFirst(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setFirst)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, first: i32 ```
    pub fn SetFirst(self: ?*anyopaque, first: i32) void {
        qtc.QVBoxPlotModelMapper_SetFirst(@ptrCast(self), @intCast(first));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setFirst)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, first: i32 ```
    pub fn QBaseSetFirst(self: ?*anyopaque, first: i32) void {
        qtc.QVBoxPlotModelMapper_QBaseSetFirst(@ptrCast(self), @intCast(first));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setFirst)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, slot: fn (self: QtC.QVBoxPlotModelMapper, first: i32) callconv(.c) void ```
    pub fn OnSetFirst(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QVBoxPlotModelMapper_OnSetFirst(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#count)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper ```
    pub fn Count(self: ?*anyopaque) i32 {
        return qtc.QVBoxPlotModelMapper_Count(@ptrCast(self));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#count)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper ```
    pub fn QBaseCount(self: ?*anyopaque) i32 {
        return qtc.QVBoxPlotModelMapper_QBaseCount(@ptrCast(self));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#count)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, slot: fn () callconv(.c) i32 ```
    pub fn OnCount(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QVBoxPlotModelMapper_OnCount(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setCount)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, count: i32 ```
    pub fn SetCount(self: ?*anyopaque, count: i32) void {
        qtc.QVBoxPlotModelMapper_SetCount(@ptrCast(self), @intCast(count));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setCount)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, count: i32 ```
    pub fn QBaseSetCount(self: ?*anyopaque, count: i32) void {
        qtc.QVBoxPlotModelMapper_QBaseSetCount(@ptrCast(self), @intCast(count));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setCount)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, slot: fn (self: QtC.QVBoxPlotModelMapper, count: i32) callconv(.c) void ```
    pub fn OnSetCount(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QVBoxPlotModelMapper_OnSetCount(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#firstBoxSetSection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper ```
    pub fn FirstBoxSetSection(self: ?*anyopaque) i32 {
        return qtc.QVBoxPlotModelMapper_FirstBoxSetSection(@ptrCast(self));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#firstBoxSetSection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper ```
    pub fn QBaseFirstBoxSetSection(self: ?*anyopaque) i32 {
        return qtc.QVBoxPlotModelMapper_QBaseFirstBoxSetSection(@ptrCast(self));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#firstBoxSetSection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, slot: fn () callconv(.c) i32 ```
    pub fn OnFirstBoxSetSection(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QVBoxPlotModelMapper_OnFirstBoxSetSection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setFirstBoxSetSection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, firstBoxSetSection: i32 ```
    pub fn SetFirstBoxSetSection(self: ?*anyopaque, firstBoxSetSection: i32) void {
        qtc.QVBoxPlotModelMapper_SetFirstBoxSetSection(@ptrCast(self), @intCast(firstBoxSetSection));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setFirstBoxSetSection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, firstBoxSetSection: i32 ```
    pub fn QBaseSetFirstBoxSetSection(self: ?*anyopaque, firstBoxSetSection: i32) void {
        qtc.QVBoxPlotModelMapper_QBaseSetFirstBoxSetSection(@ptrCast(self), @intCast(firstBoxSetSection));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setFirstBoxSetSection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, slot: fn (self: QtC.QVBoxPlotModelMapper, firstBoxSetSection: i32) callconv(.c) void ```
    pub fn OnSetFirstBoxSetSection(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QVBoxPlotModelMapper_OnSetFirstBoxSetSection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#lastBoxSetSection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper ```
    pub fn LastBoxSetSection(self: ?*anyopaque) i32 {
        return qtc.QVBoxPlotModelMapper_LastBoxSetSection(@ptrCast(self));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#lastBoxSetSection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper ```
    pub fn QBaseLastBoxSetSection(self: ?*anyopaque) i32 {
        return qtc.QVBoxPlotModelMapper_QBaseLastBoxSetSection(@ptrCast(self));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#lastBoxSetSection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, slot: fn () callconv(.c) i32 ```
    pub fn OnLastBoxSetSection(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QVBoxPlotModelMapper_OnLastBoxSetSection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setLastBoxSetSection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, lastBoxSetSection: i32 ```
    pub fn SetLastBoxSetSection(self: ?*anyopaque, lastBoxSetSection: i32) void {
        qtc.QVBoxPlotModelMapper_SetLastBoxSetSection(@ptrCast(self), @intCast(lastBoxSetSection));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setLastBoxSetSection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, lastBoxSetSection: i32 ```
    pub fn QBaseSetLastBoxSetSection(self: ?*anyopaque, lastBoxSetSection: i32) void {
        qtc.QVBoxPlotModelMapper_QBaseSetLastBoxSetSection(@ptrCast(self), @intCast(lastBoxSetSection));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setLastBoxSetSection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, slot: fn (self: QtC.QVBoxPlotModelMapper, lastBoxSetSection: i32) callconv(.c) void ```
    pub fn OnSetLastBoxSetSection(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QVBoxPlotModelMapper_OnSetLastBoxSetSection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#orientation)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper ```
    pub fn Orientation(self: ?*anyopaque) i64 {
        return qtc.QVBoxPlotModelMapper_Orientation(@ptrCast(self));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#orientation)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper ```
    pub fn QBaseOrientation(self: ?*anyopaque) i64 {
        return qtc.QVBoxPlotModelMapper_QBaseOrientation(@ptrCast(self));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#orientation)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, slot: fn () callconv(.c) i64 ```
    pub fn OnOrientation(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        qtc.QVBoxPlotModelMapper_OnOrientation(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setOrientation)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, orientation: qnamespace_enums.Orientation ```
    pub fn SetOrientation(self: ?*anyopaque, orientation: i64) void {
        qtc.QVBoxPlotModelMapper_SetOrientation(@ptrCast(self), @intCast(orientation));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setOrientation)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, orientation: qnamespace_enums.Orientation ```
    pub fn QBaseSetOrientation(self: ?*anyopaque, orientation: i64) void {
        qtc.QVBoxPlotModelMapper_QBaseSetOrientation(@ptrCast(self), @intCast(orientation));
    }

    /// Inherited from QBoxPlotModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setOrientation)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, slot: fn (self: QtC.QVBoxPlotModelMapper, orientation: qnamespace_enums.Orientation) callconv(.c) void ```
    pub fn OnSetOrientation(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QVBoxPlotModelMapper_OnSetOrientation(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QVBoxPlotModelMapper_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QVBoxPlotModelMapper_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.QVBoxPlotModelMapper_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QVBoxPlotModelMapper_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QVBoxPlotModelMapper_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QVBoxPlotModelMapper_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QVBoxPlotModelMapper_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QVBoxPlotModelMapper_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, slot: fn (self: QtC.QVBoxPlotModelMapper, signal: []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        qtc.QVBoxPlotModelMapper_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QVBoxPlotModelMapper_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QVBoxPlotModelMapper_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, slot: fn (self: QtC.QVBoxPlotModelMapper, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QVBoxPlotModelMapper_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper, slot: fn (self: QtC.QObject, objectName: []const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#dtor.QVBoxPlotModelMapper)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QVBoxPlotModelMapper ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QVBoxPlotModelMapper_Delete(@ptrCast(self));
    }
};
