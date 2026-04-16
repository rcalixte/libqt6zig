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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGlobalAccel `
    ///
    pub fn MetaObject(self: KGlobalAccel) QMetaObject {
        return .{ .ptr = qtc.KGlobalAccel_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KGlobalAccel `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KGlobalAccel, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KGlobalAccel_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

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
    pub fn Metacall(self: KGlobalAccel, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KGlobalAccel_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kglobalaccel.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kglobalaccel.html#self)
    ///
    pub fn Self() KGlobalAccel {
        return .{ .ptr = qtc.KGlobalAccel_Self() };
    }

    /// ### [Upstream resources](https://api.kde.org/kglobalaccel.html#stealShortcutSystemwide)
    ///
    /// ## Parameter(s):
    ///
    /// ` seq: QKeySequence `
    ///
    pub fn StealShortcutSystemwide(seq: anytype) void {
        comptime _ = @TypeOf(seq)._is_QKeySequence;
        qtc.KGlobalAccel_StealShortcutSystemwide(@ptrCast(seq.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kglobalaccel.html#cleanComponent)
    ///
    /// ## Parameter(s):
    ///
    /// ` componentUnique: []const u8 `
    ///
    pub fn CleanComponent(componentUnique: []const u8) bool {
        const componentUnique_str = qtc.libqt_string{
            .len = componentUnique.len,
            .data = componentUnique.ptr,
        };
        return qtc.KGlobalAccel_CleanComponent(componentUnique_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kglobalaccel.html#isComponentActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` componentName: []const u8 `
    ///
    pub fn IsComponentActive(componentName: []const u8) bool {
        const componentName_str = qtc.libqt_string{
            .len = componentName.len,
            .data = componentName.ptr,
        };
        return qtc.KGlobalAccel_IsComponentActive(componentName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kglobalaccel.html#globalShortcutsByKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` seq: QKeySequence `
    ///
    pub fn GlobalShortcutsByKey(allocator: std.mem.Allocator, seq: anytype) []KGlobalShortcutInfo {
        comptime _ = @TypeOf(seq)._is_QKeySequence;
        const _arr: qtc.libqt_list = qtc.KGlobalAccel_GlobalShortcutsByKey(@ptrCast(seq.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KGlobalShortcutInfo, _arr.len) catch @panic("kglobalaccel.GlobalShortcutsByKey: Memory allocation failed");
        const _data: [*]QtC.KGlobalShortcutInfo = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kglobalaccel.html#isGlobalShortcutAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` seq: QKeySequence `
    ///
    pub fn IsGlobalShortcutAvailable(seq: anytype) bool {
        comptime _ = @TypeOf(seq)._is_QKeySequence;
        return qtc.KGlobalAccel_IsGlobalShortcutAvailable(@ptrCast(seq.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kglobalaccel.html#promptStealShortcutSystemwide)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` shortcuts: []KGlobalShortcutInfo `
    ///
    /// ` seq: QKeySequence `
    ///
    pub fn PromptStealShortcutSystemwide(parent: anytype, shortcuts: []KGlobalShortcutInfo, seq: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const shortcuts_list = qtc.libqt_list{
            .len = shortcuts.len,
            .data = @ptrCast(shortcuts.ptr),
        };
        comptime _ = @TypeOf(seq)._is_QKeySequence;
        return qtc.KGlobalAccel_PromptStealShortcutSystemwide(@ptrCast(parent.ptr), shortcuts_list, @ptrCast(seq.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kglobalaccel.html#setDefaultShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGlobalAccel `
    ///
    /// ` action: QAction `
    ///
    /// ` shortcut: []QKeySequence `
    ///
    pub fn SetDefaultShortcut(self: KGlobalAccel, action: anytype, shortcut: []QKeySequence) bool {
        comptime _ = @TypeOf(action)._is_QAction;
        const shortcut_list = qtc.libqt_list{
            .len = shortcut.len,
            .data = @ptrCast(shortcut.ptr),
        };
        return qtc.KGlobalAccel_SetDefaultShortcut(@ptrCast(self.ptr), @ptrCast(action.ptr), shortcut_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kglobalaccel.html#setShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGlobalAccel `
    ///
    /// ` action: QAction `
    ///
    /// ` shortcut: []QKeySequence `
    ///
    pub fn SetShortcut(self: KGlobalAccel, action: anytype, shortcut: []QKeySequence) bool {
        comptime _ = @TypeOf(action)._is_QAction;
        const shortcut_list = qtc.libqt_list{
            .len = shortcut.len,
            .data = @ptrCast(shortcut.ptr),
        };
        return qtc.KGlobalAccel_SetShortcut(@ptrCast(self.ptr), @ptrCast(action.ptr), shortcut_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kglobalaccel.html#setGlobalShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` action: QAction `
    ///
    /// ` shortcut: []QKeySequence `
    ///
    pub fn SetGlobalShortcut(action: anytype, shortcut: []QKeySequence) bool {
        comptime _ = @TypeOf(action)._is_QAction;
        const shortcut_list = qtc.libqt_list{
            .len = shortcut.len,
            .data = @ptrCast(shortcut.ptr),
        };
        return qtc.KGlobalAccel_SetGlobalShortcut(@ptrCast(action.ptr), shortcut_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kglobalaccel.html#setGlobalShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` action: QAction `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn SetGlobalShortcut2(action: anytype, shortcut: anytype) bool {
        comptime _ = @TypeOf(action)._is_QAction;
        comptime _ = @TypeOf(shortcut)._is_QKeySequence;
        return qtc.KGlobalAccel_SetGlobalShortcut2(@ptrCast(action.ptr), @ptrCast(shortcut.ptr));
    }

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
    pub fn DefaultShortcut(self: KGlobalAccel, allocator: std.mem.Allocator, action: anytype) []QKeySequence {
        comptime _ = @TypeOf(action)._is_QAction;
        const _arr: qtc.libqt_list = qtc.KGlobalAccel_DefaultShortcut(@ptrCast(self.ptr), @ptrCast(action.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("kglobalaccel.DefaultShortcut: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

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
    pub fn Shortcut(self: KGlobalAccel, allocator: std.mem.Allocator, action: anytype) []QKeySequence {
        comptime _ = @TypeOf(action)._is_QAction;
        const _arr: qtc.libqt_list = qtc.KGlobalAccel_Shortcut(@ptrCast(self.ptr), @ptrCast(action.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("kglobalaccel.Shortcut: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

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
    pub fn GlobalShortcut(self: KGlobalAccel, allocator: std.mem.Allocator, componentName: []const u8, actionId: []const u8) []QKeySequence {
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
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("kglobalaccel.GlobalShortcut: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kglobalaccel.html#removeAllShortcuts)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGlobalAccel `
    ///
    /// ` action: QAction `
    ///
    pub fn RemoveAllShortcuts(self: KGlobalAccel, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.KGlobalAccel_RemoveAllShortcuts(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kglobalaccel.html#hasShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGlobalAccel `
    ///
    /// ` action: QAction `
    ///
    pub fn HasShortcut(self: KGlobalAccel, action: anytype) bool {
        comptime _ = @TypeOf(action)._is_QAction;
        return qtc.KGlobalAccel_HasShortcut(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

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
    pub fn GlobalShortcutChanged(self: KGlobalAccel, action: anytype, seq: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        comptime _ = @TypeOf(seq)._is_QKeySequence;
        qtc.KGlobalAccel_GlobalShortcutChanged(@ptrCast(self.ptr), @ptrCast(action.ptr), @ptrCast(seq.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kglobalaccel.html#globalShortcutChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KGlobalAccel `
    ///
    /// ` callback: *const fn (self: KGlobalAccel, action: QAction, seq: QKeySequence) callconv(.c) void `
    ///
    pub fn OnGlobalShortcutChanged(self: KGlobalAccel, callback: *const fn (KGlobalAccel, QAction, QKeySequence) callconv(.c) void) void {
        qtc.KGlobalAccel_Connect_GlobalShortcutChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn GlobalShortcutActiveChanged(self: KGlobalAccel, action: anytype, active: bool) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.KGlobalAccel_GlobalShortcutActiveChanged(@ptrCast(self.ptr), @ptrCast(action.ptr), active);
    }

    /// ### [Upstream resources](https://api.kde.org/kglobalaccel.html#globalShortcutActiveChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KGlobalAccel `
    ///
    /// ` callback: *const fn (self: KGlobalAccel, action: QAction, active: bool) callconv(.c) void `
    ///
    pub fn OnGlobalShortcutActiveChanged(self: KGlobalAccel, callback: *const fn (KGlobalAccel, QAction, bool) callconv(.c) void) void {
        qtc.KGlobalAccel_Connect_GlobalShortcutActiveChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kglobalaccel.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kglobalaccel.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn GlobalShortcutsByKey2(allocator: std.mem.Allocator, seq: anytype, typeVal: i32) []KGlobalShortcutInfo {
        comptime _ = @TypeOf(seq)._is_QKeySequence;
        const _arr: qtc.libqt_list = qtc.KGlobalAccel_GlobalShortcutsByKey2(@ptrCast(seq.ptr), @bitCast(typeVal));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KGlobalShortcutInfo, _arr.len) catch @panic("kglobalaccel.GlobalShortcutsByKey2: Memory allocation failed");
        const _data: [*]QtC.KGlobalShortcutInfo = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kglobalaccel.html#isGlobalShortcutAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` seq: QKeySequence `
    ///
    /// ` component: []const u8 `
    ///
    pub fn IsGlobalShortcutAvailable2(seq: anytype, component: []const u8) bool {
        comptime _ = @TypeOf(seq)._is_QKeySequence;
        const component_str = qtc.libqt_string{
            .len = component.len,
            .data = component.ptr,
        };
        return qtc.KGlobalAccel_IsGlobalShortcutAvailable2(@ptrCast(seq.ptr), component_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kglobalaccel.html#setDefaultShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGlobalAccel `
    ///
    /// ` action: QAction `
    ///
    /// ` shortcut: []QKeySequence `
    ///
    /// ` loadFlag: kglobalaccel_enums.GlobalShortcutLoading `
    ///
    pub fn SetDefaultShortcut3(self: KGlobalAccel, action: anytype, shortcut: []QKeySequence, loadFlag: i32) bool {
        comptime _ = @TypeOf(action)._is_QAction;
        const shortcut_list = qtc.libqt_list{
            .len = shortcut.len,
            .data = @ptrCast(shortcut.ptr),
        };
        return qtc.KGlobalAccel_SetDefaultShortcut3(@ptrCast(self.ptr), @ptrCast(action.ptr), shortcut_list, @bitCast(loadFlag));
    }

    /// ### [Upstream resources](https://api.kde.org/kglobalaccel.html#setShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGlobalAccel `
    ///
    /// ` action: QAction `
    ///
    /// ` shortcut: []QKeySequence `
    ///
    /// ` loadFlag: kglobalaccel_enums.GlobalShortcutLoading `
    ///
    pub fn SetShortcut3(self: KGlobalAccel, action: anytype, shortcut: []QKeySequence, loadFlag: i32) bool {
        comptime _ = @TypeOf(action)._is_QAction;
        const shortcut_list = qtc.libqt_list{
            .len = shortcut.len,
            .data = @ptrCast(shortcut.ptr),
        };
        return qtc.KGlobalAccel_SetShortcut3(@ptrCast(self.ptr), @ptrCast(action.ptr), shortcut_list, @bitCast(loadFlag));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGlobalAccel `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KGlobalAccel, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KGlobalAccel, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

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
    pub fn ObjectName(self: KGlobalAccel, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kglobalaccel.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetObjectName(self: KGlobalAccel, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGlobalAccel `
    ///
    pub fn IsWidgetType(self: KGlobalAccel) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGlobalAccel `
    ///
    pub fn IsWindowType(self: KGlobalAccel) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGlobalAccel `
    ///
    pub fn IsQuickItemType(self: KGlobalAccel) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGlobalAccel `
    ///
    pub fn SignalsBlocked(self: KGlobalAccel) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

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
    pub fn BlockSignals(self: KGlobalAccel, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGlobalAccel `
    ///
    pub fn Thread(self: KGlobalAccel) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGlobalAccel `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KGlobalAccel, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

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
    pub fn StartTimer(self: KGlobalAccel, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

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
    pub fn StartTimer2(self: KGlobalAccel, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

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
    pub fn KillTimer(self: KGlobalAccel, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn KillTimer2(self: KGlobalAccel, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn Children(self: KGlobalAccel, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("kglobalaccel.Children: Memory allocation failed");
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
    /// ` self: KGlobalAccel `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KGlobalAccel, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

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
    pub fn InstallEventFilter(self: KGlobalAccel, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

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
    pub fn RemoveEventFilter(self: KGlobalAccel, obj: anytype) void {
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
    /// ` self: KGlobalAccel `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KGlobalAccel, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KGlobalAccel `
    ///
    pub fn Disconnect3(self: KGlobalAccel) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

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
    pub fn Disconnect4(self: KGlobalAccel, receiver: anytype) bool {
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
    /// ` self: KGlobalAccel `
    ///
    pub fn DumpObjectTree(self: KGlobalAccel) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGlobalAccel `
    ///
    pub fn DumpObjectInfo(self: KGlobalAccel) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

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
    pub fn SetProperty(self: KGlobalAccel, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KGlobalAccel `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KGlobalAccel, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

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
    pub fn DynamicPropertyNames(self: KGlobalAccel, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kglobalaccel.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kglobalaccel.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KGlobalAccel `
    ///
    pub fn BindingStorage(self: KGlobalAccel) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGlobalAccel `
    ///
    pub fn BindingStorage2(self: KGlobalAccel) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGlobalAccel `
    ///
    pub fn Destroyed(self: KGlobalAccel) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

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
    pub fn OnDestroyed(self: KGlobalAccel, callback: *const fn (KGlobalAccel) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGlobalAccel `
    ///
    pub fn Parent(self: KGlobalAccel) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

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
    pub fn Inherits(self: KGlobalAccel, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KGlobalAccel `
    ///
    pub fn DeleteLater(self: KGlobalAccel) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

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
    pub fn StartTimer22(self: KGlobalAccel, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

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
    pub fn StartTimer23(self: KGlobalAccel, time: i64, timerType: i32) i32 {
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
    /// ` self: KGlobalAccel `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KGlobalAccel, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KGlobalAccel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KGlobalAccel, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn Disconnect22(self: KGlobalAccel, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KGlobalAccel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KGlobalAccel, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KGlobalAccel `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KGlobalAccel, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KGlobalAccel `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KGlobalAccel, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnDestroyed1(self: KGlobalAccel, callback: *const fn (KGlobalAccel, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn OnObjectNameChanged(self: KGlobalAccel, callback: *const fn (KGlobalAccel, [*:0]const u8) callconv(.c) void) void {
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
