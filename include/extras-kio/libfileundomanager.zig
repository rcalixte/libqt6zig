const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KIO__CopyJob = @import("libqt6").KIO__CopyJob;
const KIO__Job = @import("libqt6").KIO__Job;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QDateTime = @import("libqt6").QDateTime;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const QWidget = @import("libqt6").QWidget;
const fileundomanager_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html)
pub const KIO__FileUndoManager = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KIO__FileUndoManager,

    pub const _is_KIO__FileUndoManager = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__FileUndoManager `
    ///
    pub fn metaObject(self: KIO__FileUndoManager) QMetaObject {
        return .{ .ptr = qtc.KIO__FileUndoManager_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KIO__FileUndoManager, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KIO__FileUndoManager_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: KIO__FileUndoManager, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KIO__FileUndoManager_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIO__FileUndoManager.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `self0` instead
    ///
    pub const Self = self0;

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html#self)
    ///
    pub fn self0() KIO__FileUndoManager {
        return .{ .ptr = qtc.KIO__FileUndoManager_Self() };
    }

    /// ### DEPRECATED: Use `setUiInterface` instead
    ///
    pub const SetUiInterface = setUiInterface;

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html#setUiInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` ui: KIO__FileUndoManager__UiInterface `
    ///
    pub fn setUiInterface(self: KIO__FileUndoManager, ui: anytype) void {
        comptime _ = @TypeOf(ui)._is_KIO__FileUndoManager__UiInterface;
        qtc.KIO__FileUndoManager_SetUiInterface(@ptrCast(self.ptr), @ptrCast(ui.ptr));
    }

    /// ### DEPRECATED: Use `uiInterface` instead
    ///
    pub const UiInterface = uiInterface;

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html#uiInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__FileUndoManager `
    ///
    pub fn uiInterface(self: KIO__FileUndoManager) KIO__FileUndoManager__UiInterface {
        return .{ .ptr = qtc.KIO__FileUndoManager_UiInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `recordJob` instead
    ///
    pub const RecordJob = recordJob;

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html#recordJob)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` op: fileundomanager_enums.CommandType `
    ///
    /// ` src: []QUrl `
    ///
    /// ` dst: QUrl `
    ///
    /// ` job: KIO__Job `
    ///
    pub fn recordJob(self: KIO__FileUndoManager, op: i32, src: []QUrl, dst: anytype, job: anytype) void {
        const src_list = qtc.libqt_list{
            .len = src.len,
            .data = @ptrCast(src.ptr),
        };
        comptime _ = @TypeOf(dst)._is_QUrl;
        comptime _ = @TypeOf(job)._is_KIO__Job;
        qtc.KIO__FileUndoManager_RecordJob(@ptrCast(self.ptr), @bitCast(op), src_list, @ptrCast(dst.ptr), @ptrCast(job.ptr));
    }

    /// ### DEPRECATED: Use `recordCopyJob` instead
    ///
    pub const RecordCopyJob = recordCopyJob;

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html#recordCopyJob)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` copyJob: KIO__CopyJob `
    ///
    pub fn recordCopyJob(self: KIO__FileUndoManager, copyJob: anytype) void {
        comptime _ = @TypeOf(copyJob)._is_KIO__CopyJob;
        qtc.KIO__FileUndoManager_RecordCopyJob(@ptrCast(self.ptr), @ptrCast(copyJob.ptr));
    }

    /// ### DEPRECATED: Use `isUndoAvailable` instead
    ///
    pub const IsUndoAvailable = isUndoAvailable;

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html#isUndoAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__FileUndoManager `
    ///
    pub fn isUndoAvailable(self: KIO__FileUndoManager) bool {
        return qtc.KIO__FileUndoManager_IsUndoAvailable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `undoText` instead
    ///
    pub const UndoText = undoText;

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html#undoText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn undoText(self: KIO__FileUndoManager, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KIO__FileUndoManager_UndoText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIO__FileUndoManager.undoText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `newCommandSerialNumber` instead
    ///
    pub const NewCommandSerialNumber = newCommandSerialNumber;

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html#newCommandSerialNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__FileUndoManager `
    ///
    pub fn newCommandSerialNumber(self: KIO__FileUndoManager) u64 {
        return qtc.KIO__FileUndoManager_NewCommandSerialNumber(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `currentCommandSerialNumber` instead
    ///
    pub const CurrentCommandSerialNumber = currentCommandSerialNumber;

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html#currentCommandSerialNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__FileUndoManager `
    ///
    pub fn currentCommandSerialNumber(self: KIO__FileUndoManager) u64 {
        return qtc.KIO__FileUndoManager_CurrentCommandSerialNumber(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `undo` instead
    ///
    pub const Undo = undo;

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html#undo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__FileUndoManager `
    ///
    pub fn undo(self: KIO__FileUndoManager) void {
        qtc.KIO__FileUndoManager_Undo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `undoAvailable` instead
    ///
    pub const UndoAvailable = undoAvailable;

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html#undoAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` avail: bool `
    ///
    pub fn undoAvailable(self: KIO__FileUndoManager, avail: bool) void {
        qtc.KIO__FileUndoManager_UndoAvailable(@ptrCast(self.ptr), avail);
    }

    /// ### DEPRECATED: Use `onUndoAvailable` instead
    ///
    pub const OnUndoAvailable = onUndoAvailable;

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html#undoAvailable)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` callback: *const fn (self: KIO__FileUndoManager, avail: bool) callconv(.c) void `
    ///
    pub fn onUndoAvailable(self: KIO__FileUndoManager, callback: *const fn (KIO__FileUndoManager, bool) callconv(.c) void) void {
        qtc.KIO__FileUndoManager_Connect_UndoAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `undoTextChanged` instead
    ///
    pub const UndoTextChanged = undoTextChanged;

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html#undoTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` text: []const u8 `
    ///
    pub fn undoTextChanged(self: KIO__FileUndoManager, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KIO__FileUndoManager_UndoTextChanged(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `onUndoTextChanged` instead
    ///
    pub const OnUndoTextChanged = onUndoTextChanged;

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html#undoTextChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` callback: *const fn (self: KIO__FileUndoManager, text: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onUndoTextChanged(self: KIO__FileUndoManager, callback: *const fn (KIO__FileUndoManager, [*:0]const u8) callconv(.c) void) void {
        qtc.KIO__FileUndoManager_Connect_UndoTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `undoJobFinished` instead
    ///
    pub const UndoJobFinished = undoJobFinished;

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html#undoJobFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__FileUndoManager `
    ///
    pub fn undoJobFinished(self: KIO__FileUndoManager) void {
        qtc.KIO__FileUndoManager_UndoJobFinished(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUndoJobFinished` instead
    ///
    pub const OnUndoJobFinished = onUndoJobFinished;

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html#undoJobFinished)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` callback: *const fn (self: KIO__FileUndoManager) callconv(.c) void `
    ///
    pub fn onUndoJobFinished(self: KIO__FileUndoManager, callback: *const fn (KIO__FileUndoManager) callconv(.c) void) void {
        qtc.KIO__FileUndoManager_Connect_UndoJobFinished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `jobRecordingStarted` instead
    ///
    pub const JobRecordingStarted = jobRecordingStarted;

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html#jobRecordingStarted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` op: fileundomanager_enums.CommandType `
    ///
    pub fn jobRecordingStarted(self: KIO__FileUndoManager, op: i32) void {
        qtc.KIO__FileUndoManager_JobRecordingStarted(@ptrCast(self.ptr), @bitCast(op));
    }

    /// ### DEPRECATED: Use `onJobRecordingStarted` instead
    ///
    pub const OnJobRecordingStarted = onJobRecordingStarted;

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html#jobRecordingStarted)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` callback: *const fn (self: KIO__FileUndoManager, op: fileundomanager_enums.CommandType) callconv(.c) void `
    ///
    pub fn onJobRecordingStarted(self: KIO__FileUndoManager, callback: *const fn (KIO__FileUndoManager, i32) callconv(.c) void) void {
        qtc.KIO__FileUndoManager_Connect_JobRecordingStarted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `jobRecordingFinished` instead
    ///
    pub const JobRecordingFinished = jobRecordingFinished;

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html#jobRecordingFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` op: fileundomanager_enums.CommandType `
    ///
    pub fn jobRecordingFinished(self: KIO__FileUndoManager, op: i32) void {
        qtc.KIO__FileUndoManager_JobRecordingFinished(@ptrCast(self.ptr), @bitCast(op));
    }

    /// ### DEPRECATED: Use `onJobRecordingFinished` instead
    ///
    pub const OnJobRecordingFinished = onJobRecordingFinished;

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html#jobRecordingFinished)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` callback: *const fn (self: KIO__FileUndoManager, op: fileundomanager_enums.CommandType) callconv(.c) void `
    ///
    pub fn onJobRecordingFinished(self: KIO__FileUndoManager, callback: *const fn (KIO__FileUndoManager, i32) callconv(.c) void) void {
        qtc.KIO__FileUndoManager_Connect_JobRecordingFinished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIO__FileUndoManager.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIO__FileUndoManager.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: KIO__FileUndoManager, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KIO__FileUndoManager, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QObject_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KIO__FileUndoManager, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIO__FileUndoManager.objectName: Memory allocation failed");
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
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: KIO__FileUndoManager, name: []const u8) void {
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
    /// ` self: KIO__FileUndoManager `
    ///
    pub fn isWidgetType(self: KIO__FileUndoManager) bool {
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
    /// ` self: KIO__FileUndoManager `
    ///
    pub fn isWindowType(self: KIO__FileUndoManager) bool {
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
    /// ` self: KIO__FileUndoManager `
    ///
    pub fn isQuickItemType(self: KIO__FileUndoManager) bool {
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
    /// ` self: KIO__FileUndoManager `
    ///
    pub fn signalsBlocked(self: KIO__FileUndoManager) bool {
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
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KIO__FileUndoManager, b: bool) bool {
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
    /// ` self: KIO__FileUndoManager `
    ///
    pub fn thread(self: KIO__FileUndoManager) QThread {
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
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KIO__FileUndoManager, _thread: anytype) bool {
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
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KIO__FileUndoManager, interval: i32) i32 {
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
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KIO__FileUndoManager, time: i64) i32 {
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
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KIO__FileUndoManager, id: i32) void {
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
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KIO__FileUndoManager, id: i32) void {
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
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KIO__FileUndoManager, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KIO__FileUndoManager.children: Memory allocation failed");
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
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KIO__FileUndoManager, _parent: anytype) void {
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
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KIO__FileUndoManager, filterObj: anytype) void {
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
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KIO__FileUndoManager, obj: anytype) void {
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
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KIO__FileUndoManager, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KIO__FileUndoManager `
    ///
    pub fn disconnect3(self: KIO__FileUndoManager) bool {
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
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KIO__FileUndoManager, receiver: anytype) bool {
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
    /// ` self: KIO__FileUndoManager `
    ///
    pub fn dumpObjectTree(self: KIO__FileUndoManager) void {
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
    /// ` self: KIO__FileUndoManager `
    ///
    pub fn dumpObjectInfo(self: KIO__FileUndoManager) void {
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
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KIO__FileUndoManager, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: KIO__FileUndoManager, name: [:0]const u8) QVariant {
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
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KIO__FileUndoManager, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KIO__FileUndoManager.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KIO__FileUndoManager.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KIO__FileUndoManager `
    ///
    pub fn bindingStorage(self: KIO__FileUndoManager) QBindingStorage {
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
    /// ` self: KIO__FileUndoManager `
    ///
    pub fn bindingStorage2(self: KIO__FileUndoManager) QBindingStorage {
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
    /// ` self: KIO__FileUndoManager `
    ///
    pub fn destroyed(self: KIO__FileUndoManager) void {
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
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` callback: *const fn (self: KIO__FileUndoManager) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KIO__FileUndoManager, callback: *const fn (KIO__FileUndoManager) callconv(.c) void) void {
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
    /// ` self: KIO__FileUndoManager `
    ///
    pub fn parent(self: KIO__FileUndoManager) QObject {
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
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KIO__FileUndoManager, classname: [:0]const u8) bool {
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
    /// ` self: KIO__FileUndoManager `
    ///
    pub fn deleteLater(self: KIO__FileUndoManager) void {
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
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KIO__FileUndoManager, interval: i32, timerType: i32) i32 {
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
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KIO__FileUndoManager, time: i64, timerType: i32) i32 {
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
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KIO__FileUndoManager, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KIO__FileUndoManager, signal: [:0]const u8) bool {
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
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KIO__FileUndoManager, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KIO__FileUndoManager, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KIO__FileUndoManager, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KIO__FileUndoManager, param1: anytype) void {
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
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` callback: *const fn (self: KIO__FileUndoManager, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KIO__FileUndoManager, callback: *const fn (KIO__FileUndoManager, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` callback: *const fn (self: KIO__FileUndoManager, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KIO__FileUndoManager, callback: *const fn (KIO__FileUndoManager, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }
};

/// ### [Upstream resources](https://api.kde.org/kio-fileundomanager-uiinterface.html)
pub const KIO__FileUndoManager__UiInterface = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager-uiinterface.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KIO__FileUndoManager__UiInterface,

    pub const _is_KIO__FileUndoManager__UiInterface = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KIO::FileUndoManager::UiInterface object in C++ memory
    ///
    pub fn new() KIO__FileUndoManager__UiInterface {
        return .{ .ptr = qtc.KIO__FileUndoManager__UiInterface_new() };
    }

    /// ### DEPRECATED: Use `setShowProgressInfo` instead
    ///
    pub const SetShowProgressInfo = setShowProgressInfo;

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager-uiinterface.html#setShowProgressInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__FileUndoManager__UiInterface `
    ///
    /// ` b: bool `
    ///
    pub fn setShowProgressInfo(self: KIO__FileUndoManager__UiInterface, b: bool) void {
        qtc.KIO__FileUndoManager__UiInterface_SetShowProgressInfo(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `showProgressInfo` instead
    ///
    pub const ShowProgressInfo = showProgressInfo;

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager-uiinterface.html#showProgressInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__FileUndoManager__UiInterface `
    ///
    pub fn showProgressInfo(self: KIO__FileUndoManager__UiInterface) bool {
        return qtc.KIO__FileUndoManager__UiInterface_ShowProgressInfo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setParentWidget` instead
    ///
    pub const SetParentWidget = setParentWidget;

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager-uiinterface.html#setParentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__FileUndoManager__UiInterface `
    ///
    /// ` _parentWidget: QWidget `
    ///
    pub fn setParentWidget(self: KIO__FileUndoManager__UiInterface, _parentWidget: anytype) void {
        comptime _ = @TypeOf(_parentWidget)._is_QWidget;
        qtc.KIO__FileUndoManager__UiInterface_SetParentWidget(@ptrCast(self.ptr), @ptrCast(_parentWidget.ptr));
    }

    /// ### DEPRECATED: Use `parentWidget` instead
    ///
    pub const ParentWidget = parentWidget;

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager-uiinterface.html#parentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__FileUndoManager__UiInterface `
    ///
    pub fn parentWidget(self: KIO__FileUndoManager__UiInterface) QWidget {
        return .{ .ptr = qtc.KIO__FileUndoManager__UiInterface_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `jobError` instead
    ///
    pub const JobError = jobError;

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager-uiinterface.html#jobError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__FileUndoManager__UiInterface `
    ///
    /// ` job: KIO__Job `
    ///
    pub fn jobError(self: KIO__FileUndoManager__UiInterface, job: anytype) void {
        comptime _ = @TypeOf(job)._is_KIO__Job;
        qtc.KIO__FileUndoManager__UiInterface_JobError(@ptrCast(self.ptr), @ptrCast(job.ptr));
    }

    /// ### DEPRECATED: Use `onJobError` instead
    ///
    pub const OnJobError = onJobError;

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager-uiinterface.html#jobError)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__FileUndoManager__UiInterface `
    ///
    /// ` callback: *const fn (self: KIO__FileUndoManager__UiInterface, job: KIO__Job) callconv(.c) void `
    ///
    pub fn onJobError(self: KIO__FileUndoManager__UiInterface, callback: *const fn (KIO__FileUndoManager__UiInterface, KIO__Job) callconv(.c) void) void {
        qtc.KIO__FileUndoManager__UiInterface_OnJobError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superJobError` instead
    ///
    pub const SuperJobError = superJobError;

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager-uiinterface.html#jobError)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__FileUndoManager__UiInterface `
    ///
    /// ` job: KIO__Job `
    ///
    pub fn superJobError(self: KIO__FileUndoManager__UiInterface, job: anytype) void {
        comptime _ = @TypeOf(job)._is_KIO__Job;
        qtc.KIO__FileUndoManager__UiInterface_SuperJobError(@ptrCast(self.ptr), @ptrCast(job.ptr));
    }

    /// ### DEPRECATED: Use `copiedFileWasModified` instead
    ///
    pub const CopiedFileWasModified = copiedFileWasModified;

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager-uiinterface.html#copiedFileWasModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__FileUndoManager__UiInterface `
    ///
    /// ` src: QUrl `
    ///
    /// ` dest: QUrl `
    ///
    /// ` srcTime: QDateTime `
    ///
    /// ` destTime: QDateTime `
    ///
    pub fn copiedFileWasModified(self: KIO__FileUndoManager__UiInterface, src: anytype, dest: anytype, srcTime: anytype, destTime: anytype) bool {
        comptime _ = @TypeOf(src)._is_QUrl;
        comptime _ = @TypeOf(dest)._is_QUrl;
        comptime _ = @TypeOf(srcTime)._is_QDateTime;
        comptime _ = @TypeOf(destTime)._is_QDateTime;
        return qtc.KIO__FileUndoManager__UiInterface_CopiedFileWasModified(@ptrCast(self.ptr), @ptrCast(src.ptr), @ptrCast(dest.ptr), @ptrCast(srcTime.ptr), @ptrCast(destTime.ptr));
    }

    /// ### DEPRECATED: Use `onCopiedFileWasModified` instead
    ///
    pub const OnCopiedFileWasModified = onCopiedFileWasModified;

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager-uiinterface.html#copiedFileWasModified)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__FileUndoManager__UiInterface `
    ///
    /// ` callback: *const fn (self: KIO__FileUndoManager__UiInterface, src: QUrl, dest: QUrl, srcTime: QDateTime, destTime: QDateTime) callconv(.c) bool `
    ///
    pub fn onCopiedFileWasModified(self: KIO__FileUndoManager__UiInterface, callback: *const fn (KIO__FileUndoManager__UiInterface, QUrl, QUrl, QDateTime, QDateTime) callconv(.c) bool) void {
        qtc.KIO__FileUndoManager__UiInterface_OnCopiedFileWasModified(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCopiedFileWasModified` instead
    ///
    pub const SuperCopiedFileWasModified = superCopiedFileWasModified;

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager-uiinterface.html#copiedFileWasModified)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__FileUndoManager__UiInterface `
    ///
    /// ` src: QUrl `
    ///
    /// ` dest: QUrl `
    ///
    /// ` srcTime: QDateTime `
    ///
    /// ` destTime: QDateTime `
    ///
    pub fn superCopiedFileWasModified(self: KIO__FileUndoManager__UiInterface, src: anytype, dest: anytype, srcTime: anytype, destTime: anytype) bool {
        comptime _ = @TypeOf(src)._is_QUrl;
        comptime _ = @TypeOf(dest)._is_QUrl;
        comptime _ = @TypeOf(srcTime)._is_QDateTime;
        comptime _ = @TypeOf(destTime)._is_QDateTime;
        return qtc.KIO__FileUndoManager__UiInterface_SuperCopiedFileWasModified(@ptrCast(self.ptr), @ptrCast(src.ptr), @ptrCast(dest.ptr), @ptrCast(srcTime.ptr), @ptrCast(destTime.ptr));
    }

    /// ### DEPRECATED: Use `virtualHook` instead
    ///
    pub const VirtualHook = virtualHook;

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager-uiinterface.html#virtual_hook)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__FileUndoManager__UiInterface `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn virtualHook(self: KIO__FileUndoManager__UiInterface, id: i32, data: ?*anyopaque) void {
        qtc.KIO__FileUndoManager__UiInterface_VirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `onVirtualHook` instead
    ///
    pub const OnVirtualHook = onVirtualHook;

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager-uiinterface.html#virtual_hook)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__FileUndoManager__UiInterface `
    ///
    /// ` callback: *const fn (self: KIO__FileUndoManager__UiInterface, id: i32, data: ?*anyopaque) callconv(.c) void `
    ///
    pub fn onVirtualHook(self: KIO__FileUndoManager__UiInterface, callback: *const fn (KIO__FileUndoManager__UiInterface, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.KIO__FileUndoManager__UiInterface_OnVirtualHook(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superVirtualHook` instead
    ///
    pub const SuperVirtualHook = superVirtualHook;

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager-uiinterface.html#virtual_hook)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__FileUndoManager__UiInterface `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn superVirtualHook(self: KIO__FileUndoManager__UiInterface, id: i32, data: ?*anyopaque) void {
        qtc.KIO__FileUndoManager__UiInterface_SuperVirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KIO__FileUndoManager__UiInterface `
    ///
    pub fn delete(self: KIO__FileUndoManager__UiInterface) void {
        qtc.KIO__FileUndoManager__UiInterface_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html#public-types)
pub const enums = struct {
    pub const CommandType = enum {
        pub const Copy: i32 = 0;
        pub const Move: i32 = 1;
        pub const Rename: i32 = 2;
        pub const Link: i32 = 3;
        pub const Mkdir: i32 = 4;
        pub const Trash: i32 = 5;
        pub const Put: i32 = 6;
        pub const Mkpath: i32 = 7;
        pub const BatchRename: i32 = 8;
    };

    pub const KIO__FileUndoManager__UiInterface = enum {
        pub const HookGetAskUserActionInterface: i32 = 1;
    };
};
