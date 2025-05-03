const C = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const qsizepolicy_enums = @import("libqsizepolicy.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qgraphicsanchor.html
pub const qgraphicsanchor = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QGraphicsAnchor ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QGraphicsAnchor_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QGraphicsAnchor, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QGraphicsAnchor_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QGraphicsAnchor, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QGraphicsAnchor_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QGraphicsAnchor_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsanchor.html#setSpacing)
    ///
    /// ``` self: ?*C.QGraphicsAnchor, spacing: f64 ```
    pub fn SetSpacing(self: ?*anyopaque, spacing: f64) void {
        C.QGraphicsAnchor_SetSpacing(@ptrCast(self), @floatCast(spacing));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsanchor.html#unsetSpacing)
    ///
    /// ``` self: ?*C.QGraphicsAnchor ```
    pub fn UnsetSpacing(self: ?*anyopaque) void {
        C.QGraphicsAnchor_UnsetSpacing(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsanchor.html#spacing)
    ///
    /// ``` self: ?*C.QGraphicsAnchor ```
    pub fn Spacing(self: ?*anyopaque) f64 {
        return C.QGraphicsAnchor_Spacing(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsanchor.html#setSizePolicy)
    ///
    /// ``` self: ?*C.QGraphicsAnchor, policy: qsizepolicy_enums.Policy ```
    pub fn SetSizePolicy(self: ?*anyopaque, policy: i64) void {
        C.QGraphicsAnchor_SetSizePolicy(@ptrCast(self), @intCast(policy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsanchor.html#sizePolicy)
    ///
    /// ``` self: ?*C.QGraphicsAnchor ```
    pub fn SizePolicy(self: ?*anyopaque) i64 {
        return C.QGraphicsAnchor_SizePolicy(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QGraphicsAnchor_Tr2(s_Cstring, c_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QGraphicsAnchor_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ``` self: ?*C.QGraphicsAnchor, event: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QObject_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ``` self: ?*C.QGraphicsAnchor, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QObject_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QGraphicsAnchor, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QObject_ObjectName(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: ?*C.QGraphicsAnchor, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QGraphicsAnchor ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QGraphicsAnchor ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QGraphicsAnchor ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QGraphicsAnchor ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QGraphicsAnchor, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QGraphicsAnchor ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QGraphicsAnchor, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QGraphicsAnchor, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QGraphicsAnchor, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QGraphicsAnchor, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QObject {
        const _arr: C.struct_libqt_list = C.QObject_Children(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QObject, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: ?*C.QGraphicsAnchor, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QGraphicsAnchor, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QGraphicsAnchor, obj: ?*C.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        C.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) ?*C.QMetaObject__Connection {
        return C.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QGraphicsAnchor, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, member: ?*C.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return C.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: ?*C.QMetaObject__Connection ```
    pub fn DisconnectWithQMetaObjectConnection(param1: ?*anyopaque) bool {
        return C.QObject_DisconnectWithQMetaObjectConnection(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: ?*C.QGraphicsAnchor ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QGraphicsAnchor ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QGraphicsAnchor, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QGraphicsAnchor, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QGraphicsAnchor, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: C.struct_libqt_list = C.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QGraphicsAnchor ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QGraphicsAnchor ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QGraphicsAnchor ```
    pub fn Destroyed(self: ?*anyopaque) void {
        C.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: ?*C.QGraphicsAnchor ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QGraphicsAnchor, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QGraphicsAnchor ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QGraphicsAnchor, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer2(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return C.QObject_StartTimer2(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) ?*C.QMetaObject__Connection {
        return C.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QGraphicsAnchor, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QGraphicsAnchor, param1: ?*C.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject, ?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QGraphicsAnchor ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QGraphicsAnchor_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qgraphicsanchorlayout.html
pub const qgraphicsanchorlayout = struct {
    /// New constructs a new QGraphicsAnchorLayout object.
    ///
    ///
    pub fn New() ?*C.QGraphicsAnchorLayout {
        return C.QGraphicsAnchorLayout_new();
    }

    /// New2 constructs a new QGraphicsAnchorLayout object.
    ///
    /// ``` parent: ?*C.QGraphicsLayoutItem ```
    pub fn New2(parent: ?*anyopaque) ?*C.QGraphicsAnchorLayout {
        return C.QGraphicsAnchorLayout_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#addAnchor)
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout, firstItem: ?*C.QGraphicsLayoutItem, firstEdge: qnamespace_enums.AnchorPoint, secondItem: ?*C.QGraphicsLayoutItem, secondEdge: qnamespace_enums.AnchorPoint ```
    pub fn AddAnchor(self: ?*anyopaque, firstItem: ?*anyopaque, firstEdge: i64, secondItem: ?*anyopaque, secondEdge: i64) ?*C.QGraphicsAnchor {
        return C.QGraphicsAnchorLayout_AddAnchor(@ptrCast(self), @ptrCast(firstItem), @intCast(firstEdge), @ptrCast(secondItem), @intCast(secondEdge));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#anchor)
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout, firstItem: ?*C.QGraphicsLayoutItem, firstEdge: qnamespace_enums.AnchorPoint, secondItem: ?*C.QGraphicsLayoutItem, secondEdge: qnamespace_enums.AnchorPoint ```
    pub fn Anchor(self: ?*anyopaque, firstItem: ?*anyopaque, firstEdge: i64, secondItem: ?*anyopaque, secondEdge: i64) ?*C.QGraphicsAnchor {
        return C.QGraphicsAnchorLayout_Anchor(@ptrCast(self), @ptrCast(firstItem), @intCast(firstEdge), @ptrCast(secondItem), @intCast(secondEdge));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#addCornerAnchors)
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout, firstItem: ?*C.QGraphicsLayoutItem, firstCorner: qnamespace_enums.Corner, secondItem: ?*C.QGraphicsLayoutItem, secondCorner: qnamespace_enums.Corner ```
    pub fn AddCornerAnchors(self: ?*anyopaque, firstItem: ?*anyopaque, firstCorner: i64, secondItem: ?*anyopaque, secondCorner: i64) void {
        C.QGraphicsAnchorLayout_AddCornerAnchors(@ptrCast(self), @ptrCast(firstItem), @intCast(firstCorner), @ptrCast(secondItem), @intCast(secondCorner));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#addAnchors)
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout, firstItem: ?*C.QGraphicsLayoutItem, secondItem: ?*C.QGraphicsLayoutItem ```
    pub fn AddAnchors(self: ?*anyopaque, firstItem: ?*anyopaque, secondItem: ?*anyopaque) void {
        C.QGraphicsAnchorLayout_AddAnchors(@ptrCast(self), @ptrCast(firstItem), @ptrCast(secondItem));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#setHorizontalSpacing)
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout, spacing: f64 ```
    pub fn SetHorizontalSpacing(self: ?*anyopaque, spacing: f64) void {
        C.QGraphicsAnchorLayout_SetHorizontalSpacing(@ptrCast(self), @floatCast(spacing));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#setVerticalSpacing)
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout, spacing: f64 ```
    pub fn SetVerticalSpacing(self: ?*anyopaque, spacing: f64) void {
        C.QGraphicsAnchorLayout_SetVerticalSpacing(@ptrCast(self), @floatCast(spacing));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#setSpacing)
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout, spacing: f64 ```
    pub fn SetSpacing(self: ?*anyopaque, spacing: f64) void {
        C.QGraphicsAnchorLayout_SetSpacing(@ptrCast(self), @floatCast(spacing));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#horizontalSpacing)
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout ```
    pub fn HorizontalSpacing(self: ?*anyopaque) f64 {
        return C.QGraphicsAnchorLayout_HorizontalSpacing(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#verticalSpacing)
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout ```
    pub fn VerticalSpacing(self: ?*anyopaque) f64 {
        return C.QGraphicsAnchorLayout_VerticalSpacing(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#removeAt)
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout, index: i32 ```
    pub fn RemoveAt(self: ?*anyopaque, index: i32) void {
        C.QGraphicsAnchorLayout_RemoveAt(@ptrCast(self), @intCast(index));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout, slot: fn (?*C.QGraphicsAnchorLayout, i32) callconv(.c) void ```
    pub fn OnRemoveAt(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QGraphicsAnchorLayout_OnRemoveAt(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout, index: i32 ```
    pub fn QBaseRemoveAt(self: ?*anyopaque, index: i32) void {
        C.QGraphicsAnchorLayout_QBaseRemoveAt(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#setGeometry)
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout, rect: ?*C.QRectF ```
    pub fn SetGeometry(self: ?*anyopaque, rect: ?*anyopaque) void {
        C.QGraphicsAnchorLayout_SetGeometry(@ptrCast(self), @ptrCast(rect));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout, slot: fn (?*C.QGraphicsAnchorLayout, ?*C.QRectF) callconv(.c) void ```
    pub fn OnSetGeometry(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsAnchorLayout_OnSetGeometry(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout, rect: ?*C.QRectF ```
    pub fn QBaseSetGeometry(self: ?*anyopaque, rect: ?*anyopaque) void {
        C.QGraphicsAnchorLayout_QBaseSetGeometry(@ptrCast(self), @ptrCast(rect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#count)
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout ```
    pub fn Count(self: ?*anyopaque) i32 {
        return C.QGraphicsAnchorLayout_Count(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout, slot: fn () callconv(.c) i32 ```
    pub fn OnCount(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QGraphicsAnchorLayout_OnCount(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout ```
    pub fn QBaseCount(self: ?*anyopaque) i32 {
        return C.QGraphicsAnchorLayout_QBaseCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#itemAt)
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout, index: i32 ```
    pub fn ItemAt(self: ?*anyopaque, index: i32) ?*C.QGraphicsLayoutItem {
        return C.QGraphicsAnchorLayout_ItemAt(@ptrCast(self), @intCast(index));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout, slot: fn (?*C.QGraphicsAnchorLayout, i32) callconv(.c) ?*C.QGraphicsLayoutItem ```
    pub fn OnItemAt(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) ?*C.QGraphicsLayoutItem) void {
        C.QGraphicsAnchorLayout_OnItemAt(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout, index: i32 ```
    pub fn QBaseItemAt(self: ?*anyopaque, index: i32) ?*C.QGraphicsLayoutItem {
        return C.QGraphicsAnchorLayout_QBaseItemAt(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#invalidate)
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout ```
    pub fn Invalidate(self: ?*anyopaque) void {
        C.QGraphicsAnchorLayout_Invalidate(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout, slot: fn () callconv(.c) void ```
    pub fn OnInvalidate(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QGraphicsAnchorLayout_OnInvalidate(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout ```
    pub fn QBaseInvalidate(self: ?*anyopaque) void {
        C.QGraphicsAnchorLayout_QBaseInvalidate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#sizeHint)
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout, which: qnamespace_enums.SizeHint, constraint: ?*C.QSizeF ```
    pub fn SizeHint(self: ?*anyopaque, which: i64, constraint: ?*anyopaque) ?*C.QSizeF {
        return C.QGraphicsAnchorLayout_SizeHint(@ptrCast(self), @intCast(which), @ptrCast(constraint));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout, slot: fn (?*C.QGraphicsAnchorLayout, qnamespace_enums.SizeHint, ?*C.QSizeF) callconv(.c) ?*C.QSizeF ```
    pub fn OnSizeHint(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque) callconv(.c) ?*C.QSizeF) void {
        C.QGraphicsAnchorLayout_OnSizeHint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout, which: qnamespace_enums.SizeHint, constraint: ?*C.QSizeF ```
    pub fn QBaseSizeHint(self: ?*anyopaque, which: i64, constraint: ?*anyopaque) ?*C.QSizeF {
        return C.QGraphicsAnchorLayout_QBaseSizeHint(@ptrCast(self), @intCast(which), @ptrCast(constraint));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsanchorlayout.html#addAnchors)
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout, firstItem: ?*C.QGraphicsLayoutItem, secondItem: ?*C.QGraphicsLayoutItem, orientations: i32 ```
    pub fn AddAnchors3(self: ?*anyopaque, firstItem: ?*anyopaque, secondItem: ?*anyopaque, orientations: i64) void {
        C.QGraphicsAnchorLayout_AddAnchors3(@ptrCast(self), @ptrCast(firstItem), @ptrCast(secondItem), @intCast(orientations));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#setContentsMargins)
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout, left: f64, top: f64, right: f64, bottom: f64 ```
    pub fn SetContentsMargins(self: ?*anyopaque, left: f64, top: f64, right: f64, bottom: f64) void {
        C.QGraphicsLayout_SetContentsMargins(@ptrCast(self), @floatCast(left), @floatCast(top), @floatCast(right), @floatCast(bottom));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#activate)
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout ```
    pub fn Activate(self: ?*anyopaque) void {
        C.QGraphicsLayout_Activate(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#isActivated)
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout ```
    pub fn IsActivated(self: ?*anyopaque) bool {
        return C.QGraphicsLayout_IsActivated(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#setInstantInvalidatePropagation)
    ///
    /// ``` enable: bool ```
    pub fn SetInstantInvalidatePropagation(enable: bool) void {
        C.QGraphicsLayout_SetInstantInvalidatePropagation(enable);
    }

    /// Inherited from QGraphicsLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#instantInvalidatePropagation)
    ///
    ///
    pub fn InstantInvalidatePropagation() bool {
        return C.QGraphicsLayout_InstantInvalidatePropagation();
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout, policy: ?*C.QSizePolicy ```
    pub fn SetSizePolicy(self: ?*anyopaque, policy: ?*anyopaque) void {
        C.QGraphicsLayoutItem_SetSizePolicy(@ptrCast(self), @ptrCast(policy));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout, hPolicy: qsizepolicy_enums.Policy, vPolicy: qsizepolicy_enums.Policy ```
    pub fn SetSizePolicy2(self: ?*anyopaque, hPolicy: i64, vPolicy: i64) void {
        C.QGraphicsLayoutItem_SetSizePolicy2(@ptrCast(self), @intCast(hPolicy), @intCast(vPolicy));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizePolicy)
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout ```
    pub fn SizePolicy(self: ?*anyopaque) ?*C.QSizePolicy {
        return C.QGraphicsLayoutItem_SizePolicy(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout, size: ?*C.QSizeF ```
    pub fn SetMinimumSize(self: ?*anyopaque, size: ?*anyopaque) void {
        C.QGraphicsLayoutItem_SetMinimumSize(@ptrCast(self), @ptrCast(size));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout, w: f64, h: f64 ```
    pub fn SetMinimumSize2(self: ?*anyopaque, w: f64, h: f64) void {
        C.QGraphicsLayoutItem_SetMinimumSize2(@ptrCast(self), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumSize)
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout ```
    pub fn MinimumSize(self: ?*anyopaque) ?*C.QSizeF {
        return C.QGraphicsLayoutItem_MinimumSize(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumWidth)
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout, width: f64 ```
    pub fn SetMinimumWidth(self: ?*anyopaque, width: f64) void {
        C.QGraphicsLayoutItem_SetMinimumWidth(@ptrCast(self), @floatCast(width));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumWidth)
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout ```
    pub fn MinimumWidth(self: ?*anyopaque) f64 {
        return C.QGraphicsLayoutItem_MinimumWidth(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumHeight)
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout, height: f64 ```
    pub fn SetMinimumHeight(self: ?*anyopaque, height: f64) void {
        C.QGraphicsLayoutItem_SetMinimumHeight(@ptrCast(self), @floatCast(height));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumHeight)
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout ```
    pub fn MinimumHeight(self: ?*anyopaque) f64 {
        return C.QGraphicsLayoutItem_MinimumHeight(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout, size: ?*C.QSizeF ```
    pub fn SetPreferredSize(self: ?*anyopaque, size: ?*anyopaque) void {
        C.QGraphicsLayoutItem_SetPreferredSize(@ptrCast(self), @ptrCast(size));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout, w: f64, h: f64 ```
    pub fn SetPreferredSize2(self: ?*anyopaque, w: f64, h: f64) void {
        C.QGraphicsLayoutItem_SetPreferredSize2(@ptrCast(self), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredSize)
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout ```
    pub fn PreferredSize(self: ?*anyopaque) ?*C.QSizeF {
        return C.QGraphicsLayoutItem_PreferredSize(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredWidth)
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout, width: f64 ```
    pub fn SetPreferredWidth(self: ?*anyopaque, width: f64) void {
        C.QGraphicsLayoutItem_SetPreferredWidth(@ptrCast(self), @floatCast(width));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredWidth)
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout ```
    pub fn PreferredWidth(self: ?*anyopaque) f64 {
        return C.QGraphicsLayoutItem_PreferredWidth(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredHeight)
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout, height: f64 ```
    pub fn SetPreferredHeight(self: ?*anyopaque, height: f64) void {
        C.QGraphicsLayoutItem_SetPreferredHeight(@ptrCast(self), @floatCast(height));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredHeight)
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout ```
    pub fn PreferredHeight(self: ?*anyopaque) f64 {
        return C.QGraphicsLayoutItem_PreferredHeight(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout, size: ?*C.QSizeF ```
    pub fn SetMaximumSize(self: ?*anyopaque, size: ?*anyopaque) void {
        C.QGraphicsLayoutItem_SetMaximumSize(@ptrCast(self), @ptrCast(size));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout, w: f64, h: f64 ```
    pub fn SetMaximumSize2(self: ?*anyopaque, w: f64, h: f64) void {
        C.QGraphicsLayoutItem_SetMaximumSize2(@ptrCast(self), @floatCast(w), @floatCast(h));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumSize)
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout ```
    pub fn MaximumSize(self: ?*anyopaque) ?*C.QSizeF {
        return C.QGraphicsLayoutItem_MaximumSize(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumWidth)
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout, width: f64 ```
    pub fn SetMaximumWidth(self: ?*anyopaque, width: f64) void {
        C.QGraphicsLayoutItem_SetMaximumWidth(@ptrCast(self), @floatCast(width));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumWidth)
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout ```
    pub fn MaximumWidth(self: ?*anyopaque) f64 {
        return C.QGraphicsLayoutItem_MaximumWidth(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumHeight)
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout, height: f64 ```
    pub fn SetMaximumHeight(self: ?*anyopaque, height: f64) void {
        C.QGraphicsLayoutItem_SetMaximumHeight(@ptrCast(self), @floatCast(height));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumHeight)
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout ```
    pub fn MaximumHeight(self: ?*anyopaque) f64 {
        return C.QGraphicsLayoutItem_MaximumHeight(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#geometry)
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout ```
    pub fn Geometry(self: ?*anyopaque) ?*C.QRectF {
        return C.QGraphicsLayoutItem_Geometry(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#contentsRect)
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout ```
    pub fn ContentsRect(self: ?*anyopaque) ?*C.QRectF {
        return C.QGraphicsLayoutItem_ContentsRect(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout, which: qnamespace_enums.SizeHint ```
    pub fn EffectiveSizeHint(self: ?*anyopaque, which: i64) ?*C.QSizeF {
        return C.QGraphicsLayoutItem_EffectiveSizeHint(@ptrCast(self), @intCast(which));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#parentLayoutItem)
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout ```
    pub fn ParentLayoutItem(self: ?*anyopaque) ?*C.QGraphicsLayoutItem {
        return C.QGraphicsLayoutItem_ParentLayoutItem(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setParentLayoutItem)
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout, parent: ?*C.QGraphicsLayoutItem ```
    pub fn SetParentLayoutItem(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QGraphicsLayoutItem_SetParentLayoutItem(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isLayout)
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout ```
    pub fn IsLayout(self: ?*anyopaque) bool {
        return C.QGraphicsLayoutItem_IsLayout(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#graphicsItem)
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout ```
    pub fn GraphicsItem(self: ?*anyopaque) ?*C.QGraphicsItem {
        return C.QGraphicsLayoutItem_GraphicsItem(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#ownedByLayout)
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout ```
    pub fn OwnedByLayout(self: ?*anyopaque) bool {
        return C.QGraphicsLayoutItem_OwnedByLayout(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout, hPolicy: qsizepolicy_enums.Policy, vPolicy: qsizepolicy_enums.Policy, controlType: qsizepolicy_enums.ControlType ```
    pub fn SetSizePolicy3(self: ?*anyopaque, hPolicy: i64, vPolicy: i64, controlType: i64) void {
        C.QGraphicsLayoutItem_SetSizePolicy3(@ptrCast(self), @intCast(hPolicy), @intCast(vPolicy), @intCast(controlType));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout, which: qnamespace_enums.SizeHint, constraint: ?*C.QSizeF ```
    pub fn EffectiveSizeHint2(self: ?*anyopaque, which: i64, constraint: ?*anyopaque) ?*C.QSizeF {
        return C.QGraphicsLayoutItem_EffectiveSizeHint2(@ptrCast(self), @intCast(which), @ptrCast(constraint));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#getContentsMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout, left: ?*f64, top: ?*f64, right: ?*f64, bottom: ?*f64 ```
    pub fn GetContentsMargins(self: ?*anyopaque, left: ?*anyopaque, top: ?*anyopaque, right: ?*anyopaque, bottom: ?*anyopaque) void {
        C.QGraphicsAnchorLayout_GetContentsMargins(@ptrCast(self), @floatCast(left), @floatCast(top), @floatCast(right), @floatCast(bottom));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout, left: ?*f64, top: ?*f64, right: ?*f64, bottom: ?*f64 ```
    pub fn QBaseGetContentsMargins(self: ?*anyopaque, left: ?*anyopaque, top: ?*anyopaque, right: ?*anyopaque, bottom: ?*anyopaque) void {
        C.QGraphicsAnchorLayout_QBaseGetContentsMargins(@ptrCast(self), @floatCast(left), @floatCast(top), @floatCast(right), @floatCast(bottom));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout, slot: fn (?*C.QGraphicsAnchorLayout, ?*f64, ?*f64, ?*f64, ?*f64) callconv(.c) void ```
    pub fn OnGetContentsMargins(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsAnchorLayout_OnGetContentsMargins(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#updateGeometry)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout ```
    pub fn UpdateGeometry(self: ?*anyopaque) void {
        C.QGraphicsAnchorLayout_UpdateGeometry(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout ```
    pub fn QBaseUpdateGeometry(self: ?*anyopaque) void {
        C.QGraphicsAnchorLayout_QBaseUpdateGeometry(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout, slot: fn () callconv(.c) void ```
    pub fn OnUpdateGeometry(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QGraphicsAnchorLayout_OnUpdateGeometry(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#widgetEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout, e: ?*C.QEvent ```
    pub fn WidgetEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        C.QGraphicsAnchorLayout_WidgetEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout, e: ?*C.QEvent ```
    pub fn QBaseWidgetEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        C.QGraphicsAnchorLayout_QBaseWidgetEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout, slot: fn (?*C.QGraphicsAnchorLayout, ?*C.QEvent) callconv(.c) void ```
    pub fn OnWidgetEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsAnchorLayout_OnWidgetEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return C.QGraphicsAnchorLayout_IsEmpty(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout ```
    pub fn QBaseIsEmpty(self: ?*anyopaque) bool {
        return C.QGraphicsAnchorLayout_QBaseIsEmpty(@ptrCast(self));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout, slot: fn () callconv(.c) bool ```
    pub fn OnIsEmpty(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        C.QGraphicsAnchorLayout_OnIsEmpty(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#addChildLayoutItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout, layoutItem: ?*C.QGraphicsLayoutItem ```
    pub fn AddChildLayoutItem(self: ?*anyopaque, layoutItem: ?*anyopaque) void {
        C.QGraphicsAnchorLayout_AddChildLayoutItem(@ptrCast(self), @ptrCast(layoutItem));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout, layoutItem: ?*C.QGraphicsLayoutItem ```
    pub fn QBaseAddChildLayoutItem(self: ?*anyopaque, layoutItem: ?*anyopaque) void {
        C.QGraphicsAnchorLayout_QBaseAddChildLayoutItem(@ptrCast(self), @ptrCast(layoutItem));
    }

    /// Inherited from QGraphicsLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout, slot: fn (?*C.QGraphicsAnchorLayout, ?*C.QGraphicsLayoutItem) callconv(.c) void ```
    pub fn OnAddChildLayoutItem(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsAnchorLayout_OnAddChildLayoutItem(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout, item: ?*C.QGraphicsItem ```
    pub fn SetGraphicsItem(self: ?*anyopaque, item: ?*anyopaque) void {
        C.QGraphicsAnchorLayout_SetGraphicsItem(@ptrCast(self), @ptrCast(item));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout, item: ?*C.QGraphicsItem ```
    pub fn QBaseSetGraphicsItem(self: ?*anyopaque, item: ?*anyopaque) void {
        C.QGraphicsAnchorLayout_QBaseSetGraphicsItem(@ptrCast(self), @ptrCast(item));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout, slot: fn (?*C.QGraphicsAnchorLayout, ?*C.QGraphicsItem) callconv(.c) void ```
    pub fn OnSetGraphicsItem(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QGraphicsAnchorLayout_OnSetGraphicsItem(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout, ownedByLayout: bool ```
    pub fn SetOwnedByLayout(self: ?*anyopaque, ownedByLayout: bool) void {
        C.QGraphicsAnchorLayout_SetOwnedByLayout(@ptrCast(self), ownedByLayout);
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout, ownedByLayout: bool ```
    pub fn QBaseSetOwnedByLayout(self: ?*anyopaque, ownedByLayout: bool) void {
        C.QGraphicsAnchorLayout_QBaseSetOwnedByLayout(@ptrCast(self), ownedByLayout);
    }

    /// Inherited from QGraphicsLayoutItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout, slot: fn (?*C.QGraphicsAnchorLayout, bool) callconv(.c) void ```
    pub fn OnSetOwnedByLayout(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QGraphicsAnchorLayout_OnSetOwnedByLayout(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QGraphicsAnchorLayout ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QGraphicsAnchorLayout_Delete(@ptrCast(self));
    }
};
