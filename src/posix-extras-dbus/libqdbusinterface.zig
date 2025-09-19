const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qdbusconnection_enums = @import("libqdbusconnection.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qdbusinterface.html
pub const qdbusinterface = struct {
    /// New constructs a new QDBusInterface object.
    ///
    /// ``` service: []const u8, path: []const u8 ```
    pub fn New(service: []const u8, path: []const u8) QtC.QDBusInterface {
        const service_str = qtc.libqt_string{
            .len = service.len,
            .data = service.ptr,
        };
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };

        return qtc.QDBusInterface_new(service_str, path_str);
    }

    /// New2 constructs a new QDBusInterface object.
    ///
    /// ``` service: []const u8, path: []const u8, interface: []const u8 ```
    pub fn New2(service: []const u8, path: []const u8, interface: []const u8) QtC.QDBusInterface {
        const service_str = qtc.libqt_string{
            .len = service.len,
            .data = service.ptr,
        };
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        const interface_str = qtc.libqt_string{
            .len = interface.len,
            .data = interface.ptr,
        };

        return qtc.QDBusInterface_new2(service_str, path_str, interface_str);
    }

    /// New3 constructs a new QDBusInterface object.
    ///
    /// ``` service: []const u8, path: []const u8, interface: []const u8, connection: QtC.QDBusConnection ```
    pub fn New3(service: []const u8, path: []const u8, interface: []const u8, connection: ?*anyopaque) QtC.QDBusInterface {
        const service_str = qtc.libqt_string{
            .len = service.len,
            .data = service.ptr,
        };
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        const interface_str = qtc.libqt_string{
            .len = interface.len,
            .data = interface.ptr,
        };

        return qtc.QDBusInterface_new3(service_str, path_str, interface_str, @ptrCast(connection));
    }

    /// New4 constructs a new QDBusInterface object.
    ///
    /// ``` service: []const u8, path: []const u8, interface: []const u8, connection: QtC.QDBusConnection, parent: QtC.QObject ```
    pub fn New4(service: []const u8, path: []const u8, interface: []const u8, connection: ?*anyopaque, parent: ?*anyopaque) QtC.QDBusInterface {
        const service_str = qtc.libqt_string{
            .len = service.len,
            .data = service.ptr,
        };
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        const interface_str = qtc.libqt_string{
            .len = interface.len,
            .data = interface.ptr,
        };

        return qtc.QDBusInterface_new4(service_str, path_str, interface_str, @ptrCast(connection), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QDBusInterface ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QDBusInterface_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QDBusInterface, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDBusInterface_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QDBusInterface, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QDBusInterface_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QDBusInterface, callback: *const fn (self: QtC.QDBusInterface, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QDBusInterface_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QDBusInterface, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QDBusInterface_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QDBusAbstractInterface_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbusinterface.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusabstractinterface.html#isValid)
    ///
    /// ``` self: QtC.QDBusInterface ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QDBusAbstractInterface_IsValid(@ptrCast(self));
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusabstractinterface.html#connection)
    ///
    /// ``` self: QtC.QDBusInterface ```
    pub fn Connection(self: ?*anyopaque) QtC.QDBusConnection {
        return qtc.QDBusAbstractInterface_Connection(@ptrCast(self));
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusabstractinterface.html#service)
    ///
    /// ``` self: QtC.QDBusInterface, allocator: std.mem.Allocator ```
    pub fn Service(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDBusAbstractInterface_Service(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbusinterface.Service: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusabstractinterface.html#path)
    ///
    /// ``` self: QtC.QDBusInterface, allocator: std.mem.Allocator ```
    pub fn Path(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDBusAbstractInterface_Path(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbusinterface.Path: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusabstractinterface.html#interface)
    ///
    /// ``` self: QtC.QDBusInterface, allocator: std.mem.Allocator ```
    pub fn Interface(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDBusAbstractInterface_Interface(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbusinterface.Interface: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusabstractinterface.html#lastError)
    ///
    /// ``` self: QtC.QDBusInterface ```
    pub fn LastError(self: ?*anyopaque) QtC.QDBusError {
        return qtc.QDBusAbstractInterface_LastError(@ptrCast(self));
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusabstractinterface.html#setTimeout)
    ///
    /// ``` self: QtC.QDBusInterface, timeout: i32 ```
    pub fn SetTimeout(self: ?*anyopaque, timeout: i32) void {
        qtc.QDBusAbstractInterface_SetTimeout(@ptrCast(self), @intCast(timeout));
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusabstractinterface.html#timeout)
    ///
    /// ``` self: QtC.QDBusInterface ```
    pub fn Timeout(self: ?*anyopaque) i32 {
        return qtc.QDBusAbstractInterface_Timeout(@ptrCast(self));
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusabstractinterface.html#setInteractiveAuthorizationAllowed)
    ///
    /// ``` self: QtC.QDBusInterface, enable: bool ```
    pub fn SetInteractiveAuthorizationAllowed(self: ?*anyopaque, enable: bool) void {
        qtc.QDBusAbstractInterface_SetInteractiveAuthorizationAllowed(@ptrCast(self), enable);
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusabstractinterface.html#isInteractiveAuthorizationAllowed)
    ///
    /// ``` self: QtC.QDBusInterface ```
    pub fn IsInteractiveAuthorizationAllowed(self: ?*anyopaque) bool {
        return qtc.QDBusAbstractInterface_IsInteractiveAuthorizationAllowed(@ptrCast(self));
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusabstractinterface.html#call)
    ///
    /// ``` self: QtC.QDBusInterface, method: []const u8 ```
    pub fn Call(self: ?*anyopaque, method: []const u8) QtC.QDBusMessage {
        const method_str = qtc.libqt_string{
            .len = method.len,
            .data = method.ptr,
        };
        return qtc.QDBusAbstractInterface_Call(@ptrCast(self), method_str);
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusabstractinterface.html#call)
    ///
    /// ``` self: QtC.QDBusInterface, mode: qdbusconnection_enums.CallMode, method: []const u8 ```
    pub fn Call2(self: ?*anyopaque, mode: i32, method: []const u8) QtC.QDBusMessage {
        const method_str = qtc.libqt_string{
            .len = method.len,
            .data = method.ptr,
        };
        return qtc.QDBusAbstractInterface_Call2(@ptrCast(self), @intCast(mode), method_str);
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusabstractinterface.html#callWithArgumentList)
    ///
    /// ``` self: QtC.QDBusInterface, mode: qdbusconnection_enums.CallMode, method: []const u8, args: []QtC.QVariant ```
    pub fn CallWithArgumentList(self: ?*anyopaque, mode: i32, method: []const u8, args: []QtC.QVariant) QtC.QDBusMessage {
        const method_str = qtc.libqt_string{
            .len = method.len,
            .data = method.ptr,
        };
        const args_list = qtc.libqt_list{
            .len = args.len,
            .data = @ptrCast(args.ptr),
        };
        return qtc.QDBusAbstractInterface_CallWithArgumentList(@ptrCast(self), @intCast(mode), method_str, args_list);
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusabstractinterface.html#asyncCall)
    ///
    /// ``` self: QtC.QDBusInterface, method: []const u8 ```
    pub fn AsyncCall(self: ?*anyopaque, method: []const u8) QtC.QDBusPendingCall {
        const method_str = qtc.libqt_string{
            .len = method.len,
            .data = method.ptr,
        };
        return qtc.QDBusAbstractInterface_AsyncCall(@ptrCast(self), method_str);
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusabstractinterface.html#asyncCallWithArgumentList)
    ///
    /// ``` self: QtC.QDBusInterface, method: []const u8, args: []QtC.QVariant ```
    pub fn AsyncCallWithArgumentList(self: ?*anyopaque, method: []const u8, args: []QtC.QVariant) QtC.QDBusPendingCall {
        const method_str = qtc.libqt_string{
            .len = method.len,
            .data = method.ptr,
        };
        const args_list = qtc.libqt_list{
            .len = args.len,
            .data = @ptrCast(args.ptr),
        };
        return qtc.QDBusAbstractInterface_AsyncCallWithArgumentList(@ptrCast(self), method_str, args_list);
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QDBusAbstractInterface_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbusinterface.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QDBusAbstractInterface_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbusinterface.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QDBusInterface, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbusinterface.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QDBusInterface, name: []const u8 ```
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
    /// ``` self: QtC.QDBusInterface ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QDBusInterface ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QDBusInterface ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QDBusInterface ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QDBusInterface, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QDBusInterface ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QDBusInterface, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QDBusInterface, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QDBusInterface, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QDBusInterface, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QDBusInterface, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qdbusinterface.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QDBusInterface, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QDBusInterface, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QDBusInterface, obj: QtC.QObject ```
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
    /// ``` self: QtC.QDBusInterface, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.QDBusInterface ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QDBusInterface ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QDBusInterface, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QDBusInterface, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QDBusInterface, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qdbusinterface.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qdbusinterface.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QDBusInterface ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QDBusInterface ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QDBusInterface ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QDBusInterface, callback: *const fn (self: QtC.QDBusInterface) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QDBusInterface ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QDBusInterface, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QDBusInterface ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QDBusInterface, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QDBusInterface, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.QDBusInterface, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QDBusInterface, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QDBusInterface, callback: *const fn (self: QtC.QDBusInterface, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusabstractinterface.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QDBusInterface, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QDBusInterface_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusabstractinterface.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QDBusInterface, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QDBusInterface_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusabstractinterface.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QDBusInterface, callback: *const fn (self: QtC.QDBusInterface, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDBusInterface_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusabstractinterface.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QDBusInterface, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QDBusInterface_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusabstractinterface.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QDBusInterface, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QDBusInterface_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusabstractinterface.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QDBusInterface, callback: *const fn (self: QtC.QDBusInterface, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDBusInterface_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QDBusInterface, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QDBusInterface_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QDBusInterface, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QDBusInterface_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QDBusInterface, callback: *const fn (self: QtC.QDBusInterface, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QDBusInterface_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QDBusInterface, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QDBusInterface_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QDBusInterface, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QDBusInterface_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QDBusInterface, callback: *const fn (self: QtC.QDBusInterface, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QDBusInterface_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QDBusInterface, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDBusInterface_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QDBusInterface, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDBusInterface_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QDBusInterface, callback: *const fn (self: QtC.QDBusInterface, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDBusInterface_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QDBusInterface, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDBusInterface_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QDBusInterface, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDBusInterface_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QDBusInterface, callback: *const fn (self: QtC.QDBusInterface, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDBusInterface_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QDBusInterface, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDBusInterface_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QDBusInterface, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDBusInterface_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QDBusInterface, callback: *const fn (self: QtC.QDBusInterface, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDBusInterface_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusabstractinterface.html#internalPropGet)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QDBusInterface, propname: []const u8 ```
    pub fn InternalPropGet(self: ?*anyopaque, propname: []const u8) QtC.QVariant {
        const propname_Cstring = propname.ptr;
        return qtc.QDBusInterface_InternalPropGet(@ptrCast(self), propname_Cstring);
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusabstractinterface.html#internalPropGet)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QDBusInterface, propname: []const u8 ```
    pub fn QBaseInternalPropGet(self: ?*anyopaque, propname: []const u8) QtC.QVariant {
        const propname_Cstring = propname.ptr;
        return qtc.QDBusInterface_QBaseInternalPropGet(@ptrCast(self), propname_Cstring);
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusabstractinterface.html#internalPropGet)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QDBusInterface, callback: *const fn (self: QtC.QDBusInterface, propname: [*:0]const u8) callconv(.c) QtC.QVariant ```
    pub fn OnInternalPropGet(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) QtC.QVariant) void {
        qtc.QDBusInterface_OnInternalPropGet(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusabstractinterface.html#internalPropSet)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QDBusInterface, propname: []const u8, value: QtC.QVariant ```
    pub fn InternalPropSet(self: ?*anyopaque, propname: []const u8, value: ?*anyopaque) void {
        const propname_Cstring = propname.ptr;
        qtc.QDBusInterface_InternalPropSet(@ptrCast(self), propname_Cstring, @ptrCast(value));
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusabstractinterface.html#internalPropSet)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QDBusInterface, propname: []const u8, value: QtC.QVariant ```
    pub fn QBaseInternalPropSet(self: ?*anyopaque, propname: []const u8, value: ?*anyopaque) void {
        const propname_Cstring = propname.ptr;
        qtc.QDBusInterface_QBaseInternalPropSet(@ptrCast(self), propname_Cstring, @ptrCast(value));
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusabstractinterface.html#internalPropSet)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QDBusInterface, callback: *const fn (self: QtC.QDBusInterface, propname: [*:0]const u8, value: QtC.QVariant) callconv(.c) void ```
    pub fn OnInternalPropSet(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, ?*anyopaque) callconv(.c) void) void {
        qtc.QDBusInterface_OnInternalPropSet(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusabstractinterface.html#internalConstCall)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QDBusInterface, mode: qdbusconnection_enums.CallMode, method: []const u8 ```
    pub fn InternalConstCall(self: ?*anyopaque, mode: i32, method: []const u8) QtC.QDBusMessage {
        const method_str = qtc.libqt_string{
            .len = method.len,
            .data = method.ptr,
        };
        return qtc.QDBusInterface_InternalConstCall(@ptrCast(self), @intCast(mode), method_str);
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusabstractinterface.html#internalConstCall)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QDBusInterface, mode: qdbusconnection_enums.CallMode, method: []const u8 ```
    pub fn QBaseInternalConstCall(self: ?*anyopaque, mode: i32, method: []const u8) QtC.QDBusMessage {
        const method_str = qtc.libqt_string{
            .len = method.len,
            .data = method.ptr,
        };
        return qtc.QDBusInterface_QBaseInternalConstCall(@ptrCast(self), @intCast(mode), method_str);
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusabstractinterface.html#internalConstCall)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QDBusInterface, callback: *const fn (self: QtC.QDBusInterface, mode: qdbusconnection_enums.CallMode, method: [*:0]const u8) callconv(.c) QtC.QDBusMessage ```
    pub fn OnInternalConstCall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, [*:0]const u8) callconv(.c) QtC.QDBusMessage) void {
        qtc.QDBusInterface_OnInternalConstCall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QDBusInterface ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QDBusInterface_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QDBusInterface ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QDBusInterface_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QDBusInterface, callback: *const fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QDBusInterface_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QDBusInterface ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QDBusInterface_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QDBusInterface ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QDBusInterface_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QDBusInterface, callback: *const fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QDBusInterface_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QDBusInterface, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDBusInterface_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QDBusInterface, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDBusInterface_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QDBusInterface, callback: *const fn (self: QtC.QDBusInterface, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QDBusInterface_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QDBusInterface, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QDBusInterface_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QDBusInterface, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QDBusInterface_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QDBusInterface, callback: *const fn (self: QtC.QDBusInterface, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QDBusInterface_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QDBusInterface, callback: *const fn (self: QtC.QDBusInterface, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusinterface.html#dtor.QDBusInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QDBusInterface ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDBusInterface_Delete(@ptrCast(self));
    }
};
