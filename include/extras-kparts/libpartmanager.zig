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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KParts::PartManager object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QWidget `
    ///
    pub fn new(_parent: anytype) KParts__PartManager {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.KParts__PartManager_new(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KParts::PartManager object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` topLevel: QWidget `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(topLevel: anytype, _parent: anytype) KParts__PartManager {
        comptime _ = @TypeOf(topLevel)._is_QWidget;
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.KParts__PartManager_new2(@ptrCast(topLevel.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    pub fn metaObject(self: KParts__PartManager) QMetaObject {
        return .{ .ptr = qtc.KParts__PartManager_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: KParts__PartManager `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: KParts__PartManager, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KParts__PartManager_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KParts__PartManager `
    ///
    pub fn superMetaObject(self: KParts__PartManager) QMetaObject {
        return .{ .ptr = qtc.KParts__PartManager_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KParts__PartManager, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KParts__PartManager_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` callback: *const fn (self: KParts__PartManager, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: KParts__PartManager, callback: *const fn (KParts__PartManager, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KParts__PartManager_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: KParts__PartManager, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KParts__PartManager_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: KParts__PartManager, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KParts__PartManager_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` callback: *const fn (self: KParts__PartManager, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: KParts__PartManager, callback: *const fn (KParts__PartManager, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KParts__PartManager_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: KParts__PartManager, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KParts__PartManager_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KParts__PartManager.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setSelectionPolicy` instead
    ///
    pub const SetSelectionPolicy = setSelectionPolicy;

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#setSelectionPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` policy: partmanager_enums.SelectionPolicy `
    ///
    pub fn setSelectionPolicy(self: KParts__PartManager, policy: i32) void {
        qtc.KParts__PartManager_SetSelectionPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// ### DEPRECATED: Use `selectionPolicy` instead
    ///
    pub const SelectionPolicy = selectionPolicy;

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
    pub fn selectionPolicy(self: KParts__PartManager) i32 {
        return qtc.KParts__PartManager_SelectionPolicy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAllowNestedParts` instead
    ///
    pub const SetAllowNestedParts = setAllowNestedParts;

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#setAllowNestedParts)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` allow: bool `
    ///
    pub fn setAllowNestedParts(self: KParts__PartManager, allow: bool) void {
        qtc.KParts__PartManager_SetAllowNestedParts(@ptrCast(self.ptr), allow);
    }

    /// ### DEPRECATED: Use `allowNestedParts` instead
    ///
    pub const AllowNestedParts = allowNestedParts;

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#allowNestedParts)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    pub fn allowNestedParts(self: KParts__PartManager) bool {
        return qtc.KParts__PartManager_AllowNestedParts(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setIgnoreScrollBars` instead
    ///
    pub const SetIgnoreScrollBars = setIgnoreScrollBars;

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#setIgnoreScrollBars)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` ignore: bool `
    ///
    pub fn setIgnoreScrollBars(self: KParts__PartManager, ignore: bool) void {
        qtc.KParts__PartManager_SetIgnoreScrollBars(@ptrCast(self.ptr), ignore);
    }

    /// ### DEPRECATED: Use `ignoreScrollBars` instead
    ///
    pub const IgnoreScrollBars = ignoreScrollBars;

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#ignoreScrollBars)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    pub fn ignoreScrollBars(self: KParts__PartManager) bool {
        return qtc.KParts__PartManager_IgnoreScrollBars(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setActivationButtonMask` instead
    ///
    pub const SetActivationButtonMask = setActivationButtonMask;

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#setActivationButtonMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` buttonMask: i16 `
    ///
    pub fn setActivationButtonMask(self: KParts__PartManager, buttonMask: i16) void {
        qtc.KParts__PartManager_SetActivationButtonMask(@ptrCast(self.ptr), @bitCast(buttonMask));
    }

    /// ### DEPRECATED: Use `activationButtonMask` instead
    ///
    pub const ActivationButtonMask = activationButtonMask;

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#activationButtonMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    pub fn activationButtonMask(self: KParts__PartManager) i16 {
        return qtc.KParts__PartManager_ActivationButtonMask(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

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
    pub fn eventFilter(self: KParts__PartManager, obj: anytype, ev: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        comptime _ = @TypeOf(ev)._is_QEvent;
        return qtc.KParts__PartManager_EventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr), @ptrCast(ev.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

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
    pub fn onEventFilter(self: KParts__PartManager, callback: *const fn (KParts__PartManager, QObject, QEvent) callconv(.c) bool) void {
        qtc.KParts__PartManager_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

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
    pub fn superEventFilter(self: KParts__PartManager, obj: anytype, ev: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        comptime _ = @TypeOf(ev)._is_QEvent;
        return qtc.KParts__PartManager_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr), @ptrCast(ev.ptr));
    }

    /// ### DEPRECATED: Use `addPart` instead
    ///
    pub const AddPart = addPart;

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
    pub fn addPart(self: KParts__PartManager, part: anytype, setActive: bool) void {
        comptime _ = @TypeOf(part)._is_KParts__Part;
        qtc.KParts__PartManager_AddPart(@ptrCast(self.ptr), @ptrCast(part.ptr), setActive);
    }

    /// ### DEPRECATED: Use `onAddPart` instead
    ///
    pub const OnAddPart = onAddPart;

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
    pub fn onAddPart(self: KParts__PartManager, callback: *const fn (KParts__PartManager, KParts__Part, bool) callconv(.c) void) void {
        qtc.KParts__PartManager_OnAddPart(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superAddPart` instead
    ///
    pub const SuperAddPart = superAddPart;

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
    pub fn superAddPart(self: KParts__PartManager, part: anytype, setActive: bool) void {
        comptime _ = @TypeOf(part)._is_KParts__Part;
        qtc.KParts__PartManager_SuperAddPart(@ptrCast(self.ptr), @ptrCast(part.ptr), setActive);
    }

    /// ### DEPRECATED: Use `removePart` instead
    ///
    pub const RemovePart = removePart;

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#removePart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` part: KParts__Part `
    ///
    pub fn removePart(self: KParts__PartManager, part: anytype) void {
        comptime _ = @TypeOf(part)._is_KParts__Part;
        qtc.KParts__PartManager_RemovePart(@ptrCast(self.ptr), @ptrCast(part.ptr));
    }

    /// ### DEPRECATED: Use `onRemovePart` instead
    ///
    pub const OnRemovePart = onRemovePart;

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
    pub fn onRemovePart(self: KParts__PartManager, callback: *const fn (KParts__PartManager, KParts__Part) callconv(.c) void) void {
        qtc.KParts__PartManager_OnRemovePart(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRemovePart` instead
    ///
    pub const SuperRemovePart = superRemovePart;

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
    pub fn superRemovePart(self: KParts__PartManager, part: anytype) void {
        comptime _ = @TypeOf(part)._is_KParts__Part;
        qtc.KParts__PartManager_SuperRemovePart(@ptrCast(self.ptr), @ptrCast(part.ptr));
    }

    /// ### DEPRECATED: Use `replacePart` instead
    ///
    pub const ReplacePart = replacePart;

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
    pub fn replacePart(self: KParts__PartManager, oldPart: anytype, newPart: anytype, setActive: bool) void {
        comptime _ = @TypeOf(oldPart)._is_KParts__Part;
        comptime _ = @TypeOf(newPart)._is_KParts__Part;
        qtc.KParts__PartManager_ReplacePart(@ptrCast(self.ptr), @ptrCast(oldPart.ptr), @ptrCast(newPart.ptr), setActive);
    }

    /// ### DEPRECATED: Use `onReplacePart` instead
    ///
    pub const OnReplacePart = onReplacePart;

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
    pub fn onReplacePart(self: KParts__PartManager, callback: *const fn (KParts__PartManager, KParts__Part, KParts__Part, bool) callconv(.c) void) void {
        qtc.KParts__PartManager_OnReplacePart(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superReplacePart` instead
    ///
    pub const SuperReplacePart = superReplacePart;

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
    pub fn superReplacePart(self: KParts__PartManager, oldPart: anytype, newPart: anytype, setActive: bool) void {
        comptime _ = @TypeOf(oldPart)._is_KParts__Part;
        comptime _ = @TypeOf(newPart)._is_KParts__Part;
        qtc.KParts__PartManager_SuperReplacePart(@ptrCast(self.ptr), @ptrCast(oldPart.ptr), @ptrCast(newPart.ptr), setActive);
    }

    /// ### DEPRECATED: Use `setActivePart` instead
    ///
    pub const SetActivePart = setActivePart;

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
    pub fn setActivePart(self: KParts__PartManager, part: anytype, widget: anytype) void {
        comptime _ = @TypeOf(part)._is_KParts__Part;
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.KParts__PartManager_SetActivePart(@ptrCast(self.ptr), @ptrCast(part.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `onSetActivePart` instead
    ///
    pub const OnSetActivePart = onSetActivePart;

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
    pub fn onSetActivePart(self: KParts__PartManager, callback: *const fn (KParts__PartManager, KParts__Part, QWidget) callconv(.c) void) void {
        qtc.KParts__PartManager_OnSetActivePart(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetActivePart` instead
    ///
    pub const SuperSetActivePart = superSetActivePart;

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
    pub fn superSetActivePart(self: KParts__PartManager, part: anytype, widget: anytype) void {
        comptime _ = @TypeOf(part)._is_KParts__Part;
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.KParts__PartManager_SuperSetActivePart(@ptrCast(self.ptr), @ptrCast(part.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `activePart` instead
    ///
    pub const ActivePart = activePart;

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#activePart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    pub fn activePart(self: KParts__PartManager) KParts__Part {
        return .{ .ptr = qtc.KParts__PartManager_ActivePart(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onActivePart` instead
    ///
    pub const OnActivePart = onActivePart;

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
    pub fn onActivePart(self: KParts__PartManager, callback: *const fn () callconv(.c) KParts__Part) void {
        qtc.KParts__PartManager_OnActivePart(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superActivePart` instead
    ///
    pub const SuperActivePart = superActivePart;

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#activePart)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    pub fn superActivePart(self: KParts__PartManager) KParts__Part {
        return .{ .ptr = qtc.KParts__PartManager_SuperActivePart(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `activeWidget` instead
    ///
    pub const ActiveWidget = activeWidget;

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#activeWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    pub fn activeWidget(self: KParts__PartManager) QWidget {
        return .{ .ptr = qtc.KParts__PartManager_ActiveWidget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onActiveWidget` instead
    ///
    pub const OnActiveWidget = onActiveWidget;

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
    pub fn onActiveWidget(self: KParts__PartManager, callback: *const fn () callconv(.c) QWidget) void {
        qtc.KParts__PartManager_OnActiveWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superActiveWidget` instead
    ///
    pub const SuperActiveWidget = superActiveWidget;

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#activeWidget)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    pub fn superActiveWidget(self: KParts__PartManager) QWidget {
        return .{ .ptr = qtc.KParts__PartManager_SuperActiveWidget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `parts` instead
    ///
    pub const Parts = parts;

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#parts)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn parts(self: KParts__PartManager, allocator: std.mem.Allocator) []KParts__Part {
        const _arr: qtc.libqt_list = qtc.KParts__PartManager_Parts(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KParts__Part, _arr.len) catch @panic("KParts__PartManager.parts: Memory allocation failed");
        const _data_val: [*]QtC.KParts__Part = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `addManagedTopLevelWidget` instead
    ///
    pub const AddManagedTopLevelWidget = addManagedTopLevelWidget;

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#addManagedTopLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` topLevel: QWidget `
    ///
    pub fn addManagedTopLevelWidget(self: KParts__PartManager, topLevel: anytype) void {
        comptime _ = @TypeOf(topLevel)._is_QWidget;
        qtc.KParts__PartManager_AddManagedTopLevelWidget(@ptrCast(self.ptr), @ptrCast(topLevel.ptr));
    }

    /// ### DEPRECATED: Use `removeManagedTopLevelWidget` instead
    ///
    pub const RemoveManagedTopLevelWidget = removeManagedTopLevelWidget;

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#removeManagedTopLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` topLevel: QWidget `
    ///
    pub fn removeManagedTopLevelWidget(self: KParts__PartManager, topLevel: anytype) void {
        comptime _ = @TypeOf(topLevel)._is_QWidget;
        qtc.KParts__PartManager_RemoveManagedTopLevelWidget(@ptrCast(self.ptr), @ptrCast(topLevel.ptr));
    }

    /// ### DEPRECATED: Use `reason` instead
    ///
    pub const Reason = reason;

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#reason)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    pub fn reason(self: KParts__PartManager) i32 {
        return qtc.KParts__PartManager_Reason(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `partAdded` instead
    ///
    pub const PartAdded = partAdded;

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#partAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` part: KParts__Part `
    ///
    pub fn partAdded(self: KParts__PartManager, part: anytype) void {
        comptime _ = @TypeOf(part)._is_KParts__Part;
        qtc.KParts__PartManager_PartAdded(@ptrCast(self.ptr), @ptrCast(part.ptr));
    }

    /// ### DEPRECATED: Use `onPartAdded` instead
    ///
    pub const OnPartAdded = onPartAdded;

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#partAdded)
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` callback: *const fn (self: KParts__PartManager, part: KParts__Part) callconv(.c) void `
    ///
    pub fn onPartAdded(self: KParts__PartManager, callback: *const fn (KParts__PartManager, KParts__Part) callconv(.c) void) void {
        qtc.KParts__PartManager_Connect_PartAdded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `partRemoved` instead
    ///
    pub const PartRemoved = partRemoved;

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#partRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` part: KParts__Part `
    ///
    pub fn partRemoved(self: KParts__PartManager, part: anytype) void {
        comptime _ = @TypeOf(part)._is_KParts__Part;
        qtc.KParts__PartManager_PartRemoved(@ptrCast(self.ptr), @ptrCast(part.ptr));
    }

    /// ### DEPRECATED: Use `onPartRemoved` instead
    ///
    pub const OnPartRemoved = onPartRemoved;

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#partRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` callback: *const fn (self: KParts__PartManager, part: KParts__Part) callconv(.c) void `
    ///
    pub fn onPartRemoved(self: KParts__PartManager, callback: *const fn (KParts__PartManager, KParts__Part) callconv(.c) void) void {
        qtc.KParts__PartManager_Connect_PartRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `activePartChanged` instead
    ///
    pub const ActivePartChanged = activePartChanged;

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#activePartChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` newPart: KParts__Part `
    ///
    pub fn activePartChanged(self: KParts__PartManager, newPart: anytype) void {
        comptime _ = @TypeOf(newPart)._is_KParts__Part;
        qtc.KParts__PartManager_ActivePartChanged(@ptrCast(self.ptr), @ptrCast(newPart.ptr));
    }

    /// ### DEPRECATED: Use `onActivePartChanged` instead
    ///
    pub const OnActivePartChanged = onActivePartChanged;

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#activePartChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` callback: *const fn (self: KParts__PartManager, newPart: KParts__Part) callconv(.c) void `
    ///
    pub fn onActivePartChanged(self: KParts__PartManager, callback: *const fn (KParts__PartManager, KParts__Part) callconv(.c) void) void {
        qtc.KParts__PartManager_Connect_ActivePartChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setIgnoreExplictFocusRequests` instead
    ///
    pub const SetIgnoreExplictFocusRequests = setIgnoreExplictFocusRequests;

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#setIgnoreExplictFocusRequests)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    /// ` ignoreExplictFocusRequests: bool `
    ///
    pub fn setIgnoreExplictFocusRequests(self: KParts__PartManager, ignoreExplictFocusRequests: bool) void {
        qtc.KParts__PartManager_SetIgnoreExplictFocusRequests(@ptrCast(self.ptr), ignoreExplictFocusRequests);
    }

    /// ### DEPRECATED: Use `onSetIgnoreExplictFocusRequests` instead
    ///
    pub const OnSetIgnoreExplictFocusRequests = onSetIgnoreExplictFocusRequests;

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
    pub fn onSetIgnoreExplictFocusRequests(self: KParts__PartManager, callback: *const fn (KParts__PartManager, bool) callconv(.c) void) void {
        qtc.KParts__PartManager_OnSetIgnoreExplictFocusRequests(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetIgnoreExplictFocusRequests` instead
    ///
    pub const SuperSetIgnoreExplictFocusRequests = superSetIgnoreExplictFocusRequests;

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
    pub fn superSetIgnoreExplictFocusRequests(self: KParts__PartManager, ignoreExplictFocusRequests: bool) void {
        qtc.KParts__PartManager_SuperSetIgnoreExplictFocusRequests(@ptrCast(self.ptr), ignoreExplictFocusRequests);
    }

    /// ### DEPRECATED: Use `slotObjectDestroyed` instead
    ///
    pub const SlotObjectDestroyed = slotObjectDestroyed;

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#slotObjectDestroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    pub fn slotObjectDestroyed(self: KParts__PartManager) void {
        qtc.KParts__PartManager_SlotObjectDestroyed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSlotObjectDestroyed` instead
    ///
    pub const OnSlotObjectDestroyed = onSlotObjectDestroyed;

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
    pub fn onSlotObjectDestroyed(self: KParts__PartManager, callback: *const fn () callconv(.c) void) void {
        qtc.KParts__PartManager_OnSlotObjectDestroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSlotObjectDestroyed` instead
    ///
    pub const SuperSlotObjectDestroyed = superSlotObjectDestroyed;

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#slotObjectDestroyed)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    pub fn superSlotObjectDestroyed(self: KParts__PartManager) void {
        qtc.KParts__PartManager_SuperSlotObjectDestroyed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `slotWidgetDestroyed` instead
    ///
    pub const SlotWidgetDestroyed = slotWidgetDestroyed;

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#slotWidgetDestroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    pub fn slotWidgetDestroyed(self: KParts__PartManager) void {
        qtc.KParts__PartManager_SlotWidgetDestroyed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSlotWidgetDestroyed` instead
    ///
    pub const OnSlotWidgetDestroyed = onSlotWidgetDestroyed;

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
    pub fn onSlotWidgetDestroyed(self: KParts__PartManager, callback: *const fn () callconv(.c) void) void {
        qtc.KParts__PartManager_OnSlotWidgetDestroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSlotWidgetDestroyed` instead
    ///
    pub const SuperSlotWidgetDestroyed = superSlotWidgetDestroyed;

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#slotWidgetDestroyed)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    pub fn superSlotWidgetDestroyed(self: KParts__PartManager) void {
        qtc.KParts__PartManager_SuperSlotWidgetDestroyed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `slotManagedTopLevelWidgetDestroyed` instead
    ///
    pub const SlotManagedTopLevelWidgetDestroyed = slotManagedTopLevelWidgetDestroyed;

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#slotManagedTopLevelWidgetDestroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    pub fn slotManagedTopLevelWidgetDestroyed(self: KParts__PartManager) void {
        qtc.KParts__PartManager_SlotManagedTopLevelWidgetDestroyed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSlotManagedTopLevelWidgetDestroyed` instead
    ///
    pub const OnSlotManagedTopLevelWidgetDestroyed = onSlotManagedTopLevelWidgetDestroyed;

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
    pub fn onSlotManagedTopLevelWidgetDestroyed(self: KParts__PartManager, callback: *const fn () callconv(.c) void) void {
        qtc.KParts__PartManager_OnSlotManagedTopLevelWidgetDestroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSlotManagedTopLevelWidgetDestroyed` instead
    ///
    pub const SuperSlotManagedTopLevelWidgetDestroyed = superSlotManagedTopLevelWidgetDestroyed;

    /// ### [Upstream resources](https://api.kde.org/kparts-partmanager.html#slotManagedTopLevelWidgetDestroyed)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartManager `
    ///
    pub fn superSlotManagedTopLevelWidgetDestroyed(self: KParts__PartManager) void {
        qtc.KParts__PartManager_SuperSlotManagedTopLevelWidgetDestroyed(@ptrCast(self.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KParts__PartManager.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KParts__PartManager.tr3: Memory allocation failed");
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
    /// ` self: KParts__PartManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KParts__PartManager, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KParts__PartManager.objectName: Memory allocation failed");
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
    /// ` self: KParts__PartManager `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: KParts__PartManager, name: []const u8) void {
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
    /// ` self: KParts__PartManager `
    ///
    pub fn isWidgetType(self: KParts__PartManager) bool {
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
    /// ` self: KParts__PartManager `
    ///
    pub fn isWindowType(self: KParts__PartManager) bool {
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
    /// ` self: KParts__PartManager `
    ///
    pub fn isQuickItemType(self: KParts__PartManager) bool {
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
    /// ` self: KParts__PartManager `
    ///
    pub fn signalsBlocked(self: KParts__PartManager) bool {
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
    /// ` self: KParts__PartManager `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KParts__PartManager, b: bool) bool {
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
    /// ` self: KParts__PartManager `
    ///
    pub fn thread(self: KParts__PartManager) QThread {
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
    /// ` self: KParts__PartManager `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KParts__PartManager, _thread: anytype) bool {
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
    /// ` self: KParts__PartManager `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KParts__PartManager, interval: i32) i32 {
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
    /// ` self: KParts__PartManager `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KParts__PartManager, time: i64) i32 {
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
    /// ` self: KParts__PartManager `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KParts__PartManager, id: i32) void {
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
    /// ` self: KParts__PartManager `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KParts__PartManager, id: i32) void {
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
    /// ` self: KParts__PartManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KParts__PartManager, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KParts__PartManager.children: Memory allocation failed");
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
    /// ` self: KParts__PartManager `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KParts__PartManager, _parent: anytype) void {
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
    /// ` self: KParts__PartManager `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KParts__PartManager, filterObj: anytype) void {
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
    /// ` self: KParts__PartManager `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KParts__PartManager, obj: anytype) void {
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
    /// ` self: KParts__PartManager `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KParts__PartManager, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KParts__PartManager `
    ///
    pub fn disconnect3(self: KParts__PartManager) bool {
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
    /// ` self: KParts__PartManager `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KParts__PartManager, receiver: anytype) bool {
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
    /// ` self: KParts__PartManager `
    ///
    pub fn dumpObjectTree(self: KParts__PartManager) void {
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
    /// ` self: KParts__PartManager `
    ///
    pub fn dumpObjectInfo(self: KParts__PartManager) void {
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
    /// ` self: KParts__PartManager `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KParts__PartManager, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KParts__PartManager `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: KParts__PartManager, name: [:0]const u8) QVariant {
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
    /// ` self: KParts__PartManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KParts__PartManager, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KParts__PartManager.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KParts__PartManager.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KParts__PartManager `
    ///
    pub fn bindingStorage(self: KParts__PartManager) QBindingStorage {
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
    /// ` self: KParts__PartManager `
    ///
    pub fn bindingStorage2(self: KParts__PartManager) QBindingStorage {
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
    /// ` self: KParts__PartManager `
    ///
    pub fn destroyed(self: KParts__PartManager) void {
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
    /// ` self: KParts__PartManager `
    ///
    /// ` callback: *const fn (self: KParts__PartManager) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KParts__PartManager, callback: *const fn (KParts__PartManager) callconv(.c) void) void {
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
    /// ` self: KParts__PartManager `
    ///
    pub fn parent(self: KParts__PartManager) QObject {
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
    /// ` self: KParts__PartManager `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KParts__PartManager, classname: [:0]const u8) bool {
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
    /// ` self: KParts__PartManager `
    ///
    pub fn deleteLater(self: KParts__PartManager) void {
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
    /// ` self: KParts__PartManager `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KParts__PartManager, interval: i32, timerType: i32) i32 {
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
    /// ` self: KParts__PartManager `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KParts__PartManager, time: i64, timerType: i32) i32 {
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
    /// ` self: KParts__PartManager `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KParts__PartManager, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KParts__PartManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KParts__PartManager, signal: [:0]const u8) bool {
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
    /// ` self: KParts__PartManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KParts__PartManager, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KParts__PartManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KParts__PartManager, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KParts__PartManager `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KParts__PartManager, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KParts__PartManager `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KParts__PartManager, param1: anytype) void {
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
    /// ` self: KParts__PartManager `
    ///
    /// ` callback: *const fn (self: KParts__PartManager, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KParts__PartManager, callback: *const fn (KParts__PartManager, QObject) callconv(.c) void) void {
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
    /// ` self: KParts__PartManager `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: KParts__PartManager, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KParts__PartManager_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KParts__PartManager `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: KParts__PartManager, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KParts__PartManager_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KParts__PartManager`
    ///
    /// ` callback: *const fn (self: KParts__PartManager, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: KParts__PartManager, callback: *const fn (KParts__PartManager, QEvent) callconv(.c) bool) void {
        qtc.KParts__PartManager_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KParts__PartManager `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: KParts__PartManager, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KParts__PartManager_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KParts__PartManager `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: KParts__PartManager, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KParts__PartManager_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KParts__PartManager`
    ///
    /// ` callback: *const fn (self: KParts__PartManager, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: KParts__PartManager, callback: *const fn (KParts__PartManager, QTimerEvent) callconv(.c) void) void {
        qtc.KParts__PartManager_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KParts__PartManager `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: KParts__PartManager, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KParts__PartManager_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KParts__PartManager `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: KParts__PartManager, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KParts__PartManager_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KParts__PartManager`
    ///
    /// ` callback: *const fn (self: KParts__PartManager, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: KParts__PartManager, callback: *const fn (KParts__PartManager, QChildEvent) callconv(.c) void) void {
        qtc.KParts__PartManager_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KParts__PartManager `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: KParts__PartManager, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KParts__PartManager_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KParts__PartManager `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: KParts__PartManager, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KParts__PartManager_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KParts__PartManager`
    ///
    /// ` callback: *const fn (self: KParts__PartManager, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: KParts__PartManager, callback: *const fn (KParts__PartManager, QEvent) callconv(.c) void) void {
        qtc.KParts__PartManager_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KParts__PartManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: KParts__PartManager, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KParts__PartManager_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KParts__PartManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: KParts__PartManager, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KParts__PartManager_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KParts__PartManager`
    ///
    /// ` callback: *const fn (self: KParts__PartManager, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: KParts__PartManager, callback: *const fn (KParts__PartManager, QMetaMethod) callconv(.c) void) void {
        qtc.KParts__PartManager_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KParts__PartManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: KParts__PartManager, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KParts__PartManager_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KParts__PartManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: KParts__PartManager, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KParts__PartManager_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KParts__PartManager`
    ///
    /// ` callback: *const fn (self: KParts__PartManager, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: KParts__PartManager, callback: *const fn (KParts__PartManager, QMetaMethod) callconv(.c) void) void {
        qtc.KParts__PartManager_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KParts__PartManager `
    ///
    pub fn sender(self: KParts__PartManager) QObject {
        return .{ .ptr = qtc.KParts__PartManager_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KParts__PartManager `
    ///
    pub fn superSender(self: KParts__PartManager) QObject {
        return .{ .ptr = qtc.KParts__PartManager_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: KParts__PartManager`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: KParts__PartManager, callback: *const fn () callconv(.c) QObject) void {
        qtc.KParts__PartManager_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KParts__PartManager `
    ///
    pub fn senderSignalIndex(self: KParts__PartManager) i32 {
        return qtc.KParts__PartManager_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KParts__PartManager `
    ///
    pub fn superSenderSignalIndex(self: KParts__PartManager) i32 {
        return qtc.KParts__PartManager_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KParts__PartManager`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: KParts__PartManager, callback: *const fn () callconv(.c) i32) void {
        qtc.KParts__PartManager_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KParts__PartManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: KParts__PartManager, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KParts__PartManager_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KParts__PartManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: KParts__PartManager, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KParts__PartManager_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KParts__PartManager`
    ///
    /// ` callback: *const fn (self: KParts__PartManager, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: KParts__PartManager, callback: *const fn (KParts__PartManager, [*:0]const u8) callconv(.c) i32) void {
        qtc.KParts__PartManager_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KParts__PartManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: KParts__PartManager, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KParts__PartManager_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KParts__PartManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: KParts__PartManager, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KParts__PartManager_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KParts__PartManager`
    ///
    /// ` callback: *const fn (self: KParts__PartManager, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: KParts__PartManager, callback: *const fn (KParts__PartManager, QMetaMethod) callconv(.c) bool) void {
        qtc.KParts__PartManager_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KParts__PartManager `
    ///
    /// ` callback: *const fn (self: KParts__PartManager, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KParts__PartManager, callback: *const fn (KParts__PartManager, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KParts__PartManager `
    ///
    pub fn delete(self: KParts__PartManager) void {
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
