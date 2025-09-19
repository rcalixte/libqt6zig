const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const knotification_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
pub const map_constu8_qtcqvariant = std.StringHashMapUnmanaged(QtC.QVariant);

/// https://api.kde.org/knotificationaction.html
pub const knotificationaction = struct {
    /// New constructs a new KNotificationAction object.
    ///
    ///
    pub fn New() QtC.KNotificationAction {
        return qtc.KNotificationAction_new();
    }

    /// New2 constructs a new KNotificationAction object.
    ///
    /// ``` label: []const u8 ```
    pub fn New2(label: []const u8) QtC.KNotificationAction {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };

        return qtc.KNotificationAction_new2(label_str);
    }

    /// New3 constructs a new KNotificationAction object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New3(parent: ?*anyopaque) QtC.KNotificationAction {
        return qtc.KNotificationAction_new3(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.KNotificationAction ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KNotificationAction_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.KNotificationAction, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KNotificationAction_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.KNotificationAction, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KNotificationAction_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KNotificationAction, callback: *const fn (self: QtC.KNotificationAction, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.KNotificationAction_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.KNotificationAction, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KNotificationAction_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.KNotificationAction_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knotificationaction.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knotificationaction.html#label)
    ///
    /// ``` self: QtC.KNotificationAction, allocator: std.mem.Allocator ```
    pub fn Label(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KNotificationAction_Label(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knotificationaction.Label: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knotificationaction.html#setLabel)
    ///
    /// ``` self: QtC.KNotificationAction, label: []const u8 ```
    pub fn SetLabel(self: ?*anyopaque, label: []const u8) void {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        qtc.KNotificationAction_SetLabel(@ptrCast(self), label_str);
    }

    /// [Qt documentation](https://api.kde.org/knotificationaction.html#activated)
    ///
    /// ``` self: QtC.KNotificationAction ```
    pub fn Activated(self: ?*anyopaque) void {
        qtc.KNotificationAction_Activated(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knotificationaction.html#activated)
    ///
    /// ``` self: QtC.KNotificationAction, callback: *const fn (self: QtC.KNotificationAction) callconv(.c) void ```
    pub fn OnActivated(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.KNotificationAction_Connect_Activated(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/knotificationaction.html#labelChanged)
    ///
    /// ``` self: QtC.KNotificationAction, label: []const u8 ```
    pub fn LabelChanged(self: ?*anyopaque, label: []const u8) void {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        qtc.KNotificationAction_LabelChanged(@ptrCast(self), label_str);
    }

    /// [Qt documentation](https://api.kde.org/knotificationaction.html#labelChanged)
    ///
    /// ``` self: QtC.KNotificationAction, callback: *const fn (self: QtC.KNotificationAction, label: [*:0]const u8) callconv(.c) void ```
    pub fn OnLabelChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KNotificationAction_Connect_LabelChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KNotificationAction_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knotificationaction.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KNotificationAction_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knotificationaction.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.KNotificationAction, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knotificationaction.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.KNotificationAction, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.KNotificationAction ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.KNotificationAction ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.KNotificationAction ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.KNotificationAction ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.KNotificationAction, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.KNotificationAction ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KNotificationAction, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KNotificationAction, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KNotificationAction, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KNotificationAction, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.KNotificationAction, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("knotificationaction.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.KNotificationAction, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.KNotificationAction, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.KNotificationAction, obj: QtC.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.KNotificationAction, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, member: QtC.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: QtC.QMetaObject__Connection ```
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.KNotificationAction ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.KNotificationAction ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.KNotificationAction, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.KNotificationAction, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.KNotificationAction, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("knotificationaction.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("knotificationaction.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KNotificationAction ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KNotificationAction ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KNotificationAction ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KNotificationAction, callback: *const fn (self: QtC.KNotificationAction) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.KNotificationAction ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.KNotificationAction, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.KNotificationAction ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KNotificationAction, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KNotificationAction, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.KNotificationAction, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KNotificationAction, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KNotificationAction, callback: *const fn (self: QtC.KNotificationAction, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KNotificationAction, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KNotificationAction_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KNotificationAction, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KNotificationAction_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KNotificationAction, callback: *const fn (self: QtC.KNotificationAction, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KNotificationAction_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KNotificationAction, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KNotificationAction_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KNotificationAction, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KNotificationAction_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KNotificationAction, callback: *const fn (self: QtC.KNotificationAction, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KNotificationAction_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KNotificationAction, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KNotificationAction_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KNotificationAction, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KNotificationAction_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KNotificationAction, callback: *const fn (self: QtC.KNotificationAction, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KNotificationAction_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KNotificationAction, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KNotificationAction_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KNotificationAction, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KNotificationAction_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KNotificationAction, callback: *const fn (self: QtC.KNotificationAction, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KNotificationAction_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KNotificationAction, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KNotificationAction_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KNotificationAction, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KNotificationAction_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KNotificationAction, callback: *const fn (self: QtC.KNotificationAction, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KNotificationAction_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KNotificationAction, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KNotificationAction_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KNotificationAction, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KNotificationAction_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KNotificationAction, callback: *const fn (self: QtC.KNotificationAction, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KNotificationAction_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KNotificationAction, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KNotificationAction_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KNotificationAction, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KNotificationAction_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KNotificationAction, callback: *const fn (self: QtC.KNotificationAction, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KNotificationAction_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KNotificationAction ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.KNotificationAction_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KNotificationAction ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.KNotificationAction_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KNotificationAction, callback: *const fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.KNotificationAction_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KNotificationAction ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KNotificationAction_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KNotificationAction ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KNotificationAction_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KNotificationAction, callback: *const fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.KNotificationAction_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KNotificationAction, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KNotificationAction_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KNotificationAction, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KNotificationAction_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KNotificationAction, callback: *const fn (self: QtC.KNotificationAction, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.KNotificationAction_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KNotificationAction, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KNotificationAction_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KNotificationAction, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KNotificationAction_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KNotificationAction, callback: *const fn (self: QtC.KNotificationAction, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KNotificationAction_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KNotificationAction, callback: *const fn (self: QtC.KNotificationAction, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/knotificationaction.html#dtor.KNotificationAction)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KNotificationAction ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KNotificationAction_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/knotification.html
pub const knotification = struct {
    /// New constructs a new KNotification object.
    ///
    /// ``` eventId: []const u8 ```
    pub fn New(eventId: []const u8) QtC.KNotification {
        const eventId_str = qtc.libqt_string{
            .len = eventId.len,
            .data = eventId.ptr,
        };

        return qtc.KNotification_new(eventId_str);
    }

    /// New2 constructs a new KNotification object.
    ///
    /// ``` eventId: []const u8, flags: flag of knotification_enums.NotificationFlag ```
    pub fn New2(eventId: []const u8, flags: i32) QtC.KNotification {
        const eventId_str = qtc.libqt_string{
            .len = eventId.len,
            .data = eventId.ptr,
        };

        return qtc.KNotification_new2(eventId_str, @intCast(flags));
    }

    /// New3 constructs a new KNotification object.
    ///
    /// ``` eventId: []const u8, flags: flag of knotification_enums.NotificationFlag, parent: QtC.QObject ```
    pub fn New3(eventId: []const u8, flags: i32, parent: ?*anyopaque) QtC.KNotification {
        const eventId_str = qtc.libqt_string{
            .len = eventId.len,
            .data = eventId.ptr,
        };

        return qtc.KNotification_new3(eventId_str, @intCast(flags), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.KNotification ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KNotification_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.KNotification, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KNotification_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.KNotification, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KNotification_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KNotification, callback: *const fn (self: QtC.KNotification, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.KNotification_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.KNotification, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KNotification_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.KNotification_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knotification.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#eventId)
    ///
    /// ``` self: QtC.KNotification, allocator: std.mem.Allocator ```
    pub fn EventId(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KNotification_EventId(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knotification.EventId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#setEventId)
    ///
    /// ``` self: QtC.KNotification, eventId: []const u8 ```
    pub fn SetEventId(self: ?*anyopaque, eventId: []const u8) void {
        const eventId_str = qtc.libqt_string{
            .len = eventId.len,
            .data = eventId.ptr,
        };
        qtc.KNotification_SetEventId(@ptrCast(self), eventId_str);
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#title)
    ///
    /// ``` self: QtC.KNotification, allocator: std.mem.Allocator ```
    pub fn Title(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KNotification_Title(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knotification.Title: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#setTitle)
    ///
    /// ``` self: QtC.KNotification, title: []const u8 ```
    pub fn SetTitle(self: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.KNotification_SetTitle(@ptrCast(self), title_str);
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#text)
    ///
    /// ``` self: QtC.KNotification, allocator: std.mem.Allocator ```
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KNotification_Text(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knotification.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#setText)
    ///
    /// ``` self: QtC.KNotification, text: []const u8 ```
    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KNotification_SetText(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#iconName)
    ///
    /// ``` self: QtC.KNotification, allocator: std.mem.Allocator ```
    pub fn IconName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KNotification_IconName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knotification.IconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#setIconName)
    ///
    /// ``` self: QtC.KNotification, icon: []const u8 ```
    pub fn SetIconName(self: ?*anyopaque, icon: []const u8) void {
        const icon_str = qtc.libqt_string{
            .len = icon.len,
            .data = icon.ptr,
        };
        qtc.KNotification_SetIconName(@ptrCast(self), icon_str);
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#pixmap)
    ///
    /// ``` self: QtC.KNotification ```
    pub fn Pixmap(self: ?*anyopaque) QtC.QPixmap {
        return qtc.KNotification_Pixmap(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#setPixmap)
    ///
    /// ``` self: QtC.KNotification, pix: QtC.QPixmap ```
    pub fn SetPixmap(self: ?*anyopaque, pix: ?*anyopaque) void {
        qtc.KNotification_SetPixmap(@ptrCast(self), @ptrCast(pix));
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#defaultAction)
    ///
    /// ``` self: QtC.KNotification ```
    pub fn DefaultAction(self: ?*anyopaque) QtC.KNotificationAction {
        return qtc.KNotification_DefaultAction(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#addDefaultAction)
    ///
    /// ``` self: QtC.KNotification, label: []const u8 ```
    pub fn AddDefaultAction(self: ?*anyopaque, label: []const u8) QtC.KNotificationAction {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        return qtc.KNotification_AddDefaultAction(@ptrCast(self), label_str);
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#addAction)
    ///
    /// ``` self: QtC.KNotification, label: []const u8 ```
    pub fn AddAction(self: ?*anyopaque, label: []const u8) QtC.KNotificationAction {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        return qtc.KNotification_AddAction(@ptrCast(self), label_str);
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#clearActions)
    ///
    /// ``` self: QtC.KNotification ```
    pub fn ClearActions(self: ?*anyopaque) void {
        qtc.KNotification_ClearActions(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#replyAction)
    ///
    /// ``` self: QtC.KNotification ```
    pub fn ReplyAction(self: ?*anyopaque) QtC.KNotificationReplyAction {
        return qtc.KNotification_ReplyAction(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#flags)
    ///
    /// ``` self: QtC.KNotification ```
    ///
    /// Returns: ``` flag of knotification_enums.NotificationFlag ```
    pub fn Flags(self: ?*anyopaque) i32 {
        return qtc.KNotification_Flags(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#setFlags)
    ///
    /// ``` self: QtC.KNotification, flags: *const flag of knotification_enums.NotificationFlag ```
    pub fn SetFlags(self: ?*anyopaque, flags: *const i32) void {
        qtc.KNotification_SetFlags(@ptrCast(self), @ptrCast(flags));
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#componentName)
    ///
    /// ``` self: QtC.KNotification, allocator: std.mem.Allocator ```
    pub fn ComponentName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KNotification_ComponentName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knotification.ComponentName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#setComponentName)
    ///
    /// ``` self: QtC.KNotification, componentName: []const u8 ```
    pub fn SetComponentName(self: ?*anyopaque, componentName: []const u8) void {
        const componentName_str = qtc.libqt_string{
            .len = componentName.len,
            .data = componentName.ptr,
        };
        qtc.KNotification_SetComponentName(@ptrCast(self), componentName_str);
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#urls)
    ///
    /// ``` self: QtC.KNotification, allocator: std.mem.Allocator ```
    pub fn Urls(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QUrl {
        const _arr: qtc.libqt_list = qtc.KNotification_Urls(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QUrl, _arr.len) catch @panic("knotification.Urls: Memory allocation failed");
        const _data: [*]QtC.QUrl = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#setUrls)
    ///
    /// ``` self: QtC.KNotification, urls: []QtC.QUrl ```
    pub fn SetUrls(self: ?*anyopaque, urls: []QtC.QUrl) void {
        const urls_list = qtc.libqt_list{
            .len = urls.len,
            .data = @ptrCast(urls.ptr),
        };
        qtc.KNotification_SetUrls(@ptrCast(self), urls_list);
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#urgency)
    ///
    /// ``` self: QtC.KNotification ```
    ///
    /// Returns: ``` knotification_enums.Urgency ```
    pub fn Urgency(self: ?*anyopaque) i32 {
        return qtc.KNotification_Urgency(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#setUrgency)
    ///
    /// ``` self: QtC.KNotification, urgency: knotification_enums.Urgency ```
    pub fn SetUrgency(self: ?*anyopaque, urgency: i32) void {
        qtc.KNotification_SetUrgency(@ptrCast(self), @intCast(urgency));
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#setWindow)
    ///
    /// ``` self: QtC.KNotification, window: QtC.QWindow ```
    pub fn SetWindow(self: ?*anyopaque, window: ?*anyopaque) void {
        qtc.KNotification_SetWindow(@ptrCast(self), @ptrCast(window));
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#window)
    ///
    /// ``` self: QtC.KNotification ```
    pub fn Window(self: ?*anyopaque) QtC.QWindow {
        return qtc.KNotification_Window(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#appName)
    ///
    /// ``` self: QtC.KNotification, allocator: std.mem.Allocator ```
    pub fn AppName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KNotification_AppName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knotification.AppName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#isAutoDelete)
    ///
    /// ``` self: QtC.KNotification ```
    pub fn IsAutoDelete(self: ?*anyopaque) bool {
        return qtc.KNotification_IsAutoDelete(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#setAutoDelete)
    ///
    /// ``` self: QtC.KNotification, autoDelete: bool ```
    pub fn SetAutoDelete(self: ?*anyopaque, autoDelete: bool) void {
        qtc.KNotification_SetAutoDelete(@ptrCast(self), autoDelete);
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#xdgActivationToken)
    ///
    /// ``` self: QtC.KNotification, allocator: std.mem.Allocator ```
    pub fn XdgActivationToken(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KNotification_XdgActivationToken(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knotification.XdgActivationToken: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#closed)
    ///
    /// ``` self: QtC.KNotification ```
    pub fn Closed(self: ?*anyopaque) void {
        qtc.KNotification_Closed(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#closed)
    ///
    /// ``` self: QtC.KNotification, callback: *const fn (self: QtC.KNotification) callconv(.c) void ```
    pub fn OnClosed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.KNotification_Connect_Closed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#ignored)
    ///
    /// ``` self: QtC.KNotification ```
    pub fn Ignored(self: ?*anyopaque) void {
        qtc.KNotification_Ignored(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#ignored)
    ///
    /// ``` self: QtC.KNotification, callback: *const fn (self: QtC.KNotification) callconv(.c) void ```
    pub fn OnIgnored(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.KNotification_Connect_Ignored(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#eventIdChanged)
    ///
    /// ``` self: QtC.KNotification ```
    pub fn EventIdChanged(self: ?*anyopaque) void {
        qtc.KNotification_EventIdChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#eventIdChanged)
    ///
    /// ``` self: QtC.KNotification, callback: *const fn (self: QtC.KNotification) callconv(.c) void ```
    pub fn OnEventIdChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.KNotification_Connect_EventIdChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#titleChanged)
    ///
    /// ``` self: QtC.KNotification ```
    pub fn TitleChanged(self: ?*anyopaque) void {
        qtc.KNotification_TitleChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#titleChanged)
    ///
    /// ``` self: QtC.KNotification, callback: *const fn (self: QtC.KNotification) callconv(.c) void ```
    pub fn OnTitleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.KNotification_Connect_TitleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#textChanged)
    ///
    /// ``` self: QtC.KNotification ```
    pub fn TextChanged(self: ?*anyopaque) void {
        qtc.KNotification_TextChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#textChanged)
    ///
    /// ``` self: QtC.KNotification, callback: *const fn (self: QtC.KNotification) callconv(.c) void ```
    pub fn OnTextChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.KNotification_Connect_TextChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#iconNameChanged)
    ///
    /// ``` self: QtC.KNotification ```
    pub fn IconNameChanged(self: ?*anyopaque) void {
        qtc.KNotification_IconNameChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#iconNameChanged)
    ///
    /// ``` self: QtC.KNotification, callback: *const fn (self: QtC.KNotification) callconv(.c) void ```
    pub fn OnIconNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.KNotification_Connect_IconNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#defaultActionChanged)
    ///
    /// ``` self: QtC.KNotification ```
    pub fn DefaultActionChanged(self: ?*anyopaque) void {
        qtc.KNotification_DefaultActionChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#defaultActionChanged)
    ///
    /// ``` self: QtC.KNotification, callback: *const fn (self: QtC.KNotification) callconv(.c) void ```
    pub fn OnDefaultActionChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.KNotification_Connect_DefaultActionChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#actionsChanged)
    ///
    /// ``` self: QtC.KNotification ```
    pub fn ActionsChanged(self: ?*anyopaque) void {
        qtc.KNotification_ActionsChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#actionsChanged)
    ///
    /// ``` self: QtC.KNotification, callback: *const fn (self: QtC.KNotification) callconv(.c) void ```
    pub fn OnActionsChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.KNotification_Connect_ActionsChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#flagsChanged)
    ///
    /// ``` self: QtC.KNotification ```
    pub fn FlagsChanged(self: ?*anyopaque) void {
        qtc.KNotification_FlagsChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#flagsChanged)
    ///
    /// ``` self: QtC.KNotification, callback: *const fn (self: QtC.KNotification) callconv(.c) void ```
    pub fn OnFlagsChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.KNotification_Connect_FlagsChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#componentNameChanged)
    ///
    /// ``` self: QtC.KNotification ```
    pub fn ComponentNameChanged(self: ?*anyopaque) void {
        qtc.KNotification_ComponentNameChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#componentNameChanged)
    ///
    /// ``` self: QtC.KNotification, callback: *const fn (self: QtC.KNotification) callconv(.c) void ```
    pub fn OnComponentNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.KNotification_Connect_ComponentNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#urlsChanged)
    ///
    /// ``` self: QtC.KNotification ```
    pub fn UrlsChanged(self: ?*anyopaque) void {
        qtc.KNotification_UrlsChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#urlsChanged)
    ///
    /// ``` self: QtC.KNotification, callback: *const fn (self: QtC.KNotification) callconv(.c) void ```
    pub fn OnUrlsChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.KNotification_Connect_UrlsChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#urgencyChanged)
    ///
    /// ``` self: QtC.KNotification ```
    pub fn UrgencyChanged(self: ?*anyopaque) void {
        qtc.KNotification_UrgencyChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#urgencyChanged)
    ///
    /// ``` self: QtC.KNotification, callback: *const fn (self: QtC.KNotification) callconv(.c) void ```
    pub fn OnUrgencyChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.KNotification_Connect_UrgencyChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#autoDeleteChanged)
    ///
    /// ``` self: QtC.KNotification ```
    pub fn AutoDeleteChanged(self: ?*anyopaque) void {
        qtc.KNotification_AutoDeleteChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#autoDeleteChanged)
    ///
    /// ``` self: QtC.KNotification, callback: *const fn (self: QtC.KNotification) callconv(.c) void ```
    pub fn OnAutoDeleteChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.KNotification_Connect_AutoDeleteChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#xdgActivationTokenChanged)
    ///
    /// ``` self: QtC.KNotification ```
    pub fn XdgActivationTokenChanged(self: ?*anyopaque) void {
        qtc.KNotification_XdgActivationTokenChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#xdgActivationTokenChanged)
    ///
    /// ``` self: QtC.KNotification, callback: *const fn (self: QtC.KNotification) callconv(.c) void ```
    pub fn OnXdgActivationTokenChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.KNotification_Connect_XdgActivationTokenChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#hintsChanged)
    ///
    /// ``` self: QtC.KNotification ```
    pub fn HintsChanged(self: ?*anyopaque) void {
        qtc.KNotification_HintsChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#hintsChanged)
    ///
    /// ``` self: QtC.KNotification, callback: *const fn (self: QtC.KNotification) callconv(.c) void ```
    pub fn OnHintsChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.KNotification_Connect_HintsChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#close)
    ///
    /// ``` self: QtC.KNotification ```
    pub fn Close(self: ?*anyopaque) void {
        qtc.KNotification_Close(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#sendEvent)
    ///
    /// ``` self: QtC.KNotification ```
    pub fn SendEvent(self: ?*anyopaque) void {
        qtc.KNotification_SendEvent(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#setHint)
    ///
    /// ``` self: QtC.KNotification, hint: []const u8, value: QtC.QVariant ```
    pub fn SetHint(self: ?*anyopaque, hint: []const u8, value: ?*anyopaque) void {
        const hint_str = qtc.libqt_string{
            .len = hint.len,
            .data = hint.ptr,
        };
        qtc.KNotification_SetHint(@ptrCast(self), hint_str, @ptrCast(value));
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#hints)
    ///
    /// ``` self: QtC.KNotification, allocator: std.mem.Allocator ```
    pub fn Hints(self: ?*anyopaque, allocator: std.mem.Allocator) map_constu8_qtcqvariant {
        const _map: qtc.libqt_map = qtc.KNotification_Hints(@ptrCast(self));
        var _ret: map_constu8_qtcqvariant = .empty;
        defer {
            const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
            for (0.._map.len) |i| {
                qtc.libqt_free(_keys[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
        const _values: [*]QtC.QVariant = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _entry_slice = std.mem.span(_key.data);
            const _value = _values[i];
            _ret.put(allocator, _entry_slice, _value) catch @panic("knotification.Hints: Memory allocation failed");
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#setHints)
    ///
    /// ``` self: QtC.KNotification, hints: map_constu8_qtcqvariant, allocator: std.mem.Allocator ```
    pub fn SetHints(self: ?*anyopaque, hints: map_constu8_qtcqvariant, allocator: std.mem.Allocator) void {
        const hints_keys = allocator.alloc(qtc.libqt_string, hints.count()) catch @panic("knotification.SetHints: Memory allocation failed");
        defer allocator.free(hints_keys);
        const hints_values = allocator.alloc(QtC.QVariant, hints.count()) catch @panic("knotification.SetHints: Memory allocation failed");
        defer allocator.free(hints_values);
        var i: usize = 0;
        var hints_it = hints.iterator();
        while (hints_it.next()) |entry| {
            const key = entry.key_ptr.*;
            hints_keys[i] = qtc.libqt_string{
                .len = key.len,
                .data = key.ptr,
            };
            hints_values[i] = entry.value_ptr.*;
            i += 1;
        }
        const hints_map = qtc.libqt_map{
            .len = hints.count(),
            .keys = @ptrCast(hints_keys.ptr),
            .values = @ptrCast(hints_values.ptr),
        };
        qtc.KNotification_SetHints(@ptrCast(self), hints_map);
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#event)
    ///
    /// ``` eventId: []const u8, title: []const u8, text: []const u8 ```
    pub fn Event(eventId: []const u8, title: []const u8, text: []const u8) QtC.KNotification {
        const eventId_str = qtc.libqt_string{
            .len = eventId.len,
            .data = eventId.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KNotification_Event(eventId_str, title_str, text_str);
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#event)
    ///
    /// ``` eventId: []const u8 ```
    pub fn Event2(eventId: []const u8) QtC.KNotification {
        const eventId_str = qtc.libqt_string{
            .len = eventId.len,
            .data = eventId.ptr,
        };
        return qtc.KNotification_Event2(eventId_str);
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#event)
    ///
    /// ``` eventId: knotification_enums.StandardEvent ```
    pub fn Event3(eventId: i32) QtC.KNotification {
        return qtc.KNotification_Event3(@intCast(eventId));
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#event)
    ///
    /// ``` eventId: knotification_enums.StandardEvent, title: []const u8, text: []const u8, pixmap: QtC.QPixmap ```
    pub fn Event4(eventId: i32, title: []const u8, text: []const u8, pixmap: ?*anyopaque) QtC.KNotification {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KNotification_Event4(@intCast(eventId), title_str, text_str, @ptrCast(pixmap));
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#event)
    ///
    /// ``` eventId: []const u8, title: []const u8, text: []const u8, iconName: []const u8 ```
    pub fn Event5(eventId: []const u8, title: []const u8, text: []const u8, iconName: []const u8) QtC.KNotification {
        const eventId_str = qtc.libqt_string{
            .len = eventId.len,
            .data = eventId.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const iconName_str = qtc.libqt_string{
            .len = iconName.len,
            .data = iconName.ptr,
        };
        return qtc.KNotification_Event5(eventId_str, title_str, text_str, iconName_str);
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#event)
    ///
    /// ``` eventId: knotification_enums.StandardEvent, title: []const u8, text: []const u8, iconName: []const u8 ```
    pub fn Event6(eventId: i32, title: []const u8, text: []const u8, iconName: []const u8) QtC.KNotification {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const iconName_str = qtc.libqt_string{
            .len = iconName.len,
            .data = iconName.ptr,
        };
        return qtc.KNotification_Event6(@intCast(eventId), title_str, text_str, iconName_str);
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#event)
    ///
    /// ``` eventId: knotification_enums.StandardEvent, title: []const u8, text: []const u8 ```
    pub fn Event7(eventId: i32, title: []const u8, text: []const u8) QtC.KNotification {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KNotification_Event7(@intCast(eventId), title_str, text_str);
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#beep)
    ///
    ///
    pub fn Beep() void {
        qtc.KNotification_Beep();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KNotification_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knotification.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KNotification_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knotification.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#event)
    ///
    /// ``` eventId: []const u8, title: []const u8, text: []const u8, pixmap: QtC.QPixmap ```
    pub fn Event42(eventId: []const u8, title: []const u8, text: []const u8, pixmap: ?*anyopaque) QtC.KNotification {
        const eventId_str = qtc.libqt_string{
            .len = eventId.len,
            .data = eventId.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KNotification_Event42(eventId_str, title_str, text_str, @ptrCast(pixmap));
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#event)
    ///
    /// ``` eventId: []const u8, title: []const u8, text: []const u8, pixmap: QtC.QPixmap, flags: *const flag of knotification_enums.NotificationFlag ```
    pub fn Event52(eventId: []const u8, title: []const u8, text: []const u8, pixmap: ?*anyopaque, flags: *const i32) QtC.KNotification {
        const eventId_str = qtc.libqt_string{
            .len = eventId.len,
            .data = eventId.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KNotification_Event52(eventId_str, title_str, text_str, @ptrCast(pixmap), @ptrCast(flags));
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#event)
    ///
    /// ``` eventId: []const u8, title: []const u8, text: []const u8, pixmap: QtC.QPixmap, flags: *const flag of knotification_enums.NotificationFlag, componentName: []const u8 ```
    pub fn Event62(eventId: []const u8, title: []const u8, text: []const u8, pixmap: ?*anyopaque, flags: *const i32, componentName: []const u8) QtC.KNotification {
        const eventId_str = qtc.libqt_string{
            .len = eventId.len,
            .data = eventId.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const componentName_str = qtc.libqt_string{
            .len = componentName.len,
            .data = componentName.ptr,
        };
        return qtc.KNotification_Event62(eventId_str, title_str, text_str, @ptrCast(pixmap), @ptrCast(flags), componentName_str);
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#event)
    ///
    /// ``` eventId: []const u8, text: []const u8 ```
    pub fn Event22(eventId: []const u8, text: []const u8) QtC.KNotification {
        const eventId_str = qtc.libqt_string{
            .len = eventId.len,
            .data = eventId.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KNotification_Event22(eventId_str, text_str);
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#event)
    ///
    /// ``` eventId: []const u8, text: []const u8, pixmap: QtC.QPixmap ```
    pub fn Event32(eventId: []const u8, text: []const u8, pixmap: ?*anyopaque) QtC.KNotification {
        const eventId_str = qtc.libqt_string{
            .len = eventId.len,
            .data = eventId.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KNotification_Event32(eventId_str, text_str, @ptrCast(pixmap));
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#event)
    ///
    /// ``` eventId: []const u8, text: []const u8, pixmap: QtC.QPixmap, flags: *const flag of knotification_enums.NotificationFlag ```
    pub fn Event43(eventId: []const u8, text: []const u8, pixmap: ?*anyopaque, flags: *const i32) QtC.KNotification {
        const eventId_str = qtc.libqt_string{
            .len = eventId.len,
            .data = eventId.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KNotification_Event43(eventId_str, text_str, @ptrCast(pixmap), @ptrCast(flags));
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#event)
    ///
    /// ``` eventId: []const u8, text: []const u8, pixmap: QtC.QPixmap, flags: *const flag of knotification_enums.NotificationFlag, componentName: []const u8 ```
    pub fn Event53(eventId: []const u8, text: []const u8, pixmap: ?*anyopaque, flags: *const i32, componentName: []const u8) QtC.KNotification {
        const eventId_str = qtc.libqt_string{
            .len = eventId.len,
            .data = eventId.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const componentName_str = qtc.libqt_string{
            .len = componentName.len,
            .data = componentName.ptr,
        };
        return qtc.KNotification_Event53(eventId_str, text_str, @ptrCast(pixmap), @ptrCast(flags), componentName_str);
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#event)
    ///
    /// ``` eventId: knotification_enums.StandardEvent, text: []const u8 ```
    pub fn Event23(eventId: i32, text: []const u8) QtC.KNotification {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KNotification_Event23(@intCast(eventId), text_str);
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#event)
    ///
    /// ``` eventId: knotification_enums.StandardEvent, text: []const u8, pixmap: QtC.QPixmap ```
    pub fn Event33(eventId: i32, text: []const u8, pixmap: ?*anyopaque) QtC.KNotification {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KNotification_Event33(@intCast(eventId), text_str, @ptrCast(pixmap));
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#event)
    ///
    /// ``` eventId: knotification_enums.StandardEvent, text: []const u8, pixmap: QtC.QPixmap, flags: *const flag of knotification_enums.NotificationFlag ```
    pub fn Event44(eventId: i32, text: []const u8, pixmap: ?*anyopaque, flags: *const i32) QtC.KNotification {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KNotification_Event44(@intCast(eventId), text_str, @ptrCast(pixmap), @ptrCast(flags));
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#event)
    ///
    /// ``` eventId: knotification_enums.StandardEvent, title: []const u8, text: []const u8, pixmap: QtC.QPixmap, flags: *const flag of knotification_enums.NotificationFlag ```
    pub fn Event54(eventId: i32, title: []const u8, text: []const u8, pixmap: ?*anyopaque, flags: *const i32) QtC.KNotification {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KNotification_Event54(@intCast(eventId), title_str, text_str, @ptrCast(pixmap), @ptrCast(flags));
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#event)
    ///
    /// ``` eventId: []const u8, title: []const u8, text: []const u8, iconName: []const u8, flags: *const flag of knotification_enums.NotificationFlag ```
    pub fn Event55(eventId: []const u8, title: []const u8, text: []const u8, iconName: []const u8, flags: *const i32) QtC.KNotification {
        const eventId_str = qtc.libqt_string{
            .len = eventId.len,
            .data = eventId.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const iconName_str = qtc.libqt_string{
            .len = iconName.len,
            .data = iconName.ptr,
        };
        return qtc.KNotification_Event55(eventId_str, title_str, text_str, iconName_str, @ptrCast(flags));
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#event)
    ///
    /// ``` eventId: []const u8, title: []const u8, text: []const u8, iconName: []const u8, flags: *const flag of knotification_enums.NotificationFlag, componentName: []const u8 ```
    pub fn Event63(eventId: []const u8, title: []const u8, text: []const u8, iconName: []const u8, flags: *const i32, componentName: []const u8) QtC.KNotification {
        const eventId_str = qtc.libqt_string{
            .len = eventId.len,
            .data = eventId.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const iconName_str = qtc.libqt_string{
            .len = iconName.len,
            .data = iconName.ptr,
        };
        const componentName_str = qtc.libqt_string{
            .len = componentName.len,
            .data = componentName.ptr,
        };
        return qtc.KNotification_Event63(eventId_str, title_str, text_str, iconName_str, @ptrCast(flags), componentName_str);
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#event)
    ///
    /// ``` eventId: knotification_enums.StandardEvent, title: []const u8, text: []const u8, iconName: []const u8, flags: *const flag of knotification_enums.NotificationFlag ```
    pub fn Event56(eventId: i32, title: []const u8, text: []const u8, iconName: []const u8, flags: *const i32) QtC.KNotification {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const iconName_str = qtc.libqt_string{
            .len = iconName.len,
            .data = iconName.ptr,
        };
        return qtc.KNotification_Event56(@intCast(eventId), title_str, text_str, iconName_str, @ptrCast(flags));
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#event)
    ///
    /// ``` eventId: knotification_enums.StandardEvent, title: []const u8, text: []const u8, flags: *const flag of knotification_enums.NotificationFlag ```
    pub fn Event45(eventId: i32, title: []const u8, text: []const u8, flags: *const i32) QtC.KNotification {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KNotification_Event45(@intCast(eventId), title_str, text_str, @ptrCast(flags));
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#beep)
    ///
    /// ``` reason: []const u8 ```
    pub fn Beep1(reason: []const u8) void {
        const reason_str = qtc.libqt_string{
            .len = reason.len,
            .data = reason.ptr,
        };
        qtc.KNotification_Beep1(reason_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.KNotification, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knotification.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.KNotification, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.KNotification ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.KNotification ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.KNotification ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.KNotification ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.KNotification, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.KNotification ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KNotification, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KNotification, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KNotification, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KNotification, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.KNotification, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("knotification.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.KNotification, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.KNotification, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.KNotification, obj: QtC.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.KNotification, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, member: QtC.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: QtC.QMetaObject__Connection ```
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.KNotification ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.KNotification ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.KNotification, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.KNotification, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.KNotification, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("knotification.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("knotification.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KNotification ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KNotification ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KNotification ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KNotification, callback: *const fn (self: QtC.KNotification) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.KNotification ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.KNotification, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.KNotification ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KNotification, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KNotification, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.KNotification, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KNotification, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KNotification, callback: *const fn (self: QtC.KNotification, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KNotification, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KNotification_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KNotification, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KNotification_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KNotification, callback: *const fn (self: QtC.KNotification, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KNotification_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KNotification, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KNotification_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KNotification, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KNotification_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KNotification, callback: *const fn (self: QtC.KNotification, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KNotification_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KNotification, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KNotification_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KNotification, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KNotification_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KNotification, callback: *const fn (self: QtC.KNotification, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KNotification_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KNotification, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KNotification_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KNotification, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KNotification_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KNotification, callback: *const fn (self: QtC.KNotification, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KNotification_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KNotification, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KNotification_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KNotification, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KNotification_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KNotification, callback: *const fn (self: QtC.KNotification, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KNotification_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KNotification, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KNotification_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KNotification, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KNotification_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KNotification, callback: *const fn (self: QtC.KNotification, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KNotification_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KNotification ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.KNotification_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KNotification ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.KNotification_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KNotification, callback: *const fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.KNotification_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KNotification ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KNotification_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KNotification ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KNotification_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KNotification, callback: *const fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.KNotification_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KNotification, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KNotification_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KNotification, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KNotification_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KNotification, callback: *const fn (self: QtC.KNotification, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.KNotification_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KNotification, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KNotification_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KNotification, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KNotification_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KNotification, callback: *const fn (self: QtC.KNotification, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KNotification_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KNotification, callback: *const fn (self: QtC.KNotification, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/knotification.html#dtor.KNotification)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KNotification ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KNotification_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/knotification.html#types
pub const enums = struct {
    pub const NotificationFlag = enum {
        pub const CloseOnTimeout: i32 = 0;
        pub const Persistent: i32 = 2;
        pub const LoopSound: i32 = 8;
        pub const SkipGrouping: i32 = 16;
        pub const CloseWhenWindowActivated: i32 = 32;
        pub const DefaultEvent: i32 = 61440;
    };

    pub const StandardEvent = enum {
        pub const Notification: i32 = 0;
        pub const Warning: i32 = 1;
        pub const Error: i32 = 2;
        pub const Catastrophe: i32 = 3;
    };

    pub const Urgency = enum {
        pub const DefaultUrgency: i32 = -1;
        pub const LowUrgency: i32 = 10;
        pub const NormalUrgency: i32 = 50;
        pub const HighUrgency: i32 = 70;
        pub const CriticalUrgency: i32 = 90;
    };
};
