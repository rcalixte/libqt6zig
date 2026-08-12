const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KGuiItem = @import("libqt6").KGuiItem;
const QActionGroup = @import("libqt6").QActionGroup;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QFont = @import("libqt6").QFont;
const QIcon = @import("libqt6").QIcon;
const QKeySequence = @import("libqt6").QKeySequence;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qaction_enums = @import("../libqaction.zig").enums;
const qkeysequence_enums = @import("../libqkeysequence.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kdualaction.html)
pub const KDualAction = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kdualaction.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KDualAction,

    pub const _is_KDualAction = {};
    pub const _is_QAction = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KDualAction object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new(_parent: anytype) KDualAction {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.KDualAction_new(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KDualAction object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _inactiveText: []const u8 `
    ///
    /// ` _activeText: []const u8 `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_inactiveText: []const u8, _activeText: []const u8, _parent: anytype) KDualAction {
        const inactiveText_str = qtc.libqt_string{
            .len = _inactiveText.len,
            .data = _inactiveText.ptr,
        };
        const activeText_str = qtc.libqt_string{
            .len = _activeText.len,
            .data = _activeText.ptr,
        };
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.KDualAction_new2(inactiveText_str, activeText_str, @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    pub fn metaObject(self: KDualAction) QMetaObject {
        return .{ .ptr = qtc.KDualAction_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: KDualAction `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: KDualAction, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KDualAction_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KDualAction `
    ///
    pub fn superMetaObject(self: KDualAction) QMetaObject {
        return .{ .ptr = qtc.KDualAction_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KDualAction, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KDualAction_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDualAction `
    ///
    /// ` callback: *const fn (self: KDualAction, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: KDualAction, callback: *const fn (KDualAction, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KDualAction_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: KDualAction, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KDualAction_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: KDualAction, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KDualAction_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDualAction `
    ///
    /// ` callback: *const fn (self: KDualAction, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: KDualAction, callback: *const fn (KDualAction, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KDualAction_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: KDualAction, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KDualAction_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KDualAction.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setActiveGuiItem` instead
    ///
    pub const SetActiveGuiItem = setActiveGuiItem;

    /// ### [Upstream resources](https://api.kde.org/kdualaction.html#setActiveGuiItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ` _activeGuiItem: KGuiItem `
    ///
    pub fn setActiveGuiItem(self: KDualAction, _activeGuiItem: anytype) void {
        comptime _ = @TypeOf(_activeGuiItem)._is_KGuiItem;
        qtc.KDualAction_SetActiveGuiItem(@ptrCast(self.ptr), @ptrCast(_activeGuiItem.ptr));
    }

    /// ### DEPRECATED: Use `activeGuiItem` instead
    ///
    pub const ActiveGuiItem = activeGuiItem;

    /// ### [Upstream resources](https://api.kde.org/kdualaction.html#activeGuiItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    pub fn activeGuiItem(self: KDualAction) KGuiItem {
        return .{ .ptr = qtc.KDualAction_ActiveGuiItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setInactiveGuiItem` instead
    ///
    pub const SetInactiveGuiItem = setInactiveGuiItem;

    /// ### [Upstream resources](https://api.kde.org/kdualaction.html#setInactiveGuiItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ` _inactiveGuiItem: KGuiItem `
    ///
    pub fn setInactiveGuiItem(self: KDualAction, _inactiveGuiItem: anytype) void {
        comptime _ = @TypeOf(_inactiveGuiItem)._is_KGuiItem;
        qtc.KDualAction_SetInactiveGuiItem(@ptrCast(self.ptr), @ptrCast(_inactiveGuiItem.ptr));
    }

    /// ### DEPRECATED: Use `inactiveGuiItem` instead
    ///
    pub const InactiveGuiItem = inactiveGuiItem;

    /// ### [Upstream resources](https://api.kde.org/kdualaction.html#inactiveGuiItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    pub fn inactiveGuiItem(self: KDualAction) KGuiItem {
        return .{ .ptr = qtc.KDualAction_InactiveGuiItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setActiveIcon` instead
    ///
    pub const SetActiveIcon = setActiveIcon;

    /// ### [Upstream resources](https://api.kde.org/kdualaction.html#setActiveIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ` _activeIcon: QIcon `
    ///
    pub fn setActiveIcon(self: KDualAction, _activeIcon: anytype) void {
        comptime _ = @TypeOf(_activeIcon)._is_QIcon;
        qtc.KDualAction_SetActiveIcon(@ptrCast(self.ptr), @ptrCast(_activeIcon.ptr));
    }

    /// ### DEPRECATED: Use `activeIcon` instead
    ///
    pub const ActiveIcon = activeIcon;

    /// ### [Upstream resources](https://api.kde.org/kdualaction.html#activeIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    pub fn activeIcon(self: KDualAction) QIcon {
        return .{ .ptr = qtc.KDualAction_ActiveIcon(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setInactiveIcon` instead
    ///
    pub const SetInactiveIcon = setInactiveIcon;

    /// ### [Upstream resources](https://api.kde.org/kdualaction.html#setInactiveIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ` _inactiveIcon: QIcon `
    ///
    pub fn setInactiveIcon(self: KDualAction, _inactiveIcon: anytype) void {
        comptime _ = @TypeOf(_inactiveIcon)._is_QIcon;
        qtc.KDualAction_SetInactiveIcon(@ptrCast(self.ptr), @ptrCast(_inactiveIcon.ptr));
    }

    /// ### DEPRECATED: Use `inactiveIcon` instead
    ///
    pub const InactiveIcon = inactiveIcon;

    /// ### [Upstream resources](https://api.kde.org/kdualaction.html#inactiveIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    pub fn inactiveIcon(self: KDualAction) QIcon {
        return .{ .ptr = qtc.KDualAction_InactiveIcon(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setActiveText` instead
    ///
    pub const SetActiveText = setActiveText;

    /// ### [Upstream resources](https://api.kde.org/kdualaction.html#setActiveText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ` _activeText: []const u8 `
    ///
    pub fn setActiveText(self: KDualAction, _activeText: []const u8) void {
        const activeText_str = qtc.libqt_string{
            .len = _activeText.len,
            .data = _activeText.ptr,
        };
        qtc.KDualAction_SetActiveText(@ptrCast(self.ptr), activeText_str);
    }

    /// ### DEPRECATED: Use `activeText` instead
    ///
    pub const ActiveText = activeText;

    /// ### [Upstream resources](https://api.kde.org/kdualaction.html#activeText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn activeText(self: KDualAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KDualAction_ActiveText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KDualAction.activeText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setInactiveText` instead
    ///
    pub const SetInactiveText = setInactiveText;

    /// ### [Upstream resources](https://api.kde.org/kdualaction.html#setInactiveText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ` _inactiveText: []const u8 `
    ///
    pub fn setInactiveText(self: KDualAction, _inactiveText: []const u8) void {
        const inactiveText_str = qtc.libqt_string{
            .len = _inactiveText.len,
            .data = _inactiveText.ptr,
        };
        qtc.KDualAction_SetInactiveText(@ptrCast(self.ptr), inactiveText_str);
    }

    /// ### DEPRECATED: Use `inactiveText` instead
    ///
    pub const InactiveText = inactiveText;

    /// ### [Upstream resources](https://api.kde.org/kdualaction.html#inactiveText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn inactiveText(self: KDualAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KDualAction_InactiveText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KDualAction.inactiveText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setActiveToolTip` instead
    ///
    pub const SetActiveToolTip = setActiveToolTip;

    /// ### [Upstream resources](https://api.kde.org/kdualaction.html#setActiveToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ` _activeToolTip: []const u8 `
    ///
    pub fn setActiveToolTip(self: KDualAction, _activeToolTip: []const u8) void {
        const activeToolTip_str = qtc.libqt_string{
            .len = _activeToolTip.len,
            .data = _activeToolTip.ptr,
        };
        qtc.KDualAction_SetActiveToolTip(@ptrCast(self.ptr), activeToolTip_str);
    }

    /// ### DEPRECATED: Use `activeToolTip` instead
    ///
    pub const ActiveToolTip = activeToolTip;

    /// ### [Upstream resources](https://api.kde.org/kdualaction.html#activeToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn activeToolTip(self: KDualAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KDualAction_ActiveToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KDualAction.activeToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setInactiveToolTip` instead
    ///
    pub const SetInactiveToolTip = setInactiveToolTip;

    /// ### [Upstream resources](https://api.kde.org/kdualaction.html#setInactiveToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ` _inactiveToolTip: []const u8 `
    ///
    pub fn setInactiveToolTip(self: KDualAction, _inactiveToolTip: []const u8) void {
        const inactiveToolTip_str = qtc.libqt_string{
            .len = _inactiveToolTip.len,
            .data = _inactiveToolTip.ptr,
        };
        qtc.KDualAction_SetInactiveToolTip(@ptrCast(self.ptr), inactiveToolTip_str);
    }

    /// ### DEPRECATED: Use `inactiveToolTip` instead
    ///
    pub const InactiveToolTip = inactiveToolTip;

    /// ### [Upstream resources](https://api.kde.org/kdualaction.html#inactiveToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn inactiveToolTip(self: KDualAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KDualAction_InactiveToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KDualAction.inactiveToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setIconForStates` instead
    ///
    pub const SetIconForStates = setIconForStates;

    /// ### [Upstream resources](https://api.kde.org/kdualaction.html#setIconForStates)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ` _icon: QIcon `
    ///
    pub fn setIconForStates(self: KDualAction, _icon: anytype) void {
        comptime _ = @TypeOf(_icon)._is_QIcon;
        qtc.KDualAction_SetIconForStates(@ptrCast(self.ptr), @ptrCast(_icon.ptr));
    }

    /// ### DEPRECATED: Use `isActive` instead
    ///
    pub const IsActive = isActive;

    /// ### [Upstream resources](https://api.kde.org/kdualaction.html#isActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    pub fn isActive(self: KDualAction) bool {
        return qtc.KDualAction_IsActive(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutoToggle` instead
    ///
    pub const SetAutoToggle = setAutoToggle;

    /// ### [Upstream resources](https://api.kde.org/kdualaction.html#setAutoToggle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ` _autoToggle: bool `
    ///
    pub fn setAutoToggle(self: KDualAction, _autoToggle: bool) void {
        qtc.KDualAction_SetAutoToggle(@ptrCast(self.ptr), _autoToggle);
    }

    /// ### DEPRECATED: Use `autoToggle` instead
    ///
    pub const AutoToggle = autoToggle;

    /// ### [Upstream resources](https://api.kde.org/kdualaction.html#autoToggle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    pub fn autoToggle(self: KDualAction) bool {
        return qtc.KDualAction_AutoToggle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setActive` instead
    ///
    pub const SetActive = setActive;

    /// ### [Upstream resources](https://api.kde.org/kdualaction.html#setActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ` state: bool `
    ///
    pub fn setActive(self: KDualAction, state: bool) void {
        qtc.KDualAction_SetActive(@ptrCast(self.ptr), state);
    }

    /// ### DEPRECATED: Use `activeChanged` instead
    ///
    pub const ActiveChanged = activeChanged;

    /// ### [Upstream resources](https://api.kde.org/kdualaction.html#activeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ` param1: bool `
    ///
    pub fn activeChanged(self: KDualAction, param1: bool) void {
        qtc.KDualAction_ActiveChanged(@ptrCast(self.ptr), param1);
    }

    /// ### DEPRECATED: Use `onActiveChanged` instead
    ///
    pub const OnActiveChanged = onActiveChanged;

    /// ### [Upstream resources](https://api.kde.org/kdualaction.html#activeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDualAction `
    ///
    /// ` callback: *const fn (self: KDualAction, param1: bool) callconv(.c) void `
    ///
    pub fn onActiveChanged(self: KDualAction, callback: *const fn (KDualAction, bool) callconv(.c) void) void {
        qtc.KDualAction_Connect_ActiveChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `activeChangedByUser` instead
    ///
    pub const ActiveChangedByUser = activeChangedByUser;

    /// ### [Upstream resources](https://api.kde.org/kdualaction.html#activeChangedByUser)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ` param1: bool `
    ///
    pub fn activeChangedByUser(self: KDualAction, param1: bool) void {
        qtc.KDualAction_ActiveChangedByUser(@ptrCast(self.ptr), param1);
    }

    /// ### DEPRECATED: Use `onActiveChangedByUser` instead
    ///
    pub const OnActiveChangedByUser = onActiveChangedByUser;

    /// ### [Upstream resources](https://api.kde.org/kdualaction.html#activeChangedByUser)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDualAction `
    ///
    /// ` callback: *const fn (self: KDualAction, param1: bool) callconv(.c) void `
    ///
    pub fn onActiveChangedByUser(self: KDualAction, callback: *const fn (KDualAction, bool) callconv(.c) void) void {
        qtc.KDualAction_Connect_ActiveChangedByUser(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KDualAction.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KDualAction.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `associatedObjects` instead
    ///
    pub const AssociatedObjects = associatedObjects;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#associatedObjects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn associatedObjects(self: KDualAction, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QAction_AssociatedObjects(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KDualAction.associatedObjects: Memory allocation failed");
        const _data_val: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setActionGroup` instead
    ///
    pub const SetActionGroup = setActionGroup;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setActionGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ` group: QActionGroup `
    ///
    pub fn setActionGroup(self: KDualAction, group: anytype) void {
        comptime _ = @TypeOf(group)._is_QActionGroup;
        qtc.QAction_SetActionGroup(@ptrCast(self.ptr), @ptrCast(group.ptr));
    }

    /// ### DEPRECATED: Use `actionGroup` instead
    ///
    pub const ActionGroup = actionGroup;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#actionGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    pub fn actionGroup(self: KDualAction) QActionGroup {
        return .{ .ptr = qtc.QAction_ActionGroup(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setIcon` instead
    ///
    pub const SetIcon = setIcon;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ` _icon: QIcon `
    ///
    pub fn setIcon(self: KDualAction, _icon: anytype) void {
        comptime _ = @TypeOf(_icon)._is_QIcon;
        qtc.QAction_SetIcon(@ptrCast(self.ptr), @ptrCast(_icon.ptr));
    }

    /// ### DEPRECATED: Use `icon` instead
    ///
    pub const Icon = icon;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    pub fn icon(self: KDualAction) QIcon {
        return .{ .ptr = qtc.QAction_Icon(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setText` instead
    ///
    pub const SetText = setText;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn setText(self: KDualAction, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.QAction_SetText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn text(self: KDualAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAction_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KDualAction.text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setIconText` instead
    ///
    pub const SetIconText = setIconText;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn setIconText(self: KDualAction, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.QAction_SetIconText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `iconText` instead
    ///
    pub const IconText = iconText;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#iconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn iconText(self: KDualAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAction_IconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KDualAction.iconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setToolTip` instead
    ///
    pub const SetToolTip = setToolTip;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ` tip: []const u8 `
    ///
    pub fn setToolTip(self: KDualAction, tip: []const u8) void {
        const tip_str = qtc.libqt_string{
            .len = tip.len,
            .data = tip.ptr,
        };
        qtc.QAction_SetToolTip(@ptrCast(self.ptr), tip_str);
    }

    /// ### DEPRECATED: Use `toolTip` instead
    ///
    pub const ToolTip = toolTip;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toolTip(self: KDualAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAction_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KDualAction.toolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setStatusTip` instead
    ///
    pub const SetStatusTip = setStatusTip;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ` _statusTip: []const u8 `
    ///
    pub fn setStatusTip(self: KDualAction, _statusTip: []const u8) void {
        const statusTip_str = qtc.libqt_string{
            .len = _statusTip.len,
            .data = _statusTip.ptr,
        };
        qtc.QAction_SetStatusTip(@ptrCast(self.ptr), statusTip_str);
    }

    /// ### DEPRECATED: Use `statusTip` instead
    ///
    pub const StatusTip = statusTip;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#statusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn statusTip(self: KDualAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAction_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KDualAction.statusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setWhatsThis` instead
    ///
    pub const SetWhatsThis = setWhatsThis;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ` what: []const u8 `
    ///
    pub fn setWhatsThis(self: KDualAction, what: []const u8) void {
        const what_str = qtc.libqt_string{
            .len = what.len,
            .data = what.ptr,
        };
        qtc.QAction_SetWhatsThis(@ptrCast(self.ptr), what_str);
    }

    /// ### DEPRECATED: Use `whatsThis` instead
    ///
    pub const WhatsThis = whatsThis;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#whatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn whatsThis(self: KDualAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAction_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KDualAction.whatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPriority` instead
    ///
    pub const SetPriority = setPriority;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setPriority)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ` _priority: qaction_enums.Priority `
    ///
    pub fn setPriority(self: KDualAction, _priority: i32) void {
        qtc.QAction_SetPriority(@ptrCast(self.ptr), @bitCast(_priority));
    }

    /// ### DEPRECATED: Use `priority` instead
    ///
    pub const Priority = priority;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#priority)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ## Returns:
    ///
    /// ` qaction_enums.Priority `
    ///
    pub fn priority(self: KDualAction) i32 {
        return qtc.QAction_Priority(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSeparator` instead
    ///
    pub const SetSeparator = setSeparator;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setSeparator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ` b: bool `
    ///
    pub fn setSeparator(self: KDualAction, b: bool) void {
        qtc.QAction_SetSeparator(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `isSeparator` instead
    ///
    pub const IsSeparator = isSeparator;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isSeparator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    pub fn isSeparator(self: KDualAction) bool {
        return qtc.QAction_IsSeparator(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setShortcut` instead
    ///
    pub const SetShortcut = setShortcut;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ` _shortcut: QKeySequence `
    ///
    pub fn setShortcut(self: KDualAction, _shortcut: anytype) void {
        comptime _ = @TypeOf(_shortcut)._is_QKeySequence;
        qtc.QAction_SetShortcut(@ptrCast(self.ptr), @ptrCast(_shortcut.ptr));
    }

    /// ### DEPRECATED: Use `shortcut` instead
    ///
    pub const Shortcut = shortcut;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    pub fn shortcut(self: KDualAction) QKeySequence {
        return .{ .ptr = qtc.QAction_Shortcut(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setShortcuts` instead
    ///
    pub const SetShortcuts = setShortcuts;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ` _shortcuts: []QKeySequence `
    ///
    pub fn setShortcuts(self: KDualAction, _shortcuts: []QKeySequence) void {
        const shortcuts_list = qtc.libqt_list{
            .len = _shortcuts.len,
            .data = @ptrCast(_shortcuts.ptr),
        };
        qtc.QAction_SetShortcuts(@ptrCast(self.ptr), shortcuts_list);
    }

    /// ### DEPRECATED: Use `setShortcuts2` instead
    ///
    pub const SetShortcuts2 = setShortcuts2;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ` _shortcuts: qkeysequence_enums.StandardKey `
    ///
    pub fn setShortcuts2(self: KDualAction, _shortcuts: i32) void {
        qtc.QAction_SetShortcuts2(@ptrCast(self.ptr), @bitCast(_shortcuts));
    }

    /// ### DEPRECATED: Use `shortcuts` instead
    ///
    pub const Shortcuts = shortcuts;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcuts)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn shortcuts(self: KDualAction, allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.QAction_Shortcuts(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KDualAction.shortcuts: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setShortcutContext` instead
    ///
    pub const SetShortcutContext = setShortcutContext;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcutContext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn setShortcutContext(self: KDualAction, context: i32) void {
        qtc.QAction_SetShortcutContext(@ptrCast(self.ptr), @bitCast(context));
    }

    /// ### DEPRECATED: Use `shortcutContext` instead
    ///
    pub const ShortcutContext = shortcutContext;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcutContext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ShortcutContext `
    ///
    pub fn shortcutContext(self: KDualAction) i32 {
        return qtc.QAction_ShortcutContext(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutoRepeat` instead
    ///
    pub const SetAutoRepeat = setAutoRepeat;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ` _autoRepeat: bool `
    ///
    pub fn setAutoRepeat(self: KDualAction, _autoRepeat: bool) void {
        qtc.QAction_SetAutoRepeat(@ptrCast(self.ptr), _autoRepeat);
    }

    /// ### DEPRECATED: Use `autoRepeat` instead
    ///
    pub const AutoRepeat = autoRepeat;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#autoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    pub fn autoRepeat(self: KDualAction) bool {
        return qtc.QAction_AutoRepeat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFont` instead
    ///
    pub const SetFont = setFont;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ` _font: QFont `
    ///
    pub fn setFont(self: KDualAction, _font: anytype) void {
        comptime _ = @TypeOf(_font)._is_QFont;
        qtc.QAction_SetFont(@ptrCast(self.ptr), @ptrCast(_font.ptr));
    }

    /// ### DEPRECATED: Use `font` instead
    ///
    pub const Font = font;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    pub fn font(self: KDualAction) QFont {
        return .{ .ptr = qtc.QAction_Font(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCheckable` instead
    ///
    pub const SetCheckable = setCheckable;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setCheckable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ` checkable: bool `
    ///
    pub fn setCheckable(self: KDualAction, checkable: bool) void {
        qtc.QAction_SetCheckable(@ptrCast(self.ptr), checkable);
    }

    /// ### DEPRECATED: Use `isCheckable` instead
    ///
    pub const IsCheckable = isCheckable;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isCheckable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    pub fn isCheckable(self: KDualAction) bool {
        return qtc.QAction_IsCheckable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `data` instead
    ///
    pub const Data = data;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    pub fn data(self: KDualAction) QVariant {
        return .{ .ptr = qtc.QAction_Data(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setData` instead
    ///
    pub const SetData = setData;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ` varVal: QVariant `
    ///
    pub fn setData(self: KDualAction, varVal: anytype) void {
        comptime _ = @TypeOf(varVal)._is_QVariant;
        qtc.QAction_SetData(@ptrCast(self.ptr), @ptrCast(varVal.ptr));
    }

    /// ### DEPRECATED: Use `isChecked` instead
    ///
    pub const IsChecked = isChecked;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isChecked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    pub fn isChecked(self: KDualAction) bool {
        return qtc.QAction_IsChecked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEnabled` instead
    ///
    pub const IsEnabled = isEnabled;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    pub fn isEnabled(self: KDualAction) bool {
        return qtc.QAction_IsEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isVisible` instead
    ///
    pub const IsVisible = isVisible;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    pub fn isVisible(self: KDualAction) bool {
        return qtc.QAction_IsVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `activate` instead
    ///
    pub const Activate = activate;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#activate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ` _event: qaction_enums.ActionEvent `
    ///
    pub fn activate(self: KDualAction, _event: i32) void {
        qtc.QAction_Activate(@ptrCast(self.ptr), @bitCast(_event));
    }

    /// ### DEPRECATED: Use `setMenuRole` instead
    ///
    pub const SetMenuRole = setMenuRole;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setMenuRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ` _menuRole: qaction_enums.MenuRole `
    ///
    pub fn setMenuRole(self: KDualAction, _menuRole: i32) void {
        qtc.QAction_SetMenuRole(@ptrCast(self.ptr), @bitCast(_menuRole));
    }

    /// ### DEPRECATED: Use `menuRole` instead
    ///
    pub const MenuRole = menuRole;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#menuRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ## Returns:
    ///
    /// ` qaction_enums.MenuRole `
    ///
    pub fn menuRole(self: KDualAction) i32 {
        return qtc.QAction_MenuRole(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setIconVisibleInMenu` instead
    ///
    pub const SetIconVisibleInMenu = setIconVisibleInMenu;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIconVisibleInMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ` visible: bool `
    ///
    pub fn setIconVisibleInMenu(self: KDualAction, visible: bool) void {
        qtc.QAction_SetIconVisibleInMenu(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `isIconVisibleInMenu` instead
    ///
    pub const IsIconVisibleInMenu = isIconVisibleInMenu;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isIconVisibleInMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    pub fn isIconVisibleInMenu(self: KDualAction) bool {
        return qtc.QAction_IsIconVisibleInMenu(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setShortcutVisibleInContextMenu` instead
    ///
    pub const SetShortcutVisibleInContextMenu = setShortcutVisibleInContextMenu;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcutVisibleInContextMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ` show: bool `
    ///
    pub fn setShortcutVisibleInContextMenu(self: KDualAction, show: bool) void {
        qtc.QAction_SetShortcutVisibleInContextMenu(@ptrCast(self.ptr), show);
    }

    /// ### DEPRECATED: Use `isShortcutVisibleInContextMenu` instead
    ///
    pub const IsShortcutVisibleInContextMenu = isShortcutVisibleInContextMenu;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isShortcutVisibleInContextMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    pub fn isShortcutVisibleInContextMenu(self: KDualAction) bool {
        return qtc.QAction_IsShortcutVisibleInContextMenu(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `showStatusText` instead
    ///
    pub const ShowStatusText = showStatusText;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#showStatusText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    pub fn showStatusText(self: KDualAction) bool {
        return qtc.QAction_ShowStatusText(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `trigger` instead
    ///
    pub const Trigger = trigger;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#trigger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    pub fn trigger(self: KDualAction) void {
        qtc.QAction_Trigger(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hover` instead
    ///
    pub const Hover = hover;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hover)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    pub fn hover(self: KDualAction) void {
        qtc.QAction_Hover(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setChecked` instead
    ///
    pub const SetChecked = setChecked;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setChecked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ` checked: bool `
    ///
    pub fn setChecked(self: KDualAction, checked: bool) void {
        qtc.QAction_SetChecked(@ptrCast(self.ptr), checked);
    }

    /// ### DEPRECATED: Use `toggle` instead
    ///
    pub const Toggle = toggle;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    pub fn toggle(self: KDualAction) void {
        qtc.QAction_Toggle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setEnabled` instead
    ///
    pub const SetEnabled = setEnabled;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ` enabled: bool `
    ///
    pub fn setEnabled(self: KDualAction, enabled: bool) void {
        qtc.QAction_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `resetEnabled` instead
    ///
    pub const ResetEnabled = resetEnabled;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#resetEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    pub fn resetEnabled(self: KDualAction) void {
        qtc.QAction_ResetEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDisabled` instead
    ///
    pub const SetDisabled = setDisabled;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ` b: bool `
    ///
    pub fn setDisabled(self: KDualAction, b: bool) void {
        qtc.QAction_SetDisabled(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `setVisible` instead
    ///
    pub const SetVisible = setVisible;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ` visible: bool `
    ///
    pub fn setVisible(self: KDualAction, visible: bool) void {
        qtc.QAction_SetVisible(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `changed` instead
    ///
    pub const Changed = changed;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#changed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    pub fn changed(self: KDualAction) void {
        qtc.QAction_Changed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onChanged` instead
    ///
    pub const OnChanged = onChanged;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#changed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDualAction `
    ///
    /// ` callback: *const fn (self: KDualAction) callconv(.c) void `
    ///
    pub fn onChanged(self: KDualAction, callback: *const fn (KDualAction) callconv(.c) void) void {
        qtc.QAction_Connect_Changed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `enabledChanged` instead
    ///
    pub const EnabledChanged = enabledChanged;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ` enabled: bool `
    ///
    pub fn enabledChanged(self: KDualAction, enabled: bool) void {
        qtc.QAction_EnabledChanged(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `onEnabledChanged` instead
    ///
    pub const OnEnabledChanged = onEnabledChanged;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDualAction `
    ///
    /// ` callback: *const fn (self: KDualAction, enabled: bool) callconv(.c) void `
    ///
    pub fn onEnabledChanged(self: KDualAction, callback: *const fn (KDualAction, bool) callconv(.c) void) void {
        qtc.QAction_Connect_EnabledChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `checkableChanged` instead
    ///
    pub const CheckableChanged = checkableChanged;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ` checkable: bool `
    ///
    pub fn checkableChanged(self: KDualAction, checkable: bool) void {
        qtc.QAction_CheckableChanged(@ptrCast(self.ptr), checkable);
    }

    /// ### DEPRECATED: Use `onCheckableChanged` instead
    ///
    pub const OnCheckableChanged = onCheckableChanged;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDualAction `
    ///
    /// ` callback: *const fn (self: KDualAction, checkable: bool) callconv(.c) void `
    ///
    pub fn onCheckableChanged(self: KDualAction, callback: *const fn (KDualAction, bool) callconv(.c) void) void {
        qtc.QAction_Connect_CheckableChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `visibleChanged` instead
    ///
    pub const VisibleChanged = visibleChanged;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    pub fn visibleChanged(self: KDualAction) void {
        qtc.QAction_VisibleChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onVisibleChanged` instead
    ///
    pub const OnVisibleChanged = onVisibleChanged;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDualAction `
    ///
    /// ` callback: *const fn (self: KDualAction) callconv(.c) void `
    ///
    pub fn onVisibleChanged(self: KDualAction, callback: *const fn (KDualAction) callconv(.c) void) void {
        qtc.QAction_Connect_VisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `triggered` instead
    ///
    pub const Triggered = triggered;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    pub fn triggered(self: KDualAction) void {
        qtc.QAction_Triggered(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onTriggered` instead
    ///
    pub const OnTriggered = onTriggered;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDualAction `
    ///
    /// ` callback: *const fn (self: KDualAction) callconv(.c) void `
    ///
    pub fn onTriggered(self: KDualAction, callback: *const fn (KDualAction) callconv(.c) void) void {
        qtc.QAction_Connect_Triggered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `hovered` instead
    ///
    pub const Hovered = hovered;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hovered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    pub fn hovered(self: KDualAction) void {
        qtc.QAction_Hovered(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onHovered` instead
    ///
    pub const OnHovered = onHovered;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hovered)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDualAction `
    ///
    /// ` callback: *const fn (self: KDualAction) callconv(.c) void `
    ///
    pub fn onHovered(self: KDualAction, callback: *const fn (KDualAction) callconv(.c) void) void {
        qtc.QAction_Connect_Hovered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `toggled` instead
    ///
    pub const Toggled = toggled;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ` param1: bool `
    ///
    pub fn toggled(self: KDualAction, param1: bool) void {
        qtc.QAction_Toggled(@ptrCast(self.ptr), param1);
    }

    /// ### DEPRECATED: Use `onToggled` instead
    ///
    pub const OnToggled = onToggled;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggled)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDualAction `
    ///
    /// ` callback: *const fn (self: KDualAction, param1: bool) callconv(.c) void `
    ///
    pub fn onToggled(self: KDualAction, callback: *const fn (KDualAction, bool) callconv(.c) void) void {
        qtc.QAction_Connect_Toggled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `showStatusText1` instead
    ///
    pub const ShowStatusText1 = showStatusText1;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#showStatusText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ` object: QObject `
    ///
    pub fn showStatusText1(self: KDualAction, object: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        return qtc.QAction_ShowStatusText1(@ptrCast(self.ptr), @ptrCast(object.ptr));
    }

    /// ### DEPRECATED: Use `triggered1` instead
    ///
    pub const Triggered1 = triggered1;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ` checked: bool `
    ///
    pub fn triggered1(self: KDualAction, checked: bool) void {
        qtc.QAction_Triggered1(@ptrCast(self.ptr), checked);
    }

    /// ### DEPRECATED: Use `onTriggered1` instead
    ///
    pub const OnTriggered1 = onTriggered1;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDualAction `
    ///
    /// ` callback: *const fn (self: KDualAction, checked: bool) callconv(.c) void `
    ///
    pub fn onTriggered1(self: KDualAction, callback: *const fn (KDualAction, bool) callconv(.c) void) void {
        qtc.QAction_Connect_Triggered1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KDualAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KDualAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KDualAction.objectName: Memory allocation failed");
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
    /// ` self: KDualAction `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: KDualAction, name: []const u8) void {
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
    /// ` self: KDualAction `
    ///
    pub fn isWidgetType(self: KDualAction) bool {
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
    /// ` self: KDualAction `
    ///
    pub fn isWindowType(self: KDualAction) bool {
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
    /// ` self: KDualAction `
    ///
    pub fn isQuickItemType(self: KDualAction) bool {
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
    /// ` self: KDualAction `
    ///
    pub fn signalsBlocked(self: KDualAction) bool {
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
    /// ` self: KDualAction `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KDualAction, b: bool) bool {
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
    /// ` self: KDualAction `
    ///
    pub fn thread(self: KDualAction) QThread {
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
    /// ` self: KDualAction `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KDualAction, _thread: anytype) bool {
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
    /// ` self: KDualAction `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KDualAction, interval: i32) i32 {
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
    /// ` self: KDualAction `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KDualAction, time: i64) i32 {
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
    /// ` self: KDualAction `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KDualAction, id: i32) void {
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
    /// ` self: KDualAction `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KDualAction, id: i32) void {
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
    /// ` self: KDualAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KDualAction, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KDualAction.children: Memory allocation failed");
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
    /// ` self: KDualAction `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KDualAction, _parent: anytype) void {
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
    /// ` self: KDualAction `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KDualAction, filterObj: anytype) void {
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
    /// ` self: KDualAction `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KDualAction, obj: anytype) void {
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
    /// ` self: KDualAction `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KDualAction, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KDualAction `
    ///
    pub fn disconnect3(self: KDualAction) bool {
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
    /// ` self: KDualAction `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KDualAction, receiver: anytype) bool {
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
    /// ` self: KDualAction `
    ///
    pub fn dumpObjectTree(self: KDualAction) void {
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
    /// ` self: KDualAction `
    ///
    pub fn dumpObjectInfo(self: KDualAction) void {
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
    /// ` self: KDualAction `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KDualAction, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KDualAction `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: KDualAction, name: [:0]const u8) QVariant {
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
    /// ` self: KDualAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KDualAction, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KDualAction.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KDualAction.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KDualAction `
    ///
    pub fn bindingStorage(self: KDualAction) QBindingStorage {
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
    /// ` self: KDualAction `
    ///
    pub fn bindingStorage2(self: KDualAction) QBindingStorage {
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
    /// ` self: KDualAction `
    ///
    pub fn destroyed(self: KDualAction) void {
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
    /// ` self: KDualAction `
    ///
    /// ` callback: *const fn (self: KDualAction) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KDualAction, callback: *const fn (KDualAction) callconv(.c) void) void {
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
    /// ` self: KDualAction `
    ///
    pub fn parent(self: KDualAction) QObject {
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
    /// ` self: KDualAction `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KDualAction, classname: [:0]const u8) bool {
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
    /// ` self: KDualAction `
    ///
    pub fn deleteLater(self: KDualAction) void {
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
    /// ` self: KDualAction `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KDualAction, interval: i32, timerType: i32) i32 {
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
    /// ` self: KDualAction `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KDualAction, time: i64, timerType: i32) i32 {
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
    /// ` self: KDualAction `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KDualAction, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KDualAction `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KDualAction, signal: [:0]const u8) bool {
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
    /// ` self: KDualAction `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KDualAction, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KDualAction `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KDualAction, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KDualAction `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KDualAction, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KDualAction `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KDualAction, param1: anytype) void {
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
    /// ` self: KDualAction `
    ///
    /// ` callback: *const fn (self: KDualAction, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KDualAction, callback: *const fn (KDualAction, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ` param1: QEvent `
    ///
    pub fn event(self: KDualAction, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.KDualAction_Event(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDualAction `
    ///
    /// ` param1: QEvent `
    ///
    pub fn superEvent(self: KDualAction, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.KDualAction_SuperEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDualAction`
    ///
    /// ` callback: *const fn (self: KDualAction, param1: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: KDualAction, callback: *const fn (KDualAction, QEvent) callconv(.c) bool) void {
        qtc.KDualAction_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KDualAction `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KDualAction, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KDualAction_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KDualAction `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: KDualAction, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KDualAction_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KDualAction`
    ///
    /// ` callback: *const fn (self: KDualAction, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: KDualAction, callback: *const fn (KDualAction, QObject, QEvent) callconv(.c) bool) void {
        qtc.KDualAction_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KDualAction `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: KDualAction, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KDualAction_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KDualAction `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: KDualAction, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KDualAction_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KDualAction`
    ///
    /// ` callback: *const fn (self: KDualAction, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: KDualAction, callback: *const fn (KDualAction, QTimerEvent) callconv(.c) void) void {
        qtc.KDualAction_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KDualAction `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: KDualAction, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KDualAction_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KDualAction `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: KDualAction, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KDualAction_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KDualAction`
    ///
    /// ` callback: *const fn (self: KDualAction, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: KDualAction, callback: *const fn (KDualAction, QChildEvent) callconv(.c) void) void {
        qtc.KDualAction_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KDualAction `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: KDualAction, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KDualAction_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KDualAction `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: KDualAction, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KDualAction_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KDualAction`
    ///
    /// ` callback: *const fn (self: KDualAction, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: KDualAction, callback: *const fn (KDualAction, QEvent) callconv(.c) void) void {
        qtc.KDualAction_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KDualAction `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: KDualAction, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KDualAction_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KDualAction `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: KDualAction, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KDualAction_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KDualAction`
    ///
    /// ` callback: *const fn (self: KDualAction, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: KDualAction, callback: *const fn (KDualAction, QMetaMethod) callconv(.c) void) void {
        qtc.KDualAction_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KDualAction `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: KDualAction, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KDualAction_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KDualAction `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: KDualAction, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KDualAction_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KDualAction`
    ///
    /// ` callback: *const fn (self: KDualAction, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: KDualAction, callback: *const fn (KDualAction, QMetaMethod) callconv(.c) void) void {
        qtc.KDualAction_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KDualAction `
    ///
    pub fn sender(self: KDualAction) QObject {
        return .{ .ptr = qtc.KDualAction_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KDualAction `
    ///
    pub fn superSender(self: KDualAction) QObject {
        return .{ .ptr = qtc.KDualAction_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: KDualAction`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: KDualAction, callback: *const fn () callconv(.c) QObject) void {
        qtc.KDualAction_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KDualAction `
    ///
    pub fn senderSignalIndex(self: KDualAction) i32 {
        return qtc.KDualAction_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KDualAction `
    ///
    pub fn superSenderSignalIndex(self: KDualAction) i32 {
        return qtc.KDualAction_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KDualAction`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: KDualAction, callback: *const fn () callconv(.c) i32) void {
        qtc.KDualAction_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KDualAction `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: KDualAction, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KDualAction_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KDualAction `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: KDualAction, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KDualAction_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KDualAction`
    ///
    /// ` callback: *const fn (self: KDualAction, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: KDualAction, callback: *const fn (KDualAction, [*:0]const u8) callconv(.c) i32) void {
        qtc.KDualAction_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KDualAction `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: KDualAction, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KDualAction_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KDualAction `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: KDualAction, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KDualAction_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KDualAction`
    ///
    /// ` callback: *const fn (self: KDualAction, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: KDualAction, callback: *const fn (KDualAction, QMetaMethod) callconv(.c) bool) void {
        qtc.KDualAction_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KDualAction `
    ///
    /// ` callback: *const fn (self: KDualAction, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KDualAction, callback: *const fn (KDualAction, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kdualaction.html#dtor.KDualAction)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KDualAction `
    ///
    pub fn delete(self: KDualAction) void {
        qtc.KDualAction_Delete(@ptrCast(self.ptr));
    }
};
