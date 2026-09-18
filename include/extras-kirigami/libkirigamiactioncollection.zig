const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KConfigGroup = @import("libqt6").KConfigGroup;
const QAction = @import("libqt6").QAction;
const QActionGroup = @import("libqt6").QActionGroup;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QKeySequence = @import("libqt6").QKeySequence;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kirigamiactioncollection.html)
pub const KirigamiActionCollection = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kirigamiactioncollection.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KirigamiActionCollection,

    pub const _is_KirigamiActionCollection = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KirigamiActionCollection object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new(_parent: anytype) KirigamiActionCollection {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.KirigamiActionCollection_new(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KirigamiActionCollection object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    /// ` cName: []const u8 `
    ///
    pub fn new2(_parent: anytype, cName: []const u8) KirigamiActionCollection {
        comptime _ = @TypeOf(_parent)._is_QObject;
        const cName_str = qtc.libqt_string{
            .len = cName.len,
            .data = cName.ptr,
        };
        return .{ .ptr = qtc.KirigamiActionCollection_new2(@ptrCast(_parent.ptr), cName_str) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KirigamiActionCollection `
    ///
    pub fn metaObject(self: KirigamiActionCollection) QMetaObject {
        return .{ .ptr = qtc.KirigamiActionCollection_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: KirigamiActionCollection `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: KirigamiActionCollection, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KirigamiActionCollection_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KirigamiActionCollection `
    ///
    pub fn superMetaObject(self: KirigamiActionCollection) QMetaObject {
        return .{ .ptr = qtc.KirigamiActionCollection_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KirigamiActionCollection `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KirigamiActionCollection, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KirigamiActionCollection_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KirigamiActionCollection `
    ///
    /// ` callback: *const fn (self: KirigamiActionCollection, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: KirigamiActionCollection, callback: *const fn (KirigamiActionCollection, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KirigamiActionCollection_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KirigamiActionCollection `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: KirigamiActionCollection, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KirigamiActionCollection_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: KirigamiActionCollection `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: KirigamiActionCollection, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KirigamiActionCollection_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KirigamiActionCollection `
    ///
    /// ` callback: *const fn (self: KirigamiActionCollection, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: KirigamiActionCollection, callback: *const fn (KirigamiActionCollection, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KirigamiActionCollection_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KirigamiActionCollection `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: KirigamiActionCollection, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KirigamiActionCollection_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        var _str = qtc.KirigamiActionCollection_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KirigamiActionCollection.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `allCollections` instead
    ///
    pub const AllCollections = allCollections;

    /// ### [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#allCollections)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn allCollections(allocator: std.mem.Allocator) []KirigamiActionCollection {
        const _arr: qtc.libqt_list = qtc.KirigamiActionCollection_AllCollections();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KirigamiActionCollection, _arr.len) catch @panic("KirigamiActionCollection.allCollections: Memory allocation failed");
        const _data_val: [*]QtC.KirigamiActionCollection = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KirigamiActionCollection `
    ///
    pub fn clear(self: KirigamiActionCollection) void {
        qtc.KirigamiActionCollection_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `configGroup` instead
    ///
    pub const ConfigGroup = configGroup;

    /// ### [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#configGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KirigamiActionCollection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn configGroup(self: KirigamiActionCollection, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KirigamiActionCollection_ConfigGroup(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KirigamiActionCollection.configGroup: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `configIsGlobal` instead
    ///
    pub const ConfigIsGlobal = configIsGlobal;

    /// ### [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#configIsGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KirigamiActionCollection `
    ///
    pub fn configIsGlobal(self: KirigamiActionCollection) bool {
        return qtc.KirigamiActionCollection_ConfigIsGlobal(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setConfigGroup` instead
    ///
    pub const SetConfigGroup = setConfigGroup;

    /// ### [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#setConfigGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KirigamiActionCollection `
    ///
    /// ` group: []const u8 `
    ///
    pub fn setConfigGroup(self: KirigamiActionCollection, group: []const u8) void {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        qtc.KirigamiActionCollection_SetConfigGroup(@ptrCast(self.ptr), group_str);
    }

    /// ### DEPRECATED: Use `setConfigGlobal` instead
    ///
    pub const SetConfigGlobal = setConfigGlobal;

    /// ### [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#setConfigGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KirigamiActionCollection `
    ///
    /// ` global: bool `
    ///
    pub fn setConfigGlobal(self: KirigamiActionCollection, global: bool) void {
        qtc.KirigamiActionCollection_SetConfigGlobal(@ptrCast(self.ptr), global);
    }

    /// ### DEPRECATED: Use `readSettings` instead
    ///
    pub const ReadSettings = readSettings;

    /// ### [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#readSettings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KirigamiActionCollection `
    ///
    pub fn readSettings(self: KirigamiActionCollection) void {
        qtc.KirigamiActionCollection_ReadSettings(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `writeSettings` instead
    ///
    pub const WriteSettings = writeSettings;

    /// ### [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#writeSettings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KirigamiActionCollection `
    ///
    pub fn writeSettings(self: KirigamiActionCollection) void {
        qtc.KirigamiActionCollection_WriteSettings(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `count` instead
    ///
    pub const Count = count;

    /// ### [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KirigamiActionCollection `
    ///
    pub fn count(self: KirigamiActionCollection) i32 {
        return qtc.KirigamiActionCollection_Count(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// ### [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KirigamiActionCollection `
    ///
    pub fn isEmpty(self: KirigamiActionCollection) bool {
        return qtc.KirigamiActionCollection_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `action` instead
    ///
    pub const Action = action;

    /// ### [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#action)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KirigamiActionCollection `
    ///
    /// ` index: i32 `
    ///
    pub fn action(self: KirigamiActionCollection, index: i32) QAction {
        return .{ .ptr = qtc.KirigamiActionCollection_Action(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `action2` instead
    ///
    pub const Action2 = action2;

    /// ### [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#action)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KirigamiActionCollection `
    ///
    /// ` name: []const u8 `
    ///
    pub fn action2(self: KirigamiActionCollection, name: []const u8) QAction {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KirigamiActionCollection_Action2(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `actions` instead
    ///
    pub const Actions = actions;

    /// ### [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KirigamiActionCollection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn actions(self: KirigamiActionCollection, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.KirigamiActionCollection_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("KirigamiActionCollection.actions: Memory allocation failed");
        const _data_val: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `actionsWithoutGroup` instead
    ///
    pub const ActionsWithoutGroup = actionsWithoutGroup;

    /// ### [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#actionsWithoutGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KirigamiActionCollection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn actionsWithoutGroup(self: KirigamiActionCollection, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.KirigamiActionCollection_ActionsWithoutGroup(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("KirigamiActionCollection.actionsWithoutGroup: Memory allocation failed");
        const _data_val: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `actionGroups` instead
    ///
    pub const ActionGroups = actionGroups;

    /// ### [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#actionGroups)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KirigamiActionCollection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn actionGroups(self: KirigamiActionCollection, allocator: std.mem.Allocator) []QActionGroup {
        const _arr: qtc.libqt_list = qtc.KirigamiActionCollection_ActionGroups(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QActionGroup, _arr.len) catch @panic("KirigamiActionCollection.actionGroups: Memory allocation failed");
        const _data_val: [*]QtC.QActionGroup = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setComponentName` instead
    ///
    pub const SetComponentName = setComponentName;

    /// ### [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#setComponentName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KirigamiActionCollection `
    ///
    /// ` _componentName: []const u8 `
    ///
    pub fn setComponentName(self: KirigamiActionCollection, _componentName: []const u8) void {
        const componentName_str = qtc.libqt_string{
            .len = _componentName.len,
            .data = _componentName.ptr,
        };
        qtc.KirigamiActionCollection_SetComponentName(@ptrCast(self.ptr), componentName_str);
    }

    /// ### DEPRECATED: Use `componentName` instead
    ///
    pub const ComponentName = componentName;

    /// ### [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#componentName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KirigamiActionCollection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn componentName(self: KirigamiActionCollection, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KirigamiActionCollection_ComponentName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KirigamiActionCollection.componentName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setComponentDisplayName` instead
    ///
    pub const SetComponentDisplayName = setComponentDisplayName;

    /// ### [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#setComponentDisplayName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KirigamiActionCollection `
    ///
    /// ` displayName: []const u8 `
    ///
    pub fn setComponentDisplayName(self: KirigamiActionCollection, displayName: []const u8) void {
        const displayName_str = qtc.libqt_string{
            .len = displayName.len,
            .data = displayName.ptr,
        };
        qtc.KirigamiActionCollection_SetComponentDisplayName(@ptrCast(self.ptr), displayName_str);
    }

    /// ### DEPRECATED: Use `componentDisplayName` instead
    ///
    pub const ComponentDisplayName = componentDisplayName;

    /// ### [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#componentDisplayName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KirigamiActionCollection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn componentDisplayName(self: KirigamiActionCollection, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KirigamiActionCollection_ComponentDisplayName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KirigamiActionCollection.componentDisplayName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `inserted` instead
    ///
    pub const Inserted = inserted;

    /// ### [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#inserted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KirigamiActionCollection `
    ///
    /// ` _action: QAction `
    ///
    pub fn inserted(self: KirigamiActionCollection, _action: anytype) void {
        comptime _ = @TypeOf(_action)._is_QAction;
        qtc.KirigamiActionCollection_Inserted(@ptrCast(self.ptr), @ptrCast(_action.ptr));
    }

    /// ### DEPRECATED: Use `onInserted` instead
    ///
    pub const OnInserted = onInserted;

    /// ### [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#inserted)
    ///
    /// ## Parameters:
    ///
    /// ` self: KirigamiActionCollection `
    ///
    /// ` callback: *const fn (self: KirigamiActionCollection, action: QAction) callconv(.c) void `
    ///
    pub fn onInserted(self: KirigamiActionCollection, callback: *const fn (KirigamiActionCollection, QAction) callconv(.c) void) void {
        qtc.KirigamiActionCollection_Connect_Inserted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `changed` instead
    ///
    pub const Changed = changed;

    /// ### [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#changed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KirigamiActionCollection `
    ///
    pub fn changed(self: KirigamiActionCollection) void {
        qtc.KirigamiActionCollection_Changed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onChanged` instead
    ///
    pub const OnChanged = onChanged;

    /// ### [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#changed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KirigamiActionCollection `
    ///
    /// ` callback: *const fn (self: KirigamiActionCollection) callconv(.c) void `
    ///
    pub fn onChanged(self: KirigamiActionCollection, callback: *const fn (KirigamiActionCollection) callconv(.c) void) void {
        qtc.KirigamiActionCollection_Connect_Changed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `actionHovered` instead
    ///
    pub const ActionHovered = actionHovered;

    /// ### [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#actionHovered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KirigamiActionCollection `
    ///
    /// ` _action: QAction `
    ///
    pub fn actionHovered(self: KirigamiActionCollection, _action: anytype) void {
        comptime _ = @TypeOf(_action)._is_QAction;
        qtc.KirigamiActionCollection_ActionHovered(@ptrCast(self.ptr), @ptrCast(_action.ptr));
    }

    /// ### DEPRECATED: Use `onActionHovered` instead
    ///
    pub const OnActionHovered = onActionHovered;

    /// ### [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#actionHovered)
    ///
    /// ## Parameters:
    ///
    /// ` self: KirigamiActionCollection `
    ///
    /// ` callback: *const fn (self: KirigamiActionCollection, action: QAction) callconv(.c) void `
    ///
    pub fn onActionHovered(self: KirigamiActionCollection, callback: *const fn (KirigamiActionCollection, QAction) callconv(.c) void) void {
        qtc.KirigamiActionCollection_Connect_ActionHovered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `actionTriggered` instead
    ///
    pub const ActionTriggered = actionTriggered;

    /// ### [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#actionTriggered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KirigamiActionCollection `
    ///
    /// ` _action: QAction `
    ///
    pub fn actionTriggered(self: KirigamiActionCollection, _action: anytype) void {
        comptime _ = @TypeOf(_action)._is_QAction;
        qtc.KirigamiActionCollection_ActionTriggered(@ptrCast(self.ptr), @ptrCast(_action.ptr));
    }

    /// ### DEPRECATED: Use `onActionTriggered` instead
    ///
    pub const OnActionTriggered = onActionTriggered;

    /// ### [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#actionTriggered)
    ///
    /// ## Parameters:
    ///
    /// ` self: KirigamiActionCollection `
    ///
    /// ` callback: *const fn (self: KirigamiActionCollection, action: QAction) callconv(.c) void `
    ///
    pub fn onActionTriggered(self: KirigamiActionCollection, callback: *const fn (KirigamiActionCollection, QAction) callconv(.c) void) void {
        qtc.KirigamiActionCollection_Connect_ActionTriggered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `connectNotify` instead
    ///
    pub const ConnectNotify = connectNotify;

    /// ### [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#connectNotify)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KirigamiActionCollection `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: KirigamiActionCollection, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KirigamiActionCollection_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onConnectNotify` instead
    ///
    pub const OnConnectNotify = onConnectNotify;

    /// ### [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#connectNotify)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KirigamiActionCollection `
    ///
    /// ` callback: *const fn (self: KirigamiActionCollection, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: KirigamiActionCollection, callback: *const fn (KirigamiActionCollection, QMetaMethod) callconv(.c) void) void {
        qtc.KirigamiActionCollection_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superConnectNotify` instead
    ///
    pub const SuperConnectNotify = superConnectNotify;

    /// ### [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#connectNotify)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KirigamiActionCollection `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: KirigamiActionCollection, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KirigamiActionCollection_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `slotActionTriggered` instead
    ///
    pub const SlotActionTriggered = slotActionTriggered;

    /// ### [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#slotActionTriggered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KirigamiActionCollection `
    ///
    pub fn slotActionTriggered(self: KirigamiActionCollection) void {
        qtc.KirigamiActionCollection_SlotActionTriggered(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSlotActionTriggered` instead
    ///
    pub const OnSlotActionTriggered = onSlotActionTriggered;

    /// ### [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#slotActionTriggered)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KirigamiActionCollection `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onSlotActionTriggered(self: KirigamiActionCollection, callback: *const fn () callconv(.c) void) void {
        qtc.KirigamiActionCollection_OnSlotActionTriggered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSlotActionTriggered` instead
    ///
    pub const SuperSlotActionTriggered = superSlotActionTriggered;

    /// ### [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#slotActionTriggered)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KirigamiActionCollection `
    ///
    pub fn superSlotActionTriggered(self: KirigamiActionCollection) void {
        qtc.KirigamiActionCollection_SuperSlotActionTriggered(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `addAction` instead
    ///
    pub const AddAction = addAction;

    /// ### [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KirigamiActionCollection `
    ///
    /// ` name: []const u8 `
    ///
    /// ` _action: QAction `
    ///
    pub fn addAction(self: KirigamiActionCollection, name: []const u8, _action: anytype) QAction {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(_action)._is_QAction;
        return .{ .ptr = qtc.KirigamiActionCollection_AddAction(@ptrCast(self.ptr), name_str, @ptrCast(_action.ptr)) };
    }

    /// ### DEPRECATED: Use `addActions` instead
    ///
    pub const AddActions = addActions;

    /// ### [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#addActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KirigamiActionCollection `
    ///
    /// ` _actions: []QAction `
    ///
    pub fn addActions(self: KirigamiActionCollection, _actions: []QAction) void {
        const actions_list = qtc.libqt_list{
            .len = _actions.len,
            .data = @ptrCast(_actions.ptr),
        };
        qtc.KirigamiActionCollection_AddActions(@ptrCast(self.ptr), actions_list);
    }

    /// ### DEPRECATED: Use `removeAction` instead
    ///
    pub const RemoveAction = removeAction;

    /// ### [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#removeAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KirigamiActionCollection `
    ///
    /// ` _action: QAction `
    ///
    pub fn removeAction(self: KirigamiActionCollection, _action: anytype) void {
        comptime _ = @TypeOf(_action)._is_QAction;
        qtc.KirigamiActionCollection_RemoveAction(@ptrCast(self.ptr), @ptrCast(_action.ptr));
    }

    /// ### DEPRECATED: Use `takeAction` instead
    ///
    pub const TakeAction = takeAction;

    /// ### [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#takeAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KirigamiActionCollection `
    ///
    /// ` _action: QAction `
    ///
    pub fn takeAction(self: KirigamiActionCollection, _action: anytype) QAction {
        comptime _ = @TypeOf(_action)._is_QAction;
        return .{ .ptr = qtc.KirigamiActionCollection_TakeAction(@ptrCast(self.ptr), @ptrCast(_action.ptr)) };
    }

    /// ### DEPRECATED: Use `defaultShortcut` instead
    ///
    pub const DefaultShortcut = defaultShortcut;

    /// ### [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#defaultShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` _action: QAction `
    ///
    pub fn defaultShortcut(_action: anytype) QKeySequence {
        comptime _ = @TypeOf(_action)._is_QAction;
        return .{ .ptr = qtc.KirigamiActionCollection_DefaultShortcut(@ptrCast(_action.ptr)) };
    }

    /// ### DEPRECATED: Use `defaultShortcuts` instead
    ///
    pub const DefaultShortcuts = defaultShortcuts;

    /// ### [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#defaultShortcuts)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _action: QAction `
    ///
    pub fn defaultShortcuts(allocator: std.mem.Allocator, _action: anytype) []QKeySequence {
        comptime _ = @TypeOf(_action)._is_QAction;
        const _arr: qtc.libqt_list = qtc.KirigamiActionCollection_DefaultShortcuts(@ptrCast(_action.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KirigamiActionCollection.defaultShortcuts: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setDefaultShortcut` instead
    ///
    pub const SetDefaultShortcut = setDefaultShortcut;

    /// ### [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#setDefaultShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` _action: QAction `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn setDefaultShortcut(_action: anytype, shortcut: anytype) void {
        comptime _ = @TypeOf(_action)._is_QAction;
        comptime _ = @TypeOf(shortcut)._is_QKeySequence;
        qtc.KirigamiActionCollection_SetDefaultShortcut(@ptrCast(_action.ptr), @ptrCast(shortcut.ptr));
    }

    /// ### DEPRECATED: Use `setDefaultShortcuts` instead
    ///
    pub const SetDefaultShortcuts = setDefaultShortcuts;

    /// ### [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#setDefaultShortcuts)
    ///
    /// ## Parameter(s):
    ///
    /// ` _action: QAction `
    ///
    /// ` shortcuts: []QKeySequence `
    ///
    pub fn setDefaultShortcuts(_action: anytype, shortcuts: []QKeySequence) void {
        comptime _ = @TypeOf(_action)._is_QAction;
        const shortcuts_list = qtc.libqt_list{
            .len = shortcuts.len,
            .data = @ptrCast(shortcuts.ptr),
        };
        qtc.KirigamiActionCollection_SetDefaultShortcuts(@ptrCast(_action.ptr), shortcuts_list);
    }

    /// ### DEPRECATED: Use `isShortcutsConfigurable` instead
    ///
    pub const IsShortcutsConfigurable = isShortcutsConfigurable;

    /// ### [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#isShortcutsConfigurable)
    ///
    /// ## Parameter(s):
    ///
    /// ` _action: QAction `
    ///
    pub fn isShortcutsConfigurable(_action: anytype) bool {
        comptime _ = @TypeOf(_action)._is_QAction;
        return qtc.KirigamiActionCollection_IsShortcutsConfigurable(@ptrCast(_action.ptr));
    }

    /// ### DEPRECATED: Use `setShortcutsConfigurable` instead
    ///
    pub const SetShortcutsConfigurable = setShortcutsConfigurable;

    /// ### [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#setShortcutsConfigurable)
    ///
    /// ## Parameter(s):
    ///
    /// ` _action: QAction `
    ///
    /// ` configurable: bool `
    ///
    pub fn setShortcutsConfigurable(_action: anytype, configurable: bool) void {
        comptime _ = @TypeOf(_action)._is_QAction;
        qtc.KirigamiActionCollection_SetShortcutsConfigurable(@ptrCast(_action.ptr), configurable);
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
        var _str = qtc.KirigamiActionCollection_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KirigamiActionCollection.tr2: Memory allocation failed");
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
        var _str = qtc.KirigamiActionCollection_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KirigamiActionCollection.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `readSettings1` instead
    ///
    pub const ReadSettings1 = readSettings1;

    /// ### [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#readSettings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KirigamiActionCollection `
    ///
    /// ` config: KConfigGroup `
    ///
    pub fn readSettings1(self: KirigamiActionCollection, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfigGroup;
        qtc.KirigamiActionCollection_ReadSettings1(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

    /// ### DEPRECATED: Use `writeSettings1` instead
    ///
    pub const WriteSettings1 = writeSettings1;

    /// ### [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#writeSettings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KirigamiActionCollection `
    ///
    /// ` config: KConfigGroup `
    ///
    pub fn writeSettings1(self: KirigamiActionCollection, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfigGroup;
        qtc.KirigamiActionCollection_WriteSettings1(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

    /// ### DEPRECATED: Use `writeSettings2` instead
    ///
    pub const WriteSettings2 = writeSettings2;

    /// ### [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#writeSettings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KirigamiActionCollection `
    ///
    /// ` config: KConfigGroup `
    ///
    /// ` writeDefaults: bool `
    ///
    pub fn writeSettings2(self: KirigamiActionCollection, config: anytype, writeDefaults: bool) void {
        comptime _ = @TypeOf(config)._is_KConfigGroup;
        qtc.KirigamiActionCollection_WriteSettings2(@ptrCast(self.ptr), @ptrCast(config.ptr), writeDefaults);
    }

    /// ### DEPRECATED: Use `writeSettings3` instead
    ///
    pub const WriteSettings3 = writeSettings3;

    /// ### [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#writeSettings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KirigamiActionCollection `
    ///
    /// ` config: KConfigGroup `
    ///
    /// ` writeDefaults: bool `
    ///
    /// ` oneAction: QAction `
    ///
    pub fn writeSettings3(self: KirigamiActionCollection, config: anytype, writeDefaults: bool, oneAction: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfigGroup;
        comptime _ = @TypeOf(oneAction)._is_QAction;
        qtc.KirigamiActionCollection_WriteSettings3(@ptrCast(self.ptr), @ptrCast(config.ptr), writeDefaults, @ptrCast(oneAction.ptr));
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
    /// ` self: KirigamiActionCollection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KirigamiActionCollection, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KirigamiActionCollection.objectName: Memory allocation failed");
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
    /// ` self: KirigamiActionCollection `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: KirigamiActionCollection, name: []const u8) void {
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
    /// ` self: KirigamiActionCollection `
    ///
    pub fn isWidgetType(self: KirigamiActionCollection) bool {
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
    /// ` self: KirigamiActionCollection `
    ///
    pub fn isWindowType(self: KirigamiActionCollection) bool {
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
    /// ` self: KirigamiActionCollection `
    ///
    pub fn isQuickItemType(self: KirigamiActionCollection) bool {
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
    /// ` self: KirigamiActionCollection `
    ///
    pub fn signalsBlocked(self: KirigamiActionCollection) bool {
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
    /// ` self: KirigamiActionCollection `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KirigamiActionCollection, b: bool) bool {
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
    /// ` self: KirigamiActionCollection `
    ///
    pub fn thread(self: KirigamiActionCollection) QThread {
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
    /// ` self: KirigamiActionCollection `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KirigamiActionCollection, _thread: anytype) bool {
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
    /// ` self: KirigamiActionCollection `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KirigamiActionCollection, interval: i32) i32 {
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
    /// ` self: KirigamiActionCollection `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KirigamiActionCollection, time: i64) i32 {
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
    /// ` self: KirigamiActionCollection `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KirigamiActionCollection, id: i32) void {
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
    /// ` self: KirigamiActionCollection `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KirigamiActionCollection, id: i32) void {
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
    /// ` self: KirigamiActionCollection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KirigamiActionCollection, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KirigamiActionCollection.children: Memory allocation failed");
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
    /// ` self: KirigamiActionCollection `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KirigamiActionCollection, _parent: anytype) void {
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
    /// ` self: KirigamiActionCollection `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KirigamiActionCollection, filterObj: anytype) void {
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
    /// ` self: KirigamiActionCollection `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KirigamiActionCollection, obj: anytype) void {
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
    /// ` self: KirigamiActionCollection `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KirigamiActionCollection, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KirigamiActionCollection `
    ///
    pub fn disconnect3(self: KirigamiActionCollection) bool {
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
    /// ` self: KirigamiActionCollection `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KirigamiActionCollection, receiver: anytype) bool {
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
    /// ` self: KirigamiActionCollection `
    ///
    pub fn dumpObjectTree(self: KirigamiActionCollection) void {
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
    /// ` self: KirigamiActionCollection `
    ///
    pub fn dumpObjectInfo(self: KirigamiActionCollection) void {
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
    /// ` self: KirigamiActionCollection `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KirigamiActionCollection, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KirigamiActionCollection `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: KirigamiActionCollection, name: [:0]const u8) QVariant {
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
    /// ` self: KirigamiActionCollection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KirigamiActionCollection, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KirigamiActionCollection.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KirigamiActionCollection.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KirigamiActionCollection `
    ///
    pub fn bindingStorage(self: KirigamiActionCollection) QBindingStorage {
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
    /// ` self: KirigamiActionCollection `
    ///
    pub fn bindingStorage2(self: KirigamiActionCollection) QBindingStorage {
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
    /// ` self: KirigamiActionCollection `
    ///
    pub fn destroyed(self: KirigamiActionCollection) void {
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
    /// ` self: KirigamiActionCollection `
    ///
    /// ` callback: *const fn (self: KirigamiActionCollection) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KirigamiActionCollection, callback: *const fn (KirigamiActionCollection) callconv(.c) void) void {
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
    /// ` self: KirigamiActionCollection `
    ///
    pub fn parent(self: KirigamiActionCollection) QObject {
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
    /// ` self: KirigamiActionCollection `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KirigamiActionCollection, classname: [:0]const u8) bool {
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
    /// ` self: KirigamiActionCollection `
    ///
    pub fn deleteLater(self: KirigamiActionCollection) void {
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
    /// ` self: KirigamiActionCollection `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KirigamiActionCollection, interval: i32, timerType: i32) i32 {
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
    /// ` self: KirigamiActionCollection `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KirigamiActionCollection, time: i64, timerType: i32) i32 {
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
    /// ` self: KirigamiActionCollection `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KirigamiActionCollection, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KirigamiActionCollection `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KirigamiActionCollection, signal: [:0]const u8) bool {
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
    /// ` self: KirigamiActionCollection `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KirigamiActionCollection, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KirigamiActionCollection `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KirigamiActionCollection, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KirigamiActionCollection `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KirigamiActionCollection, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KirigamiActionCollection `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KirigamiActionCollection, param1: anytype) void {
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
    /// ` self: KirigamiActionCollection `
    ///
    /// ` callback: *const fn (self: KirigamiActionCollection, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KirigamiActionCollection, callback: *const fn (KirigamiActionCollection, QObject) callconv(.c) void) void {
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
    /// ` self: KirigamiActionCollection `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: KirigamiActionCollection, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KirigamiActionCollection_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KirigamiActionCollection `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: KirigamiActionCollection, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KirigamiActionCollection_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KirigamiActionCollection`
    ///
    /// ` callback: *const fn (self: KirigamiActionCollection, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: KirigamiActionCollection, callback: *const fn (KirigamiActionCollection, QEvent) callconv(.c) bool) void {
        qtc.KirigamiActionCollection_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KirigamiActionCollection `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KirigamiActionCollection, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KirigamiActionCollection_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KirigamiActionCollection `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: KirigamiActionCollection, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KirigamiActionCollection_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KirigamiActionCollection`
    ///
    /// ` callback: *const fn (self: KirigamiActionCollection, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: KirigamiActionCollection, callback: *const fn (KirigamiActionCollection, QObject, QEvent) callconv(.c) bool) void {
        qtc.KirigamiActionCollection_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KirigamiActionCollection `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: KirigamiActionCollection, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KirigamiActionCollection_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KirigamiActionCollection `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: KirigamiActionCollection, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KirigamiActionCollection_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KirigamiActionCollection`
    ///
    /// ` callback: *const fn (self: KirigamiActionCollection, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: KirigamiActionCollection, callback: *const fn (KirigamiActionCollection, QTimerEvent) callconv(.c) void) void {
        qtc.KirigamiActionCollection_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KirigamiActionCollection `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: KirigamiActionCollection, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KirigamiActionCollection_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KirigamiActionCollection `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: KirigamiActionCollection, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KirigamiActionCollection_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KirigamiActionCollection`
    ///
    /// ` callback: *const fn (self: KirigamiActionCollection, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: KirigamiActionCollection, callback: *const fn (KirigamiActionCollection, QChildEvent) callconv(.c) void) void {
        qtc.KirigamiActionCollection_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KirigamiActionCollection `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: KirigamiActionCollection, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KirigamiActionCollection_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KirigamiActionCollection `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: KirigamiActionCollection, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KirigamiActionCollection_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KirigamiActionCollection`
    ///
    /// ` callback: *const fn (self: KirigamiActionCollection, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: KirigamiActionCollection, callback: *const fn (KirigamiActionCollection, QEvent) callconv(.c) void) void {
        qtc.KirigamiActionCollection_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KirigamiActionCollection `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: KirigamiActionCollection, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KirigamiActionCollection_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KirigamiActionCollection `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: KirigamiActionCollection, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KirigamiActionCollection_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KirigamiActionCollection`
    ///
    /// ` callback: *const fn (self: KirigamiActionCollection, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: KirigamiActionCollection, callback: *const fn (KirigamiActionCollection, QMetaMethod) callconv(.c) void) void {
        qtc.KirigamiActionCollection_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KirigamiActionCollection `
    ///
    pub fn sender(self: KirigamiActionCollection) QObject {
        return .{ .ptr = qtc.KirigamiActionCollection_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KirigamiActionCollection `
    ///
    pub fn superSender(self: KirigamiActionCollection) QObject {
        return .{ .ptr = qtc.KirigamiActionCollection_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: KirigamiActionCollection`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: KirigamiActionCollection, callback: *const fn () callconv(.c) QObject) void {
        qtc.KirigamiActionCollection_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KirigamiActionCollection `
    ///
    pub fn senderSignalIndex(self: KirigamiActionCollection) i32 {
        return qtc.KirigamiActionCollection_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KirigamiActionCollection `
    ///
    pub fn superSenderSignalIndex(self: KirigamiActionCollection) i32 {
        return qtc.KirigamiActionCollection_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KirigamiActionCollection`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: KirigamiActionCollection, callback: *const fn () callconv(.c) i32) void {
        qtc.KirigamiActionCollection_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KirigamiActionCollection `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: KirigamiActionCollection, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KirigamiActionCollection_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KirigamiActionCollection `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: KirigamiActionCollection, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KirigamiActionCollection_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KirigamiActionCollection`
    ///
    /// ` callback: *const fn (self: KirigamiActionCollection, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: KirigamiActionCollection, callback: *const fn (KirigamiActionCollection, [*:0]const u8) callconv(.c) i32) void {
        qtc.KirigamiActionCollection_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KirigamiActionCollection `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: KirigamiActionCollection, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KirigamiActionCollection_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KirigamiActionCollection `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: KirigamiActionCollection, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KirigamiActionCollection_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KirigamiActionCollection`
    ///
    /// ` callback: *const fn (self: KirigamiActionCollection, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: KirigamiActionCollection, callback: *const fn (KirigamiActionCollection, QMetaMethod) callconv(.c) bool) void {
        qtc.KirigamiActionCollection_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KirigamiActionCollection `
    ///
    /// ` callback: *const fn (self: KirigamiActionCollection, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KirigamiActionCollection, callback: *const fn (KirigamiActionCollection, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#dtor.KirigamiActionCollection)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KirigamiActionCollection `
    ///
    pub fn delete(self: KirigamiActionCollection) void {
        qtc.KirigamiActionCollection_Delete(@ptrCast(self.ptr));
    }
};
