const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QNetworkAccessManager = @import("libqt6").QNetworkAccessManager;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1LanguageToolGetListOfLanguageJob.html)
pub const TextGrammarCheck__LanguageToolGetListOfLanguageJob = extern struct {
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1LanguageToolGetListOfLanguageJob.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.TextGrammarCheck__LanguageToolGetListOfLanguageJob,

    pub const _is_TextGrammarCheck__LanguageToolGetListOfLanguageJob = {};
    pub const _is_QObject = {};

    /// New constructs a new TextGrammarCheck::LanguageToolGetListOfLanguageJob object.
    ///
    pub fn New() TextGrammarCheck__LanguageToolGetListOfLanguageJob {
        return .{ .ptr = qtc.TextGrammarCheck__LanguageToolGetListOfLanguageJob_new() };
    }

    /// New2 constructs a new TextGrammarCheck::LanguageToolGetListOfLanguageJob object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) TextGrammarCheck__LanguageToolGetListOfLanguageJob {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.TextGrammarCheck__LanguageToolGetListOfLanguageJob_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1LanguageToolGetListOfLanguageJob.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    pub fn MetaObject(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob) QMetaObject {
        return .{ .ptr = qtc.TextGrammarCheck__LanguageToolGetListOfLanguageJob_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1LanguageToolGetListOfLanguageJob.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.TextGrammarCheck__LanguageToolGetListOfLanguageJob_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1LanguageToolGetListOfLanguageJob.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    pub fn SuperMetaObject(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob) QMetaObject {
        return .{ .ptr = qtc.TextGrammarCheck__LanguageToolGetListOfLanguageJob_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.TextGrammarCheck__LanguageToolGetListOfLanguageJob_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, callback: *const fn (TextGrammarCheck__LanguageToolGetListOfLanguageJob, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.TextGrammarCheck__LanguageToolGetListOfLanguageJob_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.TextGrammarCheck__LanguageToolGetListOfLanguageJob_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.TextGrammarCheck__LanguageToolGetListOfLanguageJob_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, callback: *const fn (TextGrammarCheck__LanguageToolGetListOfLanguageJob, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.TextGrammarCheck__LanguageToolGetListOfLanguageJob_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.TextGrammarCheck__LanguageToolGetListOfLanguageJob_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textgrammarcheck__languagetoolgetlistoflanguagejob.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1LanguageToolGetListOfLanguageJob.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    pub fn CanStart(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob) bool {
        return qtc.TextGrammarCheck__LanguageToolGetListOfLanguageJob_CanStart(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1LanguageToolGetListOfLanguageJob.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    pub fn Start(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob) void {
        qtc.TextGrammarCheck__LanguageToolGetListOfLanguageJob_Start(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1LanguageToolGetListOfLanguageJob.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ListOfLanguagePath(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextGrammarCheck__LanguageToolGetListOfLanguageJob_ListOfLanguagePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textgrammarcheck__languagetoolgetlistoflanguagejob.ListOfLanguagePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1LanguageToolGetListOfLanguageJob.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` listOfLanguagePath: []const u8 `
    ///
    pub fn SetListOfLanguagePath(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, listOfLanguagePath: []const u8) void {
        const listOfLanguagePath_str = qtc.libqt_string{
            .len = listOfLanguagePath.len,
            .data = listOfLanguagePath.ptr,
        };
        qtc.TextGrammarCheck__LanguageToolGetListOfLanguageJob_SetListOfLanguagePath(@ptrCast(self.ptr), listOfLanguagePath_str);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1LanguageToolGetListOfLanguageJob.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    pub fn NetworkAccessManager(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob) QNetworkAccessManager {
        return .{ .ptr = qtc.TextGrammarCheck__LanguageToolGetListOfLanguageJob_NetworkAccessManager(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1LanguageToolGetListOfLanguageJob.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` networkAccessManager: QNetworkAccessManager `
    ///
    pub fn SetNetworkAccessManager(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, networkAccessManager: anytype) void {
        comptime _ = @TypeOf(networkAccessManager)._is_QNetworkAccessManager;
        qtc.TextGrammarCheck__LanguageToolGetListOfLanguageJob_SetNetworkAccessManager(@ptrCast(self.ptr), @ptrCast(networkAccessManager.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1LanguageToolGetListOfLanguageJob.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Url(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextGrammarCheck__LanguageToolGetListOfLanguageJob_Url(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textgrammarcheck__languagetoolgetlistoflanguagejob.Url: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1LanguageToolGetListOfLanguageJob.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` url: []const u8 `
    ///
    pub fn SetUrl(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, url: []const u8) void {
        const url_str = qtc.libqt_string{
            .len = url.len,
            .data = url.ptr,
        };
        qtc.TextGrammarCheck__LanguageToolGetListOfLanguageJob_SetUrl(@ptrCast(self.ptr), url_str);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1LanguageToolGetListOfLanguageJob.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` result: []const u8 `
    ///
    pub fn Finished(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, result: []const u8) void {
        const result_str = qtc.libqt_string{
            .len = result.len,
            .data = result.ptr,
        };
        qtc.TextGrammarCheck__LanguageToolGetListOfLanguageJob_Finished(@ptrCast(self.ptr), result_str);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1LanguageToolGetListOfLanguageJob.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, result: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnFinished(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, callback: *const fn (TextGrammarCheck__LanguageToolGetListOfLanguageJob, [*:0]const u8) callconv(.c) void) void {
        qtc.TextGrammarCheck__LanguageToolGetListOfLanguageJob_Connect_Finished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1LanguageToolGetListOfLanguageJob.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` errorStr: []const u8 `
    ///
    pub fn Error(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, errorStr: []const u8) void {
        const errorStr_str = qtc.libqt_string{
            .len = errorStr.len,
            .data = errorStr.ptr,
        };
        qtc.TextGrammarCheck__LanguageToolGetListOfLanguageJob_Error(@ptrCast(self.ptr), errorStr_str);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1LanguageToolGetListOfLanguageJob.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, errorStr: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnError(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, callback: *const fn (TextGrammarCheck__LanguageToolGetListOfLanguageJob, [*:0]const u8) callconv(.c) void) void {
        qtc.TextGrammarCheck__LanguageToolGetListOfLanguageJob_Connect_Error(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textgrammarcheck__languagetoolgetlistoflanguagejob.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textgrammarcheck__languagetoolgetlistoflanguagejob.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textgrammarcheck__languagetoolgetlistoflanguagejob.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    pub fn IsWidgetType(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    pub fn IsWindowType(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    pub fn IsQuickItemType(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    pub fn SignalsBlocked(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    pub fn Thread(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("textgrammarcheck__languagetoolgetlistoflanguagejob.Children: Memory allocation failed");
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
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, obj: anytype) void {
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
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    pub fn Disconnect3(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, receiver: anytype) bool {
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
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    pub fn DumpObjectTree(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    pub fn DumpObjectInfo(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("textgrammarcheck__languagetoolgetlistoflanguagejob.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("textgrammarcheck__languagetoolgetlistoflanguagejob.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    pub fn BindingStorage(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    pub fn BindingStorage2(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    pub fn Destroyed(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__LanguageToolGetListOfLanguageJob) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, callback: *const fn (TextGrammarCheck__LanguageToolGetListOfLanguageJob) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    pub fn Parent(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    pub fn DeleteLater(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, time: i64, timerType: i32) i32 {
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
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, callback: *const fn (TextGrammarCheck__LanguageToolGetListOfLanguageJob, QObject) callconv(.c) void) void {
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
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.TextGrammarCheck__LanguageToolGetListOfLanguageJob_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.TextGrammarCheck__LanguageToolGetListOfLanguageJob_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, callback: *const fn (TextGrammarCheck__LanguageToolGetListOfLanguageJob, QEvent) callconv(.c) bool) void {
        qtc.TextGrammarCheck__LanguageToolGetListOfLanguageJob_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.TextGrammarCheck__LanguageToolGetListOfLanguageJob_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.TextGrammarCheck__LanguageToolGetListOfLanguageJob_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, callback: *const fn (TextGrammarCheck__LanguageToolGetListOfLanguageJob, QObject, QEvent) callconv(.c) bool) void {
        qtc.TextGrammarCheck__LanguageToolGetListOfLanguageJob_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.TextGrammarCheck__LanguageToolGetListOfLanguageJob_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.TextGrammarCheck__LanguageToolGetListOfLanguageJob_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, callback: *const fn (TextGrammarCheck__LanguageToolGetListOfLanguageJob, QTimerEvent) callconv(.c) void) void {
        qtc.TextGrammarCheck__LanguageToolGetListOfLanguageJob_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.TextGrammarCheck__LanguageToolGetListOfLanguageJob_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.TextGrammarCheck__LanguageToolGetListOfLanguageJob_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, callback: *const fn (TextGrammarCheck__LanguageToolGetListOfLanguageJob, QChildEvent) callconv(.c) void) void {
        qtc.TextGrammarCheck__LanguageToolGetListOfLanguageJob_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.TextGrammarCheck__LanguageToolGetListOfLanguageJob_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.TextGrammarCheck__LanguageToolGetListOfLanguageJob_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, callback: *const fn (TextGrammarCheck__LanguageToolGetListOfLanguageJob, QEvent) callconv(.c) void) void {
        qtc.TextGrammarCheck__LanguageToolGetListOfLanguageJob_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextGrammarCheck__LanguageToolGetListOfLanguageJob_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextGrammarCheck__LanguageToolGetListOfLanguageJob_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, callback: *const fn (TextGrammarCheck__LanguageToolGetListOfLanguageJob, QMetaMethod) callconv(.c) void) void {
        qtc.TextGrammarCheck__LanguageToolGetListOfLanguageJob_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextGrammarCheck__LanguageToolGetListOfLanguageJob_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextGrammarCheck__LanguageToolGetListOfLanguageJob_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, callback: *const fn (TextGrammarCheck__LanguageToolGetListOfLanguageJob, QMetaMethod) callconv(.c) void) void {
        qtc.TextGrammarCheck__LanguageToolGetListOfLanguageJob_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    pub fn Sender(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob) QObject {
        return .{ .ptr = qtc.TextGrammarCheck__LanguageToolGetListOfLanguageJob_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    pub fn SuperSender(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob) QObject {
        return .{ .ptr = qtc.TextGrammarCheck__LanguageToolGetListOfLanguageJob_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, callback: *const fn () callconv(.c) QObject) void {
        qtc.TextGrammarCheck__LanguageToolGetListOfLanguageJob_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    pub fn SenderSignalIndex(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob) i32 {
        return qtc.TextGrammarCheck__LanguageToolGetListOfLanguageJob_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    pub fn SuperSenderSignalIndex(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob) i32 {
        return qtc.TextGrammarCheck__LanguageToolGetListOfLanguageJob_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, callback: *const fn () callconv(.c) i32) void {
        qtc.TextGrammarCheck__LanguageToolGetListOfLanguageJob_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.TextGrammarCheck__LanguageToolGetListOfLanguageJob_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.TextGrammarCheck__LanguageToolGetListOfLanguageJob_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, callback: *const fn (TextGrammarCheck__LanguageToolGetListOfLanguageJob, [*:0]const u8) callconv(.c) i32) void {
        qtc.TextGrammarCheck__LanguageToolGetListOfLanguageJob_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.TextGrammarCheck__LanguageToolGetListOfLanguageJob_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.TextGrammarCheck__LanguageToolGetListOfLanguageJob_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, callback: *const fn (TextGrammarCheck__LanguageToolGetListOfLanguageJob, QMetaMethod) callconv(.c) bool) void {
        qtc.TextGrammarCheck__LanguageToolGetListOfLanguageJob_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob, callback: *const fn (TextGrammarCheck__LanguageToolGetListOfLanguageJob, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1LanguageToolGetListOfLanguageJob.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: TextGrammarCheck__LanguageToolGetListOfLanguageJob `
    ///
    pub fn Delete(self: TextGrammarCheck__LanguageToolGetListOfLanguageJob) void {
        qtc.TextGrammarCheck__LanguageToolGetListOfLanguageJob_Delete(@ptrCast(self.ptr));
    }
};
