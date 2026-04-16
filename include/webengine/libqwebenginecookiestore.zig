const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QNetworkCookie = @import("libqt6").QNetworkCookie;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore.html)
pub const QWebEngineCookieStore = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QWebEngineCookieStore,

    pub const _is_QWebEngineCookieStore = {};
    pub const _is_QObject = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore `
    ///
    pub fn MetaObject(self: QWebEngineCookieStore) QMetaObject {
        return .{ .ptr = qtc.QWebEngineCookieStore_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QWebEngineCookieStore, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QWebEngineCookieStore_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QWebEngineCookieStore, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QWebEngineCookieStore_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebenginecookiestore.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore.html#setCookieFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` filterCallback: *const fn (funcparam1: QWebEngineCookieStore__FilterRequest) callconv(.c) bool `
    ///
    pub fn SetCookieFilter(self: QWebEngineCookieStore, filterCallback: *const fn (QWebEngineCookieStore__FilterRequest) callconv(.c) bool) void {
        qtc.QWebEngineCookieStore_SetCookieFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(filterCallback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore.html#setCookie)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` cookie: QNetworkCookie `
    ///
    pub fn SetCookie(self: QWebEngineCookieStore, cookie: anytype) void {
        comptime _ = @TypeOf(cookie)._is_QNetworkCookie;
        qtc.QWebEngineCookieStore_SetCookie(@ptrCast(self.ptr), @ptrCast(cookie.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore.html#deleteCookie)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` cookie: QNetworkCookie `
    ///
    pub fn DeleteCookie(self: QWebEngineCookieStore, cookie: anytype) void {
        comptime _ = @TypeOf(cookie)._is_QNetworkCookie;
        qtc.QWebEngineCookieStore_DeleteCookie(@ptrCast(self.ptr), @ptrCast(cookie.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore.html#deleteSessionCookies)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore `
    ///
    pub fn DeleteSessionCookies(self: QWebEngineCookieStore) void {
        qtc.QWebEngineCookieStore_DeleteSessionCookies(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore.html#deleteAllCookies)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore `
    ///
    pub fn DeleteAllCookies(self: QWebEngineCookieStore) void {
        qtc.QWebEngineCookieStore_DeleteAllCookies(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore.html#loadAllCookies)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore `
    ///
    pub fn LoadAllCookies(self: QWebEngineCookieStore) void {
        qtc.QWebEngineCookieStore_LoadAllCookies(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore.html#cookieAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` cookie: QNetworkCookie `
    ///
    pub fn CookieAdded(self: QWebEngineCookieStore, cookie: anytype) void {
        comptime _ = @TypeOf(cookie)._is_QNetworkCookie;
        qtc.QWebEngineCookieStore_CookieAdded(@ptrCast(self.ptr), @ptrCast(cookie.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore.html#cookieAdded)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` callback: *const fn (self: QWebEngineCookieStore, cookie: QNetworkCookie) callconv(.c) void `
    ///
    pub fn OnCookieAdded(self: QWebEngineCookieStore, callback: *const fn (QWebEngineCookieStore, QNetworkCookie) callconv(.c) void) void {
        qtc.QWebEngineCookieStore_Connect_CookieAdded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore.html#cookieRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` cookie: QNetworkCookie `
    ///
    pub fn CookieRemoved(self: QWebEngineCookieStore, cookie: anytype) void {
        comptime _ = @TypeOf(cookie)._is_QNetworkCookie;
        qtc.QWebEngineCookieStore_CookieRemoved(@ptrCast(self.ptr), @ptrCast(cookie.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore.html#cookieRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` callback: *const fn (self: QWebEngineCookieStore, cookie: QNetworkCookie) callconv(.c) void `
    ///
    pub fn OnCookieRemoved(self: QWebEngineCookieStore, callback: *const fn (QWebEngineCookieStore, QNetworkCookie) callconv(.c) void) void {
        qtc.QWebEngineCookieStore_Connect_CookieRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebenginecookiestore.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebenginecookiestore.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore.html#setCookie)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` cookie: QNetworkCookie `
    ///
    /// ` origin: QUrl `
    ///
    pub fn SetCookie2(self: QWebEngineCookieStore, cookie: anytype, origin: anytype) void {
        comptime _ = @TypeOf(cookie)._is_QNetworkCookie;
        comptime _ = @TypeOf(origin)._is_QUrl;
        qtc.QWebEngineCookieStore_SetCookie2(@ptrCast(self.ptr), @ptrCast(cookie.ptr), @ptrCast(origin.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore.html#deleteCookie)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` cookie: QNetworkCookie `
    ///
    /// ` origin: QUrl `
    ///
    pub fn DeleteCookie2(self: QWebEngineCookieStore, cookie: anytype, origin: anytype) void {
        comptime _ = @TypeOf(cookie)._is_QNetworkCookie;
        comptime _ = @TypeOf(origin)._is_QUrl;
        qtc.QWebEngineCookieStore_DeleteCookie2(@ptrCast(self.ptr), @ptrCast(cookie.ptr), @ptrCast(origin.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QWebEngineCookieStore, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QWebEngineCookieStore, watched: anytype, event: anytype) bool {
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
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QWebEngineCookieStore, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebenginecookiestore.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QWebEngineCookieStore, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore `
    ///
    pub fn IsWidgetType(self: QWebEngineCookieStore) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore `
    ///
    pub fn IsWindowType(self: QWebEngineCookieStore) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore `
    ///
    pub fn IsQuickItemType(self: QWebEngineCookieStore) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore `
    ///
    pub fn SignalsBlocked(self: QWebEngineCookieStore) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QWebEngineCookieStore, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore `
    ///
    pub fn Thread(self: QWebEngineCookieStore) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QWebEngineCookieStore, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QWebEngineCookieStore, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QWebEngineCookieStore, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QWebEngineCookieStore, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QWebEngineCookieStore, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QWebEngineCookieStore, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qwebenginecookiestore.Children: Memory allocation failed");
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
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QWebEngineCookieStore, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QWebEngineCookieStore, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QWebEngineCookieStore, obj: anytype) void {
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
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QWebEngineCookieStore, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QWebEngineCookieStore `
    ///
    pub fn Disconnect3(self: QWebEngineCookieStore) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QWebEngineCookieStore, receiver: anytype) bool {
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
    /// ` self: QWebEngineCookieStore `
    ///
    pub fn DumpObjectTree(self: QWebEngineCookieStore) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore `
    ///
    pub fn DumpObjectInfo(self: QWebEngineCookieStore) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QWebEngineCookieStore, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QWebEngineCookieStore, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QWebEngineCookieStore, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qwebenginecookiestore.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qwebenginecookiestore.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QWebEngineCookieStore `
    ///
    pub fn BindingStorage(self: QWebEngineCookieStore) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore `
    ///
    pub fn BindingStorage2(self: QWebEngineCookieStore) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore `
    ///
    pub fn Destroyed(self: QWebEngineCookieStore) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` callback: *const fn (self: QWebEngineCookieStore) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QWebEngineCookieStore, callback: *const fn (QWebEngineCookieStore) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore `
    ///
    pub fn Parent(self: QWebEngineCookieStore) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QWebEngineCookieStore, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore `
    ///
    pub fn DeleteLater(self: QWebEngineCookieStore) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QWebEngineCookieStore, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QWebEngineCookieStore, time: i64, timerType: i32) i32 {
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
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QWebEngineCookieStore, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QWebEngineCookieStore, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QWebEngineCookieStore, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QWebEngineCookieStore, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QWebEngineCookieStore, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QWebEngineCookieStore, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` callback: *const fn (self: QWebEngineCookieStore, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QWebEngineCookieStore, callback: *const fn (QWebEngineCookieStore, QObject) callconv(.c) void) void {
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
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` callback: *const fn (self: QWebEngineCookieStore, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QWebEngineCookieStore, callback: *const fn (QWebEngineCookieStore, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore.html#dtor.QWebEngineCookieStore)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QWebEngineCookieStore `
    ///
    pub fn Delete(self: QWebEngineCookieStore) void {
        qtc.QWebEngineCookieStore_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore-filterrequest.html)
pub const QWebEngineCookieStore__FilterRequest = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore-filterrequest.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QWebEngineCookieStore__FilterRequest,

    pub const _is_QWebEngineCookieStore__FilterRequest = {};

    /// New constructs a new QWebEngineCookieStore::FilterRequest object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QWebEngineCookieStore__FilterRequest `
    ///
    pub fn New(param1: anytype) QWebEngineCookieStore__FilterRequest {
        comptime _ = @TypeOf(param1)._is_QWebEngineCookieStore__FilterRequest;
        return .{ .ptr = qtc.QWebEngineCookieStore__FilterRequest_new(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore-filterrequest.html#firstPartyUrl-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore__FilterRequest `
    ///
    pub fn FirstPartyUrl(self: QWebEngineCookieStore__FilterRequest) QUrl {
        return .{ .ptr = qtc.QWebEngineCookieStore__FilterRequest_FirstPartyUrl(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore-filterrequest.html#firstPartyUrl-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore__FilterRequest `
    ///
    /// ` firstPartyUrl: QUrl `
    ///
    pub fn SetFirstPartyUrl(self: QWebEngineCookieStore__FilterRequest, firstPartyUrl: anytype) void {
        comptime _ = @TypeOf(firstPartyUrl)._is_QUrl;
        qtc.QWebEngineCookieStore__FilterRequest_SetFirstPartyUrl(@ptrCast(self.ptr), @ptrCast(firstPartyUrl.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore-filterrequest.html#origin-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore__FilterRequest `
    ///
    pub fn Origin(self: QWebEngineCookieStore__FilterRequest) QUrl {
        return .{ .ptr = qtc.QWebEngineCookieStore__FilterRequest_Origin(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore-filterrequest.html#origin-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore__FilterRequest `
    ///
    /// ` origin: QUrl `
    ///
    pub fn SetOrigin(self: QWebEngineCookieStore__FilterRequest, origin: anytype) void {
        comptime _ = @TypeOf(origin)._is_QUrl;
        qtc.QWebEngineCookieStore__FilterRequest_SetOrigin(@ptrCast(self.ptr), @ptrCast(origin.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore-filterrequest.html#thirdParty-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore__FilterRequest `
    ///
    pub fn ThirdParty(self: QWebEngineCookieStore__FilterRequest) bool {
        return qtc.QWebEngineCookieStore__FilterRequest_ThirdParty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore-filterrequest.html#thirdParty-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore__FilterRequest `
    ///
    /// ` thirdParty: bool `
    ///
    pub fn SetThirdParty(self: QWebEngineCookieStore__FilterRequest, thirdParty: bool) void {
        qtc.QWebEngineCookieStore__FilterRequest_SetThirdParty(@ptrCast(self.ptr), thirdParty);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore-filterrequest.html#_reservedFlag-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore__FilterRequest `
    ///
    pub fn ReservedFlag(self: QWebEngineCookieStore__FilterRequest) bool {
        return qtc.QWebEngineCookieStore__FilterRequest_ReservedFlag(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore-filterrequest.html#_reservedFlag-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore__FilterRequest `
    ///
    /// ` _reservedFlag: bool `
    ///
    pub fn SetReservedFlag(self: QWebEngineCookieStore__FilterRequest, _reservedFlag: bool) void {
        qtc.QWebEngineCookieStore__FilterRequest_SetReservedFlag(@ptrCast(self.ptr), _reservedFlag);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore-filterrequest.html#_reservedType-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore__FilterRequest `
    ///
    pub fn ReservedType(self: QWebEngineCookieStore__FilterRequest) u16 {
        return qtc.QWebEngineCookieStore__FilterRequest_ReservedType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore-filterrequest.html#_reservedType-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore__FilterRequest `
    ///
    /// ` _reservedType: u16 `
    ///
    pub fn SetReservedType(self: QWebEngineCookieStore__FilterRequest, _reservedType: u16) void {
        qtc.QWebEngineCookieStore__FilterRequest_SetReservedType(@ptrCast(self.ptr), @bitCast(_reservedType));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore-filterrequest.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore__FilterRequest `
    ///
    /// ` param1: QWebEngineCookieStore__FilterRequest `
    ///
    pub fn OperatorAssign(self: QWebEngineCookieStore__FilterRequest, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWebEngineCookieStore__FilterRequest;
        qtc.QWebEngineCookieStore__FilterRequest_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QWebEngineCookieStore__FilterRequest `
    ///
    pub fn Delete(self: QWebEngineCookieStore__FilterRequest) void {
        qtc.QWebEngineCookieStore__FilterRequest_Delete(@ptrCast(self.ptr));
    }
};
