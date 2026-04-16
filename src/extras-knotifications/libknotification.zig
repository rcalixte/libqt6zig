const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KNotificationReplyAction = @import("libqt6").KNotificationReplyAction;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPixmap = @import("libqt6").QPixmap;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const QWindow = @import("libqt6").QWindow;
const knotification_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
const ArrayMap_constu8_QVariant = std.array_hash_map.String(QVariant);

/// ### [Upstream resources](https://api.kde.org/knotificationaction.html)
pub const KNotificationAction = extern struct {
    /// ### [Upstream resources](https://api.kde.org/knotificationaction.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KNotificationAction,

    pub const _is_KNotificationAction = {};
    pub const _is_QObject = {};

    /// New constructs a new KNotificationAction object.
    ///
    pub fn New() KNotificationAction {
        return .{ .ptr = qtc.KNotificationAction_new() };
    }

    /// New2 constructs a new KNotificationAction object.
    ///
    /// ## Parameter(s):
    ///
    /// ` label: []const u8 `
    ///
    pub fn New2(label: []const u8) KNotificationAction {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        return .{ .ptr = qtc.KNotificationAction_new2(label_str) };
    }

    /// New3 constructs a new KNotificationAction object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New3(parent: anytype) KNotificationAction {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KNotificationAction_new3(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotificationAction `
    ///
    pub fn MetaObject(self: KNotificationAction) QMetaObject {
        return .{ .ptr = qtc.KNotificationAction_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotificationAction `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: KNotificationAction, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KNotificationAction_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNotificationAction `
    ///
    pub fn SuperMetaObject(self: KNotificationAction) QMetaObject {
        return .{ .ptr = qtc.KNotificationAction_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KNotificationAction `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KNotificationAction, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KNotificationAction_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotificationAction `
    ///
    /// ` callback: *const fn (self: KNotificationAction, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KNotificationAction, callback: *const fn (KNotificationAction, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KNotificationAction_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotificationAction `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KNotificationAction, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KNotificationAction_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KNotificationAction `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KNotificationAction, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KNotificationAction_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotificationAction `
    ///
    /// ` callback: *const fn (self: KNotificationAction, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KNotificationAction, callback: *const fn (KNotificationAction, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KNotificationAction_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotificationAction `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: KNotificationAction, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KNotificationAction_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knotificationaction.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knotificationaction.html#label)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotificationAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Label(self: KNotificationAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNotificationAction_Label(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knotificationaction.Label: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knotificationaction.html#setLabel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotificationAction `
    ///
    /// ` label: []const u8 `
    ///
    pub fn SetLabel(self: KNotificationAction, label: []const u8) void {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        qtc.KNotificationAction_SetLabel(@ptrCast(self.ptr), label_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knotificationaction.html#activated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotificationAction `
    ///
    pub fn Activated(self: KNotificationAction) void {
        qtc.KNotificationAction_Activated(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knotificationaction.html#activated)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotificationAction `
    ///
    /// ` callback: *const fn (self: KNotificationAction) callconv(.c) void `
    ///
    pub fn OnActivated(self: KNotificationAction, callback: *const fn (KNotificationAction) callconv(.c) void) void {
        qtc.KNotificationAction_Connect_Activated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/knotificationaction.html#labelChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotificationAction `
    ///
    /// ` label: []const u8 `
    ///
    pub fn LabelChanged(self: KNotificationAction, label: []const u8) void {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        qtc.KNotificationAction_LabelChanged(@ptrCast(self.ptr), label_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knotificationaction.html#labelChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotificationAction `
    ///
    /// ` callback: *const fn (self: KNotificationAction, label: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnLabelChanged(self: KNotificationAction, callback: *const fn (KNotificationAction, [*:0]const u8) callconv(.c) void) void {
        qtc.KNotificationAction_Connect_LabelChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knotificationaction.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knotificationaction.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotificationAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KNotificationAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knotificationaction.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotificationAction `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KNotificationAction, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotificationAction `
    ///
    pub fn IsWidgetType(self: KNotificationAction) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotificationAction `
    ///
    pub fn IsWindowType(self: KNotificationAction) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotificationAction `
    ///
    pub fn IsQuickItemType(self: KNotificationAction) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotificationAction `
    ///
    pub fn SignalsBlocked(self: KNotificationAction) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotificationAction `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KNotificationAction, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotificationAction `
    ///
    pub fn Thread(self: KNotificationAction) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotificationAction `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KNotificationAction, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotificationAction `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KNotificationAction, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotificationAction `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KNotificationAction, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotificationAction `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KNotificationAction, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotificationAction `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KNotificationAction, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotificationAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KNotificationAction, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("knotificationaction.Children: Memory allocation failed");
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
    /// ` self: KNotificationAction `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KNotificationAction, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotificationAction `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KNotificationAction, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotificationAction `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KNotificationAction, obj: anytype) void {
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
    /// ` self: KNotificationAction `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KNotificationAction, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KNotificationAction `
    ///
    pub fn Disconnect3(self: KNotificationAction) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotificationAction `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KNotificationAction, receiver: anytype) bool {
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
    /// ` self: KNotificationAction `
    ///
    pub fn DumpObjectTree(self: KNotificationAction) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotificationAction `
    ///
    pub fn DumpObjectInfo(self: KNotificationAction) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotificationAction `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KNotificationAction, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KNotificationAction `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KNotificationAction, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotificationAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KNotificationAction, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotificationAction `
    ///
    pub fn BindingStorage(self: KNotificationAction) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotificationAction `
    ///
    pub fn BindingStorage2(self: KNotificationAction) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotificationAction `
    ///
    pub fn Destroyed(self: KNotificationAction) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotificationAction `
    ///
    /// ` callback: *const fn (self: KNotificationAction) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KNotificationAction, callback: *const fn (KNotificationAction) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotificationAction `
    ///
    pub fn Parent(self: KNotificationAction) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotificationAction `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KNotificationAction, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotificationAction `
    ///
    pub fn DeleteLater(self: KNotificationAction) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotificationAction `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KNotificationAction, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotificationAction `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KNotificationAction, time: i64, timerType: i32) i32 {
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
    /// ` self: KNotificationAction `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KNotificationAction, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KNotificationAction `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KNotificationAction, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotificationAction `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KNotificationAction, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KNotificationAction `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KNotificationAction, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KNotificationAction `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KNotificationAction, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KNotificationAction `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KNotificationAction, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotificationAction `
    ///
    /// ` callback: *const fn (self: KNotificationAction, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KNotificationAction, callback: *const fn (KNotificationAction, QObject) callconv(.c) void) void {
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
    /// ` self: KNotificationAction `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KNotificationAction, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KNotificationAction_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KNotificationAction `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KNotificationAction, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KNotificationAction_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotificationAction`
    ///
    /// ` callback: *const fn (self: KNotificationAction, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: KNotificationAction, callback: *const fn (KNotificationAction, QEvent) callconv(.c) bool) void {
        qtc.KNotificationAction_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotificationAction `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KNotificationAction, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KNotificationAction_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: KNotificationAction `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KNotificationAction, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KNotificationAction_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotificationAction`
    ///
    /// ` callback: *const fn (self: KNotificationAction, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: KNotificationAction, callback: *const fn (KNotificationAction, QObject, QEvent) callconv(.c) bool) void {
        qtc.KNotificationAction_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotificationAction `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KNotificationAction, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KNotificationAction_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KNotificationAction `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KNotificationAction, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KNotificationAction_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotificationAction`
    ///
    /// ` callback: *const fn (self: KNotificationAction, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: KNotificationAction, callback: *const fn (KNotificationAction, QTimerEvent) callconv(.c) void) void {
        qtc.KNotificationAction_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotificationAction `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KNotificationAction, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KNotificationAction_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KNotificationAction `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KNotificationAction, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KNotificationAction_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotificationAction`
    ///
    /// ` callback: *const fn (self: KNotificationAction, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: KNotificationAction, callback: *const fn (KNotificationAction, QChildEvent) callconv(.c) void) void {
        qtc.KNotificationAction_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotificationAction `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KNotificationAction, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KNotificationAction_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KNotificationAction `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KNotificationAction, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KNotificationAction_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotificationAction`
    ///
    /// ` callback: *const fn (self: KNotificationAction, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: KNotificationAction, callback: *const fn (KNotificationAction, QEvent) callconv(.c) void) void {
        qtc.KNotificationAction_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotificationAction `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: KNotificationAction, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KNotificationAction_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KNotificationAction `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KNotificationAction, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KNotificationAction_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotificationAction`
    ///
    /// ` callback: *const fn (self: KNotificationAction, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: KNotificationAction, callback: *const fn (KNotificationAction, QMetaMethod) callconv(.c) void) void {
        qtc.KNotificationAction_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotificationAction `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: KNotificationAction, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KNotificationAction_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KNotificationAction `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KNotificationAction, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KNotificationAction_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotificationAction`
    ///
    /// ` callback: *const fn (self: KNotificationAction, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: KNotificationAction, callback: *const fn (KNotificationAction, QMetaMethod) callconv(.c) void) void {
        qtc.KNotificationAction_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotificationAction `
    ///
    pub fn Sender(self: KNotificationAction) QObject {
        return .{ .ptr = qtc.KNotificationAction_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KNotificationAction `
    ///
    pub fn SuperSender(self: KNotificationAction) QObject {
        return .{ .ptr = qtc.KNotificationAction_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotificationAction`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: KNotificationAction, callback: *const fn () callconv(.c) QObject) void {
        qtc.KNotificationAction_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotificationAction `
    ///
    pub fn SenderSignalIndex(self: KNotificationAction) i32 {
        return qtc.KNotificationAction_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KNotificationAction `
    ///
    pub fn SuperSenderSignalIndex(self: KNotificationAction) i32 {
        return qtc.KNotificationAction_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotificationAction`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: KNotificationAction, callback: *const fn () callconv(.c) i32) void {
        qtc.KNotificationAction_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotificationAction `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: KNotificationAction, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KNotificationAction_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KNotificationAction `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KNotificationAction, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KNotificationAction_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotificationAction`
    ///
    /// ` callback: *const fn (self: KNotificationAction, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: KNotificationAction, callback: *const fn (KNotificationAction, [*:0]const u8) callconv(.c) i32) void {
        qtc.KNotificationAction_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotificationAction `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: KNotificationAction, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KNotificationAction_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KNotificationAction `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KNotificationAction, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KNotificationAction_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotificationAction`
    ///
    /// ` callback: *const fn (self: KNotificationAction, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: KNotificationAction, callback: *const fn (KNotificationAction, QMetaMethod) callconv(.c) bool) void {
        qtc.KNotificationAction_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotificationAction `
    ///
    /// ` callback: *const fn (self: KNotificationAction, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KNotificationAction, callback: *const fn (KNotificationAction, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/knotificationaction.html#dtor.KNotificationAction)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KNotificationAction `
    ///
    pub fn Delete(self: KNotificationAction) void {
        qtc.KNotificationAction_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/knotification.html)
pub const KNotification = extern struct {
    /// ### [Upstream resources](https://api.kde.org/knotification.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KNotification,

    pub const _is_KNotification = {};
    pub const _is_QObject = {};

    /// New constructs a new KNotification object.
    ///
    /// ## Parameter(s):
    ///
    /// ` eventId: []const u8 `
    ///
    pub fn New(eventId: []const u8) KNotification {
        const eventId_str = qtc.libqt_string{
            .len = eventId.len,
            .data = eventId.ptr,
        };
        return .{ .ptr = qtc.KNotification_new(eventId_str) };
    }

    /// New2 constructs a new KNotification object.
    ///
    /// ## Parameter(s):
    ///
    /// ` eventId: []const u8 `
    ///
    /// ` flags: flag of knotification_enums.NotificationFlag `
    ///
    pub fn New2(eventId: []const u8, flags: i32) KNotification {
        const eventId_str = qtc.libqt_string{
            .len = eventId.len,
            .data = eventId.ptr,
        };
        return .{ .ptr = qtc.KNotification_new2(eventId_str, @bitCast(flags)) };
    }

    /// New3 constructs a new KNotification object.
    ///
    /// ## Parameter(s):
    ///
    /// ` eventId: []const u8 `
    ///
    /// ` flags: flag of knotification_enums.NotificationFlag `
    ///
    /// ` parent: QObject `
    ///
    pub fn New3(eventId: []const u8, flags: i32, parent: anytype) KNotification {
        const eventId_str = qtc.libqt_string{
            .len = eventId.len,
            .data = eventId.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KNotification_new3(eventId_str, @bitCast(flags), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    pub fn MetaObject(self: KNotification) QMetaObject {
        return .{ .ptr = qtc.KNotification_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotification `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: KNotification, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KNotification_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNotification `
    ///
    pub fn SuperMetaObject(self: KNotification) QMetaObject {
        return .{ .ptr = qtc.KNotification_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KNotification, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KNotification_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotification `
    ///
    /// ` callback: *const fn (self: KNotification, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KNotification, callback: *const fn (KNotification, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KNotification_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KNotification, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KNotification_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KNotification, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KNotification_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotification `
    ///
    /// ` callback: *const fn (self: KNotification, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KNotification, callback: *const fn (KNotification, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KNotification_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: KNotification, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KNotification_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knotification.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#eventId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn EventId(self: KNotification, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNotification_EventId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knotification.EventId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#setEventId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` eventId: []const u8 `
    ///
    pub fn SetEventId(self: KNotification, eventId: []const u8) void {
        const eventId_str = qtc.libqt_string{
            .len = eventId.len,
            .data = eventId.ptr,
        };
        qtc.KNotification_SetEventId(@ptrCast(self.ptr), eventId_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#title)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Title(self: KNotification, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNotification_Title(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knotification.Title: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#setTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` title: []const u8 `
    ///
    pub fn SetTitle(self: KNotification, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.KNotification_SetTitle(@ptrCast(self.ptr), title_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: KNotification, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNotification_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knotification.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetText(self: KNotification, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KNotification_SetText(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#iconName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn IconName(self: KNotification, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNotification_IconName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knotification.IconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#setIconName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` icon: []const u8 `
    ///
    pub fn SetIconName(self: KNotification, icon: []const u8) void {
        const icon_str = qtc.libqt_string{
            .len = icon.len,
            .data = icon.ptr,
        };
        qtc.KNotification_SetIconName(@ptrCast(self.ptr), icon_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#pixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    pub fn Pixmap(self: KNotification) QPixmap {
        return .{ .ptr = qtc.KNotification_Pixmap(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#setPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` pix: QPixmap `
    ///
    pub fn SetPixmap(self: KNotification, pix: anytype) void {
        comptime _ = @TypeOf(pix)._is_QPixmap;
        qtc.KNotification_SetPixmap(@ptrCast(self.ptr), @ptrCast(pix.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#defaultAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    pub fn DefaultAction(self: KNotification) KNotificationAction {
        return .{ .ptr = qtc.KNotification_DefaultAction(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#addDefaultAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` label: []const u8 `
    ///
    pub fn AddDefaultAction(self: KNotification, label: []const u8) KNotificationAction {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        return .{ .ptr = qtc.KNotification_AddDefaultAction(@ptrCast(self.ptr), label_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` label: []const u8 `
    ///
    pub fn AddAction(self: KNotification, label: []const u8) KNotificationAction {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        return .{ .ptr = qtc.KNotification_AddAction(@ptrCast(self.ptr), label_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#clearActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    pub fn ClearActions(self: KNotification) void {
        qtc.KNotification_ClearActions(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#replyAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    pub fn ReplyAction(self: KNotification) KNotificationReplyAction {
        return .{ .ptr = qtc.KNotification_ReplyAction(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#setReplyAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` replyAction: KNotificationReplyAction (WARNING: The library takes ownership of this parameter's memory and attempting to access it will lead to a crash.) `
    ///
    pub fn SetReplyAction(self: KNotification, replyAction: anytype) void {
        comptime _ = @TypeOf(replyAction)._is_KNotificationReplyAction;
        qtc.KNotification_SetReplyAction(@ptrCast(self.ptr), @ptrCast(replyAction.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#flags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ## Returns:
    ///
    /// ` flag of knotification_enums.NotificationFlag `
    ///
    pub fn Flags(self: KNotification) i32 {
        return qtc.KNotification_Flags(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#setFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` flags: *const flag of knotification_enums.NotificationFlag `
    ///
    pub fn SetFlags(self: KNotification, flags: *const i32) void {
        qtc.KNotification_SetFlags(@ptrCast(self.ptr), @ptrCast(flags));
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#componentName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ComponentName(self: KNotification, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNotification_ComponentName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knotification.ComponentName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#setComponentName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` componentName: []const u8 `
    ///
    pub fn SetComponentName(self: KNotification, componentName: []const u8) void {
        const componentName_str = qtc.libqt_string{
            .len = componentName.len,
            .data = componentName.ptr,
        };
        qtc.KNotification_SetComponentName(@ptrCast(self.ptr), componentName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#urls)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Urls(self: KNotification, allocator: std.mem.Allocator) []QUrl {
        const _arr: qtc.libqt_list = qtc.KNotification_Urls(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QUrl, _arr.len) catch @panic("knotification.Urls: Memory allocation failed");
        const _data: [*]QtC.QUrl = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#setUrls)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` urls: []QUrl `
    ///
    pub fn SetUrls(self: KNotification, urls: []QUrl) void {
        const urls_list = qtc.libqt_list{
            .len = urls.len,
            .data = @ptrCast(urls.ptr),
        };
        qtc.KNotification_SetUrls(@ptrCast(self.ptr), urls_list);
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#urgency)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ## Returns:
    ///
    /// ` knotification_enums.Urgency `
    ///
    pub fn Urgency(self: KNotification) i32 {
        return qtc.KNotification_Urgency(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#setUrgency)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` urgency: knotification_enums.Urgency `
    ///
    pub fn SetUrgency(self: KNotification, urgency: i32) void {
        qtc.KNotification_SetUrgency(@ptrCast(self.ptr), @bitCast(urgency));
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#setWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` window: QWindow `
    ///
    pub fn SetWindow(self: KNotification, window: anytype) void {
        comptime _ = @TypeOf(window)._is_QWindow;
        qtc.KNotification_SetWindow(@ptrCast(self.ptr), @ptrCast(window.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#window)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    pub fn Window(self: KNotification) QWindow {
        return .{ .ptr = qtc.KNotification_Window(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#appName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AppName(self: KNotification, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNotification_AppName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knotification.AppName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#isAutoDelete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    pub fn IsAutoDelete(self: KNotification) bool {
        return qtc.KNotification_IsAutoDelete(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#setAutoDelete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` autoDelete: bool `
    ///
    pub fn SetAutoDelete(self: KNotification, autoDelete: bool) void {
        qtc.KNotification_SetAutoDelete(@ptrCast(self.ptr), autoDelete);
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#xdgActivationToken)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn XdgActivationToken(self: KNotification, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNotification_XdgActivationToken(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knotification.XdgActivationToken: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#closed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    pub fn Closed(self: KNotification) void {
        qtc.KNotification_Closed(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#closed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotification `
    ///
    /// ` callback: *const fn (self: KNotification) callconv(.c) void `
    ///
    pub fn OnClosed(self: KNotification, callback: *const fn (KNotification) callconv(.c) void) void {
        qtc.KNotification_Connect_Closed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#ignored)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    pub fn Ignored(self: KNotification) void {
        qtc.KNotification_Ignored(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#ignored)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotification `
    ///
    /// ` callback: *const fn (self: KNotification) callconv(.c) void `
    ///
    pub fn OnIgnored(self: KNotification, callback: *const fn (KNotification) callconv(.c) void) void {
        qtc.KNotification_Connect_Ignored(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#eventIdChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    pub fn EventIdChanged(self: KNotification) void {
        qtc.KNotification_EventIdChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#eventIdChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotification `
    ///
    /// ` callback: *const fn (self: KNotification) callconv(.c) void `
    ///
    pub fn OnEventIdChanged(self: KNotification, callback: *const fn (KNotification) callconv(.c) void) void {
        qtc.KNotification_Connect_EventIdChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#titleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    pub fn TitleChanged(self: KNotification) void {
        qtc.KNotification_TitleChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#titleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotification `
    ///
    /// ` callback: *const fn (self: KNotification) callconv(.c) void `
    ///
    pub fn OnTitleChanged(self: KNotification, callback: *const fn (KNotification) callconv(.c) void) void {
        qtc.KNotification_Connect_TitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#textChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    pub fn TextChanged(self: KNotification) void {
        qtc.KNotification_TextChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#textChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotification `
    ///
    /// ` callback: *const fn (self: KNotification) callconv(.c) void `
    ///
    pub fn OnTextChanged(self: KNotification, callback: *const fn (KNotification) callconv(.c) void) void {
        qtc.KNotification_Connect_TextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#iconNameChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    pub fn IconNameChanged(self: KNotification) void {
        qtc.KNotification_IconNameChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#iconNameChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotification `
    ///
    /// ` callback: *const fn (self: KNotification) callconv(.c) void `
    ///
    pub fn OnIconNameChanged(self: KNotification, callback: *const fn (KNotification) callconv(.c) void) void {
        qtc.KNotification_Connect_IconNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#defaultActionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    pub fn DefaultActionChanged(self: KNotification) void {
        qtc.KNotification_DefaultActionChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#defaultActionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotification `
    ///
    /// ` callback: *const fn (self: KNotification) callconv(.c) void `
    ///
    pub fn OnDefaultActionChanged(self: KNotification, callback: *const fn (KNotification) callconv(.c) void) void {
        qtc.KNotification_Connect_DefaultActionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#actionsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    pub fn ActionsChanged(self: KNotification) void {
        qtc.KNotification_ActionsChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#actionsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotification `
    ///
    /// ` callback: *const fn (self: KNotification) callconv(.c) void `
    ///
    pub fn OnActionsChanged(self: KNotification, callback: *const fn (KNotification) callconv(.c) void) void {
        qtc.KNotification_Connect_ActionsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#flagsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    pub fn FlagsChanged(self: KNotification) void {
        qtc.KNotification_FlagsChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#flagsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotification `
    ///
    /// ` callback: *const fn (self: KNotification) callconv(.c) void `
    ///
    pub fn OnFlagsChanged(self: KNotification, callback: *const fn (KNotification) callconv(.c) void) void {
        qtc.KNotification_Connect_FlagsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#componentNameChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    pub fn ComponentNameChanged(self: KNotification) void {
        qtc.KNotification_ComponentNameChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#componentNameChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotification `
    ///
    /// ` callback: *const fn (self: KNotification) callconv(.c) void `
    ///
    pub fn OnComponentNameChanged(self: KNotification, callback: *const fn (KNotification) callconv(.c) void) void {
        qtc.KNotification_Connect_ComponentNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#urlsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    pub fn UrlsChanged(self: KNotification) void {
        qtc.KNotification_UrlsChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#urlsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotification `
    ///
    /// ` callback: *const fn (self: KNotification) callconv(.c) void `
    ///
    pub fn OnUrlsChanged(self: KNotification, callback: *const fn (KNotification) callconv(.c) void) void {
        qtc.KNotification_Connect_UrlsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#urgencyChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    pub fn UrgencyChanged(self: KNotification) void {
        qtc.KNotification_UrgencyChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#urgencyChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotification `
    ///
    /// ` callback: *const fn (self: KNotification) callconv(.c) void `
    ///
    pub fn OnUrgencyChanged(self: KNotification, callback: *const fn (KNotification) callconv(.c) void) void {
        qtc.KNotification_Connect_UrgencyChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#autoDeleteChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    pub fn AutoDeleteChanged(self: KNotification) void {
        qtc.KNotification_AutoDeleteChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#autoDeleteChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotification `
    ///
    /// ` callback: *const fn (self: KNotification) callconv(.c) void `
    ///
    pub fn OnAutoDeleteChanged(self: KNotification, callback: *const fn (KNotification) callconv(.c) void) void {
        qtc.KNotification_Connect_AutoDeleteChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#xdgActivationTokenChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    pub fn XdgActivationTokenChanged(self: KNotification) void {
        qtc.KNotification_XdgActivationTokenChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#xdgActivationTokenChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotification `
    ///
    /// ` callback: *const fn (self: KNotification) callconv(.c) void `
    ///
    pub fn OnXdgActivationTokenChanged(self: KNotification, callback: *const fn (KNotification) callconv(.c) void) void {
        qtc.KNotification_Connect_XdgActivationTokenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#hintsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    pub fn HintsChanged(self: KNotification) void {
        qtc.KNotification_HintsChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#hintsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotification `
    ///
    /// ` callback: *const fn (self: KNotification) callconv(.c) void `
    ///
    pub fn OnHintsChanged(self: KNotification, callback: *const fn (KNotification) callconv(.c) void) void {
        qtc.KNotification_Connect_HintsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    pub fn Close(self: KNotification) void {
        qtc.KNotification_Close(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#sendEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    pub fn SendEvent(self: KNotification) void {
        qtc.KNotification_SendEvent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#setHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` hint: []const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetHint(self: KNotification, hint: []const u8, value: anytype) void {
        const hint_str = qtc.libqt_string{
            .len = hint.len,
            .data = hint.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.KNotification_SetHint(@ptrCast(self.ptr), hint_str, @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#hints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Hints(self: KNotification, allocator: std.mem.Allocator) ArrayMap_constu8_QVariant {
        const _map: qtc.libqt_map = qtc.KNotification_Hints(@ptrCast(self.ptr));
        var _ret: ArrayMap_constu8_QVariant = .empty;
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
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("knotification.Hints: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            _ret.put(allocator, _entry_slice, .{ .ptr = @ptrCast(_value) }) catch @panic("knotification.Hints: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#setHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` hints: ArrayMap_constu8_QVariant `
    ///
    pub fn SetHints(self: KNotification, allocator: std.mem.Allocator, hints: ArrayMap_constu8_QVariant) void {
        const hints_count = hints.count();
        const hints_keys = allocator.alloc(qtc.libqt_string, hints_count) catch @panic("knotification.SetHints: Memory allocation failed");
        defer allocator.free(hints_keys);
        const hints_values = allocator.alloc(QtC.QVariant, hints_count) catch @panic("knotification.SetHints: Memory allocation failed");
        defer allocator.free(hints_values);
        var i: usize = 0;
        var hints_it = hints.iterator();
        while (hints_it.next()) |it_entry| : (i += 1) {
            const hints_key = it_entry.key_ptr.*;
            hints_keys[i] = qtc.libqt_string{
                .len = hints_key.len,
                .data = hints_key.ptr,
            };
            hints_values[i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const hints_map = qtc.libqt_map{
            .len = hints_count,
            .keys = @ptrCast(hints_keys.ptr),
            .values = @ptrCast(hints_values.ptr),
        };
        qtc.KNotification_SetHints(@ptrCast(self.ptr), hints_map);
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` eventId: []const u8 `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    pub fn Event(eventId: []const u8, title: []const u8, text: []const u8) KNotification {
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
        return .{ .ptr = qtc.KNotification_Event(eventId_str, title_str, text_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` eventId: []const u8 `
    ///
    pub fn Event2(eventId: []const u8) KNotification {
        const eventId_str = qtc.libqt_string{
            .len = eventId.len,
            .data = eventId.ptr,
        };
        return .{ .ptr = qtc.KNotification_Event2(eventId_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` eventId: knotification_enums.StandardEvent `
    ///
    pub fn Event3(eventId: i32) KNotification {
        return .{ .ptr = qtc.KNotification_Event3(@bitCast(eventId)) };
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` eventId: knotification_enums.StandardEvent `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn Event4(eventId: i32, title: []const u8, text: []const u8, pixmap: anytype) KNotification {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        return .{ .ptr = qtc.KNotification_Event4(@bitCast(eventId), title_str, text_str, @ptrCast(pixmap.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` eventId: []const u8 `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` iconName: []const u8 `
    ///
    pub fn Event5(eventId: []const u8, title: []const u8, text: []const u8, iconName: []const u8) KNotification {
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
        return .{ .ptr = qtc.KNotification_Event5(eventId_str, title_str, text_str, iconName_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` eventId: knotification_enums.StandardEvent `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` iconName: []const u8 `
    ///
    pub fn Event6(eventId: i32, title: []const u8, text: []const u8, iconName: []const u8) KNotification {
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
        return .{ .ptr = qtc.KNotification_Event6(@bitCast(eventId), title_str, text_str, iconName_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` eventId: knotification_enums.StandardEvent `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    pub fn Event7(eventId: i32, title: []const u8, text: []const u8) KNotification {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.KNotification_Event7(@bitCast(eventId), title_str, text_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#beep)
    ///
    pub fn Beep() void {
        qtc.KNotification_Beep();
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knotification.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knotification.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` eventId: []const u8 `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn Event42(eventId: []const u8, title: []const u8, text: []const u8, pixmap: anytype) KNotification {
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
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        return .{ .ptr = qtc.KNotification_Event42(eventId_str, title_str, text_str, @ptrCast(pixmap.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` eventId: []const u8 `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` pixmap: QPixmap `
    ///
    /// ` flags: *const flag of knotification_enums.NotificationFlag `
    ///
    pub fn Event52(eventId: []const u8, title: []const u8, text: []const u8, pixmap: anytype, flags: *const i32) KNotification {
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
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        return .{ .ptr = qtc.KNotification_Event52(eventId_str, title_str, text_str, @ptrCast(pixmap.ptr), @ptrCast(flags)) };
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` eventId: []const u8 `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` pixmap: QPixmap `
    ///
    /// ` flags: *const flag of knotification_enums.NotificationFlag `
    ///
    /// ` componentName: []const u8 `
    ///
    pub fn Event62(eventId: []const u8, title: []const u8, text: []const u8, pixmap: anytype, flags: *const i32, componentName: []const u8) KNotification {
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
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        const componentName_str = qtc.libqt_string{
            .len = componentName.len,
            .data = componentName.ptr,
        };
        return .{ .ptr = qtc.KNotification_Event62(eventId_str, title_str, text_str, @ptrCast(pixmap.ptr), @ptrCast(flags), componentName_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` eventId: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    pub fn Event22(eventId: []const u8, text: []const u8) KNotification {
        const eventId_str = qtc.libqt_string{
            .len = eventId.len,
            .data = eventId.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.KNotification_Event22(eventId_str, text_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` eventId: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn Event32(eventId: []const u8, text: []const u8, pixmap: anytype) KNotification {
        const eventId_str = qtc.libqt_string{
            .len = eventId.len,
            .data = eventId.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        return .{ .ptr = qtc.KNotification_Event32(eventId_str, text_str, @ptrCast(pixmap.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` eventId: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` pixmap: QPixmap `
    ///
    /// ` flags: *const flag of knotification_enums.NotificationFlag `
    ///
    pub fn Event43(eventId: []const u8, text: []const u8, pixmap: anytype, flags: *const i32) KNotification {
        const eventId_str = qtc.libqt_string{
            .len = eventId.len,
            .data = eventId.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        return .{ .ptr = qtc.KNotification_Event43(eventId_str, text_str, @ptrCast(pixmap.ptr), @ptrCast(flags)) };
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` eventId: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` pixmap: QPixmap `
    ///
    /// ` flags: *const flag of knotification_enums.NotificationFlag `
    ///
    /// ` componentName: []const u8 `
    ///
    pub fn Event53(eventId: []const u8, text: []const u8, pixmap: anytype, flags: *const i32, componentName: []const u8) KNotification {
        const eventId_str = qtc.libqt_string{
            .len = eventId.len,
            .data = eventId.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        const componentName_str = qtc.libqt_string{
            .len = componentName.len,
            .data = componentName.ptr,
        };
        return .{ .ptr = qtc.KNotification_Event53(eventId_str, text_str, @ptrCast(pixmap.ptr), @ptrCast(flags), componentName_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` eventId: knotification_enums.StandardEvent `
    ///
    /// ` text: []const u8 `
    ///
    pub fn Event23(eventId: i32, text: []const u8) KNotification {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.KNotification_Event23(@bitCast(eventId), text_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` eventId: knotification_enums.StandardEvent `
    ///
    /// ` text: []const u8 `
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn Event33(eventId: i32, text: []const u8, pixmap: anytype) KNotification {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        return .{ .ptr = qtc.KNotification_Event33(@bitCast(eventId), text_str, @ptrCast(pixmap.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` eventId: knotification_enums.StandardEvent `
    ///
    /// ` text: []const u8 `
    ///
    /// ` pixmap: QPixmap `
    ///
    /// ` flags: *const flag of knotification_enums.NotificationFlag `
    ///
    pub fn Event44(eventId: i32, text: []const u8, pixmap: anytype, flags: *const i32) KNotification {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        return .{ .ptr = qtc.KNotification_Event44(@bitCast(eventId), text_str, @ptrCast(pixmap.ptr), @ptrCast(flags)) };
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` eventId: knotification_enums.StandardEvent `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` pixmap: QPixmap `
    ///
    /// ` flags: *const flag of knotification_enums.NotificationFlag `
    ///
    pub fn Event54(eventId: i32, title: []const u8, text: []const u8, pixmap: anytype, flags: *const i32) KNotification {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        return .{ .ptr = qtc.KNotification_Event54(@bitCast(eventId), title_str, text_str, @ptrCast(pixmap.ptr), @ptrCast(flags)) };
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` eventId: []const u8 `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` iconName: []const u8 `
    ///
    /// ` flags: *const flag of knotification_enums.NotificationFlag `
    ///
    pub fn Event55(eventId: []const u8, title: []const u8, text: []const u8, iconName: []const u8, flags: *const i32) KNotification {
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
        return .{ .ptr = qtc.KNotification_Event55(eventId_str, title_str, text_str, iconName_str, @ptrCast(flags)) };
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` eventId: []const u8 `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` iconName: []const u8 `
    ///
    /// ` flags: *const flag of knotification_enums.NotificationFlag `
    ///
    /// ` componentName: []const u8 `
    ///
    pub fn Event63(eventId: []const u8, title: []const u8, text: []const u8, iconName: []const u8, flags: *const i32, componentName: []const u8) KNotification {
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
        return .{ .ptr = qtc.KNotification_Event63(eventId_str, title_str, text_str, iconName_str, @ptrCast(flags), componentName_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` eventId: knotification_enums.StandardEvent `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` iconName: []const u8 `
    ///
    /// ` flags: *const flag of knotification_enums.NotificationFlag `
    ///
    pub fn Event56(eventId: i32, title: []const u8, text: []const u8, iconName: []const u8, flags: *const i32) KNotification {
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
        return .{ .ptr = qtc.KNotification_Event56(@bitCast(eventId), title_str, text_str, iconName_str, @ptrCast(flags)) };
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` eventId: knotification_enums.StandardEvent `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` flags: *const flag of knotification_enums.NotificationFlag `
    ///
    pub fn Event45(eventId: i32, title: []const u8, text: []const u8, flags: *const i32) KNotification {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.KNotification_Event45(@bitCast(eventId), title_str, text_str, @ptrCast(flags)) };
    }

    /// ### [Upstream resources](https://api.kde.org/knotification.html#beep)
    ///
    /// ## Parameter(s):
    ///
    /// ` reason: []const u8 `
    ///
    pub fn Beep1(reason: []const u8) void {
        const reason_str = qtc.libqt_string{
            .len = reason.len,
            .data = reason.ptr,
        };
        qtc.KNotification_Beep1(reason_str);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KNotification, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knotification.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KNotification, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    pub fn IsWidgetType(self: KNotification) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    pub fn IsWindowType(self: KNotification) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    pub fn IsQuickItemType(self: KNotification) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    pub fn SignalsBlocked(self: KNotification) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KNotification, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    pub fn Thread(self: KNotification) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KNotification, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KNotification, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KNotification, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KNotification, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KNotification, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KNotification, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("knotification.Children: Memory allocation failed");
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
    /// ` self: KNotification `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KNotification, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KNotification, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KNotification, obj: anytype) void {
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
    /// ` self: KNotification `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KNotification, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KNotification `
    ///
    pub fn Disconnect3(self: KNotification) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KNotification, receiver: anytype) bool {
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
    /// ` self: KNotification `
    ///
    pub fn DumpObjectTree(self: KNotification) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    pub fn DumpObjectInfo(self: KNotification) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KNotification, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KNotification `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KNotification, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KNotification, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    pub fn BindingStorage(self: KNotification) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    pub fn BindingStorage2(self: KNotification) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    pub fn Destroyed(self: KNotification) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotification `
    ///
    /// ` callback: *const fn (self: KNotification) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KNotification, callback: *const fn (KNotification) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    pub fn Parent(self: KNotification) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KNotification, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    pub fn DeleteLater(self: KNotification) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KNotification, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KNotification, time: i64, timerType: i32) i32 {
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
    /// ` self: KNotification `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KNotification, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KNotification `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KNotification, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KNotification, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KNotification `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KNotification, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KNotification `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KNotification, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KNotification `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KNotification, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotification `
    ///
    /// ` callback: *const fn (self: KNotification, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KNotification, callback: *const fn (KNotification, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KNotification, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KNotification_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: KNotification `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KNotification, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KNotification_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotification`
    ///
    /// ` callback: *const fn (self: KNotification, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: KNotification, callback: *const fn (KNotification, QObject, QEvent) callconv(.c) bool) void {
        qtc.KNotification_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KNotification, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KNotification_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KNotification `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KNotification, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KNotification_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotification`
    ///
    /// ` callback: *const fn (self: KNotification, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: KNotification, callback: *const fn (KNotification, QTimerEvent) callconv(.c) void) void {
        qtc.KNotification_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KNotification, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KNotification_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KNotification `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KNotification, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KNotification_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotification`
    ///
    /// ` callback: *const fn (self: KNotification, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: KNotification, callback: *const fn (KNotification, QChildEvent) callconv(.c) void) void {
        qtc.KNotification_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KNotification, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KNotification_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KNotification `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KNotification, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KNotification_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotification`
    ///
    /// ` callback: *const fn (self: KNotification, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: KNotification, callback: *const fn (KNotification, QEvent) callconv(.c) void) void {
        qtc.KNotification_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: KNotification, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KNotification_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KNotification `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KNotification, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KNotification_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotification`
    ///
    /// ` callback: *const fn (self: KNotification, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: KNotification, callback: *const fn (KNotification, QMetaMethod) callconv(.c) void) void {
        qtc.KNotification_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: KNotification, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KNotification_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KNotification `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KNotification, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KNotification_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotification`
    ///
    /// ` callback: *const fn (self: KNotification, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: KNotification, callback: *const fn (KNotification, QMetaMethod) callconv(.c) void) void {
        qtc.KNotification_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    pub fn Sender(self: KNotification) QObject {
        return .{ .ptr = qtc.KNotification_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KNotification `
    ///
    pub fn SuperSender(self: KNotification) QObject {
        return .{ .ptr = qtc.KNotification_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotification`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: KNotification, callback: *const fn () callconv(.c) QObject) void {
        qtc.KNotification_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    pub fn SenderSignalIndex(self: KNotification) i32 {
        return qtc.KNotification_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KNotification `
    ///
    pub fn SuperSenderSignalIndex(self: KNotification) i32 {
        return qtc.KNotification_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotification`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: KNotification, callback: *const fn () callconv(.c) i32) void {
        qtc.KNotification_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: KNotification, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KNotification_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KNotification `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KNotification, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KNotification_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotification`
    ///
    /// ` callback: *const fn (self: KNotification, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: KNotification, callback: *const fn (KNotification, [*:0]const u8) callconv(.c) i32) void {
        qtc.KNotification_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: KNotification, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KNotification_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KNotification `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KNotification, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KNotification_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotification`
    ///
    /// ` callback: *const fn (self: KNotification, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: KNotification, callback: *const fn (KNotification, QMetaMethod) callconv(.c) bool) void {
        qtc.KNotification_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotification `
    ///
    /// ` callback: *const fn (self: KNotification, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KNotification, callback: *const fn (KNotification, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#dtor.KNotification)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KNotification `
    ///
    pub fn Delete(self: KNotification) void {
        qtc.KNotification_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/knotification.html#public-types)
pub const enums = struct {
    pub const NotificationFlag = enum(i32) {
        pub const CloseOnTimeout: i32 = 0;
        pub const Persistent: i32 = 2;
        pub const LoopSound: i32 = 8;
        pub const SkipGrouping: i32 = 16;
        pub const CloseWhenWindowActivated: i32 = 32;
        pub const DefaultEvent: i32 = 61440;
    };

    pub const StandardEvent = enum(i32) {
        pub const Notification: i32 = 0;
        pub const Warning: i32 = 1;
        pub const Error: i32 = 2;
        pub const Catastrophe: i32 = 3;
    };

    pub const Urgency = enum(i32) {
        pub const DefaultUrgency: i32 = -1;
        pub const LowUrgency: i32 = 10;
        pub const NormalUrgency: i32 = 50;
        pub const HighUrgency: i32 = 70;
        pub const CriticalUrgency: i32 = 90;
    };
};
