const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const Accounts__Error = @import("libqt6").Accounts__Error;
const Accounts__Manager = @import("libqt6").Accounts__Manager;
const Accounts__Provider = @import("libqt6").Accounts__Provider;
const Accounts__Service = @import("libqt6").Accounts__Service;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const account_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Watch.html)
pub const Accounts__Watch = extern struct {
    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Watch.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Accounts__Watch,

    pub const _is_Accounts__Watch = {};
    pub const _is_QObject = {};

    /// New constructs a new Accounts::Watch object.
    ///
    pub fn New() Accounts__Watch {
        return .{ .ptr = qtc.Accounts__Watch_new() };
    }

    /// New2 constructs a new Accounts::Watch object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) Accounts__Watch {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.Accounts__Watch_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Watch `
    ///
    pub fn MetaObject(self: Accounts__Watch) QMetaObject {
        return .{ .ptr = qtc.Accounts__Watch_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Watch `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: Accounts__Watch, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.Accounts__Watch_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Accounts__Watch `
    ///
    pub fn SuperMetaObject(self: Accounts__Watch) QMetaObject {
        return .{ .ptr = qtc.Accounts__Watch_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Watch `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: Accounts__Watch, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Accounts__Watch_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Watch `
    ///
    /// ` callback: *const fn (self: Accounts__Watch, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: Accounts__Watch, callback: *const fn (Accounts__Watch, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.Accounts__Watch_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Watch `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: Accounts__Watch, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Accounts__Watch_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Watch `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: Accounts__Watch, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Accounts__Watch_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Watch `
    ///
    /// ` callback: *const fn (self: Accounts__Watch, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: Accounts__Watch, callback: *const fn (Accounts__Watch, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.Accounts__Watch_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Watch `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: Accounts__Watch, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Accounts__Watch_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts__watch.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Watch.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Watch `
    ///
    /// ` key: [:0]const u8 `
    ///
    pub fn Notify(self: Accounts__Watch, key: [:0]const u8) void {
        const key_Cstring = key.ptr;
        qtc.Accounts__Watch_Notify(@ptrCast(self.ptr), key_Cstring);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Watch.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Watch `
    ///
    /// ` callback: *const fn (self: Accounts__Watch, key: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnNotify(self: Accounts__Watch, callback: *const fn (Accounts__Watch, [*:0]const u8) callconv(.c) void) void {
        qtc.Accounts__Watch_Connect_Notify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts__watch.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts__watch.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Watch `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: Accounts__Watch, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts__watch.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Watch `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: Accounts__Watch, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Watch `
    ///
    pub fn IsWidgetType(self: Accounts__Watch) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Watch `
    ///
    pub fn IsWindowType(self: Accounts__Watch) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Watch `
    ///
    pub fn IsQuickItemType(self: Accounts__Watch) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Watch `
    ///
    pub fn SignalsBlocked(self: Accounts__Watch) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Watch `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: Accounts__Watch, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Watch `
    ///
    pub fn Thread(self: Accounts__Watch) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Watch `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: Accounts__Watch, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Watch `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: Accounts__Watch, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Watch `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: Accounts__Watch, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Watch `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: Accounts__Watch, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Watch `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: Accounts__Watch, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Watch `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: Accounts__Watch, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("accounts__watch.Children: Memory allocation failed");
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
    /// ` self: Accounts__Watch `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: Accounts__Watch, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Watch `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: Accounts__Watch, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Watch `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: Accounts__Watch, obj: anytype) void {
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
    /// ` self: Accounts__Watch `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: Accounts__Watch, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: Accounts__Watch `
    ///
    pub fn Disconnect3(self: Accounts__Watch) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Watch `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: Accounts__Watch, receiver: anytype) bool {
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
    /// ` self: Accounts__Watch `
    ///
    pub fn DumpObjectTree(self: Accounts__Watch) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Watch `
    ///
    pub fn DumpObjectInfo(self: Accounts__Watch) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Watch `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: Accounts__Watch, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: Accounts__Watch `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: Accounts__Watch, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Watch `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: Accounts__Watch, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("accounts__watch.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("accounts__watch.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: Accounts__Watch `
    ///
    pub fn BindingStorage(self: Accounts__Watch) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Watch `
    ///
    pub fn BindingStorage2(self: Accounts__Watch) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Watch `
    ///
    pub fn Destroyed(self: Accounts__Watch) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Watch `
    ///
    /// ` callback: *const fn (self: Accounts__Watch) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: Accounts__Watch, callback: *const fn (Accounts__Watch) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Watch `
    ///
    pub fn Parent(self: Accounts__Watch) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Watch `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: Accounts__Watch, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Watch `
    ///
    pub fn DeleteLater(self: Accounts__Watch) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Watch `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: Accounts__Watch, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Watch `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: Accounts__Watch, time: i64, timerType: i32) i32 {
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
    /// ` self: Accounts__Watch `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: Accounts__Watch, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: Accounts__Watch `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: Accounts__Watch, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Watch `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: Accounts__Watch, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: Accounts__Watch `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: Accounts__Watch, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: Accounts__Watch `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: Accounts__Watch, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: Accounts__Watch `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: Accounts__Watch, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Watch `
    ///
    /// ` callback: *const fn (self: Accounts__Watch, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: Accounts__Watch, callback: *const fn (Accounts__Watch, QObject) callconv(.c) void) void {
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
    /// ` self: Accounts__Watch `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: Accounts__Watch, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.Accounts__Watch_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: Accounts__Watch `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: Accounts__Watch, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.Accounts__Watch_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Watch`
    ///
    /// ` callback: *const fn (self: Accounts__Watch, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: Accounts__Watch, callback: *const fn (Accounts__Watch, QEvent) callconv(.c) bool) void {
        qtc.Accounts__Watch_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Watch `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: Accounts__Watch, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.Accounts__Watch_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: Accounts__Watch `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: Accounts__Watch, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.Accounts__Watch_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Watch`
    ///
    /// ` callback: *const fn (self: Accounts__Watch, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: Accounts__Watch, callback: *const fn (Accounts__Watch, QObject, QEvent) callconv(.c) bool) void {
        qtc.Accounts__Watch_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Watch `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: Accounts__Watch, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.Accounts__Watch_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: Accounts__Watch `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: Accounts__Watch, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.Accounts__Watch_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Watch`
    ///
    /// ` callback: *const fn (self: Accounts__Watch, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: Accounts__Watch, callback: *const fn (Accounts__Watch, QTimerEvent) callconv(.c) void) void {
        qtc.Accounts__Watch_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Watch `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: Accounts__Watch, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.Accounts__Watch_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: Accounts__Watch `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: Accounts__Watch, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.Accounts__Watch_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Watch`
    ///
    /// ` callback: *const fn (self: Accounts__Watch, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: Accounts__Watch, callback: *const fn (Accounts__Watch, QChildEvent) callconv(.c) void) void {
        qtc.Accounts__Watch_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Watch `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: Accounts__Watch, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.Accounts__Watch_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: Accounts__Watch `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: Accounts__Watch, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.Accounts__Watch_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Watch`
    ///
    /// ` callback: *const fn (self: Accounts__Watch, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: Accounts__Watch, callback: *const fn (Accounts__Watch, QEvent) callconv(.c) void) void {
        qtc.Accounts__Watch_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Watch `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: Accounts__Watch, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Accounts__Watch_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Accounts__Watch `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: Accounts__Watch, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Accounts__Watch_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Watch`
    ///
    /// ` callback: *const fn (self: Accounts__Watch, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: Accounts__Watch, callback: *const fn (Accounts__Watch, QMetaMethod) callconv(.c) void) void {
        qtc.Accounts__Watch_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Watch `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: Accounts__Watch, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Accounts__Watch_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Accounts__Watch `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: Accounts__Watch, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Accounts__Watch_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Watch`
    ///
    /// ` callback: *const fn (self: Accounts__Watch, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: Accounts__Watch, callback: *const fn (Accounts__Watch, QMetaMethod) callconv(.c) void) void {
        qtc.Accounts__Watch_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Watch `
    ///
    pub fn Sender(self: Accounts__Watch) QObject {
        return .{ .ptr = qtc.Accounts__Watch_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: Accounts__Watch `
    ///
    pub fn SuperSender(self: Accounts__Watch) QObject {
        return .{ .ptr = qtc.Accounts__Watch_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Watch`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: Accounts__Watch, callback: *const fn () callconv(.c) QObject) void {
        qtc.Accounts__Watch_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Watch `
    ///
    pub fn SenderSignalIndex(self: Accounts__Watch) i32 {
        return qtc.Accounts__Watch_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: Accounts__Watch `
    ///
    pub fn SuperSenderSignalIndex(self: Accounts__Watch) i32 {
        return qtc.Accounts__Watch_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Watch`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: Accounts__Watch, callback: *const fn () callconv(.c) i32) void {
        qtc.Accounts__Watch_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Watch `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: Accounts__Watch, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Accounts__Watch_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: Accounts__Watch `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: Accounts__Watch, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Accounts__Watch_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Watch`
    ///
    /// ` callback: *const fn (self: Accounts__Watch, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: Accounts__Watch, callback: *const fn (Accounts__Watch, [*:0]const u8) callconv(.c) i32) void {
        qtc.Accounts__Watch_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Watch `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: Accounts__Watch, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.Accounts__Watch_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Accounts__Watch `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: Accounts__Watch, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.Accounts__Watch_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Watch`
    ///
    /// ` callback: *const fn (self: Accounts__Watch, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: Accounts__Watch, callback: *const fn (Accounts__Watch, QMetaMethod) callconv(.c) bool) void {
        qtc.Accounts__Watch_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Watch `
    ///
    /// ` callback: *const fn (self: Accounts__Watch, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: Accounts__Watch, callback: *const fn (Accounts__Watch, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Watch.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Accounts__Watch `
    ///
    pub fn Delete(self: Accounts__Watch) void {
        qtc.Accounts__Watch_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
pub const Accounts__Account = extern struct {
    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Accounts__Account,

    pub const _is_Accounts__Account = {};
    pub const _is_QObject = {};

    /// New constructs a new Accounts::Account object.
    ///
    /// ## Parameter(s):
    ///
    /// ` manager: Accounts__Manager `
    ///
    /// ` provider: []const u8 `
    ///
    pub fn New(manager: anytype, provider: []const u8) Accounts__Account {
        comptime _ = @TypeOf(manager)._is_Accounts__Manager;
        const provider_str = qtc.libqt_string{
            .len = provider.len,
            .data = provider.ptr,
        };
        return .{ .ptr = qtc.Accounts__Account_new(@ptrCast(manager.ptr), provider_str) };
    }

    /// New2 constructs a new Accounts::Account object.
    ///
    /// ## Parameter(s):
    ///
    /// ` manager: Accounts__Manager `
    ///
    /// ` provider: []const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(manager: anytype, provider: []const u8, parent: anytype) Accounts__Account {
        comptime _ = @TypeOf(manager)._is_Accounts__Manager;
        const provider_str = qtc.libqt_string{
            .len = provider.len,
            .data = provider.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.Accounts__Account_new2(@ptrCast(manager.ptr), provider_str, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    pub fn MetaObject(self: Accounts__Account) QMetaObject {
        return .{ .ptr = qtc.Accounts__Account_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: Accounts__Account, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.Accounts__Account_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Accounts__Account `
    ///
    pub fn SuperMetaObject(self: Accounts__Account) QMetaObject {
        return .{ .ptr = qtc.Accounts__Account_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: Accounts__Account, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Accounts__Account_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` callback: *const fn (self: Accounts__Account, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: Accounts__Account, callback: *const fn (Accounts__Account, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.Accounts__Account_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: Accounts__Account, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Accounts__Account_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: Accounts__Account, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Accounts__Account_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` callback: *const fn (self: Accounts__Account, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: Accounts__Account, callback: *const fn (Accounts__Account, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.Accounts__Account_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: Accounts__Account, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Accounts__Account_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts__account.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` manager: Accounts__Manager `
    ///
    /// ` id: u32 `
    ///
    pub fn FromId(manager: anytype, id: u32) Accounts__Account {
        comptime _ = @TypeOf(manager)._is_Accounts__Manager;
        return .{ .ptr = qtc.Accounts__Account_FromId(@ptrCast(manager.ptr), @bitCast(id)) };
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    pub fn Id(self: Accounts__Account) u32 {
        return qtc.Accounts__Account_Id(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    pub fn Manager(self: Accounts__Account) Accounts__Manager {
        return .{ .ptr = qtc.Accounts__Account_Manager(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` serviceType: []const u8 `
    ///
    pub fn SupportsService(self: Accounts__Account, serviceType: []const u8) bool {
        const serviceType_str = qtc.libqt_string{
            .len = serviceType.len,
            .data = serviceType.ptr,
        };
        return qtc.Accounts__Account_SupportsService(@ptrCast(self.ptr), serviceType_str);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Services(self: Accounts__Account, allocator: std.mem.Allocator) []Accounts__Service {
        const _arr: qtc.libqt_list = qtc.Accounts__Account_Services(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Accounts__Service, _arr.len) catch @panic("accounts__account.Services: Memory allocation failed");
        const _data: [*]QtC.Accounts__Service = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn EnabledServices(self: Accounts__Account, allocator: std.mem.Allocator) []Accounts__Service {
        const _arr: qtc.libqt_list = qtc.Accounts__Account_EnabledServices(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Accounts__Service, _arr.len) catch @panic("accounts__account.EnabledServices: Memory allocation failed");
        const _data: [*]QtC.Accounts__Service = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    pub fn Enabled(self: Accounts__Account) bool {
        return qtc.Accounts__Account_Enabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    pub fn IsEnabled(self: Accounts__Account) bool {
        return qtc.Accounts__Account_IsEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetEnabled(self: Accounts__Account, enabled: bool) void {
        qtc.Accounts__Account_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    pub fn CredentialsId(self: Accounts__Account) u32 {
        return qtc.Accounts__Account_CredentialsId(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` id: u32 `
    ///
    pub fn SetCredentialsId(self: Accounts__Account, id: u32) void {
        qtc.Accounts__Account_SetCredentialsId(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DisplayName(self: Accounts__Account, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Accounts__Account_DisplayName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts__account.DisplayName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` displayName: []const u8 `
    ///
    pub fn SetDisplayName(self: Accounts__Account, displayName: []const u8) void {
        const displayName_str = qtc.libqt_string{
            .len = displayName.len,
            .data = displayName.ptr,
        };
        qtc.Accounts__Account_SetDisplayName(@ptrCast(self.ptr), displayName_str);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ProviderName(self: Accounts__Account, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Accounts__Account_ProviderName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts__account.ProviderName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    pub fn Provider(self: Accounts__Account) Accounts__Provider {
        return .{ .ptr = qtc.Accounts__Account_Provider(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    pub fn SelectService(self: Accounts__Account) void {
        qtc.Accounts__Account_SelectService(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    pub fn SelectedService(self: Accounts__Account) Accounts__Service {
        return .{ .ptr = qtc.Accounts__Account_SelectedService(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AllKeys(self: Accounts__Account, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.Accounts__Account_AllKeys(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("accounts__account.AllKeys: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("accounts__account.AllKeys: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` prefix: []const u8 `
    ///
    pub fn BeginGroup(self: Accounts__Account, prefix: []const u8) void {
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        qtc.Accounts__Account_BeginGroup(@ptrCast(self.ptr), prefix_str);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ChildGroups(self: Accounts__Account, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.Accounts__Account_ChildGroups(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("accounts__account.ChildGroups: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("accounts__account.ChildGroups: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ChildKeys(self: Accounts__Account, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.Accounts__Account_ChildKeys(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("accounts__account.ChildKeys: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("accounts__account.ChildKeys: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    pub fn Clear(self: Accounts__Account) void {
        qtc.Accounts__Account_Clear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` key: []const u8 `
    ///
    pub fn Contains(self: Accounts__Account, key: []const u8) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.Accounts__Account_Contains(@ptrCast(self.ptr), key_str);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    pub fn EndGroup(self: Accounts__Account) void {
        qtc.Accounts__Account_EndGroup(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Group(self: Accounts__Account, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Accounts__Account_Group(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts__account.Group: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    pub fn IsWritable(self: Accounts__Account) bool {
        return qtc.Accounts__Account_IsWritable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` key: []const u8 `
    ///
    pub fn Remove(self: Accounts__Account, key: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.Accounts__Account_Remove(@ptrCast(self.ptr), key_str);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` key: []const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetValue(self: Accounts__Account, key: []const u8, value: anytype) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.Accounts__Account_SetValue(@ptrCast(self.ptr), key_str, @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` key: []const u8 `
    ///
    pub fn Value(self: Accounts__Account, key: []const u8) QVariant {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.Accounts__Account_Value(@ptrCast(self.ptr), key_str) };
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` key: []const u8 `
    ///
    /// ` value: QVariant `
    ///
    /// ## Returns:
    ///
    /// ` account_enums.SettingSource `
    ///
    pub fn Value2(self: Accounts__Account, key: []const u8, value: anytype) i32 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.Accounts__Account_Value2(@ptrCast(self.ptr), key_str, @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: []const u8 `
    ///
    pub fn ValueAsString(self: Accounts__Account, allocator: std.mem.Allocator, key: []const u8) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var _str = qtc.Accounts__Account_ValueAsString(@ptrCast(self.ptr), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts__account.ValueAsString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` key: []const u8 `
    ///
    pub fn ValueAsInt(self: Accounts__Account, key: []const u8) i32 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.Accounts__Account_ValueAsInt(@ptrCast(self.ptr), key_str);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` key: []const u8 `
    ///
    pub fn ValueAsUInt64(self: Accounts__Account, key: []const u8) u64 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.Accounts__Account_ValueAsUInt64(@ptrCast(self.ptr), key_str);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` key: []const u8 `
    ///
    pub fn ValueAsBool(self: Accounts__Account, key: []const u8) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.Accounts__Account_ValueAsBool(@ptrCast(self.ptr), key_str);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    pub fn WatchKey(self: Accounts__Account) Accounts__Watch {
        return .{ .ptr = qtc.Accounts__Account_WatchKey(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    pub fn Sync(self: Accounts__Account) void {
        qtc.Accounts__Account_Sync(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    pub fn SyncAndBlock(self: Accounts__Account) bool {
        return qtc.Accounts__Account_SyncAndBlock(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    pub fn Remove2(self: Accounts__Account) void {
        qtc.Accounts__Account_Remove2(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` key: []const u8 `
    ///
    /// ` token: [:0]const u8 `
    ///
    pub fn Sign(self: Accounts__Account, key: []const u8, token: [:0]const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const token_Cstring = token.ptr;
        qtc.Accounts__Account_Sign(@ptrCast(self.ptr), key_str, token_Cstring);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: []const u8 `
    ///
    /// ` token: []const [:0]const u8 `
    ///
    pub fn Verify(self: Accounts__Account, allocator: std.mem.Allocator, key: []const u8, token: []const [:0]const u8) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const token_chararr = allocator.alloc([*c]const u8, token.len) catch @panic("accounts__account.Verify: Memory allocation failed");
        defer allocator.free(token_chararr);
        for (token, 0..token.len) |str, i|
            token_chararr[i] = @ptrCast(str.ptr);
        return qtc.Accounts__Account_Verify(@ptrCast(self.ptr), key_str, token_chararr.ptr);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: []const u8 `
    ///
    /// ` tokens: [][:0]const u8 `
    ///
    pub fn VerifyWithTokens(self: Accounts__Account, allocator: std.mem.Allocator, key: []const u8, tokens: [][:0]const u8) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const tokens_cStr = allocator.alloc([*c]const u8, tokens.len) catch @panic("accounts__account.VerifyWithTokens: Memory allocation failed");
        defer allocator.free(tokens_cStr);
        for (tokens, 0..tokens.len) |tokens_item, i|
            tokens_cStr[i] = @ptrCast(tokens_item.ptr);
        const tokens_list = qtc.libqt_list{
            .len = tokens.len,
            .data = @ptrCast(tokens_cStr.ptr),
        };
        return qtc.Accounts__Account_VerifyWithTokens(@ptrCast(self.ptr), key_str, tokens_list);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` displayName: []const u8 `
    ///
    pub fn DisplayNameChanged(self: Accounts__Account, displayName: []const u8) void {
        const displayName_str = qtc.libqt_string{
            .len = displayName.len,
            .data = displayName.ptr,
        };
        qtc.Accounts__Account_DisplayNameChanged(@ptrCast(self.ptr), displayName_str);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` callback: *const fn (self: Accounts__Account, displayName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnDisplayNameChanged(self: Accounts__Account, callback: *const fn (Accounts__Account, [*:0]const u8) callconv(.c) void) void {
        qtc.Accounts__Account_Connect_DisplayNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` serviceName: []const u8 `
    ///
    /// ` enabled: bool `
    ///
    pub fn EnabledChanged(self: Accounts__Account, serviceName: []const u8, enabled: bool) void {
        const serviceName_str = qtc.libqt_string{
            .len = serviceName.len,
            .data = serviceName.ptr,
        };
        qtc.Accounts__Account_EnabledChanged(@ptrCast(self.ptr), serviceName_str, enabled);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` callback: *const fn (self: Accounts__Account, serviceName: [*:0]const u8, enabled: bool) callconv(.c) void `
    ///
    pub fn OnEnabledChanged(self: Accounts__Account, callback: *const fn (Accounts__Account, [*:0]const u8, bool) callconv(.c) void) void {
        qtc.Accounts__Account_Connect_EnabledChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` errorVal: Accounts__Error `
    ///
    pub fn Error(self: Accounts__Account, errorVal: anytype) void {
        comptime _ = @TypeOf(errorVal)._is_Accounts__Error;
        qtc.Accounts__Account_Error(@ptrCast(self.ptr), @ptrCast(errorVal.ptr));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` callback: *const fn (self: Accounts__Account, errorVal: Accounts__Error) callconv(.c) void `
    ///
    pub fn OnError(self: Accounts__Account, callback: *const fn (Accounts__Account, Accounts__Error) callconv(.c) void) void {
        qtc.Accounts__Account_Connect_Error(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    pub fn Synced(self: Accounts__Account) void {
        qtc.Accounts__Account_Synced(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` callback: *const fn (self: Accounts__Account) callconv(.c) void `
    ///
    pub fn OnSynced(self: Accounts__Account, callback: *const fn (Accounts__Account) callconv(.c) void) void {
        qtc.Accounts__Account_Connect_Synced(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    pub fn Removed(self: Accounts__Account) void {
        qtc.Accounts__Account_Removed(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` callback: *const fn (self: Accounts__Account) callconv(.c) void `
    ///
    pub fn OnRemoved(self: Accounts__Account, callback: *const fn (Accounts__Account) callconv(.c) void) void {
        qtc.Accounts__Account_Connect_Removed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts__account.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts__account.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` manager: Accounts__Manager `
    ///
    /// ` id: u32 `
    ///
    /// ` parent: QObject `
    ///
    pub fn FromId3(manager: anytype, id: u32, parent: anytype) Accounts__Account {
        comptime _ = @TypeOf(manager)._is_Accounts__Manager;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.Accounts__Account_FromId3(@ptrCast(manager.ptr), @bitCast(id), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` serviceType: []const u8 `
    ///
    pub fn Services1(self: Accounts__Account, allocator: std.mem.Allocator, serviceType: []const u8) []Accounts__Service {
        const serviceType_str = qtc.libqt_string{
            .len = serviceType.len,
            .data = serviceType.ptr,
        };
        const _arr: qtc.libqt_list = qtc.Accounts__Account_Services1(@ptrCast(self.ptr), serviceType_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Accounts__Service, _arr.len) catch @panic("accounts__account.Services1: Memory allocation failed");
        const _data: [*]QtC.Accounts__Service = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` service: Accounts__Service `
    ///
    pub fn SelectService1(self: Accounts__Account, service: anytype) void {
        comptime _ = @TypeOf(service)._is_Accounts__Service;
        qtc.Accounts__Account_SelectService1(@ptrCast(self.ptr), @ptrCast(service.ptr));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` key: []const u8 `
    ///
    /// ` defaultValue: QVariant `
    ///
    pub fn Value22(self: Accounts__Account, key: []const u8, defaultValue: anytype) QVariant {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        comptime _ = @TypeOf(defaultValue)._is_QVariant;
        return .{ .ptr = qtc.Accounts__Account_Value22(@ptrCast(self.ptr), key_str, @ptrCast(defaultValue.ptr)) };
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` key: []const u8 `
    ///
    /// ` defaultValue: QVariant `
    ///
    /// ` source: *account_enums.SettingSource `
    ///
    pub fn Value3(self: Accounts__Account, key: []const u8, defaultValue: anytype, source: *i32) QVariant {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        comptime _ = @TypeOf(defaultValue)._is_QVariant;
        return .{ .ptr = qtc.Accounts__Account_Value3(@ptrCast(self.ptr), key_str, @ptrCast(defaultValue.ptr), @ptrCast(source)) };
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: []const u8 `
    ///
    /// ` default_value: []const u8 `
    ///
    pub fn ValueAsString2(self: Accounts__Account, allocator: std.mem.Allocator, key: []const u8, default_value: []const u8) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const default_value_str = qtc.libqt_string{
            .len = default_value.len,
            .data = default_value.ptr,
        };
        var _str = qtc.Accounts__Account_ValueAsString2(@ptrCast(self.ptr), key_str, default_value_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts__account.ValueAsString2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: []const u8 `
    ///
    /// ` default_value: []const u8 `
    ///
    /// ` source: *account_enums.SettingSource `
    ///
    pub fn ValueAsString3(self: Accounts__Account, allocator: std.mem.Allocator, key: []const u8, default_value: []const u8, source: *i32) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const default_value_str = qtc.libqt_string{
            .len = default_value.len,
            .data = default_value.ptr,
        };
        var _str = qtc.Accounts__Account_ValueAsString3(@ptrCast(self.ptr), key_str, default_value_str, @ptrCast(source));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts__account.ValueAsString3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` key: []const u8 `
    ///
    /// ` default_value: i32 `
    ///
    pub fn ValueAsInt2(self: Accounts__Account, key: []const u8, default_value: i32) i32 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.Accounts__Account_ValueAsInt2(@ptrCast(self.ptr), key_str, @bitCast(default_value));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` key: []const u8 `
    ///
    /// ` default_value: i32 `
    ///
    /// ` source: *account_enums.SettingSource `
    ///
    pub fn ValueAsInt3(self: Accounts__Account, key: []const u8, default_value: i32, source: *i32) i32 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.Accounts__Account_ValueAsInt3(@ptrCast(self.ptr), key_str, @bitCast(default_value), @ptrCast(source));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` key: []const u8 `
    ///
    /// ` default_value: u64 `
    ///
    pub fn ValueAsUInt642(self: Accounts__Account, key: []const u8, default_value: u64) u64 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.Accounts__Account_ValueAsUInt642(@ptrCast(self.ptr), key_str, @bitCast(default_value));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` key: []const u8 `
    ///
    /// ` default_value: u64 `
    ///
    /// ` source: *account_enums.SettingSource `
    ///
    pub fn ValueAsUInt643(self: Accounts__Account, key: []const u8, default_value: u64, source: *i32) u64 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.Accounts__Account_ValueAsUInt643(@ptrCast(self.ptr), key_str, @bitCast(default_value), @ptrCast(source));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` key: []const u8 `
    ///
    /// ` default_value: bool `
    ///
    pub fn ValueAsBool2(self: Accounts__Account, key: []const u8, default_value: bool) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.Accounts__Account_ValueAsBool2(@ptrCast(self.ptr), key_str, default_value);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` key: []const u8 `
    ///
    /// ` default_value: bool `
    ///
    /// ` source: *account_enums.SettingSource `
    ///
    pub fn ValueAsBool3(self: Accounts__Account, key: []const u8, default_value: bool, source: *i32) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.Accounts__Account_ValueAsBool3(@ptrCast(self.ptr), key_str, default_value, @ptrCast(source));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` key: []const u8 `
    ///
    pub fn WatchKey1(self: Accounts__Account, key: []const u8) Accounts__Watch {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.Accounts__Account_WatchKey1(@ptrCast(self.ptr), key_str) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: Accounts__Account, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts__account.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: Accounts__Account, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    pub fn IsWidgetType(self: Accounts__Account) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    pub fn IsWindowType(self: Accounts__Account) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    pub fn IsQuickItemType(self: Accounts__Account) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    pub fn SignalsBlocked(self: Accounts__Account) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: Accounts__Account, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    pub fn Thread(self: Accounts__Account) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: Accounts__Account, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: Accounts__Account, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: Accounts__Account, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: Accounts__Account, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: Accounts__Account, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: Accounts__Account, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("accounts__account.Children: Memory allocation failed");
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
    /// ` self: Accounts__Account `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: Accounts__Account, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: Accounts__Account, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: Accounts__Account, obj: anytype) void {
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
    /// ` self: Accounts__Account `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: Accounts__Account, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: Accounts__Account `
    ///
    pub fn Disconnect3(self: Accounts__Account) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: Accounts__Account, receiver: anytype) bool {
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
    /// ` self: Accounts__Account `
    ///
    pub fn DumpObjectTree(self: Accounts__Account) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    pub fn DumpObjectInfo(self: Accounts__Account) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: Accounts__Account, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: Accounts__Account `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: Accounts__Account, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: Accounts__Account, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("accounts__account.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("accounts__account.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: Accounts__Account `
    ///
    pub fn BindingStorage(self: Accounts__Account) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    pub fn BindingStorage2(self: Accounts__Account) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    pub fn Destroyed(self: Accounts__Account) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` callback: *const fn (self: Accounts__Account) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: Accounts__Account, callback: *const fn (Accounts__Account) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    pub fn Parent(self: Accounts__Account) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: Accounts__Account, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    pub fn DeleteLater(self: Accounts__Account) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: Accounts__Account, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: Accounts__Account, time: i64, timerType: i32) i32 {
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
    /// ` self: Accounts__Account `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: Accounts__Account, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: Accounts__Account `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: Accounts__Account, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: Accounts__Account, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: Accounts__Account `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: Accounts__Account, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: Accounts__Account `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: Accounts__Account, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: Accounts__Account `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: Accounts__Account, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` callback: *const fn (self: Accounts__Account, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: Accounts__Account, callback: *const fn (Accounts__Account, QObject) callconv(.c) void) void {
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
    /// ` self: Accounts__Account `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: Accounts__Account, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.Accounts__Account_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: Accounts__Account `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: Accounts__Account, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.Accounts__Account_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Account`
    ///
    /// ` callback: *const fn (self: Accounts__Account, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: Accounts__Account, callback: *const fn (Accounts__Account, QEvent) callconv(.c) bool) void {
        qtc.Accounts__Account_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: Accounts__Account, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.Accounts__Account_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: Accounts__Account `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: Accounts__Account, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.Accounts__Account_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Account`
    ///
    /// ` callback: *const fn (self: Accounts__Account, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: Accounts__Account, callback: *const fn (Accounts__Account, QObject, QEvent) callconv(.c) bool) void {
        qtc.Accounts__Account_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: Accounts__Account, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.Accounts__Account_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: Accounts__Account `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: Accounts__Account, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.Accounts__Account_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Account`
    ///
    /// ` callback: *const fn (self: Accounts__Account, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: Accounts__Account, callback: *const fn (Accounts__Account, QTimerEvent) callconv(.c) void) void {
        qtc.Accounts__Account_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: Accounts__Account, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.Accounts__Account_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: Accounts__Account `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: Accounts__Account, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.Accounts__Account_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Account`
    ///
    /// ` callback: *const fn (self: Accounts__Account, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: Accounts__Account, callback: *const fn (Accounts__Account, QChildEvent) callconv(.c) void) void {
        qtc.Accounts__Account_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: Accounts__Account, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.Accounts__Account_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: Accounts__Account `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: Accounts__Account, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.Accounts__Account_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Account`
    ///
    /// ` callback: *const fn (self: Accounts__Account, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: Accounts__Account, callback: *const fn (Accounts__Account, QEvent) callconv(.c) void) void {
        qtc.Accounts__Account_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: Accounts__Account, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Accounts__Account_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Accounts__Account `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: Accounts__Account, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Accounts__Account_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Account`
    ///
    /// ` callback: *const fn (self: Accounts__Account, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: Accounts__Account, callback: *const fn (Accounts__Account, QMetaMethod) callconv(.c) void) void {
        qtc.Accounts__Account_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: Accounts__Account, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Accounts__Account_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Accounts__Account `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: Accounts__Account, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Accounts__Account_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Account`
    ///
    /// ` callback: *const fn (self: Accounts__Account, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: Accounts__Account, callback: *const fn (Accounts__Account, QMetaMethod) callconv(.c) void) void {
        qtc.Accounts__Account_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    pub fn Sender(self: Accounts__Account) QObject {
        return .{ .ptr = qtc.Accounts__Account_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: Accounts__Account `
    ///
    pub fn SuperSender(self: Accounts__Account) QObject {
        return .{ .ptr = qtc.Accounts__Account_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Account`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: Accounts__Account, callback: *const fn () callconv(.c) QObject) void {
        qtc.Accounts__Account_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    pub fn SenderSignalIndex(self: Accounts__Account) i32 {
        return qtc.Accounts__Account_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: Accounts__Account `
    ///
    pub fn SuperSenderSignalIndex(self: Accounts__Account) i32 {
        return qtc.Accounts__Account_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Account`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: Accounts__Account, callback: *const fn () callconv(.c) i32) void {
        qtc.Accounts__Account_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: Accounts__Account, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Accounts__Account_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: Accounts__Account `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: Accounts__Account, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Accounts__Account_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Account`
    ///
    /// ` callback: *const fn (self: Accounts__Account, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: Accounts__Account, callback: *const fn (Accounts__Account, [*:0]const u8) callconv(.c) i32) void {
        qtc.Accounts__Account_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: Accounts__Account, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.Accounts__Account_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Accounts__Account `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: Accounts__Account, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.Accounts__Account_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Account`
    ///
    /// ` callback: *const fn (self: Accounts__Account, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: Accounts__Account, callback: *const fn (Accounts__Account, QMetaMethod) callconv(.c) bool) void {
        qtc.Accounts__Account_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: Accounts__Account `
    ///
    /// ` callback: *const fn (self: Accounts__Account, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: Accounts__Account, callback: *const fn (Accounts__Account, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Accounts__Account `
    ///
    pub fn Delete(self: Accounts__Account) void {
        qtc.Accounts__Account_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
pub const enums = struct {
    pub const SettingSource = enum(i32) {
        pub const NONE: i32 = 0;
        pub const ACCOUNT: i32 = 1;
        pub const TEMPLATE: i32 = 2;
    };
};
