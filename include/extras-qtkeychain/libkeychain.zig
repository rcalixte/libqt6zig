const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QSettings = @import("libqt6").QSettings;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const keychain_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
pub const QKeychain__Job = extern struct {
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QKeychain__Job,

    pub const _is_QKeychain__Job = {};
    pub const _is_QObject = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__Job `
    ///
    pub fn MetaObject(self: QKeychain__Job) QMetaObject {
        return .{ .ptr = qtc.QKeychain__Job_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__Job `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QKeychain__Job, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QKeychain__Job_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__Job `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QKeychain__Job, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QKeychain__Job_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qkeychain__job.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__Job `
    ///
    pub fn Settings(self: QKeychain__Job) QSettings {
        return .{ .ptr = qtc.QKeychain__Job_Settings(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__Job `
    ///
    /// ` settings: QSettings `
    ///
    pub fn SetSettings(self: QKeychain__Job, settings: anytype) void {
        comptime _ = @TypeOf(settings)._is_QSettings;
        qtc.QKeychain__Job_SetSettings(@ptrCast(self.ptr), @ptrCast(settings.ptr));
    }

    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__Job `
    ///
    pub fn Start(self: QKeychain__Job) void {
        qtc.QKeychain__Job_Start(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__Job `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Service(self: QKeychain__Job, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QKeychain__Job_Service(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qkeychain__job.Service: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__Job `
    ///
    /// ## Returns:
    ///
    /// ` keychain_enums.Error `
    ///
    pub fn Error(self: QKeychain__Job) i32 {
        return qtc.QKeychain__Job_Error(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__Job `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: QKeychain__Job, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QKeychain__Job_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qkeychain__job.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__Job `
    ///
    pub fn AutoDelete(self: QKeychain__Job) bool {
        return qtc.QKeychain__Job_AutoDelete(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__Job `
    ///
    /// ` autoDelete: bool `
    ///
    pub fn SetAutoDelete(self: QKeychain__Job, autoDelete: bool) void {
        qtc.QKeychain__Job_SetAutoDelete(@ptrCast(self.ptr), autoDelete);
    }

    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__Job `
    ///
    pub fn InsecureFallback(self: QKeychain__Job) bool {
        return qtc.QKeychain__Job_InsecureFallback(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__Job `
    ///
    /// ` insecureFallback: bool `
    ///
    pub fn SetInsecureFallback(self: QKeychain__Job, insecureFallback: bool) void {
        qtc.QKeychain__Job_SetInsecureFallback(@ptrCast(self.ptr), insecureFallback);
    }

    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__Job `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Key(self: QKeychain__Job, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QKeychain__Job_Key(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qkeychain__job.Key: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__Job `
    ///
    /// ` key: []const u8 `
    ///
    pub fn SetKey(self: QKeychain__Job, key: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.QKeychain__Job_SetKey(@ptrCast(self.ptr), key_str);
    }

    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__Job `
    ///
    pub fn EmitFinished(self: QKeychain__Job) void {
        qtc.QKeychain__Job_EmitFinished(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__Job `
    ///
    /// ` param1: keychain_enums.Error `
    ///
    /// ` errorString: []const u8 `
    ///
    pub fn EmitFinishedWithError(self: QKeychain__Job, param1: i32, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.QKeychain__Job_EmitFinishedWithError(@ptrCast(self.ptr), @bitCast(param1), errorString_str);
    }

    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__Job `
    ///
    /// ` param1: QKeychain__Job `
    ///
    pub fn Finished(self: QKeychain__Job, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QKeychain__Job;
        qtc.QKeychain__Job_Finished(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeychain__Job `
    ///
    /// ` callback: *const fn (self: QKeychain__Job, param1: QKeychain__Job) callconv(.c) void `
    ///
    pub fn OnFinished(self: QKeychain__Job, callback: *const fn (QKeychain__Job, QKeychain__Job) callconv(.c) void) void {
        qtc.QKeychain__Job_Connect_Finished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qkeychain__job.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qkeychain__job.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__Job `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QKeychain__Job, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__Job `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QKeychain__Job, watched: anytype, event: anytype) bool {
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
    /// ` self: QKeychain__Job `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QKeychain__Job, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qkeychain__job.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__Job `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QKeychain__Job, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__Job `
    ///
    pub fn IsWidgetType(self: QKeychain__Job) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__Job `
    ///
    pub fn IsWindowType(self: QKeychain__Job) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__Job `
    ///
    pub fn IsQuickItemType(self: QKeychain__Job) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__Job `
    ///
    pub fn SignalsBlocked(self: QKeychain__Job) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__Job `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QKeychain__Job, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__Job `
    ///
    pub fn Thread(self: QKeychain__Job) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__Job `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QKeychain__Job, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__Job `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QKeychain__Job, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__Job `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QKeychain__Job, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__Job `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QKeychain__Job, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__Job `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QKeychain__Job, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__Job `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QKeychain__Job, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qkeychain__job.Children: Memory allocation failed");
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
    /// ` self: QKeychain__Job `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QKeychain__Job, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__Job `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QKeychain__Job, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__Job `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QKeychain__Job, obj: anytype) void {
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
    /// ` self: QKeychain__Job `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QKeychain__Job, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QKeychain__Job `
    ///
    pub fn Disconnect3(self: QKeychain__Job) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__Job `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QKeychain__Job, receiver: anytype) bool {
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
    /// ` self: QKeychain__Job `
    ///
    pub fn DumpObjectTree(self: QKeychain__Job) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__Job `
    ///
    pub fn DumpObjectInfo(self: QKeychain__Job) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__Job `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QKeychain__Job, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QKeychain__Job `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QKeychain__Job, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__Job `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QKeychain__Job, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qkeychain__job.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qkeychain__job.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QKeychain__Job `
    ///
    pub fn BindingStorage(self: QKeychain__Job) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__Job `
    ///
    pub fn BindingStorage2(self: QKeychain__Job) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__Job `
    ///
    pub fn Destroyed(self: QKeychain__Job) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeychain__Job `
    ///
    /// ` callback: *const fn (self: QKeychain__Job) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QKeychain__Job, callback: *const fn (QKeychain__Job) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__Job `
    ///
    pub fn Parent(self: QKeychain__Job) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__Job `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QKeychain__Job, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__Job `
    ///
    pub fn DeleteLater(self: QKeychain__Job) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__Job `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QKeychain__Job, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__Job `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QKeychain__Job, time: i64, timerType: i32) i32 {
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
    /// ` self: QKeychain__Job `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QKeychain__Job, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QKeychain__Job `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QKeychain__Job, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__Job `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QKeychain__Job, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QKeychain__Job `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QKeychain__Job, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QKeychain__Job `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QKeychain__Job, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QKeychain__Job `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QKeychain__Job, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeychain__Job `
    ///
    /// ` callback: *const fn (self: QKeychain__Job, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QKeychain__Job, callback: *const fn (QKeychain__Job, QObject) callconv(.c) void) void {
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
    /// ` self: QKeychain__Job `
    ///
    /// ` callback: *const fn (self: QKeychain__Job, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QKeychain__Job, callback: *const fn (QKeychain__Job, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QKeychain__Job `
    ///
    pub fn Delete(self: QKeychain__Job) void {
        qtc.QKeychain__Job_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
pub const QKeychain__ReadPasswordJob = extern struct {
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QKeychain__ReadPasswordJob,

    pub const _is_QKeychain__ReadPasswordJob = {};
    pub const _is_QKeychain__Job = {};
    pub const _is_QObject = {};

    /// New constructs a new QKeychain::ReadPasswordJob object.
    ///
    /// ## Parameter(s):
    ///
    /// ` service: []const u8 `
    ///
    pub fn New(service: []const u8) QKeychain__ReadPasswordJob {
        const service_str = qtc.libqt_string{
            .len = service.len,
            .data = service.ptr,
        };
        return .{ .ptr = qtc.QKeychain__ReadPasswordJob_new(service_str) };
    }

    /// New2 constructs a new QKeychain::ReadPasswordJob object.
    ///
    /// ## Parameter(s):
    ///
    /// ` service: []const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(service: []const u8, parent: anytype) QKeychain__ReadPasswordJob {
        const service_str = qtc.libqt_string{
            .len = service.len,
            .data = service.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QKeychain__ReadPasswordJob_new2(service_str, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    pub fn MetaObject(self: QKeychain__ReadPasswordJob) QMetaObject {
        return .{ .ptr = qtc.QKeychain__ReadPasswordJob_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QKeychain__ReadPasswordJob, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QKeychain__ReadPasswordJob_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    pub fn SuperMetaObject(self: QKeychain__ReadPasswordJob) QMetaObject {
        return .{ .ptr = qtc.QKeychain__ReadPasswordJob_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QKeychain__ReadPasswordJob, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QKeychain__ReadPasswordJob_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` callback: *const fn (self: QKeychain__ReadPasswordJob, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QKeychain__ReadPasswordJob, callback: *const fn (QKeychain__ReadPasswordJob, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QKeychain__ReadPasswordJob_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QKeychain__ReadPasswordJob, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QKeychain__ReadPasswordJob_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QKeychain__ReadPasswordJob, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QKeychain__ReadPasswordJob_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` callback: *const fn (self: QKeychain__ReadPasswordJob, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QKeychain__ReadPasswordJob, callback: *const fn (QKeychain__ReadPasswordJob, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QKeychain__ReadPasswordJob_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QKeychain__ReadPasswordJob, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QKeychain__ReadPasswordJob_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qkeychain__readpasswordjob.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn BinaryData(self: QKeychain__ReadPasswordJob, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QKeychain__ReadPasswordJob_BinaryData(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qkeychain__readpasswordjob.BinaryData: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TextData(self: QKeychain__ReadPasswordJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QKeychain__ReadPasswordJob_TextData(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qkeychain__readpasswordjob.TextData: Memory allocation failed");
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
    pub fn Tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qkeychain__readpasswordjob.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qkeychain__readpasswordjob.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QKeychain::Job
    ///
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    pub fn Settings(self: QKeychain__ReadPasswordJob) QSettings {
        return .{ .ptr = qtc.QKeychain__Job_Settings(@ptrCast(self.ptr)) };
    }

    /// Inherited from QKeychain::Job
    ///
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` settings: QSettings `
    ///
    pub fn SetSettings(self: QKeychain__ReadPasswordJob, settings: anytype) void {
        comptime _ = @TypeOf(settings)._is_QSettings;
        qtc.QKeychain__Job_SetSettings(@ptrCast(self.ptr), @ptrCast(settings.ptr));
    }

    /// Inherited from QKeychain::Job
    ///
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    pub fn Start(self: QKeychain__ReadPasswordJob) void {
        qtc.QKeychain__Job_Start(@ptrCast(self.ptr));
    }

    /// Inherited from QKeychain::Job
    ///
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Service(self: QKeychain__ReadPasswordJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QKeychain__Job_Service(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qkeychain__readpasswordjob.Service: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QKeychain::Job
    ///
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ## Returns:
    ///
    /// ` keychain_enums.Error `
    ///
    pub fn Error(self: QKeychain__ReadPasswordJob) i32 {
        return qtc.QKeychain__Job_Error(@ptrCast(self.ptr));
    }

    /// Inherited from QKeychain::Job
    ///
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: QKeychain__ReadPasswordJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QKeychain__Job_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qkeychain__readpasswordjob.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QKeychain::Job
    ///
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    pub fn AutoDelete(self: QKeychain__ReadPasswordJob) bool {
        return qtc.QKeychain__Job_AutoDelete(@ptrCast(self.ptr));
    }

    /// Inherited from QKeychain::Job
    ///
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` autoDelete: bool `
    ///
    pub fn SetAutoDelete(self: QKeychain__ReadPasswordJob, autoDelete: bool) void {
        qtc.QKeychain__Job_SetAutoDelete(@ptrCast(self.ptr), autoDelete);
    }

    /// Inherited from QKeychain::Job
    ///
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    pub fn InsecureFallback(self: QKeychain__ReadPasswordJob) bool {
        return qtc.QKeychain__Job_InsecureFallback(@ptrCast(self.ptr));
    }

    /// Inherited from QKeychain::Job
    ///
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` insecureFallback: bool `
    ///
    pub fn SetInsecureFallback(self: QKeychain__ReadPasswordJob, insecureFallback: bool) void {
        qtc.QKeychain__Job_SetInsecureFallback(@ptrCast(self.ptr), insecureFallback);
    }

    /// Inherited from QKeychain::Job
    ///
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Key(self: QKeychain__ReadPasswordJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QKeychain__Job_Key(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qkeychain__readpasswordjob.Key: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QKeychain::Job
    ///
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` key: []const u8 `
    ///
    pub fn SetKey(self: QKeychain__ReadPasswordJob, key: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.QKeychain__Job_SetKey(@ptrCast(self.ptr), key_str);
    }

    /// Inherited from QKeychain::Job
    ///
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    pub fn EmitFinished(self: QKeychain__ReadPasswordJob) void {
        qtc.QKeychain__Job_EmitFinished(@ptrCast(self.ptr));
    }

    /// Inherited from QKeychain::Job
    ///
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` param1: keychain_enums.Error `
    ///
    /// ` errorString: []const u8 `
    ///
    pub fn EmitFinishedWithError(self: QKeychain__ReadPasswordJob, param1: i32, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.QKeychain__Job_EmitFinishedWithError(@ptrCast(self.ptr), @bitCast(param1), errorString_str);
    }

    /// Inherited from QKeychain::Job
    ///
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` param1: QKeychain__Job `
    ///
    pub fn Finished(self: QKeychain__ReadPasswordJob, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QKeychain__Job;
        qtc.QKeychain__Job_Finished(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QKeychain::Job
    ///
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` callback: *const fn (self: QKeychain__ReadPasswordJob, param1: QKeychain__Job) callconv(.c) void `
    ///
    pub fn OnFinished(self: QKeychain__ReadPasswordJob, callback: *const fn (QKeychain__ReadPasswordJob, QKeychain__Job) callconv(.c) void) void {
        qtc.QKeychain__Job_Connect_Finished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QKeychain__ReadPasswordJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qkeychain__readpasswordjob.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QKeychain__ReadPasswordJob, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    pub fn IsWidgetType(self: QKeychain__ReadPasswordJob) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    pub fn IsWindowType(self: QKeychain__ReadPasswordJob) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    pub fn IsQuickItemType(self: QKeychain__ReadPasswordJob) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    pub fn SignalsBlocked(self: QKeychain__ReadPasswordJob) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QKeychain__ReadPasswordJob, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    pub fn Thread(self: QKeychain__ReadPasswordJob) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QKeychain__ReadPasswordJob, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QKeychain__ReadPasswordJob, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QKeychain__ReadPasswordJob, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QKeychain__ReadPasswordJob, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QKeychain__ReadPasswordJob, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QKeychain__ReadPasswordJob, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qkeychain__readpasswordjob.Children: Memory allocation failed");
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
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QKeychain__ReadPasswordJob, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QKeychain__ReadPasswordJob, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QKeychain__ReadPasswordJob, obj: anytype) void {
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
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QKeychain__ReadPasswordJob, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    pub fn Disconnect3(self: QKeychain__ReadPasswordJob) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QKeychain__ReadPasswordJob, receiver: anytype) bool {
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
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    pub fn DumpObjectTree(self: QKeychain__ReadPasswordJob) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    pub fn DumpObjectInfo(self: QKeychain__ReadPasswordJob) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QKeychain__ReadPasswordJob, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QKeychain__ReadPasswordJob, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QKeychain__ReadPasswordJob, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qkeychain__readpasswordjob.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qkeychain__readpasswordjob.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    pub fn BindingStorage(self: QKeychain__ReadPasswordJob) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    pub fn BindingStorage2(self: QKeychain__ReadPasswordJob) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    pub fn Destroyed(self: QKeychain__ReadPasswordJob) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` callback: *const fn (self: QKeychain__ReadPasswordJob) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QKeychain__ReadPasswordJob, callback: *const fn (QKeychain__ReadPasswordJob) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    pub fn Parent(self: QKeychain__ReadPasswordJob) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QKeychain__ReadPasswordJob, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    pub fn DeleteLater(self: QKeychain__ReadPasswordJob) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QKeychain__ReadPasswordJob, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QKeychain__ReadPasswordJob, time: i64, timerType: i32) i32 {
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
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QKeychain__ReadPasswordJob, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QKeychain__ReadPasswordJob, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QKeychain__ReadPasswordJob, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QKeychain__ReadPasswordJob, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QKeychain__ReadPasswordJob, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QKeychain__ReadPasswordJob, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` callback: *const fn (self: QKeychain__ReadPasswordJob, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QKeychain__ReadPasswordJob, callback: *const fn (QKeychain__ReadPasswordJob, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QKeychain__ReadPasswordJob, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QKeychain__ReadPasswordJob_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QKeychain__ReadPasswordJob, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QKeychain__ReadPasswordJob_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeychain__ReadPasswordJob`
    ///
    /// ` callback: *const fn (self: QKeychain__ReadPasswordJob, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QKeychain__ReadPasswordJob, callback: *const fn (QKeychain__ReadPasswordJob, QEvent) callconv(.c) bool) void {
        qtc.QKeychain__ReadPasswordJob_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QKeychain__ReadPasswordJob, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QKeychain__ReadPasswordJob_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QKeychain__ReadPasswordJob, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QKeychain__ReadPasswordJob_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeychain__ReadPasswordJob`
    ///
    /// ` callback: *const fn (self: QKeychain__ReadPasswordJob, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QKeychain__ReadPasswordJob, callback: *const fn (QKeychain__ReadPasswordJob, QObject, QEvent) callconv(.c) bool) void {
        qtc.QKeychain__ReadPasswordJob_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QKeychain__ReadPasswordJob, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QKeychain__ReadPasswordJob_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QKeychain__ReadPasswordJob, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QKeychain__ReadPasswordJob_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeychain__ReadPasswordJob`
    ///
    /// ` callback: *const fn (self: QKeychain__ReadPasswordJob, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QKeychain__ReadPasswordJob, callback: *const fn (QKeychain__ReadPasswordJob, QTimerEvent) callconv(.c) void) void {
        qtc.QKeychain__ReadPasswordJob_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QKeychain__ReadPasswordJob, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QKeychain__ReadPasswordJob_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperChildEvent` instead
    ///
    pub const QBaseChildEvent = SuperChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QKeychain__ReadPasswordJob, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QKeychain__ReadPasswordJob_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeychain__ReadPasswordJob`
    ///
    /// ` callback: *const fn (self: QKeychain__ReadPasswordJob, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QKeychain__ReadPasswordJob, callback: *const fn (QKeychain__ReadPasswordJob, QChildEvent) callconv(.c) void) void {
        qtc.QKeychain__ReadPasswordJob_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QKeychain__ReadPasswordJob, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QKeychain__ReadPasswordJob_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperCustomEvent` instead
    ///
    pub const QBaseCustomEvent = SuperCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QKeychain__ReadPasswordJob, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QKeychain__ReadPasswordJob_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeychain__ReadPasswordJob`
    ///
    /// ` callback: *const fn (self: QKeychain__ReadPasswordJob, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QKeychain__ReadPasswordJob, callback: *const fn (QKeychain__ReadPasswordJob, QEvent) callconv(.c) void) void {
        qtc.QKeychain__ReadPasswordJob_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QKeychain__ReadPasswordJob, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QKeychain__ReadPasswordJob_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperConnectNotify` instead
    ///
    pub const QBaseConnectNotify = SuperConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QKeychain__ReadPasswordJob, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QKeychain__ReadPasswordJob_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeychain__ReadPasswordJob`
    ///
    /// ` callback: *const fn (self: QKeychain__ReadPasswordJob, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QKeychain__ReadPasswordJob, callback: *const fn (QKeychain__ReadPasswordJob, QMetaMethod) callconv(.c) void) void {
        qtc.QKeychain__ReadPasswordJob_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QKeychain__ReadPasswordJob, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QKeychain__ReadPasswordJob_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperDisconnectNotify` instead
    ///
    pub const QBaseDisconnectNotify = SuperDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QKeychain__ReadPasswordJob, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QKeychain__ReadPasswordJob_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeychain__ReadPasswordJob`
    ///
    /// ` callback: *const fn (self: QKeychain__ReadPasswordJob, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QKeychain__ReadPasswordJob, callback: *const fn (QKeychain__ReadPasswordJob, QMetaMethod) callconv(.c) void) void {
        qtc.QKeychain__ReadPasswordJob_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QKeychain::Job
    ///
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    pub fn DoStart(self: QKeychain__ReadPasswordJob) void {
        qtc.QKeychain__ReadPasswordJob_DoStart(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperDoStart` instead
    ///
    pub const QBaseDoStart = SuperDoStart;

    /// Inherited from QKeychain::Job
    ///
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    pub fn SuperDoStart(self: QKeychain__ReadPasswordJob) void {
        qtc.QKeychain__ReadPasswordJob_SuperDoStart(@ptrCast(self.ptr));
    }

    /// Inherited from QKeychain::Job
    ///
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeychain__ReadPasswordJob`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDoStart(self: QKeychain__ReadPasswordJob, callback: *const fn () callconv(.c) void) void {
        qtc.QKeychain__ReadPasswordJob_OnDoStart(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    pub fn Sender(self: QKeychain__ReadPasswordJob) QObject {
        return .{ .ptr = qtc.QKeychain__ReadPasswordJob_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSender` instead
    ///
    pub const QBaseSender = SuperSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    pub fn SuperSender(self: QKeychain__ReadPasswordJob) QObject {
        return .{ .ptr = qtc.QKeychain__ReadPasswordJob_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeychain__ReadPasswordJob`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QKeychain__ReadPasswordJob, callback: *const fn () callconv(.c) QObject) void {
        qtc.QKeychain__ReadPasswordJob_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    pub fn SenderSignalIndex(self: QKeychain__ReadPasswordJob) i32 {
        return qtc.QKeychain__ReadPasswordJob_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSenderSignalIndex` instead
    ///
    pub const QBaseSenderSignalIndex = SuperSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    pub fn SuperSenderSignalIndex(self: QKeychain__ReadPasswordJob) i32 {
        return qtc.QKeychain__ReadPasswordJob_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeychain__ReadPasswordJob`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QKeychain__ReadPasswordJob, callback: *const fn () callconv(.c) i32) void {
        qtc.QKeychain__ReadPasswordJob_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QKeychain__ReadPasswordJob, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QKeychain__ReadPasswordJob_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `SuperReceivers` instead
    ///
    pub const QBaseReceivers = SuperReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QKeychain__ReadPasswordJob, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QKeychain__ReadPasswordJob_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeychain__ReadPasswordJob`
    ///
    /// ` callback: *const fn (self: QKeychain__ReadPasswordJob, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QKeychain__ReadPasswordJob, callback: *const fn (QKeychain__ReadPasswordJob, [*:0]const u8) callconv(.c) i32) void {
        qtc.QKeychain__ReadPasswordJob_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QKeychain__ReadPasswordJob, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QKeychain__ReadPasswordJob_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsSignalConnected` instead
    ///
    pub const QBaseIsSignalConnected = SuperIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QKeychain__ReadPasswordJob, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QKeychain__ReadPasswordJob_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeychain__ReadPasswordJob`
    ///
    /// ` callback: *const fn (self: QKeychain__ReadPasswordJob, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QKeychain__ReadPasswordJob, callback: *const fn (QKeychain__ReadPasswordJob, QMetaMethod) callconv(.c) bool) void {
        qtc.QKeychain__ReadPasswordJob_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    /// ` callback: *const fn (self: QKeychain__ReadPasswordJob, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QKeychain__ReadPasswordJob, callback: *const fn (QKeychain__ReadPasswordJob, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QKeychain__ReadPasswordJob `
    ///
    pub fn Delete(self: QKeychain__ReadPasswordJob) void {
        qtc.QKeychain__ReadPasswordJob_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
pub const QKeychain__WritePasswordJob = extern struct {
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QKeychain__WritePasswordJob,

    pub const _is_QKeychain__WritePasswordJob = {};
    pub const _is_QKeychain__Job = {};
    pub const _is_QObject = {};

    /// New constructs a new QKeychain::WritePasswordJob object.
    ///
    /// ## Parameter(s):
    ///
    /// ` service: []const u8 `
    ///
    pub fn New(service: []const u8) QKeychain__WritePasswordJob {
        const service_str = qtc.libqt_string{
            .len = service.len,
            .data = service.ptr,
        };
        return .{ .ptr = qtc.QKeychain__WritePasswordJob_new(service_str) };
    }

    /// New2 constructs a new QKeychain::WritePasswordJob object.
    ///
    /// ## Parameter(s):
    ///
    /// ` service: []const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(service: []const u8, parent: anytype) QKeychain__WritePasswordJob {
        const service_str = qtc.libqt_string{
            .len = service.len,
            .data = service.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QKeychain__WritePasswordJob_new2(service_str, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    pub fn MetaObject(self: QKeychain__WritePasswordJob) QMetaObject {
        return .{ .ptr = qtc.QKeychain__WritePasswordJob_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QKeychain__WritePasswordJob, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QKeychain__WritePasswordJob_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    pub fn SuperMetaObject(self: QKeychain__WritePasswordJob) QMetaObject {
        return .{ .ptr = qtc.QKeychain__WritePasswordJob_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QKeychain__WritePasswordJob, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QKeychain__WritePasswordJob_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` callback: *const fn (self: QKeychain__WritePasswordJob, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QKeychain__WritePasswordJob, callback: *const fn (QKeychain__WritePasswordJob, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QKeychain__WritePasswordJob_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QKeychain__WritePasswordJob, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QKeychain__WritePasswordJob_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QKeychain__WritePasswordJob, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QKeychain__WritePasswordJob_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` callback: *const fn (self: QKeychain__WritePasswordJob, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QKeychain__WritePasswordJob, callback: *const fn (QKeychain__WritePasswordJob, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QKeychain__WritePasswordJob_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QKeychain__WritePasswordJob, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QKeychain__WritePasswordJob_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qkeychain__writepasswordjob.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` data: []u8 `
    ///
    pub fn SetBinaryData(self: QKeychain__WritePasswordJob, data: []u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.QKeychain__WritePasswordJob_SetBinaryData(@ptrCast(self.ptr), data_str);
    }

    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` data: []const u8 `
    ///
    pub fn SetTextData(self: QKeychain__WritePasswordJob, data: []const u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.QKeychain__WritePasswordJob_SetTextData(@ptrCast(self.ptr), data_str);
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qkeychain__writepasswordjob.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qkeychain__writepasswordjob.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QKeychain::Job
    ///
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    pub fn Settings(self: QKeychain__WritePasswordJob) QSettings {
        return .{ .ptr = qtc.QKeychain__Job_Settings(@ptrCast(self.ptr)) };
    }

    /// Inherited from QKeychain::Job
    ///
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` settings: QSettings `
    ///
    pub fn SetSettings(self: QKeychain__WritePasswordJob, settings: anytype) void {
        comptime _ = @TypeOf(settings)._is_QSettings;
        qtc.QKeychain__Job_SetSettings(@ptrCast(self.ptr), @ptrCast(settings.ptr));
    }

    /// Inherited from QKeychain::Job
    ///
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    pub fn Start(self: QKeychain__WritePasswordJob) void {
        qtc.QKeychain__Job_Start(@ptrCast(self.ptr));
    }

    /// Inherited from QKeychain::Job
    ///
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Service(self: QKeychain__WritePasswordJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QKeychain__Job_Service(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qkeychain__writepasswordjob.Service: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QKeychain::Job
    ///
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ## Returns:
    ///
    /// ` keychain_enums.Error `
    ///
    pub fn Error(self: QKeychain__WritePasswordJob) i32 {
        return qtc.QKeychain__Job_Error(@ptrCast(self.ptr));
    }

    /// Inherited from QKeychain::Job
    ///
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: QKeychain__WritePasswordJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QKeychain__Job_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qkeychain__writepasswordjob.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QKeychain::Job
    ///
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    pub fn AutoDelete(self: QKeychain__WritePasswordJob) bool {
        return qtc.QKeychain__Job_AutoDelete(@ptrCast(self.ptr));
    }

    /// Inherited from QKeychain::Job
    ///
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` autoDelete: bool `
    ///
    pub fn SetAutoDelete(self: QKeychain__WritePasswordJob, autoDelete: bool) void {
        qtc.QKeychain__Job_SetAutoDelete(@ptrCast(self.ptr), autoDelete);
    }

    /// Inherited from QKeychain::Job
    ///
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    pub fn InsecureFallback(self: QKeychain__WritePasswordJob) bool {
        return qtc.QKeychain__Job_InsecureFallback(@ptrCast(self.ptr));
    }

    /// Inherited from QKeychain::Job
    ///
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` insecureFallback: bool `
    ///
    pub fn SetInsecureFallback(self: QKeychain__WritePasswordJob, insecureFallback: bool) void {
        qtc.QKeychain__Job_SetInsecureFallback(@ptrCast(self.ptr), insecureFallback);
    }

    /// Inherited from QKeychain::Job
    ///
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Key(self: QKeychain__WritePasswordJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QKeychain__Job_Key(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qkeychain__writepasswordjob.Key: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QKeychain::Job
    ///
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` key: []const u8 `
    ///
    pub fn SetKey(self: QKeychain__WritePasswordJob, key: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.QKeychain__Job_SetKey(@ptrCast(self.ptr), key_str);
    }

    /// Inherited from QKeychain::Job
    ///
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    pub fn EmitFinished(self: QKeychain__WritePasswordJob) void {
        qtc.QKeychain__Job_EmitFinished(@ptrCast(self.ptr));
    }

    /// Inherited from QKeychain::Job
    ///
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` param1: keychain_enums.Error `
    ///
    /// ` errorString: []const u8 `
    ///
    pub fn EmitFinishedWithError(self: QKeychain__WritePasswordJob, param1: i32, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.QKeychain__Job_EmitFinishedWithError(@ptrCast(self.ptr), @bitCast(param1), errorString_str);
    }

    /// Inherited from QKeychain::Job
    ///
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` param1: QKeychain__Job `
    ///
    pub fn Finished(self: QKeychain__WritePasswordJob, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QKeychain__Job;
        qtc.QKeychain__Job_Finished(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QKeychain::Job
    ///
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` callback: *const fn (self: QKeychain__WritePasswordJob, param1: QKeychain__Job) callconv(.c) void `
    ///
    pub fn OnFinished(self: QKeychain__WritePasswordJob, callback: *const fn (QKeychain__WritePasswordJob, QKeychain__Job) callconv(.c) void) void {
        qtc.QKeychain__Job_Connect_Finished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QKeychain__WritePasswordJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qkeychain__writepasswordjob.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QKeychain__WritePasswordJob, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    pub fn IsWidgetType(self: QKeychain__WritePasswordJob) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    pub fn IsWindowType(self: QKeychain__WritePasswordJob) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    pub fn IsQuickItemType(self: QKeychain__WritePasswordJob) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    pub fn SignalsBlocked(self: QKeychain__WritePasswordJob) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QKeychain__WritePasswordJob, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    pub fn Thread(self: QKeychain__WritePasswordJob) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QKeychain__WritePasswordJob, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QKeychain__WritePasswordJob, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QKeychain__WritePasswordJob, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QKeychain__WritePasswordJob, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QKeychain__WritePasswordJob, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QKeychain__WritePasswordJob, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qkeychain__writepasswordjob.Children: Memory allocation failed");
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
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QKeychain__WritePasswordJob, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QKeychain__WritePasswordJob, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QKeychain__WritePasswordJob, obj: anytype) void {
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
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QKeychain__WritePasswordJob, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QKeychain__WritePasswordJob `
    ///
    pub fn Disconnect3(self: QKeychain__WritePasswordJob) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QKeychain__WritePasswordJob, receiver: anytype) bool {
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
    /// ` self: QKeychain__WritePasswordJob `
    ///
    pub fn DumpObjectTree(self: QKeychain__WritePasswordJob) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    pub fn DumpObjectInfo(self: QKeychain__WritePasswordJob) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QKeychain__WritePasswordJob, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QKeychain__WritePasswordJob, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QKeychain__WritePasswordJob, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qkeychain__writepasswordjob.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qkeychain__writepasswordjob.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QKeychain__WritePasswordJob `
    ///
    pub fn BindingStorage(self: QKeychain__WritePasswordJob) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    pub fn BindingStorage2(self: QKeychain__WritePasswordJob) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    pub fn Destroyed(self: QKeychain__WritePasswordJob) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` callback: *const fn (self: QKeychain__WritePasswordJob) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QKeychain__WritePasswordJob, callback: *const fn (QKeychain__WritePasswordJob) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    pub fn Parent(self: QKeychain__WritePasswordJob) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QKeychain__WritePasswordJob, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    pub fn DeleteLater(self: QKeychain__WritePasswordJob) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QKeychain__WritePasswordJob, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QKeychain__WritePasswordJob, time: i64, timerType: i32) i32 {
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
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QKeychain__WritePasswordJob, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QKeychain__WritePasswordJob, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QKeychain__WritePasswordJob, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QKeychain__WritePasswordJob, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QKeychain__WritePasswordJob, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QKeychain__WritePasswordJob, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` callback: *const fn (self: QKeychain__WritePasswordJob, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QKeychain__WritePasswordJob, callback: *const fn (QKeychain__WritePasswordJob, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QKeychain__WritePasswordJob, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QKeychain__WritePasswordJob_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QKeychain__WritePasswordJob, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QKeychain__WritePasswordJob_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeychain__WritePasswordJob`
    ///
    /// ` callback: *const fn (self: QKeychain__WritePasswordJob, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QKeychain__WritePasswordJob, callback: *const fn (QKeychain__WritePasswordJob, QEvent) callconv(.c) bool) void {
        qtc.QKeychain__WritePasswordJob_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QKeychain__WritePasswordJob, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QKeychain__WritePasswordJob_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QKeychain__WritePasswordJob, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QKeychain__WritePasswordJob_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeychain__WritePasswordJob`
    ///
    /// ` callback: *const fn (self: QKeychain__WritePasswordJob, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QKeychain__WritePasswordJob, callback: *const fn (QKeychain__WritePasswordJob, QObject, QEvent) callconv(.c) bool) void {
        qtc.QKeychain__WritePasswordJob_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QKeychain__WritePasswordJob, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QKeychain__WritePasswordJob_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QKeychain__WritePasswordJob, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QKeychain__WritePasswordJob_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeychain__WritePasswordJob`
    ///
    /// ` callback: *const fn (self: QKeychain__WritePasswordJob, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QKeychain__WritePasswordJob, callback: *const fn (QKeychain__WritePasswordJob, QTimerEvent) callconv(.c) void) void {
        qtc.QKeychain__WritePasswordJob_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QKeychain__WritePasswordJob, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QKeychain__WritePasswordJob_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperChildEvent` instead
    ///
    pub const QBaseChildEvent = SuperChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QKeychain__WritePasswordJob, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QKeychain__WritePasswordJob_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeychain__WritePasswordJob`
    ///
    /// ` callback: *const fn (self: QKeychain__WritePasswordJob, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QKeychain__WritePasswordJob, callback: *const fn (QKeychain__WritePasswordJob, QChildEvent) callconv(.c) void) void {
        qtc.QKeychain__WritePasswordJob_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QKeychain__WritePasswordJob, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QKeychain__WritePasswordJob_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperCustomEvent` instead
    ///
    pub const QBaseCustomEvent = SuperCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QKeychain__WritePasswordJob, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QKeychain__WritePasswordJob_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeychain__WritePasswordJob`
    ///
    /// ` callback: *const fn (self: QKeychain__WritePasswordJob, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QKeychain__WritePasswordJob, callback: *const fn (QKeychain__WritePasswordJob, QEvent) callconv(.c) void) void {
        qtc.QKeychain__WritePasswordJob_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QKeychain__WritePasswordJob, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QKeychain__WritePasswordJob_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperConnectNotify` instead
    ///
    pub const QBaseConnectNotify = SuperConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QKeychain__WritePasswordJob, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QKeychain__WritePasswordJob_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeychain__WritePasswordJob`
    ///
    /// ` callback: *const fn (self: QKeychain__WritePasswordJob, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QKeychain__WritePasswordJob, callback: *const fn (QKeychain__WritePasswordJob, QMetaMethod) callconv(.c) void) void {
        qtc.QKeychain__WritePasswordJob_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QKeychain__WritePasswordJob, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QKeychain__WritePasswordJob_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperDisconnectNotify` instead
    ///
    pub const QBaseDisconnectNotify = SuperDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QKeychain__WritePasswordJob, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QKeychain__WritePasswordJob_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeychain__WritePasswordJob`
    ///
    /// ` callback: *const fn (self: QKeychain__WritePasswordJob, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QKeychain__WritePasswordJob, callback: *const fn (QKeychain__WritePasswordJob, QMetaMethod) callconv(.c) void) void {
        qtc.QKeychain__WritePasswordJob_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QKeychain::Job
    ///
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    pub fn DoStart(self: QKeychain__WritePasswordJob) void {
        qtc.QKeychain__WritePasswordJob_DoStart(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperDoStart` instead
    ///
    pub const QBaseDoStart = SuperDoStart;

    /// Inherited from QKeychain::Job
    ///
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    pub fn SuperDoStart(self: QKeychain__WritePasswordJob) void {
        qtc.QKeychain__WritePasswordJob_SuperDoStart(@ptrCast(self.ptr));
    }

    /// Inherited from QKeychain::Job
    ///
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeychain__WritePasswordJob`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDoStart(self: QKeychain__WritePasswordJob, callback: *const fn () callconv(.c) void) void {
        qtc.QKeychain__WritePasswordJob_OnDoStart(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    pub fn Sender(self: QKeychain__WritePasswordJob) QObject {
        return .{ .ptr = qtc.QKeychain__WritePasswordJob_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSender` instead
    ///
    pub const QBaseSender = SuperSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    pub fn SuperSender(self: QKeychain__WritePasswordJob) QObject {
        return .{ .ptr = qtc.QKeychain__WritePasswordJob_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeychain__WritePasswordJob`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QKeychain__WritePasswordJob, callback: *const fn () callconv(.c) QObject) void {
        qtc.QKeychain__WritePasswordJob_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    pub fn SenderSignalIndex(self: QKeychain__WritePasswordJob) i32 {
        return qtc.QKeychain__WritePasswordJob_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSenderSignalIndex` instead
    ///
    pub const QBaseSenderSignalIndex = SuperSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    pub fn SuperSenderSignalIndex(self: QKeychain__WritePasswordJob) i32 {
        return qtc.QKeychain__WritePasswordJob_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeychain__WritePasswordJob`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QKeychain__WritePasswordJob, callback: *const fn () callconv(.c) i32) void {
        qtc.QKeychain__WritePasswordJob_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QKeychain__WritePasswordJob, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QKeychain__WritePasswordJob_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `SuperReceivers` instead
    ///
    pub const QBaseReceivers = SuperReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QKeychain__WritePasswordJob, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QKeychain__WritePasswordJob_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeychain__WritePasswordJob`
    ///
    /// ` callback: *const fn (self: QKeychain__WritePasswordJob, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QKeychain__WritePasswordJob, callback: *const fn (QKeychain__WritePasswordJob, [*:0]const u8) callconv(.c) i32) void {
        qtc.QKeychain__WritePasswordJob_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QKeychain__WritePasswordJob, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QKeychain__WritePasswordJob_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsSignalConnected` instead
    ///
    pub const QBaseIsSignalConnected = SuperIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QKeychain__WritePasswordJob, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QKeychain__WritePasswordJob_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeychain__WritePasswordJob`
    ///
    /// ` callback: *const fn (self: QKeychain__WritePasswordJob, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QKeychain__WritePasswordJob, callback: *const fn (QKeychain__WritePasswordJob, QMetaMethod) callconv(.c) bool) void {
        qtc.QKeychain__WritePasswordJob_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    /// ` callback: *const fn (self: QKeychain__WritePasswordJob, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QKeychain__WritePasswordJob, callback: *const fn (QKeychain__WritePasswordJob, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QKeychain__WritePasswordJob `
    ///
    pub fn Delete(self: QKeychain__WritePasswordJob) void {
        qtc.QKeychain__WritePasswordJob_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
pub const QKeychain__DeletePasswordJob = extern struct {
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QKeychain__DeletePasswordJob,

    pub const _is_QKeychain__DeletePasswordJob = {};
    pub const _is_QKeychain__Job = {};
    pub const _is_QObject = {};

    /// New constructs a new QKeychain::DeletePasswordJob object.
    ///
    /// ## Parameter(s):
    ///
    /// ` service: []const u8 `
    ///
    pub fn New(service: []const u8) QKeychain__DeletePasswordJob {
        const service_str = qtc.libqt_string{
            .len = service.len,
            .data = service.ptr,
        };
        return .{ .ptr = qtc.QKeychain__DeletePasswordJob_new(service_str) };
    }

    /// New2 constructs a new QKeychain::DeletePasswordJob object.
    ///
    /// ## Parameter(s):
    ///
    /// ` service: []const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(service: []const u8, parent: anytype) QKeychain__DeletePasswordJob {
        const service_str = qtc.libqt_string{
            .len = service.len,
            .data = service.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QKeychain__DeletePasswordJob_new2(service_str, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    pub fn MetaObject(self: QKeychain__DeletePasswordJob) QMetaObject {
        return .{ .ptr = qtc.QKeychain__DeletePasswordJob_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QKeychain__DeletePasswordJob, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QKeychain__DeletePasswordJob_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    pub fn SuperMetaObject(self: QKeychain__DeletePasswordJob) QMetaObject {
        return .{ .ptr = qtc.QKeychain__DeletePasswordJob_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QKeychain__DeletePasswordJob, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QKeychain__DeletePasswordJob_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` callback: *const fn (self: QKeychain__DeletePasswordJob, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QKeychain__DeletePasswordJob, callback: *const fn (QKeychain__DeletePasswordJob, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QKeychain__DeletePasswordJob_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QKeychain__DeletePasswordJob, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QKeychain__DeletePasswordJob_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QKeychain__DeletePasswordJob, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QKeychain__DeletePasswordJob_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` callback: *const fn (self: QKeychain__DeletePasswordJob, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QKeychain__DeletePasswordJob, callback: *const fn (QKeychain__DeletePasswordJob, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QKeychain__DeletePasswordJob_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QKeychain__DeletePasswordJob, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QKeychain__DeletePasswordJob_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qkeychain__deletepasswordjob.Tr: Memory allocation failed");
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
    pub fn Tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qkeychain__deletepasswordjob.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qkeychain__deletepasswordjob.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QKeychain::Job
    ///
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    pub fn Settings(self: QKeychain__DeletePasswordJob) QSettings {
        return .{ .ptr = qtc.QKeychain__Job_Settings(@ptrCast(self.ptr)) };
    }

    /// Inherited from QKeychain::Job
    ///
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` settings: QSettings `
    ///
    pub fn SetSettings(self: QKeychain__DeletePasswordJob, settings: anytype) void {
        comptime _ = @TypeOf(settings)._is_QSettings;
        qtc.QKeychain__Job_SetSettings(@ptrCast(self.ptr), @ptrCast(settings.ptr));
    }

    /// Inherited from QKeychain::Job
    ///
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    pub fn Start(self: QKeychain__DeletePasswordJob) void {
        qtc.QKeychain__Job_Start(@ptrCast(self.ptr));
    }

    /// Inherited from QKeychain::Job
    ///
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Service(self: QKeychain__DeletePasswordJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QKeychain__Job_Service(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qkeychain__deletepasswordjob.Service: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QKeychain::Job
    ///
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ## Returns:
    ///
    /// ` keychain_enums.Error `
    ///
    pub fn Error(self: QKeychain__DeletePasswordJob) i32 {
        return qtc.QKeychain__Job_Error(@ptrCast(self.ptr));
    }

    /// Inherited from QKeychain::Job
    ///
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: QKeychain__DeletePasswordJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QKeychain__Job_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qkeychain__deletepasswordjob.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QKeychain::Job
    ///
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    pub fn AutoDelete(self: QKeychain__DeletePasswordJob) bool {
        return qtc.QKeychain__Job_AutoDelete(@ptrCast(self.ptr));
    }

    /// Inherited from QKeychain::Job
    ///
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` autoDelete: bool `
    ///
    pub fn SetAutoDelete(self: QKeychain__DeletePasswordJob, autoDelete: bool) void {
        qtc.QKeychain__Job_SetAutoDelete(@ptrCast(self.ptr), autoDelete);
    }

    /// Inherited from QKeychain::Job
    ///
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    pub fn InsecureFallback(self: QKeychain__DeletePasswordJob) bool {
        return qtc.QKeychain__Job_InsecureFallback(@ptrCast(self.ptr));
    }

    /// Inherited from QKeychain::Job
    ///
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` insecureFallback: bool `
    ///
    pub fn SetInsecureFallback(self: QKeychain__DeletePasswordJob, insecureFallback: bool) void {
        qtc.QKeychain__Job_SetInsecureFallback(@ptrCast(self.ptr), insecureFallback);
    }

    /// Inherited from QKeychain::Job
    ///
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Key(self: QKeychain__DeletePasswordJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QKeychain__Job_Key(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qkeychain__deletepasswordjob.Key: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QKeychain::Job
    ///
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` key: []const u8 `
    ///
    pub fn SetKey(self: QKeychain__DeletePasswordJob, key: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.QKeychain__Job_SetKey(@ptrCast(self.ptr), key_str);
    }

    /// Inherited from QKeychain::Job
    ///
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    pub fn EmitFinished(self: QKeychain__DeletePasswordJob) void {
        qtc.QKeychain__Job_EmitFinished(@ptrCast(self.ptr));
    }

    /// Inherited from QKeychain::Job
    ///
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` param1: keychain_enums.Error `
    ///
    /// ` errorString: []const u8 `
    ///
    pub fn EmitFinishedWithError(self: QKeychain__DeletePasswordJob, param1: i32, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.QKeychain__Job_EmitFinishedWithError(@ptrCast(self.ptr), @bitCast(param1), errorString_str);
    }

    /// Inherited from QKeychain::Job
    ///
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` param1: QKeychain__Job `
    ///
    pub fn Finished(self: QKeychain__DeletePasswordJob, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QKeychain__Job;
        qtc.QKeychain__Job_Finished(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QKeychain::Job
    ///
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` callback: *const fn (self: QKeychain__DeletePasswordJob, param1: QKeychain__Job) callconv(.c) void `
    ///
    pub fn OnFinished(self: QKeychain__DeletePasswordJob, callback: *const fn (QKeychain__DeletePasswordJob, QKeychain__Job) callconv(.c) void) void {
        qtc.QKeychain__Job_Connect_Finished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QKeychain__DeletePasswordJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qkeychain__deletepasswordjob.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QKeychain__DeletePasswordJob, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    pub fn IsWidgetType(self: QKeychain__DeletePasswordJob) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    pub fn IsWindowType(self: QKeychain__DeletePasswordJob) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    pub fn IsQuickItemType(self: QKeychain__DeletePasswordJob) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    pub fn SignalsBlocked(self: QKeychain__DeletePasswordJob) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QKeychain__DeletePasswordJob, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    pub fn Thread(self: QKeychain__DeletePasswordJob) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QKeychain__DeletePasswordJob, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QKeychain__DeletePasswordJob, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QKeychain__DeletePasswordJob, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QKeychain__DeletePasswordJob, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QKeychain__DeletePasswordJob, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QKeychain__DeletePasswordJob, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qkeychain__deletepasswordjob.Children: Memory allocation failed");
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
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QKeychain__DeletePasswordJob, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QKeychain__DeletePasswordJob, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QKeychain__DeletePasswordJob, obj: anytype) void {
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
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QKeychain__DeletePasswordJob, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    pub fn Disconnect3(self: QKeychain__DeletePasswordJob) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QKeychain__DeletePasswordJob, receiver: anytype) bool {
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
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    pub fn DumpObjectTree(self: QKeychain__DeletePasswordJob) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    pub fn DumpObjectInfo(self: QKeychain__DeletePasswordJob) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QKeychain__DeletePasswordJob, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QKeychain__DeletePasswordJob, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QKeychain__DeletePasswordJob, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qkeychain__deletepasswordjob.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qkeychain__deletepasswordjob.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    pub fn BindingStorage(self: QKeychain__DeletePasswordJob) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    pub fn BindingStorage2(self: QKeychain__DeletePasswordJob) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    pub fn Destroyed(self: QKeychain__DeletePasswordJob) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` callback: *const fn (self: QKeychain__DeletePasswordJob) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QKeychain__DeletePasswordJob, callback: *const fn (QKeychain__DeletePasswordJob) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    pub fn Parent(self: QKeychain__DeletePasswordJob) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QKeychain__DeletePasswordJob, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    pub fn DeleteLater(self: QKeychain__DeletePasswordJob) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QKeychain__DeletePasswordJob, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QKeychain__DeletePasswordJob, time: i64, timerType: i32) i32 {
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
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QKeychain__DeletePasswordJob, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QKeychain__DeletePasswordJob, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QKeychain__DeletePasswordJob, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QKeychain__DeletePasswordJob, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QKeychain__DeletePasswordJob, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QKeychain__DeletePasswordJob, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` callback: *const fn (self: QKeychain__DeletePasswordJob, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QKeychain__DeletePasswordJob, callback: *const fn (QKeychain__DeletePasswordJob, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QKeychain__DeletePasswordJob, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QKeychain__DeletePasswordJob_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QKeychain__DeletePasswordJob, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QKeychain__DeletePasswordJob_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeychain__DeletePasswordJob`
    ///
    /// ` callback: *const fn (self: QKeychain__DeletePasswordJob, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QKeychain__DeletePasswordJob, callback: *const fn (QKeychain__DeletePasswordJob, QEvent) callconv(.c) bool) void {
        qtc.QKeychain__DeletePasswordJob_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QKeychain__DeletePasswordJob, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QKeychain__DeletePasswordJob_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QKeychain__DeletePasswordJob, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QKeychain__DeletePasswordJob_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeychain__DeletePasswordJob`
    ///
    /// ` callback: *const fn (self: QKeychain__DeletePasswordJob, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QKeychain__DeletePasswordJob, callback: *const fn (QKeychain__DeletePasswordJob, QObject, QEvent) callconv(.c) bool) void {
        qtc.QKeychain__DeletePasswordJob_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QKeychain__DeletePasswordJob, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QKeychain__DeletePasswordJob_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QKeychain__DeletePasswordJob, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QKeychain__DeletePasswordJob_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeychain__DeletePasswordJob`
    ///
    /// ` callback: *const fn (self: QKeychain__DeletePasswordJob, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QKeychain__DeletePasswordJob, callback: *const fn (QKeychain__DeletePasswordJob, QTimerEvent) callconv(.c) void) void {
        qtc.QKeychain__DeletePasswordJob_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QKeychain__DeletePasswordJob, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QKeychain__DeletePasswordJob_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperChildEvent` instead
    ///
    pub const QBaseChildEvent = SuperChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QKeychain__DeletePasswordJob, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QKeychain__DeletePasswordJob_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeychain__DeletePasswordJob`
    ///
    /// ` callback: *const fn (self: QKeychain__DeletePasswordJob, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QKeychain__DeletePasswordJob, callback: *const fn (QKeychain__DeletePasswordJob, QChildEvent) callconv(.c) void) void {
        qtc.QKeychain__DeletePasswordJob_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QKeychain__DeletePasswordJob, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QKeychain__DeletePasswordJob_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperCustomEvent` instead
    ///
    pub const QBaseCustomEvent = SuperCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QKeychain__DeletePasswordJob, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QKeychain__DeletePasswordJob_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeychain__DeletePasswordJob`
    ///
    /// ` callback: *const fn (self: QKeychain__DeletePasswordJob, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QKeychain__DeletePasswordJob, callback: *const fn (QKeychain__DeletePasswordJob, QEvent) callconv(.c) void) void {
        qtc.QKeychain__DeletePasswordJob_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QKeychain__DeletePasswordJob, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QKeychain__DeletePasswordJob_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperConnectNotify` instead
    ///
    pub const QBaseConnectNotify = SuperConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QKeychain__DeletePasswordJob, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QKeychain__DeletePasswordJob_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeychain__DeletePasswordJob`
    ///
    /// ` callback: *const fn (self: QKeychain__DeletePasswordJob, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QKeychain__DeletePasswordJob, callback: *const fn (QKeychain__DeletePasswordJob, QMetaMethod) callconv(.c) void) void {
        qtc.QKeychain__DeletePasswordJob_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QKeychain__DeletePasswordJob, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QKeychain__DeletePasswordJob_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperDisconnectNotify` instead
    ///
    pub const QBaseDisconnectNotify = SuperDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QKeychain__DeletePasswordJob, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QKeychain__DeletePasswordJob_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeychain__DeletePasswordJob`
    ///
    /// ` callback: *const fn (self: QKeychain__DeletePasswordJob, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QKeychain__DeletePasswordJob, callback: *const fn (QKeychain__DeletePasswordJob, QMetaMethod) callconv(.c) void) void {
        qtc.QKeychain__DeletePasswordJob_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QKeychain::Job
    ///
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    pub fn DoStart(self: QKeychain__DeletePasswordJob) void {
        qtc.QKeychain__DeletePasswordJob_DoStart(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperDoStart` instead
    ///
    pub const QBaseDoStart = SuperDoStart;

    /// Inherited from QKeychain::Job
    ///
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    pub fn SuperDoStart(self: QKeychain__DeletePasswordJob) void {
        qtc.QKeychain__DeletePasswordJob_SuperDoStart(@ptrCast(self.ptr));
    }

    /// Inherited from QKeychain::Job
    ///
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeychain__DeletePasswordJob`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDoStart(self: QKeychain__DeletePasswordJob, callback: *const fn () callconv(.c) void) void {
        qtc.QKeychain__DeletePasswordJob_OnDoStart(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    pub fn Sender(self: QKeychain__DeletePasswordJob) QObject {
        return .{ .ptr = qtc.QKeychain__DeletePasswordJob_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSender` instead
    ///
    pub const QBaseSender = SuperSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    pub fn SuperSender(self: QKeychain__DeletePasswordJob) QObject {
        return .{ .ptr = qtc.QKeychain__DeletePasswordJob_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeychain__DeletePasswordJob`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QKeychain__DeletePasswordJob, callback: *const fn () callconv(.c) QObject) void {
        qtc.QKeychain__DeletePasswordJob_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    pub fn SenderSignalIndex(self: QKeychain__DeletePasswordJob) i32 {
        return qtc.QKeychain__DeletePasswordJob_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSenderSignalIndex` instead
    ///
    pub const QBaseSenderSignalIndex = SuperSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    pub fn SuperSenderSignalIndex(self: QKeychain__DeletePasswordJob) i32 {
        return qtc.QKeychain__DeletePasswordJob_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeychain__DeletePasswordJob`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QKeychain__DeletePasswordJob, callback: *const fn () callconv(.c) i32) void {
        qtc.QKeychain__DeletePasswordJob_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QKeychain__DeletePasswordJob, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QKeychain__DeletePasswordJob_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `SuperReceivers` instead
    ///
    pub const QBaseReceivers = SuperReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QKeychain__DeletePasswordJob, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QKeychain__DeletePasswordJob_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeychain__DeletePasswordJob`
    ///
    /// ` callback: *const fn (self: QKeychain__DeletePasswordJob, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QKeychain__DeletePasswordJob, callback: *const fn (QKeychain__DeletePasswordJob, [*:0]const u8) callconv(.c) i32) void {
        qtc.QKeychain__DeletePasswordJob_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QKeychain__DeletePasswordJob, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QKeychain__DeletePasswordJob_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsSignalConnected` instead
    ///
    pub const QBaseIsSignalConnected = SuperIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QKeychain__DeletePasswordJob, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QKeychain__DeletePasswordJob_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeychain__DeletePasswordJob`
    ///
    /// ` callback: *const fn (self: QKeychain__DeletePasswordJob, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QKeychain__DeletePasswordJob, callback: *const fn (QKeychain__DeletePasswordJob, QMetaMethod) callconv(.c) bool) void {
        qtc.QKeychain__DeletePasswordJob_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    /// ` callback: *const fn (self: QKeychain__DeletePasswordJob, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QKeychain__DeletePasswordJob, callback: *const fn (QKeychain__DeletePasswordJob, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QKeychain__DeletePasswordJob `
    ///
    pub fn Delete(self: QKeychain__DeletePasswordJob) void {
        qtc.QKeychain__DeletePasswordJob_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
pub const QKeychain = extern struct {
    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QKeychain,

    pub const _is_QKeychain = {};

    /// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
    ///
    pub fn IsAvailable() bool {
        return qtc.QKeychain_IsAvailable();
    }
};

/// ### [Upstream resources](https://github.com/frankosterfeld/qtkeychain)
pub const enums = struct {
    pub const Error = enum(i32) {
        pub const NoError: i32 = 0;
        pub const EntryNotFound: i32 = 1;
        pub const CouldNotDeleteEntry: i32 = 2;
        pub const AccessDeniedByUser: i32 = 3;
        pub const AccessDenied: i32 = 4;
        pub const NoBackendAvailable: i32 = 5;
        pub const NotImplemented: i32 = 6;
        pub const OtherError: i32 = 7;
    };
};
