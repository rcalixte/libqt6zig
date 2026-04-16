const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const Attica__PlatformDependentV2 = @import("libqt6").Attica__PlatformDependentV2;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QEvent = @import("libqt6").QEvent;
const QIODevice = @import("libqt6").QIODevice;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QNetworkAccessManager = @import("libqt6").QNetworkAccessManager;
const QNetworkReply = @import("libqt6").QNetworkReply;
const QNetworkRequest = @import("libqt6").QNetworkRequest;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/attica-platformdependentv3.html)
pub const Attica__PlatformDependentV3 = extern struct {
    /// ### [Upstream resources](https://api.kde.org/attica-platformdependentv3.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Attica__PlatformDependentV3,

    pub const _is_Attica__PlatformDependentV3 = {};
    pub const _is_QObject = {};
    pub const _is_Attica__PlatformDependentV2 = {};
    pub const _is_Attica__PlatformDependent = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    pub fn MetaObject(self: Attica__PlatformDependentV3) QMetaObject {
        return .{ .ptr = qtc.Attica__PlatformDependentV3_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: Attica__PlatformDependentV3, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Attica__PlatformDependentV3_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: Attica__PlatformDependentV3, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Attica__PlatformDependentV3_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__platformdependentv3.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-platformdependentv3.html#isReady)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    pub fn IsReady(self: Attica__PlatformDependentV3) bool {
        return qtc.Attica__PlatformDependentV3_IsReady(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-platformdependentv3.html#readyChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    pub fn ReadyChanged(self: Attica__PlatformDependentV3) void {
        qtc.Attica__PlatformDependentV3_ReadyChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-platformdependentv3.html#readyChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` callback: *const fn (self: Attica__PlatformDependentV3) callconv(.c) void `
    ///
    pub fn OnReadyChanged(self: Attica__PlatformDependentV3, callback: *const fn (Attica__PlatformDependentV3) callconv(.c) void) void {
        qtc.Attica__PlatformDependentV3_Connect_ReadyChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__platformdependentv3.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__platformdependentv3.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: Attica__PlatformDependentV3, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: Attica__PlatformDependentV3, watched: anytype, event: anytype) bool {
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
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: Attica__PlatformDependentV3, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__platformdependentv3.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: Attica__PlatformDependentV3, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    pub fn IsWidgetType(self: Attica__PlatformDependentV3) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    pub fn IsWindowType(self: Attica__PlatformDependentV3) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    pub fn IsQuickItemType(self: Attica__PlatformDependentV3) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    pub fn SignalsBlocked(self: Attica__PlatformDependentV3) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: Attica__PlatformDependentV3, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    pub fn Thread(self: Attica__PlatformDependentV3) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: Attica__PlatformDependentV3, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: Attica__PlatformDependentV3, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: Attica__PlatformDependentV3, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: Attica__PlatformDependentV3, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: Attica__PlatformDependentV3, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: Attica__PlatformDependentV3, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("attica__platformdependentv3.Children: Memory allocation failed");
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
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: Attica__PlatformDependentV3, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: Attica__PlatformDependentV3, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: Attica__PlatformDependentV3, obj: anytype) void {
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
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: Attica__PlatformDependentV3, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: Attica__PlatformDependentV3 `
    ///
    pub fn Disconnect3(self: Attica__PlatformDependentV3) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: Attica__PlatformDependentV3, receiver: anytype) bool {
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
    /// ` self: Attica__PlatformDependentV3 `
    ///
    pub fn DumpObjectTree(self: Attica__PlatformDependentV3) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    pub fn DumpObjectInfo(self: Attica__PlatformDependentV3) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: Attica__PlatformDependentV3, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: Attica__PlatformDependentV3, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: Attica__PlatformDependentV3, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("attica__platformdependentv3.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("attica__platformdependentv3.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: Attica__PlatformDependentV3 `
    ///
    pub fn BindingStorage(self: Attica__PlatformDependentV3) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    pub fn BindingStorage2(self: Attica__PlatformDependentV3) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    pub fn Destroyed(self: Attica__PlatformDependentV3) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` callback: *const fn (self: Attica__PlatformDependentV3) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: Attica__PlatformDependentV3, callback: *const fn (Attica__PlatformDependentV3) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    pub fn Parent(self: Attica__PlatformDependentV3) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: Attica__PlatformDependentV3, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    pub fn DeleteLater(self: Attica__PlatformDependentV3) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: Attica__PlatformDependentV3, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: Attica__PlatformDependentV3, time: i64, timerType: i32) i32 {
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
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: Attica__PlatformDependentV3, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: Attica__PlatformDependentV3, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: Attica__PlatformDependentV3, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: Attica__PlatformDependentV3, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: Attica__PlatformDependentV3, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: Attica__PlatformDependentV3, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` callback: *const fn (self: Attica__PlatformDependentV3, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: Attica__PlatformDependentV3, callback: *const fn (Attica__PlatformDependentV3, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from Attica::PlatformDependentV2
    ///
    /// ### [Upstream resources](https://api.kde.org/attica-platformdependentv2.html#deleteResource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` request: QNetworkRequest `
    ///
    pub fn DeleteResource(self: Attica__PlatformDependentV3, request: anytype) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        return .{ .ptr = qtc.Attica__PlatformDependentV2_DeleteResource(@ptrCast(self.ptr), @ptrCast(request.ptr)) };
    }

    /// Inherited from Attica::PlatformDependentV2
    ///
    /// ### [Upstream resources](https://api.kde.org/attica-platformdependentv2.html#put)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` request: QNetworkRequest `
    ///
    /// ` data: QIODevice `
    ///
    pub fn Put(self: Attica__PlatformDependentV3, request: anytype, data: anytype) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        comptime _ = @TypeOf(data)._is_QIODevice;
        return .{ .ptr = qtc.Attica__PlatformDependentV2_Put(@ptrCast(self.ptr), @ptrCast(request.ptr), @ptrCast(data.ptr)) };
    }

    /// Inherited from Attica::PlatformDependentV2
    ///
    /// ### [Upstream resources](https://api.kde.org/attica-platformdependentv2.html#put)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` request: QNetworkRequest `
    ///
    /// ` data: []u8 `
    ///
    pub fn Put2(self: Attica__PlatformDependentV3, request: anytype, data: []u8) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return .{ .ptr = qtc.Attica__PlatformDependentV2_Put2(@ptrCast(self.ptr), @ptrCast(request.ptr), data_str) };
    }

    /// Inherited from Attica::PlatformDependentV2
    ///
    /// ### [Upstream resources](https://api.kde.org/attica-platformdependentv2.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` param1: Attica__PlatformDependentV2 `
    ///
    pub fn OperatorAssign(self: Attica__PlatformDependentV3, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_Attica__PlatformDependentV2;
        qtc.Attica__PlatformDependentV2_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from Attica::PlatformDependent
    ///
    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#getDefaultProviderFiles)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn GetDefaultProviderFiles(self: Attica__PlatformDependentV3, allocator: std.mem.Allocator) []QUrl {
        const _arr: qtc.libqt_list = qtc.Attica__PlatformDependent_GetDefaultProviderFiles(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QUrl, _arr.len) catch @panic("attica__platformdependentv3.GetDefaultProviderFiles: Memory allocation failed");
        const _data: [*]QtC.QUrl = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from Attica::PlatformDependent
    ///
    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#addDefaultProviderFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` url: QUrl `
    ///
    pub fn AddDefaultProviderFile(self: Attica__PlatformDependentV3, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.Attica__PlatformDependent_AddDefaultProviderFile(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// Inherited from Attica::PlatformDependent
    ///
    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#removeDefaultProviderFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` url: QUrl `
    ///
    pub fn RemoveDefaultProviderFile(self: Attica__PlatformDependentV3, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.Attica__PlatformDependent_RemoveDefaultProviderFile(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// Inherited from Attica::PlatformDependent
    ///
    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#enableProvider)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` baseUrl: QUrl `
    ///
    /// ` enabled: bool `
    ///
    pub fn EnableProvider(self: Attica__PlatformDependentV3, baseUrl: anytype, enabled: bool) void {
        comptime _ = @TypeOf(baseUrl)._is_QUrl;
        qtc.Attica__PlatformDependent_EnableProvider(@ptrCast(self.ptr), @ptrCast(baseUrl.ptr), enabled);
    }

    /// Inherited from Attica::PlatformDependent
    ///
    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` baseUrl: QUrl `
    ///
    pub fn IsEnabled(self: Attica__PlatformDependentV3, baseUrl: anytype) bool {
        comptime _ = @TypeOf(baseUrl)._is_QUrl;
        return qtc.Attica__PlatformDependent_IsEnabled(@ptrCast(self.ptr), @ptrCast(baseUrl.ptr));
    }

    /// Inherited from Attica::PlatformDependent
    ///
    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#hasCredentials)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` baseUrl: QUrl `
    ///
    pub fn HasCredentials(self: Attica__PlatformDependentV3, baseUrl: anytype) bool {
        comptime _ = @TypeOf(baseUrl)._is_QUrl;
        return qtc.Attica__PlatformDependent_HasCredentials(@ptrCast(self.ptr), @ptrCast(baseUrl.ptr));
    }

    /// Inherited from Attica::PlatformDependent
    ///
    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#loadCredentials)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` baseUrl: QUrl `
    ///
    /// ` user: []const u8 `
    ///
    /// ` password: []const u8 `
    ///
    pub fn LoadCredentials(self: Attica__PlatformDependentV3, baseUrl: anytype, user: []const u8, password: []const u8) bool {
        comptime _ = @TypeOf(baseUrl)._is_QUrl;
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const password_str = qtc.libqt_string{
            .len = password.len,
            .data = password.ptr,
        };
        return qtc.Attica__PlatformDependent_LoadCredentials(@ptrCast(self.ptr), @ptrCast(baseUrl.ptr), user_str, password_str);
    }

    /// Inherited from Attica::PlatformDependent
    ///
    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#askForCredentials)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` baseUrl: QUrl `
    ///
    /// ` user: []const u8 `
    ///
    /// ` password: []const u8 `
    ///
    pub fn AskForCredentials(self: Attica__PlatformDependentV3, baseUrl: anytype, user: []const u8, password: []const u8) bool {
        comptime _ = @TypeOf(baseUrl)._is_QUrl;
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const password_str = qtc.libqt_string{
            .len = password.len,
            .data = password.ptr,
        };
        return qtc.Attica__PlatformDependent_AskForCredentials(@ptrCast(self.ptr), @ptrCast(baseUrl.ptr), user_str, password_str);
    }

    /// Inherited from Attica::PlatformDependent
    ///
    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#saveCredentials)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` baseUrl: QUrl `
    ///
    /// ` user: []const u8 `
    ///
    /// ` password: []const u8 `
    ///
    pub fn SaveCredentials(self: Attica__PlatformDependentV3, baseUrl: anytype, user: []const u8, password: []const u8) bool {
        comptime _ = @TypeOf(baseUrl)._is_QUrl;
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const password_str = qtc.libqt_string{
            .len = password.len,
            .data = password.ptr,
        };
        return qtc.Attica__PlatformDependent_SaveCredentials(@ptrCast(self.ptr), @ptrCast(baseUrl.ptr), user_str, password_str);
    }

    /// Inherited from Attica::PlatformDependent
    ///
    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#get)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` request: QNetworkRequest `
    ///
    pub fn Get(self: Attica__PlatformDependentV3, request: anytype) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        return .{ .ptr = qtc.Attica__PlatformDependent_Get(@ptrCast(self.ptr), @ptrCast(request.ptr)) };
    }

    /// Inherited from Attica::PlatformDependent
    ///
    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#post)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` request: QNetworkRequest `
    ///
    /// ` data: QIODevice `
    ///
    pub fn Post(self: Attica__PlatformDependentV3, request: anytype, data: anytype) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        comptime _ = @TypeOf(data)._is_QIODevice;
        return .{ .ptr = qtc.Attica__PlatformDependent_Post(@ptrCast(self.ptr), @ptrCast(request.ptr), @ptrCast(data.ptr)) };
    }

    /// Inherited from Attica::PlatformDependent
    ///
    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#post)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` request: QNetworkRequest `
    ///
    /// ` data: []u8 `
    ///
    pub fn Post2(self: Attica__PlatformDependentV3, request: anytype, data: []u8) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return .{ .ptr = qtc.Attica__PlatformDependent_Post2(@ptrCast(self.ptr), @ptrCast(request.ptr), data_str) };
    }

    /// Inherited from Attica::PlatformDependent
    ///
    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#setNam)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` nam: QNetworkAccessManager `
    ///
    pub fn SetNam(self: Attica__PlatformDependentV3, nam: anytype) void {
        comptime _ = @TypeOf(nam)._is_QNetworkAccessManager;
        qtc.Attica__PlatformDependent_SetNam(@ptrCast(self.ptr), @ptrCast(nam.ptr));
    }

    /// Inherited from Attica::PlatformDependent
    ///
    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#nam)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    pub fn Nam(self: Attica__PlatformDependentV3) QNetworkAccessManager {
        return .{ .ptr = qtc.Attica__PlatformDependent_Nam(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` callback: *const fn (self: Attica__PlatformDependentV3, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: Attica__PlatformDependentV3, callback: *const fn (Attica__PlatformDependentV3, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    pub fn Delete(self: Attica__PlatformDependentV3) void {
        qtc.Attica__PlatformDependentV3_Delete(@ptrCast(self.ptr));
    }
};
