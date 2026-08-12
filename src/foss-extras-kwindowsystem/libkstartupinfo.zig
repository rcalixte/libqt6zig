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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KStartupInfo object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` flags: i32 `
    ///
    pub fn new(flags: i32) KStartupInfo {
        return .{ .ptr = qtc.KStartupInfo_new(@bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KStartupInfo object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` flags: i32 `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(flags: i32, _parent: anytype) KStartupInfo {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.KStartupInfo_new2(@bitCast(flags), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfo `
    ///
    pub fn metaObject(self: KStartupInfo) QMetaObject {
        return .{ .ptr = qtc.KStartupInfo_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: KStartupInfo `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: KStartupInfo, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KStartupInfo_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KStartupInfo `
    ///
    pub fn superMetaObject(self: KStartupInfo) QMetaObject {
        return .{ .ptr = qtc.KStartupInfo_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfo `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KStartupInfo, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KStartupInfo_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KStartupInfo `
    ///
    /// ` callback: *const fn (self: KStartupInfo, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: KStartupInfo, callback: *const fn (KStartupInfo, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KStartupInfo_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfo `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: KStartupInfo, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KStartupInfo_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: KStartupInfo, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KStartupInfo_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KStartupInfo `
    ///
    /// ` callback: *const fn (self: KStartupInfo, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: KStartupInfo, callback: *const fn (KStartupInfo, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KStartupInfo_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: KStartupInfo, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KStartupInfo_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KStartupInfo.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `appStarted` instead
    ///
    pub const AppStarted = appStarted;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfo.html#appStarted)
    ///
    pub fn appStarted() void {
        qtc.KStartupInfo_AppStarted();
    }

    /// ### DEPRECATED: Use `appStarted2` instead
    ///
    pub const AppStarted2 = appStarted2;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfo.html#appStarted)
    ///
    /// ## Parameter(s):
    ///
    /// ` startup_id: []u8 `
    ///
    pub fn appStarted2(startup_id: []u8) void {
        const startup_id_str = qtc.libqt_string{
            .len = startup_id.len,
            .data = startup_id.ptr,
        };
        qtc.KStartupInfo_AppStarted2(startup_id_str);
    }

    /// ### DEPRECATED: Use `setStartupId` instead
    ///
    pub const SetStartupId = setStartupId;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfo.html#setStartupId)
    ///
    /// ## Parameter(s):
    ///
    /// ` startup_id: []u8 `
    ///
    pub fn setStartupId(startup_id: []u8) void {
        const startup_id_str = qtc.libqt_string{
            .len = startup_id.len,
            .data = startup_id.ptr,
        };
        qtc.KStartupInfo_SetStartupId(startup_id_str);
    }

    /// ### DEPRECATED: Use `setNewStartupId` instead
    ///
    pub const SetNewStartupId = setNewStartupId;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfo.html#setNewStartupId)
    ///
    /// ## Parameter(s):
    ///
    /// ` window: QWindow `
    ///
    /// ` startup_id: []u8 `
    ///
    pub fn setNewStartupId(window: anytype, startup_id: []u8) void {
        comptime _ = @TypeOf(window)._is_QWindow;
        const startup_id_str = qtc.libqt_string{
            .len = startup_id.len,
            .data = startup_id.ptr,
        };
        qtc.KStartupInfo_SetNewStartupId(@ptrCast(window.ptr), startup_id_str);
    }

    /// ### DEPRECATED: Use `createNewStartupId` instead
    ///
    pub const CreateNewStartupId = createNewStartupId;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfo.html#createNewStartupId)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn createNewStartupId(allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.KStartupInfo_CreateNewStartupId();
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KStartupInfo.createNewStartupId: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `createNewStartupIdForTimestamp` instead
    ///
    pub const CreateNewStartupIdForTimestamp = createNewStartupIdForTimestamp;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfo.html#createNewStartupIdForTimestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` timestamp: u32 `
    ///
    pub fn createNewStartupIdForTimestamp(allocator: std.mem.Allocator, timestamp: u32) []u8 {
        var _bytearray: qtc.libqt_string = qtc.KStartupInfo_CreateNewStartupIdForTimestamp(@bitCast(timestamp));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KStartupInfo.createNewStartupIdForTimestamp: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `sendStartup` instead
    ///
    pub const SendStartup = sendStartup;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfo.html#sendStartup)
    ///
    /// ## Parameter(s):
    ///
    /// ` id: KStartupInfoId `
    ///
    /// ` data: KStartupInfoData `
    ///
    pub fn sendStartup(id: anytype, data: anytype) bool {
        comptime _ = @TypeOf(id)._is_KStartupInfoId;
        comptime _ = @TypeOf(data)._is_KStartupInfoData;
        return qtc.KStartupInfo_SendStartup(@ptrCast(id.ptr), @ptrCast(data.ptr));
    }

    /// ### DEPRECATED: Use `sendChange` instead
    ///
    pub const SendChange = sendChange;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfo.html#sendChange)
    ///
    /// ## Parameter(s):
    ///
    /// ` id: KStartupInfoId `
    ///
    /// ` data: KStartupInfoData `
    ///
    pub fn sendChange(id: anytype, data: anytype) bool {
        comptime _ = @TypeOf(id)._is_KStartupInfoId;
        comptime _ = @TypeOf(data)._is_KStartupInfoData;
        return qtc.KStartupInfo_SendChange(@ptrCast(id.ptr), @ptrCast(data.ptr));
    }

    /// ### DEPRECATED: Use `sendFinish` instead
    ///
    pub const SendFinish = sendFinish;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfo.html#sendFinish)
    ///
    /// ## Parameter(s):
    ///
    /// ` id: KStartupInfoId `
    ///
    pub fn sendFinish(id: anytype) bool {
        comptime _ = @TypeOf(id)._is_KStartupInfoId;
        return qtc.KStartupInfo_SendFinish(@ptrCast(id.ptr));
    }

    /// ### DEPRECATED: Use `sendFinish2` instead
    ///
    pub const SendFinish2 = sendFinish2;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfo.html#sendFinish)
    ///
    /// ## Parameter(s):
    ///
    /// ` id: KStartupInfoId `
    ///
    /// ` data: KStartupInfoData `
    ///
    pub fn sendFinish2(id: anytype, data: anytype) bool {
        comptime _ = @TypeOf(id)._is_KStartupInfoId;
        comptime _ = @TypeOf(data)._is_KStartupInfoData;
        return qtc.KStartupInfo_SendFinish2(@ptrCast(id.ptr), @ptrCast(data.ptr));
    }

    /// ### DEPRECATED: Use `resetStartupEnv` instead
    ///
    pub const ResetStartupEnv = resetStartupEnv;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfo.html#resetStartupEnv)
    ///
    pub fn resetStartupEnv() void {
        qtc.KStartupInfo_ResetStartupEnv();
    }

    /// ### DEPRECATED: Use `checkStartup` instead
    ///
    pub const CheckStartup = checkStartup;

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
    pub fn checkStartup(self: KStartupInfo, w: usize) i32 {
        return qtc.KStartupInfo_CheckStartup(@ptrCast(self.ptr), @bitCast(w));
    }

    /// ### DEPRECATED: Use `checkStartup2` instead
    ///
    pub const CheckStartup2 = checkStartup2;

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
    pub fn checkStartup2(self: KStartupInfo, w: usize, id: anytype) i32 {
        comptime _ = @TypeOf(id)._is_KStartupInfoId;
        return qtc.KStartupInfo_CheckStartup2(@ptrCast(self.ptr), @bitCast(w), @ptrCast(id.ptr));
    }

    /// ### DEPRECATED: Use `checkStartup3` instead
    ///
    pub const CheckStartup3 = checkStartup3;

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
    pub fn checkStartup3(self: KStartupInfo, w: usize, data: anytype) i32 {
        comptime _ = @TypeOf(data)._is_KStartupInfoData;
        return qtc.KStartupInfo_CheckStartup3(@ptrCast(self.ptr), @bitCast(w), @ptrCast(data.ptr));
    }

    /// ### DEPRECATED: Use `checkStartup4` instead
    ///
    pub const CheckStartup4 = checkStartup4;

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
    pub fn checkStartup4(self: KStartupInfo, w: usize, id: anytype, data: anytype) i32 {
        comptime _ = @TypeOf(id)._is_KStartupInfoId;
        comptime _ = @TypeOf(data)._is_KStartupInfoData;
        return qtc.KStartupInfo_CheckStartup4(@ptrCast(self.ptr), @bitCast(w), @ptrCast(id.ptr), @ptrCast(data.ptr));
    }

    /// ### DEPRECATED: Use `setTimeout` instead
    ///
    pub const SetTimeout = setTimeout;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfo.html#setTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfo `
    ///
    /// ` secs: u32 `
    ///
    pub fn setTimeout(self: KStartupInfo, secs: u32) void {
        qtc.KStartupInfo_SetTimeout(@ptrCast(self.ptr), @bitCast(secs));
    }

    /// ### DEPRECATED: Use `windowStartupId` instead
    ///
    pub const WindowStartupId = windowStartupId;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfo.html#windowStartupId)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` w: usize `
    ///
    pub fn windowStartupId(allocator: std.mem.Allocator, w: usize) []u8 {
        var _bytearray: qtc.libqt_string = qtc.KStartupInfo_WindowStartupId(@bitCast(w));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KStartupInfo.windowStartupId: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `gotNewStartup` instead
    ///
    pub const GotNewStartup = gotNewStartup;

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
    pub fn gotNewStartup(self: KStartupInfo, id: anytype, data: anytype) void {
        comptime _ = @TypeOf(id)._is_KStartupInfoId;
        comptime _ = @TypeOf(data)._is_KStartupInfoData;
        qtc.KStartupInfo_GotNewStartup(@ptrCast(self.ptr), @ptrCast(id.ptr), @ptrCast(data.ptr));
    }

    /// ### DEPRECATED: Use `onGotNewStartup` instead
    ///
    pub const OnGotNewStartup = onGotNewStartup;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfo.html#gotNewStartup)
    ///
    /// ## Parameters:
    ///
    /// ` self: KStartupInfo `
    ///
    /// ` callback: *const fn (self: KStartupInfo, id: KStartupInfoId, data: KStartupInfoData) callconv(.c) void `
    ///
    pub fn onGotNewStartup(self: KStartupInfo, callback: *const fn (KStartupInfo, KStartupInfoId, KStartupInfoData) callconv(.c) void) void {
        qtc.KStartupInfo_Connect_GotNewStartup(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `gotStartupChange` instead
    ///
    pub const GotStartupChange = gotStartupChange;

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
    pub fn gotStartupChange(self: KStartupInfo, id: anytype, data: anytype) void {
        comptime _ = @TypeOf(id)._is_KStartupInfoId;
        comptime _ = @TypeOf(data)._is_KStartupInfoData;
        qtc.KStartupInfo_GotStartupChange(@ptrCast(self.ptr), @ptrCast(id.ptr), @ptrCast(data.ptr));
    }

    /// ### DEPRECATED: Use `onGotStartupChange` instead
    ///
    pub const OnGotStartupChange = onGotStartupChange;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfo.html#gotStartupChange)
    ///
    /// ## Parameters:
    ///
    /// ` self: KStartupInfo `
    ///
    /// ` callback: *const fn (self: KStartupInfo, id: KStartupInfoId, data: KStartupInfoData) callconv(.c) void `
    ///
    pub fn onGotStartupChange(self: KStartupInfo, callback: *const fn (KStartupInfo, KStartupInfoId, KStartupInfoData) callconv(.c) void) void {
        qtc.KStartupInfo_Connect_GotStartupChange(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `gotRemoveStartup` instead
    ///
    pub const GotRemoveStartup = gotRemoveStartup;

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
    pub fn gotRemoveStartup(self: KStartupInfo, id: anytype, data: anytype) void {
        comptime _ = @TypeOf(id)._is_KStartupInfoId;
        comptime _ = @TypeOf(data)._is_KStartupInfoData;
        qtc.KStartupInfo_GotRemoveStartup(@ptrCast(self.ptr), @ptrCast(id.ptr), @ptrCast(data.ptr));
    }

    /// ### DEPRECATED: Use `onGotRemoveStartup` instead
    ///
    pub const OnGotRemoveStartup = onGotRemoveStartup;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfo.html#gotRemoveStartup)
    ///
    /// ## Parameters:
    ///
    /// ` self: KStartupInfo `
    ///
    /// ` callback: *const fn (self: KStartupInfo, id: KStartupInfoId, data: KStartupInfoData) callconv(.c) void `
    ///
    pub fn onGotRemoveStartup(self: KStartupInfo, callback: *const fn (KStartupInfo, KStartupInfoId, KStartupInfoData) callconv(.c) void) void {
        qtc.KStartupInfo_Connect_GotRemoveStartup(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `customEvent` instead
    ///
    pub const CustomEvent = customEvent;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfo.html#customEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfo `
    ///
    /// ` e_P: QEvent `
    ///
    pub fn customEvent(self: KStartupInfo, e_P: anytype) void {
        comptime _ = @TypeOf(e_P)._is_QEvent;
        qtc.KStartupInfo_CustomEvent(@ptrCast(self.ptr), @ptrCast(e_P.ptr));
    }

    /// ### DEPRECATED: Use `onCustomEvent` instead
    ///
    pub const OnCustomEvent = onCustomEvent;

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
    pub fn onCustomEvent(self: KStartupInfo, callback: *const fn (KStartupInfo, QEvent) callconv(.c) void) void {
        qtc.KStartupInfo_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCustomEvent` instead
    ///
    pub const SuperCustomEvent = superCustomEvent;

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
    pub fn superCustomEvent(self: KStartupInfo, e_P: anytype) void {
        comptime _ = @TypeOf(e_P)._is_QEvent;
        qtc.KStartupInfo_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(e_P.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KStartupInfo.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KStartupInfo.tr3: Memory allocation failed");
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
    /// ` self: KStartupInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KStartupInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KStartupInfo.objectName: Memory allocation failed");
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
    /// ` self: KStartupInfo `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: KStartupInfo, name: []const u8) void {
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
    /// ` self: KStartupInfo `
    ///
    pub fn isWidgetType(self: KStartupInfo) bool {
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
    /// ` self: KStartupInfo `
    ///
    pub fn isWindowType(self: KStartupInfo) bool {
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
    /// ` self: KStartupInfo `
    ///
    pub fn isQuickItemType(self: KStartupInfo) bool {
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
    /// ` self: KStartupInfo `
    ///
    pub fn signalsBlocked(self: KStartupInfo) bool {
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
    /// ` self: KStartupInfo `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KStartupInfo, b: bool) bool {
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
    /// ` self: KStartupInfo `
    ///
    pub fn thread(self: KStartupInfo) QThread {
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
    /// ` self: KStartupInfo `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KStartupInfo, _thread: anytype) bool {
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
    /// ` self: KStartupInfo `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KStartupInfo, interval: i32) i32 {
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
    /// ` self: KStartupInfo `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KStartupInfo, time: i64) i32 {
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
    /// ` self: KStartupInfo `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KStartupInfo, id: i32) void {
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
    /// ` self: KStartupInfo `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KStartupInfo, id: i32) void {
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
    /// ` self: KStartupInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KStartupInfo, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KStartupInfo.children: Memory allocation failed");
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
    /// ` self: KStartupInfo `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KStartupInfo, _parent: anytype) void {
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
    /// ` self: KStartupInfo `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KStartupInfo, filterObj: anytype) void {
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
    /// ` self: KStartupInfo `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KStartupInfo, obj: anytype) void {
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
    /// ` self: KStartupInfo `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KStartupInfo, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KStartupInfo `
    ///
    pub fn disconnect3(self: KStartupInfo) bool {
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
    /// ` self: KStartupInfo `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KStartupInfo, receiver: anytype) bool {
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
    /// ` self: KStartupInfo `
    ///
    pub fn dumpObjectTree(self: KStartupInfo) void {
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
    /// ` self: KStartupInfo `
    ///
    pub fn dumpObjectInfo(self: KStartupInfo) void {
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
    /// ` self: KStartupInfo `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KStartupInfo, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KStartupInfo `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: KStartupInfo, name: [:0]const u8) QVariant {
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
    /// ` self: KStartupInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KStartupInfo, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KStartupInfo.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KStartupInfo.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KStartupInfo `
    ///
    pub fn bindingStorage(self: KStartupInfo) QBindingStorage {
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
    /// ` self: KStartupInfo `
    ///
    pub fn bindingStorage2(self: KStartupInfo) QBindingStorage {
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
    /// ` self: KStartupInfo `
    ///
    pub fn destroyed(self: KStartupInfo) void {
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
    /// ` self: KStartupInfo `
    ///
    /// ` callback: *const fn (self: KStartupInfo) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KStartupInfo, callback: *const fn (KStartupInfo) callconv(.c) void) void {
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
    /// ` self: KStartupInfo `
    ///
    pub fn parent(self: KStartupInfo) QObject {
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
    /// ` self: KStartupInfo `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KStartupInfo, classname: [:0]const u8) bool {
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
    /// ` self: KStartupInfo `
    ///
    pub fn deleteLater(self: KStartupInfo) void {
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
    /// ` self: KStartupInfo `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KStartupInfo, interval: i32, timerType: i32) i32 {
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
    /// ` self: KStartupInfo `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KStartupInfo, time: i64, timerType: i32) i32 {
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
    /// ` self: KStartupInfo `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KStartupInfo, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KStartupInfo `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KStartupInfo, signal: [:0]const u8) bool {
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
    /// ` self: KStartupInfo `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KStartupInfo, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KStartupInfo `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KStartupInfo, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KStartupInfo `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KStartupInfo, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KStartupInfo `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KStartupInfo, param1: anytype) void {
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
    /// ` self: KStartupInfo `
    ///
    /// ` callback: *const fn (self: KStartupInfo, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KStartupInfo, callback: *const fn (KStartupInfo, QObject) callconv(.c) void) void {
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
    /// ` self: KStartupInfo `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: KStartupInfo, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KStartupInfo_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KStartupInfo `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: KStartupInfo, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KStartupInfo_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KStartupInfo`
    ///
    /// ` callback: *const fn (self: KStartupInfo, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: KStartupInfo, callback: *const fn (KStartupInfo, QEvent) callconv(.c) bool) void {
        qtc.KStartupInfo_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KStartupInfo `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KStartupInfo, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KStartupInfo_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KStartupInfo `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: KStartupInfo, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KStartupInfo_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KStartupInfo`
    ///
    /// ` callback: *const fn (self: KStartupInfo, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: KStartupInfo, callback: *const fn (KStartupInfo, QObject, QEvent) callconv(.c) bool) void {
        qtc.KStartupInfo_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KStartupInfo `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: KStartupInfo, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KStartupInfo_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KStartupInfo `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: KStartupInfo, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KStartupInfo_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KStartupInfo`
    ///
    /// ` callback: *const fn (self: KStartupInfo, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: KStartupInfo, callback: *const fn (KStartupInfo, QTimerEvent) callconv(.c) void) void {
        qtc.KStartupInfo_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KStartupInfo `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: KStartupInfo, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KStartupInfo_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KStartupInfo `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: KStartupInfo, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KStartupInfo_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KStartupInfo`
    ///
    /// ` callback: *const fn (self: KStartupInfo, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: KStartupInfo, callback: *const fn (KStartupInfo, QChildEvent) callconv(.c) void) void {
        qtc.KStartupInfo_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KStartupInfo `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: KStartupInfo, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KStartupInfo_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KStartupInfo `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: KStartupInfo, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KStartupInfo_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KStartupInfo`
    ///
    /// ` callback: *const fn (self: KStartupInfo, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: KStartupInfo, callback: *const fn (KStartupInfo, QMetaMethod) callconv(.c) void) void {
        qtc.KStartupInfo_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KStartupInfo `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: KStartupInfo, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KStartupInfo_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KStartupInfo `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: KStartupInfo, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KStartupInfo_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KStartupInfo`
    ///
    /// ` callback: *const fn (self: KStartupInfo, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: KStartupInfo, callback: *const fn (KStartupInfo, QMetaMethod) callconv(.c) void) void {
        qtc.KStartupInfo_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KStartupInfo `
    ///
    pub fn sender(self: KStartupInfo) QObject {
        return .{ .ptr = qtc.KStartupInfo_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KStartupInfo `
    ///
    pub fn superSender(self: KStartupInfo) QObject {
        return .{ .ptr = qtc.KStartupInfo_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: KStartupInfo`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: KStartupInfo, callback: *const fn () callconv(.c) QObject) void {
        qtc.KStartupInfo_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KStartupInfo `
    ///
    pub fn senderSignalIndex(self: KStartupInfo) i32 {
        return qtc.KStartupInfo_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KStartupInfo `
    ///
    pub fn superSenderSignalIndex(self: KStartupInfo) i32 {
        return qtc.KStartupInfo_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KStartupInfo`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: KStartupInfo, callback: *const fn () callconv(.c) i32) void {
        qtc.KStartupInfo_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KStartupInfo `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: KStartupInfo, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KStartupInfo_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KStartupInfo `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: KStartupInfo, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KStartupInfo_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KStartupInfo`
    ///
    /// ` callback: *const fn (self: KStartupInfo, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: KStartupInfo, callback: *const fn (KStartupInfo, [*:0]const u8) callconv(.c) i32) void {
        qtc.KStartupInfo_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KStartupInfo `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: KStartupInfo, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KStartupInfo_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KStartupInfo `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: KStartupInfo, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KStartupInfo_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KStartupInfo`
    ///
    /// ` callback: *const fn (self: KStartupInfo, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: KStartupInfo, callback: *const fn (KStartupInfo, QMetaMethod) callconv(.c) bool) void {
        qtc.KStartupInfo_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KStartupInfo `
    ///
    /// ` callback: *const fn (self: KStartupInfo, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KStartupInfo, callback: *const fn (KStartupInfo, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfo.html#dtor.KStartupInfo)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KStartupInfo `
    ///
    pub fn delete(self: KStartupInfo) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KStartupInfoId object in C++ memory
    ///
    pub fn new() KStartupInfoId {
        return .{ .ptr = qtc.KStartupInfoId_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KStartupInfoId object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` data: KStartupInfoId `
    ///
    pub fn new2(data: anytype) KStartupInfoId {
        comptime _ = @TypeOf(data)._is_KStartupInfoId;
        return .{ .ptr = qtc.KStartupInfoId_new2(@ptrCast(data.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfoid.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoId `
    ///
    /// ` _id: KStartupInfoId `
    ///
    pub fn operatorEqual(self: KStartupInfoId, _id: anytype) bool {
        comptime _ = @TypeOf(_id)._is_KStartupInfoId;
        return qtc.KStartupInfoId_OperatorEqual(@ptrCast(self.ptr), @ptrCast(_id.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfoid.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoId `
    ///
    /// ` _id: KStartupInfoId `
    ///
    pub fn operatorNotEqual(self: KStartupInfoId, _id: anytype) bool {
        comptime _ = @TypeOf(_id)._is_KStartupInfoId;
        return qtc.KStartupInfoId_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(_id.ptr));
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfoid.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoId `
    ///
    pub fn isNull(self: KStartupInfoId) bool {
        return qtc.KStartupInfoId_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `initId` instead
    ///
    pub const InitId = initId;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfoid.html#initId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoId `
    ///
    pub fn initId(self: KStartupInfoId) void {
        qtc.KStartupInfoId_InitId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `id` instead
    ///
    pub const Id = id;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfoid.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoId `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn id(self: KStartupInfoId, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.KStartupInfoId_Id(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KStartupInfoId.id: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `timestamp` instead
    ///
    pub const Timestamp = timestamp;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfoid.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoId `
    ///
    pub fn timestamp(self: KStartupInfoId) usize {
        return qtc.KStartupInfoId_Timestamp(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setupStartupEnv` instead
    ///
    pub const SetupStartupEnv = setupStartupEnv;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfoid.html#setupStartupEnv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoId `
    ///
    pub fn setupStartupEnv(self: KStartupInfoId) bool {
        return qtc.KStartupInfoId_SetupStartupEnv(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfoid.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoId `
    ///
    /// ` data: KStartupInfoId `
    ///
    pub fn operatorAssign(self: KStartupInfoId, data: anytype) void {
        comptime _ = @TypeOf(data)._is_KStartupInfoId;
        qtc.KStartupInfoId_OperatorAssign(@ptrCast(self.ptr), @ptrCast(data.ptr));
    }

    /// ### DEPRECATED: Use `operatorLesser` instead
    ///
    pub const OperatorLesser = operatorLesser;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfoid.html#operator-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoId `
    ///
    /// ` _id: KStartupInfoId `
    ///
    pub fn operatorLesser(self: KStartupInfoId, _id: anytype) bool {
        comptime _ = @TypeOf(_id)._is_KStartupInfoId;
        return qtc.KStartupInfoId_OperatorLesser(@ptrCast(self.ptr), @ptrCast(_id.ptr));
    }

    /// ### DEPRECATED: Use `initId1` instead
    ///
    pub const InitId1 = initId1;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfoid.html#initId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoId `
    ///
    /// ` _id: []u8 `
    ///
    pub fn initId1(self: KStartupInfoId, _id: []u8) void {
        const id_str = qtc.libqt_string{
            .len = _id.len,
            .data = _id.ptr,
        };
        qtc.KStartupInfoId_InitId1(@ptrCast(self.ptr), id_str);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfoid.html#dtor.KStartupInfoId)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KStartupInfoId `
    ///
    pub fn delete(self: KStartupInfoId) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KStartupInfoData object in C++ memory
    ///
    pub fn new() KStartupInfoData {
        return .{ .ptr = qtc.KStartupInfoData_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KStartupInfoData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` data: KStartupInfoData `
    ///
    pub fn new2(data: anytype) KStartupInfoData {
        comptime _ = @TypeOf(data)._is_KStartupInfoData;
        return .{ .ptr = qtc.KStartupInfoData_new2(@ptrCast(data.ptr)) };
    }

    /// ### DEPRECATED: Use `setBin` instead
    ///
    pub const SetBin = setBin;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#setBin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    /// ` _bin: []const u8 `
    ///
    pub fn setBin(self: KStartupInfoData, _bin: []const u8) void {
        const bin_str = qtc.libqt_string{
            .len = _bin.len,
            .data = _bin.ptr,
        };
        qtc.KStartupInfoData_SetBin(@ptrCast(self.ptr), bin_str);
    }

    /// ### DEPRECATED: Use `bin` instead
    ///
    pub const Bin = bin;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#bin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn bin(self: KStartupInfoData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KStartupInfoData_Bin(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KStartupInfoData.bin: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setName(self: KStartupInfoData, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.KStartupInfoData_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `findName` instead
    ///
    pub const FindName = findName;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#findName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn findName(self: KStartupInfoData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KStartupInfoData_FindName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KStartupInfoData.findName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: KStartupInfoData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KStartupInfoData_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KStartupInfoData.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setDescription` instead
    ///
    pub const SetDescription = setDescription;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#setDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    /// ` descr: []const u8 `
    ///
    pub fn setDescription(self: KStartupInfoData, descr: []const u8) void {
        const descr_str = qtc.libqt_string{
            .len = descr.len,
            .data = descr.ptr,
        };
        qtc.KStartupInfoData_SetDescription(@ptrCast(self.ptr), descr_str);
    }

    /// ### DEPRECATED: Use `findDescription` instead
    ///
    pub const FindDescription = findDescription;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#findDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn findDescription(self: KStartupInfoData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KStartupInfoData_FindDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KStartupInfoData.findDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `description` instead
    ///
    pub const Description = description;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#description)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn description(self: KStartupInfoData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KStartupInfoData_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KStartupInfoData.description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setIcon` instead
    ///
    pub const SetIcon = setIcon;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    /// ` _icon: []const u8 `
    ///
    pub fn setIcon(self: KStartupInfoData, _icon: []const u8) void {
        const icon_str = qtc.libqt_string{
            .len = _icon.len,
            .data = _icon.ptr,
        };
        qtc.KStartupInfoData_SetIcon(@ptrCast(self.ptr), icon_str);
    }

    /// ### DEPRECATED: Use `findIcon` instead
    ///
    pub const FindIcon = findIcon;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#findIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn findIcon(self: KStartupInfoData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KStartupInfoData_FindIcon(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KStartupInfoData.findIcon: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `icon` instead
    ///
    pub const Icon = icon;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn icon(self: KStartupInfoData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KStartupInfoData_Icon(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KStartupInfoData.icon: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setDesktop` instead
    ///
    pub const SetDesktop = setDesktop;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#setDesktop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    /// ` _desktop: i32 `
    ///
    pub fn setDesktop(self: KStartupInfoData, _desktop: i32) void {
        qtc.KStartupInfoData_SetDesktop(@ptrCast(self.ptr), @bitCast(_desktop));
    }

    /// ### DEPRECATED: Use `desktop` instead
    ///
    pub const Desktop = desktop;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#desktop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    pub fn desktop(self: KStartupInfoData) i32 {
        return qtc.KStartupInfoData_Desktop(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWMClass` instead
    ///
    pub const SetWMClass = setWMClass;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#setWMClass)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    /// ` wmclass: []u8 `
    ///
    pub fn setWMClass(self: KStartupInfoData, wmclass: []u8) void {
        const wmclass_str = qtc.libqt_string{
            .len = wmclass.len,
            .data = wmclass.ptr,
        };
        qtc.KStartupInfoData_SetWMClass(@ptrCast(self.ptr), wmclass_str);
    }

    /// ### DEPRECATED: Use `findWMClass` instead
    ///
    pub const FindWMClass = findWMClass;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#findWMClass)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn findWMClass(self: KStartupInfoData, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.KStartupInfoData_FindWMClass(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KStartupInfoData.findWMClass: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KStartupInfoData.WMClass: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `addPid` instead
    ///
    pub const AddPid = addPid;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#addPid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    /// ` pid: i32 `
    ///
    pub fn addPid(self: KStartupInfoData, pid: i32) void {
        qtc.KStartupInfoData_AddPid(@ptrCast(self.ptr), pid);
    }

    /// ### DEPRECATED: Use `pids` instead
    ///
    pub const Pids = pids;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#pids)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn pids(self: KStartupInfoData, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.KStartupInfoData_Pids(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("KStartupInfoData.pids: Memory allocation failed");
        const _data_val: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isPid` instead
    ///
    pub const IsPid = isPid;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#is_pid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    /// ` pid: i32 `
    ///
    pub fn isPid(self: KStartupInfoData, pid: i32) bool {
        return qtc.KStartupInfoData_IsPid(@ptrCast(self.ptr), pid);
    }

    /// ### DEPRECATED: Use `setHostname` instead
    ///
    pub const SetHostname = setHostname;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#setHostname)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    pub fn setHostname(self: KStartupInfoData) void {
        qtc.KStartupInfoData_SetHostname(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hostname` instead
    ///
    pub const Hostname = hostname;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#hostname)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn hostname(self: KStartupInfoData, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.KStartupInfoData_Hostname(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KStartupInfoData.hostname: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setSilent` instead
    ///
    pub const SetSilent = setSilent;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#setSilent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    /// ` state: kstartupinfo_enums.TriState `
    ///
    pub fn setSilent(self: KStartupInfoData, state: i32) void {
        qtc.KStartupInfoData_SetSilent(@ptrCast(self.ptr), @bitCast(state));
    }

    /// ### DEPRECATED: Use `silent` instead
    ///
    pub const Silent = silent;

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
    pub fn silent(self: KStartupInfoData) i32 {
        return qtc.KStartupInfoData_Silent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `screen` instead
    ///
    pub const Screen = screen;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#screen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    pub fn screen(self: KStartupInfoData) i32 {
        return qtc.KStartupInfoData_Screen(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setScreen` instead
    ///
    pub const SetScreen = setScreen;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#setScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    /// ` _screen: i32 `
    ///
    pub fn setScreen(self: KStartupInfoData, _screen: i32) void {
        qtc.KStartupInfoData_SetScreen(@ptrCast(self.ptr), @bitCast(_screen));
    }

    /// ### DEPRECATED: Use `xinerama` instead
    ///
    pub const Xinerama = xinerama;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#xinerama)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    pub fn xinerama(self: KStartupInfoData) i32 {
        return qtc.KStartupInfoData_Xinerama(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setXinerama` instead
    ///
    pub const SetXinerama = setXinerama;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#setXinerama)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    /// ` _xinerama: i32 `
    ///
    pub fn setXinerama(self: KStartupInfoData, _xinerama: i32) void {
        qtc.KStartupInfoData_SetXinerama(@ptrCast(self.ptr), @bitCast(_xinerama));
    }

    /// ### DEPRECATED: Use `applicationId` instead
    ///
    pub const ApplicationId = applicationId;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#applicationId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn applicationId(self: KStartupInfoData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KStartupInfoData_ApplicationId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KStartupInfoData.applicationId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setApplicationId` instead
    ///
    pub const SetApplicationId = setApplicationId;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#setApplicationId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    /// ` _desktop: []const u8 `
    ///
    pub fn setApplicationId(self: KStartupInfoData, _desktop: []const u8) void {
        const desktop_str = qtc.libqt_string{
            .len = _desktop.len,
            .data = _desktop.ptr,
        };
        qtc.KStartupInfoData_SetApplicationId(@ptrCast(self.ptr), desktop_str);
    }

    /// ### DEPRECATED: Use `update` instead
    ///
    pub const Update = update;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    /// ` data: KStartupInfoData `
    ///
    pub fn update(self: KStartupInfoData, data: anytype) void {
        comptime _ = @TypeOf(data)._is_KStartupInfoData;
        qtc.KStartupInfoData_Update(@ptrCast(self.ptr), @ptrCast(data.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    /// ` data: KStartupInfoData `
    ///
    pub fn operatorAssign(self: KStartupInfoData, data: anytype) void {
        comptime _ = @TypeOf(data)._is_KStartupInfoData;
        qtc.KStartupInfoData_OperatorAssign(@ptrCast(self.ptr), @ptrCast(data.ptr));
    }

    /// ### DEPRECATED: Use `setHostname1` instead
    ///
    pub const SetHostname1 = setHostname1;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#setHostname)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStartupInfoData `
    ///
    /// ` _hostname: []u8 `
    ///
    pub fn setHostname1(self: KStartupInfoData, _hostname: []u8) void {
        const hostname_str = qtc.libqt_string{
            .len = _hostname.len,
            .data = _hostname.ptr,
        };
        qtc.KStartupInfoData_SetHostname1(@ptrCast(self.ptr), hostname_str);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kstartupinfodata.html#dtor.KStartupInfoData)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KStartupInfoData `
    ///
    pub fn delete(self: KStartupInfoData) void {
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
