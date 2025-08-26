const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kjob_enums = @import("libkjob.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
pub const struct_constu8_constu8 = extern struct { first: []const u8, second: []const u8 };

/// https://api-staging.kde.org/klistopenfilesjob.html
pub const klistopenfilesjob = struct {
    /// New constructs a new KListOpenFilesJob object.
    ///
    /// ``` path: []const u8 ```
    pub fn New(path: []const u8) QtC.KListOpenFilesJob {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };

        return qtc.KListOpenFilesJob_new(path_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/qobject.html#metaObject)
    ///
    /// ``` self: QtC.KListOpenFilesJob ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KListOpenFilesJob_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.KListOpenFilesJob, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KListOpenFilesJob_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.KListOpenFilesJob, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KListOpenFilesJob_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KListOpenFilesJob, slot: fn (self: QtC.KListOpenFilesJob, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.KListOpenFilesJob_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.KListOpenFilesJob, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KListOpenFilesJob_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://api-staging.kde.org/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.KListOpenFilesJob_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klistopenfilesjob.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/klistopenfilesjob.html#start)
    ///
    /// ``` self: QtC.KListOpenFilesJob ```
    pub fn Start(self: ?*anyopaque) void {
        qtc.KListOpenFilesJob_Start(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/klistopenfilesjob.html#start)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KListOpenFilesJob, slot: fn () callconv(.c) void ```
    pub fn OnStart(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KListOpenFilesJob_OnStart(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/klistopenfilesjob.html#start)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KListOpenFilesJob ```
    pub fn QBaseStart(self: ?*anyopaque) void {
        qtc.KListOpenFilesJob_QBaseStart(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/klistopenfilesjob.html#processInfoList)
    ///
    /// ``` self: QtC.KListOpenFilesJob, allocator: std.mem.Allocator ```
    pub fn ProcessInfoList(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.KProcessList__KProcessInfo {
        const _arr: qtc.libqt_list = qtc.KListOpenFilesJob_ProcessInfoList(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KProcessList__KProcessInfo, _arr.len) catch @panic("klistopenfilesjob.ProcessInfoList: Memory allocation failed");
        const _data: [*]QtC.KProcessList__KProcessInfo = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KListOpenFilesJob_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klistopenfilesjob.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KListOpenFilesJob_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klistopenfilesjob.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#setUiDelegate)
    ///
    /// ``` self: QtC.KListOpenFilesJob, delegate: QtC.KJobUiDelegate ```
    pub fn SetUiDelegate(self: ?*anyopaque, delegate: ?*anyopaque) void {
        qtc.KJob_SetUiDelegate(@ptrCast(self), @ptrCast(delegate));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#uiDelegate)
    ///
    /// ``` self: QtC.KListOpenFilesJob ```
    pub fn UiDelegate(self: ?*anyopaque) QtC.KJobUiDelegate {
        return qtc.KJob_UiDelegate(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#capabilities)
    ///
    /// ``` self: QtC.KListOpenFilesJob ```
    ///
    /// Returns: ``` flag of kjob_enums.Capability ```
    pub fn Capabilities(self: ?*anyopaque) i64 {
        return qtc.KJob_Capabilities(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#isSuspended)
    ///
    /// ``` self: QtC.KListOpenFilesJob ```
    pub fn IsSuspended(self: ?*anyopaque) bool {
        return qtc.KJob_IsSuspended(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#kill)
    ///
    /// ``` self: QtC.KListOpenFilesJob ```
    pub fn Kill(self: ?*anyopaque) bool {
        return qtc.KJob_Kill(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#suspend)
    ///
    /// ``` self: QtC.KListOpenFilesJob ```
    pub fn Suspend(self: ?*anyopaque) bool {
        return qtc.KJob_Suspend(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#resume)
    ///
    /// ``` self: QtC.KListOpenFilesJob ```
    pub fn Resume(self: ?*anyopaque) bool {
        return qtc.KJob_Resume(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#exec)
    ///
    /// ``` self: QtC.KListOpenFilesJob ```
    pub fn Exec(self: ?*anyopaque) bool {
        return qtc.KJob_Exec(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#error)
    ///
    /// ``` self: QtC.KListOpenFilesJob ```
    pub fn Error(self: ?*anyopaque) i32 {
        return qtc.KJob_Error(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#errorText)
    ///
    /// ``` self: QtC.KListOpenFilesJob, allocator: std.mem.Allocator ```
    pub fn ErrorText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KJob_ErrorText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klistopenfilesjob.ErrorText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#processedAmount)
    ///
    /// ``` self: QtC.KListOpenFilesJob, unit: kjob_enums.Unit ```
    pub fn ProcessedAmount(self: ?*anyopaque, unit: i32) u64 {
        return qtc.KJob_ProcessedAmount(@ptrCast(self), @intCast(unit));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#totalAmount)
    ///
    /// ``` self: QtC.KListOpenFilesJob, unit: kjob_enums.Unit ```
    pub fn TotalAmount(self: ?*anyopaque, unit: i32) u64 {
        return qtc.KJob_TotalAmount(@ptrCast(self), @intCast(unit));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#percent)
    ///
    /// ``` self: QtC.KListOpenFilesJob ```
    pub fn Percent(self: ?*anyopaque) u64 {
        return qtc.KJob_Percent(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#setAutoDelete)
    ///
    /// ``` self: QtC.KListOpenFilesJob, autodelete: bool ```
    pub fn SetAutoDelete(self: ?*anyopaque, autodelete: bool) void {
        qtc.KJob_SetAutoDelete(@ptrCast(self), autodelete);
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#isAutoDelete)
    ///
    /// ``` self: QtC.KListOpenFilesJob ```
    pub fn IsAutoDelete(self: ?*anyopaque) bool {
        return qtc.KJob_IsAutoDelete(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#setFinishedNotificationHidden)
    ///
    /// ``` self: QtC.KListOpenFilesJob ```
    pub fn SetFinishedNotificationHidden(self: ?*anyopaque) void {
        qtc.KJob_SetFinishedNotificationHidden(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#isFinishedNotificationHidden)
    ///
    /// ``` self: QtC.KListOpenFilesJob ```
    pub fn IsFinishedNotificationHidden(self: ?*anyopaque) bool {
        return qtc.KJob_IsFinishedNotificationHidden(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#isStartedWithExec)
    ///
    /// ``` self: QtC.KListOpenFilesJob ```
    pub fn IsStartedWithExec(self: ?*anyopaque) bool {
        return qtc.KJob_IsStartedWithExec(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#elapsedTime)
    ///
    /// ``` self: QtC.KListOpenFilesJob ```
    pub fn ElapsedTime(self: ?*anyopaque) i64 {
        return qtc.KJob_ElapsedTime(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#description)
    ///
    /// ``` self: QtC.KListOpenFilesJob, job: QtC.KJob, title: []const u8 ```
    pub fn Description(self: ?*anyopaque, job: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.KJob_Description(@ptrCast(self), @ptrCast(job), title_str);
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#description)
    ///
    /// ``` self: QtC.KListOpenFilesJob, slot: fn (self: QtC.KListOpenFilesJob, job: QtC.KJob, title: [*:0]const u8) callconv(.c) void ```
    pub fn OnDescription(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KJob_Connect_Description(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#infoMessage)
    ///
    /// ``` self: QtC.KListOpenFilesJob, job: QtC.KJob, message: []const u8 ```
    pub fn InfoMessage(self: ?*anyopaque, job: ?*anyopaque, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.KJob_InfoMessage(@ptrCast(self), @ptrCast(job), message_str);
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#infoMessage)
    ///
    /// ``` self: QtC.KListOpenFilesJob, slot: fn (self: QtC.KListOpenFilesJob, job: QtC.KJob, message: [*:0]const u8) callconv(.c) void ```
    pub fn OnInfoMessage(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KJob_Connect_InfoMessage(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#warning)
    ///
    /// ``` self: QtC.KListOpenFilesJob, job: QtC.KJob, message: []const u8 ```
    pub fn Warning(self: ?*anyopaque, job: ?*anyopaque, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.KJob_Warning(@ptrCast(self), @ptrCast(job), message_str);
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#warning)
    ///
    /// ``` self: QtC.KListOpenFilesJob, slot: fn (self: QtC.KListOpenFilesJob, job: QtC.KJob, message: [*:0]const u8) callconv(.c) void ```
    pub fn OnWarning(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KJob_Connect_Warning(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#totalSize)
    ///
    /// ``` self: QtC.KListOpenFilesJob, job: QtC.KJob, size: u64 ```
    pub fn TotalSize(self: ?*anyopaque, job: ?*anyopaque, size: u64) void {
        qtc.KJob_TotalSize(@ptrCast(self), @ptrCast(job), @intCast(size));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#totalSize)
    ///
    /// ``` self: QtC.KListOpenFilesJob, slot: fn (self: QtC.KListOpenFilesJob, job: QtC.KJob, size: u64) callconv(.c) void ```
    pub fn OnTotalSize(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, u64) callconv(.c) void) void {
        qtc.KJob_Connect_TotalSize(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#processedSize)
    ///
    /// ``` self: QtC.KListOpenFilesJob, job: QtC.KJob, size: u64 ```
    pub fn ProcessedSize(self: ?*anyopaque, job: ?*anyopaque, size: u64) void {
        qtc.KJob_ProcessedSize(@ptrCast(self), @ptrCast(job), @intCast(size));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#processedSize)
    ///
    /// ``` self: QtC.KListOpenFilesJob, slot: fn (self: QtC.KListOpenFilesJob, job: QtC.KJob, size: u64) callconv(.c) void ```
    pub fn OnProcessedSize(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, u64) callconv(.c) void) void {
        qtc.KJob_Connect_ProcessedSize(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#speed)
    ///
    /// ``` self: QtC.KListOpenFilesJob, job: QtC.KJob, speed: u64 ```
    pub fn Speed(self: ?*anyopaque, job: ?*anyopaque, speed: u64) void {
        qtc.KJob_Speed(@ptrCast(self), @ptrCast(job), @intCast(speed));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#speed)
    ///
    /// ``` self: QtC.KListOpenFilesJob, slot: fn (self: QtC.KListOpenFilesJob, job: QtC.KJob, speed: u64) callconv(.c) void ```
    pub fn OnSpeed(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, u64) callconv(.c) void) void {
        qtc.KJob_Connect_Speed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#kill)
    ///
    /// ``` self: QtC.KListOpenFilesJob, verbosity: kjob_enums.KillVerbosity ```
    pub fn Kill1(self: ?*anyopaque, verbosity: i32) bool {
        return qtc.KJob_Kill1(@ptrCast(self), @intCast(verbosity));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#setFinishedNotificationHidden)
    ///
    /// ``` self: QtC.KListOpenFilesJob, hide: bool ```
    pub fn SetFinishedNotificationHidden1(self: ?*anyopaque, hide: bool) void {
        qtc.KJob_SetFinishedNotificationHidden1(@ptrCast(self), hide);
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#description)
    ///
    /// ``` self: QtC.KListOpenFilesJob, job: QtC.KJob, title: []const u8, field1: struct_constu8_constu8 ```
    pub fn Description3(self: ?*anyopaque, job: ?*anyopaque, title: []const u8, field1: struct_constu8_constu8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const field1_pair = qtc.libqt_pair{
            .first = @ptrCast(field1.first),
            .second = @ptrCast(field1.second),
        };
        qtc.KJob_Description3(@ptrCast(self), @ptrCast(job), title_str, field1_pair);
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#description)
    ///
    /// ``` self: QtC.KListOpenFilesJob, slot: fn (self: QtC.KListOpenFilesJob, job: QtC.KJob, title: [*:0]const u8, field1: struct_constu8_constu8) callconv(.c) void ```
    pub fn OnDescription3(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, [*:0]const u8, struct_constu8_constu8) callconv(.c) void) void {
        qtc.KJob_Connect_Description3(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#description)
    ///
    /// ``` self: QtC.KListOpenFilesJob, job: QtC.KJob, title: []const u8, field1: struct_constu8_constu8, field2: struct_constu8_constu8 ```
    pub fn Description4(self: ?*anyopaque, job: ?*anyopaque, title: []const u8, field1: struct_constu8_constu8, field2: struct_constu8_constu8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const field1_pair = qtc.libqt_pair{
            .first = @ptrCast(field1.first),
            .second = @ptrCast(field1.second),
        };
        const field2_pair = qtc.libqt_pair{
            .first = @ptrCast(field2.first),
            .second = @ptrCast(field2.second),
        };
        qtc.KJob_Description4(@ptrCast(self), @ptrCast(job), title_str, field1_pair, field2_pair);
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#description)
    ///
    /// ``` self: QtC.KListOpenFilesJob, slot: fn (self: QtC.KListOpenFilesJob, job: QtC.KJob, title: [*:0]const u8, field1: struct_constu8_constu8, field2: struct_constu8_constu8) callconv(.c) void ```
    pub fn OnDescription4(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, [*:0]const u8, struct_constu8_constu8, struct_constu8_constu8) callconv(.c) void) void {
        qtc.KJob_Connect_Description4(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.KListOpenFilesJob, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klistopenfilesjob.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.KListOpenFilesJob, name: []const u8 ```
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
    /// ``` self: QtC.KListOpenFilesJob ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.KListOpenFilesJob ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.KListOpenFilesJob ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.KListOpenFilesJob ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.KListOpenFilesJob, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.KListOpenFilesJob ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KListOpenFilesJob, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KListOpenFilesJob, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KListOpenFilesJob, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KListOpenFilesJob, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.KListOpenFilesJob, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("klistopenfilesjob.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.KListOpenFilesJob, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.KListOpenFilesJob, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.KListOpenFilesJob, obj: QtC.QObject ```
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
    /// ``` self: QtC.KListOpenFilesJob, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.KListOpenFilesJob ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.KListOpenFilesJob ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.KListOpenFilesJob, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.KListOpenFilesJob, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.KListOpenFilesJob, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("klistopenfilesjob.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("klistopenfilesjob.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KListOpenFilesJob ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KListOpenFilesJob ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KListOpenFilesJob ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KListOpenFilesJob, slot: fn (self: QtC.KListOpenFilesJob) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.KListOpenFilesJob ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.KListOpenFilesJob, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.KListOpenFilesJob ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KListOpenFilesJob, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KListOpenFilesJob, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.KListOpenFilesJob, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KListOpenFilesJob, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KListOpenFilesJob, slot: fn (self: QtC.KListOpenFilesJob, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#doKill)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob ```
    pub fn DoKill(self: ?*anyopaque) bool {
        return qtc.KListOpenFilesJob_DoKill(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#doKill)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob ```
    pub fn QBaseDoKill(self: ?*anyopaque) bool {
        return qtc.KListOpenFilesJob_QBaseDoKill(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#doKill)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, slot: fn () callconv(.c) bool ```
    pub fn OnDoKill(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.KListOpenFilesJob_OnDoKill(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#doSuspend)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob ```
    pub fn DoSuspend(self: ?*anyopaque) bool {
        return qtc.KListOpenFilesJob_DoSuspend(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#doSuspend)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob ```
    pub fn QBaseDoSuspend(self: ?*anyopaque) bool {
        return qtc.KListOpenFilesJob_QBaseDoSuspend(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#doSuspend)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, slot: fn () callconv(.c) bool ```
    pub fn OnDoSuspend(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.KListOpenFilesJob_OnDoSuspend(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#doResume)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob ```
    pub fn DoResume(self: ?*anyopaque) bool {
        return qtc.KListOpenFilesJob_DoResume(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#doResume)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob ```
    pub fn QBaseDoResume(self: ?*anyopaque) bool {
        return qtc.KListOpenFilesJob_QBaseDoResume(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#doResume)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, slot: fn () callconv(.c) bool ```
    pub fn OnDoResume(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.KListOpenFilesJob_OnDoResume(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#errorString)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, allocator: std.mem.Allocator ```
    pub fn ErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KListOpenFilesJob_ErrorString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klistopenfilesjob.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#errorString)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, allocator: std.mem.Allocator ```
    pub fn QBaseErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KListOpenFilesJob_QBaseErrorString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klistopenfilesjob.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#errorString)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, slot: fn () callconv(.c) [*:0]const u8 ```
    pub fn OnErrorString(self: ?*anyopaque, slot: fn () callconv(.c) [*:0]const u8) void {
        qtc.KListOpenFilesJob_OnErrorString(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KListOpenFilesJob_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KListOpenFilesJob_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, slot: fn (self: QtC.KListOpenFilesJob, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KListOpenFilesJob_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KListOpenFilesJob_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KListOpenFilesJob_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, slot: fn (self: QtC.KListOpenFilesJob, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KListOpenFilesJob_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KListOpenFilesJob_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KListOpenFilesJob_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, slot: fn (self: QtC.KListOpenFilesJob, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KListOpenFilesJob_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KListOpenFilesJob_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KListOpenFilesJob_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, slot: fn (self: QtC.KListOpenFilesJob, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KListOpenFilesJob_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KListOpenFilesJob_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KListOpenFilesJob_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, slot: fn (self: QtC.KListOpenFilesJob, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KListOpenFilesJob_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KListOpenFilesJob_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KListOpenFilesJob_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, slot: fn (self: QtC.KListOpenFilesJob, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KListOpenFilesJob_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KListOpenFilesJob_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KListOpenFilesJob_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, slot: fn (self: QtC.KListOpenFilesJob, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KListOpenFilesJob_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#setCapabilities)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, capabilities: flag of kjob_enums.Capability ```
    pub fn SetCapabilities(self: ?*anyopaque, capabilities: i64) void {
        qtc.KListOpenFilesJob_SetCapabilities(@ptrCast(self), @intCast(capabilities));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#setCapabilities)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, capabilities: flag of kjob_enums.Capability ```
    pub fn QBaseSetCapabilities(self: ?*anyopaque, capabilities: i64) void {
        qtc.KListOpenFilesJob_QBaseSetCapabilities(@ptrCast(self), @intCast(capabilities));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#setCapabilities)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, slot: fn (self: QtC.KListOpenFilesJob, capabilities: flag of kjob_enums.Capability) callconv(.c) void ```
    pub fn OnSetCapabilities(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.KListOpenFilesJob_OnSetCapabilities(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#isFinished)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob ```
    pub fn IsFinished(self: ?*anyopaque) bool {
        return qtc.KListOpenFilesJob_IsFinished(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#isFinished)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob ```
    pub fn QBaseIsFinished(self: ?*anyopaque) bool {
        return qtc.KListOpenFilesJob_QBaseIsFinished(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#isFinished)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, slot: fn () callconv(.c) bool ```
    pub fn OnIsFinished(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.KListOpenFilesJob_OnIsFinished(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#setError)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, errorCode: i32 ```
    pub fn SetError(self: ?*anyopaque, errorCode: i32) void {
        qtc.KListOpenFilesJob_SetError(@ptrCast(self), @intCast(errorCode));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#setError)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, errorCode: i32 ```
    pub fn QBaseSetError(self: ?*anyopaque, errorCode: i32) void {
        qtc.KListOpenFilesJob_QBaseSetError(@ptrCast(self), @intCast(errorCode));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#setError)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, slot: fn (self: QtC.KListOpenFilesJob, errorCode: i32) callconv(.c) void ```
    pub fn OnSetError(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.KListOpenFilesJob_OnSetError(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#setErrorText)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, errorText: []const u8 ```
    pub fn SetErrorText(self: ?*anyopaque, errorText: []const u8) void {
        const errorText_str = qtc.libqt_string{
            .len = errorText.len,
            .data = errorText.ptr,
        };
        qtc.KListOpenFilesJob_SetErrorText(@ptrCast(self), errorText_str);
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#setErrorText)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, errorText: []const u8 ```
    pub fn QBaseSetErrorText(self: ?*anyopaque, errorText: []const u8) void {
        const errorText_str = qtc.libqt_string{
            .len = errorText.len,
            .data = errorText.ptr,
        };
        qtc.KListOpenFilesJob_QBaseSetErrorText(@ptrCast(self), errorText_str);
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#setErrorText)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, slot: fn (self: QtC.KListOpenFilesJob, errorText: [*:0]const u8) callconv(.c) void ```
    pub fn OnSetErrorText(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KListOpenFilesJob_OnSetErrorText(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#setProcessedAmount)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, unit: kjob_enums.Unit, amount: u64 ```
    pub fn SetProcessedAmount(self: ?*anyopaque, unit: i32, amount: u64) void {
        qtc.KListOpenFilesJob_SetProcessedAmount(@ptrCast(self), @intCast(unit), @intCast(amount));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#setProcessedAmount)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, unit: kjob_enums.Unit, amount: u64 ```
    pub fn QBaseSetProcessedAmount(self: ?*anyopaque, unit: i32, amount: u64) void {
        qtc.KListOpenFilesJob_QBaseSetProcessedAmount(@ptrCast(self), @intCast(unit), @intCast(amount));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#setProcessedAmount)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, slot: fn (self: QtC.KListOpenFilesJob, unit: kjob_enums.Unit, amount: u64) callconv(.c) void ```
    pub fn OnSetProcessedAmount(self: ?*anyopaque, slot: fn (?*anyopaque, i32, u64) callconv(.c) void) void {
        qtc.KListOpenFilesJob_OnSetProcessedAmount(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#setTotalAmount)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, unit: kjob_enums.Unit, amount: u64 ```
    pub fn SetTotalAmount(self: ?*anyopaque, unit: i32, amount: u64) void {
        qtc.KListOpenFilesJob_SetTotalAmount(@ptrCast(self), @intCast(unit), @intCast(amount));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#setTotalAmount)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, unit: kjob_enums.Unit, amount: u64 ```
    pub fn QBaseSetTotalAmount(self: ?*anyopaque, unit: i32, amount: u64) void {
        qtc.KListOpenFilesJob_QBaseSetTotalAmount(@ptrCast(self), @intCast(unit), @intCast(amount));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#setTotalAmount)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, slot: fn (self: QtC.KListOpenFilesJob, unit: kjob_enums.Unit, amount: u64) callconv(.c) void ```
    pub fn OnSetTotalAmount(self: ?*anyopaque, slot: fn (?*anyopaque, i32, u64) callconv(.c) void) void {
        qtc.KListOpenFilesJob_OnSetTotalAmount(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#setProgressUnit)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, unit: kjob_enums.Unit ```
    pub fn SetProgressUnit(self: ?*anyopaque, unit: i32) void {
        qtc.KListOpenFilesJob_SetProgressUnit(@ptrCast(self), @intCast(unit));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#setProgressUnit)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, unit: kjob_enums.Unit ```
    pub fn QBaseSetProgressUnit(self: ?*anyopaque, unit: i32) void {
        qtc.KListOpenFilesJob_QBaseSetProgressUnit(@ptrCast(self), @intCast(unit));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#setProgressUnit)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, slot: fn (self: QtC.KListOpenFilesJob, unit: kjob_enums.Unit) callconv(.c) void ```
    pub fn OnSetProgressUnit(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.KListOpenFilesJob_OnSetProgressUnit(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#setPercent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, percentage: u64 ```
    pub fn SetPercent(self: ?*anyopaque, percentage: u64) void {
        qtc.KListOpenFilesJob_SetPercent(@ptrCast(self), @intCast(percentage));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#setPercent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, percentage: u64 ```
    pub fn QBaseSetPercent(self: ?*anyopaque, percentage: u64) void {
        qtc.KListOpenFilesJob_QBaseSetPercent(@ptrCast(self), @intCast(percentage));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#setPercent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, slot: fn (self: QtC.KListOpenFilesJob, percentage: u64) callconv(.c) void ```
    pub fn OnSetPercent(self: ?*anyopaque, slot: fn (?*anyopaque, u64) callconv(.c) void) void {
        qtc.KListOpenFilesJob_OnSetPercent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#emitResult)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob ```
    pub fn EmitResult(self: ?*anyopaque) void {
        qtc.KListOpenFilesJob_EmitResult(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#emitResult)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob ```
    pub fn QBaseEmitResult(self: ?*anyopaque) void {
        qtc.KListOpenFilesJob_QBaseEmitResult(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#emitResult)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, slot: fn () callconv(.c) void ```
    pub fn OnEmitResult(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KListOpenFilesJob_OnEmitResult(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#emitPercent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, processedAmount: u64, totalAmount: u64 ```
    pub fn EmitPercent(self: ?*anyopaque, processedAmount: u64, totalAmount: u64) void {
        qtc.KListOpenFilesJob_EmitPercent(@ptrCast(self), @intCast(processedAmount), @intCast(totalAmount));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#emitPercent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, processedAmount: u64, totalAmount: u64 ```
    pub fn QBaseEmitPercent(self: ?*anyopaque, processedAmount: u64, totalAmount: u64) void {
        qtc.KListOpenFilesJob_QBaseEmitPercent(@ptrCast(self), @intCast(processedAmount), @intCast(totalAmount));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#emitPercent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, slot: fn (self: QtC.KListOpenFilesJob, processedAmount: u64, totalAmount: u64) callconv(.c) void ```
    pub fn OnEmitPercent(self: ?*anyopaque, slot: fn (?*anyopaque, u64, u64) callconv(.c) void) void {
        qtc.KListOpenFilesJob_OnEmitPercent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#emitSpeed)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, speed: u64 ```
    pub fn EmitSpeed(self: ?*anyopaque, speed: u64) void {
        qtc.KListOpenFilesJob_EmitSpeed(@ptrCast(self), @intCast(speed));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#emitSpeed)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, speed: u64 ```
    pub fn QBaseEmitSpeed(self: ?*anyopaque, speed: u64) void {
        qtc.KListOpenFilesJob_QBaseEmitSpeed(@ptrCast(self), @intCast(speed));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#emitSpeed)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, slot: fn (self: QtC.KListOpenFilesJob, speed: u64) callconv(.c) void ```
    pub fn OnEmitSpeed(self: ?*anyopaque, slot: fn (?*anyopaque, u64) callconv(.c) void) void {
        qtc.KListOpenFilesJob_OnEmitSpeed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#startElapsedTimer)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob ```
    pub fn StartElapsedTimer(self: ?*anyopaque) void {
        qtc.KListOpenFilesJob_StartElapsedTimer(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#startElapsedTimer)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob ```
    pub fn QBaseStartElapsedTimer(self: ?*anyopaque) void {
        qtc.KListOpenFilesJob_QBaseStartElapsedTimer(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#startElapsedTimer)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, slot: fn () callconv(.c) void ```
    pub fn OnStartElapsedTimer(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KListOpenFilesJob_OnStartElapsedTimer(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.KListOpenFilesJob_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.KListOpenFilesJob_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.KListOpenFilesJob_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KListOpenFilesJob_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KListOpenFilesJob_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.KListOpenFilesJob_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KListOpenFilesJob_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KListOpenFilesJob_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, slot: fn (self: QtC.KListOpenFilesJob, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.KListOpenFilesJob_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KListOpenFilesJob_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KListOpenFilesJob_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KListOpenFilesJob, slot: fn (self: QtC.KListOpenFilesJob, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KListOpenFilesJob_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#finished)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KListOpenFilesJob, slot: fn (self: QtC.KListOpenFilesJob, job: QtC.KJob) callconv(.c) void ```
    pub fn OnFinished(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KJob_Connect_Finished(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#suspended)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KListOpenFilesJob, slot: fn (self: QtC.KListOpenFilesJob, job: QtC.KJob) callconv(.c) void ```
    pub fn OnSuspended(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KJob_Connect_Suspended(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#resumed)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KListOpenFilesJob, slot: fn (self: QtC.KListOpenFilesJob, job: QtC.KJob) callconv(.c) void ```
    pub fn OnResumed(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KJob_Connect_Resumed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#result)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KListOpenFilesJob, slot: fn (self: QtC.KListOpenFilesJob, job: QtC.KJob) callconv(.c) void ```
    pub fn OnResult(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KJob_Connect_Result(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#totalAmountChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KListOpenFilesJob, slot: fn (self: QtC.KListOpenFilesJob, job: QtC.KJob, unit: kjob_enums.Unit, amount: u64) callconv(.c) void ```
    pub fn OnTotalAmountChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32, u64) callconv(.c) void) void {
        qtc.KJob_Connect_TotalAmountChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#processedAmountChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KListOpenFilesJob, slot: fn (self: QtC.KListOpenFilesJob, job: QtC.KJob, unit: kjob_enums.Unit, amount: u64) callconv(.c) void ```
    pub fn OnProcessedAmountChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32, u64) callconv(.c) void) void {
        qtc.KJob_Connect_ProcessedAmountChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api-staging.kde.org/kjob.html#percentChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KListOpenFilesJob, slot: fn (self: QtC.KListOpenFilesJob, job: QtC.KJob, percent: u64) callconv(.c) void ```
    pub fn OnPercentChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, u64) callconv(.c) void) void {
        qtc.KJob_Connect_PercentChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KListOpenFilesJob, slot: fn (self: QtC.KListOpenFilesJob, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/klistopenfilesjob.html#dtor.KListOpenFilesJob)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KListOpenFilesJob ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KListOpenFilesJob_Delete(@ptrCast(self));
    }
};

/// https://api-staging.kde.org/klistopenfilesjob.html#types
pub const enums = struct {
    pub const Error = enum {
        pub const NotSupported: i32 = 101;
        pub const InternalError: i32 = 102;
        pub const DoesNotExist: i32 = 111;
    };
};
