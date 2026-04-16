const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KParts__Part = @import("libqt6").KParts__Part;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const QWidget = @import("libqt6").QWidget;
const partmanager_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html)
pub const KParts__PartManager = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KParts__PartManager,

    pub const _is_KParts__PartManager = {};
    pub const _is_QObject = {};

    /// New constructs a new KParts::PartManager object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    pub fn New(parent: anytype) KParts__PartManager {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.KParts__PartManager_new(@ptrCast(parent.ptr)) };
    }

    /// New2 constructs a new KParts::PartManager object.
    ///
    /// ## Parameter(s):
    ///
    /// ` topLevel: QWidget `
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(topLevel: anytype, parent: anytype) KParts__PartManager {
        comptime _ = @TypeOf(topLevel)._is_QWidget;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KParts__PartManager_new2(@ptrCast(topLevel.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    pub fn MetaObject(self: KParts__PartManager) QMetaObject {
        return .{ .ptr = qtc.KParts__PartManager_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: KParts__PartManager, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KParts__PartManager_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KParts__PartManager `
    ///
    pub fn SuperMetaObject(self: KParts__PartManager) QMetaObject {
        return .{ .ptr = qtc.KParts__PartManager_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KParts__PartManager, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KParts__PartManager_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` callback: *const fn (self: KParts__PartManager, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KParts__PartManager, callback: *const fn (KParts__PartManager, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KParts__PartManager_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KParts__PartManager, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KParts__PartManager_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KParts__PartManager, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KParts__PartManager_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` callback: *const fn (self: KParts__PartManager, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KParts__PartManager, callback: *const fn (KParts__PartManager, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KParts__PartManager_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: KParts__PartManager, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KParts__PartManager_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__partmanager.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#setSelectionPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` policy: partmanager_enums.SelectionPolicy `
    ///
    pub fn SetSelectionPolicy(self: KParts__PartManager, policy: i32) void {
        qtc.KParts__PartManager_SetSelectionPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#selectionPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ## Returns:
    ///
    /// ` partmanager_enums.SelectionPolicy `
    ///
    pub fn SelectionPolicy(self: KParts__PartManager) i32 {
        return qtc.KParts__PartManager_SelectionPolicy(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#setAllowNestedParts)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` allow: bool `
    ///
    pub fn SetAllowNestedParts(self: KParts__PartManager, allow: bool) void {
        qtc.KParts__PartManager_SetAllowNestedParts(@ptrCast(self.ptr), allow);
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#allowNestedParts)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    pub fn AllowNestedParts(self: KParts__PartManager) bool {
        return qtc.KParts__PartManager_AllowNestedParts(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#setIgnoreScrollBars)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` ignore: bool `
    ///
    pub fn SetIgnoreScrollBars(self: KParts__PartManager, ignore: bool) void {
        qtc.KParts__PartManager_SetIgnoreScrollBars(@ptrCast(self.ptr), ignore);
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#ignoreScrollBars)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    pub fn IgnoreScrollBars(self: KParts__PartManager) bool {
        return qtc.KParts__PartManager_IgnoreScrollBars(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#setActivationButtonMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` buttonMask: i16 `
    ///
    pub fn SetActivationButtonMask(self: KParts__PartManager, buttonMask: i16) void {
        qtc.KParts__PartManager_SetActivationButtonMask(@ptrCast(self.ptr), @bitCast(buttonMask));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#activationButtonMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    pub fn ActivationButtonMask(self: KParts__PartManager) i16 {
        return qtc.KParts__PartManager_ActivationButtonMask(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` obj: QObject `
    ///
    /// ` ev: QEvent `
    ///
    pub fn EventFilter(self: KParts__PartManager, obj: anytype, ev: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        comptime _ = @TypeOf(ev)._is_QEvent;
        return qtc.KParts__PartManager_EventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr), @ptrCast(ev.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#eventFilter)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` callback: *const fn (self: KParts__PartManager, obj: QObject, ev: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: KParts__PartManager, callback: *const fn (KParts__PartManager, QObject, QEvent) callconv(.c) bool) void {
        qtc.KParts__PartManager_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#eventFilter)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` obj: QObject `
    ///
    /// ` ev: QEvent `
    ///
    pub fn SuperEventFilter(self: KParts__PartManager, obj: anytype, ev: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        comptime _ = @TypeOf(ev)._is_QEvent;
        return qtc.KParts__PartManager_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr), @ptrCast(ev.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#addPart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` part: KParts__Part `
    ///
    /// ` setActive: bool `
    ///
    pub fn AddPart(self: KParts__PartManager, part: anytype, setActive: bool) void {
        comptime _ = @TypeOf(part)._is_KParts__Part;
        qtc.KParts__PartManager_AddPart(@ptrCast(self.ptr), @ptrCast(part.ptr), setActive);
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#addPart)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` callback: *const fn (self: KParts__PartManager, part: KParts__Part, setActive: bool) callconv(.c) void `
    ///
    pub fn OnAddPart(self: KParts__PartManager, callback: *const fn (KParts__PartManager, KParts__Part, bool) callconv(.c) void) void {
        qtc.KParts__PartManager_OnAddPart(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAddPart` instead
    ///
    pub const QBaseAddPart = SuperAddPart;

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#addPart)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` part: KParts__Part `
    ///
    /// ` setActive: bool `
    ///
    pub fn SuperAddPart(self: KParts__PartManager, part: anytype, setActive: bool) void {
        comptime _ = @TypeOf(part)._is_KParts__Part;
        qtc.KParts__PartManager_SuperAddPart(@ptrCast(self.ptr), @ptrCast(part.ptr), setActive);
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#removePart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` part: KParts__Part `
    ///
    pub fn RemovePart(self: KParts__PartManager, part: anytype) void {
        comptime _ = @TypeOf(part)._is_KParts__Part;
        qtc.KParts__PartManager_RemovePart(@ptrCast(self.ptr), @ptrCast(part.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#removePart)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` callback: *const fn (self: KParts__PartManager, part: KParts__Part) callconv(.c) void `
    ///
    pub fn OnRemovePart(self: KParts__PartManager, callback: *const fn (KParts__PartManager, KParts__Part) callconv(.c) void) void {
        qtc.KParts__PartManager_OnRemovePart(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRemovePart` instead
    ///
    pub const QBaseRemovePart = SuperRemovePart;

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#removePart)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` part: KParts__Part `
    ///
    pub fn SuperRemovePart(self: KParts__PartManager, part: anytype) void {
        comptime _ = @TypeOf(part)._is_KParts__Part;
        qtc.KParts__PartManager_SuperRemovePart(@ptrCast(self.ptr), @ptrCast(part.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#replacePart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` oldPart: KParts__Part `
    ///
    /// ` newPart: KParts__Part `
    ///
    /// ` setActive: bool `
    ///
    pub fn ReplacePart(self: KParts__PartManager, oldPart: anytype, newPart: anytype, setActive: bool) void {
        comptime _ = @TypeOf(oldPart)._is_KParts__Part;
        comptime _ = @TypeOf(newPart)._is_KParts__Part;
        qtc.KParts__PartManager_ReplacePart(@ptrCast(self.ptr), @ptrCast(oldPart.ptr), @ptrCast(newPart.ptr), setActive);
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#replacePart)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` callback: *const fn (self: KParts__PartManager, oldPart: KParts__Part, newPart: KParts__Part, setActive: bool) callconv(.c) void `
    ///
    pub fn OnReplacePart(self: KParts__PartManager, callback: *const fn (KParts__PartManager, KParts__Part, KParts__Part, bool) callconv(.c) void) void {
        qtc.KParts__PartManager_OnReplacePart(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperReplacePart` instead
    ///
    pub const QBaseReplacePart = SuperReplacePart;

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#replacePart)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` oldPart: KParts__Part `
    ///
    /// ` newPart: KParts__Part `
    ///
    /// ` setActive: bool `
    ///
    pub fn SuperReplacePart(self: KParts__PartManager, oldPart: anytype, newPart: anytype, setActive: bool) void {
        comptime _ = @TypeOf(oldPart)._is_KParts__Part;
        comptime _ = @TypeOf(newPart)._is_KParts__Part;
        qtc.KParts__PartManager_SuperReplacePart(@ptrCast(self.ptr), @ptrCast(oldPart.ptr), @ptrCast(newPart.ptr), setActive);
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#setActivePart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` part: KParts__Part `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SetActivePart(self: KParts__PartManager, part: anytype, widget: anytype) void {
        comptime _ = @TypeOf(part)._is_KParts__Part;
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.KParts__PartManager_SetActivePart(@ptrCast(self.ptr), @ptrCast(part.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#setActivePart)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` callback: *const fn (self: KParts__PartManager, part: KParts__Part, widget: QWidget) callconv(.c) void `
    ///
    pub fn OnSetActivePart(self: KParts__PartManager, callback: *const fn (KParts__PartManager, KParts__Part, QWidget) callconv(.c) void) void {
        qtc.KParts__PartManager_OnSetActivePart(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetActivePart` instead
    ///
    pub const QBaseSetActivePart = SuperSetActivePart;

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#setActivePart)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` part: KParts__Part `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SuperSetActivePart(self: KParts__PartManager, part: anytype, widget: anytype) void {
        comptime _ = @TypeOf(part)._is_KParts__Part;
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.KParts__PartManager_SuperSetActivePart(@ptrCast(self.ptr), @ptrCast(part.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#activePart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    pub fn ActivePart(self: KParts__PartManager) KParts__Part {
        return .{ .ptr = qtc.KParts__PartManager_ActivePart(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#activePart)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` callback: *const fn () callconv(.c) KParts__Part `
    ///
    pub fn OnActivePart(self: KParts__PartManager, callback: *const fn () callconv(.c) KParts__Part) void {
        qtc.KParts__PartManager_OnActivePart(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperActivePart` instead
    ///
    pub const QBaseActivePart = SuperActivePart;

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#activePart)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    pub fn SuperActivePart(self: KParts__PartManager) KParts__Part {
        return .{ .ptr = qtc.KParts__PartManager_SuperActivePart(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#activeWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    pub fn ActiveWidget(self: KParts__PartManager) QWidget {
        return .{ .ptr = qtc.KParts__PartManager_ActiveWidget(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#activeWidget)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` callback: *const fn () callconv(.c) QWidget `
    ///
    pub fn OnActiveWidget(self: KParts__PartManager, callback: *const fn () callconv(.c) QWidget) void {
        qtc.KParts__PartManager_OnActiveWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperActiveWidget` instead
    ///
    pub const QBaseActiveWidget = SuperActiveWidget;

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#activeWidget)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    pub fn SuperActiveWidget(self: KParts__PartManager) QWidget {
        return .{ .ptr = qtc.KParts__PartManager_SuperActiveWidget(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#parts)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Parts(self: KParts__PartManager, allocator: std.mem.Allocator) []KParts__Part {
        const _arr: qtc.libqt_list = qtc.KParts__PartManager_Parts(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KParts__Part, _arr.len) catch @panic("kparts__partmanager.Parts: Memory allocation failed");
        const _data: [*]QtC.KParts__Part = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#addManagedTopLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` topLevel: QWidget `
    ///
    pub fn AddManagedTopLevelWidget(self: KParts__PartManager, topLevel: anytype) void {
        comptime _ = @TypeOf(topLevel)._is_QWidget;
        qtc.KParts__PartManager_AddManagedTopLevelWidget(@ptrCast(self.ptr), @ptrCast(topLevel.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#removeManagedTopLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` topLevel: QWidget `
    ///
    pub fn RemoveManagedTopLevelWidget(self: KParts__PartManager, topLevel: anytype) void {
        comptime _ = @TypeOf(topLevel)._is_QWidget;
        qtc.KParts__PartManager_RemoveManagedTopLevelWidget(@ptrCast(self.ptr), @ptrCast(topLevel.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#reason)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    pub fn Reason(self: KParts__PartManager) i32 {
        return qtc.KParts__PartManager_Reason(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#partAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` part: KParts__Part `
    ///
    pub fn PartAdded(self: KParts__PartManager, part: anytype) void {
        comptime _ = @TypeOf(part)._is_KParts__Part;
        qtc.KParts__PartManager_PartAdded(@ptrCast(self.ptr), @ptrCast(part.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#partAdded)
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` callback: *const fn (self: KParts__PartManager, part: KParts__Part) callconv(.c) void `
    ///
    pub fn OnPartAdded(self: KParts__PartManager, callback: *const fn (KParts__PartManager, KParts__Part) callconv(.c) void) void {
        qtc.KParts__PartManager_Connect_PartAdded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#partRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` part: KParts__Part `
    ///
    pub fn PartRemoved(self: KParts__PartManager, part: anytype) void {
        comptime _ = @TypeOf(part)._is_KParts__Part;
        qtc.KParts__PartManager_PartRemoved(@ptrCast(self.ptr), @ptrCast(part.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#partRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` callback: *const fn (self: KParts__PartManager, part: KParts__Part) callconv(.c) void `
    ///
    pub fn OnPartRemoved(self: KParts__PartManager, callback: *const fn (KParts__PartManager, KParts__Part) callconv(.c) void) void {
        qtc.KParts__PartManager_Connect_PartRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#activePartChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` newPart: KParts__Part `
    ///
    pub fn ActivePartChanged(self: KParts__PartManager, newPart: anytype) void {
        comptime _ = @TypeOf(newPart)._is_KParts__Part;
        qtc.KParts__PartManager_ActivePartChanged(@ptrCast(self.ptr), @ptrCast(newPart.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#activePartChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` callback: *const fn (self: KParts__PartManager, newPart: KParts__Part) callconv(.c) void `
    ///
    pub fn OnActivePartChanged(self: KParts__PartManager, callback: *const fn (KParts__PartManager, KParts__Part) callconv(.c) void) void {
        qtc.KParts__PartManager_Connect_ActivePartChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#setIgnoreExplictFocusRequests)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` ignoreExplictFocusRequests: bool `
    ///
    pub fn SetIgnoreExplictFocusRequests(self: KParts__PartManager, ignoreExplictFocusRequests: bool) void {
        qtc.KParts__PartManager_SetIgnoreExplictFocusRequests(@ptrCast(self.ptr), ignoreExplictFocusRequests);
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#setIgnoreExplictFocusRequests)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` callback: *const fn (self: KParts__PartManager, ignoreExplictFocusRequests: bool) callconv(.c) void `
    ///
    pub fn OnSetIgnoreExplictFocusRequests(self: KParts__PartManager, callback: *const fn (KParts__PartManager, bool) callconv(.c) void) void {
        qtc.KParts__PartManager_OnSetIgnoreExplictFocusRequests(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetIgnoreExplictFocusRequests` instead
    ///
    pub const QBaseSetIgnoreExplictFocusRequests = SuperSetIgnoreExplictFocusRequests;

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#setIgnoreExplictFocusRequests)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` ignoreExplictFocusRequests: bool `
    ///
    pub fn SuperSetIgnoreExplictFocusRequests(self: KParts__PartManager, ignoreExplictFocusRequests: bool) void {
        qtc.KParts__PartManager_SuperSetIgnoreExplictFocusRequests(@ptrCast(self.ptr), ignoreExplictFocusRequests);
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#slotObjectDestroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    pub fn SlotObjectDestroyed(self: KParts__PartManager) void {
        qtc.KParts__PartManager_SlotObjectDestroyed(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#slotObjectDestroyed)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnSlotObjectDestroyed(self: KParts__PartManager, callback: *const fn () callconv(.c) void) void {
        qtc.KParts__PartManager_OnSlotObjectDestroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSlotObjectDestroyed` instead
    ///
    pub const QBaseSlotObjectDestroyed = SuperSlotObjectDestroyed;

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#slotObjectDestroyed)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    pub fn SuperSlotObjectDestroyed(self: KParts__PartManager) void {
        qtc.KParts__PartManager_SuperSlotObjectDestroyed(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#slotWidgetDestroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    pub fn SlotWidgetDestroyed(self: KParts__PartManager) void {
        qtc.KParts__PartManager_SlotWidgetDestroyed(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#slotWidgetDestroyed)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnSlotWidgetDestroyed(self: KParts__PartManager, callback: *const fn () callconv(.c) void) void {
        qtc.KParts__PartManager_OnSlotWidgetDestroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSlotWidgetDestroyed` instead
    ///
    pub const QBaseSlotWidgetDestroyed = SuperSlotWidgetDestroyed;

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#slotWidgetDestroyed)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    pub fn SuperSlotWidgetDestroyed(self: KParts__PartManager) void {
        qtc.KParts__PartManager_SuperSlotWidgetDestroyed(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#slotManagedTopLevelWidgetDestroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    pub fn SlotManagedTopLevelWidgetDestroyed(self: KParts__PartManager) void {
        qtc.KParts__PartManager_SlotManagedTopLevelWidgetDestroyed(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#slotManagedTopLevelWidgetDestroyed)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnSlotManagedTopLevelWidgetDestroyed(self: KParts__PartManager, callback: *const fn () callconv(.c) void) void {
        qtc.KParts__PartManager_OnSlotManagedTopLevelWidgetDestroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSlotManagedTopLevelWidgetDestroyed` instead
    ///
    pub const QBaseSlotManagedTopLevelWidgetDestroyed = SuperSlotManagedTopLevelWidgetDestroyed;

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#slotManagedTopLevelWidgetDestroyed)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    pub fn SuperSlotManagedTopLevelWidgetDestroyed(self: KParts__PartManager) void {
        qtc.KParts__PartManager_SuperSlotManagedTopLevelWidgetDestroyed(@ptrCast(self.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__partmanager.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__partmanager.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KParts__PartManager, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__partmanager.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KParts__PartManager, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    pub fn IsWidgetType(self: KParts__PartManager) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    pub fn IsWindowType(self: KParts__PartManager) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    pub fn IsQuickItemType(self: KParts__PartManager) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    pub fn SignalsBlocked(self: KParts__PartManager) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KParts__PartManager, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    pub fn Thread(self: KParts__PartManager) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KParts__PartManager, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KParts__PartManager, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KParts__PartManager, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KParts__PartManager, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KParts__PartManager, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KParts__PartManager, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("kparts__partmanager.Children: Memory allocation failed");
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
    /// ` self: KParts__PartManager `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KParts__PartManager, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KParts__PartManager, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KParts__PartManager, obj: anytype) void {
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
    /// ` self: KParts__PartManager `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KParts__PartManager, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KParts__PartManager `
    ///
    pub fn Disconnect3(self: KParts__PartManager) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KParts__PartManager, receiver: anytype) bool {
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
    /// ` self: KParts__PartManager `
    ///
    pub fn DumpObjectTree(self: KParts__PartManager) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    pub fn DumpObjectInfo(self: KParts__PartManager) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KParts__PartManager, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KParts__PartManager `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KParts__PartManager, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KParts__PartManager, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kparts__partmanager.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kparts__partmanager.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KParts__PartManager `
    ///
    pub fn BindingStorage(self: KParts__PartManager) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    pub fn BindingStorage2(self: KParts__PartManager) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    pub fn Destroyed(self: KParts__PartManager) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` callback: *const fn (self: KParts__PartManager) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KParts__PartManager, callback: *const fn (KParts__PartManager) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    pub fn Parent(self: KParts__PartManager) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KParts__PartManager, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    pub fn DeleteLater(self: KParts__PartManager) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KParts__PartManager, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KParts__PartManager, time: i64, timerType: i32) i32 {
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
    /// ` self: KParts__PartManager `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KParts__PartManager, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KParts__PartManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KParts__PartManager, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KParts__PartManager, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KParts__PartManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KParts__PartManager, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KParts__PartManager `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KParts__PartManager, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KParts__PartManager `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KParts__PartManager, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` callback: *const fn (self: KParts__PartManager, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KParts__PartManager, callback: *const fn (KParts__PartManager, QObject) callconv(.c) void) void {
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
    /// ` self: KParts__PartManager `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KParts__PartManager, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KParts__PartManager_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KParts__PartManager `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KParts__PartManager, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KParts__PartManager_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__PartManager`
    ///
    /// ` callback: *const fn (self: KParts__PartManager, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: KParts__PartManager, callback: *const fn (KParts__PartManager, QEvent) callconv(.c) bool) void {
        qtc.KParts__PartManager_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KParts__PartManager, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KParts__PartManager_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KParts__PartManager `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KParts__PartManager, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KParts__PartManager_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__PartManager`
    ///
    /// ` callback: *const fn (self: KParts__PartManager, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: KParts__PartManager, callback: *const fn (KParts__PartManager, QTimerEvent) callconv(.c) void) void {
        qtc.KParts__PartManager_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KParts__PartManager, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KParts__PartManager_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KParts__PartManager `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KParts__PartManager, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KParts__PartManager_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__PartManager`
    ///
    /// ` callback: *const fn (self: KParts__PartManager, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: KParts__PartManager, callback: *const fn (KParts__PartManager, QChildEvent) callconv(.c) void) void {
        qtc.KParts__PartManager_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KParts__PartManager, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KParts__PartManager_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KParts__PartManager `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KParts__PartManager, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KParts__PartManager_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__PartManager`
    ///
    /// ` callback: *const fn (self: KParts__PartManager, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: KParts__PartManager, callback: *const fn (KParts__PartManager, QEvent) callconv(.c) void) void {
        qtc.KParts__PartManager_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: KParts__PartManager, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KParts__PartManager_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KParts__PartManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KParts__PartManager, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KParts__PartManager_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__PartManager`
    ///
    /// ` callback: *const fn (self: KParts__PartManager, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: KParts__PartManager, callback: *const fn (KParts__PartManager, QMetaMethod) callconv(.c) void) void {
        qtc.KParts__PartManager_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: KParts__PartManager, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KParts__PartManager_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KParts__PartManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KParts__PartManager, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KParts__PartManager_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__PartManager`
    ///
    /// ` callback: *const fn (self: KParts__PartManager, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: KParts__PartManager, callback: *const fn (KParts__PartManager, QMetaMethod) callconv(.c) void) void {
        qtc.KParts__PartManager_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    pub fn Sender(self: KParts__PartManager) QObject {
        return .{ .ptr = qtc.KParts__PartManager_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KParts__PartManager `
    ///
    pub fn SuperSender(self: KParts__PartManager) QObject {
        return .{ .ptr = qtc.KParts__PartManager_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__PartManager`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: KParts__PartManager, callback: *const fn () callconv(.c) QObject) void {
        qtc.KParts__PartManager_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    pub fn SenderSignalIndex(self: KParts__PartManager) i32 {
        return qtc.KParts__PartManager_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KParts__PartManager `
    ///
    pub fn SuperSenderSignalIndex(self: KParts__PartManager) i32 {
        return qtc.KParts__PartManager_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__PartManager`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: KParts__PartManager, callback: *const fn () callconv(.c) i32) void {
        qtc.KParts__PartManager_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: KParts__PartManager, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KParts__PartManager_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KParts__PartManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KParts__PartManager, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KParts__PartManager_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__PartManager`
    ///
    /// ` callback: *const fn (self: KParts__PartManager, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: KParts__PartManager, callback: *const fn (KParts__PartManager, [*:0]const u8) callconv(.c) i32) void {
        qtc.KParts__PartManager_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: KParts__PartManager, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KParts__PartManager_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KParts__PartManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KParts__PartManager, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KParts__PartManager_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__PartManager`
    ///
    /// ` callback: *const fn (self: KParts__PartManager, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: KParts__PartManager, callback: *const fn (KParts__PartManager, QMetaMethod) callconv(.c) bool) void {
        qtc.KParts__PartManager_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` callback: *const fn (self: KParts__PartManager, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KParts__PartManager, callback: *const fn (KParts__PartManager, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KParts__PartManager `
    ///
    pub fn Delete(self: KParts__PartManager) void {
        qtc.KParts__PartManager_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#public-types)
pub const enums = struct {
    pub const SelectionPolicy = enum(i32) {
        pub const Direct: i32 = 0;
        pub const TriState: i32 = 1;
    };

    pub const Reason = enum(i32) {
        pub const ReasonLeftClick: i32 = 100;
        pub const ReasonMidClick: i32 = 101;
        pub const ReasonRightClick: i32 = 102;
        pub const NoReason: i32 = 103;
    };
};
