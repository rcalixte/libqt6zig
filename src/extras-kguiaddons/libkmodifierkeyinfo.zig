const QtC = @import("qt6zig");
const qtc = @import("qt6c");
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
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfo.html)
pub const KModifierKeyInfo = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfo.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KModifierKeyInfo,

    pub const _is_KModifierKeyInfo = {};
    pub const _is_QObject = {};

    /// New constructs a new KModifierKeyInfo object.
    ///
    pub fn New() KModifierKeyInfo {
        return .{ .ptr = qtc.KModifierKeyInfo_new() };
    }

    /// New2 constructs a new KModifierKeyInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) KModifierKeyInfo {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KModifierKeyInfo_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfo `
    ///
    pub fn MetaObject(self: KModifierKeyInfo) QMetaObject {
        return .{ .ptr = qtc.KModifierKeyInfo_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KModifierKeyInfo `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: KModifierKeyInfo, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KModifierKeyInfo_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KModifierKeyInfo `
    ///
    pub fn SuperMetaObject(self: KModifierKeyInfo) QMetaObject {
        return .{ .ptr = qtc.KModifierKeyInfo_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfo `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KModifierKeyInfo, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KModifierKeyInfo_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KModifierKeyInfo `
    ///
    /// ` callback: *const fn (self: KModifierKeyInfo, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KModifierKeyInfo, callback: *const fn (KModifierKeyInfo, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KModifierKeyInfo_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfo `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KModifierKeyInfo, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KModifierKeyInfo_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfo `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KModifierKeyInfo, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KModifierKeyInfo_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KModifierKeyInfo `
    ///
    /// ` callback: *const fn (self: KModifierKeyInfo, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KModifierKeyInfo, callback: *const fn (KModifierKeyInfo, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KModifierKeyInfo_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfo `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: KModifierKeyInfo, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KModifierKeyInfo_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kmodifierkeyinfo.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfo.html#knowsKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfo `
    ///
    /// ` key: qnamespace_enums.Key `
    ///
    pub fn KnowsKey(self: KModifierKeyInfo, key: i32) bool {
        return qtc.KModifierKeyInfo_KnowsKey(@ptrCast(self.ptr), @bitCast(key));
    }

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfo.html#knownKeys)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` []qnamespace_enums.Key `
    ///
    pub fn KnownKeys(self: KModifierKeyInfo, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.KModifierKeyInfo_KnownKeys(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("kmodifierkeyinfo.KnownKeys: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfo.html#isKeyPressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfo `
    ///
    /// ` key: qnamespace_enums.Key `
    ///
    pub fn IsKeyPressed(self: KModifierKeyInfo, key: i32) bool {
        return qtc.KModifierKeyInfo_IsKeyPressed(@ptrCast(self.ptr), @bitCast(key));
    }

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfo.html#isKeyLatched)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfo `
    ///
    /// ` key: qnamespace_enums.Key `
    ///
    pub fn IsKeyLatched(self: KModifierKeyInfo, key: i32) bool {
        return qtc.KModifierKeyInfo_IsKeyLatched(@ptrCast(self.ptr), @bitCast(key));
    }

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfo.html#setKeyLatched)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfo `
    ///
    /// ` key: qnamespace_enums.Key `
    ///
    /// ` latched: bool `
    ///
    pub fn SetKeyLatched(self: KModifierKeyInfo, key: i32, latched: bool) bool {
        return qtc.KModifierKeyInfo_SetKeyLatched(@ptrCast(self.ptr), @bitCast(key), latched);
    }

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfo.html#isKeyLocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfo `
    ///
    /// ` key: qnamespace_enums.Key `
    ///
    pub fn IsKeyLocked(self: KModifierKeyInfo, key: i32) bool {
        return qtc.KModifierKeyInfo_IsKeyLocked(@ptrCast(self.ptr), @bitCast(key));
    }

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfo.html#setKeyLocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfo `
    ///
    /// ` key: qnamespace_enums.Key `
    ///
    /// ` locked: bool `
    ///
    pub fn SetKeyLocked(self: KModifierKeyInfo, key: i32, locked: bool) bool {
        return qtc.KModifierKeyInfo_SetKeyLocked(@ptrCast(self.ptr), @bitCast(key), locked);
    }

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfo.html#isButtonPressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfo `
    ///
    /// ` button: qnamespace_enums.MouseButton `
    ///
    pub fn IsButtonPressed(self: KModifierKeyInfo, button: i32) bool {
        return qtc.KModifierKeyInfo_IsButtonPressed(@ptrCast(self.ptr), @bitCast(button));
    }

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfo.html#keyPressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfo `
    ///
    /// ` key: qnamespace_enums.Key `
    ///
    /// ` pressed: bool `
    ///
    pub fn KeyPressed(self: KModifierKeyInfo, key: i32, pressed: bool) void {
        qtc.KModifierKeyInfo_KeyPressed(@ptrCast(self.ptr), @bitCast(key), pressed);
    }

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfo.html#keyPressed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KModifierKeyInfo `
    ///
    /// ` callback: *const fn (self: KModifierKeyInfo, key: qnamespace_enums.Key, pressed: bool) callconv(.c) void `
    ///
    pub fn OnKeyPressed(self: KModifierKeyInfo, callback: *const fn (KModifierKeyInfo, i32, bool) callconv(.c) void) void {
        qtc.KModifierKeyInfo_Connect_KeyPressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfo.html#keyLatched)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfo `
    ///
    /// ` key: qnamespace_enums.Key `
    ///
    /// ` latched: bool `
    ///
    pub fn KeyLatched(self: KModifierKeyInfo, key: i32, latched: bool) void {
        qtc.KModifierKeyInfo_KeyLatched(@ptrCast(self.ptr), @bitCast(key), latched);
    }

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfo.html#keyLatched)
    ///
    /// ## Parameters:
    ///
    /// ` self: KModifierKeyInfo `
    ///
    /// ` callback: *const fn (self: KModifierKeyInfo, key: qnamespace_enums.Key, latched: bool) callconv(.c) void `
    ///
    pub fn OnKeyLatched(self: KModifierKeyInfo, callback: *const fn (KModifierKeyInfo, i32, bool) callconv(.c) void) void {
        qtc.KModifierKeyInfo_Connect_KeyLatched(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfo.html#keyLocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfo `
    ///
    /// ` key: qnamespace_enums.Key `
    ///
    /// ` locked: bool `
    ///
    pub fn KeyLocked(self: KModifierKeyInfo, key: i32, locked: bool) void {
        qtc.KModifierKeyInfo_KeyLocked(@ptrCast(self.ptr), @bitCast(key), locked);
    }

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfo.html#keyLocked)
    ///
    /// ## Parameters:
    ///
    /// ` self: KModifierKeyInfo `
    ///
    /// ` callback: *const fn (self: KModifierKeyInfo, key: qnamespace_enums.Key, locked: bool) callconv(.c) void `
    ///
    pub fn OnKeyLocked(self: KModifierKeyInfo, callback: *const fn (KModifierKeyInfo, i32, bool) callconv(.c) void) void {
        qtc.KModifierKeyInfo_Connect_KeyLocked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfo.html#buttonPressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfo `
    ///
    /// ` button: qnamespace_enums.MouseButton `
    ///
    /// ` pressed: bool `
    ///
    pub fn ButtonPressed(self: KModifierKeyInfo, button: i32, pressed: bool) void {
        qtc.KModifierKeyInfo_ButtonPressed(@ptrCast(self.ptr), @bitCast(button), pressed);
    }

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfo.html#buttonPressed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KModifierKeyInfo `
    ///
    /// ` callback: *const fn (self: KModifierKeyInfo, button: qnamespace_enums.MouseButton, pressed: bool) callconv(.c) void `
    ///
    pub fn OnButtonPressed(self: KModifierKeyInfo, callback: *const fn (KModifierKeyInfo, i32, bool) callconv(.c) void) void {
        qtc.KModifierKeyInfo_Connect_ButtonPressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfo.html#keyAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfo `
    ///
    /// ` key: qnamespace_enums.Key `
    ///
    pub fn KeyAdded(self: KModifierKeyInfo, key: i32) void {
        qtc.KModifierKeyInfo_KeyAdded(@ptrCast(self.ptr), @bitCast(key));
    }

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfo.html#keyAdded)
    ///
    /// ## Parameters:
    ///
    /// ` self: KModifierKeyInfo `
    ///
    /// ` callback: *const fn (self: KModifierKeyInfo, key: qnamespace_enums.Key) callconv(.c) void `
    ///
    pub fn OnKeyAdded(self: KModifierKeyInfo, callback: *const fn (KModifierKeyInfo, i32) callconv(.c) void) void {
        qtc.KModifierKeyInfo_Connect_KeyAdded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfo.html#keyRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfo `
    ///
    /// ` key: qnamespace_enums.Key `
    ///
    pub fn KeyRemoved(self: KModifierKeyInfo, key: i32) void {
        qtc.KModifierKeyInfo_KeyRemoved(@ptrCast(self.ptr), @bitCast(key));
    }

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfo.html#keyRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: KModifierKeyInfo `
    ///
    /// ` callback: *const fn (self: KModifierKeyInfo, key: qnamespace_enums.Key) callconv(.c) void `
    ///
    pub fn OnKeyRemoved(self: KModifierKeyInfo, callback: *const fn (KModifierKeyInfo, i32) callconv(.c) void) void {
        qtc.KModifierKeyInfo_Connect_KeyRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kmodifierkeyinfo.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kmodifierkeyinfo.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KModifierKeyInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kmodifierkeyinfo.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfo `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KModifierKeyInfo, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfo `
    ///
    pub fn IsWidgetType(self: KModifierKeyInfo) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfo `
    ///
    pub fn IsWindowType(self: KModifierKeyInfo) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfo `
    ///
    pub fn IsQuickItemType(self: KModifierKeyInfo) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfo `
    ///
    pub fn SignalsBlocked(self: KModifierKeyInfo) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfo `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KModifierKeyInfo, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfo `
    ///
    pub fn Thread(self: KModifierKeyInfo) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfo `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KModifierKeyInfo, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfo `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KModifierKeyInfo, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfo `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KModifierKeyInfo, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfo `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KModifierKeyInfo, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfo `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KModifierKeyInfo, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KModifierKeyInfo, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("kmodifierkeyinfo.Children: Memory allocation failed");
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
    /// ` self: KModifierKeyInfo `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KModifierKeyInfo, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfo `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KModifierKeyInfo, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfo `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KModifierKeyInfo, obj: anytype) void {
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
    /// ` self: KModifierKeyInfo `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KModifierKeyInfo, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KModifierKeyInfo `
    ///
    pub fn Disconnect3(self: KModifierKeyInfo) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfo `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KModifierKeyInfo, receiver: anytype) bool {
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
    /// ` self: KModifierKeyInfo `
    ///
    pub fn DumpObjectTree(self: KModifierKeyInfo) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfo `
    ///
    pub fn DumpObjectInfo(self: KModifierKeyInfo) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfo `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KModifierKeyInfo, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KModifierKeyInfo `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KModifierKeyInfo, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KModifierKeyInfo, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kmodifierkeyinfo.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kmodifierkeyinfo.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KModifierKeyInfo `
    ///
    pub fn BindingStorage(self: KModifierKeyInfo) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfo `
    ///
    pub fn BindingStorage2(self: KModifierKeyInfo) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfo `
    ///
    pub fn Destroyed(self: KModifierKeyInfo) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KModifierKeyInfo `
    ///
    /// ` callback: *const fn (self: KModifierKeyInfo) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KModifierKeyInfo, callback: *const fn (KModifierKeyInfo) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfo `
    ///
    pub fn Parent(self: KModifierKeyInfo) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfo `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KModifierKeyInfo, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfo `
    ///
    pub fn DeleteLater(self: KModifierKeyInfo) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfo `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KModifierKeyInfo, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfo `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KModifierKeyInfo, time: i64, timerType: i32) i32 {
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
    /// ` self: KModifierKeyInfo `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KModifierKeyInfo, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KModifierKeyInfo `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KModifierKeyInfo, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfo `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KModifierKeyInfo, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KModifierKeyInfo `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KModifierKeyInfo, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KModifierKeyInfo `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KModifierKeyInfo, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KModifierKeyInfo `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KModifierKeyInfo, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KModifierKeyInfo `
    ///
    /// ` callback: *const fn (self: KModifierKeyInfo, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KModifierKeyInfo, callback: *const fn (KModifierKeyInfo, QObject) callconv(.c) void) void {
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
    /// ` self: KModifierKeyInfo `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KModifierKeyInfo, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KModifierKeyInfo_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KModifierKeyInfo `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KModifierKeyInfo, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KModifierKeyInfo_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KModifierKeyInfo`
    ///
    /// ` callback: *const fn (self: KModifierKeyInfo, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: KModifierKeyInfo, callback: *const fn (KModifierKeyInfo, QEvent) callconv(.c) bool) void {
        qtc.KModifierKeyInfo_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfo `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KModifierKeyInfo, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KModifierKeyInfo_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: KModifierKeyInfo `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KModifierKeyInfo, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KModifierKeyInfo_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KModifierKeyInfo`
    ///
    /// ` callback: *const fn (self: KModifierKeyInfo, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: KModifierKeyInfo, callback: *const fn (KModifierKeyInfo, QObject, QEvent) callconv(.c) bool) void {
        qtc.KModifierKeyInfo_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfo `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KModifierKeyInfo, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KModifierKeyInfo_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KModifierKeyInfo `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KModifierKeyInfo, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KModifierKeyInfo_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KModifierKeyInfo`
    ///
    /// ` callback: *const fn (self: KModifierKeyInfo, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: KModifierKeyInfo, callback: *const fn (KModifierKeyInfo, QTimerEvent) callconv(.c) void) void {
        qtc.KModifierKeyInfo_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfo `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KModifierKeyInfo, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KModifierKeyInfo_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KModifierKeyInfo `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KModifierKeyInfo, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KModifierKeyInfo_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KModifierKeyInfo`
    ///
    /// ` callback: *const fn (self: KModifierKeyInfo, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: KModifierKeyInfo, callback: *const fn (KModifierKeyInfo, QChildEvent) callconv(.c) void) void {
        qtc.KModifierKeyInfo_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfo `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KModifierKeyInfo, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KModifierKeyInfo_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KModifierKeyInfo `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KModifierKeyInfo, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KModifierKeyInfo_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KModifierKeyInfo`
    ///
    /// ` callback: *const fn (self: KModifierKeyInfo, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: KModifierKeyInfo, callback: *const fn (KModifierKeyInfo, QEvent) callconv(.c) void) void {
        qtc.KModifierKeyInfo_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfo `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: KModifierKeyInfo, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KModifierKeyInfo_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KModifierKeyInfo `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KModifierKeyInfo, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KModifierKeyInfo_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KModifierKeyInfo`
    ///
    /// ` callback: *const fn (self: KModifierKeyInfo, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: KModifierKeyInfo, callback: *const fn (KModifierKeyInfo, QMetaMethod) callconv(.c) void) void {
        qtc.KModifierKeyInfo_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfo `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: KModifierKeyInfo, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KModifierKeyInfo_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KModifierKeyInfo `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KModifierKeyInfo, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KModifierKeyInfo_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KModifierKeyInfo`
    ///
    /// ` callback: *const fn (self: KModifierKeyInfo, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: KModifierKeyInfo, callback: *const fn (KModifierKeyInfo, QMetaMethod) callconv(.c) void) void {
        qtc.KModifierKeyInfo_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfo `
    ///
    pub fn Sender(self: KModifierKeyInfo) QObject {
        return .{ .ptr = qtc.KModifierKeyInfo_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KModifierKeyInfo `
    ///
    pub fn SuperSender(self: KModifierKeyInfo) QObject {
        return .{ .ptr = qtc.KModifierKeyInfo_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KModifierKeyInfo`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: KModifierKeyInfo, callback: *const fn () callconv(.c) QObject) void {
        qtc.KModifierKeyInfo_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfo `
    ///
    pub fn SenderSignalIndex(self: KModifierKeyInfo) i32 {
        return qtc.KModifierKeyInfo_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KModifierKeyInfo `
    ///
    pub fn SuperSenderSignalIndex(self: KModifierKeyInfo) i32 {
        return qtc.KModifierKeyInfo_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KModifierKeyInfo`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: KModifierKeyInfo, callback: *const fn () callconv(.c) i32) void {
        qtc.KModifierKeyInfo_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfo `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: KModifierKeyInfo, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KModifierKeyInfo_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KModifierKeyInfo `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KModifierKeyInfo, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KModifierKeyInfo_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KModifierKeyInfo`
    ///
    /// ` callback: *const fn (self: KModifierKeyInfo, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: KModifierKeyInfo, callback: *const fn (KModifierKeyInfo, [*:0]const u8) callconv(.c) i32) void {
        qtc.KModifierKeyInfo_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfo `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: KModifierKeyInfo, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KModifierKeyInfo_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KModifierKeyInfo `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KModifierKeyInfo, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KModifierKeyInfo_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KModifierKeyInfo`
    ///
    /// ` callback: *const fn (self: KModifierKeyInfo, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: KModifierKeyInfo, callback: *const fn (KModifierKeyInfo, QMetaMethod) callconv(.c) bool) void {
        qtc.KModifierKeyInfo_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KModifierKeyInfo `
    ///
    /// ` callback: *const fn (self: KModifierKeyInfo, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KModifierKeyInfo, callback: *const fn (KModifierKeyInfo, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfo.html#dtor.KModifierKeyInfo)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KModifierKeyInfo `
    ///
    pub fn Delete(self: KModifierKeyInfo) void {
        qtc.KModifierKeyInfo_Delete(@ptrCast(self.ptr));
    }
};
