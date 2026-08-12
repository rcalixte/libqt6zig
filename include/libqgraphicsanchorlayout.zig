const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QEvent = @import("libqt6").QEvent;
const QGraphicsItem = @import("libqt6").QGraphicsItem;
const QGraphicsLayoutItem = @import("libqt6").QGraphicsLayoutItem;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QRectF = @import("libqt6").QRectF;
const QSizeF = @import("libqt6").QSizeF;
const QSizePolicy = @import("libqt6").QSizePolicy;
const QThread = @import("libqt6").QThread;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const qsizepolicy_enums = @import("libqsizepolicy.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchor.html)
pub const QGraphicsAnchor = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchor.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QGraphicsAnchor,

    pub const _is_QGraphicsAnchor = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchor `
    ///
    pub fn metaObject(self: QGraphicsAnchor) QMetaObject {
        return .{ .ptr = qtc.QGraphicsAnchor_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchor `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QGraphicsAnchor, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGraphicsAnchor_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchor `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QGraphicsAnchor, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGraphicsAnchor_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGraphicsAnchor.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setSpacing` instead
    ///
    pub const SetSpacing = setSpacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchor.html#setSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchor `
    ///
    /// ` _spacing: f64 `
    ///
    pub fn setSpacing(self: QGraphicsAnchor, _spacing: f64) void {
        qtc.QGraphicsAnchor_SetSpacing(@ptrCast(self.ptr), @bitCast(_spacing));
    }

    /// ### DEPRECATED: Use `unsetSpacing` instead
    ///
    pub const UnsetSpacing = unsetSpacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchor.html#unsetSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchor `
    ///
    pub fn unsetSpacing(self: QGraphicsAnchor) void {
        qtc.QGraphicsAnchor_UnsetSpacing(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `spacing` instead
    ///
    pub const Spacing = spacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchor.html#spacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchor `
    ///
    pub fn spacing(self: QGraphicsAnchor) f64 {
        return qtc.QGraphicsAnchor_Spacing(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSizePolicy` instead
    ///
    pub const SetSizePolicy = setSizePolicy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchor.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchor `
    ///
    /// ` policy: qsizepolicy_enums.Policy `
    ///
    pub fn setSizePolicy(self: QGraphicsAnchor, policy: i32) void {
        qtc.QGraphicsAnchor_SetSizePolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// ### DEPRECATED: Use `sizePolicy` instead
    ///
    pub const SizePolicy = sizePolicy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchor.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchor `
    ///
    /// ## Returns:
    ///
    /// ` qsizepolicy_enums.Policy `
    ///
    pub fn sizePolicy(self: QGraphicsAnchor) i32 {
        return qtc.QGraphicsAnchor_SizePolicy(@ptrCast(self.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGraphicsAnchor.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGraphicsAnchor.tr3: Memory allocation failed");
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
    /// ` self: QGraphicsAnchor `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QGraphicsAnchor, _event: anytype) bool {
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
    /// ` self: QGraphicsAnchor `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QGraphicsAnchor, watched: anytype, _event: anytype) bool {
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
    /// ` self: QGraphicsAnchor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QGraphicsAnchor, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QGraphicsAnchor.objectName: Memory allocation failed");
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
    /// ` self: QGraphicsAnchor `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QGraphicsAnchor, name: []const u8) void {
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
    /// ` self: QGraphicsAnchor `
    ///
    pub fn isWidgetType(self: QGraphicsAnchor) bool {
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
    /// ` self: QGraphicsAnchor `
    ///
    pub fn isWindowType(self: QGraphicsAnchor) bool {
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
    /// ` self: QGraphicsAnchor `
    ///
    pub fn isQuickItemType(self: QGraphicsAnchor) bool {
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
    /// ` self: QGraphicsAnchor `
    ///
    pub fn signalsBlocked(self: QGraphicsAnchor) bool {
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
    /// ` self: QGraphicsAnchor `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QGraphicsAnchor, b: bool) bool {
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
    /// ` self: QGraphicsAnchor `
    ///
    pub fn thread(self: QGraphicsAnchor) QThread {
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
    /// ` self: QGraphicsAnchor `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QGraphicsAnchor, _thread: anytype) bool {
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
    /// ` self: QGraphicsAnchor `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QGraphicsAnchor, interval: i32) i32 {
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
    /// ` self: QGraphicsAnchor `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QGraphicsAnchor, time: i64) i32 {
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
    /// ` self: QGraphicsAnchor `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QGraphicsAnchor, id: i32) void {
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
    /// ` self: QGraphicsAnchor `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QGraphicsAnchor, id: i32) void {
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
    /// ` self: QGraphicsAnchor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QGraphicsAnchor, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QGraphicsAnchor.children: Memory allocation failed");
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
    /// ` self: QGraphicsAnchor `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QGraphicsAnchor, _parent: anytype) void {
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
    /// ` self: QGraphicsAnchor `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QGraphicsAnchor, filterObj: anytype) void {
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
    /// ` self: QGraphicsAnchor `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QGraphicsAnchor, obj: anytype) void {
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
    /// ` self: QGraphicsAnchor `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QGraphicsAnchor, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QGraphicsAnchor `
    ///
    pub fn disconnect3(self: QGraphicsAnchor) bool {
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
    /// ` self: QGraphicsAnchor `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QGraphicsAnchor, receiver: anytype) bool {
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
    /// ` self: QGraphicsAnchor `
    ///
    pub fn dumpObjectTree(self: QGraphicsAnchor) void {
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
    /// ` self: QGraphicsAnchor `
    ///
    pub fn dumpObjectInfo(self: QGraphicsAnchor) void {
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
    /// ` self: QGraphicsAnchor `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QGraphicsAnchor, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QGraphicsAnchor `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QGraphicsAnchor, name: [:0]const u8) QVariant {
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
    /// ` self: QGraphicsAnchor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QGraphicsAnchor, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QGraphicsAnchor.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QGraphicsAnchor.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QGraphicsAnchor `
    ///
    pub fn bindingStorage(self: QGraphicsAnchor) QBindingStorage {
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
    /// ` self: QGraphicsAnchor `
    ///
    pub fn bindingStorage2(self: QGraphicsAnchor) QBindingStorage {
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
    /// ` self: QGraphicsAnchor `
    ///
    pub fn destroyed(self: QGraphicsAnchor) void {
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
    /// ` self: QGraphicsAnchor `
    ///
    /// ` callback: *const fn (self: QGraphicsAnchor) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QGraphicsAnchor, callback: *const fn (QGraphicsAnchor) callconv(.c) void) void {
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
    /// ` self: QGraphicsAnchor `
    ///
    pub fn parent(self: QGraphicsAnchor) QObject {
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
    /// ` self: QGraphicsAnchor `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QGraphicsAnchor, classname: [:0]const u8) bool {
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
    /// ` self: QGraphicsAnchor `
    ///
    pub fn deleteLater(self: QGraphicsAnchor) void {
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
    /// ` self: QGraphicsAnchor `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QGraphicsAnchor, interval: i32, timerType: i32) i32 {
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
    /// ` self: QGraphicsAnchor `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QGraphicsAnchor, time: i64, timerType: i32) i32 {
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
    /// ` self: QGraphicsAnchor `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QGraphicsAnchor, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QGraphicsAnchor `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QGraphicsAnchor, signal: [:0]const u8) bool {
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
    /// ` self: QGraphicsAnchor `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QGraphicsAnchor, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QGraphicsAnchor `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QGraphicsAnchor, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QGraphicsAnchor `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QGraphicsAnchor, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QGraphicsAnchor `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QGraphicsAnchor, param1: anytype) void {
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
    /// ` self: QGraphicsAnchor `
    ///
    /// ` callback: *const fn (self: QGraphicsAnchor, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QGraphicsAnchor, callback: *const fn (QGraphicsAnchor, QObject) callconv(.c) void) void {
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
    /// ` self: QGraphicsAnchor `
    ///
    /// ` callback: *const fn (self: QGraphicsAnchor, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QGraphicsAnchor, callback: *const fn (QGraphicsAnchor, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchor.html#dtor.QGraphicsAnchor)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QGraphicsAnchor `
    ///
    pub fn delete(self: QGraphicsAnchor) void {
        qtc.QGraphicsAnchor_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html)
pub const QGraphicsAnchorLayout = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QGraphicsAnchorLayout,

    pub const _is_QGraphicsAnchorLayout = {};
    pub const _is_QGraphicsLayout = {};
    pub const _is_QGraphicsLayoutItem = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QGraphicsAnchorLayout object in C++ memory
    ///
    pub fn new() QGraphicsAnchorLayout {
        return .{ .ptr = qtc.QGraphicsAnchorLayout_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QGraphicsAnchorLayout object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QGraphicsLayoutItem `
    ///
    pub fn new2(_parent: anytype) QGraphicsAnchorLayout {
        comptime _ = @TypeOf(_parent)._is_QGraphicsLayoutItem;
        return .{ .ptr = qtc.QGraphicsAnchorLayout_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `addAnchor` instead
    ///
    pub const AddAnchor = addAnchor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#addAnchor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    /// ` firstItem: QGraphicsLayoutItem `
    ///
    /// ` firstEdge: qnamespace_enums.AnchorPoint `
    ///
    /// ` secondItem: QGraphicsLayoutItem `
    ///
    /// ` secondEdge: qnamespace_enums.AnchorPoint `
    ///
    pub fn addAnchor(self: QGraphicsAnchorLayout, firstItem: anytype, firstEdge: i32, secondItem: anytype, secondEdge: i32) QGraphicsAnchor {
        comptime _ = @TypeOf(firstItem)._is_QGraphicsLayoutItem;
        comptime _ = @TypeOf(secondItem)._is_QGraphicsLayoutItem;
        return .{ .ptr = qtc.QGraphicsAnchorLayout_AddAnchor(@ptrCast(self.ptr), @ptrCast(firstItem.ptr), @bitCast(firstEdge), @ptrCast(secondItem.ptr), @bitCast(secondEdge)) };
    }

    /// ### DEPRECATED: Use `anchor` instead
    ///
    pub const Anchor = anchor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#anchor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    /// ` firstItem: QGraphicsLayoutItem `
    ///
    /// ` firstEdge: qnamespace_enums.AnchorPoint `
    ///
    /// ` secondItem: QGraphicsLayoutItem `
    ///
    /// ` secondEdge: qnamespace_enums.AnchorPoint `
    ///
    pub fn anchor(self: QGraphicsAnchorLayout, firstItem: anytype, firstEdge: i32, secondItem: anytype, secondEdge: i32) QGraphicsAnchor {
        comptime _ = @TypeOf(firstItem)._is_QGraphicsLayoutItem;
        comptime _ = @TypeOf(secondItem)._is_QGraphicsLayoutItem;
        return .{ .ptr = qtc.QGraphicsAnchorLayout_Anchor(@ptrCast(self.ptr), @ptrCast(firstItem.ptr), @bitCast(firstEdge), @ptrCast(secondItem.ptr), @bitCast(secondEdge)) };
    }

    /// ### DEPRECATED: Use `addCornerAnchors` instead
    ///
    pub const AddCornerAnchors = addCornerAnchors;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#addCornerAnchors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    /// ` firstItem: QGraphicsLayoutItem `
    ///
    /// ` firstCorner: qnamespace_enums.Corner `
    ///
    /// ` secondItem: QGraphicsLayoutItem `
    ///
    /// ` secondCorner: qnamespace_enums.Corner `
    ///
    pub fn addCornerAnchors(self: QGraphicsAnchorLayout, firstItem: anytype, firstCorner: i32, secondItem: anytype, secondCorner: i32) void {
        comptime _ = @TypeOf(firstItem)._is_QGraphicsLayoutItem;
        comptime _ = @TypeOf(secondItem)._is_QGraphicsLayoutItem;
        qtc.QGraphicsAnchorLayout_AddCornerAnchors(@ptrCast(self.ptr), @ptrCast(firstItem.ptr), @bitCast(firstCorner), @ptrCast(secondItem.ptr), @bitCast(secondCorner));
    }

    /// ### DEPRECATED: Use `addAnchors` instead
    ///
    pub const AddAnchors = addAnchors;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#addAnchors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    /// ` firstItem: QGraphicsLayoutItem `
    ///
    /// ` secondItem: QGraphicsLayoutItem `
    ///
    pub fn addAnchors(self: QGraphicsAnchorLayout, firstItem: anytype, secondItem: anytype) void {
        comptime _ = @TypeOf(firstItem)._is_QGraphicsLayoutItem;
        comptime _ = @TypeOf(secondItem)._is_QGraphicsLayoutItem;
        qtc.QGraphicsAnchorLayout_AddAnchors(@ptrCast(self.ptr), @ptrCast(firstItem.ptr), @ptrCast(secondItem.ptr));
    }

    /// ### DEPRECATED: Use `setHorizontalSpacing` instead
    ///
    pub const SetHorizontalSpacing = setHorizontalSpacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#setHorizontalSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    /// ` _spacing: f64 `
    ///
    pub fn setHorizontalSpacing(self: QGraphicsAnchorLayout, _spacing: f64) void {
        qtc.QGraphicsAnchorLayout_SetHorizontalSpacing(@ptrCast(self.ptr), @bitCast(_spacing));
    }

    /// ### DEPRECATED: Use `setVerticalSpacing` instead
    ///
    pub const SetVerticalSpacing = setVerticalSpacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#setVerticalSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    /// ` _spacing: f64 `
    ///
    pub fn setVerticalSpacing(self: QGraphicsAnchorLayout, _spacing: f64) void {
        qtc.QGraphicsAnchorLayout_SetVerticalSpacing(@ptrCast(self.ptr), @bitCast(_spacing));
    }

    /// ### DEPRECATED: Use `setSpacing` instead
    ///
    pub const SetSpacing = setSpacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#setSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    /// ` _spacing: f64 `
    ///
    pub fn setSpacing(self: QGraphicsAnchorLayout, _spacing: f64) void {
        qtc.QGraphicsAnchorLayout_SetSpacing(@ptrCast(self.ptr), @bitCast(_spacing));
    }

    /// ### DEPRECATED: Use `horizontalSpacing` instead
    ///
    pub const HorizontalSpacing = horizontalSpacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#horizontalSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    pub fn horizontalSpacing(self: QGraphicsAnchorLayout) f64 {
        return qtc.QGraphicsAnchorLayout_HorizontalSpacing(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `verticalSpacing` instead
    ///
    pub const VerticalSpacing = verticalSpacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#verticalSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    pub fn verticalSpacing(self: QGraphicsAnchorLayout) f64 {
        return qtc.QGraphicsAnchorLayout_VerticalSpacing(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `removeAt` instead
    ///
    pub const RemoveAt = removeAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#removeAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    /// ` index: i32 `
    ///
    pub fn removeAt(self: QGraphicsAnchorLayout, index: i32) void {
        qtc.QGraphicsAnchorLayout_RemoveAt(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `onRemoveAt` instead
    ///
    pub const OnRemoveAt = onRemoveAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#removeAt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    /// ` callback: *const fn (self: QGraphicsAnchorLayout, index: i32) callconv(.c) void `
    ///
    pub fn onRemoveAt(self: QGraphicsAnchorLayout, callback: *const fn (QGraphicsAnchorLayout, i32) callconv(.c) void) void {
        qtc.QGraphicsAnchorLayout_OnRemoveAt(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRemoveAt` instead
    ///
    pub const SuperRemoveAt = superRemoveAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#removeAt)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    /// ` index: i32 `
    ///
    pub fn superRemoveAt(self: QGraphicsAnchorLayout, index: i32) void {
        qtc.QGraphicsAnchorLayout_SuperRemoveAt(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `setGeometry` instead
    ///
    pub const SetGeometry = setGeometry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    /// ` rect: QRectF `
    ///
    pub fn setGeometry(self: QGraphicsAnchorLayout, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsAnchorLayout_SetGeometry(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### DEPRECATED: Use `onSetGeometry` instead
    ///
    pub const OnSetGeometry = onSetGeometry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#setGeometry)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    /// ` callback: *const fn (self: QGraphicsAnchorLayout, rect: QRectF) callconv(.c) void `
    ///
    pub fn onSetGeometry(self: QGraphicsAnchorLayout, callback: *const fn (QGraphicsAnchorLayout, QRectF) callconv(.c) void) void {
        qtc.QGraphicsAnchorLayout_OnSetGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetGeometry` instead
    ///
    pub const SuperSetGeometry = superSetGeometry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#setGeometry)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    /// ` rect: QRectF `
    ///
    pub fn superSetGeometry(self: QGraphicsAnchorLayout, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsAnchorLayout_SuperSetGeometry(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### DEPRECATED: Use `count` instead
    ///
    pub const Count = count;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    pub fn count(self: QGraphicsAnchorLayout) i32 {
        return qtc.QGraphicsAnchorLayout_Count(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCount` instead
    ///
    pub const OnCount = onCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#count)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onCount(self: QGraphicsAnchorLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QGraphicsAnchorLayout_OnCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCount` instead
    ///
    pub const SuperCount = superCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#count)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    pub fn superCount(self: QGraphicsAnchorLayout) i32 {
        return qtc.QGraphicsAnchorLayout_SuperCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `itemAt` instead
    ///
    pub const ItemAt = itemAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#itemAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    /// ` index: i32 `
    ///
    pub fn itemAt(self: QGraphicsAnchorLayout, index: i32) QGraphicsLayoutItem {
        return .{ .ptr = qtc.QGraphicsAnchorLayout_ItemAt(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `onItemAt` instead
    ///
    pub const OnItemAt = onItemAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#itemAt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    /// ` callback: *const fn (self: QGraphicsAnchorLayout, index: i32) callconv(.c) QGraphicsLayoutItem `
    ///
    pub fn onItemAt(self: QGraphicsAnchorLayout, callback: *const fn (QGraphicsAnchorLayout, i32) callconv(.c) QGraphicsLayoutItem) void {
        qtc.QGraphicsAnchorLayout_OnItemAt(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superItemAt` instead
    ///
    pub const SuperItemAt = superItemAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#itemAt)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    /// ` index: i32 `
    ///
    pub fn superItemAt(self: QGraphicsAnchorLayout, index: i32) QGraphicsLayoutItem {
        return .{ .ptr = qtc.QGraphicsAnchorLayout_SuperItemAt(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `invalidate` instead
    ///
    pub const Invalidate = invalidate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#invalidate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    pub fn invalidate(self: QGraphicsAnchorLayout) void {
        qtc.QGraphicsAnchorLayout_Invalidate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onInvalidate` instead
    ///
    pub const OnInvalidate = onInvalidate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#invalidate)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onInvalidate(self: QGraphicsAnchorLayout, callback: *const fn () callconv(.c) void) void {
        qtc.QGraphicsAnchorLayout_OnInvalidate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superInvalidate` instead
    ///
    pub const SuperInvalidate = superInvalidate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#invalidate)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    pub fn superInvalidate(self: QGraphicsAnchorLayout) void {
        qtc.QGraphicsAnchorLayout_SuperInvalidate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `sizeHint` instead
    ///
    pub const SizeHint = sizeHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#sizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    /// ` which: qnamespace_enums.SizeHint `
    ///
    /// ` constraint: QSizeF `
    ///
    pub fn sizeHint(self: QGraphicsAnchorLayout, which: i32, constraint: anytype) QSizeF {
        comptime _ = @TypeOf(constraint)._is_QSizeF;
        return .{ .ptr = qtc.QGraphicsAnchorLayout_SizeHint(@ptrCast(self.ptr), @bitCast(which), @ptrCast(constraint.ptr)) };
    }

    /// ### DEPRECATED: Use `onSizeHint` instead
    ///
    pub const OnSizeHint = onSizeHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#sizeHint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    /// ` callback: *const fn (self: QGraphicsAnchorLayout, which: qnamespace_enums.SizeHint, constraint: QSizeF) callconv(.c) QSizeF `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSizeHint(self: QGraphicsAnchorLayout, callback: *const fn (QGraphicsAnchorLayout, i32, QSizeF) callconv(.c) QSizeF) void {
        qtc.QGraphicsAnchorLayout_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSizeHint` instead
    ///
    pub const SuperSizeHint = superSizeHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#sizeHint)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    /// ` which: qnamespace_enums.SizeHint `
    ///
    /// ` constraint: QSizeF `
    ///
    pub fn superSizeHint(self: QGraphicsAnchorLayout, which: i32, constraint: anytype) QSizeF {
        comptime _ = @TypeOf(constraint)._is_QSizeF;
        return .{ .ptr = qtc.QGraphicsAnchorLayout_SuperSizeHint(@ptrCast(self.ptr), @bitCast(which), @ptrCast(constraint.ptr)) };
    }

    /// ### DEPRECATED: Use `addAnchors3` instead
    ///
    pub const AddAnchors3 = addAnchors3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#addAnchors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    /// ` firstItem: QGraphicsLayoutItem `
    ///
    /// ` secondItem: QGraphicsLayoutItem `
    ///
    /// ` orientations: flag of qnamespace_enums.Orientation `
    ///
    pub fn addAnchors3(self: QGraphicsAnchorLayout, firstItem: anytype, secondItem: anytype, orientations: i32) void {
        comptime _ = @TypeOf(firstItem)._is_QGraphicsLayoutItem;
        comptime _ = @TypeOf(secondItem)._is_QGraphicsLayoutItem;
        qtc.QGraphicsAnchorLayout_AddAnchors3(@ptrCast(self.ptr), @ptrCast(firstItem.ptr), @ptrCast(secondItem.ptr), @bitCast(orientations));
    }

    /// ### DEPRECATED: Use `setContentsMargins` instead
    ///
    pub const SetContentsMargins = setContentsMargins;

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    /// ` left: f64 `
    ///
    /// ` top: f64 `
    ///
    /// ` right: f64 `
    ///
    /// ` bottom: f64 `
    ///
    pub fn setContentsMargins(self: QGraphicsAnchorLayout, left: f64, top: f64, right: f64, bottom: f64) void {
        qtc.QGraphicsLayout_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// ### DEPRECATED: Use `activate` instead
    ///
    pub const Activate = activate;

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#activate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    pub fn activate(self: QGraphicsAnchorLayout) void {
        qtc.QGraphicsLayout_Activate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isActivated` instead
    ///
    pub const IsActivated = isActivated;

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#isActivated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    pub fn isActivated(self: QGraphicsAnchorLayout) bool {
        return qtc.QGraphicsLayout_IsActivated(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setInstantInvalidatePropagation` instead
    ///
    pub const SetInstantInvalidatePropagation = setInstantInvalidatePropagation;

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#setInstantInvalidatePropagation)
    ///
    /// ## Parameter(s):
    ///
    /// ` enable: bool `
    ///
    pub fn setInstantInvalidatePropagation(enable: bool) void {
        qtc.QGraphicsLayout_SetInstantInvalidatePropagation(enable);
    }

    /// ### DEPRECATED: Use `instantInvalidatePropagation` instead
    ///
    pub const InstantInvalidatePropagation = instantInvalidatePropagation;

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#instantInvalidatePropagation)
    ///
    pub fn instantInvalidatePropagation() bool {
        return qtc.QGraphicsLayout_InstantInvalidatePropagation();
    }

    /// ### DEPRECATED: Use `setSizePolicy` instead
    ///
    pub const SetSizePolicy = setSizePolicy;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    /// ` policy: QSizePolicy `
    ///
    pub fn setSizePolicy(self: QGraphicsAnchorLayout, policy: anytype) void {
        comptime _ = @TypeOf(policy)._is_QSizePolicy;
        qtc.QGraphicsLayoutItem_SetSizePolicy(@ptrCast(self.ptr), @ptrCast(policy.ptr));
    }

    /// ### DEPRECATED: Use `setSizePolicy2` instead
    ///
    pub const SetSizePolicy2 = setSizePolicy2;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    /// ` hPolicy: qsizepolicy_enums.Policy `
    ///
    /// ` vPolicy: qsizepolicy_enums.Policy `
    ///
    pub fn setSizePolicy2(self: QGraphicsAnchorLayout, hPolicy: i32, vPolicy: i32) void {
        qtc.QGraphicsLayoutItem_SetSizePolicy2(@ptrCast(self.ptr), @bitCast(hPolicy), @bitCast(vPolicy));
    }

    /// ### DEPRECATED: Use `sizePolicy` instead
    ///
    pub const SizePolicy = sizePolicy;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    pub fn sizePolicy(self: QGraphicsAnchorLayout) QSizePolicy {
        return .{ .ptr = qtc.QGraphicsLayoutItem_SizePolicy(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMinimumSize` instead
    ///
    pub const SetMinimumSize = setMinimumSize;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    /// ` size: QSizeF `
    ///
    pub fn setMinimumSize(self: QGraphicsAnchorLayout, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSizeF;
        qtc.QGraphicsLayoutItem_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// ### DEPRECATED: Use `setMinimumSize2` instead
    ///
    pub const SetMinimumSize2 = setMinimumSize2;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn setMinimumSize2(self: QGraphicsAnchorLayout, w: f64, h: f64) void {
        qtc.QGraphicsLayoutItem_SetMinimumSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `minimumSize` instead
    ///
    pub const MinimumSize = minimumSize;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    pub fn minimumSize(self: QGraphicsAnchorLayout) QSizeF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMinimumWidth` instead
    ///
    pub const SetMinimumWidth = setMinimumWidth;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    /// ` width: f64 `
    ///
    pub fn setMinimumWidth(self: QGraphicsAnchorLayout, width: f64) void {
        qtc.QGraphicsLayoutItem_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### DEPRECATED: Use `minimumWidth` instead
    ///
    pub const MinimumWidth = minimumWidth;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    pub fn minimumWidth(self: QGraphicsAnchorLayout) f64 {
        return qtc.QGraphicsLayoutItem_MinimumWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMinimumHeight` instead
    ///
    pub const SetMinimumHeight = setMinimumHeight;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    /// ` height: f64 `
    ///
    pub fn setMinimumHeight(self: QGraphicsAnchorLayout, height: f64) void {
        qtc.QGraphicsLayoutItem_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(height));
    }

    /// ### DEPRECATED: Use `minimumHeight` instead
    ///
    pub const MinimumHeight = minimumHeight;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    pub fn minimumHeight(self: QGraphicsAnchorLayout) f64 {
        return qtc.QGraphicsLayoutItem_MinimumHeight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPreferredSize` instead
    ///
    pub const SetPreferredSize = setPreferredSize;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    /// ` size: QSizeF `
    ///
    pub fn setPreferredSize(self: QGraphicsAnchorLayout, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSizeF;
        qtc.QGraphicsLayoutItem_SetPreferredSize(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// ### DEPRECATED: Use `setPreferredSize2` instead
    ///
    pub const SetPreferredSize2 = setPreferredSize2;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn setPreferredSize2(self: QGraphicsAnchorLayout, w: f64, h: f64) void {
        qtc.QGraphicsLayoutItem_SetPreferredSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `preferredSize` instead
    ///
    pub const PreferredSize = preferredSize;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    pub fn preferredSize(self: QGraphicsAnchorLayout) QSizeF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_PreferredSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPreferredWidth` instead
    ///
    pub const SetPreferredWidth = setPreferredWidth;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    /// ` width: f64 `
    ///
    pub fn setPreferredWidth(self: QGraphicsAnchorLayout, width: f64) void {
        qtc.QGraphicsLayoutItem_SetPreferredWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### DEPRECATED: Use `preferredWidth` instead
    ///
    pub const PreferredWidth = preferredWidth;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    pub fn preferredWidth(self: QGraphicsAnchorLayout) f64 {
        return qtc.QGraphicsLayoutItem_PreferredWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPreferredHeight` instead
    ///
    pub const SetPreferredHeight = setPreferredHeight;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    /// ` height: f64 `
    ///
    pub fn setPreferredHeight(self: QGraphicsAnchorLayout, height: f64) void {
        qtc.QGraphicsLayoutItem_SetPreferredHeight(@ptrCast(self.ptr), @bitCast(height));
    }

    /// ### DEPRECATED: Use `preferredHeight` instead
    ///
    pub const PreferredHeight = preferredHeight;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    pub fn preferredHeight(self: QGraphicsAnchorLayout) f64 {
        return qtc.QGraphicsLayoutItem_PreferredHeight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMaximumSize` instead
    ///
    pub const SetMaximumSize = setMaximumSize;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    /// ` size: QSizeF `
    ///
    pub fn setMaximumSize(self: QGraphicsAnchorLayout, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSizeF;
        qtc.QGraphicsLayoutItem_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// ### DEPRECATED: Use `setMaximumSize2` instead
    ///
    pub const SetMaximumSize2 = setMaximumSize2;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn setMaximumSize2(self: QGraphicsAnchorLayout, w: f64, h: f64) void {
        qtc.QGraphicsLayoutItem_SetMaximumSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `maximumSize` instead
    ///
    pub const MaximumSize = maximumSize;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    pub fn maximumSize(self: QGraphicsAnchorLayout) QSizeF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMaximumWidth` instead
    ///
    pub const SetMaximumWidth = setMaximumWidth;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    /// ` width: f64 `
    ///
    pub fn setMaximumWidth(self: QGraphicsAnchorLayout, width: f64) void {
        qtc.QGraphicsLayoutItem_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### DEPRECATED: Use `maximumWidth` instead
    ///
    pub const MaximumWidth = maximumWidth;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    pub fn maximumWidth(self: QGraphicsAnchorLayout) f64 {
        return qtc.QGraphicsLayoutItem_MaximumWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMaximumHeight` instead
    ///
    pub const SetMaximumHeight = setMaximumHeight;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    /// ` height: f64 `
    ///
    pub fn setMaximumHeight(self: QGraphicsAnchorLayout, height: f64) void {
        qtc.QGraphicsLayoutItem_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(height));
    }

    /// ### DEPRECATED: Use `maximumHeight` instead
    ///
    pub const MaximumHeight = maximumHeight;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    pub fn maximumHeight(self: QGraphicsAnchorLayout) f64 {
        return qtc.QGraphicsLayoutItem_MaximumHeight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `geometry` instead
    ///
    pub const Geometry = geometry;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    pub fn geometry(self: QGraphicsAnchorLayout) QRectF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_Geometry(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `contentsRect` instead
    ///
    pub const ContentsRect = contentsRect;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    pub fn contentsRect(self: QGraphicsAnchorLayout) QRectF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `effectiveSizeHint` instead
    ///
    pub const EffectiveSizeHint = effectiveSizeHint;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    /// ` which: qnamespace_enums.SizeHint `
    ///
    pub fn effectiveSizeHint(self: QGraphicsAnchorLayout, which: i32) QSizeF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_EffectiveSizeHint(@ptrCast(self.ptr), @bitCast(which)) };
    }

    /// ### DEPRECATED: Use `parentLayoutItem` instead
    ///
    pub const ParentLayoutItem = parentLayoutItem;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#parentLayoutItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    pub fn parentLayoutItem(self: QGraphicsAnchorLayout) QGraphicsLayoutItem {
        return .{ .ptr = qtc.QGraphicsLayoutItem_ParentLayoutItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setParentLayoutItem` instead
    ///
    pub const SetParentLayoutItem = setParentLayoutItem;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setParentLayoutItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    /// ` _parent: QGraphicsLayoutItem `
    ///
    pub fn setParentLayoutItem(self: QGraphicsAnchorLayout, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QGraphicsLayoutItem;
        qtc.QGraphicsLayoutItem_SetParentLayoutItem(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `isLayout` instead
    ///
    pub const IsLayout = isLayout;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    pub fn isLayout(self: QGraphicsAnchorLayout) bool {
        return qtc.QGraphicsLayoutItem_IsLayout(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `graphicsItem` instead
    ///
    pub const GraphicsItem = graphicsItem;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#graphicsItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    pub fn graphicsItem(self: QGraphicsAnchorLayout) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsLayoutItem_GraphicsItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `ownedByLayout` instead
    ///
    pub const OwnedByLayout = ownedByLayout;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#ownedByLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    pub fn ownedByLayout(self: QGraphicsAnchorLayout) bool {
        return qtc.QGraphicsLayoutItem_OwnedByLayout(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSizePolicy3` instead
    ///
    pub const SetSizePolicy3 = setSizePolicy3;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    /// ` hPolicy: qsizepolicy_enums.Policy `
    ///
    /// ` vPolicy: qsizepolicy_enums.Policy `
    ///
    /// ` controlType: qsizepolicy_enums.ControlType `
    ///
    pub fn setSizePolicy3(self: QGraphicsAnchorLayout, hPolicy: i32, vPolicy: i32, controlType: i32) void {
        qtc.QGraphicsLayoutItem_SetSizePolicy3(@ptrCast(self.ptr), @bitCast(hPolicy), @bitCast(vPolicy), @bitCast(controlType));
    }

    /// ### DEPRECATED: Use `effectiveSizeHint2` instead
    ///
    pub const EffectiveSizeHint2 = effectiveSizeHint2;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    /// ` which: qnamespace_enums.SizeHint `
    ///
    /// ` constraint: QSizeF `
    ///
    pub fn effectiveSizeHint2(self: QGraphicsAnchorLayout, which: i32, constraint: anytype) QSizeF {
        comptime _ = @TypeOf(constraint)._is_QSizeF;
        return .{ .ptr = qtc.QGraphicsLayoutItem_EffectiveSizeHint2(@ptrCast(self.ptr), @bitCast(which), @ptrCast(constraint.ptr)) };
    }

    /// ### DEPRECATED: Use `getContentsMargins` instead
    ///
    pub const GetContentsMargins = getContentsMargins;

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#getContentsMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    /// ` left: *f64 `
    ///
    /// ` top: *f64 `
    ///
    /// ` right: *f64 `
    ///
    /// ` bottom: *f64 `
    ///
    pub fn getContentsMargins(self: QGraphicsAnchorLayout, left: *f64, top: *f64, right: *f64, bottom: *f64) void {
        qtc.QGraphicsAnchorLayout_GetContentsMargins(@ptrCast(self.ptr), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// ### DEPRECATED: Use `superGetContentsMargins` instead
    ///
    pub const SuperGetContentsMargins = superGetContentsMargins;

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#getContentsMargins)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    /// ` left: *f64 `
    ///
    /// ` top: *f64 `
    ///
    /// ` right: *f64 `
    ///
    /// ` bottom: *f64 `
    ///
    pub fn superGetContentsMargins(self: QGraphicsAnchorLayout, left: *f64, top: *f64, right: *f64, bottom: *f64) void {
        qtc.QGraphicsAnchorLayout_SuperGetContentsMargins(@ptrCast(self.ptr), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// ### DEPRECATED: Use `onGetContentsMargins` instead
    ///
    pub const OnGetContentsMargins = onGetContentsMargins;

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#getContentsMargins)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsAnchorLayout`
    ///
    /// ` callback: *const fn (self: QGraphicsAnchorLayout, left: *f64, top: *f64, right: *f64, bottom: *f64) callconv(.c) void `
    ///
    pub fn onGetContentsMargins(self: QGraphicsAnchorLayout, callback: *const fn (QGraphicsAnchorLayout, *f64, *f64, *f64, *f64) callconv(.c) void) void {
        qtc.QGraphicsAnchorLayout_OnGetContentsMargins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `updateGeometry` instead
    ///
    pub const UpdateGeometry = updateGeometry;

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#updateGeometry)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    pub fn updateGeometry(self: QGraphicsAnchorLayout) void {
        qtc.QGraphicsAnchorLayout_UpdateGeometry(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superUpdateGeometry` instead
    ///
    pub const SuperUpdateGeometry = superUpdateGeometry;

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#updateGeometry)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    pub fn superUpdateGeometry(self: QGraphicsAnchorLayout) void {
        qtc.QGraphicsAnchorLayout_SuperUpdateGeometry(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUpdateGeometry` instead
    ///
    pub const OnUpdateGeometry = onUpdateGeometry;

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#updateGeometry)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsAnchorLayout`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onUpdateGeometry(self: QGraphicsAnchorLayout, callback: *const fn () callconv(.c) void) void {
        qtc.QGraphicsAnchorLayout_OnUpdateGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `widgetEvent` instead
    ///
    pub const WidgetEvent = widgetEvent;

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#widgetEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    /// ` e: QEvent `
    ///
    pub fn widgetEvent(self: QGraphicsAnchorLayout, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QEvent;
        qtc.QGraphicsAnchorLayout_WidgetEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superWidgetEvent` instead
    ///
    pub const SuperWidgetEvent = superWidgetEvent;

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#widgetEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    /// ` e: QEvent `
    ///
    pub fn superWidgetEvent(self: QGraphicsAnchorLayout, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QEvent;
        qtc.QGraphicsAnchorLayout_SuperWidgetEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onWidgetEvent` instead
    ///
    pub const OnWidgetEvent = onWidgetEvent;

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#widgetEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsAnchorLayout`
    ///
    /// ` callback: *const fn (self: QGraphicsAnchorLayout, e: QEvent) callconv(.c) void `
    ///
    pub fn onWidgetEvent(self: QGraphicsAnchorLayout, callback: *const fn (QGraphicsAnchorLayout, QEvent) callconv(.c) void) void {
        qtc.QGraphicsAnchorLayout_OnWidgetEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    pub fn isEmpty(self: QGraphicsAnchorLayout) bool {
        return qtc.QGraphicsAnchorLayout_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superIsEmpty` instead
    ///
    pub const SuperIsEmpty = superIsEmpty;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    pub fn superIsEmpty(self: QGraphicsAnchorLayout) bool {
        return qtc.QGraphicsAnchorLayout_SuperIsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsEmpty` instead
    ///
    pub const OnIsEmpty = onIsEmpty;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsAnchorLayout`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onIsEmpty(self: QGraphicsAnchorLayout, callback: *const fn () callconv(.c) bool) void {
        qtc.QGraphicsAnchorLayout_OnIsEmpty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `addChildLayoutItem` instead
    ///
    pub const AddChildLayoutItem = addChildLayoutItem;

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#addChildLayoutItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    /// ` layoutItem: QGraphicsLayoutItem `
    ///
    pub fn addChildLayoutItem(self: QGraphicsAnchorLayout, layoutItem: anytype) void {
        comptime _ = @TypeOf(layoutItem)._is_QGraphicsLayoutItem;
        qtc.QGraphicsAnchorLayout_AddChildLayoutItem(@ptrCast(self.ptr), @ptrCast(layoutItem.ptr));
    }

    /// ### DEPRECATED: Use `superAddChildLayoutItem` instead
    ///
    pub const SuperAddChildLayoutItem = superAddChildLayoutItem;

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#addChildLayoutItem)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    /// ` layoutItem: QGraphicsLayoutItem `
    ///
    pub fn superAddChildLayoutItem(self: QGraphicsAnchorLayout, layoutItem: anytype) void {
        comptime _ = @TypeOf(layoutItem)._is_QGraphicsLayoutItem;
        qtc.QGraphicsAnchorLayout_SuperAddChildLayoutItem(@ptrCast(self.ptr), @ptrCast(layoutItem.ptr));
    }

    /// ### DEPRECATED: Use `onAddChildLayoutItem` instead
    ///
    pub const OnAddChildLayoutItem = onAddChildLayoutItem;

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#addChildLayoutItem)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsAnchorLayout`
    ///
    /// ` callback: *const fn (self: QGraphicsAnchorLayout, layoutItem: QGraphicsLayoutItem) callconv(.c) void `
    ///
    pub fn onAddChildLayoutItem(self: QGraphicsAnchorLayout, callback: *const fn (QGraphicsAnchorLayout, QGraphicsLayoutItem) callconv(.c) void) void {
        qtc.QGraphicsAnchorLayout_OnAddChildLayoutItem(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setGraphicsItem` instead
    ///
    pub const SetGraphicsItem = setGraphicsItem;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    /// ` item: QGraphicsItem `
    ///
    pub fn setGraphicsItem(self: QGraphicsAnchorLayout, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        qtc.QGraphicsAnchorLayout_SetGraphicsItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `superSetGraphicsItem` instead
    ///
    pub const SuperSetGraphicsItem = superSetGraphicsItem;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    /// ` item: QGraphicsItem `
    ///
    pub fn superSetGraphicsItem(self: QGraphicsAnchorLayout, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        qtc.QGraphicsAnchorLayout_SuperSetGraphicsItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `onSetGraphicsItem` instead
    ///
    pub const OnSetGraphicsItem = onSetGraphicsItem;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsAnchorLayout`
    ///
    /// ` callback: *const fn (self: QGraphicsAnchorLayout, item: QGraphicsItem) callconv(.c) void `
    ///
    pub fn onSetGraphicsItem(self: QGraphicsAnchorLayout, callback: *const fn (QGraphicsAnchorLayout, QGraphicsItem) callconv(.c) void) void {
        qtc.QGraphicsAnchorLayout_OnSetGraphicsItem(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setOwnedByLayout` instead
    ///
    pub const SetOwnedByLayout = setOwnedByLayout;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    /// ` _ownedByLayout: bool `
    ///
    pub fn setOwnedByLayout(self: QGraphicsAnchorLayout, _ownedByLayout: bool) void {
        qtc.QGraphicsAnchorLayout_SetOwnedByLayout(@ptrCast(self.ptr), _ownedByLayout);
    }

    /// ### DEPRECATED: Use `superSetOwnedByLayout` instead
    ///
    pub const SuperSetOwnedByLayout = superSetOwnedByLayout;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    /// ` _ownedByLayout: bool `
    ///
    pub fn superSetOwnedByLayout(self: QGraphicsAnchorLayout, _ownedByLayout: bool) void {
        qtc.QGraphicsAnchorLayout_SuperSetOwnedByLayout(@ptrCast(self.ptr), _ownedByLayout);
    }

    /// ### DEPRECATED: Use `onSetOwnedByLayout` instead
    ///
    pub const OnSetOwnedByLayout = onSetOwnedByLayout;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QGraphicsAnchorLayout`
    ///
    /// ` callback: *const fn (self: QGraphicsAnchorLayout, ownedByLayout: bool) callconv(.c) void `
    ///
    pub fn onSetOwnedByLayout(self: QGraphicsAnchorLayout, callback: *const fn (QGraphicsAnchorLayout, bool) callconv(.c) void) void {
        qtc.QGraphicsAnchorLayout_OnSetOwnedByLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#dtor.QGraphicsAnchorLayout)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    pub fn delete(self: QGraphicsAnchorLayout) void {
        qtc.QGraphicsAnchorLayout_Delete(@ptrCast(self.ptr));
    }
};
