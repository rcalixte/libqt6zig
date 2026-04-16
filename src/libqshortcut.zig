const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QKeySequence = @import("libqt6").QKeySequence;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qkeysequence_enums = @import("libqkeysequence.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html)
pub const QShortcut = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QShortcut,

    pub const _is_QShortcut = {};
    pub const _is_QObject = {};

    /// New constructs a new QShortcut object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New(parent: anytype) QShortcut {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QShortcut_new(@ptrCast(parent.ptr)) };
    }

    /// New2 constructs a new QShortcut object.
    ///
    /// ## Parameter(s):
    ///
    /// ` key: QKeySequence `
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(key: anytype, parent: anytype) QShortcut {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QShortcut_new2(@ptrCast(key.ptr), @ptrCast(parent.ptr)) };
    }

    /// New3 constructs a new QShortcut object.
    ///
    /// ## Parameter(s):
    ///
    /// ` key: qkeysequence_enums.StandardKey `
    ///
    /// ` parent: QObject `
    ///
    pub fn New3(key: i32, parent: anytype) QShortcut {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QShortcut_new3(@bitCast(key), @ptrCast(parent.ptr)) };
    }

    /// New4 constructs a new QShortcut object.
    ///
    /// ## Parameter(s):
    ///
    /// ` key: QKeySequence `
    ///
    /// ` parent: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn New4(key: anytype, parent: anytype, member: [:0]const u8) QShortcut {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        comptime _ = @TypeOf(parent)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QShortcut_new4(@ptrCast(key.ptr), @ptrCast(parent.ptr), member_Cstring) };
    }

    /// New5 constructs a new QShortcut object.
    ///
    /// ## Parameter(s):
    ///
    /// ` key: QKeySequence `
    ///
    /// ` parent: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` ambiguousMember: [:0]const u8 `
    ///
    pub fn New5(key: anytype, parent: anytype, member: [:0]const u8, ambiguousMember: [:0]const u8) QShortcut {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        comptime _ = @TypeOf(parent)._is_QObject;
        const member_Cstring = member.ptr;
        const ambiguousMember_Cstring = ambiguousMember.ptr;
        return .{ .ptr = qtc.QShortcut_new5(@ptrCast(key.ptr), @ptrCast(parent.ptr), member_Cstring, ambiguousMember_Cstring) };
    }

    /// New6 constructs a new QShortcut object.
    ///
    /// ## Parameter(s):
    ///
    /// ` key: QKeySequence `
    ///
    /// ` parent: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` ambiguousMember: [:0]const u8 `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn New6(key: anytype, parent: anytype, member: [:0]const u8, ambiguousMember: [:0]const u8, context: i32) QShortcut {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        comptime _ = @TypeOf(parent)._is_QObject;
        const member_Cstring = member.ptr;
        const ambiguousMember_Cstring = ambiguousMember.ptr;
        return .{ .ptr = qtc.QShortcut_new6(@ptrCast(key.ptr), @ptrCast(parent.ptr), member_Cstring, ambiguousMember_Cstring, @bitCast(context)) };
    }

    /// New7 constructs a new QShortcut object.
    ///
    /// ## Parameter(s):
    ///
    /// ` key: qkeysequence_enums.StandardKey `
    ///
    /// ` parent: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn New7(key: i32, parent: anytype, member: [:0]const u8) QShortcut {
        comptime _ = @TypeOf(parent)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QShortcut_new7(@bitCast(key), @ptrCast(parent.ptr), member_Cstring) };
    }

    /// New8 constructs a new QShortcut object.
    ///
    /// ## Parameter(s):
    ///
    /// ` key: qkeysequence_enums.StandardKey `
    ///
    /// ` parent: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` ambiguousMember: [:0]const u8 `
    ///
    pub fn New8(key: i32, parent: anytype, member: [:0]const u8, ambiguousMember: [:0]const u8) QShortcut {
        comptime _ = @TypeOf(parent)._is_QObject;
        const member_Cstring = member.ptr;
        const ambiguousMember_Cstring = ambiguousMember.ptr;
        return .{ .ptr = qtc.QShortcut_new8(@bitCast(key), @ptrCast(parent.ptr), member_Cstring, ambiguousMember_Cstring) };
    }

    /// New9 constructs a new QShortcut object.
    ///
    /// ## Parameter(s):
    ///
    /// ` key: qkeysequence_enums.StandardKey `
    ///
    /// ` parent: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` ambiguousMember: [:0]const u8 `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn New9(key: i32, parent: anytype, member: [:0]const u8, ambiguousMember: [:0]const u8, context: i32) QShortcut {
        comptime _ = @TypeOf(parent)._is_QObject;
        const member_Cstring = member.ptr;
        const ambiguousMember_Cstring = ambiguousMember.ptr;
        return .{ .ptr = qtc.QShortcut_new9(@bitCast(key), @ptrCast(parent.ptr), member_Cstring, ambiguousMember_Cstring, @bitCast(context)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcut `
    ///
    pub fn MetaObject(self: QShortcut) QMetaObject {
        return .{ .ptr = qtc.QShortcut_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QShortcut `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QShortcut, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QShortcut_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QShortcut `
    ///
    pub fn SuperMetaObject(self: QShortcut) QMetaObject {
        return .{ .ptr = qtc.QShortcut_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QShortcut `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QShortcut, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QShortcut_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QShortcut `
    ///
    /// ` callback: *const fn (self: QShortcut, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QShortcut, callback: *const fn (QShortcut, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QShortcut_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcut `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QShortcut, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QShortcut_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QShortcut `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QShortcut, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QShortcut_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QShortcut `
    ///
    /// ` callback: *const fn (self: QShortcut, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QShortcut, callback: *const fn (QShortcut, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QShortcut_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcut `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QShortcut, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QShortcut_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qshortcut.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#setKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcut `
    ///
    /// ` key: QKeySequence `
    ///
    pub fn SetKey(self: QShortcut, key: anytype) void {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        qtc.QShortcut_SetKey(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#key)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcut `
    ///
    pub fn Key(self: QShortcut) QKeySequence {
        return .{ .ptr = qtc.QShortcut_Key(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#setKeys)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcut `
    ///
    /// ` key: qkeysequence_enums.StandardKey `
    ///
    pub fn SetKeys(self: QShortcut, key: i32) void {
        qtc.QShortcut_SetKeys(@ptrCast(self.ptr), @bitCast(key));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#setKeys)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcut `
    ///
    /// ` keys: []QKeySequence `
    ///
    pub fn SetKeys2(self: QShortcut, keys: []QKeySequence) void {
        const keys_list = qtc.libqt_list{
            .len = keys.len,
            .data = @ptrCast(keys.ptr),
        };
        qtc.QShortcut_SetKeys2(@ptrCast(self.ptr), keys_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#keys)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcut `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Keys(self: QShortcut, allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.QShortcut_Keys(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("qshortcut.Keys: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcut `
    ///
    /// ` enable: bool `
    ///
    pub fn SetEnabled(self: QShortcut, enable: bool) void {
        qtc.QShortcut_SetEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcut `
    ///
    pub fn IsEnabled(self: QShortcut) bool {
        return qtc.QShortcut_IsEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#setContext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcut `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn SetContext(self: QShortcut, context: i32) void {
        qtc.QShortcut_SetContext(@ptrCast(self.ptr), @bitCast(context));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#context)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcut `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ShortcutContext `
    ///
    pub fn Context(self: QShortcut) i32 {
        return qtc.QShortcut_Context(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#setAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcut `
    ///
    /// ` on: bool `
    ///
    pub fn SetAutoRepeat(self: QShortcut, on: bool) void {
        qtc.QShortcut_SetAutoRepeat(@ptrCast(self.ptr), on);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#autoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcut `
    ///
    pub fn AutoRepeat(self: QShortcut) bool {
        return qtc.QShortcut_AutoRepeat(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcut `
    ///
    pub fn Id(self: QShortcut) i32 {
        return qtc.QShortcut_Id(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcut `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetWhatsThis(self: QShortcut, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QShortcut_SetWhatsThis(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#whatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcut `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatsThis(self: QShortcut, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QShortcut_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qshortcut.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#activated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcut `
    ///
    pub fn Activated(self: QShortcut) void {
        qtc.QShortcut_Activated(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#activated)
    ///
    /// ## Parameters:
    ///
    /// ` self: QShortcut `
    ///
    /// ` callback: *const fn (self: QShortcut) callconv(.c) void `
    ///
    pub fn OnActivated(self: QShortcut, callback: *const fn (QShortcut) callconv(.c) void) void {
        qtc.QShortcut_Connect_Activated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#activatedAmbiguously)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcut `
    ///
    pub fn ActivatedAmbiguously(self: QShortcut) void {
        qtc.QShortcut_ActivatedAmbiguously(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#activatedAmbiguously)
    ///
    /// ## Parameters:
    ///
    /// ` self: QShortcut `
    ///
    /// ` callback: *const fn (self: QShortcut) callconv(.c) void `
    ///
    pub fn OnActivatedAmbiguously(self: QShortcut, callback: *const fn (QShortcut) callconv(.c) void) void {
        qtc.QShortcut_Connect_ActivatedAmbiguously(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcut `
    ///
    /// ` e: QEvent `
    ///
    pub fn Event(self: QShortcut, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.QShortcut_Event(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QShortcut `
    ///
    /// ` callback: *const fn (self: QShortcut, e: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QShortcut, callback: *const fn (QShortcut, QEvent) callconv(.c) bool) void {
        qtc.QShortcut_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#event)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcut `
    ///
    /// ` e: QEvent `
    ///
    pub fn SuperEvent(self: QShortcut, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.QShortcut_SuperEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qshortcut.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qshortcut.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcut `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QShortcut, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qshortcut.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcut `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QShortcut, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcut `
    ///
    pub fn IsWidgetType(self: QShortcut) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcut `
    ///
    pub fn IsWindowType(self: QShortcut) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcut `
    ///
    pub fn IsQuickItemType(self: QShortcut) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcut `
    ///
    pub fn SignalsBlocked(self: QShortcut) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcut `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QShortcut, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcut `
    ///
    pub fn Thread(self: QShortcut) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcut `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QShortcut, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcut `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QShortcut, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcut `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QShortcut, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcut `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QShortcut, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcut `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QShortcut, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcut `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QShortcut, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qshortcut.Children: Memory allocation failed");
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
    /// ` self: QShortcut `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QShortcut, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcut `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QShortcut, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcut `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QShortcut, obj: anytype) void {
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
    /// ` self: QShortcut `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QShortcut, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QShortcut `
    ///
    pub fn Disconnect3(self: QShortcut) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcut `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QShortcut, receiver: anytype) bool {
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
    /// ` self: QShortcut `
    ///
    pub fn DumpObjectTree(self: QShortcut) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcut `
    ///
    pub fn DumpObjectInfo(self: QShortcut) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcut `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QShortcut, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QShortcut `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QShortcut, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcut `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QShortcut, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qshortcut.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qshortcut.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QShortcut `
    ///
    pub fn BindingStorage(self: QShortcut) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcut `
    ///
    pub fn BindingStorage2(self: QShortcut) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcut `
    ///
    pub fn Destroyed(self: QShortcut) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QShortcut `
    ///
    /// ` callback: *const fn (self: QShortcut) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QShortcut, callback: *const fn (QShortcut) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcut `
    ///
    pub fn Parent(self: QShortcut) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcut `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QShortcut, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcut `
    ///
    pub fn DeleteLater(self: QShortcut) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcut `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QShortcut, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcut `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QShortcut, time: i64, timerType: i32) i32 {
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
    /// ` self: QShortcut `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QShortcut, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QShortcut `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QShortcut, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcut `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QShortcut, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QShortcut `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QShortcut, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QShortcut `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QShortcut, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QShortcut `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QShortcut, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QShortcut `
    ///
    /// ` callback: *const fn (self: QShortcut, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QShortcut, callback: *const fn (QShortcut, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcut `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QShortcut, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QShortcut_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QShortcut `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QShortcut, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QShortcut_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QShortcut`
    ///
    /// ` callback: *const fn (self: QShortcut, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QShortcut, callback: *const fn (QShortcut, QObject, QEvent) callconv(.c) bool) void {
        qtc.QShortcut_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcut `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QShortcut, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QShortcut_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QShortcut `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QShortcut, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QShortcut_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QShortcut`
    ///
    /// ` callback: *const fn (self: QShortcut, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QShortcut, callback: *const fn (QShortcut, QTimerEvent) callconv(.c) void) void {
        qtc.QShortcut_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcut `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QShortcut, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QShortcut_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QShortcut `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QShortcut, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QShortcut_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QShortcut`
    ///
    /// ` callback: *const fn (self: QShortcut, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QShortcut, callback: *const fn (QShortcut, QChildEvent) callconv(.c) void) void {
        qtc.QShortcut_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcut `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QShortcut, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QShortcut_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QShortcut `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QShortcut, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QShortcut_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QShortcut`
    ///
    /// ` callback: *const fn (self: QShortcut, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QShortcut, callback: *const fn (QShortcut, QEvent) callconv(.c) void) void {
        qtc.QShortcut_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcut `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QShortcut, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QShortcut_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QShortcut `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QShortcut, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QShortcut_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QShortcut`
    ///
    /// ` callback: *const fn (self: QShortcut, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QShortcut, callback: *const fn (QShortcut, QMetaMethod) callconv(.c) void) void {
        qtc.QShortcut_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcut `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QShortcut, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QShortcut_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QShortcut `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QShortcut, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QShortcut_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QShortcut`
    ///
    /// ` callback: *const fn (self: QShortcut, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QShortcut, callback: *const fn (QShortcut, QMetaMethod) callconv(.c) void) void {
        qtc.QShortcut_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcut `
    ///
    pub fn Sender(self: QShortcut) QObject {
        return .{ .ptr = qtc.QShortcut_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QShortcut `
    ///
    pub fn SuperSender(self: QShortcut) QObject {
        return .{ .ptr = qtc.QShortcut_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QShortcut`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QShortcut, callback: *const fn () callconv(.c) QObject) void {
        qtc.QShortcut_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcut `
    ///
    pub fn SenderSignalIndex(self: QShortcut) i32 {
        return qtc.QShortcut_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QShortcut `
    ///
    pub fn SuperSenderSignalIndex(self: QShortcut) i32 {
        return qtc.QShortcut_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QShortcut`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QShortcut, callback: *const fn () callconv(.c) i32) void {
        qtc.QShortcut_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcut `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QShortcut, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QShortcut_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QShortcut `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QShortcut, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QShortcut_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QShortcut`
    ///
    /// ` callback: *const fn (self: QShortcut, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QShortcut, callback: *const fn (QShortcut, [*:0]const u8) callconv(.c) i32) void {
        qtc.QShortcut_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QShortcut `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QShortcut, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QShortcut_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QShortcut `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QShortcut, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QShortcut_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QShortcut`
    ///
    /// ` callback: *const fn (self: QShortcut, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QShortcut, callback: *const fn (QShortcut, QMetaMethod) callconv(.c) bool) void {
        qtc.QShortcut_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QShortcut `
    ///
    /// ` callback: *const fn (self: QShortcut, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QShortcut, callback: *const fn (QShortcut, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qshortcut.html#dtor.QShortcut)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QShortcut `
    ///
    pub fn Delete(self: QShortcut) void {
        qtc.QShortcut_Delete(@ptrCast(self.ptr));
    }
};
