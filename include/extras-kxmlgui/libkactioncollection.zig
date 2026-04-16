const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KConfigGroup = @import("libqt6").KConfigGroup;
const KXMLGUIClient = @import("libqt6").KXMLGUIClient;
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
const QWidget = @import("libqt6").QWidget;
const kstandardaction_enums = @import("../extras-kconfigwidgets/libkstandardaction.zig").enums;
const kstandardactions_enums = @import("../extras-kconfig/libkstandardactions.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kactioncollection.html)
pub const KActionCollection = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KActionCollection,

    pub const _is_KActionCollection = {};
    pub const _is_QObject = {};

    /// New constructs a new KActionCollection object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New(parent: anytype) KActionCollection {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KActionCollection_new(@ptrCast(parent.ptr)) };
    }

    /// New2 constructs a new KActionCollection object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    /// ` cName: []const u8 `
    ///
    pub fn New2(parent: anytype, cName: []const u8) KActionCollection {
        comptime _ = @TypeOf(parent)._is_QObject;
        const cName_str = qtc.libqt_string{
            .len = cName.len,
            .data = cName.ptr,
        };
        return .{ .ptr = qtc.KActionCollection_new2(@ptrCast(parent.ptr), cName_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    pub fn MetaObject(self: KActionCollection) QMetaObject {
        return .{ .ptr = qtc.KActionCollection_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KActionCollection `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: KActionCollection, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KActionCollection_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KActionCollection `
    ///
    pub fn SuperMetaObject(self: KActionCollection) QMetaObject {
        return .{ .ptr = qtc.KActionCollection_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KActionCollection, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KActionCollection_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KActionCollection `
    ///
    /// ` callback: *const fn (self: KActionCollection, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KActionCollection, callback: *const fn (KActionCollection, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KActionCollection_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KActionCollection, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KActionCollection_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KActionCollection, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KActionCollection_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KActionCollection `
    ///
    /// ` callback: *const fn (self: KActionCollection, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KActionCollection, callback: *const fn (KActionCollection, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KActionCollection_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: KActionCollection, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KActionCollection_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kactioncollection.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#allCollections)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AllCollections(allocator: std.mem.Allocator) []KActionCollection {
        const _arr: qtc.libqt_list = qtc.KActionCollection_AllCollections();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KActionCollection, _arr.len) catch @panic("kactioncollection.AllCollections: Memory allocation failed");
        const _data: [*]QtC.KActionCollection = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    pub fn Clear(self: KActionCollection) void {
        qtc.KActionCollection_Clear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#associateWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` widget: QWidget `
    ///
    pub fn AssociateWidget(self: KActionCollection, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.KActionCollection_AssociateWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#addAssociatedWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` widget: QWidget `
    ///
    pub fn AddAssociatedWidget(self: KActionCollection, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.KActionCollection_AddAssociatedWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#removeAssociatedWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` widget: QWidget `
    ///
    pub fn RemoveAssociatedWidget(self: KActionCollection, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.KActionCollection_RemoveAssociatedWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#associatedWidgets)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AssociatedWidgets(self: KActionCollection, allocator: std.mem.Allocator) []QWidget {
        const _arr: qtc.libqt_list = qtc.KActionCollection_AssociatedWidgets(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWidget, _arr.len) catch @panic("kactioncollection.AssociatedWidgets: Memory allocation failed");
        const _data: [*]QtC.QWidget = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#clearAssociatedWidgets)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    pub fn ClearAssociatedWidgets(self: KActionCollection) void {
        qtc.KActionCollection_ClearAssociatedWidgets(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#configGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ConfigGroup(self: KActionCollection, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KActionCollection_ConfigGroup(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kactioncollection.ConfigGroup: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#configIsGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    pub fn ConfigIsGlobal(self: KActionCollection) bool {
        return qtc.KActionCollection_ConfigIsGlobal(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#setConfigGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` group: []const u8 `
    ///
    pub fn SetConfigGroup(self: KActionCollection, group: []const u8) void {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        qtc.KActionCollection_SetConfigGroup(@ptrCast(self.ptr), group_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#setConfigGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` global: bool `
    ///
    pub fn SetConfigGlobal(self: KActionCollection, global: bool) void {
        qtc.KActionCollection_SetConfigGlobal(@ptrCast(self.ptr), global);
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#readSettings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    pub fn ReadSettings(self: KActionCollection) void {
        qtc.KActionCollection_ReadSettings(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#importGlobalShortcuts)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` config: KConfigGroup `
    ///
    pub fn ImportGlobalShortcuts(self: KActionCollection, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfigGroup;
        qtc.KActionCollection_ImportGlobalShortcuts(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#exportGlobalShortcuts)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` config: KConfigGroup `
    ///
    pub fn ExportGlobalShortcuts(self: KActionCollection, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfigGroup;
        qtc.KActionCollection_ExportGlobalShortcuts(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#writeSettings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    pub fn WriteSettings(self: KActionCollection) void {
        qtc.KActionCollection_WriteSettings(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    pub fn Count(self: KActionCollection) i32 {
        return qtc.KActionCollection_Count(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    pub fn IsEmpty(self: KActionCollection) bool {
        return qtc.KActionCollection_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#action)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` index: i32 `
    ///
    pub fn Action(self: KActionCollection, index: i32) QAction {
        return .{ .ptr = qtc.KActionCollection_Action(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#action)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` name: []const u8 `
    ///
    pub fn Action2(self: KActionCollection, name: []const u8) QAction {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KActionCollection_Action2(@ptrCast(self.ptr), name_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Actions(self: KActionCollection, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.KActionCollection_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("kactioncollection.Actions: Memory allocation failed");
        const _data: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#actionsWithoutGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ActionsWithoutGroup(self: KActionCollection, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.KActionCollection_ActionsWithoutGroup(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("kactioncollection.ActionsWithoutGroup: Memory allocation failed");
        const _data: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#actionGroups)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ActionGroups(self: KActionCollection, allocator: std.mem.Allocator) []QActionGroup {
        const _arr: qtc.libqt_list = qtc.KActionCollection_ActionGroups(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QActionGroup, _arr.len) catch @panic("kactioncollection.ActionGroups: Memory allocation failed");
        const _data: [*]QtC.QActionGroup = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#setComponentName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` componentName: []const u8 `
    ///
    pub fn SetComponentName(self: KActionCollection, componentName: []const u8) void {
        const componentName_str = qtc.libqt_string{
            .len = componentName.len,
            .data = componentName.ptr,
        };
        qtc.KActionCollection_SetComponentName(@ptrCast(self.ptr), componentName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#componentName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ComponentName(self: KActionCollection, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KActionCollection_ComponentName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kactioncollection.ComponentName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#setComponentDisplayName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` displayName: []const u8 `
    ///
    pub fn SetComponentDisplayName(self: KActionCollection, displayName: []const u8) void {
        const displayName_str = qtc.libqt_string{
            .len = displayName.len,
            .data = displayName.ptr,
        };
        qtc.KActionCollection_SetComponentDisplayName(@ptrCast(self.ptr), displayName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#componentDisplayName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ComponentDisplayName(self: KActionCollection, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KActionCollection_ComponentDisplayName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kactioncollection.ComponentDisplayName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#parentGUIClient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    pub fn ParentGUIClient(self: KActionCollection) KXMLGUIClient {
        return .{ .ptr = qtc.KActionCollection_ParentGUIClient(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#inserted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` action: QAction `
    ///
    pub fn Inserted(self: KActionCollection, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.KActionCollection_Inserted(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#inserted)
    ///
    /// ## Parameters:
    ///
    /// ` self: KActionCollection `
    ///
    /// ` callback: *const fn (self: KActionCollection, action: QAction) callconv(.c) void `
    ///
    pub fn OnInserted(self: KActionCollection, callback: *const fn (KActionCollection, QAction) callconv(.c) void) void {
        qtc.KActionCollection_Connect_Inserted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#changed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    pub fn Changed(self: KActionCollection) void {
        qtc.KActionCollection_Changed(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#changed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KActionCollection `
    ///
    /// ` callback: *const fn (self: KActionCollection) callconv(.c) void `
    ///
    pub fn OnChanged(self: KActionCollection, callback: *const fn (KActionCollection) callconv(.c) void) void {
        qtc.KActionCollection_Connect_Changed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#actionHovered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` action: QAction `
    ///
    pub fn ActionHovered(self: KActionCollection, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.KActionCollection_ActionHovered(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#actionHovered)
    ///
    /// ## Parameters:
    ///
    /// ` self: KActionCollection `
    ///
    /// ` callback: *const fn (self: KActionCollection, action: QAction) callconv(.c) void `
    ///
    pub fn OnActionHovered(self: KActionCollection, callback: *const fn (KActionCollection, QAction) callconv(.c) void) void {
        qtc.KActionCollection_Connect_ActionHovered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#actionTriggered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` action: QAction `
    ///
    pub fn ActionTriggered(self: KActionCollection, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.KActionCollection_ActionTriggered(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#actionTriggered)
    ///
    /// ## Parameters:
    ///
    /// ` self: KActionCollection `
    ///
    /// ` callback: *const fn (self: KActionCollection, action: QAction) callconv(.c) void `
    ///
    pub fn OnActionTriggered(self: KActionCollection, callback: *const fn (KActionCollection, QAction) callconv(.c) void) void {
        qtc.KActionCollection_Connect_ActionTriggered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#connectNotify)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: KActionCollection, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KActionCollection_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#connectNotify)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KActionCollection `
    ///
    /// ` callback: *const fn (self: KActionCollection, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: KActionCollection, callback: *const fn (KActionCollection, QMetaMethod) callconv(.c) void) void {
        qtc.KActionCollection_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperConnectNotify` instead
    ///
    pub const QBaseConnectNotify = SuperConnectNotify;

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#connectNotify)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KActionCollection, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KActionCollection_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#slotActionTriggered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    pub fn SlotActionTriggered(self: KActionCollection) void {
        qtc.KActionCollection_SlotActionTriggered(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#slotActionTriggered)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KActionCollection `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnSlotActionTriggered(self: KActionCollection, callback: *const fn () callconv(.c) void) void {
        qtc.KActionCollection_OnSlotActionTriggered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSlotActionTriggered` instead
    ///
    pub const QBaseSlotActionTriggered = SuperSlotActionTriggered;

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#slotActionTriggered)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    pub fn SuperSlotActionTriggered(self: KActionCollection) void {
        qtc.KActionCollection_SuperSlotActionTriggered(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` name: []const u8 `
    ///
    /// ` action: QAction `
    ///
    pub fn AddAction(self: KActionCollection, name: []const u8, action: anytype) QAction {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(action)._is_QAction;
        return .{ .ptr = qtc.KActionCollection_AddAction(@ptrCast(self.ptr), name_str, @ptrCast(action.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#addActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` actions: []QAction `
    ///
    pub fn AddActions(self: KActionCollection, actions: []QAction) void {
        const actions_list = qtc.libqt_list{
            .len = actions.len,
            .data = @ptrCast(actions.ptr),
        };
        qtc.KActionCollection_AddActions(@ptrCast(self.ptr), actions_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#removeAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` action: QAction `
    ///
    pub fn RemoveAction(self: KActionCollection, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.KActionCollection_RemoveAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#takeAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` action: QAction `
    ///
    pub fn TakeAction(self: KActionCollection, action: anytype) QAction {
        comptime _ = @TypeOf(action)._is_QAction;
        return .{ .ptr = qtc.KActionCollection_TakeAction(@ptrCast(self.ptr), @ptrCast(action.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` actionType: kstandardaction_enums.StandardAction `
    ///
    pub fn AddAction2(self: KActionCollection, actionType: i32) QAction {
        return .{ .ptr = qtc.KActionCollection_AddAction2(@ptrCast(self.ptr), @bitCast(actionType)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` actionType: kstandardaction_enums.StandardAction `
    ///
    /// ` name: []const u8 `
    ///
    pub fn AddAction3(self: KActionCollection, actionType: i32, name: []const u8) QAction {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KActionCollection_AddAction3(@ptrCast(self.ptr), @bitCast(actionType), name_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` actionType: kstandardactions_enums.StandardAction `
    ///
    pub fn AddAction4(self: KActionCollection, actionType: i32) QAction {
        return .{ .ptr = qtc.KActionCollection_AddAction4(@ptrCast(self.ptr), @bitCast(actionType)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` name: []const u8 `
    ///
    pub fn AddAction5(self: KActionCollection, name: []const u8) QAction {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KActionCollection_AddAction5(@ptrCast(self.ptr), name_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#defaultShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` action: QAction `
    ///
    pub fn DefaultShortcut(action: anytype) QKeySequence {
        comptime _ = @TypeOf(action)._is_QAction;
        return .{ .ptr = qtc.KActionCollection_DefaultShortcut(@ptrCast(action.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#defaultShortcuts)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` action: QAction `
    ///
    pub fn DefaultShortcuts(allocator: std.mem.Allocator, action: anytype) []QKeySequence {
        comptime _ = @TypeOf(action)._is_QAction;
        const _arr: qtc.libqt_list = qtc.KActionCollection_DefaultShortcuts(@ptrCast(action.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("kactioncollection.DefaultShortcuts: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#setDefaultShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` action: QAction `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn SetDefaultShortcut(action: anytype, shortcut: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        comptime _ = @TypeOf(shortcut)._is_QKeySequence;
        qtc.KActionCollection_SetDefaultShortcut(@ptrCast(action.ptr), @ptrCast(shortcut.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#setDefaultShortcuts)
    ///
    /// ## Parameter(s):
    ///
    /// ` action: QAction `
    ///
    /// ` shortcuts: []QKeySequence `
    ///
    pub fn SetDefaultShortcuts(action: anytype, shortcuts: []QKeySequence) void {
        comptime _ = @TypeOf(action)._is_QAction;
        const shortcuts_list = qtc.libqt_list{
            .len = shortcuts.len,
            .data = @ptrCast(shortcuts.ptr),
        };
        qtc.KActionCollection_SetDefaultShortcuts(@ptrCast(action.ptr), shortcuts_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#isShortcutsConfigurable)
    ///
    /// ## Parameter(s):
    ///
    /// ` action: QAction `
    ///
    pub fn IsShortcutsConfigurable(action: anytype) bool {
        comptime _ = @TypeOf(action)._is_QAction;
        return qtc.KActionCollection_IsShortcutsConfigurable(@ptrCast(action.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#setShortcutsConfigurable)
    ///
    /// ## Parameter(s):
    ///
    /// ` action: QAction `
    ///
    /// ` configurable: bool `
    ///
    pub fn SetShortcutsConfigurable(action: anytype, configurable: bool) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.KActionCollection_SetShortcutsConfigurable(@ptrCast(action.ptr), configurable);
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kactioncollection.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kactioncollection.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#readSettings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` config: KConfigGroup `
    ///
    pub fn ReadSettings1(self: KActionCollection, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfigGroup;
        qtc.KActionCollection_ReadSettings1(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#exportGlobalShortcuts)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` config: KConfigGroup `
    ///
    /// ` writeDefaults: bool `
    ///
    pub fn ExportGlobalShortcuts2(self: KActionCollection, config: anytype, writeDefaults: bool) void {
        comptime _ = @TypeOf(config)._is_KConfigGroup;
        qtc.KActionCollection_ExportGlobalShortcuts2(@ptrCast(self.ptr), @ptrCast(config.ptr), writeDefaults);
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#writeSettings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` config: KConfigGroup `
    ///
    pub fn WriteSettings1(self: KActionCollection, config: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfigGroup;
        qtc.KActionCollection_WriteSettings1(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#writeSettings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` config: KConfigGroup `
    ///
    /// ` writeDefaults: bool `
    ///
    pub fn WriteSettings2(self: KActionCollection, config: anytype, writeDefaults: bool) void {
        comptime _ = @TypeOf(config)._is_KConfigGroup;
        qtc.KActionCollection_WriteSettings2(@ptrCast(self.ptr), @ptrCast(config.ptr), writeDefaults);
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#writeSettings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` config: KConfigGroup `
    ///
    /// ` writeDefaults: bool `
    ///
    /// ` oneAction: QAction `
    ///
    pub fn WriteSettings3(self: KActionCollection, config: anytype, writeDefaults: bool, oneAction: anytype) void {
        comptime _ = @TypeOf(config)._is_KConfigGroup;
        comptime _ = @TypeOf(oneAction)._is_QAction;
        qtc.KActionCollection_WriteSettings3(@ptrCast(self.ptr), @ptrCast(config.ptr), writeDefaults, @ptrCast(oneAction.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` actionType: kstandardaction_enums.StandardAction `
    ///
    /// ` receiver: QObject `
    ///
    pub fn AddAction22(self: KActionCollection, actionType: i32, receiver: anytype) QAction {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return .{ .ptr = qtc.KActionCollection_AddAction22(@ptrCast(self.ptr), @bitCast(actionType), @ptrCast(receiver.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` actionType: kstandardaction_enums.StandardAction `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn AddAction32(self: KActionCollection, actionType: i32, receiver: anytype, member: [:0]const u8) QAction {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.KActionCollection_AddAction32(@ptrCast(self.ptr), @bitCast(actionType), @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` actionType: kstandardaction_enums.StandardAction `
    ///
    /// ` name: []const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn AddAction33(self: KActionCollection, actionType: i32, name: []const u8, receiver: anytype) QAction {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(receiver)._is_QObject;
        return .{ .ptr = qtc.KActionCollection_AddAction33(@ptrCast(self.ptr), @bitCast(actionType), name_str, @ptrCast(receiver.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` actionType: kstandardaction_enums.StandardAction `
    ///
    /// ` name: []const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn AddAction42(self: KActionCollection, actionType: i32, name: []const u8, receiver: anytype, member: [:0]const u8) QAction {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.KActionCollection_AddAction42(@ptrCast(self.ptr), @bitCast(actionType), name_str, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` name: []const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn AddAction23(self: KActionCollection, name: []const u8, receiver: anytype) QAction {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(receiver)._is_QObject;
        return .{ .ptr = qtc.KActionCollection_AddAction23(@ptrCast(self.ptr), name_str, @ptrCast(receiver.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` name: []const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn AddAction34(self: KActionCollection, name: []const u8, receiver: anytype, member: [:0]const u8) QAction {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.KActionCollection_AddAction34(@ptrCast(self.ptr), name_str, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KActionCollection, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kactioncollection.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KActionCollection, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    pub fn IsWidgetType(self: KActionCollection) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    pub fn IsWindowType(self: KActionCollection) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    pub fn IsQuickItemType(self: KActionCollection) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    pub fn SignalsBlocked(self: KActionCollection) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KActionCollection, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    pub fn Thread(self: KActionCollection) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KActionCollection, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KActionCollection, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KActionCollection, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KActionCollection, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KActionCollection, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KActionCollection, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("kactioncollection.Children: Memory allocation failed");
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
    /// ` self: KActionCollection `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KActionCollection, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KActionCollection, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KActionCollection, obj: anytype) void {
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
    /// ` self: KActionCollection `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KActionCollection, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KActionCollection `
    ///
    pub fn Disconnect3(self: KActionCollection) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KActionCollection, receiver: anytype) bool {
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
    /// ` self: KActionCollection `
    ///
    pub fn DumpObjectTree(self: KActionCollection) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    pub fn DumpObjectInfo(self: KActionCollection) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KActionCollection, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KActionCollection `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KActionCollection, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KActionCollection, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kactioncollection.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kactioncollection.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KActionCollection `
    ///
    pub fn BindingStorage(self: KActionCollection) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    pub fn BindingStorage2(self: KActionCollection) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    pub fn Destroyed(self: KActionCollection) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KActionCollection `
    ///
    /// ` callback: *const fn (self: KActionCollection) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KActionCollection, callback: *const fn (KActionCollection) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    pub fn Parent(self: KActionCollection) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KActionCollection, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    pub fn DeleteLater(self: KActionCollection) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KActionCollection, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KActionCollection, time: i64, timerType: i32) i32 {
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
    /// ` self: KActionCollection `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KActionCollection, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KActionCollection `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KActionCollection, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KActionCollection, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KActionCollection `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KActionCollection, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KActionCollection `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KActionCollection, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KActionCollection `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KActionCollection, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KActionCollection `
    ///
    /// ` callback: *const fn (self: KActionCollection, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KActionCollection, callback: *const fn (KActionCollection, QObject) callconv(.c) void) void {
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
    /// ` self: KActionCollection `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KActionCollection, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KActionCollection_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KActionCollection `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KActionCollection, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KActionCollection_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KActionCollection`
    ///
    /// ` callback: *const fn (self: KActionCollection, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: KActionCollection, callback: *const fn (KActionCollection, QEvent) callconv(.c) bool) void {
        qtc.KActionCollection_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KActionCollection, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KActionCollection_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: KActionCollection `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KActionCollection, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KActionCollection_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KActionCollection`
    ///
    /// ` callback: *const fn (self: KActionCollection, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: KActionCollection, callback: *const fn (KActionCollection, QObject, QEvent) callconv(.c) bool) void {
        qtc.KActionCollection_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KActionCollection, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KActionCollection_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KActionCollection `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KActionCollection, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KActionCollection_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KActionCollection`
    ///
    /// ` callback: *const fn (self: KActionCollection, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: KActionCollection, callback: *const fn (KActionCollection, QTimerEvent) callconv(.c) void) void {
        qtc.KActionCollection_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KActionCollection, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KActionCollection_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KActionCollection `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KActionCollection, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KActionCollection_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KActionCollection`
    ///
    /// ` callback: *const fn (self: KActionCollection, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: KActionCollection, callback: *const fn (KActionCollection, QChildEvent) callconv(.c) void) void {
        qtc.KActionCollection_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KActionCollection, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KActionCollection_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KActionCollection `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KActionCollection, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KActionCollection_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KActionCollection`
    ///
    /// ` callback: *const fn (self: KActionCollection, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: KActionCollection, callback: *const fn (KActionCollection, QEvent) callconv(.c) void) void {
        qtc.KActionCollection_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: KActionCollection, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KActionCollection_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KActionCollection `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KActionCollection, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KActionCollection_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KActionCollection`
    ///
    /// ` callback: *const fn (self: KActionCollection, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: KActionCollection, callback: *const fn (KActionCollection, QMetaMethod) callconv(.c) void) void {
        qtc.KActionCollection_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    pub fn Sender(self: KActionCollection) QObject {
        return .{ .ptr = qtc.KActionCollection_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KActionCollection `
    ///
    pub fn SuperSender(self: KActionCollection) QObject {
        return .{ .ptr = qtc.KActionCollection_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KActionCollection`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: KActionCollection, callback: *const fn () callconv(.c) QObject) void {
        qtc.KActionCollection_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    pub fn SenderSignalIndex(self: KActionCollection) i32 {
        return qtc.KActionCollection_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KActionCollection `
    ///
    pub fn SuperSenderSignalIndex(self: KActionCollection) i32 {
        return qtc.KActionCollection_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KActionCollection`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: KActionCollection, callback: *const fn () callconv(.c) i32) void {
        qtc.KActionCollection_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: KActionCollection, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KActionCollection_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KActionCollection `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KActionCollection, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KActionCollection_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KActionCollection`
    ///
    /// ` callback: *const fn (self: KActionCollection, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: KActionCollection, callback: *const fn (KActionCollection, [*:0]const u8) callconv(.c) i32) void {
        qtc.KActionCollection_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KActionCollection `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: KActionCollection, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KActionCollection_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KActionCollection `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KActionCollection, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KActionCollection_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KActionCollection`
    ///
    /// ` callback: *const fn (self: KActionCollection, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: KActionCollection, callback: *const fn (KActionCollection, QMetaMethod) callconv(.c) bool) void {
        qtc.KActionCollection_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KActionCollection `
    ///
    /// ` callback: *const fn (self: KActionCollection, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KActionCollection, callback: *const fn (KActionCollection, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#dtor.KActionCollection)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KActionCollection `
    ///
    pub fn Delete(self: KActionCollection) void {
        qtc.KActionCollection_Delete(@ptrCast(self.ptr));
    }
};
