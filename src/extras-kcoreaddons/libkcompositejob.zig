const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kjob_enums = @import("libkjob.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
pub const struct_constu8_constu8 = extern struct { first: []const u8, second: []const u8 };

/// https://api.kde.org/kcompositejob.html
pub const kcompositejob = struct {
    /// New constructs a new KCompositeJob object.
    ///
    ///
    pub fn New() QtC.KCompositeJob {
        return qtc.KCompositeJob_new();
    }

    /// New2 constructs a new KCompositeJob object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New2(parent: ?*anyopaque) QtC.KCompositeJob {
        return qtc.KCompositeJob_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.KCompositeJob ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KCompositeJob_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.KCompositeJob, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KCompositeJob_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.KCompositeJob, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KCompositeJob_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KCompositeJob, callback: *const fn (self: QtC.KCompositeJob, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.KCompositeJob_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.KCompositeJob, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KCompositeJob_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.KCompositeJob_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcompositejob.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kcompositejob.html#addSubjob)
    ///
    /// ``` self: QtC.KCompositeJob, job: QtC.KJob ```
    pub fn AddSubjob(self: ?*anyopaque, job: ?*anyopaque) bool {
        return qtc.KCompositeJob_AddSubjob(@ptrCast(self), @ptrCast(job));
    }

    /// [Qt documentation](https://api.kde.org/kcompositejob.html#addSubjob)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KCompositeJob, callback: *const fn (self: QtC.KCompositeJob, job: QtC.KJob) callconv(.c) bool ```
    pub fn OnAddSubjob(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KCompositeJob_OnAddSubjob(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kcompositejob.html#addSubjob)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KCompositeJob, job: QtC.KJob ```
    pub fn QBaseAddSubjob(self: ?*anyopaque, job: ?*anyopaque) bool {
        return qtc.KCompositeJob_QBaseAddSubjob(@ptrCast(self), @ptrCast(job));
    }

    /// [Qt documentation](https://api.kde.org/kcompositejob.html#removeSubjob)
    ///
    /// ``` self: QtC.KCompositeJob, job: QtC.KJob ```
    pub fn RemoveSubjob(self: ?*anyopaque, job: ?*anyopaque) bool {
        return qtc.KCompositeJob_RemoveSubjob(@ptrCast(self), @ptrCast(job));
    }

    /// [Qt documentation](https://api.kde.org/kcompositejob.html#removeSubjob)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KCompositeJob, callback: *const fn (self: QtC.KCompositeJob, job: QtC.KJob) callconv(.c) bool ```
    pub fn OnRemoveSubjob(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KCompositeJob_OnRemoveSubjob(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kcompositejob.html#removeSubjob)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KCompositeJob, job: QtC.KJob ```
    pub fn QBaseRemoveSubjob(self: ?*anyopaque, job: ?*anyopaque) bool {
        return qtc.KCompositeJob_QBaseRemoveSubjob(@ptrCast(self), @ptrCast(job));
    }

    /// [Qt documentation](https://api.kde.org/kcompositejob.html#hasSubjobs)
    ///
    /// ``` self: QtC.KCompositeJob ```
    pub fn HasSubjobs(self: ?*anyopaque) bool {
        return qtc.KCompositeJob_HasSubjobs(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kcompositejob.html#hasSubjobs)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KCompositeJob, callback: *const fn () callconv(.c) bool ```
    pub fn OnHasSubjobs(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KCompositeJob_OnHasSubjobs(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kcompositejob.html#hasSubjobs)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KCompositeJob ```
    pub fn QBaseHasSubjobs(self: ?*anyopaque) bool {
        return qtc.KCompositeJob_QBaseHasSubjobs(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kcompositejob.html#subjobs)
    ///
    /// ``` self: QtC.KCompositeJob, allocator: std.mem.Allocator ```
    pub fn Subjobs(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.KJob {
        const _arr: qtc.libqt_list = qtc.KCompositeJob_Subjobs(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KJob, _arr.len) catch @panic("kcompositejob.Subjobs: Memory allocation failed");
        const _data: [*]QtC.KJob = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kcompositejob.html#subjobs)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KCompositeJob, callback: *const fn () callconv(.c) [*:null]QtC.KJob ```
    pub fn OnSubjobs(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:null]QtC.KJob) void {
        qtc.KCompositeJob_OnSubjobs(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kcompositejob.html#subjobs)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KCompositeJob, allocator: std.mem.Allocator ```
    pub fn QBaseSubjobs(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.KJob {
        const _arr: qtc.libqt_list = qtc.KCompositeJob_QBaseSubjobs(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KJob, _arr.len) catch @panic("kcompositejob.Subjobs: Memory allocation failed");
        const _data: [*]QtC.KJob = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kcompositejob.html#clearSubjobs)
    ///
    /// ``` self: QtC.KCompositeJob ```
    pub fn ClearSubjobs(self: ?*anyopaque) void {
        qtc.KCompositeJob_ClearSubjobs(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kcompositejob.html#clearSubjobs)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KCompositeJob, callback: *const fn () callconv(.c) void ```
    pub fn OnClearSubjobs(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KCompositeJob_OnClearSubjobs(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kcompositejob.html#clearSubjobs)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KCompositeJob ```
    pub fn QBaseClearSubjobs(self: ?*anyopaque) void {
        qtc.KCompositeJob_QBaseClearSubjobs(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kcompositejob.html#slotResult)
    ///
    /// ``` self: QtC.KCompositeJob, job: QtC.KJob ```
    pub fn SlotResult(self: ?*anyopaque, job: ?*anyopaque) void {
        qtc.KCompositeJob_SlotResult(@ptrCast(self), @ptrCast(job));
    }

    /// [Qt documentation](https://api.kde.org/kcompositejob.html#slotResult)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KCompositeJob, callback: *const fn (self: QtC.KCompositeJob, job: QtC.KJob) callconv(.c) void ```
    pub fn OnSlotResult(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCompositeJob_OnSlotResult(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kcompositejob.html#slotResult)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KCompositeJob, job: QtC.KJob ```
    pub fn QBaseSlotResult(self: ?*anyopaque, job: ?*anyopaque) void {
        qtc.KCompositeJob_QBaseSlotResult(@ptrCast(self), @ptrCast(job));
    }

    /// [Qt documentation](https://api.kde.org/kcompositejob.html#slotInfoMessage)
    ///
    /// ``` self: QtC.KCompositeJob, job: QtC.KJob, message: []const u8 ```
    pub fn SlotInfoMessage(self: ?*anyopaque, job: ?*anyopaque, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.KCompositeJob_SlotInfoMessage(@ptrCast(self), @ptrCast(job), message_str);
    }

    /// [Qt documentation](https://api.kde.org/kcompositejob.html#slotInfoMessage)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KCompositeJob, callback: *const fn (self: QtC.KCompositeJob, job: QtC.KJob, message: [*:0]const u8) callconv(.c) void ```
    pub fn OnSlotInfoMessage(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KCompositeJob_OnSlotInfoMessage(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kcompositejob.html#slotInfoMessage)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KCompositeJob, job: QtC.KJob, message: []const u8 ```
    pub fn QBaseSlotInfoMessage(self: ?*anyopaque, job: ?*anyopaque, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.KCompositeJob_QBaseSlotInfoMessage(@ptrCast(self), @ptrCast(job), message_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KCompositeJob_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcompositejob.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KCompositeJob_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcompositejob.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#setUiDelegate)
    ///
    /// ``` self: QtC.KCompositeJob, delegate: QtC.KJobUiDelegate ```
    pub fn SetUiDelegate(self: ?*anyopaque, delegate: ?*anyopaque) void {
        qtc.KJob_SetUiDelegate(@ptrCast(self), @ptrCast(delegate));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#uiDelegate)
    ///
    /// ``` self: QtC.KCompositeJob ```
    pub fn UiDelegate(self: ?*anyopaque) QtC.KJobUiDelegate {
        return qtc.KJob_UiDelegate(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#capabilities)
    ///
    /// ``` self: QtC.KCompositeJob ```
    ///
    /// Returns: ``` flag of kjob_enums.Capability ```
    pub fn Capabilities(self: ?*anyopaque) i32 {
        return qtc.KJob_Capabilities(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#isSuspended)
    ///
    /// ``` self: QtC.KCompositeJob ```
    pub fn IsSuspended(self: ?*anyopaque) bool {
        return qtc.KJob_IsSuspended(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#kill)
    ///
    /// ``` self: QtC.KCompositeJob ```
    pub fn Kill(self: ?*anyopaque) bool {
        return qtc.KJob_Kill(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#suspend)
    ///
    /// ``` self: QtC.KCompositeJob ```
    pub fn Suspend(self: ?*anyopaque) bool {
        return qtc.KJob_Suspend(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#resume)
    ///
    /// ``` self: QtC.KCompositeJob ```
    pub fn Resume(self: ?*anyopaque) bool {
        return qtc.KJob_Resume(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#exec)
    ///
    /// ``` self: QtC.KCompositeJob ```
    pub fn Exec(self: ?*anyopaque) bool {
        return qtc.KJob_Exec(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#error)
    ///
    /// ``` self: QtC.KCompositeJob ```
    pub fn Error(self: ?*anyopaque) i32 {
        return qtc.KJob_Error(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#errorText)
    ///
    /// ``` self: QtC.KCompositeJob, allocator: std.mem.Allocator ```
    pub fn ErrorText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KJob_ErrorText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcompositejob.ErrorText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#processedAmount)
    ///
    /// ``` self: QtC.KCompositeJob, unit: kjob_enums.Unit ```
    pub fn ProcessedAmount(self: ?*anyopaque, unit: i32) u64 {
        return qtc.KJob_ProcessedAmount(@ptrCast(self), @intCast(unit));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#totalAmount)
    ///
    /// ``` self: QtC.KCompositeJob, unit: kjob_enums.Unit ```
    pub fn TotalAmount(self: ?*anyopaque, unit: i32) u64 {
        return qtc.KJob_TotalAmount(@ptrCast(self), @intCast(unit));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#percent)
    ///
    /// ``` self: QtC.KCompositeJob ```
    pub fn Percent(self: ?*anyopaque) u64 {
        return qtc.KJob_Percent(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#setAutoDelete)
    ///
    /// ``` self: QtC.KCompositeJob, autodelete: bool ```
    pub fn SetAutoDelete(self: ?*anyopaque, autodelete: bool) void {
        qtc.KJob_SetAutoDelete(@ptrCast(self), autodelete);
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#isAutoDelete)
    ///
    /// ``` self: QtC.KCompositeJob ```
    pub fn IsAutoDelete(self: ?*anyopaque) bool {
        return qtc.KJob_IsAutoDelete(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#setFinishedNotificationHidden)
    ///
    /// ``` self: QtC.KCompositeJob ```
    pub fn SetFinishedNotificationHidden(self: ?*anyopaque) void {
        qtc.KJob_SetFinishedNotificationHidden(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#isFinishedNotificationHidden)
    ///
    /// ``` self: QtC.KCompositeJob ```
    pub fn IsFinishedNotificationHidden(self: ?*anyopaque) bool {
        return qtc.KJob_IsFinishedNotificationHidden(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#isStartedWithExec)
    ///
    /// ``` self: QtC.KCompositeJob ```
    pub fn IsStartedWithExec(self: ?*anyopaque) bool {
        return qtc.KJob_IsStartedWithExec(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#elapsedTime)
    ///
    /// ``` self: QtC.KCompositeJob ```
    pub fn ElapsedTime(self: ?*anyopaque) i64 {
        return qtc.KJob_ElapsedTime(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#description)
    ///
    /// ``` self: QtC.KCompositeJob, job: QtC.KJob, title: []const u8 ```
    pub fn Description(self: ?*anyopaque, job: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.KJob_Description(@ptrCast(self), @ptrCast(job), title_str);
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#description)
    ///
    /// ``` self: QtC.KCompositeJob, callback: *const fn (self: QtC.KCompositeJob, job: QtC.KJob, title: [*:0]const u8) callconv(.c) void ```
    pub fn OnDescription(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KJob_Connect_Description(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#infoMessage)
    ///
    /// ``` self: QtC.KCompositeJob, job: QtC.KJob, message: []const u8 ```
    pub fn InfoMessage(self: ?*anyopaque, job: ?*anyopaque, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.KJob_InfoMessage(@ptrCast(self), @ptrCast(job), message_str);
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#infoMessage)
    ///
    /// ``` self: QtC.KCompositeJob, callback: *const fn (self: QtC.KCompositeJob, job: QtC.KJob, message: [*:0]const u8) callconv(.c) void ```
    pub fn OnInfoMessage(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KJob_Connect_InfoMessage(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#warning)
    ///
    /// ``` self: QtC.KCompositeJob, job: QtC.KJob, message: []const u8 ```
    pub fn Warning(self: ?*anyopaque, job: ?*anyopaque, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.KJob_Warning(@ptrCast(self), @ptrCast(job), message_str);
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#warning)
    ///
    /// ``` self: QtC.KCompositeJob, callback: *const fn (self: QtC.KCompositeJob, job: QtC.KJob, message: [*:0]const u8) callconv(.c) void ```
    pub fn OnWarning(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KJob_Connect_Warning(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#totalSize)
    ///
    /// ``` self: QtC.KCompositeJob, job: QtC.KJob, size: u64 ```
    pub fn TotalSize(self: ?*anyopaque, job: ?*anyopaque, size: u64) void {
        qtc.KJob_TotalSize(@ptrCast(self), @ptrCast(job), @intCast(size));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#totalSize)
    ///
    /// ``` self: QtC.KCompositeJob, callback: *const fn (self: QtC.KCompositeJob, job: QtC.KJob, size: u64) callconv(.c) void ```
    pub fn OnTotalSize(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, u64) callconv(.c) void) void {
        qtc.KJob_Connect_TotalSize(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#processedSize)
    ///
    /// ``` self: QtC.KCompositeJob, job: QtC.KJob, size: u64 ```
    pub fn ProcessedSize(self: ?*anyopaque, job: ?*anyopaque, size: u64) void {
        qtc.KJob_ProcessedSize(@ptrCast(self), @ptrCast(job), @intCast(size));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#processedSize)
    ///
    /// ``` self: QtC.KCompositeJob, callback: *const fn (self: QtC.KCompositeJob, job: QtC.KJob, size: u64) callconv(.c) void ```
    pub fn OnProcessedSize(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, u64) callconv(.c) void) void {
        qtc.KJob_Connect_ProcessedSize(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#speed)
    ///
    /// ``` self: QtC.KCompositeJob, job: QtC.KJob, speed: u64 ```
    pub fn Speed(self: ?*anyopaque, job: ?*anyopaque, speed: u64) void {
        qtc.KJob_Speed(@ptrCast(self), @ptrCast(job), @intCast(speed));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#speed)
    ///
    /// ``` self: QtC.KCompositeJob, callback: *const fn (self: QtC.KCompositeJob, job: QtC.KJob, speed: u64) callconv(.c) void ```
    pub fn OnSpeed(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, u64) callconv(.c) void) void {
        qtc.KJob_Connect_Speed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#kill)
    ///
    /// ``` self: QtC.KCompositeJob, verbosity: kjob_enums.KillVerbosity ```
    pub fn Kill1(self: ?*anyopaque, verbosity: i32) bool {
        return qtc.KJob_Kill1(@ptrCast(self), @intCast(verbosity));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#setFinishedNotificationHidden)
    ///
    /// ``` self: QtC.KCompositeJob, hide: bool ```
    pub fn SetFinishedNotificationHidden1(self: ?*anyopaque, hide: bool) void {
        qtc.KJob_SetFinishedNotificationHidden1(@ptrCast(self), hide);
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#description)
    ///
    /// ``` self: QtC.KCompositeJob, job: QtC.KJob, title: []const u8, field1: struct_constu8_constu8 ```
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
    /// [Qt documentation](https://api.kde.org/kjob.html#description)
    ///
    /// ``` self: QtC.KCompositeJob, callback: *const fn (self: QtC.KCompositeJob, job: QtC.KJob, title: [*:0]const u8, field1: struct_constu8_constu8) callconv(.c) void ```
    pub fn OnDescription3(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, [*:0]const u8, struct_constu8_constu8) callconv(.c) void) void {
        qtc.KJob_Connect_Description3(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#description)
    ///
    /// ``` self: QtC.KCompositeJob, job: QtC.KJob, title: []const u8, field1: struct_constu8_constu8, field2: struct_constu8_constu8 ```
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
    /// [Qt documentation](https://api.kde.org/kjob.html#description)
    ///
    /// ``` self: QtC.KCompositeJob, callback: *const fn (self: QtC.KCompositeJob, job: QtC.KJob, title: [*:0]const u8, field1: struct_constu8_constu8, field2: struct_constu8_constu8) callconv(.c) void ```
    pub fn OnDescription4(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, [*:0]const u8, struct_constu8_constu8, struct_constu8_constu8) callconv(.c) void) void {
        qtc.KJob_Connect_Description4(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.KCompositeJob, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcompositejob.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.KCompositeJob, name: []const u8 ```
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
    /// ``` self: QtC.KCompositeJob ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.KCompositeJob ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.KCompositeJob ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.KCompositeJob ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.KCompositeJob, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.KCompositeJob ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KCompositeJob, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KCompositeJob, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KCompositeJob, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KCompositeJob, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.KCompositeJob, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("kcompositejob.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.KCompositeJob, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.KCompositeJob, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.KCompositeJob, obj: QtC.QObject ```
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
    /// ``` self: QtC.KCompositeJob, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.KCompositeJob ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.KCompositeJob ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.KCompositeJob, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.KCompositeJob, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.KCompositeJob, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kcompositejob.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kcompositejob.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KCompositeJob ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KCompositeJob ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KCompositeJob ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KCompositeJob, callback: *const fn (self: QtC.KCompositeJob) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.KCompositeJob ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.KCompositeJob, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.KCompositeJob ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KCompositeJob, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KCompositeJob, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.KCompositeJob, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KCompositeJob, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KCompositeJob, callback: *const fn (self: QtC.KCompositeJob, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#start)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob ```
    pub fn Start(self: ?*anyopaque) void {
        qtc.KCompositeJob_Start(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#start)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob ```
    pub fn QBaseStart(self: ?*anyopaque) void {
        qtc.KCompositeJob_QBaseStart(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#start)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, callback: *const fn () callconv(.c) void ```
    pub fn OnStart(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KCompositeJob_OnStart(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#doKill)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob ```
    pub fn DoKill(self: ?*anyopaque) bool {
        return qtc.KCompositeJob_DoKill(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#doKill)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob ```
    pub fn QBaseDoKill(self: ?*anyopaque) bool {
        return qtc.KCompositeJob_QBaseDoKill(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#doKill)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, callback: *const fn () callconv(.c) bool ```
    pub fn OnDoKill(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KCompositeJob_OnDoKill(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#doSuspend)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob ```
    pub fn DoSuspend(self: ?*anyopaque) bool {
        return qtc.KCompositeJob_DoSuspend(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#doSuspend)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob ```
    pub fn QBaseDoSuspend(self: ?*anyopaque) bool {
        return qtc.KCompositeJob_QBaseDoSuspend(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#doSuspend)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, callback: *const fn () callconv(.c) bool ```
    pub fn OnDoSuspend(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KCompositeJob_OnDoSuspend(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#doResume)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob ```
    pub fn DoResume(self: ?*anyopaque) bool {
        return qtc.KCompositeJob_DoResume(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#doResume)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob ```
    pub fn QBaseDoResume(self: ?*anyopaque) bool {
        return qtc.KCompositeJob_QBaseDoResume(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#doResume)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, callback: *const fn () callconv(.c) bool ```
    pub fn OnDoResume(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KCompositeJob_OnDoResume(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#errorString)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, allocator: std.mem.Allocator ```
    pub fn ErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KCompositeJob_ErrorString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcompositejob.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#errorString)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, allocator: std.mem.Allocator ```
    pub fn QBaseErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KCompositeJob_QBaseErrorString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcompositejob.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#errorString)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, callback: *const fn () callconv(.c) [*:0]const u8 ```
    pub fn OnErrorString(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KCompositeJob_OnErrorString(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KCompositeJob_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KCompositeJob_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, callback: *const fn (self: QtC.KCompositeJob, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KCompositeJob_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KCompositeJob_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KCompositeJob_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, callback: *const fn (self: QtC.KCompositeJob, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KCompositeJob_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KCompositeJob_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KCompositeJob_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, callback: *const fn (self: QtC.KCompositeJob, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCompositeJob_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KCompositeJob_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KCompositeJob_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, callback: *const fn (self: QtC.KCompositeJob, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCompositeJob_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KCompositeJob_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KCompositeJob_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, callback: *const fn (self: QtC.KCompositeJob, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCompositeJob_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KCompositeJob_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KCompositeJob_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, callback: *const fn (self: QtC.KCompositeJob, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCompositeJob_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KCompositeJob_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KCompositeJob_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, callback: *const fn (self: QtC.KCompositeJob, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCompositeJob_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#setCapabilities)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, capabilities: flag of kjob_enums.Capability ```
    pub fn SetCapabilities(self: ?*anyopaque, capabilities: i32) void {
        qtc.KCompositeJob_SetCapabilities(@ptrCast(self), @intCast(capabilities));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#setCapabilities)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, capabilities: flag of kjob_enums.Capability ```
    pub fn QBaseSetCapabilities(self: ?*anyopaque, capabilities: i32) void {
        qtc.KCompositeJob_QBaseSetCapabilities(@ptrCast(self), @intCast(capabilities));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#setCapabilities)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, callback: *const fn (self: QtC.KCompositeJob, capabilities: flag of kjob_enums.Capability) callconv(.c) void ```
    pub fn OnSetCapabilities(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.KCompositeJob_OnSetCapabilities(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#isFinished)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob ```
    pub fn IsFinished(self: ?*anyopaque) bool {
        return qtc.KCompositeJob_IsFinished(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#isFinished)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob ```
    pub fn QBaseIsFinished(self: ?*anyopaque) bool {
        return qtc.KCompositeJob_QBaseIsFinished(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#isFinished)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, callback: *const fn () callconv(.c) bool ```
    pub fn OnIsFinished(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KCompositeJob_OnIsFinished(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#setError)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, errorCode: i32 ```
    pub fn SetError(self: ?*anyopaque, errorCode: i32) void {
        qtc.KCompositeJob_SetError(@ptrCast(self), @intCast(errorCode));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#setError)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, errorCode: i32 ```
    pub fn QBaseSetError(self: ?*anyopaque, errorCode: i32) void {
        qtc.KCompositeJob_QBaseSetError(@ptrCast(self), @intCast(errorCode));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#setError)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, callback: *const fn (self: QtC.KCompositeJob, errorCode: i32) callconv(.c) void ```
    pub fn OnSetError(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.KCompositeJob_OnSetError(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#setErrorText)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, errorText: []const u8 ```
    pub fn SetErrorText(self: ?*anyopaque, errorText: []const u8) void {
        const errorText_str = qtc.libqt_string{
            .len = errorText.len,
            .data = errorText.ptr,
        };
        qtc.KCompositeJob_SetErrorText(@ptrCast(self), errorText_str);
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#setErrorText)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, errorText: []const u8 ```
    pub fn QBaseSetErrorText(self: ?*anyopaque, errorText: []const u8) void {
        const errorText_str = qtc.libqt_string{
            .len = errorText.len,
            .data = errorText.ptr,
        };
        qtc.KCompositeJob_QBaseSetErrorText(@ptrCast(self), errorText_str);
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#setErrorText)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, callback: *const fn (self: QtC.KCompositeJob, errorText: [*:0]const u8) callconv(.c) void ```
    pub fn OnSetErrorText(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KCompositeJob_OnSetErrorText(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#setProcessedAmount)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, unit: kjob_enums.Unit, amount: u64 ```
    pub fn SetProcessedAmount(self: ?*anyopaque, unit: i32, amount: u64) void {
        qtc.KCompositeJob_SetProcessedAmount(@ptrCast(self), @intCast(unit), @intCast(amount));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#setProcessedAmount)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, unit: kjob_enums.Unit, amount: u64 ```
    pub fn QBaseSetProcessedAmount(self: ?*anyopaque, unit: i32, amount: u64) void {
        qtc.KCompositeJob_QBaseSetProcessedAmount(@ptrCast(self), @intCast(unit), @intCast(amount));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#setProcessedAmount)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, callback: *const fn (self: QtC.KCompositeJob, unit: kjob_enums.Unit, amount: u64) callconv(.c) void ```
    pub fn OnSetProcessedAmount(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, u64) callconv(.c) void) void {
        qtc.KCompositeJob_OnSetProcessedAmount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#setTotalAmount)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, unit: kjob_enums.Unit, amount: u64 ```
    pub fn SetTotalAmount(self: ?*anyopaque, unit: i32, amount: u64) void {
        qtc.KCompositeJob_SetTotalAmount(@ptrCast(self), @intCast(unit), @intCast(amount));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#setTotalAmount)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, unit: kjob_enums.Unit, amount: u64 ```
    pub fn QBaseSetTotalAmount(self: ?*anyopaque, unit: i32, amount: u64) void {
        qtc.KCompositeJob_QBaseSetTotalAmount(@ptrCast(self), @intCast(unit), @intCast(amount));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#setTotalAmount)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, callback: *const fn (self: QtC.KCompositeJob, unit: kjob_enums.Unit, amount: u64) callconv(.c) void ```
    pub fn OnSetTotalAmount(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, u64) callconv(.c) void) void {
        qtc.KCompositeJob_OnSetTotalAmount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#setProgressUnit)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, unit: kjob_enums.Unit ```
    pub fn SetProgressUnit(self: ?*anyopaque, unit: i32) void {
        qtc.KCompositeJob_SetProgressUnit(@ptrCast(self), @intCast(unit));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#setProgressUnit)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, unit: kjob_enums.Unit ```
    pub fn QBaseSetProgressUnit(self: ?*anyopaque, unit: i32) void {
        qtc.KCompositeJob_QBaseSetProgressUnit(@ptrCast(self), @intCast(unit));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#setProgressUnit)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, callback: *const fn (self: QtC.KCompositeJob, unit: kjob_enums.Unit) callconv(.c) void ```
    pub fn OnSetProgressUnit(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.KCompositeJob_OnSetProgressUnit(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#setPercent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, percentage: u64 ```
    pub fn SetPercent(self: ?*anyopaque, percentage: u64) void {
        qtc.KCompositeJob_SetPercent(@ptrCast(self), @intCast(percentage));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#setPercent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, percentage: u64 ```
    pub fn QBaseSetPercent(self: ?*anyopaque, percentage: u64) void {
        qtc.KCompositeJob_QBaseSetPercent(@ptrCast(self), @intCast(percentage));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#setPercent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, callback: *const fn (self: QtC.KCompositeJob, percentage: u64) callconv(.c) void ```
    pub fn OnSetPercent(self: ?*anyopaque, callback: *const fn (?*anyopaque, u64) callconv(.c) void) void {
        qtc.KCompositeJob_OnSetPercent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#emitResult)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob ```
    pub fn EmitResult(self: ?*anyopaque) void {
        qtc.KCompositeJob_EmitResult(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#emitResult)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob ```
    pub fn QBaseEmitResult(self: ?*anyopaque) void {
        qtc.KCompositeJob_QBaseEmitResult(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#emitResult)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, callback: *const fn () callconv(.c) void ```
    pub fn OnEmitResult(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KCompositeJob_OnEmitResult(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#emitPercent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, processedAmount: u64, totalAmount: u64 ```
    pub fn EmitPercent(self: ?*anyopaque, processedAmount: u64, totalAmount: u64) void {
        qtc.KCompositeJob_EmitPercent(@ptrCast(self), @intCast(processedAmount), @intCast(totalAmount));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#emitPercent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, processedAmount: u64, totalAmount: u64 ```
    pub fn QBaseEmitPercent(self: ?*anyopaque, processedAmount: u64, totalAmount: u64) void {
        qtc.KCompositeJob_QBaseEmitPercent(@ptrCast(self), @intCast(processedAmount), @intCast(totalAmount));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#emitPercent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, callback: *const fn (self: QtC.KCompositeJob, processedAmount: u64, totalAmount: u64) callconv(.c) void ```
    pub fn OnEmitPercent(self: ?*anyopaque, callback: *const fn (?*anyopaque, u64, u64) callconv(.c) void) void {
        qtc.KCompositeJob_OnEmitPercent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#emitSpeed)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, speed: u64 ```
    pub fn EmitSpeed(self: ?*anyopaque, speed: u64) void {
        qtc.KCompositeJob_EmitSpeed(@ptrCast(self), @intCast(speed));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#emitSpeed)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, speed: u64 ```
    pub fn QBaseEmitSpeed(self: ?*anyopaque, speed: u64) void {
        qtc.KCompositeJob_QBaseEmitSpeed(@ptrCast(self), @intCast(speed));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#emitSpeed)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, callback: *const fn (self: QtC.KCompositeJob, speed: u64) callconv(.c) void ```
    pub fn OnEmitSpeed(self: ?*anyopaque, callback: *const fn (?*anyopaque, u64) callconv(.c) void) void {
        qtc.KCompositeJob_OnEmitSpeed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#startElapsedTimer)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob ```
    pub fn StartElapsedTimer(self: ?*anyopaque) void {
        qtc.KCompositeJob_StartElapsedTimer(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#startElapsedTimer)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob ```
    pub fn QBaseStartElapsedTimer(self: ?*anyopaque) void {
        qtc.KCompositeJob_QBaseStartElapsedTimer(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#startElapsedTimer)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, callback: *const fn () callconv(.c) void ```
    pub fn OnStartElapsedTimer(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KCompositeJob_OnStartElapsedTimer(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.KCompositeJob_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.KCompositeJob_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, callback: *const fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.KCompositeJob_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KCompositeJob_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KCompositeJob_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, callback: *const fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.KCompositeJob_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KCompositeJob_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KCompositeJob_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, callback: *const fn (self: QtC.KCompositeJob, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.KCompositeJob_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KCompositeJob_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KCompositeJob_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCompositeJob, callback: *const fn (self: QtC.KCompositeJob, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KCompositeJob_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#finished)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KCompositeJob, callback: *const fn (self: QtC.KCompositeJob, job: QtC.KJob) callconv(.c) void ```
    pub fn OnFinished(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KJob_Connect_Finished(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#suspended)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KCompositeJob, callback: *const fn (self: QtC.KCompositeJob, job: QtC.KJob) callconv(.c) void ```
    pub fn OnSuspended(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KJob_Connect_Suspended(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#resumed)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KCompositeJob, callback: *const fn (self: QtC.KCompositeJob, job: QtC.KJob) callconv(.c) void ```
    pub fn OnResumed(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KJob_Connect_Resumed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#result)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KCompositeJob, callback: *const fn (self: QtC.KCompositeJob, job: QtC.KJob) callconv(.c) void ```
    pub fn OnResult(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KJob_Connect_Result(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#totalAmountChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KCompositeJob, callback: *const fn (self: QtC.KCompositeJob, job: QtC.KJob, unit: kjob_enums.Unit, amount: u64) callconv(.c) void ```
    pub fn OnTotalAmountChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, u64) callconv(.c) void) void {
        qtc.KJob_Connect_TotalAmountChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#processedAmountChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KCompositeJob, callback: *const fn (self: QtC.KCompositeJob, job: QtC.KJob, unit: kjob_enums.Unit, amount: u64) callconv(.c) void ```
    pub fn OnProcessedAmountChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, u64) callconv(.c) void) void {
        qtc.KJob_Connect_ProcessedAmountChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// [Qt documentation](https://api.kde.org/kjob.html#percentChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KCompositeJob, callback: *const fn (self: QtC.KCompositeJob, job: QtC.KJob, percent: u64) callconv(.c) void ```
    pub fn OnPercentChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, u64) callconv(.c) void) void {
        qtc.KJob_Connect_PercentChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KCompositeJob, callback: *const fn (self: QtC.KCompositeJob, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kcompositejob.html#dtor.KCompositeJob)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KCompositeJob ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KCompositeJob_Delete(@ptrCast(self));
    }
};
