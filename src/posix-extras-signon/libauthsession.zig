const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const authsession_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html
pub const signon__authsession = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.SignOn__AuthSession ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.SignOn__AuthSession_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.SignOn__AuthSession, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.SignOn__AuthSession_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.SignOn__AuthSession, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.SignOn__AuthSession_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), @ptrCast(@alignCast(param3)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.SignOn__AuthSession_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("signon::authsession.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
    ///
    /// ``` self: QtC.SignOn__AuthSession, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.SignOn__AuthSession_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("signon::authsession.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
    ///
    /// ``` self: QtC.SignOn__AuthSession ```
    pub fn QueryAvailableMechanisms(self: ?*anyopaque) void {
        qtc.SignOn__AuthSession_QueryAvailableMechanisms(@ptrCast(self));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
    ///
    /// ``` self: QtC.SignOn__AuthSession, sessionData: QtC.SignOn__SessionData ```
    pub fn Process(self: ?*anyopaque, sessionData: ?*anyopaque) void {
        qtc.SignOn__AuthSession_Process(@ptrCast(self), @ptrCast(sessionData));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
    ///
    /// ``` self: QtC.SignOn__AuthSession, sessionData: QtC.SignOn__SessionData ```
    pub fn Challenge(self: ?*anyopaque, sessionData: ?*anyopaque) void {
        qtc.SignOn__AuthSession_Challenge(@ptrCast(self), @ptrCast(sessionData));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
    ///
    /// ``` self: QtC.SignOn__AuthSession, sessionData: QtC.SignOn__SessionData ```
    pub fn Request(self: ?*anyopaque, sessionData: ?*anyopaque) void {
        qtc.SignOn__AuthSession_Request(@ptrCast(self), @ptrCast(sessionData));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
    ///
    /// ``` self: QtC.SignOn__AuthSession ```
    pub fn Cancel(self: ?*anyopaque) void {
        qtc.SignOn__AuthSession_Cancel(@ptrCast(self));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
    ///
    /// ``` self: QtC.SignOn__AuthSession, params: QtC.SignOn__SessionData ```
    pub fn SignMessage(self: ?*anyopaque, params: ?*anyopaque) void {
        qtc.SignOn__AuthSession_SignMessage(@ptrCast(self), @ptrCast(params));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
    ///
    /// ``` self: QtC.SignOn__AuthSession, err: QtC.SignOn__Error ```
    pub fn Error(self: ?*anyopaque, err: ?*anyopaque) void {
        qtc.SignOn__AuthSession_Error(@ptrCast(self), @ptrCast(err));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
    ///
    /// ``` self: QtC.SignOn__AuthSession, callback: *const fn (self: QtC.SignOn__AuthSession, err: QtC.SignOn__Error) callconv(.c) void ```
    pub fn OnError(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.SignOn__AuthSession_Connect_Error(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
    ///
    /// ``` self: QtC.SignOn__AuthSession, mechanisms: [][]const u8, allocator: std.mem.Allocator ```
    pub fn MechanismsAvailable(self: ?*anyopaque, mechanisms: [][]const u8, allocator: std.mem.Allocator) void {
        var mechanisms_arr = allocator.alloc(qtc.libqt_string, mechanisms.len) catch @panic("signon::authsession.MechanismsAvailable: Memory allocation failed");
        defer allocator.free(mechanisms_arr);
        for (mechanisms, 0..mechanisms.len) |item, i| {
            mechanisms_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const mechanisms_list = qtc.libqt_list{
            .len = mechanisms.len,
            .data = mechanisms_arr.ptr,
        };
        qtc.SignOn__AuthSession_MechanismsAvailable(@ptrCast(self), mechanisms_list);
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
    ///
    /// ``` self: QtC.SignOn__AuthSession, callback: *const fn (self: QtC.SignOn__AuthSession, mechanisms: [*][*:0]const u8) callconv(.c) void ```
    pub fn OnMechanismsAvailable(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*][*:0]const u8) callconv(.c) void) void {
        qtc.SignOn__AuthSession_Connect_MechanismsAvailable(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
    ///
    /// ``` self: QtC.SignOn__AuthSession, sessionData: QtC.SignOn__SessionData ```
    pub fn Response(self: ?*anyopaque, sessionData: ?*anyopaque) void {
        qtc.SignOn__AuthSession_Response(@ptrCast(self), @ptrCast(sessionData));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
    ///
    /// ``` self: QtC.SignOn__AuthSession, callback: *const fn (self: QtC.SignOn__AuthSession, sessionData: QtC.SignOn__SessionData) callconv(.c) void ```
    pub fn OnResponse(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.SignOn__AuthSession_Connect_Response(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
    ///
    /// ``` self: QtC.SignOn__AuthSession, state: authsession_enums.AuthSessionState, message: []const u8 ```
    pub fn StateChanged(self: ?*anyopaque, state: i32, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.SignOn__AuthSession_StateChanged(@ptrCast(self), @intCast(state), message_str);
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
    ///
    /// ``` self: QtC.SignOn__AuthSession, callback: *const fn (self: QtC.SignOn__AuthSession, state: authsession_enums.AuthSessionState, message: [*:0]const u8) callconv(.c) void ```
    pub fn OnStateChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.SignOn__AuthSession_Connect_StateChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.SignOn__AuthSession_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("signon::authsession.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.SignOn__AuthSession_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("signon::authsession.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
    ///
    /// ``` self: QtC.SignOn__AuthSession, wantedMechanisms: [][]const u8, allocator: std.mem.Allocator ```
    pub fn QueryAvailableMechanisms1(self: ?*anyopaque, wantedMechanisms: [][]const u8, allocator: std.mem.Allocator) void {
        var wantedMechanisms_arr = allocator.alloc(qtc.libqt_string, wantedMechanisms.len) catch @panic("signon::authsession.QueryAvailableMechanisms1: Memory allocation failed");
        defer allocator.free(wantedMechanisms_arr);
        for (wantedMechanisms, 0..wantedMechanisms.len) |item, i| {
            wantedMechanisms_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const wantedMechanisms_list = qtc.libqt_list{
            .len = wantedMechanisms.len,
            .data = wantedMechanisms_arr.ptr,
        };
        qtc.SignOn__AuthSession_QueryAvailableMechanisms1(@ptrCast(self), wantedMechanisms_list);
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
    ///
    /// ``` self: QtC.SignOn__AuthSession, sessionData: QtC.SignOn__SessionData, mechanism: []const u8 ```
    pub fn Process2(self: ?*anyopaque, sessionData: ?*anyopaque, mechanism: []const u8) void {
        const mechanism_str = qtc.libqt_string{
            .len = mechanism.len,
            .data = mechanism.ptr,
        };
        qtc.SignOn__AuthSession_Process2(@ptrCast(self), @ptrCast(sessionData), mechanism_str);
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
    ///
    /// ``` self: QtC.SignOn__AuthSession, sessionData: QtC.SignOn__SessionData, mechanism: []const u8 ```
    pub fn Challenge2(self: ?*anyopaque, sessionData: ?*anyopaque, mechanism: []const u8) void {
        const mechanism_str = qtc.libqt_string{
            .len = mechanism.len,
            .data = mechanism.ptr,
        };
        qtc.SignOn__AuthSession_Challenge2(@ptrCast(self), @ptrCast(sessionData), mechanism_str);
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
    ///
    /// ``` self: QtC.SignOn__AuthSession, sessionData: QtC.SignOn__SessionData, mechanism: []const u8 ```
    pub fn Request2(self: ?*anyopaque, sessionData: ?*anyopaque, mechanism: []const u8) void {
        const mechanism_str = qtc.libqt_string{
            .len = mechanism.len,
            .data = mechanism.ptr,
        };
        qtc.SignOn__AuthSession_Request2(@ptrCast(self), @ptrCast(sessionData), mechanism_str);
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
    ///
    /// ``` self: QtC.SignOn__AuthSession, params: QtC.SignOn__SessionData, mechanism: []const u8 ```
    pub fn SignMessage2(self: ?*anyopaque, params: ?*anyopaque, mechanism: []const u8) void {
        const mechanism_str = qtc.libqt_string{
            .len = mechanism.len,
            .data = mechanism.ptr,
        };
        qtc.SignOn__AuthSession_SignMessage2(@ptrCast(self), @ptrCast(params), mechanism_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ``` self: QtC.SignOn__AuthSession, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ``` self: QtC.SignOn__AuthSession, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.SignOn__AuthSession, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("signon::authsession.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.SignOn__AuthSession, name: []const u8 ```
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
    /// ``` self: QtC.SignOn__AuthSession ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.SignOn__AuthSession ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.SignOn__AuthSession ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.SignOn__AuthSession ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.SignOn__AuthSession, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.SignOn__AuthSession ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.SignOn__AuthSession, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.SignOn__AuthSession, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.SignOn__AuthSession, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.SignOn__AuthSession, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.SignOn__AuthSession, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("signon::authsession.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.SignOn__AuthSession, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.SignOn__AuthSession, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.SignOn__AuthSession, obj: QtC.QObject ```
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
    /// ``` self: QtC.SignOn__AuthSession, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.SignOn__AuthSession ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.SignOn__AuthSession ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.SignOn__AuthSession, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.SignOn__AuthSession, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.SignOn__AuthSession, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("signon::authsession.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("signon::authsession.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.SignOn__AuthSession ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.SignOn__AuthSession ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.SignOn__AuthSession ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.SignOn__AuthSession, callback: *const fn (self: QtC.SignOn__AuthSession) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.SignOn__AuthSession ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.SignOn__AuthSession, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.SignOn__AuthSession ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.SignOn__AuthSession, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.SignOn__AuthSession, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.SignOn__AuthSession, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.SignOn__AuthSession, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.SignOn__AuthSession, callback: *const fn (self: QtC.SignOn__AuthSession, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.SignOn__AuthSession, callback: *const fn (self: QtC.SignOn__AuthSession, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }
};

/// https://accounts-sso.gitlab.io/signond/classSignOn_1_1Authsession.html
pub const enums = struct {
    pub const AuthSessionError = enum {
        pub const UnknownError: i32 = 1;
        pub const InternalServerError: i32 = 2;
        pub const InternalCommunicationError: i32 = 3;
        pub const PermissionDeniedError: i32 = 4;
        pub const AuthSessionErr: i32 = 300;
        pub const MechanismNotAvailableError: i32 = 301;
        pub const MissingDataError: i32 = 302;
        pub const InvalidCredentialsError: i32 = 303;
        pub const WrongStateError: i32 = 304;
        pub const OperationNotSupportedError: i32 = 305;
        pub const NoConnectionError: i32 = 306;
        pub const NetworkError: i32 = 307;
        pub const SslError: i32 = 308;
        pub const RuntimeError: i32 = 309;
        pub const CanceledError: i32 = 310;
        pub const TimedOutError: i32 = 311;
        pub const UserInteractionError: i32 = 312;
    };

    pub const AuthSessionState = enum {
        pub const SessionNotStarted: i32 = 0;
        pub const HostResolving: i32 = 1;
        pub const ServerConnecting: i32 = 2;
        pub const DataSending: i32 = 3;
        pub const ReplyWaiting: i32 = 4;
        pub const UserPending: i32 = 5;
        pub const UiRefreshing: i32 = 6;
        pub const ProcessPending: i32 = 7;
        pub const SessionStarted: i32 = 8;
        pub const ProcessCanceling: i32 = 9;
        pub const ProcessDone: i32 = 10;
        pub const CustomState: i32 = 11;
        pub const MaxState: i32 = 12;
    };
};
