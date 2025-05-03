const C = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qtextobject.html
pub const qtextobject = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QTextObject ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QTextObject_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QTextObject, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QTextObject_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QTextObject, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QTextObject_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QTextObject_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextobject.html#format)
    ///
    /// ``` self: ?*C.QTextObject ```
    pub fn Format(self: ?*anyopaque) ?*C.QTextFormat {
        return C.QTextObject_Format(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextobject.html#formatIndex)
    ///
    /// ``` self: ?*C.QTextObject ```
    pub fn FormatIndex(self: ?*anyopaque) i32 {
        return C.QTextObject_FormatIndex(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextobject.html#document)
    ///
    /// ``` self: ?*C.QTextObject ```
    pub fn Document(self: ?*anyopaque) ?*C.QTextDocument {
        return C.QTextObject_Document(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextobject.html#objectIndex)
    ///
    /// ``` self: ?*C.QTextObject ```
    pub fn ObjectIndex(self: ?*anyopaque) i32 {
        return C.QTextObject_ObjectIndex(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QTextObject_Tr2(s_Cstring, c_Cstring);
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
        const _str = C.QTextObject_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ``` self: ?*C.QTextObject, event: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QObject_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ``` self: ?*C.QTextObject, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QObject_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QTextObject, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QTextObject, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QTextObject ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QTextObject ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QTextObject ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QTextObject ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QTextObject, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QTextObject ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QTextObject, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QTextObject, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QTextObject, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QTextObject, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QTextObject, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QTextObject, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QTextObject, obj: ?*C.QObject ```
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
    /// ``` self: ?*C.QTextObject, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: ?*C.QTextObject ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QTextObject ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QTextObject, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QTextObject, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QTextObject, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QTextObject ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QTextObject ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QTextObject ```
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
    /// ``` self: ?*C.QTextObject ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QTextObject, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QTextObject ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QTextObject, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: ?*C.QTextObject, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QTextObject, param1: ?*C.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject, ?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }
};

/// https://doc.qt.io/qt-6/qtextblockgroup.html
pub const qtextblockgroup = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QTextBlockGroup ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QTextBlockGroup_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QTextBlockGroup, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QTextBlockGroup_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QTextBlockGroup, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QTextBlockGroup_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QTextBlockGroup_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QTextBlockGroup_Tr2(s_Cstring, c_Cstring);
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
        const _str = C.QTextBlockGroup_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QTextObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextobject.html#format)
    ///
    /// ``` self: ?*C.QTextBlockGroup ```
    pub fn Format(self: ?*anyopaque) ?*C.QTextFormat {
        return C.QTextObject_Format(@ptrCast(self));
    }

    /// Inherited from QTextObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextobject.html#formatIndex)
    ///
    /// ``` self: ?*C.QTextBlockGroup ```
    pub fn FormatIndex(self: ?*anyopaque) i32 {
        return C.QTextObject_FormatIndex(@ptrCast(self));
    }

    /// Inherited from QTextObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextobject.html#document)
    ///
    /// ``` self: ?*C.QTextBlockGroup ```
    pub fn Document(self: ?*anyopaque) ?*C.QTextDocument {
        return C.QTextObject_Document(@ptrCast(self));
    }

    /// Inherited from QTextObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextobject.html#objectIndex)
    ///
    /// ``` self: ?*C.QTextBlockGroup ```
    pub fn ObjectIndex(self: ?*anyopaque) i32 {
        return C.QTextObject_ObjectIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ``` self: ?*C.QTextBlockGroup, event: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QObject_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ``` self: ?*C.QTextBlockGroup, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QObject_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QTextBlockGroup, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QTextBlockGroup, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QTextBlockGroup ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QTextBlockGroup ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QTextBlockGroup ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QTextBlockGroup ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QTextBlockGroup, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QTextBlockGroup ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QTextBlockGroup, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QTextBlockGroup, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QTextBlockGroup, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QTextBlockGroup, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QTextBlockGroup, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QTextBlockGroup, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QTextBlockGroup, obj: ?*C.QObject ```
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
    /// ``` self: ?*C.QTextBlockGroup, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: ?*C.QTextBlockGroup ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QTextBlockGroup ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QTextBlockGroup, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QTextBlockGroup, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QTextBlockGroup, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QTextBlockGroup ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QTextBlockGroup ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QTextBlockGroup ```
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
    /// ``` self: ?*C.QTextBlockGroup ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QTextBlockGroup, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QTextBlockGroup ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QTextBlockGroup, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: ?*C.QTextBlockGroup, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QTextBlockGroup, param1: ?*C.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject, ?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }
};

/// https://doc.qt.io/qt-6/qtextframelayoutdata.html
pub const qtextframelayoutdata = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframelayoutdata.html#operator=)
    ///
    /// ``` self: ?*C.QTextFrameLayoutData, param1: ?*C.QTextFrameLayoutData ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QTextFrameLayoutData_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QTextFrameLayoutData ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QTextFrameLayoutData_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtextframe.html
pub const qtextframe = struct {
    /// New constructs a new QTextFrame object.
    ///
    /// ``` doc: ?*C.QTextDocument ```
    pub fn New(doc: ?*anyopaque) ?*C.QTextFrame {
        return C.QTextFrame_new(@ptrCast(doc));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QTextFrame ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QTextFrame_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QTextFrame, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QTextFrame_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QTextFrame, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QTextFrame_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QTextFrame, slot: fn (?*C.QTextFrame, qobjectdefs_enums.Call, i32, ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        C.QTextFrame_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QTextFrame, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QTextFrame_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QTextFrame_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#setFrameFormat)
    ///
    /// ``` self: ?*C.QTextFrame, format: ?*C.QTextFrameFormat ```
    pub fn SetFrameFormat(self: ?*anyopaque, format: ?*anyopaque) void {
        C.QTextFrame_SetFrameFormat(@ptrCast(self), @ptrCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#frameFormat)
    ///
    /// ``` self: ?*C.QTextFrame ```
    pub fn FrameFormat(self: ?*anyopaque) ?*C.QTextFrameFormat {
        return C.QTextFrame_FrameFormat(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#firstCursorPosition)
    ///
    /// ``` self: ?*C.QTextFrame ```
    pub fn FirstCursorPosition(self: ?*anyopaque) ?*C.QTextCursor {
        return C.QTextFrame_FirstCursorPosition(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#lastCursorPosition)
    ///
    /// ``` self: ?*C.QTextFrame ```
    pub fn LastCursorPosition(self: ?*anyopaque) ?*C.QTextCursor {
        return C.QTextFrame_LastCursorPosition(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#firstPosition)
    ///
    /// ``` self: ?*C.QTextFrame ```
    pub fn FirstPosition(self: ?*anyopaque) i32 {
        return C.QTextFrame_FirstPosition(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#lastPosition)
    ///
    /// ``` self: ?*C.QTextFrame ```
    pub fn LastPosition(self: ?*anyopaque) i32 {
        return C.QTextFrame_LastPosition(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#layoutData)
    ///
    /// ``` self: ?*C.QTextFrame ```
    pub fn LayoutData(self: ?*anyopaque) ?*C.QTextFrameLayoutData {
        return C.QTextFrame_LayoutData(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#setLayoutData)
    ///
    /// ``` self: ?*C.QTextFrame, data: ?*C.QTextFrameLayoutData ```
    pub fn SetLayoutData(self: ?*anyopaque, data: ?*anyopaque) void {
        C.QTextFrame_SetLayoutData(@ptrCast(self), @ptrCast(data));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#childFrames)
    ///
    /// ``` self: ?*C.QTextFrame, allocator: std.mem.Allocator ```
    pub fn ChildFrames(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QTextFrame {
        const _arr: C.struct_libqt_list = C.QTextFrame_ChildFrames(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QTextFrame, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QTextFrame = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#parentFrame)
    ///
    /// ``` self: ?*C.QTextFrame ```
    pub fn ParentFrame(self: ?*anyopaque) ?*C.QTextFrame {
        return C.QTextFrame_ParentFrame(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#begin)
    ///
    /// ``` self: ?*C.QTextFrame ```
    pub fn Begin(self: ?*anyopaque) ?*C.QTextFrame__iterator {
        return C.QTextFrame_Begin(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#end)
    ///
    /// ``` self: ?*C.QTextFrame ```
    pub fn End(self: ?*anyopaque) ?*C.QTextFrame__iterator {
        return C.QTextFrame_End(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QTextFrame_Tr2(s_Cstring, c_Cstring);
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
        const _str = C.QTextFrame_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QTextObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextobject.html#format)
    ///
    /// ``` self: ?*C.QTextFrame ```
    pub fn Format(self: ?*anyopaque) ?*C.QTextFormat {
        return C.QTextObject_Format(@ptrCast(self));
    }

    /// Inherited from QTextObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextobject.html#formatIndex)
    ///
    /// ``` self: ?*C.QTextFrame ```
    pub fn FormatIndex(self: ?*anyopaque) i32 {
        return C.QTextObject_FormatIndex(@ptrCast(self));
    }

    /// Inherited from QTextObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextobject.html#document)
    ///
    /// ``` self: ?*C.QTextFrame ```
    pub fn Document(self: ?*anyopaque) ?*C.QTextDocument {
        return C.QTextObject_Document(@ptrCast(self));
    }

    /// Inherited from QTextObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextobject.html#objectIndex)
    ///
    /// ``` self: ?*C.QTextFrame ```
    pub fn ObjectIndex(self: ?*anyopaque) i32 {
        return C.QTextObject_ObjectIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QTextFrame, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QTextFrame, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QTextFrame ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QTextFrame ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QTextFrame ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QTextFrame ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QTextFrame, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QTextFrame ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QTextFrame, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QTextFrame, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QTextFrame, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QTextFrame, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QTextFrame, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QTextFrame, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QTextFrame, obj: ?*C.QObject ```
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
    /// ``` self: ?*C.QTextFrame, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: ?*C.QTextFrame ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QTextFrame ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QTextFrame, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QTextFrame, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QTextFrame, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QTextFrame ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QTextFrame ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QTextFrame ```
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
    /// ``` self: ?*C.QTextFrame ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QTextFrame, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QTextFrame ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QTextFrame, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: ?*C.QTextFrame, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QTextFrame, param1: ?*C.QObject ```
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
    /// ``` self: ?*C.QTextFrame, event: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QTextFrame_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextFrame, event: ?*C.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QTextFrame_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextFrame, slot: fn (?*C.QTextFrame, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QTextFrame_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTextFrame, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QTextFrame_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextFrame, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QTextFrame_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextFrame, slot: fn (?*C.QTextFrame, ?*C.QObject, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QTextFrame_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTextFrame, event: ?*C.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTextFrame_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextFrame, event: ?*C.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTextFrame_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextFrame, slot: fn (?*C.QTextFrame, ?*C.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTextFrame_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTextFrame, event: ?*C.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTextFrame_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextFrame, event: ?*C.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTextFrame_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextFrame, slot: fn (?*C.QTextFrame, ?*C.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTextFrame_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTextFrame, event: ?*C.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTextFrame_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextFrame, event: ?*C.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QTextFrame_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextFrame, slot: fn (?*C.QTextFrame, ?*C.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTextFrame_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTextFrame, signal: ?*C.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QTextFrame_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextFrame, signal: ?*C.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QTextFrame_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextFrame, slot: fn (?*C.QTextFrame, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTextFrame_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTextFrame, signal: ?*C.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QTextFrame_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextFrame, signal: ?*C.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QTextFrame_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextFrame, slot: fn (?*C.QTextFrame, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTextFrame_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTextObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextobject.html#setFormat)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTextFrame, format: ?*C.QTextFormat ```
    pub fn SetFormat(self: ?*anyopaque, format: ?*anyopaque) void {
        C.QTextFrame_SetFormat(@ptrCast(self), @ptrCast(format));
    }

    /// Inherited from QTextObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextFrame, format: ?*C.QTextFormat ```
    pub fn QBaseSetFormat(self: ?*anyopaque, format: ?*anyopaque) void {
        C.QTextFrame_QBaseSetFormat(@ptrCast(self), @ptrCast(format));
    }

    /// Inherited from QTextObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextFrame, slot: fn (?*C.QTextFrame, ?*C.QTextFormat) callconv(.c) void ```
    pub fn OnSetFormat(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QTextFrame_OnSetFormat(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTextFrame ```
    pub fn Sender(self: ?*anyopaque) ?*C.QObject {
        return C.QTextFrame_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextFrame ```
    pub fn QBaseSender(self: ?*anyopaque) ?*C.QObject {
        return C.QTextFrame_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextFrame, slot: fn () callconv(.c) ?*C.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QObject) void {
        C.QTextFrame_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTextFrame ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QTextFrame_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextFrame ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QTextFrame_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextFrame, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QTextFrame_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTextFrame, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QTextFrame_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextFrame, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QTextFrame_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextFrame, slot: fn (?*C.QTextFrame, []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        C.QTextFrame_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QTextFrame, signal: ?*C.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QTextFrame_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextFrame, signal: ?*C.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QTextFrame_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QTextFrame, slot: fn (?*C.QTextFrame, ?*C.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QTextFrame_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QTextFrame ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QTextFrame_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtextblockuserdata.html
pub const qtextblockuserdata = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblockuserdata.html#operator=)
    ///
    /// ``` self: ?*C.QTextBlockUserData, param1: ?*C.QTextBlockUserData ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QTextBlockUserData_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QTextBlockUserData ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QTextBlockUserData_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtextblock.html
pub const qtextblock = struct {
    /// New constructs a new QTextBlock object.
    ///
    ///
    pub fn New() ?*C.QTextBlock {
        return C.QTextBlock_new();
    }

    /// New2 constructs a new QTextBlock object.
    ///
    /// ``` o: ?*C.QTextBlock ```
    pub fn New2(o: ?*anyopaque) ?*C.QTextBlock {
        return C.QTextBlock_new2(@ptrCast(o));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#operator=)
    ///
    /// ``` self: ?*C.QTextBlock, o: ?*C.QTextBlock ```
    pub fn OperatorAssign(self: ?*anyopaque, o: ?*anyopaque) void {
        C.QTextBlock_OperatorAssign(@ptrCast(self), @ptrCast(o));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#isValid)
    ///
    /// ``` self: ?*C.QTextBlock ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return C.QTextBlock_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#operator==)
    ///
    /// ``` self: ?*C.QTextBlock, o: ?*C.QTextBlock ```
    pub fn OperatorEqual(self: ?*anyopaque, o: ?*anyopaque) bool {
        return C.QTextBlock_OperatorEqual(@ptrCast(self), @ptrCast(o));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#operator!=)
    ///
    /// ``` self: ?*C.QTextBlock, o: ?*C.QTextBlock ```
    pub fn OperatorNotEqual(self: ?*anyopaque, o: ?*anyopaque) bool {
        return C.QTextBlock_OperatorNotEqual(@ptrCast(self), @ptrCast(o));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#operator<)
    ///
    /// ``` self: ?*C.QTextBlock, o: ?*C.QTextBlock ```
    pub fn OperatorLesser(self: ?*anyopaque, o: ?*anyopaque) bool {
        return C.QTextBlock_OperatorLesser(@ptrCast(self), @ptrCast(o));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#position)
    ///
    /// ``` self: ?*C.QTextBlock ```
    pub fn Position(self: ?*anyopaque) i32 {
        return C.QTextBlock_Position(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#length)
    ///
    /// ``` self: ?*C.QTextBlock ```
    pub fn Length(self: ?*anyopaque) i32 {
        return C.QTextBlock_Length(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#contains)
    ///
    /// ``` self: ?*C.QTextBlock, position: i32 ```
    pub fn Contains(self: ?*anyopaque, position: i32) bool {
        return C.QTextBlock_Contains(@ptrCast(self), @intCast(position));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#layout)
    ///
    /// ``` self: ?*C.QTextBlock ```
    pub fn Layout(self: ?*anyopaque) ?*C.QTextLayout {
        return C.QTextBlock_Layout(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#clearLayout)
    ///
    /// ``` self: ?*C.QTextBlock ```
    pub fn ClearLayout(self: ?*anyopaque) void {
        C.QTextBlock_ClearLayout(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#blockFormat)
    ///
    /// ``` self: ?*C.QTextBlock ```
    pub fn BlockFormat(self: ?*anyopaque) ?*C.QTextBlockFormat {
        return C.QTextBlock_BlockFormat(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#blockFormatIndex)
    ///
    /// ``` self: ?*C.QTextBlock ```
    pub fn BlockFormatIndex(self: ?*anyopaque) i32 {
        return C.QTextBlock_BlockFormatIndex(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#charFormat)
    ///
    /// ``` self: ?*C.QTextBlock ```
    pub fn CharFormat(self: ?*anyopaque) ?*C.QTextCharFormat {
        return C.QTextBlock_CharFormat(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#charFormatIndex)
    ///
    /// ``` self: ?*C.QTextBlock ```
    pub fn CharFormatIndex(self: ?*anyopaque) i32 {
        return C.QTextBlock_CharFormatIndex(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#textDirection)
    ///
    /// ``` self: ?*C.QTextBlock ```
    pub fn TextDirection(self: ?*anyopaque) i64 {
        return C.QTextBlock_TextDirection(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#text)
    ///
    /// ``` self: ?*C.QTextBlock, allocator: std.mem.Allocator ```
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QTextBlock_Text(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#textFormats)
    ///
    /// ``` self: ?*C.QTextBlock, allocator: std.mem.Allocator ```
    pub fn TextFormats(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QTextLayout__FormatRange {
        const _arr: C.struct_libqt_list = C.QTextBlock_TextFormats(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QTextLayout__FormatRange, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QTextLayout__FormatRange = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#document)
    ///
    /// ``` self: ?*C.QTextBlock ```
    pub fn Document(self: ?*anyopaque) ?*C.QTextDocument {
        return C.QTextBlock_Document(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#textList)
    ///
    /// ``` self: ?*C.QTextBlock ```
    pub fn TextList(self: ?*anyopaque) ?*C.QTextList {
        return C.QTextBlock_TextList(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#userData)
    ///
    /// ``` self: ?*C.QTextBlock ```
    pub fn UserData(self: ?*anyopaque) ?*C.QTextBlockUserData {
        return C.QTextBlock_UserData(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#setUserData)
    ///
    /// ``` self: ?*C.QTextBlock, data: ?*C.QTextBlockUserData ```
    pub fn SetUserData(self: ?*anyopaque, data: ?*anyopaque) void {
        C.QTextBlock_SetUserData(@ptrCast(self), @ptrCast(data));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#userState)
    ///
    /// ``` self: ?*C.QTextBlock ```
    pub fn UserState(self: ?*anyopaque) i32 {
        return C.QTextBlock_UserState(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#setUserState)
    ///
    /// ``` self: ?*C.QTextBlock, state: i32 ```
    pub fn SetUserState(self: ?*anyopaque, state: i32) void {
        C.QTextBlock_SetUserState(@ptrCast(self), @intCast(state));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#revision)
    ///
    /// ``` self: ?*C.QTextBlock ```
    pub fn Revision(self: ?*anyopaque) i32 {
        return C.QTextBlock_Revision(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#setRevision)
    ///
    /// ``` self: ?*C.QTextBlock, rev: i32 ```
    pub fn SetRevision(self: ?*anyopaque, rev: i32) void {
        C.QTextBlock_SetRevision(@ptrCast(self), @intCast(rev));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#isVisible)
    ///
    /// ``` self: ?*C.QTextBlock ```
    pub fn IsVisible(self: ?*anyopaque) bool {
        return C.QTextBlock_IsVisible(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#setVisible)
    ///
    /// ``` self: ?*C.QTextBlock, visible: bool ```
    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        C.QTextBlock_SetVisible(@ptrCast(self), visible);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#blockNumber)
    ///
    /// ``` self: ?*C.QTextBlock ```
    pub fn BlockNumber(self: ?*anyopaque) i32 {
        return C.QTextBlock_BlockNumber(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#firstLineNumber)
    ///
    /// ``` self: ?*C.QTextBlock ```
    pub fn FirstLineNumber(self: ?*anyopaque) i32 {
        return C.QTextBlock_FirstLineNumber(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#setLineCount)
    ///
    /// ``` self: ?*C.QTextBlock, count: i32 ```
    pub fn SetLineCount(self: ?*anyopaque, count: i32) void {
        C.QTextBlock_SetLineCount(@ptrCast(self), @intCast(count));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#lineCount)
    ///
    /// ``` self: ?*C.QTextBlock ```
    pub fn LineCount(self: ?*anyopaque) i32 {
        return C.QTextBlock_LineCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#begin)
    ///
    /// ``` self: ?*C.QTextBlock ```
    pub fn Begin(self: ?*anyopaque) ?*C.QTextBlock__iterator {
        return C.QTextBlock_Begin(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#end)
    ///
    /// ``` self: ?*C.QTextBlock ```
    pub fn End(self: ?*anyopaque) ?*C.QTextBlock__iterator {
        return C.QTextBlock_End(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#next)
    ///
    /// ``` self: ?*C.QTextBlock ```
    pub fn Next(self: ?*anyopaque) ?*C.QTextBlock {
        return C.QTextBlock_Next(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#previous)
    ///
    /// ``` self: ?*C.QTextBlock ```
    pub fn Previous(self: ?*anyopaque) ?*C.QTextBlock {
        return C.QTextBlock_Previous(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblock.html#fragmentIndex)
    ///
    /// ``` self: ?*C.QTextBlock ```
    pub fn FragmentIndex(self: ?*anyopaque) i32 {
        return C.QTextBlock_FragmentIndex(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QTextBlock ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QTextBlock_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtextfragment.html
pub const qtextfragment = struct {
    /// New constructs a new QTextFragment object.
    ///
    ///
    pub fn New() ?*C.QTextFragment {
        return C.QTextFragment_new();
    }

    /// New2 constructs a new QTextFragment object.
    ///
    /// ``` o: ?*C.QTextFragment ```
    pub fn New2(o: ?*anyopaque) ?*C.QTextFragment {
        return C.QTextFragment_new2(@ptrCast(o));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextfragment.html#operator=)
    ///
    /// ``` self: ?*C.QTextFragment, o: ?*C.QTextFragment ```
    pub fn OperatorAssign(self: ?*anyopaque, o: ?*anyopaque) void {
        C.QTextFragment_OperatorAssign(@ptrCast(self), @ptrCast(o));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextfragment.html#isValid)
    ///
    /// ``` self: ?*C.QTextFragment ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return C.QTextFragment_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextfragment.html#operator==)
    ///
    /// ``` self: ?*C.QTextFragment, o: ?*C.QTextFragment ```
    pub fn OperatorEqual(self: ?*anyopaque, o: ?*anyopaque) bool {
        return C.QTextFragment_OperatorEqual(@ptrCast(self), @ptrCast(o));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextfragment.html#operator!=)
    ///
    /// ``` self: ?*C.QTextFragment, o: ?*C.QTextFragment ```
    pub fn OperatorNotEqual(self: ?*anyopaque, o: ?*anyopaque) bool {
        return C.QTextFragment_OperatorNotEqual(@ptrCast(self), @ptrCast(o));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextfragment.html#operator<)
    ///
    /// ``` self: ?*C.QTextFragment, o: ?*C.QTextFragment ```
    pub fn OperatorLesser(self: ?*anyopaque, o: ?*anyopaque) bool {
        return C.QTextFragment_OperatorLesser(@ptrCast(self), @ptrCast(o));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextfragment.html#position)
    ///
    /// ``` self: ?*C.QTextFragment ```
    pub fn Position(self: ?*anyopaque) i32 {
        return C.QTextFragment_Position(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextfragment.html#length)
    ///
    /// ``` self: ?*C.QTextFragment ```
    pub fn Length(self: ?*anyopaque) i32 {
        return C.QTextFragment_Length(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextfragment.html#contains)
    ///
    /// ``` self: ?*C.QTextFragment, position: i32 ```
    pub fn Contains(self: ?*anyopaque, position: i32) bool {
        return C.QTextFragment_Contains(@ptrCast(self), @intCast(position));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextfragment.html#charFormat)
    ///
    /// ``` self: ?*C.QTextFragment ```
    pub fn CharFormat(self: ?*anyopaque) ?*C.QTextCharFormat {
        return C.QTextFragment_CharFormat(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextfragment.html#charFormatIndex)
    ///
    /// ``` self: ?*C.QTextFragment ```
    pub fn CharFormatIndex(self: ?*anyopaque) i32 {
        return C.QTextFragment_CharFormatIndex(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextfragment.html#text)
    ///
    /// ``` self: ?*C.QTextFragment, allocator: std.mem.Allocator ```
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QTextFragment_Text(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextfragment.html#glyphRuns)
    ///
    /// ``` self: ?*C.QTextFragment, allocator: std.mem.Allocator ```
    pub fn GlyphRuns(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QGlyphRun {
        const _arr: C.struct_libqt_list = C.QTextFragment_GlyphRuns(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QGlyphRun, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QGlyphRun = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextfragment.html#glyphRuns)
    ///
    /// ``` self: ?*C.QTextFragment, from: i32, allocator: std.mem.Allocator ```
    pub fn GlyphRuns1(self: ?*anyopaque, from: i32, allocator: std.mem.Allocator) []?*C.QGlyphRun {
        const _arr: C.struct_libqt_list = C.QTextFragment_GlyphRuns1(@ptrCast(self), @intCast(from));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QGlyphRun, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QGlyphRun = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextfragment.html#glyphRuns)
    ///
    /// ``` self: ?*C.QTextFragment, from: i32, length: i32, allocator: std.mem.Allocator ```
    pub fn GlyphRuns2(self: ?*anyopaque, from: i32, length: i32, allocator: std.mem.Allocator) []?*C.QGlyphRun {
        const _arr: C.struct_libqt_list = C.QTextFragment_GlyphRuns2(@ptrCast(self), @intCast(from), @intCast(length));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QGlyphRun, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QGlyphRun = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QTextFragment ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QTextFragment_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtextframe-iterator.html
pub const qtextframe__iterator = struct {
    /// New constructs a new QTextFrame::iterator object.
    ///
    /// ``` other: ?*C.QTextFrame__iterator ```
    pub fn New(other: ?*anyopaque) ?*C.QTextFrame__iterator {
        return C.QTextFrame__iterator_new(@ptrCast(other));
    }

    /// New2 constructs a new QTextFrame::iterator object and invalidates the source QTextFrame::iterator object.
    ///
    /// ``` other: ?*C.QTextFrame__iterator ```
    pub fn New2(other: ?*anyopaque) ?*C.QTextFrame__iterator {
        return C.QTextFrame__iterator_new2(@ptrCast(other));
    }

    /// New3 constructs a new QTextFrame::iterator object.
    ///
    ///
    pub fn New3() ?*C.QTextFrame__iterator {
        return C.QTextFrame__iterator_new3();
    }

    /// New4 constructs a new QTextFrame::iterator object.
    ///
    /// ``` param1: ?*C.QTextFrame__iterator ```
    pub fn New4(param1: ?*anyopaque) ?*C.QTextFrame__iterator {
        return C.QTextFrame__iterator_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: ?*QTextFrame__iterator, other: ?*QTextFrame__iterator ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        C.QTextFrame__iterator_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: ?*QTextFrame__iterator, other: ?*QTextFrame__iterator ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        C.QTextFrame__iterator_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframe__iterator.html#parentFrame)
    ///
    /// ``` self: ?*C.QTextFrame__iterator ```
    pub fn ParentFrame(self: ?*anyopaque) ?*C.QTextFrame {
        return C.QTextFrame__iterator_ParentFrame(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframe__iterator.html#currentFrame)
    ///
    /// ``` self: ?*C.QTextFrame__iterator ```
    pub fn CurrentFrame(self: ?*anyopaque) ?*C.QTextFrame {
        return C.QTextFrame__iterator_CurrentFrame(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframe__iterator.html#currentBlock)
    ///
    /// ``` self: ?*C.QTextFrame__iterator ```
    pub fn CurrentBlock(self: ?*anyopaque) ?*C.QTextBlock {
        return C.QTextFrame__iterator_CurrentBlock(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframe__iterator.html#atEnd)
    ///
    /// ``` self: ?*C.QTextFrame__iterator ```
    pub fn AtEnd(self: ?*anyopaque) bool {
        return C.QTextFrame__iterator_AtEnd(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframe__iterator.html#operator==)
    ///
    /// ``` self: ?*C.QTextFrame__iterator, o: ?*C.QTextFrame__iterator ```
    pub fn OperatorEqual(self: ?*anyopaque, o: ?*anyopaque) bool {
        return C.QTextFrame__iterator_OperatorEqual(@ptrCast(self), @ptrCast(o));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframe__iterator.html#operator!=)
    ///
    /// ``` self: ?*C.QTextFrame__iterator, o: ?*C.QTextFrame__iterator ```
    pub fn OperatorNotEqual(self: ?*anyopaque, o: ?*anyopaque) bool {
        return C.QTextFrame__iterator_OperatorNotEqual(@ptrCast(self), @ptrCast(o));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframe__iterator.html#operator++)
    ///
    /// ``` self: ?*C.QTextFrame__iterator ```
    pub fn OperatorPlusPlus(self: ?*anyopaque) ?*C.QTextFrame__iterator {
        return C.QTextFrame__iterator_OperatorPlusPlus(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframe__iterator.html#operator++)
    ///
    /// ``` self: ?*C.QTextFrame__iterator, param1: i32 ```
    pub fn OperatorPlusPlusWithInt(self: ?*anyopaque, param1: i32) ?*C.QTextFrame__iterator {
        return C.QTextFrame__iterator_OperatorPlusPlusWithInt(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframe__iterator.html#operator--)
    ///
    /// ``` self: ?*C.QTextFrame__iterator ```
    pub fn OperatorMinusMinus(self: ?*anyopaque) ?*C.QTextFrame__iterator {
        return C.QTextFrame__iterator_OperatorMinusMinus(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextframe__iterator.html#operator--)
    ///
    /// ``` self: ?*C.QTextFrame__iterator, param1: i32 ```
    pub fn OperatorMinusMinusWithInt(self: ?*anyopaque, param1: i32) ?*C.QTextFrame__iterator {
        return C.QTextFrame__iterator_OperatorMinusMinusWithInt(@ptrCast(self), @intCast(param1));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QTextFrame__iterator ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QTextFrame__iterator_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtextblock-iterator.html
pub const qtextblock__iterator = struct {
    /// New constructs a new QTextBlock::iterator object.
    ///
    /// ``` other: ?*C.QTextBlock__iterator ```
    pub fn New(other: ?*anyopaque) ?*C.QTextBlock__iterator {
        return C.QTextBlock__iterator_new(@ptrCast(other));
    }

    /// New2 constructs a new QTextBlock::iterator object and invalidates the source QTextBlock::iterator object.
    ///
    /// ``` other: ?*C.QTextBlock__iterator ```
    pub fn New2(other: ?*anyopaque) ?*C.QTextBlock__iterator {
        return C.QTextBlock__iterator_new2(@ptrCast(other));
    }

    /// New3 constructs a new QTextBlock::iterator object.
    ///
    ///
    pub fn New3() ?*C.QTextBlock__iterator {
        return C.QTextBlock__iterator_new3();
    }

    /// New4 constructs a new QTextBlock::iterator object.
    ///
    /// ``` param1: ?*C.QTextBlock__iterator ```
    pub fn New4(param1: ?*anyopaque) ?*C.QTextBlock__iterator {
        return C.QTextBlock__iterator_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: ?*QTextBlock__iterator, other: ?*QTextBlock__iterator ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        C.QTextBlock__iterator_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: ?*QTextBlock__iterator, other: ?*QTextBlock__iterator ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        C.QTextBlock__iterator_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblock__iterator.html#fragment)
    ///
    /// ``` self: ?*C.QTextBlock__iterator ```
    pub fn Fragment(self: ?*anyopaque) ?*C.QTextFragment {
        return C.QTextBlock__iterator_Fragment(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblock__iterator.html#atEnd)
    ///
    /// ``` self: ?*C.QTextBlock__iterator ```
    pub fn AtEnd(self: ?*anyopaque) bool {
        return C.QTextBlock__iterator_AtEnd(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblock__iterator.html#operator==)
    ///
    /// ``` self: ?*C.QTextBlock__iterator, o: ?*C.QTextBlock__iterator ```
    pub fn OperatorEqual(self: ?*anyopaque, o: ?*anyopaque) bool {
        return C.QTextBlock__iterator_OperatorEqual(@ptrCast(self), @ptrCast(o));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblock__iterator.html#operator!=)
    ///
    /// ``` self: ?*C.QTextBlock__iterator, o: ?*C.QTextBlock__iterator ```
    pub fn OperatorNotEqual(self: ?*anyopaque, o: ?*anyopaque) bool {
        return C.QTextBlock__iterator_OperatorNotEqual(@ptrCast(self), @ptrCast(o));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblock__iterator.html#operator++)
    ///
    /// ``` self: ?*C.QTextBlock__iterator ```
    pub fn OperatorPlusPlus(self: ?*anyopaque) ?*C.QTextBlock__iterator {
        return C.QTextBlock__iterator_OperatorPlusPlus(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblock__iterator.html#operator++)
    ///
    /// ``` self: ?*C.QTextBlock__iterator, param1: i32 ```
    pub fn OperatorPlusPlusWithInt(self: ?*anyopaque, param1: i32) ?*C.QTextBlock__iterator {
        return C.QTextBlock__iterator_OperatorPlusPlusWithInt(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblock__iterator.html#operator--)
    ///
    /// ``` self: ?*C.QTextBlock__iterator ```
    pub fn OperatorMinusMinus(self: ?*anyopaque) ?*C.QTextBlock__iterator {
        return C.QTextBlock__iterator_OperatorMinusMinus(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qtextblock__iterator.html#operator--)
    ///
    /// ``` self: ?*C.QTextBlock__iterator, param1: i32 ```
    pub fn OperatorMinusMinusWithInt(self: ?*anyopaque, param1: i32) ?*C.QTextBlock__iterator {
        return C.QTextBlock__iterator_OperatorMinusMinusWithInt(@ptrCast(self), @intCast(param1));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QTextBlock__iterator ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QTextBlock__iterator_Delete(@ptrCast(self));
    }
};
