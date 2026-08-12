const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAction = @import("libqt6").QAction;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QDesignerFormEditorInterface = @import("libqt6").QDesignerFormEditorInterface;
const QDesignerFormWindowInterface = @import("libqt6").QDesignerFormWindowInterface;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const QWidget = @import("libqt6").QWidget;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowtoolinterface.html)
pub const QDesignerFormWindowToolInterface = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowtoolinterface.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDesignerFormWindowToolInterface,

    pub const _is_QDesignerFormWindowToolInterface = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDesignerFormWindowToolInterface object in C++ memory
    ///
    pub fn new() QDesignerFormWindowToolInterface {
        return .{ .ptr = qtc.QDesignerFormWindowToolInterface_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDesignerFormWindowToolInterface object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QDesignerFormWindowToolInterface {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QDesignerFormWindowToolInterface_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    pub fn metaObject(self: QDesignerFormWindowToolInterface) QMetaObject {
        return .{ .ptr = qtc.QDesignerFormWindowToolInterface_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QDesignerFormWindowToolInterface, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QDesignerFormWindowToolInterface_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    pub fn superMetaObject(self: QDesignerFormWindowToolInterface) QMetaObject {
        return .{ .ptr = qtc.QDesignerFormWindowToolInterface_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QDesignerFormWindowToolInterface, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDesignerFormWindowToolInterface_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowToolInterface, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QDesignerFormWindowToolInterface, callback: *const fn (QDesignerFormWindowToolInterface, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QDesignerFormWindowToolInterface_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QDesignerFormWindowToolInterface, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDesignerFormWindowToolInterface_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QDesignerFormWindowToolInterface, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDesignerFormWindowToolInterface_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowToolInterface, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QDesignerFormWindowToolInterface, callback: *const fn (QDesignerFormWindowToolInterface, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QDesignerFormWindowToolInterface_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QDesignerFormWindowToolInterface, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDesignerFormWindowToolInterface_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerFormWindowToolInterface.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `core` instead
    ///
    pub const Core = core;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowtoolinterface.html#core)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    pub fn core(self: QDesignerFormWindowToolInterface) QDesignerFormEditorInterface {
        return .{ .ptr = qtc.QDesignerFormWindowToolInterface_Core(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onCore` instead
    ///
    pub const OnCore = onCore;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowtoolinterface.html#core)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` callback: *const fn () callconv(.c) QDesignerFormEditorInterface `
    ///
    pub fn onCore(self: QDesignerFormWindowToolInterface, callback: *const fn () callconv(.c) QDesignerFormEditorInterface) void {
        qtc.QDesignerFormWindowToolInterface_OnCore(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCore` instead
    ///
    pub const SuperCore = superCore;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowtoolinterface.html#core)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    pub fn superCore(self: QDesignerFormWindowToolInterface) QDesignerFormEditorInterface {
        return .{ .ptr = qtc.QDesignerFormWindowToolInterface_SuperCore(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `formWindow` instead
    ///
    pub const FormWindow = formWindow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowtoolinterface.html#formWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    pub fn formWindow(self: QDesignerFormWindowToolInterface) QDesignerFormWindowInterface {
        return .{ .ptr = qtc.QDesignerFormWindowToolInterface_FormWindow(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onFormWindow` instead
    ///
    pub const OnFormWindow = onFormWindow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowtoolinterface.html#formWindow)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` callback: *const fn () callconv(.c) QDesignerFormWindowInterface `
    ///
    pub fn onFormWindow(self: QDesignerFormWindowToolInterface, callback: *const fn () callconv(.c) QDesignerFormWindowInterface) void {
        qtc.QDesignerFormWindowToolInterface_OnFormWindow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superFormWindow` instead
    ///
    pub const SuperFormWindow = superFormWindow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowtoolinterface.html#formWindow)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    pub fn superFormWindow(self: QDesignerFormWindowToolInterface) QDesignerFormWindowInterface {
        return .{ .ptr = qtc.QDesignerFormWindowToolInterface_SuperFormWindow(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `editor` instead
    ///
    pub const Editor = editor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowtoolinterface.html#editor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    pub fn editor(self: QDesignerFormWindowToolInterface) QWidget {
        return .{ .ptr = qtc.QDesignerFormWindowToolInterface_Editor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onEditor` instead
    ///
    pub const OnEditor = onEditor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowtoolinterface.html#editor)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` callback: *const fn () callconv(.c) QWidget `
    ///
    pub fn onEditor(self: QDesignerFormWindowToolInterface, callback: *const fn () callconv(.c) QWidget) void {
        qtc.QDesignerFormWindowToolInterface_OnEditor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEditor` instead
    ///
    pub const SuperEditor = superEditor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowtoolinterface.html#editor)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    pub fn superEditor(self: QDesignerFormWindowToolInterface) QWidget {
        return .{ .ptr = qtc.QDesignerFormWindowToolInterface_SuperEditor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `action` instead
    ///
    pub const Action = action;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowtoolinterface.html#action)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    pub fn action(self: QDesignerFormWindowToolInterface) QAction {
        return .{ .ptr = qtc.QDesignerFormWindowToolInterface_Action(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onAction` instead
    ///
    pub const OnAction = onAction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowtoolinterface.html#action)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` callback: *const fn () callconv(.c) QAction `
    ///
    pub fn onAction(self: QDesignerFormWindowToolInterface, callback: *const fn () callconv(.c) QAction) void {
        qtc.QDesignerFormWindowToolInterface_OnAction(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superAction` instead
    ///
    pub const SuperAction = superAction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowtoolinterface.html#action)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    pub fn superAction(self: QDesignerFormWindowToolInterface) QAction {
        return .{ .ptr = qtc.QDesignerFormWindowToolInterface_SuperAction(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `activated` instead
    ///
    pub const Activated = activated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowtoolinterface.html#activated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    pub fn activated(self: QDesignerFormWindowToolInterface) void {
        qtc.QDesignerFormWindowToolInterface_Activated(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onActivated` instead
    ///
    pub const OnActivated = onActivated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowtoolinterface.html#activated)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onActivated(self: QDesignerFormWindowToolInterface, callback: *const fn () callconv(.c) void) void {
        qtc.QDesignerFormWindowToolInterface_OnActivated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superActivated` instead
    ///
    pub const SuperActivated = superActivated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowtoolinterface.html#activated)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    pub fn superActivated(self: QDesignerFormWindowToolInterface) void {
        qtc.QDesignerFormWindowToolInterface_SuperActivated(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `deactivated` instead
    ///
    pub const Deactivated = deactivated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowtoolinterface.html#deactivated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    pub fn deactivated(self: QDesignerFormWindowToolInterface) void {
        qtc.QDesignerFormWindowToolInterface_Deactivated(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDeactivated` instead
    ///
    pub const OnDeactivated = onDeactivated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowtoolinterface.html#deactivated)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onDeactivated(self: QDesignerFormWindowToolInterface, callback: *const fn () callconv(.c) void) void {
        qtc.QDesignerFormWindowToolInterface_OnDeactivated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDeactivated` instead
    ///
    pub const SuperDeactivated = superDeactivated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowtoolinterface.html#deactivated)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    pub fn superDeactivated(self: QDesignerFormWindowToolInterface) void {
        qtc.QDesignerFormWindowToolInterface_SuperDeactivated(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `handleEvent` instead
    ///
    pub const HandleEvent = handleEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowtoolinterface.html#handleEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` widget: QWidget `
    ///
    /// ` managedWidget: QWidget `
    ///
    /// ` _event: QEvent `
    ///
    pub fn handleEvent(self: QDesignerFormWindowToolInterface, widget: anytype, managedWidget: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(widget)._is_QWidget;
        comptime _ = @TypeOf(managedWidget)._is_QWidget;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDesignerFormWindowToolInterface_HandleEvent(@ptrCast(self.ptr), @ptrCast(widget.ptr), @ptrCast(managedWidget.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onHandleEvent` instead
    ///
    pub const OnHandleEvent = onHandleEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowtoolinterface.html#handleEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowToolInterface, widget: QWidget, managedWidget: QWidget, event: QEvent) callconv(.c) bool `
    ///
    pub fn onHandleEvent(self: QDesignerFormWindowToolInterface, callback: *const fn (QDesignerFormWindowToolInterface, QWidget, QWidget, QEvent) callconv(.c) bool) void {
        qtc.QDesignerFormWindowToolInterface_OnHandleEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superHandleEvent` instead
    ///
    pub const SuperHandleEvent = superHandleEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowtoolinterface.html#handleEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` widget: QWidget `
    ///
    /// ` managedWidget: QWidget `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superHandleEvent(self: QDesignerFormWindowToolInterface, widget: anytype, managedWidget: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(widget)._is_QWidget;
        comptime _ = @TypeOf(managedWidget)._is_QWidget;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDesignerFormWindowToolInterface_SuperHandleEvent(@ptrCast(self.ptr), @ptrCast(widget.ptr), @ptrCast(managedWidget.ptr), @ptrCast(_event.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerFormWindowToolInterface.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerFormWindowToolInterface.tr3: Memory allocation failed");
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QDesignerFormWindowToolInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerFormWindowToolInterface.objectName: Memory allocation failed");
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QDesignerFormWindowToolInterface, name: []const u8) void {
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    pub fn isWidgetType(self: QDesignerFormWindowToolInterface) bool {
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    pub fn isWindowType(self: QDesignerFormWindowToolInterface) bool {
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    pub fn isQuickItemType(self: QDesignerFormWindowToolInterface) bool {
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    pub fn signalsBlocked(self: QDesignerFormWindowToolInterface) bool {
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QDesignerFormWindowToolInterface, b: bool) bool {
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    pub fn thread(self: QDesignerFormWindowToolInterface) QThread {
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QDesignerFormWindowToolInterface, _thread: anytype) bool {
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QDesignerFormWindowToolInterface, interval: i32) i32 {
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QDesignerFormWindowToolInterface, time: i64) i32 {
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QDesignerFormWindowToolInterface, id: i32) void {
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QDesignerFormWindowToolInterface, id: i32) void {
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QDesignerFormWindowToolInterface, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QDesignerFormWindowToolInterface.children: Memory allocation failed");
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QDesignerFormWindowToolInterface, _parent: anytype) void {
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QDesignerFormWindowToolInterface, filterObj: anytype) void {
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QDesignerFormWindowToolInterface, obj: anytype) void {
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QDesignerFormWindowToolInterface, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    pub fn disconnect3(self: QDesignerFormWindowToolInterface) bool {
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QDesignerFormWindowToolInterface, receiver: anytype) bool {
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    pub fn dumpObjectTree(self: QDesignerFormWindowToolInterface) void {
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    pub fn dumpObjectInfo(self: QDesignerFormWindowToolInterface) void {
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QDesignerFormWindowToolInterface, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QDesignerFormWindowToolInterface, name: [:0]const u8) QVariant {
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QDesignerFormWindowToolInterface, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QDesignerFormWindowToolInterface.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QDesignerFormWindowToolInterface.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    pub fn bindingStorage(self: QDesignerFormWindowToolInterface) QBindingStorage {
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    pub fn bindingStorage2(self: QDesignerFormWindowToolInterface) QBindingStorage {
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    pub fn destroyed(self: QDesignerFormWindowToolInterface) void {
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowToolInterface) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QDesignerFormWindowToolInterface, callback: *const fn (QDesignerFormWindowToolInterface) callconv(.c) void) void {
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    pub fn parent(self: QDesignerFormWindowToolInterface) QObject {
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QDesignerFormWindowToolInterface, classname: [:0]const u8) bool {
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    pub fn deleteLater(self: QDesignerFormWindowToolInterface) void {
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QDesignerFormWindowToolInterface, interval: i32, timerType: i32) i32 {
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QDesignerFormWindowToolInterface, time: i64, timerType: i32) i32 {
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QDesignerFormWindowToolInterface, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QDesignerFormWindowToolInterface, signal: [:0]const u8) bool {
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QDesignerFormWindowToolInterface, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QDesignerFormWindowToolInterface, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QDesignerFormWindowToolInterface, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QDesignerFormWindowToolInterface, param1: anytype) void {
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowToolInterface, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QDesignerFormWindowToolInterface, callback: *const fn (QDesignerFormWindowToolInterface, QObject) callconv(.c) void) void {
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QDesignerFormWindowToolInterface, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDesignerFormWindowToolInterface_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QDesignerFormWindowToolInterface, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDesignerFormWindowToolInterface_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDesignerFormWindowToolInterface`
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowToolInterface, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QDesignerFormWindowToolInterface, callback: *const fn (QDesignerFormWindowToolInterface, QEvent) callconv(.c) bool) void {
        qtc.QDesignerFormWindowToolInterface_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QDesignerFormWindowToolInterface, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDesignerFormWindowToolInterface_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QDesignerFormWindowToolInterface, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDesignerFormWindowToolInterface_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDesignerFormWindowToolInterface`
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowToolInterface, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QDesignerFormWindowToolInterface, callback: *const fn (QDesignerFormWindowToolInterface, QObject, QEvent) callconv(.c) bool) void {
        qtc.QDesignerFormWindowToolInterface_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QDesignerFormWindowToolInterface, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QDesignerFormWindowToolInterface_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QDesignerFormWindowToolInterface, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QDesignerFormWindowToolInterface_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDesignerFormWindowToolInterface`
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowToolInterface, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QDesignerFormWindowToolInterface, callback: *const fn (QDesignerFormWindowToolInterface, QTimerEvent) callconv(.c) void) void {
        qtc.QDesignerFormWindowToolInterface_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QDesignerFormWindowToolInterface, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QDesignerFormWindowToolInterface_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QDesignerFormWindowToolInterface, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QDesignerFormWindowToolInterface_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDesignerFormWindowToolInterface`
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowToolInterface, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QDesignerFormWindowToolInterface, callback: *const fn (QDesignerFormWindowToolInterface, QChildEvent) callconv(.c) void) void {
        qtc.QDesignerFormWindowToolInterface_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QDesignerFormWindowToolInterface, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QDesignerFormWindowToolInterface_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QDesignerFormWindowToolInterface, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QDesignerFormWindowToolInterface_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDesignerFormWindowToolInterface`
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowToolInterface, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QDesignerFormWindowToolInterface, callback: *const fn (QDesignerFormWindowToolInterface, QEvent) callconv(.c) void) void {
        qtc.QDesignerFormWindowToolInterface_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QDesignerFormWindowToolInterface, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDesignerFormWindowToolInterface_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QDesignerFormWindowToolInterface, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDesignerFormWindowToolInterface_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDesignerFormWindowToolInterface`
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowToolInterface, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QDesignerFormWindowToolInterface, callback: *const fn (QDesignerFormWindowToolInterface, QMetaMethod) callconv(.c) void) void {
        qtc.QDesignerFormWindowToolInterface_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QDesignerFormWindowToolInterface, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDesignerFormWindowToolInterface_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QDesignerFormWindowToolInterface, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDesignerFormWindowToolInterface_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDesignerFormWindowToolInterface`
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowToolInterface, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QDesignerFormWindowToolInterface, callback: *const fn (QDesignerFormWindowToolInterface, QMetaMethod) callconv(.c) void) void {
        qtc.QDesignerFormWindowToolInterface_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    pub fn sender(self: QDesignerFormWindowToolInterface) QObject {
        return .{ .ptr = qtc.QDesignerFormWindowToolInterface_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    pub fn superSender(self: QDesignerFormWindowToolInterface) QObject {
        return .{ .ptr = qtc.QDesignerFormWindowToolInterface_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QDesignerFormWindowToolInterface`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QDesignerFormWindowToolInterface, callback: *const fn () callconv(.c) QObject) void {
        qtc.QDesignerFormWindowToolInterface_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    pub fn senderSignalIndex(self: QDesignerFormWindowToolInterface) i32 {
        return qtc.QDesignerFormWindowToolInterface_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    pub fn superSenderSignalIndex(self: QDesignerFormWindowToolInterface) i32 {
        return qtc.QDesignerFormWindowToolInterface_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QDesignerFormWindowToolInterface`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QDesignerFormWindowToolInterface, callback: *const fn () callconv(.c) i32) void {
        qtc.QDesignerFormWindowToolInterface_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QDesignerFormWindowToolInterface, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDesignerFormWindowToolInterface_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QDesignerFormWindowToolInterface, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDesignerFormWindowToolInterface_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QDesignerFormWindowToolInterface`
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowToolInterface, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QDesignerFormWindowToolInterface, callback: *const fn (QDesignerFormWindowToolInterface, [*:0]const u8) callconv(.c) i32) void {
        qtc.QDesignerFormWindowToolInterface_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QDesignerFormWindowToolInterface, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QDesignerFormWindowToolInterface_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QDesignerFormWindowToolInterface, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QDesignerFormWindowToolInterface_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDesignerFormWindowToolInterface`
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowToolInterface, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QDesignerFormWindowToolInterface, callback: *const fn (QDesignerFormWindowToolInterface, QMetaMethod) callconv(.c) bool) void {
        qtc.QDesignerFormWindowToolInterface_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowToolInterface, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QDesignerFormWindowToolInterface, callback: *const fn (QDesignerFormWindowToolInterface, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowtoolinterface.html#dtor.QDesignerFormWindowToolInterface)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDesignerFormWindowToolInterface `
    ///
    pub fn delete(self: QDesignerFormWindowToolInterface) void {
        qtc.QDesignerFormWindowToolInterface_Delete(@ptrCast(self.ptr));
    }
};
