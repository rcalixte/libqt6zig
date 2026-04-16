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

    /// New constructs a new QDesignerFormWindowManagerInterface object.
    ///
    pub fn New() QDesignerFormWindowManagerInterface {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_new() };
    }

    /// New2 constructs a new QDesignerFormWindowManagerInterface object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) QDesignerFormWindowManagerInterface {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn MetaObject(self: QDesignerFormWindowManagerInterface) QMetaObject {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_MetaObject(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMetaObject(self: QDesignerFormWindowManagerInterface, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QDesignerFormWindowManagerInterface_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn SuperMetaObject(self: QDesignerFormWindowManagerInterface) QMetaObject {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QDesignerFormWindowManagerInterface, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDesignerFormWindowManagerInterface_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowManagerInterface, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QDesignerFormWindowManagerInterface, callback: *const fn (QDesignerFormWindowManagerInterface, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QDesignerFormWindowManagerInterface_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QDesignerFormWindowManagerInterface, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDesignerFormWindowManagerInterface_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

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
    pub fn Metacall(self: QDesignerFormWindowManagerInterface, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDesignerFormWindowManagerInterface_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowManagerInterface, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QDesignerFormWindowManagerInterface, callback: *const fn (QDesignerFormWindowManagerInterface, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QDesignerFormWindowManagerInterface_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

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
    pub fn SuperMetacall(self: QDesignerFormWindowManagerInterface, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDesignerFormWindowManagerInterface_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerformwindowmanagerinterface.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#action)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` action: abstractformwindowmanager_enums.Action `
    ///
    pub fn Action(self: QDesignerFormWindowManagerInterface, action: i32) QAction {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_Action(@ptrCast(self.ptr), @bitCast(action)) };
    }

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
    pub fn OnAction(self: QDesignerFormWindowManagerInterface, callback: *const fn (QDesignerFormWindowManagerInterface, i32) callconv(.c) QAction) void {
        qtc.QDesignerFormWindowManagerInterface_OnAction(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` action: abstractformwindowmanager_enums.Action `
    ///
    pub fn SuperAction(self: QDesignerFormWindowManagerInterface, action: i32) QAction {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_SuperAction(@ptrCast(self.ptr), @bitCast(action)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` actionGroup: abstractformwindowmanager_enums.ActionGroup `
    ///
    pub fn ActionGroup(self: QDesignerFormWindowManagerInterface, actionGroup: i32) QActionGroup {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_ActionGroup(@ptrCast(self.ptr), @bitCast(actionGroup)) };
    }

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
    pub fn OnActionGroup(self: QDesignerFormWindowManagerInterface, callback: *const fn (QDesignerFormWindowManagerInterface, i32) callconv(.c) QActionGroup) void {
        qtc.QDesignerFormWindowManagerInterface_OnActionGroup(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` actionGroup: abstractformwindowmanager_enums.ActionGroup `
    ///
    pub fn SuperActionGroup(self: QDesignerFormWindowManagerInterface, actionGroup: i32) QActionGroup {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_SuperActionGroup(@ptrCast(self.ptr), @bitCast(actionGroup)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionCut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn ActionCut(self: QDesignerFormWindowManagerInterface) QAction {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_ActionCut(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionCopy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn ActionCopy(self: QDesignerFormWindowManagerInterface) QAction {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_ActionCopy(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionPaste)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn ActionPaste(self: QDesignerFormWindowManagerInterface) QAction {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_ActionPaste(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionDelete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn ActionDelete(self: QDesignerFormWindowManagerInterface) QAction {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_ActionDelete(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionSelectAll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn ActionSelectAll(self: QDesignerFormWindowManagerInterface) QAction {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_ActionSelectAll(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionLower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn ActionLower(self: QDesignerFormWindowManagerInterface) QAction {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_ActionLower(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionRaise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn ActionRaise(self: QDesignerFormWindowManagerInterface) QAction {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_ActionRaise(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionUndo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn ActionUndo(self: QDesignerFormWindowManagerInterface) QAction {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_ActionUndo(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionRedo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn ActionRedo(self: QDesignerFormWindowManagerInterface) QAction {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_ActionRedo(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionHorizontalLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn ActionHorizontalLayout(self: QDesignerFormWindowManagerInterface) QAction {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_ActionHorizontalLayout(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionVerticalLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn ActionVerticalLayout(self: QDesignerFormWindowManagerInterface) QAction {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_ActionVerticalLayout(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionSplitHorizontal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn ActionSplitHorizontal(self: QDesignerFormWindowManagerInterface) QAction {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_ActionSplitHorizontal(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionSplitVertical)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn ActionSplitVertical(self: QDesignerFormWindowManagerInterface) QAction {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_ActionSplitVertical(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionGridLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn ActionGridLayout(self: QDesignerFormWindowManagerInterface) QAction {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_ActionGridLayout(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionFormLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn ActionFormLayout(self: QDesignerFormWindowManagerInterface) QAction {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_ActionFormLayout(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionBreakLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn ActionBreakLayout(self: QDesignerFormWindowManagerInterface) QAction {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_ActionBreakLayout(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionAdjustSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn ActionAdjustSize(self: QDesignerFormWindowManagerInterface) QAction {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_ActionAdjustSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#actionSimplifyLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn ActionSimplifyLayout(self: QDesignerFormWindowManagerInterface) QAction {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_ActionSimplifyLayout(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#activeFormWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn ActiveFormWindow(self: QDesignerFormWindowManagerInterface) QDesignerFormWindowInterface {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_ActiveFormWindow(@ptrCast(self.ptr)) };
    }

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
    pub fn OnActiveFormWindow(self: QDesignerFormWindowManagerInterface, callback: *const fn () callconv(.c) QDesignerFormWindowInterface) void {
        qtc.QDesignerFormWindowManagerInterface_OnActiveFormWindow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn SuperActiveFormWindow(self: QDesignerFormWindowManagerInterface) QDesignerFormWindowInterface {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_SuperActiveFormWindow(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#formWindowCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn FormWindowCount(self: QDesignerFormWindowManagerInterface) i32 {
        return qtc.QDesignerFormWindowManagerInterface_FormWindowCount(@ptrCast(self.ptr));
    }

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
    pub fn OnFormWindowCount(self: QDesignerFormWindowManagerInterface, callback: *const fn () callconv(.c) i32) void {
        qtc.QDesignerFormWindowManagerInterface_OnFormWindowCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn SuperFormWindowCount(self: QDesignerFormWindowManagerInterface) i32 {
        return qtc.QDesignerFormWindowManagerInterface_SuperFormWindowCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#formWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` index: i32 `
    ///
    pub fn FormWindow(self: QDesignerFormWindowManagerInterface, index: i32) QDesignerFormWindowInterface {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_FormWindow(@ptrCast(self.ptr), @bitCast(index)) };
    }

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
    pub fn OnFormWindow(self: QDesignerFormWindowManagerInterface, callback: *const fn (QDesignerFormWindowManagerInterface, i32) callconv(.c) QDesignerFormWindowInterface) void {
        qtc.QDesignerFormWindowManagerInterface_OnFormWindow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperFormWindow(self: QDesignerFormWindowManagerInterface, index: i32) QDesignerFormWindowInterface {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_SuperFormWindow(@ptrCast(self.ptr), @bitCast(index)) };
    }

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
    pub fn CreateFormWindow(self: QDesignerFormWindowManagerInterface, parentWidget: anytype, flags: i32) QDesignerFormWindowInterface {
        comptime _ = @TypeOf(parentWidget)._is_QWidget;
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_CreateFormWindow(@ptrCast(self.ptr), @ptrCast(parentWidget.ptr), @bitCast(flags)) };
    }

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
    pub fn OnCreateFormWindow(self: QDesignerFormWindowManagerInterface, callback: *const fn (QDesignerFormWindowManagerInterface, QWidget, i32) callconv(.c) QDesignerFormWindowInterface) void {
        qtc.QDesignerFormWindowManagerInterface_OnCreateFormWindow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` parentWidget: QWidget `
    ///
    /// ` flags: flag of qnamespace_enums.WindowType `
    ///
    pub fn SuperCreateFormWindow(self: QDesignerFormWindowManagerInterface, parentWidget: anytype, flags: i32) QDesignerFormWindowInterface {
        comptime _ = @TypeOf(parentWidget)._is_QWidget;
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_SuperCreateFormWindow(@ptrCast(self.ptr), @ptrCast(parentWidget.ptr), @bitCast(flags)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#core)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn Core(self: QDesignerFormWindowManagerInterface) QDesignerFormEditorInterface {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_Core(@ptrCast(self.ptr)) };
    }

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
    pub fn OnCore(self: QDesignerFormWindowManagerInterface, callback: *const fn () callconv(.c) QDesignerFormEditorInterface) void {
        qtc.QDesignerFormWindowManagerInterface_OnCore(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn SuperCore(self: QDesignerFormWindowManagerInterface) QDesignerFormEditorInterface {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_SuperCore(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#dragItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` item_list: []QDesignerDnDItemInterface `
    ///
    pub fn DragItems(self: QDesignerFormWindowManagerInterface, item_list: []QDesignerDnDItemInterface) void {
        const item_list_list = qtc.libqt_list{
            .len = item_list.len,
            .data = @ptrCast(item_list.ptr),
        };
        qtc.QDesignerFormWindowManagerInterface_DragItems(@ptrCast(self.ptr), item_list_list);
    }

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
    pub fn OnDragItems(self: QDesignerFormWindowManagerInterface, callback: *const fn (QDesignerFormWindowManagerInterface, qtc.libqt_list) callconv(.c) void) void {
        qtc.QDesignerFormWindowManagerInterface_OnDragItems(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` item_list: []QDesignerDnDItemInterface `
    ///
    pub fn SuperDragItems(self: QDesignerFormWindowManagerInterface, item_list: []QDesignerDnDItemInterface) void {
        const item_list_list = qtc.libqt_list{
            .len = item_list.len,
            .data = @ptrCast(item_list.ptr),
        };
        qtc.QDesignerFormWindowManagerInterface_SuperDragItems(@ptrCast(self.ptr), item_list_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#createPreviewPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn CreatePreviewPixmap(self: QDesignerFormWindowManagerInterface) QPixmap {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_CreatePreviewPixmap(@ptrCast(self.ptr)) };
    }

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
    pub fn OnCreatePreviewPixmap(self: QDesignerFormWindowManagerInterface, callback: *const fn () callconv(.c) QPixmap) void {
        qtc.QDesignerFormWindowManagerInterface_OnCreatePreviewPixmap(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn SuperCreatePreviewPixmap(self: QDesignerFormWindowManagerInterface) QPixmap {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_SuperCreatePreviewPixmap(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#formWindowAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` formWindow: QDesignerFormWindowInterface `
    ///
    pub fn FormWindowAdded(self: QDesignerFormWindowManagerInterface, formWindow: anytype) void {
        comptime _ = @TypeOf(formWindow)._is_QDesignerFormWindowInterface;
        qtc.QDesignerFormWindowManagerInterface_FormWindowAdded(@ptrCast(self.ptr), @ptrCast(formWindow.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#formWindowAdded)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowManagerInterface, formWindow: QDesignerFormWindowInterface) callconv(.c) void `
    ///
    pub fn OnFormWindowAdded(self: QDesignerFormWindowManagerInterface, callback: *const fn (QDesignerFormWindowManagerInterface, QDesignerFormWindowInterface) callconv(.c) void) void {
        qtc.QDesignerFormWindowManagerInterface_Connect_FormWindowAdded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#formWindowRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` formWindow: QDesignerFormWindowInterface `
    ///
    pub fn FormWindowRemoved(self: QDesignerFormWindowManagerInterface, formWindow: anytype) void {
        comptime _ = @TypeOf(formWindow)._is_QDesignerFormWindowInterface;
        qtc.QDesignerFormWindowManagerInterface_FormWindowRemoved(@ptrCast(self.ptr), @ptrCast(formWindow.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#formWindowRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowManagerInterface, formWindow: QDesignerFormWindowInterface) callconv(.c) void `
    ///
    pub fn OnFormWindowRemoved(self: QDesignerFormWindowManagerInterface, callback: *const fn (QDesignerFormWindowManagerInterface, QDesignerFormWindowInterface) callconv(.c) void) void {
        qtc.QDesignerFormWindowManagerInterface_Connect_FormWindowRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#activeFormWindowChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` formWindow: QDesignerFormWindowInterface `
    ///
    pub fn ActiveFormWindowChanged(self: QDesignerFormWindowManagerInterface, formWindow: anytype) void {
        comptime _ = @TypeOf(formWindow)._is_QDesignerFormWindowInterface;
        qtc.QDesignerFormWindowManagerInterface_ActiveFormWindowChanged(@ptrCast(self.ptr), @ptrCast(formWindow.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#activeFormWindowChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowManagerInterface, formWindow: QDesignerFormWindowInterface) callconv(.c) void `
    ///
    pub fn OnActiveFormWindowChanged(self: QDesignerFormWindowManagerInterface, callback: *const fn (QDesignerFormWindowManagerInterface, QDesignerFormWindowInterface) callconv(.c) void) void {
        qtc.QDesignerFormWindowManagerInterface_Connect_ActiveFormWindowChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#formWindowSettingsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` fw: QDesignerFormWindowInterface `
    ///
    pub fn FormWindowSettingsChanged(self: QDesignerFormWindowManagerInterface, fw: anytype) void {
        comptime _ = @TypeOf(fw)._is_QDesignerFormWindowInterface;
        qtc.QDesignerFormWindowManagerInterface_FormWindowSettingsChanged(@ptrCast(self.ptr), @ptrCast(fw.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#formWindowSettingsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowManagerInterface, fw: QDesignerFormWindowInterface) callconv(.c) void `
    ///
    pub fn OnFormWindowSettingsChanged(self: QDesignerFormWindowManagerInterface, callback: *const fn (QDesignerFormWindowManagerInterface, QDesignerFormWindowInterface) callconv(.c) void) void {
        qtc.QDesignerFormWindowManagerInterface_Connect_FormWindowSettingsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#addFormWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` formWindow: QDesignerFormWindowInterface `
    ///
    pub fn AddFormWindow(self: QDesignerFormWindowManagerInterface, formWindow: anytype) void {
        comptime _ = @TypeOf(formWindow)._is_QDesignerFormWindowInterface;
        qtc.QDesignerFormWindowManagerInterface_AddFormWindow(@ptrCast(self.ptr), @ptrCast(formWindow.ptr));
    }

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
    pub fn OnAddFormWindow(self: QDesignerFormWindowManagerInterface, callback: *const fn (QDesignerFormWindowManagerInterface, QDesignerFormWindowInterface) callconv(.c) void) void {
        qtc.QDesignerFormWindowManagerInterface_OnAddFormWindow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` formWindow: QDesignerFormWindowInterface `
    ///
    pub fn SuperAddFormWindow(self: QDesignerFormWindowManagerInterface, formWindow: anytype) void {
        comptime _ = @TypeOf(formWindow)._is_QDesignerFormWindowInterface;
        qtc.QDesignerFormWindowManagerInterface_SuperAddFormWindow(@ptrCast(self.ptr), @ptrCast(formWindow.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#removeFormWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` formWindow: QDesignerFormWindowInterface `
    ///
    pub fn RemoveFormWindow(self: QDesignerFormWindowManagerInterface, formWindow: anytype) void {
        comptime _ = @TypeOf(formWindow)._is_QDesignerFormWindowInterface;
        qtc.QDesignerFormWindowManagerInterface_RemoveFormWindow(@ptrCast(self.ptr), @ptrCast(formWindow.ptr));
    }

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
    pub fn OnRemoveFormWindow(self: QDesignerFormWindowManagerInterface, callback: *const fn (QDesignerFormWindowManagerInterface, QDesignerFormWindowInterface) callconv(.c) void) void {
        qtc.QDesignerFormWindowManagerInterface_OnRemoveFormWindow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` formWindow: QDesignerFormWindowInterface `
    ///
    pub fn SuperRemoveFormWindow(self: QDesignerFormWindowManagerInterface, formWindow: anytype) void {
        comptime _ = @TypeOf(formWindow)._is_QDesignerFormWindowInterface;
        qtc.QDesignerFormWindowManagerInterface_SuperRemoveFormWindow(@ptrCast(self.ptr), @ptrCast(formWindow.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#setActiveFormWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` formWindow: QDesignerFormWindowInterface `
    ///
    pub fn SetActiveFormWindow(self: QDesignerFormWindowManagerInterface, formWindow: anytype) void {
        comptime _ = @TypeOf(formWindow)._is_QDesignerFormWindowInterface;
        qtc.QDesignerFormWindowManagerInterface_SetActiveFormWindow(@ptrCast(self.ptr), @ptrCast(formWindow.ptr));
    }

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
    pub fn OnSetActiveFormWindow(self: QDesignerFormWindowManagerInterface, callback: *const fn (QDesignerFormWindowManagerInterface, QDesignerFormWindowInterface) callconv(.c) void) void {
        qtc.QDesignerFormWindowManagerInterface_OnSetActiveFormWindow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` formWindow: QDesignerFormWindowInterface `
    ///
    pub fn SuperSetActiveFormWindow(self: QDesignerFormWindowManagerInterface, formWindow: anytype) void {
        comptime _ = @TypeOf(formWindow)._is_QDesignerFormWindowInterface;
        qtc.QDesignerFormWindowManagerInterface_SuperSetActiveFormWindow(@ptrCast(self.ptr), @ptrCast(formWindow.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#showPreview)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn ShowPreview(self: QDesignerFormWindowManagerInterface) void {
        qtc.QDesignerFormWindowManagerInterface_ShowPreview(@ptrCast(self.ptr));
    }

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
    pub fn OnShowPreview(self: QDesignerFormWindowManagerInterface, callback: *const fn () callconv(.c) void) void {
        qtc.QDesignerFormWindowManagerInterface_OnShowPreview(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn SuperShowPreview(self: QDesignerFormWindowManagerInterface) void {
        qtc.QDesignerFormWindowManagerInterface_SuperShowPreview(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#closeAllPreviews)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn CloseAllPreviews(self: QDesignerFormWindowManagerInterface) void {
        qtc.QDesignerFormWindowManagerInterface_CloseAllPreviews(@ptrCast(self.ptr));
    }

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
    pub fn OnCloseAllPreviews(self: QDesignerFormWindowManagerInterface, callback: *const fn () callconv(.c) void) void {
        qtc.QDesignerFormWindowManagerInterface_OnCloseAllPreviews(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn SuperCloseAllPreviews(self: QDesignerFormWindowManagerInterface) void {
        qtc.QDesignerFormWindowManagerInterface_SuperCloseAllPreviews(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowmanagerinterface.html#showPluginDialog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn ShowPluginDialog(self: QDesignerFormWindowManagerInterface) void {
        qtc.QDesignerFormWindowManagerInterface_ShowPluginDialog(@ptrCast(self.ptr));
    }

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
    pub fn OnShowPluginDialog(self: QDesignerFormWindowManagerInterface, callback: *const fn () callconv(.c) void) void {
        qtc.QDesignerFormWindowManagerInterface_OnShowPluginDialog(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn SuperShowPluginDialog(self: QDesignerFormWindowManagerInterface) void {
        qtc.QDesignerFormWindowManagerInterface_SuperShowPluginDialog(@ptrCast(self.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerformwindowmanagerinterface.Tr2: Memory allocation failed");
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QDesignerFormWindowManagerInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QDesignerFormWindowManagerInterface, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn IsWidgetType(self: QDesignerFormWindowManagerInterface) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn IsWindowType(self: QDesignerFormWindowManagerInterface) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn IsQuickItemType(self: QDesignerFormWindowManagerInterface) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn SignalsBlocked(self: QDesignerFormWindowManagerInterface) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

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
    pub fn BlockSignals(self: QDesignerFormWindowManagerInterface, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn Thread(self: QDesignerFormWindowManagerInterface) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QDesignerFormWindowManagerInterface, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

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
    pub fn StartTimer(self: QDesignerFormWindowManagerInterface, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

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
    pub fn StartTimer2(self: QDesignerFormWindowManagerInterface, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

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
    pub fn KillTimer(self: QDesignerFormWindowManagerInterface, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn KillTimer2(self: QDesignerFormWindowManagerInterface, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn Children(self: QDesignerFormWindowManagerInterface, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qdesignerformwindowmanagerinterface.Children: Memory allocation failed");
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QDesignerFormWindowManagerInterface, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

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
    pub fn InstallEventFilter(self: QDesignerFormWindowManagerInterface, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

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
    pub fn RemoveEventFilter(self: QDesignerFormWindowManagerInterface, obj: anytype) void {
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QDesignerFormWindowManagerInterface, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn Disconnect3(self: QDesignerFormWindowManagerInterface) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

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
    pub fn Disconnect4(self: QDesignerFormWindowManagerInterface, receiver: anytype) bool {
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn DumpObjectTree(self: QDesignerFormWindowManagerInterface) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn DumpObjectInfo(self: QDesignerFormWindowManagerInterface) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

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
    pub fn SetProperty(self: QDesignerFormWindowManagerInterface, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QDesignerFormWindowManagerInterface, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

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
    pub fn DynamicPropertyNames(self: QDesignerFormWindowManagerInterface, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn BindingStorage(self: QDesignerFormWindowManagerInterface) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn BindingStorage2(self: QDesignerFormWindowManagerInterface) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn Destroyed(self: QDesignerFormWindowManagerInterface) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

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
    pub fn OnDestroyed(self: QDesignerFormWindowManagerInterface, callback: *const fn (QDesignerFormWindowManagerInterface) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn Parent(self: QDesignerFormWindowManagerInterface) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

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
    pub fn Inherits(self: QDesignerFormWindowManagerInterface, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn DeleteLater(self: QDesignerFormWindowManagerInterface) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

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
    pub fn StartTimer22(self: QDesignerFormWindowManagerInterface, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

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
    pub fn StartTimer23(self: QDesignerFormWindowManagerInterface, time: i64, timerType: i32) i32 {
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QDesignerFormWindowManagerInterface, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QDesignerFormWindowManagerInterface, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn Disconnect22(self: QDesignerFormWindowManagerInterface, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QDesignerFormWindowManagerInterface, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QDesignerFormWindowManagerInterface, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QDesignerFormWindowManagerInterface, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnDestroyed1(self: QDesignerFormWindowManagerInterface, callback: *const fn (QDesignerFormWindowManagerInterface, QObject) callconv(.c) void) void {
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QDesignerFormWindowManagerInterface, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QDesignerFormWindowManagerInterface_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QDesignerFormWindowManagerInterface, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QDesignerFormWindowManagerInterface_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEvent(self: QDesignerFormWindowManagerInterface, callback: *const fn (QDesignerFormWindowManagerInterface, QEvent) callconv(.c) bool) void {
        qtc.QDesignerFormWindowManagerInterface_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QDesignerFormWindowManagerInterface, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QDesignerFormWindowManagerInterface_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QDesignerFormWindowManagerInterface, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QDesignerFormWindowManagerInterface_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEventFilter(self: QDesignerFormWindowManagerInterface, callback: *const fn (QDesignerFormWindowManagerInterface, QObject, QEvent) callconv(.c) bool) void {
        qtc.QDesignerFormWindowManagerInterface_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QDesignerFormWindowManagerInterface, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QDesignerFormWindowManagerInterface_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QDesignerFormWindowManagerInterface, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QDesignerFormWindowManagerInterface_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnTimerEvent(self: QDesignerFormWindowManagerInterface, callback: *const fn (QDesignerFormWindowManagerInterface, QTimerEvent) callconv(.c) void) void {
        qtc.QDesignerFormWindowManagerInterface_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QDesignerFormWindowManagerInterface, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QDesignerFormWindowManagerInterface_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QDesignerFormWindowManagerInterface, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QDesignerFormWindowManagerInterface_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnChildEvent(self: QDesignerFormWindowManagerInterface, callback: *const fn (QDesignerFormWindowManagerInterface, QChildEvent) callconv(.c) void) void {
        qtc.QDesignerFormWindowManagerInterface_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QDesignerFormWindowManagerInterface, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QDesignerFormWindowManagerInterface_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QDesignerFormWindowManagerInterface, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QDesignerFormWindowManagerInterface_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnCustomEvent(self: QDesignerFormWindowManagerInterface, callback: *const fn (QDesignerFormWindowManagerInterface, QEvent) callconv(.c) void) void {
        qtc.QDesignerFormWindowManagerInterface_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ConnectNotify(self: QDesignerFormWindowManagerInterface, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDesignerFormWindowManagerInterface_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QDesignerFormWindowManagerInterface, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDesignerFormWindowManagerInterface_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnConnectNotify(self: QDesignerFormWindowManagerInterface, callback: *const fn (QDesignerFormWindowManagerInterface, QMetaMethod) callconv(.c) void) void {
        qtc.QDesignerFormWindowManagerInterface_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DisconnectNotify(self: QDesignerFormWindowManagerInterface, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDesignerFormWindowManagerInterface_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QDesignerFormWindowManagerInterface, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDesignerFormWindowManagerInterface_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnDisconnectNotify(self: QDesignerFormWindowManagerInterface, callback: *const fn (QDesignerFormWindowManagerInterface, QMetaMethod) callconv(.c) void) void {
        qtc.QDesignerFormWindowManagerInterface_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Sender(self: QDesignerFormWindowManagerInterface) QObject {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn SuperSender(self: QDesignerFormWindowManagerInterface) QObject {
        return .{ .ptr = qtc.QDesignerFormWindowManagerInterface_SuperSender(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSender(self: QDesignerFormWindowManagerInterface, callback: *const fn () callconv(.c) QObject) void {
        qtc.QDesignerFormWindowManagerInterface_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SenderSignalIndex(self: QDesignerFormWindowManagerInterface) i32 {
        return qtc.QDesignerFormWindowManagerInterface_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn SuperSenderSignalIndex(self: QDesignerFormWindowManagerInterface) i32 {
        return qtc.QDesignerFormWindowManagerInterface_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

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
    pub fn OnSenderSignalIndex(self: QDesignerFormWindowManagerInterface, callback: *const fn () callconv(.c) i32) void {
        qtc.QDesignerFormWindowManagerInterface_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Receivers(self: QDesignerFormWindowManagerInterface, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDesignerFormWindowManagerInterface_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QDesignerFormWindowManagerInterface, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDesignerFormWindowManagerInterface_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn OnReceivers(self: QDesignerFormWindowManagerInterface, callback: *const fn (QDesignerFormWindowManagerInterface, [*:0]const u8) callconv(.c) i32) void {
        qtc.QDesignerFormWindowManagerInterface_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IsSignalConnected(self: QDesignerFormWindowManagerInterface, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QDesignerFormWindowManagerInterface_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QDesignerFormWindowManagerInterface, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QDesignerFormWindowManagerInterface_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnIsSignalConnected(self: QDesignerFormWindowManagerInterface, callback: *const fn (QDesignerFormWindowManagerInterface, QMetaMethod) callconv(.c) bool) void {
        qtc.QDesignerFormWindowManagerInterface_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn OnObjectNameChanged(self: QDesignerFormWindowManagerInterface, callback: *const fn (QDesignerFormWindowManagerInterface, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerFormWindowManagerInterface `
    ///
    pub fn Delete(self: QDesignerFormWindowManagerInterface) void {
        qtc.QDesignerFormWindowManagerInterface_Delete(@ptrCast(self.ptr));
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
