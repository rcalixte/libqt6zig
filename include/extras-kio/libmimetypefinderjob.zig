const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kjob_enums = @import("../extras-kcoreaddons/libkjob.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kio-mimetypefinderjob.html)
pub const kio__mimetypefinderjob = struct {
    /// New constructs a new KIO::MimeTypeFinderJob object.
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn New(url: ?*anyopaque) QtC.KIO__MimeTypeFinderJob {
        return qtc.KIO__MimeTypeFinderJob_new(@ptrCast(url));
    }

    /// New2 constructs a new KIO::MimeTypeFinderJob object.
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QtC.QUrl `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn New2(url: ?*anyopaque, parent: ?*anyopaque) QtC.KIO__MimeTypeFinderJob {
        return qtc.KIO__MimeTypeFinderJob_new2(@ptrCast(url), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KIO__MimeTypeFinderJob_MetaObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMetaObject `
    ///
    pub fn OnMetaObject(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMetaObject) void {
        qtc.KIO__MimeTypeFinderJob_OnMetaObject(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    pub fn SuperMetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KIO__MimeTypeFinderJob_SuperMetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KIO__MimeTypeFinderJob_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` callback: *const fn (self: QtC.KIO__MimeTypeFinderJob, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KIO__MimeTypeFinderJob_OnMetacast(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KIO__MimeTypeFinderJob_SuperMetacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KIO__MimeTypeFinderJob_Metacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` callback: *const fn (self: QtC.KIO__MimeTypeFinderJob, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KIO__MimeTypeFinderJob_OnMetacall(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KIO__MimeTypeFinderJob_SuperMetacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr(s: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__mimetypefinderjob.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kio-mimetypefinderjob.html#setFollowRedirections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` b: bool `
    ///
    pub fn SetFollowRedirections(self: ?*anyopaque, b: bool) void {
        qtc.KIO__MimeTypeFinderJob_SetFollowRedirections(@ptrCast(self), b);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-mimetypefinderjob.html#setSuggestedFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` suggestedFileName: []const u8 `
    ///
    pub fn SetSuggestedFileName(self: ?*anyopaque, suggestedFileName: []const u8) void {
        const suggestedFileName_str = qtc.libqt_string{
            .len = suggestedFileName.len,
            .data = suggestedFileName.ptr,
        };
        qtc.KIO__MimeTypeFinderJob_SetSuggestedFileName(@ptrCast(self), suggestedFileName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-mimetypefinderjob.html#suggestedFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuggestedFileName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KIO__MimeTypeFinderJob_SuggestedFileName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__mimetypefinderjob.SuggestedFileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kio-mimetypefinderjob.html#setAuthenticationPromptEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` enable: bool `
    ///
    pub fn SetAuthenticationPromptEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.KIO__MimeTypeFinderJob_SetAuthenticationPromptEnabled(@ptrCast(self), enable);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-mimetypefinderjob.html#isAuthenticationPromptEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    pub fn IsAuthenticationPromptEnabled(self: ?*anyopaque) bool {
        return qtc.KIO__MimeTypeFinderJob_IsAuthenticationPromptEnabled(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-mimetypefinderjob.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    pub fn Start(self: ?*anyopaque) void {
        qtc.KIO__MimeTypeFinderJob_Start(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-mimetypefinderjob.html#start)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnStart(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KIO__MimeTypeFinderJob_OnStart(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperStart` instead
    ///
    pub const QBaseStart = SuperStart;

    /// ### [Upstream resources](https://api.kde.org/kio-mimetypefinderjob.html#start)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    pub fn SuperStart(self: ?*anyopaque) void {
        qtc.KIO__MimeTypeFinderJob_SuperStart(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-mimetypefinderjob.html#mimeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MimeType(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KIO__MimeTypeFinderJob_MimeType(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__mimetypefinderjob.MimeType: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kio-mimetypefinderjob.html#doKill)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    pub fn DoKill(self: ?*anyopaque) bool {
        return qtc.KIO__MimeTypeFinderJob_DoKill(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-mimetypefinderjob.html#doKill)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnDoKill(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KIO__MimeTypeFinderJob_OnDoKill(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDoKill` instead
    ///
    pub const QBaseDoKill = SuperDoKill;

    /// ### [Upstream resources](https://api.kde.org/kio-mimetypefinderjob.html#doKill)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    pub fn SuperDoKill(self: ?*anyopaque) bool {
        return qtc.KIO__MimeTypeFinderJob_SuperDoKill(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-mimetypefinderjob.html#slotResult)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` job: QtC.KJob `
    ///
    pub fn SlotResult(self: ?*anyopaque, job: ?*anyopaque) void {
        qtc.KIO__MimeTypeFinderJob_SlotResult(@ptrCast(self), @ptrCast(job));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-mimetypefinderjob.html#slotResult)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` callback: *const fn (self: QtC.KIO__MimeTypeFinderJob, job: QtC.KJob) callconv(.c) void `
    ///
    pub fn OnSlotResult(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KIO__MimeTypeFinderJob_OnSlotResult(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSlotResult` instead
    ///
    pub const QBaseSlotResult = SuperSlotResult;

    /// ### [Upstream resources](https://api.kde.org/kio-mimetypefinderjob.html#slotResult)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` job: QtC.KJob `
    ///
    pub fn SuperSlotResult(self: ?*anyopaque, job: ?*anyopaque) void {
        qtc.KIO__MimeTypeFinderJob_SuperSlotResult(@ptrCast(self), @ptrCast(job));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr2(s: [:0]const u8, c: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__mimetypefinderjob.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr3(s: [:0]const u8, c: [:0]const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__mimetypefinderjob.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setUiDelegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` delegate: QtC.KJobUiDelegate `
    ///
    pub fn SetUiDelegate(self: ?*anyopaque, delegate: ?*anyopaque) void {
        qtc.KJob_SetUiDelegate(@ptrCast(self), @ptrCast(delegate));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#uiDelegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    pub fn UiDelegate(self: ?*anyopaque) QtC.KJobUiDelegate {
        return qtc.KJob_UiDelegate(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#capabilities)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ## Returns:
    ///
    /// ` flag of kjob_enums.Capability `
    ///
    pub fn Capabilities(self: ?*anyopaque) i32 {
        return qtc.KJob_Capabilities(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#isSuspended)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    pub fn IsSuspended(self: ?*anyopaque) bool {
        return qtc.KJob_IsSuspended(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#kill)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    pub fn Kill(self: ?*anyopaque) bool {
        return qtc.KJob_Kill(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#suspend)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    pub fn Suspend(self: ?*anyopaque) bool {
        return qtc.KJob_Suspend(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#resume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    pub fn Resume(self: ?*anyopaque) bool {
        return qtc.KJob_Resume(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#exec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    pub fn Exec(self: ?*anyopaque) bool {
        return qtc.KJob_Exec(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    pub fn Error(self: ?*anyopaque) i32 {
        return qtc.KJob_Error(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#errorText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KJob_ErrorText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__mimetypefinderjob.ErrorText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#processedAmount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    pub fn ProcessedAmount(self: ?*anyopaque, unit: i32) u64 {
        return qtc.KJob_ProcessedAmount(@ptrCast(self), @bitCast(unit));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#totalAmount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    pub fn TotalAmount(self: ?*anyopaque, unit: i32) u64 {
        return qtc.KJob_TotalAmount(@ptrCast(self), @bitCast(unit));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#percent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    pub fn Percent(self: ?*anyopaque) u64 {
        return qtc.KJob_Percent(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setAutoDelete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` autodelete: bool `
    ///
    pub fn SetAutoDelete(self: ?*anyopaque, autodelete: bool) void {
        qtc.KJob_SetAutoDelete(@ptrCast(self), autodelete);
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#isAutoDelete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    pub fn IsAutoDelete(self: ?*anyopaque) bool {
        return qtc.KJob_IsAutoDelete(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setFinishedNotificationHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    pub fn SetFinishedNotificationHidden(self: ?*anyopaque) void {
        qtc.KJob_SetFinishedNotificationHidden(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#isFinishedNotificationHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    pub fn IsFinishedNotificationHidden(self: ?*anyopaque) bool {
        return qtc.KJob_IsFinishedNotificationHidden(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#isStartedWithExec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    pub fn IsStartedWithExec(self: ?*anyopaque) bool {
        return qtc.KJob_IsStartedWithExec(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#elapsedTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    pub fn ElapsedTime(self: ?*anyopaque) i64 {
        return qtc.KJob_ElapsedTime(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#infoMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` job: QtC.KJob `
    ///
    /// ` message: []const u8 `
    ///
    pub fn InfoMessage(self: ?*anyopaque, job: ?*anyopaque, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.KJob_InfoMessage(@ptrCast(self), @ptrCast(job), message_str);
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#infoMessage)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` callback: *const fn (self: QtC.KIO__MimeTypeFinderJob, job: QtC.KJob, message: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnInfoMessage(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KJob_Connect_InfoMessage(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#warning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` job: QtC.KJob `
    ///
    /// ` message: []const u8 `
    ///
    pub fn Warning(self: ?*anyopaque, job: ?*anyopaque, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.KJob_Warning(@ptrCast(self), @ptrCast(job), message_str);
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#warning)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` callback: *const fn (self: QtC.KIO__MimeTypeFinderJob, job: QtC.KJob, message: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWarning(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KJob_Connect_Warning(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#totalSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` job: QtC.KJob `
    ///
    /// ` size: u64 `
    ///
    pub fn TotalSize(self: ?*anyopaque, job: ?*anyopaque, size: u64) void {
        qtc.KJob_TotalSize(@ptrCast(self), @ptrCast(job), @bitCast(size));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#totalSize)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` callback: *const fn (self: QtC.KIO__MimeTypeFinderJob, job: QtC.KJob, size: u64) callconv(.c) void `
    ///
    pub fn OnTotalSize(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, u64) callconv(.c) void) void {
        qtc.KJob_Connect_TotalSize(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#processedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` job: QtC.KJob `
    ///
    /// ` size: u64 `
    ///
    pub fn ProcessedSize(self: ?*anyopaque, job: ?*anyopaque, size: u64) void {
        qtc.KJob_ProcessedSize(@ptrCast(self), @ptrCast(job), @bitCast(size));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#processedSize)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` callback: *const fn (self: QtC.KIO__MimeTypeFinderJob, job: QtC.KJob, size: u64) callconv(.c) void `
    ///
    pub fn OnProcessedSize(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, u64) callconv(.c) void) void {
        qtc.KJob_Connect_ProcessedSize(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#speed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` job: QtC.KJob `
    ///
    /// ` speed: u64 `
    ///
    pub fn Speed(self: ?*anyopaque, job: ?*anyopaque, speed: u64) void {
        qtc.KJob_Speed(@ptrCast(self), @ptrCast(job), @bitCast(speed));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#speed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` callback: *const fn (self: QtC.KIO__MimeTypeFinderJob, job: QtC.KJob, speed: u64) callconv(.c) void `
    ///
    pub fn OnSpeed(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, u64) callconv(.c) void) void {
        qtc.KJob_Connect_Speed(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#kill)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` verbosity: kjob_enums.KillVerbosity `
    ///
    pub fn Kill1(self: ?*anyopaque, verbosity: i32) bool {
        return qtc.KJob_Kill1(@ptrCast(self), @bitCast(verbosity));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setFinishedNotificationHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` hide: bool `
    ///
    pub fn SetFinishedNotificationHidden1(self: ?*anyopaque, hide: bool) void {
        qtc.KJob_SetFinishedNotificationHidden1(@ptrCast(self), hide);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__mimetypefinderjob.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` thread: QtC.QThread `
    ///
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: ?*anyopaque, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("kio__mimetypefinderjob.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` filterObj: QtC.QObject `
    ///
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` obj: QtC.QObject `
    ///
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    pub fn Connect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect3(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: QtC.QMetaMethod `
    ///
    pub fn Disconnect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    pub fn Disconnect3(self: ?*anyopaque) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect4(self: ?*anyopaque, receiver: ?*anyopaque) bool {
        return qtc.QObject_Disconnect4(@ptrCast(self), @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect5(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, name: [:0]const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: ?*anyopaque, name: [:0]const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kio__mimetypefinderjob.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kio__mimetypefinderjob.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` callback: *const fn (self: QtC.KIO__MimeTypeFinderJob) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: ?*anyopaque, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: ?*anyopaque, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8, param5: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect5(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring, @bitCast(param5));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect52(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @bitCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @bitCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: ?*anyopaque, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect22(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect22(@ptrCast(self), signal_Cstring, @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: ?*anyopaque, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self), @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` param1: QtC.QObject `
    ///
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` callback: *const fn (self: QtC.KIO__MimeTypeFinderJob, param1: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KCompositeJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompositejob.html#addSubjob)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` job: QtC.KJob `
    ///
    pub fn AddSubjob(self: ?*anyopaque, job: ?*anyopaque) bool {
        return qtc.KIO__MimeTypeFinderJob_AddSubjob(@ptrCast(self), @ptrCast(job));
    }

    /// ### DEPRECATED: Use `SuperAddSubjob` instead
    ///
    pub const QBaseAddSubjob = SuperAddSubjob;

    /// Inherited from KCompositeJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompositejob.html#addSubjob)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` job: QtC.KJob `
    ///
    pub fn SuperAddSubjob(self: ?*anyopaque, job: ?*anyopaque) bool {
        return qtc.KIO__MimeTypeFinderJob_SuperAddSubjob(@ptrCast(self), @ptrCast(job));
    }

    /// Inherited from KCompositeJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompositejob.html#addSubjob)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob`
    ///
    /// ` callback: *const fn (self: QtC.KIO__MimeTypeFinderJob, job: QtC.KJob) callconv(.c) bool `
    ///
    pub fn OnAddSubjob(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KIO__MimeTypeFinderJob_OnAddSubjob(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KCompositeJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompositejob.html#removeSubjob)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` job: QtC.KJob `
    ///
    pub fn RemoveSubjob(self: ?*anyopaque, job: ?*anyopaque) bool {
        return qtc.KIO__MimeTypeFinderJob_RemoveSubjob(@ptrCast(self), @ptrCast(job));
    }

    /// ### DEPRECATED: Use `SuperRemoveSubjob` instead
    ///
    pub const QBaseRemoveSubjob = SuperRemoveSubjob;

    /// Inherited from KCompositeJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompositejob.html#removeSubjob)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` job: QtC.KJob `
    ///
    pub fn SuperRemoveSubjob(self: ?*anyopaque, job: ?*anyopaque) bool {
        return qtc.KIO__MimeTypeFinderJob_SuperRemoveSubjob(@ptrCast(self), @ptrCast(job));
    }

    /// Inherited from KCompositeJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompositejob.html#removeSubjob)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob`
    ///
    /// ` callback: *const fn (self: QtC.KIO__MimeTypeFinderJob, job: QtC.KJob) callconv(.c) bool `
    ///
    pub fn OnRemoveSubjob(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KIO__MimeTypeFinderJob_OnRemoveSubjob(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KCompositeJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompositejob.html#slotInfoMessage)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` job: QtC.KJob `
    ///
    /// ` message: []const u8 `
    ///
    pub fn SlotInfoMessage(self: ?*anyopaque, job: ?*anyopaque, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.KIO__MimeTypeFinderJob_SlotInfoMessage(@ptrCast(self), @ptrCast(job), message_str);
    }

    /// ### DEPRECATED: Use `SuperSlotInfoMessage` instead
    ///
    pub const QBaseSlotInfoMessage = SuperSlotInfoMessage;

    /// Inherited from KCompositeJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompositejob.html#slotInfoMessage)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` job: QtC.KJob `
    ///
    /// ` message: []const u8 `
    ///
    pub fn SuperSlotInfoMessage(self: ?*anyopaque, job: ?*anyopaque, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.KIO__MimeTypeFinderJob_SuperSlotInfoMessage(@ptrCast(self), @ptrCast(job), message_str);
    }

    /// Inherited from KCompositeJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompositejob.html#slotInfoMessage)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob`
    ///
    /// ` callback: *const fn (self: QtC.KIO__MimeTypeFinderJob, job: QtC.KJob, message: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSlotInfoMessage(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KIO__MimeTypeFinderJob_OnSlotInfoMessage(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#doSuspend)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    pub fn DoSuspend(self: ?*anyopaque) bool {
        return qtc.KIO__MimeTypeFinderJob_DoSuspend(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperDoSuspend` instead
    ///
    pub const QBaseDoSuspend = SuperDoSuspend;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#doSuspend)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    pub fn SuperDoSuspend(self: ?*anyopaque) bool {
        return qtc.KIO__MimeTypeFinderJob_SuperDoSuspend(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#doSuspend)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnDoSuspend(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KIO__MimeTypeFinderJob_OnDoSuspend(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#doResume)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    pub fn DoResume(self: ?*anyopaque) bool {
        return qtc.KIO__MimeTypeFinderJob_DoResume(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperDoResume` instead
    ///
    pub const QBaseDoResume = SuperDoResume;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#doResume)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    pub fn SuperDoResume(self: ?*anyopaque) bool {
        return qtc.KIO__MimeTypeFinderJob_SuperDoResume(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#doResume)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnDoResume(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KIO__MimeTypeFinderJob_OnDoResume(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#errorString)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KIO__MimeTypeFinderJob_ErrorString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__mimetypefinderjob.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperErrorString` instead
    ///
    pub const QBaseErrorString = SuperErrorString;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#errorString)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KIO__MimeTypeFinderJob_SuperErrorString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__mimetypefinderjob.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#errorString)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnErrorString(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KIO__MimeTypeFinderJob_OnErrorString(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KIO__MimeTypeFinderJob_Event(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KIO__MimeTypeFinderJob_SuperEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob`
    ///
    /// ` callback: *const fn (self: QtC.KIO__MimeTypeFinderJob, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KIO__MimeTypeFinderJob_OnEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KIO__MimeTypeFinderJob_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
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
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KIO__MimeTypeFinderJob_SuperEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob`
    ///
    /// ` callback: *const fn (self: QtC.KIO__MimeTypeFinderJob, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KIO__MimeTypeFinderJob_OnEventFilter(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KIO__MimeTypeFinderJob_TimerEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KIO__MimeTypeFinderJob_SuperTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob`
    ///
    /// ` callback: *const fn (self: QtC.KIO__MimeTypeFinderJob, event: QtC.QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KIO__MimeTypeFinderJob_OnTimerEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KIO__MimeTypeFinderJob_ChildEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn SuperChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KIO__MimeTypeFinderJob_SuperChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob`
    ///
    /// ` callback: *const fn (self: QtC.KIO__MimeTypeFinderJob, event: QtC.QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KIO__MimeTypeFinderJob_OnChildEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KIO__MimeTypeFinderJob_CustomEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KIO__MimeTypeFinderJob_SuperCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob`
    ///
    /// ` callback: *const fn (self: QtC.KIO__MimeTypeFinderJob, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KIO__MimeTypeFinderJob_OnCustomEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KIO__MimeTypeFinderJob_ConnectNotify(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KIO__MimeTypeFinderJob_SuperConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob`
    ///
    /// ` callback: *const fn (self: QtC.KIO__MimeTypeFinderJob, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KIO__MimeTypeFinderJob_OnConnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KIO__MimeTypeFinderJob_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KIO__MimeTypeFinderJob_SuperDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob`
    ///
    /// ` callback: *const fn (self: QtC.KIO__MimeTypeFinderJob, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KIO__MimeTypeFinderJob_OnDisconnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KCompositeJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompositejob.html#hasSubjobs)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    pub fn HasSubjobs(self: ?*anyopaque) bool {
        return qtc.KIO__MimeTypeFinderJob_HasSubjobs(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperHasSubjobs` instead
    ///
    pub const QBaseHasSubjobs = SuperHasSubjobs;

    /// Inherited from KCompositeJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompositejob.html#hasSubjobs)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    pub fn SuperHasSubjobs(self: ?*anyopaque) bool {
        return qtc.KIO__MimeTypeFinderJob_SuperHasSubjobs(@ptrCast(self));
    }

    /// Inherited from KCompositeJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompositejob.html#hasSubjobs)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnHasSubjobs(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KIO__MimeTypeFinderJob_OnHasSubjobs(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KCompositeJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompositejob.html#subjobs)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Subjobs(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.KJob {
        const _arr: qtc.libqt_list = qtc.KIO__MimeTypeFinderJob_Subjobs(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KJob, _arr.len) catch @panic("kio__mimetypefinderjob.Subjobs: Memory allocation failed");
        const _data: [*]QtC.KJob = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperSubjobs` instead
    ///
    pub const QBaseSubjobs = SuperSubjobs;

    /// Inherited from KCompositeJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompositejob.html#subjobs)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperSubjobs(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.KJob {
        const _arr: qtc.libqt_list = qtc.KIO__MimeTypeFinderJob_SuperSubjobs(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KJob, _arr.len) catch @panic("kio__mimetypefinderjob.Subjobs: Memory allocation failed");
        const _data: [*]QtC.KJob = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from KCompositeJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompositejob.html#subjobs)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob`
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QtC.KJob `
    ///
    pub fn OnSubjobs(self: ?*anyopaque, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.KIO__MimeTypeFinderJob_OnSubjobs(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KCompositeJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompositejob.html#clearSubjobs)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    pub fn ClearSubjobs(self: ?*anyopaque) void {
        qtc.KIO__MimeTypeFinderJob_ClearSubjobs(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperClearSubjobs` instead
    ///
    pub const QBaseClearSubjobs = SuperClearSubjobs;

    /// Inherited from KCompositeJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompositejob.html#clearSubjobs)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    pub fn SuperClearSubjobs(self: ?*anyopaque) void {
        qtc.KIO__MimeTypeFinderJob_SuperClearSubjobs(@ptrCast(self));
    }

    /// Inherited from KCompositeJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kcompositejob.html#clearSubjobs)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnClearSubjobs(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KIO__MimeTypeFinderJob_OnClearSubjobs(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setCapabilities)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` capabilities: flag of kjob_enums.Capability `
    ///
    pub fn SetCapabilities(self: ?*anyopaque, capabilities: i32) void {
        qtc.KIO__MimeTypeFinderJob_SetCapabilities(@ptrCast(self), @bitCast(capabilities));
    }

    /// ### DEPRECATED: Use `SuperSetCapabilities` instead
    ///
    pub const QBaseSetCapabilities = SuperSetCapabilities;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setCapabilities)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` capabilities: flag of kjob_enums.Capability `
    ///
    pub fn SuperSetCapabilities(self: ?*anyopaque, capabilities: i32) void {
        qtc.KIO__MimeTypeFinderJob_SuperSetCapabilities(@ptrCast(self), @bitCast(capabilities));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setCapabilities)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob`
    ///
    /// ` callback: *const fn (self: QtC.KIO__MimeTypeFinderJob, capabilities: flag of kjob_enums.Capability) callconv(.c) void `
    ///
    pub fn OnSetCapabilities(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.KIO__MimeTypeFinderJob_OnSetCapabilities(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#isFinished)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    pub fn IsFinished(self: ?*anyopaque) bool {
        return qtc.KIO__MimeTypeFinderJob_IsFinished(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperIsFinished` instead
    ///
    pub const QBaseIsFinished = SuperIsFinished;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#isFinished)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    pub fn SuperIsFinished(self: ?*anyopaque) bool {
        return qtc.KIO__MimeTypeFinderJob_SuperIsFinished(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#isFinished)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsFinished(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KIO__MimeTypeFinderJob_OnIsFinished(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setError)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` errorCode: i32 `
    ///
    pub fn SetError(self: ?*anyopaque, errorCode: i32) void {
        qtc.KIO__MimeTypeFinderJob_SetError(@ptrCast(self), @bitCast(errorCode));
    }

    /// ### DEPRECATED: Use `SuperSetError` instead
    ///
    pub const QBaseSetError = SuperSetError;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setError)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` errorCode: i32 `
    ///
    pub fn SuperSetError(self: ?*anyopaque, errorCode: i32) void {
        qtc.KIO__MimeTypeFinderJob_SuperSetError(@ptrCast(self), @bitCast(errorCode));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setError)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob`
    ///
    /// ` callback: *const fn (self: QtC.KIO__MimeTypeFinderJob, errorCode: i32) callconv(.c) void `
    ///
    pub fn OnSetError(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.KIO__MimeTypeFinderJob_OnSetError(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setErrorText)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` errorText: []const u8 `
    ///
    pub fn SetErrorText(self: ?*anyopaque, errorText: []const u8) void {
        const errorText_str = qtc.libqt_string{
            .len = errorText.len,
            .data = errorText.ptr,
        };
        qtc.KIO__MimeTypeFinderJob_SetErrorText(@ptrCast(self), errorText_str);
    }

    /// ### DEPRECATED: Use `SuperSetErrorText` instead
    ///
    pub const QBaseSetErrorText = SuperSetErrorText;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setErrorText)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` errorText: []const u8 `
    ///
    pub fn SuperSetErrorText(self: ?*anyopaque, errorText: []const u8) void {
        const errorText_str = qtc.libqt_string{
            .len = errorText.len,
            .data = errorText.ptr,
        };
        qtc.KIO__MimeTypeFinderJob_SuperSetErrorText(@ptrCast(self), errorText_str);
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setErrorText)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob`
    ///
    /// ` callback: *const fn (self: QtC.KIO__MimeTypeFinderJob, errorText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetErrorText(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KIO__MimeTypeFinderJob_OnSetErrorText(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setProcessedAmount)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    /// ` amount: u64 `
    ///
    pub fn SetProcessedAmount(self: ?*anyopaque, unit: i32, amount: u64) void {
        qtc.KIO__MimeTypeFinderJob_SetProcessedAmount(@ptrCast(self), @bitCast(unit), @bitCast(amount));
    }

    /// ### DEPRECATED: Use `SuperSetProcessedAmount` instead
    ///
    pub const QBaseSetProcessedAmount = SuperSetProcessedAmount;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setProcessedAmount)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    /// ` amount: u64 `
    ///
    pub fn SuperSetProcessedAmount(self: ?*anyopaque, unit: i32, amount: u64) void {
        qtc.KIO__MimeTypeFinderJob_SuperSetProcessedAmount(@ptrCast(self), @bitCast(unit), @bitCast(amount));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setProcessedAmount)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob`
    ///
    /// ` callback: *const fn (self: QtC.KIO__MimeTypeFinderJob, unit: kjob_enums.Unit, amount: u64) callconv(.c) void `
    ///
    pub fn OnSetProcessedAmount(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, u64) callconv(.c) void) void {
        qtc.KIO__MimeTypeFinderJob_OnSetProcessedAmount(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setTotalAmount)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    /// ` amount: u64 `
    ///
    pub fn SetTotalAmount(self: ?*anyopaque, unit: i32, amount: u64) void {
        qtc.KIO__MimeTypeFinderJob_SetTotalAmount(@ptrCast(self), @bitCast(unit), @bitCast(amount));
    }

    /// ### DEPRECATED: Use `SuperSetTotalAmount` instead
    ///
    pub const QBaseSetTotalAmount = SuperSetTotalAmount;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setTotalAmount)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    /// ` amount: u64 `
    ///
    pub fn SuperSetTotalAmount(self: ?*anyopaque, unit: i32, amount: u64) void {
        qtc.KIO__MimeTypeFinderJob_SuperSetTotalAmount(@ptrCast(self), @bitCast(unit), @bitCast(amount));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setTotalAmount)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob`
    ///
    /// ` callback: *const fn (self: QtC.KIO__MimeTypeFinderJob, unit: kjob_enums.Unit, amount: u64) callconv(.c) void `
    ///
    pub fn OnSetTotalAmount(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, u64) callconv(.c) void) void {
        qtc.KIO__MimeTypeFinderJob_OnSetTotalAmount(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setProgressUnit)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    pub fn SetProgressUnit(self: ?*anyopaque, unit: i32) void {
        qtc.KIO__MimeTypeFinderJob_SetProgressUnit(@ptrCast(self), @bitCast(unit));
    }

    /// ### DEPRECATED: Use `SuperSetProgressUnit` instead
    ///
    pub const QBaseSetProgressUnit = SuperSetProgressUnit;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setProgressUnit)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    pub fn SuperSetProgressUnit(self: ?*anyopaque, unit: i32) void {
        qtc.KIO__MimeTypeFinderJob_SuperSetProgressUnit(@ptrCast(self), @bitCast(unit));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setProgressUnit)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob`
    ///
    /// ` callback: *const fn (self: QtC.KIO__MimeTypeFinderJob, unit: kjob_enums.Unit) callconv(.c) void `
    ///
    pub fn OnSetProgressUnit(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.KIO__MimeTypeFinderJob_OnSetProgressUnit(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setPercent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` percentage: u64 `
    ///
    pub fn SetPercent(self: ?*anyopaque, percentage: u64) void {
        qtc.KIO__MimeTypeFinderJob_SetPercent(@ptrCast(self), @bitCast(percentage));
    }

    /// ### DEPRECATED: Use `SuperSetPercent` instead
    ///
    pub const QBaseSetPercent = SuperSetPercent;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setPercent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` percentage: u64 `
    ///
    pub fn SuperSetPercent(self: ?*anyopaque, percentage: u64) void {
        qtc.KIO__MimeTypeFinderJob_SuperSetPercent(@ptrCast(self), @bitCast(percentage));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setPercent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob`
    ///
    /// ` callback: *const fn (self: QtC.KIO__MimeTypeFinderJob, percentage: u64) callconv(.c) void `
    ///
    pub fn OnSetPercent(self: ?*anyopaque, callback: *const fn (?*anyopaque, u64) callconv(.c) void) void {
        qtc.KIO__MimeTypeFinderJob_OnSetPercent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitResult)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    pub fn EmitResult(self: ?*anyopaque) void {
        qtc.KIO__MimeTypeFinderJob_EmitResult(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperEmitResult` instead
    ///
    pub const QBaseEmitResult = SuperEmitResult;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitResult)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    pub fn SuperEmitResult(self: ?*anyopaque) void {
        qtc.KIO__MimeTypeFinderJob_SuperEmitResult(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitResult)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEmitResult(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KIO__MimeTypeFinderJob_OnEmitResult(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitPercent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` processedAmount: u64 `
    ///
    /// ` totalAmount: u64 `
    ///
    pub fn EmitPercent(self: ?*anyopaque, processedAmount: u64, totalAmount: u64) void {
        qtc.KIO__MimeTypeFinderJob_EmitPercent(@ptrCast(self), @bitCast(processedAmount), @bitCast(totalAmount));
    }

    /// ### DEPRECATED: Use `SuperEmitPercent` instead
    ///
    pub const QBaseEmitPercent = SuperEmitPercent;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitPercent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` processedAmount: u64 `
    ///
    /// ` totalAmount: u64 `
    ///
    pub fn SuperEmitPercent(self: ?*anyopaque, processedAmount: u64, totalAmount: u64) void {
        qtc.KIO__MimeTypeFinderJob_SuperEmitPercent(@ptrCast(self), @bitCast(processedAmount), @bitCast(totalAmount));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitPercent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob`
    ///
    /// ` callback: *const fn (self: QtC.KIO__MimeTypeFinderJob, processedAmount: u64, totalAmount: u64) callconv(.c) void `
    ///
    pub fn OnEmitPercent(self: ?*anyopaque, callback: *const fn (?*anyopaque, u64, u64) callconv(.c) void) void {
        qtc.KIO__MimeTypeFinderJob_OnEmitPercent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitSpeed)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` speed: u64 `
    ///
    pub fn EmitSpeed(self: ?*anyopaque, speed: u64) void {
        qtc.KIO__MimeTypeFinderJob_EmitSpeed(@ptrCast(self), @bitCast(speed));
    }

    /// ### DEPRECATED: Use `SuperEmitSpeed` instead
    ///
    pub const QBaseEmitSpeed = SuperEmitSpeed;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitSpeed)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` speed: u64 `
    ///
    pub fn SuperEmitSpeed(self: ?*anyopaque, speed: u64) void {
        qtc.KIO__MimeTypeFinderJob_SuperEmitSpeed(@ptrCast(self), @bitCast(speed));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitSpeed)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob`
    ///
    /// ` callback: *const fn (self: QtC.KIO__MimeTypeFinderJob, speed: u64) callconv(.c) void `
    ///
    pub fn OnEmitSpeed(self: ?*anyopaque, callback: *const fn (?*anyopaque, u64) callconv(.c) void) void {
        qtc.KIO__MimeTypeFinderJob_OnEmitSpeed(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#startElapsedTimer)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    pub fn StartElapsedTimer(self: ?*anyopaque) void {
        qtc.KIO__MimeTypeFinderJob_StartElapsedTimer(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperStartElapsedTimer` instead
    ///
    pub const QBaseStartElapsedTimer = SuperStartElapsedTimer;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#startElapsedTimer)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    pub fn SuperStartElapsedTimer(self: ?*anyopaque) void {
        qtc.KIO__MimeTypeFinderJob_SuperStartElapsedTimer(@ptrCast(self));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#startElapsedTimer)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnStartElapsedTimer(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KIO__MimeTypeFinderJob_OnStartElapsedTimer(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.KIO__MimeTypeFinderJob_Sender(@ptrCast(self));
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
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    pub fn SuperSender(self: ?*anyopaque) QtC.QObject {
        return qtc.KIO__MimeTypeFinderJob_SuperSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.KIO__MimeTypeFinderJob_OnSender(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KIO__MimeTypeFinderJob_SenderSignalIndex(@ptrCast(self));
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
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    pub fn SuperSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KIO__MimeTypeFinderJob_SuperSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.KIO__MimeTypeFinderJob_OnSenderSignalIndex(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KIO__MimeTypeFinderJob_Receivers(@ptrCast(self), signal_Cstring);
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
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KIO__MimeTypeFinderJob_SuperReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob`
    ///
    /// ` callback: *const fn (self: QtC.KIO__MimeTypeFinderJob, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.KIO__MimeTypeFinderJob_OnReceivers(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KIO__MimeTypeFinderJob_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KIO__MimeTypeFinderJob_SuperIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob`
    ///
    /// ` callback: *const fn (self: QtC.KIO__MimeTypeFinderJob, signal: QtC.QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KIO__MimeTypeFinderJob_OnIsSignalConnected(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#finished)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` callback: *const fn (self: QtC.KIO__MimeTypeFinderJob, job: QtC.KJob) callconv(.c) void `
    ///
    pub fn OnFinished(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KJob_Connect_Finished(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#suspended)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` callback: *const fn (self: QtC.KIO__MimeTypeFinderJob, job: QtC.KJob) callconv(.c) void `
    ///
    pub fn OnSuspended(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KJob_Connect_Suspended(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#resumed)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` callback: *const fn (self: QtC.KIO__MimeTypeFinderJob, job: QtC.KJob) callconv(.c) void `
    ///
    pub fn OnResumed(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KJob_Connect_Resumed(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#result)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` callback: *const fn (self: QtC.KIO__MimeTypeFinderJob, job: QtC.KJob) callconv(.c) void `
    ///
    pub fn OnResult(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KJob_Connect_Result(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#totalAmountChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` callback: *const fn (self: QtC.KIO__MimeTypeFinderJob, job: QtC.KJob, unit: kjob_enums.Unit, amount: u64) callconv(.c) void `
    ///
    pub fn OnTotalAmountChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, u64) callconv(.c) void) void {
        qtc.KJob_Connect_TotalAmountChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#processedAmountChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` callback: *const fn (self: QtC.KIO__MimeTypeFinderJob, job: QtC.KJob, unit: kjob_enums.Unit, amount: u64) callconv(.c) void `
    ///
    pub fn OnProcessedAmountChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, u64) callconv(.c) void) void {
        qtc.KJob_Connect_ProcessedAmountChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#percentChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` callback: *const fn (self: QtC.KIO__MimeTypeFinderJob, job: QtC.KJob, percent: u64) callconv(.c) void `
    ///
    pub fn OnPercentChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, u64) callconv(.c) void) void {
        qtc.KJob_Connect_PercentChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    /// ` callback: *const fn (self: QtC.KIO__MimeTypeFinderJob, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KIO__MimeTypeFinderJob `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.KIO__MimeTypeFinderJob_Delete(@ptrCast(self));
    }
};
