const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html
pub const qhxymodelmapper = struct {
    /// New constructs a new QHXYModelMapper object.
    ///
    ///
    pub fn New() QtC.QHXYModelMapper {
        return qtc.QHXYModelMapper_new();
    }

    /// New2 constructs a new QHXYModelMapper object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New2(parent: ?*anyopaque) QtC.QHXYModelMapper {
        return qtc.QHXYModelMapper_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QHXYModelMapper ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QHXYModelMapper_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QHXYModelMapper, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QHXYModelMapper_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QHXYModelMapper, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QHXYModelMapper_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QHXYModelMapper, slot: fn (self: QtC.QHXYModelMapper, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QHXYModelMapper_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QHXYModelMapper, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QHXYModelMapper_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QHXYModelMapper_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhxymodelmapper.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#model)
    ///
    /// ``` self: QtC.QHXYModelMapper ```
    pub fn Model(self: ?*anyopaque) QtC.QAbstractItemModel {
        return qtc.QHXYModelMapper_Model(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#setModel)
    ///
    /// ``` self: QtC.QHXYModelMapper, model: QtC.QAbstractItemModel ```
    pub fn SetModel(self: ?*anyopaque, model: ?*anyopaque) void {
        qtc.QHXYModelMapper_SetModel(@ptrCast(self), @ptrCast(model));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#series)
    ///
    /// ``` self: QtC.QHXYModelMapper ```
    pub fn Series(self: ?*anyopaque) QtC.QXYSeries {
        return qtc.QHXYModelMapper_Series(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#setSeries)
    ///
    /// ``` self: QtC.QHXYModelMapper, series: QtC.QXYSeries ```
    pub fn SetSeries(self: ?*anyopaque, series: ?*anyopaque) void {
        qtc.QHXYModelMapper_SetSeries(@ptrCast(self), @ptrCast(series));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#xRow)
    ///
    /// ``` self: QtC.QHXYModelMapper ```
    pub fn XRow(self: ?*anyopaque) i32 {
        return qtc.QHXYModelMapper_XRow(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#setXRow)
    ///
    /// ``` self: QtC.QHXYModelMapper, xRow: i32 ```
    pub fn SetXRow(self: ?*anyopaque, xRow: i32) void {
        qtc.QHXYModelMapper_SetXRow(@ptrCast(self), @intCast(xRow));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#yRow)
    ///
    /// ``` self: QtC.QHXYModelMapper ```
    pub fn YRow(self: ?*anyopaque) i32 {
        return qtc.QHXYModelMapper_YRow(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#setYRow)
    ///
    /// ``` self: QtC.QHXYModelMapper, yRow: i32 ```
    pub fn SetYRow(self: ?*anyopaque, yRow: i32) void {
        qtc.QHXYModelMapper_SetYRow(@ptrCast(self), @intCast(yRow));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#firstColumn)
    ///
    /// ``` self: QtC.QHXYModelMapper ```
    pub fn FirstColumn(self: ?*anyopaque) i32 {
        return qtc.QHXYModelMapper_FirstColumn(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#setFirstColumn)
    ///
    /// ``` self: QtC.QHXYModelMapper, firstColumn: i32 ```
    pub fn SetFirstColumn(self: ?*anyopaque, firstColumn: i32) void {
        qtc.QHXYModelMapper_SetFirstColumn(@ptrCast(self), @intCast(firstColumn));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#columnCount)
    ///
    /// ``` self: QtC.QHXYModelMapper ```
    pub fn ColumnCount(self: ?*anyopaque) i32 {
        return qtc.QHXYModelMapper_ColumnCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#setColumnCount)
    ///
    /// ``` self: QtC.QHXYModelMapper, columnCount: i32 ```
    pub fn SetColumnCount(self: ?*anyopaque, columnCount: i32) void {
        qtc.QHXYModelMapper_SetColumnCount(@ptrCast(self), @intCast(columnCount));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#seriesReplaced)
    ///
    /// ``` self: QtC.QHXYModelMapper ```
    pub fn SeriesReplaced(self: ?*anyopaque) void {
        qtc.QHXYModelMapper_SeriesReplaced(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#seriesReplaced)
    ///
    /// ``` self: QtC.QHXYModelMapper, slot: fn (self: QtC.QHXYModelMapper) callconv(.c) void ```
    pub fn OnSeriesReplaced(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QHXYModelMapper_Connect_SeriesReplaced(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#modelReplaced)
    ///
    /// ``` self: QtC.QHXYModelMapper ```
    pub fn ModelReplaced(self: ?*anyopaque) void {
        qtc.QHXYModelMapper_ModelReplaced(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#modelReplaced)
    ///
    /// ``` self: QtC.QHXYModelMapper, slot: fn (self: QtC.QHXYModelMapper) callconv(.c) void ```
    pub fn OnModelReplaced(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QHXYModelMapper_Connect_ModelReplaced(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#xRowChanged)
    ///
    /// ``` self: QtC.QHXYModelMapper ```
    pub fn XRowChanged(self: ?*anyopaque) void {
        qtc.QHXYModelMapper_XRowChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#xRowChanged)
    ///
    /// ``` self: QtC.QHXYModelMapper, slot: fn (self: QtC.QHXYModelMapper) callconv(.c) void ```
    pub fn OnXRowChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QHXYModelMapper_Connect_XRowChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#yRowChanged)
    ///
    /// ``` self: QtC.QHXYModelMapper ```
    pub fn YRowChanged(self: ?*anyopaque) void {
        qtc.QHXYModelMapper_YRowChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#yRowChanged)
    ///
    /// ``` self: QtC.QHXYModelMapper, slot: fn (self: QtC.QHXYModelMapper) callconv(.c) void ```
    pub fn OnYRowChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QHXYModelMapper_Connect_YRowChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#firstColumnChanged)
    ///
    /// ``` self: QtC.QHXYModelMapper ```
    pub fn FirstColumnChanged(self: ?*anyopaque) void {
        qtc.QHXYModelMapper_FirstColumnChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#firstColumnChanged)
    ///
    /// ``` self: QtC.QHXYModelMapper, slot: fn (self: QtC.QHXYModelMapper) callconv(.c) void ```
    pub fn OnFirstColumnChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QHXYModelMapper_Connect_FirstColumnChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#columnCountChanged)
    ///
    /// ``` self: QtC.QHXYModelMapper ```
    pub fn ColumnCountChanged(self: ?*anyopaque) void {
        qtc.QHXYModelMapper_ColumnCountChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#columnCountChanged)
    ///
    /// ``` self: QtC.QHXYModelMapper, slot: fn (self: QtC.QHXYModelMapper) callconv(.c) void ```
    pub fn OnColumnCountChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QHXYModelMapper_Connect_ColumnCountChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QHXYModelMapper_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhxymodelmapper.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QHXYModelMapper_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhxymodelmapper.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QHXYModelMapper, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhxymodelmapper.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QHXYModelMapper, name: []const u8 ```
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
    /// ``` self: QtC.QHXYModelMapper ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QHXYModelMapper ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QHXYModelMapper ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QHXYModelMapper ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QHXYModelMapper, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QHXYModelMapper ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QHXYModelMapper, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QHXYModelMapper, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QHXYModelMapper, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QHXYModelMapper, id: qnamespace_enums.TimerId ```
    pub fn KillTimerWithId(self: ?*anyopaque, id: i64) void {
        qtc.QObject_KillTimerWithId(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QHXYModelMapper, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.struct_libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qhxymodelmapper.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QHXYModelMapper, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QHXYModelMapper, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QHXYModelMapper, obj: QtC.QObject ```
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
    /// ``` self: QtC.QHXYModelMapper, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.QHXYModelMapper ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QHXYModelMapper ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QHXYModelMapper, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QHXYModelMapper, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QHXYModelMapper, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.struct_libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qhxymodelmapper.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qhxymodelmapper.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QHXYModelMapper ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QHXYModelMapper ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QHXYModelMapper ```
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
    /// ``` self: QtC.QHXYModelMapper ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QHXYModelMapper, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QHXYModelMapper ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QHXYModelMapper, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QHXYModelMapper, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.QHXYModelMapper, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QHXYModelMapper, param1: QtC.QObject ```
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
    /// ``` self: QtC.QHXYModelMapper, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QHXYModelMapper_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QHXYModelMapper_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper, slot: fn (self: QtC.QHXYModelMapper, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QHXYModelMapper_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QHXYModelMapper_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QHXYModelMapper_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper, slot: fn (self: QtC.QHXYModelMapper, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QHXYModelMapper_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QHXYModelMapper_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QHXYModelMapper_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper, slot: fn (self: QtC.QHXYModelMapper, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QHXYModelMapper_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QHXYModelMapper_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QHXYModelMapper_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper, slot: fn (self: QtC.QHXYModelMapper, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QHXYModelMapper_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QHXYModelMapper_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QHXYModelMapper_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper, slot: fn (self: QtC.QHXYModelMapper, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QHXYModelMapper_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QHXYModelMapper_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QHXYModelMapper_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper, slot: fn (self: QtC.QHXYModelMapper, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QHXYModelMapper_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QHXYModelMapper_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QHXYModelMapper_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper, slot: fn (self: QtC.QHXYModelMapper, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QHXYModelMapper_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QXYModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#first)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper ```
    pub fn First(self: ?*anyopaque) i32 {
        return qtc.QHXYModelMapper_First(@ptrCast(self));
    }

    /// Inherited from QXYModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#first)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper ```
    pub fn QBaseFirst(self: ?*anyopaque) i32 {
        return qtc.QHXYModelMapper_QBaseFirst(@ptrCast(self));
    }

    /// Inherited from QXYModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#first)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper, slot: fn () callconv(.c) i32 ```
    pub fn OnFirst(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QHXYModelMapper_OnFirst(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QXYModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#setFirst)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper, first: i32 ```
    pub fn SetFirst(self: ?*anyopaque, first: i32) void {
        qtc.QHXYModelMapper_SetFirst(@ptrCast(self), @intCast(first));
    }

    /// Inherited from QXYModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#setFirst)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper, first: i32 ```
    pub fn QBaseSetFirst(self: ?*anyopaque, first: i32) void {
        qtc.QHXYModelMapper_QBaseSetFirst(@ptrCast(self), @intCast(first));
    }

    /// Inherited from QXYModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#setFirst)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper, slot: fn (self: QtC.QHXYModelMapper, first: i32) callconv(.c) void ```
    pub fn OnSetFirst(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QHXYModelMapper_OnSetFirst(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QXYModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#count)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper ```
    pub fn Count(self: ?*anyopaque) i32 {
        return qtc.QHXYModelMapper_Count(@ptrCast(self));
    }

    /// Inherited from QXYModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#count)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper ```
    pub fn QBaseCount(self: ?*anyopaque) i32 {
        return qtc.QHXYModelMapper_QBaseCount(@ptrCast(self));
    }

    /// Inherited from QXYModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#count)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper, slot: fn () callconv(.c) i32 ```
    pub fn OnCount(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QHXYModelMapper_OnCount(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QXYModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#setCount)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper, count: i32 ```
    pub fn SetCount(self: ?*anyopaque, count: i32) void {
        qtc.QHXYModelMapper_SetCount(@ptrCast(self), @intCast(count));
    }

    /// Inherited from QXYModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#setCount)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper, count: i32 ```
    pub fn QBaseSetCount(self: ?*anyopaque, count: i32) void {
        qtc.QHXYModelMapper_QBaseSetCount(@ptrCast(self), @intCast(count));
    }

    /// Inherited from QXYModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#setCount)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper, slot: fn (self: QtC.QHXYModelMapper, count: i32) callconv(.c) void ```
    pub fn OnSetCount(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QHXYModelMapper_OnSetCount(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QXYModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#orientation)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper ```
    pub fn Orientation(self: ?*anyopaque) i64 {
        return qtc.QHXYModelMapper_Orientation(@ptrCast(self));
    }

    /// Inherited from QXYModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#orientation)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper ```
    pub fn QBaseOrientation(self: ?*anyopaque) i64 {
        return qtc.QHXYModelMapper_QBaseOrientation(@ptrCast(self));
    }

    /// Inherited from QXYModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#orientation)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper, slot: fn () callconv(.c) i64 ```
    pub fn OnOrientation(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        qtc.QHXYModelMapper_OnOrientation(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QXYModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#setOrientation)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper, orientation: qnamespace_enums.Orientation ```
    pub fn SetOrientation(self: ?*anyopaque, orientation: i64) void {
        qtc.QHXYModelMapper_SetOrientation(@ptrCast(self), @intCast(orientation));
    }

    /// Inherited from QXYModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#setOrientation)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper, orientation: qnamespace_enums.Orientation ```
    pub fn QBaseSetOrientation(self: ?*anyopaque, orientation: i64) void {
        qtc.QHXYModelMapper_QBaseSetOrientation(@ptrCast(self), @intCast(orientation));
    }

    /// Inherited from QXYModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#setOrientation)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper, slot: fn (self: QtC.QHXYModelMapper, orientation: qnamespace_enums.Orientation) callconv(.c) void ```
    pub fn OnSetOrientation(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QHXYModelMapper_OnSetOrientation(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QXYModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#xSection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper ```
    pub fn XSection(self: ?*anyopaque) i32 {
        return qtc.QHXYModelMapper_XSection(@ptrCast(self));
    }

    /// Inherited from QXYModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#xSection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper ```
    pub fn QBaseXSection(self: ?*anyopaque) i32 {
        return qtc.QHXYModelMapper_QBaseXSection(@ptrCast(self));
    }

    /// Inherited from QXYModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#xSection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper, slot: fn () callconv(.c) i32 ```
    pub fn OnXSection(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QHXYModelMapper_OnXSection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QXYModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#setXSection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper, xSection: i32 ```
    pub fn SetXSection(self: ?*anyopaque, xSection: i32) void {
        qtc.QHXYModelMapper_SetXSection(@ptrCast(self), @intCast(xSection));
    }

    /// Inherited from QXYModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#setXSection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper, xSection: i32 ```
    pub fn QBaseSetXSection(self: ?*anyopaque, xSection: i32) void {
        qtc.QHXYModelMapper_QBaseSetXSection(@ptrCast(self), @intCast(xSection));
    }

    /// Inherited from QXYModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#setXSection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper, slot: fn (self: QtC.QHXYModelMapper, xSection: i32) callconv(.c) void ```
    pub fn OnSetXSection(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QHXYModelMapper_OnSetXSection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QXYModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#ySection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper ```
    pub fn YSection(self: ?*anyopaque) i32 {
        return qtc.QHXYModelMapper_YSection(@ptrCast(self));
    }

    /// Inherited from QXYModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#ySection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper ```
    pub fn QBaseYSection(self: ?*anyopaque) i32 {
        return qtc.QHXYModelMapper_QBaseYSection(@ptrCast(self));
    }

    /// Inherited from QXYModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#ySection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper, slot: fn () callconv(.c) i32 ```
    pub fn OnYSection(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QHXYModelMapper_OnYSection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QXYModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#setYSection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper, ySection: i32 ```
    pub fn SetYSection(self: ?*anyopaque, ySection: i32) void {
        qtc.QHXYModelMapper_SetYSection(@ptrCast(self), @intCast(ySection));
    }

    /// Inherited from QXYModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#setYSection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper, ySection: i32 ```
    pub fn QBaseSetYSection(self: ?*anyopaque, ySection: i32) void {
        qtc.QHXYModelMapper_QBaseSetYSection(@ptrCast(self), @intCast(ySection));
    }

    /// Inherited from QXYModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#setYSection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper, slot: fn (self: QtC.QHXYModelMapper, ySection: i32) callconv(.c) void ```
    pub fn OnSetYSection(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QHXYModelMapper_OnSetYSection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QHXYModelMapper_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QHXYModelMapper_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.QHXYModelMapper_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QHXYModelMapper_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QHXYModelMapper_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QHXYModelMapper_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QHXYModelMapper_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QHXYModelMapper_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper, slot: fn (self: QtC.QHXYModelMapper, signal: []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        qtc.QHXYModelMapper_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QHXYModelMapper_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QHXYModelMapper_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHXYModelMapper, slot: fn (self: QtC.QHXYModelMapper, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QHXYModelMapper_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QHXYModelMapper, slot: fn (self: QtC.QObject, objectName: []const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhxymodelmapper-qtcharts.html#dtor.QHXYModelMapper)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QHXYModelMapper ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QHXYModelMapper_Delete(@ptrCast(self));
    }
};
