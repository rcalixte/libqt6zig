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
const QWindow = @import("libqt6").QWindow;
const kstartupinfo_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kstartupinfo.html)
pub const KStartupInfo = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kstartupinfo.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KStartupInfo,

    pub const _is_KStartupInfo = {};
    pub const _is_QObject = {};

    /// New constructs a new KStartupInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` flags: i32 `
    ///
    pub fn New(flags: i32) KStartupInfo {
        return .{ .ptr = qtc.KStartupInfo_new(@bitCast(flags)) };
    }

    /// New2 constructs a new KStartupInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` flags: i32 `
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(flags: i32, parent: anytype) KStartupInfo {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KStartupInfo_new2(@bitCast(flags), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfo `
    ///
    pub fn MetaObject(self: KStartupInfo) QMetaObject {
        return .{ .ptr = qtc.KStartupInfo_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KStartupInfo `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: KStartupInfo, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KStartupInfo_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KStartupInfo `
    ///
    pub fn SuperMetaObject(self: KStartupInfo) QMetaObject {
        return .{ .ptr = qtc.KStartupInfo_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfo `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KStartupInfo, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KStartupInfo_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KStartupInfo `
    ///
    /// ` callback: *const fn (self: KStartupInfo, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KStartupInfo, callback: *const fn (KStartupInfo, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KStartupInfo_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfo `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KStartupInfo, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KStartupInfo_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfo `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KStartupInfo, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KStartupInfo_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KStartupInfo `
    ///
    /// ` callback: *const fn (self: KStartupInfo, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KStartupInfo, callback: *const fn (KStartupInfo, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KStartupInfo_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfo `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: KStartupInfo, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KStartupInfo_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kstartupinfo.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfo.html#appStarted)
    ///
    pub fn AppStarted() void {
        qtc.KStartupInfo_AppStarted();
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfo.html#appStarted)
    ///
    /// ## Parameter(s):
    ///
    /// ` startup_id: []u8 `
    ///
    pub fn AppStarted2(startup_id: []u8) void {
        const startup_id_str = qtc.libqt_string{
            .len = startup_id.len,
            .data = startup_id.ptr,
        };
        qtc.KStartupInfo_AppStarted2(startup_id_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfo.html#setStartupId)
    ///
    /// ## Parameter(s):
    ///
    /// ` startup_id: []u8 `
    ///
    pub fn SetStartupId(startup_id: []u8) void {
        const startup_id_str = qtc.libqt_string{
            .len = startup_id.len,
            .data = startup_id.ptr,
        };
        qtc.KStartupInfo_SetStartupId(startup_id_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfo.html#setNewStartupId)
    ///
    /// ## Parameter(s):
    ///
    /// ` window: QWindow `
    ///
    /// ` startup_id: []u8 `
    ///
    pub fn SetNewStartupId(window: anytype, startup_id: []u8) void {
        comptime _ = @TypeOf(window)._is_QWindow;
        const startup_id_str = qtc.libqt_string{
            .len = startup_id.len,
            .data = startup_id.ptr,
        };
        qtc.KStartupInfo_SetNewStartupId(@ptrCast(window.ptr), startup_id_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfo.html#createNewStartupId)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CreateNewStartupId(allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.KStartupInfo_CreateNewStartupId();
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kstartupinfo.CreateNewStartupId: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfo.html#createNewStartupIdForTimestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` timestamp: u32 `
    ///
    pub fn CreateNewStartupIdForTimestamp(allocator: std.mem.Allocator, timestamp: u32) []u8 {
        var _bytearray: qtc.libqt_string = qtc.KStartupInfo_CreateNewStartupIdForTimestamp(@bitCast(timestamp));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kstartupinfo.CreateNewStartupIdForTimestamp: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfo.html#sendStartup)
    ///
    /// ## Parameter(s):
    ///
    /// ` id: KStartupInfoId `
    ///
    /// ` data: KStartupInfoData `
    ///
    pub fn SendStartup(id: anytype, data: anytype) bool {
        comptime _ = @TypeOf(id)._is_KStartupInfoId;
        comptime _ = @TypeOf(data)._is_KStartupInfoData;
        return qtc.KStartupInfo_SendStartup(@ptrCast(id.ptr), @ptrCast(data.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfo.html#sendChange)
    ///
    /// ## Parameter(s):
    ///
    /// ` id: KStartupInfoId `
    ///
    /// ` data: KStartupInfoData `
    ///
    pub fn SendChange(id: anytype, data: anytype) bool {
        comptime _ = @TypeOf(id)._is_KStartupInfoId;
        comptime _ = @TypeOf(data)._is_KStartupInfoData;
        return qtc.KStartupInfo_SendChange(@ptrCast(id.ptr), @ptrCast(data.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfo.html#sendFinish)
    ///
    /// ## Parameter(s):
    ///
    /// ` id: KStartupInfoId `
    ///
    pub fn SendFinish(id: anytype) bool {
        comptime _ = @TypeOf(id)._is_KStartupInfoId;
        return qtc.KStartupInfo_SendFinish(@ptrCast(id.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfo.html#sendFinish)
    ///
    /// ## Parameter(s):
    ///
    /// ` id: KStartupInfoId `
    ///
    /// ` data: KStartupInfoData `
    ///
    pub fn SendFinish2(id: anytype, data: anytype) bool {
        comptime _ = @TypeOf(id)._is_KStartupInfoId;
        comptime _ = @TypeOf(data)._is_KStartupInfoData;
        return qtc.KStartupInfo_SendFinish2(@ptrCast(id.ptr), @ptrCast(data.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfo.html#resetStartupEnv)
    ///
    pub fn ResetStartupEnv() void {
        qtc.KStartupInfo_ResetStartupEnv();
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfo.html#checkStartup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfo `
    ///
    /// ` w: usize `
    ///
    /// ## Returns:
    ///
    /// ` kstartupinfo_enums.startup_t `
    ///
    pub fn CheckStartup(self: KStartupInfo, w: usize) i32 {
        return qtc.KStartupInfo_CheckStartup(@ptrCast(self.ptr), @bitCast(w));
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfo.html#checkStartup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfo `
    ///
    /// ` w: usize `
    ///
    /// ` id: KStartupInfoId `
    ///
    /// ## Returns:
    ///
    /// ` kstartupinfo_enums.startup_t `
    ///
    pub fn CheckStartup2(self: KStartupInfo, w: usize, id: anytype) i32 {
        comptime _ = @TypeOf(id)._is_KStartupInfoId;
        return qtc.KStartupInfo_CheckStartup2(@ptrCast(self.ptr), @bitCast(w), @ptrCast(id.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfo.html#checkStartup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfo `
    ///
    /// ` w: usize `
    ///
    /// ` data: KStartupInfoData `
    ///
    /// ## Returns:
    ///
    /// ` kstartupinfo_enums.startup_t `
    ///
    pub fn CheckStartup3(self: KStartupInfo, w: usize, data: anytype) i32 {
        comptime _ = @TypeOf(data)._is_KStartupInfoData;
        return qtc.KStartupInfo_CheckStartup3(@ptrCast(self.ptr), @bitCast(w), @ptrCast(data.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfo.html#checkStartup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfo `
    ///
    /// ` w: usize `
    ///
    /// ` id: KStartupInfoId `
    ///
    /// ` data: KStartupInfoData `
    ///
    /// ## Returns:
    ///
    /// ` kstartupinfo_enums.startup_t `
    ///
    pub fn CheckStartup4(self: KStartupInfo, w: usize, id: anytype, data: anytype) i32 {
        comptime _ = @TypeOf(id)._is_KStartupInfoId;
        comptime _ = @TypeOf(data)._is_KStartupInfoData;
        return qtc.KStartupInfo_CheckStartup4(@ptrCast(self.ptr), @bitCast(w), @ptrCast(id.ptr), @ptrCast(data.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfo.html#setTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfo `
    ///
    /// ` secs: u32 `
    ///
    pub fn SetTimeout(self: KStartupInfo, secs: u32) void {
        qtc.KStartupInfo_SetTimeout(@ptrCast(self.ptr), @bitCast(secs));
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfo.html#windowStartupId)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` w: usize `
    ///
    pub fn WindowStartupId(allocator: std.mem.Allocator, w: usize) []u8 {
        var _bytearray: qtc.libqt_string = qtc.KStartupInfo_WindowStartupId(@bitCast(w));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kstartupinfo.WindowStartupId: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfo.html#gotNewStartup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfo `
    ///
    /// ` id: KStartupInfoId `
    ///
    /// ` data: KStartupInfoData `
    ///
    pub fn GotNewStartup(self: KStartupInfo, id: anytype, data: anytype) void {
        comptime _ = @TypeOf(id)._is_KStartupInfoId;
        comptime _ = @TypeOf(data)._is_KStartupInfoData;
        qtc.KStartupInfo_GotNewStartup(@ptrCast(self.ptr), @ptrCast(id.ptr), @ptrCast(data.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfo.html#gotNewStartup)
    ///
    /// ## Parameters:
    ///
    /// ` self: KStartupInfo `
    ///
    /// ` callback: *const fn (self: KStartupInfo, id: KStartupInfoId, data: KStartupInfoData) callconv(.c) void `
    ///
    pub fn OnGotNewStartup(self: KStartupInfo, callback: *const fn (KStartupInfo, KStartupInfoId, KStartupInfoData) callconv(.c) void) void {
        qtc.KStartupInfo_Connect_GotNewStartup(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfo.html#gotStartupChange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfo `
    ///
    /// ` id: KStartupInfoId `
    ///
    /// ` data: KStartupInfoData `
    ///
    pub fn GotStartupChange(self: KStartupInfo, id: anytype, data: anytype) void {
        comptime _ = @TypeOf(id)._is_KStartupInfoId;
        comptime _ = @TypeOf(data)._is_KStartupInfoData;
        qtc.KStartupInfo_GotStartupChange(@ptrCast(self.ptr), @ptrCast(id.ptr), @ptrCast(data.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfo.html#gotStartupChange)
    ///
    /// ## Parameters:
    ///
    /// ` self: KStartupInfo `
    ///
    /// ` callback: *const fn (self: KStartupInfo, id: KStartupInfoId, data: KStartupInfoData) callconv(.c) void `
    ///
    pub fn OnGotStartupChange(self: KStartupInfo, callback: *const fn (KStartupInfo, KStartupInfoId, KStartupInfoData) callconv(.c) void) void {
        qtc.KStartupInfo_Connect_GotStartupChange(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfo.html#gotRemoveStartup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfo `
    ///
    /// ` id: KStartupInfoId `
    ///
    /// ` data: KStartupInfoData `
    ///
    pub fn GotRemoveStartup(self: KStartupInfo, id: anytype, data: anytype) void {
        comptime _ = @TypeOf(id)._is_KStartupInfoId;
        comptime _ = @TypeOf(data)._is_KStartupInfoData;
        qtc.KStartupInfo_GotRemoveStartup(@ptrCast(self.ptr), @ptrCast(id.ptr), @ptrCast(data.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfo.html#gotRemoveStartup)
    ///
    /// ## Parameters:
    ///
    /// ` self: KStartupInfo `
    ///
    /// ` callback: *const fn (self: KStartupInfo, id: KStartupInfoId, data: KStartupInfoData) callconv(.c) void `
    ///
    pub fn OnGotRemoveStartup(self: KStartupInfo, callback: *const fn (KStartupInfo, KStartupInfoId, KStartupInfoData) callconv(.c) void) void {
        qtc.KStartupInfo_Connect_GotRemoveStartup(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfo.html#customEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfo `
    ///
    /// ` e_P: QEvent `
    ///
    pub fn CustomEvent(self: KStartupInfo, e_P: anytype) void {
        comptime _ = @TypeOf(e_P)._is_QEvent;
        qtc.KStartupInfo_CustomEvent(@ptrCast(self.ptr), @ptrCast(e_P.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfo.html#customEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KStartupInfo `
    ///
    /// ` callback: *const fn (self: KStartupInfo, e_P: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: KStartupInfo, callback: *const fn (KStartupInfo, QEvent) callconv(.c) void) void {
        qtc.KStartupInfo_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCustomEvent` instead
    ///
    pub const QBaseCustomEvent = SuperCustomEvent;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfo.html#customEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfo `
    ///
    /// ` e_P: QEvent `
    ///
    pub fn SuperCustomEvent(self: KStartupInfo, e_P: anytype) void {
        comptime _ = @TypeOf(e_P)._is_QEvent;
        qtc.KStartupInfo_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(e_P.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kstartupinfo.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kstartupinfo.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KStartupInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kstartupinfo.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfo `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KStartupInfo, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfo `
    ///
    pub fn IsWidgetType(self: KStartupInfo) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfo `
    ///
    pub fn IsWindowType(self: KStartupInfo) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfo `
    ///
    pub fn IsQuickItemType(self: KStartupInfo) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfo `
    ///
    pub fn SignalsBlocked(self: KStartupInfo) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfo `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KStartupInfo, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfo `
    ///
    pub fn Thread(self: KStartupInfo) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfo `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KStartupInfo, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfo `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KStartupInfo, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfo `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KStartupInfo, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfo `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KStartupInfo, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfo `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KStartupInfo, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KStartupInfo, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("kstartupinfo.Children: Memory allocation failed");
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
    /// ` self: KStartupInfo `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KStartupInfo, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfo `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KStartupInfo, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfo `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KStartupInfo, obj: anytype) void {
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
    /// ` self: KStartupInfo `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KStartupInfo, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KStartupInfo `
    ///
    pub fn Disconnect3(self: KStartupInfo) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfo `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KStartupInfo, receiver: anytype) bool {
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
    /// ` self: KStartupInfo `
    ///
    pub fn DumpObjectTree(self: KStartupInfo) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfo `
    ///
    pub fn DumpObjectInfo(self: KStartupInfo) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfo `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KStartupInfo, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KStartupInfo `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KStartupInfo, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KStartupInfo, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kstartupinfo.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kstartupinfo.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KStartupInfo `
    ///
    pub fn BindingStorage(self: KStartupInfo) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfo `
    ///
    pub fn BindingStorage2(self: KStartupInfo) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfo `
    ///
    pub fn Destroyed(self: KStartupInfo) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KStartupInfo `
    ///
    /// ` callback: *const fn (self: KStartupInfo) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KStartupInfo, callback: *const fn (KStartupInfo) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfo `
    ///
    pub fn Parent(self: KStartupInfo) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfo `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KStartupInfo, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfo `
    ///
    pub fn DeleteLater(self: KStartupInfo) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfo `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KStartupInfo, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfo `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KStartupInfo, time: i64, timerType: i32) i32 {
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
    /// ` self: KStartupInfo `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KStartupInfo, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KStartupInfo `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KStartupInfo, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfo `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KStartupInfo, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KStartupInfo `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KStartupInfo, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KStartupInfo `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KStartupInfo, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KStartupInfo `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KStartupInfo, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KStartupInfo `
    ///
    /// ` callback: *const fn (self: KStartupInfo, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KStartupInfo, callback: *const fn (KStartupInfo, QObject) callconv(.c) void) void {
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
    /// ` self: KStartupInfo `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KStartupInfo, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KStartupInfo_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KStartupInfo `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KStartupInfo, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KStartupInfo_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KStartupInfo`
    ///
    /// ` callback: *const fn (self: KStartupInfo, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: KStartupInfo, callback: *const fn (KStartupInfo, QEvent) callconv(.c) bool) void {
        qtc.KStartupInfo_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfo `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KStartupInfo, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KStartupInfo_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: KStartupInfo `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KStartupInfo, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KStartupInfo_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KStartupInfo`
    ///
    /// ` callback: *const fn (self: KStartupInfo, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: KStartupInfo, callback: *const fn (KStartupInfo, QObject, QEvent) callconv(.c) bool) void {
        qtc.KStartupInfo_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfo `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KStartupInfo, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KStartupInfo_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KStartupInfo `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KStartupInfo, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KStartupInfo_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KStartupInfo`
    ///
    /// ` callback: *const fn (self: KStartupInfo, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: KStartupInfo, callback: *const fn (KStartupInfo, QTimerEvent) callconv(.c) void) void {
        qtc.KStartupInfo_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfo `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KStartupInfo, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KStartupInfo_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KStartupInfo `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KStartupInfo, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KStartupInfo_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KStartupInfo`
    ///
    /// ` callback: *const fn (self: KStartupInfo, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: KStartupInfo, callback: *const fn (KStartupInfo, QChildEvent) callconv(.c) void) void {
        qtc.KStartupInfo_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfo `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: KStartupInfo, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KStartupInfo_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KStartupInfo `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KStartupInfo, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KStartupInfo_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KStartupInfo`
    ///
    /// ` callback: *const fn (self: KStartupInfo, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: KStartupInfo, callback: *const fn (KStartupInfo, QMetaMethod) callconv(.c) void) void {
        qtc.KStartupInfo_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfo `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: KStartupInfo, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KStartupInfo_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KStartupInfo `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KStartupInfo, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KStartupInfo_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KStartupInfo`
    ///
    /// ` callback: *const fn (self: KStartupInfo, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: KStartupInfo, callback: *const fn (KStartupInfo, QMetaMethod) callconv(.c) void) void {
        qtc.KStartupInfo_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfo `
    ///
    pub fn Sender(self: KStartupInfo) QObject {
        return .{ .ptr = qtc.KStartupInfo_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KStartupInfo `
    ///
    pub fn SuperSender(self: KStartupInfo) QObject {
        return .{ .ptr = qtc.KStartupInfo_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KStartupInfo`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: KStartupInfo, callback: *const fn () callconv(.c) QObject) void {
        qtc.KStartupInfo_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfo `
    ///
    pub fn SenderSignalIndex(self: KStartupInfo) i32 {
        return qtc.KStartupInfo_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KStartupInfo `
    ///
    pub fn SuperSenderSignalIndex(self: KStartupInfo) i32 {
        return qtc.KStartupInfo_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KStartupInfo`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: KStartupInfo, callback: *const fn () callconv(.c) i32) void {
        qtc.KStartupInfo_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfo `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: KStartupInfo, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KStartupInfo_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KStartupInfo `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KStartupInfo, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KStartupInfo_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KStartupInfo`
    ///
    /// ` callback: *const fn (self: KStartupInfo, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: KStartupInfo, callback: *const fn (KStartupInfo, [*:0]const u8) callconv(.c) i32) void {
        qtc.KStartupInfo_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfo `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: KStartupInfo, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KStartupInfo_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KStartupInfo `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KStartupInfo, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KStartupInfo_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KStartupInfo`
    ///
    /// ` callback: *const fn (self: KStartupInfo, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: KStartupInfo, callback: *const fn (KStartupInfo, QMetaMethod) callconv(.c) bool) void {
        qtc.KStartupInfo_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KStartupInfo `
    ///
    /// ` callback: *const fn (self: KStartupInfo, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KStartupInfo, callback: *const fn (KStartupInfo, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfo.html#dtor.KStartupInfo)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KStartupInfo `
    ///
    pub fn Delete(self: KStartupInfo) void {
        qtc.KStartupInfo_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kstartupinfoid.html)
pub const KStartupInfoId = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kstartupinfoid.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KStartupInfoId,

    pub const _is_KStartupInfoId = {};

    /// New constructs a new KStartupInfoId object.
    ///
    pub fn New() KStartupInfoId {
        return .{ .ptr = qtc.KStartupInfoId_new() };
    }

    /// New2 constructs a new KStartupInfoId object.
    ///
    /// ## Parameter(s):
    ///
    /// ` data: KStartupInfoId `
    ///
    pub fn New2(data: anytype) KStartupInfoId {
        comptime _ = @TypeOf(data)._is_KStartupInfoId;
        return .{ .ptr = qtc.KStartupInfoId_new2(@ptrCast(data.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfoid.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoId `
    ///
    /// ` id: KStartupInfoId `
    ///
    pub fn OperatorEqual(self: KStartupInfoId, id: anytype) bool {
        comptime _ = @TypeOf(id)._is_KStartupInfoId;
        return qtc.KStartupInfoId_OperatorEqual(@ptrCast(self.ptr), @ptrCast(id.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfoid.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoId `
    ///
    /// ` id: KStartupInfoId `
    ///
    pub fn OperatorNotEqual(self: KStartupInfoId, id: anytype) bool {
        comptime _ = @TypeOf(id)._is_KStartupInfoId;
        return qtc.KStartupInfoId_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(id.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfoid.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoId `
    ///
    pub fn IsNull(self: KStartupInfoId) bool {
        return qtc.KStartupInfoId_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfoid.html#initId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoId `
    ///
    pub fn InitId(self: KStartupInfoId) void {
        qtc.KStartupInfoId_InitId(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfoid.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoId `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Id(self: KStartupInfoId, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.KStartupInfoId_Id(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kstartupinfoid.Id: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfoid.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoId `
    ///
    pub fn Timestamp(self: KStartupInfoId) usize {
        return qtc.KStartupInfoId_Timestamp(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfoid.html#setupStartupEnv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoId `
    ///
    pub fn SetupStartupEnv(self: KStartupInfoId) bool {
        return qtc.KStartupInfoId_SetupStartupEnv(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfoid.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoId `
    ///
    /// ` data: KStartupInfoId `
    ///
    pub fn OperatorAssign(self: KStartupInfoId, data: anytype) void {
        comptime _ = @TypeOf(data)._is_KStartupInfoId;
        qtc.KStartupInfoId_OperatorAssign(@ptrCast(self.ptr), @ptrCast(data.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfoid.html#operator-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoId `
    ///
    /// ` id: KStartupInfoId `
    ///
    pub fn OperatorLesser(self: KStartupInfoId, id: anytype) bool {
        comptime _ = @TypeOf(id)._is_KStartupInfoId;
        return qtc.KStartupInfoId_OperatorLesser(@ptrCast(self.ptr), @ptrCast(id.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfoid.html#initId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoId `
    ///
    /// ` id: []u8 `
    ///
    pub fn InitId1(self: KStartupInfoId, id: []u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        qtc.KStartupInfoId_InitId1(@ptrCast(self.ptr), id_str);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfoid.html#dtor.KStartupInfoId)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KStartupInfoId `
    ///
    pub fn Delete(self: KStartupInfoId) void {
        qtc.KStartupInfoId_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html)
pub const KStartupInfoData = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KStartupInfoData,

    pub const _is_KStartupInfoData = {};

    /// New constructs a new KStartupInfoData object.
    ///
    pub fn New() KStartupInfoData {
        return .{ .ptr = qtc.KStartupInfoData_new() };
    }

    /// New2 constructs a new KStartupInfoData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` data: KStartupInfoData `
    ///
    pub fn New2(data: anytype) KStartupInfoData {
        comptime _ = @TypeOf(data)._is_KStartupInfoData;
        return .{ .ptr = qtc.KStartupInfoData_new2(@ptrCast(data.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#setBin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    /// ` bin: []const u8 `
    ///
    pub fn SetBin(self: KStartupInfoData, bin: []const u8) void {
        const bin_str = qtc.libqt_string{
            .len = bin.len,
            .data = bin.ptr,
        };
        qtc.KStartupInfoData_SetBin(@ptrCast(self.ptr), bin_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#bin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Bin(self: KStartupInfoData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KStartupInfoData_Bin(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kstartupinfodata.Bin: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: KStartupInfoData, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KStartupInfoData_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#findName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FindName(self: KStartupInfoData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KStartupInfoData_FindName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kstartupinfodata.FindName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: KStartupInfoData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KStartupInfoData_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kstartupinfodata.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#setDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    /// ` descr: []const u8 `
    ///
    pub fn SetDescription(self: KStartupInfoData, descr: []const u8) void {
        const descr_str = qtc.libqt_string{
            .len = descr.len,
            .data = descr.ptr,
        };
        qtc.KStartupInfoData_SetDescription(@ptrCast(self.ptr), descr_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#findDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FindDescription(self: KStartupInfoData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KStartupInfoData_FindDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kstartupinfodata.FindDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#description)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Description(self: KStartupInfoData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KStartupInfoData_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kstartupinfodata.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    /// ` icon: []const u8 `
    ///
    pub fn SetIcon(self: KStartupInfoData, icon: []const u8) void {
        const icon_str = qtc.libqt_string{
            .len = icon.len,
            .data = icon.ptr,
        };
        qtc.KStartupInfoData_SetIcon(@ptrCast(self.ptr), icon_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#findIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FindIcon(self: KStartupInfoData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KStartupInfoData_FindIcon(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kstartupinfodata.FindIcon: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Icon(self: KStartupInfoData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KStartupInfoData_Icon(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kstartupinfodata.Icon: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#setDesktop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    /// ` desktop: i32 `
    ///
    pub fn SetDesktop(self: KStartupInfoData, desktop: i32) void {
        qtc.KStartupInfoData_SetDesktop(@ptrCast(self.ptr), @bitCast(desktop));
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#desktop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    pub fn Desktop(self: KStartupInfoData) i32 {
        return qtc.KStartupInfoData_Desktop(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#setWMClass)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    /// ` wmclass: []u8 `
    ///
    pub fn SetWMClass(self: KStartupInfoData, wmclass: []u8) void {
        const wmclass_str = qtc.libqt_string{
            .len = wmclass.len,
            .data = wmclass.ptr,
        };
        qtc.KStartupInfoData_SetWMClass(@ptrCast(self.ptr), wmclass_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#findWMClass)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FindWMClass(self: KStartupInfoData, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.KStartupInfoData_FindWMClass(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kstartupinfodata.FindWMClass: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#WMClass)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WMClass(self: KStartupInfoData, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.KStartupInfoData_WMClass(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kstartupinfodata.WMClass: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#addPid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    /// ` pid: i32 `
    ///
    pub fn AddPid(self: KStartupInfoData, pid: i32) void {
        qtc.KStartupInfoData_AddPid(@ptrCast(self.ptr), pid);
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#pids)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Pids(self: KStartupInfoData, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.KStartupInfoData_Pids(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("kstartupinfodata.Pids: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#is_pid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    /// ` pid: i32 `
    ///
    pub fn IsPid(self: KStartupInfoData, pid: i32) bool {
        return qtc.KStartupInfoData_IsPid(@ptrCast(self.ptr), pid);
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#setHostname)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    pub fn SetHostname(self: KStartupInfoData) void {
        qtc.KStartupInfoData_SetHostname(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#hostname)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Hostname(self: KStartupInfoData, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.KStartupInfoData_Hostname(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kstartupinfodata.Hostname: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#setSilent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    /// ` state: kstartupinfo_enums.TriState `
    ///
    pub fn SetSilent(self: KStartupInfoData, state: i32) void {
        qtc.KStartupInfoData_SetSilent(@ptrCast(self.ptr), @bitCast(state));
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#silent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    /// ## Returns:
    ///
    /// ` kstartupinfo_enums.TriState `
    ///
    pub fn Silent(self: KStartupInfoData) i32 {
        return qtc.KStartupInfoData_Silent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#screen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    pub fn Screen(self: KStartupInfoData) i32 {
        return qtc.KStartupInfoData_Screen(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#setScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    /// ` screen: i32 `
    ///
    pub fn SetScreen(self: KStartupInfoData, screen: i32) void {
        qtc.KStartupInfoData_SetScreen(@ptrCast(self.ptr), @bitCast(screen));
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#xinerama)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    pub fn Xinerama(self: KStartupInfoData) i32 {
        return qtc.KStartupInfoData_Xinerama(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#setXinerama)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    /// ` xinerama: i32 `
    ///
    pub fn SetXinerama(self: KStartupInfoData, xinerama: i32) void {
        qtc.KStartupInfoData_SetXinerama(@ptrCast(self.ptr), @bitCast(xinerama));
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#applicationId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ApplicationId(self: KStartupInfoData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KStartupInfoData_ApplicationId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kstartupinfodata.ApplicationId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#setApplicationId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    /// ` desktop: []const u8 `
    ///
    pub fn SetApplicationId(self: KStartupInfoData, desktop: []const u8) void {
        const desktop_str = qtc.libqt_string{
            .len = desktop.len,
            .data = desktop.ptr,
        };
        qtc.KStartupInfoData_SetApplicationId(@ptrCast(self.ptr), desktop_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    /// ` data: KStartupInfoData `
    ///
    pub fn Update(self: KStartupInfoData, data: anytype) void {
        comptime _ = @TypeOf(data)._is_KStartupInfoData;
        qtc.KStartupInfoData_Update(@ptrCast(self.ptr), @ptrCast(data.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    /// ` data: KStartupInfoData `
    ///
    pub fn OperatorAssign(self: KStartupInfoData, data: anytype) void {
        comptime _ = @TypeOf(data)._is_KStartupInfoData;
        qtc.KStartupInfoData_OperatorAssign(@ptrCast(self.ptr), @ptrCast(data.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#setHostname)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    /// ` hostname: []u8 `
    ///
    pub fn SetHostname1(self: KStartupInfoData, hostname: []u8) void {
        const hostname_str = qtc.libqt_string{
            .len = hostname.len,
            .data = hostname.ptr,
        };
        qtc.KStartupInfoData_SetHostname1(@ptrCast(self.ptr), hostname_str);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#dtor.KStartupInfoData)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KStartupInfoData `
    ///
    pub fn Delete(self: KStartupInfoData) void {
        qtc.KStartupInfoData_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kstartupinfo.html#public-types)
pub const enums = struct {
    pub const KStartupInfo = enum(i32) {
        pub const CleanOnCantDetect: i32 = 1;
        pub const DisableKWinModule: i32 = 2;
        pub const AnnounceSilenceChanges: i32 = 4;
    };

    pub const startup_t = enum(i32) {
        pub const NoMatch: i32 = 0;
        pub const Match: i32 = 1;
        pub const CantDetect: i32 = 2;
    };

    pub const TriState = enum(i32) {
        pub const Yes: i32 = 0;
        pub const No: i32 = 1;
        pub const Unknown: i32 = 2;
    };
};
