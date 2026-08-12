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

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    pub fn metaObject(self: Attica__PlatformDependentV3) QMetaObject {
        return .{ .ptr = qtc.Attica__PlatformDependentV3_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: Attica__PlatformDependentV3, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Attica__PlatformDependentV3_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: Attica__PlatformDependentV3, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Attica__PlatformDependentV3_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__PlatformDependentV3.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isReady` instead
    ///
    pub const IsReady = isReady;

    /// ### [Upstream resources](https://api.kde.org/attica-platformdependentv3.html#isReady)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    pub fn isReady(self: Attica__PlatformDependentV3) bool {
        return qtc.Attica__PlatformDependentV3_IsReady(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `readyChanged` instead
    ///
    pub const ReadyChanged = readyChanged;

    /// ### [Upstream resources](https://api.kde.org/attica-platformdependentv3.html#readyChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    pub fn readyChanged(self: Attica__PlatformDependentV3) void {
        qtc.Attica__PlatformDependentV3_ReadyChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onReadyChanged` instead
    ///
    pub const OnReadyChanged = onReadyChanged;

    /// ### [Upstream resources](https://api.kde.org/attica-platformdependentv3.html#readyChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` callback: *const fn (self: Attica__PlatformDependentV3) callconv(.c) void `
    ///
    pub fn onReadyChanged(self: Attica__PlatformDependentV3, callback: *const fn (Attica__PlatformDependentV3) callconv(.c) void) void {
        qtc.Attica__PlatformDependentV3_Connect_ReadyChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__PlatformDependentV3.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__PlatformDependentV3.tr3: Memory allocation failed");
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
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: Attica__PlatformDependentV3, _event: anytype) bool {
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
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: Attica__PlatformDependentV3, watched: anytype, _event: anytype) bool {
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
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: Attica__PlatformDependentV3, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__PlatformDependentV3.objectName: Memory allocation failed");
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
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: Attica__PlatformDependentV3, name: []const u8) void {
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
    /// ` self: Attica__PlatformDependentV3 `
    ///
    pub fn isWidgetType(self: Attica__PlatformDependentV3) bool {
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
    /// ` self: Attica__PlatformDependentV3 `
    ///
    pub fn isWindowType(self: Attica__PlatformDependentV3) bool {
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
    /// ` self: Attica__PlatformDependentV3 `
    ///
    pub fn isQuickItemType(self: Attica__PlatformDependentV3) bool {
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
    /// ` self: Attica__PlatformDependentV3 `
    ///
    pub fn signalsBlocked(self: Attica__PlatformDependentV3) bool {
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
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: Attica__PlatformDependentV3, b: bool) bool {
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
    /// ` self: Attica__PlatformDependentV3 `
    ///
    pub fn thread(self: Attica__PlatformDependentV3) QThread {
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
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: Attica__PlatformDependentV3, _thread: anytype) bool {
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
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: Attica__PlatformDependentV3, interval: i32) i32 {
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
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: Attica__PlatformDependentV3, time: i64) i32 {
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
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: Attica__PlatformDependentV3, id: i32) void {
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
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: Attica__PlatformDependentV3, id: i32) void {
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
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: Attica__PlatformDependentV3, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("Attica__PlatformDependentV3.children: Memory allocation failed");
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
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: Attica__PlatformDependentV3, _parent: anytype) void {
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
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: Attica__PlatformDependentV3, filterObj: anytype) void {
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
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: Attica__PlatformDependentV3, obj: anytype) void {
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
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: Attica__PlatformDependentV3, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: Attica__PlatformDependentV3 `
    ///
    pub fn disconnect3(self: Attica__PlatformDependentV3) bool {
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
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: Attica__PlatformDependentV3, receiver: anytype) bool {
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
    /// ` self: Attica__PlatformDependentV3 `
    ///
    pub fn dumpObjectTree(self: Attica__PlatformDependentV3) void {
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
    /// ` self: Attica__PlatformDependentV3 `
    ///
    pub fn dumpObjectInfo(self: Attica__PlatformDependentV3) void {
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
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: Attica__PlatformDependentV3, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: Attica__PlatformDependentV3, name: [:0]const u8) QVariant {
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
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: Attica__PlatformDependentV3, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("Attica__PlatformDependentV3.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("Attica__PlatformDependentV3.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: Attica__PlatformDependentV3 `
    ///
    pub fn bindingStorage(self: Attica__PlatformDependentV3) QBindingStorage {
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
    /// ` self: Attica__PlatformDependentV3 `
    ///
    pub fn bindingStorage2(self: Attica__PlatformDependentV3) QBindingStorage {
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
    /// ` self: Attica__PlatformDependentV3 `
    ///
    pub fn destroyed(self: Attica__PlatformDependentV3) void {
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
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` callback: *const fn (self: Attica__PlatformDependentV3) callconv(.c) void `
    ///
    pub fn onDestroyed(self: Attica__PlatformDependentV3, callback: *const fn (Attica__PlatformDependentV3) callconv(.c) void) void {
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
    /// ` self: Attica__PlatformDependentV3 `
    ///
    pub fn parent(self: Attica__PlatformDependentV3) QObject {
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
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: Attica__PlatformDependentV3, classname: [:0]const u8) bool {
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
    /// ` self: Attica__PlatformDependentV3 `
    ///
    pub fn deleteLater(self: Attica__PlatformDependentV3) void {
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
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: Attica__PlatformDependentV3, interval: i32, timerType: i32) i32 {
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
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: Attica__PlatformDependentV3, time: i64, timerType: i32) i32 {
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
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: Attica__PlatformDependentV3, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: Attica__PlatformDependentV3, signal: [:0]const u8) bool {
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
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: Attica__PlatformDependentV3, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: Attica__PlatformDependentV3, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: Attica__PlatformDependentV3, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: Attica__PlatformDependentV3, param1: anytype) void {
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
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` callback: *const fn (self: Attica__PlatformDependentV3, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: Attica__PlatformDependentV3, callback: *const fn (Attica__PlatformDependentV3, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `deleteResource` instead
    ///
    pub const DeleteResource = deleteResource;

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
    pub fn deleteResource(self: Attica__PlatformDependentV3, request: anytype) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        return .{ .ptr = qtc.Attica__PlatformDependentV2_DeleteResource(@ptrCast(self.ptr), @ptrCast(request.ptr)) };
    }

    /// ### DEPRECATED: Use `put` instead
    ///
    pub const Put = put;

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
    pub fn put(self: Attica__PlatformDependentV3, request: anytype, data: anytype) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        comptime _ = @TypeOf(data)._is_QIODevice;
        return .{ .ptr = qtc.Attica__PlatformDependentV2_Put(@ptrCast(self.ptr), @ptrCast(request.ptr), @ptrCast(data.ptr)) };
    }

    /// ### DEPRECATED: Use `put2` instead
    ///
    pub const Put2 = put2;

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
    pub fn put2(self: Attica__PlatformDependentV3, request: anytype, data: []u8) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return .{ .ptr = qtc.Attica__PlatformDependentV2_Put2(@ptrCast(self.ptr), @ptrCast(request.ptr), data_str) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

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
    pub fn operatorAssign(self: Attica__PlatformDependentV3, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_Attica__PlatformDependentV2;
        qtc.Attica__PlatformDependentV2_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `getDefaultProviderFiles` instead
    ///
    pub const GetDefaultProviderFiles = getDefaultProviderFiles;

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
    pub fn getDefaultProviderFiles(self: Attica__PlatformDependentV3, allocator: std.mem.Allocator) []QUrl {
        const _arr: qtc.libqt_list = qtc.Attica__PlatformDependent_GetDefaultProviderFiles(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QUrl, _arr.len) catch @panic("Attica__PlatformDependentV3.getDefaultProviderFiles: Memory allocation failed");
        const _data_val: [*]QtC.QUrl = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `addDefaultProviderFile` instead
    ///
    pub const AddDefaultProviderFile = addDefaultProviderFile;

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
    pub fn addDefaultProviderFile(self: Attica__PlatformDependentV3, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.Attica__PlatformDependent_AddDefaultProviderFile(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `removeDefaultProviderFile` instead
    ///
    pub const RemoveDefaultProviderFile = removeDefaultProviderFile;

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
    pub fn removeDefaultProviderFile(self: Attica__PlatformDependentV3, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.Attica__PlatformDependent_RemoveDefaultProviderFile(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `enableProvider` instead
    ///
    pub const EnableProvider = enableProvider;

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
    pub fn enableProvider(self: Attica__PlatformDependentV3, baseUrl: anytype, enabled: bool) void {
        comptime _ = @TypeOf(baseUrl)._is_QUrl;
        qtc.Attica__PlatformDependent_EnableProvider(@ptrCast(self.ptr), @ptrCast(baseUrl.ptr), enabled);
    }

    /// ### DEPRECATED: Use `isEnabled` instead
    ///
    pub const IsEnabled = isEnabled;

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
    pub fn isEnabled(self: Attica__PlatformDependentV3, baseUrl: anytype) bool {
        comptime _ = @TypeOf(baseUrl)._is_QUrl;
        return qtc.Attica__PlatformDependent_IsEnabled(@ptrCast(self.ptr), @ptrCast(baseUrl.ptr));
    }

    /// ### DEPRECATED: Use `hasCredentials` instead
    ///
    pub const HasCredentials = hasCredentials;

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
    pub fn hasCredentials(self: Attica__PlatformDependentV3, baseUrl: anytype) bool {
        comptime _ = @TypeOf(baseUrl)._is_QUrl;
        return qtc.Attica__PlatformDependent_HasCredentials(@ptrCast(self.ptr), @ptrCast(baseUrl.ptr));
    }

    /// ### DEPRECATED: Use `loadCredentials` instead
    ///
    pub const LoadCredentials = loadCredentials;

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
    pub fn loadCredentials(self: Attica__PlatformDependentV3, baseUrl: anytype, user: []const u8, password: []const u8) bool {
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

    /// ### DEPRECATED: Use `askForCredentials` instead
    ///
    pub const AskForCredentials = askForCredentials;

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
    pub fn askForCredentials(self: Attica__PlatformDependentV3, baseUrl: anytype, user: []const u8, password: []const u8) bool {
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

    /// ### DEPRECATED: Use `saveCredentials` instead
    ///
    pub const SaveCredentials = saveCredentials;

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
    pub fn saveCredentials(self: Attica__PlatformDependentV3, baseUrl: anytype, user: []const u8, password: []const u8) bool {
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

    /// ### DEPRECATED: Use `get` instead
    ///
    pub const Get = get;

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
    pub fn get(self: Attica__PlatformDependentV3, request: anytype) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        return .{ .ptr = qtc.Attica__PlatformDependent_Get(@ptrCast(self.ptr), @ptrCast(request.ptr)) };
    }

    /// ### DEPRECATED: Use `post` instead
    ///
    pub const Post = post;

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
    pub fn post(self: Attica__PlatformDependentV3, request: anytype, data: anytype) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        comptime _ = @TypeOf(data)._is_QIODevice;
        return .{ .ptr = qtc.Attica__PlatformDependent_Post(@ptrCast(self.ptr), @ptrCast(request.ptr), @ptrCast(data.ptr)) };
    }

    /// ### DEPRECATED: Use `post2` instead
    ///
    pub const Post2 = post2;

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
    pub fn post2(self: Attica__PlatformDependentV3, request: anytype, data: []u8) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return .{ .ptr = qtc.Attica__PlatformDependent_Post2(@ptrCast(self.ptr), @ptrCast(request.ptr), data_str) };
    }

    /// ### DEPRECATED: Use `setNam` instead
    ///
    pub const SetNam = setNam;

    /// Inherited from Attica::PlatformDependent
    ///
    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#setNam)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` _nam: QNetworkAccessManager `
    ///
    pub fn setNam(self: Attica__PlatformDependentV3, _nam: anytype) void {
        comptime _ = @TypeOf(_nam)._is_QNetworkAccessManager;
        qtc.Attica__PlatformDependent_SetNam(@ptrCast(self.ptr), @ptrCast(_nam.ptr));
    }

    /// ### DEPRECATED: Use `nam` instead
    ///
    pub const Nam = nam;

    /// Inherited from Attica::PlatformDependent
    ///
    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#nam)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    pub fn nam(self: Attica__PlatformDependentV3) QNetworkAccessManager {
        return .{ .ptr = qtc.Attica__PlatformDependent_Nam(@ptrCast(self.ptr)) };
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
    /// ` self: Attica__PlatformDependentV3 `
    ///
    /// ` callback: *const fn (self: Attica__PlatformDependentV3, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: Attica__PlatformDependentV3, callback: *const fn (Attica__PlatformDependentV3, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__PlatformDependentV3 `
    ///
    pub fn delete(self: Attica__PlatformDependentV3) void {
        qtc.Attica__PlatformDependentV3_Delete(@ptrCast(self.ptr));
    }
};
