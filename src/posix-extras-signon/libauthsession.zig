const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QVariant = @import("libqt6").QVariant;
const SignOn__Error = @import("libqt6").SignOn__Error;
const SignOn__SessionData = @import("libqt6").SignOn__SessionData;
const authsession_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
pub const SignOn__AuthSession = extern struct {
    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.SignOn__AuthSession,

    pub const _is_SignOn__AuthSession = {};
    pub const _is_QObject = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    pub fn MetaObject(self: SignOn__AuthSession) QMetaObject {
        return .{ .ptr = qtc.SignOn__AuthSession_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: SignOn__AuthSession, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.SignOn__AuthSession_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: SignOn__AuthSession, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.SignOn__AuthSession_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn Tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("signon__authsession.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: SignOn__AuthSession, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.SignOn__AuthSession_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("signon__authsession.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    pub fn QueryAvailableMechanisms(self: SignOn__AuthSession) void {
        qtc.SignOn__AuthSession_QueryAvailableMechanisms(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` sessionData: SignOn__SessionData `
    ///
    pub fn Process(self: SignOn__AuthSession, sessionData: anytype) void {
        comptime _ = @TypeOf(sessionData)._is_SignOn__SessionData;
        qtc.SignOn__AuthSession_Process(@ptrCast(self.ptr), @ptrCast(sessionData.ptr));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` sessionData: SignOn__SessionData `
    ///
    pub fn Challenge(self: SignOn__AuthSession, sessionData: anytype) void {
        comptime _ = @TypeOf(sessionData)._is_SignOn__SessionData;
        qtc.SignOn__AuthSession_Challenge(@ptrCast(self.ptr), @ptrCast(sessionData.ptr));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` sessionData: SignOn__SessionData `
    ///
    pub fn Request(self: SignOn__AuthSession, sessionData: anytype) void {
        comptime _ = @TypeOf(sessionData)._is_SignOn__SessionData;
        qtc.SignOn__AuthSession_Request(@ptrCast(self.ptr), @ptrCast(sessionData.ptr));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    pub fn Cancel(self: SignOn__AuthSession) void {
        qtc.SignOn__AuthSession_Cancel(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` params: SignOn__SessionData `
    ///
    pub fn SignMessage(self: SignOn__AuthSession, params: anytype) void {
        comptime _ = @TypeOf(params)._is_SignOn__SessionData;
        qtc.SignOn__AuthSession_SignMessage(@ptrCast(self.ptr), @ptrCast(params.ptr));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` err: SignOn__Error `
    ///
    pub fn Error(self: SignOn__AuthSession, err: anytype) void {
        comptime _ = @TypeOf(err)._is_SignOn__Error;
        qtc.SignOn__AuthSession_Error(@ptrCast(self.ptr), @ptrCast(err.ptr));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` callback: *const fn (self: SignOn__AuthSession, err: SignOn__Error) callconv(.c) void `
    ///
    pub fn OnError(self: SignOn__AuthSession, callback: *const fn (SignOn__AuthSession, SignOn__Error) callconv(.c) void) void {
        qtc.SignOn__AuthSession_Connect_Error(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` mechanisms: []const []const u8 `
    ///
    pub fn MechanismsAvailable(self: SignOn__AuthSession, allocator: std.mem.Allocator, mechanisms: []const []const u8) void {
        const mechanisms_arr = allocator.alloc(qtc.libqt_string, mechanisms.len) catch @panic("signon__authsession.MechanismsAvailable: Memory allocation failed");
        defer allocator.free(mechanisms_arr);
        for (mechanisms, 0..mechanisms.len) |item, i|
            mechanisms_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const mechanisms_list = qtc.libqt_list{
            .len = mechanisms.len,
            .data = mechanisms_arr.ptr,
        };
        qtc.SignOn__AuthSession_MechanismsAvailable(@ptrCast(self.ptr), mechanisms_list);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` callback: *const fn (self: SignOn__AuthSession, mechanisms: ?[*:null]?[*:0]const u8) callconv(.c) void `
    ///
    pub fn OnMechanismsAvailable(self: SignOn__AuthSession, callback: *const fn (SignOn__AuthSession, ?[*:null]?[*:0]const u8) callconv(.c) void) void {
        qtc.SignOn__AuthSession_Connect_MechanismsAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` sessionData: SignOn__SessionData `
    ///
    pub fn Response(self: SignOn__AuthSession, sessionData: anytype) void {
        comptime _ = @TypeOf(sessionData)._is_SignOn__SessionData;
        qtc.SignOn__AuthSession_Response(@ptrCast(self.ptr), @ptrCast(sessionData.ptr));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` callback: *const fn (self: SignOn__AuthSession, sessionData: SignOn__SessionData) callconv(.c) void `
    ///
    pub fn OnResponse(self: SignOn__AuthSession, callback: *const fn (SignOn__AuthSession, SignOn__SessionData) callconv(.c) void) void {
        qtc.SignOn__AuthSession_Connect_Response(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` state: authsession_enums.AuthSessionState `
    ///
    /// ` message: []const u8 `
    ///
    pub fn StateChanged(self: SignOn__AuthSession, state: i32, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.SignOn__AuthSession_StateChanged(@ptrCast(self.ptr), @bitCast(state), message_str);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` callback: *const fn (self: SignOn__AuthSession, state: authsession_enums.AuthSessionState, message: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnStateChanged(self: SignOn__AuthSession, callback: *const fn (SignOn__AuthSession, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.SignOn__AuthSession_Connect_StateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    pub fn Tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("signon__authsession.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    pub fn Tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("signon__authsession.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` wantedMechanisms: []const []const u8 `
    ///
    pub fn QueryAvailableMechanisms1(self: SignOn__AuthSession, allocator: std.mem.Allocator, wantedMechanisms: []const []const u8) void {
        const wantedMechanisms_arr = allocator.alloc(qtc.libqt_string, wantedMechanisms.len) catch @panic("signon__authsession.QueryAvailableMechanisms1: Memory allocation failed");
        defer allocator.free(wantedMechanisms_arr);
        for (wantedMechanisms, 0..wantedMechanisms.len) |item, i|
            wantedMechanisms_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const wantedMechanisms_list = qtc.libqt_list{
            .len = wantedMechanisms.len,
            .data = wantedMechanisms_arr.ptr,
        };
        qtc.SignOn__AuthSession_QueryAvailableMechanisms1(@ptrCast(self.ptr), wantedMechanisms_list);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` sessionData: SignOn__SessionData `
    ///
    /// ` mechanism: []const u8 `
    ///
    pub fn Process2(self: SignOn__AuthSession, sessionData: anytype, mechanism: []const u8) void {
        comptime _ = @TypeOf(sessionData)._is_SignOn__SessionData;
        const mechanism_str = qtc.libqt_string{
            .len = mechanism.len,
            .data = mechanism.ptr,
        };
        qtc.SignOn__AuthSession_Process2(@ptrCast(self.ptr), @ptrCast(sessionData.ptr), mechanism_str);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` sessionData: SignOn__SessionData `
    ///
    /// ` mechanism: []const u8 `
    ///
    pub fn Challenge2(self: SignOn__AuthSession, sessionData: anytype, mechanism: []const u8) void {
        comptime _ = @TypeOf(sessionData)._is_SignOn__SessionData;
        const mechanism_str = qtc.libqt_string{
            .len = mechanism.len,
            .data = mechanism.ptr,
        };
        qtc.SignOn__AuthSession_Challenge2(@ptrCast(self.ptr), @ptrCast(sessionData.ptr), mechanism_str);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` sessionData: SignOn__SessionData `
    ///
    /// ` mechanism: []const u8 `
    ///
    pub fn Request2(self: SignOn__AuthSession, sessionData: anytype, mechanism: []const u8) void {
        comptime _ = @TypeOf(sessionData)._is_SignOn__SessionData;
        const mechanism_str = qtc.libqt_string{
            .len = mechanism.len,
            .data = mechanism.ptr,
        };
        qtc.SignOn__AuthSession_Request2(@ptrCast(self.ptr), @ptrCast(sessionData.ptr), mechanism_str);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` params: SignOn__SessionData `
    ///
    /// ` mechanism: []const u8 `
    ///
    pub fn SignMessage2(self: SignOn__AuthSession, params: anytype, mechanism: []const u8) void {
        comptime _ = @TypeOf(params)._is_SignOn__SessionData;
        const mechanism_str = qtc.libqt_string{
            .len = mechanism.len,
            .data = mechanism.ptr,
        };
        qtc.SignOn__AuthSession_SignMessage2(@ptrCast(self.ptr), @ptrCast(params.ptr), mechanism_str);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: SignOn__AuthSession, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: SignOn__AuthSession, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: SignOn__AuthSession, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("signon__authsession.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: SignOn__AuthSession, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    pub fn IsWidgetType(self: SignOn__AuthSession) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    pub fn IsWindowType(self: SignOn__AuthSession) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    pub fn IsQuickItemType(self: SignOn__AuthSession) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    pub fn SignalsBlocked(self: SignOn__AuthSession) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: SignOn__AuthSession, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    pub fn Thread(self: SignOn__AuthSession) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: SignOn__AuthSession, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: SignOn__AuthSession, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: SignOn__AuthSession, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: SignOn__AuthSession, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: SignOn__AuthSession, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: SignOn__AuthSession, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("signon__authsession.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: SignOn__AuthSession, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: SignOn__AuthSession, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: SignOn__AuthSession, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn Connect2(sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: SignOn__AuthSession, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn Disconnect2(sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    pub fn Disconnect3(self: SignOn__AuthSession) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: SignOn__AuthSession, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    pub fn DumpObjectTree(self: SignOn__AuthSession) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    pub fn DumpObjectInfo(self: SignOn__AuthSession) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: SignOn__AuthSession, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: SignOn__AuthSession, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: SignOn__AuthSession, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("signon__authsession.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("signon__authsession.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    pub fn BindingStorage(self: SignOn__AuthSession) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    pub fn BindingStorage2(self: SignOn__AuthSession) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    pub fn Destroyed(self: SignOn__AuthSession) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` callback: *const fn (self: SignOn__AuthSession) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: SignOn__AuthSession, callback: *const fn (SignOn__AuthSession) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    pub fn Parent(self: SignOn__AuthSession) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: SignOn__AuthSession, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    pub fn DeleteLater(self: SignOn__AuthSession) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: SignOn__AuthSession, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: SignOn__AuthSession, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: SignOn__AuthSession, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: SignOn__AuthSession, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: SignOn__AuthSession, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: SignOn__AuthSession, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: SignOn__AuthSession, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: SignOn__AuthSession, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` callback: *const fn (self: SignOn__AuthSession, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: SignOn__AuthSession, callback: *const fn (SignOn__AuthSession, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` callback: *const fn (self: SignOn__AuthSession, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: SignOn__AuthSession, callback: *const fn (SignOn__AuthSession, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }
};

/// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Authsession.html)
pub const enums = struct {
    pub const AuthSessionError = enum(i32) {
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

    pub const AuthSessionState = enum(i32) {
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
