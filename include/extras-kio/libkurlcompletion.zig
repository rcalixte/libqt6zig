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

    /// New constructs a new KUrlCompletion object.
    ///
    pub fn New() KUrlCompletion {
        return .{ .ptr = qtc.KUrlCompletion_new() };
    }

    /// New2 constructs a new KUrlCompletion object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: kurlcompletion_enums.Mode `
    ///
    pub fn New2(param1: i32) KUrlCompletion {
        return .{ .ptr = qtc.KUrlCompletion_new2(@bitCast(param1)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    pub fn MetaObject(self: KUrlCompletion) QMetaObject {
        return .{ .ptr = qtc.KUrlCompletion_MetaObject(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMetaObject(self: KUrlCompletion, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KUrlCompletion_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KUrlCompletion `
    ///
    pub fn SuperMetaObject(self: KUrlCompletion) QMetaObject {
        return .{ .ptr = qtc.KUrlCompletion_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KUrlCompletion, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KUrlCompletion_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` callback: *const fn (self: KUrlCompletion, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KUrlCompletion, callback: *const fn (KUrlCompletion, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KUrlCompletion_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KUrlCompletion, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KUrlCompletion_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

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
    pub fn Metacall(self: KUrlCompletion, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KUrlCompletion_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` callback: *const fn (self: KUrlCompletion, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KUrlCompletion, callback: *const fn (KUrlCompletion, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KUrlCompletion_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

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
    pub fn SuperMetacall(self: KUrlCompletion, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KUrlCompletion_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kurlcompletion.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn MakeCompletion(self: KUrlCompletion, allocator: std.mem.Allocator, text: []const u8) []const u8 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        var _str = qtc.KUrlCompletion_MakeCompletion(@ptrCast(self.ptr), text_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kurlcompletion.MakeCompletion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#makeCompletion)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` callback: *const fn (self: KUrlCompletion, text: [*:0]const u8) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnMakeCompletion(self: KUrlCompletion, callback: *const fn (KUrlCompletion, [*:0]const u8) callconv(.c) [*:0]const u8) void {
        qtc.KUrlCompletion_OnMakeCompletion(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMakeCompletion` instead
    ///
    pub const QBaseMakeCompletion = SuperMakeCompletion;

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
    pub fn SuperMakeCompletion(self: KUrlCompletion, allocator: std.mem.Allocator, text: []const u8) []const u8 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        var _str = qtc.KUrlCompletion_SuperMakeCompletion(@ptrCast(self.ptr), text_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kurlcompletion.MakeCompletion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#setDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` dir: QUrl `
    ///
    pub fn SetDir(self: KUrlCompletion, dir: anytype) void {
        comptime _ = @TypeOf(dir)._is_QUrl;
        qtc.KUrlCompletion_SetDir(@ptrCast(self.ptr), @ptrCast(dir.ptr));
    }

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
    pub fn OnSetDir(self: KUrlCompletion, callback: *const fn (KUrlCompletion, QUrl) callconv(.c) void) void {
        qtc.KUrlCompletion_OnSetDir(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetDir` instead
    ///
    pub const QBaseSetDir = SuperSetDir;

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#setDir)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` dir: QUrl `
    ///
    pub fn SuperSetDir(self: KUrlCompletion, dir: anytype) void {
        comptime _ = @TypeOf(dir)._is_QUrl;
        qtc.KUrlCompletion_SuperSetDir(@ptrCast(self.ptr), @ptrCast(dir.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#dir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    pub fn Dir(self: KUrlCompletion) QUrl {
        return .{ .ptr = qtc.KUrlCompletion_Dir(@ptrCast(self.ptr)) };
    }

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
    pub fn OnDir(self: KUrlCompletion, callback: *const fn () callconv(.c) QUrl) void {
        qtc.KUrlCompletion_OnDir(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDir` instead
    ///
    pub const QBaseDir = SuperDir;

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#dir)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    pub fn SuperDir(self: KUrlCompletion) QUrl {
        return .{ .ptr = qtc.KUrlCompletion_SuperDir(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#isRunning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    pub fn IsRunning(self: KUrlCompletion) bool {
        return qtc.KUrlCompletion_IsRunning(@ptrCast(self.ptr));
    }

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
    pub fn OnIsRunning(self: KUrlCompletion, callback: *const fn () callconv(.c) bool) void {
        qtc.KUrlCompletion_OnIsRunning(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsRunning` instead
    ///
    pub const QBaseIsRunning = SuperIsRunning;

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#isRunning)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    pub fn SuperIsRunning(self: KUrlCompletion) bool {
        return qtc.KUrlCompletion_SuperIsRunning(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#stop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    pub fn Stop(self: KUrlCompletion) void {
        qtc.KUrlCompletion_Stop(@ptrCast(self.ptr));
    }

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
    pub fn OnStop(self: KUrlCompletion, callback: *const fn () callconv(.c) void) void {
        qtc.KUrlCompletion_OnStop(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperStop` instead
    ///
    pub const QBaseStop = SuperStop;

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#stop)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    pub fn SuperStop(self: KUrlCompletion) void {
        qtc.KUrlCompletion_SuperStop(@ptrCast(self.ptr));
    }

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
    pub fn Mode(self: KUrlCompletion) i32 {
        return qtc.KUrlCompletion_Mode(@ptrCast(self.ptr));
    }

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
    pub fn OnMode(self: KUrlCompletion, callback: *const fn () callconv(.c) i32) void {
        qtc.KUrlCompletion_OnMode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMode` instead
    ///
    pub const QBaseMode = SuperMode;

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
    pub fn SuperMode(self: KUrlCompletion) i32 {
        return qtc.KUrlCompletion_SuperMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#setMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` mode: kurlcompletion_enums.Mode `
    ///
    pub fn SetMode(self: KUrlCompletion, mode: i32) void {
        qtc.KUrlCompletion_SetMode(@ptrCast(self.ptr), @bitCast(mode));
    }

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
    pub fn OnSetMode(self: KUrlCompletion, callback: *const fn (KUrlCompletion, i32) callconv(.c) void) void {
        qtc.KUrlCompletion_OnSetMode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetMode` instead
    ///
    pub const QBaseSetMode = SuperSetMode;

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#setMode)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` mode: kurlcompletion_enums.Mode `
    ///
    pub fn SuperSetMode(self: KUrlCompletion, mode: i32) void {
        qtc.KUrlCompletion_SuperSetMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#replaceEnv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    pub fn ReplaceEnv(self: KUrlCompletion) bool {
        return qtc.KUrlCompletion_ReplaceEnv(@ptrCast(self.ptr));
    }

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
    pub fn OnReplaceEnv(self: KUrlCompletion, callback: *const fn () callconv(.c) bool) void {
        qtc.KUrlCompletion_OnReplaceEnv(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperReplaceEnv` instead
    ///
    pub const QBaseReplaceEnv = SuperReplaceEnv;

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#replaceEnv)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    pub fn SuperReplaceEnv(self: KUrlCompletion) bool {
        return qtc.KUrlCompletion_SuperReplaceEnv(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#setReplaceEnv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` replace: bool `
    ///
    pub fn SetReplaceEnv(self: KUrlCompletion, replace: bool) void {
        qtc.KUrlCompletion_SetReplaceEnv(@ptrCast(self.ptr), replace);
    }

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
    pub fn OnSetReplaceEnv(self: KUrlCompletion, callback: *const fn (KUrlCompletion, bool) callconv(.c) void) void {
        qtc.KUrlCompletion_OnSetReplaceEnv(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetReplaceEnv` instead
    ///
    pub const QBaseSetReplaceEnv = SuperSetReplaceEnv;

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
    pub fn SuperSetReplaceEnv(self: KUrlCompletion, replace: bool) void {
        qtc.KUrlCompletion_SuperSetReplaceEnv(@ptrCast(self.ptr), replace);
    }

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#replaceHome)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    pub fn ReplaceHome(self: KUrlCompletion) bool {
        return qtc.KUrlCompletion_ReplaceHome(@ptrCast(self.ptr));
    }

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
    pub fn OnReplaceHome(self: KUrlCompletion, callback: *const fn () callconv(.c) bool) void {
        qtc.KUrlCompletion_OnReplaceHome(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperReplaceHome` instead
    ///
    pub const QBaseReplaceHome = SuperReplaceHome;

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#replaceHome)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    pub fn SuperReplaceHome(self: KUrlCompletion) bool {
        return qtc.KUrlCompletion_SuperReplaceHome(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#setReplaceHome)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` replace: bool `
    ///
    pub fn SetReplaceHome(self: KUrlCompletion, replace: bool) void {
        qtc.KUrlCompletion_SetReplaceHome(@ptrCast(self.ptr), replace);
    }

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
    pub fn OnSetReplaceHome(self: KUrlCompletion, callback: *const fn (KUrlCompletion, bool) callconv(.c) void) void {
        qtc.KUrlCompletion_OnSetReplaceHome(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetReplaceHome` instead
    ///
    pub const QBaseSetReplaceHome = SuperSetReplaceHome;

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
    pub fn SuperSetReplaceHome(self: KUrlCompletion, replace: bool) void {
        qtc.KUrlCompletion_SuperSetReplaceHome(@ptrCast(self.ptr), replace);
    }

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
    pub fn ReplacedPath(self: KUrlCompletion, allocator: std.mem.Allocator, text: []const u8) []const u8 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        var _str = qtc.KUrlCompletion_ReplacedPath(@ptrCast(self.ptr), text_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kurlcompletion.ReplacedPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#replacedPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` text: []const u8 `
    ///
    /// ` replaceHome: bool `
    ///
    pub fn ReplacedPath2(allocator: std.mem.Allocator, text: []const u8, replaceHome: bool) []const u8 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        var _str = qtc.KUrlCompletion_ReplacedPath2(text_str, replaceHome);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kurlcompletion.ReplacedPath2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetMimeTypeFilters(self: KUrlCompletion, allocator: std.mem.Allocator, mimeTypes: []const []const u8) void {
        const mimeTypes_arr = allocator.alloc(qtc.libqt_string, mimeTypes.len) catch @panic("kurlcompletion.SetMimeTypeFilters: Memory allocation failed");
        defer allocator.free(mimeTypes_arr);
        for (mimeTypes, 0..mimeTypes.len) |item, i|
            mimeTypes_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const mimeTypes_list = qtc.libqt_list{
            .len = mimeTypes.len,
            .data = mimeTypes_arr.ptr,
        };
        qtc.KUrlCompletion_SetMimeTypeFilters(@ptrCast(self.ptr), mimeTypes_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#mimeTypeFilters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MimeTypeFilters(self: KUrlCompletion, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KUrlCompletion_MimeTypeFilters(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kurlcompletion.MimeTypeFilters: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kurlcompletion.MimeTypeFilters: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#postProcessMatches)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` matches: []const []const u8 `
    ///
    pub fn PostProcessMatches(self: KUrlCompletion, allocator: std.mem.Allocator, matches: []const []const u8) void {
        const matches_arr = allocator.alloc(qtc.libqt_string, matches.len) catch @panic("kurlcompletion.PostProcessMatches: Memory allocation failed");
        defer allocator.free(matches_arr);
        for (matches, 0..matches.len) |item, i|
            matches_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const matches_list = qtc.libqt_list{
            .len = matches.len,
            .data = matches_arr.ptr,
        };
        qtc.KUrlCompletion_PostProcessMatches(@ptrCast(self.ptr), matches_list);
    }

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
    pub fn OnPostProcessMatches(self: KUrlCompletion, callback: *const fn (KUrlCompletion, ?[*:null]?[*:0]const u8) callconv(.c) void) void {
        qtc.KUrlCompletion_OnPostProcessMatches(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPostProcessMatches` instead
    ///
    pub const QBasePostProcessMatches = SuperPostProcessMatches;

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
    /// ` matches: []const []const u8 `
    ///
    pub fn SuperPostProcessMatches(self: KUrlCompletion, allocator: std.mem.Allocator, matches: []const []const u8) void {
        const matches_arr = allocator.alloc(qtc.libqt_string, matches.len) catch @panic("kurlcompletion.PostProcessMatches: Memory allocation failed");
        defer allocator.free(matches_arr);
        for (matches, 0..matches.len) |item, i|
            matches_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const matches_list = qtc.libqt_list{
            .len = matches.len,
            .data = matches_arr.ptr,
        };
        qtc.KUrlCompletion_SuperPostProcessMatches(@ptrCast(self.ptr), matches_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#postProcessMatches)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` matches: KCompletionMatches `
    ///
    pub fn PostProcessMatches2(self: KUrlCompletion, matches: anytype) void {
        comptime _ = @TypeOf(matches)._is_KCompletionMatches;
        qtc.KUrlCompletion_PostProcessMatches2(@ptrCast(self.ptr), @ptrCast(matches.ptr));
    }

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
    pub fn OnPostProcessMatches2(self: KUrlCompletion, callback: *const fn (KUrlCompletion, KCompletionMatches) callconv(.c) void) void {
        qtc.KUrlCompletion_OnPostProcessMatches2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPostProcessMatches2` instead
    ///
    pub const QBasePostProcessMatches2 = SuperPostProcessMatches2;

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#postProcessMatches)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` matches: KCompletionMatches `
    ///
    pub fn SuperPostProcessMatches2(self: KUrlCompletion, matches: anytype) void {
        comptime _ = @TypeOf(matches)._is_KCompletionMatches;
        qtc.KUrlCompletion_SuperPostProcessMatches2(@ptrCast(self.ptr), @ptrCast(matches.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kurlcompletion.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kurlcompletion.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#replacedPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` text: []const u8 `
    ///
    /// ` replaceHome: bool `
    ///
    /// ` replaceEnv: bool `
    ///
    pub fn ReplacedPath3(allocator: std.mem.Allocator, text: []const u8, replaceHome: bool, replaceEnv: bool) []const u8 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        var _str = qtc.KUrlCompletion_ReplacedPath3(text_str, replaceHome, replaceEnv);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kurlcompletion.ReplacedPath3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    /// ` stringVal: []const u8 `
    ///
    pub fn SubstringCompletion(self: KUrlCompletion, allocator: std.mem.Allocator, stringVal: []const u8) []const []const u8 {
        const stringVal_str = qtc.libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KCompletion_SubstringCompletion(@ptrCast(self.ptr), stringVal_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kurlcompletion.SubstringCompletion: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kurlcompletion.SubstringCompletion: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

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
    pub fn Items(self: KUrlCompletion, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KCompletion_Items(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kurlcompletion.Items: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kurlcompletion.Items: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from KCompletion
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    pub fn IsEmpty(self: KUrlCompletion) bool {
        return qtc.KCompletion_IsEmpty(@ptrCast(self.ptr));
    }

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
    pub fn CompletionMode(self: KUrlCompletion) i32 {
        return qtc.KCompletion_CompletionMode(@ptrCast(self.ptr));
    }

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
    pub fn Order(self: KUrlCompletion) i32 {
        return qtc.KCompletion_Order(@ptrCast(self.ptr));
    }

    /// Inherited from KCompletion
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#ignoreCase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    pub fn IgnoreCase(self: KUrlCompletion) bool {
        return qtc.KCompletion_IgnoreCase(@ptrCast(self.ptr));
    }

    /// Inherited from KCompletion
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#shouldAutoSuggest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    pub fn ShouldAutoSuggest(self: KUrlCompletion) bool {
        return qtc.KCompletion_ShouldAutoSuggest(@ptrCast(self.ptr));
    }

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
    pub fn AllMatches(self: KUrlCompletion, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KCompletion_AllMatches(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kurlcompletion.AllMatches: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kurlcompletion.AllMatches: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

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
    /// ` stringVal: []const u8 `
    ///
    pub fn AllMatches2(self: KUrlCompletion, allocator: std.mem.Allocator, stringVal: []const u8) []const []const u8 {
        const stringVal_str = qtc.libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KCompletion_AllMatches2(@ptrCast(self.ptr), stringVal_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kurlcompletion.AllMatches2: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kurlcompletion.AllMatches2: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from KCompletion
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#allWeightedMatches)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    pub fn AllWeightedMatches(self: KUrlCompletion) KCompletionMatches {
        return .{ .ptr = qtc.KCompletion_AllWeightedMatches(@ptrCast(self.ptr)) };
    }

    /// Inherited from KCompletion
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#allWeightedMatches)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` stringVal: []const u8 `
    ///
    pub fn AllWeightedMatches2(self: KUrlCompletion, stringVal: []const u8) KCompletionMatches {
        const stringVal_str = qtc.libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        return .{ .ptr = qtc.KCompletion_AllWeightedMatches2(@ptrCast(self.ptr), stringVal_str) };
    }

    /// Inherited from KCompletion
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#soundsEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    pub fn SoundsEnabled(self: KUrlCompletion) bool {
        return qtc.KCompletion_SoundsEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from KCompletion
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#hasMultipleMatches)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    pub fn HasMultipleMatches(self: KUrlCompletion) bool {
        return qtc.KCompletion_HasMultipleMatches(@ptrCast(self.ptr));
    }

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
    pub fn PreviousMatch(self: KUrlCompletion, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KCompletion_PreviousMatch(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kurlcompletion.PreviousMatch: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn NextMatch(self: KUrlCompletion, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KCompletion_NextMatch(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kurlcompletion.NextMatch: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    /// ` items: []const []const u8 `
    ///
    pub fn InsertItems(self: KUrlCompletion, allocator: std.mem.Allocator, items: []const []const u8) void {
        const items_arr = allocator.alloc(qtc.libqt_string, items.len) catch @panic("kurlcompletion.InsertItems: Memory allocation failed");
        defer allocator.free(items_arr);
        for (items, 0..items.len) |item, i|
            items_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const items_list = qtc.libqt_list{
            .len = items.len,
            .data = items_arr.ptr,
        };
        qtc.KCompletion_InsertItems(@ptrCast(self.ptr), items_list);
    }

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
    pub fn AddItem(self: KUrlCompletion, item: []const u8) void {
        const item_str = qtc.libqt_string{
            .len = item.len,
            .data = item.ptr,
        };
        qtc.KCompletion_AddItem(@ptrCast(self.ptr), item_str);
    }

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
    pub fn AddItem2(self: KUrlCompletion, item: []const u8, weight: u32) void {
        const item_str = qtc.libqt_string{
            .len = item.len,
            .data = item.ptr,
        };
        qtc.KCompletion_AddItem2(@ptrCast(self.ptr), item_str, @bitCast(weight));
    }

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
    pub fn RemoveItem(self: KUrlCompletion, item: []const u8) void {
        const item_str = qtc.libqt_string{
            .len = item.len,
            .data = item.ptr,
        };
        qtc.KCompletion_RemoveItem(@ptrCast(self.ptr), item_str);
    }

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
    pub fn Match(self: KUrlCompletion, item: []const u8) void {
        const item_str = qtc.libqt_string{
            .len = item.len,
            .data = item.ptr,
        };
        qtc.KCompletion_Match(@ptrCast(self.ptr), item_str);
    }

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
    pub fn OnMatch(self: KUrlCompletion, callback: *const fn (KUrlCompletion, [*:0]const u8) callconv(.c) void) void {
        qtc.KCompletion_Connect_Match(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Matches(self: KUrlCompletion, allocator: std.mem.Allocator, matchlist: []const []const u8) void {
        const matchlist_arr = allocator.alloc(qtc.libqt_string, matchlist.len) catch @panic("kurlcompletion.Matches: Memory allocation failed");
        defer allocator.free(matchlist_arr);
        for (matchlist, 0..matchlist.len) |item, i|
            matchlist_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const matchlist_list = qtc.libqt_list{
            .len = matchlist.len,
            .data = matchlist_arr.ptr,
        };
        qtc.KCompletion_Matches(@ptrCast(self.ptr), matchlist_list);
    }

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
    pub fn OnMatches(self: KUrlCompletion, callback: *const fn (KUrlCompletion, ?[*:null]?[*:0]const u8) callconv(.c) void) void {
        qtc.KCompletion_Connect_Matches(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KCompletion
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#multipleMatches)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    pub fn MultipleMatches(self: KUrlCompletion) void {
        qtc.KCompletion_MultipleMatches(@ptrCast(self.ptr));
    }

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
    pub fn OnMultipleMatches(self: KUrlCompletion, callback: *const fn (KUrlCompletion) callconv(.c) void) void {
        qtc.KCompletion_Connect_MultipleMatches(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ObjectName(self: KUrlCompletion, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kurlcompletion.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetObjectName(self: KUrlCompletion, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    pub fn IsWidgetType(self: KUrlCompletion) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    pub fn IsWindowType(self: KUrlCompletion) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    pub fn IsQuickItemType(self: KUrlCompletion) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    pub fn SignalsBlocked(self: KUrlCompletion) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

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
    pub fn BlockSignals(self: KUrlCompletion, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    pub fn Thread(self: KUrlCompletion) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KUrlCompletion, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

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
    pub fn StartTimer(self: KUrlCompletion, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

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
    pub fn StartTimer2(self: KUrlCompletion, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

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
    pub fn KillTimer(self: KUrlCompletion, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn KillTimer2(self: KUrlCompletion, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn Children(self: KUrlCompletion, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("kurlcompletion.Children: Memory allocation failed");
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
    /// ` self: KUrlCompletion `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KUrlCompletion, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

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
    pub fn InstallEventFilter(self: KUrlCompletion, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

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
    pub fn RemoveEventFilter(self: KUrlCompletion, obj: anytype) void {
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
    /// ` self: KUrlCompletion `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KUrlCompletion, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KUrlCompletion `
    ///
    pub fn Disconnect3(self: KUrlCompletion) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

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
    pub fn Disconnect4(self: KUrlCompletion, receiver: anytype) bool {
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
    /// ` self: KUrlCompletion `
    ///
    pub fn DumpObjectTree(self: KUrlCompletion) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    pub fn DumpObjectInfo(self: KUrlCompletion) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

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
    pub fn SetProperty(self: KUrlCompletion, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KUrlCompletion `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KUrlCompletion, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

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
    pub fn DynamicPropertyNames(self: KUrlCompletion, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kurlcompletion.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kurlcompletion.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KUrlCompletion `
    ///
    pub fn BindingStorage(self: KUrlCompletion) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    pub fn BindingStorage2(self: KUrlCompletion) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    pub fn Destroyed(self: KUrlCompletion) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

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
    pub fn OnDestroyed(self: KUrlCompletion, callback: *const fn (KUrlCompletion) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    pub fn Parent(self: KUrlCompletion) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

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
    pub fn Inherits(self: KUrlCompletion, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KUrlCompletion `
    ///
    pub fn DeleteLater(self: KUrlCompletion) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

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
    pub fn StartTimer22(self: KUrlCompletion, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

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
    pub fn StartTimer23(self: KUrlCompletion, time: i64, timerType: i32) i32 {
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
    /// ` self: KUrlCompletion `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KUrlCompletion, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KUrlCompletion `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KUrlCompletion, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn Disconnect22(self: KUrlCompletion, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KUrlCompletion `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KUrlCompletion, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KUrlCompletion `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KUrlCompletion, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KUrlCompletion `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KUrlCompletion, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnDestroyed1(self: KUrlCompletion, callback: *const fn (KUrlCompletion, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn LastMatch(self: KUrlCompletion, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUrlCompletion_LastMatch(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kurlcompletion.LastMatch: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperLastMatch` instead
    ///
    pub const QBaseLastMatch = SuperLastMatch;

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
    pub fn SuperLastMatch(self: KUrlCompletion, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KUrlCompletion_SuperLastMatch(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kurlcompletion.LastMatch: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KCompletion
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompletion.html#lastMatch)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KUrlCompletion`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnLastMatch(self: KUrlCompletion, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KUrlCompletion_OnLastMatch(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` mode: kcompletion_enums.CompletionMode `
    ///
    pub fn SetCompletionMode(self: KUrlCompletion, mode: i32) void {
        qtc.KUrlCompletion_SetCompletionMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `SuperSetCompletionMode` instead
    ///
    pub const QBaseSetCompletionMode = SuperSetCompletionMode;

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
    /// ` mode: kcompletion_enums.CompletionMode `
    ///
    pub fn SuperSetCompletionMode(self: KUrlCompletion, mode: i32) void {
        qtc.KUrlCompletion_SuperSetCompletionMode(@ptrCast(self.ptr), @bitCast(mode));
    }

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
    pub fn OnSetCompletionMode(self: KUrlCompletion, callback: *const fn (KUrlCompletion, i32) callconv(.c) void) void {
        qtc.KUrlCompletion_OnSetCompletionMode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` order: kcompletion_enums.CompOrder `
    ///
    pub fn SetOrder(self: KUrlCompletion, order: i32) void {
        qtc.KUrlCompletion_SetOrder(@ptrCast(self.ptr), @bitCast(order));
    }

    /// ### DEPRECATED: Use `SuperSetOrder` instead
    ///
    pub const QBaseSetOrder = SuperSetOrder;

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
    /// ` order: kcompletion_enums.CompOrder `
    ///
    pub fn SuperSetOrder(self: KUrlCompletion, order: i32) void {
        qtc.KUrlCompletion_SuperSetOrder(@ptrCast(self.ptr), @bitCast(order));
    }

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
    pub fn OnSetOrder(self: KUrlCompletion, callback: *const fn (KUrlCompletion, i32) callconv(.c) void) void {
        qtc.KUrlCompletion_OnSetOrder(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` ignoreCase: bool `
    ///
    pub fn SetIgnoreCase(self: KUrlCompletion, ignoreCase: bool) void {
        qtc.KUrlCompletion_SetIgnoreCase(@ptrCast(self.ptr), ignoreCase);
    }

    /// ### DEPRECATED: Use `SuperSetIgnoreCase` instead
    ///
    pub const QBaseSetIgnoreCase = SuperSetIgnoreCase;

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
    /// ` ignoreCase: bool `
    ///
    pub fn SuperSetIgnoreCase(self: KUrlCompletion, ignoreCase: bool) void {
        qtc.KUrlCompletion_SuperSetIgnoreCase(@ptrCast(self.ptr), ignoreCase);
    }

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
    pub fn OnSetIgnoreCase(self: KUrlCompletion, callback: *const fn (KUrlCompletion, bool) callconv(.c) void) void {
        qtc.KUrlCompletion_OnSetIgnoreCase(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SetSoundsEnabled(self: KUrlCompletion, enable: bool) void {
        qtc.KUrlCompletion_SetSoundsEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `SuperSetSoundsEnabled` instead
    ///
    pub const QBaseSetSoundsEnabled = SuperSetSoundsEnabled;

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
    pub fn SuperSetSoundsEnabled(self: KUrlCompletion, enable: bool) void {
        qtc.KUrlCompletion_SuperSetSoundsEnabled(@ptrCast(self.ptr), enable);
    }

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
    pub fn OnSetSoundsEnabled(self: KUrlCompletion, callback: *const fn (KUrlCompletion, bool) callconv(.c) void) void {
        qtc.KUrlCompletion_OnSetSoundsEnabled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SetItems(self: KUrlCompletion, allocator: std.mem.Allocator, itemList: []const []const u8) void {
        const itemList_arr = allocator.alloc(qtc.libqt_string, itemList.len) catch @panic("kurlcompletion.SetItems: Memory allocation failed");
        defer allocator.free(itemList_arr);
        for (itemList, 0..itemList.len) |item, i|
            itemList_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const itemList_list = qtc.libqt_list{
            .len = itemList.len,
            .data = itemList_arr.ptr,
        };
        qtc.KUrlCompletion_SetItems(@ptrCast(self.ptr), itemList_list);
    }

    /// ### DEPRECATED: Use `SuperSetItems` instead
    ///
    pub const QBaseSetItems = SuperSetItems;

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
    pub fn SuperSetItems(self: KUrlCompletion, allocator: std.mem.Allocator, itemList: []const []const u8) void {
        const itemList_arr = allocator.alloc(qtc.libqt_string, itemList.len) catch @panic("kurlcompletion.SetItems: Memory allocation failed");
        defer allocator.free(itemList_arr);
        for (itemList, 0..itemList.len) |item, i|
            itemList_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const itemList_list = qtc.libqt_list{
            .len = itemList.len,
            .data = itemList_arr.ptr,
        };
        qtc.KUrlCompletion_SuperSetItems(@ptrCast(self.ptr), itemList_list);
    }

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
    pub fn OnSetItems(self: KUrlCompletion, callback: *const fn (KUrlCompletion, ?[*:null]?[*:0]const u8) callconv(.c) void) void {
        qtc.KUrlCompletion_OnSetItems(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Clear(self: KUrlCompletion) void {
        qtc.KUrlCompletion_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperClear` instead
    ///
    pub const QBaseClear = SuperClear;

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
    pub fn SuperClear(self: KUrlCompletion) void {
        qtc.KUrlCompletion_SuperClear(@ptrCast(self.ptr));
    }

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
    pub fn OnClear(self: KUrlCompletion, callback: *const fn () callconv(.c) void) void {
        qtc.KUrlCompletion_OnClear(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn Event(self: KUrlCompletion, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KUrlCompletion_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KUrlCompletion `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KUrlCompletion, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KUrlCompletion_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEvent(self: KUrlCompletion, callback: *const fn (KUrlCompletion, QEvent) callconv(.c) bool) void {
        qtc.KUrlCompletion_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KUrlCompletion, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KUrlCompletion_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: KUrlCompletion `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KUrlCompletion, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KUrlCompletion_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEventFilter(self: KUrlCompletion, callback: *const fn (KUrlCompletion, QObject, QEvent) callconv(.c) bool) void {
        qtc.KUrlCompletion_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KUrlCompletion, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KUrlCompletion_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KUrlCompletion `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KUrlCompletion, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KUrlCompletion_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnTimerEvent(self: KUrlCompletion, callback: *const fn (KUrlCompletion, QTimerEvent) callconv(.c) void) void {
        qtc.KUrlCompletion_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KUrlCompletion, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KUrlCompletion_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KUrlCompletion `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KUrlCompletion, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KUrlCompletion_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnChildEvent(self: KUrlCompletion, callback: *const fn (KUrlCompletion, QChildEvent) callconv(.c) void) void {
        qtc.KUrlCompletion_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KUrlCompletion, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KUrlCompletion_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KUrlCompletion `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KUrlCompletion, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KUrlCompletion_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnCustomEvent(self: KUrlCompletion, callback: *const fn (KUrlCompletion, QEvent) callconv(.c) void) void {
        qtc.KUrlCompletion_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ConnectNotify(self: KUrlCompletion, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KUrlCompletion_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KUrlCompletion `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KUrlCompletion, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KUrlCompletion_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnConnectNotify(self: KUrlCompletion, callback: *const fn (KUrlCompletion, QMetaMethod) callconv(.c) void) void {
        qtc.KUrlCompletion_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DisconnectNotify(self: KUrlCompletion, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KUrlCompletion_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KUrlCompletion `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KUrlCompletion, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KUrlCompletion_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnDisconnectNotify(self: KUrlCompletion, callback: *const fn (KUrlCompletion, QMetaMethod) callconv(.c) void) void {
        qtc.KUrlCompletion_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SetShouldAutoSuggest(self: KUrlCompletion, shouldAutosuggest: bool) void {
        qtc.KUrlCompletion_SetShouldAutoSuggest(@ptrCast(self.ptr), shouldAutosuggest);
    }

    /// ### DEPRECATED: Use `SuperSetShouldAutoSuggest` instead
    ///
    pub const QBaseSetShouldAutoSuggest = SuperSetShouldAutoSuggest;

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
    pub fn SuperSetShouldAutoSuggest(self: KUrlCompletion, shouldAutosuggest: bool) void {
        qtc.KUrlCompletion_SuperSetShouldAutoSuggest(@ptrCast(self.ptr), shouldAutosuggest);
    }

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
    pub fn OnSetShouldAutoSuggest(self: KUrlCompletion, callback: *const fn (KUrlCompletion, bool) callconv(.c) void) void {
        qtc.KUrlCompletion_OnSetShouldAutoSuggest(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Sender(self: KUrlCompletion) QObject {
        return .{ .ptr = qtc.KUrlCompletion_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KUrlCompletion `
    ///
    pub fn SuperSender(self: KUrlCompletion) QObject {
        return .{ .ptr = qtc.KUrlCompletion_SuperSender(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSender(self: KUrlCompletion, callback: *const fn () callconv(.c) QObject) void {
        qtc.KUrlCompletion_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SenderSignalIndex(self: KUrlCompletion) i32 {
        return qtc.KUrlCompletion_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KUrlCompletion `
    ///
    pub fn SuperSenderSignalIndex(self: KUrlCompletion) i32 {
        return qtc.KUrlCompletion_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

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
    pub fn OnSenderSignalIndex(self: KUrlCompletion, callback: *const fn () callconv(.c) i32) void {
        qtc.KUrlCompletion_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Receivers(self: KUrlCompletion, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KUrlCompletion_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KUrlCompletion `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KUrlCompletion, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KUrlCompletion_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn OnReceivers(self: KUrlCompletion, callback: *const fn (KUrlCompletion, [*:0]const u8) callconv(.c) i32) void {
        qtc.KUrlCompletion_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IsSignalConnected(self: KUrlCompletion, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KUrlCompletion_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KUrlCompletion `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KUrlCompletion, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KUrlCompletion_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnIsSignalConnected(self: KUrlCompletion, callback: *const fn (KUrlCompletion, QMetaMethod) callconv(.c) bool) void {
        qtc.KUrlCompletion_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn OnObjectNameChanged(self: KUrlCompletion, callback: *const fn (KUrlCompletion, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#dtor.KUrlCompletion)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KUrlCompletion `
    ///
    pub fn Delete(self: KUrlCompletion) void {
        qtc.KUrlCompletion_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kurlcompletion.html#public-types)
pub const enums = struct {
    pub const Mode = enum(i32) {
        pub const ExeCompletion: i32 = 1;
        pub const FileCompletion: i32 = 2;
        pub const DirCompletion: i32 = 3;
    };
};
