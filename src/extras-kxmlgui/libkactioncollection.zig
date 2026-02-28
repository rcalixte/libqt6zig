const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kstandardaction_enums = @import("../extras-kconfigwidgets/libkstandardaction.zig").enums;
const kstandardactions_enums = @import("../extras-kconfig/libkstandardactions.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kactioncollection.html)
pub const kactioncollection = struct {
    /// New constructs a new KActionCollection object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn New(parent: ?*anyopaque) QtC.KActionCollection {
        return qtc.KActionCollection_new(@ptrCast(parent));
    }

    /// New2 constructs a new KActionCollection object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QtC.QObject `
    ///
    /// ` cName: []const u8 `
    ///
    pub fn New2(parent: ?*anyopaque, cName: []const u8) QtC.KActionCollection {
        const cName_str = qtc.libqt_string{
            .len = cName.len,
            .data = cName.ptr,
        };

        return qtc.KActionCollection_new2(@ptrCast(parent), cName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KActionCollection_MetaObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMetaObject `
    ///
    pub fn OnMetaObject(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMetaObject) void {
        qtc.KActionCollection_OnMetaObject(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KActionCollection `
    ///
    pub fn SuperMetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KActionCollection_SuperMetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KActionCollection_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` callback: *const fn (self: QtC.KActionCollection, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KActionCollection_OnMetacast(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KActionCollection_SuperMetacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KActionCollection_Metacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` callback: *const fn (self: QtC.KActionCollection, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KActionCollection_OnMetacall(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KActionCollection_SuperMetacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr(s: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
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
    pub fn AllCollections(allocator: std.mem.Allocator) []QtC.KActionCollection {
        const _arr: qtc.libqt_list = qtc.KActionCollection_AllCollections();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KActionCollection, _arr.len) catch @panic("kactioncollection.AllCollections: Memory allocation failed");
        const _data: [*]QtC.KActionCollection = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    pub fn Clear(self: ?*anyopaque) void {
        qtc.KActionCollection_Clear(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#associateWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn AssociateWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.KActionCollection_AssociateWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#addAssociatedWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn AddAssociatedWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.KActionCollection_AddAssociatedWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#removeAssociatedWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn RemoveAssociatedWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.KActionCollection_RemoveAssociatedWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#associatedWidgets)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AssociatedWidgets(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QWidget {
        const _arr: qtc.libqt_list = qtc.KActionCollection_AssociatedWidgets(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QWidget, _arr.len) catch @panic("kactioncollection.AssociatedWidgets: Memory allocation failed");
        const _data: [*]QtC.QWidget = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#clearAssociatedWidgets)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    pub fn ClearAssociatedWidgets(self: ?*anyopaque) void {
        qtc.KActionCollection_ClearAssociatedWidgets(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#configGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ConfigGroup(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KActionCollection_ConfigGroup(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kactioncollection.ConfigGroup: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#configIsGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    pub fn ConfigIsGlobal(self: ?*anyopaque) bool {
        return qtc.KActionCollection_ConfigIsGlobal(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#setConfigGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` group: []const u8 `
    ///
    pub fn SetConfigGroup(self: ?*anyopaque, group: []const u8) void {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        qtc.KActionCollection_SetConfigGroup(@ptrCast(self), group_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#setConfigGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` global: bool `
    ///
    pub fn SetConfigGlobal(self: ?*anyopaque, global: bool) void {
        qtc.KActionCollection_SetConfigGlobal(@ptrCast(self), global);
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#readSettings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    pub fn ReadSettings(self: ?*anyopaque) void {
        qtc.KActionCollection_ReadSettings(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#importGlobalShortcuts)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` config: QtC.KConfigGroup `
    ///
    pub fn ImportGlobalShortcuts(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KActionCollection_ImportGlobalShortcuts(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#exportGlobalShortcuts)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` config: QtC.KConfigGroup `
    ///
    pub fn ExportGlobalShortcuts(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KActionCollection_ExportGlobalShortcuts(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#writeSettings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    pub fn WriteSettings(self: ?*anyopaque) void {
        qtc.KActionCollection_WriteSettings(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    pub fn Count(self: ?*anyopaque) i32 {
        return qtc.KActionCollection_Count(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.KActionCollection_IsEmpty(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#action)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` index: i32 `
    ///
    pub fn Action(self: ?*anyopaque, index: i32) QtC.QAction {
        return qtc.KActionCollection_Action(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#action)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` name: []const u8 `
    ///
    pub fn Action2(self: ?*anyopaque, name: []const u8) QtC.QAction {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KActionCollection_Action2(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Actions(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QAction {
        const _arr: qtc.libqt_list = qtc.KActionCollection_Actions(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QAction, _arr.len) catch @panic("kactioncollection.Actions: Memory allocation failed");
        const _data: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#actionsWithoutGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ActionsWithoutGroup(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QAction {
        const _arr: qtc.libqt_list = qtc.KActionCollection_ActionsWithoutGroup(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QAction, _arr.len) catch @panic("kactioncollection.ActionsWithoutGroup: Memory allocation failed");
        const _data: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#actionGroups)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ActionGroups(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QActionGroup {
        const _arr: qtc.libqt_list = qtc.KActionCollection_ActionGroups(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QActionGroup, _arr.len) catch @panic("kactioncollection.ActionGroups: Memory allocation failed");
        const _data: [*]QtC.QActionGroup = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#setComponentName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` componentName: []const u8 `
    ///
    pub fn SetComponentName(self: ?*anyopaque, componentName: []const u8) void {
        const componentName_str = qtc.libqt_string{
            .len = componentName.len,
            .data = componentName.ptr,
        };
        qtc.KActionCollection_SetComponentName(@ptrCast(self), componentName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#componentName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ComponentName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KActionCollection_ComponentName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kactioncollection.ComponentName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#setComponentDisplayName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` displayName: []const u8 `
    ///
    pub fn SetComponentDisplayName(self: ?*anyopaque, displayName: []const u8) void {
        const displayName_str = qtc.libqt_string{
            .len = displayName.len,
            .data = displayName.ptr,
        };
        qtc.KActionCollection_SetComponentDisplayName(@ptrCast(self), displayName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#componentDisplayName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ComponentDisplayName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KActionCollection_ComponentDisplayName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kactioncollection.ComponentDisplayName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#parentGUIClient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    pub fn ParentGUIClient(self: ?*anyopaque) QtC.KXMLGUIClient {
        return qtc.KActionCollection_ParentGUIClient(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#inserted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` action: QtC.QAction `
    ///
    pub fn Inserted(self: ?*anyopaque, action: ?*anyopaque) void {
        qtc.KActionCollection_Inserted(@ptrCast(self), @ptrCast(action));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#inserted)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` callback: *const fn (self: QtC.KActionCollection, action: QtC.QAction) callconv(.c) void `
    ///
    pub fn OnInserted(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KActionCollection_Connect_Inserted(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#changed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    pub fn Changed(self: ?*anyopaque) void {
        qtc.KActionCollection_Changed(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#changed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` callback: *const fn (self: QtC.KActionCollection) callconv(.c) void `
    ///
    pub fn OnChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.KActionCollection_Connect_Changed(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#actionHovered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` action: QtC.QAction `
    ///
    pub fn ActionHovered(self: ?*anyopaque, action: ?*anyopaque) void {
        qtc.KActionCollection_ActionHovered(@ptrCast(self), @ptrCast(action));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#actionHovered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` callback: *const fn (self: QtC.KActionCollection, action: QtC.QAction) callconv(.c) void `
    ///
    pub fn OnActionHovered(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KActionCollection_Connect_ActionHovered(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#actionTriggered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` action: QtC.QAction `
    ///
    pub fn ActionTriggered(self: ?*anyopaque, action: ?*anyopaque) void {
        qtc.KActionCollection_ActionTriggered(@ptrCast(self), @ptrCast(action));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#actionTriggered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` callback: *const fn (self: QtC.KActionCollection, action: QtC.QAction) callconv(.c) void `
    ///
    pub fn OnActionTriggered(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KActionCollection_Connect_ActionTriggered(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#connectNotify)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KActionCollection_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#connectNotify)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` callback: *const fn (self: QtC.KActionCollection, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KActionCollection_OnConnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KActionCollection `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KActionCollection_SuperConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#slotActionTriggered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    pub fn SlotActionTriggered(self: ?*anyopaque) void {
        qtc.KActionCollection_SlotActionTriggered(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#slotActionTriggered)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnSlotActionTriggered(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KActionCollection_OnSlotActionTriggered(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KActionCollection `
    ///
    pub fn SuperSlotActionTriggered(self: ?*anyopaque) void {
        qtc.KActionCollection_SuperSlotActionTriggered(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` name: []const u8 `
    ///
    /// ` action: QtC.QAction `
    ///
    pub fn AddAction(self: ?*anyopaque, name: []const u8, action: ?*anyopaque) QtC.QAction {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KActionCollection_AddAction(@ptrCast(self), name_str, @ptrCast(action));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#addActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` actions: []QtC.QAction `
    ///
    pub fn AddActions(self: ?*anyopaque, actions: []?*anyopaque) void {
        const actions_list = qtc.libqt_list{
            .len = actions.len,
            .data = @ptrCast(actions.ptr),
        };
        qtc.KActionCollection_AddActions(@ptrCast(self), actions_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#removeAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` action: QtC.QAction `
    ///
    pub fn RemoveAction(self: ?*anyopaque, action: ?*anyopaque) void {
        qtc.KActionCollection_RemoveAction(@ptrCast(self), @ptrCast(action));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#takeAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` action: QtC.QAction `
    ///
    pub fn TakeAction(self: ?*anyopaque, action: ?*anyopaque) QtC.QAction {
        return qtc.KActionCollection_TakeAction(@ptrCast(self), @ptrCast(action));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` actionType: kstandardaction_enums.StandardAction `
    ///
    pub fn AddAction2(self: ?*anyopaque, actionType: i32) QtC.QAction {
        return qtc.KActionCollection_AddAction2(@ptrCast(self), @bitCast(actionType));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` actionType: kstandardaction_enums.StandardAction `
    ///
    /// ` name: []const u8 `
    ///
    pub fn AddAction3(self: ?*anyopaque, actionType: i32, name: []const u8) QtC.QAction {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KActionCollection_AddAction3(@ptrCast(self), @bitCast(actionType), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` actionType: kstandardactions_enums.StandardAction `
    ///
    pub fn AddAction4(self: ?*anyopaque, actionType: i32) QtC.QAction {
        return qtc.KActionCollection_AddAction4(@ptrCast(self), @bitCast(actionType));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` name: []const u8 `
    ///
    pub fn AddAction5(self: ?*anyopaque, name: []const u8) QtC.QAction {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KActionCollection_AddAction5(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#defaultShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` action: QtC.QAction `
    ///
    pub fn DefaultShortcut(action: ?*anyopaque) QtC.QKeySequence {
        return qtc.KActionCollection_DefaultShortcut(@ptrCast(action));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#defaultShortcuts)
    ///
    /// ## Parameter(s):
    ///
    /// ` action: QtC.QAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DefaultShortcuts(action: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KActionCollection_DefaultShortcuts(@ptrCast(action));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kactioncollection.DefaultShortcuts: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#setDefaultShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` action: QtC.QAction `
    ///
    /// ` shortcut: QtC.QKeySequence `
    ///
    pub fn SetDefaultShortcut(action: ?*anyopaque, shortcut: ?*anyopaque) void {
        qtc.KActionCollection_SetDefaultShortcut(@ptrCast(action), @ptrCast(shortcut));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#setDefaultShortcuts)
    ///
    /// ## Parameter(s):
    ///
    /// ` action: QtC.QAction `
    ///
    /// ` shortcuts: []QtC.QKeySequence `
    ///
    pub fn SetDefaultShortcuts(action: ?*anyopaque, shortcuts: []QtC.QKeySequence) void {
        const shortcuts_list = qtc.libqt_list{
            .len = shortcuts.len,
            .data = @ptrCast(shortcuts.ptr),
        };
        qtc.KActionCollection_SetDefaultShortcuts(@ptrCast(action), shortcuts_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#isShortcutsConfigurable)
    ///
    /// ## Parameter(s):
    ///
    /// ` action: QtC.QAction `
    ///
    pub fn IsShortcutsConfigurable(action: ?*anyopaque) bool {
        return qtc.KActionCollection_IsShortcutsConfigurable(@ptrCast(action));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#setShortcutsConfigurable)
    ///
    /// ## Parameter(s):
    ///
    /// ` action: QtC.QAction `
    ///
    /// ` configurable: bool `
    ///
    pub fn SetShortcutsConfigurable(action: ?*anyopaque, configurable: bool) void {
        qtc.KActionCollection_SetShortcutsConfigurable(@ptrCast(action), configurable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr2(s: [:0]const u8, c: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
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
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr3(s: [:0]const u8, c: [:0]const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
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
    /// ` self: QtC.KActionCollection `
    ///
    /// ` config: QtC.KConfigGroup `
    ///
    pub fn ReadSettings1(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KActionCollection_ReadSettings1(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#exportGlobalShortcuts)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` config: QtC.KConfigGroup `
    ///
    /// ` writeDefaults: bool `
    ///
    pub fn ExportGlobalShortcuts2(self: ?*anyopaque, config: ?*anyopaque, writeDefaults: bool) void {
        qtc.KActionCollection_ExportGlobalShortcuts2(@ptrCast(self), @ptrCast(config), writeDefaults);
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#writeSettings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` config: QtC.KConfigGroup `
    ///
    pub fn WriteSettings1(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KActionCollection_WriteSettings1(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#writeSettings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` config: QtC.KConfigGroup `
    ///
    /// ` writeDefaults: bool `
    ///
    pub fn WriteSettings2(self: ?*anyopaque, config: ?*anyopaque, writeDefaults: bool) void {
        qtc.KActionCollection_WriteSettings2(@ptrCast(self), @ptrCast(config), writeDefaults);
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#writeSettings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` config: QtC.KConfigGroup `
    ///
    /// ` writeDefaults: bool `
    ///
    /// ` oneAction: QtC.QAction `
    ///
    pub fn WriteSettings3(self: ?*anyopaque, config: ?*anyopaque, writeDefaults: bool, oneAction: ?*anyopaque) void {
        qtc.KActionCollection_WriteSettings3(@ptrCast(self), @ptrCast(config), writeDefaults, @ptrCast(oneAction));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` actionType: kstandardaction_enums.StandardAction `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn AddAction22(self: ?*anyopaque, actionType: i32, receiver: ?*anyopaque) QtC.QAction {
        return qtc.KActionCollection_AddAction22(@ptrCast(self), @bitCast(actionType), @ptrCast(receiver));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` actionType: kstandardaction_enums.StandardAction `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn AddAction32(self: ?*anyopaque, actionType: i32, receiver: ?*anyopaque, member: [:0]const u8) QtC.QAction {
        const member_Cstring = member.ptr;
        return qtc.KActionCollection_AddAction32(@ptrCast(self), @bitCast(actionType), @ptrCast(receiver), member_Cstring);
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` actionType: kstandardaction_enums.StandardAction `
    ///
    /// ` name: []const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn AddAction33(self: ?*anyopaque, actionType: i32, name: []const u8, receiver: ?*anyopaque) QtC.QAction {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KActionCollection_AddAction33(@ptrCast(self), @bitCast(actionType), name_str, @ptrCast(receiver));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` actionType: kstandardaction_enums.StandardAction `
    ///
    /// ` name: []const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn AddAction42(self: ?*anyopaque, actionType: i32, name: []const u8, receiver: ?*anyopaque, member: [:0]const u8) QtC.QAction {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const member_Cstring = member.ptr;
        return qtc.KActionCollection_AddAction42(@ptrCast(self), @bitCast(actionType), name_str, @ptrCast(receiver), member_Cstring);
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` name: []const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn AddAction23(self: ?*anyopaque, name: []const u8, receiver: ?*anyopaque) QtC.QAction {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KActionCollection_AddAction23(@ptrCast(self), name_str, @ptrCast(receiver));
    }

    /// ### [Upstream resources](https://api.kde.org/kactioncollection.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` name: []const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn AddAction34(self: ?*anyopaque, name: []const u8, receiver: ?*anyopaque, member: [:0]const u8) QtC.QAction {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const member_Cstring = member.ptr;
        return qtc.KActionCollection_AddAction34(@ptrCast(self), name_str, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
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
    /// ` self: QtC.KActionCollection `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` thread: QtC.QThread `
    ///
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: ?*anyopaque, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("kactioncollection.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` filterObj: QtC.QObject `
    ///
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` obj: QtC.QObject `
    ///
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    pub fn Connect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect3(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: QtC.QMetaMethod `
    ///
    pub fn Disconnect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    pub fn Disconnect3(self: ?*anyopaque) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect4(self: ?*anyopaque, receiver: ?*anyopaque) bool {
        return qtc.QObject_Disconnect4(@ptrCast(self), @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect5(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, name: [:0]const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: ?*anyopaque, name: [:0]const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// ` self: QtC.KActionCollection `
    ///
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` callback: *const fn (self: QtC.KActionCollection) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: ?*anyopaque, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: ?*anyopaque, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8, param5: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect5(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring, @bitCast(param5));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect52(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @bitCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @bitCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: ?*anyopaque, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect22(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect22(@ptrCast(self), signal_Cstring, @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: ?*anyopaque, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self), @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` param1: QtC.QObject `
    ///
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` callback: *const fn (self: QtC.KActionCollection, param1: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KActionCollection_Event(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.KActionCollection `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KActionCollection_SuperEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KActionCollection`
    ///
    /// ` callback: *const fn (self: QtC.KActionCollection, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KActionCollection_OnEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KActionCollection_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
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
    /// ` self: QtC.KActionCollection `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KActionCollection_SuperEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KActionCollection`
    ///
    /// ` callback: *const fn (self: QtC.KActionCollection, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KActionCollection_OnEventFilter(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KActionCollection_TimerEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.KActionCollection `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KActionCollection_SuperTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KActionCollection`
    ///
    /// ` callback: *const fn (self: QtC.KActionCollection, event: QtC.QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KActionCollection_OnTimerEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KActionCollection_ChildEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.KActionCollection `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn SuperChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KActionCollection_SuperChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KActionCollection`
    ///
    /// ` callback: *const fn (self: QtC.KActionCollection, event: QtC.QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KActionCollection_OnChildEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KActionCollection_CustomEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.KActionCollection `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KActionCollection_SuperCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KActionCollection`
    ///
    /// ` callback: *const fn (self: QtC.KActionCollection, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KActionCollection_OnCustomEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KActionCollection_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.KActionCollection `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KActionCollection_SuperDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KActionCollection`
    ///
    /// ` callback: *const fn (self: QtC.KActionCollection, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KActionCollection_OnDisconnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.KActionCollection_Sender(@ptrCast(self));
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
    /// ` self: QtC.KActionCollection `
    ///
    pub fn SuperSender(self: ?*anyopaque) QtC.QObject {
        return qtc.KActionCollection_SuperSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KActionCollection`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.KActionCollection_OnSender(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KActionCollection_SenderSignalIndex(@ptrCast(self));
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
    /// ` self: QtC.KActionCollection `
    ///
    pub fn SuperSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KActionCollection_SuperSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KActionCollection`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.KActionCollection_OnSenderSignalIndex(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KActionCollection_Receivers(@ptrCast(self), signal_Cstring);
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
    /// ` self: QtC.KActionCollection `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KActionCollection_SuperReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KActionCollection`
    ///
    /// ` callback: *const fn (self: QtC.KActionCollection, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.KActionCollection_OnReceivers(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KActionCollection_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.KActionCollection `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KActionCollection_SuperIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KActionCollection`
    ///
    /// ` callback: *const fn (self: QtC.KActionCollection, signal: QtC.QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KActionCollection_OnIsSignalConnected(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KActionCollection `
    ///
    /// ` callback: *const fn (self: QtC.KActionCollection, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KActionCollection `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.KActionCollection_Delete(@ptrCast(self));
    }
};
