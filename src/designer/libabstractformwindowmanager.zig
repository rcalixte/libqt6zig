const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const abstractformwindowmanager_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html)
pub const qdesignerformwindowmanagerinterface = struct {
    /// New constructs a new QDesignerFormWindowManagerInterface object.
    ///
    pub fn New() QtC.QDesignerFormWindowManagerInterface {
        return qtc.QDesignerFormWindowManagerInterface_new();
    }

    /// New2 constructs a new QDesignerFormWindowManagerInterface object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn New2(parent: ?*anyopaque) QtC.QDesignerFormWindowManagerInterface {
        return qtc.QDesignerFormWindowManagerInterface_new2(@ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QDesignerFormWindowManagerInterface_MetaObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMetaObject `
    ///
    pub fn OnMetaObject(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMetaObject) void {
        qtc.QDesignerFormWindowManagerInterface_OnMetaObject(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    pub fn SuperMetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QDesignerFormWindowManagerInterface_SuperMetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDesignerFormWindowManagerInterface_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerFormWindowManagerInterface, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QDesignerFormWindowManagerInterface_OnMetacast(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDesignerFormWindowManagerInterface_SuperMetacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDesignerFormWindowManagerInterface_Metacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerFormWindowManagerInterface, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QDesignerFormWindowManagerInterface_OnMetacall(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDesignerFormWindowManagerInterface_SuperMetacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerformwindowmanagerinterface.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#action)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` action: abstractformwindowmanager_enums.Action `
    ///
    pub fn Action(self: ?*anyopaque, action: i32) QtC.QAction {
        return qtc.QDesignerFormWindowManagerInterface_Action(@ptrCast(self), @bitCast(action));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#action)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerFormWindowManagerInterface, action: abstractformwindowmanager_enums.Action) callconv(.c) QtC.QAction `
    ///
    pub fn OnAction(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QAction) void {
        qtc.QDesignerFormWindowManagerInterface_OnAction(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAction` instead
    ///
    pub const QBaseAction = SuperAction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#action)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` action: abstractformwindowmanager_enums.Action `
    ///
    pub fn SuperAction(self: ?*anyopaque, action: i32) QtC.QAction {
        return qtc.QDesignerFormWindowManagerInterface_SuperAction(@ptrCast(self), @bitCast(action));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` actionGroup: abstractformwindowmanager_enums.ActionGroup `
    ///
    pub fn ActionGroup(self: ?*anyopaque, actionGroup: i32) QtC.QActionGroup {
        return qtc.QDesignerFormWindowManagerInterface_ActionGroup(@ptrCast(self), @bitCast(actionGroup));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionGroup)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerFormWindowManagerInterface, actionGroup: abstractformwindowmanager_enums.ActionGroup) callconv(.c) QtC.QActionGroup `
    ///
    pub fn OnActionGroup(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QActionGroup) void {
        qtc.QDesignerFormWindowManagerInterface_OnActionGroup(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperActionGroup` instead
    ///
    pub const QBaseActionGroup = SuperActionGroup;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionGroup)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` actionGroup: abstractformwindowmanager_enums.ActionGroup `
    ///
    pub fn SuperActionGroup(self: ?*anyopaque, actionGroup: i32) QtC.QActionGroup {
        return qtc.QDesignerFormWindowManagerInterface_SuperActionGroup(@ptrCast(self), @bitCast(actionGroup));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionCut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    pub fn ActionCut(self: ?*anyopaque) QtC.QAction {
        return qtc.QDesignerFormWindowManagerInterface_ActionCut(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionCopy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    pub fn ActionCopy(self: ?*anyopaque) QtC.QAction {
        return qtc.QDesignerFormWindowManagerInterface_ActionCopy(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionPaste)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    pub fn ActionPaste(self: ?*anyopaque) QtC.QAction {
        return qtc.QDesignerFormWindowManagerInterface_ActionPaste(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionDelete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    pub fn ActionDelete(self: ?*anyopaque) QtC.QAction {
        return qtc.QDesignerFormWindowManagerInterface_ActionDelete(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionSelectAll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    pub fn ActionSelectAll(self: ?*anyopaque) QtC.QAction {
        return qtc.QDesignerFormWindowManagerInterface_ActionSelectAll(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionLower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    pub fn ActionLower(self: ?*anyopaque) QtC.QAction {
        return qtc.QDesignerFormWindowManagerInterface_ActionLower(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionRaise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    pub fn ActionRaise(self: ?*anyopaque) QtC.QAction {
        return qtc.QDesignerFormWindowManagerInterface_ActionRaise(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionUndo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    pub fn ActionUndo(self: ?*anyopaque) QtC.QAction {
        return qtc.QDesignerFormWindowManagerInterface_ActionUndo(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionRedo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    pub fn ActionRedo(self: ?*anyopaque) QtC.QAction {
        return qtc.QDesignerFormWindowManagerInterface_ActionRedo(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionHorizontalLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    pub fn ActionHorizontalLayout(self: ?*anyopaque) QtC.QAction {
        return qtc.QDesignerFormWindowManagerInterface_ActionHorizontalLayout(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionVerticalLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    pub fn ActionVerticalLayout(self: ?*anyopaque) QtC.QAction {
        return qtc.QDesignerFormWindowManagerInterface_ActionVerticalLayout(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionSplitHorizontal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    pub fn ActionSplitHorizontal(self: ?*anyopaque) QtC.QAction {
        return qtc.QDesignerFormWindowManagerInterface_ActionSplitHorizontal(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionSplitVertical)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    pub fn ActionSplitVertical(self: ?*anyopaque) QtC.QAction {
        return qtc.QDesignerFormWindowManagerInterface_ActionSplitVertical(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionGridLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    pub fn ActionGridLayout(self: ?*anyopaque) QtC.QAction {
        return qtc.QDesignerFormWindowManagerInterface_ActionGridLayout(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionFormLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    pub fn ActionFormLayout(self: ?*anyopaque) QtC.QAction {
        return qtc.QDesignerFormWindowManagerInterface_ActionFormLayout(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionBreakLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    pub fn ActionBreakLayout(self: ?*anyopaque) QtC.QAction {
        return qtc.QDesignerFormWindowManagerInterface_ActionBreakLayout(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionAdjustSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    pub fn ActionAdjustSize(self: ?*anyopaque) QtC.QAction {
        return qtc.QDesignerFormWindowManagerInterface_ActionAdjustSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionSimplifyLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    pub fn ActionSimplifyLayout(self: ?*anyopaque) QtC.QAction {
        return qtc.QDesignerFormWindowManagerInterface_ActionSimplifyLayout(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#activeFormWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    pub fn ActiveFormWindow(self: ?*anyopaque) QtC.QDesignerFormWindowInterface {
        return qtc.QDesignerFormWindowManagerInterface_ActiveFormWindow(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#activeFormWindow)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QDesignerFormWindowInterface `
    ///
    pub fn OnActiveFormWindow(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QDesignerFormWindowInterface) void {
        qtc.QDesignerFormWindowManagerInterface_OnActiveFormWindow(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperActiveFormWindow` instead
    ///
    pub const QBaseActiveFormWindow = SuperActiveFormWindow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#activeFormWindow)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    pub fn SuperActiveFormWindow(self: ?*anyopaque) QtC.QDesignerFormWindowInterface {
        return qtc.QDesignerFormWindowManagerInterface_SuperActiveFormWindow(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#formWindowCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    pub fn FormWindowCount(self: ?*anyopaque) i32 {
        return qtc.QDesignerFormWindowManagerInterface_FormWindowCount(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#formWindowCount)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnFormWindowCount(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QDesignerFormWindowManagerInterface_OnFormWindowCount(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperFormWindowCount` instead
    ///
    pub const QBaseFormWindowCount = SuperFormWindowCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#formWindowCount)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    pub fn SuperFormWindowCount(self: ?*anyopaque) i32 {
        return qtc.QDesignerFormWindowManagerInterface_SuperFormWindowCount(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#formWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` index: i32 `
    ///
    pub fn FormWindow(self: ?*anyopaque, index: i32) QtC.QDesignerFormWindowInterface {
        return qtc.QDesignerFormWindowManagerInterface_FormWindow(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#formWindow)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerFormWindowManagerInterface, index: i32) callconv(.c) QtC.QDesignerFormWindowInterface `
    ///
    pub fn OnFormWindow(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QDesignerFormWindowInterface) void {
        qtc.QDesignerFormWindowManagerInterface_OnFormWindow(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperFormWindow` instead
    ///
    pub const QBaseFormWindow = SuperFormWindow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#formWindow)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperFormWindow(self: ?*anyopaque, index: i32) QtC.QDesignerFormWindowInterface {
        return qtc.QDesignerFormWindowManagerInterface_SuperFormWindow(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#createFormWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` parentWidget: QtC.QWidget `
    ///
    /// ` flags: flag of qnamespace_enums.WindowType `
    ///
    pub fn CreateFormWindow(self: ?*anyopaque, parentWidget: ?*anyopaque, flags: i32) QtC.QDesignerFormWindowInterface {
        return qtc.QDesignerFormWindowManagerInterface_CreateFormWindow(@ptrCast(self), @ptrCast(parentWidget), @bitCast(flags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#createFormWindow)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerFormWindowManagerInterface, parentWidget: QtC.QWidget, flags: flag of qnamespace_enums.WindowType) callconv(.c) QtC.QDesignerFormWindowInterface `
    ///
    pub fn OnCreateFormWindow(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) QtC.QDesignerFormWindowInterface) void {
        qtc.QDesignerFormWindowManagerInterface_OnCreateFormWindow(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCreateFormWindow` instead
    ///
    pub const QBaseCreateFormWindow = SuperCreateFormWindow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#createFormWindow)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` parentWidget: QtC.QWidget `
    ///
    /// ` flags: flag of qnamespace_enums.WindowType `
    ///
    pub fn SuperCreateFormWindow(self: ?*anyopaque, parentWidget: ?*anyopaque, flags: i32) QtC.QDesignerFormWindowInterface {
        return qtc.QDesignerFormWindowManagerInterface_SuperCreateFormWindow(@ptrCast(self), @ptrCast(parentWidget), @bitCast(flags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#core)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    pub fn Core(self: ?*anyopaque) QtC.QDesignerFormEditorInterface {
        return qtc.QDesignerFormWindowManagerInterface_Core(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#core)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QDesignerFormEditorInterface `
    ///
    pub fn OnCore(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QDesignerFormEditorInterface) void {
        qtc.QDesignerFormWindowManagerInterface_OnCore(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCore` instead
    ///
    pub const QBaseCore = SuperCore;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#core)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    pub fn SuperCore(self: ?*anyopaque) QtC.QDesignerFormEditorInterface {
        return qtc.QDesignerFormWindowManagerInterface_SuperCore(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#dragItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` item_list: []QtC.QDesignerDnDItemInterface `
    ///
    pub fn DragItems(self: ?*anyopaque, item_list: []?*anyopaque) void {
        const item_list_list = qtc.libqt_list{
            .len = item_list.len,
            .data = @ptrCast(item_list.ptr),
        };
        qtc.QDesignerFormWindowManagerInterface_DragItems(@ptrCast(self), item_list_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#dragItems)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerFormWindowManagerInterface, item_list: qtc.libqt_list ([]QtC.QDesignerDnDItemInterface)) callconv(.c) void `
    ///
    pub fn OnDragItems(self: ?*anyopaque, callback: *const fn (?*anyopaque, qtc.libqt_list) callconv(.c) void) void {
        qtc.QDesignerFormWindowManagerInterface_OnDragItems(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDragItems` instead
    ///
    pub const QBaseDragItems = SuperDragItems;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#dragItems)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` item_list: []QtC.QDesignerDnDItemInterface `
    ///
    pub fn SuperDragItems(self: ?*anyopaque, item_list: []?*anyopaque) void {
        const item_list_list = qtc.libqt_list{
            .len = item_list.len,
            .data = @ptrCast(item_list.ptr),
        };
        qtc.QDesignerFormWindowManagerInterface_SuperDragItems(@ptrCast(self), item_list_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#createPreviewPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    pub fn CreatePreviewPixmap(self: ?*anyopaque) QtC.QPixmap {
        return qtc.QDesignerFormWindowManagerInterface_CreatePreviewPixmap(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#createPreviewPixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QPixmap `
    ///
    pub fn OnCreatePreviewPixmap(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QPixmap) void {
        qtc.QDesignerFormWindowManagerInterface_OnCreatePreviewPixmap(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCreatePreviewPixmap` instead
    ///
    pub const QBaseCreatePreviewPixmap = SuperCreatePreviewPixmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#createPreviewPixmap)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    pub fn SuperCreatePreviewPixmap(self: ?*anyopaque) QtC.QPixmap {
        return qtc.QDesignerFormWindowManagerInterface_SuperCreatePreviewPixmap(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#formWindowAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` formWindow: QtC.QDesignerFormWindowInterface `
    ///
    pub fn FormWindowAdded(self: ?*anyopaque, formWindow: ?*anyopaque) void {
        qtc.QDesignerFormWindowManagerInterface_FormWindowAdded(@ptrCast(self), @ptrCast(formWindow));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#formWindowAdded)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerFormWindowManagerInterface, formWindow: QtC.QDesignerFormWindowInterface) callconv(.c) void `
    ///
    pub fn OnFormWindowAdded(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDesignerFormWindowManagerInterface_Connect_FormWindowAdded(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#formWindowRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` formWindow: QtC.QDesignerFormWindowInterface `
    ///
    pub fn FormWindowRemoved(self: ?*anyopaque, formWindow: ?*anyopaque) void {
        qtc.QDesignerFormWindowManagerInterface_FormWindowRemoved(@ptrCast(self), @ptrCast(formWindow));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#formWindowRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerFormWindowManagerInterface, formWindow: QtC.QDesignerFormWindowInterface) callconv(.c) void `
    ///
    pub fn OnFormWindowRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDesignerFormWindowManagerInterface_Connect_FormWindowRemoved(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#activeFormWindowChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` formWindow: QtC.QDesignerFormWindowInterface `
    ///
    pub fn ActiveFormWindowChanged(self: ?*anyopaque, formWindow: ?*anyopaque) void {
        qtc.QDesignerFormWindowManagerInterface_ActiveFormWindowChanged(@ptrCast(self), @ptrCast(formWindow));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#activeFormWindowChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerFormWindowManagerInterface, formWindow: QtC.QDesignerFormWindowInterface) callconv(.c) void `
    ///
    pub fn OnActiveFormWindowChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDesignerFormWindowManagerInterface_Connect_ActiveFormWindowChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#formWindowSettingsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` fw: QtC.QDesignerFormWindowInterface `
    ///
    pub fn FormWindowSettingsChanged(self: ?*anyopaque, fw: ?*anyopaque) void {
        qtc.QDesignerFormWindowManagerInterface_FormWindowSettingsChanged(@ptrCast(self), @ptrCast(fw));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#formWindowSettingsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerFormWindowManagerInterface, fw: QtC.QDesignerFormWindowInterface) callconv(.c) void `
    ///
    pub fn OnFormWindowSettingsChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDesignerFormWindowManagerInterface_Connect_FormWindowSettingsChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#addFormWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` formWindow: QtC.QDesignerFormWindowInterface `
    ///
    pub fn AddFormWindow(self: ?*anyopaque, formWindow: ?*anyopaque) void {
        qtc.QDesignerFormWindowManagerInterface_AddFormWindow(@ptrCast(self), @ptrCast(formWindow));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#addFormWindow)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerFormWindowManagerInterface, formWindow: QtC.QDesignerFormWindowInterface) callconv(.c) void `
    ///
    pub fn OnAddFormWindow(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDesignerFormWindowManagerInterface_OnAddFormWindow(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAddFormWindow` instead
    ///
    pub const QBaseAddFormWindow = SuperAddFormWindow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#addFormWindow)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` formWindow: QtC.QDesignerFormWindowInterface `
    ///
    pub fn SuperAddFormWindow(self: ?*anyopaque, formWindow: ?*anyopaque) void {
        qtc.QDesignerFormWindowManagerInterface_SuperAddFormWindow(@ptrCast(self), @ptrCast(formWindow));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#removeFormWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` formWindow: QtC.QDesignerFormWindowInterface `
    ///
    pub fn RemoveFormWindow(self: ?*anyopaque, formWindow: ?*anyopaque) void {
        qtc.QDesignerFormWindowManagerInterface_RemoveFormWindow(@ptrCast(self), @ptrCast(formWindow));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#removeFormWindow)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerFormWindowManagerInterface, formWindow: QtC.QDesignerFormWindowInterface) callconv(.c) void `
    ///
    pub fn OnRemoveFormWindow(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDesignerFormWindowManagerInterface_OnRemoveFormWindow(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRemoveFormWindow` instead
    ///
    pub const QBaseRemoveFormWindow = SuperRemoveFormWindow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#removeFormWindow)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` formWindow: QtC.QDesignerFormWindowInterface `
    ///
    pub fn SuperRemoveFormWindow(self: ?*anyopaque, formWindow: ?*anyopaque) void {
        qtc.QDesignerFormWindowManagerInterface_SuperRemoveFormWindow(@ptrCast(self), @ptrCast(formWindow));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#setActiveFormWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` formWindow: QtC.QDesignerFormWindowInterface `
    ///
    pub fn SetActiveFormWindow(self: ?*anyopaque, formWindow: ?*anyopaque) void {
        qtc.QDesignerFormWindowManagerInterface_SetActiveFormWindow(@ptrCast(self), @ptrCast(formWindow));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#setActiveFormWindow)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerFormWindowManagerInterface, formWindow: QtC.QDesignerFormWindowInterface) callconv(.c) void `
    ///
    pub fn OnSetActiveFormWindow(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDesignerFormWindowManagerInterface_OnSetActiveFormWindow(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetActiveFormWindow` instead
    ///
    pub const QBaseSetActiveFormWindow = SuperSetActiveFormWindow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#setActiveFormWindow)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` formWindow: QtC.QDesignerFormWindowInterface `
    ///
    pub fn SuperSetActiveFormWindow(self: ?*anyopaque, formWindow: ?*anyopaque) void {
        qtc.QDesignerFormWindowManagerInterface_SuperSetActiveFormWindow(@ptrCast(self), @ptrCast(formWindow));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#showPreview)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    pub fn ShowPreview(self: ?*anyopaque) void {
        qtc.QDesignerFormWindowManagerInterface_ShowPreview(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#showPreview)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnShowPreview(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QDesignerFormWindowManagerInterface_OnShowPreview(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperShowPreview` instead
    ///
    pub const QBaseShowPreview = SuperShowPreview;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#showPreview)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    pub fn SuperShowPreview(self: ?*anyopaque) void {
        qtc.QDesignerFormWindowManagerInterface_SuperShowPreview(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#closeAllPreviews)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    pub fn CloseAllPreviews(self: ?*anyopaque) void {
        qtc.QDesignerFormWindowManagerInterface_CloseAllPreviews(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#closeAllPreviews)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnCloseAllPreviews(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QDesignerFormWindowManagerInterface_OnCloseAllPreviews(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCloseAllPreviews` instead
    ///
    pub const QBaseCloseAllPreviews = SuperCloseAllPreviews;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#closeAllPreviews)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    pub fn SuperCloseAllPreviews(self: ?*anyopaque) void {
        qtc.QDesignerFormWindowManagerInterface_SuperCloseAllPreviews(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#showPluginDialog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    pub fn ShowPluginDialog(self: ?*anyopaque) void {
        qtc.QDesignerFormWindowManagerInterface_ShowPluginDialog(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#showPluginDialog)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnShowPluginDialog(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QDesignerFormWindowManagerInterface_OnShowPluginDialog(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperShowPluginDialog` instead
    ///
    pub const QBaseShowPluginDialog = SuperShowPluginDialog;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#showPluginDialog)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    pub fn SuperShowPluginDialog(self: ?*anyopaque) void {
        qtc.QDesignerFormWindowManagerInterface_SuperShowPluginDialog(@ptrCast(self));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerformwindowmanagerinterface.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerformwindowmanagerinterface.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerformwindowmanagerinterface.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
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
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
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
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
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
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
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
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
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
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
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
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
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
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
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
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
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
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
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
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
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
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
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
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qdesignerformwindowmanagerinterface.Children: Memory allocation failed");
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
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
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
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
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
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
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
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
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
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
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
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
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
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
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
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
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
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
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
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
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
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
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
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qdesignerformwindowmanagerinterface.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qdesignerformwindowmanagerinterface.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
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
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
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
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
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
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerFormWindowManagerInterface) callconv(.c) void `
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
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
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
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
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
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
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
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
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
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
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
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
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
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
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
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
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
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
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
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
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
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
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
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerFormWindowManagerInterface, param1: QtC.QObject) callconv(.c) void `
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
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QDesignerFormWindowManagerInterface_Event(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QDesignerFormWindowManagerInterface_SuperEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface`
    ///
    /// ` callback: *const fn (self: QtC.QDesignerFormWindowManagerInterface, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QDesignerFormWindowManagerInterface_OnEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QDesignerFormWindowManagerInterface_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
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
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QDesignerFormWindowManagerInterface_SuperEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface`
    ///
    /// ` callback: *const fn (self: QtC.QDesignerFormWindowManagerInterface, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QDesignerFormWindowManagerInterface_OnEventFilter(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDesignerFormWindowManagerInterface_TimerEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDesignerFormWindowManagerInterface_SuperTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface`
    ///
    /// ` callback: *const fn (self: QtC.QDesignerFormWindowManagerInterface, event: QtC.QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDesignerFormWindowManagerInterface_OnTimerEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDesignerFormWindowManagerInterface_ChildEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn SuperChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDesignerFormWindowManagerInterface_SuperChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface`
    ///
    /// ` callback: *const fn (self: QtC.QDesignerFormWindowManagerInterface, event: QtC.QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDesignerFormWindowManagerInterface_OnChildEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDesignerFormWindowManagerInterface_CustomEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDesignerFormWindowManagerInterface_SuperCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface`
    ///
    /// ` callback: *const fn (self: QtC.QDesignerFormWindowManagerInterface, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDesignerFormWindowManagerInterface_OnCustomEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QDesignerFormWindowManagerInterface_ConnectNotify(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QDesignerFormWindowManagerInterface_SuperConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface`
    ///
    /// ` callback: *const fn (self: QtC.QDesignerFormWindowManagerInterface, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDesignerFormWindowManagerInterface_OnConnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QDesignerFormWindowManagerInterface_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QDesignerFormWindowManagerInterface_SuperDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface`
    ///
    /// ` callback: *const fn (self: QtC.QDesignerFormWindowManagerInterface, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDesignerFormWindowManagerInterface_OnDisconnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QDesignerFormWindowManagerInterface_Sender(@ptrCast(self));
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
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    pub fn SuperSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QDesignerFormWindowManagerInterface_SuperSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QDesignerFormWindowManagerInterface_OnSender(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QDesignerFormWindowManagerInterface_SenderSignalIndex(@ptrCast(self));
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
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    pub fn SuperSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QDesignerFormWindowManagerInterface_SuperSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QDesignerFormWindowManagerInterface_OnSenderSignalIndex(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDesignerFormWindowManagerInterface_Receivers(@ptrCast(self), signal_Cstring);
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
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDesignerFormWindowManagerInterface_SuperReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface`
    ///
    /// ` callback: *const fn (self: QtC.QDesignerFormWindowManagerInterface, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QDesignerFormWindowManagerInterface_OnReceivers(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QDesignerFormWindowManagerInterface_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QDesignerFormWindowManagerInterface_SuperIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface`
    ///
    /// ` callback: *const fn (self: QtC.QDesignerFormWindowManagerInterface, signal: QtC.QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QDesignerFormWindowManagerInterface_OnIsSignalConnected(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerFormWindowManagerInterface, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#dtor.QDesignerFormWindowManagerInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QDesignerFormWindowManagerInterface `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QDesignerFormWindowManagerInterface_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/abstractformwindowmanager.html#public-types)
pub const enums = struct {
    pub const Action = enum(i32) {
        pub const CutAction: i32 = 100;
        pub const CopyAction: i32 = 101;
        pub const PasteAction: i32 = 102;
        pub const DeleteAction: i32 = 103;
        pub const SelectAllAction: i32 = 104;
        pub const LowerAction: i32 = 200;
        pub const RaiseAction: i32 = 201;
        pub const UndoAction: i32 = 300;
        pub const RedoAction: i32 = 301;
        pub const HorizontalLayoutAction: i32 = 400;
        pub const VerticalLayoutAction: i32 = 401;
        pub const SplitHorizontalAction: i32 = 402;
        pub const SplitVerticalAction: i32 = 403;
        pub const GridLayoutAction: i32 = 404;
        pub const FormLayoutAction: i32 = 405;
        pub const BreakLayoutAction: i32 = 406;
        pub const AdjustSizeAction: i32 = 407;
        pub const SimplifyLayoutAction: i32 = 408;
        pub const DefaultPreviewAction: i32 = 500;
        pub const FormWindowSettingsDialogAction: i32 = 600;
    };

    pub const ActionGroup = enum(i32) {
        pub const StyledPreviewActionGroup: i32 = 100;
    };
};
