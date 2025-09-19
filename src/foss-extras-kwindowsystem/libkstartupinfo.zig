const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kstartupinfo_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://api.kde.org/kstartupinfo.html
pub const kstartupinfo = struct {
    /// New constructs a new KStartupInfo object.
    ///
    /// ``` flags: i32 ```
    pub fn New(flags: i32) QtC.KStartupInfo {
        return qtc.KStartupInfo_new(@intCast(flags));
    }

    /// New2 constructs a new KStartupInfo object.
    ///
    /// ``` flags: i32, parent: QtC.QObject ```
    pub fn New2(flags: i32, parent: ?*anyopaque) QtC.KStartupInfo {
        return qtc.KStartupInfo_new2(@intCast(flags), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.KStartupInfo ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KStartupInfo_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.KStartupInfo, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KStartupInfo_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.KStartupInfo, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KStartupInfo_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KStartupInfo, callback: *const fn (self: QtC.KStartupInfo, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.KStartupInfo_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.KStartupInfo, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KStartupInfo_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.KStartupInfo_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kstartupinfo.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfo.html#appStarted)
    ///
    ///
    pub fn AppStarted() void {
        qtc.KStartupInfo_AppStarted();
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfo.html#appStarted)
    ///
    /// ``` startup_id: []u8 ```
    pub fn AppStarted2(startup_id: []u8) void {
        const startup_id_str = qtc.libqt_string{
            .len = startup_id.len,
            .data = startup_id.ptr,
        };
        qtc.KStartupInfo_AppStarted2(startup_id_str);
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfo.html#setStartupId)
    ///
    /// ``` startup_id: []u8 ```
    pub fn SetStartupId(startup_id: []u8) void {
        const startup_id_str = qtc.libqt_string{
            .len = startup_id.len,
            .data = startup_id.ptr,
        };
        qtc.KStartupInfo_SetStartupId(startup_id_str);
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfo.html#setNewStartupId)
    ///
    /// ``` window: QtC.QWindow, startup_id: []u8 ```
    pub fn SetNewStartupId(window: ?*anyopaque, startup_id: []u8) void {
        const startup_id_str = qtc.libqt_string{
            .len = startup_id.len,
            .data = startup_id.ptr,
        };
        qtc.KStartupInfo_SetNewStartupId(@ptrCast(window), startup_id_str);
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfo.html#createNewStartupId)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn CreateNewStartupId(allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.KStartupInfo_CreateNewStartupId();
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kstartupinfo.CreateNewStartupId: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfo.html#createNewStartupIdForTimestamp)
    ///
    /// ``` timestamp: u32, allocator: std.mem.Allocator ```
    pub fn CreateNewStartupIdForTimestamp(timestamp: u32, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.KStartupInfo_CreateNewStartupIdForTimestamp(@intCast(timestamp));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kstartupinfo.CreateNewStartupIdForTimestamp: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfo.html#sendStartup)
    ///
    /// ``` id: QtC.KStartupInfoId, data: QtC.KStartupInfoData ```
    pub fn SendStartup(id: ?*anyopaque, data: ?*anyopaque) bool {
        return qtc.KStartupInfo_SendStartup(@ptrCast(id), @ptrCast(data));
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfo.html#sendChange)
    ///
    /// ``` id: QtC.KStartupInfoId, data: QtC.KStartupInfoData ```
    pub fn SendChange(id: ?*anyopaque, data: ?*anyopaque) bool {
        return qtc.KStartupInfo_SendChange(@ptrCast(id), @ptrCast(data));
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfo.html#sendFinish)
    ///
    /// ``` id: QtC.KStartupInfoId ```
    pub fn SendFinish(id: ?*anyopaque) bool {
        return qtc.KStartupInfo_SendFinish(@ptrCast(id));
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfo.html#sendFinish)
    ///
    /// ``` id: QtC.KStartupInfoId, data: QtC.KStartupInfoData ```
    pub fn SendFinish2(id: ?*anyopaque, data: ?*anyopaque) bool {
        return qtc.KStartupInfo_SendFinish2(@ptrCast(id), @ptrCast(data));
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfo.html#resetStartupEnv)
    ///
    ///
    pub fn ResetStartupEnv() void {
        qtc.KStartupInfo_ResetStartupEnv();
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfo.html#checkStartup)
    ///
    /// ``` self: QtC.KStartupInfo, w: usize ```
    ///
    /// Returns: ``` kstartupinfo_enums.startup_t ```
    pub fn CheckStartup(self: ?*anyopaque, w: usize) i32 {
        return qtc.KStartupInfo_CheckStartup(@ptrCast(self), @intCast(w));
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfo.html#checkStartup)
    ///
    /// ``` self: QtC.KStartupInfo, w: usize, id: QtC.KStartupInfoId ```
    ///
    /// Returns: ``` kstartupinfo_enums.startup_t ```
    pub fn CheckStartup2(self: ?*anyopaque, w: usize, id: ?*anyopaque) i32 {
        return qtc.KStartupInfo_CheckStartup2(@ptrCast(self), @intCast(w), @ptrCast(id));
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfo.html#checkStartup)
    ///
    /// ``` self: QtC.KStartupInfo, w: usize, data: QtC.KStartupInfoData ```
    ///
    /// Returns: ``` kstartupinfo_enums.startup_t ```
    pub fn CheckStartup3(self: ?*anyopaque, w: usize, data: ?*anyopaque) i32 {
        return qtc.KStartupInfo_CheckStartup3(@ptrCast(self), @intCast(w), @ptrCast(data));
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfo.html#checkStartup)
    ///
    /// ``` self: QtC.KStartupInfo, w: usize, id: QtC.KStartupInfoId, data: QtC.KStartupInfoData ```
    ///
    /// Returns: ``` kstartupinfo_enums.startup_t ```
    pub fn CheckStartup4(self: ?*anyopaque, w: usize, id: ?*anyopaque, data: ?*anyopaque) i32 {
        return qtc.KStartupInfo_CheckStartup4(@ptrCast(self), @intCast(w), @ptrCast(id), @ptrCast(data));
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfo.html#setTimeout)
    ///
    /// ``` self: QtC.KStartupInfo, secs: u32 ```
    pub fn SetTimeout(self: ?*anyopaque, secs: u32) void {
        qtc.KStartupInfo_SetTimeout(@ptrCast(self), @intCast(secs));
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfo.html#windowStartupId)
    ///
    /// ``` w: usize, allocator: std.mem.Allocator ```
    pub fn WindowStartupId(w: usize, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.KStartupInfo_WindowStartupId(@intCast(w));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kstartupinfo.WindowStartupId: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfo.html#gotNewStartup)
    ///
    /// ``` self: QtC.KStartupInfo, id: QtC.KStartupInfoId, data: QtC.KStartupInfoData ```
    pub fn GotNewStartup(self: ?*anyopaque, id: ?*anyopaque, data: ?*anyopaque) void {
        qtc.KStartupInfo_GotNewStartup(@ptrCast(self), @ptrCast(id), @ptrCast(data));
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfo.html#gotNewStartup)
    ///
    /// ``` self: QtC.KStartupInfo, callback: *const fn (self: QtC.KStartupInfo, id: QtC.KStartupInfoId, data: QtC.KStartupInfoData) callconv(.c) void ```
    pub fn OnGotNewStartup(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KStartupInfo_Connect_GotNewStartup(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfo.html#gotStartupChange)
    ///
    /// ``` self: QtC.KStartupInfo, id: QtC.KStartupInfoId, data: QtC.KStartupInfoData ```
    pub fn GotStartupChange(self: ?*anyopaque, id: ?*anyopaque, data: ?*anyopaque) void {
        qtc.KStartupInfo_GotStartupChange(@ptrCast(self), @ptrCast(id), @ptrCast(data));
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfo.html#gotStartupChange)
    ///
    /// ``` self: QtC.KStartupInfo, callback: *const fn (self: QtC.KStartupInfo, id: QtC.KStartupInfoId, data: QtC.KStartupInfoData) callconv(.c) void ```
    pub fn OnGotStartupChange(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KStartupInfo_Connect_GotStartupChange(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfo.html#gotRemoveStartup)
    ///
    /// ``` self: QtC.KStartupInfo, id: QtC.KStartupInfoId, data: QtC.KStartupInfoData ```
    pub fn GotRemoveStartup(self: ?*anyopaque, id: ?*anyopaque, data: ?*anyopaque) void {
        qtc.KStartupInfo_GotRemoveStartup(@ptrCast(self), @ptrCast(id), @ptrCast(data));
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfo.html#gotRemoveStartup)
    ///
    /// ``` self: QtC.KStartupInfo, callback: *const fn (self: QtC.KStartupInfo, id: QtC.KStartupInfoId, data: QtC.KStartupInfoData) callconv(.c) void ```
    pub fn OnGotRemoveStartup(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KStartupInfo_Connect_GotRemoveStartup(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfo.html#customEvent)
    ///
    /// ``` self: QtC.KStartupInfo, e_P: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, e_P: ?*anyopaque) void {
        qtc.KStartupInfo_CustomEvent(@ptrCast(self), @ptrCast(e_P));
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfo.html#customEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KStartupInfo, callback: *const fn (self: QtC.KStartupInfo, e_P: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KStartupInfo_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfo.html#customEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KStartupInfo, e_P: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, e_P: ?*anyopaque) void {
        qtc.KStartupInfo_QBaseCustomEvent(@ptrCast(self), @ptrCast(e_P));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KStartupInfo_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kstartupinfo.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KStartupInfo_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kstartupinfo.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.KStartupInfo, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kstartupinfo.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.KStartupInfo, name: []const u8 ```
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
    /// ``` self: QtC.KStartupInfo ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.KStartupInfo ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.KStartupInfo ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.KStartupInfo ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.KStartupInfo, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.KStartupInfo ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KStartupInfo, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KStartupInfo, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KStartupInfo, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KStartupInfo, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.KStartupInfo, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("kstartupinfo.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.KStartupInfo, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.KStartupInfo, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.KStartupInfo, obj: QtC.QObject ```
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
    /// ``` self: QtC.KStartupInfo, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.KStartupInfo ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.KStartupInfo ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.KStartupInfo, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.KStartupInfo, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.KStartupInfo, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KStartupInfo ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KStartupInfo ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KStartupInfo ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KStartupInfo, callback: *const fn (self: QtC.KStartupInfo) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.KStartupInfo ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.KStartupInfo, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.KStartupInfo ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KStartupInfo, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KStartupInfo, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.KStartupInfo, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KStartupInfo, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KStartupInfo, callback: *const fn (self: QtC.KStartupInfo, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KStartupInfo, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KStartupInfo_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KStartupInfo, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KStartupInfo_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KStartupInfo, callback: *const fn (self: QtC.KStartupInfo, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KStartupInfo_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KStartupInfo, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KStartupInfo_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KStartupInfo, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KStartupInfo_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KStartupInfo, callback: *const fn (self: QtC.KStartupInfo, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KStartupInfo_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KStartupInfo, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KStartupInfo_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KStartupInfo, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KStartupInfo_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KStartupInfo, callback: *const fn (self: QtC.KStartupInfo, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KStartupInfo_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KStartupInfo, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KStartupInfo_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KStartupInfo, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KStartupInfo_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KStartupInfo, callback: *const fn (self: QtC.KStartupInfo, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KStartupInfo_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KStartupInfo, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KStartupInfo_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KStartupInfo, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KStartupInfo_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KStartupInfo, callback: *const fn (self: QtC.KStartupInfo, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KStartupInfo_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KStartupInfo, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KStartupInfo_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KStartupInfo, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KStartupInfo_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KStartupInfo, callback: *const fn (self: QtC.KStartupInfo, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KStartupInfo_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KStartupInfo ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.KStartupInfo_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KStartupInfo ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.KStartupInfo_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KStartupInfo, callback: *const fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.KStartupInfo_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KStartupInfo ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KStartupInfo_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KStartupInfo ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KStartupInfo_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KStartupInfo, callback: *const fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.KStartupInfo_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KStartupInfo, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KStartupInfo_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KStartupInfo, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KStartupInfo_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KStartupInfo, callback: *const fn (self: QtC.KStartupInfo, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.KStartupInfo_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KStartupInfo, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KStartupInfo_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KStartupInfo, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KStartupInfo_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KStartupInfo, callback: *const fn (self: QtC.KStartupInfo, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KStartupInfo_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KStartupInfo, callback: *const fn (self: QtC.KStartupInfo, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfo.html#dtor.KStartupInfo)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KStartupInfo ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KStartupInfo_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/kstartupinfoid.html
pub const kstartupinfoid = struct {
    /// New constructs a new KStartupInfoId object.
    ///
    ///
    pub fn New() QtC.KStartupInfoId {
        return qtc.KStartupInfoId_new();
    }

    /// New2 constructs a new KStartupInfoId object.
    ///
    /// ``` data: QtC.KStartupInfoId ```
    pub fn New2(data: ?*anyopaque) QtC.KStartupInfoId {
        return qtc.KStartupInfoId_new2(@ptrCast(data));
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfoid.html#operator-eq-eq)
    ///
    /// ``` self: QtC.KStartupInfoId, id: QtC.KStartupInfoId ```
    pub fn OperatorEqual(self: ?*anyopaque, id: ?*anyopaque) bool {
        return qtc.KStartupInfoId_OperatorEqual(@ptrCast(self), @ptrCast(id));
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfoid.html#operator-not-eq)
    ///
    /// ``` self: QtC.KStartupInfoId, id: QtC.KStartupInfoId ```
    pub fn OperatorNotEqual(self: ?*anyopaque, id: ?*anyopaque) bool {
        return qtc.KStartupInfoId_OperatorNotEqual(@ptrCast(self), @ptrCast(id));
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfoid.html#isNull)
    ///
    /// ``` self: QtC.KStartupInfoId ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.KStartupInfoId_IsNull(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfoid.html#initId)
    ///
    /// ``` self: QtC.KStartupInfoId ```
    pub fn InitId(self: ?*anyopaque) void {
        qtc.KStartupInfoId_InitId(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfoid.html#id)
    ///
    /// ``` self: QtC.KStartupInfoId, allocator: std.mem.Allocator ```
    pub fn Id(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.KStartupInfoId_Id(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kstartupinfoid.Id: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfoid.html#timestamp)
    ///
    /// ``` self: QtC.KStartupInfoId ```
    pub fn Timestamp(self: ?*anyopaque) u64 {
        return qtc.KStartupInfoId_Timestamp(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfoid.html#setupStartupEnv)
    ///
    /// ``` self: QtC.KStartupInfoId ```
    pub fn SetupStartupEnv(self: ?*anyopaque) bool {
        return qtc.KStartupInfoId_SetupStartupEnv(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfoid.html#operator-eq)
    ///
    /// ``` self: QtC.KStartupInfoId, data: QtC.KStartupInfoId ```
    pub fn OperatorAssign(self: ?*anyopaque, data: ?*anyopaque) void {
        qtc.KStartupInfoId_OperatorAssign(@ptrCast(self), @ptrCast(data));
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfoid.html#operator-lt)
    ///
    /// ``` self: QtC.KStartupInfoId, id: QtC.KStartupInfoId ```
    pub fn OperatorLesser(self: ?*anyopaque, id: ?*anyopaque) bool {
        return qtc.KStartupInfoId_OperatorLesser(@ptrCast(self), @ptrCast(id));
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfoid.html#initId)
    ///
    /// ``` self: QtC.KStartupInfoId, id: []u8 ```
    pub fn InitId1(self: ?*anyopaque, id: []u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        qtc.KStartupInfoId_InitId1(@ptrCast(self), id_str);
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfoid.html#dtor.KStartupInfoId)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KStartupInfoId ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KStartupInfoId_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/kstartupinfodata.html
pub const kstartupinfodata = struct {
    /// New constructs a new KStartupInfoData object.
    ///
    ///
    pub fn New() QtC.KStartupInfoData {
        return qtc.KStartupInfoData_new();
    }

    /// New2 constructs a new KStartupInfoData object.
    ///
    /// ``` data: QtC.KStartupInfoData ```
    pub fn New2(data: ?*anyopaque) QtC.KStartupInfoData {
        return qtc.KStartupInfoData_new2(@ptrCast(data));
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfodata.html#setBin)
    ///
    /// ``` self: QtC.KStartupInfoData, bin: []const u8 ```
    pub fn SetBin(self: ?*anyopaque, bin: []const u8) void {
        const bin_str = qtc.libqt_string{
            .len = bin.len,
            .data = bin.ptr,
        };
        qtc.KStartupInfoData_SetBin(@ptrCast(self), bin_str);
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfodata.html#bin)
    ///
    /// ``` self: QtC.KStartupInfoData, allocator: std.mem.Allocator ```
    pub fn Bin(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KStartupInfoData_Bin(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kstartupinfodata.Bin: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfodata.html#setName)
    ///
    /// ``` self: QtC.KStartupInfoData, name: []const u8 ```
    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KStartupInfoData_SetName(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfodata.html#findName)
    ///
    /// ``` self: QtC.KStartupInfoData, allocator: std.mem.Allocator ```
    pub fn FindName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KStartupInfoData_FindName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kstartupinfodata.FindName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfodata.html#name)
    ///
    /// ``` self: QtC.KStartupInfoData, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KStartupInfoData_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kstartupinfodata.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfodata.html#setDescription)
    ///
    /// ``` self: QtC.KStartupInfoData, descr: []const u8 ```
    pub fn SetDescription(self: ?*anyopaque, descr: []const u8) void {
        const descr_str = qtc.libqt_string{
            .len = descr.len,
            .data = descr.ptr,
        };
        qtc.KStartupInfoData_SetDescription(@ptrCast(self), descr_str);
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfodata.html#findDescription)
    ///
    /// ``` self: QtC.KStartupInfoData, allocator: std.mem.Allocator ```
    pub fn FindDescription(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KStartupInfoData_FindDescription(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kstartupinfodata.FindDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfodata.html#description)
    ///
    /// ``` self: QtC.KStartupInfoData, allocator: std.mem.Allocator ```
    pub fn Description(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KStartupInfoData_Description(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kstartupinfodata.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfodata.html#setIcon)
    ///
    /// ``` self: QtC.KStartupInfoData, icon: []const u8 ```
    pub fn SetIcon(self: ?*anyopaque, icon: []const u8) void {
        const icon_str = qtc.libqt_string{
            .len = icon.len,
            .data = icon.ptr,
        };
        qtc.KStartupInfoData_SetIcon(@ptrCast(self), icon_str);
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfodata.html#findIcon)
    ///
    /// ``` self: QtC.KStartupInfoData, allocator: std.mem.Allocator ```
    pub fn FindIcon(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KStartupInfoData_FindIcon(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kstartupinfodata.FindIcon: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfodata.html#icon)
    ///
    /// ``` self: QtC.KStartupInfoData, allocator: std.mem.Allocator ```
    pub fn Icon(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KStartupInfoData_Icon(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kstartupinfodata.Icon: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfodata.html#setDesktop)
    ///
    /// ``` self: QtC.KStartupInfoData, desktop: i32 ```
    pub fn SetDesktop(self: ?*anyopaque, desktop: i32) void {
        qtc.KStartupInfoData_SetDesktop(@ptrCast(self), @intCast(desktop));
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfodata.html#desktop)
    ///
    /// ``` self: QtC.KStartupInfoData ```
    pub fn Desktop(self: ?*anyopaque) i32 {
        return qtc.KStartupInfoData_Desktop(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfodata.html#setWMClass)
    ///
    /// ``` self: QtC.KStartupInfoData, wmclass: []u8 ```
    pub fn SetWMClass(self: ?*anyopaque, wmclass: []u8) void {
        const wmclass_str = qtc.libqt_string{
            .len = wmclass.len,
            .data = wmclass.ptr,
        };
        qtc.KStartupInfoData_SetWMClass(@ptrCast(self), wmclass_str);
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfodata.html#findWMClass)
    ///
    /// ``` self: QtC.KStartupInfoData, allocator: std.mem.Allocator ```
    pub fn FindWMClass(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.KStartupInfoData_FindWMClass(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kstartupinfodata.FindWMClass: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfodata.html#WMClass)
    ///
    /// ``` self: QtC.KStartupInfoData, allocator: std.mem.Allocator ```
    pub fn WMClass(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.KStartupInfoData_WMClass(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kstartupinfodata.WMClass: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfodata.html#addPid)
    ///
    /// ``` self: QtC.KStartupInfoData, pid: i32 ```
    pub fn AddPid(self: ?*anyopaque, pid: i32) void {
        qtc.KStartupInfoData_AddPid(@ptrCast(self), pid);
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfodata.html#pids)
    ///
    /// ``` self: QtC.KStartupInfoData, allocator: std.mem.Allocator ```
    pub fn Pids(self: ?*anyopaque, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.KStartupInfoData_Pids(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("kstartupinfodata.Pids: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfodata.html#is_pid)
    ///
    /// ``` self: QtC.KStartupInfoData, pid: i32 ```
    pub fn IsPid(self: ?*anyopaque, pid: i32) bool {
        return qtc.KStartupInfoData_IsPid(@ptrCast(self), pid);
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfodata.html#setHostname)
    ///
    /// ``` self: QtC.KStartupInfoData ```
    pub fn SetHostname(self: ?*anyopaque) void {
        qtc.KStartupInfoData_SetHostname(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfodata.html#hostname)
    ///
    /// ``` self: QtC.KStartupInfoData, allocator: std.mem.Allocator ```
    pub fn Hostname(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.KStartupInfoData_Hostname(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kstartupinfodata.Hostname: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfodata.html#setSilent)
    ///
    /// ``` self: QtC.KStartupInfoData, state: kstartupinfo_enums.TriState ```
    pub fn SetSilent(self: ?*anyopaque, state: i32) void {
        qtc.KStartupInfoData_SetSilent(@ptrCast(self), @intCast(state));
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfodata.html#silent)
    ///
    /// ``` self: QtC.KStartupInfoData ```
    ///
    /// Returns: ``` kstartupinfo_enums.TriState ```
    pub fn Silent(self: ?*anyopaque) i32 {
        return qtc.KStartupInfoData_Silent(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfodata.html#screen)
    ///
    /// ``` self: QtC.KStartupInfoData ```
    pub fn Screen(self: ?*anyopaque) i32 {
        return qtc.KStartupInfoData_Screen(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfodata.html#setScreen)
    ///
    /// ``` self: QtC.KStartupInfoData, screen: i32 ```
    pub fn SetScreen(self: ?*anyopaque, screen: i32) void {
        qtc.KStartupInfoData_SetScreen(@ptrCast(self), @intCast(screen));
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfodata.html#xinerama)
    ///
    /// ``` self: QtC.KStartupInfoData ```
    pub fn Xinerama(self: ?*anyopaque) i32 {
        return qtc.KStartupInfoData_Xinerama(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfodata.html#setXinerama)
    ///
    /// ``` self: QtC.KStartupInfoData, xinerama: i32 ```
    pub fn SetXinerama(self: ?*anyopaque, xinerama: i32) void {
        qtc.KStartupInfoData_SetXinerama(@ptrCast(self), @intCast(xinerama));
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfodata.html#applicationId)
    ///
    /// ``` self: QtC.KStartupInfoData, allocator: std.mem.Allocator ```
    pub fn ApplicationId(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KStartupInfoData_ApplicationId(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kstartupinfodata.ApplicationId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfodata.html#setApplicationId)
    ///
    /// ``` self: QtC.KStartupInfoData, desktop: []const u8 ```
    pub fn SetApplicationId(self: ?*anyopaque, desktop: []const u8) void {
        const desktop_str = qtc.libqt_string{
            .len = desktop.len,
            .data = desktop.ptr,
        };
        qtc.KStartupInfoData_SetApplicationId(@ptrCast(self), desktop_str);
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfodata.html#update)
    ///
    /// ``` self: QtC.KStartupInfoData, data: QtC.KStartupInfoData ```
    pub fn Update(self: ?*anyopaque, data: ?*anyopaque) void {
        qtc.KStartupInfoData_Update(@ptrCast(self), @ptrCast(data));
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfodata.html#operator-eq)
    ///
    /// ``` self: QtC.KStartupInfoData, data: QtC.KStartupInfoData ```
    pub fn OperatorAssign(self: ?*anyopaque, data: ?*anyopaque) void {
        qtc.KStartupInfoData_OperatorAssign(@ptrCast(self), @ptrCast(data));
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfodata.html#setHostname)
    ///
    /// ``` self: QtC.KStartupInfoData, hostname: []u8 ```
    pub fn SetHostname1(self: ?*anyopaque, hostname: []u8) void {
        const hostname_str = qtc.libqt_string{
            .len = hostname.len,
            .data = hostname.ptr,
        };
        qtc.KStartupInfoData_SetHostname1(@ptrCast(self), hostname_str);
    }

    /// [Qt documentation](https://api.kde.org/kstartupinfodata.html#dtor.KStartupInfoData)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KStartupInfoData ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KStartupInfoData_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/kstartupinfo.html#types
pub const enums = struct {
    pub const KStartupInfo = enum {
        pub const CleanOnCantDetect: i32 = 1;
        pub const DisableKWinModule: i32 = 2;
        pub const AnnounceSilenceChanges: i32 = 4;
    };

    pub const startup_t = enum {
        pub const NoMatch: i32 = 0;
        pub const Match: i32 = 1;
        pub const CantDetect: i32 = 2;
    };

    pub const TriState = enum {
        pub const Yes: i32 = 0;
        pub const No: i32 = 1;
        pub const Unknown: i32 = 2;
    };
};
