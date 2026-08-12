const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KGlobalShortcutInfo = @import("libqt6").KGlobalShortcutInfo;
const QAction = @import("libqt6").QAction;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QEvent = @import("libqt6").QEvent;
const QKeySequence = @import("libqt6").QKeySequence;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QVariant = @import("libqt6").QVariant;
const QWidget = @import("libqt6").QWidget;
const kglobalaccel_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kglobalaccel.html)
pub const KGlobalAccel = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kglobalaccel.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KGlobalAccel,

    pub const _is_KGlobalAccel = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGlobalAccel `
    ///
    pub fn metaObject(self: KGlobalAccel) QMetaObject {
        return .{ .ptr = qtc.KGlobalAccel_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KGlobalAccel `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KGlobalAccel, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KGlobalAccel_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: KGlobalAccel `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: KGlobalAccel, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KGlobalAccel_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KGlobalAccel.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `self0` instead
    ///
    pub const Self = self0;

    /// ### [Upstream resources](https://api.kde.org/kglobalaccel.html#self)
    ///
    pub fn self0() KGlobalAccel {
        return .{ .ptr = qtc.KGlobalAccel_Self() };
    }

    /// ### DEPRECATED: Use `stealShortcutSystemwide` instead
    ///
    pub const StealShortcutSystemwide = stealShortcutSystemwide;

    /// ### [Upstream resources](https://api.kde.org/kglobalaccel.html#stealShortcutSystemwide)
    ///
    /// ## Parameter(s):
    ///
    /// ` seq: QKeySequence `
    ///
    pub fn stealShortcutSystemwide(seq: anytype) void {
        comptime _ = @TypeOf(seq)._is_QKeySequence;
        qtc.KGlobalAccel_StealShortcutSystemwide(@ptrCast(seq.ptr));
    }

    /// ### DEPRECATED: Use `cleanComponent` instead
    ///
    pub const CleanComponent = cleanComponent;

    /// ### [Upstream resources](https://api.kde.org/kglobalaccel.html#cleanComponent)
    ///
    /// ## Parameter(s):
    ///
    /// ` componentUnique: []const u8 `
    ///
    pub fn cleanComponent(componentUnique: []const u8) bool {
        const componentUnique_str = qtc.libqt_string{
            .len = componentUnique.len,
            .data = componentUnique.ptr,
        };
        return qtc.KGlobalAccel_CleanComponent(componentUnique_str);
    }

    /// ### DEPRECATED: Use `isComponentActive` instead
    ///
    pub const IsComponentActive = isComponentActive;

    /// ### [Upstream resources](https://api.kde.org/kglobalaccel.html#isComponentActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` componentName: []const u8 `
    ///
    pub fn isComponentActive(componentName: []const u8) bool {
        const componentName_str = qtc.libqt_string{
            .len = componentName.len,
            .data = componentName.ptr,
        };
        return qtc.KGlobalAccel_IsComponentActive(componentName_str);
    }

    /// ### DEPRECATED: Use `globalShortcutsByKey` instead
    ///
    pub const GlobalShortcutsByKey = globalShortcutsByKey;

    /// ### [Upstream resources](https://api.kde.org/kglobalaccel.html#globalShortcutsByKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` seq: QKeySequence `
    ///
    pub fn globalShortcutsByKey(allocator: std.mem.Allocator, seq: anytype) []KGlobalShortcutInfo {
        comptime _ = @TypeOf(seq)._is_QKeySequence;
        const _arr: qtc.libqt_list = qtc.KGlobalAccel_GlobalShortcutsByKey(@ptrCast(seq.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KGlobalShortcutInfo, _arr.len) catch @panic("KGlobalAccel.globalShortcutsByKey: Memory allocation failed");
        const _data_val: [*]QtC.KGlobalShortcutInfo = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `isGlobalShortcutAvailable` instead
    ///
    pub const IsGlobalShortcutAvailable = isGlobalShortcutAvailable;

    /// ### [Upstream resources](https://api.kde.org/kglobalaccel.html#isGlobalShortcutAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` seq: QKeySequence `
    ///
    pub fn isGlobalShortcutAvailable(seq: anytype) bool {
        comptime _ = @TypeOf(seq)._is_QKeySequence;
        return qtc.KGlobalAccel_IsGlobalShortcutAvailable(@ptrCast(seq.ptr));
    }

    /// ### DEPRECATED: Use `promptStealShortcutSystemwide` instead
    ///
    pub const PromptStealShortcutSystemwide = promptStealShortcutSystemwide;

    /// ### [Upstream resources](https://api.kde.org/kglobalaccel.html#promptStealShortcutSystemwide)
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QWidget `
    ///
    /// ` shortcuts: []KGlobalShortcutInfo `
    ///
    /// ` seq: QKeySequence `
    ///
    pub fn promptStealShortcutSystemwide(_parent: anytype, shortcuts: []KGlobalShortcutInfo, seq: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        const shortcuts_list = qtc.libqt_list{
            .len = shortcuts.len,
            .data = @ptrCast(shortcuts.ptr),
        };
        comptime _ = @TypeOf(seq)._is_QKeySequence;
        return qtc.KGlobalAccel_PromptStealShortcutSystemwide(@ptrCast(_parent.ptr), shortcuts_list, @ptrCast(seq.ptr));
    }

    /// ### DEPRECATED: Use `setDefaultShortcut` instead
    ///
    pub const SetDefaultShortcut = setDefaultShortcut;

    /// ### [Upstream resources](https://api.kde.org/kglobalaccel.html#setDefaultShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGlobalAccel `
    ///
    /// ` action: QAction `
    ///
    /// ` _shortcut: []QKeySequence `
    ///
    pub fn setDefaultShortcut(self: KGlobalAccel, action: anytype, _shortcut: []QKeySequence) bool {
        comptime _ = @TypeOf(action)._is_QAction;
        const shortcut_list = qtc.libqt_list{
            .len = _shortcut.len,
            .data = @ptrCast(_shortcut.ptr),
        };
        return qtc.KGlobalAccel_SetDefaultShortcut(@ptrCast(self.ptr), @ptrCast(action.ptr), shortcut_list);
    }

    /// ### DEPRECATED: Use `setShortcut` instead
    ///
    pub const SetShortcut = setShortcut;

    /// ### [Upstream resources](https://api.kde.org/kglobalaccel.html#setShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGlobalAccel `
    ///
    /// ` action: QAction `
    ///
    /// ` _shortcut: []QKeySequence `
    ///
    pub fn setShortcut(self: KGlobalAccel, action: anytype, _shortcut: []QKeySequence) bool {
        comptime _ = @TypeOf(action)._is_QAction;
        const shortcut_list = qtc.libqt_list{
            .len = _shortcut.len,
            .data = @ptrCast(_shortcut.ptr),
        };
        return qtc.KGlobalAccel_SetShortcut(@ptrCast(self.ptr), @ptrCast(action.ptr), shortcut_list);
    }

    /// ### DEPRECATED: Use `setGlobalShortcut` instead
    ///
    pub const SetGlobalShortcut = setGlobalShortcut;

    /// ### [Upstream resources](https://api.kde.org/kglobalaccel.html#setGlobalShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` action: QAction `
    ///
    /// ` _shortcut: []QKeySequence `
    ///
    pub fn setGlobalShortcut(action: anytype, _shortcut: []QKeySequence) bool {
        comptime _ = @TypeOf(action)._is_QAction;
        const shortcut_list = qtc.libqt_list{
            .len = _shortcut.len,
            .data = @ptrCast(_shortcut.ptr),
        };
        return qtc.KGlobalAccel_SetGlobalShortcut(@ptrCast(action.ptr), shortcut_list);
    }

    /// ### DEPRECATED: Use `setGlobalShortcut2` instead
    ///
    pub const SetGlobalShortcut2 = setGlobalShortcut2;

    /// ### [Upstream resources](https://api.kde.org/kglobalaccel.html#setGlobalShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` action: QAction `
    ///
    /// ` _shortcut: QKeySequence `
    ///
    pub fn setGlobalShortcut2(action: anytype, _shortcut: anytype) bool {
        comptime _ = @TypeOf(action)._is_QAction;
        comptime _ = @TypeOf(_shortcut)._is_QKeySequence;
        return qtc.KGlobalAccel_SetGlobalShortcut2(@ptrCast(action.ptr), @ptrCast(_shortcut.ptr));
    }

    /// ### DEPRECATED: Use `defaultShortcut` instead
    ///
    pub const DefaultShortcut = defaultShortcut;

    /// ### [Upstream resources](https://api.kde.org/kglobalaccel.html#defaultShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGlobalAccel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` action: QAction `
    ///
    pub fn defaultShortcut(self: KGlobalAccel, allocator: std.mem.Allocator, action: anytype) []QKeySequence {
        comptime _ = @TypeOf(action)._is_QAction;
        const _arr: qtc.libqt_list = qtc.KGlobalAccel_DefaultShortcut(@ptrCast(self.ptr), @ptrCast(action.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KGlobalAccel.defaultShortcut: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `shortcut` instead
    ///
    pub const Shortcut = shortcut;

    /// ### [Upstream resources](https://api.kde.org/kglobalaccel.html#shortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGlobalAccel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` action: QAction `
    ///
    pub fn shortcut(self: KGlobalAccel, allocator: std.mem.Allocator, action: anytype) []QKeySequence {
        comptime _ = @TypeOf(action)._is_QAction;
        const _arr: qtc.libqt_list = qtc.KGlobalAccel_Shortcut(@ptrCast(self.ptr), @ptrCast(action.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KGlobalAccel.shortcut: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `globalShortcut` instead
    ///
    pub const GlobalShortcut = globalShortcut;

    /// ### [Upstream resources](https://api.kde.org/kglobalaccel.html#globalShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGlobalAccel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` componentName: []const u8 `
    ///
    /// ` actionId: []const u8 `
    ///
    pub fn globalShortcut(self: KGlobalAccel, allocator: std.mem.Allocator, componentName: []const u8, actionId: []const u8) []QKeySequence {
        const componentName_str = qtc.libqt_string{
            .len = componentName.len,
            .data = componentName.ptr,
        };
        const actionId_str = qtc.libqt_string{
            .len = actionId.len,
            .data = actionId.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KGlobalAccel_GlobalShortcut(@ptrCast(self.ptr), componentName_str, actionId_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KGlobalAccel.globalShortcut: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `removeAllShortcuts` instead
    ///
    pub const RemoveAllShortcuts = removeAllShortcuts;

    /// ### [Upstream resources](https://api.kde.org/kglobalaccel.html#removeAllShortcuts)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGlobalAccel `
    ///
    /// ` action: QAction `
    ///
    pub fn removeAllShortcuts(self: KGlobalAccel, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.KGlobalAccel_RemoveAllShortcuts(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// ### DEPRECATED: Use `hasShortcut` instead
    ///
    pub const HasShortcut = hasShortcut;

    /// ### [Upstream resources](https://api.kde.org/kglobalaccel.html#hasShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGlobalAccel `
    ///
    /// ` action: QAction `
    ///
    pub fn hasShortcut(self: KGlobalAccel, action: anytype) bool {
        comptime _ = @TypeOf(action)._is_QAction;
        return qtc.KGlobalAccel_HasShortcut(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// ### DEPRECATED: Use `globalShortcutChanged` instead
    ///
    pub const GlobalShortcutChanged = globalShortcutChanged;

    /// ### [Upstream resources](https://api.kde.org/kglobalaccel.html#globalShortcutChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGlobalAccel `
    ///
    /// ` action: QAction `
    ///
    /// ` seq: QKeySequence `
    ///
    pub fn globalShortcutChanged(self: KGlobalAccel, action: anytype, seq: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        comptime _ = @TypeOf(seq)._is_QKeySequence;
        qtc.KGlobalAccel_GlobalShortcutChanged(@ptrCast(self.ptr), @ptrCast(action.ptr), @ptrCast(seq.ptr));
    }

    /// ### DEPRECATED: Use `onGlobalShortcutChanged` instead
    ///
    pub const OnGlobalShortcutChanged = onGlobalShortcutChanged;

    /// ### [Upstream resources](https://api.kde.org/kglobalaccel.html#globalShortcutChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KGlobalAccel `
    ///
    /// ` callback: *const fn (self: KGlobalAccel, action: QAction, seq: QKeySequence) callconv(.c) void `
    ///
    pub fn onGlobalShortcutChanged(self: KGlobalAccel, callback: *const fn (KGlobalAccel, QAction, QKeySequence) callconv(.c) void) void {
        qtc.KGlobalAccel_Connect_GlobalShortcutChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `globalShortcutActiveChanged` instead
    ///
    pub const GlobalShortcutActiveChanged = globalShortcutActiveChanged;

    /// ### [Upstream resources](https://api.kde.org/kglobalaccel.html#globalShortcutActiveChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGlobalAccel `
    ///
    /// ` action: QAction `
    ///
    /// ` active: bool `
    ///
    pub fn globalShortcutActiveChanged(self: KGlobalAccel, action: anytype, active: bool) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.KGlobalAccel_GlobalShortcutActiveChanged(@ptrCast(self.ptr), @ptrCast(action.ptr), active);
    }

    /// ### DEPRECATED: Use `onGlobalShortcutActiveChanged` instead
    ///
    pub const OnGlobalShortcutActiveChanged = onGlobalShortcutActiveChanged;

    /// ### [Upstream resources](https://api.kde.org/kglobalaccel.html#globalShortcutActiveChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KGlobalAccel `
    ///
    /// ` callback: *const fn (self: KGlobalAccel, action: QAction, active: bool) callconv(.c) void `
    ///
    pub fn onGlobalShortcutActiveChanged(self: KGlobalAccel, callback: *const fn (KGlobalAccel, QAction, bool) callconv(.c) void) void {
        qtc.KGlobalAccel_Connect_GlobalShortcutActiveChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KGlobalAccel.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KGlobalAccel.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `globalShortcutsByKey2` instead
    ///
    pub const GlobalShortcutsByKey2 = globalShortcutsByKey2;

    /// ### [Upstream resources](https://api.kde.org/kglobalaccel.html#globalShortcutsByKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` seq: QKeySequence `
    ///
    /// ` typeVal: kglobalaccel_enums.MatchType `
    ///
    pub fn globalShortcutsByKey2(allocator: std.mem.Allocator, seq: anytype, typeVal: i32) []KGlobalShortcutInfo {
        comptime _ = @TypeOf(seq)._is_QKeySequence;
        const _arr: qtc.libqt_list = qtc.KGlobalAccel_GlobalShortcutsByKey2(@ptrCast(seq.ptr), @bitCast(typeVal));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KGlobalShortcutInfo, _arr.len) catch @panic("KGlobalAccel.globalShortcutsByKey2: Memory allocation failed");
        const _data_val: [*]QtC.KGlobalShortcutInfo = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `isGlobalShortcutAvailable2` instead
    ///
    pub const IsGlobalShortcutAvailable2 = isGlobalShortcutAvailable2;

    /// ### [Upstream resources](https://api.kde.org/kglobalaccel.html#isGlobalShortcutAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` seq: QKeySequence `
    ///
    /// ` component: []const u8 `
    ///
    pub fn isGlobalShortcutAvailable2(seq: anytype, component: []const u8) bool {
        comptime _ = @TypeOf(seq)._is_QKeySequence;
        const component_str = qtc.libqt_string{
            .len = component.len,
            .data = component.ptr,
        };
        return qtc.KGlobalAccel_IsGlobalShortcutAvailable2(@ptrCast(seq.ptr), component_str);
    }

    /// ### DEPRECATED: Use `setDefaultShortcut3` instead
    ///
    pub const SetDefaultShortcut3 = setDefaultShortcut3;

    /// ### [Upstream resources](https://api.kde.org/kglobalaccel.html#setDefaultShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGlobalAccel `
    ///
    /// ` action: QAction `
    ///
    /// ` _shortcut: []QKeySequence `
    ///
    /// ` loadFlag: kglobalaccel_enums.GlobalShortcutLoading `
    ///
    pub fn setDefaultShortcut3(self: KGlobalAccel, action: anytype, _shortcut: []QKeySequence, loadFlag: i32) bool {
        comptime _ = @TypeOf(action)._is_QAction;
        const shortcut_list = qtc.libqt_list{
            .len = _shortcut.len,
            .data = @ptrCast(_shortcut.ptr),
        };
        return qtc.KGlobalAccel_SetDefaultShortcut3(@ptrCast(self.ptr), @ptrCast(action.ptr), shortcut_list, @bitCast(loadFlag));
    }

    /// ### DEPRECATED: Use `setShortcut3` instead
    ///
    pub const SetShortcut3 = setShortcut3;

    /// ### [Upstream resources](https://api.kde.org/kglobalaccel.html#setShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGlobalAccel `
    ///
    /// ` action: QAction `
    ///
    /// ` _shortcut: []QKeySequence `
    ///
    /// ` loadFlag: kglobalaccel_enums.GlobalShortcutLoading `
    ///
    pub fn setShortcut3(self: KGlobalAccel, action: anytype, _shortcut: []QKeySequence, loadFlag: i32) bool {
        comptime _ = @TypeOf(action)._is_QAction;
        const shortcut_list = qtc.libqt_list{
            .len = _shortcut.len,
            .data = @ptrCast(_shortcut.ptr),
        };
        return qtc.KGlobalAccel_SetShortcut3(@ptrCast(self.ptr), @ptrCast(action.ptr), shortcut_list, @bitCast(loadFlag));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGlobalAccel `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: KGlobalAccel, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGlobalAccel `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KGlobalAccel, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QObject_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KGlobalAccel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KGlobalAccel, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KGlobalAccel.objectName: Memory allocation failed");
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
    /// ` self: KGlobalAccel `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: KGlobalAccel, name: []const u8) void {
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
    /// ` self: KGlobalAccel `
    ///
    pub fn isWidgetType(self: KGlobalAccel) bool {
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
    /// ` self: KGlobalAccel `
    ///
    pub fn isWindowType(self: KGlobalAccel) bool {
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
    /// ` self: KGlobalAccel `
    ///
    pub fn isQuickItemType(self: KGlobalAccel) bool {
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
    /// ` self: KGlobalAccel `
    ///
    pub fn signalsBlocked(self: KGlobalAccel) bool {
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
    /// ` self: KGlobalAccel `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KGlobalAccel, b: bool) bool {
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
    /// ` self: KGlobalAccel `
    ///
    pub fn thread(self: KGlobalAccel) QThread {
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
    /// ` self: KGlobalAccel `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KGlobalAccel, _thread: anytype) bool {
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
    /// ` self: KGlobalAccel `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KGlobalAccel, interval: i32) i32 {
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
    /// ` self: KGlobalAccel `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KGlobalAccel, time: i64) i32 {
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
    /// ` self: KGlobalAccel `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KGlobalAccel, id: i32) void {
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
    /// ` self: KGlobalAccel `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KGlobalAccel, id: i32) void {
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
    /// ` self: KGlobalAccel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KGlobalAccel, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KGlobalAccel.children: Memory allocation failed");
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
    /// ` self: KGlobalAccel `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KGlobalAccel, _parent: anytype) void {
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
    /// ` self: KGlobalAccel `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KGlobalAccel, filterObj: anytype) void {
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
    /// ` self: KGlobalAccel `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KGlobalAccel, obj: anytype) void {
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
    /// ` self: KGlobalAccel `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KGlobalAccel, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KGlobalAccel `
    ///
    pub fn disconnect3(self: KGlobalAccel) bool {
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
    /// ` self: KGlobalAccel `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KGlobalAccel, receiver: anytype) bool {
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
    /// ` self: KGlobalAccel `
    ///
    pub fn dumpObjectTree(self: KGlobalAccel) void {
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
    /// ` self: KGlobalAccel `
    ///
    pub fn dumpObjectInfo(self: KGlobalAccel) void {
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
    /// ` self: KGlobalAccel `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KGlobalAccel, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KGlobalAccel `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: KGlobalAccel, name: [:0]const u8) QVariant {
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
    /// ` self: KGlobalAccel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KGlobalAccel, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KGlobalAccel.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KGlobalAccel.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KGlobalAccel `
    ///
    pub fn bindingStorage(self: KGlobalAccel) QBindingStorage {
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
    /// ` self: KGlobalAccel `
    ///
    pub fn bindingStorage2(self: KGlobalAccel) QBindingStorage {
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
    /// ` self: KGlobalAccel `
    ///
    pub fn destroyed(self: KGlobalAccel) void {
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
    /// ` self: KGlobalAccel `
    ///
    /// ` callback: *const fn (self: KGlobalAccel) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KGlobalAccel, callback: *const fn (KGlobalAccel) callconv(.c) void) void {
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
    /// ` self: KGlobalAccel `
    ///
    pub fn parent(self: KGlobalAccel) QObject {
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
    /// ` self: KGlobalAccel `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KGlobalAccel, classname: [:0]const u8) bool {
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
    /// ` self: KGlobalAccel `
    ///
    pub fn deleteLater(self: KGlobalAccel) void {
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
    /// ` self: KGlobalAccel `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KGlobalAccel, interval: i32, timerType: i32) i32 {
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
    /// ` self: KGlobalAccel `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KGlobalAccel, time: i64, timerType: i32) i32 {
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
    /// ` self: KGlobalAccel `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KGlobalAccel, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KGlobalAccel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KGlobalAccel, signal: [:0]const u8) bool {
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
    /// ` self: KGlobalAccel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KGlobalAccel, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KGlobalAccel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KGlobalAccel, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KGlobalAccel `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KGlobalAccel, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KGlobalAccel `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KGlobalAccel, param1: anytype) void {
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
    /// ` self: KGlobalAccel `
    ///
    /// ` callback: *const fn (self: KGlobalAccel, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KGlobalAccel, callback: *const fn (KGlobalAccel, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KGlobalAccel `
    ///
    /// ` callback: *const fn (self: KGlobalAccel, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KGlobalAccel, callback: *const fn (KGlobalAccel, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }
};

/// ### [Upstream resources](https://api.kde.org/kglobalaccel.html#public-types)
pub const enums = struct {
    pub const GlobalShortcutLoading = enum(i32) {
        pub const Autoloading: i32 = 0;
        pub const NoAutoloading: i32 = 4;
    };

    pub const actionIdFields = enum(i32) {
        pub const ComponentUnique: i32 = 0;
        pub const ActionUnique: i32 = 1;
        pub const ComponentFriendly: i32 = 2;
        pub const ActionFriendly: i32 = 3;
    };

    pub const MatchType = enum(i32) {
        pub const Equal: i32 = 0;
        pub const Shadows: i32 = 1;
        pub const Shadowed: i32 = 2;
    };
};
