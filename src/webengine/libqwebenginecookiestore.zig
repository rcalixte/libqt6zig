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

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore `
    ///
    pub fn metaObject(self: QWebEngineCookieStore) QMetaObject {
        return .{ .ptr = qtc.QWebEngineCookieStore_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QWebEngineCookieStore, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QWebEngineCookieStore_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QWebEngineCookieStore, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QWebEngineCookieStore_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QWebEngineCookieStore.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setCookieFilter` instead
    ///
    pub const SetCookieFilter = setCookieFilter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore.html#setCookieFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` filterCallback: *const fn (funcparam1: QWebEngineCookieStore__FilterRequest) callconv(.c) bool `
    ///
    pub fn setCookieFilter(self: QWebEngineCookieStore, filterCallback: *const fn (QWebEngineCookieStore__FilterRequest) callconv(.c) bool) void {
        qtc.QWebEngineCookieStore_SetCookieFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(filterCallback)));
    }

    /// ### DEPRECATED: Use `setCookie` instead
    ///
    pub const SetCookie = setCookie;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore.html#setCookie)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` cookie: QNetworkCookie `
    ///
    pub fn setCookie(self: QWebEngineCookieStore, cookie: anytype) void {
        comptime _ = @TypeOf(cookie)._is_QNetworkCookie;
        qtc.QWebEngineCookieStore_SetCookie(@ptrCast(self.ptr), @ptrCast(cookie.ptr));
    }

    /// ### DEPRECATED: Use `deleteCookie` instead
    ///
    pub const DeleteCookie = deleteCookie;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore.html#deleteCookie)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` cookie: QNetworkCookie `
    ///
    pub fn deleteCookie(self: QWebEngineCookieStore, cookie: anytype) void {
        comptime _ = @TypeOf(cookie)._is_QNetworkCookie;
        qtc.QWebEngineCookieStore_DeleteCookie(@ptrCast(self.ptr), @ptrCast(cookie.ptr));
    }

    /// ### DEPRECATED: Use `deleteSessionCookies` instead
    ///
    pub const DeleteSessionCookies = deleteSessionCookies;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore.html#deleteSessionCookies)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore `
    ///
    pub fn deleteSessionCookies(self: QWebEngineCookieStore) void {
        qtc.QWebEngineCookieStore_DeleteSessionCookies(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `deleteAllCookies` instead
    ///
    pub const DeleteAllCookies = deleteAllCookies;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore.html#deleteAllCookies)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore `
    ///
    pub fn deleteAllCookies(self: QWebEngineCookieStore) void {
        qtc.QWebEngineCookieStore_DeleteAllCookies(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `loadAllCookies` instead
    ///
    pub const LoadAllCookies = loadAllCookies;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore.html#loadAllCookies)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore `
    ///
    pub fn loadAllCookies(self: QWebEngineCookieStore) void {
        qtc.QWebEngineCookieStore_LoadAllCookies(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `cookieAdded` instead
    ///
    pub const CookieAdded = cookieAdded;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore.html#cookieAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` cookie: QNetworkCookie `
    ///
    pub fn cookieAdded(self: QWebEngineCookieStore, cookie: anytype) void {
        comptime _ = @TypeOf(cookie)._is_QNetworkCookie;
        qtc.QWebEngineCookieStore_CookieAdded(@ptrCast(self.ptr), @ptrCast(cookie.ptr));
    }

    /// ### DEPRECATED: Use `onCookieAdded` instead
    ///
    pub const OnCookieAdded = onCookieAdded;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore.html#cookieAdded)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` callback: *const fn (self: QWebEngineCookieStore, cookie: QNetworkCookie) callconv(.c) void `
    ///
    pub fn onCookieAdded(self: QWebEngineCookieStore, callback: *const fn (QWebEngineCookieStore, QNetworkCookie) callconv(.c) void) void {
        qtc.QWebEngineCookieStore_Connect_CookieAdded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `cookieRemoved` instead
    ///
    pub const CookieRemoved = cookieRemoved;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore.html#cookieRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` cookie: QNetworkCookie `
    ///
    pub fn cookieRemoved(self: QWebEngineCookieStore, cookie: anytype) void {
        comptime _ = @TypeOf(cookie)._is_QNetworkCookie;
        qtc.QWebEngineCookieStore_CookieRemoved(@ptrCast(self.ptr), @ptrCast(cookie.ptr));
    }

    /// ### DEPRECATED: Use `onCookieRemoved` instead
    ///
    pub const OnCookieRemoved = onCookieRemoved;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore.html#cookieRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` callback: *const fn (self: QWebEngineCookieStore, cookie: QNetworkCookie) callconv(.c) void `
    ///
    pub fn onCookieRemoved(self: QWebEngineCookieStore, callback: *const fn (QWebEngineCookieStore, QNetworkCookie) callconv(.c) void) void {
        qtc.QWebEngineCookieStore_Connect_CookieRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QWebEngineCookieStore.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QWebEngineCookieStore.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setCookie2` instead
    ///
    pub const SetCookie2 = setCookie2;

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
    pub fn setCookie2(self: QWebEngineCookieStore, cookie: anytype, origin: anytype) void {
        comptime _ = @TypeOf(cookie)._is_QNetworkCookie;
        comptime _ = @TypeOf(origin)._is_QUrl;
        qtc.QWebEngineCookieStore_SetCookie2(@ptrCast(self.ptr), @ptrCast(cookie.ptr), @ptrCast(origin.ptr));
    }

    /// ### DEPRECATED: Use `deleteCookie2` instead
    ///
    pub const DeleteCookie2 = deleteCookie2;

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
    pub fn deleteCookie2(self: QWebEngineCookieStore, cookie: anytype, origin: anytype) void {
        comptime _ = @TypeOf(cookie)._is_QNetworkCookie;
        comptime _ = @TypeOf(origin)._is_QUrl;
        qtc.QWebEngineCookieStore_DeleteCookie2(@ptrCast(self.ptr), @ptrCast(cookie.ptr), @ptrCast(origin.ptr));
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
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QWebEngineCookieStore, _event: anytype) bool {
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
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QWebEngineCookieStore, watched: anytype, _event: anytype) bool {
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
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QWebEngineCookieStore, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QWebEngineCookieStore.objectName: Memory allocation failed");
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
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QWebEngineCookieStore, name: []const u8) void {
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
    /// ` self: QWebEngineCookieStore `
    ///
    pub fn isWidgetType(self: QWebEngineCookieStore) bool {
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
    /// ` self: QWebEngineCookieStore `
    ///
    pub fn isWindowType(self: QWebEngineCookieStore) bool {
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
    /// ` self: QWebEngineCookieStore `
    ///
    pub fn isQuickItemType(self: QWebEngineCookieStore) bool {
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
    /// ` self: QWebEngineCookieStore `
    ///
    pub fn signalsBlocked(self: QWebEngineCookieStore) bool {
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
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QWebEngineCookieStore, b: bool) bool {
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
    /// ` self: QWebEngineCookieStore `
    ///
    pub fn thread(self: QWebEngineCookieStore) QThread {
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
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QWebEngineCookieStore, _thread: anytype) bool {
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
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QWebEngineCookieStore, interval: i32) i32 {
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
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QWebEngineCookieStore, time: i64) i32 {
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
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QWebEngineCookieStore, id: i32) void {
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
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QWebEngineCookieStore, id: i32) void {
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
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QWebEngineCookieStore, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QWebEngineCookieStore.children: Memory allocation failed");
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
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QWebEngineCookieStore, _parent: anytype) void {
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
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QWebEngineCookieStore, filterObj: anytype) void {
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
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QWebEngineCookieStore, obj: anytype) void {
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
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QWebEngineCookieStore, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QWebEngineCookieStore `
    ///
    pub fn disconnect3(self: QWebEngineCookieStore) bool {
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
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QWebEngineCookieStore, receiver: anytype) bool {
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
    /// ` self: QWebEngineCookieStore `
    ///
    pub fn dumpObjectTree(self: QWebEngineCookieStore) void {
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
    /// ` self: QWebEngineCookieStore `
    ///
    pub fn dumpObjectInfo(self: QWebEngineCookieStore) void {
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
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QWebEngineCookieStore, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QWebEngineCookieStore, name: [:0]const u8) QVariant {
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
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QWebEngineCookieStore, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QWebEngineCookieStore.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QWebEngineCookieStore.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QWebEngineCookieStore `
    ///
    pub fn bindingStorage(self: QWebEngineCookieStore) QBindingStorage {
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
    /// ` self: QWebEngineCookieStore `
    ///
    pub fn bindingStorage2(self: QWebEngineCookieStore) QBindingStorage {
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
    /// ` self: QWebEngineCookieStore `
    ///
    pub fn destroyed(self: QWebEngineCookieStore) void {
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
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` callback: *const fn (self: QWebEngineCookieStore) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QWebEngineCookieStore, callback: *const fn (QWebEngineCookieStore) callconv(.c) void) void {
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
    /// ` self: QWebEngineCookieStore `
    ///
    pub fn parent(self: QWebEngineCookieStore) QObject {
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
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QWebEngineCookieStore, classname: [:0]const u8) bool {
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
    /// ` self: QWebEngineCookieStore `
    ///
    pub fn deleteLater(self: QWebEngineCookieStore) void {
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
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QWebEngineCookieStore, interval: i32, timerType: i32) i32 {
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
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QWebEngineCookieStore, time: i64, timerType: i32) i32 {
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
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QWebEngineCookieStore, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QWebEngineCookieStore, signal: [:0]const u8) bool {
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
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QWebEngineCookieStore, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QWebEngineCookieStore, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QWebEngineCookieStore, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QWebEngineCookieStore, param1: anytype) void {
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
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` callback: *const fn (self: QWebEngineCookieStore, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QWebEngineCookieStore, callback: *const fn (QWebEngineCookieStore, QObject) callconv(.c) void) void {
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
    /// ` self: QWebEngineCookieStore `
    ///
    /// ` callback: *const fn (self: QWebEngineCookieStore, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QWebEngineCookieStore, callback: *const fn (QWebEngineCookieStore, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore.html#dtor.QWebEngineCookieStore)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QWebEngineCookieStore `
    ///
    pub fn delete(self: QWebEngineCookieStore) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QWebEngineCookieStore::FilterRequest object in C++ memory
    ///
    pub fn new() QWebEngineCookieStore__FilterRequest {
        return .{ .ptr = qtc.QWebEngineCookieStore__FilterRequest_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QWebEngineCookieStore::FilterRequest object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QWebEngineCookieStore__FilterRequest `
    ///
    pub fn new2(param1: anytype) QWebEngineCookieStore__FilterRequest {
        comptime _ = @TypeOf(param1)._is_QWebEngineCookieStore__FilterRequest;
        return .{ .ptr = qtc.QWebEngineCookieStore__FilterRequest_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `firstPartyUrl` instead
    ///
    pub const FirstPartyUrl = firstPartyUrl;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore-filterrequest.html#firstPartyUrl-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore__FilterRequest `
    ///
    pub fn firstPartyUrl(self: QWebEngineCookieStore__FilterRequest) QUrl {
        return .{ .ptr = qtc.QWebEngineCookieStore__FilterRequest_FirstPartyUrl(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFirstPartyUrl` instead
    ///
    pub const SetFirstPartyUrl = setFirstPartyUrl;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore-filterrequest.html#firstPartyUrl-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore__FilterRequest `
    ///
    /// ` _firstPartyUrl: QUrl `
    ///
    pub fn setFirstPartyUrl(self: QWebEngineCookieStore__FilterRequest, _firstPartyUrl: anytype) void {
        comptime _ = @TypeOf(_firstPartyUrl)._is_QUrl;
        qtc.QWebEngineCookieStore__FilterRequest_SetFirstPartyUrl(@ptrCast(self.ptr), @ptrCast(_firstPartyUrl.ptr));
    }

    /// ### DEPRECATED: Use `origin` instead
    ///
    pub const Origin = origin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore-filterrequest.html#origin-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore__FilterRequest `
    ///
    pub fn origin(self: QWebEngineCookieStore__FilterRequest) QUrl {
        return .{ .ptr = qtc.QWebEngineCookieStore__FilterRequest_Origin(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setOrigin` instead
    ///
    pub const SetOrigin = setOrigin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore-filterrequest.html#origin-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore__FilterRequest `
    ///
    /// ` _origin: QUrl `
    ///
    pub fn setOrigin(self: QWebEngineCookieStore__FilterRequest, _origin: anytype) void {
        comptime _ = @TypeOf(_origin)._is_QUrl;
        qtc.QWebEngineCookieStore__FilterRequest_SetOrigin(@ptrCast(self.ptr), @ptrCast(_origin.ptr));
    }

    /// ### DEPRECATED: Use `thirdParty` instead
    ///
    pub const ThirdParty = thirdParty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore-filterrequest.html#thirdParty-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore__FilterRequest `
    ///
    pub fn thirdParty(self: QWebEngineCookieStore__FilterRequest) bool {
        return qtc.QWebEngineCookieStore__FilterRequest_ThirdParty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setThirdParty` instead
    ///
    pub const SetThirdParty = setThirdParty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore-filterrequest.html#thirdParty-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore__FilterRequest `
    ///
    /// ` _thirdParty: bool `
    ///
    pub fn setThirdParty(self: QWebEngineCookieStore__FilterRequest, _thirdParty: bool) void {
        qtc.QWebEngineCookieStore__FilterRequest_SetThirdParty(@ptrCast(self.ptr), _thirdParty);
    }

    /// ### DEPRECATED: Use `reservedFlag` instead
    ///
    pub const ReservedFlag = reservedFlag;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore-filterrequest.html#reservedFlag-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore__FilterRequest `
    ///
    pub fn reservedFlag(self: QWebEngineCookieStore__FilterRequest) bool {
        return qtc.QWebEngineCookieStore__FilterRequest_ReservedFlag(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setReservedFlag` instead
    ///
    pub const SetReservedFlag = setReservedFlag;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore-filterrequest.html#reservedFlag-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore__FilterRequest `
    ///
    /// ` _reservedFlag: bool `
    ///
    pub fn setReservedFlag(self: QWebEngineCookieStore__FilterRequest, _reservedFlag: bool) void {
        qtc.QWebEngineCookieStore__FilterRequest_SetReservedFlag(@ptrCast(self.ptr), _reservedFlag);
    }

    /// ### DEPRECATED: Use `reservedType` instead
    ///
    pub const ReservedType = reservedType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore-filterrequest.html#reservedType-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore__FilterRequest `
    ///
    pub fn reservedType(self: QWebEngineCookieStore__FilterRequest) u16 {
        return qtc.QWebEngineCookieStore__FilterRequest_ReservedType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setReservedType` instead
    ///
    pub const SetReservedType = setReservedType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore-filterrequest.html#reservedType-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore__FilterRequest `
    ///
    /// ` _reservedType: u16 `
    ///
    pub fn setReservedType(self: QWebEngineCookieStore__FilterRequest, _reservedType: u16) void {
        qtc.QWebEngineCookieStore__FilterRequest_SetReservedType(@ptrCast(self.ptr), @bitCast(_reservedType));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore-filterrequest.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineCookieStore__FilterRequest `
    ///
    /// ` param1: QWebEngineCookieStore__FilterRequest `
    ///
    pub fn operatorAssign(self: QWebEngineCookieStore__FilterRequest, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWebEngineCookieStore__FilterRequest;
        qtc.QWebEngineCookieStore__FilterRequest_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QWebEngineCookieStore__FilterRequest `
    ///
    pub fn delete(self: QWebEngineCookieStore__FilterRequest) void {
        qtc.QWebEngineCookieStore__FilterRequest_Delete(@ptrCast(self.ptr));
    }
};
