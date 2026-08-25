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

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    pub fn metaObject(self: SignOn__AuthSession) QMetaObject {
        return .{ .ptr = qtc.SignOn__AuthSession_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: SignOn__AuthSession, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.SignOn__AuthSession_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: SignOn__AuthSession, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.SignOn__AuthSession_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("SignOn__AuthSession.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: SignOn__AuthSession, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.SignOn__AuthSession_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("SignOn__AuthSession.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `queryAvailableMechanisms` instead
    ///
    pub const QueryAvailableMechanisms = queryAvailableMechanisms;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    pub fn queryAvailableMechanisms(self: SignOn__AuthSession) void {
        qtc.SignOn__AuthSession_QueryAvailableMechanisms(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `process` instead
    ///
    pub const Process = process;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` sessionData: SignOn__SessionData `
    ///
    pub fn process(self: SignOn__AuthSession, sessionData: anytype) void {
        comptime _ = @TypeOf(sessionData)._is_SignOn__SessionData;
        qtc.SignOn__AuthSession_Process(@ptrCast(self.ptr), @ptrCast(sessionData.ptr));
    }

    /// ### DEPRECATED: Use `challenge` instead
    ///
    pub const Challenge = challenge;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` sessionData: SignOn__SessionData `
    ///
    pub fn challenge(self: SignOn__AuthSession, sessionData: anytype) void {
        comptime _ = @TypeOf(sessionData)._is_SignOn__SessionData;
        qtc.SignOn__AuthSession_Challenge(@ptrCast(self.ptr), @ptrCast(sessionData.ptr));
    }

    /// ### DEPRECATED: Use `request` instead
    ///
    pub const Request = request;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` sessionData: SignOn__SessionData `
    ///
    pub fn request(self: SignOn__AuthSession, sessionData: anytype) void {
        comptime _ = @TypeOf(sessionData)._is_SignOn__SessionData;
        qtc.SignOn__AuthSession_Request(@ptrCast(self.ptr), @ptrCast(sessionData.ptr));
    }

    /// ### DEPRECATED: Use `cancel` instead
    ///
    pub const Cancel = cancel;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    pub fn cancel(self: SignOn__AuthSession) void {
        qtc.SignOn__AuthSession_Cancel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `signMessage` instead
    ///
    pub const SignMessage = signMessage;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` params: SignOn__SessionData `
    ///
    pub fn signMessage(self: SignOn__AuthSession, params: anytype) void {
        comptime _ = @TypeOf(params)._is_SignOn__SessionData;
        qtc.SignOn__AuthSession_SignMessage(@ptrCast(self.ptr), @ptrCast(params.ptr));
    }

    /// ### DEPRECATED: Use `error0` instead
    ///
    pub const Error = error0;

    pub const @"error" = error0;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` err: SignOn__Error `
    ///
    pub fn error0(self: SignOn__AuthSession, err: anytype) void {
        comptime _ = @TypeOf(err)._is_SignOn__Error;
        qtc.SignOn__AuthSession_Error(@ptrCast(self.ptr), @ptrCast(err.ptr));
    }

    /// ### DEPRECATED: Use `onError` instead
    ///
    pub const OnError = onError;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` callback: *const fn (self: SignOn__AuthSession, err: SignOn__Error) callconv(.c) void `
    ///
    pub fn onError(self: SignOn__AuthSession, callback: *const fn (SignOn__AuthSession, SignOn__Error) callconv(.c) void) void {
        qtc.SignOn__AuthSession_Connect_Error(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mechanismsAvailable` instead
    ///
    pub const MechanismsAvailable = mechanismsAvailable;

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
    pub fn mechanismsAvailable(self: SignOn__AuthSession, allocator: std.mem.Allocator, mechanisms: []const []const u8) void {
        const mechanisms_arr = allocator.alloc(qtc.libqt_string, mechanisms.len) catch @panic("SignOn__AuthSession.mechanismsAvailable: Memory allocation failed");
        defer allocator.free(mechanisms_arr);
        for (mechanisms, 0..mechanisms.len) |str_item, i|
            mechanisms_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const mechanisms_list = qtc.libqt_list{
            .len = mechanisms.len,
            .data = mechanisms_arr.ptr,
        };
        qtc.SignOn__AuthSession_MechanismsAvailable(@ptrCast(self.ptr), mechanisms_list);
    }

    /// ### DEPRECATED: Use `onMechanismsAvailable` instead
    ///
    pub const OnMechanismsAvailable = onMechanismsAvailable;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` callback: *const fn (self: SignOn__AuthSession, mechanisms: ?[*:null]?[*:0]const u8) callconv(.c) void `
    ///
    pub fn onMechanismsAvailable(self: SignOn__AuthSession, callback: *const fn (SignOn__AuthSession, ?[*:null]?[*:0]const u8) callconv(.c) void) void {
        qtc.SignOn__AuthSession_Connect_MechanismsAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `response` instead
    ///
    pub const Response = response;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` sessionData: SignOn__SessionData `
    ///
    pub fn response(self: SignOn__AuthSession, sessionData: anytype) void {
        comptime _ = @TypeOf(sessionData)._is_SignOn__SessionData;
        qtc.SignOn__AuthSession_Response(@ptrCast(self.ptr), @ptrCast(sessionData.ptr));
    }

    /// ### DEPRECATED: Use `onResponse` instead
    ///
    pub const OnResponse = onResponse;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` callback: *const fn (self: SignOn__AuthSession, sessionData: SignOn__SessionData) callconv(.c) void `
    ///
    pub fn onResponse(self: SignOn__AuthSession, callback: *const fn (SignOn__AuthSession, SignOn__SessionData) callconv(.c) void) void {
        qtc.SignOn__AuthSession_Connect_Response(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `stateChanged` instead
    ///
    pub const StateChanged = stateChanged;

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
    pub fn stateChanged(self: SignOn__AuthSession, state: i32, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.SignOn__AuthSession_StateChanged(@ptrCast(self.ptr), @bitCast(state), message_str);
    }

    /// ### DEPRECATED: Use `onStateChanged` instead
    ///
    pub const OnStateChanged = onStateChanged;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthSession.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` callback: *const fn (self: SignOn__AuthSession, state: authsession_enums.AuthSessionState, message: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onStateChanged(self: SignOn__AuthSession, callback: *const fn (SignOn__AuthSession, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.SignOn__AuthSession_Connect_StateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

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
    pub fn tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("SignOn__AuthSession.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

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
    pub fn tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("SignOn__AuthSession.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `queryAvailableMechanisms1` instead
    ///
    pub const QueryAvailableMechanisms1 = queryAvailableMechanisms1;

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
    pub fn queryAvailableMechanisms1(self: SignOn__AuthSession, allocator: std.mem.Allocator, wantedMechanisms: []const []const u8) void {
        const wantedMechanisms_arr = allocator.alloc(qtc.libqt_string, wantedMechanisms.len) catch @panic("SignOn__AuthSession.queryAvailableMechanisms1: Memory allocation failed");
        defer allocator.free(wantedMechanisms_arr);
        for (wantedMechanisms, 0..wantedMechanisms.len) |str_item, i|
            wantedMechanisms_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const wantedMechanisms_list = qtc.libqt_list{
            .len = wantedMechanisms.len,
            .data = wantedMechanisms_arr.ptr,
        };
        qtc.SignOn__AuthSession_QueryAvailableMechanisms1(@ptrCast(self.ptr), wantedMechanisms_list);
    }

    /// ### DEPRECATED: Use `process2` instead
    ///
    pub const Process2 = process2;

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
    pub fn process2(self: SignOn__AuthSession, sessionData: anytype, mechanism: []const u8) void {
        comptime _ = @TypeOf(sessionData)._is_SignOn__SessionData;
        const mechanism_str = qtc.libqt_string{
            .len = mechanism.len,
            .data = mechanism.ptr,
        };
        qtc.SignOn__AuthSession_Process2(@ptrCast(self.ptr), @ptrCast(sessionData.ptr), mechanism_str);
    }

    /// ### DEPRECATED: Use `challenge2` instead
    ///
    pub const Challenge2 = challenge2;

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
    pub fn challenge2(self: SignOn__AuthSession, sessionData: anytype, mechanism: []const u8) void {
        comptime _ = @TypeOf(sessionData)._is_SignOn__SessionData;
        const mechanism_str = qtc.libqt_string{
            .len = mechanism.len,
            .data = mechanism.ptr,
        };
        qtc.SignOn__AuthSession_Challenge2(@ptrCast(self.ptr), @ptrCast(sessionData.ptr), mechanism_str);
    }

    /// ### DEPRECATED: Use `request2` instead
    ///
    pub const Request2 = request2;

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
    pub fn request2(self: SignOn__AuthSession, sessionData: anytype, mechanism: []const u8) void {
        comptime _ = @TypeOf(sessionData)._is_SignOn__SessionData;
        const mechanism_str = qtc.libqt_string{
            .len = mechanism.len,
            .data = mechanism.ptr,
        };
        qtc.SignOn__AuthSession_Request2(@ptrCast(self.ptr), @ptrCast(sessionData.ptr), mechanism_str);
    }

    /// ### DEPRECATED: Use `signMessage2` instead
    ///
    pub const SignMessage2 = signMessage2;

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
    pub fn signMessage2(self: SignOn__AuthSession, params: anytype, mechanism: []const u8) void {
        comptime _ = @TypeOf(params)._is_SignOn__SessionData;
        const mechanism_str = qtc.libqt_string{
            .len = mechanism.len,
            .data = mechanism.ptr,
        };
        qtc.SignOn__AuthSession_SignMessage2(@ptrCast(self.ptr), @ptrCast(params.ptr), mechanism_str);
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: SignOn__AuthSession, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: SignOn__AuthSession, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QObject_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `objectName` instead
    ///
    pub const ObjectName = objectName;

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
    pub fn objectName(self: SignOn__AuthSession, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("SignOn__AuthSession.objectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setObjectName` instead
    ///
    pub const SetObjectName = setObjectName;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setObjectName(self: SignOn__AuthSession, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `isWidgetType` instead
    ///
    pub const IsWidgetType = isWidgetType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    pub fn isWidgetType(self: SignOn__AuthSession) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWindowType` instead
    ///
    pub const IsWindowType = isWindowType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    pub fn isWindowType(self: SignOn__AuthSession) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isQuickItemType` instead
    ///
    pub const IsQuickItemType = isQuickItemType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    pub fn isQuickItemType(self: SignOn__AuthSession) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `signalsBlocked` instead
    ///
    pub const SignalsBlocked = signalsBlocked;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    pub fn signalsBlocked(self: SignOn__AuthSession) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `blockSignals` instead
    ///
    pub const BlockSignals = blockSignals;

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
    pub fn blockSignals(self: SignOn__AuthSession, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `thread` instead
    ///
    pub const Thread = thread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    pub fn thread(self: SignOn__AuthSession) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `moveToThread` instead
    ///
    pub const MoveToThread = moveToThread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: SignOn__AuthSession, _thread: anytype) bool {
        comptime _ = @TypeOf(_thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(_thread.ptr));
    }

    /// ### DEPRECATED: Use `startTimer` instead
    ///
    pub const StartTimer = startTimer;

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
    pub fn startTimer(self: SignOn__AuthSession, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// ### DEPRECATED: Use `startTimer2` instead
    ///
    pub const StartTimer2 = startTimer2;

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
    pub fn startTimer2(self: SignOn__AuthSession, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// ### DEPRECATED: Use `killTimer` instead
    ///
    pub const KillTimer = killTimer;

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
    pub fn killTimer(self: SignOn__AuthSession, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `killTimer2` instead
    ///
    pub const KillTimer2 = killTimer2;

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
    pub fn killTimer2(self: SignOn__AuthSession, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `children` instead
    ///
    pub const Children = children;

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
    pub fn children(self: SignOn__AuthSession, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("SignOn__AuthSession.children: Memory allocation failed");
        const _data_val: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setParent` instead
    ///
    pub const SetParent = setParent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: SignOn__AuthSession, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `installEventFilter` instead
    ///
    pub const InstallEventFilter = installEventFilter;

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
    pub fn installEventFilter(self: SignOn__AuthSession, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// ### DEPRECATED: Use `removeEventFilter` instead
    ///
    pub const RemoveEventFilter = removeEventFilter;

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
    pub fn removeEventFilter(self: SignOn__AuthSession, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// ### DEPRECATED: Use `connect` instead
    ///
    pub const Connect = connect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// ### DEPRECATED: Use `connect2` instead
    ///
    pub const Connect2 = connect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn connect2(_sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// ### DEPRECATED: Use `connect3` instead
    ///
    pub const Connect3 = connect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: SignOn__AuthSession, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// ### DEPRECATED: Use `disconnect` instead
    ///
    pub const Disconnect = disconnect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect2` instead
    ///
    pub const Disconnect2 = disconnect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn disconnect2(_sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// ### DEPRECATED: Use `disconnect3` instead
    ///
    pub const Disconnect3 = disconnect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    pub fn disconnect3(self: SignOn__AuthSession) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `disconnect4` instead
    ///
    pub const Disconnect4 = disconnect4;

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
    pub fn disconnect4(self: SignOn__AuthSession, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect5` instead
    ///
    pub const Disconnect5 = disconnect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectTree` instead
    ///
    pub const DumpObjectTree = dumpObjectTree;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    pub fn dumpObjectTree(self: SignOn__AuthSession) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectInfo` instead
    ///
    pub const DumpObjectInfo = dumpObjectInfo;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    pub fn dumpObjectInfo(self: SignOn__AuthSession) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` _name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: SignOn__AuthSession, _name: [:0]const u8, value: anytype) bool {
        const name_Cstring = _name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` _name: [:0]const u8 `
    ///
    pub fn property(self: SignOn__AuthSession, _name: [:0]const u8) QVariant {
        const name_Cstring = _name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// ### DEPRECATED: Use `dynamicPropertyNames` instead
    ///
    pub const DynamicPropertyNames = dynamicPropertyNames;

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
    pub fn dynamicPropertyNames(self: SignOn__AuthSession, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("SignOn__AuthSession.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("SignOn__AuthSession.dynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `bindingStorage` instead
    ///
    pub const BindingStorage = bindingStorage;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    pub fn bindingStorage(self: SignOn__AuthSession) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `bindingStorage2` instead
    ///
    pub const BindingStorage2 = bindingStorage2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    pub fn bindingStorage2(self: SignOn__AuthSession) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `destroyed` instead
    ///
    pub const Destroyed = destroyed;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    pub fn destroyed(self: SignOn__AuthSession) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed` instead
    ///
    pub const OnDestroyed = onDestroyed;

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
    pub fn onDestroyed(self: SignOn__AuthSession, callback: *const fn (SignOn__AuthSession) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    pub fn parent(self: SignOn__AuthSession) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `inherits` instead
    ///
    pub const Inherits = inherits;

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
    pub fn inherits(self: SignOn__AuthSession, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// ### DEPRECATED: Use `deleteLater` instead
    ///
    pub const DeleteLater = deleteLater;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    pub fn deleteLater(self: SignOn__AuthSession) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startTimer22` instead
    ///
    pub const StartTimer22 = startTimer22;

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
    pub fn startTimer22(self: SignOn__AuthSession, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `startTimer23` instead
    ///
    pub const StartTimer23 = startTimer23;

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
    pub fn startTimer23(self: SignOn__AuthSession, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `connect5` instead
    ///
    pub const Connect5 = connect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn connect5(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// ### DEPRECATED: Use `connect52` instead
    ///
    pub const Connect52 = connect52;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect52(_sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `connect4` instead
    ///
    pub const Connect4 = connect4;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__AuthSession `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: SignOn__AuthSession, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `disconnect1` instead
    ///
    pub const Disconnect1 = disconnect1;

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
    pub fn disconnect1(self: SignOn__AuthSession, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect22` instead
    ///
    pub const Disconnect22 = disconnect22;

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
    pub fn disconnect22(self: SignOn__AuthSession, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect32` instead
    ///
    pub const Disconnect32 = disconnect32;

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
    pub fn disconnect32(self: SignOn__AuthSession, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect23` instead
    ///
    pub const Disconnect23 = disconnect23;

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
    pub fn disconnect23(self: SignOn__AuthSession, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `destroyed1` instead
    ///
    pub const Destroyed1 = destroyed1;

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
    pub fn destroyed1(self: SignOn__AuthSession, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed1` instead
    ///
    pub const OnDestroyed1 = onDestroyed1;

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
    pub fn onDestroyed1(self: SignOn__AuthSession, callback: *const fn (SignOn__AuthSession, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onObjectNameChanged` instead
    ///
    pub const OnObjectNameChanged = onObjectNameChanged;

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
    pub fn onObjectNameChanged(self: SignOn__AuthSession, callback: *const fn (SignOn__AuthSession, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }
};

/// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Authsession.html)
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
