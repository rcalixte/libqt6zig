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

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    pub fn metaObject(self: QWebEngineWebAuthUxRequest) QMetaObject {
        return .{ .ptr = qtc.QWebEngineWebAuthUxRequest_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QWebEngineWebAuthUxRequest, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QWebEngineWebAuthUxRequest_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QWebEngineWebAuthUxRequest, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QWebEngineWebAuthUxRequest_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QWebEngineWebAuthUxRequest.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `userNames` instead
    ///
    pub const UserNames = userNames;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthuxrequest.html#userNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn userNames(self: QWebEngineWebAuthUxRequest, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QWebEngineWebAuthUxRequest_UserNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QWebEngineWebAuthUxRequest.userNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QWebEngineWebAuthUxRequest.userNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `relyingPartyId` instead
    ///
    pub const RelyingPartyId = relyingPartyId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthuxrequest.html#relyingPartyId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn relyingPartyId(self: QWebEngineWebAuthUxRequest, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebEngineWebAuthUxRequest_RelyingPartyId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QWebEngineWebAuthUxRequest.relyingPartyId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `pinRequest` instead
    ///
    pub const PinRequest = pinRequest;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthuxrequest.html#pinRequest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    pub fn pinRequest(self: QWebEngineWebAuthUxRequest) QWebEngineWebAuthPinRequest {
        return .{ .ptr = qtc.QWebEngineWebAuthUxRequest_PinRequest(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

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
    pub fn state(self: QWebEngineWebAuthUxRequest) i32 {
        return qtc.QWebEngineWebAuthUxRequest_State(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `requestFailureReason` instead
    ///
    pub const RequestFailureReason = requestFailureReason;

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
    pub fn requestFailureReason(self: QWebEngineWebAuthUxRequest) i32 {
        return qtc.QWebEngineWebAuthUxRequest_RequestFailureReason(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `stateChanged` instead
    ///
    pub const StateChanged = stateChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthuxrequest.html#stateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` _state: qwebenginewebauthuxrequest_enums.WebAuthUxState `
    ///
    pub fn stateChanged(self: QWebEngineWebAuthUxRequest, _state: i32) void {
        qtc.QWebEngineWebAuthUxRequest_StateChanged(@ptrCast(self.ptr), @bitCast(_state));
    }

    /// ### DEPRECATED: Use `onStateChanged` instead
    ///
    pub const OnStateChanged = onStateChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthuxrequest.html#stateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` callback: *const fn (self: QWebEngineWebAuthUxRequest, state: qwebenginewebauthuxrequest_enums.WebAuthUxState) callconv(.c) void `
    ///
    pub fn onStateChanged(self: QWebEngineWebAuthUxRequest, callback: *const fn (QWebEngineWebAuthUxRequest, i32) callconv(.c) void) void {
        qtc.QWebEngineWebAuthUxRequest_Connect_StateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `cancel` instead
    ///
    pub const Cancel = cancel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthuxrequest.html#cancel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    pub fn cancel(self: QWebEngineWebAuthUxRequest) void {
        qtc.QWebEngineWebAuthUxRequest_Cancel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `retry` instead
    ///
    pub const Retry = retry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthuxrequest.html#retry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    pub fn retry(self: QWebEngineWebAuthUxRequest) void {
        qtc.QWebEngineWebAuthUxRequest_Retry(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSelectedAccount` instead
    ///
    pub const SetSelectedAccount = setSelectedAccount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthuxrequest.html#setSelectedAccount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` selectedAccount: []const u8 `
    ///
    pub fn setSelectedAccount(self: QWebEngineWebAuthUxRequest, selectedAccount: []const u8) void {
        const selectedAccount_str = qtc.libqt_string{
            .len = selectedAccount.len,
            .data = selectedAccount.ptr,
        };
        qtc.QWebEngineWebAuthUxRequest_SetSelectedAccount(@ptrCast(self.ptr), selectedAccount_str);
    }

    /// ### DEPRECATED: Use `setPin` instead
    ///
    pub const SetPin = setPin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthuxrequest.html#setPin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` pin: []const u8 `
    ///
    pub fn setPin(self: QWebEngineWebAuthUxRequest, pin: []const u8) void {
        const pin_str = qtc.libqt_string{
            .len = pin.len,
            .data = pin.ptr,
        };
        qtc.QWebEngineWebAuthUxRequest_SetPin(@ptrCast(self.ptr), pin_str);
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QWebEngineWebAuthUxRequest.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QWebEngineWebAuthUxRequest.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
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
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QWebEngineWebAuthUxRequest, _event: anytype) bool {
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
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QWebEngineWebAuthUxRequest, watched: anytype, _event: anytype) bool {
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
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QWebEngineWebAuthUxRequest, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QWebEngineWebAuthUxRequest.objectName: Memory allocation failed");
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
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QWebEngineWebAuthUxRequest, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
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
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    pub fn isWidgetType(self: QWebEngineWebAuthUxRequest) bool {
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
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    pub fn isWindowType(self: QWebEngineWebAuthUxRequest) bool {
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
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    pub fn isQuickItemType(self: QWebEngineWebAuthUxRequest) bool {
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
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    pub fn signalsBlocked(self: QWebEngineWebAuthUxRequest) bool {
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
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QWebEngineWebAuthUxRequest, b: bool) bool {
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
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    pub fn thread(self: QWebEngineWebAuthUxRequest) QThread {
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
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QWebEngineWebAuthUxRequest, _thread: anytype) bool {
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
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QWebEngineWebAuthUxRequest, interval: i32) i32 {
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
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QWebEngineWebAuthUxRequest, time: i64) i32 {
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
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QWebEngineWebAuthUxRequest, id: i32) void {
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
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QWebEngineWebAuthUxRequest, id: i32) void {
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
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QWebEngineWebAuthUxRequest, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QWebEngineWebAuthUxRequest.children: Memory allocation failed");
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
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QWebEngineWebAuthUxRequest, _parent: anytype) void {
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
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QWebEngineWebAuthUxRequest, filterObj: anytype) void {
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
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QWebEngineWebAuthUxRequest, obj: anytype) void {
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
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QWebEngineWebAuthUxRequest, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    pub fn disconnect3(self: QWebEngineWebAuthUxRequest) bool {
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
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QWebEngineWebAuthUxRequest, receiver: anytype) bool {
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
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    pub fn dumpObjectTree(self: QWebEngineWebAuthUxRequest) void {
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
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    pub fn dumpObjectInfo(self: QWebEngineWebAuthUxRequest) void {
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
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QWebEngineWebAuthUxRequest, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
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
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QWebEngineWebAuthUxRequest, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
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
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QWebEngineWebAuthUxRequest, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QWebEngineWebAuthUxRequest.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QWebEngineWebAuthUxRequest.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    pub fn bindingStorage(self: QWebEngineWebAuthUxRequest) QBindingStorage {
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
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    pub fn bindingStorage2(self: QWebEngineWebAuthUxRequest) QBindingStorage {
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
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    pub fn destroyed(self: QWebEngineWebAuthUxRequest) void {
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
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` callback: *const fn (self: QWebEngineWebAuthUxRequest) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QWebEngineWebAuthUxRequest, callback: *const fn (QWebEngineWebAuthUxRequest) callconv(.c) void) void {
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
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    pub fn parent(self: QWebEngineWebAuthUxRequest) QObject {
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
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QWebEngineWebAuthUxRequest, classname: [:0]const u8) bool {
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
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    pub fn deleteLater(self: QWebEngineWebAuthUxRequest) void {
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
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QWebEngineWebAuthUxRequest, interval: i32, timerType: i32) i32 {
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
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QWebEngineWebAuthUxRequest, time: i64, timerType: i32) i32 {
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
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QWebEngineWebAuthUxRequest, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QWebEngineWebAuthUxRequest, signal: [:0]const u8) bool {
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
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QWebEngineWebAuthUxRequest, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QWebEngineWebAuthUxRequest, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QWebEngineWebAuthUxRequest, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QWebEngineWebAuthUxRequest, param1: anytype) void {
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
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` callback: *const fn (self: QWebEngineWebAuthUxRequest, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QWebEngineWebAuthUxRequest, callback: *const fn (QWebEngineWebAuthUxRequest, QObject) callconv(.c) void) void {
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
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    /// ` callback: *const fn (self: QWebEngineWebAuthUxRequest, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QWebEngineWebAuthUxRequest, callback: *const fn (QWebEngineWebAuthUxRequest, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthuxrequest.html#dtor.QWebEngineWebAuthUxRequest)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QWebEngineWebAuthUxRequest `
    ///
    pub fn delete(self: QWebEngineWebAuthUxRequest) void {
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

    /// ### DEPRECATED: Use `reason` instead
    ///
    pub const Reason = reason;

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
    pub fn reason(self: QWebEngineWebAuthPinRequest) i32 {
        return qtc.QWebEngineWebAuthPinRequest_Reason(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setReason` instead
    ///
    pub const SetReason = setReason;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthpinrequest.html#reason-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthPinRequest `
    ///
    /// ` _reason: qwebenginewebauthuxrequest_enums.PinEntryReason `
    ///
    pub fn setReason(self: QWebEngineWebAuthPinRequest, _reason: i32) void {
        qtc.QWebEngineWebAuthPinRequest_SetReason(@ptrCast(self.ptr), @bitCast(_reason));
    }

    /// ### DEPRECATED: Use `error0` instead
    ///
    pub const Error = error0;

    pub const @"error" = error0;

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
    pub fn error0(self: QWebEngineWebAuthPinRequest) i32 {
        return qtc.QWebEngineWebAuthPinRequest_Error(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setError` instead
    ///
    pub const SetError = setError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthpinrequest.html#error-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthPinRequest `
    ///
    /// ` _error: qwebenginewebauthuxrequest_enums.PinEntryError `
    ///
    pub fn setError(self: QWebEngineWebAuthPinRequest, _error: i32) void {
        qtc.QWebEngineWebAuthPinRequest_SetError(@ptrCast(self.ptr), @bitCast(_error));
    }

    /// ### DEPRECATED: Use `minPinLength` instead
    ///
    pub const MinPinLength = minPinLength;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthpinrequest.html#minPinLength-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthPinRequest `
    ///
    pub fn minPinLength(self: QWebEngineWebAuthPinRequest) i32 {
        return qtc.QWebEngineWebAuthPinRequest_MinPinLength(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMinPinLength` instead
    ///
    pub const SetMinPinLength = setMinPinLength;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthpinrequest.html#minPinLength-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthPinRequest `
    ///
    /// ` _minPinLength: i32 `
    ///
    pub fn setMinPinLength(self: QWebEngineWebAuthPinRequest, _minPinLength: i32) void {
        qtc.QWebEngineWebAuthPinRequest_SetMinPinLength(@ptrCast(self.ptr), @bitCast(_minPinLength));
    }

    /// ### DEPRECATED: Use `remainingAttempts` instead
    ///
    pub const RemainingAttempts = remainingAttempts;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthpinrequest.html#remainingAttempts-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthPinRequest `
    ///
    pub fn remainingAttempts(self: QWebEngineWebAuthPinRequest) i32 {
        return qtc.QWebEngineWebAuthPinRequest_RemainingAttempts(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRemainingAttempts` instead
    ///
    pub const SetRemainingAttempts = setRemainingAttempts;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthpinrequest.html#remainingAttempts-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineWebAuthPinRequest `
    ///
    /// ` _remainingAttempts: i32 `
    ///
    pub fn setRemainingAttempts(self: QWebEngineWebAuthPinRequest, _remainingAttempts: i32) void {
        qtc.QWebEngineWebAuthPinRequest_SetRemainingAttempts(@ptrCast(self.ptr), @bitCast(_remainingAttempts));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthpinrequest.html#dtor.QWebEngineWebAuthPinRequest)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QWebEngineWebAuthPinRequest `
    ///
    pub fn delete(self: QWebEngineWebAuthPinRequest) void {
        qtc.QWebEngineWebAuthPinRequest_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginewebauthuxrequest.html#public-types)
pub const enums = struct {
    pub const WebAuthUxState = enum {
        pub const NotStarted: i32 = 0;
        pub const SelectAccount: i32 = 1;
        pub const CollectPin: i32 = 2;
        pub const FinishTokenCollection: i32 = 3;
        pub const RequestFailed: i32 = 4;
        pub const Cancelled: i32 = 5;
        pub const Completed: i32 = 6;
    };

    pub const PinEntryReason = enum {
        pub const Set: i32 = 0;
        pub const Change: i32 = 1;
        pub const Challenge: i32 = 2;
    };

    pub const PinEntryError = enum {
        pub const NoError: i32 = 0;
        pub const InternalUvLocked: i32 = 1;
        pub const WrongPin: i32 = 2;
        pub const TooShort: i32 = 3;
        pub const InvalidCharacters: i32 = 4;
        pub const SameAsCurrentPin: i32 = 5;
    };

    pub const RequestFailureReason = enum {
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
