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
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qwebenginewebauthuxrequest_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthuxrequest.html)
pub const QWebEngineWebAuthUxRequest = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthuxrequest.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QWebEngineWebAuthUxRequest,

    pub const _is_QWebEngineWebAuthUxRequest = {};
    pub const _is_QObject = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    pub fn MetaObject(self: QWebEngineWebAuthUxRequest) QMetaObject {
        return .{ .ptr = qtc.QWebEngineWebAuthUxRequest_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QWebEngineWebAuthUxRequest, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QWebEngineWebAuthUxRequest_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QWebEngineWebAuthUxRequest, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QWebEngineWebAuthUxRequest_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebenginewebauthuxrequest.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthuxrequest.html#userNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn UserNames(self: QWebEngineWebAuthUxRequest, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QWebEngineWebAuthUxRequest_UserNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qwebenginewebauthuxrequest.UserNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qwebenginewebauthuxrequest.UserNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthuxrequest.html#relyingPartyId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn RelyingPartyId(self: QWebEngineWebAuthUxRequest, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebEngineWebAuthUxRequest_RelyingPartyId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebenginewebauthuxrequest.RelyingPartyId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthuxrequest.html#pinRequest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    pub fn PinRequest(self: QWebEngineWebAuthUxRequest) QWebEngineWebAuthPinRequest {
        return .{ .ptr = qtc.QWebEngineWebAuthUxRequest_PinRequest(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthuxrequest.html#state)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ## Returns:
    ///
    /// ` qwebenginewebauthuxrequest_enums.WebAuthUxState `
    ///
    pub fn State(self: QWebEngineWebAuthUxRequest) i32 {
        return qtc.QWebEngineWebAuthUxRequest_State(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthuxrequest.html#requestFailureReason)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ## Returns:
    ///
    /// ` qwebenginewebauthuxrequest_enums.RequestFailureReason `
    ///
    pub fn RequestFailureReason(self: QWebEngineWebAuthUxRequest) i32 {
        return qtc.QWebEngineWebAuthUxRequest_RequestFailureReason(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthuxrequest.html#stateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` state: qwebenginewebauthuxrequest_enums.WebAuthUxState `
    ///
    pub fn StateChanged(self: QWebEngineWebAuthUxRequest, state: i32) void {
        qtc.QWebEngineWebAuthUxRequest_StateChanged(@ptrCast(self.ptr), @bitCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthuxrequest.html#stateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` callback: *const fn (self: QWebEngineWebAuthUxRequest, state: qwebenginewebauthuxrequest_enums.WebAuthUxState) callconv(.c) void `
    ///
    pub fn OnStateChanged(self: QWebEngineWebAuthUxRequest, callback: *const fn (QWebEngineWebAuthUxRequest, i32) callconv(.c) void) void {
        qtc.QWebEngineWebAuthUxRequest_Connect_StateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthuxrequest.html#cancel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    pub fn Cancel(self: QWebEngineWebAuthUxRequest) void {
        qtc.QWebEngineWebAuthUxRequest_Cancel(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthuxrequest.html#retry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    pub fn Retry(self: QWebEngineWebAuthUxRequest) void {
        qtc.QWebEngineWebAuthUxRequest_Retry(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthuxrequest.html#setSelectedAccount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` selectedAccount: []const u8 `
    ///
    pub fn SetSelectedAccount(self: QWebEngineWebAuthUxRequest, selectedAccount: []const u8) void {
        const selectedAccount_str = qtc.libqt_string{
            .len = selectedAccount.len,
            .data = selectedAccount.ptr,
        };
        qtc.QWebEngineWebAuthUxRequest_SetSelectedAccount(@ptrCast(self.ptr), selectedAccount_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthuxrequest.html#setPin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` pin: []const u8 `
    ///
    pub fn SetPin(self: QWebEngineWebAuthUxRequest, pin: []const u8) void {
        const pin_str = qtc.libqt_string{
            .len = pin.len,
            .data = pin.ptr,
        };
        qtc.QWebEngineWebAuthUxRequest_SetPin(@ptrCast(self.ptr), pin_str);
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebenginewebauthuxrequest.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebenginewebauthuxrequest.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QWebEngineWebAuthUxRequest, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QWebEngineWebAuthUxRequest, watched: anytype, event: anytype) bool {
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
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QWebEngineWebAuthUxRequest, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebenginewebauthuxrequest.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QWebEngineWebAuthUxRequest, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    pub fn IsWidgetType(self: QWebEngineWebAuthUxRequest) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    pub fn IsWindowType(self: QWebEngineWebAuthUxRequest) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    pub fn IsQuickItemType(self: QWebEngineWebAuthUxRequest) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    pub fn SignalsBlocked(self: QWebEngineWebAuthUxRequest) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QWebEngineWebAuthUxRequest, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    pub fn Thread(self: QWebEngineWebAuthUxRequest) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QWebEngineWebAuthUxRequest, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QWebEngineWebAuthUxRequest, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QWebEngineWebAuthUxRequest, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QWebEngineWebAuthUxRequest, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QWebEngineWebAuthUxRequest, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QWebEngineWebAuthUxRequest, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qwebenginewebauthuxrequest.Children: Memory allocation failed");
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
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QWebEngineWebAuthUxRequest, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QWebEngineWebAuthUxRequest, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QWebEngineWebAuthUxRequest, obj: anytype) void {
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
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QWebEngineWebAuthUxRequest, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    pub fn Disconnect3(self: QWebEngineWebAuthUxRequest) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QWebEngineWebAuthUxRequest, receiver: anytype) bool {
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
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    pub fn DumpObjectTree(self: QWebEngineWebAuthUxRequest) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    pub fn DumpObjectInfo(self: QWebEngineWebAuthUxRequest) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QWebEngineWebAuthUxRequest, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QWebEngineWebAuthUxRequest, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QWebEngineWebAuthUxRequest, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qwebenginewebauthuxrequest.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qwebenginewebauthuxrequest.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    pub fn BindingStorage(self: QWebEngineWebAuthUxRequest) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    pub fn BindingStorage2(self: QWebEngineWebAuthUxRequest) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    pub fn Destroyed(self: QWebEngineWebAuthUxRequest) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` callback: *const fn (self: QWebEngineWebAuthUxRequest) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QWebEngineWebAuthUxRequest, callback: *const fn (QWebEngineWebAuthUxRequest) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    pub fn Parent(self: QWebEngineWebAuthUxRequest) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QWebEngineWebAuthUxRequest, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    pub fn DeleteLater(self: QWebEngineWebAuthUxRequest) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QWebEngineWebAuthUxRequest, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QWebEngineWebAuthUxRequest, time: i64, timerType: i32) i32 {
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
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QWebEngineWebAuthUxRequest, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QWebEngineWebAuthUxRequest, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QWebEngineWebAuthUxRequest, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QWebEngineWebAuthUxRequest, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QWebEngineWebAuthUxRequest, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QWebEngineWebAuthUxRequest, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` callback: *const fn (self: QWebEngineWebAuthUxRequest, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QWebEngineWebAuthUxRequest, callback: *const fn (QWebEngineWebAuthUxRequest, QObject) callconv(.c) void) void {
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
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` callback: *const fn (self: QWebEngineWebAuthUxRequest, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QWebEngineWebAuthUxRequest, callback: *const fn (QWebEngineWebAuthUxRequest, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthuxrequest.html#dtor.QWebEngineWebAuthUxRequest)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    pub fn Delete(self: QWebEngineWebAuthUxRequest) void {
        qtc.QWebEngineWebAuthUxRequest_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthpinrequest.html)
pub const QWebEngineWebAuthPinRequest = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthpinrequest.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QWebEngineWebAuthPinRequest,

    pub const _is_QWebEngineWebAuthPinRequest = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthpinrequest.html#reason-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthPinRequest `
    ///
    /// ## Returns:
    ///
    /// ` qwebenginewebauthuxrequest_enums.PinEntryReason `
    ///
    pub fn Reason(self: QWebEngineWebAuthPinRequest) i32 {
        return qtc.QWebEngineWebAuthPinRequest_Reason(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthpinrequest.html#reason-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthPinRequest `
    ///
    /// ` reason: qwebenginewebauthuxrequest_enums.PinEntryReason `
    ///
    pub fn SetReason(self: QWebEngineWebAuthPinRequest, reason: i32) void {
        qtc.QWebEngineWebAuthPinRequest_SetReason(@ptrCast(self.ptr), @bitCast(reason));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthpinrequest.html#error-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthPinRequest `
    ///
    /// ## Returns:
    ///
    /// ` qwebenginewebauthuxrequest_enums.PinEntryError `
    ///
    pub fn Error(self: QWebEngineWebAuthPinRequest) i32 {
        return qtc.QWebEngineWebAuthPinRequest_Error(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthpinrequest.html#error-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthPinRequest `
    ///
    /// ` error: qwebenginewebauthuxrequest_enums.PinEntryError `
    ///
    pub fn SetError(self: QWebEngineWebAuthPinRequest, _error: i32) void {
        qtc.QWebEngineWebAuthPinRequest_SetError(@ptrCast(self.ptr), @bitCast(_error));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthpinrequest.html#minPinLength-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthPinRequest `
    ///
    pub fn MinPinLength(self: QWebEngineWebAuthPinRequest) i32 {
        return qtc.QWebEngineWebAuthPinRequest_MinPinLength(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthpinrequest.html#minPinLength-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthPinRequest `
    ///
    /// ` minPinLength: i32 `
    ///
    pub fn SetMinPinLength(self: QWebEngineWebAuthPinRequest, minPinLength: i32) void {
        qtc.QWebEngineWebAuthPinRequest_SetMinPinLength(@ptrCast(self.ptr), @bitCast(minPinLength));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthpinrequest.html#remainingAttempts-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthPinRequest `
    ///
    pub fn RemainingAttempts(self: QWebEngineWebAuthPinRequest) i32 {
        return qtc.QWebEngineWebAuthPinRequest_RemainingAttempts(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthpinrequest.html#remainingAttempts-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthPinRequest `
    ///
    /// ` remainingAttempts: i32 `
    ///
    pub fn SetRemainingAttempts(self: QWebEngineWebAuthPinRequest, remainingAttempts: i32) void {
        qtc.QWebEngineWebAuthPinRequest_SetRemainingAttempts(@ptrCast(self.ptr), @bitCast(remainingAttempts));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthpinrequest.html#dtor.QWebEngineWebAuthPinRequest)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QWebEngineWebAuthPinRequest `
    ///
    pub fn Delete(self: QWebEngineWebAuthPinRequest) void {
        qtc.QWebEngineWebAuthPinRequest_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthuxrequest.html#public-types)
pub const enums = struct {
    pub const WebAuthUxState = enum(i32) {
        pub const NotStarted: i32 = 0;
        pub const SelectAccount: i32 = 1;
        pub const CollectPin: i32 = 2;
        pub const FinishTokenCollection: i32 = 3;
        pub const RequestFailed: i32 = 4;
        pub const Cancelled: i32 = 5;
        pub const Completed: i32 = 6;
    };

    pub const PinEntryReason = enum(i32) {
        pub const Set: i32 = 0;
        pub const Change: i32 = 1;
        pub const Challenge: i32 = 2;
    };

    pub const PinEntryError = enum(i32) {
        pub const NoError: i32 = 0;
        pub const InternalUvLocked: i32 = 1;
        pub const WrongPin: i32 = 2;
        pub const TooShort: i32 = 3;
        pub const InvalidCharacters: i32 = 4;
        pub const SameAsCurrentPin: i32 = 5;
    };

    pub const RequestFailureReason = enum(i32) {
        pub const Timeout: i32 = 0;
        pub const KeyNotRegistered: i32 = 1;
        pub const KeyAlreadyRegistered: i32 = 2;
        pub const SoftPinBlock: i32 = 3;
        pub const HardPinBlock: i32 = 4;
        pub const AuthenticatorRemovedDuringPinEntry: i32 = 5;
        pub const AuthenticatorMissingResidentKeys: i32 = 6;
        pub const AuthenticatorMissingUserVerification: i32 = 7;
        pub const AuthenticatorMissingLargeBlob: i32 = 8;
        pub const NoCommonAlgorithms: i32 = 9;
        pub const StorageFull: i32 = 10;
        pub const UserConsentDenied: i32 = 11;
        pub const WinUserCancelled: i32 = 12;
    };
};
