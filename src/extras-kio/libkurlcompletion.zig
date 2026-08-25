const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KCompletionMatches = @import("libqt6").KCompletionMatches;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const kcompletion_enums = @import("../extras-kcompletion/libkcompletion.zig").enums;
const kurlcompletion_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kurlcompletion.html)
pub const KUrlCompletion = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KUrlCompletion,

    pub const _is_KUrlCompletion = {};
    pub const _is_KCompletion = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KUrlCompletion object in C++ memory
    ///
    pub fn new() KUrlCompletion {
        return .{ .ptr = qtc.KUrlCompletion_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KUrlCompletion object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: kurlcompletion_enums.Mode `
    ///
    pub fn new2(param1: i32) KUrlCompletion {
        return .{ .ptr = qtc.KUrlCompletion_new2(@bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    pub fn metaObject(self: KUrlCompletion) QMetaObject {
        return .{ .ptr = qtc.KUrlCompletion_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: KUrlCompletion `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: KUrlCompletion, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KUrlCompletion_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KUrlCompletion `
    ///
    pub fn superMetaObject(self: KUrlCompletion) QMetaObject {
        return .{ .ptr = qtc.KUrlCompletion_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KUrlCompletion, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KUrlCompletion_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` callback: *const fn (self: KUrlCompletion, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: KUrlCompletion, callback: *const fn (KUrlCompletion, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KUrlCompletion_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: KUrlCompletion, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KUrlCompletion_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: KUrlCompletion, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KUrlCompletion_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` callback: *const fn (self: KUrlCompletion, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: KUrlCompletion, callback: *const fn (KUrlCompletion, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KUrlCompletion_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: KUrlCompletion, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KUrlCompletion_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KUrlCompletion.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `makeCompletion` instead
    ///
    pub const MakeCompletion = makeCompletion;

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#makeCompletion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` text: []const u8 `
    ///
    pub fn makeCompletion(self: KUrlCompletion, allocator: std.mem.Allocator, text: []const u8) []const u8 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        var _str = qtc.KUrlCompletion_MakeCompletion(@ptrCast(self.ptr), text_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KUrlCompletion.makeCompletion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onMakeCompletion` instead
    ///
    pub const OnMakeCompletion = onMakeCompletion;

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#makeCompletion)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` callback: *const fn (self: KUrlCompletion, text: [*:0]const u8) callconv(.c) [*:0]const u8 `
    ///
    pub fn onMakeCompletion(self: KUrlCompletion, callback: *const fn (KUrlCompletion, [*:0]const u8) callconv(.c) [*:0]const u8) void {
        qtc.KUrlCompletion_OnMakeCompletion(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMakeCompletion` instead
    ///
    pub const SuperMakeCompletion = superMakeCompletion;

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#makeCompletion)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` text: []const u8 `
    ///
    pub fn superMakeCompletion(self: KUrlCompletion, allocator: std.mem.Allocator, text: []const u8) []const u8 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        var _str = qtc.KUrlCompletion_SuperMakeCompletion(@ptrCast(self.ptr), text_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KUrlCompletion.makeCompletion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setDir` instead
    ///
    pub const SetDir = setDir;

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#setDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` _dir: QUrl `
    ///
    pub fn setDir(self: KUrlCompletion, _dir: anytype) void {
        comptime _ = @TypeOf(_dir)._is_QUrl;
        qtc.KUrlCompletion_SetDir(@ptrCast(self.ptr), @ptrCast(_dir.ptr));
    }

    /// ### DEPRECATED: Use `onSetDir` instead
    ///
    pub const OnSetDir = onSetDir;

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#setDir)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` callback: *const fn (self: KUrlCompletion, dir: QUrl) callconv(.c) void `
    ///
    pub fn onSetDir(self: KUrlCompletion, callback: *const fn (KUrlCompletion, QUrl) callconv(.c) void) void {
        qtc.KUrlCompletion_OnSetDir(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetDir` instead
    ///
    pub const SuperSetDir = superSetDir;

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#setDir)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` _dir: QUrl `
    ///
    pub fn superSetDir(self: KUrlCompletion, _dir: anytype) void {
        comptime _ = @TypeOf(_dir)._is_QUrl;
        qtc.KUrlCompletion_SuperSetDir(@ptrCast(self.ptr), @ptrCast(_dir.ptr));
    }

    /// ### DEPRECATED: Use `dir` instead
    ///
    pub const Dir = dir;

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#dir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    pub fn dir(self: KUrlCompletion) QUrl {
        return .{ .ptr = qtc.KUrlCompletion_Dir(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onDir` instead
    ///
    pub const OnDir = onDir;

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#dir)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` callback: *const fn () callconv(.c) QUrl `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onDir(self: KUrlCompletion, callback: *const fn () callconv(.c) QUrl) void {
        qtc.KUrlCompletion_OnDir(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDir` instead
    ///
    pub const SuperDir = superDir;

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#dir)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    pub fn superDir(self: KUrlCompletion) QUrl {
        return .{ .ptr = qtc.KUrlCompletion_SuperDir(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isRunning` instead
    ///
    pub const IsRunning = isRunning;

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#isRunning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    pub fn isRunning(self: KUrlCompletion) bool {
        return qtc.KUrlCompletion_IsRunning(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsRunning` instead
    ///
    pub const OnIsRunning = onIsRunning;

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#isRunning)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onIsRunning(self: KUrlCompletion, callback: *const fn () callconv(.c) bool) void {
        qtc.KUrlCompletion_OnIsRunning(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsRunning` instead
    ///
    pub const SuperIsRunning = superIsRunning;

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#isRunning)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    pub fn superIsRunning(self: KUrlCompletion) bool {
        return qtc.KUrlCompletion_SuperIsRunning(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `stop` instead
    ///
    pub const Stop = stop;

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#stop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    pub fn stop(self: KUrlCompletion) void {
        qtc.KUrlCompletion_Stop(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onStop` instead
    ///
    pub const OnStop = onStop;

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#stop)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onStop(self: KUrlCompletion, callback: *const fn () callconv(.c) void) void {
        qtc.KUrlCompletion_OnStop(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superStop` instead
    ///
    pub const SuperStop = superStop;

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#stop)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    pub fn superStop(self: KUrlCompletion) void {
        qtc.KUrlCompletion_SuperStop(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `mode` instead
    ///
    pub const Mode = mode;

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#mode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ## Returns:
    ///
    /// ` kurlcompletion_enums.Mode `
    ///
    pub fn mode(self: KUrlCompletion) i32 {
        return qtc.KUrlCompletion_Mode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onMode` instead
    ///
    pub const OnMode = onMode;

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#mode)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onMode(self: KUrlCompletion, callback: *const fn () callconv(.c) i32) void {
        qtc.KUrlCompletion_OnMode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMode` instead
    ///
    pub const SuperMode = superMode;

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#mode)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ## Returns:
    ///
    /// ` kurlcompletion_enums.Mode `
    ///
    pub fn superMode(self: KUrlCompletion) i32 {
        return qtc.KUrlCompletion_SuperMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMode` instead
    ///
    pub const SetMode = setMode;

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#setMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` _mode: kurlcompletion_enums.Mode `
    ///
    pub fn setMode(self: KUrlCompletion, _mode: i32) void {
        qtc.KUrlCompletion_SetMode(@ptrCast(self.ptr), @bitCast(_mode));
    }

    /// ### DEPRECATED: Use `onSetMode` instead
    ///
    pub const OnSetMode = onSetMode;

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#setMode)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` callback: *const fn (self: KUrlCompletion, mode: kurlcompletion_enums.Mode) callconv(.c) void `
    ///
    pub fn onSetMode(self: KUrlCompletion, callback: *const fn (KUrlCompletion, i32) callconv(.c) void) void {
        qtc.KUrlCompletion_OnSetMode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetMode` instead
    ///
    pub const SuperSetMode = superSetMode;

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#setMode)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` _mode: kurlcompletion_enums.Mode `
    ///
    pub fn superSetMode(self: KUrlCompletion, _mode: i32) void {
        qtc.KUrlCompletion_SuperSetMode(@ptrCast(self.ptr), @bitCast(_mode));
    }

    /// ### DEPRECATED: Use `replaceEnv` instead
    ///
    pub const ReplaceEnv = replaceEnv;

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#replaceEnv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    pub fn replaceEnv(self: KUrlCompletion) bool {
        return qtc.KUrlCompletion_ReplaceEnv(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onReplaceEnv` instead
    ///
    pub const OnReplaceEnv = onReplaceEnv;

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#replaceEnv)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onReplaceEnv(self: KUrlCompletion, callback: *const fn () callconv(.c) bool) void {
        qtc.KUrlCompletion_OnReplaceEnv(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superReplaceEnv` instead
    ///
    pub const SuperReplaceEnv = superReplaceEnv;

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#replaceEnv)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    pub fn superReplaceEnv(self: KUrlCompletion) bool {
        return qtc.KUrlCompletion_SuperReplaceEnv(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setReplaceEnv` instead
    ///
    pub const SetReplaceEnv = setReplaceEnv;

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#setReplaceEnv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` replace: bool `
    ///
    pub fn setReplaceEnv(self: KUrlCompletion, replace: bool) void {
        qtc.KUrlCompletion_SetReplaceEnv(@ptrCast(self.ptr), replace);
    }

    /// ### DEPRECATED: Use `onSetReplaceEnv` instead
    ///
    pub const OnSetReplaceEnv = onSetReplaceEnv;

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#setReplaceEnv)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` callback: *const fn (self: KUrlCompletion, replace: bool) callconv(.c) void `
    ///
    pub fn onSetReplaceEnv(self: KUrlCompletion, callback: *const fn (KUrlCompletion, bool) callconv(.c) void) void {
        qtc.KUrlCompletion_OnSetReplaceEnv(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetReplaceEnv` instead
    ///
    pub const SuperSetReplaceEnv = superSetReplaceEnv;

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#setReplaceEnv)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` replace: bool `
    ///
    pub fn superSetReplaceEnv(self: KUrlCompletion, replace: bool) void {
        qtc.KUrlCompletion_SuperSetReplaceEnv(@ptrCast(self.ptr), replace);
    }

    /// ### DEPRECATED: Use `replaceHome` instead
    ///
    pub const ReplaceHome = replaceHome;

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#replaceHome)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    pub fn replaceHome(self: KUrlCompletion) bool {
        return qtc.KUrlCompletion_ReplaceHome(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onReplaceHome` instead
    ///
    pub const OnReplaceHome = onReplaceHome;

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#replaceHome)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onReplaceHome(self: KUrlCompletion, callback: *const fn () callconv(.c) bool) void {
        qtc.KUrlCompletion_OnReplaceHome(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superReplaceHome` instead
    ///
    pub const SuperReplaceHome = superReplaceHome;

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#replaceHome)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    pub fn superReplaceHome(self: KUrlCompletion) bool {
        return qtc.KUrlCompletion_SuperReplaceHome(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setReplaceHome` instead
    ///
    pub const SetReplaceHome = setReplaceHome;

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#setReplaceHome)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` replace: bool `
    ///
    pub fn setReplaceHome(self: KUrlCompletion, replace: bool) void {
        qtc.KUrlCompletion_SetReplaceHome(@ptrCast(self.ptr), replace);
    }

    /// ### DEPRECATED: Use `onSetReplaceHome` instead
    ///
    pub const OnSetReplaceHome = onSetReplaceHome;

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#setReplaceHome)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` callback: *const fn (self: KUrlCompletion, replace: bool) callconv(.c) void `
    ///
    pub fn onSetReplaceHome(self: KUrlCompletion, callback: *const fn (KUrlCompletion, bool) callconv(.c) void) void {
        qtc.KUrlCompletion_OnSetReplaceHome(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetReplaceHome` instead
    ///
    pub const SuperSetReplaceHome = superSetReplaceHome;

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#setReplaceHome)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` replace: bool `
    ///
    pub fn superSetReplaceHome(self: KUrlCompletion, replace: bool) void {
        qtc.KUrlCompletion_SuperSetReplaceHome(@ptrCast(self.ptr), replace);
    }

    /// ### DEPRECATED: Use `replacedPath` instead
    ///
    pub const ReplacedPath = replacedPath;

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#replacedPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` text: []const u8 `
    ///
    pub fn replacedPath(self: KUrlCompletion, allocator: std.mem.Allocator, text: []const u8) []const u8 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        var _str = qtc.KUrlCompletion_ReplacedPath(@ptrCast(self.ptr), text_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KUrlCompletion.replacedPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `replacedPath2` instead
    ///
    pub const ReplacedPath2 = replacedPath2;

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#replacedPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` text: []const u8 `
    ///
    /// ` _replaceHome: bool `
    ///
    pub fn replacedPath2(allocator: std.mem.Allocator, text: []const u8, _replaceHome: bool) []const u8 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        var _str = qtc.KUrlCompletion_ReplacedPath2(text_str, _replaceHome);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KUrlCompletion.replacedPath2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setMimeTypeFilters` instead
    ///
    pub const SetMimeTypeFilters = setMimeTypeFilters;

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#setMimeTypeFilters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` mimeTypes: []const []const u8 `
    ///
    pub fn setMimeTypeFilters(self: KUrlCompletion, allocator: std.mem.Allocator, mimeTypes: []const []const u8) void {
        const mimeTypes_arr = allocator.alloc(qtc.libqt_string, mimeTypes.len) catch @panic("KUrlCompletion.setMimeTypeFilters: Memory allocation failed");
        defer allocator.free(mimeTypes_arr);
        for (mimeTypes, 0..mimeTypes.len) |str_item, i|
            mimeTypes_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const mimeTypes_list = qtc.libqt_list{
            .len = mimeTypes.len,
            .data = mimeTypes_arr.ptr,
        };
        qtc.KUrlCompletion_SetMimeTypeFilters(@ptrCast(self.ptr), mimeTypes_list);
    }

    /// ### DEPRECATED: Use `mimeTypeFilters` instead
    ///
    pub const MimeTypeFilters = mimeTypeFilters;

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#mimeTypeFilters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn mimeTypeFilters(self: KUrlCompletion, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KUrlCompletion_MimeTypeFilters(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KUrlCompletion.mimeTypeFilters: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KUrlCompletion.mimeTypeFilters: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `postProcessMatches` instead
    ///
    pub const PostProcessMatches = postProcessMatches;

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#postProcessMatches)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _matches: []const []const u8 `
    ///
    pub fn postProcessMatches(self: KUrlCompletion, allocator: std.mem.Allocator, _matches: []const []const u8) void {
        const matches_arr = allocator.alloc(qtc.libqt_string, _matches.len) catch @panic("KUrlCompletion.postProcessMatches: Memory allocation failed");
        defer allocator.free(matches_arr);
        for (_matches, 0.._matches.len) |str_item, i|
            matches_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const matches_list = qtc.libqt_list{
            .len = _matches.len,
            .data = matches_arr.ptr,
        };
        qtc.KUrlCompletion_PostProcessMatches(@ptrCast(self.ptr), matches_list);
    }

    /// ### DEPRECATED: Use `onPostProcessMatches` instead
    ///
    pub const OnPostProcessMatches = onPostProcessMatches;

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#postProcessMatches)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` callback: *const fn (self: KUrlCompletion, matches: ?[*:null]?[*:0]const u8) callconv(.c) void `
    ///
    pub fn onPostProcessMatches(self: KUrlCompletion, callback: *const fn (KUrlCompletion, ?[*:null]?[*:0]const u8) callconv(.c) void) void {
        qtc.KUrlCompletion_OnPostProcessMatches(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPostProcessMatches` instead
    ///
    pub const SuperPostProcessMatches = superPostProcessMatches;

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#postProcessMatches)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _matches: []const []const u8 `
    ///
    pub fn superPostProcessMatches(self: KUrlCompletion, allocator: std.mem.Allocator, _matches: []const []const u8) void {
        const matches_arr = allocator.alloc(qtc.libqt_string, _matches.len) catch @panic("KUrlCompletion.postProcessMatches: Memory allocation failed");
        defer allocator.free(matches_arr);
        for (_matches, 0.._matches.len) |str_item, i|
            matches_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const matches_list = qtc.libqt_list{
            .len = _matches.len,
            .data = matches_arr.ptr,
        };
        qtc.KUrlCompletion_SuperPostProcessMatches(@ptrCast(self.ptr), matches_list);
    }

    /// ### DEPRECATED: Use `postProcessMatches2` instead
    ///
    pub const PostProcessMatches2 = postProcessMatches2;

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#postProcessMatches)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` _matches: KCompletionMatches `
    ///
    pub fn postProcessMatches2(self: KUrlCompletion, _matches: anytype) void {
        comptime _ = @TypeOf(_matches)._is_KCompletionMatches;
        qtc.KUrlCompletion_PostProcessMatches2(@ptrCast(self.ptr), @ptrCast(_matches.ptr));
    }

    /// ### DEPRECATED: Use `onPostProcessMatches2` instead
    ///
    pub const OnPostProcessMatches2 = onPostProcessMatches2;

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#postProcessMatches)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` callback: *const fn (self: KUrlCompletion, matches: KCompletionMatches) callconv(.c) void `
    ///
    pub fn onPostProcessMatches2(self: KUrlCompletion, callback: *const fn (KUrlCompletion, KCompletionMatches) callconv(.c) void) void {
        qtc.KUrlCompletion_OnPostProcessMatches2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPostProcessMatches2` instead
    ///
    pub const SuperPostProcessMatches2 = superPostProcessMatches2;

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#postProcessMatches)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` _matches: KCompletionMatches `
    ///
    pub fn superPostProcessMatches2(self: KUrlCompletion, _matches: anytype) void {
        comptime _ = @TypeOf(_matches)._is_KCompletionMatches;
        qtc.KUrlCompletion_SuperPostProcessMatches2(@ptrCast(self.ptr), @ptrCast(_matches.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KUrlCompletion.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KUrlCompletion.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `replacedPath3` instead
    ///
    pub const ReplacedPath3 = replacedPath3;

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#replacedPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` text: []const u8 `
    ///
    /// ` _replaceHome: bool `
    ///
    /// ` _replaceEnv: bool `
    ///
    pub fn replacedPath3(allocator: std.mem.Allocator, text: []const u8, _replaceHome: bool, _replaceEnv: bool) []const u8 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        var _str = qtc.KUrlCompletion_ReplacedPath3(text_str, _replaceHome, _replaceEnv);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KUrlCompletion.replacedPath3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `substringCompletion` instead
    ///
    pub const SubstringCompletion = substringCompletion;

    /// Inherited from KCompletion
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#substringCompletion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` string: []const u8 `
    ///
    pub fn substringCompletion(self: KUrlCompletion, allocator: std.mem.Allocator, string: []const u8) []const []const u8 {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KCompletion_SubstringCompletion(@ptrCast(self.ptr), string_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KUrlCompletion.substringCompletion: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KUrlCompletion.substringCompletion: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `items` instead
    ///
    pub const Items = items;

    /// Inherited from KCompletion
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn items(self: KUrlCompletion, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KCompletion_Items(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KUrlCompletion.items: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KUrlCompletion.items: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// Inherited from KCompletion
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    pub fn isEmpty(self: KUrlCompletion) bool {
        return qtc.KCompletion_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `completionMode` instead
    ///
    pub const CompletionMode = completionMode;

    /// Inherited from KCompletion
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#completionMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ## Returns:
    ///
    /// ` kcompletion_enums.CompletionMode `
    ///
    pub fn completionMode(self: KUrlCompletion) i32 {
        return qtc.KCompletion_CompletionMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `order` instead
    ///
    pub const Order = order;

    /// Inherited from KCompletion
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#order)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ## Returns:
    ///
    /// ` kcompletion_enums.CompOrder `
    ///
    pub fn order(self: KUrlCompletion) i32 {
        return qtc.KCompletion_Order(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ignoreCase` instead
    ///
    pub const IgnoreCase = ignoreCase;

    /// Inherited from KCompletion
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#ignoreCase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    pub fn ignoreCase(self: KUrlCompletion) bool {
        return qtc.KCompletion_IgnoreCase(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `shouldAutoSuggest` instead
    ///
    pub const ShouldAutoSuggest = shouldAutoSuggest;

    /// Inherited from KCompletion
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#shouldAutoSuggest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    pub fn shouldAutoSuggest(self: KUrlCompletion) bool {
        return qtc.KCompletion_ShouldAutoSuggest(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `allMatches` instead
    ///
    pub const AllMatches = allMatches;

    /// Inherited from KCompletion
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#allMatches)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn allMatches(self: KUrlCompletion, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KCompletion_AllMatches(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KUrlCompletion.allMatches: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KUrlCompletion.allMatches: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `allMatches2` instead
    ///
    pub const AllMatches2 = allMatches2;

    /// Inherited from KCompletion
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#allMatches)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` string: []const u8 `
    ///
    pub fn allMatches2(self: KUrlCompletion, allocator: std.mem.Allocator, string: []const u8) []const []const u8 {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KCompletion_AllMatches2(@ptrCast(self.ptr), string_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KUrlCompletion.allMatches2: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KUrlCompletion.allMatches2: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `allWeightedMatches` instead
    ///
    pub const AllWeightedMatches = allWeightedMatches;

    /// Inherited from KCompletion
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#allWeightedMatches)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    pub fn allWeightedMatches(self: KUrlCompletion) KCompletionMatches {
        return .{ .ptr = qtc.KCompletion_AllWeightedMatches(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `allWeightedMatches2` instead
    ///
    pub const AllWeightedMatches2 = allWeightedMatches2;

    /// Inherited from KCompletion
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#allWeightedMatches)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` string: []const u8 `
    ///
    pub fn allWeightedMatches2(self: KUrlCompletion, string: []const u8) KCompletionMatches {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        return .{ .ptr = qtc.KCompletion_AllWeightedMatches2(@ptrCast(self.ptr), string_str) };
    }

    /// ### DEPRECATED: Use `soundsEnabled` instead
    ///
    pub const SoundsEnabled = soundsEnabled;

    /// Inherited from KCompletion
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#soundsEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    pub fn soundsEnabled(self: KUrlCompletion) bool {
        return qtc.KCompletion_SoundsEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasMultipleMatches` instead
    ///
    pub const HasMultipleMatches = hasMultipleMatches;

    /// Inherited from KCompletion
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#hasMultipleMatches)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    pub fn hasMultipleMatches(self: KUrlCompletion) bool {
        return qtc.KCompletion_HasMultipleMatches(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `previousMatch` instead
    ///
    pub const PreviousMatch = previousMatch;

    /// Inherited from KCompletion
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#previousMatch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn previousMatch(self: KUrlCompletion, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KCompletion_PreviousMatch(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KUrlCompletion.previousMatch: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `nextMatch` instead
    ///
    pub const NextMatch = nextMatch;

    /// Inherited from KCompletion
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#nextMatch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn nextMatch(self: KUrlCompletion, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KCompletion_NextMatch(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KUrlCompletion.nextMatch: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `insertItems` instead
    ///
    pub const InsertItems = insertItems;

    /// Inherited from KCompletion
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#insertItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _items: []const []const u8 `
    ///
    pub fn insertItems(self: KUrlCompletion, allocator: std.mem.Allocator, _items: []const []const u8) void {
        const items_arr = allocator.alloc(qtc.libqt_string, _items.len) catch @panic("KUrlCompletion.insertItems: Memory allocation failed");
        defer allocator.free(items_arr);
        for (_items, 0.._items.len) |str_item, i|
            items_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const items_list = qtc.libqt_list{
            .len = _items.len,
            .data = items_arr.ptr,
        };
        qtc.KCompletion_InsertItems(@ptrCast(self.ptr), items_list);
    }

    /// ### DEPRECATED: Use `addItem` instead
    ///
    pub const AddItem = addItem;

    /// Inherited from KCompletion
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#addItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` item: []const u8 `
    ///
    pub fn addItem(self: KUrlCompletion, item: []const u8) void {
        const item_str = qtc.libqt_string{
            .len = item.len,
            .data = item.ptr,
        };
        qtc.KCompletion_AddItem(@ptrCast(self.ptr), item_str);
    }

    /// ### DEPRECATED: Use `addItem2` instead
    ///
    pub const AddItem2 = addItem2;

    /// Inherited from KCompletion
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#addItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` item: []const u8 `
    ///
    /// ` weight: u32 `
    ///
    pub fn addItem2(self: KUrlCompletion, item: []const u8, weight: u32) void {
        const item_str = qtc.libqt_string{
            .len = item.len,
            .data = item.ptr,
        };
        qtc.KCompletion_AddItem2(@ptrCast(self.ptr), item_str, @bitCast(weight));
    }

    /// ### DEPRECATED: Use `removeItem` instead
    ///
    pub const RemoveItem = removeItem;

    /// Inherited from KCompletion
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#removeItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` item: []const u8 `
    ///
    pub fn removeItem(self: KUrlCompletion, item: []const u8) void {
        const item_str = qtc.libqt_string{
            .len = item.len,
            .data = item.ptr,
        };
        qtc.KCompletion_RemoveItem(@ptrCast(self.ptr), item_str);
    }

    /// ### DEPRECATED: Use `match` instead
    ///
    pub const Match = match;

    /// Inherited from KCompletion
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#match)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` item: []const u8 `
    ///
    pub fn match(self: KUrlCompletion, item: []const u8) void {
        const item_str = qtc.libqt_string{
            .len = item.len,
            .data = item.ptr,
        };
        qtc.KCompletion_Match(@ptrCast(self.ptr), item_str);
    }

    /// ### DEPRECATED: Use `onMatch` instead
    ///
    pub const OnMatch = onMatch;

    /// Inherited from KCompletion
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#match)
    ///
    /// ## Parameters:
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` callback: *const fn (self: KUrlCompletion, item: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onMatch(self: KUrlCompletion, callback: *const fn (KUrlCompletion, [*:0]const u8) callconv(.c) void) void {
        qtc.KCompletion_Connect_Match(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `matches` instead
    ///
    pub const Matches = matches;

    /// Inherited from KCompletion
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#matches)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` matchlist: []const []const u8 `
    ///
    pub fn matches(self: KUrlCompletion, allocator: std.mem.Allocator, matchlist: []const []const u8) void {
        const matchlist_arr = allocator.alloc(qtc.libqt_string, matchlist.len) catch @panic("KUrlCompletion.matches: Memory allocation failed");
        defer allocator.free(matchlist_arr);
        for (matchlist, 0..matchlist.len) |str_item, i|
            matchlist_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const matchlist_list = qtc.libqt_list{
            .len = matchlist.len,
            .data = matchlist_arr.ptr,
        };
        qtc.KCompletion_Matches(@ptrCast(self.ptr), matchlist_list);
    }

    /// ### DEPRECATED: Use `onMatches` instead
    ///
    pub const OnMatches = onMatches;

    /// Inherited from KCompletion
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#matches)
    ///
    /// ## Parameters:
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` callback: *const fn (self: KUrlCompletion, matchlist: ?[*:null]?[*:0]const u8) callconv(.c) void `
    ///
    pub fn onMatches(self: KUrlCompletion, callback: *const fn (KUrlCompletion, ?[*:null]?[*:0]const u8) callconv(.c) void) void {
        qtc.KCompletion_Connect_Matches(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `multipleMatches` instead
    ///
    pub const MultipleMatches = multipleMatches;

    /// Inherited from KCompletion
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#multipleMatches)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    pub fn multipleMatches(self: KUrlCompletion) void {
        qtc.KCompletion_MultipleMatches(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onMultipleMatches` instead
    ///
    pub const OnMultipleMatches = onMultipleMatches;

    /// Inherited from KCompletion
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#multipleMatches)
    ///
    /// ## Parameters:
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` callback: *const fn (self: KUrlCompletion) callconv(.c) void `
    ///
    pub fn onMultipleMatches(self: KUrlCompletion, callback: *const fn (KUrlCompletion) callconv(.c) void) void {
        qtc.KCompletion_Connect_MultipleMatches(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KUrlCompletion `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KUrlCompletion, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KUrlCompletion.objectName: Memory allocation failed");
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
    /// ` self: KUrlCompletion `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: KUrlCompletion, name: []const u8) void {
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
    /// ` self: KUrlCompletion `
    ///
    pub fn isWidgetType(self: KUrlCompletion) bool {
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
    /// ` self: KUrlCompletion `
    ///
    pub fn isWindowType(self: KUrlCompletion) bool {
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
    /// ` self: KUrlCompletion `
    ///
    pub fn isQuickItemType(self: KUrlCompletion) bool {
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
    /// ` self: KUrlCompletion `
    ///
    pub fn signalsBlocked(self: KUrlCompletion) bool {
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
    /// ` self: KUrlCompletion `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KUrlCompletion, b: bool) bool {
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
    /// ` self: KUrlCompletion `
    ///
    pub fn thread(self: KUrlCompletion) QThread {
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
    /// ` self: KUrlCompletion `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KUrlCompletion, _thread: anytype) bool {
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
    /// ` self: KUrlCompletion `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KUrlCompletion, interval: i32) i32 {
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
    /// ` self: KUrlCompletion `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KUrlCompletion, time: i64) i32 {
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
    /// ` self: KUrlCompletion `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KUrlCompletion, id: i32) void {
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
    /// ` self: KUrlCompletion `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KUrlCompletion, id: i32) void {
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
    /// ` self: KUrlCompletion `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KUrlCompletion, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KUrlCompletion.children: Memory allocation failed");
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
    /// ` self: KUrlCompletion `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KUrlCompletion, _parent: anytype) void {
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
    /// ` self: KUrlCompletion `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KUrlCompletion, filterObj: anytype) void {
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
    /// ` self: KUrlCompletion `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KUrlCompletion, obj: anytype) void {
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
    /// ` self: KUrlCompletion `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KUrlCompletion, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KUrlCompletion `
    ///
    pub fn disconnect3(self: KUrlCompletion) bool {
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
    /// ` self: KUrlCompletion `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KUrlCompletion, receiver: anytype) bool {
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
    /// ` self: KUrlCompletion `
    ///
    pub fn dumpObjectTree(self: KUrlCompletion) void {
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
    /// ` self: KUrlCompletion `
    ///
    pub fn dumpObjectInfo(self: KUrlCompletion) void {
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
    /// ` self: KUrlCompletion `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KUrlCompletion, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KUrlCompletion `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: KUrlCompletion, name: [:0]const u8) QVariant {
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
    /// ` self: KUrlCompletion `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KUrlCompletion, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KUrlCompletion.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KUrlCompletion.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KUrlCompletion `
    ///
    pub fn bindingStorage(self: KUrlCompletion) QBindingStorage {
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
    /// ` self: KUrlCompletion `
    ///
    pub fn bindingStorage2(self: KUrlCompletion) QBindingStorage {
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
    /// ` self: KUrlCompletion `
    ///
    pub fn destroyed(self: KUrlCompletion) void {
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
    /// ` self: KUrlCompletion `
    ///
    /// ` callback: *const fn (self: KUrlCompletion) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KUrlCompletion, callback: *const fn (KUrlCompletion) callconv(.c) void) void {
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
    /// ` self: KUrlCompletion `
    ///
    pub fn parent(self: KUrlCompletion) QObject {
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
    /// ` self: KUrlCompletion `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KUrlCompletion, classname: [:0]const u8) bool {
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
    /// ` self: KUrlCompletion `
    ///
    pub fn deleteLater(self: KUrlCompletion) void {
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
    /// ` self: KUrlCompletion `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KUrlCompletion, interval: i32, timerType: i32) i32 {
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
    /// ` self: KUrlCompletion `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KUrlCompletion, time: i64, timerType: i32) i32 {
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
    /// ` self: KUrlCompletion `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KUrlCompletion, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KUrlCompletion `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KUrlCompletion, signal: [:0]const u8) bool {
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
    /// ` self: KUrlCompletion `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KUrlCompletion, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KUrlCompletion `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KUrlCompletion, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KUrlCompletion `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KUrlCompletion, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KUrlCompletion `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KUrlCompletion, param1: anytype) void {
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
    /// ` self: KUrlCompletion `
    ///
    /// ` callback: *const fn (self: KUrlCompletion, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KUrlCompletion, callback: *const fn (KUrlCompletion, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `lastMatch` instead
    ///
    pub const LastMatch = lastMatch;

    /// Inherited from KCompletion
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#lastMatch)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn lastMatch(self: KUrlCompletion, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUrlCompletion_LastMatch(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KUrlCompletion.lastMatch: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `superLastMatch` instead
    ///
    pub const SuperLastMatch = superLastMatch;

    /// Inherited from KCompletion
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#lastMatch)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superLastMatch(self: KUrlCompletion, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUrlCompletion_SuperLastMatch(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KUrlCompletion.lastMatch: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onLastMatch` instead
    ///
    pub const OnLastMatch = onLastMatch;

    /// Inherited from KCompletion
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#lastMatch)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KUrlCompletion`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onLastMatch(self: KUrlCompletion, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KUrlCompletion_OnLastMatch(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setCompletionMode` instead
    ///
    pub const SetCompletionMode = setCompletionMode;

    /// Inherited from KCompletion
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#setCompletionMode)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` _mode: kcompletion_enums.CompletionMode `
    ///
    pub fn setCompletionMode(self: KUrlCompletion, _mode: i32) void {
        qtc.KUrlCompletion_SetCompletionMode(@ptrCast(self.ptr), @bitCast(_mode));
    }

    /// ### DEPRECATED: Use `superSetCompletionMode` instead
    ///
    pub const SuperSetCompletionMode = superSetCompletionMode;

    /// Inherited from KCompletion
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#setCompletionMode)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` _mode: kcompletion_enums.CompletionMode `
    ///
    pub fn superSetCompletionMode(self: KUrlCompletion, _mode: i32) void {
        qtc.KUrlCompletion_SuperSetCompletionMode(@ptrCast(self.ptr), @bitCast(_mode));
    }

    /// ### DEPRECATED: Use `onSetCompletionMode` instead
    ///
    pub const OnSetCompletionMode = onSetCompletionMode;

    /// Inherited from KCompletion
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#setCompletionMode)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KUrlCompletion`
    ///
    /// ` callback: *const fn (self: KUrlCompletion, mode: kcompletion_enums.CompletionMode) callconv(.c) void `
    ///
    pub fn onSetCompletionMode(self: KUrlCompletion, callback: *const fn (KUrlCompletion, i32) callconv(.c) void) void {
        qtc.KUrlCompletion_OnSetCompletionMode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setOrder` instead
    ///
    pub const SetOrder = setOrder;

    /// Inherited from KCompletion
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#setOrder)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` _order: kcompletion_enums.CompOrder `
    ///
    pub fn setOrder(self: KUrlCompletion, _order: i32) void {
        qtc.KUrlCompletion_SetOrder(@ptrCast(self.ptr), @bitCast(_order));
    }

    /// ### DEPRECATED: Use `superSetOrder` instead
    ///
    pub const SuperSetOrder = superSetOrder;

    /// Inherited from KCompletion
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#setOrder)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` _order: kcompletion_enums.CompOrder `
    ///
    pub fn superSetOrder(self: KUrlCompletion, _order: i32) void {
        qtc.KUrlCompletion_SuperSetOrder(@ptrCast(self.ptr), @bitCast(_order));
    }

    /// ### DEPRECATED: Use `onSetOrder` instead
    ///
    pub const OnSetOrder = onSetOrder;

    /// Inherited from KCompletion
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#setOrder)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KUrlCompletion`
    ///
    /// ` callback: *const fn (self: KUrlCompletion, order: kcompletion_enums.CompOrder) callconv(.c) void `
    ///
    pub fn onSetOrder(self: KUrlCompletion, callback: *const fn (KUrlCompletion, i32) callconv(.c) void) void {
        qtc.KUrlCompletion_OnSetOrder(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setIgnoreCase` instead
    ///
    pub const SetIgnoreCase = setIgnoreCase;

    /// Inherited from KCompletion
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#setIgnoreCase)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` _ignoreCase: bool `
    ///
    pub fn setIgnoreCase(self: KUrlCompletion, _ignoreCase: bool) void {
        qtc.KUrlCompletion_SetIgnoreCase(@ptrCast(self.ptr), _ignoreCase);
    }

    /// ### DEPRECATED: Use `superSetIgnoreCase` instead
    ///
    pub const SuperSetIgnoreCase = superSetIgnoreCase;

    /// Inherited from KCompletion
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#setIgnoreCase)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` _ignoreCase: bool `
    ///
    pub fn superSetIgnoreCase(self: KUrlCompletion, _ignoreCase: bool) void {
        qtc.KUrlCompletion_SuperSetIgnoreCase(@ptrCast(self.ptr), _ignoreCase);
    }

    /// ### DEPRECATED: Use `onSetIgnoreCase` instead
    ///
    pub const OnSetIgnoreCase = onSetIgnoreCase;

    /// Inherited from KCompletion
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#setIgnoreCase)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KUrlCompletion`
    ///
    /// ` callback: *const fn (self: KUrlCompletion, ignoreCase: bool) callconv(.c) void `
    ///
    pub fn onSetIgnoreCase(self: KUrlCompletion, callback: *const fn (KUrlCompletion, bool) callconv(.c) void) void {
        qtc.KUrlCompletion_OnSetIgnoreCase(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setSoundsEnabled` instead
    ///
    pub const SetSoundsEnabled = setSoundsEnabled;

    /// Inherited from KCompletion
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#setSoundsEnabled)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` enable: bool `
    ///
    pub fn setSoundsEnabled(self: KUrlCompletion, enable: bool) void {
        qtc.KUrlCompletion_SetSoundsEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `superSetSoundsEnabled` instead
    ///
    pub const SuperSetSoundsEnabled = superSetSoundsEnabled;

    /// Inherited from KCompletion
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#setSoundsEnabled)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` enable: bool `
    ///
    pub fn superSetSoundsEnabled(self: KUrlCompletion, enable: bool) void {
        qtc.KUrlCompletion_SuperSetSoundsEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `onSetSoundsEnabled` instead
    ///
    pub const OnSetSoundsEnabled = onSetSoundsEnabled;

    /// Inherited from KCompletion
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#setSoundsEnabled)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KUrlCompletion`
    ///
    /// ` callback: *const fn (self: KUrlCompletion, enable: bool) callconv(.c) void `
    ///
    pub fn onSetSoundsEnabled(self: KUrlCompletion, callback: *const fn (KUrlCompletion, bool) callconv(.c) void) void {
        qtc.KUrlCompletion_OnSetSoundsEnabled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setItems` instead
    ///
    pub const SetItems = setItems;

    /// Inherited from KCompletion
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#setItems)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` itemList: []const []const u8 `
    ///
    pub fn setItems(self: KUrlCompletion, allocator: std.mem.Allocator, itemList: []const []const u8) void {
        const itemList_arr = allocator.alloc(qtc.libqt_string, itemList.len) catch @panic("KUrlCompletion.setItems: Memory allocation failed");
        defer allocator.free(itemList_arr);
        for (itemList, 0..itemList.len) |str_item, i|
            itemList_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const itemList_list = qtc.libqt_list{
            .len = itemList.len,
            .data = itemList_arr.ptr,
        };
        qtc.KUrlCompletion_SetItems(@ptrCast(self.ptr), itemList_list);
    }

    /// ### DEPRECATED: Use `superSetItems` instead
    ///
    pub const SuperSetItems = superSetItems;

    /// Inherited from KCompletion
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#setItems)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` itemList: []const []const u8 `
    ///
    pub fn superSetItems(self: KUrlCompletion, allocator: std.mem.Allocator, itemList: []const []const u8) void {
        const itemList_arr = allocator.alloc(qtc.libqt_string, itemList.len) catch @panic("KUrlCompletion.setItems: Memory allocation failed");
        defer allocator.free(itemList_arr);
        for (itemList, 0..itemList.len) |str_item, i|
            itemList_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const itemList_list = qtc.libqt_list{
            .len = itemList.len,
            .data = itemList_arr.ptr,
        };
        qtc.KUrlCompletion_SuperSetItems(@ptrCast(self.ptr), itemList_list);
    }

    /// ### DEPRECATED: Use `onSetItems` instead
    ///
    pub const OnSetItems = onSetItems;

    /// Inherited from KCompletion
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#setItems)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KUrlCompletion`
    ///
    /// ` callback: *const fn (self: KUrlCompletion, itemList: ?[*:null]?[*:0]const u8) callconv(.c) void `
    ///
    pub fn onSetItems(self: KUrlCompletion, callback: *const fn (KUrlCompletion, ?[*:null]?[*:0]const u8) callconv(.c) void) void {
        qtc.KUrlCompletion_OnSetItems(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// Inherited from KCompletion
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#clear)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    pub fn clear(self: KUrlCompletion) void {
        qtc.KUrlCompletion_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superClear` instead
    ///
    pub const SuperClear = superClear;

    /// Inherited from KCompletion
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#clear)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    pub fn superClear(self: KUrlCompletion) void {
        qtc.KUrlCompletion_SuperClear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onClear` instead
    ///
    pub const OnClear = onClear;

    /// Inherited from KCompletion
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#clear)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KUrlCompletion`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onClear(self: KUrlCompletion, callback: *const fn () callconv(.c) void) void {
        qtc.KUrlCompletion_OnClear(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KUrlCompletion `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: KUrlCompletion, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KUrlCompletion_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KUrlCompletion `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: KUrlCompletion, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KUrlCompletion_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KUrlCompletion`
    ///
    /// ` callback: *const fn (self: KUrlCompletion, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: KUrlCompletion, callback: *const fn (KUrlCompletion, QEvent) callconv(.c) bool) void {
        qtc.KUrlCompletion_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KUrlCompletion `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KUrlCompletion, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KUrlCompletion_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KUrlCompletion `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: KUrlCompletion, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KUrlCompletion_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KUrlCompletion`
    ///
    /// ` callback: *const fn (self: KUrlCompletion, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: KUrlCompletion, callback: *const fn (KUrlCompletion, QObject, QEvent) callconv(.c) bool) void {
        qtc.KUrlCompletion_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KUrlCompletion `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: KUrlCompletion, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KUrlCompletion_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KUrlCompletion `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: KUrlCompletion, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KUrlCompletion_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KUrlCompletion`
    ///
    /// ` callback: *const fn (self: KUrlCompletion, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: KUrlCompletion, callback: *const fn (KUrlCompletion, QTimerEvent) callconv(.c) void) void {
        qtc.KUrlCompletion_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KUrlCompletion `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: KUrlCompletion, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KUrlCompletion_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KUrlCompletion `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: KUrlCompletion, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KUrlCompletion_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KUrlCompletion`
    ///
    /// ` callback: *const fn (self: KUrlCompletion, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: KUrlCompletion, callback: *const fn (KUrlCompletion, QChildEvent) callconv(.c) void) void {
        qtc.KUrlCompletion_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KUrlCompletion `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: KUrlCompletion, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KUrlCompletion_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KUrlCompletion `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: KUrlCompletion, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KUrlCompletion_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KUrlCompletion`
    ///
    /// ` callback: *const fn (self: KUrlCompletion, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: KUrlCompletion, callback: *const fn (KUrlCompletion, QEvent) callconv(.c) void) void {
        qtc.KUrlCompletion_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KUrlCompletion `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: KUrlCompletion, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KUrlCompletion_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KUrlCompletion `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: KUrlCompletion, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KUrlCompletion_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KUrlCompletion`
    ///
    /// ` callback: *const fn (self: KUrlCompletion, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: KUrlCompletion, callback: *const fn (KUrlCompletion, QMetaMethod) callconv(.c) void) void {
        qtc.KUrlCompletion_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KUrlCompletion `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: KUrlCompletion, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KUrlCompletion_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KUrlCompletion `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: KUrlCompletion, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KUrlCompletion_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KUrlCompletion`
    ///
    /// ` callback: *const fn (self: KUrlCompletion, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: KUrlCompletion, callback: *const fn (KUrlCompletion, QMetaMethod) callconv(.c) void) void {
        qtc.KUrlCompletion_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setShouldAutoSuggest` instead
    ///
    pub const SetShouldAutoSuggest = setShouldAutoSuggest;

    /// Inherited from KCompletion
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#setShouldAutoSuggest)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` shouldAutosuggest: bool `
    ///
    pub fn setShouldAutoSuggest(self: KUrlCompletion, shouldAutosuggest: bool) void {
        qtc.KUrlCompletion_SetShouldAutoSuggest(@ptrCast(self.ptr), shouldAutosuggest);
    }

    /// ### DEPRECATED: Use `superSetShouldAutoSuggest` instead
    ///
    pub const SuperSetShouldAutoSuggest = superSetShouldAutoSuggest;

    /// Inherited from KCompletion
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#setShouldAutoSuggest)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` shouldAutosuggest: bool `
    ///
    pub fn superSetShouldAutoSuggest(self: KUrlCompletion, shouldAutosuggest: bool) void {
        qtc.KUrlCompletion_SuperSetShouldAutoSuggest(@ptrCast(self.ptr), shouldAutosuggest);
    }

    /// ### DEPRECATED: Use `onSetShouldAutoSuggest` instead
    ///
    pub const OnSetShouldAutoSuggest = onSetShouldAutoSuggest;

    /// Inherited from KCompletion
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#setShouldAutoSuggest)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KUrlCompletion`
    ///
    /// ` callback: *const fn (self: KUrlCompletion, shouldAutosuggest: bool) callconv(.c) void `
    ///
    pub fn onSetShouldAutoSuggest(self: KUrlCompletion, callback: *const fn (KUrlCompletion, bool) callconv(.c) void) void {
        qtc.KUrlCompletion_OnSetShouldAutoSuggest(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KUrlCompletion `
    ///
    pub fn sender(self: KUrlCompletion) QObject {
        return .{ .ptr = qtc.KUrlCompletion_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KUrlCompletion `
    ///
    pub fn superSender(self: KUrlCompletion) QObject {
        return .{ .ptr = qtc.KUrlCompletion_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: KUrlCompletion`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: KUrlCompletion, callback: *const fn () callconv(.c) QObject) void {
        qtc.KUrlCompletion_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KUrlCompletion `
    ///
    pub fn senderSignalIndex(self: KUrlCompletion) i32 {
        return qtc.KUrlCompletion_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KUrlCompletion `
    ///
    pub fn superSenderSignalIndex(self: KUrlCompletion) i32 {
        return qtc.KUrlCompletion_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KUrlCompletion`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: KUrlCompletion, callback: *const fn () callconv(.c) i32) void {
        qtc.KUrlCompletion_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KUrlCompletion `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: KUrlCompletion, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KUrlCompletion_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KUrlCompletion `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: KUrlCompletion, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KUrlCompletion_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KUrlCompletion`
    ///
    /// ` callback: *const fn (self: KUrlCompletion, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: KUrlCompletion, callback: *const fn (KUrlCompletion, [*:0]const u8) callconv(.c) i32) void {
        qtc.KUrlCompletion_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KUrlCompletion `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: KUrlCompletion, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KUrlCompletion_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KUrlCompletion `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: KUrlCompletion, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KUrlCompletion_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KUrlCompletion`
    ///
    /// ` callback: *const fn (self: KUrlCompletion, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: KUrlCompletion, callback: *const fn (KUrlCompletion, QMetaMethod) callconv(.c) bool) void {
        qtc.KUrlCompletion_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KUrlCompletion `
    ///
    /// ` callback: *const fn (self: KUrlCompletion, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KUrlCompletion, callback: *const fn (KUrlCompletion, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#dtor.KUrlCompletion)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KUrlCompletion `
    ///
    pub fn delete(self: KUrlCompletion) void {
        qtc.KUrlCompletion_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#public-types)
pub const enums = struct {
    pub const Mode = enum {
        pub const ExeCompletion: i32 = 1;
        pub const FileCompletion: i32 = 2;
        pub const DirCompletion: i32 = 3;
    };
};
