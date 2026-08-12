const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KJob = @import("libqt6").KJob;
const KJobUiDelegate = @import("libqt6").KJobUiDelegate;
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
const kjob_enums = @import("libkjob.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kcompositejob.html)
pub const KCompositeJob = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kcompositejob.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KCompositeJob,

    pub const _is_KCompositeJob = {};
    pub const _is_KJob = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KCompositeJob object in C++ memory
    ///
    pub fn new() KCompositeJob {
        return .{ .ptr = qtc.KCompositeJob_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KCompositeJob object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) KCompositeJob {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.KCompositeJob_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    pub fn metaObject(self: KCompositeJob) QMetaObject {
        return .{ .ptr = qtc.KCompositeJob_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: KCompositeJob `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: KCompositeJob, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KCompositeJob_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCompositeJob `
    ///
    pub fn superMetaObject(self: KCompositeJob) QMetaObject {
        return .{ .ptr = qtc.KCompositeJob_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KCompositeJob, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KCompositeJob_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` callback: *const fn (self: KCompositeJob, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: KCompositeJob, callback: *const fn (KCompositeJob, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KCompositeJob_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: KCompositeJob, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KCompositeJob_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: KCompositeJob, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KCompositeJob_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` callback: *const fn (self: KCompositeJob, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: KCompositeJob, callback: *const fn (KCompositeJob, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KCompositeJob_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: KCompositeJob, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KCompositeJob_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KCompositeJob.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `addSubjob` instead
    ///
    pub const AddSubjob = addSubjob;

    /// ### [Upstream resources](https://api.kde.org/kcompositejob.html#addSubjob)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` job: KJob `
    ///
    pub fn addSubjob(self: KCompositeJob, job: anytype) bool {
        comptime _ = @TypeOf(job)._is_KJob;
        return qtc.KCompositeJob_AddSubjob(@ptrCast(self.ptr), @ptrCast(job.ptr));
    }

    /// ### DEPRECATED: Use `onAddSubjob` instead
    ///
    pub const OnAddSubjob = onAddSubjob;

    /// ### [Upstream resources](https://api.kde.org/kcompositejob.html#addSubjob)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` callback: *const fn (self: KCompositeJob, job: KJob) callconv(.c) bool `
    ///
    pub fn onAddSubjob(self: KCompositeJob, callback: *const fn (KCompositeJob, KJob) callconv(.c) bool) void {
        qtc.KCompositeJob_OnAddSubjob(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superAddSubjob` instead
    ///
    pub const SuperAddSubjob = superAddSubjob;

    /// ### [Upstream resources](https://api.kde.org/kcompositejob.html#addSubjob)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` job: KJob `
    ///
    pub fn superAddSubjob(self: KCompositeJob, job: anytype) bool {
        comptime _ = @TypeOf(job)._is_KJob;
        return qtc.KCompositeJob_SuperAddSubjob(@ptrCast(self.ptr), @ptrCast(job.ptr));
    }

    /// ### DEPRECATED: Use `removeSubjob` instead
    ///
    pub const RemoveSubjob = removeSubjob;

    /// ### [Upstream resources](https://api.kde.org/kcompositejob.html#removeSubjob)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` job: KJob `
    ///
    pub fn removeSubjob(self: KCompositeJob, job: anytype) bool {
        comptime _ = @TypeOf(job)._is_KJob;
        return qtc.KCompositeJob_RemoveSubjob(@ptrCast(self.ptr), @ptrCast(job.ptr));
    }

    /// ### DEPRECATED: Use `onRemoveSubjob` instead
    ///
    pub const OnRemoveSubjob = onRemoveSubjob;

    /// ### [Upstream resources](https://api.kde.org/kcompositejob.html#removeSubjob)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` callback: *const fn (self: KCompositeJob, job: KJob) callconv(.c) bool `
    ///
    pub fn onRemoveSubjob(self: KCompositeJob, callback: *const fn (KCompositeJob, KJob) callconv(.c) bool) void {
        qtc.KCompositeJob_OnRemoveSubjob(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRemoveSubjob` instead
    ///
    pub const SuperRemoveSubjob = superRemoveSubjob;

    /// ### [Upstream resources](https://api.kde.org/kcompositejob.html#removeSubjob)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` job: KJob `
    ///
    pub fn superRemoveSubjob(self: KCompositeJob, job: anytype) bool {
        comptime _ = @TypeOf(job)._is_KJob;
        return qtc.KCompositeJob_SuperRemoveSubjob(@ptrCast(self.ptr), @ptrCast(job.ptr));
    }

    /// ### DEPRECATED: Use `hasSubjobs` instead
    ///
    pub const HasSubjobs = hasSubjobs;

    /// ### [Upstream resources](https://api.kde.org/kcompositejob.html#hasSubjobs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    pub fn hasSubjobs(self: KCompositeJob) bool {
        return qtc.KCompositeJob_HasSubjobs(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onHasSubjobs` instead
    ///
    pub const OnHasSubjobs = onHasSubjobs;

    /// ### [Upstream resources](https://api.kde.org/kcompositejob.html#hasSubjobs)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onHasSubjobs(self: KCompositeJob, callback: *const fn () callconv(.c) bool) void {
        qtc.KCompositeJob_OnHasSubjobs(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superHasSubjobs` instead
    ///
    pub const SuperHasSubjobs = superHasSubjobs;

    /// ### [Upstream resources](https://api.kde.org/kcompositejob.html#hasSubjobs)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    pub fn superHasSubjobs(self: KCompositeJob) bool {
        return qtc.KCompositeJob_SuperHasSubjobs(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `subjobs` instead
    ///
    pub const Subjobs = subjobs;

    /// ### [Upstream resources](https://api.kde.org/kcompositejob.html#subjobs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn subjobs(self: KCompositeJob, allocator: std.mem.Allocator) []KJob {
        const _arr: qtc.libqt_list = qtc.KCompositeJob_Subjobs(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KJob, _arr.len) catch @panic("KCompositeJob.subjobs: Memory allocation failed");
        const _data_val: [*]QtC.KJob = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `onSubjobs` instead
    ///
    pub const OnSubjobs = onSubjobs;

    /// ### [Upstream resources](https://api.kde.org/kcompositejob.html#subjobs)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []KJob `
    ///
    pub fn onSubjobs(self: KCompositeJob, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.KCompositeJob_OnSubjobs(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSubjobs` instead
    ///
    pub const SuperSubjobs = superSubjobs;

    /// ### [Upstream resources](https://api.kde.org/kcompositejob.html#subjobs)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superSubjobs(self: KCompositeJob, allocator: std.mem.Allocator) []KJob {
        const _arr: qtc.libqt_list = qtc.KCompositeJob_SuperSubjobs(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KJob, _arr.len) catch @panic("KCompositeJob.subjobs: Memory allocation failed");
        const _data_val: [*]QtC.KJob = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `clearSubjobs` instead
    ///
    pub const ClearSubjobs = clearSubjobs;

    /// ### [Upstream resources](https://api.kde.org/kcompositejob.html#clearSubjobs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    pub fn clearSubjobs(self: KCompositeJob) void {
        qtc.KCompositeJob_ClearSubjobs(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onClearSubjobs` instead
    ///
    pub const OnClearSubjobs = onClearSubjobs;

    /// ### [Upstream resources](https://api.kde.org/kcompositejob.html#clearSubjobs)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onClearSubjobs(self: KCompositeJob, callback: *const fn () callconv(.c) void) void {
        qtc.KCompositeJob_OnClearSubjobs(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClearSubjobs` instead
    ///
    pub const SuperClearSubjobs = superClearSubjobs;

    /// ### [Upstream resources](https://api.kde.org/kcompositejob.html#clearSubjobs)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    pub fn superClearSubjobs(self: KCompositeJob) void {
        qtc.KCompositeJob_SuperClearSubjobs(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `slotResult` instead
    ///
    pub const SlotResult = slotResult;

    /// ### [Upstream resources](https://api.kde.org/kcompositejob.html#slotResult)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` job: KJob `
    ///
    pub fn slotResult(self: KCompositeJob, job: anytype) void {
        comptime _ = @TypeOf(job)._is_KJob;
        qtc.KCompositeJob_SlotResult(@ptrCast(self.ptr), @ptrCast(job.ptr));
    }

    /// ### DEPRECATED: Use `onSlotResult` instead
    ///
    pub const OnSlotResult = onSlotResult;

    /// ### [Upstream resources](https://api.kde.org/kcompositejob.html#slotResult)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` callback: *const fn (self: KCompositeJob, job: KJob) callconv(.c) void `
    ///
    pub fn onSlotResult(self: KCompositeJob, callback: *const fn (KCompositeJob, KJob) callconv(.c) void) void {
        qtc.KCompositeJob_OnSlotResult(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSlotResult` instead
    ///
    pub const SuperSlotResult = superSlotResult;

    /// ### [Upstream resources](https://api.kde.org/kcompositejob.html#slotResult)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` job: KJob `
    ///
    pub fn superSlotResult(self: KCompositeJob, job: anytype) void {
        comptime _ = @TypeOf(job)._is_KJob;
        qtc.KCompositeJob_SuperSlotResult(@ptrCast(self.ptr), @ptrCast(job.ptr));
    }

    /// ### DEPRECATED: Use `slotInfoMessage` instead
    ///
    pub const SlotInfoMessage = slotInfoMessage;

    /// ### [Upstream resources](https://api.kde.org/kcompositejob.html#slotInfoMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` job: KJob `
    ///
    /// ` message: []const u8 `
    ///
    pub fn slotInfoMessage(self: KCompositeJob, job: anytype, message: []const u8) void {
        comptime _ = @TypeOf(job)._is_KJob;
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.KCompositeJob_SlotInfoMessage(@ptrCast(self.ptr), @ptrCast(job.ptr), message_str);
    }

    /// ### DEPRECATED: Use `onSlotInfoMessage` instead
    ///
    pub const OnSlotInfoMessage = onSlotInfoMessage;

    /// ### [Upstream resources](https://api.kde.org/kcompositejob.html#slotInfoMessage)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` callback: *const fn (self: KCompositeJob, job: KJob, message: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onSlotInfoMessage(self: KCompositeJob, callback: *const fn (KCompositeJob, KJob, [*:0]const u8) callconv(.c) void) void {
        qtc.KCompositeJob_OnSlotInfoMessage(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSlotInfoMessage` instead
    ///
    pub const SuperSlotInfoMessage = superSlotInfoMessage;

    /// ### [Upstream resources](https://api.kde.org/kcompositejob.html#slotInfoMessage)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` job: KJob `
    ///
    /// ` message: []const u8 `
    ///
    pub fn superSlotInfoMessage(self: KCompositeJob, job: anytype, message: []const u8) void {
        comptime _ = @TypeOf(job)._is_KJob;
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.KCompositeJob_SuperSlotInfoMessage(@ptrCast(self.ptr), @ptrCast(job.ptr), message_str);
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KCompositeJob.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KCompositeJob.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setUiDelegate` instead
    ///
    pub const SetUiDelegate = setUiDelegate;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setUiDelegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` delegate: KJobUiDelegate `
    ///
    pub fn setUiDelegate(self: KCompositeJob, delegate: anytype) void {
        comptime _ = @TypeOf(delegate)._is_KJobUiDelegate;
        qtc.KJob_SetUiDelegate(@ptrCast(self.ptr), @ptrCast(delegate.ptr));
    }

    /// ### DEPRECATED: Use `uiDelegate` instead
    ///
    pub const UiDelegate = uiDelegate;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#uiDelegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    pub fn uiDelegate(self: KCompositeJob) KJobUiDelegate {
        return .{ .ptr = qtc.KJob_UiDelegate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `capabilities` instead
    ///
    pub const Capabilities = capabilities;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#capabilities)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    /// ## Returns:
    ///
    /// ` flag of kjob_enums.Capability `
    ///
    pub fn capabilities(self: KCompositeJob) i32 {
        return qtc.KJob_Capabilities(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSuspended` instead
    ///
    pub const IsSuspended = isSuspended;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#isSuspended)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    pub fn isSuspended(self: KCompositeJob) bool {
        return qtc.KJob_IsSuspended(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `kill` instead
    ///
    pub const Kill = kill;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#kill)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    pub fn kill(self: KCompositeJob) bool {
        return qtc.KJob_Kill(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `suspend0` instead
    ///
    pub const Suspend = suspend0;

    pub const @"suspend" = suspend0;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#suspend)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    pub fn suspend0(self: KCompositeJob) bool {
        return qtc.KJob_Suspend(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `resume0` instead
    ///
    pub const Resume = resume0;

    pub const @"resume" = resume0;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#resume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    pub fn resume0(self: KCompositeJob) bool {
        return qtc.KJob_Resume(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `exec` instead
    ///
    pub const Exec = exec;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#exec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    pub fn exec(self: KCompositeJob) bool {
        return qtc.KJob_Exec(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `error0` instead
    ///
    pub const Error = error0;

    pub const @"error" = error0;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    pub fn error0(self: KCompositeJob) i32 {
        return qtc.KJob_Error(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `errorText` instead
    ///
    pub const ErrorText = errorText;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#errorText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn errorText(self: KCompositeJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KJob_ErrorText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KCompositeJob.errorText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `processedAmount` instead
    ///
    pub const ProcessedAmount = processedAmount;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#processedAmount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    pub fn processedAmount(self: KCompositeJob, unit: i32) usize {
        return qtc.KJob_ProcessedAmount(@ptrCast(self.ptr), @bitCast(unit));
    }

    /// ### DEPRECATED: Use `totalAmount` instead
    ///
    pub const TotalAmount = totalAmount;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#totalAmount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    pub fn totalAmount(self: KCompositeJob, unit: i32) usize {
        return qtc.KJob_TotalAmount(@ptrCast(self.ptr), @bitCast(unit));
    }

    /// ### DEPRECATED: Use `percent` instead
    ///
    pub const Percent = percent;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#percent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    pub fn percent(self: KCompositeJob) usize {
        return qtc.KJob_Percent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutoDelete` instead
    ///
    pub const SetAutoDelete = setAutoDelete;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setAutoDelete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` autodelete: bool `
    ///
    pub fn setAutoDelete(self: KCompositeJob, autodelete: bool) void {
        qtc.KJob_SetAutoDelete(@ptrCast(self.ptr), autodelete);
    }

    /// ### DEPRECATED: Use `isAutoDelete` instead
    ///
    pub const IsAutoDelete = isAutoDelete;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#isAutoDelete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    pub fn isAutoDelete(self: KCompositeJob) bool {
        return qtc.KJob_IsAutoDelete(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFinishedNotificationHidden` instead
    ///
    pub const SetFinishedNotificationHidden = setFinishedNotificationHidden;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setFinishedNotificationHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    pub fn setFinishedNotificationHidden(self: KCompositeJob) void {
        qtc.KJob_SetFinishedNotificationHidden(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isFinishedNotificationHidden` instead
    ///
    pub const IsFinishedNotificationHidden = isFinishedNotificationHidden;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#isFinishedNotificationHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    pub fn isFinishedNotificationHidden(self: KCompositeJob) bool {
        return qtc.KJob_IsFinishedNotificationHidden(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isStartedWithExec` instead
    ///
    pub const IsStartedWithExec = isStartedWithExec;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#isStartedWithExec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    pub fn isStartedWithExec(self: KCompositeJob) bool {
        return qtc.KJob_IsStartedWithExec(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `elapsedTime` instead
    ///
    pub const ElapsedTime = elapsedTime;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#elapsedTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    pub fn elapsedTime(self: KCompositeJob) i64 {
        return qtc.KJob_ElapsedTime(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `infoMessage` instead
    ///
    pub const InfoMessage = infoMessage;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#infoMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` job: KJob `
    ///
    /// ` message: []const u8 `
    ///
    pub fn infoMessage(self: KCompositeJob, job: anytype, message: []const u8) void {
        comptime _ = @TypeOf(job)._is_KJob;
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.KJob_InfoMessage(@ptrCast(self.ptr), @ptrCast(job.ptr), message_str);
    }

    /// ### DEPRECATED: Use `onInfoMessage` instead
    ///
    pub const OnInfoMessage = onInfoMessage;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#infoMessage)
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` callback: *const fn (self: KCompositeJob, job: KJob, message: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onInfoMessage(self: KCompositeJob, callback: *const fn (KCompositeJob, KJob, [*:0]const u8) callconv(.c) void) void {
        qtc.KJob_Connect_InfoMessage(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `warning` instead
    ///
    pub const Warning = warning;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#warning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` job: KJob `
    ///
    /// ` message: []const u8 `
    ///
    pub fn warning(self: KCompositeJob, job: anytype, message: []const u8) void {
        comptime _ = @TypeOf(job)._is_KJob;
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.KJob_Warning(@ptrCast(self.ptr), @ptrCast(job.ptr), message_str);
    }

    /// ### DEPRECATED: Use `onWarning` instead
    ///
    pub const OnWarning = onWarning;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#warning)
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` callback: *const fn (self: KCompositeJob, job: KJob, message: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onWarning(self: KCompositeJob, callback: *const fn (KCompositeJob, KJob, [*:0]const u8) callconv(.c) void) void {
        qtc.KJob_Connect_Warning(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `totalSize` instead
    ///
    pub const TotalSize = totalSize;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#totalSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` job: KJob `
    ///
    /// ` size: usize `
    ///
    pub fn totalSize(self: KCompositeJob, job: anytype, size: usize) void {
        comptime _ = @TypeOf(job)._is_KJob;
        qtc.KJob_TotalSize(@ptrCast(self.ptr), @ptrCast(job.ptr), @bitCast(size));
    }

    /// ### DEPRECATED: Use `onTotalSize` instead
    ///
    pub const OnTotalSize = onTotalSize;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#totalSize)
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` callback: *const fn (self: KCompositeJob, job: KJob, size: usize) callconv(.c) void `
    ///
    pub fn onTotalSize(self: KCompositeJob, callback: *const fn (KCompositeJob, KJob, usize) callconv(.c) void) void {
        qtc.KJob_Connect_TotalSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `processedSize` instead
    ///
    pub const ProcessedSize = processedSize;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#processedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` job: KJob `
    ///
    /// ` size: usize `
    ///
    pub fn processedSize(self: KCompositeJob, job: anytype, size: usize) void {
        comptime _ = @TypeOf(job)._is_KJob;
        qtc.KJob_ProcessedSize(@ptrCast(self.ptr), @ptrCast(job.ptr), @bitCast(size));
    }

    /// ### DEPRECATED: Use `onProcessedSize` instead
    ///
    pub const OnProcessedSize = onProcessedSize;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#processedSize)
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` callback: *const fn (self: KCompositeJob, job: KJob, size: usize) callconv(.c) void `
    ///
    pub fn onProcessedSize(self: KCompositeJob, callback: *const fn (KCompositeJob, KJob, usize) callconv(.c) void) void {
        qtc.KJob_Connect_ProcessedSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `speed` instead
    ///
    pub const Speed = speed;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#speed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` job: KJob `
    ///
    /// ` _speed: usize `
    ///
    pub fn speed(self: KCompositeJob, job: anytype, _speed: usize) void {
        comptime _ = @TypeOf(job)._is_KJob;
        qtc.KJob_Speed(@ptrCast(self.ptr), @ptrCast(job.ptr), @bitCast(_speed));
    }

    /// ### DEPRECATED: Use `onSpeed` instead
    ///
    pub const OnSpeed = onSpeed;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#speed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` callback: *const fn (self: KCompositeJob, job: KJob, speed: usize) callconv(.c) void `
    ///
    pub fn onSpeed(self: KCompositeJob, callback: *const fn (KCompositeJob, KJob, usize) callconv(.c) void) void {
        qtc.KJob_Connect_Speed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `kill1` instead
    ///
    pub const Kill1 = kill1;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#kill)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` verbosity: kjob_enums.KillVerbosity `
    ///
    pub fn kill1(self: KCompositeJob, verbosity: i32) bool {
        return qtc.KJob_Kill1(@ptrCast(self.ptr), @bitCast(verbosity));
    }

    /// ### DEPRECATED: Use `setFinishedNotificationHidden1` instead
    ///
    pub const SetFinishedNotificationHidden1 = setFinishedNotificationHidden1;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setFinishedNotificationHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` hide: bool `
    ///
    pub fn setFinishedNotificationHidden1(self: KCompositeJob, hide: bool) void {
        qtc.KJob_SetFinishedNotificationHidden1(@ptrCast(self.ptr), hide);
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
    /// ` self: KCompositeJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KCompositeJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KCompositeJob.objectName: Memory allocation failed");
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
    /// ` self: KCompositeJob `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: KCompositeJob, name: []const u8) void {
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
    /// ` self: KCompositeJob `
    ///
    pub fn isWidgetType(self: KCompositeJob) bool {
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
    /// ` self: KCompositeJob `
    ///
    pub fn isWindowType(self: KCompositeJob) bool {
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
    /// ` self: KCompositeJob `
    ///
    pub fn isQuickItemType(self: KCompositeJob) bool {
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
    /// ` self: KCompositeJob `
    ///
    pub fn signalsBlocked(self: KCompositeJob) bool {
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
    /// ` self: KCompositeJob `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KCompositeJob, b: bool) bool {
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
    /// ` self: KCompositeJob `
    ///
    pub fn thread(self: KCompositeJob) QThread {
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
    /// ` self: KCompositeJob `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KCompositeJob, _thread: anytype) bool {
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
    /// ` self: KCompositeJob `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KCompositeJob, interval: i32) i32 {
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
    /// ` self: KCompositeJob `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KCompositeJob, time: i64) i32 {
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
    /// ` self: KCompositeJob `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KCompositeJob, id: i32) void {
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
    /// ` self: KCompositeJob `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KCompositeJob, id: i32) void {
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
    /// ` self: KCompositeJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KCompositeJob, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KCompositeJob.children: Memory allocation failed");
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
    /// ` self: KCompositeJob `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KCompositeJob, _parent: anytype) void {
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
    /// ` self: KCompositeJob `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KCompositeJob, filterObj: anytype) void {
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
    /// ` self: KCompositeJob `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KCompositeJob, obj: anytype) void {
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
    /// ` self: KCompositeJob `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KCompositeJob, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KCompositeJob `
    ///
    pub fn disconnect3(self: KCompositeJob) bool {
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
    /// ` self: KCompositeJob `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KCompositeJob, receiver: anytype) bool {
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
    /// ` self: KCompositeJob `
    ///
    pub fn dumpObjectTree(self: KCompositeJob) void {
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
    /// ` self: KCompositeJob `
    ///
    pub fn dumpObjectInfo(self: KCompositeJob) void {
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
    /// ` self: KCompositeJob `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KCompositeJob, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KCompositeJob `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: KCompositeJob, name: [:0]const u8) QVariant {
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
    /// ` self: KCompositeJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KCompositeJob, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KCompositeJob.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KCompositeJob.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KCompositeJob `
    ///
    pub fn bindingStorage(self: KCompositeJob) QBindingStorage {
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
    /// ` self: KCompositeJob `
    ///
    pub fn bindingStorage2(self: KCompositeJob) QBindingStorage {
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
    /// ` self: KCompositeJob `
    ///
    pub fn destroyed(self: KCompositeJob) void {
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
    /// ` self: KCompositeJob `
    ///
    /// ` callback: *const fn (self: KCompositeJob) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KCompositeJob, callback: *const fn (KCompositeJob) callconv(.c) void) void {
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
    /// ` self: KCompositeJob `
    ///
    pub fn parent(self: KCompositeJob) QObject {
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
    /// ` self: KCompositeJob `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KCompositeJob, classname: [:0]const u8) bool {
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
    /// ` self: KCompositeJob `
    ///
    pub fn deleteLater(self: KCompositeJob) void {
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
    /// ` self: KCompositeJob `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KCompositeJob, interval: i32, timerType: i32) i32 {
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
    /// ` self: KCompositeJob `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KCompositeJob, time: i64, timerType: i32) i32 {
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
    /// ` self: KCompositeJob `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KCompositeJob, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KCompositeJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KCompositeJob, signal: [:0]const u8) bool {
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
    /// ` self: KCompositeJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KCompositeJob, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KCompositeJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KCompositeJob, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KCompositeJob `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KCompositeJob, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KCompositeJob `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KCompositeJob, param1: anytype) void {
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
    /// ` self: KCompositeJob `
    ///
    /// ` callback: *const fn (self: KCompositeJob, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KCompositeJob, callback: *const fn (KCompositeJob, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `start` instead
    ///
    pub const Start = start;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#start)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    pub fn start(self: KCompositeJob) void {
        qtc.KCompositeJob_Start(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superStart` instead
    ///
    pub const SuperStart = superStart;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#start)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    pub fn superStart(self: KCompositeJob) void {
        qtc.KCompositeJob_SuperStart(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onStart` instead
    ///
    pub const OnStart = onStart;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#start)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompositeJob`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onStart(self: KCompositeJob, callback: *const fn () callconv(.c) void) void {
        qtc.KCompositeJob_OnStart(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `doKill` instead
    ///
    pub const DoKill = doKill;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#doKill)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    pub fn doKill(self: KCompositeJob) bool {
        return qtc.KCompositeJob_DoKill(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superDoKill` instead
    ///
    pub const SuperDoKill = superDoKill;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#doKill)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    pub fn superDoKill(self: KCompositeJob) bool {
        return qtc.KCompositeJob_SuperDoKill(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDoKill` instead
    ///
    pub const OnDoKill = onDoKill;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#doKill)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompositeJob`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onDoKill(self: KCompositeJob, callback: *const fn () callconv(.c) bool) void {
        qtc.KCompositeJob_OnDoKill(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `doSuspend` instead
    ///
    pub const DoSuspend = doSuspend;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#doSuspend)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    pub fn doSuspend(self: KCompositeJob) bool {
        return qtc.KCompositeJob_DoSuspend(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superDoSuspend` instead
    ///
    pub const SuperDoSuspend = superDoSuspend;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#doSuspend)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    pub fn superDoSuspend(self: KCompositeJob) bool {
        return qtc.KCompositeJob_SuperDoSuspend(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDoSuspend` instead
    ///
    pub const OnDoSuspend = onDoSuspend;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#doSuspend)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompositeJob`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onDoSuspend(self: KCompositeJob, callback: *const fn () callconv(.c) bool) void {
        qtc.KCompositeJob_OnDoSuspend(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `doResume` instead
    ///
    pub const DoResume = doResume;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#doResume)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    pub fn doResume(self: KCompositeJob) bool {
        return qtc.KCompositeJob_DoResume(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superDoResume` instead
    ///
    pub const SuperDoResume = superDoResume;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#doResume)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    pub fn superDoResume(self: KCompositeJob) bool {
        return qtc.KCompositeJob_SuperDoResume(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDoResume` instead
    ///
    pub const OnDoResume = onDoResume;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#doResume)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompositeJob`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onDoResume(self: KCompositeJob, callback: *const fn () callconv(.c) bool) void {
        qtc.KCompositeJob_OnDoResume(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `errorString` instead
    ///
    pub const ErrorString = errorString;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#errorString)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn errorString(self: KCompositeJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KCompositeJob_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KCompositeJob.errorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `superErrorString` instead
    ///
    pub const SuperErrorString = superErrorString;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#errorString)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superErrorString(self: KCompositeJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KCompositeJob_SuperErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KCompositeJob.errorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onErrorString` instead
    ///
    pub const OnErrorString = onErrorString;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#errorString)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompositeJob`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onErrorString(self: KCompositeJob, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KCompositeJob_OnErrorString(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCompositeJob `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: KCompositeJob, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KCompositeJob_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCompositeJob `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: KCompositeJob, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KCompositeJob_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCompositeJob`
    ///
    /// ` callback: *const fn (self: KCompositeJob, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: KCompositeJob, callback: *const fn (KCompositeJob, QEvent) callconv(.c) bool) void {
        qtc.KCompositeJob_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCompositeJob `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KCompositeJob, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KCompositeJob_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCompositeJob `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: KCompositeJob, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KCompositeJob_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCompositeJob`
    ///
    /// ` callback: *const fn (self: KCompositeJob, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: KCompositeJob, callback: *const fn (KCompositeJob, QObject, QEvent) callconv(.c) bool) void {
        qtc.KCompositeJob_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCompositeJob `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: KCompositeJob, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KCompositeJob_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCompositeJob `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: KCompositeJob, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KCompositeJob_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCompositeJob`
    ///
    /// ` callback: *const fn (self: KCompositeJob, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: KCompositeJob, callback: *const fn (KCompositeJob, QTimerEvent) callconv(.c) void) void {
        qtc.KCompositeJob_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCompositeJob `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: KCompositeJob, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KCompositeJob_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCompositeJob `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: KCompositeJob, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KCompositeJob_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCompositeJob`
    ///
    /// ` callback: *const fn (self: KCompositeJob, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: KCompositeJob, callback: *const fn (KCompositeJob, QChildEvent) callconv(.c) void) void {
        qtc.KCompositeJob_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCompositeJob `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: KCompositeJob, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KCompositeJob_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCompositeJob `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: KCompositeJob, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KCompositeJob_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCompositeJob`
    ///
    /// ` callback: *const fn (self: KCompositeJob, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: KCompositeJob, callback: *const fn (KCompositeJob, QEvent) callconv(.c) void) void {
        qtc.KCompositeJob_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCompositeJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: KCompositeJob, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KCompositeJob_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KCompositeJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: KCompositeJob, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KCompositeJob_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KCompositeJob`
    ///
    /// ` callback: *const fn (self: KCompositeJob, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: KCompositeJob, callback: *const fn (KCompositeJob, QMetaMethod) callconv(.c) void) void {
        qtc.KCompositeJob_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCompositeJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: KCompositeJob, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KCompositeJob_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KCompositeJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: KCompositeJob, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KCompositeJob_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KCompositeJob`
    ///
    /// ` callback: *const fn (self: KCompositeJob, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: KCompositeJob, callback: *const fn (KCompositeJob, QMetaMethod) callconv(.c) void) void {
        qtc.KCompositeJob_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setCapabilities` instead
    ///
    pub const SetCapabilities = setCapabilities;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setCapabilities)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` _capabilities: flag of kjob_enums.Capability `
    ///
    pub fn setCapabilities(self: KCompositeJob, _capabilities: i32) void {
        qtc.KCompositeJob_SetCapabilities(@ptrCast(self.ptr), @bitCast(_capabilities));
    }

    /// ### DEPRECATED: Use `superSetCapabilities` instead
    ///
    pub const SuperSetCapabilities = superSetCapabilities;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setCapabilities)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` _capabilities: flag of kjob_enums.Capability `
    ///
    pub fn superSetCapabilities(self: KCompositeJob, _capabilities: i32) void {
        qtc.KCompositeJob_SuperSetCapabilities(@ptrCast(self.ptr), @bitCast(_capabilities));
    }

    /// ### DEPRECATED: Use `onSetCapabilities` instead
    ///
    pub const OnSetCapabilities = onSetCapabilities;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setCapabilities)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompositeJob`
    ///
    /// ` callback: *const fn (self: KCompositeJob, capabilities: flag of kjob_enums.Capability) callconv(.c) void `
    ///
    pub fn onSetCapabilities(self: KCompositeJob, callback: *const fn (KCompositeJob, i32) callconv(.c) void) void {
        qtc.KCompositeJob_OnSetCapabilities(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isFinished` instead
    ///
    pub const IsFinished = isFinished;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#isFinished)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    pub fn isFinished(self: KCompositeJob) bool {
        return qtc.KCompositeJob_IsFinished(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superIsFinished` instead
    ///
    pub const SuperIsFinished = superIsFinished;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#isFinished)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    pub fn superIsFinished(self: KCompositeJob) bool {
        return qtc.KCompositeJob_SuperIsFinished(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsFinished` instead
    ///
    pub const OnIsFinished = onIsFinished;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#isFinished)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompositeJob`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onIsFinished(self: KCompositeJob, callback: *const fn () callconv(.c) bool) void {
        qtc.KCompositeJob_OnIsFinished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setError` instead
    ///
    pub const SetError = setError;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setError)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` errorCode: i32 `
    ///
    pub fn setError(self: KCompositeJob, errorCode: i32) void {
        qtc.KCompositeJob_SetError(@ptrCast(self.ptr), @bitCast(errorCode));
    }

    /// ### DEPRECATED: Use `superSetError` instead
    ///
    pub const SuperSetError = superSetError;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setError)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` errorCode: i32 `
    ///
    pub fn superSetError(self: KCompositeJob, errorCode: i32) void {
        qtc.KCompositeJob_SuperSetError(@ptrCast(self.ptr), @bitCast(errorCode));
    }

    /// ### DEPRECATED: Use `onSetError` instead
    ///
    pub const OnSetError = onSetError;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setError)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompositeJob`
    ///
    /// ` callback: *const fn (self: KCompositeJob, errorCode: i32) callconv(.c) void `
    ///
    pub fn onSetError(self: KCompositeJob, callback: *const fn (KCompositeJob, i32) callconv(.c) void) void {
        qtc.KCompositeJob_OnSetError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setErrorText` instead
    ///
    pub const SetErrorText = setErrorText;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setErrorText)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` _errorText: []const u8 `
    ///
    pub fn setErrorText(self: KCompositeJob, _errorText: []const u8) void {
        const errorText_str = qtc.libqt_string{
            .len = _errorText.len,
            .data = _errorText.ptr,
        };
        qtc.KCompositeJob_SetErrorText(@ptrCast(self.ptr), errorText_str);
    }

    /// ### DEPRECATED: Use `superSetErrorText` instead
    ///
    pub const SuperSetErrorText = superSetErrorText;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setErrorText)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` _errorText: []const u8 `
    ///
    pub fn superSetErrorText(self: KCompositeJob, _errorText: []const u8) void {
        const errorText_str = qtc.libqt_string{
            .len = _errorText.len,
            .data = _errorText.ptr,
        };
        qtc.KCompositeJob_SuperSetErrorText(@ptrCast(self.ptr), errorText_str);
    }

    /// ### DEPRECATED: Use `onSetErrorText` instead
    ///
    pub const OnSetErrorText = onSetErrorText;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setErrorText)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompositeJob`
    ///
    /// ` callback: *const fn (self: KCompositeJob, errorText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onSetErrorText(self: KCompositeJob, callback: *const fn (KCompositeJob, [*:0]const u8) callconv(.c) void) void {
        qtc.KCompositeJob_OnSetErrorText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setProcessedAmount` instead
    ///
    pub const SetProcessedAmount = setProcessedAmount;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setProcessedAmount)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    /// ` amount: usize `
    ///
    pub fn setProcessedAmount(self: KCompositeJob, unit: i32, amount: usize) void {
        qtc.KCompositeJob_SetProcessedAmount(@ptrCast(self.ptr), @bitCast(unit), @bitCast(amount));
    }

    /// ### DEPRECATED: Use `superSetProcessedAmount` instead
    ///
    pub const SuperSetProcessedAmount = superSetProcessedAmount;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setProcessedAmount)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    /// ` amount: usize `
    ///
    pub fn superSetProcessedAmount(self: KCompositeJob, unit: i32, amount: usize) void {
        qtc.KCompositeJob_SuperSetProcessedAmount(@ptrCast(self.ptr), @bitCast(unit), @bitCast(amount));
    }

    /// ### DEPRECATED: Use `onSetProcessedAmount` instead
    ///
    pub const OnSetProcessedAmount = onSetProcessedAmount;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setProcessedAmount)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompositeJob`
    ///
    /// ` callback: *const fn (self: KCompositeJob, unit: kjob_enums.Unit, amount: usize) callconv(.c) void `
    ///
    pub fn onSetProcessedAmount(self: KCompositeJob, callback: *const fn (KCompositeJob, i32, usize) callconv(.c) void) void {
        qtc.KCompositeJob_OnSetProcessedAmount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setTotalAmount` instead
    ///
    pub const SetTotalAmount = setTotalAmount;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setTotalAmount)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    /// ` amount: usize `
    ///
    pub fn setTotalAmount(self: KCompositeJob, unit: i32, amount: usize) void {
        qtc.KCompositeJob_SetTotalAmount(@ptrCast(self.ptr), @bitCast(unit), @bitCast(amount));
    }

    /// ### DEPRECATED: Use `superSetTotalAmount` instead
    ///
    pub const SuperSetTotalAmount = superSetTotalAmount;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setTotalAmount)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    /// ` amount: usize `
    ///
    pub fn superSetTotalAmount(self: KCompositeJob, unit: i32, amount: usize) void {
        qtc.KCompositeJob_SuperSetTotalAmount(@ptrCast(self.ptr), @bitCast(unit), @bitCast(amount));
    }

    /// ### DEPRECATED: Use `onSetTotalAmount` instead
    ///
    pub const OnSetTotalAmount = onSetTotalAmount;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setTotalAmount)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompositeJob`
    ///
    /// ` callback: *const fn (self: KCompositeJob, unit: kjob_enums.Unit, amount: usize) callconv(.c) void `
    ///
    pub fn onSetTotalAmount(self: KCompositeJob, callback: *const fn (KCompositeJob, i32, usize) callconv(.c) void) void {
        qtc.KCompositeJob_OnSetTotalAmount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setProgressUnit` instead
    ///
    pub const SetProgressUnit = setProgressUnit;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setProgressUnit)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    pub fn setProgressUnit(self: KCompositeJob, unit: i32) void {
        qtc.KCompositeJob_SetProgressUnit(@ptrCast(self.ptr), @bitCast(unit));
    }

    /// ### DEPRECATED: Use `superSetProgressUnit` instead
    ///
    pub const SuperSetProgressUnit = superSetProgressUnit;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setProgressUnit)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    pub fn superSetProgressUnit(self: KCompositeJob, unit: i32) void {
        qtc.KCompositeJob_SuperSetProgressUnit(@ptrCast(self.ptr), @bitCast(unit));
    }

    /// ### DEPRECATED: Use `onSetProgressUnit` instead
    ///
    pub const OnSetProgressUnit = onSetProgressUnit;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setProgressUnit)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompositeJob`
    ///
    /// ` callback: *const fn (self: KCompositeJob, unit: kjob_enums.Unit) callconv(.c) void `
    ///
    pub fn onSetProgressUnit(self: KCompositeJob, callback: *const fn (KCompositeJob, i32) callconv(.c) void) void {
        qtc.KCompositeJob_OnSetProgressUnit(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setPercent` instead
    ///
    pub const SetPercent = setPercent;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setPercent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` percentage: usize `
    ///
    pub fn setPercent(self: KCompositeJob, percentage: usize) void {
        qtc.KCompositeJob_SetPercent(@ptrCast(self.ptr), @bitCast(percentage));
    }

    /// ### DEPRECATED: Use `superSetPercent` instead
    ///
    pub const SuperSetPercent = superSetPercent;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setPercent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` percentage: usize `
    ///
    pub fn superSetPercent(self: KCompositeJob, percentage: usize) void {
        qtc.KCompositeJob_SuperSetPercent(@ptrCast(self.ptr), @bitCast(percentage));
    }

    /// ### DEPRECATED: Use `onSetPercent` instead
    ///
    pub const OnSetPercent = onSetPercent;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setPercent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompositeJob`
    ///
    /// ` callback: *const fn (self: KCompositeJob, percentage: usize) callconv(.c) void `
    ///
    pub fn onSetPercent(self: KCompositeJob, callback: *const fn (KCompositeJob, usize) callconv(.c) void) void {
        qtc.KCompositeJob_OnSetPercent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `emitResult` instead
    ///
    pub const EmitResult = emitResult;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitResult)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    pub fn emitResult(self: KCompositeJob) void {
        qtc.KCompositeJob_EmitResult(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superEmitResult` instead
    ///
    pub const SuperEmitResult = superEmitResult;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitResult)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    pub fn superEmitResult(self: KCompositeJob) void {
        qtc.KCompositeJob_SuperEmitResult(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onEmitResult` instead
    ///
    pub const OnEmitResult = onEmitResult;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitResult)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompositeJob`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onEmitResult(self: KCompositeJob, callback: *const fn () callconv(.c) void) void {
        qtc.KCompositeJob_OnEmitResult(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `emitPercent` instead
    ///
    pub const EmitPercent = emitPercent;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitPercent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` _processedAmount: usize `
    ///
    /// ` _totalAmount: usize `
    ///
    pub fn emitPercent(self: KCompositeJob, _processedAmount: usize, _totalAmount: usize) void {
        qtc.KCompositeJob_EmitPercent(@ptrCast(self.ptr), @bitCast(_processedAmount), @bitCast(_totalAmount));
    }

    /// ### DEPRECATED: Use `superEmitPercent` instead
    ///
    pub const SuperEmitPercent = superEmitPercent;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitPercent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` _processedAmount: usize `
    ///
    /// ` _totalAmount: usize `
    ///
    pub fn superEmitPercent(self: KCompositeJob, _processedAmount: usize, _totalAmount: usize) void {
        qtc.KCompositeJob_SuperEmitPercent(@ptrCast(self.ptr), @bitCast(_processedAmount), @bitCast(_totalAmount));
    }

    /// ### DEPRECATED: Use `onEmitPercent` instead
    ///
    pub const OnEmitPercent = onEmitPercent;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitPercent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompositeJob`
    ///
    /// ` callback: *const fn (self: KCompositeJob, processedAmount: usize, totalAmount: usize) callconv(.c) void `
    ///
    pub fn onEmitPercent(self: KCompositeJob, callback: *const fn (KCompositeJob, usize, usize) callconv(.c) void) void {
        qtc.KCompositeJob_OnEmitPercent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `emitSpeed` instead
    ///
    pub const EmitSpeed = emitSpeed;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitSpeed)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` _speed: usize `
    ///
    pub fn emitSpeed(self: KCompositeJob, _speed: usize) void {
        qtc.KCompositeJob_EmitSpeed(@ptrCast(self.ptr), @bitCast(_speed));
    }

    /// ### DEPRECATED: Use `superEmitSpeed` instead
    ///
    pub const SuperEmitSpeed = superEmitSpeed;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitSpeed)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` _speed: usize `
    ///
    pub fn superEmitSpeed(self: KCompositeJob, _speed: usize) void {
        qtc.KCompositeJob_SuperEmitSpeed(@ptrCast(self.ptr), @bitCast(_speed));
    }

    /// ### DEPRECATED: Use `onEmitSpeed` instead
    ///
    pub const OnEmitSpeed = onEmitSpeed;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitSpeed)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompositeJob`
    ///
    /// ` callback: *const fn (self: KCompositeJob, speed: usize) callconv(.c) void `
    ///
    pub fn onEmitSpeed(self: KCompositeJob, callback: *const fn (KCompositeJob, usize) callconv(.c) void) void {
        qtc.KCompositeJob_OnEmitSpeed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `startElapsedTimer` instead
    ///
    pub const StartElapsedTimer = startElapsedTimer;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#startElapsedTimer)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    pub fn startElapsedTimer(self: KCompositeJob) void {
        qtc.KCompositeJob_StartElapsedTimer(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superStartElapsedTimer` instead
    ///
    pub const SuperStartElapsedTimer = superStartElapsedTimer;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#startElapsedTimer)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCompositeJob `
    ///
    pub fn superStartElapsedTimer(self: KCompositeJob) void {
        qtc.KCompositeJob_SuperStartElapsedTimer(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onStartElapsedTimer` instead
    ///
    pub const OnStartElapsedTimer = onStartElapsedTimer;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#startElapsedTimer)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompositeJob`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onStartElapsedTimer(self: KCompositeJob, callback: *const fn () callconv(.c) void) void {
        qtc.KCompositeJob_OnStartElapsedTimer(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCompositeJob `
    ///
    pub fn sender(self: KCompositeJob) QObject {
        return .{ .ptr = qtc.KCompositeJob_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KCompositeJob `
    ///
    pub fn superSender(self: KCompositeJob) QObject {
        return .{ .ptr = qtc.KCompositeJob_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: KCompositeJob`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: KCompositeJob, callback: *const fn () callconv(.c) QObject) void {
        qtc.KCompositeJob_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCompositeJob `
    ///
    pub fn senderSignalIndex(self: KCompositeJob) i32 {
        return qtc.KCompositeJob_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KCompositeJob `
    ///
    pub fn superSenderSignalIndex(self: KCompositeJob) i32 {
        return qtc.KCompositeJob_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KCompositeJob`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: KCompositeJob, callback: *const fn () callconv(.c) i32) void {
        qtc.KCompositeJob_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCompositeJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: KCompositeJob, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KCompositeJob_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KCompositeJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: KCompositeJob, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KCompositeJob_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KCompositeJob`
    ///
    /// ` callback: *const fn (self: KCompositeJob, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: KCompositeJob, callback: *const fn (KCompositeJob, [*:0]const u8) callconv(.c) i32) void {
        qtc.KCompositeJob_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCompositeJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: KCompositeJob, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KCompositeJob_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KCompositeJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: KCompositeJob, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KCompositeJob_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KCompositeJob`
    ///
    /// ` callback: *const fn (self: KCompositeJob, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: KCompositeJob, callback: *const fn (KCompositeJob, QMetaMethod) callconv(.c) bool) void {
        qtc.KCompositeJob_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onFinished` instead
    ///
    pub const OnFinished = onFinished;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#finished)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` callback: *const fn (self: KCompositeJob, job: KJob) callconv(.c) void `
    ///
    pub fn onFinished(self: KCompositeJob, callback: *const fn (KCompositeJob, KJob) callconv(.c) void) void {
        qtc.KJob_Connect_Finished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onSuspended` instead
    ///
    pub const OnSuspended = onSuspended;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#suspended)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` callback: *const fn (self: KCompositeJob, job: KJob) callconv(.c) void `
    ///
    pub fn onSuspended(self: KCompositeJob, callback: *const fn (KCompositeJob, KJob) callconv(.c) void) void {
        qtc.KJob_Connect_Suspended(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onResumed` instead
    ///
    pub const OnResumed = onResumed;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#resumed)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` callback: *const fn (self: KCompositeJob, job: KJob) callconv(.c) void `
    ///
    pub fn onResumed(self: KCompositeJob, callback: *const fn (KCompositeJob, KJob) callconv(.c) void) void {
        qtc.KJob_Connect_Resumed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onResult` instead
    ///
    pub const OnResult = onResult;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#result)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` callback: *const fn (self: KCompositeJob, job: KJob) callconv(.c) void `
    ///
    pub fn onResult(self: KCompositeJob, callback: *const fn (KCompositeJob, KJob) callconv(.c) void) void {
        qtc.KJob_Connect_Result(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onTotalAmountChanged` instead
    ///
    pub const OnTotalAmountChanged = onTotalAmountChanged;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#totalAmountChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` callback: *const fn (self: KCompositeJob, job: KJob, unit: kjob_enums.Unit, amount: usize) callconv(.c) void `
    ///
    pub fn onTotalAmountChanged(self: KCompositeJob, callback: *const fn (KCompositeJob, KJob, i32, usize) callconv(.c) void) void {
        qtc.KJob_Connect_TotalAmountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onProcessedAmountChanged` instead
    ///
    pub const OnProcessedAmountChanged = onProcessedAmountChanged;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#processedAmountChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` callback: *const fn (self: KCompositeJob, job: KJob, unit: kjob_enums.Unit, amount: usize) callconv(.c) void `
    ///
    pub fn onProcessedAmountChanged(self: KCompositeJob, callback: *const fn (KCompositeJob, KJob, i32, usize) callconv(.c) void) void {
        qtc.KJob_Connect_ProcessedAmountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onPercentChanged` instead
    ///
    pub const OnPercentChanged = onPercentChanged;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#percentChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KCompositeJob `
    ///
    /// ` callback: *const fn (self: KCompositeJob, job: KJob, percent: usize) callconv(.c) void `
    ///
    pub fn onPercentChanged(self: KCompositeJob, callback: *const fn (KCompositeJob, KJob, usize) callconv(.c) void) void {
        qtc.KJob_Connect_PercentChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCompositeJob `
    ///
    /// ` callback: *const fn (self: KCompositeJob, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KCompositeJob, callback: *const fn (KCompositeJob, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kcompositejob.html#dtor.KCompositeJob)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KCompositeJob `
    ///
    pub fn delete(self: KCompositeJob) void {
        qtc.KCompositeJob_Delete(@ptrCast(self.ptr));
    }
};
