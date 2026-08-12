const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QDesignerFormEditorInterface = @import("libqt6").QDesignerFormEditorInterface;
const QEvent = @import("libqt6").QEvent;
const QLayout = @import("libqt6").QLayout;
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

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetfactoryinterface.html)
pub const QDesignerWidgetFactoryInterface = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetfactoryinterface.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDesignerWidgetFactoryInterface,

    pub const _is_QDesignerWidgetFactoryInterface = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDesignerWidgetFactoryInterface object in C++ memory
    ///
    pub fn new() QDesignerWidgetFactoryInterface {
        return .{ .ptr = qtc.QDesignerWidgetFactoryInterface_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDesignerWidgetFactoryInterface object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QDesignerWidgetFactoryInterface {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QDesignerWidgetFactoryInterface_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    pub fn metaObject(self: QDesignerWidgetFactoryInterface) QMetaObject {
        return .{ .ptr = qtc.QDesignerWidgetFactoryInterface_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QDesignerWidgetFactoryInterface, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QDesignerWidgetFactoryInterface_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    pub fn superMetaObject(self: QDesignerWidgetFactoryInterface) QMetaObject {
        return .{ .ptr = qtc.QDesignerWidgetFactoryInterface_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QDesignerWidgetFactoryInterface, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDesignerWidgetFactoryInterface_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` callback: *const fn (self: QDesignerWidgetFactoryInterface, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QDesignerWidgetFactoryInterface, callback: *const fn (QDesignerWidgetFactoryInterface, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QDesignerWidgetFactoryInterface_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QDesignerWidgetFactoryInterface, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDesignerWidgetFactoryInterface_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QDesignerWidgetFactoryInterface, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDesignerWidgetFactoryInterface_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` callback: *const fn (self: QDesignerWidgetFactoryInterface, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QDesignerWidgetFactoryInterface, callback: *const fn (QDesignerWidgetFactoryInterface, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QDesignerWidgetFactoryInterface_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QDesignerWidgetFactoryInterface, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDesignerWidgetFactoryInterface_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerWidgetFactoryInterface.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `core` instead
    ///
    pub const Core = core;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetfactoryinterface.html#core)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    pub fn core(self: QDesignerWidgetFactoryInterface) QDesignerFormEditorInterface {
        return .{ .ptr = qtc.QDesignerWidgetFactoryInterface_Core(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onCore` instead
    ///
    pub const OnCore = onCore;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetfactoryinterface.html#core)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` callback: *const fn () callconv(.c) QDesignerFormEditorInterface `
    ///
    pub fn onCore(self: QDesignerWidgetFactoryInterface, callback: *const fn () callconv(.c) QDesignerFormEditorInterface) void {
        qtc.QDesignerWidgetFactoryInterface_OnCore(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCore` instead
    ///
    pub const SuperCore = superCore;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetfactoryinterface.html#core)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    pub fn superCore(self: QDesignerWidgetFactoryInterface) QDesignerFormEditorInterface {
        return .{ .ptr = qtc.QDesignerWidgetFactoryInterface_SuperCore(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `containerOfWidget` instead
    ///
    pub const ContainerOfWidget = containerOfWidget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetfactoryinterface.html#containerOfWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` w: QWidget `
    ///
    pub fn containerOfWidget(self: QDesignerWidgetFactoryInterface, w: anytype) QWidget {
        comptime _ = @TypeOf(w)._is_QWidget;
        return .{ .ptr = qtc.QDesignerWidgetFactoryInterface_ContainerOfWidget(@ptrCast(self.ptr), @ptrCast(w.ptr)) };
    }

    /// ### DEPRECATED: Use `onContainerOfWidget` instead
    ///
    pub const OnContainerOfWidget = onContainerOfWidget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetfactoryinterface.html#containerOfWidget)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` callback: *const fn (self: QDesignerWidgetFactoryInterface, w: QWidget) callconv(.c) QWidget `
    ///
    pub fn onContainerOfWidget(self: QDesignerWidgetFactoryInterface, callback: *const fn (QDesignerWidgetFactoryInterface, QWidget) callconv(.c) QWidget) void {
        qtc.QDesignerWidgetFactoryInterface_OnContainerOfWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superContainerOfWidget` instead
    ///
    pub const SuperContainerOfWidget = superContainerOfWidget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetfactoryinterface.html#containerOfWidget)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` w: QWidget `
    ///
    pub fn superContainerOfWidget(self: QDesignerWidgetFactoryInterface, w: anytype) QWidget {
        comptime _ = @TypeOf(w)._is_QWidget;
        return .{ .ptr = qtc.QDesignerWidgetFactoryInterface_SuperContainerOfWidget(@ptrCast(self.ptr), @ptrCast(w.ptr)) };
    }

    /// ### DEPRECATED: Use `widgetOfContainer` instead
    ///
    pub const WidgetOfContainer = widgetOfContainer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetfactoryinterface.html#widgetOfContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` w: QWidget `
    ///
    pub fn widgetOfContainer(self: QDesignerWidgetFactoryInterface, w: anytype) QWidget {
        comptime _ = @TypeOf(w)._is_QWidget;
        return .{ .ptr = qtc.QDesignerWidgetFactoryInterface_WidgetOfContainer(@ptrCast(self.ptr), @ptrCast(w.ptr)) };
    }

    /// ### DEPRECATED: Use `onWidgetOfContainer` instead
    ///
    pub const OnWidgetOfContainer = onWidgetOfContainer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetfactoryinterface.html#widgetOfContainer)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` callback: *const fn (self: QDesignerWidgetFactoryInterface, w: QWidget) callconv(.c) QWidget `
    ///
    pub fn onWidgetOfContainer(self: QDesignerWidgetFactoryInterface, callback: *const fn (QDesignerWidgetFactoryInterface, QWidget) callconv(.c) QWidget) void {
        qtc.QDesignerWidgetFactoryInterface_OnWidgetOfContainer(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superWidgetOfContainer` instead
    ///
    pub const SuperWidgetOfContainer = superWidgetOfContainer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetfactoryinterface.html#widgetOfContainer)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` w: QWidget `
    ///
    pub fn superWidgetOfContainer(self: QDesignerWidgetFactoryInterface, w: anytype) QWidget {
        comptime _ = @TypeOf(w)._is_QWidget;
        return .{ .ptr = qtc.QDesignerWidgetFactoryInterface_SuperWidgetOfContainer(@ptrCast(self.ptr), @ptrCast(w.ptr)) };
    }

    /// ### DEPRECATED: Use `createWidget` instead
    ///
    pub const CreateWidget = createWidget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetfactoryinterface.html#createWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` name: []const u8 `
    ///
    /// ` parentWidget: QWidget `
    ///
    pub fn createWidget(self: QDesignerWidgetFactoryInterface, name: []const u8, parentWidget: anytype) QWidget {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(parentWidget)._is_QWidget;
        return .{ .ptr = qtc.QDesignerWidgetFactoryInterface_CreateWidget(@ptrCast(self.ptr), name_str, @ptrCast(parentWidget.ptr)) };
    }

    /// ### DEPRECATED: Use `onCreateWidget` instead
    ///
    pub const OnCreateWidget = onCreateWidget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetfactoryinterface.html#createWidget)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` callback: *const fn (self: QDesignerWidgetFactoryInterface, name: [*:0]const u8, parentWidget: QWidget) callconv(.c) QWidget `
    ///
    pub fn onCreateWidget(self: QDesignerWidgetFactoryInterface, callback: *const fn (QDesignerWidgetFactoryInterface, [*:0]const u8, QWidget) callconv(.c) QWidget) void {
        qtc.QDesignerWidgetFactoryInterface_OnCreateWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCreateWidget` instead
    ///
    pub const SuperCreateWidget = superCreateWidget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetfactoryinterface.html#createWidget)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` name: []const u8 `
    ///
    /// ` parentWidget: QWidget `
    ///
    pub fn superCreateWidget(self: QDesignerWidgetFactoryInterface, name: []const u8, parentWidget: anytype) QWidget {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(parentWidget)._is_QWidget;
        return .{ .ptr = qtc.QDesignerWidgetFactoryInterface_SuperCreateWidget(@ptrCast(self.ptr), name_str, @ptrCast(parentWidget.ptr)) };
    }

    /// ### DEPRECATED: Use `createLayout` instead
    ///
    pub const CreateLayout = createLayout;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetfactoryinterface.html#createLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` widget: QWidget `
    ///
    /// ` layout: QLayout `
    ///
    /// ` typeVal: i32 `
    ///
    pub fn createLayout(self: QDesignerWidgetFactoryInterface, widget: anytype, layout: anytype, typeVal: i32) QLayout {
        comptime _ = @TypeOf(widget)._is_QWidget;
        comptime _ = @TypeOf(layout)._is_QLayout;
        return .{ .ptr = qtc.QDesignerWidgetFactoryInterface_CreateLayout(@ptrCast(self.ptr), @ptrCast(widget.ptr), @ptrCast(layout.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `onCreateLayout` instead
    ///
    pub const OnCreateLayout = onCreateLayout;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetfactoryinterface.html#createLayout)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` callback: *const fn (self: QDesignerWidgetFactoryInterface, widget: QWidget, layout: QLayout, typeVal: i32) callconv(.c) QLayout `
    ///
    pub fn onCreateLayout(self: QDesignerWidgetFactoryInterface, callback: *const fn (QDesignerWidgetFactoryInterface, QWidget, QLayout, i32) callconv(.c) QLayout) void {
        qtc.QDesignerWidgetFactoryInterface_OnCreateLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCreateLayout` instead
    ///
    pub const SuperCreateLayout = superCreateLayout;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetfactoryinterface.html#createLayout)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` widget: QWidget `
    ///
    /// ` layout: QLayout `
    ///
    /// ` typeVal: i32 `
    ///
    pub fn superCreateLayout(self: QDesignerWidgetFactoryInterface, widget: anytype, layout: anytype, typeVal: i32) QLayout {
        comptime _ = @TypeOf(widget)._is_QWidget;
        comptime _ = @TypeOf(layout)._is_QLayout;
        return .{ .ptr = qtc.QDesignerWidgetFactoryInterface_SuperCreateLayout(@ptrCast(self.ptr), @ptrCast(widget.ptr), @ptrCast(layout.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `isPassiveInteractor` instead
    ///
    pub const IsPassiveInteractor = isPassiveInteractor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetfactoryinterface.html#isPassiveInteractor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` widget: QWidget `
    ///
    pub fn isPassiveInteractor(self: QDesignerWidgetFactoryInterface, widget: anytype) bool {
        comptime _ = @TypeOf(widget)._is_QWidget;
        return qtc.QDesignerWidgetFactoryInterface_IsPassiveInteractor(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `onIsPassiveInteractor` instead
    ///
    pub const OnIsPassiveInteractor = onIsPassiveInteractor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetfactoryinterface.html#isPassiveInteractor)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` callback: *const fn (self: QDesignerWidgetFactoryInterface, widget: QWidget) callconv(.c) bool `
    ///
    pub fn onIsPassiveInteractor(self: QDesignerWidgetFactoryInterface, callback: *const fn (QDesignerWidgetFactoryInterface, QWidget) callconv(.c) bool) void {
        qtc.QDesignerWidgetFactoryInterface_OnIsPassiveInteractor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsPassiveInteractor` instead
    ///
    pub const SuperIsPassiveInteractor = superIsPassiveInteractor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetfactoryinterface.html#isPassiveInteractor)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` widget: QWidget `
    ///
    pub fn superIsPassiveInteractor(self: QDesignerWidgetFactoryInterface, widget: anytype) bool {
        comptime _ = @TypeOf(widget)._is_QWidget;
        return qtc.QDesignerWidgetFactoryInterface_SuperIsPassiveInteractor(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `initialize` instead
    ///
    pub const Initialize = initialize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetfactoryinterface.html#initialize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` object: QObject `
    ///
    pub fn initialize(self: QDesignerWidgetFactoryInterface, object: anytype) void {
        comptime _ = @TypeOf(object)._is_QObject;
        qtc.QDesignerWidgetFactoryInterface_Initialize(@ptrCast(self.ptr), @ptrCast(object.ptr));
    }

    /// ### DEPRECATED: Use `onInitialize` instead
    ///
    pub const OnInitialize = onInitialize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetfactoryinterface.html#initialize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` callback: *const fn (self: QDesignerWidgetFactoryInterface, object: QObject) callconv(.c) void `
    ///
    pub fn onInitialize(self: QDesignerWidgetFactoryInterface, callback: *const fn (QDesignerWidgetFactoryInterface, QObject) callconv(.c) void) void {
        qtc.QDesignerWidgetFactoryInterface_OnInitialize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superInitialize` instead
    ///
    pub const SuperInitialize = superInitialize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetfactoryinterface.html#initialize)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` object: QObject `
    ///
    pub fn superInitialize(self: QDesignerWidgetFactoryInterface, object: anytype) void {
        comptime _ = @TypeOf(object)._is_QObject;
        qtc.QDesignerWidgetFactoryInterface_SuperInitialize(@ptrCast(self.ptr), @ptrCast(object.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerWidgetFactoryInterface.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerWidgetFactoryInterface.tr3: Memory allocation failed");
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QDesignerWidgetFactoryInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerWidgetFactoryInterface.objectName: Memory allocation failed");
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QDesignerWidgetFactoryInterface, name: []const u8) void {
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    pub fn isWidgetType(self: QDesignerWidgetFactoryInterface) bool {
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    pub fn isWindowType(self: QDesignerWidgetFactoryInterface) bool {
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    pub fn isQuickItemType(self: QDesignerWidgetFactoryInterface) bool {
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    pub fn signalsBlocked(self: QDesignerWidgetFactoryInterface) bool {
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QDesignerWidgetFactoryInterface, b: bool) bool {
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    pub fn thread(self: QDesignerWidgetFactoryInterface) QThread {
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QDesignerWidgetFactoryInterface, _thread: anytype) bool {
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QDesignerWidgetFactoryInterface, interval: i32) i32 {
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QDesignerWidgetFactoryInterface, time: i64) i32 {
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QDesignerWidgetFactoryInterface, id: i32) void {
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QDesignerWidgetFactoryInterface, id: i32) void {
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QDesignerWidgetFactoryInterface, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QDesignerWidgetFactoryInterface.children: Memory allocation failed");
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QDesignerWidgetFactoryInterface, _parent: anytype) void {
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QDesignerWidgetFactoryInterface, filterObj: anytype) void {
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QDesignerWidgetFactoryInterface, obj: anytype) void {
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QDesignerWidgetFactoryInterface, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    pub fn disconnect3(self: QDesignerWidgetFactoryInterface) bool {
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QDesignerWidgetFactoryInterface, receiver: anytype) bool {
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    pub fn dumpObjectTree(self: QDesignerWidgetFactoryInterface) void {
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    pub fn dumpObjectInfo(self: QDesignerWidgetFactoryInterface) void {
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QDesignerWidgetFactoryInterface, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QDesignerWidgetFactoryInterface, name: [:0]const u8) QVariant {
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QDesignerWidgetFactoryInterface, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QDesignerWidgetFactoryInterface.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QDesignerWidgetFactoryInterface.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    pub fn bindingStorage(self: QDesignerWidgetFactoryInterface) QBindingStorage {
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    pub fn bindingStorage2(self: QDesignerWidgetFactoryInterface) QBindingStorage {
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    pub fn destroyed(self: QDesignerWidgetFactoryInterface) void {
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` callback: *const fn (self: QDesignerWidgetFactoryInterface) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QDesignerWidgetFactoryInterface, callback: *const fn (QDesignerWidgetFactoryInterface) callconv(.c) void) void {
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    pub fn parent(self: QDesignerWidgetFactoryInterface) QObject {
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QDesignerWidgetFactoryInterface, classname: [:0]const u8) bool {
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    pub fn deleteLater(self: QDesignerWidgetFactoryInterface) void {
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QDesignerWidgetFactoryInterface, interval: i32, timerType: i32) i32 {
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QDesignerWidgetFactoryInterface, time: i64, timerType: i32) i32 {
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QDesignerWidgetFactoryInterface, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QDesignerWidgetFactoryInterface, signal: [:0]const u8) bool {
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QDesignerWidgetFactoryInterface, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QDesignerWidgetFactoryInterface, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QDesignerWidgetFactoryInterface, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QDesignerWidgetFactoryInterface, param1: anytype) void {
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` callback: *const fn (self: QDesignerWidgetFactoryInterface, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QDesignerWidgetFactoryInterface, callback: *const fn (QDesignerWidgetFactoryInterface, QObject) callconv(.c) void) void {
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QDesignerWidgetFactoryInterface, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDesignerWidgetFactoryInterface_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QDesignerWidgetFactoryInterface, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDesignerWidgetFactoryInterface_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDesignerWidgetFactoryInterface`
    ///
    /// ` callback: *const fn (self: QDesignerWidgetFactoryInterface, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QDesignerWidgetFactoryInterface, callback: *const fn (QDesignerWidgetFactoryInterface, QEvent) callconv(.c) bool) void {
        qtc.QDesignerWidgetFactoryInterface_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QDesignerWidgetFactoryInterface, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDesignerWidgetFactoryInterface_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QDesignerWidgetFactoryInterface, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDesignerWidgetFactoryInterface_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDesignerWidgetFactoryInterface`
    ///
    /// ` callback: *const fn (self: QDesignerWidgetFactoryInterface, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QDesignerWidgetFactoryInterface, callback: *const fn (QDesignerWidgetFactoryInterface, QObject, QEvent) callconv(.c) bool) void {
        qtc.QDesignerWidgetFactoryInterface_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QDesignerWidgetFactoryInterface, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QDesignerWidgetFactoryInterface_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QDesignerWidgetFactoryInterface, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QDesignerWidgetFactoryInterface_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDesignerWidgetFactoryInterface`
    ///
    /// ` callback: *const fn (self: QDesignerWidgetFactoryInterface, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QDesignerWidgetFactoryInterface, callback: *const fn (QDesignerWidgetFactoryInterface, QTimerEvent) callconv(.c) void) void {
        qtc.QDesignerWidgetFactoryInterface_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QDesignerWidgetFactoryInterface, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QDesignerWidgetFactoryInterface_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QDesignerWidgetFactoryInterface, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QDesignerWidgetFactoryInterface_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDesignerWidgetFactoryInterface`
    ///
    /// ` callback: *const fn (self: QDesignerWidgetFactoryInterface, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QDesignerWidgetFactoryInterface, callback: *const fn (QDesignerWidgetFactoryInterface, QChildEvent) callconv(.c) void) void {
        qtc.QDesignerWidgetFactoryInterface_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QDesignerWidgetFactoryInterface, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QDesignerWidgetFactoryInterface_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QDesignerWidgetFactoryInterface, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QDesignerWidgetFactoryInterface_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDesignerWidgetFactoryInterface`
    ///
    /// ` callback: *const fn (self: QDesignerWidgetFactoryInterface, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QDesignerWidgetFactoryInterface, callback: *const fn (QDesignerWidgetFactoryInterface, QEvent) callconv(.c) void) void {
        qtc.QDesignerWidgetFactoryInterface_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QDesignerWidgetFactoryInterface, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDesignerWidgetFactoryInterface_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QDesignerWidgetFactoryInterface, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDesignerWidgetFactoryInterface_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDesignerWidgetFactoryInterface`
    ///
    /// ` callback: *const fn (self: QDesignerWidgetFactoryInterface, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QDesignerWidgetFactoryInterface, callback: *const fn (QDesignerWidgetFactoryInterface, QMetaMethod) callconv(.c) void) void {
        qtc.QDesignerWidgetFactoryInterface_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QDesignerWidgetFactoryInterface, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDesignerWidgetFactoryInterface_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QDesignerWidgetFactoryInterface, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDesignerWidgetFactoryInterface_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDesignerWidgetFactoryInterface`
    ///
    /// ` callback: *const fn (self: QDesignerWidgetFactoryInterface, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QDesignerWidgetFactoryInterface, callback: *const fn (QDesignerWidgetFactoryInterface, QMetaMethod) callconv(.c) void) void {
        qtc.QDesignerWidgetFactoryInterface_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    pub fn sender(self: QDesignerWidgetFactoryInterface) QObject {
        return .{ .ptr = qtc.QDesignerWidgetFactoryInterface_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    pub fn superSender(self: QDesignerWidgetFactoryInterface) QObject {
        return .{ .ptr = qtc.QDesignerWidgetFactoryInterface_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QDesignerWidgetFactoryInterface`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QDesignerWidgetFactoryInterface, callback: *const fn () callconv(.c) QObject) void {
        qtc.QDesignerWidgetFactoryInterface_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    pub fn senderSignalIndex(self: QDesignerWidgetFactoryInterface) i32 {
        return qtc.QDesignerWidgetFactoryInterface_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    pub fn superSenderSignalIndex(self: QDesignerWidgetFactoryInterface) i32 {
        return qtc.QDesignerWidgetFactoryInterface_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QDesignerWidgetFactoryInterface`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QDesignerWidgetFactoryInterface, callback: *const fn () callconv(.c) i32) void {
        qtc.QDesignerWidgetFactoryInterface_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QDesignerWidgetFactoryInterface, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDesignerWidgetFactoryInterface_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QDesignerWidgetFactoryInterface, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDesignerWidgetFactoryInterface_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QDesignerWidgetFactoryInterface`
    ///
    /// ` callback: *const fn (self: QDesignerWidgetFactoryInterface, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QDesignerWidgetFactoryInterface, callback: *const fn (QDesignerWidgetFactoryInterface, [*:0]const u8) callconv(.c) i32) void {
        qtc.QDesignerWidgetFactoryInterface_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QDesignerWidgetFactoryInterface, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QDesignerWidgetFactoryInterface_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QDesignerWidgetFactoryInterface, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QDesignerWidgetFactoryInterface_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDesignerWidgetFactoryInterface`
    ///
    /// ` callback: *const fn (self: QDesignerWidgetFactoryInterface, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QDesignerWidgetFactoryInterface, callback: *const fn (QDesignerWidgetFactoryInterface, QMetaMethod) callconv(.c) bool) void {
        qtc.QDesignerWidgetFactoryInterface_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    /// ` callback: *const fn (self: QDesignerWidgetFactoryInterface, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QDesignerWidgetFactoryInterface, callback: *const fn (QDesignerWidgetFactoryInterface, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetfactoryinterface.html#dtor.QDesignerWidgetFactoryInterface)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDesignerWidgetFactoryInterface `
    ///
    pub fn delete(self: QDesignerWidgetFactoryInterface) void {
        qtc.QDesignerWidgetFactoryInterface_Delete(@ptrCast(self.ptr));
    }
};
