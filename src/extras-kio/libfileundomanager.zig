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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__FileUndoManager `
    ///
    pub fn MetaObject(self: KIO__FileUndoManager) QMetaObject {
        return .{ .ptr = qtc.KIO__FileUndoManager_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KIO__FileUndoManager, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KIO__FileUndoManager_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

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
    pub fn Metacall(self: KIO__FileUndoManager, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KIO__FileUndoManager_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__fileundomanager.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html#self)
    ///
    pub fn Self() KIO__FileUndoManager {
        return .{ .ptr = qtc.KIO__FileUndoManager_Self() };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html#setUiInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` ui: KIO__FileUndoManager__UiInterface `
    ///
    pub fn SetUiInterface(self: KIO__FileUndoManager, ui: anytype) void {
        comptime _ = @TypeOf(ui)._is_KIO__FileUndoManager__UiInterface;
        qtc.KIO__FileUndoManager_SetUiInterface(@ptrCast(self.ptr), @ptrCast(ui.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html#uiInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__FileUndoManager `
    ///
    pub fn UiInterface(self: KIO__FileUndoManager) KIO__FileUndoManager__UiInterface {
        return .{ .ptr = qtc.KIO__FileUndoManager_UiInterface(@ptrCast(self.ptr)) };
    }

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
    pub fn RecordJob(self: KIO__FileUndoManager, op: i32, src: []QUrl, dst: anytype, job: anytype) void {
        const src_list = qtc.libqt_list{
            .len = src.len,
            .data = @ptrCast(src.ptr),
        };
        comptime _ = @TypeOf(dst)._is_QUrl;
        comptime _ = @TypeOf(job)._is_KIO__Job;
        qtc.KIO__FileUndoManager_RecordJob(@ptrCast(self.ptr), @bitCast(op), src_list, @ptrCast(dst.ptr), @ptrCast(job.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html#recordCopyJob)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` copyJob: KIO__CopyJob `
    ///
    pub fn RecordCopyJob(self: KIO__FileUndoManager, copyJob: anytype) void {
        comptime _ = @TypeOf(copyJob)._is_KIO__CopyJob;
        qtc.KIO__FileUndoManager_RecordCopyJob(@ptrCast(self.ptr), @ptrCast(copyJob.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html#isUndoAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__FileUndoManager `
    ///
    pub fn IsUndoAvailable(self: KIO__FileUndoManager) bool {
        return qtc.KIO__FileUndoManager_IsUndoAvailable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html#undoText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn UndoText(self: KIO__FileUndoManager, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KIO__FileUndoManager_UndoText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__fileundomanager.UndoText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html#newCommandSerialNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__FileUndoManager `
    ///
    pub fn NewCommandSerialNumber(self: KIO__FileUndoManager) u64 {
        return qtc.KIO__FileUndoManager_NewCommandSerialNumber(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html#currentCommandSerialNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__FileUndoManager `
    ///
    pub fn CurrentCommandSerialNumber(self: KIO__FileUndoManager) u64 {
        return qtc.KIO__FileUndoManager_CurrentCommandSerialNumber(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html#undo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__FileUndoManager `
    ///
    pub fn Undo(self: KIO__FileUndoManager) void {
        qtc.KIO__FileUndoManager_Undo(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html#undoAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` avail: bool `
    ///
    pub fn UndoAvailable(self: KIO__FileUndoManager, avail: bool) void {
        qtc.KIO__FileUndoManager_UndoAvailable(@ptrCast(self.ptr), avail);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html#undoAvailable)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` callback: *const fn (self: KIO__FileUndoManager, avail: bool) callconv(.c) void `
    ///
    pub fn OnUndoAvailable(self: KIO__FileUndoManager, callback: *const fn (KIO__FileUndoManager, bool) callconv(.c) void) void {
        qtc.KIO__FileUndoManager_Connect_UndoAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html#undoTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` text: []const u8 `
    ///
    pub fn UndoTextChanged(self: KIO__FileUndoManager, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KIO__FileUndoManager_UndoTextChanged(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html#undoTextChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` callback: *const fn (self: KIO__FileUndoManager, text: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnUndoTextChanged(self: KIO__FileUndoManager, callback: *const fn (KIO__FileUndoManager, [*:0]const u8) callconv(.c) void) void {
        qtc.KIO__FileUndoManager_Connect_UndoTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html#undoJobFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__FileUndoManager `
    ///
    pub fn UndoJobFinished(self: KIO__FileUndoManager) void {
        qtc.KIO__FileUndoManager_UndoJobFinished(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html#undoJobFinished)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` callback: *const fn (self: KIO__FileUndoManager) callconv(.c) void `
    ///
    pub fn OnUndoJobFinished(self: KIO__FileUndoManager, callback: *const fn (KIO__FileUndoManager) callconv(.c) void) void {
        qtc.KIO__FileUndoManager_Connect_UndoJobFinished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html#jobRecordingStarted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` op: fileundomanager_enums.CommandType `
    ///
    pub fn JobRecordingStarted(self: KIO__FileUndoManager, op: i32) void {
        qtc.KIO__FileUndoManager_JobRecordingStarted(@ptrCast(self.ptr), @bitCast(op));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html#jobRecordingStarted)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` callback: *const fn (self: KIO__FileUndoManager, op: fileundomanager_enums.CommandType) callconv(.c) void `
    ///
    pub fn OnJobRecordingStarted(self: KIO__FileUndoManager, callback: *const fn (KIO__FileUndoManager, i32) callconv(.c) void) void {
        qtc.KIO__FileUndoManager_Connect_JobRecordingStarted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html#jobRecordingFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` op: fileundomanager_enums.CommandType `
    ///
    pub fn JobRecordingFinished(self: KIO__FileUndoManager, op: i32) void {
        qtc.KIO__FileUndoManager_JobRecordingFinished(@ptrCast(self.ptr), @bitCast(op));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html#jobRecordingFinished)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` callback: *const fn (self: KIO__FileUndoManager, op: fileundomanager_enums.CommandType) callconv(.c) void `
    ///
    pub fn OnJobRecordingFinished(self: KIO__FileUndoManager, callback: *const fn (KIO__FileUndoManager, i32) callconv(.c) void) void {
        qtc.KIO__FileUndoManager_Connect_JobRecordingFinished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__fileundomanager.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__fileundomanager.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KIO__FileUndoManager, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KIO__FileUndoManager, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

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
    pub fn ObjectName(self: KIO__FileUndoManager, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__fileundomanager.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetObjectName(self: KIO__FileUndoManager, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__FileUndoManager `
    ///
    pub fn IsWidgetType(self: KIO__FileUndoManager) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__FileUndoManager `
    ///
    pub fn IsWindowType(self: KIO__FileUndoManager) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__FileUndoManager `
    ///
    pub fn IsQuickItemType(self: KIO__FileUndoManager) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__FileUndoManager `
    ///
    pub fn SignalsBlocked(self: KIO__FileUndoManager) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

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
    pub fn BlockSignals(self: KIO__FileUndoManager, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__FileUndoManager `
    ///
    pub fn Thread(self: KIO__FileUndoManager) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KIO__FileUndoManager, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

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
    pub fn StartTimer(self: KIO__FileUndoManager, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

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
    pub fn StartTimer2(self: KIO__FileUndoManager, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

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
    pub fn KillTimer(self: KIO__FileUndoManager, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn KillTimer2(self: KIO__FileUndoManager, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn Children(self: KIO__FileUndoManager, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("kio__fileundomanager.Children: Memory allocation failed");
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
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KIO__FileUndoManager, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

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
    pub fn InstallEventFilter(self: KIO__FileUndoManager, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

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
    pub fn RemoveEventFilter(self: KIO__FileUndoManager, obj: anytype) void {
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
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KIO__FileUndoManager, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KIO__FileUndoManager `
    ///
    pub fn Disconnect3(self: KIO__FileUndoManager) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

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
    pub fn Disconnect4(self: KIO__FileUndoManager, receiver: anytype) bool {
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
    /// ` self: KIO__FileUndoManager `
    ///
    pub fn DumpObjectTree(self: KIO__FileUndoManager) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__FileUndoManager `
    ///
    pub fn DumpObjectInfo(self: KIO__FileUndoManager) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

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
    pub fn SetProperty(self: KIO__FileUndoManager, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KIO__FileUndoManager, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

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
    pub fn DynamicPropertyNames(self: KIO__FileUndoManager, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kio__fileundomanager.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kio__fileundomanager.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KIO__FileUndoManager `
    ///
    pub fn BindingStorage(self: KIO__FileUndoManager) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__FileUndoManager `
    ///
    pub fn BindingStorage2(self: KIO__FileUndoManager) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__FileUndoManager `
    ///
    pub fn Destroyed(self: KIO__FileUndoManager) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

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
    pub fn OnDestroyed(self: KIO__FileUndoManager, callback: *const fn (KIO__FileUndoManager) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__FileUndoManager `
    ///
    pub fn Parent(self: KIO__FileUndoManager) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

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
    pub fn Inherits(self: KIO__FileUndoManager, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__FileUndoManager `
    ///
    pub fn DeleteLater(self: KIO__FileUndoManager) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

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
    pub fn StartTimer22(self: KIO__FileUndoManager, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

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
    pub fn StartTimer23(self: KIO__FileUndoManager, time: i64, timerType: i32) i32 {
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
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KIO__FileUndoManager, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KIO__FileUndoManager, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn Disconnect22(self: KIO__FileUndoManager, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KIO__FileUndoManager, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KIO__FileUndoManager, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KIO__FileUndoManager `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KIO__FileUndoManager, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnDestroyed1(self: KIO__FileUndoManager, callback: *const fn (KIO__FileUndoManager, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn OnObjectNameChanged(self: KIO__FileUndoManager, callback: *const fn (KIO__FileUndoManager, [*:0]const u8) callconv(.c) void) void {
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

    /// New constructs a new KIO::FileUndoManager::UiInterface object.
    ///
    pub fn New() KIO__FileUndoManager__UiInterface {
        return .{ .ptr = qtc.KIO__FileUndoManager__UiInterface_new() };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager-uiinterface.html#setShowProgressInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__FileUndoManager__UiInterface `
    ///
    /// ` b: bool `
    ///
    pub fn SetShowProgressInfo(self: KIO__FileUndoManager__UiInterface, b: bool) void {
        qtc.KIO__FileUndoManager__UiInterface_SetShowProgressInfo(@ptrCast(self.ptr), b);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager-uiinterface.html#showProgressInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__FileUndoManager__UiInterface `
    ///
    pub fn ShowProgressInfo(self: KIO__FileUndoManager__UiInterface) bool {
        return qtc.KIO__FileUndoManager__UiInterface_ShowProgressInfo(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager-uiinterface.html#setParentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__FileUndoManager__UiInterface `
    ///
    /// ` parentWidget: QWidget `
    ///
    pub fn SetParentWidget(self: KIO__FileUndoManager__UiInterface, parentWidget: anytype) void {
        comptime _ = @TypeOf(parentWidget)._is_QWidget;
        qtc.KIO__FileUndoManager__UiInterface_SetParentWidget(@ptrCast(self.ptr), @ptrCast(parentWidget.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager-uiinterface.html#parentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__FileUndoManager__UiInterface `
    ///
    pub fn ParentWidget(self: KIO__FileUndoManager__UiInterface) QWidget {
        return .{ .ptr = qtc.KIO__FileUndoManager__UiInterface_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager-uiinterface.html#jobError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__FileUndoManager__UiInterface `
    ///
    /// ` job: KIO__Job `
    ///
    pub fn JobError(self: KIO__FileUndoManager__UiInterface, job: anytype) void {
        comptime _ = @TypeOf(job)._is_KIO__Job;
        qtc.KIO__FileUndoManager__UiInterface_JobError(@ptrCast(self.ptr), @ptrCast(job.ptr));
    }

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
    pub fn OnJobError(self: KIO__FileUndoManager__UiInterface, callback: *const fn (KIO__FileUndoManager__UiInterface, KIO__Job) callconv(.c) void) void {
        qtc.KIO__FileUndoManager__UiInterface_OnJobError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperJobError` instead
    ///
    pub const QBaseJobError = SuperJobError;

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
    pub fn SuperJobError(self: KIO__FileUndoManager__UiInterface, job: anytype) void {
        comptime _ = @TypeOf(job)._is_KIO__Job;
        qtc.KIO__FileUndoManager__UiInterface_SuperJobError(@ptrCast(self.ptr), @ptrCast(job.ptr));
    }

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
    pub fn CopiedFileWasModified(self: KIO__FileUndoManager__UiInterface, src: anytype, dest: anytype, srcTime: anytype, destTime: anytype) bool {
        comptime _ = @TypeOf(src)._is_QUrl;
        comptime _ = @TypeOf(dest)._is_QUrl;
        comptime _ = @TypeOf(srcTime)._is_QDateTime;
        comptime _ = @TypeOf(destTime)._is_QDateTime;
        return qtc.KIO__FileUndoManager__UiInterface_CopiedFileWasModified(@ptrCast(self.ptr), @ptrCast(src.ptr), @ptrCast(dest.ptr), @ptrCast(srcTime.ptr), @ptrCast(destTime.ptr));
    }

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
    pub fn OnCopiedFileWasModified(self: KIO__FileUndoManager__UiInterface, callback: *const fn (KIO__FileUndoManager__UiInterface, QUrl, QUrl, QDateTime, QDateTime) callconv(.c) bool) void {
        qtc.KIO__FileUndoManager__UiInterface_OnCopiedFileWasModified(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCopiedFileWasModified` instead
    ///
    pub const QBaseCopiedFileWasModified = SuperCopiedFileWasModified;

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
    pub fn SuperCopiedFileWasModified(self: KIO__FileUndoManager__UiInterface, src: anytype, dest: anytype, srcTime: anytype, destTime: anytype) bool {
        comptime _ = @TypeOf(src)._is_QUrl;
        comptime _ = @TypeOf(dest)._is_QUrl;
        comptime _ = @TypeOf(srcTime)._is_QDateTime;
        comptime _ = @TypeOf(destTime)._is_QDateTime;
        return qtc.KIO__FileUndoManager__UiInterface_SuperCopiedFileWasModified(@ptrCast(self.ptr), @ptrCast(src.ptr), @ptrCast(dest.ptr), @ptrCast(srcTime.ptr), @ptrCast(destTime.ptr));
    }

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
    pub fn VirtualHook(self: KIO__FileUndoManager__UiInterface, id: i32, data: ?*anyopaque) void {
        qtc.KIO__FileUndoManager__UiInterface_VirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

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
    pub fn OnVirtualHook(self: KIO__FileUndoManager__UiInterface, callback: *const fn (KIO__FileUndoManager__UiInterface, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.KIO__FileUndoManager__UiInterface_OnVirtualHook(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperVirtualHook` instead
    ///
    pub const QBaseVirtualHook = SuperVirtualHook;

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
    pub fn SuperVirtualHook(self: KIO__FileUndoManager__UiInterface, id: i32, data: ?*anyopaque) void {
        qtc.KIO__FileUndoManager__UiInterface_SuperVirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KIO__FileUndoManager__UiInterface `
    ///
    pub fn Delete(self: KIO__FileUndoManager__UiInterface) void {
        qtc.KIO__FileUndoManager__UiInterface_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html#public-types)
pub const enums = struct {
    pub const CommandType = enum(i32) {
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

    pub const KIO__FileUndoManager__UiInterface = enum(i32) {
        pub const HookGetAskUserActionInterface: i32 = 1;
    };
};
