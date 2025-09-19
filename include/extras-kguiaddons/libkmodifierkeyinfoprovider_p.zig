const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kmodifierkeyinfoprovider_p_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://api.kde.org/kmodifierkeyinfoprovider.html
pub const kmodifierkeyinfoprovider = struct {
    /// New constructs a new KModifierKeyInfoProvider object.
    ///
    ///
    pub fn New() QtC.KModifierKeyInfoProvider {
        return qtc.KModifierKeyInfoProvider_new();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KModifierKeyInfoProvider_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.KModifierKeyInfoProvider, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KModifierKeyInfoProvider_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.KModifierKeyInfoProvider, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KModifierKeyInfoProvider_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, callback: *const fn (self: QtC.KModifierKeyInfoProvider, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.KModifierKeyInfoProvider_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KModifierKeyInfoProvider_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.KModifierKeyInfoProvider_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kmodifierkeyinfoprovider.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kmodifierkeyinfoprovider.html#isKeyPressed)
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, key: qnamespace_enums.Key ```
    pub fn IsKeyPressed(self: ?*anyopaque, key: i32) bool {
        return qtc.KModifierKeyInfoProvider_IsKeyPressed(@ptrCast(self), @intCast(key));
    }

    /// [Qt documentation](https://api.kde.org/kmodifierkeyinfoprovider.html#isKeyLatched)
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, key: qnamespace_enums.Key ```
    pub fn IsKeyLatched(self: ?*anyopaque, key: i32) bool {
        return qtc.KModifierKeyInfoProvider_IsKeyLatched(@ptrCast(self), @intCast(key));
    }

    /// [Qt documentation](https://api.kde.org/kmodifierkeyinfoprovider.html#setKeyLatched)
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, key: qnamespace_enums.Key, latched: bool ```
    pub fn SetKeyLatched(self: ?*anyopaque, key: i32, latched: bool) bool {
        return qtc.KModifierKeyInfoProvider_SetKeyLatched(@ptrCast(self), @intCast(key), latched);
    }

    /// [Qt documentation](https://api.kde.org/kmodifierkeyinfoprovider.html#setKeyLatched)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, callback: *const fn (self: QtC.KModifierKeyInfoProvider, key: qnamespace_enums.Key, latched: bool) callconv(.c) bool ```
    pub fn OnSetKeyLatched(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, bool) callconv(.c) bool) void {
        qtc.KModifierKeyInfoProvider_OnSetKeyLatched(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kmodifierkeyinfoprovider.html#setKeyLatched)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, key: qnamespace_enums.Key, latched: bool ```
    pub fn QBaseSetKeyLatched(self: ?*anyopaque, key: i32, latched: bool) bool {
        return qtc.KModifierKeyInfoProvider_QBaseSetKeyLatched(@ptrCast(self), @intCast(key), latched);
    }

    /// [Qt documentation](https://api.kde.org/kmodifierkeyinfoprovider.html#isKeyLocked)
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, key: qnamespace_enums.Key ```
    pub fn IsKeyLocked(self: ?*anyopaque, key: i32) bool {
        return qtc.KModifierKeyInfoProvider_IsKeyLocked(@ptrCast(self), @intCast(key));
    }

    /// [Qt documentation](https://api.kde.org/kmodifierkeyinfoprovider.html#setKeyLocked)
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, key: qnamespace_enums.Key, locked: bool ```
    pub fn SetKeyLocked(self: ?*anyopaque, key: i32, locked: bool) bool {
        return qtc.KModifierKeyInfoProvider_SetKeyLocked(@ptrCast(self), @intCast(key), locked);
    }

    /// [Qt documentation](https://api.kde.org/kmodifierkeyinfoprovider.html#setKeyLocked)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, callback: *const fn (self: QtC.KModifierKeyInfoProvider, key: qnamespace_enums.Key, locked: bool) callconv(.c) bool ```
    pub fn OnSetKeyLocked(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, bool) callconv(.c) bool) void {
        qtc.KModifierKeyInfoProvider_OnSetKeyLocked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kmodifierkeyinfoprovider.html#setKeyLocked)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, key: qnamespace_enums.Key, locked: bool ```
    pub fn QBaseSetKeyLocked(self: ?*anyopaque, key: i32, locked: bool) bool {
        return qtc.KModifierKeyInfoProvider_QBaseSetKeyLocked(@ptrCast(self), @intCast(key), locked);
    }

    /// [Qt documentation](https://api.kde.org/kmodifierkeyinfoprovider.html#isButtonPressed)
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, button: qnamespace_enums.MouseButton ```
    pub fn IsButtonPressed(self: ?*anyopaque, button: i64) bool {
        return qtc.KModifierKeyInfoProvider_IsButtonPressed(@ptrCast(self), @intCast(button));
    }

    /// [Qt documentation](https://api.kde.org/kmodifierkeyinfoprovider.html#knowsKey)
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, key: qnamespace_enums.Key ```
    pub fn KnowsKey(self: ?*anyopaque, key: i32) bool {
        return qtc.KModifierKeyInfoProvider_KnowsKey(@ptrCast(self), @intCast(key));
    }

    /// [Qt documentation](https://api.kde.org/kmodifierkeyinfoprovider.html#knownKeys)
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, allocator: std.mem.Allocator ```
    ///
    /// Returns: ``` []qnamespace_enums.Key ```
    pub fn KnownKeys(self: ?*anyopaque, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.KModifierKeyInfoProvider_KnownKeys(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("kmodifierkeyinfoprovider.KnownKeys: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kmodifierkeyinfoprovider.html#keyLatched)
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, key: qnamespace_enums.Key, state: bool ```
    pub fn KeyLatched(self: ?*anyopaque, key: i32, state: bool) void {
        qtc.KModifierKeyInfoProvider_KeyLatched(@ptrCast(self), @intCast(key), state);
    }

    /// [Qt documentation](https://api.kde.org/kmodifierkeyinfoprovider.html#keyLatched)
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, callback: *const fn (self: QtC.KModifierKeyInfoProvider, key: qnamespace_enums.Key, state: bool) callconv(.c) void ```
    pub fn OnKeyLatched(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, bool) callconv(.c) void) void {
        qtc.KModifierKeyInfoProvider_Connect_KeyLatched(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kmodifierkeyinfoprovider.html#keyLocked)
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, key: qnamespace_enums.Key, state: bool ```
    pub fn KeyLocked(self: ?*anyopaque, key: i32, state: bool) void {
        qtc.KModifierKeyInfoProvider_KeyLocked(@ptrCast(self), @intCast(key), state);
    }

    /// [Qt documentation](https://api.kde.org/kmodifierkeyinfoprovider.html#keyLocked)
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, callback: *const fn (self: QtC.KModifierKeyInfoProvider, key: qnamespace_enums.Key, state: bool) callconv(.c) void ```
    pub fn OnKeyLocked(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, bool) callconv(.c) void) void {
        qtc.KModifierKeyInfoProvider_Connect_KeyLocked(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kmodifierkeyinfoprovider.html#keyPressed)
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, key: qnamespace_enums.Key, state: bool ```
    pub fn KeyPressed(self: ?*anyopaque, key: i32, state: bool) void {
        qtc.KModifierKeyInfoProvider_KeyPressed(@ptrCast(self), @intCast(key), state);
    }

    /// [Qt documentation](https://api.kde.org/kmodifierkeyinfoprovider.html#keyPressed)
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, callback: *const fn (self: QtC.KModifierKeyInfoProvider, key: qnamespace_enums.Key, state: bool) callconv(.c) void ```
    pub fn OnKeyPressed(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, bool) callconv(.c) void) void {
        qtc.KModifierKeyInfoProvider_Connect_KeyPressed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kmodifierkeyinfoprovider.html#buttonPressed)
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, button: qnamespace_enums.MouseButton, state: bool ```
    pub fn ButtonPressed(self: ?*anyopaque, button: i64, state: bool) void {
        qtc.KModifierKeyInfoProvider_ButtonPressed(@ptrCast(self), @intCast(button), state);
    }

    /// [Qt documentation](https://api.kde.org/kmodifierkeyinfoprovider.html#buttonPressed)
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, callback: *const fn (self: QtC.KModifierKeyInfoProvider, button: qnamespace_enums.MouseButton, state: bool) callconv(.c) void ```
    pub fn OnButtonPressed(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64, bool) callconv(.c) void) void {
        qtc.KModifierKeyInfoProvider_Connect_ButtonPressed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kmodifierkeyinfoprovider.html#keyAdded)
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, key: qnamespace_enums.Key ```
    pub fn KeyAdded(self: ?*anyopaque, key: i32) void {
        qtc.KModifierKeyInfoProvider_KeyAdded(@ptrCast(self), @intCast(key));
    }

    /// [Qt documentation](https://api.kde.org/kmodifierkeyinfoprovider.html#keyAdded)
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, callback: *const fn (self: QtC.KModifierKeyInfoProvider, key: qnamespace_enums.Key) callconv(.c) void ```
    pub fn OnKeyAdded(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.KModifierKeyInfoProvider_Connect_KeyAdded(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kmodifierkeyinfoprovider.html#keyRemoved)
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, key: qnamespace_enums.Key ```
    pub fn KeyRemoved(self: ?*anyopaque, key: i32) void {
        qtc.KModifierKeyInfoProvider_KeyRemoved(@ptrCast(self), @intCast(key));
    }

    /// [Qt documentation](https://api.kde.org/kmodifierkeyinfoprovider.html#keyRemoved)
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, callback: *const fn (self: QtC.KModifierKeyInfoProvider, key: qnamespace_enums.Key) callconv(.c) void ```
    pub fn OnKeyRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.KModifierKeyInfoProvider_Connect_KeyRemoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kmodifierkeyinfoprovider.html#stateUpdated)
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, key: qnamespace_enums.Key, state: flag of kmodifierkeyinfoprovider_p_enums.ModifierState ```
    pub fn StateUpdated(self: ?*anyopaque, key: i32, state: i32) void {
        qtc.KModifierKeyInfoProvider_StateUpdated(@ptrCast(self), @intCast(key), @intCast(state));
    }

    /// [Qt documentation](https://api.kde.org/kmodifierkeyinfoprovider.html#stateUpdated)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, callback: *const fn (self: QtC.KModifierKeyInfoProvider, key: qnamespace_enums.Key, state: flag of kmodifierkeyinfoprovider_p_enums.ModifierState) callconv(.c) void ```
    pub fn OnStateUpdated(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.KModifierKeyInfoProvider_OnStateUpdated(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kmodifierkeyinfoprovider.html#stateUpdated)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, key: qnamespace_enums.Key, state: flag of kmodifierkeyinfoprovider_p_enums.ModifierState ```
    pub fn QBaseStateUpdated(self: ?*anyopaque, key: i32, state: i32) void {
        qtc.KModifierKeyInfoProvider_QBaseStateUpdated(@ptrCast(self), @intCast(key), @intCast(state));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KModifierKeyInfoProvider_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kmodifierkeyinfoprovider.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KModifierKeyInfoProvider_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kmodifierkeyinfoprovider.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kmodifierkeyinfoprovider.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, name: []const u8 ```
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
    /// ``` self: QtC.KModifierKeyInfoProvider ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("kmodifierkeyinfoprovider.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, obj: QtC.QObject ```
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
    /// ``` self: QtC.KModifierKeyInfoProvider, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.KModifierKeyInfoProvider ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, callback: *const fn (self: QtC.KModifierKeyInfoProvider) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.KModifierKeyInfoProvider, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, callback: *const fn (self: QtC.KModifierKeyInfoProvider, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KModifierKeyInfoProvider_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KModifierKeyInfoProvider_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, callback: *const fn (self: QtC.KModifierKeyInfoProvider, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KModifierKeyInfoProvider_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KModifierKeyInfoProvider_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KModifierKeyInfoProvider_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, callback: *const fn (self: QtC.KModifierKeyInfoProvider, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KModifierKeyInfoProvider_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KModifierKeyInfoProvider_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KModifierKeyInfoProvider_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, callback: *const fn (self: QtC.KModifierKeyInfoProvider, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KModifierKeyInfoProvider_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KModifierKeyInfoProvider_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KModifierKeyInfoProvider_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, callback: *const fn (self: QtC.KModifierKeyInfoProvider, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KModifierKeyInfoProvider_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KModifierKeyInfoProvider_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KModifierKeyInfoProvider_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, callback: *const fn (self: QtC.KModifierKeyInfoProvider, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KModifierKeyInfoProvider_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KModifierKeyInfoProvider_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KModifierKeyInfoProvider_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, callback: *const fn (self: QtC.KModifierKeyInfoProvider, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KModifierKeyInfoProvider_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KModifierKeyInfoProvider_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KModifierKeyInfoProvider_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, callback: *const fn (self: QtC.KModifierKeyInfoProvider, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KModifierKeyInfoProvider_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.KModifierKeyInfoProvider_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.KModifierKeyInfoProvider_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, callback: *const fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.KModifierKeyInfoProvider_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KModifierKeyInfoProvider_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KModifierKeyInfoProvider_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, callback: *const fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.KModifierKeyInfoProvider_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KModifierKeyInfoProvider_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KModifierKeyInfoProvider_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, callback: *const fn (self: QtC.KModifierKeyInfoProvider, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.KModifierKeyInfoProvider_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KModifierKeyInfoProvider_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KModifierKeyInfoProvider_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, callback: *const fn (self: QtC.KModifierKeyInfoProvider, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KModifierKeyInfoProvider_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider, callback: *const fn (self: QtC.KModifierKeyInfoProvider, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kmodifierkeyinfoprovider.html#dtor.KModifierKeyInfoProvider)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KModifierKeyInfoProvider ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KModifierKeyInfoProvider_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/kmodifierkeyinfoprovider_p.html#types
pub const enums = struct {
    pub const ModifierState = enum {
        pub const Nothing: i32 = 0;
        pub const Pressed: i32 = 1;
        pub const Latched: i32 = 2;
        pub const Locked: i32 = 4;
    };
};
