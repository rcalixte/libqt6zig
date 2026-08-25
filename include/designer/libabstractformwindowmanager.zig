const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAction = @import("libqt6").QAction;
const QActionGroup = @import("libqt6").QActionGroup;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QDesignerDnDItemInterface = @import("libqt6").QDesignerDnDItemInterface;
const QDesignerFormEditorInterface = @import("libqt6").QDesignerFormEditorInterface;
const QDesignerFormWindowInterface = @import("libqt6").QDesignerFormWindowInterface;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPixmap = @import("libqt6").QPixmap;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const QWidget = @import("libqt6").QWidget;
const abstractformwindowmanager_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html)
pub const QDesignerFormWindowManagerInterface = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDesignerFormWindowManagerInterface,

    pub const _is_QDesignerFormWindowManagerInterface = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDesignerFormWindowManagerInterface object in C++ memory
    ///
    pub fn new() QDesignerFormWindowManagerInterface {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDesignerFormWindowManagerInterface object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QDesignerFormWindowManagerInterface {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn metaObject(self: QDesignerFormWindowManagerInterface) QMetaObject {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QDesignerFormWindowManagerInterface, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QDesignerFormWindowManagerInterface_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn superMetaObject(self: QDesignerFormWindowManagerInterface) QMetaObject {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QDesignerFormWindowManagerInterface, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDesignerFormWindowManagerInterface_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowManagerInterface, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QDesignerFormWindowManagerInterface, callback: *const fn (QDesignerFormWindowManagerInterface, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QDesignerFormWindowManagerInterface_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QDesignerFormWindowManagerInterface, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDesignerFormWindowManagerInterface_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QDesignerFormWindowManagerInterface, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDesignerFormWindowManagerInterface_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowManagerInterface, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QDesignerFormWindowManagerInterface, callback: *const fn (QDesignerFormWindowManagerInterface, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QDesignerFormWindowManagerInterface_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QDesignerFormWindowManagerInterface, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDesignerFormWindowManagerInterface_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerFormWindowManagerInterface.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `action` instead
    ///
    pub const Action = action;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#action)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` _action: abstractformwindowmanager_enums.Action `
    ///
    pub fn action(self: QDesignerFormWindowManagerInterface, _action: i32) QAction {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_Action(@ptrCast(self.ptr), @bitCast(_action)) };
    }

    /// ### DEPRECATED: Use `onAction` instead
    ///
    pub const OnAction = onAction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#action)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowManagerInterface, action: abstractformwindowmanager_enums.Action) callconv(.c) QAction `
    ///
    pub fn onAction(self: QDesignerFormWindowManagerInterface, callback: *const fn (QDesignerFormWindowManagerInterface, i32) callconv(.c) QAction) void {
        qtc.QDesignerFormWindowManagerInterface_OnAction(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superAction` instead
    ///
    pub const SuperAction = superAction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#action)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` _action: abstractformwindowmanager_enums.Action `
    ///
    pub fn superAction(self: QDesignerFormWindowManagerInterface, _action: i32) QAction {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_SuperAction(@ptrCast(self.ptr), @bitCast(_action)) };
    }

    /// ### DEPRECATED: Use `actionGroup` instead
    ///
    pub const ActionGroup = actionGroup;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` _actionGroup: abstractformwindowmanager_enums.ActionGroup `
    ///
    pub fn actionGroup(self: QDesignerFormWindowManagerInterface, _actionGroup: i32) QActionGroup {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_ActionGroup(@ptrCast(self.ptr), @bitCast(_actionGroup)) };
    }

    /// ### DEPRECATED: Use `onActionGroup` instead
    ///
    pub const OnActionGroup = onActionGroup;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionGroup)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowManagerInterface, actionGroup: abstractformwindowmanager_enums.ActionGroup) callconv(.c) QActionGroup `
    ///
    pub fn onActionGroup(self: QDesignerFormWindowManagerInterface, callback: *const fn (QDesignerFormWindowManagerInterface, i32) callconv(.c) QActionGroup) void {
        qtc.QDesignerFormWindowManagerInterface_OnActionGroup(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superActionGroup` instead
    ///
    pub const SuperActionGroup = superActionGroup;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionGroup)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` _actionGroup: abstractformwindowmanager_enums.ActionGroup `
    ///
    pub fn superActionGroup(self: QDesignerFormWindowManagerInterface, _actionGroup: i32) QActionGroup {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_SuperActionGroup(@ptrCast(self.ptr), @bitCast(_actionGroup)) };
    }

    /// ### DEPRECATED: Use `actionCut` instead
    ///
    pub const ActionCut = actionCut;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionCut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn actionCut(self: QDesignerFormWindowManagerInterface) QAction {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_ActionCut(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `actionCopy` instead
    ///
    pub const ActionCopy = actionCopy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionCopy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn actionCopy(self: QDesignerFormWindowManagerInterface) QAction {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_ActionCopy(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `actionPaste` instead
    ///
    pub const ActionPaste = actionPaste;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionPaste)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn actionPaste(self: QDesignerFormWindowManagerInterface) QAction {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_ActionPaste(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `actionDelete` instead
    ///
    pub const ActionDelete = actionDelete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionDelete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn actionDelete(self: QDesignerFormWindowManagerInterface) QAction {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_ActionDelete(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `actionSelectAll` instead
    ///
    pub const ActionSelectAll = actionSelectAll;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionSelectAll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn actionSelectAll(self: QDesignerFormWindowManagerInterface) QAction {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_ActionSelectAll(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `actionLower` instead
    ///
    pub const ActionLower = actionLower;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionLower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn actionLower(self: QDesignerFormWindowManagerInterface) QAction {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_ActionLower(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `actionRaise` instead
    ///
    pub const ActionRaise = actionRaise;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionRaise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn actionRaise(self: QDesignerFormWindowManagerInterface) QAction {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_ActionRaise(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `actionUndo` instead
    ///
    pub const ActionUndo = actionUndo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionUndo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn actionUndo(self: QDesignerFormWindowManagerInterface) QAction {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_ActionUndo(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `actionRedo` instead
    ///
    pub const ActionRedo = actionRedo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionRedo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn actionRedo(self: QDesignerFormWindowManagerInterface) QAction {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_ActionRedo(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `actionHorizontalLayout` instead
    ///
    pub const ActionHorizontalLayout = actionHorizontalLayout;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionHorizontalLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn actionHorizontalLayout(self: QDesignerFormWindowManagerInterface) QAction {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_ActionHorizontalLayout(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `actionVerticalLayout` instead
    ///
    pub const ActionVerticalLayout = actionVerticalLayout;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionVerticalLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn actionVerticalLayout(self: QDesignerFormWindowManagerInterface) QAction {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_ActionVerticalLayout(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `actionSplitHorizontal` instead
    ///
    pub const ActionSplitHorizontal = actionSplitHorizontal;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionSplitHorizontal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn actionSplitHorizontal(self: QDesignerFormWindowManagerInterface) QAction {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_ActionSplitHorizontal(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `actionSplitVertical` instead
    ///
    pub const ActionSplitVertical = actionSplitVertical;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionSplitVertical)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn actionSplitVertical(self: QDesignerFormWindowManagerInterface) QAction {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_ActionSplitVertical(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `actionGridLayout` instead
    ///
    pub const ActionGridLayout = actionGridLayout;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionGridLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn actionGridLayout(self: QDesignerFormWindowManagerInterface) QAction {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_ActionGridLayout(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `actionFormLayout` instead
    ///
    pub const ActionFormLayout = actionFormLayout;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionFormLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn actionFormLayout(self: QDesignerFormWindowManagerInterface) QAction {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_ActionFormLayout(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `actionBreakLayout` instead
    ///
    pub const ActionBreakLayout = actionBreakLayout;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionBreakLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn actionBreakLayout(self: QDesignerFormWindowManagerInterface) QAction {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_ActionBreakLayout(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `actionAdjustSize` instead
    ///
    pub const ActionAdjustSize = actionAdjustSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionAdjustSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn actionAdjustSize(self: QDesignerFormWindowManagerInterface) QAction {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_ActionAdjustSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `actionSimplifyLayout` instead
    ///
    pub const ActionSimplifyLayout = actionSimplifyLayout;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionSimplifyLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn actionSimplifyLayout(self: QDesignerFormWindowManagerInterface) QAction {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_ActionSimplifyLayout(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `activeFormWindow` instead
    ///
    pub const ActiveFormWindow = activeFormWindow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#activeFormWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn activeFormWindow(self: QDesignerFormWindowManagerInterface) QDesignerFormWindowInterface {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_ActiveFormWindow(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onActiveFormWindow` instead
    ///
    pub const OnActiveFormWindow = onActiveFormWindow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#activeFormWindow)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` callback: *const fn () callconv(.c) QDesignerFormWindowInterface `
    ///
    pub fn onActiveFormWindow(self: QDesignerFormWindowManagerInterface, callback: *const fn () callconv(.c) QDesignerFormWindowInterface) void {
        qtc.QDesignerFormWindowManagerInterface_OnActiveFormWindow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superActiveFormWindow` instead
    ///
    pub const SuperActiveFormWindow = superActiveFormWindow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#activeFormWindow)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn superActiveFormWindow(self: QDesignerFormWindowManagerInterface) QDesignerFormWindowInterface {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_SuperActiveFormWindow(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `formWindowCount` instead
    ///
    pub const FormWindowCount = formWindowCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#formWindowCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn formWindowCount(self: QDesignerFormWindowManagerInterface) i32 {
        return qtc.QDesignerFormWindowManagerInterface_FormWindowCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onFormWindowCount` instead
    ///
    pub const OnFormWindowCount = onFormWindowCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#formWindowCount)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onFormWindowCount(self: QDesignerFormWindowManagerInterface, callback: *const fn () callconv(.c) i32) void {
        qtc.QDesignerFormWindowManagerInterface_OnFormWindowCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superFormWindowCount` instead
    ///
    pub const SuperFormWindowCount = superFormWindowCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#formWindowCount)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn superFormWindowCount(self: QDesignerFormWindowManagerInterface) i32 {
        return qtc.QDesignerFormWindowManagerInterface_SuperFormWindowCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `formWindow` instead
    ///
    pub const FormWindow = formWindow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#formWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` index: i32 `
    ///
    pub fn formWindow(self: QDesignerFormWindowManagerInterface, index: i32) QDesignerFormWindowInterface {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_FormWindow(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `onFormWindow` instead
    ///
    pub const OnFormWindow = onFormWindow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#formWindow)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowManagerInterface, index: i32) callconv(.c) QDesignerFormWindowInterface `
    ///
    pub fn onFormWindow(self: QDesignerFormWindowManagerInterface, callback: *const fn (QDesignerFormWindowManagerInterface, i32) callconv(.c) QDesignerFormWindowInterface) void {
        qtc.QDesignerFormWindowManagerInterface_OnFormWindow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superFormWindow` instead
    ///
    pub const SuperFormWindow = superFormWindow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#formWindow)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` index: i32 `
    ///
    pub fn superFormWindow(self: QDesignerFormWindowManagerInterface, index: i32) QDesignerFormWindowInterface {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_SuperFormWindow(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `createFormWindow` instead
    ///
    pub const CreateFormWindow = createFormWindow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#createFormWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` parentWidget: QWidget `
    ///
    /// ` flags: flag of qnamespace_enums.WindowType `
    ///
    pub fn createFormWindow(self: QDesignerFormWindowManagerInterface, parentWidget: anytype, flags: i32) QDesignerFormWindowInterface {
        comptime _ = @TypeOf(parentWidget)._is_QWidget;
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_CreateFormWindow(@ptrCast(self.ptr), @ptrCast(parentWidget.ptr), @bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `onCreateFormWindow` instead
    ///
    pub const OnCreateFormWindow = onCreateFormWindow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#createFormWindow)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowManagerInterface, parentWidget: QWidget, flags: flag of qnamespace_enums.WindowType) callconv(.c) QDesignerFormWindowInterface `
    ///
    pub fn onCreateFormWindow(self: QDesignerFormWindowManagerInterface, callback: *const fn (QDesignerFormWindowManagerInterface, QWidget, i32) callconv(.c) QDesignerFormWindowInterface) void {
        qtc.QDesignerFormWindowManagerInterface_OnCreateFormWindow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCreateFormWindow` instead
    ///
    pub const SuperCreateFormWindow = superCreateFormWindow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#createFormWindow)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` parentWidget: QWidget `
    ///
    /// ` flags: flag of qnamespace_enums.WindowType `
    ///
    pub fn superCreateFormWindow(self: QDesignerFormWindowManagerInterface, parentWidget: anytype, flags: i32) QDesignerFormWindowInterface {
        comptime _ = @TypeOf(parentWidget)._is_QWidget;
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_SuperCreateFormWindow(@ptrCast(self.ptr), @ptrCast(parentWidget.ptr), @bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `core` instead
    ///
    pub const Core = core;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#core)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn core(self: QDesignerFormWindowManagerInterface) QDesignerFormEditorInterface {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_Core(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onCore` instead
    ///
    pub const OnCore = onCore;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#core)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` callback: *const fn () callconv(.c) QDesignerFormEditorInterface `
    ///
    pub fn onCore(self: QDesignerFormWindowManagerInterface, callback: *const fn () callconv(.c) QDesignerFormEditorInterface) void {
        qtc.QDesignerFormWindowManagerInterface_OnCore(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCore` instead
    ///
    pub const SuperCore = superCore;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#core)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn superCore(self: QDesignerFormWindowManagerInterface) QDesignerFormEditorInterface {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_SuperCore(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `dragItems` instead
    ///
    pub const DragItems = dragItems;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#dragItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` item_list: []QDesignerDnDItemInterface `
    ///
    pub fn dragItems(self: QDesignerFormWindowManagerInterface, item_list: []QDesignerDnDItemInterface) void {
        const item_list_list = qtc.libqt_list{
            .len = item_list.len,
            .data = @ptrCast(item_list.ptr),
        };
        qtc.QDesignerFormWindowManagerInterface_DragItems(@ptrCast(self.ptr), item_list_list);
    }

    /// ### DEPRECATED: Use `onDragItems` instead
    ///
    pub const OnDragItems = onDragItems;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#dragItems)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowManagerInterface, item_list: qtc.libqt_list ([]QDesignerDnDItemInterface)) callconv(.c) void `
    ///
    pub fn onDragItems(self: QDesignerFormWindowManagerInterface, callback: *const fn (QDesignerFormWindowManagerInterface, qtc.libqt_list) callconv(.c) void) void {
        qtc.QDesignerFormWindowManagerInterface_OnDragItems(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDragItems` instead
    ///
    pub const SuperDragItems = superDragItems;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#dragItems)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` item_list: []QDesignerDnDItemInterface `
    ///
    pub fn superDragItems(self: QDesignerFormWindowManagerInterface, item_list: []QDesignerDnDItemInterface) void {
        const item_list_list = qtc.libqt_list{
            .len = item_list.len,
            .data = @ptrCast(item_list.ptr),
        };
        qtc.QDesignerFormWindowManagerInterface_SuperDragItems(@ptrCast(self.ptr), item_list_list);
    }

    /// ### DEPRECATED: Use `createPreviewPixmap` instead
    ///
    pub const CreatePreviewPixmap = createPreviewPixmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#createPreviewPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn createPreviewPixmap(self: QDesignerFormWindowManagerInterface) QPixmap {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_CreatePreviewPixmap(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onCreatePreviewPixmap` instead
    ///
    pub const OnCreatePreviewPixmap = onCreatePreviewPixmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#createPreviewPixmap)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` callback: *const fn () callconv(.c) QPixmap `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onCreatePreviewPixmap(self: QDesignerFormWindowManagerInterface, callback: *const fn () callconv(.c) QPixmap) void {
        qtc.QDesignerFormWindowManagerInterface_OnCreatePreviewPixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCreatePreviewPixmap` instead
    ///
    pub const SuperCreatePreviewPixmap = superCreatePreviewPixmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#createPreviewPixmap)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn superCreatePreviewPixmap(self: QDesignerFormWindowManagerInterface) QPixmap {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_SuperCreatePreviewPixmap(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `formWindowAdded` instead
    ///
    pub const FormWindowAdded = formWindowAdded;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#formWindowAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` _formWindow: QDesignerFormWindowInterface `
    ///
    pub fn formWindowAdded(self: QDesignerFormWindowManagerInterface, _formWindow: anytype) void {
        comptime _ = @TypeOf(_formWindow)._is_QDesignerFormWindowInterface;
        qtc.QDesignerFormWindowManagerInterface_FormWindowAdded(@ptrCast(self.ptr), @ptrCast(_formWindow.ptr));
    }

    /// ### DEPRECATED: Use `onFormWindowAdded` instead
    ///
    pub const OnFormWindowAdded = onFormWindowAdded;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#formWindowAdded)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowManagerInterface, formWindow: QDesignerFormWindowInterface) callconv(.c) void `
    ///
    pub fn onFormWindowAdded(self: QDesignerFormWindowManagerInterface, callback: *const fn (QDesignerFormWindowManagerInterface, QDesignerFormWindowInterface) callconv(.c) void) void {
        qtc.QDesignerFormWindowManagerInterface_Connect_FormWindowAdded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `formWindowRemoved` instead
    ///
    pub const FormWindowRemoved = formWindowRemoved;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#formWindowRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` _formWindow: QDesignerFormWindowInterface `
    ///
    pub fn formWindowRemoved(self: QDesignerFormWindowManagerInterface, _formWindow: anytype) void {
        comptime _ = @TypeOf(_formWindow)._is_QDesignerFormWindowInterface;
        qtc.QDesignerFormWindowManagerInterface_FormWindowRemoved(@ptrCast(self.ptr), @ptrCast(_formWindow.ptr));
    }

    /// ### DEPRECATED: Use `onFormWindowRemoved` instead
    ///
    pub const OnFormWindowRemoved = onFormWindowRemoved;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#formWindowRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowManagerInterface, formWindow: QDesignerFormWindowInterface) callconv(.c) void `
    ///
    pub fn onFormWindowRemoved(self: QDesignerFormWindowManagerInterface, callback: *const fn (QDesignerFormWindowManagerInterface, QDesignerFormWindowInterface) callconv(.c) void) void {
        qtc.QDesignerFormWindowManagerInterface_Connect_FormWindowRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `activeFormWindowChanged` instead
    ///
    pub const ActiveFormWindowChanged = activeFormWindowChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#activeFormWindowChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` _formWindow: QDesignerFormWindowInterface `
    ///
    pub fn activeFormWindowChanged(self: QDesignerFormWindowManagerInterface, _formWindow: anytype) void {
        comptime _ = @TypeOf(_formWindow)._is_QDesignerFormWindowInterface;
        qtc.QDesignerFormWindowManagerInterface_ActiveFormWindowChanged(@ptrCast(self.ptr), @ptrCast(_formWindow.ptr));
    }

    /// ### DEPRECATED: Use `onActiveFormWindowChanged` instead
    ///
    pub const OnActiveFormWindowChanged = onActiveFormWindowChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#activeFormWindowChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowManagerInterface, formWindow: QDesignerFormWindowInterface) callconv(.c) void `
    ///
    pub fn onActiveFormWindowChanged(self: QDesignerFormWindowManagerInterface, callback: *const fn (QDesignerFormWindowManagerInterface, QDesignerFormWindowInterface) callconv(.c) void) void {
        qtc.QDesignerFormWindowManagerInterface_Connect_ActiveFormWindowChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `formWindowSettingsChanged` instead
    ///
    pub const FormWindowSettingsChanged = formWindowSettingsChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#formWindowSettingsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` fw: QDesignerFormWindowInterface `
    ///
    pub fn formWindowSettingsChanged(self: QDesignerFormWindowManagerInterface, fw: anytype) void {
        comptime _ = @TypeOf(fw)._is_QDesignerFormWindowInterface;
        qtc.QDesignerFormWindowManagerInterface_FormWindowSettingsChanged(@ptrCast(self.ptr), @ptrCast(fw.ptr));
    }

    /// ### DEPRECATED: Use `onFormWindowSettingsChanged` instead
    ///
    pub const OnFormWindowSettingsChanged = onFormWindowSettingsChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#formWindowSettingsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowManagerInterface, fw: QDesignerFormWindowInterface) callconv(.c) void `
    ///
    pub fn onFormWindowSettingsChanged(self: QDesignerFormWindowManagerInterface, callback: *const fn (QDesignerFormWindowManagerInterface, QDesignerFormWindowInterface) callconv(.c) void) void {
        qtc.QDesignerFormWindowManagerInterface_Connect_FormWindowSettingsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `addFormWindow` instead
    ///
    pub const AddFormWindow = addFormWindow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#addFormWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` _formWindow: QDesignerFormWindowInterface `
    ///
    pub fn addFormWindow(self: QDesignerFormWindowManagerInterface, _formWindow: anytype) void {
        comptime _ = @TypeOf(_formWindow)._is_QDesignerFormWindowInterface;
        qtc.QDesignerFormWindowManagerInterface_AddFormWindow(@ptrCast(self.ptr), @ptrCast(_formWindow.ptr));
    }

    /// ### DEPRECATED: Use `onAddFormWindow` instead
    ///
    pub const OnAddFormWindow = onAddFormWindow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#addFormWindow)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowManagerInterface, formWindow: QDesignerFormWindowInterface) callconv(.c) void `
    ///
    pub fn onAddFormWindow(self: QDesignerFormWindowManagerInterface, callback: *const fn (QDesignerFormWindowManagerInterface, QDesignerFormWindowInterface) callconv(.c) void) void {
        qtc.QDesignerFormWindowManagerInterface_OnAddFormWindow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superAddFormWindow` instead
    ///
    pub const SuperAddFormWindow = superAddFormWindow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#addFormWindow)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` _formWindow: QDesignerFormWindowInterface `
    ///
    pub fn superAddFormWindow(self: QDesignerFormWindowManagerInterface, _formWindow: anytype) void {
        comptime _ = @TypeOf(_formWindow)._is_QDesignerFormWindowInterface;
        qtc.QDesignerFormWindowManagerInterface_SuperAddFormWindow(@ptrCast(self.ptr), @ptrCast(_formWindow.ptr));
    }

    /// ### DEPRECATED: Use `removeFormWindow` instead
    ///
    pub const RemoveFormWindow = removeFormWindow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#removeFormWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` _formWindow: QDesignerFormWindowInterface `
    ///
    pub fn removeFormWindow(self: QDesignerFormWindowManagerInterface, _formWindow: anytype) void {
        comptime _ = @TypeOf(_formWindow)._is_QDesignerFormWindowInterface;
        qtc.QDesignerFormWindowManagerInterface_RemoveFormWindow(@ptrCast(self.ptr), @ptrCast(_formWindow.ptr));
    }

    /// ### DEPRECATED: Use `onRemoveFormWindow` instead
    ///
    pub const OnRemoveFormWindow = onRemoveFormWindow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#removeFormWindow)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowManagerInterface, formWindow: QDesignerFormWindowInterface) callconv(.c) void `
    ///
    pub fn onRemoveFormWindow(self: QDesignerFormWindowManagerInterface, callback: *const fn (QDesignerFormWindowManagerInterface, QDesignerFormWindowInterface) callconv(.c) void) void {
        qtc.QDesignerFormWindowManagerInterface_OnRemoveFormWindow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRemoveFormWindow` instead
    ///
    pub const SuperRemoveFormWindow = superRemoveFormWindow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#removeFormWindow)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` _formWindow: QDesignerFormWindowInterface `
    ///
    pub fn superRemoveFormWindow(self: QDesignerFormWindowManagerInterface, _formWindow: anytype) void {
        comptime _ = @TypeOf(_formWindow)._is_QDesignerFormWindowInterface;
        qtc.QDesignerFormWindowManagerInterface_SuperRemoveFormWindow(@ptrCast(self.ptr), @ptrCast(_formWindow.ptr));
    }

    /// ### DEPRECATED: Use `setActiveFormWindow` instead
    ///
    pub const SetActiveFormWindow = setActiveFormWindow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#setActiveFormWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` _formWindow: QDesignerFormWindowInterface `
    ///
    pub fn setActiveFormWindow(self: QDesignerFormWindowManagerInterface, _formWindow: anytype) void {
        comptime _ = @TypeOf(_formWindow)._is_QDesignerFormWindowInterface;
        qtc.QDesignerFormWindowManagerInterface_SetActiveFormWindow(@ptrCast(self.ptr), @ptrCast(_formWindow.ptr));
    }

    /// ### DEPRECATED: Use `onSetActiveFormWindow` instead
    ///
    pub const OnSetActiveFormWindow = onSetActiveFormWindow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#setActiveFormWindow)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowManagerInterface, formWindow: QDesignerFormWindowInterface) callconv(.c) void `
    ///
    pub fn onSetActiveFormWindow(self: QDesignerFormWindowManagerInterface, callback: *const fn (QDesignerFormWindowManagerInterface, QDesignerFormWindowInterface) callconv(.c) void) void {
        qtc.QDesignerFormWindowManagerInterface_OnSetActiveFormWindow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetActiveFormWindow` instead
    ///
    pub const SuperSetActiveFormWindow = superSetActiveFormWindow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#setActiveFormWindow)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` _formWindow: QDesignerFormWindowInterface `
    ///
    pub fn superSetActiveFormWindow(self: QDesignerFormWindowManagerInterface, _formWindow: anytype) void {
        comptime _ = @TypeOf(_formWindow)._is_QDesignerFormWindowInterface;
        qtc.QDesignerFormWindowManagerInterface_SuperSetActiveFormWindow(@ptrCast(self.ptr), @ptrCast(_formWindow.ptr));
    }

    /// ### DEPRECATED: Use `showPreview` instead
    ///
    pub const ShowPreview = showPreview;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#showPreview)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn showPreview(self: QDesignerFormWindowManagerInterface) void {
        qtc.QDesignerFormWindowManagerInterface_ShowPreview(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onShowPreview` instead
    ///
    pub const OnShowPreview = onShowPreview;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#showPreview)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onShowPreview(self: QDesignerFormWindowManagerInterface, callback: *const fn () callconv(.c) void) void {
        qtc.QDesignerFormWindowManagerInterface_OnShowPreview(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superShowPreview` instead
    ///
    pub const SuperShowPreview = superShowPreview;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#showPreview)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn superShowPreview(self: QDesignerFormWindowManagerInterface) void {
        qtc.QDesignerFormWindowManagerInterface_SuperShowPreview(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `closeAllPreviews` instead
    ///
    pub const CloseAllPreviews = closeAllPreviews;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#closeAllPreviews)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn closeAllPreviews(self: QDesignerFormWindowManagerInterface) void {
        qtc.QDesignerFormWindowManagerInterface_CloseAllPreviews(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCloseAllPreviews` instead
    ///
    pub const OnCloseAllPreviews = onCloseAllPreviews;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#closeAllPreviews)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onCloseAllPreviews(self: QDesignerFormWindowManagerInterface, callback: *const fn () callconv(.c) void) void {
        qtc.QDesignerFormWindowManagerInterface_OnCloseAllPreviews(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCloseAllPreviews` instead
    ///
    pub const SuperCloseAllPreviews = superCloseAllPreviews;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#closeAllPreviews)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn superCloseAllPreviews(self: QDesignerFormWindowManagerInterface) void {
        qtc.QDesignerFormWindowManagerInterface_SuperCloseAllPreviews(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `showPluginDialog` instead
    ///
    pub const ShowPluginDialog = showPluginDialog;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#showPluginDialog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn showPluginDialog(self: QDesignerFormWindowManagerInterface) void {
        qtc.QDesignerFormWindowManagerInterface_ShowPluginDialog(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onShowPluginDialog` instead
    ///
    pub const OnShowPluginDialog = onShowPluginDialog;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#showPluginDialog)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onShowPluginDialog(self: QDesignerFormWindowManagerInterface, callback: *const fn () callconv(.c) void) void {
        qtc.QDesignerFormWindowManagerInterface_OnShowPluginDialog(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superShowPluginDialog` instead
    ///
    pub const SuperShowPluginDialog = superShowPluginDialog;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#showPluginDialog)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn superShowPluginDialog(self: QDesignerFormWindowManagerInterface) void {
        qtc.QDesignerFormWindowManagerInterface_SuperShowPluginDialog(@ptrCast(self.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerFormWindowManagerInterface.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerFormWindowManagerInterface.tr3: Memory allocation failed");
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QDesignerFormWindowManagerInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerFormWindowManagerInterface.objectName: Memory allocation failed");
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QDesignerFormWindowManagerInterface, name: []const u8) void {
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn isWidgetType(self: QDesignerFormWindowManagerInterface) bool {
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn isWindowType(self: QDesignerFormWindowManagerInterface) bool {
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn isQuickItemType(self: QDesignerFormWindowManagerInterface) bool {
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn signalsBlocked(self: QDesignerFormWindowManagerInterface) bool {
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QDesignerFormWindowManagerInterface, b: bool) bool {
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn thread(self: QDesignerFormWindowManagerInterface) QThread {
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QDesignerFormWindowManagerInterface, _thread: anytype) bool {
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QDesignerFormWindowManagerInterface, interval: i32) i32 {
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QDesignerFormWindowManagerInterface, time: i64) i32 {
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QDesignerFormWindowManagerInterface, id: i32) void {
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QDesignerFormWindowManagerInterface, id: i32) void {
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QDesignerFormWindowManagerInterface, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QDesignerFormWindowManagerInterface.children: Memory allocation failed");
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QDesignerFormWindowManagerInterface, _parent: anytype) void {
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QDesignerFormWindowManagerInterface, filterObj: anytype) void {
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QDesignerFormWindowManagerInterface, obj: anytype) void {
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QDesignerFormWindowManagerInterface, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn disconnect3(self: QDesignerFormWindowManagerInterface) bool {
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QDesignerFormWindowManagerInterface, receiver: anytype) bool {
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn dumpObjectTree(self: QDesignerFormWindowManagerInterface) void {
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn dumpObjectInfo(self: QDesignerFormWindowManagerInterface) void {
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QDesignerFormWindowManagerInterface, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QDesignerFormWindowManagerInterface, name: [:0]const u8) QVariant {
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QDesignerFormWindowManagerInterface, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QDesignerFormWindowManagerInterface.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QDesignerFormWindowManagerInterface.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn bindingStorage(self: QDesignerFormWindowManagerInterface) QBindingStorage {
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn bindingStorage2(self: QDesignerFormWindowManagerInterface) QBindingStorage {
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn destroyed(self: QDesignerFormWindowManagerInterface) void {
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowManagerInterface) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QDesignerFormWindowManagerInterface, callback: *const fn (QDesignerFormWindowManagerInterface) callconv(.c) void) void {
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn parent(self: QDesignerFormWindowManagerInterface) QObject {
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QDesignerFormWindowManagerInterface, classname: [:0]const u8) bool {
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn deleteLater(self: QDesignerFormWindowManagerInterface) void {
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QDesignerFormWindowManagerInterface, interval: i32, timerType: i32) i32 {
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QDesignerFormWindowManagerInterface, time: i64, timerType: i32) i32 {
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QDesignerFormWindowManagerInterface, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QDesignerFormWindowManagerInterface, signal: [:0]const u8) bool {
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QDesignerFormWindowManagerInterface, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QDesignerFormWindowManagerInterface, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QDesignerFormWindowManagerInterface, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QDesignerFormWindowManagerInterface, param1: anytype) void {
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowManagerInterface, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QDesignerFormWindowManagerInterface, callback: *const fn (QDesignerFormWindowManagerInterface, QObject) callconv(.c) void) void {
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QDesignerFormWindowManagerInterface, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDesignerFormWindowManagerInterface_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QDesignerFormWindowManagerInterface, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDesignerFormWindowManagerInterface_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDesignerFormWindowManagerInterface`
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowManagerInterface, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QDesignerFormWindowManagerInterface, callback: *const fn (QDesignerFormWindowManagerInterface, QEvent) callconv(.c) bool) void {
        qtc.QDesignerFormWindowManagerInterface_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QDesignerFormWindowManagerInterface, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDesignerFormWindowManagerInterface_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QDesignerFormWindowManagerInterface, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDesignerFormWindowManagerInterface_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDesignerFormWindowManagerInterface`
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowManagerInterface, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QDesignerFormWindowManagerInterface, callback: *const fn (QDesignerFormWindowManagerInterface, QObject, QEvent) callconv(.c) bool) void {
        qtc.QDesignerFormWindowManagerInterface_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QDesignerFormWindowManagerInterface, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QDesignerFormWindowManagerInterface_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QDesignerFormWindowManagerInterface, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QDesignerFormWindowManagerInterface_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDesignerFormWindowManagerInterface`
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowManagerInterface, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QDesignerFormWindowManagerInterface, callback: *const fn (QDesignerFormWindowManagerInterface, QTimerEvent) callconv(.c) void) void {
        qtc.QDesignerFormWindowManagerInterface_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QDesignerFormWindowManagerInterface, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QDesignerFormWindowManagerInterface_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QDesignerFormWindowManagerInterface, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QDesignerFormWindowManagerInterface_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDesignerFormWindowManagerInterface`
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowManagerInterface, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QDesignerFormWindowManagerInterface, callback: *const fn (QDesignerFormWindowManagerInterface, QChildEvent) callconv(.c) void) void {
        qtc.QDesignerFormWindowManagerInterface_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QDesignerFormWindowManagerInterface, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QDesignerFormWindowManagerInterface_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QDesignerFormWindowManagerInterface, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QDesignerFormWindowManagerInterface_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDesignerFormWindowManagerInterface`
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowManagerInterface, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QDesignerFormWindowManagerInterface, callback: *const fn (QDesignerFormWindowManagerInterface, QEvent) callconv(.c) void) void {
        qtc.QDesignerFormWindowManagerInterface_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QDesignerFormWindowManagerInterface, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDesignerFormWindowManagerInterface_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QDesignerFormWindowManagerInterface, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDesignerFormWindowManagerInterface_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDesignerFormWindowManagerInterface`
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowManagerInterface, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QDesignerFormWindowManagerInterface, callback: *const fn (QDesignerFormWindowManagerInterface, QMetaMethod) callconv(.c) void) void {
        qtc.QDesignerFormWindowManagerInterface_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QDesignerFormWindowManagerInterface, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDesignerFormWindowManagerInterface_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QDesignerFormWindowManagerInterface, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDesignerFormWindowManagerInterface_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDesignerFormWindowManagerInterface`
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowManagerInterface, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QDesignerFormWindowManagerInterface, callback: *const fn (QDesignerFormWindowManagerInterface, QMetaMethod) callconv(.c) void) void {
        qtc.QDesignerFormWindowManagerInterface_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn sender(self: QDesignerFormWindowManagerInterface) QObject {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn superSender(self: QDesignerFormWindowManagerInterface) QObject {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QDesignerFormWindowManagerInterface`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QDesignerFormWindowManagerInterface, callback: *const fn () callconv(.c) QObject) void {
        qtc.QDesignerFormWindowManagerInterface_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn senderSignalIndex(self: QDesignerFormWindowManagerInterface) i32 {
        return qtc.QDesignerFormWindowManagerInterface_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn superSenderSignalIndex(self: QDesignerFormWindowManagerInterface) i32 {
        return qtc.QDesignerFormWindowManagerInterface_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QDesignerFormWindowManagerInterface`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QDesignerFormWindowManagerInterface, callback: *const fn () callconv(.c) i32) void {
        qtc.QDesignerFormWindowManagerInterface_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QDesignerFormWindowManagerInterface, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDesignerFormWindowManagerInterface_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QDesignerFormWindowManagerInterface, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDesignerFormWindowManagerInterface_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QDesignerFormWindowManagerInterface`
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowManagerInterface, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QDesignerFormWindowManagerInterface, callback: *const fn (QDesignerFormWindowManagerInterface, [*:0]const u8) callconv(.c) i32) void {
        qtc.QDesignerFormWindowManagerInterface_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QDesignerFormWindowManagerInterface, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QDesignerFormWindowManagerInterface_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QDesignerFormWindowManagerInterface, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QDesignerFormWindowManagerInterface_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDesignerFormWindowManagerInterface`
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowManagerInterface, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QDesignerFormWindowManagerInterface, callback: *const fn (QDesignerFormWindowManagerInterface, QMetaMethod) callconv(.c) bool) void {
        qtc.QDesignerFormWindowManagerInterface_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowManagerInterface, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QDesignerFormWindowManagerInterface, callback: *const fn (QDesignerFormWindowManagerInterface, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#dtor.QDesignerFormWindowManagerInterface)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn delete(self: QDesignerFormWindowManagerInterface) void {
        qtc.QDesignerFormWindowManagerInterface_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/abstractformwindowmanager.html#public-types)
pub const enums = struct {
    pub const Action = enum {
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

    pub const ActionGroup = enum {
        pub const StyledPreviewActionGroup: i32 = 100;
    };
};
