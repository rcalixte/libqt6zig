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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchor `
    ///
    pub fn MetaObject(self: QGraphicsAnchor) QMetaObject {
        return .{ .ptr = qtc.QGraphicsAnchor_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchor `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QGraphicsAnchor, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QGraphicsAnchor_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

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
    pub fn Metacall(self: QGraphicsAnchor, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QGraphicsAnchor_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsanchor.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchor.html#setSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchor `
    ///
    /// ` spacing: f64 `
    ///
    pub fn SetSpacing(self: QGraphicsAnchor, spacing: f64) void {
        qtc.QGraphicsAnchor_SetSpacing(@ptrCast(self.ptr), @bitCast(spacing));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchor.html#unsetSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchor `
    ///
    pub fn UnsetSpacing(self: QGraphicsAnchor) void {
        qtc.QGraphicsAnchor_UnsetSpacing(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchor.html#spacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchor `
    ///
    pub fn Spacing(self: QGraphicsAnchor) f64 {
        return qtc.QGraphicsAnchor_Spacing(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchor.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchor `
    ///
    /// ` policy: qsizepolicy_enums.Policy `
    ///
    pub fn SetSizePolicy(self: QGraphicsAnchor, policy: i32) void {
        qtc.QGraphicsAnchor_SetSizePolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

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
    pub fn SizePolicy(self: QGraphicsAnchor) i32 {
        return qtc.QGraphicsAnchor_SizePolicy(@ptrCast(self.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsanchor.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsanchor.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchor `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QGraphicsAnchor, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QGraphicsAnchor, watched: anytype, event: anytype) bool {
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
    /// ` self: QGraphicsAnchor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QGraphicsAnchor, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qgraphicsanchor.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetObjectName(self: QGraphicsAnchor, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchor `
    ///
    pub fn IsWidgetType(self: QGraphicsAnchor) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchor `
    ///
    pub fn IsWindowType(self: QGraphicsAnchor) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchor `
    ///
    pub fn IsQuickItemType(self: QGraphicsAnchor) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchor `
    ///
    pub fn SignalsBlocked(self: QGraphicsAnchor) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

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
    pub fn BlockSignals(self: QGraphicsAnchor, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchor `
    ///
    pub fn Thread(self: QGraphicsAnchor) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchor `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QGraphicsAnchor, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

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
    pub fn StartTimer(self: QGraphicsAnchor, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

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
    pub fn StartTimer2(self: QGraphicsAnchor, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

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
    pub fn KillTimer(self: QGraphicsAnchor, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn KillTimer2(self: QGraphicsAnchor, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn Children(self: QGraphicsAnchor, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qgraphicsanchor.Children: Memory allocation failed");
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
    /// ` self: QGraphicsAnchor `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QGraphicsAnchor, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

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
    pub fn InstallEventFilter(self: QGraphicsAnchor, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

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
    pub fn RemoveEventFilter(self: QGraphicsAnchor, obj: anytype) void {
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
    /// ` self: QGraphicsAnchor `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QGraphicsAnchor, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QGraphicsAnchor `
    ///
    pub fn Disconnect3(self: QGraphicsAnchor) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

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
    pub fn Disconnect4(self: QGraphicsAnchor, receiver: anytype) bool {
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
    /// ` self: QGraphicsAnchor `
    ///
    pub fn DumpObjectTree(self: QGraphicsAnchor) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchor `
    ///
    pub fn DumpObjectInfo(self: QGraphicsAnchor) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

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
    pub fn SetProperty(self: QGraphicsAnchor, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QGraphicsAnchor `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QGraphicsAnchor, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

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
    pub fn DynamicPropertyNames(self: QGraphicsAnchor, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qgraphicsanchor.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qgraphicsanchor.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QGraphicsAnchor `
    ///
    pub fn BindingStorage(self: QGraphicsAnchor) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchor `
    ///
    pub fn BindingStorage2(self: QGraphicsAnchor) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchor `
    ///
    pub fn Destroyed(self: QGraphicsAnchor) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

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
    pub fn OnDestroyed(self: QGraphicsAnchor, callback: *const fn (QGraphicsAnchor) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchor `
    ///
    pub fn Parent(self: QGraphicsAnchor) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

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
    pub fn Inherits(self: QGraphicsAnchor, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchor `
    ///
    pub fn DeleteLater(self: QGraphicsAnchor) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

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
    pub fn StartTimer22(self: QGraphicsAnchor, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

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
    pub fn StartTimer23(self: QGraphicsAnchor, time: i64, timerType: i32) i32 {
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
    /// ` self: QGraphicsAnchor `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QGraphicsAnchor, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QGraphicsAnchor `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QGraphicsAnchor, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn Disconnect22(self: QGraphicsAnchor, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QGraphicsAnchor `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QGraphicsAnchor, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QGraphicsAnchor `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QGraphicsAnchor, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QGraphicsAnchor `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QGraphicsAnchor, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnDestroyed1(self: QGraphicsAnchor, callback: *const fn (QGraphicsAnchor, QObject) callconv(.c) void) void {
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
    /// ` self: QGraphicsAnchor `
    ///
    /// ` callback: *const fn (self: QGraphicsAnchor, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QGraphicsAnchor, callback: *const fn (QGraphicsAnchor, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchor.html#dtor.QGraphicsAnchor)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QGraphicsAnchor `
    ///
    pub fn Delete(self: QGraphicsAnchor) void {
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

    /// New constructs a new QGraphicsAnchorLayout object.
    ///
    pub fn New() QGraphicsAnchorLayout {
        return .{ .ptr = qtc.QGraphicsAnchorLayout_new() };
    }

    /// New2 constructs a new QGraphicsAnchorLayout object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QGraphicsLayoutItem `
    ///
    pub fn New2(parent: anytype) QGraphicsAnchorLayout {
        comptime _ = @TypeOf(parent)._is_QGraphicsLayoutItem;
        return .{ .ptr = qtc.QGraphicsAnchorLayout_new2(@ptrCast(parent.ptr)) };
    }

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
    pub fn AddAnchor(self: QGraphicsAnchorLayout, firstItem: anytype, firstEdge: i32, secondItem: anytype, secondEdge: i32) QGraphicsAnchor {
        comptime _ = @TypeOf(firstItem)._is_QGraphicsLayoutItem;
        comptime _ = @TypeOf(secondItem)._is_QGraphicsLayoutItem;
        return .{ .ptr = qtc.QGraphicsAnchorLayout_AddAnchor(@ptrCast(self.ptr), @ptrCast(firstItem.ptr), @bitCast(firstEdge), @ptrCast(secondItem.ptr), @bitCast(secondEdge)) };
    }

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
    pub fn Anchor(self: QGraphicsAnchorLayout, firstItem: anytype, firstEdge: i32, secondItem: anytype, secondEdge: i32) QGraphicsAnchor {
        comptime _ = @TypeOf(firstItem)._is_QGraphicsLayoutItem;
        comptime _ = @TypeOf(secondItem)._is_QGraphicsLayoutItem;
        return .{ .ptr = qtc.QGraphicsAnchorLayout_Anchor(@ptrCast(self.ptr), @ptrCast(firstItem.ptr), @bitCast(firstEdge), @ptrCast(secondItem.ptr), @bitCast(secondEdge)) };
    }

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
    pub fn AddCornerAnchors(self: QGraphicsAnchorLayout, firstItem: anytype, firstCorner: i32, secondItem: anytype, secondCorner: i32) void {
        comptime _ = @TypeOf(firstItem)._is_QGraphicsLayoutItem;
        comptime _ = @TypeOf(secondItem)._is_QGraphicsLayoutItem;
        qtc.QGraphicsAnchorLayout_AddCornerAnchors(@ptrCast(self.ptr), @ptrCast(firstItem.ptr), @bitCast(firstCorner), @ptrCast(secondItem.ptr), @bitCast(secondCorner));
    }

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
    pub fn AddAnchors(self: QGraphicsAnchorLayout, firstItem: anytype, secondItem: anytype) void {
        comptime _ = @TypeOf(firstItem)._is_QGraphicsLayoutItem;
        comptime _ = @TypeOf(secondItem)._is_QGraphicsLayoutItem;
        qtc.QGraphicsAnchorLayout_AddAnchors(@ptrCast(self.ptr), @ptrCast(firstItem.ptr), @ptrCast(secondItem.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#setHorizontalSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    /// ` spacing: f64 `
    ///
    pub fn SetHorizontalSpacing(self: QGraphicsAnchorLayout, spacing: f64) void {
        qtc.QGraphicsAnchorLayout_SetHorizontalSpacing(@ptrCast(self.ptr), @bitCast(spacing));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#setVerticalSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    /// ` spacing: f64 `
    ///
    pub fn SetVerticalSpacing(self: QGraphicsAnchorLayout, spacing: f64) void {
        qtc.QGraphicsAnchorLayout_SetVerticalSpacing(@ptrCast(self.ptr), @bitCast(spacing));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#setSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    /// ` spacing: f64 `
    ///
    pub fn SetSpacing(self: QGraphicsAnchorLayout, spacing: f64) void {
        qtc.QGraphicsAnchorLayout_SetSpacing(@ptrCast(self.ptr), @bitCast(spacing));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#horizontalSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    pub fn HorizontalSpacing(self: QGraphicsAnchorLayout) f64 {
        return qtc.QGraphicsAnchorLayout_HorizontalSpacing(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#verticalSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    pub fn VerticalSpacing(self: QGraphicsAnchorLayout) f64 {
        return qtc.QGraphicsAnchorLayout_VerticalSpacing(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#removeAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    /// ` index: i32 `
    ///
    pub fn RemoveAt(self: QGraphicsAnchorLayout, index: i32) void {
        qtc.QGraphicsAnchorLayout_RemoveAt(@ptrCast(self.ptr), @bitCast(index));
    }

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
    pub fn OnRemoveAt(self: QGraphicsAnchorLayout, callback: *const fn (QGraphicsAnchorLayout, i32) callconv(.c) void) void {
        qtc.QGraphicsAnchorLayout_OnRemoveAt(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRemoveAt` instead
    ///
    pub const QBaseRemoveAt = SuperRemoveAt;

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
    pub fn SuperRemoveAt(self: QGraphicsAnchorLayout, index: i32) void {
        qtc.QGraphicsAnchorLayout_SuperRemoveAt(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    /// ` rect: QRectF `
    ///
    pub fn SetGeometry(self: QGraphicsAnchorLayout, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsAnchorLayout_SetGeometry(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

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
    pub fn OnSetGeometry(self: QGraphicsAnchorLayout, callback: *const fn (QGraphicsAnchorLayout, QRectF) callconv(.c) void) void {
        qtc.QGraphicsAnchorLayout_OnSetGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetGeometry` instead
    ///
    pub const QBaseSetGeometry = SuperSetGeometry;

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
    pub fn SuperSetGeometry(self: QGraphicsAnchorLayout, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QGraphicsAnchorLayout_SuperSetGeometry(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    pub fn Count(self: QGraphicsAnchorLayout) i32 {
        return qtc.QGraphicsAnchorLayout_Count(@ptrCast(self.ptr));
    }

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
    pub fn OnCount(self: QGraphicsAnchorLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QGraphicsAnchorLayout_OnCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCount` instead
    ///
    pub const QBaseCount = SuperCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#count)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    pub fn SuperCount(self: QGraphicsAnchorLayout) i32 {
        return qtc.QGraphicsAnchorLayout_SuperCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#itemAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    /// ` index: i32 `
    ///
    pub fn ItemAt(self: QGraphicsAnchorLayout, index: i32) QGraphicsLayoutItem {
        return .{ .ptr = qtc.QGraphicsAnchorLayout_ItemAt(@ptrCast(self.ptr), @bitCast(index)) };
    }

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
    pub fn OnItemAt(self: QGraphicsAnchorLayout, callback: *const fn (QGraphicsAnchorLayout, i32) callconv(.c) QGraphicsLayoutItem) void {
        qtc.QGraphicsAnchorLayout_OnItemAt(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperItemAt` instead
    ///
    pub const QBaseItemAt = SuperItemAt;

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
    pub fn SuperItemAt(self: QGraphicsAnchorLayout, index: i32) QGraphicsLayoutItem {
        return .{ .ptr = qtc.QGraphicsAnchorLayout_SuperItemAt(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#invalidate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    pub fn Invalidate(self: QGraphicsAnchorLayout) void {
        qtc.QGraphicsAnchorLayout_Invalidate(@ptrCast(self.ptr));
    }

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
    pub fn OnInvalidate(self: QGraphicsAnchorLayout, callback: *const fn () callconv(.c) void) void {
        qtc.QGraphicsAnchorLayout_OnInvalidate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperInvalidate` instead
    ///
    pub const QBaseInvalidate = SuperInvalidate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#invalidate)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    pub fn SuperInvalidate(self: QGraphicsAnchorLayout) void {
        qtc.QGraphicsAnchorLayout_SuperInvalidate(@ptrCast(self.ptr));
    }

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
    pub fn SizeHint(self: QGraphicsAnchorLayout, which: i32, constraint: anytype) QSizeF {
        comptime _ = @TypeOf(constraint)._is_QSizeF;
        return .{ .ptr = qtc.QGraphicsAnchorLayout_SizeHint(@ptrCast(self.ptr), @bitCast(which), @ptrCast(constraint.ptr)) };
    }

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
    pub fn OnSizeHint(self: QGraphicsAnchorLayout, callback: *const fn (QGraphicsAnchorLayout, i32, QSizeF) callconv(.c) QSizeF) void {
        qtc.QGraphicsAnchorLayout_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSizeHint` instead
    ///
    pub const QBaseSizeHint = SuperSizeHint;

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
    pub fn SuperSizeHint(self: QGraphicsAnchorLayout, which: i32, constraint: anytype) QSizeF {
        comptime _ = @TypeOf(constraint)._is_QSizeF;
        return .{ .ptr = qtc.QGraphicsAnchorLayout_SuperSizeHint(@ptrCast(self.ptr), @bitCast(which), @ptrCast(constraint.ptr)) };
    }

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
    pub fn AddAnchors3(self: QGraphicsAnchorLayout, firstItem: anytype, secondItem: anytype, orientations: i32) void {
        comptime _ = @TypeOf(firstItem)._is_QGraphicsLayoutItem;
        comptime _ = @TypeOf(secondItem)._is_QGraphicsLayoutItem;
        qtc.QGraphicsAnchorLayout_AddAnchors3(@ptrCast(self.ptr), @ptrCast(firstItem.ptr), @ptrCast(secondItem.ptr), @bitCast(orientations));
    }

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
    pub fn SetContentsMargins(self: QGraphicsAnchorLayout, left: f64, top: f64, right: f64, bottom: f64) void {
        qtc.QGraphicsLayout_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#activate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    pub fn Activate(self: QGraphicsAnchorLayout) void {
        qtc.QGraphicsLayout_Activate(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#isActivated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    pub fn IsActivated(self: QGraphicsAnchorLayout) bool {
        return qtc.QGraphicsLayout_IsActivated(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#setInstantInvalidatePropagation)
    ///
    /// ## Parameter(s):
    ///
    /// ` enable: bool `
    ///
    pub fn SetInstantInvalidatePropagation(enable: bool) void {
        qtc.QGraphicsLayout_SetInstantInvalidatePropagation(enable);
    }

    /// Inherited from QGraphicsLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#instantInvalidatePropagation)
    ///
    pub fn InstantInvalidatePropagation() bool {
        return qtc.QGraphicsLayout_InstantInvalidatePropagation();
    }

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
    pub fn SetSizePolicy(self: QGraphicsAnchorLayout, policy: anytype) void {
        comptime _ = @TypeOf(policy)._is_QSizePolicy;
        qtc.QGraphicsLayoutItem_SetSizePolicy(@ptrCast(self.ptr), @ptrCast(policy.ptr));
    }

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
    pub fn SetSizePolicy2(self: QGraphicsAnchorLayout, hPolicy: i32, vPolicy: i32) void {
        qtc.QGraphicsLayoutItem_SetSizePolicy2(@ptrCast(self.ptr), @bitCast(hPolicy), @bitCast(vPolicy));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    pub fn SizePolicy(self: QGraphicsAnchorLayout) QSizePolicy {
        return .{ .ptr = qtc.QGraphicsLayoutItem_SizePolicy(@ptrCast(self.ptr)) };
    }

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
    pub fn SetMinimumSize(self: QGraphicsAnchorLayout, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSizeF;
        qtc.QGraphicsLayoutItem_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

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
    pub fn SetMinimumSize2(self: QGraphicsAnchorLayout, w: f64, h: f64) void {
        qtc.QGraphicsLayoutItem_SetMinimumSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    pub fn MinimumSize(self: QGraphicsAnchorLayout) QSizeF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_MinimumSize(@ptrCast(self.ptr)) };
    }

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
    pub fn SetMinimumWidth(self: QGraphicsAnchorLayout, width: f64) void {
        qtc.QGraphicsLayoutItem_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    pub fn MinimumWidth(self: QGraphicsAnchorLayout) f64 {
        return qtc.QGraphicsLayoutItem_MinimumWidth(@ptrCast(self.ptr));
    }

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
    pub fn SetMinimumHeight(self: QGraphicsAnchorLayout, height: f64) void {
        qtc.QGraphicsLayoutItem_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(height));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    pub fn MinimumHeight(self: QGraphicsAnchorLayout) f64 {
        return qtc.QGraphicsLayoutItem_MinimumHeight(@ptrCast(self.ptr));
    }

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
    pub fn SetPreferredSize(self: QGraphicsAnchorLayout, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSizeF;
        qtc.QGraphicsLayoutItem_SetPreferredSize(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

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
    pub fn SetPreferredSize2(self: QGraphicsAnchorLayout, w: f64, h: f64) void {
        qtc.QGraphicsLayoutItem_SetPreferredSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    pub fn PreferredSize(self: QGraphicsAnchorLayout) QSizeF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_PreferredSize(@ptrCast(self.ptr)) };
    }

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
    pub fn SetPreferredWidth(self: QGraphicsAnchorLayout, width: f64) void {
        qtc.QGraphicsLayoutItem_SetPreferredWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    pub fn PreferredWidth(self: QGraphicsAnchorLayout) f64 {
        return qtc.QGraphicsLayoutItem_PreferredWidth(@ptrCast(self.ptr));
    }

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
    pub fn SetPreferredHeight(self: QGraphicsAnchorLayout, height: f64) void {
        qtc.QGraphicsLayoutItem_SetPreferredHeight(@ptrCast(self.ptr), @bitCast(height));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    pub fn PreferredHeight(self: QGraphicsAnchorLayout) f64 {
        return qtc.QGraphicsLayoutItem_PreferredHeight(@ptrCast(self.ptr));
    }

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
    pub fn SetMaximumSize(self: QGraphicsAnchorLayout, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSizeF;
        qtc.QGraphicsLayoutItem_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

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
    pub fn SetMaximumSize2(self: QGraphicsAnchorLayout, w: f64, h: f64) void {
        qtc.QGraphicsLayoutItem_SetMaximumSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    pub fn MaximumSize(self: QGraphicsAnchorLayout) QSizeF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_MaximumSize(@ptrCast(self.ptr)) };
    }

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
    pub fn SetMaximumWidth(self: QGraphicsAnchorLayout, width: f64) void {
        qtc.QGraphicsLayoutItem_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    pub fn MaximumWidth(self: QGraphicsAnchorLayout) f64 {
        return qtc.QGraphicsLayoutItem_MaximumWidth(@ptrCast(self.ptr));
    }

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
    pub fn SetMaximumHeight(self: QGraphicsAnchorLayout, height: f64) void {
        qtc.QGraphicsLayoutItem_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(height));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    pub fn MaximumHeight(self: QGraphicsAnchorLayout) f64 {
        return qtc.QGraphicsLayoutItem_MaximumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    pub fn Geometry(self: QGraphicsAnchorLayout) QRectF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_Geometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    pub fn ContentsRect(self: QGraphicsAnchorLayout) QRectF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_ContentsRect(@ptrCast(self.ptr)) };
    }

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
    pub fn EffectiveSizeHint(self: QGraphicsAnchorLayout, which: i32) QSizeF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_EffectiveSizeHint(@ptrCast(self.ptr), @bitCast(which)) };
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#parentLayoutItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    pub fn ParentLayoutItem(self: QGraphicsAnchorLayout) QGraphicsLayoutItem {
        return .{ .ptr = qtc.QGraphicsLayoutItem_ParentLayoutItem(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setParentLayoutItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    /// ` parent: QGraphicsLayoutItem `
    ///
    pub fn SetParentLayoutItem(self: QGraphicsAnchorLayout, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QGraphicsLayoutItem;
        qtc.QGraphicsLayoutItem_SetParentLayoutItem(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    pub fn IsLayout(self: QGraphicsAnchorLayout) bool {
        return qtc.QGraphicsLayoutItem_IsLayout(@ptrCast(self.ptr));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#graphicsItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    pub fn GraphicsItem(self: QGraphicsAnchorLayout) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsLayoutItem_GraphicsItem(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#ownedByLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    pub fn OwnedByLayout(self: QGraphicsAnchorLayout) bool {
        return qtc.QGraphicsLayoutItem_OwnedByLayout(@ptrCast(self.ptr));
    }

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
    pub fn SetSizePolicy3(self: QGraphicsAnchorLayout, hPolicy: i32, vPolicy: i32, controlType: i32) void {
        qtc.QGraphicsLayoutItem_SetSizePolicy3(@ptrCast(self.ptr), @bitCast(hPolicy), @bitCast(vPolicy), @bitCast(controlType));
    }

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
    pub fn EffectiveSizeHint2(self: QGraphicsAnchorLayout, which: i32, constraint: anytype) QSizeF {
        comptime _ = @TypeOf(constraint)._is_QSizeF;
        return .{ .ptr = qtc.QGraphicsLayoutItem_EffectiveSizeHint2(@ptrCast(self.ptr), @bitCast(which), @ptrCast(constraint.ptr)) };
    }

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
    pub fn GetContentsMargins(self: QGraphicsAnchorLayout, left: *f64, top: *f64, right: *f64, bottom: *f64) void {
        qtc.QGraphicsAnchorLayout_GetContentsMargins(@ptrCast(self.ptr), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// ### DEPRECATED: Use `SuperGetContentsMargins` instead
    ///
    pub const QBaseGetContentsMargins = SuperGetContentsMargins;

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
    pub fn SuperGetContentsMargins(self: QGraphicsAnchorLayout, left: *f64, top: *f64, right: *f64, bottom: *f64) void {
        qtc.QGraphicsAnchorLayout_SuperGetContentsMargins(@ptrCast(self.ptr), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

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
    pub fn OnGetContentsMargins(self: QGraphicsAnchorLayout, callback: *const fn (QGraphicsAnchorLayout, *f64, *f64, *f64, *f64) callconv(.c) void) void {
        qtc.QGraphicsAnchorLayout_OnGetContentsMargins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn UpdateGeometry(self: QGraphicsAnchorLayout) void {
        qtc.QGraphicsAnchorLayout_UpdateGeometry(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperUpdateGeometry` instead
    ///
    pub const QBaseUpdateGeometry = SuperUpdateGeometry;

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
    pub fn SuperUpdateGeometry(self: QGraphicsAnchorLayout) void {
        qtc.QGraphicsAnchorLayout_SuperUpdateGeometry(@ptrCast(self.ptr));
    }

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
    pub fn OnUpdateGeometry(self: QGraphicsAnchorLayout, callback: *const fn () callconv(.c) void) void {
        qtc.QGraphicsAnchorLayout_OnUpdateGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn WidgetEvent(self: QGraphicsAnchorLayout, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QEvent;
        qtc.QGraphicsAnchorLayout_WidgetEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperWidgetEvent` instead
    ///
    pub const QBaseWidgetEvent = SuperWidgetEvent;

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
    pub fn SuperWidgetEvent(self: QGraphicsAnchorLayout, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QEvent;
        qtc.QGraphicsAnchorLayout_SuperWidgetEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

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
    pub fn OnWidgetEvent(self: QGraphicsAnchorLayout, callback: *const fn (QGraphicsAnchorLayout, QEvent) callconv(.c) void) void {
        qtc.QGraphicsAnchorLayout_OnWidgetEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IsEmpty(self: QGraphicsAnchorLayout) bool {
        return qtc.QGraphicsAnchorLayout_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsEmpty` instead
    ///
    pub const QBaseIsEmpty = SuperIsEmpty;

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
    pub fn SuperIsEmpty(self: QGraphicsAnchorLayout) bool {
        return qtc.QGraphicsAnchorLayout_SuperIsEmpty(@ptrCast(self.ptr));
    }

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
    pub fn OnIsEmpty(self: QGraphicsAnchorLayout, callback: *const fn () callconv(.c) bool) void {
        qtc.QGraphicsAnchorLayout_OnIsEmpty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn AddChildLayoutItem(self: QGraphicsAnchorLayout, layoutItem: anytype) void {
        comptime _ = @TypeOf(layoutItem)._is_QGraphicsLayoutItem;
        qtc.QGraphicsAnchorLayout_AddChildLayoutItem(@ptrCast(self.ptr), @ptrCast(layoutItem.ptr));
    }

    /// ### DEPRECATED: Use `SuperAddChildLayoutItem` instead
    ///
    pub const QBaseAddChildLayoutItem = SuperAddChildLayoutItem;

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
    pub fn SuperAddChildLayoutItem(self: QGraphicsAnchorLayout, layoutItem: anytype) void {
        comptime _ = @TypeOf(layoutItem)._is_QGraphicsLayoutItem;
        qtc.QGraphicsAnchorLayout_SuperAddChildLayoutItem(@ptrCast(self.ptr), @ptrCast(layoutItem.ptr));
    }

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
    pub fn OnAddChildLayoutItem(self: QGraphicsAnchorLayout, callback: *const fn (QGraphicsAnchorLayout, QGraphicsLayoutItem) callconv(.c) void) void {
        qtc.QGraphicsAnchorLayout_OnAddChildLayoutItem(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SetGraphicsItem(self: QGraphicsAnchorLayout, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        qtc.QGraphicsAnchorLayout_SetGraphicsItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetGraphicsItem` instead
    ///
    pub const QBaseSetGraphicsItem = SuperSetGraphicsItem;

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
    pub fn SuperSetGraphicsItem(self: QGraphicsAnchorLayout, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        qtc.QGraphicsAnchorLayout_SuperSetGraphicsItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

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
    pub fn OnSetGraphicsItem(self: QGraphicsAnchorLayout, callback: *const fn (QGraphicsAnchorLayout, QGraphicsItem) callconv(.c) void) void {
        qtc.QGraphicsAnchorLayout_OnSetGraphicsItem(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` ownedByLayout: bool `
    ///
    pub fn SetOwnedByLayout(self: QGraphicsAnchorLayout, ownedByLayout: bool) void {
        qtc.QGraphicsAnchorLayout_SetOwnedByLayout(@ptrCast(self.ptr), ownedByLayout);
    }

    /// ### DEPRECATED: Use `SuperSetOwnedByLayout` instead
    ///
    pub const QBaseSetOwnedByLayout = SuperSetOwnedByLayout;

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
    /// ` ownedByLayout: bool `
    ///
    pub fn SuperSetOwnedByLayout(self: QGraphicsAnchorLayout, ownedByLayout: bool) void {
        qtc.QGraphicsAnchorLayout_SuperSetOwnedByLayout(@ptrCast(self.ptr), ownedByLayout);
    }

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
    pub fn OnSetOwnedByLayout(self: QGraphicsAnchorLayout, callback: *const fn (QGraphicsAnchorLayout, bool) callconv(.c) void) void {
        qtc.QGraphicsAnchorLayout_OnSetOwnedByLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#dtor.QGraphicsAnchorLayout)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QGraphicsAnchorLayout `
    ///
    pub fn Delete(self: QGraphicsAnchorLayout) void {
        qtc.QGraphicsAnchorLayout_Delete(@ptrCast(self.ptr));
    }
};
