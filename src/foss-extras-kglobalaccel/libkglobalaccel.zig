const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kglobalaccel_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://api.kde.org/kglobalaccel.html
pub const kglobalaccel = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.KGlobalAccel ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KGlobalAccel_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.KGlobalAccel, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KGlobalAccel_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.KGlobalAccel, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KGlobalAccel_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.KGlobalAccel_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kglobalaccel.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kglobalaccel.html#self)
    ///
    ///
    pub fn Self() QtC.KGlobalAccel {
        return qtc.KGlobalAccel_Self();
    }

    /// [Qt documentation](https://api.kde.org/kglobalaccel.html#stealShortcutSystemwide)
    ///
    /// ``` seq: QtC.QKeySequence ```
    pub fn StealShortcutSystemwide(seq: ?*anyopaque) void {
        qtc.KGlobalAccel_StealShortcutSystemwide(@ptrCast(seq));
    }

    /// [Qt documentation](https://api.kde.org/kglobalaccel.html#cleanComponent)
    ///
    /// ``` componentUnique: []const u8 ```
    pub fn CleanComponent(componentUnique: []const u8) bool {
        const componentUnique_str = qtc.libqt_string{
            .len = componentUnique.len,
            .data = componentUnique.ptr,
        };
        return qtc.KGlobalAccel_CleanComponent(componentUnique_str);
    }

    /// [Qt documentation](https://api.kde.org/kglobalaccel.html#isComponentActive)
    ///
    /// ``` componentName: []const u8 ```
    pub fn IsComponentActive(componentName: []const u8) bool {
        const componentName_str = qtc.libqt_string{
            .len = componentName.len,
            .data = componentName.ptr,
        };
        return qtc.KGlobalAccel_IsComponentActive(componentName_str);
    }

    /// [Qt documentation](https://api.kde.org/kglobalaccel.html#globalShortcutsByKey)
    ///
    /// ``` seq: QtC.QKeySequence, allocator: std.mem.Allocator ```
    pub fn GlobalShortcutsByKey(seq: ?*anyopaque, allocator: std.mem.Allocator) []QtC.KGlobalShortcutInfo {
        const _arr: qtc.libqt_list = qtc.KGlobalAccel_GlobalShortcutsByKey(@ptrCast(seq));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KGlobalShortcutInfo, _arr.len) catch @panic("kglobalaccel.GlobalShortcutsByKey: Memory allocation failed");
        const _data: [*]QtC.KGlobalShortcutInfo = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kglobalaccel.html#isGlobalShortcutAvailable)
    ///
    /// ``` seq: QtC.QKeySequence ```
    pub fn IsGlobalShortcutAvailable(seq: ?*anyopaque) bool {
        return qtc.KGlobalAccel_IsGlobalShortcutAvailable(@ptrCast(seq));
    }

    /// [Qt documentation](https://api.kde.org/kglobalaccel.html#promptStealShortcutSystemwide)
    ///
    /// ``` parent: QtC.QWidget, shortcuts: []QtC.KGlobalShortcutInfo, seq: QtC.QKeySequence ```
    pub fn PromptStealShortcutSystemwide(parent: ?*anyopaque, shortcuts: []QtC.KGlobalShortcutInfo, seq: ?*anyopaque) bool {
        const shortcuts_list = qtc.libqt_list{
            .len = shortcuts.len,
            .data = @ptrCast(shortcuts.ptr),
        };
        return qtc.KGlobalAccel_PromptStealShortcutSystemwide(@ptrCast(parent), shortcuts_list, @ptrCast(seq));
    }

    /// [Qt documentation](https://api.kde.org/kglobalaccel.html#setDefaultShortcut)
    ///
    /// ``` self: QtC.KGlobalAccel, action: QtC.QAction, shortcut: []QtC.QKeySequence ```
    pub fn SetDefaultShortcut(self: ?*anyopaque, action: ?*anyopaque, shortcut: []QtC.QKeySequence) bool {
        const shortcut_list = qtc.libqt_list{
            .len = shortcut.len,
            .data = @ptrCast(shortcut.ptr),
        };
        return qtc.KGlobalAccel_SetDefaultShortcut(@ptrCast(self), @ptrCast(action), shortcut_list);
    }

    /// [Qt documentation](https://api.kde.org/kglobalaccel.html#setShortcut)
    ///
    /// ``` self: QtC.KGlobalAccel, action: QtC.QAction, shortcut: []QtC.QKeySequence ```
    pub fn SetShortcut(self: ?*anyopaque, action: ?*anyopaque, shortcut: []QtC.QKeySequence) bool {
        const shortcut_list = qtc.libqt_list{
            .len = shortcut.len,
            .data = @ptrCast(shortcut.ptr),
        };
        return qtc.KGlobalAccel_SetShortcut(@ptrCast(self), @ptrCast(action), shortcut_list);
    }

    /// [Qt documentation](https://api.kde.org/kglobalaccel.html#setGlobalShortcut)
    ///
    /// ``` action: QtC.QAction, shortcut: []QtC.QKeySequence ```
    pub fn SetGlobalShortcut(action: ?*anyopaque, shortcut: []QtC.QKeySequence) bool {
        const shortcut_list = qtc.libqt_list{
            .len = shortcut.len,
            .data = @ptrCast(shortcut.ptr),
        };
        return qtc.KGlobalAccel_SetGlobalShortcut(@ptrCast(action), shortcut_list);
    }

    /// [Qt documentation](https://api.kde.org/kglobalaccel.html#setGlobalShortcut)
    ///
    /// ``` action: QtC.QAction, shortcut: QtC.QKeySequence ```
    pub fn SetGlobalShortcut2(action: ?*anyopaque, shortcut: ?*anyopaque) bool {
        return qtc.KGlobalAccel_SetGlobalShortcut2(@ptrCast(action), @ptrCast(shortcut));
    }

    /// [Qt documentation](https://api.kde.org/kglobalaccel.html#defaultShortcut)
    ///
    /// ``` self: QtC.KGlobalAccel, action: QtC.QAction, allocator: std.mem.Allocator ```
    pub fn DefaultShortcut(self: ?*anyopaque, action: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KGlobalAccel_DefaultShortcut(@ptrCast(self), @ptrCast(action));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kglobalaccel.DefaultShortcut: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kglobalaccel.html#shortcut)
    ///
    /// ``` self: QtC.KGlobalAccel, action: QtC.QAction, allocator: std.mem.Allocator ```
    pub fn Shortcut(self: ?*anyopaque, action: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.KGlobalAccel_Shortcut(@ptrCast(self), @ptrCast(action));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kglobalaccel.Shortcut: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kglobalaccel.html#globalShortcut)
    ///
    /// ``` self: QtC.KGlobalAccel, componentName: []const u8, actionId: []const u8, allocator: std.mem.Allocator ```
    pub fn GlobalShortcut(self: ?*anyopaque, componentName: []const u8, actionId: []const u8, allocator: std.mem.Allocator) []QtC.QKeySequence {
        const componentName_str = qtc.libqt_string{
            .len = componentName.len,
            .data = componentName.ptr,
        };
        const actionId_str = qtc.libqt_string{
            .len = actionId.len,
            .data = actionId.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KGlobalAccel_GlobalShortcut(@ptrCast(self), componentName_str, actionId_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kglobalaccel.GlobalShortcut: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kglobalaccel.html#removeAllShortcuts)
    ///
    /// ``` self: QtC.KGlobalAccel, action: QtC.QAction ```
    pub fn RemoveAllShortcuts(self: ?*anyopaque, action: ?*anyopaque) void {
        qtc.KGlobalAccel_RemoveAllShortcuts(@ptrCast(self), @ptrCast(action));
    }

    /// [Qt documentation](https://api.kde.org/kglobalaccel.html#hasShortcut)
    ///
    /// ``` self: QtC.KGlobalAccel, action: QtC.QAction ```
    pub fn HasShortcut(self: ?*anyopaque, action: ?*anyopaque) bool {
        return qtc.KGlobalAccel_HasShortcut(@ptrCast(self), @ptrCast(action));
    }

    /// [Qt documentation](https://api.kde.org/kglobalaccel.html#globalShortcutChanged)
    ///
    /// ``` self: QtC.KGlobalAccel, action: QtC.QAction, seq: QtC.QKeySequence ```
    pub fn GlobalShortcutChanged(self: ?*anyopaque, action: ?*anyopaque, seq: ?*anyopaque) void {
        qtc.KGlobalAccel_GlobalShortcutChanged(@ptrCast(self), @ptrCast(action), @ptrCast(seq));
    }

    /// [Qt documentation](https://api.kde.org/kglobalaccel.html#globalShortcutChanged)
    ///
    /// ``` self: QtC.KGlobalAccel, slot: fn (self: QtC.KGlobalAccel, action: QtC.QAction, seq: QtC.QKeySequence) callconv(.c) void ```
    pub fn OnGlobalShortcutChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KGlobalAccel_Connect_GlobalShortcutChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kglobalaccel.html#globalShortcutActiveChanged)
    ///
    /// ``` self: QtC.KGlobalAccel, action: QtC.QAction, active: bool ```
    pub fn GlobalShortcutActiveChanged(self: ?*anyopaque, action: ?*anyopaque, active: bool) void {
        qtc.KGlobalAccel_GlobalShortcutActiveChanged(@ptrCast(self), @ptrCast(action), active);
    }

    /// [Qt documentation](https://api.kde.org/kglobalaccel.html#globalShortcutActiveChanged)
    ///
    /// ``` self: QtC.KGlobalAccel, slot: fn (self: QtC.KGlobalAccel, action: QtC.QAction, active: bool) callconv(.c) void ```
    pub fn OnGlobalShortcutActiveChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, bool) callconv(.c) void) void {
        qtc.KGlobalAccel_Connect_GlobalShortcutActiveChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KGlobalAccel_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kglobalaccel.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KGlobalAccel_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kglobalaccel.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kglobalaccel.html#globalShortcutsByKey)
    ///
    /// ``` seq: QtC.QKeySequence, typeVal: kglobalaccel_enums.MatchType, allocator: std.mem.Allocator ```
    pub fn GlobalShortcutsByKey2(seq: ?*anyopaque, typeVal: i32, allocator: std.mem.Allocator) []QtC.KGlobalShortcutInfo {
        const _arr: qtc.libqt_list = qtc.KGlobalAccel_GlobalShortcutsByKey2(@ptrCast(seq), @intCast(typeVal));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KGlobalShortcutInfo, _arr.len) catch @panic("kglobalaccel.GlobalShortcutsByKey2: Memory allocation failed");
        const _data: [*]QtC.KGlobalShortcutInfo = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kglobalaccel.html#isGlobalShortcutAvailable)
    ///
    /// ``` seq: QtC.QKeySequence, component: []const u8 ```
    pub fn IsGlobalShortcutAvailable2(seq: ?*anyopaque, component: []const u8) bool {
        const component_str = qtc.libqt_string{
            .len = component.len,
            .data = component.ptr,
        };
        return qtc.KGlobalAccel_IsGlobalShortcutAvailable2(@ptrCast(seq), component_str);
    }

    /// [Qt documentation](https://api.kde.org/kglobalaccel.html#setDefaultShortcut)
    ///
    /// ``` self: QtC.KGlobalAccel, action: QtC.QAction, shortcut: []QtC.QKeySequence, loadFlag: kglobalaccel_enums.GlobalShortcutLoading ```
    pub fn SetDefaultShortcut3(self: ?*anyopaque, action: ?*anyopaque, shortcut: []QtC.QKeySequence, loadFlag: i32) bool {
        const shortcut_list = qtc.libqt_list{
            .len = shortcut.len,
            .data = @ptrCast(shortcut.ptr),
        };
        return qtc.KGlobalAccel_SetDefaultShortcut3(@ptrCast(self), @ptrCast(action), shortcut_list, @intCast(loadFlag));
    }

    /// [Qt documentation](https://api.kde.org/kglobalaccel.html#setShortcut)
    ///
    /// ``` self: QtC.KGlobalAccel, action: QtC.QAction, shortcut: []QtC.QKeySequence, loadFlag: kglobalaccel_enums.GlobalShortcutLoading ```
    pub fn SetShortcut3(self: ?*anyopaque, action: ?*anyopaque, shortcut: []QtC.QKeySequence, loadFlag: i32) bool {
        const shortcut_list = qtc.libqt_list{
            .len = shortcut.len,
            .data = @ptrCast(shortcut.ptr),
        };
        return qtc.KGlobalAccel_SetShortcut3(@ptrCast(self), @ptrCast(action), shortcut_list, @intCast(loadFlag));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ``` self: QtC.KGlobalAccel, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ``` self: QtC.KGlobalAccel, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.KGlobalAccel, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kglobalaccel.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.KGlobalAccel, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.KGlobalAccel ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.KGlobalAccel ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.KGlobalAccel ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.KGlobalAccel ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.KGlobalAccel, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.KGlobalAccel ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KGlobalAccel, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KGlobalAccel, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KGlobalAccel, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KGlobalAccel, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.KGlobalAccel, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("kglobalaccel.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.KGlobalAccel, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.KGlobalAccel, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.KGlobalAccel, obj: QtC.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.KGlobalAccel, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, member: QtC.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: QtC.QMetaObject__Connection ```
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.KGlobalAccel ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.KGlobalAccel ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.KGlobalAccel, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.KGlobalAccel, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.KGlobalAccel, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KGlobalAccel ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KGlobalAccel ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KGlobalAccel ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KGlobalAccel, slot: fn (self: QtC.KGlobalAccel) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.KGlobalAccel ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.KGlobalAccel, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.KGlobalAccel ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KGlobalAccel, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KGlobalAccel, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.KGlobalAccel, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KGlobalAccel, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KGlobalAccel, slot: fn (self: QtC.KGlobalAccel, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KGlobalAccel, slot: fn (self: QtC.KGlobalAccel, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }
};

/// https://api.kde.org/kglobalaccel.html#types
pub const enums = struct {
    pub const GlobalShortcutLoading = enum {
        pub const Autoloading: i32 = 0;
        pub const NoAutoloading: i32 = 4;
    };

    pub const actionIdFields = enum {
        pub const ComponentUnique: i32 = 0;
        pub const ActionUnique: i32 = 1;
        pub const ComponentFriendly: i32 = 2;
        pub const ActionFriendly: i32 = 3;
    };

    pub const MatchType = enum {
        pub const Equal: i32 = 0;
        pub const Shadows: i32 = 1;
        pub const Shadowed: i32 = 2;
    };
};
