const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QJSValue = @import("libqt6").QJSValue;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QMetaProperty = @import("libqt6").QMetaProperty;
const QNetworkAccessManager = @import("libqt6").QNetworkAccessManager;
const QObject = @import("libqt6").QObject;
const QQmlAbstractUrlInterceptor = @import("libqt6").QQmlAbstractUrlInterceptor;
const QQmlContext = @import("libqt6").QQmlContext;
const QQmlError = @import("libqt6").QQmlError;
const QQmlIncubationController = @import("libqt6").QQmlIncubationController;
const QQmlNetworkAccessManagerFactory = @import("libqt6").QQmlNetworkAccessManagerFactory;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const qjsengine_enums = @import("libqjsengine.zig").enums;
const qjsvalue_enums = @import("libqjsvalue.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qqmlabstracturlinterceptor_enums = @import("libqqmlabstracturlinterceptor.zig").enums;
const qqmlengine_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlimageproviderbase.html)
pub const QQmlImageProviderBase = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlimageproviderbase.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QQmlImageProviderBase,

    pub const _is_QQmlImageProviderBase = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlImageProviderBase `
    ///
    pub fn metaObject(self: QQmlImageProviderBase) QMetaObject {
        return .{ .ptr = qtc.QQmlImageProviderBase_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QQmlImageProviderBase `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QQmlImageProviderBase, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QQmlImageProviderBase_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QQmlImageProviderBase `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QQmlImageProviderBase, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QQmlImageProviderBase_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// Inherited from QObject
    ///
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
        var _str = qtc.QQmlImageProviderBase_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQmlImageProviderBase.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `imageType` instead
    ///
    pub const ImageType = imageType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlimageproviderbase.html#imageType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlImageProviderBase `
    ///
    /// ## Returns:
    ///
    /// ` qqmlengine_enums.ImageType `
    ///
    pub fn imageType(self: QQmlImageProviderBase) i32 {
        return qtc.QQmlImageProviderBase_ImageType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `flags` instead
    ///
    pub const Flags = flags;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlimageproviderbase.html#flags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlImageProviderBase `
    ///
    /// ## Returns:
    ///
    /// ` flag of qqmlengine_enums.Flag `
    ///
    pub fn flags(self: QQmlImageProviderBase) i32 {
        return qtc.QQmlImageProviderBase_Flags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

    /// Inherited from QObject
    ///
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
        var _str = qtc.QQmlImageProviderBase_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQmlImageProviderBase.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

    /// Inherited from QObject
    ///
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
        var _str = qtc.QQmlImageProviderBase_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQmlImageProviderBase.tr3: Memory allocation failed");
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
    /// ` self: QQmlImageProviderBase `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QQmlImageProviderBase, _event: anytype) bool {
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
    /// ` self: QQmlImageProviderBase `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QQmlImageProviderBase, watched: anytype, _event: anytype) bool {
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
    /// ` self: QQmlImageProviderBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QQmlImageProviderBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQmlImageProviderBase.objectName: Memory allocation failed");
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
    /// ` self: QQmlImageProviderBase `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QQmlImageProviderBase, name: []const u8) void {
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
    /// ` self: QQmlImageProviderBase `
    ///
    pub fn isWidgetType(self: QQmlImageProviderBase) bool {
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
    /// ` self: QQmlImageProviderBase `
    ///
    pub fn isWindowType(self: QQmlImageProviderBase) bool {
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
    /// ` self: QQmlImageProviderBase `
    ///
    pub fn isQuickItemType(self: QQmlImageProviderBase) bool {
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
    /// ` self: QQmlImageProviderBase `
    ///
    pub fn signalsBlocked(self: QQmlImageProviderBase) bool {
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
    /// ` self: QQmlImageProviderBase `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QQmlImageProviderBase, b: bool) bool {
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
    /// ` self: QQmlImageProviderBase `
    ///
    pub fn thread(self: QQmlImageProviderBase) QThread {
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
    /// ` self: QQmlImageProviderBase `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QQmlImageProviderBase, _thread: anytype) bool {
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
    /// ` self: QQmlImageProviderBase `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QQmlImageProviderBase, interval: i32) i32 {
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
    /// ` self: QQmlImageProviderBase `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QQmlImageProviderBase, time: i64) i32 {
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
    /// ` self: QQmlImageProviderBase `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QQmlImageProviderBase, id: i32) void {
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
    /// ` self: QQmlImageProviderBase `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QQmlImageProviderBase, id: i32) void {
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
    /// ` self: QQmlImageProviderBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QQmlImageProviderBase, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QQmlImageProviderBase.children: Memory allocation failed");
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
    /// ` self: QQmlImageProviderBase `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QQmlImageProviderBase, _parent: anytype) void {
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
    /// ` self: QQmlImageProviderBase `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QQmlImageProviderBase, filterObj: anytype) void {
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
    /// ` self: QQmlImageProviderBase `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QQmlImageProviderBase, obj: anytype) void {
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
    /// ` self: QQmlImageProviderBase `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QQmlImageProviderBase, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QQmlImageProviderBase `
    ///
    pub fn disconnect3(self: QQmlImageProviderBase) bool {
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
    /// ` self: QQmlImageProviderBase `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QQmlImageProviderBase, receiver: anytype) bool {
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
    /// ` self: QQmlImageProviderBase `
    ///
    pub fn dumpObjectTree(self: QQmlImageProviderBase) void {
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
    /// ` self: QQmlImageProviderBase `
    ///
    pub fn dumpObjectInfo(self: QQmlImageProviderBase) void {
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
    /// ` self: QQmlImageProviderBase `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QQmlImageProviderBase, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QQmlImageProviderBase `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QQmlImageProviderBase, name: [:0]const u8) QVariant {
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
    /// ` self: QQmlImageProviderBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QQmlImageProviderBase, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QQmlImageProviderBase.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QQmlImageProviderBase.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QQmlImageProviderBase `
    ///
    pub fn bindingStorage(self: QQmlImageProviderBase) QBindingStorage {
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
    /// ` self: QQmlImageProviderBase `
    ///
    pub fn bindingStorage2(self: QQmlImageProviderBase) QBindingStorage {
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
    /// ` self: QQmlImageProviderBase `
    ///
    pub fn destroyed(self: QQmlImageProviderBase) void {
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
    /// ` self: QQmlImageProviderBase `
    ///
    /// ` callback: *const fn (self: QQmlImageProviderBase) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QQmlImageProviderBase, callback: *const fn (QQmlImageProviderBase) callconv(.c) void) void {
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
    /// ` self: QQmlImageProviderBase `
    ///
    pub fn parent(self: QQmlImageProviderBase) QObject {
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
    /// ` self: QQmlImageProviderBase `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QQmlImageProviderBase, classname: [:0]const u8) bool {
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
    /// ` self: QQmlImageProviderBase `
    ///
    pub fn deleteLater(self: QQmlImageProviderBase) void {
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
    /// ` self: QQmlImageProviderBase `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QQmlImageProviderBase, interval: i32, timerType: i32) i32 {
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
    /// ` self: QQmlImageProviderBase `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QQmlImageProviderBase, time: i64, timerType: i32) i32 {
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
    /// ` self: QQmlImageProviderBase `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QQmlImageProviderBase, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QQmlImageProviderBase `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QQmlImageProviderBase, signal: [:0]const u8) bool {
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
    /// ` self: QQmlImageProviderBase `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QQmlImageProviderBase, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QQmlImageProviderBase `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QQmlImageProviderBase, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QQmlImageProviderBase `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QQmlImageProviderBase, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QQmlImageProviderBase `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QQmlImageProviderBase, param1: anytype) void {
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
    /// ` self: QQmlImageProviderBase `
    ///
    /// ` callback: *const fn (self: QQmlImageProviderBase, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QQmlImageProviderBase, callback: *const fn (QQmlImageProviderBase, QObject) callconv(.c) void) void {
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
    /// ` self: QQmlImageProviderBase `
    ///
    /// ` callback: *const fn (self: QQmlImageProviderBase, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QQmlImageProviderBase, callback: *const fn (QQmlImageProviderBase, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlimageproviderbase.html#dtor.QQmlImageProviderBase)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QQmlImageProviderBase `
    ///
    pub fn delete(self: QQmlImageProviderBase) void {
        qtc.QQmlImageProviderBase_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html)
pub const QQmlEngine = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QQmlEngine,

    pub const _is_QQmlEngine = {};
    pub const _is_QJSEngine = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QQmlEngine object in C++ memory
    ///
    pub fn new() QQmlEngine {
        return .{ .ptr = qtc.QQmlEngine_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QQmlEngine object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` p: QObject `
    ///
    pub fn new2(p: anytype) QQmlEngine {
        comptime _ = @TypeOf(p)._is_QObject;
        return .{ .ptr = qtc.QQmlEngine_new2(@ptrCast(p.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    pub fn metaObject(self: QQmlEngine) QMetaObject {
        return .{ .ptr = qtc.QQmlEngine_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMetaObject` instead
    ///
    pub const OnMetaObject = onMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QQmlEngine, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QQmlEngine_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetaObject` instead
    ///
    pub const SuperMetaObject = superMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    pub fn superMetaObject(self: QQmlEngine) QMetaObject {
        return .{ .ptr = qtc.QQmlEngine_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QQmlEngine, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QQmlEngine_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` callback: *const fn (self: QQmlEngine, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QQmlEngine, callback: *const fn (QQmlEngine, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QQmlEngine_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QQmlEngine, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QQmlEngine_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QQmlEngine, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QQmlEngine_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` callback: *const fn (self: QQmlEngine, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QQmlEngine, callback: *const fn (QQmlEngine, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QQmlEngine_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QQmlEngine, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QQmlEngine_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// Inherited from QObject
    ///
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
        var _str = qtc.QQmlEngine_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQmlEngine.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `rootContext` instead
    ///
    pub const RootContext = rootContext;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#rootContext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    pub fn rootContext(self: QQmlEngine) QQmlContext {
        return .{ .ptr = qtc.QQmlEngine_RootContext(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `clearComponentCache` instead
    ///
    pub const ClearComponentCache = clearComponentCache;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#clearComponentCache)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    pub fn clearComponentCache(self: QQmlEngine) void {
        qtc.QQmlEngine_ClearComponentCache(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `trimComponentCache` instead
    ///
    pub const TrimComponentCache = trimComponentCache;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#trimComponentCache)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    pub fn trimComponentCache(self: QQmlEngine) void {
        qtc.QQmlEngine_TrimComponentCache(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clearSingletons` instead
    ///
    pub const ClearSingletons = clearSingletons;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#clearSingletons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    pub fn clearSingletons(self: QQmlEngine) void {
        qtc.QQmlEngine_ClearSingletons(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `importPathList` instead
    ///
    pub const ImportPathList = importPathList;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#importPathList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn importPathList(self: QQmlEngine, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QQmlEngine_ImportPathList(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QQmlEngine.importPathList: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QQmlEngine.importPathList: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setImportPathList` instead
    ///
    pub const SetImportPathList = setImportPathList;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#setImportPathList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` paths: []const []const u8 `
    ///
    pub fn setImportPathList(self: QQmlEngine, allocator: std.mem.Allocator, paths: []const []const u8) void {
        const paths_arr = allocator.alloc(qtc.libqt_string, paths.len) catch @panic("QQmlEngine.setImportPathList: Memory allocation failed");
        defer allocator.free(paths_arr);
        for (paths, 0..paths.len) |str_item, i|
            paths_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const paths_list = qtc.libqt_list{
            .len = paths.len,
            .data = paths_arr.ptr,
        };
        qtc.QQmlEngine_SetImportPathList(@ptrCast(self.ptr), paths_list);
    }

    /// ### DEPRECATED: Use `addImportPath` instead
    ///
    pub const AddImportPath = addImportPath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#addImportPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` dir: []const u8 `
    ///
    pub fn addImportPath(self: QQmlEngine, dir: []const u8) void {
        const dir_str = qtc.libqt_string{
            .len = dir.len,
            .data = dir.ptr,
        };
        qtc.QQmlEngine_AddImportPath(@ptrCast(self.ptr), dir_str);
    }

    /// ### DEPRECATED: Use `pluginPathList` instead
    ///
    pub const PluginPathList = pluginPathList;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#pluginPathList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn pluginPathList(self: QQmlEngine, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QQmlEngine_PluginPathList(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QQmlEngine.pluginPathList: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QQmlEngine.pluginPathList: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setPluginPathList` instead
    ///
    pub const SetPluginPathList = setPluginPathList;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#setPluginPathList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` paths: []const []const u8 `
    ///
    pub fn setPluginPathList(self: QQmlEngine, allocator: std.mem.Allocator, paths: []const []const u8) void {
        const paths_arr = allocator.alloc(qtc.libqt_string, paths.len) catch @panic("QQmlEngine.setPluginPathList: Memory allocation failed");
        defer allocator.free(paths_arr);
        for (paths, 0..paths.len) |str_item, i|
            paths_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const paths_list = qtc.libqt_list{
            .len = paths.len,
            .data = paths_arr.ptr,
        };
        qtc.QQmlEngine_SetPluginPathList(@ptrCast(self.ptr), paths_list);
    }

    /// ### DEPRECATED: Use `addPluginPath` instead
    ///
    pub const AddPluginPath = addPluginPath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#addPluginPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` dir: []const u8 `
    ///
    pub fn addPluginPath(self: QQmlEngine, dir: []const u8) void {
        const dir_str = qtc.libqt_string{
            .len = dir.len,
            .data = dir.ptr,
        };
        qtc.QQmlEngine_AddPluginPath(@ptrCast(self.ptr), dir_str);
    }

    /// ### DEPRECATED: Use `addNamedBundle` instead
    ///
    pub const AddNamedBundle = addNamedBundle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#addNamedBundle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` param1: []const u8 `
    ///
    /// ` param2: []const u8 `
    ///
    pub fn addNamedBundle(self: QQmlEngine, param1: []const u8, param2: []const u8) bool {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        return qtc.QQmlEngine_AddNamedBundle(@ptrCast(self.ptr), param1_str, param2_str);
    }

    /// ### DEPRECATED: Use `importPlugin` instead
    ///
    pub const ImportPlugin = importPlugin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#importPlugin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` filePath: []const u8 `
    ///
    /// ` uri: []const u8 `
    ///
    /// ` errors: []QQmlError `
    ///
    pub fn importPlugin(self: QQmlEngine, filePath: []const u8, uri: []const u8, errors: []QQmlError) bool {
        const filePath_str = qtc.libqt_string{
            .len = filePath.len,
            .data = filePath.ptr,
        };
        const uri_str = qtc.libqt_string{
            .len = uri.len,
            .data = uri.ptr,
        };
        const errors_list = qtc.libqt_list{
            .len = errors.len,
            .data = @ptrCast(errors.ptr),
        };
        return qtc.QQmlEngine_ImportPlugin(@ptrCast(self.ptr), filePath_str, uri_str, errors_list);
    }

    /// ### DEPRECATED: Use `setNetworkAccessManagerFactory` instead
    ///
    pub const SetNetworkAccessManagerFactory = setNetworkAccessManagerFactory;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#setNetworkAccessManagerFactory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` _networkAccessManagerFactory: QQmlNetworkAccessManagerFactory `
    ///
    pub fn setNetworkAccessManagerFactory(self: QQmlEngine, _networkAccessManagerFactory: anytype) void {
        comptime _ = @TypeOf(_networkAccessManagerFactory)._is_QQmlNetworkAccessManagerFactory;
        qtc.QQmlEngine_SetNetworkAccessManagerFactory(@ptrCast(self.ptr), @ptrCast(_networkAccessManagerFactory.ptr));
    }

    /// ### DEPRECATED: Use `networkAccessManagerFactory` instead
    ///
    pub const NetworkAccessManagerFactory = networkAccessManagerFactory;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#networkAccessManagerFactory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    pub fn networkAccessManagerFactory(self: QQmlEngine) QQmlNetworkAccessManagerFactory {
        return .{ .ptr = qtc.QQmlEngine_NetworkAccessManagerFactory(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `networkAccessManager` instead
    ///
    pub const NetworkAccessManager = networkAccessManager;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#networkAccessManager)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    pub fn networkAccessManager(self: QQmlEngine) QNetworkAccessManager {
        return .{ .ptr = qtc.QQmlEngine_NetworkAccessManager(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setUrlInterceptor` instead
    ///
    pub const SetUrlInterceptor = setUrlInterceptor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#setUrlInterceptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` _urlInterceptor: QQmlAbstractUrlInterceptor `
    ///
    pub fn setUrlInterceptor(self: QQmlEngine, _urlInterceptor: anytype) void {
        comptime _ = @TypeOf(_urlInterceptor)._is_QQmlAbstractUrlInterceptor;
        qtc.QQmlEngine_SetUrlInterceptor(@ptrCast(self.ptr), @ptrCast(_urlInterceptor.ptr));
    }

    /// ### DEPRECATED: Use `urlInterceptor` instead
    ///
    pub const UrlInterceptor = urlInterceptor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#urlInterceptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    pub fn urlInterceptor(self: QQmlEngine) QQmlAbstractUrlInterceptor {
        return .{ .ptr = qtc.QQmlEngine_UrlInterceptor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `addUrlInterceptor` instead
    ///
    pub const AddUrlInterceptor = addUrlInterceptor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#addUrlInterceptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` _urlInterceptor: QQmlAbstractUrlInterceptor `
    ///
    pub fn addUrlInterceptor(self: QQmlEngine, _urlInterceptor: anytype) void {
        comptime _ = @TypeOf(_urlInterceptor)._is_QQmlAbstractUrlInterceptor;
        qtc.QQmlEngine_AddUrlInterceptor(@ptrCast(self.ptr), @ptrCast(_urlInterceptor.ptr));
    }

    /// ### DEPRECATED: Use `removeUrlInterceptor` instead
    ///
    pub const RemoveUrlInterceptor = removeUrlInterceptor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#removeUrlInterceptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` _urlInterceptor: QQmlAbstractUrlInterceptor `
    ///
    pub fn removeUrlInterceptor(self: QQmlEngine, _urlInterceptor: anytype) void {
        comptime _ = @TypeOf(_urlInterceptor)._is_QQmlAbstractUrlInterceptor;
        qtc.QQmlEngine_RemoveUrlInterceptor(@ptrCast(self.ptr), @ptrCast(_urlInterceptor.ptr));
    }

    /// ### DEPRECATED: Use `urlInterceptors` instead
    ///
    pub const UrlInterceptors = urlInterceptors;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#urlInterceptors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn urlInterceptors(self: QQmlEngine, allocator: std.mem.Allocator) []QQmlAbstractUrlInterceptor {
        const _arr: qtc.libqt_list = qtc.QQmlEngine_UrlInterceptors(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QQmlAbstractUrlInterceptor, _arr.len) catch @panic("QQmlEngine.urlInterceptors: Memory allocation failed");
        const _data_val: [*]QtC.QQmlAbstractUrlInterceptor = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `interceptUrl` instead
    ///
    pub const InterceptUrl = interceptUrl;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#interceptUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` url: QUrl `
    ///
    /// ` typeVal: qqmlabstracturlinterceptor_enums.DataType `
    ///
    pub fn interceptUrl(self: QQmlEngine, url: anytype, typeVal: i32) QUrl {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.QQmlEngine_InterceptUrl(@ptrCast(self.ptr), @ptrCast(url.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `addImageProvider` instead
    ///
    pub const AddImageProvider = addImageProvider;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#addImageProvider)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` id: []const u8 `
    ///
    /// ` param2: QQmlImageProviderBase `
    ///
    pub fn addImageProvider(self: QQmlEngine, id: []const u8, param2: anytype) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        comptime _ = @TypeOf(param2)._is_QQmlImageProviderBase;
        qtc.QQmlEngine_AddImageProvider(@ptrCast(self.ptr), id_str, @ptrCast(param2.ptr));
    }

    /// ### DEPRECATED: Use `imageProvider` instead
    ///
    pub const ImageProvider = imageProvider;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#imageProvider)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` id: []const u8 `
    ///
    pub fn imageProvider(self: QQmlEngine, id: []const u8) QQmlImageProviderBase {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        return .{ .ptr = qtc.QQmlEngine_ImageProvider(@ptrCast(self.ptr), id_str) };
    }

    /// ### DEPRECATED: Use `removeImageProvider` instead
    ///
    pub const RemoveImageProvider = removeImageProvider;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#removeImageProvider)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` id: []const u8 `
    ///
    pub fn removeImageProvider(self: QQmlEngine, id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        qtc.QQmlEngine_RemoveImageProvider(@ptrCast(self.ptr), id_str);
    }

    /// ### DEPRECATED: Use `setIncubationController` instead
    ///
    pub const SetIncubationController = setIncubationController;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#setIncubationController)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` _incubationController: QQmlIncubationController `
    ///
    pub fn setIncubationController(self: QQmlEngine, _incubationController: anytype) void {
        comptime _ = @TypeOf(_incubationController)._is_QQmlIncubationController;
        qtc.QQmlEngine_SetIncubationController(@ptrCast(self.ptr), @ptrCast(_incubationController.ptr));
    }

    /// ### DEPRECATED: Use `incubationController` instead
    ///
    pub const IncubationController = incubationController;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#incubationController)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    pub fn incubationController(self: QQmlEngine) QQmlIncubationController {
        return .{ .ptr = qtc.QQmlEngine_IncubationController(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setOfflineStoragePath` instead
    ///
    pub const SetOfflineStoragePath = setOfflineStoragePath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#setOfflineStoragePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` dir: []const u8 `
    ///
    pub fn setOfflineStoragePath(self: QQmlEngine, dir: []const u8) void {
        const dir_str = qtc.libqt_string{
            .len = dir.len,
            .data = dir.ptr,
        };
        qtc.QQmlEngine_SetOfflineStoragePath(@ptrCast(self.ptr), dir_str);
    }

    /// ### DEPRECATED: Use `offlineStoragePath` instead
    ///
    pub const OfflineStoragePath = offlineStoragePath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#offlineStoragePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn offlineStoragePath(self: QQmlEngine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QQmlEngine_OfflineStoragePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQmlEngine.offlineStoragePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `offlineStorageDatabaseFilePath` instead
    ///
    pub const OfflineStorageDatabaseFilePath = offlineStorageDatabaseFilePath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#offlineStorageDatabaseFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` databaseName: []const u8 `
    ///
    pub fn offlineStorageDatabaseFilePath(self: QQmlEngine, allocator: std.mem.Allocator, databaseName: []const u8) []const u8 {
        const databaseName_str = qtc.libqt_string{
            .len = databaseName.len,
            .data = databaseName.ptr,
        };
        var _str = qtc.QQmlEngine_OfflineStorageDatabaseFilePath(@ptrCast(self.ptr), databaseName_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQmlEngine.offlineStorageDatabaseFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `baseUrl` instead
    ///
    pub const BaseUrl = baseUrl;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#baseUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    pub fn baseUrl(self: QQmlEngine) QUrl {
        return .{ .ptr = qtc.QQmlEngine_BaseUrl(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBaseUrl` instead
    ///
    pub const SetBaseUrl = setBaseUrl;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#setBaseUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` _baseUrl: QUrl `
    ///
    pub fn setBaseUrl(self: QQmlEngine, _baseUrl: anytype) void {
        comptime _ = @TypeOf(_baseUrl)._is_QUrl;
        qtc.QQmlEngine_SetBaseUrl(@ptrCast(self.ptr), @ptrCast(_baseUrl.ptr));
    }

    /// ### DEPRECATED: Use `outputWarningsToStandardError` instead
    ///
    pub const OutputWarningsToStandardError = outputWarningsToStandardError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#outputWarningsToStandardError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    pub fn outputWarningsToStandardError(self: QQmlEngine) bool {
        return qtc.QQmlEngine_OutputWarningsToStandardError(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setOutputWarningsToStandardError` instead
    ///
    pub const SetOutputWarningsToStandardError = setOutputWarningsToStandardError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#setOutputWarningsToStandardError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` _outputWarningsToStandardError: bool `
    ///
    pub fn setOutputWarningsToStandardError(self: QQmlEngine, _outputWarningsToStandardError: bool) void {
        qtc.QQmlEngine_SetOutputWarningsToStandardError(@ptrCast(self.ptr), _outputWarningsToStandardError);
    }

    /// ### DEPRECATED: Use `markCurrentFunctionAsTranslationBinding` instead
    ///
    pub const MarkCurrentFunctionAsTranslationBinding = markCurrentFunctionAsTranslationBinding;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#markCurrentFunctionAsTranslationBinding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    pub fn markCurrentFunctionAsTranslationBinding(self: QQmlEngine) void {
        qtc.QQmlEngine_MarkCurrentFunctionAsTranslationBinding(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `captureProperty` instead
    ///
    pub const CaptureProperty = captureProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#captureProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` object: QObject `
    ///
    /// ` _property: QMetaProperty `
    ///
    pub fn captureProperty(self: QQmlEngine, object: anytype, _property: anytype) void {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(_property)._is_QMetaProperty;
        qtc.QQmlEngine_CaptureProperty(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(_property.ptr));
    }

    /// ### DEPRECATED: Use `retranslate` instead
    ///
    pub const Retranslate = retranslate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#retranslate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    pub fn retranslate(self: QQmlEngine) void {
        qtc.QQmlEngine_Retranslate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `offlineStoragePathChanged` instead
    ///
    pub const OfflineStoragePathChanged = offlineStoragePathChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#offlineStoragePathChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    pub fn offlineStoragePathChanged(self: QQmlEngine) void {
        qtc.QQmlEngine_OfflineStoragePathChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onOfflineStoragePathChanged` instead
    ///
    pub const OnOfflineStoragePathChanged = onOfflineStoragePathChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#offlineStoragePathChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` callback: *const fn (self: QQmlEngine) callconv(.c) void `
    ///
    pub fn onOfflineStoragePathChanged(self: QQmlEngine, callback: *const fn (QQmlEngine) callconv(.c) void) void {
        qtc.QQmlEngine_Connect_OfflineStoragePathChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `contextForObject` instead
    ///
    pub const ContextForObject = contextForObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#contextForObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QObject `
    ///
    pub fn contextForObject(param1: anytype) QQmlContext {
        comptime _ = @TypeOf(param1)._is_QObject;
        return .{ .ptr = qtc.QQmlEngine_ContextForObject(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `setContextForObject` instead
    ///
    pub const SetContextForObject = setContextForObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#setContextForObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: QQmlContext `
    ///
    pub fn setContextForObject(param1: anytype, param2: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        comptime _ = @TypeOf(param2)._is_QQmlContext;
        qtc.QQmlEngine_SetContextForObject(@ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` param1: QEvent `
    ///
    pub fn event(self: QQmlEngine, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.QQmlEngine_Event(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` callback: *const fn (self: QQmlEngine, param1: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QQmlEngine, callback: *const fn (QQmlEngine, QEvent) callconv(.c) bool) void {
        qtc.QQmlEngine_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#event)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` param1: QEvent `
    ///
    pub fn superEvent(self: QQmlEngine, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.QQmlEngine_SuperEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `quit` instead
    ///
    pub const Quit = quit;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#quit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    pub fn quit(self: QQmlEngine) void {
        qtc.QQmlEngine_Quit(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onQuit` instead
    ///
    pub const OnQuit = onQuit;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#quit)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` callback: *const fn (self: QQmlEngine) callconv(.c) void `
    ///
    pub fn onQuit(self: QQmlEngine, callback: *const fn (QQmlEngine) callconv(.c) void) void {
        qtc.QQmlEngine_Connect_Quit(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `exit` instead
    ///
    pub const Exit = exit;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#exit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` retCode: i32 `
    ///
    pub fn exit(self: QQmlEngine, retCode: i32) void {
        qtc.QQmlEngine_Exit(@ptrCast(self.ptr), @bitCast(retCode));
    }

    /// ### DEPRECATED: Use `onExit` instead
    ///
    pub const OnExit = onExit;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#exit)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` callback: *const fn (self: QQmlEngine, retCode: i32) callconv(.c) void `
    ///
    pub fn onExit(self: QQmlEngine, callback: *const fn (QQmlEngine, i32) callconv(.c) void) void {
        qtc.QQmlEngine_Connect_Exit(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `warnings` instead
    ///
    pub const Warnings = warnings;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#warnings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` _warnings: []QQmlError `
    ///
    pub fn warnings(self: QQmlEngine, _warnings: []QQmlError) void {
        const warnings_list = qtc.libqt_list{
            .len = _warnings.len,
            .data = @ptrCast(_warnings.ptr),
        };
        qtc.QQmlEngine_Warnings(@ptrCast(self.ptr), warnings_list);
    }

    /// ### DEPRECATED: Use `onWarnings` instead
    ///
    pub const OnWarnings = onWarnings;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#warnings)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` callback: *const fn (self: QQmlEngine, warnings: qtc.libqt_list ([]QQmlError)) callconv(.c) void `
    ///
    pub fn onWarnings(self: QQmlEngine, callback: *const fn (QQmlEngine, qtc.libqt_list) callconv(.c) void) void {
        qtc.QQmlEngine_Connect_Warnings(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

    /// Inherited from QObject
    ///
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
        var _str = qtc.QQmlEngine_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQmlEngine.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

    /// Inherited from QObject
    ///
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
        var _str = qtc.QQmlEngine_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQmlEngine.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `globalObject` instead
    ///
    pub const GlobalObject = globalObject;

    /// Inherited from QJSEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#globalObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    pub fn globalObject(self: QQmlEngine) QJSValue {
        return .{ .ptr = qtc.QJSEngine_GlobalObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `evaluate` instead
    ///
    pub const Evaluate = evaluate;

    /// Inherited from QJSEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#evaluate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` program: []const u8 `
    ///
    pub fn evaluate(self: QQmlEngine, program: []const u8) QJSValue {
        const program_str = qtc.libqt_string{
            .len = program.len,
            .data = program.ptr,
        };
        return .{ .ptr = qtc.QJSEngine_Evaluate(@ptrCast(self.ptr), program_str) };
    }

    /// ### DEPRECATED: Use `importModule` instead
    ///
    pub const ImportModule = importModule;

    /// Inherited from QJSEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#importModule)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn importModule(self: QQmlEngine, fileName: []const u8) QJSValue {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return .{ .ptr = qtc.QJSEngine_ImportModule(@ptrCast(self.ptr), fileName_str) };
    }

    /// ### DEPRECATED: Use `registerModule` instead
    ///
    pub const RegisterModule = registerModule;

    /// Inherited from QJSEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#registerModule)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` moduleName: []const u8 `
    ///
    /// ` value: QJSValue `
    ///
    pub fn registerModule(self: QQmlEngine, moduleName: []const u8, value: anytype) bool {
        const moduleName_str = qtc.libqt_string{
            .len = moduleName.len,
            .data = moduleName.ptr,
        };
        comptime _ = @TypeOf(value)._is_QJSValue;
        return qtc.QJSEngine_RegisterModule(@ptrCast(self.ptr), moduleName_str, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `newObject` instead
    ///
    pub const NewObject = newObject;

    /// Inherited from QJSEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#newObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    pub fn newObject(self: QQmlEngine) QJSValue {
        return .{ .ptr = qtc.QJSEngine_NewObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `newSymbol` instead
    ///
    pub const NewSymbol = newSymbol;

    /// Inherited from QJSEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#newSymbol)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` name: []const u8 `
    ///
    pub fn newSymbol(self: QQmlEngine, name: []const u8) QJSValue {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QJSEngine_NewSymbol(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `newArray` instead
    ///
    pub const NewArray = newArray;

    /// Inherited from QJSEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#newArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    pub fn newArray(self: QQmlEngine) QJSValue {
        return .{ .ptr = qtc.QJSEngine_NewArray(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `newQObject` instead
    ///
    pub const NewQObject = newQObject;

    /// Inherited from QJSEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#newQObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` object: QObject `
    ///
    pub fn newQObject(self: QQmlEngine, object: anytype) QJSValue {
        comptime _ = @TypeOf(object)._is_QObject;
        return .{ .ptr = qtc.QJSEngine_NewQObject(@ptrCast(self.ptr), @ptrCast(object.ptr)) };
    }

    /// ### DEPRECATED: Use `newQMetaObject` instead
    ///
    pub const NewQMetaObject = newQMetaObject;

    /// Inherited from QJSEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#newQMetaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` _metaObject: QMetaObject `
    ///
    pub fn newQMetaObject(self: QQmlEngine, _metaObject: anytype) QJSValue {
        comptime _ = @TypeOf(_metaObject)._is_QMetaObject;
        return .{ .ptr = qtc.QJSEngine_NewQMetaObject(@ptrCast(self.ptr), @ptrCast(_metaObject.ptr)) };
    }

    /// ### DEPRECATED: Use `newErrorObject` instead
    ///
    pub const NewErrorObject = newErrorObject;

    /// Inherited from QJSEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#newErrorObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` errorType: qjsvalue_enums.ErrorType `
    ///
    pub fn newErrorObject(self: QQmlEngine, errorType: i32) QJSValue {
        return .{ .ptr = qtc.QJSEngine_NewErrorObject(@ptrCast(self.ptr), @bitCast(errorType)) };
    }

    /// ### DEPRECATED: Use `collectGarbage` instead
    ///
    pub const CollectGarbage = collectGarbage;

    /// Inherited from QJSEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#collectGarbage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    pub fn collectGarbage(self: QQmlEngine) void {
        qtc.QJSEngine_CollectGarbage(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setObjectOwnership` instead
    ///
    pub const SetObjectOwnership = setObjectOwnership;

    /// Inherited from QJSEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#setObjectOwnership)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: qjsengine_enums.ObjectOwnership `
    ///
    pub fn setObjectOwnership(param1: anytype, param2: i32) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QJSEngine_SetObjectOwnership(@ptrCast(param1.ptr), @bitCast(param2));
    }

    /// ### DEPRECATED: Use `objectOwnership` instead
    ///
    pub const ObjectOwnership = objectOwnership;

    /// Inherited from QJSEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#objectOwnership)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QObject `
    ///
    /// ## Returns:
    ///
    /// ` qjsengine_enums.ObjectOwnership `
    ///
    pub fn objectOwnership(param1: anytype) i32 {
        comptime _ = @TypeOf(param1)._is_QObject;
        return qtc.QJSEngine_ObjectOwnership(@ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `installExtensions` instead
    ///
    pub const InstallExtensions = installExtensions;

    /// Inherited from QJSEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#installExtensions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` extensions: flag of qjsengine_enums.Extension `
    ///
    pub fn installExtensions(self: QQmlEngine, extensions: i32) void {
        qtc.QJSEngine_InstallExtensions(@ptrCast(self.ptr), @bitCast(extensions));
    }

    /// ### DEPRECATED: Use `setInterrupted` instead
    ///
    pub const SetInterrupted = setInterrupted;

    /// Inherited from QJSEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#setInterrupted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` interrupted: bool `
    ///
    pub fn setInterrupted(self: QQmlEngine, interrupted: bool) void {
        qtc.QJSEngine_SetInterrupted(@ptrCast(self.ptr), interrupted);
    }

    /// ### DEPRECATED: Use `isInterrupted` instead
    ///
    pub const IsInterrupted = isInterrupted;

    /// Inherited from QJSEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#isInterrupted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    pub fn isInterrupted(self: QQmlEngine) bool {
        return qtc.QJSEngine_IsInterrupted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `throwError` instead
    ///
    pub const ThrowError = throwError;

    /// Inherited from QJSEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#throwError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` message: []const u8 `
    ///
    pub fn throwError(self: QQmlEngine, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.QJSEngine_ThrowError(@ptrCast(self.ptr), message_str);
    }

    /// ### DEPRECATED: Use `throwError2` instead
    ///
    pub const ThrowError2 = throwError2;

    /// Inherited from QJSEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#throwError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` errorType: qjsvalue_enums.ErrorType `
    ///
    pub fn throwError2(self: QQmlEngine, errorType: i32) void {
        qtc.QJSEngine_ThrowError2(@ptrCast(self.ptr), @bitCast(errorType));
    }

    /// ### DEPRECATED: Use `throwError3` instead
    ///
    pub const ThrowError3 = throwError3;

    /// Inherited from QJSEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#throwError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` errorVal: QJSValue `
    ///
    pub fn throwError3(self: QQmlEngine, errorVal: anytype) void {
        comptime _ = @TypeOf(errorVal)._is_QJSValue;
        qtc.QJSEngine_ThrowError3(@ptrCast(self.ptr), @ptrCast(errorVal.ptr));
    }

    /// ### DEPRECATED: Use `hasError` instead
    ///
    pub const HasError = hasError;

    /// Inherited from QJSEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#hasError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    pub fn hasError(self: QQmlEngine) bool {
        return qtc.QJSEngine_HasError(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `catchError` instead
    ///
    pub const CatchError = catchError;

    /// Inherited from QJSEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#catchError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    pub fn catchError(self: QQmlEngine) QJSValue {
        return .{ .ptr = qtc.QJSEngine_CatchError(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `uiLanguage` instead
    ///
    pub const UiLanguage = uiLanguage;

    /// Inherited from QJSEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#uiLanguage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn uiLanguage(self: QQmlEngine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QJSEngine_UiLanguage(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQmlEngine.uiLanguage: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setUiLanguage` instead
    ///
    pub const SetUiLanguage = setUiLanguage;

    /// Inherited from QJSEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#setUiLanguage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` language: []const u8 `
    ///
    pub fn setUiLanguage(self: QQmlEngine, language: []const u8) void {
        const language_str = qtc.libqt_string{
            .len = language.len,
            .data = language.ptr,
        };
        qtc.QJSEngine_SetUiLanguage(@ptrCast(self.ptr), language_str);
    }

    /// ### DEPRECATED: Use `uiLanguageChanged` instead
    ///
    pub const UiLanguageChanged = uiLanguageChanged;

    /// Inherited from QJSEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#uiLanguageChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    pub fn uiLanguageChanged(self: QQmlEngine) void {
        qtc.QJSEngine_UiLanguageChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUiLanguageChanged` instead
    ///
    pub const OnUiLanguageChanged = onUiLanguageChanged;

    /// Inherited from QJSEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#uiLanguageChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` callback: *const fn (self: QQmlEngine) callconv(.c) void `
    ///
    pub fn onUiLanguageChanged(self: QQmlEngine, callback: *const fn (QQmlEngine) callconv(.c) void) void {
        qtc.QJSEngine_Connect_UiLanguageChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `evaluate2` instead
    ///
    pub const Evaluate2 = evaluate2;

    /// Inherited from QJSEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#evaluate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` program: []const u8 `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn evaluate2(self: QQmlEngine, program: []const u8, fileName: []const u8) QJSValue {
        const program_str = qtc.libqt_string{
            .len = program.len,
            .data = program.ptr,
        };
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return .{ .ptr = qtc.QJSEngine_Evaluate2(@ptrCast(self.ptr), program_str, fileName_str) };
    }

    /// ### DEPRECATED: Use `evaluate3` instead
    ///
    pub const Evaluate3 = evaluate3;

    /// Inherited from QJSEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#evaluate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` program: []const u8 `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` lineNumber: i32 `
    ///
    pub fn evaluate3(self: QQmlEngine, program: []const u8, fileName: []const u8, lineNumber: i32) QJSValue {
        const program_str = qtc.libqt_string{
            .len = program.len,
            .data = program.ptr,
        };
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return .{ .ptr = qtc.QJSEngine_Evaluate3(@ptrCast(self.ptr), program_str, fileName_str, @bitCast(lineNumber)) };
    }

    /// ### DEPRECATED: Use `evaluate4` instead
    ///
    pub const Evaluate4 = evaluate4;

    /// Inherited from QJSEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#evaluate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` program: []const u8 `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` lineNumber: i32 `
    ///
    /// ` exceptionStackTrace: []const []const u8 `
    ///
    pub fn evaluate4(self: QQmlEngine, allocator: std.mem.Allocator, program: []const u8, fileName: []const u8, lineNumber: i32, exceptionStackTrace: []const []const u8) QJSValue {
        const program_str = qtc.libqt_string{
            .len = program.len,
            .data = program.ptr,
        };
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const exceptionStackTrace_arr = allocator.alloc(qtc.libqt_string, exceptionStackTrace.len) catch @panic("QQmlEngine.evaluate4: Memory allocation failed");
        defer allocator.free(exceptionStackTrace_arr);
        for (exceptionStackTrace, 0..exceptionStackTrace.len) |str_item, i|
            exceptionStackTrace_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const exceptionStackTrace_list = qtc.libqt_list{
            .len = exceptionStackTrace.len,
            .data = exceptionStackTrace_arr.ptr,
        };
        return .{ .ptr = qtc.QJSEngine_Evaluate4(@ptrCast(self.ptr), program_str, fileName_str, @bitCast(lineNumber), exceptionStackTrace_list) };
    }

    /// ### DEPRECATED: Use `newArray1` instead
    ///
    pub const NewArray1 = newArray1;

    /// Inherited from QJSEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#newArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` length: u32 `
    ///
    pub fn newArray1(self: QQmlEngine, length: u32) QJSValue {
        return .{ .ptr = qtc.QJSEngine_NewArray1(@ptrCast(self.ptr), @bitCast(length)) };
    }

    /// ### DEPRECATED: Use `newErrorObject2` instead
    ///
    pub const NewErrorObject2 = newErrorObject2;

    /// Inherited from QJSEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#newErrorObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` errorType: qjsvalue_enums.ErrorType `
    ///
    /// ` message: []const u8 `
    ///
    pub fn newErrorObject2(self: QQmlEngine, errorType: i32, message: []const u8) QJSValue {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        return .{ .ptr = qtc.QJSEngine_NewErrorObject2(@ptrCast(self.ptr), @bitCast(errorType), message_str) };
    }

    /// ### DEPRECATED: Use `installExtensions2` instead
    ///
    pub const InstallExtensions2 = installExtensions2;

    /// Inherited from QJSEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#installExtensions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` extensions: flag of qjsengine_enums.Extension `
    ///
    /// ` object: QJSValue `
    ///
    pub fn installExtensions2(self: QQmlEngine, extensions: i32, object: anytype) void {
        comptime _ = @TypeOf(object)._is_QJSValue;
        qtc.QJSEngine_InstallExtensions2(@ptrCast(self.ptr), @bitCast(extensions), @ptrCast(object.ptr));
    }

    /// ### DEPRECATED: Use `throwError22` instead
    ///
    pub const ThrowError22 = throwError22;

    /// Inherited from QJSEngine
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#throwError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` errorType: qjsvalue_enums.ErrorType `
    ///
    /// ` message: []const u8 `
    ///
    pub fn throwError22(self: QQmlEngine, errorType: i32, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.QJSEngine_ThrowError22(@ptrCast(self.ptr), @bitCast(errorType), message_str);
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
    /// ` self: QQmlEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QQmlEngine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQmlEngine.objectName: Memory allocation failed");
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
    /// ` self: QQmlEngine `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QQmlEngine, name: []const u8) void {
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
    /// ` self: QQmlEngine `
    ///
    pub fn isWidgetType(self: QQmlEngine) bool {
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
    /// ` self: QQmlEngine `
    ///
    pub fn isWindowType(self: QQmlEngine) bool {
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
    /// ` self: QQmlEngine `
    ///
    pub fn isQuickItemType(self: QQmlEngine) bool {
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
    /// ` self: QQmlEngine `
    ///
    pub fn signalsBlocked(self: QQmlEngine) bool {
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
    /// ` self: QQmlEngine `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QQmlEngine, b: bool) bool {
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
    /// ` self: QQmlEngine `
    ///
    pub fn thread(self: QQmlEngine) QThread {
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
    /// ` self: QQmlEngine `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QQmlEngine, _thread: anytype) bool {
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
    /// ` self: QQmlEngine `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QQmlEngine, interval: i32) i32 {
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
    /// ` self: QQmlEngine `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QQmlEngine, time: i64) i32 {
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
    /// ` self: QQmlEngine `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QQmlEngine, id: i32) void {
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
    /// ` self: QQmlEngine `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QQmlEngine, id: i32) void {
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
    /// ` self: QQmlEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QQmlEngine, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QQmlEngine.children: Memory allocation failed");
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
    /// ` self: QQmlEngine `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QQmlEngine, _parent: anytype) void {
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
    /// ` self: QQmlEngine `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QQmlEngine, filterObj: anytype) void {
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
    /// ` self: QQmlEngine `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QQmlEngine, obj: anytype) void {
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
    /// ` self: QQmlEngine `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QQmlEngine, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QQmlEngine `
    ///
    pub fn disconnect3(self: QQmlEngine) bool {
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
    /// ` self: QQmlEngine `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QQmlEngine, receiver: anytype) bool {
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
    /// ` self: QQmlEngine `
    ///
    pub fn dumpObjectTree(self: QQmlEngine) void {
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
    /// ` self: QQmlEngine `
    ///
    pub fn dumpObjectInfo(self: QQmlEngine) void {
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
    /// ` self: QQmlEngine `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QQmlEngine, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QQmlEngine `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QQmlEngine, name: [:0]const u8) QVariant {
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
    /// ` self: QQmlEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QQmlEngine, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QQmlEngine.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QQmlEngine.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QQmlEngine `
    ///
    pub fn bindingStorage(self: QQmlEngine) QBindingStorage {
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
    /// ` self: QQmlEngine `
    ///
    pub fn bindingStorage2(self: QQmlEngine) QBindingStorage {
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
    /// ` self: QQmlEngine `
    ///
    pub fn destroyed(self: QQmlEngine) void {
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
    /// ` self: QQmlEngine `
    ///
    /// ` callback: *const fn (self: QQmlEngine) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QQmlEngine, callback: *const fn (QQmlEngine) callconv(.c) void) void {
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
    /// ` self: QQmlEngine `
    ///
    pub fn parent(self: QQmlEngine) QObject {
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
    /// ` self: QQmlEngine `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QQmlEngine, classname: [:0]const u8) bool {
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
    /// ` self: QQmlEngine `
    ///
    pub fn deleteLater(self: QQmlEngine) void {
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
    /// ` self: QQmlEngine `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QQmlEngine, interval: i32, timerType: i32) i32 {
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
    /// ` self: QQmlEngine `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QQmlEngine, time: i64, timerType: i32) i32 {
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
    /// ` self: QQmlEngine `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QQmlEngine, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QQmlEngine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QQmlEngine, signal: [:0]const u8) bool {
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
    /// ` self: QQmlEngine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QQmlEngine, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QQmlEngine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QQmlEngine, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QQmlEngine `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QQmlEngine, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QQmlEngine `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QQmlEngine, param1: anytype) void {
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
    /// ` self: QQmlEngine `
    ///
    /// ` callback: *const fn (self: QQmlEngine, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QQmlEngine, callback: *const fn (QQmlEngine, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QQmlEngine, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QQmlEngine_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QQmlEngine, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QQmlEngine_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQmlEngine`
    ///
    /// ` callback: *const fn (self: QQmlEngine, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QQmlEngine, callback: *const fn (QQmlEngine, QObject, QEvent) callconv(.c) bool) void {
        qtc.QQmlEngine_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `timerEvent` instead
    ///
    pub const TimerEvent = timerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QQmlEngine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QQmlEngine_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superTimerEvent` instead
    ///
    pub const SuperTimerEvent = superTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QQmlEngine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QQmlEngine_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onTimerEvent` instead
    ///
    pub const OnTimerEvent = onTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQmlEngine`
    ///
    /// ` callback: *const fn (self: QQmlEngine, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QQmlEngine, callback: *const fn (QQmlEngine, QTimerEvent) callconv(.c) void) void {
        qtc.QQmlEngine_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `childEvent` instead
    ///
    pub const ChildEvent = childEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QQmlEngine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QQmlEngine_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superChildEvent` instead
    ///
    pub const SuperChildEvent = superChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QQmlEngine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QQmlEngine_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onChildEvent` instead
    ///
    pub const OnChildEvent = onChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQmlEngine`
    ///
    /// ` callback: *const fn (self: QQmlEngine, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QQmlEngine, callback: *const fn (QQmlEngine, QChildEvent) callconv(.c) void) void {
        qtc.QQmlEngine_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `customEvent` instead
    ///
    pub const CustomEvent = customEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QQmlEngine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QQmlEngine_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superCustomEvent` instead
    ///
    pub const SuperCustomEvent = superCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QQmlEngine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QQmlEngine_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onCustomEvent` instead
    ///
    pub const OnCustomEvent = onCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQmlEngine`
    ///
    /// ` callback: *const fn (self: QQmlEngine, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QQmlEngine, callback: *const fn (QQmlEngine, QEvent) callconv(.c) void) void {
        qtc.QQmlEngine_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `connectNotify` instead
    ///
    pub const ConnectNotify = connectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QQmlEngine, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QQmlEngine_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superConnectNotify` instead
    ///
    pub const SuperConnectNotify = superConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QQmlEngine, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QQmlEngine_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onConnectNotify` instead
    ///
    pub const OnConnectNotify = onConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQmlEngine`
    ///
    /// ` callback: *const fn (self: QQmlEngine, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QQmlEngine, callback: *const fn (QQmlEngine, QMetaMethod) callconv(.c) void) void {
        qtc.QQmlEngine_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `disconnectNotify` instead
    ///
    pub const DisconnectNotify = disconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QQmlEngine, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QQmlEngine_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superDisconnectNotify` instead
    ///
    pub const SuperDisconnectNotify = superDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QQmlEngine, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QQmlEngine_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onDisconnectNotify` instead
    ///
    pub const OnDisconnectNotify = onDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQmlEngine`
    ///
    /// ` callback: *const fn (self: QQmlEngine, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QQmlEngine, callback: *const fn (QQmlEngine, QMetaMethod) callconv(.c) void) void {
        qtc.QQmlEngine_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sender` instead
    ///
    pub const Sender = sender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    pub fn sender(self: QQmlEngine) QObject {
        return .{ .ptr = qtc.QQmlEngine_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSender` instead
    ///
    pub const SuperSender = superSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    pub fn superSender(self: QQmlEngine) QObject {
        return .{ .ptr = qtc.QQmlEngine_SuperSender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSender` instead
    ///
    pub const OnSender = onSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQmlEngine`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QQmlEngine, callback: *const fn () callconv(.c) QObject) void {
        qtc.QQmlEngine_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `senderSignalIndex` instead
    ///
    pub const SenderSignalIndex = senderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    pub fn senderSignalIndex(self: QQmlEngine) i32 {
        return qtc.QQmlEngine_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSenderSignalIndex` instead
    ///
    pub const SuperSenderSignalIndex = superSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    pub fn superSenderSignalIndex(self: QQmlEngine) i32 {
        return qtc.QQmlEngine_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSenderSignalIndex` instead
    ///
    pub const OnSenderSignalIndex = onSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQmlEngine`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QQmlEngine, callback: *const fn () callconv(.c) i32) void {
        qtc.QQmlEngine_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `receivers` instead
    ///
    pub const Receivers = receivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QQmlEngine, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QQmlEngine_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `superReceivers` instead
    ///
    pub const SuperReceivers = superReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QQmlEngine, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QQmlEngine_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `onReceivers` instead
    ///
    pub const OnReceivers = onReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQmlEngine`
    ///
    /// ` callback: *const fn (self: QQmlEngine, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QQmlEngine, callback: *const fn (QQmlEngine, [*:0]const u8) callconv(.c) i32) void {
        qtc.QQmlEngine_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isSignalConnected` instead
    ///
    pub const IsSignalConnected = isSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QQmlEngine, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QQmlEngine_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superIsSignalConnected` instead
    ///
    pub const SuperIsSignalConnected = superIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlEngine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QQmlEngine, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QQmlEngine_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onIsSignalConnected` instead
    ///
    pub const OnIsSignalConnected = onIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQmlEngine`
    ///
    /// ` callback: *const fn (self: QQmlEngine, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QQmlEngine, callback: *const fn (QQmlEngine, QMetaMethod) callconv(.c) bool) void {
        qtc.QQmlEngine_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQmlEngine `
    ///
    /// ` callback: *const fn (self: QQmlEngine, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QQmlEngine, callback: *const fn (QQmlEngine, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#dtor.QQmlEngine)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QQmlEngine `
    ///
    pub fn delete(self: QQmlEngine) void {
        qtc.QQmlEngine_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#public-types)
pub const enums = struct {
    pub const ImageType = enum {
        pub const Invalid: i32 = 0;
        pub const Image: i32 = 1;
        pub const Pixmap: i32 = 2;
        pub const Texture: i32 = 3;
        pub const ImageResponse: i32 = 4;
    };

    pub const Flag = enum {
        pub const ForceAsynchronousImageLoading: i32 = 1;
    };
};
