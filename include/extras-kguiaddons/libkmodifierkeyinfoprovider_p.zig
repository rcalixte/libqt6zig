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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KModifierKeyInfoProvider object in C++ memory
    ///
    pub fn new() KModifierKeyInfoProvider {
        return .{ .ptr = qtc.KModifierKeyInfoProvider_new() };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    pub fn metaObject(self: KModifierKeyInfoProvider) QMetaObject {
        return .{ .ptr = qtc.KModifierKeyInfoProvider_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: KModifierKeyInfoProvider, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KModifierKeyInfoProvider_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    pub fn superMetaObject(self: KModifierKeyInfoProvider) QMetaObject {
        return .{ .ptr = qtc.KModifierKeyInfoProvider_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KModifierKeyInfoProvider, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KModifierKeyInfoProvider_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` callback: *const fn (self: KModifierKeyInfoProvider, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: KModifierKeyInfoProvider, callback: *const fn (KModifierKeyInfoProvider, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KModifierKeyInfoProvider_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: KModifierKeyInfoProvider, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KModifierKeyInfoProvider_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: KModifierKeyInfoProvider, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KModifierKeyInfoProvider_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` callback: *const fn (self: KModifierKeyInfoProvider, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: KModifierKeyInfoProvider, callback: *const fn (KModifierKeyInfoProvider, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KModifierKeyInfoProvider_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: KModifierKeyInfoProvider, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KModifierKeyInfoProvider_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KModifierKeyInfoProvider.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isKeyPressed` instead
    ///
    pub const IsKeyPressed = isKeyPressed;

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfoprovider.html#isKeyPressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` key: qnamespace_enums.Key `
    ///
    pub fn isKeyPressed(self: KModifierKeyInfoProvider, key: i32) bool {
        return qtc.KModifierKeyInfoProvider_IsKeyPressed(@ptrCast(self.ptr), @bitCast(key));
    }

    /// ### DEPRECATED: Use `isKeyLatched` instead
    ///
    pub const IsKeyLatched = isKeyLatched;

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfoprovider.html#isKeyLatched)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` key: qnamespace_enums.Key `
    ///
    pub fn isKeyLatched(self: KModifierKeyInfoProvider, key: i32) bool {
        return qtc.KModifierKeyInfoProvider_IsKeyLatched(@ptrCast(self.ptr), @bitCast(key));
    }

    /// ### DEPRECATED: Use `setKeyLatched` instead
    ///
    pub const SetKeyLatched = setKeyLatched;

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
    pub fn setKeyLatched(self: KModifierKeyInfoProvider, key: i32, latched: bool) bool {
        return qtc.KModifierKeyInfoProvider_SetKeyLatched(@ptrCast(self.ptr), @bitCast(key), latched);
    }

    /// ### DEPRECATED: Use `onSetKeyLatched` instead
    ///
    pub const OnSetKeyLatched = onSetKeyLatched;

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
    pub fn onSetKeyLatched(self: KModifierKeyInfoProvider, callback: *const fn (KModifierKeyInfoProvider, i32, bool) callconv(.c) bool) void {
        qtc.KModifierKeyInfoProvider_OnSetKeyLatched(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetKeyLatched` instead
    ///
    pub const SuperSetKeyLatched = superSetKeyLatched;

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
    pub fn superSetKeyLatched(self: KModifierKeyInfoProvider, key: i32, latched: bool) bool {
        return qtc.KModifierKeyInfoProvider_SuperSetKeyLatched(@ptrCast(self.ptr), @bitCast(key), latched);
    }

    /// ### DEPRECATED: Use `isKeyLocked` instead
    ///
    pub const IsKeyLocked = isKeyLocked;

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfoprovider.html#isKeyLocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` key: qnamespace_enums.Key `
    ///
    pub fn isKeyLocked(self: KModifierKeyInfoProvider, key: i32) bool {
        return qtc.KModifierKeyInfoProvider_IsKeyLocked(@ptrCast(self.ptr), @bitCast(key));
    }

    /// ### DEPRECATED: Use `setKeyLocked` instead
    ///
    pub const SetKeyLocked = setKeyLocked;

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
    pub fn setKeyLocked(self: KModifierKeyInfoProvider, key: i32, locked: bool) bool {
        return qtc.KModifierKeyInfoProvider_SetKeyLocked(@ptrCast(self.ptr), @bitCast(key), locked);
    }

    /// ### DEPRECATED: Use `onSetKeyLocked` instead
    ///
    pub const OnSetKeyLocked = onSetKeyLocked;

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
    pub fn onSetKeyLocked(self: KModifierKeyInfoProvider, callback: *const fn (KModifierKeyInfoProvider, i32, bool) callconv(.c) bool) void {
        qtc.KModifierKeyInfoProvider_OnSetKeyLocked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetKeyLocked` instead
    ///
    pub const SuperSetKeyLocked = superSetKeyLocked;

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
    pub fn superSetKeyLocked(self: KModifierKeyInfoProvider, key: i32, locked: bool) bool {
        return qtc.KModifierKeyInfoProvider_SuperSetKeyLocked(@ptrCast(self.ptr), @bitCast(key), locked);
    }

    /// ### DEPRECATED: Use `isButtonPressed` instead
    ///
    pub const IsButtonPressed = isButtonPressed;

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfoprovider.html#isButtonPressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` button: qnamespace_enums.MouseButton `
    ///
    pub fn isButtonPressed(self: KModifierKeyInfoProvider, button: i32) bool {
        return qtc.KModifierKeyInfoProvider_IsButtonPressed(@ptrCast(self.ptr), @bitCast(button));
    }

    /// ### DEPRECATED: Use `knowsKey` instead
    ///
    pub const KnowsKey = knowsKey;

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfoprovider.html#knowsKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` key: qnamespace_enums.Key `
    ///
    pub fn knowsKey(self: KModifierKeyInfoProvider, key: i32) bool {
        return qtc.KModifierKeyInfoProvider_KnowsKey(@ptrCast(self.ptr), @bitCast(key));
    }

    /// ### DEPRECATED: Use `knownKeys` instead
    ///
    pub const KnownKeys = knownKeys;

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
    pub fn knownKeys(self: KModifierKeyInfoProvider, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.KModifierKeyInfoProvider_KnownKeys(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("KModifierKeyInfoProvider.knownKeys: Memory allocation failed");
        const _data_val: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `keyLatched` instead
    ///
    pub const KeyLatched = keyLatched;

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
    pub fn keyLatched(self: KModifierKeyInfoProvider, key: i32, state: bool) void {
        qtc.KModifierKeyInfoProvider_KeyLatched(@ptrCast(self.ptr), @bitCast(key), state);
    }

    /// ### DEPRECATED: Use `onKeyLatched` instead
    ///
    pub const OnKeyLatched = onKeyLatched;

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfoprovider.html#keyLatched)
    ///
    /// ## Parameters:
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` callback: *const fn (self: KModifierKeyInfoProvider, key: qnamespace_enums.Key, state: bool) callconv(.c) void `
    ///
    pub fn onKeyLatched(self: KModifierKeyInfoProvider, callback: *const fn (KModifierKeyInfoProvider, i32, bool) callconv(.c) void) void {
        qtc.KModifierKeyInfoProvider_Connect_KeyLatched(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `keyLocked` instead
    ///
    pub const KeyLocked = keyLocked;

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
    pub fn keyLocked(self: KModifierKeyInfoProvider, key: i32, state: bool) void {
        qtc.KModifierKeyInfoProvider_KeyLocked(@ptrCast(self.ptr), @bitCast(key), state);
    }

    /// ### DEPRECATED: Use `onKeyLocked` instead
    ///
    pub const OnKeyLocked = onKeyLocked;

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfoprovider.html#keyLocked)
    ///
    /// ## Parameters:
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` callback: *const fn (self: KModifierKeyInfoProvider, key: qnamespace_enums.Key, state: bool) callconv(.c) void `
    ///
    pub fn onKeyLocked(self: KModifierKeyInfoProvider, callback: *const fn (KModifierKeyInfoProvider, i32, bool) callconv(.c) void) void {
        qtc.KModifierKeyInfoProvider_Connect_KeyLocked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `keyPressed` instead
    ///
    pub const KeyPressed = keyPressed;

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
    pub fn keyPressed(self: KModifierKeyInfoProvider, key: i32, state: bool) void {
        qtc.KModifierKeyInfoProvider_KeyPressed(@ptrCast(self.ptr), @bitCast(key), state);
    }

    /// ### DEPRECATED: Use `onKeyPressed` instead
    ///
    pub const OnKeyPressed = onKeyPressed;

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfoprovider.html#keyPressed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` callback: *const fn (self: KModifierKeyInfoProvider, key: qnamespace_enums.Key, state: bool) callconv(.c) void `
    ///
    pub fn onKeyPressed(self: KModifierKeyInfoProvider, callback: *const fn (KModifierKeyInfoProvider, i32, bool) callconv(.c) void) void {
        qtc.KModifierKeyInfoProvider_Connect_KeyPressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `buttonPressed` instead
    ///
    pub const ButtonPressed = buttonPressed;

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
    pub fn buttonPressed(self: KModifierKeyInfoProvider, button: i32, state: bool) void {
        qtc.KModifierKeyInfoProvider_ButtonPressed(@ptrCast(self.ptr), @bitCast(button), state);
    }

    /// ### DEPRECATED: Use `onButtonPressed` instead
    ///
    pub const OnButtonPressed = onButtonPressed;

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfoprovider.html#buttonPressed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` callback: *const fn (self: KModifierKeyInfoProvider, button: qnamespace_enums.MouseButton, state: bool) callconv(.c) void `
    ///
    pub fn onButtonPressed(self: KModifierKeyInfoProvider, callback: *const fn (KModifierKeyInfoProvider, i32, bool) callconv(.c) void) void {
        qtc.KModifierKeyInfoProvider_Connect_ButtonPressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `keyAdded` instead
    ///
    pub const KeyAdded = keyAdded;

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfoprovider.html#keyAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` key: qnamespace_enums.Key `
    ///
    pub fn keyAdded(self: KModifierKeyInfoProvider, key: i32) void {
        qtc.KModifierKeyInfoProvider_KeyAdded(@ptrCast(self.ptr), @bitCast(key));
    }

    /// ### DEPRECATED: Use `onKeyAdded` instead
    ///
    pub const OnKeyAdded = onKeyAdded;

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfoprovider.html#keyAdded)
    ///
    /// ## Parameters:
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` callback: *const fn (self: KModifierKeyInfoProvider, key: qnamespace_enums.Key) callconv(.c) void `
    ///
    pub fn onKeyAdded(self: KModifierKeyInfoProvider, callback: *const fn (KModifierKeyInfoProvider, i32) callconv(.c) void) void {
        qtc.KModifierKeyInfoProvider_Connect_KeyAdded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `keyRemoved` instead
    ///
    pub const KeyRemoved = keyRemoved;

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfoprovider.html#keyRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` key: qnamespace_enums.Key `
    ///
    pub fn keyRemoved(self: KModifierKeyInfoProvider, key: i32) void {
        qtc.KModifierKeyInfoProvider_KeyRemoved(@ptrCast(self.ptr), @bitCast(key));
    }

    /// ### DEPRECATED: Use `onKeyRemoved` instead
    ///
    pub const OnKeyRemoved = onKeyRemoved;

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfoprovider.html#keyRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` callback: *const fn (self: KModifierKeyInfoProvider, key: qnamespace_enums.Key) callconv(.c) void `
    ///
    pub fn onKeyRemoved(self: KModifierKeyInfoProvider, callback: *const fn (KModifierKeyInfoProvider, i32) callconv(.c) void) void {
        qtc.KModifierKeyInfoProvider_Connect_KeyRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `stateUpdated` instead
    ///
    pub const StateUpdated = stateUpdated;

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
    pub fn stateUpdated(self: KModifierKeyInfoProvider, key: i32, state: i32) void {
        qtc.KModifierKeyInfoProvider_StateUpdated(@ptrCast(self.ptr), @bitCast(key), @bitCast(state));
    }

    /// ### DEPRECATED: Use `onStateUpdated` instead
    ///
    pub const OnStateUpdated = onStateUpdated;

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
    pub fn onStateUpdated(self: KModifierKeyInfoProvider, callback: *const fn (KModifierKeyInfoProvider, i32, i32) callconv(.c) void) void {
        qtc.KModifierKeyInfoProvider_OnStateUpdated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superStateUpdated` instead
    ///
    pub const SuperStateUpdated = superStateUpdated;

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
    pub fn superStateUpdated(self: KModifierKeyInfoProvider, key: i32, state: i32) void {
        qtc.KModifierKeyInfoProvider_SuperStateUpdated(@ptrCast(self.ptr), @bitCast(key), @bitCast(state));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KModifierKeyInfoProvider.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KModifierKeyInfoProvider.tr3: Memory allocation failed");
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KModifierKeyInfoProvider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KModifierKeyInfoProvider.objectName: Memory allocation failed");
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: KModifierKeyInfoProvider, name: []const u8) void {
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    pub fn isWidgetType(self: KModifierKeyInfoProvider) bool {
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    pub fn isWindowType(self: KModifierKeyInfoProvider) bool {
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    pub fn isQuickItemType(self: KModifierKeyInfoProvider) bool {
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    pub fn signalsBlocked(self: KModifierKeyInfoProvider) bool {
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KModifierKeyInfoProvider, b: bool) bool {
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    pub fn thread(self: KModifierKeyInfoProvider) QThread {
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KModifierKeyInfoProvider, _thread: anytype) bool {
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KModifierKeyInfoProvider, interval: i32) i32 {
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KModifierKeyInfoProvider, time: i64) i32 {
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KModifierKeyInfoProvider, id: i32) void {
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KModifierKeyInfoProvider, id: i32) void {
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KModifierKeyInfoProvider, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KModifierKeyInfoProvider.children: Memory allocation failed");
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KModifierKeyInfoProvider, _parent: anytype) void {
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KModifierKeyInfoProvider, filterObj: anytype) void {
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KModifierKeyInfoProvider, obj: anytype) void {
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KModifierKeyInfoProvider, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    pub fn disconnect3(self: KModifierKeyInfoProvider) bool {
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KModifierKeyInfoProvider, receiver: anytype) bool {
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    pub fn dumpObjectTree(self: KModifierKeyInfoProvider) void {
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    pub fn dumpObjectInfo(self: KModifierKeyInfoProvider) void {
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KModifierKeyInfoProvider, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: KModifierKeyInfoProvider, name: [:0]const u8) QVariant {
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KModifierKeyInfoProvider, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KModifierKeyInfoProvider.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KModifierKeyInfoProvider.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    pub fn bindingStorage(self: KModifierKeyInfoProvider) QBindingStorage {
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    pub fn bindingStorage2(self: KModifierKeyInfoProvider) QBindingStorage {
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    pub fn destroyed(self: KModifierKeyInfoProvider) void {
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` callback: *const fn (self: KModifierKeyInfoProvider) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KModifierKeyInfoProvider, callback: *const fn (KModifierKeyInfoProvider) callconv(.c) void) void {
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    pub fn parent(self: KModifierKeyInfoProvider) QObject {
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KModifierKeyInfoProvider, classname: [:0]const u8) bool {
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    pub fn deleteLater(self: KModifierKeyInfoProvider) void {
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KModifierKeyInfoProvider, interval: i32, timerType: i32) i32 {
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KModifierKeyInfoProvider, time: i64, timerType: i32) i32 {
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KModifierKeyInfoProvider, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KModifierKeyInfoProvider, signal: [:0]const u8) bool {
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KModifierKeyInfoProvider, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KModifierKeyInfoProvider, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KModifierKeyInfoProvider, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KModifierKeyInfoProvider, param1: anytype) void {
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` callback: *const fn (self: KModifierKeyInfoProvider, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KModifierKeyInfoProvider, callback: *const fn (KModifierKeyInfoProvider, QObject) callconv(.c) void) void {
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: KModifierKeyInfoProvider, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KModifierKeyInfoProvider_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: KModifierKeyInfoProvider, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KModifierKeyInfoProvider_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KModifierKeyInfoProvider`
    ///
    /// ` callback: *const fn (self: KModifierKeyInfoProvider, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: KModifierKeyInfoProvider, callback: *const fn (KModifierKeyInfoProvider, QEvent) callconv(.c) bool) void {
        qtc.KModifierKeyInfoProvider_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KModifierKeyInfoProvider, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KModifierKeyInfoProvider_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: KModifierKeyInfoProvider, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KModifierKeyInfoProvider_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KModifierKeyInfoProvider`
    ///
    /// ` callback: *const fn (self: KModifierKeyInfoProvider, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: KModifierKeyInfoProvider, callback: *const fn (KModifierKeyInfoProvider, QObject, QEvent) callconv(.c) bool) void {
        qtc.KModifierKeyInfoProvider_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: KModifierKeyInfoProvider, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KModifierKeyInfoProvider_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: KModifierKeyInfoProvider, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KModifierKeyInfoProvider_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KModifierKeyInfoProvider`
    ///
    /// ` callback: *const fn (self: KModifierKeyInfoProvider, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: KModifierKeyInfoProvider, callback: *const fn (KModifierKeyInfoProvider, QTimerEvent) callconv(.c) void) void {
        qtc.KModifierKeyInfoProvider_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: KModifierKeyInfoProvider, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KModifierKeyInfoProvider_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: KModifierKeyInfoProvider, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KModifierKeyInfoProvider_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KModifierKeyInfoProvider`
    ///
    /// ` callback: *const fn (self: KModifierKeyInfoProvider, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: KModifierKeyInfoProvider, callback: *const fn (KModifierKeyInfoProvider, QChildEvent) callconv(.c) void) void {
        qtc.KModifierKeyInfoProvider_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: KModifierKeyInfoProvider, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KModifierKeyInfoProvider_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: KModifierKeyInfoProvider, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KModifierKeyInfoProvider_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KModifierKeyInfoProvider`
    ///
    /// ` callback: *const fn (self: KModifierKeyInfoProvider, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: KModifierKeyInfoProvider, callback: *const fn (KModifierKeyInfoProvider, QEvent) callconv(.c) void) void {
        qtc.KModifierKeyInfoProvider_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: KModifierKeyInfoProvider, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KModifierKeyInfoProvider_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: KModifierKeyInfoProvider, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KModifierKeyInfoProvider_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KModifierKeyInfoProvider`
    ///
    /// ` callback: *const fn (self: KModifierKeyInfoProvider, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: KModifierKeyInfoProvider, callback: *const fn (KModifierKeyInfoProvider, QMetaMethod) callconv(.c) void) void {
        qtc.KModifierKeyInfoProvider_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: KModifierKeyInfoProvider, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KModifierKeyInfoProvider_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: KModifierKeyInfoProvider, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KModifierKeyInfoProvider_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KModifierKeyInfoProvider`
    ///
    /// ` callback: *const fn (self: KModifierKeyInfoProvider, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: KModifierKeyInfoProvider, callback: *const fn (KModifierKeyInfoProvider, QMetaMethod) callconv(.c) void) void {
        qtc.KModifierKeyInfoProvider_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    pub fn sender(self: KModifierKeyInfoProvider) QObject {
        return .{ .ptr = qtc.KModifierKeyInfoProvider_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    pub fn superSender(self: KModifierKeyInfoProvider) QObject {
        return .{ .ptr = qtc.KModifierKeyInfoProvider_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: KModifierKeyInfoProvider`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: KModifierKeyInfoProvider, callback: *const fn () callconv(.c) QObject) void {
        qtc.KModifierKeyInfoProvider_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    pub fn senderSignalIndex(self: KModifierKeyInfoProvider) i32 {
        return qtc.KModifierKeyInfoProvider_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    pub fn superSenderSignalIndex(self: KModifierKeyInfoProvider) i32 {
        return qtc.KModifierKeyInfoProvider_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KModifierKeyInfoProvider`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: KModifierKeyInfoProvider, callback: *const fn () callconv(.c) i32) void {
        qtc.KModifierKeyInfoProvider_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: KModifierKeyInfoProvider, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KModifierKeyInfoProvider_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: KModifierKeyInfoProvider, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KModifierKeyInfoProvider_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KModifierKeyInfoProvider`
    ///
    /// ` callback: *const fn (self: KModifierKeyInfoProvider, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: KModifierKeyInfoProvider, callback: *const fn (KModifierKeyInfoProvider, [*:0]const u8) callconv(.c) i32) void {
        qtc.KModifierKeyInfoProvider_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: KModifierKeyInfoProvider, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KModifierKeyInfoProvider_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: KModifierKeyInfoProvider, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KModifierKeyInfoProvider_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KModifierKeyInfoProvider`
    ///
    /// ` callback: *const fn (self: KModifierKeyInfoProvider, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: KModifierKeyInfoProvider, callback: *const fn (KModifierKeyInfoProvider, QMetaMethod) callconv(.c) bool) void {
        qtc.KModifierKeyInfoProvider_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KModifierKeyInfoProvider `
    ///
    /// ` callback: *const fn (self: KModifierKeyInfoProvider, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KModifierKeyInfoProvider, callback: *const fn (KModifierKeyInfoProvider, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kmodifierkeyinfoprovider.html#dtor.KModifierKeyInfoProvider)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KModifierKeyInfoProvider `
    ///
    pub fn delete(self: KModifierKeyInfoProvider) void {
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
