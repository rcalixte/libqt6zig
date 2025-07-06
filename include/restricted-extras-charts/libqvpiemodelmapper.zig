const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html
pub const qvpiemodelmapper = struct {
    /// New constructs a new QVPieModelMapper object.
    ///
    ///
    pub fn New() QtC.QVPieModelMapper {
        return qtc.QVPieModelMapper_new();
    }

    /// New2 constructs a new QVPieModelMapper object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New2(parent: ?*anyopaque) QtC.QVPieModelMapper {
        return qtc.QVPieModelMapper_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QVPieModelMapper ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QVPieModelMapper_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QVPieModelMapper, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QVPieModelMapper_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QVPieModelMapper, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QVPieModelMapper_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QVPieModelMapper, slot: fn (self: QtC.QVPieModelMapper, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QVPieModelMapper_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QVPieModelMapper, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QVPieModelMapper_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QVPieModelMapper_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qvpiemodelmapper.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#model)
    ///
    /// ``` self: QtC.QVPieModelMapper ```
    pub fn Model(self: ?*anyopaque) QtC.QAbstractItemModel {
        return qtc.QVPieModelMapper_Model(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#setModel)
    ///
    /// ``` self: QtC.QVPieModelMapper, model: QtC.QAbstractItemModel ```
    pub fn SetModel(self: ?*anyopaque, model: ?*anyopaque) void {
        qtc.QVPieModelMapper_SetModel(@ptrCast(self), @ptrCast(model));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#series)
    ///
    /// ``` self: QtC.QVPieModelMapper ```
    pub fn Series(self: ?*anyopaque) QtC.QPieSeries {
        return qtc.QVPieModelMapper_Series(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#setSeries)
    ///
    /// ``` self: QtC.QVPieModelMapper, series: QtC.QPieSeries ```
    pub fn SetSeries(self: ?*anyopaque, series: ?*anyopaque) void {
        qtc.QVPieModelMapper_SetSeries(@ptrCast(self), @ptrCast(series));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#valuesColumn)
    ///
    /// ``` self: QtC.QVPieModelMapper ```
    pub fn ValuesColumn(self: ?*anyopaque) i32 {
        return qtc.QVPieModelMapper_ValuesColumn(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#setValuesColumn)
    ///
    /// ``` self: QtC.QVPieModelMapper, valuesColumn: i32 ```
    pub fn SetValuesColumn(self: ?*anyopaque, valuesColumn: i32) void {
        qtc.QVPieModelMapper_SetValuesColumn(@ptrCast(self), @intCast(valuesColumn));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#labelsColumn)
    ///
    /// ``` self: QtC.QVPieModelMapper ```
    pub fn LabelsColumn(self: ?*anyopaque) i32 {
        return qtc.QVPieModelMapper_LabelsColumn(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#setLabelsColumn)
    ///
    /// ``` self: QtC.QVPieModelMapper, labelsColumn: i32 ```
    pub fn SetLabelsColumn(self: ?*anyopaque, labelsColumn: i32) void {
        qtc.QVPieModelMapper_SetLabelsColumn(@ptrCast(self), @intCast(labelsColumn));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#firstRow)
    ///
    /// ``` self: QtC.QVPieModelMapper ```
    pub fn FirstRow(self: ?*anyopaque) i32 {
        return qtc.QVPieModelMapper_FirstRow(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#setFirstRow)
    ///
    /// ``` self: QtC.QVPieModelMapper, firstRow: i32 ```
    pub fn SetFirstRow(self: ?*anyopaque, firstRow: i32) void {
        qtc.QVPieModelMapper_SetFirstRow(@ptrCast(self), @intCast(firstRow));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#rowCount)
    ///
    /// ``` self: QtC.QVPieModelMapper ```
    pub fn RowCount(self: ?*anyopaque) i32 {
        return qtc.QVPieModelMapper_RowCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#setRowCount)
    ///
    /// ``` self: QtC.QVPieModelMapper, rowCount: i32 ```
    pub fn SetRowCount(self: ?*anyopaque, rowCount: i32) void {
        qtc.QVPieModelMapper_SetRowCount(@ptrCast(self), @intCast(rowCount));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#seriesReplaced)
    ///
    /// ``` self: QtC.QVPieModelMapper ```
    pub fn SeriesReplaced(self: ?*anyopaque) void {
        qtc.QVPieModelMapper_SeriesReplaced(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#seriesReplaced)
    ///
    /// ``` self: QtC.QVPieModelMapper, slot: fn (self: QtC.QVPieModelMapper) callconv(.c) void ```
    pub fn OnSeriesReplaced(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QVPieModelMapper_Connect_SeriesReplaced(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#modelReplaced)
    ///
    /// ``` self: QtC.QVPieModelMapper ```
    pub fn ModelReplaced(self: ?*anyopaque) void {
        qtc.QVPieModelMapper_ModelReplaced(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#modelReplaced)
    ///
    /// ``` self: QtC.QVPieModelMapper, slot: fn (self: QtC.QVPieModelMapper) callconv(.c) void ```
    pub fn OnModelReplaced(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QVPieModelMapper_Connect_ModelReplaced(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#valuesColumnChanged)
    ///
    /// ``` self: QtC.QVPieModelMapper ```
    pub fn ValuesColumnChanged(self: ?*anyopaque) void {
        qtc.QVPieModelMapper_ValuesColumnChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#valuesColumnChanged)
    ///
    /// ``` self: QtC.QVPieModelMapper, slot: fn (self: QtC.QVPieModelMapper) callconv(.c) void ```
    pub fn OnValuesColumnChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QVPieModelMapper_Connect_ValuesColumnChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#labelsColumnChanged)
    ///
    /// ``` self: QtC.QVPieModelMapper ```
    pub fn LabelsColumnChanged(self: ?*anyopaque) void {
        qtc.QVPieModelMapper_LabelsColumnChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#labelsColumnChanged)
    ///
    /// ``` self: QtC.QVPieModelMapper, slot: fn (self: QtC.QVPieModelMapper) callconv(.c) void ```
    pub fn OnLabelsColumnChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QVPieModelMapper_Connect_LabelsColumnChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#firstRowChanged)
    ///
    /// ``` self: QtC.QVPieModelMapper ```
    pub fn FirstRowChanged(self: ?*anyopaque) void {
        qtc.QVPieModelMapper_FirstRowChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#firstRowChanged)
    ///
    /// ``` self: QtC.QVPieModelMapper, slot: fn (self: QtC.QVPieModelMapper) callconv(.c) void ```
    pub fn OnFirstRowChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QVPieModelMapper_Connect_FirstRowChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#rowCountChanged)
    ///
    /// ``` self: QtC.QVPieModelMapper ```
    pub fn RowCountChanged(self: ?*anyopaque) void {
        qtc.QVPieModelMapper_RowCountChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#rowCountChanged)
    ///
    /// ``` self: QtC.QVPieModelMapper, slot: fn (self: QtC.QVPieModelMapper) callconv(.c) void ```
    pub fn OnRowCountChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QVPieModelMapper_Connect_RowCountChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QVPieModelMapper_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qvpiemodelmapper.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QVPieModelMapper_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qvpiemodelmapper.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QVPieModelMapper, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qvpiemodelmapper.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QVPieModelMapper, name: []const u8 ```
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
    /// ``` self: QtC.QVPieModelMapper ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QVPieModelMapper ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QVPieModelMapper ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QVPieModelMapper ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QVPieModelMapper, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QVPieModelMapper ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QVPieModelMapper, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QVPieModelMapper, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QVPieModelMapper, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QVPieModelMapper, id: qnamespace_enums.TimerId ```
    pub fn KillTimerWithId(self: ?*anyopaque, id: i64) void {
        qtc.QObject_KillTimerWithId(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QVPieModelMapper, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.struct_libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qvpiemodelmapper.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QVPieModelMapper, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QVPieModelMapper, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QVPieModelMapper, obj: QtC.QObject ```
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
    /// ``` self: QtC.QVPieModelMapper, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    pub fn DisconnectWithQMetaObjectConnection(param1: ?*anyopaque) bool {
        return qtc.QObject_DisconnectWithQMetaObjectConnection(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.QVPieModelMapper ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QVPieModelMapper ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QVPieModelMapper, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QVPieModelMapper, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QVPieModelMapper, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.struct_libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qvpiemodelmapper.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qvpiemodelmapper.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QVPieModelMapper ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QVPieModelMapper ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QVPieModelMapper ```
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
    /// ``` self: QtC.QVPieModelMapper ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QVPieModelMapper, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QVPieModelMapper ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QVPieModelMapper, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QVPieModelMapper, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.QVPieModelMapper, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QVPieModelMapper, param1: QtC.QObject ```
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
    /// ``` self: QtC.QVPieModelMapper, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QVPieModelMapper_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QVPieModelMapper_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper, slot: fn (self: QtC.QVPieModelMapper, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QVPieModelMapper_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QVPieModelMapper_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QVPieModelMapper_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper, slot: fn (self: QtC.QVPieModelMapper, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QVPieModelMapper_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QVPieModelMapper_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QVPieModelMapper_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper, slot: fn (self: QtC.QVPieModelMapper, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QVPieModelMapper_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QVPieModelMapper_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QVPieModelMapper_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper, slot: fn (self: QtC.QVPieModelMapper, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QVPieModelMapper_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QVPieModelMapper_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QVPieModelMapper_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper, slot: fn (self: QtC.QVPieModelMapper, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QVPieModelMapper_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QVPieModelMapper_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QVPieModelMapper_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper, slot: fn (self: QtC.QVPieModelMapper, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QVPieModelMapper_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QVPieModelMapper_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QVPieModelMapper_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper, slot: fn (self: QtC.QVPieModelMapper, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QVPieModelMapper_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPieModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#first)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper ```
    pub fn First(self: ?*anyopaque) i32 {
        return qtc.QVPieModelMapper_First(@ptrCast(self));
    }

    /// Inherited from QPieModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#first)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper ```
    pub fn QBaseFirst(self: ?*anyopaque) i32 {
        return qtc.QVPieModelMapper_QBaseFirst(@ptrCast(self));
    }

    /// Inherited from QPieModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#first)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper, slot: fn () callconv(.c) i32 ```
    pub fn OnFirst(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QVPieModelMapper_OnFirst(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPieModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#setFirst)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper, first: i32 ```
    pub fn SetFirst(self: ?*anyopaque, first: i32) void {
        qtc.QVPieModelMapper_SetFirst(@ptrCast(self), @intCast(first));
    }

    /// Inherited from QPieModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#setFirst)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper, first: i32 ```
    pub fn QBaseSetFirst(self: ?*anyopaque, first: i32) void {
        qtc.QVPieModelMapper_QBaseSetFirst(@ptrCast(self), @intCast(first));
    }

    /// Inherited from QPieModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#setFirst)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper, slot: fn (self: QtC.QVPieModelMapper, first: i32) callconv(.c) void ```
    pub fn OnSetFirst(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QVPieModelMapper_OnSetFirst(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPieModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#count)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper ```
    pub fn Count(self: ?*anyopaque) i32 {
        return qtc.QVPieModelMapper_Count(@ptrCast(self));
    }

    /// Inherited from QPieModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#count)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper ```
    pub fn QBaseCount(self: ?*anyopaque) i32 {
        return qtc.QVPieModelMapper_QBaseCount(@ptrCast(self));
    }

    /// Inherited from QPieModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#count)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper, slot: fn () callconv(.c) i32 ```
    pub fn OnCount(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QVPieModelMapper_OnCount(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPieModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#setCount)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper, count: i32 ```
    pub fn SetCount(self: ?*anyopaque, count: i32) void {
        qtc.QVPieModelMapper_SetCount(@ptrCast(self), @intCast(count));
    }

    /// Inherited from QPieModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#setCount)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper, count: i32 ```
    pub fn QBaseSetCount(self: ?*anyopaque, count: i32) void {
        qtc.QVPieModelMapper_QBaseSetCount(@ptrCast(self), @intCast(count));
    }

    /// Inherited from QPieModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#setCount)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper, slot: fn (self: QtC.QVPieModelMapper, count: i32) callconv(.c) void ```
    pub fn OnSetCount(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QVPieModelMapper_OnSetCount(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPieModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#valuesSection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper ```
    pub fn ValuesSection(self: ?*anyopaque) i32 {
        return qtc.QVPieModelMapper_ValuesSection(@ptrCast(self));
    }

    /// Inherited from QPieModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#valuesSection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper ```
    pub fn QBaseValuesSection(self: ?*anyopaque) i32 {
        return qtc.QVPieModelMapper_QBaseValuesSection(@ptrCast(self));
    }

    /// Inherited from QPieModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#valuesSection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper, slot: fn () callconv(.c) i32 ```
    pub fn OnValuesSection(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QVPieModelMapper_OnValuesSection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPieModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#setValuesSection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper, valuesSection: i32 ```
    pub fn SetValuesSection(self: ?*anyopaque, valuesSection: i32) void {
        qtc.QVPieModelMapper_SetValuesSection(@ptrCast(self), @intCast(valuesSection));
    }

    /// Inherited from QPieModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#setValuesSection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper, valuesSection: i32 ```
    pub fn QBaseSetValuesSection(self: ?*anyopaque, valuesSection: i32) void {
        qtc.QVPieModelMapper_QBaseSetValuesSection(@ptrCast(self), @intCast(valuesSection));
    }

    /// Inherited from QPieModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#setValuesSection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper, slot: fn (self: QtC.QVPieModelMapper, valuesSection: i32) callconv(.c) void ```
    pub fn OnSetValuesSection(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QVPieModelMapper_OnSetValuesSection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPieModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#labelsSection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper ```
    pub fn LabelsSection(self: ?*anyopaque) i32 {
        return qtc.QVPieModelMapper_LabelsSection(@ptrCast(self));
    }

    /// Inherited from QPieModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#labelsSection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper ```
    pub fn QBaseLabelsSection(self: ?*anyopaque) i32 {
        return qtc.QVPieModelMapper_QBaseLabelsSection(@ptrCast(self));
    }

    /// Inherited from QPieModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#labelsSection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper, slot: fn () callconv(.c) i32 ```
    pub fn OnLabelsSection(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QVPieModelMapper_OnLabelsSection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPieModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#setLabelsSection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper, labelsSection: i32 ```
    pub fn SetLabelsSection(self: ?*anyopaque, labelsSection: i32) void {
        qtc.QVPieModelMapper_SetLabelsSection(@ptrCast(self), @intCast(labelsSection));
    }

    /// Inherited from QPieModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#setLabelsSection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper, labelsSection: i32 ```
    pub fn QBaseSetLabelsSection(self: ?*anyopaque, labelsSection: i32) void {
        qtc.QVPieModelMapper_QBaseSetLabelsSection(@ptrCast(self), @intCast(labelsSection));
    }

    /// Inherited from QPieModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#setLabelsSection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper, slot: fn (self: QtC.QVPieModelMapper, labelsSection: i32) callconv(.c) void ```
    pub fn OnSetLabelsSection(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QVPieModelMapper_OnSetLabelsSection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPieModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#orientation)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper ```
    pub fn Orientation(self: ?*anyopaque) i64 {
        return qtc.QVPieModelMapper_Orientation(@ptrCast(self));
    }

    /// Inherited from QPieModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#orientation)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper ```
    pub fn QBaseOrientation(self: ?*anyopaque) i64 {
        return qtc.QVPieModelMapper_QBaseOrientation(@ptrCast(self));
    }

    /// Inherited from QPieModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#orientation)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper, slot: fn () callconv(.c) i64 ```
    pub fn OnOrientation(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        qtc.QVPieModelMapper_OnOrientation(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPieModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#setOrientation)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper, orientation: qnamespace_enums.Orientation ```
    pub fn SetOrientation(self: ?*anyopaque, orientation: i64) void {
        qtc.QVPieModelMapper_SetOrientation(@ptrCast(self), @intCast(orientation));
    }

    /// Inherited from QPieModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#setOrientation)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper, orientation: qnamespace_enums.Orientation ```
    pub fn QBaseSetOrientation(self: ?*anyopaque, orientation: i64) void {
        qtc.QVPieModelMapper_QBaseSetOrientation(@ptrCast(self), @intCast(orientation));
    }

    /// Inherited from QPieModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#setOrientation)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper, slot: fn (self: QtC.QVPieModelMapper, orientation: qnamespace_enums.Orientation) callconv(.c) void ```
    pub fn OnSetOrientation(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QVPieModelMapper_OnSetOrientation(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QVPieModelMapper_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QVPieModelMapper_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.QVPieModelMapper_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QVPieModelMapper_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QVPieModelMapper_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QVPieModelMapper_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QVPieModelMapper_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QVPieModelMapper_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper, slot: fn (self: QtC.QVPieModelMapper, signal: []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        qtc.QVPieModelMapper_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QVPieModelMapper_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QVPieModelMapper_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVPieModelMapper, slot: fn (self: QtC.QVPieModelMapper, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QVPieModelMapper_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QVPieModelMapper, slot: fn (self: QtC.QObject, objectName: []const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#dtor.QVPieModelMapper)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QVPieModelMapper ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QVPieModelMapper_Delete(@ptrCast(self));
    }
};
