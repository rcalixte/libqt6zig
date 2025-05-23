const C = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qboxset.html
pub const qboxset = struct {
    /// New constructs a new QBoxSet object.
    ///
    ///
    pub fn New() ?*C.QBoxSet {
        return C.QBoxSet_new();
    }

    /// New2 constructs a new QBoxSet object.
    ///
    /// ``` le: f64, lq: f64, m: f64, uq: f64, ue: f64 ```
    pub fn New2(le: f64, lq: f64, m: f64, uq: f64, ue: f64) ?*C.QBoxSet {
        return C.QBoxSet_new2(@floatCast(le), @floatCast(lq), @floatCast(m), @floatCast(uq), @floatCast(ue));
    }

    /// New3 constructs a new QBoxSet object.
    ///
    /// ``` label: []const u8 ```
    pub fn New3(label: []const u8) ?*C.QBoxSet {
        const label_str = C.struct_libqt_string{
            .len = label.len,
            .data = @constCast(label.ptr),
        };

        return C.QBoxSet_new3(label_str);
    }

    /// New4 constructs a new QBoxSet object.
    ///
    /// ``` label: []const u8, parent: ?*C.QObject ```
    pub fn New4(label: []const u8, parent: ?*anyopaque) ?*C.QBoxSet {
        const label_str = C.struct_libqt_string{
            .len = label.len,
            .data = @constCast(label.ptr),
        };

        return C.QBoxSet_new4(label_str, @ptrCast(parent));
    }

    /// New5 constructs a new QBoxSet object.
    ///
    /// ``` le: f64, lq: f64, m: f64, uq: f64, ue: f64, label: []const u8 ```
    pub fn New5(le: f64, lq: f64, m: f64, uq: f64, ue: f64, label: []const u8) ?*C.QBoxSet {
        const label_str = C.struct_libqt_string{
            .len = label.len,
            .data = @constCast(label.ptr),
        };

        return C.QBoxSet_new5(@floatCast(le), @floatCast(lq), @floatCast(m), @floatCast(uq), @floatCast(ue), label_str);
    }

    /// New6 constructs a new QBoxSet object.
    ///
    /// ``` le: f64, lq: f64, m: f64, uq: f64, ue: f64, label: []const u8, parent: ?*C.QObject ```
    pub fn New6(le: f64, lq: f64, m: f64, uq: f64, ue: f64, label: []const u8, parent: ?*anyopaque) ?*C.QBoxSet {
        const label_str = C.struct_libqt_string{
            .len = label.len,
            .data = @constCast(label.ptr),
        };

        return C.QBoxSet_new6(@floatCast(le), @floatCast(lq), @floatCast(m), @floatCast(uq), @floatCast(ue), label_str, @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QBoxSet ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QBoxSet_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QBoxSet, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QBoxSet_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QBoxSet, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QBoxSet_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QBoxSet, slot: fn (?*C.QBoxSet, qobjectdefs_enums.Call, i32, ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        C.QBoxSet_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QBoxSet, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QBoxSet_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QBoxSet_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxset.html#append)
    ///
    /// ``` self: ?*C.QBoxSet, value: f64 ```
    pub fn Append(self: ?*anyopaque, value: f64) void {
        C.QBoxSet_Append(@ptrCast(self), @floatCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxset.html#append)
    ///
    /// ``` self: ?*C.QBoxSet, values: []f64 ```
    pub fn AppendWithValues(self: ?*anyopaque, values: []f64) void {
        const values_list = C.struct_libqt_list{
            .len = values.len,
            .data = values.ptr,
        };
        C.QBoxSet_AppendWithValues(@ptrCast(self), values_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxset.html#clear)
    ///
    /// ``` self: ?*C.QBoxSet ```
    pub fn Clear(self: ?*anyopaque) void {
        C.QBoxSet_Clear(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxset.html#setLabel)
    ///
    /// ``` self: ?*C.QBoxSet, label: []const u8 ```
    pub fn SetLabel(self: ?*anyopaque, label: []const u8) void {
        const label_str = C.struct_libqt_string{
            .len = label.len,
            .data = @constCast(label.ptr),
        };
        C.QBoxSet_SetLabel(@ptrCast(self), label_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxset.html#label)
    ///
    /// ``` self: ?*C.QBoxSet, allocator: std.mem.Allocator ```
    pub fn Label(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QBoxSet_Label(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxset.html#operator<<)
    ///
    /// ``` self: ?*C.QBoxSet, value: ?*f64 ```
    pub fn OperatorShiftLeft(self: ?*anyopaque, value: ?*anyopaque) ?*C.QBoxSet {
        return C.QBoxSet_OperatorShiftLeft(@ptrCast(self), @floatCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxset.html#setValue)
    ///
    /// ``` self: ?*C.QBoxSet, index: i32, value: f64 ```
    pub fn SetValue(self: ?*anyopaque, index: i32, value: f64) void {
        C.QBoxSet_SetValue(@ptrCast(self), @intCast(index), @floatCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxset.html#at)
    ///
    /// ``` self: ?*C.QBoxSet, index: i32 ```
    pub fn At(self: ?*anyopaque, index: i32) f64 {
        return C.QBoxSet_At(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxset.html#operator[])
    ///
    /// ``` self: ?*C.QBoxSet, index: i32 ```
    pub fn OperatorSubscript(self: ?*anyopaque, index: i32) f64 {
        return C.QBoxSet_OperatorSubscript(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxset.html#count)
    ///
    /// ``` self: ?*C.QBoxSet ```
    pub fn Count(self: ?*anyopaque) i32 {
        return C.QBoxSet_Count(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxset.html#setPen)
    ///
    /// ``` self: ?*C.QBoxSet, pen: ?*C.QPen ```
    pub fn SetPen(self: ?*anyopaque, pen: ?*anyopaque) void {
        C.QBoxSet_SetPen(@ptrCast(self), @ptrCast(pen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxset.html#pen)
    ///
    /// ``` self: ?*C.QBoxSet ```
    pub fn Pen(self: ?*anyopaque) ?*C.QPen {
        return C.QBoxSet_Pen(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxset.html#setBrush)
    ///
    /// ``` self: ?*C.QBoxSet, brush: ?*C.QBrush ```
    pub fn SetBrush(self: ?*anyopaque, brush: ?*anyopaque) void {
        C.QBoxSet_SetBrush(@ptrCast(self), @ptrCast(brush));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxset.html#brush)
    ///
    /// ``` self: ?*C.QBoxSet ```
    pub fn Brush(self: ?*anyopaque) ?*C.QBrush {
        return C.QBoxSet_Brush(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxset.html#clicked)
    ///
    /// ``` self: ?*C.QBoxSet ```
    pub fn Clicked(self: ?*anyopaque) void {
        C.QBoxSet_Clicked(@ptrCast(self));
    }

    /// ``` self: ?*C.QBoxSet, slot: fn (?*C.QBoxSet) callconv(.c) void ```
    pub fn OnClicked(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QBoxSet_Connect_Clicked(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxset.html#hovered)
    ///
    /// ``` self: ?*C.QBoxSet, status: bool ```
    pub fn Hovered(self: ?*anyopaque, status: bool) void {
        C.QBoxSet_Hovered(@ptrCast(self), status);
    }

    /// ``` self: ?*C.QBoxSet, slot: fn (?*C.QBoxSet, bool) callconv(.c) void ```
    pub fn OnHovered(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QBoxSet_Connect_Hovered(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxset.html#pressed)
    ///
    /// ``` self: ?*C.QBoxSet ```
    pub fn Pressed(self: ?*anyopaque) void {
        C.QBoxSet_Pressed(@ptrCast(self));
    }

    /// ``` self: ?*C.QBoxSet, slot: fn (?*C.QBoxSet) callconv(.c) void ```
    pub fn OnPressed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QBoxSet_Connect_Pressed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxset.html#released)
    ///
    /// ``` self: ?*C.QBoxSet ```
    pub fn Released(self: ?*anyopaque) void {
        C.QBoxSet_Released(@ptrCast(self));
    }

    /// ``` self: ?*C.QBoxSet, slot: fn (?*C.QBoxSet) callconv(.c) void ```
    pub fn OnReleased(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QBoxSet_Connect_Released(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxset.html#doubleClicked)
    ///
    /// ``` self: ?*C.QBoxSet ```
    pub fn DoubleClicked(self: ?*anyopaque) void {
        C.QBoxSet_DoubleClicked(@ptrCast(self));
    }

    /// ``` self: ?*C.QBoxSet, slot: fn (?*C.QBoxSet) callconv(.c) void ```
    pub fn OnDoubleClicked(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QBoxSet_Connect_DoubleClicked(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxset.html#penChanged)
    ///
    /// ``` self: ?*C.QBoxSet ```
    pub fn PenChanged(self: ?*anyopaque) void {
        C.QBoxSet_PenChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QBoxSet, slot: fn (?*C.QBoxSet) callconv(.c) void ```
    pub fn OnPenChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QBoxSet_Connect_PenChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxset.html#brushChanged)
    ///
    /// ``` self: ?*C.QBoxSet ```
    pub fn BrushChanged(self: ?*anyopaque) void {
        C.QBoxSet_BrushChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QBoxSet, slot: fn (?*C.QBoxSet) callconv(.c) void ```
    pub fn OnBrushChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QBoxSet_Connect_BrushChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxset.html#valuesChanged)
    ///
    /// ``` self: ?*C.QBoxSet ```
    pub fn ValuesChanged(self: ?*anyopaque) void {
        C.QBoxSet_ValuesChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QBoxSet, slot: fn (?*C.QBoxSet) callconv(.c) void ```
    pub fn OnValuesChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QBoxSet_Connect_ValuesChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxset.html#valueChanged)
    ///
    /// ``` self: ?*C.QBoxSet, index: i32 ```
    pub fn ValueChanged(self: ?*anyopaque, index: i32) void {
        C.QBoxSet_ValueChanged(@ptrCast(self), @intCast(index));
    }

    /// ``` self: ?*C.QBoxSet, slot: fn (?*C.QBoxSet, i32) callconv(.c) void ```
    pub fn OnValueChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QBoxSet_Connect_ValueChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxset.html#cleared)
    ///
    /// ``` self: ?*C.QBoxSet ```
    pub fn Cleared(self: ?*anyopaque) void {
        C.QBoxSet_Cleared(@ptrCast(self));
    }

    /// ``` self: ?*C.QBoxSet, slot: fn (?*C.QBoxSet) callconv(.c) void ```
    pub fn OnCleared(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QBoxSet_Connect_Cleared(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QBoxSet_Tr2(s_Cstring, c_Cstring);
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
        const _str = C.QBoxSet_Tr3(s_Cstring, c_Cstring, @intCast(n));
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
    /// ``` self: ?*C.QBoxSet, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QBoxSet, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QBoxSet ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QBoxSet ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QBoxSet ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QBoxSet ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QBoxSet, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QBoxSet ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QBoxSet, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QBoxSet, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QBoxSet, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QBoxSet, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QBoxSet, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QBoxSet, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QBoxSet, obj: ?*C.QObject ```
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
    /// ``` self: ?*C.QBoxSet, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: ?*C.QBoxSet ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QBoxSet ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QBoxSet, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QBoxSet, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QBoxSet, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QBoxSet ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QBoxSet ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QBoxSet ```
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
    /// ``` self: ?*C.QBoxSet ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QBoxSet, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QBoxSet ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QBoxSet, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: ?*C.QBoxSet, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QBoxSet, param1: ?*C.QObject ```
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
    /// ``` self: ?*C.QBoxSet, event: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QBoxSet_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxSet, event: ?*C.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QBoxSet_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxSet, slot: fn (?*C.QBoxSet, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QBoxSet_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QBoxSet, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QBoxSet_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxSet, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QBoxSet_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxSet, slot: fn (?*C.QBoxSet, ?*C.QObject, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QBoxSet_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QBoxSet, event: ?*C.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QBoxSet_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxSet, event: ?*C.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QBoxSet_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxSet, slot: fn (?*C.QBoxSet, ?*C.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QBoxSet_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QBoxSet, event: ?*C.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QBoxSet_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxSet, event: ?*C.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QBoxSet_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxSet, slot: fn (?*C.QBoxSet, ?*C.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QBoxSet_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QBoxSet, event: ?*C.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QBoxSet_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxSet, event: ?*C.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QBoxSet_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxSet, slot: fn (?*C.QBoxSet, ?*C.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QBoxSet_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QBoxSet, signal: ?*C.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QBoxSet_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxSet, signal: ?*C.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QBoxSet_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxSet, slot: fn (?*C.QBoxSet, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QBoxSet_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QBoxSet, signal: ?*C.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QBoxSet_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxSet, signal: ?*C.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QBoxSet_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxSet, slot: fn (?*C.QBoxSet, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QBoxSet_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QBoxSet ```
    pub fn Sender(self: ?*anyopaque) ?*C.QObject {
        return C.QBoxSet_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxSet ```
    pub fn QBaseSender(self: ?*anyopaque) ?*C.QObject {
        return C.QBoxSet_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxSet, slot: fn () callconv(.c) ?*C.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QObject) void {
        C.QBoxSet_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QBoxSet ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QBoxSet_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxSet ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QBoxSet_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxSet, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QBoxSet_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QBoxSet, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QBoxSet_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxSet, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QBoxSet_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxSet, slot: fn (?*C.QBoxSet, []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        C.QBoxSet_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QBoxSet, signal: ?*C.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QBoxSet_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxSet, signal: ?*C.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QBoxSet_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxSet, slot: fn (?*C.QBoxSet, ?*C.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QBoxSet_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QBoxSet ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QBoxSet_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qboxset.html#types
pub const enums = struct {
    pub const ValuePositions = enum {
        pub const LowerExtreme: i32 = 0;
        pub const LowerQuartile: i32 = 1;
        pub const Median: i32 = 2;
        pub const UpperQuartile: i32 = 3;
        pub const UpperExtreme: i32 = 4;
    };
};
