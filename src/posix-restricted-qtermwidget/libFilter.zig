const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const Filter_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api
pub const konsole__filter = struct {
    /// New constructs a new Konsole::Filter object.
    ///
    ///
    pub fn New() QtC.Konsole__Filter {
        return qtc.Konsole__Filter_new();
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Filter ```
    pub fn Process(self: ?*anyopaque) void {
        qtc.Konsole__Filter_Process(@ptrCast(self));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.Konsole__Filter, slot: fn () callconv(.c) void ```
    pub fn OnProcess(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.Konsole__Filter_OnProcess(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.Konsole__Filter ```
    pub fn QBaseProcess(self: ?*anyopaque) void {
        qtc.Konsole__Filter_QBaseProcess(@ptrCast(self));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Filter ```
    pub fn Reset(self: ?*anyopaque) void {
        qtc.Konsole__Filter_Reset(@ptrCast(self));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Filter, line: i32, column: i32 ```
    pub fn HotSpotAt(self: ?*anyopaque, line: i32, column: i32) QtC.Konsole__Filter__HotSpot {
        return qtc.Konsole__Filter_HotSpotAt(@ptrCast(self), @intCast(line), @intCast(column));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Filter, param1: QtC.Konsole__Filter__HotSpot ```
    pub fn AddHotSpot(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.Konsole__Filter_AddHotSpot(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.Konsole__Filter, slot: fn (self: QtC.Konsole__Filter, param1: QtC.Konsole__Filter__HotSpot) callconv(.c) void ```
    pub fn OnAddHotSpot(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.Konsole__Filter_OnAddHotSpot(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.Konsole__Filter, param1: QtC.Konsole__Filter__HotSpot ```
    pub fn QBaseAddHotSpot(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.Konsole__Filter_QBaseAddHotSpot(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Filter, allocator: std.mem.Allocator ```
    pub fn Buffer(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Konsole__Filter_Buffer(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole::filter.Buffer: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.Konsole__Filter, slot: fn () callconv(.c) [*:0]const u8 ```
    pub fn OnBuffer(self: ?*anyopaque, slot: fn () callconv(.c) [*:0]const u8) void {
        qtc.Konsole__Filter_OnBuffer(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.Konsole__Filter, allocator: std.mem.Allocator ```
    pub fn QBaseBuffer(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Konsole__Filter_QBaseBuffer(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole::filter.Buffer: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Filter, position: i32, startLine: *i32, startColumn: *i32 ```
    pub fn GetLineColumn(self: ?*anyopaque, position: i32, startLine: *i32, startColumn: *i32) void {
        qtc.Konsole__Filter_GetLineColumn(@ptrCast(self), @intCast(position), @ptrCast(startLine), @ptrCast(startColumn));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.Konsole__Filter, slot: fn (self: QtC.Konsole__Filter, position: i32, startLine: *i32, startColumn: *i32) callconv(.c) void ```
    pub fn OnGetLineColumn(self: ?*anyopaque, slot: fn (?*anyopaque, i32, *i32, *i32) callconv(.c) void) void {
        qtc.Konsole__Filter_OnGetLineColumn(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.Konsole__Filter, position: i32, startLine: *i32, startColumn: *i32 ```
    pub fn QBaseGetLineColumn(self: ?*anyopaque, position: i32, startLine: *i32, startColumn: *i32) void {
        qtc.Konsole__Filter_QBaseGetLineColumn(@ptrCast(self), @intCast(position), @ptrCast(startLine), @ptrCast(startColumn));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.Konsole__Filter ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QObject_MetaObject(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ``` self: QtC.Konsole__Filter, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QObject_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole::filter.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.Konsole__Filter, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole::filter.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.Konsole__Filter, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.Konsole__Filter ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.Konsole__Filter ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.Konsole__Filter ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.Konsole__Filter ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.Konsole__Filter, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.Konsole__Filter ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.Konsole__Filter, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.Konsole__Filter, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.Konsole__Filter, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.Konsole__Filter, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.Konsole__Filter, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("konsole::filter.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.Konsole__Filter, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.Konsole__Filter, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.Konsole__Filter, obj: QtC.QObject ```
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
    /// ``` self: QtC.Konsole__Filter, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.Konsole__Filter ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.Konsole__Filter ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.Konsole__Filter, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.Konsole__Filter, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.Konsole__Filter, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("konsole::filter.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("konsole::filter.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.Konsole__Filter ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.Konsole__Filter ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.Konsole__Filter ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.Konsole__Filter, slot: fn (self: QtC.Konsole__Filter) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.Konsole__Filter ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.Konsole__Filter, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.Konsole__Filter ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole::filter.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole::filter.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.Konsole__Filter, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.Konsole__Filter, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.Konsole__Filter, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.Konsole__Filter, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.Konsole__Filter, slot: fn (self: QtC.Konsole__Filter, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#qt_metacall)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Filter, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.Konsole__Filter_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#qt_metacall)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Filter, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.Konsole__Filter_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#qt_metacall)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Filter, slot: fn (self: QtC.Konsole__Filter, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.Konsole__Filter_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Filter, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.Konsole__Filter_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Filter, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.Konsole__Filter_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Filter, slot: fn (self: QtC.Konsole__Filter, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.Konsole__Filter_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Filter, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.Konsole__Filter_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Filter, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.Konsole__Filter_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Filter, slot: fn (self: QtC.Konsole__Filter, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.Konsole__Filter_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Filter, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Konsole__Filter_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Filter, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Konsole__Filter_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Filter, slot: fn (self: QtC.Konsole__Filter, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.Konsole__Filter_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Filter, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Konsole__Filter_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Filter, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Konsole__Filter_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Filter, slot: fn (self: QtC.Konsole__Filter, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.Konsole__Filter_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Filter, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Konsole__Filter_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Filter, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Konsole__Filter_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Filter, slot: fn (self: QtC.Konsole__Filter, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.Konsole__Filter_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Filter, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.Konsole__Filter_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Filter, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.Konsole__Filter_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Filter, slot: fn (self: QtC.Konsole__Filter, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.Konsole__Filter_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Filter, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.Konsole__Filter_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Filter, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.Konsole__Filter_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Filter, slot: fn (self: QtC.Konsole__Filter, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.Konsole__Filter_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Filter ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.Konsole__Filter_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Filter ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.Konsole__Filter_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Filter, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.Konsole__Filter_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Filter ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.Konsole__Filter_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Filter ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.Konsole__Filter_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Filter, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.Konsole__Filter_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Filter, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Konsole__Filter_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Filter, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Konsole__Filter_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Filter, slot: fn (self: QtC.Konsole__Filter, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.Konsole__Filter_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Filter, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.Konsole__Filter_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Filter, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.Konsole__Filter_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__Filter, slot: fn (self: QtC.Konsole__Filter, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.Konsole__Filter_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.Konsole__Filter, slot: fn (self: QtC.Konsole__Filter, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.Konsole__Filter ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Konsole__Filter_Delete(@ptrCast(self));
    }
};

/// https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api
pub const konsole__regexpfilter = struct {
    /// New constructs a new Konsole::RegExpFilter object.
    ///
    ///
    pub fn New() QtC.Konsole__RegExpFilter {
        return qtc.Konsole__RegExpFilter_new();
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, text: QtC.QRegularExpression ```
    pub fn SetRegExp(self: ?*anyopaque, text: ?*anyopaque) void {
        qtc.Konsole__RegExpFilter_SetRegExp(@ptrCast(self), @ptrCast(text));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__RegExpFilter ```
    pub fn RegExp(self: ?*anyopaque) QtC.QRegularExpression {
        return qtc.Konsole__RegExpFilter_RegExp(@ptrCast(self));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__RegExpFilter ```
    pub fn Process(self: ?*anyopaque) void {
        qtc.Konsole__RegExpFilter_Process(@ptrCast(self));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, slot: fn () callconv(.c) void ```
    pub fn OnProcess(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.Konsole__RegExpFilter_OnProcess(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.Konsole__RegExpFilter ```
    pub fn QBaseProcess(self: ?*anyopaque) void {
        qtc.Konsole__RegExpFilter_QBaseProcess(@ptrCast(self));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, startLine: i32, startColumn: i32, endLine: i32, endColumn: i32 ```
    pub fn NewHotSpot(self: ?*anyopaque, startLine: i32, startColumn: i32, endLine: i32, endColumn: i32) QtC.Konsole__RegExpFilter__HotSpot {
        return qtc.Konsole__RegExpFilter_NewHotSpot(@ptrCast(self), @intCast(startLine), @intCast(startColumn), @intCast(endLine), @intCast(endColumn));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, slot: fn (self: QtC.Konsole__RegExpFilter, startLine: i32, startColumn: i32, endLine: i32, endColumn: i32) callconv(.c) QtC.Konsole__RegExpFilter__HotSpot ```
    pub fn OnNewHotSpot(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, i32, i32) callconv(.c) QtC.Konsole__RegExpFilter__HotSpot) void {
        qtc.Konsole__RegExpFilter_OnNewHotSpot(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, startLine: i32, startColumn: i32, endLine: i32, endColumn: i32 ```
    pub fn QBaseNewHotSpot(self: ?*anyopaque, startLine: i32, startColumn: i32, endLine: i32, endColumn: i32) QtC.Konsole__RegExpFilter__HotSpot {
        return qtc.Konsole__RegExpFilter_QBaseNewHotSpot(@ptrCast(self), @intCast(startLine), @intCast(startColumn), @intCast(endLine), @intCast(endColumn));
    }

    /// Inherited from Konsole::Filter
    ///
    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__RegExpFilter ```
    pub fn Reset(self: ?*anyopaque) void {
        qtc.Konsole__Filter_Reset(@ptrCast(self));
    }

    /// Inherited from Konsole::Filter
    ///
    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, line: i32, column: i32 ```
    pub fn HotSpotAt(self: ?*anyopaque, line: i32, column: i32) QtC.Konsole__Filter__HotSpot {
        return qtc.Konsole__Filter_HotSpotAt(@ptrCast(self), @intCast(line), @intCast(column));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.Konsole__RegExpFilter ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QObject_MetaObject(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QObject_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole::regexpfilter.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole::regexpfilter.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.Konsole__RegExpFilter ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.Konsole__RegExpFilter ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.Konsole__RegExpFilter ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.Konsole__RegExpFilter ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.Konsole__RegExpFilter ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("konsole::regexpfilter.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, obj: QtC.QObject ```
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
    /// ``` self: QtC.Konsole__RegExpFilter, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.Konsole__RegExpFilter ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.Konsole__RegExpFilter ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("konsole::regexpfilter.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("konsole::regexpfilter.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.Konsole__RegExpFilter ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.Konsole__RegExpFilter ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.Konsole__RegExpFilter ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, slot: fn (self: QtC.Konsole__RegExpFilter) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.Konsole__RegExpFilter ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.Konsole__RegExpFilter ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole::regexpfilter.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole::regexpfilter.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, slot: fn (self: QtC.Konsole__RegExpFilter, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#qt_metacall)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.Konsole__RegExpFilter_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#qt_metacall)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.Konsole__RegExpFilter_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#qt_metacall)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, slot: fn (self: QtC.Konsole__RegExpFilter, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.Konsole__RegExpFilter_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.Konsole__RegExpFilter_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.Konsole__RegExpFilter_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, slot: fn (self: QtC.Konsole__RegExpFilter, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.Konsole__RegExpFilter_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.Konsole__RegExpFilter_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.Konsole__RegExpFilter_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, slot: fn (self: QtC.Konsole__RegExpFilter, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.Konsole__RegExpFilter_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Konsole__RegExpFilter_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Konsole__RegExpFilter_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, slot: fn (self: QtC.Konsole__RegExpFilter, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.Konsole__RegExpFilter_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Konsole__RegExpFilter_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Konsole__RegExpFilter_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, slot: fn (self: QtC.Konsole__RegExpFilter, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.Konsole__RegExpFilter_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Konsole__RegExpFilter_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Konsole__RegExpFilter_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, slot: fn (self: QtC.Konsole__RegExpFilter, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.Konsole__RegExpFilter_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.Konsole__RegExpFilter_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.Konsole__RegExpFilter_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, slot: fn (self: QtC.Konsole__RegExpFilter, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.Konsole__RegExpFilter_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.Konsole__RegExpFilter_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.Konsole__RegExpFilter_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, slot: fn (self: QtC.Konsole__RegExpFilter, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.Konsole__RegExpFilter_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from Konsole::Filter
    ///
    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, param1: QtC.Konsole__Filter__HotSpot ```
    pub fn AddHotSpot(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.Konsole__RegExpFilter_AddHotSpot(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from Konsole::Filter
    ///
    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, param1: QtC.Konsole__Filter__HotSpot ```
    pub fn QBaseAddHotSpot(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.Konsole__RegExpFilter_QBaseAddHotSpot(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from Konsole::Filter
    ///
    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, slot: fn (self: QtC.Konsole__RegExpFilter, param1: QtC.Konsole__Filter__HotSpot) callconv(.c) void ```
    pub fn OnAddHotSpot(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.Konsole__RegExpFilter_OnAddHotSpot(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from Konsole::Filter
    ///
    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, allocator: std.mem.Allocator ```
    pub fn Buffer(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Konsole__RegExpFilter_Buffer(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole::regexpfilter.Buffer: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Konsole::Filter
    ///
    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, allocator: std.mem.Allocator ```
    pub fn QBaseBuffer(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Konsole__RegExpFilter_QBaseBuffer(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole::regexpfilter.Buffer: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Konsole::Filter
    ///
    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, slot: fn () callconv(.c) [*:0]const u8 ```
    pub fn OnBuffer(self: ?*anyopaque, slot: fn () callconv(.c) [*:0]const u8) void {
        qtc.Konsole__RegExpFilter_OnBuffer(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from Konsole::Filter
    ///
    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, position: i32, startLine: *i32, startColumn: *i32 ```
    pub fn GetLineColumn(self: ?*anyopaque, position: i32, startLine: *i32, startColumn: *i32) void {
        qtc.Konsole__RegExpFilter_GetLineColumn(@ptrCast(self), @intCast(position), @ptrCast(startLine), @ptrCast(startColumn));
    }

    /// Inherited from Konsole::Filter
    ///
    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, position: i32, startLine: *i32, startColumn: *i32 ```
    pub fn QBaseGetLineColumn(self: ?*anyopaque, position: i32, startLine: *i32, startColumn: *i32) void {
        qtc.Konsole__RegExpFilter_QBaseGetLineColumn(@ptrCast(self), @intCast(position), @ptrCast(startLine), @ptrCast(startColumn));
    }

    /// Inherited from Konsole::Filter
    ///
    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, slot: fn (self: QtC.Konsole__RegExpFilter, position: i32, startLine: *i32, startColumn: *i32) callconv(.c) void ```
    pub fn OnGetLineColumn(self: ?*anyopaque, slot: fn (?*anyopaque, i32, *i32, *i32) callconv(.c) void) void {
        qtc.Konsole__RegExpFilter_OnGetLineColumn(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__RegExpFilter ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.Konsole__RegExpFilter_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__RegExpFilter ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.Konsole__RegExpFilter_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.Konsole__RegExpFilter_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__RegExpFilter ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.Konsole__RegExpFilter_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__RegExpFilter ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.Konsole__RegExpFilter_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.Konsole__RegExpFilter_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Konsole__RegExpFilter_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Konsole__RegExpFilter_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, slot: fn (self: QtC.Konsole__RegExpFilter, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.Konsole__RegExpFilter_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.Konsole__RegExpFilter_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.Konsole__RegExpFilter_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, slot: fn (self: QtC.Konsole__RegExpFilter, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.Konsole__RegExpFilter_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.Konsole__RegExpFilter, slot: fn (self: QtC.Konsole__RegExpFilter, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.Konsole__RegExpFilter ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Konsole__RegExpFilter_Delete(@ptrCast(self));
    }
};

/// https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api
pub const konsole__urlfilter = struct {
    /// New constructs a new Konsole::UrlFilter object.
    ///
    ///
    pub fn New() QtC.Konsole__UrlFilter {
        return qtc.Konsole__UrlFilter_new();
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__UrlFilter ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.Konsole__UrlFilter_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.Konsole__UrlFilter, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Konsole__UrlFilter_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.Konsole__UrlFilter, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.Konsole__UrlFilter_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.Konsole__UrlFilter, slot: fn (self: QtC.Konsole__UrlFilter, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.Konsole__UrlFilter_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.Konsole__UrlFilter, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.Konsole__UrlFilter_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.Konsole__UrlFilter_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole::urlfilter.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__UrlFilter, param1: i32, param2: i32, param3: i32, param4: i32 ```
    pub fn NewHotSpot(self: ?*anyopaque, param1: i32, param2: i32, param3: i32, param4: i32) QtC.Konsole__RegExpFilter__HotSpot {
        return qtc.Konsole__UrlFilter_NewHotSpot(@ptrCast(self), @intCast(param1), @intCast(param2), @intCast(param3), @intCast(param4));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.Konsole__UrlFilter, slot: fn (self: QtC.Konsole__UrlFilter, param1: i32, param2: i32, param3: i32, param4: i32) callconv(.c) QtC.Konsole__RegExpFilter__HotSpot ```
    pub fn OnNewHotSpot(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, i32, i32) callconv(.c) QtC.Konsole__RegExpFilter__HotSpot) void {
        qtc.Konsole__UrlFilter_OnNewHotSpot(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.Konsole__UrlFilter, param1: i32, param2: i32, param3: i32, param4: i32 ```
    pub fn QBaseNewHotSpot(self: ?*anyopaque, param1: i32, param2: i32, param3: i32, param4: i32) QtC.Konsole__RegExpFilter__HotSpot {
        return qtc.Konsole__UrlFilter_QBaseNewHotSpot(@ptrCast(self), @intCast(param1), @intCast(param2), @intCast(param3), @intCast(param4));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__UrlFilter, url: QtC.QUrl, fromContextMenu: bool ```
    pub fn Activated(self: ?*anyopaque, url: ?*anyopaque, fromContextMenu: bool) void {
        qtc.Konsole__UrlFilter_Activated(@ptrCast(self), @ptrCast(url), fromContextMenu);
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__UrlFilter, slot: fn (self: QtC.Konsole__UrlFilter, url: QtC.QUrl, fromContextMenu: bool) callconv(.c) void ```
    pub fn OnActivated(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, bool) callconv(.c) void) void {
        qtc.Konsole__UrlFilter_Connect_Activated(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.Konsole__UrlFilter_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole::urlfilter.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.Konsole__UrlFilter_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole::urlfilter.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Konsole::RegExpFilter
    ///
    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__UrlFilter, text: QtC.QRegularExpression ```
    pub fn SetRegExp(self: ?*anyopaque, text: ?*anyopaque) void {
        qtc.Konsole__RegExpFilter_SetRegExp(@ptrCast(self), @ptrCast(text));
    }

    /// Inherited from Konsole::RegExpFilter
    ///
    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__UrlFilter ```
    pub fn RegExp(self: ?*anyopaque) QtC.QRegularExpression {
        return qtc.Konsole__RegExpFilter_RegExp(@ptrCast(self));
    }

    /// Inherited from Konsole::Filter
    ///
    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__UrlFilter ```
    pub fn Reset(self: ?*anyopaque) void {
        qtc.Konsole__Filter_Reset(@ptrCast(self));
    }

    /// Inherited from Konsole::Filter
    ///
    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__UrlFilter, line: i32, column: i32 ```
    pub fn HotSpotAt(self: ?*anyopaque, line: i32, column: i32) QtC.Konsole__Filter__HotSpot {
        return qtc.Konsole__Filter_HotSpotAt(@ptrCast(self), @intCast(line), @intCast(column));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.Konsole__UrlFilter, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole::urlfilter.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.Konsole__UrlFilter, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.Konsole__UrlFilter ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.Konsole__UrlFilter ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.Konsole__UrlFilter ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.Konsole__UrlFilter ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.Konsole__UrlFilter, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.Konsole__UrlFilter ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.Konsole__UrlFilter, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.Konsole__UrlFilter, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.Konsole__UrlFilter, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.Konsole__UrlFilter, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.Konsole__UrlFilter, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("konsole::urlfilter.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.Konsole__UrlFilter, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.Konsole__UrlFilter, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.Konsole__UrlFilter, obj: QtC.QObject ```
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
    /// ``` self: QtC.Konsole__UrlFilter, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.Konsole__UrlFilter ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.Konsole__UrlFilter ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.Konsole__UrlFilter, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.Konsole__UrlFilter, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.Konsole__UrlFilter, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("konsole::urlfilter.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("konsole::urlfilter.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.Konsole__UrlFilter ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.Konsole__UrlFilter ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.Konsole__UrlFilter ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.Konsole__UrlFilter, slot: fn (self: QtC.Konsole__UrlFilter) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.Konsole__UrlFilter ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.Konsole__UrlFilter, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.Konsole__UrlFilter ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.Konsole__UrlFilter, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.Konsole__UrlFilter, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.Konsole__UrlFilter, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.Konsole__UrlFilter, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.Konsole__UrlFilter, slot: fn (self: QtC.Konsole__UrlFilter, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from Konsole::RegExpFilter
    ///
    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__UrlFilter ```
    pub fn Process(self: ?*anyopaque) void {
        qtc.Konsole__UrlFilter_Process(@ptrCast(self));
    }

    /// Inherited from Konsole::RegExpFilter
    ///
    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__UrlFilter ```
    pub fn QBaseProcess(self: ?*anyopaque) void {
        qtc.Konsole__UrlFilter_QBaseProcess(@ptrCast(self));
    }

    /// Inherited from Konsole::RegExpFilter
    ///
    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__UrlFilter, slot: fn () callconv(.c) void ```
    pub fn OnProcess(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.Konsole__UrlFilter_OnProcess(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__UrlFilter, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.Konsole__UrlFilter_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__UrlFilter, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.Konsole__UrlFilter_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__UrlFilter, slot: fn (self: QtC.Konsole__UrlFilter, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.Konsole__UrlFilter_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__UrlFilter, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.Konsole__UrlFilter_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__UrlFilter, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.Konsole__UrlFilter_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__UrlFilter, slot: fn (self: QtC.Konsole__UrlFilter, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.Konsole__UrlFilter_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__UrlFilter, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Konsole__UrlFilter_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__UrlFilter, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Konsole__UrlFilter_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__UrlFilter, slot: fn (self: QtC.Konsole__UrlFilter, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.Konsole__UrlFilter_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__UrlFilter, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Konsole__UrlFilter_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__UrlFilter, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Konsole__UrlFilter_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__UrlFilter, slot: fn (self: QtC.Konsole__UrlFilter, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.Konsole__UrlFilter_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__UrlFilter, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Konsole__UrlFilter_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__UrlFilter, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Konsole__UrlFilter_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__UrlFilter, slot: fn (self: QtC.Konsole__UrlFilter, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.Konsole__UrlFilter_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__UrlFilter, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.Konsole__UrlFilter_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__UrlFilter, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.Konsole__UrlFilter_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__UrlFilter, slot: fn (self: QtC.Konsole__UrlFilter, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.Konsole__UrlFilter_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__UrlFilter, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.Konsole__UrlFilter_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__UrlFilter, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.Konsole__UrlFilter_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__UrlFilter, slot: fn (self: QtC.Konsole__UrlFilter, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.Konsole__UrlFilter_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from Konsole::Filter
    ///
    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__UrlFilter, param1: QtC.Konsole__Filter__HotSpot ```
    pub fn AddHotSpot(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.Konsole__UrlFilter_AddHotSpot(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from Konsole::Filter
    ///
    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__UrlFilter, param1: QtC.Konsole__Filter__HotSpot ```
    pub fn QBaseAddHotSpot(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.Konsole__UrlFilter_QBaseAddHotSpot(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from Konsole::Filter
    ///
    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__UrlFilter, slot: fn (self: QtC.Konsole__UrlFilter, param1: QtC.Konsole__Filter__HotSpot) callconv(.c) void ```
    pub fn OnAddHotSpot(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.Konsole__UrlFilter_OnAddHotSpot(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from Konsole::Filter
    ///
    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__UrlFilter, allocator: std.mem.Allocator ```
    pub fn Buffer(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Konsole__UrlFilter_Buffer(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole::urlfilter.Buffer: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Konsole::Filter
    ///
    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__UrlFilter, allocator: std.mem.Allocator ```
    pub fn QBaseBuffer(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Konsole__UrlFilter_QBaseBuffer(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole::urlfilter.Buffer: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Konsole::Filter
    ///
    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__UrlFilter, slot: fn () callconv(.c) [*:0]const u8 ```
    pub fn OnBuffer(self: ?*anyopaque, slot: fn () callconv(.c) [*:0]const u8) void {
        qtc.Konsole__UrlFilter_OnBuffer(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from Konsole::Filter
    ///
    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__UrlFilter, position: i32, startLine: *i32, startColumn: *i32 ```
    pub fn GetLineColumn(self: ?*anyopaque, position: i32, startLine: *i32, startColumn: *i32) void {
        qtc.Konsole__UrlFilter_GetLineColumn(@ptrCast(self), @intCast(position), @ptrCast(startLine), @ptrCast(startColumn));
    }

    /// Inherited from Konsole::Filter
    ///
    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__UrlFilter, position: i32, startLine: *i32, startColumn: *i32 ```
    pub fn QBaseGetLineColumn(self: ?*anyopaque, position: i32, startLine: *i32, startColumn: *i32) void {
        qtc.Konsole__UrlFilter_QBaseGetLineColumn(@ptrCast(self), @intCast(position), @ptrCast(startLine), @ptrCast(startColumn));
    }

    /// Inherited from Konsole::Filter
    ///
    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__UrlFilter, slot: fn (self: QtC.Konsole__UrlFilter, position: i32, startLine: *i32, startColumn: *i32) callconv(.c) void ```
    pub fn OnGetLineColumn(self: ?*anyopaque, slot: fn (?*anyopaque, i32, *i32, *i32) callconv(.c) void) void {
        qtc.Konsole__UrlFilter_OnGetLineColumn(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__UrlFilter ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.Konsole__UrlFilter_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__UrlFilter ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.Konsole__UrlFilter_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__UrlFilter, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.Konsole__UrlFilter_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__UrlFilter ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.Konsole__UrlFilter_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__UrlFilter ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.Konsole__UrlFilter_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__UrlFilter, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.Konsole__UrlFilter_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__UrlFilter, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Konsole__UrlFilter_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__UrlFilter, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Konsole__UrlFilter_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__UrlFilter, slot: fn (self: QtC.Konsole__UrlFilter, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.Konsole__UrlFilter_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__UrlFilter, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.Konsole__UrlFilter_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__UrlFilter, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.Konsole__UrlFilter_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__UrlFilter, slot: fn (self: QtC.Konsole__UrlFilter, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.Konsole__UrlFilter_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.Konsole__UrlFilter, slot: fn (self: QtC.Konsole__UrlFilter, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.Konsole__UrlFilter ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Konsole__UrlFilter_Delete(@ptrCast(self));
    }
};

/// https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api
pub const konsole__filterobject = struct {
    /// New constructs a new Konsole::FilterObject object.
    ///
    /// ``` filter: QtC.Konsole__Filter__HotSpot ```
    pub fn New(filter: ?*anyopaque) QtC.Konsole__FilterObject {
        return qtc.Konsole__FilterObject_new(@ptrCast(filter));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__FilterObject ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.Konsole__FilterObject_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.Konsole__FilterObject, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Konsole__FilterObject_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.Konsole__FilterObject, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.Konsole__FilterObject_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.Konsole__FilterObject, slot: fn (self: QtC.Konsole__FilterObject, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.Konsole__FilterObject_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.Konsole__FilterObject, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.Konsole__FilterObject_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.Konsole__FilterObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole::filterobject.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__FilterObject, url: QtC.QUrl, fromContextMenu: bool ```
    pub fn EmitActivated(self: ?*anyopaque, url: ?*anyopaque, fromContextMenu: bool) void {
        qtc.Konsole__FilterObject_EmitActivated(@ptrCast(self), @ptrCast(url), fromContextMenu);
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__FilterObject ```
    pub fn Activate(self: ?*anyopaque) void {
        qtc.Konsole__FilterObject_Activate(@ptrCast(self));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__FilterObject, url: QtC.QUrl, fromContextMenu: bool ```
    pub fn Activated(self: ?*anyopaque, url: ?*anyopaque, fromContextMenu: bool) void {
        qtc.Konsole__FilterObject_Activated(@ptrCast(self), @ptrCast(url), fromContextMenu);
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__FilterObject, slot: fn (self: QtC.Konsole__FilterObject, url: QtC.QUrl, fromContextMenu: bool) callconv(.c) void ```
    pub fn OnActivated(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, bool) callconv(.c) void) void {
        qtc.Konsole__FilterObject_Connect_Activated(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.Konsole__FilterObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole::filterobject.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.Konsole__FilterObject_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole::filterobject.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.Konsole__FilterObject, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole::filterobject.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.Konsole__FilterObject, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.Konsole__FilterObject ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.Konsole__FilterObject ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.Konsole__FilterObject ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.Konsole__FilterObject ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.Konsole__FilterObject, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.Konsole__FilterObject ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.Konsole__FilterObject, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.Konsole__FilterObject, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.Konsole__FilterObject, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.Konsole__FilterObject, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.Konsole__FilterObject, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("konsole::filterobject.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.Konsole__FilterObject, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.Konsole__FilterObject, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.Konsole__FilterObject, obj: QtC.QObject ```
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
    /// ``` self: QtC.Konsole__FilterObject, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.Konsole__FilterObject ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.Konsole__FilterObject ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.Konsole__FilterObject, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.Konsole__FilterObject, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.Konsole__FilterObject, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("konsole::filterobject.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("konsole::filterobject.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.Konsole__FilterObject ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.Konsole__FilterObject ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.Konsole__FilterObject ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.Konsole__FilterObject, slot: fn (self: QtC.Konsole__FilterObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.Konsole__FilterObject ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.Konsole__FilterObject, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.Konsole__FilterObject ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.Konsole__FilterObject, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.Konsole__FilterObject, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.Konsole__FilterObject, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.Konsole__FilterObject, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.Konsole__FilterObject, slot: fn (self: QtC.Konsole__FilterObject, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__FilterObject, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.Konsole__FilterObject_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__FilterObject, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.Konsole__FilterObject_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__FilterObject, slot: fn (self: QtC.Konsole__FilterObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.Konsole__FilterObject_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__FilterObject, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.Konsole__FilterObject_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__FilterObject, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.Konsole__FilterObject_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__FilterObject, slot: fn (self: QtC.Konsole__FilterObject, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.Konsole__FilterObject_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__FilterObject, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Konsole__FilterObject_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__FilterObject, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Konsole__FilterObject_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__FilterObject, slot: fn (self: QtC.Konsole__FilterObject, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.Konsole__FilterObject_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__FilterObject, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Konsole__FilterObject_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__FilterObject, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Konsole__FilterObject_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__FilterObject, slot: fn (self: QtC.Konsole__FilterObject, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.Konsole__FilterObject_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__FilterObject, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Konsole__FilterObject_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__FilterObject, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Konsole__FilterObject_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__FilterObject, slot: fn (self: QtC.Konsole__FilterObject, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.Konsole__FilterObject_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__FilterObject, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.Konsole__FilterObject_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__FilterObject, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.Konsole__FilterObject_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__FilterObject, slot: fn (self: QtC.Konsole__FilterObject, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.Konsole__FilterObject_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__FilterObject, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.Konsole__FilterObject_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__FilterObject, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.Konsole__FilterObject_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__FilterObject, slot: fn (self: QtC.Konsole__FilterObject, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.Konsole__FilterObject_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__FilterObject ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.Konsole__FilterObject_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__FilterObject ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.Konsole__FilterObject_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__FilterObject, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.Konsole__FilterObject_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__FilterObject ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.Konsole__FilterObject_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__FilterObject ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.Konsole__FilterObject_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__FilterObject, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.Konsole__FilterObject_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__FilterObject, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Konsole__FilterObject_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__FilterObject, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Konsole__FilterObject_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__FilterObject, slot: fn (self: QtC.Konsole__FilterObject, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.Konsole__FilterObject_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__FilterObject, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.Konsole__FilterObject_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__FilterObject, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.Konsole__FilterObject_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__FilterObject, slot: fn (self: QtC.Konsole__FilterObject, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.Konsole__FilterObject_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.Konsole__FilterObject, slot: fn (self: QtC.Konsole__FilterObject, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.Konsole__FilterObject ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Konsole__FilterObject_Delete(@ptrCast(self));
    }
};

/// https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api
pub const konsole__filterchain = struct {
    /// New constructs a new Konsole::FilterChain object.
    ///
    /// ``` param1: QtC.Konsole__FilterChain ```
    pub fn New(param1: ?*anyopaque) QtC.Konsole__FilterChain {
        return qtc.Konsole__FilterChain_new(@ptrCast(param1));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__FilterChain, filter: QtC.Konsole__Filter ```
    pub fn AddFilter(self: ?*anyopaque, filter: ?*anyopaque) void {
        qtc.Konsole__FilterChain_AddFilter(@ptrCast(self), @ptrCast(filter));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__FilterChain, filter: QtC.Konsole__Filter ```
    pub fn RemoveFilter(self: ?*anyopaque, filter: ?*anyopaque) void {
        qtc.Konsole__FilterChain_RemoveFilter(@ptrCast(self), @ptrCast(filter));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__FilterChain, filter: QtC.Konsole__Filter ```
    pub fn ContainsFilter(self: ?*anyopaque, filter: ?*anyopaque) bool {
        return qtc.Konsole__FilterChain_ContainsFilter(@ptrCast(self), @ptrCast(filter));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__FilterChain ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.Konsole__FilterChain_Clear(@ptrCast(self));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__FilterChain ```
    pub fn Reset(self: ?*anyopaque) void {
        qtc.Konsole__FilterChain_Reset(@ptrCast(self));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__FilterChain ```
    pub fn Process(self: ?*anyopaque) void {
        qtc.Konsole__FilterChain_Process(@ptrCast(self));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__FilterChain, line: i32, column: i32 ```
    pub fn HotSpotAt(self: ?*anyopaque, line: i32, column: i32) QtC.Konsole__Filter__HotSpot {
        return qtc.Konsole__FilterChain_HotSpotAt(@ptrCast(self), @intCast(line), @intCast(column));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__FilterChain, allocator: std.mem.Allocator ```
    pub fn HotSpots(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Konsole__Filter__HotSpot {
        const _arr: qtc.libqt_list = qtc.Konsole__FilterChain_HotSpots(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Konsole__Filter__HotSpot, _arr.len) catch @panic("konsole::filterchain.HotSpots: Memory allocation failed");
        const _data: [*]QtC.Konsole__Filter__HotSpot = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__FilterChain, param1: QtC.Konsole__FilterChain ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.Konsole__FilterChain_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.Konsole__FilterChain ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Konsole__FilterChain_Delete(@ptrCast(self));
    }
};

/// https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api
pub const konsole__terminalimagefilterchain = struct {
    /// New constructs a new Konsole::TerminalImageFilterChain object.
    ///
    ///
    pub fn New() QtC.Konsole__TerminalImageFilterChain {
        return qtc.Konsole__TerminalImageFilterChain_new();
    }

    /// New2 constructs a new Konsole::TerminalImageFilterChain object.
    ///
    /// ``` param1: QtC.Konsole__TerminalImageFilterChain ```
    pub fn New2(param1: ?*anyopaque) QtC.Konsole__TerminalImageFilterChain {
        return qtc.Konsole__TerminalImageFilterChain_new2(@ptrCast(param1));
    }

    /// Inherited from Konsole::FilterChain
    ///
    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__TerminalImageFilterChain, filter: QtC.Konsole__Filter ```
    pub fn AddFilter(self: ?*anyopaque, filter: ?*anyopaque) void {
        qtc.Konsole__FilterChain_AddFilter(@ptrCast(self), @ptrCast(filter));
    }

    /// Inherited from Konsole::FilterChain
    ///
    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__TerminalImageFilterChain, filter: QtC.Konsole__Filter ```
    pub fn RemoveFilter(self: ?*anyopaque, filter: ?*anyopaque) void {
        qtc.Konsole__FilterChain_RemoveFilter(@ptrCast(self), @ptrCast(filter));
    }

    /// Inherited from Konsole::FilterChain
    ///
    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__TerminalImageFilterChain, filter: QtC.Konsole__Filter ```
    pub fn ContainsFilter(self: ?*anyopaque, filter: ?*anyopaque) bool {
        return qtc.Konsole__FilterChain_ContainsFilter(@ptrCast(self), @ptrCast(filter));
    }

    /// Inherited from Konsole::FilterChain
    ///
    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__TerminalImageFilterChain ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.Konsole__FilterChain_Clear(@ptrCast(self));
    }

    /// Inherited from Konsole::FilterChain
    ///
    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__TerminalImageFilterChain ```
    pub fn Reset(self: ?*anyopaque) void {
        qtc.Konsole__FilterChain_Reset(@ptrCast(self));
    }

    /// Inherited from Konsole::FilterChain
    ///
    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__TerminalImageFilterChain ```
    pub fn Process(self: ?*anyopaque) void {
        qtc.Konsole__FilterChain_Process(@ptrCast(self));
    }

    /// Inherited from Konsole::FilterChain
    ///
    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__TerminalImageFilterChain, line: i32, column: i32 ```
    pub fn HotSpotAt(self: ?*anyopaque, line: i32, column: i32) QtC.Konsole__Filter__HotSpot {
        return qtc.Konsole__FilterChain_HotSpotAt(@ptrCast(self), @intCast(line), @intCast(column));
    }

    /// Inherited from Konsole::FilterChain
    ///
    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__TerminalImageFilterChain, allocator: std.mem.Allocator ```
    pub fn HotSpots(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Konsole__Filter__HotSpot {
        const _arr: qtc.libqt_list = qtc.Konsole__FilterChain_HotSpots(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Konsole__Filter__HotSpot, _arr.len) catch @panic("konsole::terminalimagefilterchain.HotSpots: Memory allocation failed");
        const _data: [*]QtC.Konsole__Filter__HotSpot = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from Konsole::FilterChain
    ///
    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__TerminalImageFilterChain, param1: QtC.Konsole__FilterChain ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.Konsole__FilterChain_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.Konsole__TerminalImageFilterChain ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Konsole__TerminalImageFilterChain_Delete(@ptrCast(self));
    }
};

/// https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api
pub const konsole__filter__hotspot = struct {
    /// New constructs a new Konsole::Filter::HotSpot object.
    ///
    /// ``` startLine: i32, startColumn: i32, endLine: i32, endColumn: i32 ```
    pub fn New(startLine: i32, startColumn: i32, endLine: i32, endColumn: i32) QtC.Konsole__Filter__HotSpot {
        return qtc.Konsole__Filter__HotSpot_new(@intCast(startLine), @intCast(startColumn), @intCast(endLine), @intCast(endColumn));
    }

    /// New2 constructs a new Konsole::Filter::HotSpot object.
    ///
    /// ``` param1: QtC.Konsole__Filter__HotSpot ```
    pub fn New2(param1: ?*anyopaque) QtC.Konsole__Filter__HotSpot {
        return qtc.Konsole__Filter__HotSpot_new2(@ptrCast(param1));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Filter__HotSpot ```
    pub fn StartLine(self: ?*anyopaque) i32 {
        return qtc.Konsole__Filter__HotSpot_StartLine(@ptrCast(self));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Filter__HotSpot ```
    pub fn EndLine(self: ?*anyopaque) i32 {
        return qtc.Konsole__Filter__HotSpot_EndLine(@ptrCast(self));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Filter__HotSpot ```
    pub fn StartColumn(self: ?*anyopaque) i32 {
        return qtc.Konsole__Filter__HotSpot_StartColumn(@ptrCast(self));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Filter__HotSpot ```
    pub fn EndColumn(self: ?*anyopaque) i32 {
        return qtc.Konsole__Filter__HotSpot_EndColumn(@ptrCast(self));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Filter__HotSpot ```
    ///
    /// Returns: ``` Filter_enums.Type ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.Konsole__Filter__HotSpot_Type(@ptrCast(self));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Filter__HotSpot, action: []const u8 ```
    pub fn Activate(self: ?*anyopaque, action: []const u8) void {
        const action_str = qtc.libqt_string{
            .len = action.len,
            .data = action.ptr,
        };
        qtc.Konsole__Filter__HotSpot_Activate(@ptrCast(self), action_str);
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.Konsole__Filter__HotSpot, slot: fn (self: QtC.Konsole__Filter__HotSpot, action: [*:0]const u8) callconv(.c) void ```
    pub fn OnActivate(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.Konsole__Filter__HotSpot_OnActivate(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.Konsole__Filter__HotSpot, action: []const u8 ```
    pub fn QBaseActivate(self: ?*anyopaque, action: []const u8) void {
        const action_str = qtc.libqt_string{
            .len = action.len,
            .data = action.ptr,
        };
        qtc.Konsole__Filter__HotSpot_QBaseActivate(@ptrCast(self), action_str);
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Filter__HotSpot, allocator: std.mem.Allocator ```
    pub fn Actions(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QAction {
        const _arr: qtc.libqt_list = qtc.Konsole__Filter__HotSpot_Actions(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QAction, _arr.len) catch @panic("konsole::filter::hotspot.Actions: Memory allocation failed");
        const _data: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.Konsole__Filter__HotSpot, slot: fn () callconv(.c) [*:null]QtC.QAction ```
    pub fn OnActions(self: ?*anyopaque, slot: fn () callconv(.c) [*:null]QtC.QAction) void {
        qtc.Konsole__Filter__HotSpot_OnActions(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.Konsole__Filter__HotSpot, allocator: std.mem.Allocator ```
    pub fn QBaseActions(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QAction {
        const _arr: qtc.libqt_list = qtc.Konsole__Filter__HotSpot_QBaseActions(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QAction, _arr.len) catch @panic("konsole::filter::hotspot.Actions: Memory allocation failed");
        const _data: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__Filter__HotSpot, typeVal: Filter_enums.Type ```
    pub fn SetType(self: ?*anyopaque, typeVal: i32) void {
        qtc.Konsole__Filter__HotSpot_SetType(@ptrCast(self), @intCast(typeVal));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.Konsole__Filter__HotSpot, slot: fn (self: QtC.Konsole__Filter__HotSpot, typeVal: Filter_enums.Type) callconv(.c) void ```
    pub fn OnSetType(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.Konsole__Filter__HotSpot_OnSetType(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.Konsole__Filter__HotSpot, typeVal: Filter_enums.Type ```
    pub fn QBaseSetType(self: ?*anyopaque, typeVal: i32) void {
        qtc.Konsole__Filter__HotSpot_QBaseSetType(@ptrCast(self), @intCast(typeVal));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.Konsole__Filter__HotSpot ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Konsole__Filter__HotSpot_Delete(@ptrCast(self));
    }
};

/// https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api
pub const konsole__regexpfilter__hotspot = struct {
    /// New constructs a new Konsole::RegExpFilter::HotSpot object.
    ///
    /// ``` startLine: i32, startColumn: i32, endLine: i32, endColumn: i32 ```
    pub fn New(startLine: i32, startColumn: i32, endLine: i32, endColumn: i32) QtC.Konsole__RegExpFilter__HotSpot {
        return qtc.Konsole__RegExpFilter__HotSpot_new(@intCast(startLine), @intCast(startColumn), @intCast(endLine), @intCast(endColumn));
    }

    /// New2 constructs a new Konsole::RegExpFilter::HotSpot object.
    ///
    /// ``` param1: QtC.Konsole__RegExpFilter__HotSpot ```
    pub fn New2(param1: ?*anyopaque) QtC.Konsole__RegExpFilter__HotSpot {
        return qtc.Konsole__RegExpFilter__HotSpot_new2(@ptrCast(param1));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__RegExpFilter__HotSpot, action: []const u8 ```
    pub fn Activate(self: ?*anyopaque, action: []const u8) void {
        const action_str = qtc.libqt_string{
            .len = action.len,
            .data = action.ptr,
        };
        qtc.Konsole__RegExpFilter__HotSpot_Activate(@ptrCast(self), action_str);
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.Konsole__RegExpFilter__HotSpot, slot: fn (self: QtC.Konsole__RegExpFilter__HotSpot, action: [*:0]const u8) callconv(.c) void ```
    pub fn OnActivate(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.Konsole__RegExpFilter__HotSpot_OnActivate(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.Konsole__RegExpFilter__HotSpot, action: []const u8 ```
    pub fn QBaseActivate(self: ?*anyopaque, action: []const u8) void {
        const action_str = qtc.libqt_string{
            .len = action.len,
            .data = action.ptr,
        };
        qtc.Konsole__RegExpFilter__HotSpot_QBaseActivate(@ptrCast(self), action_str);
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__RegExpFilter__HotSpot, texts: [][]const u8, allocator: std.mem.Allocator ```
    pub fn SetCapturedTexts(self: ?*anyopaque, texts: [][]const u8, allocator: std.mem.Allocator) void {
        var texts_arr = allocator.alloc(qtc.libqt_string, texts.len) catch @panic("konsole::regexpfilter::hotspot.SetCapturedTexts: Memory allocation failed");
        defer allocator.free(texts_arr);
        for (texts, 0..texts.len) |item, i| {
            texts_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const texts_list = qtc.libqt_list{
            .len = texts.len,
            .data = texts_arr.ptr,
        };
        qtc.Konsole__RegExpFilter__HotSpot_SetCapturedTexts(@ptrCast(self), texts_list);
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__RegExpFilter__HotSpot, allocator: std.mem.Allocator ```
    pub fn CapturedTexts(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.Konsole__RegExpFilter__HotSpot_CapturedTexts(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("konsole::regexpfilter::hotspot.CapturedTexts: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("konsole::regexpfilter::hotspot.CapturedTexts: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from Konsole::Filter::HotSpot
    ///
    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__RegExpFilter__HotSpot ```
    pub fn StartLine(self: ?*anyopaque) i32 {
        return qtc.Konsole__Filter__HotSpot_StartLine(@ptrCast(self));
    }

    /// Inherited from Konsole::Filter::HotSpot
    ///
    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__RegExpFilter__HotSpot ```
    pub fn EndLine(self: ?*anyopaque) i32 {
        return qtc.Konsole__Filter__HotSpot_EndLine(@ptrCast(self));
    }

    /// Inherited from Konsole::Filter::HotSpot
    ///
    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__RegExpFilter__HotSpot ```
    pub fn StartColumn(self: ?*anyopaque) i32 {
        return qtc.Konsole__Filter__HotSpot_StartColumn(@ptrCast(self));
    }

    /// Inherited from Konsole::Filter::HotSpot
    ///
    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__RegExpFilter__HotSpot ```
    pub fn EndColumn(self: ?*anyopaque) i32 {
        return qtc.Konsole__Filter__HotSpot_EndColumn(@ptrCast(self));
    }

    /// Inherited from Konsole::Filter::HotSpot
    ///
    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__RegExpFilter__HotSpot ```
    ///
    /// Returns: ``` Filter_enums.Type ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.Konsole__Filter__HotSpot_Type(@ptrCast(self));
    }

    /// Inherited from Konsole::Filter::HotSpot
    ///
    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__RegExpFilter__HotSpot, allocator: std.mem.Allocator ```
    pub fn Actions(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QAction {
        const _arr: qtc.libqt_list = qtc.Konsole__RegExpFilter__HotSpot_Actions(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QAction, _arr.len) catch @panic("konsole::regexpfilter::hotspot.Actions: Memory allocation failed");
        const _data: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from Konsole::Filter::HotSpot
    ///
    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__RegExpFilter__HotSpot, allocator: std.mem.Allocator ```
    pub fn QBaseActions(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QAction {
        const _arr: qtc.libqt_list = qtc.Konsole__RegExpFilter__HotSpot_QBaseActions(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QAction, _arr.len) catch @panic("konsole::regexpfilter::hotspot.Actions: Memory allocation failed");
        const _data: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from Konsole::Filter::HotSpot
    ///
    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__RegExpFilter__HotSpot, slot: fn () callconv(.c) [*:null]QtC.QAction ```
    pub fn OnActions(self: ?*anyopaque, slot: fn () callconv(.c) [*:null]QtC.QAction) void {
        qtc.Konsole__RegExpFilter__HotSpot_OnActions(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from Konsole::Filter::HotSpot
    ///
    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__RegExpFilter__HotSpot, typeVal: Filter_enums.Type ```
    pub fn SetType(self: ?*anyopaque, typeVal: i32) void {
        qtc.Konsole__RegExpFilter__HotSpot_SetType(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from Konsole::Filter::HotSpot
    ///
    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__RegExpFilter__HotSpot, typeVal: Filter_enums.Type ```
    pub fn QBaseSetType(self: ?*anyopaque, typeVal: i32) void {
        qtc.Konsole__RegExpFilter__HotSpot_QBaseSetType(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from Konsole::Filter::HotSpot
    ///
    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__RegExpFilter__HotSpot, slot: fn (self: QtC.Konsole__RegExpFilter__HotSpot, typeVal: Filter_enums.Type) callconv(.c) void ```
    pub fn OnSetType(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.Konsole__RegExpFilter__HotSpot_OnSetType(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.Konsole__RegExpFilter__HotSpot ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Konsole__RegExpFilter__HotSpot_Delete(@ptrCast(self));
    }
};

/// https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api
pub const konsole__urlfilter__hotspot = struct {
    /// New constructs a new Konsole::UrlFilter::HotSpot object.
    ///
    /// ``` startLine: i32, startColumn: i32, endLine: i32, endColumn: i32 ```
    pub fn New(startLine: i32, startColumn: i32, endLine: i32, endColumn: i32) QtC.Konsole__UrlFilter__HotSpot {
        return qtc.Konsole__UrlFilter__HotSpot_new(@intCast(startLine), @intCast(startColumn), @intCast(endLine), @intCast(endColumn));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__UrlFilter__HotSpot ```
    pub fn GetUrlObject(self: ?*anyopaque) QtC.Konsole__FilterObject {
        return qtc.Konsole__UrlFilter__HotSpot_GetUrlObject(@ptrCast(self));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__UrlFilter__HotSpot, allocator: std.mem.Allocator ```
    pub fn Actions(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QAction {
        const _arr: qtc.libqt_list = qtc.Konsole__UrlFilter__HotSpot_Actions(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QAction, _arr.len) catch @panic("konsole::urlfilter::hotspot.Actions: Memory allocation failed");
        const _data: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.Konsole__UrlFilter__HotSpot, slot: fn () callconv(.c) [*:null]QtC.QAction ```
    pub fn OnActions(self: ?*anyopaque, slot: fn () callconv(.c) [*:null]QtC.QAction) void {
        qtc.Konsole__UrlFilter__HotSpot_OnActions(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.Konsole__UrlFilter__HotSpot, allocator: std.mem.Allocator ```
    pub fn QBaseActions(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QAction {
        const _arr: qtc.libqt_list = qtc.Konsole__UrlFilter__HotSpot_QBaseActions(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QAction, _arr.len) catch @panic("konsole::urlfilter::hotspot.Actions: Memory allocation failed");
        const _data: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__UrlFilter__HotSpot, action: []const u8 ```
    pub fn Activate(self: ?*anyopaque, action: []const u8) void {
        const action_str = qtc.libqt_string{
            .len = action.len,
            .data = action.ptr,
        };
        qtc.Konsole__UrlFilter__HotSpot_Activate(@ptrCast(self), action_str);
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.Konsole__UrlFilter__HotSpot, slot: fn (self: QtC.Konsole__UrlFilter__HotSpot, action: [*:0]const u8) callconv(.c) void ```
    pub fn OnActivate(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.Konsole__UrlFilter__HotSpot_OnActivate(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.Konsole__UrlFilter__HotSpot, action: []const u8 ```
    pub fn QBaseActivate(self: ?*anyopaque, action: []const u8) void {
        const action_str = qtc.libqt_string{
            .len = action.len,
            .data = action.ptr,
        };
        qtc.Konsole__UrlFilter__HotSpot_QBaseActivate(@ptrCast(self), action_str);
    }

    /// Inherited from Konsole::RegExpFilter::HotSpot
    ///
    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__UrlFilter__HotSpot, texts: [][]const u8, allocator: std.mem.Allocator ```
    pub fn SetCapturedTexts(self: ?*anyopaque, texts: [][]const u8, allocator: std.mem.Allocator) void {
        var texts_arr = allocator.alloc(qtc.libqt_string, texts.len) catch @panic("konsole::urlfilter::hotspot.SetCapturedTexts: Memory allocation failed");
        defer allocator.free(texts_arr);
        for (texts, 0..texts.len) |item, i| {
            texts_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const texts_list = qtc.libqt_list{
            .len = texts.len,
            .data = texts_arr.ptr,
        };
        qtc.Konsole__RegExpFilter__HotSpot_SetCapturedTexts(@ptrCast(self), texts_list);
    }

    /// Inherited from Konsole::RegExpFilter::HotSpot
    ///
    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__UrlFilter__HotSpot, allocator: std.mem.Allocator ```
    pub fn CapturedTexts(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.Konsole__RegExpFilter__HotSpot_CapturedTexts(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("konsole::urlfilter::hotspot.CapturedTexts: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("konsole::urlfilter::hotspot.CapturedTexts: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from Konsole::Filter::HotSpot
    ///
    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__UrlFilter__HotSpot ```
    pub fn StartLine(self: ?*anyopaque) i32 {
        return qtc.Konsole__Filter__HotSpot_StartLine(@ptrCast(self));
    }

    /// Inherited from Konsole::Filter::HotSpot
    ///
    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__UrlFilter__HotSpot ```
    pub fn EndLine(self: ?*anyopaque) i32 {
        return qtc.Konsole__Filter__HotSpot_EndLine(@ptrCast(self));
    }

    /// Inherited from Konsole::Filter::HotSpot
    ///
    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__UrlFilter__HotSpot ```
    pub fn StartColumn(self: ?*anyopaque) i32 {
        return qtc.Konsole__Filter__HotSpot_StartColumn(@ptrCast(self));
    }

    /// Inherited from Konsole::Filter::HotSpot
    ///
    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__UrlFilter__HotSpot ```
    pub fn EndColumn(self: ?*anyopaque) i32 {
        return qtc.Konsole__Filter__HotSpot_EndColumn(@ptrCast(self));
    }

    /// Inherited from Konsole::Filter::HotSpot
    ///
    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ``` self: QtC.Konsole__UrlFilter__HotSpot ```
    ///
    /// Returns: ``` Filter_enums.Type ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.Konsole__Filter__HotSpot_Type(@ptrCast(self));
    }

    /// Inherited from Konsole::Filter::HotSpot
    ///
    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.Konsole__UrlFilter__HotSpot, typeVal: Filter_enums.Type ```
    pub fn SetType(self: ?*anyopaque, typeVal: i32) void {
        qtc.Konsole__UrlFilter__HotSpot_SetType(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from Konsole::Filter::HotSpot
    ///
    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__UrlFilter__HotSpot, typeVal: Filter_enums.Type ```
    pub fn QBaseSetType(self: ?*anyopaque, typeVal: i32) void {
        qtc.Konsole__UrlFilter__HotSpot_QBaseSetType(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from Konsole::Filter::HotSpot
    ///
    /// [Qt documentation](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.Konsole__UrlFilter__HotSpot, slot: fn (self: QtC.Konsole__UrlFilter__HotSpot, typeVal: Filter_enums.Type) callconv(.c) void ```
    pub fn OnSetType(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.Konsole__UrlFilter__HotSpot_OnSetType(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.Konsole__UrlFilter__HotSpot ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Konsole__UrlFilter__HotSpot_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/filter.html#types
pub const enums = struct {
    pub const Type = enum {
        pub const NotSpecified: i32 = 0;
        pub const Link: i32 = 1;
        pub const Marker: i32 = 2;
    };
};
