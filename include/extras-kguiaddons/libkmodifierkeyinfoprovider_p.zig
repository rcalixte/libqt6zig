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
const kmodifierkeyinfoprovider_p_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfoprovider.html)
pub const KModifierKeyInfoProvider = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfoprovider.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KModifierKeyInfoProvider,

    pub const _is_KModifierKeyInfoProvider = {};
    pub const _is_QObject = {};
    pub const _is_QSharedData = {};

    /// New constructs a new KModifierKeyInfoProvider object.
    ///
    pub fn New() KModifierKeyInfoProvider {
        return .{ .ptr = qtc.KModifierKeyInfoProvider_new() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    pub fn MetaObject(self: KModifierKeyInfoProvider) QMetaObject {
        return .{ .ptr = qtc.KModifierKeyInfoProvider_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: KModifierKeyInfoProvider, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KModifierKeyInfoProvider_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    pub fn SuperMetaObject(self: KModifierKeyInfoProvider) QMetaObject {
        return .{ .ptr = qtc.KModifierKeyInfoProvider_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KModifierKeyInfoProvider, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KModifierKeyInfoProvider_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` callback: *const fn (self: KModifierKeyInfoProvider, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KModifierKeyInfoProvider, callback: *const fn (KModifierKeyInfoProvider, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KModifierKeyInfoProvider_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KModifierKeyInfoProvider, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KModifierKeyInfoProvider_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KModifierKeyInfoProvider, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KModifierKeyInfoProvider_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` callback: *const fn (self: KModifierKeyInfoProvider, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KModifierKeyInfoProvider, callback: *const fn (KModifierKeyInfoProvider, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KModifierKeyInfoProvider_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: KModifierKeyInfoProvider, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KModifierKeyInfoProvider_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kmodifierkeyinfoprovider.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfoprovider.html#isKeyPressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` key: qnamespace_enums.Key `
    ///
    pub fn IsKeyPressed(self: KModifierKeyInfoProvider, key: i32) bool {
        return qtc.KModifierKeyInfoProvider_IsKeyPressed(@ptrCast(self.ptr), @bitCast(key));
    }

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfoprovider.html#isKeyLatched)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` key: qnamespace_enums.Key `
    ///
    pub fn IsKeyLatched(self: KModifierKeyInfoProvider, key: i32) bool {
        return qtc.KModifierKeyInfoProvider_IsKeyLatched(@ptrCast(self.ptr), @bitCast(key));
    }

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfoprovider.html#setKeyLatched)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` key: qnamespace_enums.Key `
    ///
    /// ` latched: bool `
    ///
    pub fn SetKeyLatched(self: KModifierKeyInfoProvider, key: i32, latched: bool) bool {
        return qtc.KModifierKeyInfoProvider_SetKeyLatched(@ptrCast(self.ptr), @bitCast(key), latched);
    }

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfoprovider.html#setKeyLatched)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` callback: *const fn (self: KModifierKeyInfoProvider, key: qnamespace_enums.Key, latched: bool) callconv(.c) bool `
    ///
    pub fn OnSetKeyLatched(self: KModifierKeyInfoProvider, callback: *const fn (KModifierKeyInfoProvider, i32, bool) callconv(.c) bool) void {
        qtc.KModifierKeyInfoProvider_OnSetKeyLatched(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetKeyLatched` instead
    ///
    pub const QBaseSetKeyLatched = SuperSetKeyLatched;

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfoprovider.html#setKeyLatched)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` key: qnamespace_enums.Key `
    ///
    /// ` latched: bool `
    ///
    pub fn SuperSetKeyLatched(self: KModifierKeyInfoProvider, key: i32, latched: bool) bool {
        return qtc.KModifierKeyInfoProvider_SuperSetKeyLatched(@ptrCast(self.ptr), @bitCast(key), latched);
    }

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfoprovider.html#isKeyLocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` key: qnamespace_enums.Key `
    ///
    pub fn IsKeyLocked(self: KModifierKeyInfoProvider, key: i32) bool {
        return qtc.KModifierKeyInfoProvider_IsKeyLocked(@ptrCast(self.ptr), @bitCast(key));
    }

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfoprovider.html#setKeyLocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` key: qnamespace_enums.Key `
    ///
    /// ` locked: bool `
    ///
    pub fn SetKeyLocked(self: KModifierKeyInfoProvider, key: i32, locked: bool) bool {
        return qtc.KModifierKeyInfoProvider_SetKeyLocked(@ptrCast(self.ptr), @bitCast(key), locked);
    }

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfoprovider.html#setKeyLocked)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` callback: *const fn (self: KModifierKeyInfoProvider, key: qnamespace_enums.Key, locked: bool) callconv(.c) bool `
    ///
    pub fn OnSetKeyLocked(self: KModifierKeyInfoProvider, callback: *const fn (KModifierKeyInfoProvider, i32, bool) callconv(.c) bool) void {
        qtc.KModifierKeyInfoProvider_OnSetKeyLocked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetKeyLocked` instead
    ///
    pub const QBaseSetKeyLocked = SuperSetKeyLocked;

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfoprovider.html#setKeyLocked)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` key: qnamespace_enums.Key `
    ///
    /// ` locked: bool `
    ///
    pub fn SuperSetKeyLocked(self: KModifierKeyInfoProvider, key: i32, locked: bool) bool {
        return qtc.KModifierKeyInfoProvider_SuperSetKeyLocked(@ptrCast(self.ptr), @bitCast(key), locked);
    }

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfoprovider.html#isButtonPressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` button: qnamespace_enums.MouseButton `
    ///
    pub fn IsButtonPressed(self: KModifierKeyInfoProvider, button: i32) bool {
        return qtc.KModifierKeyInfoProvider_IsButtonPressed(@ptrCast(self.ptr), @bitCast(button));
    }

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfoprovider.html#knowsKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` key: qnamespace_enums.Key `
    ///
    pub fn KnowsKey(self: KModifierKeyInfoProvider, key: i32) bool {
        return qtc.KModifierKeyInfoProvider_KnowsKey(@ptrCast(self.ptr), @bitCast(key));
    }

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfoprovider.html#knownKeys)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` []qnamespace_enums.Key `
    ///
    pub fn KnownKeys(self: KModifierKeyInfoProvider, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.KModifierKeyInfoProvider_KnownKeys(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("kmodifierkeyinfoprovider.KnownKeys: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfoprovider.html#keyLatched)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` key: qnamespace_enums.Key `
    ///
    /// ` state: bool `
    ///
    pub fn KeyLatched(self: KModifierKeyInfoProvider, key: i32, state: bool) void {
        qtc.KModifierKeyInfoProvider_KeyLatched(@ptrCast(self.ptr), @bitCast(key), state);
    }

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfoprovider.html#keyLatched)
    ///
    /// ## Parameters:
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` callback: *const fn (self: KModifierKeyInfoProvider, key: qnamespace_enums.Key, state: bool) callconv(.c) void `
    ///
    pub fn OnKeyLatched(self: KModifierKeyInfoProvider, callback: *const fn (KModifierKeyInfoProvider, i32, bool) callconv(.c) void) void {
        qtc.KModifierKeyInfoProvider_Connect_KeyLatched(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfoprovider.html#keyLocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` key: qnamespace_enums.Key `
    ///
    /// ` state: bool `
    ///
    pub fn KeyLocked(self: KModifierKeyInfoProvider, key: i32, state: bool) void {
        qtc.KModifierKeyInfoProvider_KeyLocked(@ptrCast(self.ptr), @bitCast(key), state);
    }

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfoprovider.html#keyLocked)
    ///
    /// ## Parameters:
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` callback: *const fn (self: KModifierKeyInfoProvider, key: qnamespace_enums.Key, state: bool) callconv(.c) void `
    ///
    pub fn OnKeyLocked(self: KModifierKeyInfoProvider, callback: *const fn (KModifierKeyInfoProvider, i32, bool) callconv(.c) void) void {
        qtc.KModifierKeyInfoProvider_Connect_KeyLocked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfoprovider.html#keyPressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` key: qnamespace_enums.Key `
    ///
    /// ` state: bool `
    ///
    pub fn KeyPressed(self: KModifierKeyInfoProvider, key: i32, state: bool) void {
        qtc.KModifierKeyInfoProvider_KeyPressed(@ptrCast(self.ptr), @bitCast(key), state);
    }

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfoprovider.html#keyPressed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` callback: *const fn (self: KModifierKeyInfoProvider, key: qnamespace_enums.Key, state: bool) callconv(.c) void `
    ///
    pub fn OnKeyPressed(self: KModifierKeyInfoProvider, callback: *const fn (KModifierKeyInfoProvider, i32, bool) callconv(.c) void) void {
        qtc.KModifierKeyInfoProvider_Connect_KeyPressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfoprovider.html#buttonPressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` button: qnamespace_enums.MouseButton `
    ///
    /// ` state: bool `
    ///
    pub fn ButtonPressed(self: KModifierKeyInfoProvider, button: i32, state: bool) void {
        qtc.KModifierKeyInfoProvider_ButtonPressed(@ptrCast(self.ptr), @bitCast(button), state);
    }

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfoprovider.html#buttonPressed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` callback: *const fn (self: KModifierKeyInfoProvider, button: qnamespace_enums.MouseButton, state: bool) callconv(.c) void `
    ///
    pub fn OnButtonPressed(self: KModifierKeyInfoProvider, callback: *const fn (KModifierKeyInfoProvider, i32, bool) callconv(.c) void) void {
        qtc.KModifierKeyInfoProvider_Connect_ButtonPressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfoprovider.html#keyAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` key: qnamespace_enums.Key `
    ///
    pub fn KeyAdded(self: KModifierKeyInfoProvider, key: i32) void {
        qtc.KModifierKeyInfoProvider_KeyAdded(@ptrCast(self.ptr), @bitCast(key));
    }

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfoprovider.html#keyAdded)
    ///
    /// ## Parameters:
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` callback: *const fn (self: KModifierKeyInfoProvider, key: qnamespace_enums.Key) callconv(.c) void `
    ///
    pub fn OnKeyAdded(self: KModifierKeyInfoProvider, callback: *const fn (KModifierKeyInfoProvider, i32) callconv(.c) void) void {
        qtc.KModifierKeyInfoProvider_Connect_KeyAdded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfoprovider.html#keyRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` key: qnamespace_enums.Key `
    ///
    pub fn KeyRemoved(self: KModifierKeyInfoProvider, key: i32) void {
        qtc.KModifierKeyInfoProvider_KeyRemoved(@ptrCast(self.ptr), @bitCast(key));
    }

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfoprovider.html#keyRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` callback: *const fn (self: KModifierKeyInfoProvider, key: qnamespace_enums.Key) callconv(.c) void `
    ///
    pub fn OnKeyRemoved(self: KModifierKeyInfoProvider, callback: *const fn (KModifierKeyInfoProvider, i32) callconv(.c) void) void {
        qtc.KModifierKeyInfoProvider_Connect_KeyRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfoprovider.html#stateUpdated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` key: qnamespace_enums.Key `
    ///
    /// ` state: flag of kmodifierkeyinfoprovider_p_enums.ModifierState `
    ///
    pub fn StateUpdated(self: KModifierKeyInfoProvider, key: i32, state: i32) void {
        qtc.KModifierKeyInfoProvider_StateUpdated(@ptrCast(self.ptr), @bitCast(key), @bitCast(state));
    }

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfoprovider.html#stateUpdated)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` callback: *const fn (self: KModifierKeyInfoProvider, key: qnamespace_enums.Key, state: flag of kmodifierkeyinfoprovider_p_enums.ModifierState) callconv(.c) void `
    ///
    pub fn OnStateUpdated(self: KModifierKeyInfoProvider, callback: *const fn (KModifierKeyInfoProvider, i32, i32) callconv(.c) void) void {
        qtc.KModifierKeyInfoProvider_OnStateUpdated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperStateUpdated` instead
    ///
    pub const QBaseStateUpdated = SuperStateUpdated;

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfoprovider.html#stateUpdated)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` key: qnamespace_enums.Key `
    ///
    /// ` state: flag of kmodifierkeyinfoprovider_p_enums.ModifierState `
    ///
    pub fn SuperStateUpdated(self: KModifierKeyInfoProvider, key: i32, state: i32) void {
        qtc.KModifierKeyInfoProvider_SuperStateUpdated(@ptrCast(self.ptr), @bitCast(key), @bitCast(state));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kmodifierkeyinfoprovider.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kmodifierkeyinfoprovider.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KModifierKeyInfoProvider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kmodifierkeyinfoprovider.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KModifierKeyInfoProvider, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    pub fn IsWidgetType(self: KModifierKeyInfoProvider) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    pub fn IsWindowType(self: KModifierKeyInfoProvider) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    pub fn IsQuickItemType(self: KModifierKeyInfoProvider) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    pub fn SignalsBlocked(self: KModifierKeyInfoProvider) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KModifierKeyInfoProvider, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    pub fn Thread(self: KModifierKeyInfoProvider) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KModifierKeyInfoProvider, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KModifierKeyInfoProvider, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KModifierKeyInfoProvider, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KModifierKeyInfoProvider, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KModifierKeyInfoProvider, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KModifierKeyInfoProvider, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("kmodifierkeyinfoprovider.Children: Memory allocation failed");
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KModifierKeyInfoProvider, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KModifierKeyInfoProvider, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KModifierKeyInfoProvider, obj: anytype) void {
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KModifierKeyInfoProvider, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    pub fn Disconnect3(self: KModifierKeyInfoProvider) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KModifierKeyInfoProvider, receiver: anytype) bool {
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    pub fn DumpObjectTree(self: KModifierKeyInfoProvider) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    pub fn DumpObjectInfo(self: KModifierKeyInfoProvider) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KModifierKeyInfoProvider, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KModifierKeyInfoProvider, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KModifierKeyInfoProvider, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kmodifierkeyinfoprovider.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kmodifierkeyinfoprovider.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    pub fn BindingStorage(self: KModifierKeyInfoProvider) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    pub fn BindingStorage2(self: KModifierKeyInfoProvider) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    pub fn Destroyed(self: KModifierKeyInfoProvider) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` callback: *const fn (self: KModifierKeyInfoProvider) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KModifierKeyInfoProvider, callback: *const fn (KModifierKeyInfoProvider) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    pub fn Parent(self: KModifierKeyInfoProvider) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KModifierKeyInfoProvider, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    pub fn DeleteLater(self: KModifierKeyInfoProvider) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KModifierKeyInfoProvider, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KModifierKeyInfoProvider, time: i64, timerType: i32) i32 {
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KModifierKeyInfoProvider, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KModifierKeyInfoProvider, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KModifierKeyInfoProvider, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KModifierKeyInfoProvider, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KModifierKeyInfoProvider, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KModifierKeyInfoProvider, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` callback: *const fn (self: KModifierKeyInfoProvider, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KModifierKeyInfoProvider, callback: *const fn (KModifierKeyInfoProvider, QObject) callconv(.c) void) void {
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KModifierKeyInfoProvider, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KModifierKeyInfoProvider_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KModifierKeyInfoProvider, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KModifierKeyInfoProvider_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KModifierKeyInfoProvider`
    ///
    /// ` callback: *const fn (self: KModifierKeyInfoProvider, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: KModifierKeyInfoProvider, callback: *const fn (KModifierKeyInfoProvider, QEvent) callconv(.c) bool) void {
        qtc.KModifierKeyInfoProvider_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KModifierKeyInfoProvider, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KModifierKeyInfoProvider_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KModifierKeyInfoProvider, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KModifierKeyInfoProvider_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KModifierKeyInfoProvider`
    ///
    /// ` callback: *const fn (self: KModifierKeyInfoProvider, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: KModifierKeyInfoProvider, callback: *const fn (KModifierKeyInfoProvider, QObject, QEvent) callconv(.c) bool) void {
        qtc.KModifierKeyInfoProvider_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KModifierKeyInfoProvider, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KModifierKeyInfoProvider_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KModifierKeyInfoProvider, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KModifierKeyInfoProvider_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KModifierKeyInfoProvider`
    ///
    /// ` callback: *const fn (self: KModifierKeyInfoProvider, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: KModifierKeyInfoProvider, callback: *const fn (KModifierKeyInfoProvider, QTimerEvent) callconv(.c) void) void {
        qtc.KModifierKeyInfoProvider_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KModifierKeyInfoProvider, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KModifierKeyInfoProvider_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KModifierKeyInfoProvider, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KModifierKeyInfoProvider_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KModifierKeyInfoProvider`
    ///
    /// ` callback: *const fn (self: KModifierKeyInfoProvider, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: KModifierKeyInfoProvider, callback: *const fn (KModifierKeyInfoProvider, QChildEvent) callconv(.c) void) void {
        qtc.KModifierKeyInfoProvider_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KModifierKeyInfoProvider, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KModifierKeyInfoProvider_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KModifierKeyInfoProvider, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KModifierKeyInfoProvider_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KModifierKeyInfoProvider`
    ///
    /// ` callback: *const fn (self: KModifierKeyInfoProvider, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: KModifierKeyInfoProvider, callback: *const fn (KModifierKeyInfoProvider, QEvent) callconv(.c) void) void {
        qtc.KModifierKeyInfoProvider_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: KModifierKeyInfoProvider, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KModifierKeyInfoProvider_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KModifierKeyInfoProvider, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KModifierKeyInfoProvider_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KModifierKeyInfoProvider`
    ///
    /// ` callback: *const fn (self: KModifierKeyInfoProvider, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: KModifierKeyInfoProvider, callback: *const fn (KModifierKeyInfoProvider, QMetaMethod) callconv(.c) void) void {
        qtc.KModifierKeyInfoProvider_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: KModifierKeyInfoProvider, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KModifierKeyInfoProvider_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KModifierKeyInfoProvider, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KModifierKeyInfoProvider_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KModifierKeyInfoProvider`
    ///
    /// ` callback: *const fn (self: KModifierKeyInfoProvider, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: KModifierKeyInfoProvider, callback: *const fn (KModifierKeyInfoProvider, QMetaMethod) callconv(.c) void) void {
        qtc.KModifierKeyInfoProvider_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    pub fn Sender(self: KModifierKeyInfoProvider) QObject {
        return .{ .ptr = qtc.KModifierKeyInfoProvider_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    pub fn SuperSender(self: KModifierKeyInfoProvider) QObject {
        return .{ .ptr = qtc.KModifierKeyInfoProvider_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KModifierKeyInfoProvider`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: KModifierKeyInfoProvider, callback: *const fn () callconv(.c) QObject) void {
        qtc.KModifierKeyInfoProvider_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    pub fn SenderSignalIndex(self: KModifierKeyInfoProvider) i32 {
        return qtc.KModifierKeyInfoProvider_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    pub fn SuperSenderSignalIndex(self: KModifierKeyInfoProvider) i32 {
        return qtc.KModifierKeyInfoProvider_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KModifierKeyInfoProvider`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: KModifierKeyInfoProvider, callback: *const fn () callconv(.c) i32) void {
        qtc.KModifierKeyInfoProvider_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: KModifierKeyInfoProvider, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KModifierKeyInfoProvider_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KModifierKeyInfoProvider, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KModifierKeyInfoProvider_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KModifierKeyInfoProvider`
    ///
    /// ` callback: *const fn (self: KModifierKeyInfoProvider, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: KModifierKeyInfoProvider, callback: *const fn (KModifierKeyInfoProvider, [*:0]const u8) callconv(.c) i32) void {
        qtc.KModifierKeyInfoProvider_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: KModifierKeyInfoProvider, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KModifierKeyInfoProvider_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KModifierKeyInfoProvider, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KModifierKeyInfoProvider_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KModifierKeyInfoProvider`
    ///
    /// ` callback: *const fn (self: KModifierKeyInfoProvider, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: KModifierKeyInfoProvider, callback: *const fn (KModifierKeyInfoProvider, QMetaMethod) callconv(.c) bool) void {
        qtc.KModifierKeyInfoProvider_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` callback: *const fn (self: KModifierKeyInfoProvider, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KModifierKeyInfoProvider, callback: *const fn (KModifierKeyInfoProvider, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfoprovider.html#dtor.KModifierKeyInfoProvider)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    pub fn Delete(self: KModifierKeyInfoProvider) void {
        qtc.KModifierKeyInfoProvider_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfoprovider-p.html#public-types)
pub const enums = struct {
    pub const ModifierState = enum(i32) {
        pub const Nothing: i32 = 0;
        pub const Pressed: i32 = 1;
        pub const Latched: i32 = 2;
        pub const Locked: i32 = 4;
    };
};
