const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://api.kde.org/attica-platformdependentv3.html
pub const attica__platformdependentv3 = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.Attica__PlatformDependentV3 ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.Attica__PlatformDependentV3_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.Attica__PlatformDependentV3, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Attica__PlatformDependentV3_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.Attica__PlatformDependentV3, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.Attica__PlatformDependentV3_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.Attica__PlatformDependentV3_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::platformdependentv3.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-platformdependentv3.html#isReady)
    ///
    /// ``` self: QtC.Attica__PlatformDependentV3 ```
    pub fn IsReady(self: ?*anyopaque) bool {
        return qtc.Attica__PlatformDependentV3_IsReady(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-platformdependentv3.html#readyChanged)
    ///
    /// ``` self: QtC.Attica__PlatformDependentV3 ```
    pub fn ReadyChanged(self: ?*anyopaque) void {
        qtc.Attica__PlatformDependentV3_ReadyChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-platformdependentv3.html#readyChanged)
    ///
    /// ``` self: QtC.Attica__PlatformDependentV3, callback: *const fn (self: QtC.Attica__PlatformDependentV3) callconv(.c) void ```
    pub fn OnReadyChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.Attica__PlatformDependentV3_Connect_ReadyChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.Attica__PlatformDependentV3_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::platformdependentv3.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.Attica__PlatformDependentV3_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::platformdependentv3.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ``` self: QtC.Attica__PlatformDependentV3, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ``` self: QtC.Attica__PlatformDependentV3, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.Attica__PlatformDependentV3, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::platformdependentv3.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.Attica__PlatformDependentV3, name: []const u8 ```
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
    /// ``` self: QtC.Attica__PlatformDependentV3 ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.Attica__PlatformDependentV3 ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.Attica__PlatformDependentV3 ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.Attica__PlatformDependentV3 ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.Attica__PlatformDependentV3, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.Attica__PlatformDependentV3 ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.Attica__PlatformDependentV3, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.Attica__PlatformDependentV3, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.Attica__PlatformDependentV3, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.Attica__PlatformDependentV3, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.Attica__PlatformDependentV3, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("attica::platformdependentv3.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.Attica__PlatformDependentV3, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.Attica__PlatformDependentV3, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.Attica__PlatformDependentV3, obj: QtC.QObject ```
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
    /// ``` self: QtC.Attica__PlatformDependentV3, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.Attica__PlatformDependentV3 ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.Attica__PlatformDependentV3 ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.Attica__PlatformDependentV3, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.Attica__PlatformDependentV3, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.Attica__PlatformDependentV3, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("attica::platformdependentv3.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("attica::platformdependentv3.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.Attica__PlatformDependentV3 ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.Attica__PlatformDependentV3 ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.Attica__PlatformDependentV3 ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.Attica__PlatformDependentV3, callback: *const fn (self: QtC.Attica__PlatformDependentV3) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.Attica__PlatformDependentV3 ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.Attica__PlatformDependentV3, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.Attica__PlatformDependentV3 ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.Attica__PlatformDependentV3, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.Attica__PlatformDependentV3, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.Attica__PlatformDependentV3, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.Attica__PlatformDependentV3, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.Attica__PlatformDependentV3, callback: *const fn (self: QtC.Attica__PlatformDependentV3, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from Attica::PlatformDependentV2
    ///
    /// [Qt documentation](https://api.kde.org/attica-platformdependentv2.html#deleteResource)
    ///
    /// ``` self: QtC.Attica__PlatformDependentV3, request: QtC.QNetworkRequest ```
    pub fn DeleteResource(self: ?*anyopaque, request: ?*anyopaque) QtC.QNetworkReply {
        return qtc.Attica__PlatformDependentV2_DeleteResource(@ptrCast(self), @ptrCast(request));
    }

    /// Inherited from Attica::PlatformDependentV2
    ///
    /// [Qt documentation](https://api.kde.org/attica-platformdependentv2.html#put)
    ///
    /// ``` self: QtC.Attica__PlatformDependentV3, request: QtC.QNetworkRequest, data: QtC.QIODevice ```
    pub fn Put(self: ?*anyopaque, request: ?*anyopaque, data: ?*anyopaque) QtC.QNetworkReply {
        return qtc.Attica__PlatformDependentV2_Put(@ptrCast(self), @ptrCast(request), @ptrCast(data));
    }

    /// Inherited from Attica::PlatformDependentV2
    ///
    /// [Qt documentation](https://api.kde.org/attica-platformdependentv2.html#put)
    ///
    /// ``` self: QtC.Attica__PlatformDependentV3, request: QtC.QNetworkRequest, data: []u8 ```
    pub fn Put2(self: ?*anyopaque, request: ?*anyopaque, data: []u8) QtC.QNetworkReply {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.Attica__PlatformDependentV2_Put2(@ptrCast(self), @ptrCast(request), data_str);
    }

    /// Inherited from Attica::PlatformDependentV2
    ///
    /// [Qt documentation](https://api.kde.org/attica-platformdependentv2.html#operator-eq)
    ///
    /// ``` self: QtC.Attica__PlatformDependentV3, param1: QtC.Attica__PlatformDependentV2 ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.Attica__PlatformDependentV2_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from Attica::PlatformDependent
    ///
    /// [Qt documentation](https://api.kde.org/attica-platformdependent.html#getDefaultProviderFiles)
    ///
    /// ``` self: QtC.Attica__PlatformDependentV3, allocator: std.mem.Allocator ```
    pub fn GetDefaultProviderFiles(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QUrl {
        const _arr: qtc.libqt_list = qtc.Attica__PlatformDependent_GetDefaultProviderFiles(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QUrl, _arr.len) catch @panic("attica::platformdependentv3.GetDefaultProviderFiles: Memory allocation failed");
        const _data: [*]QtC.QUrl = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from Attica::PlatformDependent
    ///
    /// [Qt documentation](https://api.kde.org/attica-platformdependent.html#addDefaultProviderFile)
    ///
    /// ``` self: QtC.Attica__PlatformDependentV3, url: QtC.QUrl ```
    pub fn AddDefaultProviderFile(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.Attica__PlatformDependent_AddDefaultProviderFile(@ptrCast(self), @ptrCast(url));
    }

    /// Inherited from Attica::PlatformDependent
    ///
    /// [Qt documentation](https://api.kde.org/attica-platformdependent.html#removeDefaultProviderFile)
    ///
    /// ``` self: QtC.Attica__PlatformDependentV3, url: QtC.QUrl ```
    pub fn RemoveDefaultProviderFile(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.Attica__PlatformDependent_RemoveDefaultProviderFile(@ptrCast(self), @ptrCast(url));
    }

    /// Inherited from Attica::PlatformDependent
    ///
    /// [Qt documentation](https://api.kde.org/attica-platformdependent.html#enableProvider)
    ///
    /// ``` self: QtC.Attica__PlatformDependentV3, baseUrl: QtC.QUrl, enabled: bool ```
    pub fn EnableProvider(self: ?*anyopaque, baseUrl: ?*anyopaque, enabled: bool) void {
        qtc.Attica__PlatformDependent_EnableProvider(@ptrCast(self), @ptrCast(baseUrl), enabled);
    }

    /// Inherited from Attica::PlatformDependent
    ///
    /// [Qt documentation](https://api.kde.org/attica-platformdependent.html#isEnabled)
    ///
    /// ``` self: QtC.Attica__PlatformDependentV3, baseUrl: QtC.QUrl ```
    pub fn IsEnabled(self: ?*anyopaque, baseUrl: ?*anyopaque) bool {
        return qtc.Attica__PlatformDependent_IsEnabled(@ptrCast(self), @ptrCast(baseUrl));
    }

    /// Inherited from Attica::PlatformDependent
    ///
    /// [Qt documentation](https://api.kde.org/attica-platformdependent.html#hasCredentials)
    ///
    /// ``` self: QtC.Attica__PlatformDependentV3, baseUrl: QtC.QUrl ```
    pub fn HasCredentials(self: ?*anyopaque, baseUrl: ?*anyopaque) bool {
        return qtc.Attica__PlatformDependent_HasCredentials(@ptrCast(self), @ptrCast(baseUrl));
    }

    /// Inherited from Attica::PlatformDependent
    ///
    /// [Qt documentation](https://api.kde.org/attica-platformdependent.html#loadCredentials)
    ///
    /// ``` self: QtC.Attica__PlatformDependentV3, baseUrl: QtC.QUrl, user: []const u8, password: []const u8 ```
    pub fn LoadCredentials(self: ?*anyopaque, baseUrl: ?*anyopaque, user: []const u8, password: []const u8) bool {
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const password_str = qtc.libqt_string{
            .len = password.len,
            .data = password.ptr,
        };
        return qtc.Attica__PlatformDependent_LoadCredentials(@ptrCast(self), @ptrCast(baseUrl), user_str, password_str);
    }

    /// Inherited from Attica::PlatformDependent
    ///
    /// [Qt documentation](https://api.kde.org/attica-platformdependent.html#askForCredentials)
    ///
    /// ``` self: QtC.Attica__PlatformDependentV3, baseUrl: QtC.QUrl, user: []const u8, password: []const u8 ```
    pub fn AskForCredentials(self: ?*anyopaque, baseUrl: ?*anyopaque, user: []const u8, password: []const u8) bool {
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const password_str = qtc.libqt_string{
            .len = password.len,
            .data = password.ptr,
        };
        return qtc.Attica__PlatformDependent_AskForCredentials(@ptrCast(self), @ptrCast(baseUrl), user_str, password_str);
    }

    /// Inherited from Attica::PlatformDependent
    ///
    /// [Qt documentation](https://api.kde.org/attica-platformdependent.html#saveCredentials)
    ///
    /// ``` self: QtC.Attica__PlatformDependentV3, baseUrl: QtC.QUrl, user: []const u8, password: []const u8 ```
    pub fn SaveCredentials(self: ?*anyopaque, baseUrl: ?*anyopaque, user: []const u8, password: []const u8) bool {
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const password_str = qtc.libqt_string{
            .len = password.len,
            .data = password.ptr,
        };
        return qtc.Attica__PlatformDependent_SaveCredentials(@ptrCast(self), @ptrCast(baseUrl), user_str, password_str);
    }

    /// Inherited from Attica::PlatformDependent
    ///
    /// [Qt documentation](https://api.kde.org/attica-platformdependent.html#get)
    ///
    /// ``` self: QtC.Attica__PlatformDependentV3, request: QtC.QNetworkRequest ```
    pub fn Get(self: ?*anyopaque, request: ?*anyopaque) QtC.QNetworkReply {
        return qtc.Attica__PlatformDependent_Get(@ptrCast(self), @ptrCast(request));
    }

    /// Inherited from Attica::PlatformDependent
    ///
    /// [Qt documentation](https://api.kde.org/attica-platformdependent.html#post)
    ///
    /// ``` self: QtC.Attica__PlatformDependentV3, request: QtC.QNetworkRequest, data: QtC.QIODevice ```
    pub fn Post(self: ?*anyopaque, request: ?*anyopaque, data: ?*anyopaque) QtC.QNetworkReply {
        return qtc.Attica__PlatformDependent_Post(@ptrCast(self), @ptrCast(request), @ptrCast(data));
    }

    /// Inherited from Attica::PlatformDependent
    ///
    /// [Qt documentation](https://api.kde.org/attica-platformdependent.html#post)
    ///
    /// ``` self: QtC.Attica__PlatformDependentV3, request: QtC.QNetworkRequest, data: []u8 ```
    pub fn Post2(self: ?*anyopaque, request: ?*anyopaque, data: []u8) QtC.QNetworkReply {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.Attica__PlatformDependent_Post2(@ptrCast(self), @ptrCast(request), data_str);
    }

    /// Inherited from Attica::PlatformDependent
    ///
    /// [Qt documentation](https://api.kde.org/attica-platformdependent.html#setNam)
    ///
    /// ``` self: QtC.Attica__PlatformDependentV3, nam: QtC.QNetworkAccessManager ```
    pub fn SetNam(self: ?*anyopaque, nam: ?*anyopaque) void {
        qtc.Attica__PlatformDependent_SetNam(@ptrCast(self), @ptrCast(nam));
    }

    /// Inherited from Attica::PlatformDependent
    ///
    /// [Qt documentation](https://api.kde.org/attica-platformdependent.html#nam)
    ///
    /// ``` self: QtC.Attica__PlatformDependentV3 ```
    pub fn Nam(self: ?*anyopaque) QtC.QNetworkAccessManager {
        return qtc.Attica__PlatformDependent_Nam(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.Attica__PlatformDependentV3, callback: *const fn (self: QtC.Attica__PlatformDependentV3, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.Attica__PlatformDependentV3 ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Attica__PlatformDependentV3_Delete(@ptrCast(self));
    }
};
