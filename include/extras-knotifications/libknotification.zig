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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KNotificationAction object in C++ memory
    ///
    pub fn new() KNotificationAction {
        return .{ .ptr = qtc.KNotificationAction_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KNotificationAction object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _label: []const u8 `
    ///
    pub fn new2(_label: []const u8) KNotificationAction {
        const label_str = qtc.libqt_string{
            .len = _label.len,
            .data = _label.ptr,
        };
        return .{ .ptr = qtc.KNotificationAction_new2(label_str) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KNotificationAction object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new3(_parent: anytype) KNotificationAction {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.KNotificationAction_new3(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotificationAction `
    ///
    pub fn metaObject(self: KNotificationAction) QMetaObject {
        return .{ .ptr = qtc.KNotificationAction_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: KNotificationAction `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: KNotificationAction, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KNotificationAction_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNotificationAction `
    ///
    pub fn superMetaObject(self: KNotificationAction) QMetaObject {
        return .{ .ptr = qtc.KNotificationAction_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KNotificationAction `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KNotificationAction, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KNotificationAction_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotificationAction `
    ///
    /// ` callback: *const fn (self: KNotificationAction, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: KNotificationAction, callback: *const fn (KNotificationAction, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KNotificationAction_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotificationAction `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: KNotificationAction, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KNotificationAction_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: KNotificationAction, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KNotificationAction_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotificationAction `
    ///
    /// ` callback: *const fn (self: KNotificationAction, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: KNotificationAction, callback: *const fn (KNotificationAction, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KNotificationAction_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: KNotificationAction, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KNotificationAction_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNotificationAction.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `label` instead
    ///
    pub const Label = label;

    /// ### [Upstream resources](https://api.kde.org/knotificationaction.html#label)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotificationAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn label(self: KNotificationAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNotificationAction_Label(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNotificationAction.label: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setLabel` instead
    ///
    pub const SetLabel = setLabel;

    /// ### [Upstream resources](https://api.kde.org/knotificationaction.html#setLabel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotificationAction `
    ///
    /// ` _label: []const u8 `
    ///
    pub fn setLabel(self: KNotificationAction, _label: []const u8) void {
        const label_str = qtc.libqt_string{
            .len = _label.len,
            .data = _label.ptr,
        };
        qtc.KNotificationAction_SetLabel(@ptrCast(self.ptr), label_str);
    }

    /// ### DEPRECATED: Use `activated` instead
    ///
    pub const Activated = activated;

    /// ### [Upstream resources](https://api.kde.org/knotificationaction.html#activated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotificationAction `
    ///
    pub fn activated(self: KNotificationAction) void {
        qtc.KNotificationAction_Activated(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onActivated` instead
    ///
    pub const OnActivated = onActivated;

    /// ### [Upstream resources](https://api.kde.org/knotificationaction.html#activated)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotificationAction `
    ///
    /// ` callback: *const fn (self: KNotificationAction) callconv(.c) void `
    ///
    pub fn onActivated(self: KNotificationAction, callback: *const fn (KNotificationAction) callconv(.c) void) void {
        qtc.KNotificationAction_Connect_Activated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `labelChanged` instead
    ///
    pub const LabelChanged = labelChanged;

    /// ### [Upstream resources](https://api.kde.org/knotificationaction.html#labelChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotificationAction `
    ///
    /// ` _label: []const u8 `
    ///
    pub fn labelChanged(self: KNotificationAction, _label: []const u8) void {
        const label_str = qtc.libqt_string{
            .len = _label.len,
            .data = _label.ptr,
        };
        qtc.KNotificationAction_LabelChanged(@ptrCast(self.ptr), label_str);
    }

    /// ### DEPRECATED: Use `onLabelChanged` instead
    ///
    pub const OnLabelChanged = onLabelChanged;

    /// ### [Upstream resources](https://api.kde.org/knotificationaction.html#labelChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotificationAction `
    ///
    /// ` callback: *const fn (self: KNotificationAction, label: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onLabelChanged(self: KNotificationAction, callback: *const fn (KNotificationAction, [*:0]const u8) callconv(.c) void) void {
        qtc.KNotificationAction_Connect_LabelChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNotificationAction.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNotificationAction.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
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
    /// ` self: KNotificationAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KNotificationAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNotificationAction.objectName: Memory allocation failed");
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
    /// ` self: KNotificationAction `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: KNotificationAction, name: []const u8) void {
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
    /// ` self: KNotificationAction `
    ///
    pub fn isWidgetType(self: KNotificationAction) bool {
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
    /// ` self: KNotificationAction `
    ///
    pub fn isWindowType(self: KNotificationAction) bool {
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
    /// ` self: KNotificationAction `
    ///
    pub fn isQuickItemType(self: KNotificationAction) bool {
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
    /// ` self: KNotificationAction `
    ///
    pub fn signalsBlocked(self: KNotificationAction) bool {
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
    /// ` self: KNotificationAction `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KNotificationAction, b: bool) bool {
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
    /// ` self: KNotificationAction `
    ///
    pub fn thread(self: KNotificationAction) QThread {
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
    /// ` self: KNotificationAction `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KNotificationAction, _thread: anytype) bool {
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
    /// ` self: KNotificationAction `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KNotificationAction, interval: i32) i32 {
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
    /// ` self: KNotificationAction `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KNotificationAction, time: i64) i32 {
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
    /// ` self: KNotificationAction `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KNotificationAction, id: i32) void {
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
    /// ` self: KNotificationAction `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KNotificationAction, id: i32) void {
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
    /// ` self: KNotificationAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KNotificationAction, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KNotificationAction.children: Memory allocation failed");
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
    /// ` self: KNotificationAction `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KNotificationAction, _parent: anytype) void {
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
    /// ` self: KNotificationAction `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KNotificationAction, filterObj: anytype) void {
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
    /// ` self: KNotificationAction `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KNotificationAction, obj: anytype) void {
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
    /// ` self: KNotificationAction `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KNotificationAction, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KNotificationAction `
    ///
    pub fn disconnect3(self: KNotificationAction) bool {
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
    /// ` self: KNotificationAction `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KNotificationAction, receiver: anytype) bool {
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
    /// ` self: KNotificationAction `
    ///
    pub fn dumpObjectTree(self: KNotificationAction) void {
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
    /// ` self: KNotificationAction `
    ///
    pub fn dumpObjectInfo(self: KNotificationAction) void {
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
    /// ` self: KNotificationAction `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KNotificationAction, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KNotificationAction `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: KNotificationAction, name: [:0]const u8) QVariant {
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
    /// ` self: KNotificationAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KNotificationAction, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KNotificationAction.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KNotificationAction.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KNotificationAction `
    ///
    pub fn bindingStorage(self: KNotificationAction) QBindingStorage {
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
    /// ` self: KNotificationAction `
    ///
    pub fn bindingStorage2(self: KNotificationAction) QBindingStorage {
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
    /// ` self: KNotificationAction `
    ///
    pub fn destroyed(self: KNotificationAction) void {
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
    /// ` self: KNotificationAction `
    ///
    /// ` callback: *const fn (self: KNotificationAction) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KNotificationAction, callback: *const fn (KNotificationAction) callconv(.c) void) void {
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
    /// ` self: KNotificationAction `
    ///
    pub fn parent(self: KNotificationAction) QObject {
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
    /// ` self: KNotificationAction `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KNotificationAction, classname: [:0]const u8) bool {
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
    /// ` self: KNotificationAction `
    ///
    pub fn deleteLater(self: KNotificationAction) void {
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
    /// ` self: KNotificationAction `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KNotificationAction, interval: i32, timerType: i32) i32 {
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
    /// ` self: KNotificationAction `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KNotificationAction, time: i64, timerType: i32) i32 {
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
    /// ` self: KNotificationAction `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KNotificationAction, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KNotificationAction `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KNotificationAction, signal: [:0]const u8) bool {
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
    /// ` self: KNotificationAction `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KNotificationAction, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KNotificationAction `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KNotificationAction, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KNotificationAction `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KNotificationAction, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KNotificationAction `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KNotificationAction, param1: anytype) void {
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
    /// ` self: KNotificationAction `
    ///
    /// ` callback: *const fn (self: KNotificationAction, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KNotificationAction, callback: *const fn (KNotificationAction, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

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
    /// ` _event: QEvent `
    ///
    pub fn event(self: KNotificationAction, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KNotificationAction_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: KNotificationAction, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KNotificationAction_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

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
    pub fn onEvent(self: KNotificationAction, callback: *const fn (KNotificationAction, QEvent) callconv(.c) bool) void {
        qtc.KNotificationAction_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNotificationAction `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KNotificationAction, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KNotificationAction_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KNotificationAction `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: KNotificationAction, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KNotificationAction_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KNotificationAction`
    ///
    /// ` callback: *const fn (self: KNotificationAction, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: KNotificationAction, callback: *const fn (KNotificationAction, QObject, QEvent) callconv(.c) bool) void {
        qtc.KNotificationAction_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNotificationAction `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: KNotificationAction, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KNotificationAction_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KNotificationAction `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: KNotificationAction, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KNotificationAction_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KNotificationAction`
    ///
    /// ` callback: *const fn (self: KNotificationAction, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: KNotificationAction, callback: *const fn (KNotificationAction, QTimerEvent) callconv(.c) void) void {
        qtc.KNotificationAction_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNotificationAction `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: KNotificationAction, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KNotificationAction_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KNotificationAction `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: KNotificationAction, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KNotificationAction_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KNotificationAction`
    ///
    /// ` callback: *const fn (self: KNotificationAction, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: KNotificationAction, callback: *const fn (KNotificationAction, QChildEvent) callconv(.c) void) void {
        qtc.KNotificationAction_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNotificationAction `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: KNotificationAction, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KNotificationAction_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KNotificationAction `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: KNotificationAction, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KNotificationAction_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KNotificationAction`
    ///
    /// ` callback: *const fn (self: KNotificationAction, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: KNotificationAction, callback: *const fn (KNotificationAction, QEvent) callconv(.c) void) void {
        qtc.KNotificationAction_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNotificationAction `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: KNotificationAction, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KNotificationAction_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KNotificationAction `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: KNotificationAction, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KNotificationAction_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KNotificationAction`
    ///
    /// ` callback: *const fn (self: KNotificationAction, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: KNotificationAction, callback: *const fn (KNotificationAction, QMetaMethod) callconv(.c) void) void {
        qtc.KNotificationAction_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNotificationAction `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: KNotificationAction, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KNotificationAction_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KNotificationAction `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: KNotificationAction, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KNotificationAction_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KNotificationAction`
    ///
    /// ` callback: *const fn (self: KNotificationAction, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: KNotificationAction, callback: *const fn (KNotificationAction, QMetaMethod) callconv(.c) void) void {
        qtc.KNotificationAction_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNotificationAction `
    ///
    pub fn sender(self: KNotificationAction) QObject {
        return .{ .ptr = qtc.KNotificationAction_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KNotificationAction `
    ///
    pub fn superSender(self: KNotificationAction) QObject {
        return .{ .ptr = qtc.KNotificationAction_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: KNotificationAction`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: KNotificationAction, callback: *const fn () callconv(.c) QObject) void {
        qtc.KNotificationAction_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNotificationAction `
    ///
    pub fn senderSignalIndex(self: KNotificationAction) i32 {
        return qtc.KNotificationAction_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KNotificationAction `
    ///
    pub fn superSenderSignalIndex(self: KNotificationAction) i32 {
        return qtc.KNotificationAction_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KNotificationAction`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: KNotificationAction, callback: *const fn () callconv(.c) i32) void {
        qtc.KNotificationAction_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNotificationAction `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: KNotificationAction, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KNotificationAction_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KNotificationAction `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: KNotificationAction, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KNotificationAction_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KNotificationAction`
    ///
    /// ` callback: *const fn (self: KNotificationAction, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: KNotificationAction, callback: *const fn (KNotificationAction, [*:0]const u8) callconv(.c) i32) void {
        qtc.KNotificationAction_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNotificationAction `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: KNotificationAction, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KNotificationAction_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KNotificationAction `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: KNotificationAction, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KNotificationAction_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KNotificationAction`
    ///
    /// ` callback: *const fn (self: KNotificationAction, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: KNotificationAction, callback: *const fn (KNotificationAction, QMetaMethod) callconv(.c) bool) void {
        qtc.KNotificationAction_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNotificationAction `
    ///
    /// ` callback: *const fn (self: KNotificationAction, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KNotificationAction, callback: *const fn (KNotificationAction, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/knotificationaction.html#dtor.KNotificationAction)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KNotificationAction `
    ///
    pub fn delete(self: KNotificationAction) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KNotification object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _eventId: []const u8 `
    ///
    pub fn new(_eventId: []const u8) KNotification {
        const eventId_str = qtc.libqt_string{
            .len = _eventId.len,
            .data = _eventId.ptr,
        };
        return .{ .ptr = qtc.KNotification_new(eventId_str) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KNotification object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _eventId: []const u8 `
    ///
    /// ` _flags: flag of knotification_enums.NotificationFlag `
    ///
    pub fn new2(_eventId: []const u8, _flags: i32) KNotification {
        const eventId_str = qtc.libqt_string{
            .len = _eventId.len,
            .data = _eventId.ptr,
        };
        return .{ .ptr = qtc.KNotification_new2(eventId_str, @bitCast(_flags)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KNotification object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _eventId: []const u8 `
    ///
    /// ` _flags: flag of knotification_enums.NotificationFlag `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new3(_eventId: []const u8, _flags: i32, _parent: anytype) KNotification {
        const eventId_str = qtc.libqt_string{
            .len = _eventId.len,
            .data = _eventId.ptr,
        };
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.KNotification_new3(eventId_str, @bitCast(_flags), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    pub fn metaObject(self: KNotification) QMetaObject {
        return .{ .ptr = qtc.KNotification_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: KNotification `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: KNotification, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KNotification_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNotification `
    ///
    pub fn superMetaObject(self: KNotification) QMetaObject {
        return .{ .ptr = qtc.KNotification_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KNotification, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KNotification_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotification `
    ///
    /// ` callback: *const fn (self: KNotification, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: KNotification, callback: *const fn (KNotification, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KNotification_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: KNotification, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KNotification_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: KNotification, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KNotification_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotification `
    ///
    /// ` callback: *const fn (self: KNotification, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: KNotification, callback: *const fn (KNotification, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KNotification_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: KNotification, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KNotification_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNotification.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `eventId` instead
    ///
    pub const EventId = eventId;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#eventId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn eventId(self: KNotification, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNotification_EventId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNotification.eventId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setEventId` instead
    ///
    pub const SetEventId = setEventId;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#setEventId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` _eventId: []const u8 `
    ///
    pub fn setEventId(self: KNotification, _eventId: []const u8) void {
        const eventId_str = qtc.libqt_string{
            .len = _eventId.len,
            .data = _eventId.ptr,
        };
        qtc.KNotification_SetEventId(@ptrCast(self.ptr), eventId_str);
    }

    /// ### DEPRECATED: Use `title` instead
    ///
    pub const Title = title;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#title)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn title(self: KNotification, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNotification_Title(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNotification.title: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setTitle` instead
    ///
    pub const SetTitle = setTitle;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#setTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` _title: []const u8 `
    ///
    pub fn setTitle(self: KNotification, _title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = _title.len,
            .data = _title.ptr,
        };
        qtc.KNotification_SetTitle(@ptrCast(self.ptr), title_str);
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn text(self: KNotification, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNotification_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNotification.text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setText` instead
    ///
    pub const SetText = setText;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn setText(self: KNotification, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.KNotification_SetText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `iconName` instead
    ///
    pub const IconName = iconName;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#iconName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn iconName(self: KNotification, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNotification_IconName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNotification.iconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setIconName` instead
    ///
    pub const SetIconName = setIconName;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#setIconName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` icon: []const u8 `
    ///
    pub fn setIconName(self: KNotification, icon: []const u8) void {
        const icon_str = qtc.libqt_string{
            .len = icon.len,
            .data = icon.ptr,
        };
        qtc.KNotification_SetIconName(@ptrCast(self.ptr), icon_str);
    }

    /// ### DEPRECATED: Use `pixmap` instead
    ///
    pub const Pixmap = pixmap;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#pixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    pub fn pixmap(self: KNotification) QPixmap {
        return .{ .ptr = qtc.KNotification_Pixmap(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPixmap` instead
    ///
    pub const SetPixmap = setPixmap;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#setPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` pix: QPixmap `
    ///
    pub fn setPixmap(self: KNotification, pix: anytype) void {
        comptime _ = @TypeOf(pix)._is_QPixmap;
        qtc.KNotification_SetPixmap(@ptrCast(self.ptr), @ptrCast(pix.ptr));
    }

    /// ### DEPRECATED: Use `defaultAction` instead
    ///
    pub const DefaultAction = defaultAction;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#defaultAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    pub fn defaultAction(self: KNotification) KNotificationAction {
        return .{ .ptr = qtc.KNotification_DefaultAction(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `addDefaultAction` instead
    ///
    pub const AddDefaultAction = addDefaultAction;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#addDefaultAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` _label: []const u8 `
    ///
    pub fn addDefaultAction(self: KNotification, _label: []const u8) KNotificationAction {
        const label_str = qtc.libqt_string{
            .len = _label.len,
            .data = _label.ptr,
        };
        return .{ .ptr = qtc.KNotification_AddDefaultAction(@ptrCast(self.ptr), label_str) };
    }

    /// ### DEPRECATED: Use `addAction` instead
    ///
    pub const AddAction = addAction;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` _label: []const u8 `
    ///
    pub fn addAction(self: KNotification, _label: []const u8) KNotificationAction {
        const label_str = qtc.libqt_string{
            .len = _label.len,
            .data = _label.ptr,
        };
        return .{ .ptr = qtc.KNotification_AddAction(@ptrCast(self.ptr), label_str) };
    }

    /// ### DEPRECATED: Use `clearActions` instead
    ///
    pub const ClearActions = clearActions;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#clearActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    pub fn clearActions(self: KNotification) void {
        qtc.KNotification_ClearActions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `replyAction` instead
    ///
    pub const ReplyAction = replyAction;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#replyAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    pub fn replyAction(self: KNotification) KNotificationReplyAction {
        return .{ .ptr = qtc.KNotification_ReplyAction(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setReplyAction` instead
    ///
    pub const SetReplyAction = setReplyAction;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#setReplyAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` _replyAction: KNotificationReplyAction (WARNING: The library takes ownership of this parameter's memory and attempting to access it will lead to a crash.) `
    ///
    pub fn setReplyAction(self: KNotification, _replyAction: anytype) void {
        comptime _ = @TypeOf(_replyAction)._is_KNotificationReplyAction;
        qtc.KNotification_SetReplyAction(@ptrCast(self.ptr), @ptrCast(_replyAction.ptr));
    }

    /// ### DEPRECATED: Use `flags` instead
    ///
    pub const Flags = flags;

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
    pub fn flags(self: KNotification) i32 {
        return qtc.KNotification_Flags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFlags` instead
    ///
    pub const SetFlags = setFlags;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#setFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` _flags: *const flag of knotification_enums.NotificationFlag `
    ///
    pub fn setFlags(self: KNotification, _flags: *const i32) void {
        qtc.KNotification_SetFlags(@ptrCast(self.ptr), @ptrCast(_flags));
    }

    /// ### DEPRECATED: Use `componentName` instead
    ///
    pub const ComponentName = componentName;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#componentName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn componentName(self: KNotification, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNotification_ComponentName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNotification.componentName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setComponentName` instead
    ///
    pub const SetComponentName = setComponentName;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#setComponentName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` _componentName: []const u8 `
    ///
    pub fn setComponentName(self: KNotification, _componentName: []const u8) void {
        const componentName_str = qtc.libqt_string{
            .len = _componentName.len,
            .data = _componentName.ptr,
        };
        qtc.KNotification_SetComponentName(@ptrCast(self.ptr), componentName_str);
    }

    /// ### DEPRECATED: Use `urls` instead
    ///
    pub const Urls = urls;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#urls)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn urls(self: KNotification, allocator: std.mem.Allocator) []QUrl {
        const _arr: qtc.libqt_list = qtc.KNotification_Urls(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QUrl, _arr.len) catch @panic("KNotification.urls: Memory allocation failed");
        const _data_val: [*]QtC.QUrl = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setUrls` instead
    ///
    pub const SetUrls = setUrls;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#setUrls)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` _urls: []QUrl `
    ///
    pub fn setUrls(self: KNotification, _urls: []QUrl) void {
        const urls_list = qtc.libqt_list{
            .len = _urls.len,
            .data = @ptrCast(_urls.ptr),
        };
        qtc.KNotification_SetUrls(@ptrCast(self.ptr), urls_list);
    }

    /// ### DEPRECATED: Use `urgency` instead
    ///
    pub const Urgency = urgency;

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
    pub fn urgency(self: KNotification) i32 {
        return qtc.KNotification_Urgency(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setUrgency` instead
    ///
    pub const SetUrgency = setUrgency;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#setUrgency)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` _urgency: knotification_enums.Urgency `
    ///
    pub fn setUrgency(self: KNotification, _urgency: i32) void {
        qtc.KNotification_SetUrgency(@ptrCast(self.ptr), @bitCast(_urgency));
    }

    /// ### DEPRECATED: Use `setWindow` instead
    ///
    pub const SetWindow = setWindow;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#setWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` _window: QWindow `
    ///
    pub fn setWindow(self: KNotification, _window: anytype) void {
        comptime _ = @TypeOf(_window)._is_QWindow;
        qtc.KNotification_SetWindow(@ptrCast(self.ptr), @ptrCast(_window.ptr));
    }

    /// ### DEPRECATED: Use `window` instead
    ///
    pub const Window = window;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#window)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    pub fn window(self: KNotification) QWindow {
        return .{ .ptr = qtc.KNotification_Window(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `appName` instead
    ///
    pub const AppName = appName;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#appName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn appName(self: KNotification, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNotification_AppName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNotification.appName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isAutoDelete` instead
    ///
    pub const IsAutoDelete = isAutoDelete;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#isAutoDelete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    pub fn isAutoDelete(self: KNotification) bool {
        return qtc.KNotification_IsAutoDelete(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutoDelete` instead
    ///
    pub const SetAutoDelete = setAutoDelete;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#setAutoDelete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` autoDelete: bool `
    ///
    pub fn setAutoDelete(self: KNotification, autoDelete: bool) void {
        qtc.KNotification_SetAutoDelete(@ptrCast(self.ptr), autoDelete);
    }

    /// ### DEPRECATED: Use `xdgActivationToken` instead
    ///
    pub const XdgActivationToken = xdgActivationToken;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#xdgActivationToken)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn xdgActivationToken(self: KNotification, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNotification_XdgActivationToken(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNotification.xdgActivationToken: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `closed` instead
    ///
    pub const Closed = closed;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#closed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    pub fn closed(self: KNotification) void {
        qtc.KNotification_Closed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onClosed` instead
    ///
    pub const OnClosed = onClosed;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#closed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotification `
    ///
    /// ` callback: *const fn (self: KNotification) callconv(.c) void `
    ///
    pub fn onClosed(self: KNotification, callback: *const fn (KNotification) callconv(.c) void) void {
        qtc.KNotification_Connect_Closed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `ignored` instead
    ///
    pub const Ignored = ignored;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#ignored)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    pub fn ignored(self: KNotification) void {
        qtc.KNotification_Ignored(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIgnored` instead
    ///
    pub const OnIgnored = onIgnored;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#ignored)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotification `
    ///
    /// ` callback: *const fn (self: KNotification) callconv(.c) void `
    ///
    pub fn onIgnored(self: KNotification, callback: *const fn (KNotification) callconv(.c) void) void {
        qtc.KNotification_Connect_Ignored(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eventIdChanged` instead
    ///
    pub const EventIdChanged = eventIdChanged;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#eventIdChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    pub fn eventIdChanged(self: KNotification) void {
        qtc.KNotification_EventIdChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onEventIdChanged` instead
    ///
    pub const OnEventIdChanged = onEventIdChanged;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#eventIdChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotification `
    ///
    /// ` callback: *const fn (self: KNotification) callconv(.c) void `
    ///
    pub fn onEventIdChanged(self: KNotification, callback: *const fn (KNotification) callconv(.c) void) void {
        qtc.KNotification_Connect_EventIdChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `titleChanged` instead
    ///
    pub const TitleChanged = titleChanged;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#titleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    pub fn titleChanged(self: KNotification) void {
        qtc.KNotification_TitleChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onTitleChanged` instead
    ///
    pub const OnTitleChanged = onTitleChanged;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#titleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotification `
    ///
    /// ` callback: *const fn (self: KNotification) callconv(.c) void `
    ///
    pub fn onTitleChanged(self: KNotification, callback: *const fn (KNotification) callconv(.c) void) void {
        qtc.KNotification_Connect_TitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `textChanged` instead
    ///
    pub const TextChanged = textChanged;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#textChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    pub fn textChanged(self: KNotification) void {
        qtc.KNotification_TextChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onTextChanged` instead
    ///
    pub const OnTextChanged = onTextChanged;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#textChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotification `
    ///
    /// ` callback: *const fn (self: KNotification) callconv(.c) void `
    ///
    pub fn onTextChanged(self: KNotification, callback: *const fn (KNotification) callconv(.c) void) void {
        qtc.KNotification_Connect_TextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `iconNameChanged` instead
    ///
    pub const IconNameChanged = iconNameChanged;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#iconNameChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    pub fn iconNameChanged(self: KNotification) void {
        qtc.KNotification_IconNameChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIconNameChanged` instead
    ///
    pub const OnIconNameChanged = onIconNameChanged;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#iconNameChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotification `
    ///
    /// ` callback: *const fn (self: KNotification) callconv(.c) void `
    ///
    pub fn onIconNameChanged(self: KNotification, callback: *const fn (KNotification) callconv(.c) void) void {
        qtc.KNotification_Connect_IconNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `defaultActionChanged` instead
    ///
    pub const DefaultActionChanged = defaultActionChanged;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#defaultActionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    pub fn defaultActionChanged(self: KNotification) void {
        qtc.KNotification_DefaultActionChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDefaultActionChanged` instead
    ///
    pub const OnDefaultActionChanged = onDefaultActionChanged;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#defaultActionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotification `
    ///
    /// ` callback: *const fn (self: KNotification) callconv(.c) void `
    ///
    pub fn onDefaultActionChanged(self: KNotification, callback: *const fn (KNotification) callconv(.c) void) void {
        qtc.KNotification_Connect_DefaultActionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `actionsChanged` instead
    ///
    pub const ActionsChanged = actionsChanged;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#actionsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    pub fn actionsChanged(self: KNotification) void {
        qtc.KNotification_ActionsChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onActionsChanged` instead
    ///
    pub const OnActionsChanged = onActionsChanged;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#actionsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotification `
    ///
    /// ` callback: *const fn (self: KNotification) callconv(.c) void `
    ///
    pub fn onActionsChanged(self: KNotification, callback: *const fn (KNotification) callconv(.c) void) void {
        qtc.KNotification_Connect_ActionsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `flagsChanged` instead
    ///
    pub const FlagsChanged = flagsChanged;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#flagsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    pub fn flagsChanged(self: KNotification) void {
        qtc.KNotification_FlagsChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onFlagsChanged` instead
    ///
    pub const OnFlagsChanged = onFlagsChanged;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#flagsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotification `
    ///
    /// ` callback: *const fn (self: KNotification) callconv(.c) void `
    ///
    pub fn onFlagsChanged(self: KNotification, callback: *const fn (KNotification) callconv(.c) void) void {
        qtc.KNotification_Connect_FlagsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `componentNameChanged` instead
    ///
    pub const ComponentNameChanged = componentNameChanged;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#componentNameChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    pub fn componentNameChanged(self: KNotification) void {
        qtc.KNotification_ComponentNameChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onComponentNameChanged` instead
    ///
    pub const OnComponentNameChanged = onComponentNameChanged;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#componentNameChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotification `
    ///
    /// ` callback: *const fn (self: KNotification) callconv(.c) void `
    ///
    pub fn onComponentNameChanged(self: KNotification, callback: *const fn (KNotification) callconv(.c) void) void {
        qtc.KNotification_Connect_ComponentNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `urlsChanged` instead
    ///
    pub const UrlsChanged = urlsChanged;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#urlsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    pub fn urlsChanged(self: KNotification) void {
        qtc.KNotification_UrlsChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUrlsChanged` instead
    ///
    pub const OnUrlsChanged = onUrlsChanged;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#urlsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotification `
    ///
    /// ` callback: *const fn (self: KNotification) callconv(.c) void `
    ///
    pub fn onUrlsChanged(self: KNotification, callback: *const fn (KNotification) callconv(.c) void) void {
        qtc.KNotification_Connect_UrlsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `urgencyChanged` instead
    ///
    pub const UrgencyChanged = urgencyChanged;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#urgencyChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    pub fn urgencyChanged(self: KNotification) void {
        qtc.KNotification_UrgencyChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUrgencyChanged` instead
    ///
    pub const OnUrgencyChanged = onUrgencyChanged;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#urgencyChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotification `
    ///
    /// ` callback: *const fn (self: KNotification) callconv(.c) void `
    ///
    pub fn onUrgencyChanged(self: KNotification, callback: *const fn (KNotification) callconv(.c) void) void {
        qtc.KNotification_Connect_UrgencyChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `autoDeleteChanged` instead
    ///
    pub const AutoDeleteChanged = autoDeleteChanged;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#autoDeleteChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    pub fn autoDeleteChanged(self: KNotification) void {
        qtc.KNotification_AutoDeleteChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAutoDeleteChanged` instead
    ///
    pub const OnAutoDeleteChanged = onAutoDeleteChanged;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#autoDeleteChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotification `
    ///
    /// ` callback: *const fn (self: KNotification) callconv(.c) void `
    ///
    pub fn onAutoDeleteChanged(self: KNotification, callback: *const fn (KNotification) callconv(.c) void) void {
        qtc.KNotification_Connect_AutoDeleteChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `xdgActivationTokenChanged` instead
    ///
    pub const XdgActivationTokenChanged = xdgActivationTokenChanged;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#xdgActivationTokenChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    pub fn xdgActivationTokenChanged(self: KNotification) void {
        qtc.KNotification_XdgActivationTokenChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onXdgActivationTokenChanged` instead
    ///
    pub const OnXdgActivationTokenChanged = onXdgActivationTokenChanged;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#xdgActivationTokenChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotification `
    ///
    /// ` callback: *const fn (self: KNotification) callconv(.c) void `
    ///
    pub fn onXdgActivationTokenChanged(self: KNotification, callback: *const fn (KNotification) callconv(.c) void) void {
        qtc.KNotification_Connect_XdgActivationTokenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `hintsChanged` instead
    ///
    pub const HintsChanged = hintsChanged;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#hintsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    pub fn hintsChanged(self: KNotification) void {
        qtc.KNotification_HintsChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onHintsChanged` instead
    ///
    pub const OnHintsChanged = onHintsChanged;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#hintsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNotification `
    ///
    /// ` callback: *const fn (self: KNotification) callconv(.c) void `
    ///
    pub fn onHintsChanged(self: KNotification, callback: *const fn (KNotification) callconv(.c) void) void {
        qtc.KNotification_Connect_HintsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `close` instead
    ///
    pub const Close = close;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    pub fn close(self: KNotification) void {
        qtc.KNotification_Close(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `sendEvent` instead
    ///
    pub const SendEvent = sendEvent;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#sendEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    pub fn sendEvent(self: KNotification) void {
        qtc.KNotification_SendEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHint` instead
    ///
    pub const SetHint = setHint;

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
    pub fn setHint(self: KNotification, hint: []const u8, value: anytype) void {
        const hint_str = qtc.libqt_string{
            .len = hint.len,
            .data = hint.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.KNotification_SetHint(@ptrCast(self.ptr), hint_str, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `hints` instead
    ///
    pub const Hints = hints;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#hints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn hints(self: KNotification, allocator: std.mem.Allocator) ArrayMap_constu8_QVariant {
        const _map: qtc.libqt_map = qtc.KNotification_Hints(@ptrCast(self.ptr));
        var _ret: ArrayMap_constu8_QVariant = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("KNotification.hints: Total capacity allocation failed");
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
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("KNotification.hints: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            _ret.putAssumeCapacity(_entry_slice, .{ .ptr = @ptrCast(_value) });
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setHints` instead
    ///
    pub const SetHints = setHints;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#setHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNotification `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _hints: ArrayMap_constu8_QVariant `
    ///
    pub fn setHints(self: KNotification, allocator: std.mem.Allocator, _hints: ArrayMap_constu8_QVariant) void {
        const hints_count = _hints.count();
        const hints_keys = allocator.alloc(qtc.libqt_string, hints_count) catch @panic("KNotification.setHints: Memory allocation failed");
        defer allocator.free(hints_keys);
        const hints_values = allocator.alloc(QtC.QVariant, hints_count) catch @panic("KNotification.setHints: Memory allocation failed");
        defer allocator.free(hints_values);
        var i: usize = 0;
        var hints_it = _hints.iterator();
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

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` _eventId: []const u8 `
    ///
    /// ` _title: []const u8 `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn event(_eventId: []const u8, _title: []const u8, _text: []const u8) KNotification {
        const eventId_str = qtc.libqt_string{
            .len = _eventId.len,
            .data = _eventId.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = _title.len,
            .data = _title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        return .{ .ptr = qtc.KNotification_Event(eventId_str, title_str, text_str) };
    }

    /// ### DEPRECATED: Use `event2` instead
    ///
    pub const Event2 = event2;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` _eventId: []const u8 `
    ///
    pub fn event2(_eventId: []const u8) KNotification {
        const eventId_str = qtc.libqt_string{
            .len = _eventId.len,
            .data = _eventId.ptr,
        };
        return .{ .ptr = qtc.KNotification_Event2(eventId_str) };
    }

    /// ### DEPRECATED: Use `event3` instead
    ///
    pub const Event3 = event3;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` _eventId: knotification_enums.StandardEvent `
    ///
    pub fn event3(_eventId: i32) KNotification {
        return .{ .ptr = qtc.KNotification_Event3(@bitCast(_eventId)) };
    }

    /// ### DEPRECATED: Use `event4` instead
    ///
    pub const Event4 = event4;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` _eventId: knotification_enums.StandardEvent `
    ///
    /// ` _title: []const u8 `
    ///
    /// ` _text: []const u8 `
    ///
    /// ` _pixmap: QPixmap `
    ///
    pub fn event4(_eventId: i32, _title: []const u8, _text: []const u8, _pixmap: anytype) KNotification {
        const title_str = qtc.libqt_string{
            .len = _title.len,
            .data = _title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        comptime _ = @TypeOf(_pixmap)._is_QPixmap;
        return .{ .ptr = qtc.KNotification_Event4(@bitCast(_eventId), title_str, text_str, @ptrCast(_pixmap.ptr)) };
    }

    /// ### DEPRECATED: Use `event5` instead
    ///
    pub const Event5 = event5;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` _eventId: []const u8 `
    ///
    /// ` _title: []const u8 `
    ///
    /// ` _text: []const u8 `
    ///
    /// ` _iconName: []const u8 `
    ///
    pub fn event5(_eventId: []const u8, _title: []const u8, _text: []const u8, _iconName: []const u8) KNotification {
        const eventId_str = qtc.libqt_string{
            .len = _eventId.len,
            .data = _eventId.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = _title.len,
            .data = _title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        const iconName_str = qtc.libqt_string{
            .len = _iconName.len,
            .data = _iconName.ptr,
        };
        return .{ .ptr = qtc.KNotification_Event5(eventId_str, title_str, text_str, iconName_str) };
    }

    /// ### DEPRECATED: Use `event6` instead
    ///
    pub const Event6 = event6;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` _eventId: knotification_enums.StandardEvent `
    ///
    /// ` _title: []const u8 `
    ///
    /// ` _text: []const u8 `
    ///
    /// ` _iconName: []const u8 `
    ///
    pub fn event6(_eventId: i32, _title: []const u8, _text: []const u8, _iconName: []const u8) KNotification {
        const title_str = qtc.libqt_string{
            .len = _title.len,
            .data = _title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        const iconName_str = qtc.libqt_string{
            .len = _iconName.len,
            .data = _iconName.ptr,
        };
        return .{ .ptr = qtc.KNotification_Event6(@bitCast(_eventId), title_str, text_str, iconName_str) };
    }

    /// ### DEPRECATED: Use `event7` instead
    ///
    pub const Event7 = event7;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` _eventId: knotification_enums.StandardEvent `
    ///
    /// ` _title: []const u8 `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn event7(_eventId: i32, _title: []const u8, _text: []const u8) KNotification {
        const title_str = qtc.libqt_string{
            .len = _title.len,
            .data = _title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        return .{ .ptr = qtc.KNotification_Event7(@bitCast(_eventId), title_str, text_str) };
    }

    /// ### DEPRECATED: Use `beep` instead
    ///
    pub const Beep = beep;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#beep)
    ///
    pub fn beep() void {
        qtc.KNotification_Beep();
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNotification.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNotification.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `event42` instead
    ///
    pub const Event42 = event42;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` _eventId: []const u8 `
    ///
    /// ` _title: []const u8 `
    ///
    /// ` _text: []const u8 `
    ///
    /// ` _pixmap: QPixmap `
    ///
    pub fn event42(_eventId: []const u8, _title: []const u8, _text: []const u8, _pixmap: anytype) KNotification {
        const eventId_str = qtc.libqt_string{
            .len = _eventId.len,
            .data = _eventId.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = _title.len,
            .data = _title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        comptime _ = @TypeOf(_pixmap)._is_QPixmap;
        return .{ .ptr = qtc.KNotification_Event42(eventId_str, title_str, text_str, @ptrCast(_pixmap.ptr)) };
    }

    /// ### DEPRECATED: Use `event52` instead
    ///
    pub const Event52 = event52;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` _eventId: []const u8 `
    ///
    /// ` _title: []const u8 `
    ///
    /// ` _text: []const u8 `
    ///
    /// ` _pixmap: QPixmap `
    ///
    /// ` _flags: *const flag of knotification_enums.NotificationFlag `
    ///
    pub fn event52(_eventId: []const u8, _title: []const u8, _text: []const u8, _pixmap: anytype, _flags: *const i32) KNotification {
        const eventId_str = qtc.libqt_string{
            .len = _eventId.len,
            .data = _eventId.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = _title.len,
            .data = _title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        comptime _ = @TypeOf(_pixmap)._is_QPixmap;
        return .{ .ptr = qtc.KNotification_Event52(eventId_str, title_str, text_str, @ptrCast(_pixmap.ptr), @ptrCast(_flags)) };
    }

    /// ### DEPRECATED: Use `event62` instead
    ///
    pub const Event62 = event62;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` _eventId: []const u8 `
    ///
    /// ` _title: []const u8 `
    ///
    /// ` _text: []const u8 `
    ///
    /// ` _pixmap: QPixmap `
    ///
    /// ` _flags: *const flag of knotification_enums.NotificationFlag `
    ///
    /// ` _componentName: []const u8 `
    ///
    pub fn event62(_eventId: []const u8, _title: []const u8, _text: []const u8, _pixmap: anytype, _flags: *const i32, _componentName: []const u8) KNotification {
        const eventId_str = qtc.libqt_string{
            .len = _eventId.len,
            .data = _eventId.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = _title.len,
            .data = _title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        comptime _ = @TypeOf(_pixmap)._is_QPixmap;
        const componentName_str = qtc.libqt_string{
            .len = _componentName.len,
            .data = _componentName.ptr,
        };
        return .{ .ptr = qtc.KNotification_Event62(eventId_str, title_str, text_str, @ptrCast(_pixmap.ptr), @ptrCast(_flags), componentName_str) };
    }

    /// ### DEPRECATED: Use `event22` instead
    ///
    pub const Event22 = event22;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` _eventId: []const u8 `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn event22(_eventId: []const u8, _text: []const u8) KNotification {
        const eventId_str = qtc.libqt_string{
            .len = _eventId.len,
            .data = _eventId.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        return .{ .ptr = qtc.KNotification_Event22(eventId_str, text_str) };
    }

    /// ### DEPRECATED: Use `event32` instead
    ///
    pub const Event32 = event32;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` _eventId: []const u8 `
    ///
    /// ` _text: []const u8 `
    ///
    /// ` _pixmap: QPixmap `
    ///
    pub fn event32(_eventId: []const u8, _text: []const u8, _pixmap: anytype) KNotification {
        const eventId_str = qtc.libqt_string{
            .len = _eventId.len,
            .data = _eventId.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        comptime _ = @TypeOf(_pixmap)._is_QPixmap;
        return .{ .ptr = qtc.KNotification_Event32(eventId_str, text_str, @ptrCast(_pixmap.ptr)) };
    }

    /// ### DEPRECATED: Use `event43` instead
    ///
    pub const Event43 = event43;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` _eventId: []const u8 `
    ///
    /// ` _text: []const u8 `
    ///
    /// ` _pixmap: QPixmap `
    ///
    /// ` _flags: *const flag of knotification_enums.NotificationFlag `
    ///
    pub fn event43(_eventId: []const u8, _text: []const u8, _pixmap: anytype, _flags: *const i32) KNotification {
        const eventId_str = qtc.libqt_string{
            .len = _eventId.len,
            .data = _eventId.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        comptime _ = @TypeOf(_pixmap)._is_QPixmap;
        return .{ .ptr = qtc.KNotification_Event43(eventId_str, text_str, @ptrCast(_pixmap.ptr), @ptrCast(_flags)) };
    }

    /// ### DEPRECATED: Use `event53` instead
    ///
    pub const Event53 = event53;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` _eventId: []const u8 `
    ///
    /// ` _text: []const u8 `
    ///
    /// ` _pixmap: QPixmap `
    ///
    /// ` _flags: *const flag of knotification_enums.NotificationFlag `
    ///
    /// ` _componentName: []const u8 `
    ///
    pub fn event53(_eventId: []const u8, _text: []const u8, _pixmap: anytype, _flags: *const i32, _componentName: []const u8) KNotification {
        const eventId_str = qtc.libqt_string{
            .len = _eventId.len,
            .data = _eventId.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        comptime _ = @TypeOf(_pixmap)._is_QPixmap;
        const componentName_str = qtc.libqt_string{
            .len = _componentName.len,
            .data = _componentName.ptr,
        };
        return .{ .ptr = qtc.KNotification_Event53(eventId_str, text_str, @ptrCast(_pixmap.ptr), @ptrCast(_flags), componentName_str) };
    }

    /// ### DEPRECATED: Use `event23` instead
    ///
    pub const Event23 = event23;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` _eventId: knotification_enums.StandardEvent `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn event23(_eventId: i32, _text: []const u8) KNotification {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        return .{ .ptr = qtc.KNotification_Event23(@bitCast(_eventId), text_str) };
    }

    /// ### DEPRECATED: Use `event33` instead
    ///
    pub const Event33 = event33;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` _eventId: knotification_enums.StandardEvent `
    ///
    /// ` _text: []const u8 `
    ///
    /// ` _pixmap: QPixmap `
    ///
    pub fn event33(_eventId: i32, _text: []const u8, _pixmap: anytype) KNotification {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        comptime _ = @TypeOf(_pixmap)._is_QPixmap;
        return .{ .ptr = qtc.KNotification_Event33(@bitCast(_eventId), text_str, @ptrCast(_pixmap.ptr)) };
    }

    /// ### DEPRECATED: Use `event44` instead
    ///
    pub const Event44 = event44;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` _eventId: knotification_enums.StandardEvent `
    ///
    /// ` _text: []const u8 `
    ///
    /// ` _pixmap: QPixmap `
    ///
    /// ` _flags: *const flag of knotification_enums.NotificationFlag `
    ///
    pub fn event44(_eventId: i32, _text: []const u8, _pixmap: anytype, _flags: *const i32) KNotification {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        comptime _ = @TypeOf(_pixmap)._is_QPixmap;
        return .{ .ptr = qtc.KNotification_Event44(@bitCast(_eventId), text_str, @ptrCast(_pixmap.ptr), @ptrCast(_flags)) };
    }

    /// ### DEPRECATED: Use `event54` instead
    ///
    pub const Event54 = event54;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` _eventId: knotification_enums.StandardEvent `
    ///
    /// ` _title: []const u8 `
    ///
    /// ` _text: []const u8 `
    ///
    /// ` _pixmap: QPixmap `
    ///
    /// ` _flags: *const flag of knotification_enums.NotificationFlag `
    ///
    pub fn event54(_eventId: i32, _title: []const u8, _text: []const u8, _pixmap: anytype, _flags: *const i32) KNotification {
        const title_str = qtc.libqt_string{
            .len = _title.len,
            .data = _title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        comptime _ = @TypeOf(_pixmap)._is_QPixmap;
        return .{ .ptr = qtc.KNotification_Event54(@bitCast(_eventId), title_str, text_str, @ptrCast(_pixmap.ptr), @ptrCast(_flags)) };
    }

    /// ### DEPRECATED: Use `event55` instead
    ///
    pub const Event55 = event55;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` _eventId: []const u8 `
    ///
    /// ` _title: []const u8 `
    ///
    /// ` _text: []const u8 `
    ///
    /// ` _iconName: []const u8 `
    ///
    /// ` _flags: *const flag of knotification_enums.NotificationFlag `
    ///
    pub fn event55(_eventId: []const u8, _title: []const u8, _text: []const u8, _iconName: []const u8, _flags: *const i32) KNotification {
        const eventId_str = qtc.libqt_string{
            .len = _eventId.len,
            .data = _eventId.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = _title.len,
            .data = _title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        const iconName_str = qtc.libqt_string{
            .len = _iconName.len,
            .data = _iconName.ptr,
        };
        return .{ .ptr = qtc.KNotification_Event55(eventId_str, title_str, text_str, iconName_str, @ptrCast(_flags)) };
    }

    /// ### DEPRECATED: Use `event63` instead
    ///
    pub const Event63 = event63;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` _eventId: []const u8 `
    ///
    /// ` _title: []const u8 `
    ///
    /// ` _text: []const u8 `
    ///
    /// ` _iconName: []const u8 `
    ///
    /// ` _flags: *const flag of knotification_enums.NotificationFlag `
    ///
    /// ` _componentName: []const u8 `
    ///
    pub fn event63(_eventId: []const u8, _title: []const u8, _text: []const u8, _iconName: []const u8, _flags: *const i32, _componentName: []const u8) KNotification {
        const eventId_str = qtc.libqt_string{
            .len = _eventId.len,
            .data = _eventId.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = _title.len,
            .data = _title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        const iconName_str = qtc.libqt_string{
            .len = _iconName.len,
            .data = _iconName.ptr,
        };
        const componentName_str = qtc.libqt_string{
            .len = _componentName.len,
            .data = _componentName.ptr,
        };
        return .{ .ptr = qtc.KNotification_Event63(eventId_str, title_str, text_str, iconName_str, @ptrCast(_flags), componentName_str) };
    }

    /// ### DEPRECATED: Use `event56` instead
    ///
    pub const Event56 = event56;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` _eventId: knotification_enums.StandardEvent `
    ///
    /// ` _title: []const u8 `
    ///
    /// ` _text: []const u8 `
    ///
    /// ` _iconName: []const u8 `
    ///
    /// ` _flags: *const flag of knotification_enums.NotificationFlag `
    ///
    pub fn event56(_eventId: i32, _title: []const u8, _text: []const u8, _iconName: []const u8, _flags: *const i32) KNotification {
        const title_str = qtc.libqt_string{
            .len = _title.len,
            .data = _title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        const iconName_str = qtc.libqt_string{
            .len = _iconName.len,
            .data = _iconName.ptr,
        };
        return .{ .ptr = qtc.KNotification_Event56(@bitCast(_eventId), title_str, text_str, iconName_str, @ptrCast(_flags)) };
    }

    /// ### DEPRECATED: Use `event45` instead
    ///
    pub const Event45 = event45;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` _eventId: knotification_enums.StandardEvent `
    ///
    /// ` _title: []const u8 `
    ///
    /// ` _text: []const u8 `
    ///
    /// ` _flags: *const flag of knotification_enums.NotificationFlag `
    ///
    pub fn event45(_eventId: i32, _title: []const u8, _text: []const u8, _flags: *const i32) KNotification {
        const title_str = qtc.libqt_string{
            .len = _title.len,
            .data = _title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        return .{ .ptr = qtc.KNotification_Event45(@bitCast(_eventId), title_str, text_str, @ptrCast(_flags)) };
    }

    /// ### DEPRECATED: Use `beep1` instead
    ///
    pub const Beep1 = beep1;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#beep)
    ///
    /// ## Parameter(s):
    ///
    /// ` reason: []const u8 `
    ///
    pub fn beep1(reason: []const u8) void {
        const reason_str = qtc.libqt_string{
            .len = reason.len,
            .data = reason.ptr,
        };
        qtc.KNotification_Beep1(reason_str);
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
    /// ` self: KNotification `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KNotification, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNotification.objectName: Memory allocation failed");
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
    /// ` self: KNotification `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: KNotification, name: []const u8) void {
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
    /// ` self: KNotification `
    ///
    pub fn isWidgetType(self: KNotification) bool {
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
    /// ` self: KNotification `
    ///
    pub fn isWindowType(self: KNotification) bool {
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
    /// ` self: KNotification `
    ///
    pub fn isQuickItemType(self: KNotification) bool {
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
    /// ` self: KNotification `
    ///
    pub fn signalsBlocked(self: KNotification) bool {
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
    /// ` self: KNotification `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KNotification, b: bool) bool {
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
    /// ` self: KNotification `
    ///
    pub fn thread(self: KNotification) QThread {
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
    /// ` self: KNotification `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KNotification, _thread: anytype) bool {
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
    /// ` self: KNotification `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KNotification, interval: i32) i32 {
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
    /// ` self: KNotification `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KNotification, time: i64) i32 {
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
    /// ` self: KNotification `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KNotification, id: i32) void {
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
    /// ` self: KNotification `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KNotification, id: i32) void {
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
    /// ` self: KNotification `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KNotification, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KNotification.children: Memory allocation failed");
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
    /// ` self: KNotification `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KNotification, _parent: anytype) void {
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
    /// ` self: KNotification `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KNotification, filterObj: anytype) void {
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
    /// ` self: KNotification `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KNotification, obj: anytype) void {
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
    /// ` self: KNotification `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KNotification, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KNotification `
    ///
    pub fn disconnect3(self: KNotification) bool {
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
    /// ` self: KNotification `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KNotification, receiver: anytype) bool {
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
    /// ` self: KNotification `
    ///
    pub fn dumpObjectTree(self: KNotification) void {
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
    /// ` self: KNotification `
    ///
    pub fn dumpObjectInfo(self: KNotification) void {
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
    /// ` self: KNotification `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KNotification, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KNotification `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: KNotification, name: [:0]const u8) QVariant {
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
    /// ` self: KNotification `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KNotification, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KNotification.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KNotification.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KNotification `
    ///
    pub fn bindingStorage(self: KNotification) QBindingStorage {
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
    /// ` self: KNotification `
    ///
    pub fn bindingStorage2(self: KNotification) QBindingStorage {
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
    /// ` self: KNotification `
    ///
    pub fn destroyed(self: KNotification) void {
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
    /// ` self: KNotification `
    ///
    /// ` callback: *const fn (self: KNotification) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KNotification, callback: *const fn (KNotification) callconv(.c) void) void {
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
    /// ` self: KNotification `
    ///
    pub fn parent(self: KNotification) QObject {
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
    /// ` self: KNotification `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KNotification, classname: [:0]const u8) bool {
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
    /// ` self: KNotification `
    ///
    pub fn deleteLater(self: KNotification) void {
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
    /// ` self: KNotification `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KNotification, interval: i32, timerType: i32) i32 {
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
    /// ` self: KNotification `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KNotification, time: i64, timerType: i32) i32 {
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
    /// ` self: KNotification `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KNotification, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KNotification `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KNotification, signal: [:0]const u8) bool {
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
    /// ` self: KNotification `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KNotification, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KNotification `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KNotification, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KNotification `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KNotification, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KNotification `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KNotification, param1: anytype) void {
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
    /// ` self: KNotification `
    ///
    /// ` callback: *const fn (self: KNotification, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KNotification, callback: *const fn (KNotification, QObject) callconv(.c) void) void {
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
    /// ` self: KNotification `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KNotification, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KNotification_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KNotification `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: KNotification, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KNotification_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KNotification`
    ///
    /// ` callback: *const fn (self: KNotification, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: KNotification, callback: *const fn (KNotification, QObject, QEvent) callconv(.c) bool) void {
        qtc.KNotification_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNotification `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: KNotification, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KNotification_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KNotification `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: KNotification, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KNotification_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KNotification`
    ///
    /// ` callback: *const fn (self: KNotification, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: KNotification, callback: *const fn (KNotification, QTimerEvent) callconv(.c) void) void {
        qtc.KNotification_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNotification `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: KNotification, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KNotification_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KNotification `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: KNotification, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KNotification_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KNotification`
    ///
    /// ` callback: *const fn (self: KNotification, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: KNotification, callback: *const fn (KNotification, QChildEvent) callconv(.c) void) void {
        qtc.KNotification_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNotification `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: KNotification, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KNotification_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KNotification `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: KNotification, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KNotification_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KNotification`
    ///
    /// ` callback: *const fn (self: KNotification, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: KNotification, callback: *const fn (KNotification, QEvent) callconv(.c) void) void {
        qtc.KNotification_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNotification `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: KNotification, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KNotification_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KNotification `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: KNotification, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KNotification_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KNotification`
    ///
    /// ` callback: *const fn (self: KNotification, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: KNotification, callback: *const fn (KNotification, QMetaMethod) callconv(.c) void) void {
        qtc.KNotification_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNotification `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: KNotification, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KNotification_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KNotification `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: KNotification, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KNotification_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KNotification`
    ///
    /// ` callback: *const fn (self: KNotification, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: KNotification, callback: *const fn (KNotification, QMetaMethod) callconv(.c) void) void {
        qtc.KNotification_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNotification `
    ///
    pub fn sender(self: KNotification) QObject {
        return .{ .ptr = qtc.KNotification_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KNotification `
    ///
    pub fn superSender(self: KNotification) QObject {
        return .{ .ptr = qtc.KNotification_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: KNotification`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: KNotification, callback: *const fn () callconv(.c) QObject) void {
        qtc.KNotification_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNotification `
    ///
    pub fn senderSignalIndex(self: KNotification) i32 {
        return qtc.KNotification_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KNotification `
    ///
    pub fn superSenderSignalIndex(self: KNotification) i32 {
        return qtc.KNotification_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KNotification`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: KNotification, callback: *const fn () callconv(.c) i32) void {
        qtc.KNotification_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNotification `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: KNotification, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KNotification_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KNotification `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: KNotification, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KNotification_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KNotification`
    ///
    /// ` callback: *const fn (self: KNotification, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: KNotification, callback: *const fn (KNotification, [*:0]const u8) callconv(.c) i32) void {
        qtc.KNotification_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNotification `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: KNotification, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KNotification_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KNotification `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: KNotification, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KNotification_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KNotification`
    ///
    /// ` callback: *const fn (self: KNotification, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: KNotification, callback: *const fn (KNotification, QMetaMethod) callconv(.c) bool) void {
        qtc.KNotification_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNotification `
    ///
    /// ` callback: *const fn (self: KNotification, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KNotification, callback: *const fn (KNotification, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/knotification.html#dtor.KNotification)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KNotification `
    ///
    pub fn delete(self: KNotification) void {
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
