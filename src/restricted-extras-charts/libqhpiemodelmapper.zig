const C = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qhpiemodelmapper.html
pub const qhpiemodelmapper = struct {
    /// New constructs a new QHPieModelMapper object.
    ///
    ///
    pub fn New() ?*C.QHPieModelMapper {
        return C.QHPieModelMapper_new();
    }

    /// New2 constructs a new QHPieModelMapper object.
    ///
    /// ``` parent: ?*C.QObject ```
    pub fn New2(parent: ?*anyopaque) ?*C.QHPieModelMapper {
        return C.QHPieModelMapper_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QHPieModelMapper ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QHPieModelMapper_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QHPieModelMapper, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QHPieModelMapper_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QHPieModelMapper, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QHPieModelMapper_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QHPieModelMapper, slot: fn (?*C.QHPieModelMapper, qobjectdefs_enums.Call, i32, ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        C.QHPieModelMapper_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QHPieModelMapper, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QHPieModelMapper_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QHPieModelMapper_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhpiemodelmapper.html#model)
    ///
    /// ``` self: ?*C.QHPieModelMapper ```
    pub fn Model(self: ?*anyopaque) ?*C.QAbstractItemModel {
        return C.QHPieModelMapper_Model(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhpiemodelmapper.html#setModel)
    ///
    /// ``` self: ?*C.QHPieModelMapper, model: ?*C.QAbstractItemModel ```
    pub fn SetModel(self: ?*anyopaque, model: ?*anyopaque) void {
        C.QHPieModelMapper_SetModel(@ptrCast(self), @ptrCast(model));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhpiemodelmapper.html#series)
    ///
    /// ``` self: ?*C.QHPieModelMapper ```
    pub fn Series(self: ?*anyopaque) ?*C.QPieSeries {
        return C.QHPieModelMapper_Series(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhpiemodelmapper.html#setSeries)
    ///
    /// ``` self: ?*C.QHPieModelMapper, series: ?*C.QPieSeries ```
    pub fn SetSeries(self: ?*anyopaque, series: ?*anyopaque) void {
        C.QHPieModelMapper_SetSeries(@ptrCast(self), @ptrCast(series));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhpiemodelmapper.html#valuesRow)
    ///
    /// ``` self: ?*C.QHPieModelMapper ```
    pub fn ValuesRow(self: ?*anyopaque) i32 {
        return C.QHPieModelMapper_ValuesRow(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhpiemodelmapper.html#setValuesRow)
    ///
    /// ``` self: ?*C.QHPieModelMapper, valuesRow: i32 ```
    pub fn SetValuesRow(self: ?*anyopaque, valuesRow: i32) void {
        C.QHPieModelMapper_SetValuesRow(@ptrCast(self), @intCast(valuesRow));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhpiemodelmapper.html#labelsRow)
    ///
    /// ``` self: ?*C.QHPieModelMapper ```
    pub fn LabelsRow(self: ?*anyopaque) i32 {
        return C.QHPieModelMapper_LabelsRow(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhpiemodelmapper.html#setLabelsRow)
    ///
    /// ``` self: ?*C.QHPieModelMapper, labelsRow: i32 ```
    pub fn SetLabelsRow(self: ?*anyopaque, labelsRow: i32) void {
        C.QHPieModelMapper_SetLabelsRow(@ptrCast(self), @intCast(labelsRow));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhpiemodelmapper.html#firstColumn)
    ///
    /// ``` self: ?*C.QHPieModelMapper ```
    pub fn FirstColumn(self: ?*anyopaque) i32 {
        return C.QHPieModelMapper_FirstColumn(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhpiemodelmapper.html#setFirstColumn)
    ///
    /// ``` self: ?*C.QHPieModelMapper, firstColumn: i32 ```
    pub fn SetFirstColumn(self: ?*anyopaque, firstColumn: i32) void {
        C.QHPieModelMapper_SetFirstColumn(@ptrCast(self), @intCast(firstColumn));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhpiemodelmapper.html#columnCount)
    ///
    /// ``` self: ?*C.QHPieModelMapper ```
    pub fn ColumnCount(self: ?*anyopaque) i32 {
        return C.QHPieModelMapper_ColumnCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhpiemodelmapper.html#setColumnCount)
    ///
    /// ``` self: ?*C.QHPieModelMapper, columnCount: i32 ```
    pub fn SetColumnCount(self: ?*anyopaque, columnCount: i32) void {
        C.QHPieModelMapper_SetColumnCount(@ptrCast(self), @intCast(columnCount));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhpiemodelmapper.html#seriesReplaced)
    ///
    /// ``` self: ?*C.QHPieModelMapper ```
    pub fn SeriesReplaced(self: ?*anyopaque) void {
        C.QHPieModelMapper_SeriesReplaced(@ptrCast(self));
    }

    /// ``` self: ?*C.QHPieModelMapper, slot: fn (?*C.QHPieModelMapper) callconv(.c) void ```
    pub fn OnSeriesReplaced(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QHPieModelMapper_Connect_SeriesReplaced(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhpiemodelmapper.html#modelReplaced)
    ///
    /// ``` self: ?*C.QHPieModelMapper ```
    pub fn ModelReplaced(self: ?*anyopaque) void {
        C.QHPieModelMapper_ModelReplaced(@ptrCast(self));
    }

    /// ``` self: ?*C.QHPieModelMapper, slot: fn (?*C.QHPieModelMapper) callconv(.c) void ```
    pub fn OnModelReplaced(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QHPieModelMapper_Connect_ModelReplaced(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhpiemodelmapper.html#valuesRowChanged)
    ///
    /// ``` self: ?*C.QHPieModelMapper ```
    pub fn ValuesRowChanged(self: ?*anyopaque) void {
        C.QHPieModelMapper_ValuesRowChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QHPieModelMapper, slot: fn (?*C.QHPieModelMapper) callconv(.c) void ```
    pub fn OnValuesRowChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QHPieModelMapper_Connect_ValuesRowChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhpiemodelmapper.html#labelsRowChanged)
    ///
    /// ``` self: ?*C.QHPieModelMapper ```
    pub fn LabelsRowChanged(self: ?*anyopaque) void {
        C.QHPieModelMapper_LabelsRowChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QHPieModelMapper, slot: fn (?*C.QHPieModelMapper) callconv(.c) void ```
    pub fn OnLabelsRowChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QHPieModelMapper_Connect_LabelsRowChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhpiemodelmapper.html#firstColumnChanged)
    ///
    /// ``` self: ?*C.QHPieModelMapper ```
    pub fn FirstColumnChanged(self: ?*anyopaque) void {
        C.QHPieModelMapper_FirstColumnChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QHPieModelMapper, slot: fn (?*C.QHPieModelMapper) callconv(.c) void ```
    pub fn OnFirstColumnChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QHPieModelMapper_Connect_FirstColumnChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhpiemodelmapper.html#columnCountChanged)
    ///
    /// ``` self: ?*C.QHPieModelMapper ```
    pub fn ColumnCountChanged(self: ?*anyopaque) void {
        C.QHPieModelMapper_ColumnCountChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QHPieModelMapper, slot: fn (?*C.QHPieModelMapper) callconv(.c) void ```
    pub fn OnColumnCountChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QHPieModelMapper_Connect_ColumnCountChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QHPieModelMapper_Tr2(s_Cstring, c_Cstring);
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
        const _str = C.QHPieModelMapper_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QHPieModelMapper, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QHPieModelMapper, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @ptrCast(@constCast(&name)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QHPieModelMapper ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QHPieModelMapper ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QHPieModelMapper ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QHPieModelMapper ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QHPieModelMapper, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QHPieModelMapper ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QHPieModelMapper, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QHPieModelMapper, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QHPieModelMapper, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QHPieModelMapper, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QHPieModelMapper, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QHPieModelMapper, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QHPieModelMapper, obj: ?*C.QObject ```
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
    /// ``` self: ?*C.QHPieModelMapper, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: ?*C.QHPieModelMapper ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QHPieModelMapper ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QHPieModelMapper, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QHPieModelMapper, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QHPieModelMapper, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QHPieModelMapper ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QHPieModelMapper ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QHPieModelMapper ```
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
    /// ``` self: ?*C.QHPieModelMapper ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QHPieModelMapper, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QHPieModelMapper ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QHPieModelMapper, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: ?*C.QHPieModelMapper, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QHPieModelMapper, param1: ?*C.QObject ```
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
    /// ``` self: ?*C.QHPieModelMapper, event: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QHPieModelMapper_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper, event: ?*C.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QHPieModelMapper_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper, slot: fn (?*C.QHPieModelMapper, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QHPieModelMapper_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QHPieModelMapper_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QHPieModelMapper_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper, slot: fn (?*C.QHPieModelMapper, ?*C.QObject, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QHPieModelMapper_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper, event: ?*C.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QHPieModelMapper_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper, event: ?*C.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QHPieModelMapper_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper, slot: fn (?*C.QHPieModelMapper, ?*C.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QHPieModelMapper_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper, event: ?*C.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QHPieModelMapper_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper, event: ?*C.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QHPieModelMapper_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper, slot: fn (?*C.QHPieModelMapper, ?*C.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QHPieModelMapper_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper, event: ?*C.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QHPieModelMapper_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper, event: ?*C.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QHPieModelMapper_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper, slot: fn (?*C.QHPieModelMapper, ?*C.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QHPieModelMapper_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper, signal: ?*C.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QHPieModelMapper_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper, signal: ?*C.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QHPieModelMapper_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper, slot: fn (?*C.QHPieModelMapper, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QHPieModelMapper_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper, signal: ?*C.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QHPieModelMapper_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper, signal: ?*C.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QHPieModelMapper_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper, slot: fn (?*C.QHPieModelMapper, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QHPieModelMapper_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPieModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#first)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper ```
    pub fn First(self: ?*anyopaque) i32 {
        return C.QHPieModelMapper_First(@ptrCast(self));
    }

    /// Inherited from QPieModelMapper
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper ```
    pub fn QBaseFirst(self: ?*anyopaque) i32 {
        return C.QHPieModelMapper_QBaseFirst(@ptrCast(self));
    }

    /// Inherited from QPieModelMapper
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper, slot: fn () callconv(.c) i32 ```
    pub fn OnFirst(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QHPieModelMapper_OnFirst(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPieModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#setFirst)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper, first: i32 ```
    pub fn SetFirst(self: ?*anyopaque, first: i32) void {
        C.QHPieModelMapper_SetFirst(@ptrCast(self), @intCast(first));
    }

    /// Inherited from QPieModelMapper
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper, first: i32 ```
    pub fn QBaseSetFirst(self: ?*anyopaque, first: i32) void {
        C.QHPieModelMapper_QBaseSetFirst(@ptrCast(self), @intCast(first));
    }

    /// Inherited from QPieModelMapper
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper, slot: fn (?*C.QHPieModelMapper, i32) callconv(.c) void ```
    pub fn OnSetFirst(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QHPieModelMapper_OnSetFirst(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPieModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#count)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper ```
    pub fn Count(self: ?*anyopaque) i32 {
        return C.QHPieModelMapper_Count(@ptrCast(self));
    }

    /// Inherited from QPieModelMapper
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper ```
    pub fn QBaseCount(self: ?*anyopaque) i32 {
        return C.QHPieModelMapper_QBaseCount(@ptrCast(self));
    }

    /// Inherited from QPieModelMapper
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper, slot: fn () callconv(.c) i32 ```
    pub fn OnCount(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QHPieModelMapper_OnCount(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPieModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#setCount)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper, count: i32 ```
    pub fn SetCount(self: ?*anyopaque, count: i32) void {
        C.QHPieModelMapper_SetCount(@ptrCast(self), @intCast(count));
    }

    /// Inherited from QPieModelMapper
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper, count: i32 ```
    pub fn QBaseSetCount(self: ?*anyopaque, count: i32) void {
        C.QHPieModelMapper_QBaseSetCount(@ptrCast(self), @intCast(count));
    }

    /// Inherited from QPieModelMapper
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper, slot: fn (?*C.QHPieModelMapper, i32) callconv(.c) void ```
    pub fn OnSetCount(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QHPieModelMapper_OnSetCount(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPieModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#valuesSection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper ```
    pub fn ValuesSection(self: ?*anyopaque) i32 {
        return C.QHPieModelMapper_ValuesSection(@ptrCast(self));
    }

    /// Inherited from QPieModelMapper
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper ```
    pub fn QBaseValuesSection(self: ?*anyopaque) i32 {
        return C.QHPieModelMapper_QBaseValuesSection(@ptrCast(self));
    }

    /// Inherited from QPieModelMapper
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper, slot: fn () callconv(.c) i32 ```
    pub fn OnValuesSection(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QHPieModelMapper_OnValuesSection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPieModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#setValuesSection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper, valuesSection: i32 ```
    pub fn SetValuesSection(self: ?*anyopaque, valuesSection: i32) void {
        C.QHPieModelMapper_SetValuesSection(@ptrCast(self), @intCast(valuesSection));
    }

    /// Inherited from QPieModelMapper
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper, valuesSection: i32 ```
    pub fn QBaseSetValuesSection(self: ?*anyopaque, valuesSection: i32) void {
        C.QHPieModelMapper_QBaseSetValuesSection(@ptrCast(self), @intCast(valuesSection));
    }

    /// Inherited from QPieModelMapper
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper, slot: fn (?*C.QHPieModelMapper, i32) callconv(.c) void ```
    pub fn OnSetValuesSection(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QHPieModelMapper_OnSetValuesSection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPieModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#labelsSection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper ```
    pub fn LabelsSection(self: ?*anyopaque) i32 {
        return C.QHPieModelMapper_LabelsSection(@ptrCast(self));
    }

    /// Inherited from QPieModelMapper
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper ```
    pub fn QBaseLabelsSection(self: ?*anyopaque) i32 {
        return C.QHPieModelMapper_QBaseLabelsSection(@ptrCast(self));
    }

    /// Inherited from QPieModelMapper
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper, slot: fn () callconv(.c) i32 ```
    pub fn OnLabelsSection(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QHPieModelMapper_OnLabelsSection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPieModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#setLabelsSection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper, labelsSection: i32 ```
    pub fn SetLabelsSection(self: ?*anyopaque, labelsSection: i32) void {
        C.QHPieModelMapper_SetLabelsSection(@ptrCast(self), @intCast(labelsSection));
    }

    /// Inherited from QPieModelMapper
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper, labelsSection: i32 ```
    pub fn QBaseSetLabelsSection(self: ?*anyopaque, labelsSection: i32) void {
        C.QHPieModelMapper_QBaseSetLabelsSection(@ptrCast(self), @intCast(labelsSection));
    }

    /// Inherited from QPieModelMapper
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper, slot: fn (?*C.QHPieModelMapper, i32) callconv(.c) void ```
    pub fn OnSetLabelsSection(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QHPieModelMapper_OnSetLabelsSection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPieModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#orientation)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper ```
    pub fn Orientation(self: ?*anyopaque) i64 {
        return C.QHPieModelMapper_Orientation(@ptrCast(self));
    }

    /// Inherited from QPieModelMapper
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper ```
    pub fn QBaseOrientation(self: ?*anyopaque) i64 {
        return C.QHPieModelMapper_QBaseOrientation(@ptrCast(self));
    }

    /// Inherited from QPieModelMapper
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper, slot: fn () callconv(.c) i64 ```
    pub fn OnOrientation(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        C.QHPieModelMapper_OnOrientation(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPieModelMapper
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#setOrientation)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper, orientation: qnamespace_enums.Orientation ```
    pub fn SetOrientation(self: ?*anyopaque, orientation: i64) void {
        C.QHPieModelMapper_SetOrientation(@ptrCast(self), @intCast(orientation));
    }

    /// Inherited from QPieModelMapper
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper, orientation: qnamespace_enums.Orientation ```
    pub fn QBaseSetOrientation(self: ?*anyopaque, orientation: i64) void {
        C.QHPieModelMapper_QBaseSetOrientation(@ptrCast(self), @intCast(orientation));
    }

    /// Inherited from QPieModelMapper
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper, slot: fn (?*C.QHPieModelMapper, qnamespace_enums.Orientation) callconv(.c) void ```
    pub fn OnSetOrientation(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QHPieModelMapper_OnSetOrientation(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper ```
    pub fn Sender(self: ?*anyopaque) ?*C.QObject {
        return C.QHPieModelMapper_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper ```
    pub fn QBaseSender(self: ?*anyopaque) ?*C.QObject {
        return C.QHPieModelMapper_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper, slot: fn () callconv(.c) ?*C.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QObject) void {
        C.QHPieModelMapper_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QHPieModelMapper_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QHPieModelMapper_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QHPieModelMapper_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QHPieModelMapper_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QHPieModelMapper_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper, slot: fn (?*C.QHPieModelMapper, []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        C.QHPieModelMapper_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper, signal: ?*C.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QHPieModelMapper_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper, signal: ?*C.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QHPieModelMapper_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHPieModelMapper, slot: fn (?*C.QHPieModelMapper, ?*C.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QHPieModelMapper_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QHPieModelMapper ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QHPieModelMapper_Delete(@ptrCast(self));
    }
};
