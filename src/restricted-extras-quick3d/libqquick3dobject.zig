const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QQmlParserStatus = @import("libqt6").QQmlParserStatus;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qquick3dobject_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html)
pub const QQuick3DObject = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QQuick3DObject,

    pub const _is_QQuick3DObject = {};
    pub const _is_QObject = {};
    pub const _is_QQmlParserStatus = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QQuick3DObject object in C++ memory
    ///
    pub fn new() QQuick3DObject {
        return .{ .ptr = qtc.QQuick3DObject_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QQuick3DObject object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QQuick3DObject `
    ///
    pub fn new2(_parent: anytype) QQuick3DObject {
        comptime _ = @TypeOf(_parent)._is_QQuick3DObject;
        return .{ .ptr = qtc.QQuick3DObject_new2(@ptrCast(_parent.ptr)) };
    }

    /// Upcasts to a QQmlParserStatus object
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DObject `
    ///
    pub fn asQQmlParserStatus(self: QQuick3DObject) QQmlParserStatus {
        return .{ .ptr = qtc.QQuick3DObject_AsQQmlParserStatus(@ptrCast(self.ptr)) };
    }

    /// Downcasts to a QQuick3DObject object
    ///
    /// ## Parameter(s):
    ///
    /// ` _qqmlparserstatus: QQmlParserStatus `
    ///
    pub fn fromQQmlParserStatus(_qqmlparserstatus: anytype) QQuick3DObject {
        comptime _ = @TypeOf(_qqmlparserstatus)._is_QQmlParserStatus;
        return .{ .ptr = @ptrCast(qtc.QQuick3DObject_FromQQmlParserStatus(@ptrCast(_qqmlparserstatus.ptr))) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DObject `
    ///
    pub fn metaObject(self: QQuick3DObject) QMetaObject {
        return .{ .ptr = qtc.QQuick3DObject_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QQuick3DObject `
    ///
    /// ` callback: *const fn (self: QQuick3DObject) callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QQuick3DObject, callback: *const fn (QQuick3DObject) callconv(.c) QMetaObject) void {
        qtc.QQuick3DObject_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuick3DObject `
    ///
    pub fn superMetaObject(self: QQuick3DObject) QMetaObject {
        return .{ .ptr = qtc.QQuick3DObject_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DObject `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QQuick3DObject, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QQuick3DObject_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuick3DObject `
    ///
    /// ` callback: *const fn (self: QQuick3DObject, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QQuick3DObject, callback: *const fn (QQuick3DObject, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QQuick3DObject_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DObject `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QQuick3DObject, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QQuick3DObject_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DObject `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QQuick3DObject, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QQuick3DObject_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuick3DObject `
    ///
    /// ` callback: *const fn (self: QQuick3DObject, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QQuick3DObject, callback: *const fn (QQuick3DObject, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QQuick3DObject_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DObject `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QQuick3DObject, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QQuick3DObject_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        var _str = qtc.QQuick3DObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuick3DObject.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#state)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn state(self: QQuick3DObject, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QQuick3DObject_State(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuick3DObject.state: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setState` instead
    ///
    pub const SetState = setState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#setState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DObject `
    ///
    /// ` _state: []const u8 `
    ///
    pub fn setState(self: QQuick3DObject, _state: []const u8) void {
        const state_str = qtc.libqt_string{
            .len = _state.len,
            .data = _state.ptr,
        };
        qtc.QQuick3DObject_SetState(@ptrCast(self.ptr), state_str);
    }

    /// ### DEPRECATED: Use `childItems` instead
    ///
    pub const ChildItems = childItems;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#childItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn childItems(self: QQuick3DObject, allocator: std.mem.Allocator) []QQuick3DObject {
        const _arr: qtc.libqt_list = qtc.QQuick3DObject_ChildItems(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QQuick3DObject, _arr.len) catch @panic("QQuick3DObject.childItems: Memory allocation failed");
        const _data_val: [*]QtC.QQuick3DObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `parentItem` instead
    ///
    pub const ParentItem = parentItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#parentItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DObject `
    ///
    pub fn parentItem(self: QQuick3DObject) QQuick3DObject {
        return .{ .ptr = qtc.QQuick3DObject_ParentItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `update` instead
    ///
    pub const Update = update;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DObject `
    ///
    pub fn update(self: QQuick3DObject) void {
        qtc.QQuick3DObject_Update(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setParentItem` instead
    ///
    pub const SetParentItem = setParentItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#setParentItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DObject `
    ///
    /// ` _parentItem: QQuick3DObject `
    ///
    pub fn setParentItem(self: QQuick3DObject, _parentItem: anytype) void {
        comptime _ = @TypeOf(_parentItem)._is_QQuick3DObject;
        qtc.QQuick3DObject_SetParentItem(@ptrCast(self.ptr), @ptrCast(_parentItem.ptr));
    }

    /// ### DEPRECATED: Use `parentChanged` instead
    ///
    pub const ParentChanged = parentChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#parentChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DObject `
    ///
    pub fn parentChanged(self: QQuick3DObject) void {
        qtc.QQuick3DObject_ParentChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onParentChanged` instead
    ///
    pub const OnParentChanged = onParentChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#parentChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuick3DObject `
    ///
    /// ` callback: *const fn (self: QQuick3DObject) callconv(.c) void `
    ///
    pub fn onParentChanged(self: QQuick3DObject, callback: *const fn (QQuick3DObject) callconv(.c) void) void {
        qtc.QQuick3DObject_Connect_ParentChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `childrenChanged` instead
    ///
    pub const ChildrenChanged = childrenChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#childrenChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DObject `
    ///
    pub fn childrenChanged(self: QQuick3DObject) void {
        qtc.QQuick3DObject_ChildrenChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onChildrenChanged` instead
    ///
    pub const OnChildrenChanged = onChildrenChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#childrenChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuick3DObject `
    ///
    /// ` callback: *const fn (self: QQuick3DObject) callconv(.c) void `
    ///
    pub fn onChildrenChanged(self: QQuick3DObject, callback: *const fn (QQuick3DObject) callconv(.c) void) void {
        qtc.QQuick3DObject_Connect_ChildrenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `stateChanged` instead
    ///
    pub const StateChanged = stateChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#stateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DObject `
    ///
    pub fn stateChanged(self: QQuick3DObject) void {
        qtc.QQuick3DObject_StateChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onStateChanged` instead
    ///
    pub const OnStateChanged = onStateChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#stateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuick3DObject `
    ///
    /// ` callback: *const fn (self: QQuick3DObject) callconv(.c) void `
    ///
    pub fn onStateChanged(self: QQuick3DObject, callback: *const fn (QQuick3DObject) callconv(.c) void) void {
        qtc.QQuick3DObject_Connect_StateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `markAllDirty` instead
    ///
    pub const MarkAllDirty = markAllDirty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#markAllDirty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DObject `
    ///
    pub fn markAllDirty(self: QQuick3DObject) void {
        qtc.QQuick3DObject_MarkAllDirty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onMarkAllDirty` instead
    ///
    pub const OnMarkAllDirty = onMarkAllDirty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#markAllDirty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuick3DObject `
    ///
    /// ` callback: *const fn (self: QQuick3DObject) callconv(.c) void `
    ///
    pub fn onMarkAllDirty(self: QQuick3DObject, callback: *const fn (QQuick3DObject) callconv(.c) void) void {
        qtc.QQuick3DObject_OnMarkAllDirty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMarkAllDirty` instead
    ///
    pub const SuperMarkAllDirty = superMarkAllDirty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#markAllDirty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DObject `
    ///
    pub fn superMarkAllDirty(self: QQuick3DObject) void {
        qtc.QQuick3DObject_SuperMarkAllDirty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `itemChange` instead
    ///
    pub const ItemChange = itemChange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#itemChange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DObject `
    ///
    /// ` param1: qquick3dobject_enums.ItemChange `
    ///
    /// ` param2: QQuick3DObject__ItemChangeData `
    ///
    pub fn itemChange(self: QQuick3DObject, param1: i32, param2: anytype) void {
        comptime _ = @TypeOf(param2)._is_QQuick3DObject__ItemChangeData;
        qtc.QQuick3DObject_ItemChange(@ptrCast(self.ptr), @bitCast(param1), @ptrCast(param2.ptr));
    }

    /// ### DEPRECATED: Use `onItemChange` instead
    ///
    pub const OnItemChange = onItemChange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#itemChange)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuick3DObject `
    ///
    /// ` callback: *const fn (self: QQuick3DObject, param1: qquick3dobject_enums.ItemChange, param2: QQuick3DObject__ItemChangeData) callconv(.c) void `
    ///
    pub fn onItemChange(self: QQuick3DObject, callback: *const fn (QQuick3DObject, i32, QQuick3DObject__ItemChangeData) callconv(.c) void) void {
        qtc.QQuick3DObject_OnItemChange(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superItemChange` instead
    ///
    pub const SuperItemChange = superItemChange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#itemChange)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DObject `
    ///
    /// ` param1: qquick3dobject_enums.ItemChange `
    ///
    /// ` param2: QQuick3DObject__ItemChangeData `
    ///
    pub fn superItemChange(self: QQuick3DObject, param1: i32, param2: anytype) void {
        comptime _ = @TypeOf(param2)._is_QQuick3DObject__ItemChangeData;
        qtc.QQuick3DObject_SuperItemChange(@ptrCast(self.ptr), @bitCast(param1), @ptrCast(param2.ptr));
    }

    /// ### DEPRECATED: Use `classBegin` instead
    ///
    pub const ClassBegin = classBegin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#classBegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DObject `
    ///
    pub fn classBegin(self: QQuick3DObject) void {
        qtc.QQuick3DObject_ClassBegin(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onClassBegin` instead
    ///
    pub const OnClassBegin = onClassBegin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#classBegin)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuick3DObject `
    ///
    /// ` callback: *const fn (self: QQuick3DObject) callconv(.c) void `
    ///
    pub fn onClassBegin(self: QQuick3DObject, callback: *const fn (QQuick3DObject) callconv(.c) void) void {
        qtc.QQuick3DObject_OnClassBegin(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClassBegin` instead
    ///
    pub const SuperClassBegin = superClassBegin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#classBegin)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DObject `
    ///
    pub fn superClassBegin(self: QQuick3DObject) void {
        qtc.QQuick3DObject_SuperClassBegin(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `componentComplete` instead
    ///
    pub const ComponentComplete = componentComplete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#componentComplete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DObject `
    ///
    pub fn componentComplete(self: QQuick3DObject) void {
        qtc.QQuick3DObject_ComponentComplete(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onComponentComplete` instead
    ///
    pub const OnComponentComplete = onComponentComplete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#componentComplete)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuick3DObject `
    ///
    /// ` callback: *const fn (self: QQuick3DObject) callconv(.c) void `
    ///
    pub fn onComponentComplete(self: QQuick3DObject, callback: *const fn (QQuick3DObject) callconv(.c) void) void {
        qtc.QQuick3DObject_OnComponentComplete(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superComponentComplete` instead
    ///
    pub const SuperComponentComplete = superComponentComplete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#componentComplete)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DObject `
    ///
    pub fn superComponentComplete(self: QQuick3DObject) void {
        qtc.QQuick3DObject_SuperComponentComplete(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isComponentComplete` instead
    ///
    pub const IsComponentComplete = isComponentComplete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#isComponentComplete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DObject `
    ///
    pub fn isComponentComplete(self: QQuick3DObject) bool {
        return qtc.QQuick3DObject_IsComponentComplete(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `preSync` instead
    ///
    pub const PreSync = preSync;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#preSync)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DObject `
    ///
    pub fn preSync(self: QQuick3DObject) void {
        qtc.QQuick3DObject_PreSync(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onPreSync` instead
    ///
    pub const OnPreSync = onPreSync;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#preSync)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuick3DObject `
    ///
    /// ` callback: *const fn (self: QQuick3DObject) callconv(.c) void `
    ///
    pub fn onPreSync(self: QQuick3DObject, callback: *const fn (QQuick3DObject) callconv(.c) void) void {
        qtc.QQuick3DObject_OnPreSync(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPreSync` instead
    ///
    pub const SuperPreSync = superPreSync;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#preSync)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DObject `
    ///
    pub fn superPreSync(self: QQuick3DObject) void {
        qtc.QQuick3DObject_SuperPreSync(@ptrCast(self.ptr));
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
        var _str = qtc.QQuick3DObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuick3DObject.tr2: Memory allocation failed");
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
        var _str = qtc.QQuick3DObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuick3DObject.tr3: Memory allocation failed");
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
    /// ` self: QQuick3DObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QQuick3DObject, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuick3DObject.objectName: Memory allocation failed");
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
    /// ` self: QQuick3DObject `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QQuick3DObject, name: []const u8) void {
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
    /// ` self: QQuick3DObject `
    ///
    pub fn isWidgetType(self: QQuick3DObject) bool {
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
    /// ` self: QQuick3DObject `
    ///
    pub fn isWindowType(self: QQuick3DObject) bool {
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
    /// ` self: QQuick3DObject `
    ///
    pub fn isQuickItemType(self: QQuick3DObject) bool {
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
    /// ` self: QQuick3DObject `
    ///
    pub fn signalsBlocked(self: QQuick3DObject) bool {
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
    /// ` self: QQuick3DObject `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QQuick3DObject, b: bool) bool {
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
    /// ` self: QQuick3DObject `
    ///
    pub fn thread(self: QQuick3DObject) QThread {
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
    /// ` self: QQuick3DObject `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QQuick3DObject, _thread: anytype) bool {
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
    /// ` self: QQuick3DObject `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QQuick3DObject, interval: i32) i32 {
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
    /// ` self: QQuick3DObject `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QQuick3DObject, time: i64) i32 {
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
    /// ` self: QQuick3DObject `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QQuick3DObject, id: i32) void {
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
    /// ` self: QQuick3DObject `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QQuick3DObject, id: i32) void {
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
    /// ` self: QQuick3DObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QQuick3DObject, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QQuick3DObject.children: Memory allocation failed");
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
    /// ` self: QQuick3DObject `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QQuick3DObject, _parent: anytype) void {
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
    /// ` self: QQuick3DObject `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QQuick3DObject, filterObj: anytype) void {
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
    /// ` self: QQuick3DObject `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QQuick3DObject, obj: anytype) void {
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
    /// ` self: QQuick3DObject `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QQuick3DObject, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QQuick3DObject `
    ///
    pub fn disconnect3(self: QQuick3DObject) bool {
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
    /// ` self: QQuick3DObject `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QQuick3DObject, receiver: anytype) bool {
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
    /// ` self: QQuick3DObject `
    ///
    pub fn dumpObjectTree(self: QQuick3DObject) void {
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
    /// ` self: QQuick3DObject `
    ///
    pub fn dumpObjectInfo(self: QQuick3DObject) void {
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
    /// ` self: QQuick3DObject `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QQuick3DObject, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QQuick3DObject `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QQuick3DObject, name: [:0]const u8) QVariant {
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
    /// ` self: QQuick3DObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QQuick3DObject, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QQuick3DObject.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QQuick3DObject.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QQuick3DObject `
    ///
    pub fn bindingStorage(self: QQuick3DObject) QBindingStorage {
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
    /// ` self: QQuick3DObject `
    ///
    pub fn bindingStorage2(self: QQuick3DObject) QBindingStorage {
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
    /// ` self: QQuick3DObject `
    ///
    pub fn destroyed(self: QQuick3DObject) void {
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
    /// ` self: QQuick3DObject `
    ///
    /// ` callback: *const fn (self: QQuick3DObject) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QQuick3DObject, callback: *const fn (QQuick3DObject) callconv(.c) void) void {
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
    /// ` self: QQuick3DObject `
    ///
    pub fn parent(self: QQuick3DObject) QObject {
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
    /// ` self: QQuick3DObject `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QQuick3DObject, classname: [:0]const u8) bool {
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
    /// ` self: QQuick3DObject `
    ///
    pub fn deleteLater(self: QQuick3DObject) void {
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
    /// ` self: QQuick3DObject `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QQuick3DObject, interval: i32, timerType: i32) i32 {
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
    /// ` self: QQuick3DObject `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QQuick3DObject, time: i64, timerType: i32) i32 {
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
    /// ` self: QQuick3DObject `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QQuick3DObject, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QQuick3DObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QQuick3DObject, signal: [:0]const u8) bool {
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
    /// ` self: QQuick3DObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QQuick3DObject, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QQuick3DObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QQuick3DObject, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QQuick3DObject `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QQuick3DObject, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QQuick3DObject `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QQuick3DObject, param1: anytype) void {
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
    /// ` self: QQuick3DObject `
    ///
    /// ` callback: *const fn (self: QQuick3DObject, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QQuick3DObject, callback: *const fn (QQuick3DObject, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// Inherited from QQmlParserStatus
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlparserstatus.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DObject `
    ///
    /// ` param1: QQmlParserStatus `
    ///
    pub fn operatorAssign(self: QQuick3DObject, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QQmlParserStatus;
        const param1_ = if (@hasDecl(@TypeOf(param1), "asQQmlParserStatus")) param1.asQQmlParserStatus() else param1;
        qtc.QQmlParserStatus_OperatorAssign(@ptrCast(self.asQQmlParserStatus().ptr), @ptrCast(param1_.ptr));
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
    /// ` self: QQuick3DObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QQuick3DObject, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QQuick3DObject_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuick3DObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QQuick3DObject, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QQuick3DObject_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuick3DObject`
    ///
    /// ` callback: *const fn (self: QQuick3DObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QQuick3DObject, callback: *const fn (QQuick3DObject, QEvent) callconv(.c) bool) void {
        qtc.QQuick3DObject_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuick3DObject `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QQuick3DObject, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QQuick3DObject_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuick3DObject `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QQuick3DObject, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QQuick3DObject_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuick3DObject`
    ///
    /// ` callback: *const fn (self: QQuick3DObject, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QQuick3DObject, callback: *const fn (QQuick3DObject, QObject, QEvent) callconv(.c) bool) void {
        qtc.QQuick3DObject_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuick3DObject `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QQuick3DObject, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QQuick3DObject_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuick3DObject `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QQuick3DObject, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QQuick3DObject_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuick3DObject`
    ///
    /// ` callback: *const fn (self: QQuick3DObject, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QQuick3DObject, callback: *const fn (QQuick3DObject, QTimerEvent) callconv(.c) void) void {
        qtc.QQuick3DObject_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuick3DObject `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QQuick3DObject, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QQuick3DObject_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuick3DObject `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QQuick3DObject, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QQuick3DObject_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuick3DObject`
    ///
    /// ` callback: *const fn (self: QQuick3DObject, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QQuick3DObject, callback: *const fn (QQuick3DObject, QChildEvent) callconv(.c) void) void {
        qtc.QQuick3DObject_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuick3DObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QQuick3DObject, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QQuick3DObject_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuick3DObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QQuick3DObject, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QQuick3DObject_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQuick3DObject`
    ///
    /// ` callback: *const fn (self: QQuick3DObject, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QQuick3DObject, callback: *const fn (QQuick3DObject, QEvent) callconv(.c) void) void {
        qtc.QQuick3DObject_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuick3DObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QQuick3DObject, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QQuick3DObject_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuick3DObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QQuick3DObject, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QQuick3DObject_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuick3DObject`
    ///
    /// ` callback: *const fn (self: QQuick3DObject, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QQuick3DObject, callback: *const fn (QQuick3DObject, QMetaMethod) callconv(.c) void) void {
        qtc.QQuick3DObject_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuick3DObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QQuick3DObject, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QQuick3DObject_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuick3DObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QQuick3DObject, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QQuick3DObject_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuick3DObject`
    ///
    /// ` callback: *const fn (self: QQuick3DObject, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QQuick3DObject, callback: *const fn (QQuick3DObject, QMetaMethod) callconv(.c) void) void {
        qtc.QQuick3DObject_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuick3DObject `
    ///
    pub fn sender(self: QQuick3DObject) QObject {
        return .{ .ptr = qtc.QQuick3DObject_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QQuick3DObject `
    ///
    pub fn senderSignalIndex(self: QQuick3DObject) i32 {
        return qtc.QQuick3DObject_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QQuick3DObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QQuick3DObject, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QQuick3DObject_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QQuick3DObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QQuick3DObject, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QQuick3DObject_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQuick3DObject `
    ///
    /// ` callback: *const fn (self: QQuick3DObject, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QQuick3DObject, callback: *const fn (QQuick3DObject, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#dtor.QQuick3DObject)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QQuick3DObject `
    ///
    pub fn delete(self: QQuick3DObject) void {
        qtc.QQuick3DObject_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject-itemchangedata.html)
pub const QQuick3DObject__ItemChangeData = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject-itemchangedata.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QQuick3DObject__ItemChangeData,

    pub const _is_QQuick3DObject__ItemChangeData = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QQuick3DObject::ItemChangeData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QQuick3DObject__ItemChangeData `
    ///
    pub fn new(other: anytype) QQuick3DObject__ItemChangeData {
        comptime _ = @TypeOf(other)._is_QQuick3DObject__ItemChangeData;
        return .{ .ptr = qtc.QQuick3DObject__ItemChangeData_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QQuick3DObject::ItemChangeData object and invalidate the source QQuick3DObject::ItemChangeData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QQuick3DObject__ItemChangeData `
    ///
    pub fn new2(other: anytype) QQuick3DObject__ItemChangeData {
        comptime _ = @TypeOf(other)._is_QQuick3DObject__ItemChangeData;
        return .{ .ptr = qtc.QQuick3DObject__ItemChangeData_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QQuick3DObject::ItemChangeData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` v: QQuick3DObject `
    ///
    pub fn new3(v: anytype) QQuick3DObject__ItemChangeData {
        comptime _ = @TypeOf(v)._is_QQuick3DObject;
        return .{ .ptr = qtc.QQuick3DObject__ItemChangeData_new3(@ptrCast(v.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QQuick3DObject::ItemChangeData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` v: f64 `
    ///
    pub fn new4(v: f64) QQuick3DObject__ItemChangeData {
        return .{ .ptr = qtc.QQuick3DObject__ItemChangeData_new4(@bitCast(v)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QQuick3DObject::ItemChangeData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` v: bool `
    ///
    pub fn new5(v: bool) QQuick3DObject__ItemChangeData {
        return .{ .ptr = qtc.QQuick3DObject__ItemChangeData_new5(v) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuick3DObject__ItemChangeData `
    ///
    /// ` other: QQuick3DObject__ItemChangeData `
    ///
    pub fn copyAssign(self: QQuick3DObject__ItemChangeData, other: QQuick3DObject__ItemChangeData) void {
        qtc.QQuick3DObject__ItemChangeData_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuick3DObject__ItemChangeData `
    ///
    /// ` other: QQuick3DObject__ItemChangeData `
    ///
    pub fn moveAssign(self: QQuick3DObject__ItemChangeData, other: QQuick3DObject__ItemChangeData) void {
        qtc.QQuick3DObject__ItemChangeData_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `item` instead
    ///
    pub const Item = item;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject-itemchangedata.html#item-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DObject__ItemChangeData `
    ///
    pub fn item(self: QQuick3DObject__ItemChangeData) QQuick3DObject {
        return .{ .ptr = qtc.QQuick3DObject__ItemChangeData_Item(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setItem` instead
    ///
    pub const SetItem = setItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject-itemchangedata.html#item-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DObject__ItemChangeData `
    ///
    /// ` _item: QQuick3DObject `
    ///
    pub fn setItem(self: QQuick3DObject__ItemChangeData, _item: anytype) void {
        comptime _ = @TypeOf(_item)._is_QQuick3DObject;
        qtc.QQuick3DObject__ItemChangeData_SetItem(@ptrCast(self.ptr), @ptrCast(_item.ptr));
    }

    /// ### DEPRECATED: Use `realValue` instead
    ///
    pub const RealValue = realValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject-itemchangedata.html#realValue-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DObject__ItemChangeData `
    ///
    pub fn realValue(self: QQuick3DObject__ItemChangeData) f64 {
        return qtc.QQuick3DObject__ItemChangeData_RealValue(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRealValue` instead
    ///
    pub const SetRealValue = setRealValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject-itemchangedata.html#realValue-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DObject__ItemChangeData `
    ///
    /// ` _realValue: f64 `
    ///
    pub fn setRealValue(self: QQuick3DObject__ItemChangeData, _realValue: f64) void {
        qtc.QQuick3DObject__ItemChangeData_SetRealValue(@ptrCast(self.ptr), @bitCast(_realValue));
    }

    /// ### DEPRECATED: Use `boolValue` instead
    ///
    pub const BoolValue = boolValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject-itemchangedata.html#boolValue-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DObject__ItemChangeData `
    ///
    pub fn boolValue(self: QQuick3DObject__ItemChangeData) bool {
        return qtc.QQuick3DObject__ItemChangeData_BoolValue(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBoolValue` instead
    ///
    pub const SetBoolValue = setBoolValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject-itemchangedata.html#boolValue-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuick3DObject__ItemChangeData `
    ///
    /// ` _boolValue: bool `
    ///
    pub fn setBoolValue(self: QQuick3DObject__ItemChangeData, _boolValue: bool) void {
        qtc.QQuick3DObject__ItemChangeData_SetBoolValue(@ptrCast(self.ptr), _boolValue);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QQuick3DObject__ItemChangeData `
    ///
    pub fn delete(self: QQuick3DObject__ItemChangeData) void {
        qtc.QQuick3DObject__ItemChangeData_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#public-types)
pub const enums = struct {
    pub const ItemChange = enum {
        pub const ItemChildAddedChange: i32 = 0;
        pub const ItemChildRemovedChange: i32 = 1;
        pub const ItemSceneChange: i32 = 2;
        pub const ItemVisibleHasChanged: i32 = 3;
        pub const ItemParentHasChanged: i32 = 4;
        pub const ItemOpacityHasChanged: i32 = 5;
        pub const ItemActiveFocusHasChanged: i32 = 6;
        pub const ItemRotationHasChanged: i32 = 7;
        pub const ItemAntialiasingHasChanged: i32 = 8;
        pub const ItemDevicePixelRatioHasChanged: i32 = 9;
        pub const ItemEnabledHasChanged: i32 = 10;
    };
};
