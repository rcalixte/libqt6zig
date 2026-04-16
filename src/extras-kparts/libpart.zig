const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KActionCollection = @import("libqt6").KActionCollection;
const KParts__GUIActivateEvent = @import("libqt6").KParts__GUIActivateEvent;
const KParts__PartActivateEvent = @import("libqt6").KParts__PartActivateEvent;
const KParts__PartManager = @import("libqt6").KParts__PartManager;
const KPluginMetaData = @import("libqt6").KPluginMetaData;
const KXMLGUIBuilder = @import("libqt6").KXMLGUIBuilder;
const KXMLGUIClient = @import("libqt6").KXMLGUIClient;
const KXMLGUIClient__StateChange = @import("libqt6").KXMLGUIClient__StateChange;
const KXMLGUIFactory = @import("libqt6").KXMLGUIFactory;
const QAction = @import("libqt6").QAction;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QDomDocument = @import("libqt6").QDomDocument;
const QDomElement = @import("libqt6").QDomElement;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPoint = @import("libqt6").QPoint;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const QWidget = @import("libqt6").QWidget;
const kxmlguiclient_enums = @import("../extras-kxmlgui/libkxmlguiclient.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kparts-part.html)
pub const KParts__Part = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KParts__Part,

    pub const _is_KParts__Part = {};
    pub const _is_QObject = {};
    pub const _is_KParts__PartBase = {};
    pub const _is_KXMLGUIClient = {};

    /// New constructs a new KParts::Part object.
    ///
    pub fn New() KParts__Part {
        return .{ .ptr = qtc.KParts__Part_new() };
    }

    /// New2 constructs a new KParts::Part object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) KParts__Part {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KParts__Part_new2(@ptrCast(parent.ptr)) };
    }

    /// New3 constructs a new KParts::Part object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    /// ` data: KPluginMetaData `
    ///
    pub fn New3(parent: anytype, data: anytype) KParts__Part {
        comptime _ = @TypeOf(parent)._is_QObject;
        comptime _ = @TypeOf(data)._is_KPluginMetaData;
        return .{ .ptr = qtc.KParts__Part_new3(@ptrCast(parent.ptr), @ptrCast(data.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    pub fn MetaObject(self: KParts__Part) QMetaObject {
        return .{ .ptr = qtc.KParts__Part_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__Part `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: KParts__Part, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KParts__Part_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KParts__Part `
    ///
    pub fn SuperMetaObject(self: KParts__Part) QMetaObject {
        return .{ .ptr = qtc.KParts__Part_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KParts__Part, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KParts__Part_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__Part `
    ///
    /// ` callback: *const fn (self: KParts__Part, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KParts__Part, callback: *const fn (KParts__Part, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KParts__Part_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KParts__Part, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KParts__Part_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KParts__Part, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KParts__Part_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__Part `
    ///
    /// ` callback: *const fn (self: KParts__Part, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KParts__Part, callback: *const fn (KParts__Part, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KParts__Part_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: KParts__Part, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KParts__Part_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__part.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    pub fn Widget(self: KParts__Part) QWidget {
        return .{ .ptr = qtc.KParts__Part_Widget(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#widget)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__Part `
    ///
    /// ` callback: *const fn () callconv(.c) QWidget `
    ///
    pub fn OnWidget(self: KParts__Part, callback: *const fn () callconv(.c) QWidget) void {
        qtc.KParts__Part_OnWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperWidget` instead
    ///
    pub const QBaseWidget = SuperWidget;

    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#widget)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    pub fn SuperWidget(self: KParts__Part) QWidget {
        return .{ .ptr = qtc.KParts__Part_SuperWidget(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#setManager)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` manager: KParts__PartManager `
    ///
    pub fn SetManager(self: KParts__Part, manager: anytype) void {
        comptime _ = @TypeOf(manager)._is_KParts__PartManager;
        qtc.KParts__Part_SetManager(@ptrCast(self.ptr), @ptrCast(manager.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#setManager)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__Part `
    ///
    /// ` callback: *const fn (self: KParts__Part, manager: KParts__PartManager) callconv(.c) void `
    ///
    pub fn OnSetManager(self: KParts__Part, callback: *const fn (KParts__Part, KParts__PartManager) callconv(.c) void) void {
        qtc.KParts__Part_OnSetManager(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetManager` instead
    ///
    pub const QBaseSetManager = SuperSetManager;

    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#setManager)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` manager: KParts__PartManager `
    ///
    pub fn SuperSetManager(self: KParts__Part, manager: anytype) void {
        comptime _ = @TypeOf(manager)._is_KParts__PartManager;
        qtc.KParts__Part_SuperSetManager(@ptrCast(self.ptr), @ptrCast(manager.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#manager)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    pub fn Manager(self: KParts__Part) KParts__PartManager {
        return .{ .ptr = qtc.KParts__Part_Manager(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#setAutoDeleteWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` autoDeleteWidget: bool `
    ///
    pub fn SetAutoDeleteWidget(self: KParts__Part, autoDeleteWidget: bool) void {
        qtc.KParts__Part_SetAutoDeleteWidget(@ptrCast(self.ptr), autoDeleteWidget);
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#setAutoDeletePart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` autoDeletePart: bool `
    ///
    pub fn SetAutoDeletePart(self: KParts__Part, autoDeletePart: bool) void {
        qtc.KParts__Part_SetAutoDeletePart(@ptrCast(self.ptr), autoDeletePart);
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#hitTest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` widget: QWidget `
    ///
    /// ` globalPos: QPoint `
    ///
    pub fn HitTest(self: KParts__Part, widget: anytype, globalPos: anytype) KParts__Part {
        comptime _ = @TypeOf(widget)._is_QWidget;
        comptime _ = @TypeOf(globalPos)._is_QPoint;
        return .{ .ptr = qtc.KParts__Part_HitTest(@ptrCast(self.ptr), @ptrCast(widget.ptr), @ptrCast(globalPos.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#hitTest)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__Part `
    ///
    /// ` callback: *const fn (self: KParts__Part, widget: QWidget, globalPos: QPoint) callconv(.c) KParts__Part `
    ///
    pub fn OnHitTest(self: KParts__Part, callback: *const fn (KParts__Part, QWidget, QPoint) callconv(.c) KParts__Part) void {
        qtc.KParts__Part_OnHitTest(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperHitTest` instead
    ///
    pub const QBaseHitTest = SuperHitTest;

    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#hitTest)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` widget: QWidget `
    ///
    /// ` globalPos: QPoint `
    ///
    pub fn SuperHitTest(self: KParts__Part, widget: anytype, globalPos: anytype) KParts__Part {
        comptime _ = @TypeOf(widget)._is_QWidget;
        comptime _ = @TypeOf(globalPos)._is_QPoint;
        return .{ .ptr = qtc.KParts__Part_SuperHitTest(@ptrCast(self.ptr), @ptrCast(widget.ptr), @ptrCast(globalPos.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#metaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    pub fn MetaData(self: KParts__Part) KPluginMetaData {
        return .{ .ptr = qtc.KParts__Part_MetaData(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#setWindowCaption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` caption: []const u8 `
    ///
    pub fn SetWindowCaption(self: KParts__Part, caption: []const u8) void {
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        qtc.KParts__Part_SetWindowCaption(@ptrCast(self.ptr), caption_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#setWindowCaption)
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__Part `
    ///
    /// ` callback: *const fn (self: KParts__Part, caption: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetWindowCaption(self: KParts__Part, callback: *const fn (KParts__Part, [*:0]const u8) callconv(.c) void) void {
        qtc.KParts__Part_Connect_SetWindowCaption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#setStatusBarText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetStatusBarText(self: KParts__Part, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KParts__Part_SetStatusBarText(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#setStatusBarText)
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__Part `
    ///
    /// ` callback: *const fn (self: KParts__Part, text: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetStatusBarText(self: KParts__Part, callback: *const fn (KParts__Part, [*:0]const u8) callconv(.c) void) void {
        qtc.KParts__Part_Connect_SetStatusBarText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#setWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SetWidget(self: KParts__Part, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.KParts__Part_SetWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#setWidget)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__Part `
    ///
    /// ` callback: *const fn (self: KParts__Part, widget: QWidget) callconv(.c) void `
    ///
    pub fn OnSetWidget(self: KParts__Part, callback: *const fn (KParts__Part, QWidget) callconv(.c) void) void {
        qtc.KParts__Part_OnSetWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetWidget` instead
    ///
    pub const QBaseSetWidget = SuperSetWidget;

    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#setWidget)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SuperSetWidget(self: KParts__Part, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.KParts__Part_SuperSetWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#customEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KParts__Part, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KParts__Part_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#customEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__Part `
    ///
    /// ` callback: *const fn (self: KParts__Part, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: KParts__Part, callback: *const fn (KParts__Part, QEvent) callconv(.c) void) void {
        qtc.KParts__Part_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCustomEvent` instead
    ///
    pub const QBaseCustomEvent = SuperCustomEvent;

    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#customEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KParts__Part, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KParts__Part_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#partActivateEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` event: KParts__PartActivateEvent `
    ///
    pub fn PartActivateEvent(self: KParts__Part, event: anytype) void {
        comptime _ = @TypeOf(event)._is_KParts__PartActivateEvent;
        qtc.KParts__Part_PartActivateEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#partActivateEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__Part `
    ///
    /// ` callback: *const fn (self: KParts__Part, event: KParts__PartActivateEvent) callconv(.c) void `
    ///
    pub fn OnPartActivateEvent(self: KParts__Part, callback: *const fn (KParts__Part, KParts__PartActivateEvent) callconv(.c) void) void {
        qtc.KParts__Part_OnPartActivateEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPartActivateEvent` instead
    ///
    pub const QBasePartActivateEvent = SuperPartActivateEvent;

    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#partActivateEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` event: KParts__PartActivateEvent `
    ///
    pub fn SuperPartActivateEvent(self: KParts__Part, event: anytype) void {
        comptime _ = @TypeOf(event)._is_KParts__PartActivateEvent;
        qtc.KParts__Part_SuperPartActivateEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#guiActivateEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` event: KParts__GUIActivateEvent `
    ///
    pub fn GuiActivateEvent(self: KParts__Part, event: anytype) void {
        comptime _ = @TypeOf(event)._is_KParts__GUIActivateEvent;
        qtc.KParts__Part_GuiActivateEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#guiActivateEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__Part `
    ///
    /// ` callback: *const fn (self: KParts__Part, event: KParts__GUIActivateEvent) callconv(.c) void `
    ///
    pub fn OnGuiActivateEvent(self: KParts__Part, callback: *const fn (KParts__Part, KParts__GUIActivateEvent) callconv(.c) void) void {
        qtc.KParts__Part_OnGuiActivateEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperGuiActivateEvent` instead
    ///
    pub const QBaseGuiActivateEvent = SuperGuiActivateEvent;

    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#guiActivateEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` event: KParts__GUIActivateEvent `
    ///
    pub fn SuperGuiActivateEvent(self: KParts__Part, event: anytype) void {
        comptime _ = @TypeOf(event)._is_KParts__GUIActivateEvent;
        qtc.KParts__Part_SuperGuiActivateEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#hostContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` containerName: []const u8 `
    ///
    pub fn HostContainer(self: KParts__Part, containerName: []const u8) QWidget {
        const containerName_str = qtc.libqt_string{
            .len = containerName.len,
            .data = containerName.ptr,
        };
        return .{ .ptr = qtc.KParts__Part_HostContainer(@ptrCast(self.ptr), containerName_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#hostContainer)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__Part `
    ///
    /// ` callback: *const fn (self: KParts__Part, containerName: [*:0]const u8) callconv(.c) QWidget `
    ///
    pub fn OnHostContainer(self: KParts__Part, callback: *const fn (KParts__Part, [*:0]const u8) callconv(.c) QWidget) void {
        qtc.KParts__Part_OnHostContainer(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperHostContainer` instead
    ///
    pub const QBaseHostContainer = SuperHostContainer;

    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#hostContainer)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` containerName: []const u8 `
    ///
    pub fn SuperHostContainer(self: KParts__Part, containerName: []const u8) QWidget {
        const containerName_str = qtc.libqt_string{
            .len = containerName.len,
            .data = containerName.ptr,
        };
        return .{ .ptr = qtc.KParts__Part_SuperHostContainer(@ptrCast(self.ptr), containerName_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#slotWidgetDestroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    pub fn SlotWidgetDestroyed(self: KParts__Part) void {
        qtc.KParts__Part_SlotWidgetDestroyed(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#slotWidgetDestroyed)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__Part `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnSlotWidgetDestroyed(self: KParts__Part, callback: *const fn () callconv(.c) void) void {
        qtc.KParts__Part_OnSlotWidgetDestroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSlotWidgetDestroyed` instead
    ///
    pub const QBaseSlotWidgetDestroyed = SuperSlotWidgetDestroyed;

    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#slotWidgetDestroyed)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    pub fn SuperSlotWidgetDestroyed(self: KParts__Part) void {
        qtc.KParts__Part_SuperSlotWidgetDestroyed(@ptrCast(self.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__part.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__part.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KParts__Part, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__part.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KParts__Part, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    pub fn IsWidgetType(self: KParts__Part) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    pub fn IsWindowType(self: KParts__Part) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    pub fn IsQuickItemType(self: KParts__Part) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    pub fn SignalsBlocked(self: KParts__Part) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KParts__Part, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    pub fn Thread(self: KParts__Part) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KParts__Part, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KParts__Part, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KParts__Part, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KParts__Part, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KParts__Part, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KParts__Part, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("kparts__part.Children: Memory allocation failed");
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
    /// ` self: KParts__Part `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KParts__Part, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KParts__Part, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KParts__Part, obj: anytype) void {
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
    /// ` self: KParts__Part `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KParts__Part, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KParts__Part `
    ///
    pub fn Disconnect3(self: KParts__Part) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KParts__Part, receiver: anytype) bool {
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
    /// ` self: KParts__Part `
    ///
    pub fn DumpObjectTree(self: KParts__Part) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    pub fn DumpObjectInfo(self: KParts__Part) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KParts__Part, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KParts__Part `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KParts__Part, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KParts__Part, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kparts__part.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kparts__part.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KParts__Part `
    ///
    pub fn BindingStorage(self: KParts__Part) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    pub fn BindingStorage2(self: KParts__Part) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    pub fn Destroyed(self: KParts__Part) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__Part `
    ///
    /// ` callback: *const fn (self: KParts__Part) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KParts__Part, callback: *const fn (KParts__Part) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    pub fn Parent(self: KParts__Part) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KParts__Part, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    pub fn DeleteLater(self: KParts__Part) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KParts__Part, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KParts__Part, time: i64, timerType: i32) i32 {
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
    /// ` self: KParts__Part `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KParts__Part, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KParts__Part `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KParts__Part, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KParts__Part, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KParts__Part `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KParts__Part, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KParts__Part `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KParts__Part, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KParts__Part `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KParts__Part, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__Part `
    ///
    /// ` callback: *const fn (self: KParts__Part, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KParts__Part, callback: *const fn (KParts__Part, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KParts::PartBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-partbase.html#setPartObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` object: QObject `
    ///
    pub fn SetPartObject(self: KParts__Part, object: anytype) void {
        comptime _ = @TypeOf(object)._is_QObject;
        qtc.KParts__PartBase_SetPartObject(@ptrCast(self.ptr), @ptrCast(object.ptr));
    }

    /// Inherited from KParts::PartBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-partbase.html#partObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    pub fn PartObject(self: KParts__Part) QObject {
        return .{ .ptr = qtc.KParts__PartBase_PartObject(@ptrCast(self.ptr)) };
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#action)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` name: []const u8 `
    ///
    pub fn Action(self: KParts__Part, name: []const u8) QAction {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KXMLGUIClient_Action(@ptrCast(self.ptr), name_str) };
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXMLGUIBuildDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` doc: QDomDocument `
    ///
    pub fn SetXMLGUIBuildDocument(self: KParts__Part, doc: anytype) void {
        comptime _ = @TypeOf(doc)._is_QDomDocument;
        qtc.KXMLGUIClient_SetXMLGUIBuildDocument(@ptrCast(self.ptr), @ptrCast(doc.ptr));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlguiBuildDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    pub fn XmlguiBuildDocument(self: KParts__Part) QDomDocument {
        return .{ .ptr = qtc.KXMLGUIClient_XmlguiBuildDocument(@ptrCast(self.ptr)) };
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setFactory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` factory: KXMLGUIFactory `
    ///
    pub fn SetFactory(self: KParts__Part, factory: anytype) void {
        comptime _ = @TypeOf(factory)._is_KXMLGUIFactory;
        qtc.KXMLGUIClient_SetFactory(@ptrCast(self.ptr), @ptrCast(factory.ptr));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#factory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    pub fn Factory(self: KParts__Part) KXMLGUIFactory {
        return .{ .ptr = qtc.KXMLGUIClient_Factory(@ptrCast(self.ptr)) };
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#parentClient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    pub fn ParentClient(self: KParts__Part) KXMLGUIClient {
        return .{ .ptr = qtc.KXMLGUIClient_ParentClient(@ptrCast(self.ptr)) };
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#insertChildClient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` child: KXMLGUIClient `
    ///
    pub fn InsertChildClient(self: KParts__Part, child: anytype) void {
        comptime _ = @TypeOf(child)._is_KXMLGUIClient;
        qtc.KXMLGUIClient_InsertChildClient(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#removeChildClient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` child: KXMLGUIClient `
    ///
    pub fn RemoveChildClient(self: KParts__Part, child: anytype) void {
        comptime _ = @TypeOf(child)._is_KXMLGUIClient;
        qtc.KXMLGUIClient_RemoveChildClient(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#childClients)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ChildClients(self: KParts__Part, allocator: std.mem.Allocator) []KXMLGUIClient {
        const _arr: qtc.libqt_list = qtc.KXMLGUIClient_ChildClients(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KXMLGUIClient, _arr.len) catch @panic("kparts__part.ChildClients: Memory allocation failed");
        const _data: [*]QtC.KXMLGUIClient = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setClientBuilder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` builder: KXMLGUIBuilder `
    ///
    pub fn SetClientBuilder(self: KParts__Part, builder: anytype) void {
        comptime _ = @TypeOf(builder)._is_KXMLGUIBuilder;
        qtc.KXMLGUIClient_SetClientBuilder(@ptrCast(self.ptr), @ptrCast(builder.ptr));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#clientBuilder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    pub fn ClientBuilder(self: KParts__Part) KXMLGUIBuilder {
        return .{ .ptr = qtc.KXMLGUIClient_ClientBuilder(@ptrCast(self.ptr)) };
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#reloadXML)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    pub fn ReloadXML(self: KParts__Part) void {
        qtc.KXMLGUIClient_ReloadXML(@ptrCast(self.ptr));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#plugActionList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` name: []const u8 `
    ///
    /// ` actionList: []QAction `
    ///
    pub fn PlugActionList(self: KParts__Part, name: []const u8, actionList: []QAction) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const actionList_list = qtc.libqt_list{
            .len = actionList.len,
            .data = @ptrCast(actionList.ptr),
        };
        qtc.KXMLGUIClient_PlugActionList(@ptrCast(self.ptr), name_str, actionList_list);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#unplugActionList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` name: []const u8 `
    ///
    pub fn UnplugActionList(self: KParts__Part, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KXMLGUIClient_UnplugActionList(@ptrCast(self.ptr), name_str);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#findMostRecentXMLFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` files: []const []const u8 `
    ///
    /// ` doc: []const u8 `
    ///
    pub fn FindMostRecentXMLFile(allocator: std.mem.Allocator, files: []const []const u8, doc: []const u8) []const u8 {
        const files_arr = allocator.alloc(qtc.libqt_string, files.len) catch @panic("kparts__part.FindMostRecentXMLFile: Memory allocation failed");
        defer allocator.free(files_arr);
        for (files, 0..files.len) |item, i|
            files_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const files_list = qtc.libqt_list{
            .len = files.len,
            .data = files_arr.ptr,
        };
        const doc_str = qtc.libqt_string{
            .len = doc.len,
            .data = doc.ptr,
        };
        var _str = qtc.KXMLGUIClient_FindMostRecentXMLFile(files_list, doc_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__part.FindMostRecentXMLFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#addStateActionEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` state: []const u8 `
    ///
    /// ` action: []const u8 `
    ///
    pub fn AddStateActionEnabled(self: KParts__Part, state: []const u8, action: []const u8) void {
        const state_str = qtc.libqt_string{
            .len = state.len,
            .data = state.ptr,
        };
        const action_str = qtc.libqt_string{
            .len = action.len,
            .data = action.ptr,
        };
        qtc.KXMLGUIClient_AddStateActionEnabled(@ptrCast(self.ptr), state_str, action_str);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#addStateActionDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` state: []const u8 `
    ///
    /// ` action: []const u8 `
    ///
    pub fn AddStateActionDisabled(self: KParts__Part, state: []const u8, action: []const u8) void {
        const state_str = qtc.libqt_string{
            .len = state.len,
            .data = state.ptr,
        };
        const action_str = qtc.libqt_string{
            .len = action.len,
            .data = action.ptr,
        };
        qtc.KXMLGUIClient_AddStateActionDisabled(@ptrCast(self.ptr), state_str, action_str);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#getActionsToChangeForState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` state: []const u8 `
    ///
    pub fn GetActionsToChangeForState(self: KParts__Part, state: []const u8) KXMLGUIClient__StateChange {
        const state_str = qtc.libqt_string{
            .len = state.len,
            .data = state.ptr,
        };
        return .{ .ptr = qtc.KXMLGUIClient_GetActionsToChangeForState(@ptrCast(self.ptr), state_str) };
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#beginXMLPlug)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` param1: QWidget `
    ///
    pub fn BeginXMLPlug(self: KParts__Part, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.KXMLGUIClient_BeginXMLPlug(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#endXMLPlug)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    pub fn EndXMLPlug(self: KParts__Part) void {
        qtc.KXMLGUIClient_EndXMLPlug(@ptrCast(self.ptr));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#prepareXMLUnplug)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` param1: QWidget `
    ///
    pub fn PrepareXMLUnplug(self: KParts__Part, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.KXMLGUIClient_PrepareXMLUnplug(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#replaceXMLFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` xmlfile: []const u8 `
    ///
    /// ` localxmlfile: []const u8 `
    ///
    pub fn ReplaceXMLFile(self: KParts__Part, xmlfile: []const u8, localxmlfile: []const u8) void {
        const xmlfile_str = qtc.libqt_string{
            .len = xmlfile.len,
            .data = xmlfile.ptr,
        };
        const localxmlfile_str = qtc.libqt_string{
            .len = localxmlfile.len,
            .data = localxmlfile.ptr,
        };
        qtc.KXMLGUIClient_ReplaceXMLFile(@ptrCast(self.ptr), xmlfile_str, localxmlfile_str);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#findVersionNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` xml: []const u8 `
    ///
    pub fn FindVersionNumber(allocator: std.mem.Allocator, xml: []const u8) []const u8 {
        const xml_str = qtc.libqt_string{
            .len = xml.len,
            .data = xml.ptr,
        };
        var _str = qtc.KXMLGUIClient_FindVersionNumber(xml_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__part.FindVersionNumber: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#replaceXMLFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` xmlfile: []const u8 `
    ///
    /// ` localxmlfile: []const u8 `
    ///
    /// ` merge: bool `
    ///
    pub fn ReplaceXMLFile3(self: KParts__Part, xmlfile: []const u8, localxmlfile: []const u8, merge: bool) void {
        const xmlfile_str = qtc.libqt_string{
            .len = xmlfile.len,
            .data = xmlfile.ptr,
        };
        const localxmlfile_str = qtc.libqt_string{
            .len = localxmlfile.len,
            .data = localxmlfile.ptr,
        };
        qtc.KXMLGUIClient_ReplaceXMLFile3(@ptrCast(self.ptr), xmlfile_str, localxmlfile_str, merge);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KParts__Part, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KParts__Part_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KParts__Part `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KParts__Part, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KParts__Part_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__Part`
    ///
    /// ` callback: *const fn (self: KParts__Part, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: KParts__Part, callback: *const fn (KParts__Part, QEvent) callconv(.c) bool) void {
        qtc.KParts__Part_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KParts__Part, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KParts__Part_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: KParts__Part `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KParts__Part, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KParts__Part_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__Part`
    ///
    /// ` callback: *const fn (self: KParts__Part, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: KParts__Part, callback: *const fn (KParts__Part, QObject, QEvent) callconv(.c) bool) void {
        qtc.KParts__Part_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KParts__Part, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KParts__Part_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KParts__Part `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KParts__Part, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KParts__Part_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__Part`
    ///
    /// ` callback: *const fn (self: KParts__Part, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: KParts__Part, callback: *const fn (KParts__Part, QTimerEvent) callconv(.c) void) void {
        qtc.KParts__Part_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KParts__Part, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KParts__Part_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KParts__Part `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KParts__Part, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KParts__Part_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__Part`
    ///
    /// ` callback: *const fn (self: KParts__Part, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: KParts__Part, callback: *const fn (KParts__Part, QChildEvent) callconv(.c) void) void {
        qtc.KParts__Part_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: KParts__Part, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KParts__Part_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KParts__Part `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KParts__Part, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KParts__Part_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__Part`
    ///
    /// ` callback: *const fn (self: KParts__Part, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: KParts__Part, callback: *const fn (KParts__Part, QMetaMethod) callconv(.c) void) void {
        qtc.KParts__Part_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: KParts__Part, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KParts__Part_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KParts__Part `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KParts__Part, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KParts__Part_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__Part`
    ///
    /// ` callback: *const fn (self: KParts__Part, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: KParts__Part, callback: *const fn (KParts__Part, QMetaMethod) callconv(.c) void) void {
        qtc.KParts__Part_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#action)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` element: QDomElement `
    ///
    pub fn Action2(self: KParts__Part, element: anytype) QAction {
        comptime _ = @TypeOf(element)._is_QDomElement;
        return .{ .ptr = qtc.KParts__Part_Action2(@ptrCast(self.ptr), @ptrCast(element.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperAction2` instead
    ///
    pub const QBaseAction2 = SuperAction2;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#action)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` element: QDomElement `
    ///
    pub fn SuperAction2(self: KParts__Part, element: anytype) QAction {
        comptime _ = @TypeOf(element)._is_QDomElement;
        return .{ .ptr = qtc.KParts__Part_SuperAction2(@ptrCast(self.ptr), @ptrCast(element.ptr)) };
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#action)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__Part`
    ///
    /// ` callback: *const fn (self: KParts__Part, element: QDomElement) callconv(.c) QAction `
    ///
    pub fn OnAction2(self: KParts__Part, callback: *const fn (KParts__Part, QDomElement) callconv(.c) QAction) void {
        qtc.KParts__Part_OnAction2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#actionCollection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    pub fn ActionCollection(self: KParts__Part) KActionCollection {
        return .{ .ptr = qtc.KParts__Part_ActionCollection(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperActionCollection` instead
    ///
    pub const QBaseActionCollection = SuperActionCollection;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#actionCollection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    pub fn SuperActionCollection(self: KParts__Part) KActionCollection {
        return .{ .ptr = qtc.KParts__Part_SuperActionCollection(@ptrCast(self.ptr)) };
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#actionCollection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__Part`
    ///
    /// ` callback: *const fn () callconv(.c) KActionCollection `
    ///
    pub fn OnActionCollection(self: KParts__Part, callback: *const fn () callconv(.c) KActionCollection) void {
        qtc.KParts__Part_OnActionCollection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#componentName)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ComponentName(self: KParts__Part, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__Part_ComponentName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__part.ComponentName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperComponentName` instead
    ///
    pub const QBaseComponentName = SuperComponentName;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#componentName)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperComponentName(self: KParts__Part, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__Part_SuperComponentName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__part.ComponentName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#componentName)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__Part`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnComponentName(self: KParts__Part, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KParts__Part_OnComponentName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#domDocument)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    pub fn DomDocument(self: KParts__Part) QDomDocument {
        return .{ .ptr = qtc.KParts__Part_DomDocument(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperDomDocument` instead
    ///
    pub const QBaseDomDocument = SuperDomDocument;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#domDocument)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    pub fn SuperDomDocument(self: KParts__Part) QDomDocument {
        return .{ .ptr = qtc.KParts__Part_SuperDomDocument(@ptrCast(self.ptr)) };
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#domDocument)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__Part`
    ///
    /// ` callback: *const fn () callconv(.c) QDomDocument `
    ///
    pub fn OnDomDocument(self: KParts__Part, callback: *const fn () callconv(.c) QDomDocument) void {
        qtc.KParts__Part_OnDomDocument(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlFile)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn XmlFile(self: KParts__Part, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__Part_XmlFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__part.XmlFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperXmlFile` instead
    ///
    pub const QBaseXmlFile = SuperXmlFile;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlFile)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperXmlFile(self: KParts__Part, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__Part_SuperXmlFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__part.XmlFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__Part`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnXmlFile(self: KParts__Part, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KParts__Part_OnXmlFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#localXMLFile)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LocalXMLFile(self: KParts__Part, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__Part_LocalXMLFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__part.LocalXMLFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperLocalXMLFile` instead
    ///
    pub const QBaseLocalXMLFile = SuperLocalXMLFile;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#localXMLFile)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperLocalXMLFile(self: KParts__Part, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__Part_SuperLocalXMLFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__part.LocalXMLFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#localXMLFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__Part`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnLocalXMLFile(self: KParts__Part, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KParts__Part_OnLocalXMLFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setComponentName)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` componentName: []const u8 `
    ///
    /// ` componentDisplayName: []const u8 `
    ///
    pub fn SetComponentName(self: KParts__Part, componentName: []const u8, componentDisplayName: []const u8) void {
        const componentName_str = qtc.libqt_string{
            .len = componentName.len,
            .data = componentName.ptr,
        };
        const componentDisplayName_str = qtc.libqt_string{
            .len = componentDisplayName.len,
            .data = componentDisplayName.ptr,
        };
        qtc.KParts__Part_SetComponentName(@ptrCast(self.ptr), componentName_str, componentDisplayName_str);
    }

    /// ### DEPRECATED: Use `SuperSetComponentName` instead
    ///
    pub const QBaseSetComponentName = SuperSetComponentName;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setComponentName)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` componentName: []const u8 `
    ///
    /// ` componentDisplayName: []const u8 `
    ///
    pub fn SuperSetComponentName(self: KParts__Part, componentName: []const u8, componentDisplayName: []const u8) void {
        const componentName_str = qtc.libqt_string{
            .len = componentName.len,
            .data = componentName.ptr,
        };
        const componentDisplayName_str = qtc.libqt_string{
            .len = componentDisplayName.len,
            .data = componentDisplayName.ptr,
        };
        qtc.KParts__Part_SuperSetComponentName(@ptrCast(self.ptr), componentName_str, componentDisplayName_str);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setComponentName)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__Part`
    ///
    /// ` callback: *const fn (self: KParts__Part, componentName: [*:0]const u8, componentDisplayName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetComponentName(self: KParts__Part, callback: *const fn (KParts__Part, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
        qtc.KParts__Part_OnSetComponentName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXMLFile)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` file: []const u8 `
    ///
    /// ` merge: bool `
    ///
    /// ` setXMLDoc: bool `
    ///
    pub fn SetXMLFile(self: KParts__Part, file: []const u8, merge: bool, setXMLDoc: bool) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KParts__Part_SetXMLFile(@ptrCast(self.ptr), file_str, merge, setXMLDoc);
    }

    /// ### DEPRECATED: Use `SuperSetXMLFile` instead
    ///
    pub const QBaseSetXMLFile = SuperSetXMLFile;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXMLFile)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` file: []const u8 `
    ///
    /// ` merge: bool `
    ///
    /// ` setXMLDoc: bool `
    ///
    pub fn SuperSetXMLFile(self: KParts__Part, file: []const u8, merge: bool, setXMLDoc: bool) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KParts__Part_SuperSetXMLFile(@ptrCast(self.ptr), file_str, merge, setXMLDoc);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXMLFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__Part`
    ///
    /// ` callback: *const fn (self: KParts__Part, file: [*:0]const u8, merge: bool, setXMLDoc: bool) callconv(.c) void `
    ///
    pub fn OnSetXMLFile(self: KParts__Part, callback: *const fn (KParts__Part, [*:0]const u8, bool, bool) callconv(.c) void) void {
        qtc.KParts__Part_OnSetXMLFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setLocalXMLFile)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` file: []const u8 `
    ///
    pub fn SetLocalXMLFile(self: KParts__Part, file: []const u8) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KParts__Part_SetLocalXMLFile(@ptrCast(self.ptr), file_str);
    }

    /// ### DEPRECATED: Use `SuperSetLocalXMLFile` instead
    ///
    pub const QBaseSetLocalXMLFile = SuperSetLocalXMLFile;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setLocalXMLFile)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` file: []const u8 `
    ///
    pub fn SuperSetLocalXMLFile(self: KParts__Part, file: []const u8) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KParts__Part_SuperSetLocalXMLFile(@ptrCast(self.ptr), file_str);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setLocalXMLFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__Part`
    ///
    /// ` callback: *const fn (self: KParts__Part, file: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetLocalXMLFile(self: KParts__Part, callback: *const fn (KParts__Part, [*:0]const u8) callconv(.c) void) void {
        qtc.KParts__Part_OnSetLocalXMLFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXML)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` document: []const u8 `
    ///
    /// ` merge: bool `
    ///
    pub fn SetXML(self: KParts__Part, document: []const u8, merge: bool) void {
        const document_str = qtc.libqt_string{
            .len = document.len,
            .data = document.ptr,
        };
        qtc.KParts__Part_SetXML(@ptrCast(self.ptr), document_str, merge);
    }

    /// ### DEPRECATED: Use `SuperSetXML` instead
    ///
    pub const QBaseSetXML = SuperSetXML;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXML)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` document: []const u8 `
    ///
    /// ` merge: bool `
    ///
    pub fn SuperSetXML(self: KParts__Part, document: []const u8, merge: bool) void {
        const document_str = qtc.libqt_string{
            .len = document.len,
            .data = document.ptr,
        };
        qtc.KParts__Part_SuperSetXML(@ptrCast(self.ptr), document_str, merge);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXML)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__Part`
    ///
    /// ` callback: *const fn (self: KParts__Part, document: [*:0]const u8, merge: bool) callconv(.c) void `
    ///
    pub fn OnSetXML(self: KParts__Part, callback: *const fn (KParts__Part, [*:0]const u8, bool) callconv(.c) void) void {
        qtc.KParts__Part_OnSetXML(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setDOMDocument)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` document: QDomDocument `
    ///
    /// ` merge: bool `
    ///
    pub fn SetDOMDocument(self: KParts__Part, document: anytype, merge: bool) void {
        comptime _ = @TypeOf(document)._is_QDomDocument;
        qtc.KParts__Part_SetDOMDocument(@ptrCast(self.ptr), @ptrCast(document.ptr), merge);
    }

    /// ### DEPRECATED: Use `SuperSetDOMDocument` instead
    ///
    pub const QBaseSetDOMDocument = SuperSetDOMDocument;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setDOMDocument)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` document: QDomDocument `
    ///
    /// ` merge: bool `
    ///
    pub fn SuperSetDOMDocument(self: KParts__Part, document: anytype, merge: bool) void {
        comptime _ = @TypeOf(document)._is_QDomDocument;
        qtc.KParts__Part_SuperSetDOMDocument(@ptrCast(self.ptr), @ptrCast(document.ptr), merge);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setDOMDocument)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__Part`
    ///
    /// ` callback: *const fn (self: KParts__Part, document: QDomDocument, merge: bool) callconv(.c) void `
    ///
    pub fn OnSetDOMDocument(self: KParts__Part, callback: *const fn (KParts__Part, QDomDocument, bool) callconv(.c) void) void {
        qtc.KParts__Part_OnSetDOMDocument(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#stateChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` newstate: []const u8 `
    ///
    /// ` reverse: kxmlguiclient_enums.ReverseStateChange `
    ///
    pub fn StateChanged(self: KParts__Part, newstate: []const u8, reverse: i32) void {
        const newstate_str = qtc.libqt_string{
            .len = newstate.len,
            .data = newstate.ptr,
        };
        qtc.KParts__Part_StateChanged(@ptrCast(self.ptr), newstate_str, @bitCast(reverse));
    }

    /// ### DEPRECATED: Use `SuperStateChanged` instead
    ///
    pub const QBaseStateChanged = SuperStateChanged;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#stateChanged)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` newstate: []const u8 `
    ///
    /// ` reverse: kxmlguiclient_enums.ReverseStateChange `
    ///
    pub fn SuperStateChanged(self: KParts__Part, newstate: []const u8, reverse: i32) void {
        const newstate_str = qtc.libqt_string{
            .len = newstate.len,
            .data = newstate.ptr,
        };
        qtc.KParts__Part_SuperStateChanged(@ptrCast(self.ptr), newstate_str, @bitCast(reverse));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#stateChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__Part`
    ///
    /// ` callback: *const fn (self: KParts__Part, newstate: [*:0]const u8, reverse: kxmlguiclient_enums.ReverseStateChange) callconv(.c) void `
    ///
    pub fn OnStateChanged(self: KParts__Part, callback: *const fn (KParts__Part, [*:0]const u8, i32) callconv(.c) void) void {
        qtc.KParts__Part_OnStateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    pub fn Sender(self: KParts__Part) QObject {
        return .{ .ptr = qtc.KParts__Part_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KParts__Part `
    ///
    pub fn SuperSender(self: KParts__Part) QObject {
        return .{ .ptr = qtc.KParts__Part_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__Part`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: KParts__Part, callback: *const fn () callconv(.c) QObject) void {
        qtc.KParts__Part_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    pub fn SenderSignalIndex(self: KParts__Part) i32 {
        return qtc.KParts__Part_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KParts__Part `
    ///
    pub fn SuperSenderSignalIndex(self: KParts__Part) i32 {
        return qtc.KParts__Part_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__Part`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: KParts__Part, callback: *const fn () callconv(.c) i32) void {
        qtc.KParts__Part_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: KParts__Part, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KParts__Part_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KParts__Part `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KParts__Part, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KParts__Part_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__Part`
    ///
    /// ` callback: *const fn (self: KParts__Part, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: KParts__Part, callback: *const fn (KParts__Part, [*:0]const u8) callconv(.c) i32) void {
        qtc.KParts__Part_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: KParts__Part, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KParts__Part_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KParts__Part `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KParts__Part, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KParts__Part_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__Part`
    ///
    /// ` callback: *const fn (self: KParts__Part, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: KParts__Part, callback: *const fn (KParts__Part, QMetaMethod) callconv(.c) bool) void {
        qtc.KParts__Part_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#standardsXmlFileLocation)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StandardsXmlFileLocation(self: KParts__Part, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__Part_StandardsXmlFileLocation(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__part.StandardsXmlFileLocation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperStandardsXmlFileLocation` instead
    ///
    pub const QBaseStandardsXmlFileLocation = SuperStandardsXmlFileLocation;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#standardsXmlFileLocation)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperStandardsXmlFileLocation(self: KParts__Part, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__Part_SuperStandardsXmlFileLocation(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__part.StandardsXmlFileLocation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#standardsXmlFileLocation)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__Part`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnStandardsXmlFileLocation(self: KParts__Part, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KParts__Part_OnStandardsXmlFileLocation(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#loadStandardsXmlFile)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    pub fn LoadStandardsXmlFile(self: KParts__Part) void {
        qtc.KParts__Part_LoadStandardsXmlFile(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperLoadStandardsXmlFile` instead
    ///
    pub const QBaseLoadStandardsXmlFile = SuperLoadStandardsXmlFile;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#loadStandardsXmlFile)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__Part `
    ///
    pub fn SuperLoadStandardsXmlFile(self: KParts__Part) void {
        qtc.KParts__Part_SuperLoadStandardsXmlFile(@ptrCast(self.ptr));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#loadStandardsXmlFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__Part`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnLoadStandardsXmlFile(self: KParts__Part, callback: *const fn () callconv(.c) void) void {
        qtc.KParts__Part_OnLoadStandardsXmlFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__Part `
    ///
    /// ` callback: *const fn (self: KParts__Part, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KParts__Part, callback: *const fn (KParts__Part, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KParts__Part `
    ///
    pub fn Delete(self: KParts__Part) void {
        qtc.KParts__Part_Delete(@ptrCast(self.ptr));
    }
};
