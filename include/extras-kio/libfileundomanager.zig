const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const fileundomanager_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html)
pub const kio__fileundomanager = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__FileUndoManager `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KIO__FileUndoManager_MetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__FileUndoManager `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KIO__FileUndoManager_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__FileUndoManager `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KIO__FileUndoManager_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__fileundomanager.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html#self)
    ///
    pub fn Self() QtC.KIO__FileUndoManager {
        return qtc.KIO__FileUndoManager_Self();
    }

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html#setUiInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__FileUndoManager `
    ///
    /// ` ui: QtC.KIO__FileUndoManager__UiInterface `
    ///
    pub fn SetUiInterface(self: ?*anyopaque, ui: ?*anyopaque) void {
        qtc.KIO__FileUndoManager_SetUiInterface(@ptrCast(self), @ptrCast(ui));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html#uiInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__FileUndoManager `
    ///
    pub fn UiInterface(self: ?*anyopaque) QtC.KIO__FileUndoManager__UiInterface {
        return qtc.KIO__FileUndoManager_UiInterface(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html#recordJob)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__FileUndoManager `
    ///
    /// ` op: fileundomanager_enums.CommandType `
    ///
    /// ` src: []QtC.QUrl `
    ///
    /// ` dst: QtC.QUrl `
    ///
    /// ` job: QtC.KIO__Job `
    ///
    pub fn RecordJob(self: ?*anyopaque, op: i32, src: []QtC.QUrl, dst: ?*anyopaque, job: ?*anyopaque) void {
        const src_list = qtc.libqt_list{
            .len = src.len,
            .data = @ptrCast(src.ptr),
        };
        qtc.KIO__FileUndoManager_RecordJob(@ptrCast(self), @intCast(op), src_list, @ptrCast(dst), @ptrCast(job));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html#recordCopyJob)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__FileUndoManager `
    ///
    /// ` copyJob: QtC.KIO__CopyJob `
    ///
    pub fn RecordCopyJob(self: ?*anyopaque, copyJob: ?*anyopaque) void {
        qtc.KIO__FileUndoManager_RecordCopyJob(@ptrCast(self), @ptrCast(copyJob));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html#isUndoAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__FileUndoManager `
    ///
    pub fn IsUndoAvailable(self: ?*anyopaque) bool {
        return qtc.KIO__FileUndoManager_IsUndoAvailable(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html#undoText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__FileUndoManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn UndoText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KIO__FileUndoManager_UndoText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__fileundomanager.UndoText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html#newCommandSerialNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__FileUndoManager `
    ///
    pub fn NewCommandSerialNumber(self: ?*anyopaque) u64 {
        return qtc.KIO__FileUndoManager_NewCommandSerialNumber(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html#currentCommandSerialNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__FileUndoManager `
    ///
    pub fn CurrentCommandSerialNumber(self: ?*anyopaque) u64 {
        return qtc.KIO__FileUndoManager_CurrentCommandSerialNumber(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html#undo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__FileUndoManager `
    ///
    pub fn Undo(self: ?*anyopaque) void {
        qtc.KIO__FileUndoManager_Undo(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html#undoAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__FileUndoManager `
    ///
    /// ` avail: bool `
    ///
    pub fn UndoAvailable(self: ?*anyopaque, avail: bool) void {
        qtc.KIO__FileUndoManager_UndoAvailable(@ptrCast(self), avail);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html#undoAvailable)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__FileUndoManager `
    ///
    /// ` callback: *const fn (self: QtC.KIO__FileUndoManager, avail: bool) callconv(.c) void `
    ///
    pub fn OnUndoAvailable(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.KIO__FileUndoManager_Connect_UndoAvailable(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html#undoTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__FileUndoManager `
    ///
    /// ` text: []const u8 `
    ///
    pub fn UndoTextChanged(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KIO__FileUndoManager_UndoTextChanged(@ptrCast(self), text_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html#undoTextChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__FileUndoManager `
    ///
    /// ` callback: *const fn (self: QtC.KIO__FileUndoManager, text: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnUndoTextChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KIO__FileUndoManager_Connect_UndoTextChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html#undoJobFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__FileUndoManager `
    ///
    pub fn UndoJobFinished(self: ?*anyopaque) void {
        qtc.KIO__FileUndoManager_UndoJobFinished(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html#undoJobFinished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__FileUndoManager `
    ///
    /// ` callback: *const fn (self: QtC.KIO__FileUndoManager) callconv(.c) void `
    ///
    pub fn OnUndoJobFinished(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.KIO__FileUndoManager_Connect_UndoJobFinished(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html#jobRecordingStarted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__FileUndoManager `
    ///
    /// ` op: fileundomanager_enums.CommandType `
    ///
    pub fn JobRecordingStarted(self: ?*anyopaque, op: i32) void {
        qtc.KIO__FileUndoManager_JobRecordingStarted(@ptrCast(self), @intCast(op));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html#jobRecordingStarted)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__FileUndoManager `
    ///
    /// ` callback: *const fn (self: QtC.KIO__FileUndoManager, op: fileundomanager_enums.CommandType) callconv(.c) void `
    ///
    pub fn OnJobRecordingStarted(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.KIO__FileUndoManager_Connect_JobRecordingStarted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html#jobRecordingFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__FileUndoManager `
    ///
    /// ` op: fileundomanager_enums.CommandType `
    ///
    pub fn JobRecordingFinished(self: ?*anyopaque, op: i32) void {
        qtc.KIO__FileUndoManager_JobRecordingFinished(@ptrCast(self), @intCast(op));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager.html#jobRecordingFinished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__FileUndoManager `
    ///
    /// ` callback: *const fn (self: QtC.KIO__FileUndoManager, op: fileundomanager_enums.CommandType) callconv(.c) void `
    ///
    pub fn OnJobRecordingFinished(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.KIO__FileUndoManager_Connect_JobRecordingFinished(@ptrCast(self), @intCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__fileundomanager.Tr2: Memory allocation failed");
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
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @intCast(n));
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
    /// ` self: QtC.KIO__FileUndoManager `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__FileUndoManager `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__FileUndoManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
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
    /// ` self: QtC.KIO__FileUndoManager `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__FileUndoManager `
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
    /// ` self: QtC.KIO__FileUndoManager `
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
    /// ` self: QtC.KIO__FileUndoManager `
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
    /// ` self: QtC.KIO__FileUndoManager `
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
    /// ` self: QtC.KIO__FileUndoManager `
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
    /// ` self: QtC.KIO__FileUndoManager `
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
    /// ` self: QtC.KIO__FileUndoManager `
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
    /// ` self: QtC.KIO__FileUndoManager `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__FileUndoManager `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: ?*anyopaque, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @intCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__FileUndoManager `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__FileUndoManager `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__FileUndoManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("kio__fileundomanager.Children: Memory allocation failed");
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
    /// ` self: QtC.KIO__FileUndoManager `
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
    /// ` self: QtC.KIO__FileUndoManager `
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
    /// ` self: QtC.KIO__FileUndoManager `
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
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__FileUndoManager `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
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
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QMetaObject__Connection `
    ///
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__FileUndoManager `
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
    /// ` self: QtC.KIO__FileUndoManager `
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
    /// ` self: QtC.KIO__FileUndoManager `
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
    /// ` self: QtC.KIO__FileUndoManager `
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
    /// ` self: QtC.KIO__FileUndoManager `
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
    /// ` self: QtC.KIO__FileUndoManager `
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
    /// ` self: QtC.KIO__FileUndoManager `
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
    /// ` self: QtC.KIO__FileUndoManager `
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
    /// ` self: QtC.KIO__FileUndoManager `
    ///
    /// ` callback: *const fn (self: QtC.KIO__FileUndoManager) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__FileUndoManager `
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
    /// ` self: QtC.KIO__FileUndoManager `
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
    /// ` self: QtC.KIO__FileUndoManager `
    ///
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__FileUndoManager `
    ///
    /// ` thread: QtC.QThread `
    ///
    /// ` param2: QtC.Disambiguated_t `
    ///
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__FileUndoManager `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__FileUndoManager `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: ?*anyopaque, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self), @intCast(time), @intCast(timerType));
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
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__FileUndoManager `
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
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__FileUndoManager `
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
    /// ` self: QtC.KIO__FileUndoManager `
    ///
    /// ` callback: *const fn (self: QtC.KIO__FileUndoManager, param1: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__FileUndoManager `
    ///
    /// ` callback: *const fn (self: QtC.KIO__FileUndoManager, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }
};

/// ### [Upstream resources](https://api.kde.org/kio-fileundomanager-uiinterface.html)
pub const kio__fileundomanager__uiinterface = struct {
    /// New constructs a new KIO::FileUndoManager::UiInterface object.
    ///
    pub fn New() QtC.KIO__FileUndoManager__UiInterface {
        return qtc.KIO__FileUndoManager__UiInterface_new();
    }

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager-uiinterface.html#setShowProgressInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__FileUndoManager__UiInterface `
    ///
    /// ` b: bool `
    ///
    pub fn SetShowProgressInfo(self: ?*anyopaque, b: bool) void {
        qtc.KIO__FileUndoManager__UiInterface_SetShowProgressInfo(@ptrCast(self), b);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager-uiinterface.html#showProgressInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__FileUndoManager__UiInterface `
    ///
    pub fn ShowProgressInfo(self: ?*anyopaque) bool {
        return qtc.KIO__FileUndoManager__UiInterface_ShowProgressInfo(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager-uiinterface.html#setParentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__FileUndoManager__UiInterface `
    ///
    /// ` parentWidget: QtC.QWidget `
    ///
    pub fn SetParentWidget(self: ?*anyopaque, parentWidget: ?*anyopaque) void {
        qtc.KIO__FileUndoManager__UiInterface_SetParentWidget(@ptrCast(self), @ptrCast(parentWidget));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager-uiinterface.html#parentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__FileUndoManager__UiInterface `
    ///
    pub fn ParentWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.KIO__FileUndoManager__UiInterface_ParentWidget(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager-uiinterface.html#jobError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__FileUndoManager__UiInterface `
    ///
    /// ` job: QtC.KIO__Job `
    ///
    pub fn JobError(self: ?*anyopaque, job: ?*anyopaque) void {
        qtc.KIO__FileUndoManager__UiInterface_JobError(@ptrCast(self), @ptrCast(job));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager-uiinterface.html#jobError)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__FileUndoManager__UiInterface `
    ///
    /// ` callback: *const fn (self: QtC.KIO__FileUndoManager__UiInterface, job: QtC.KIO__Job) callconv(.c) void `
    ///
    pub fn OnJobError(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KIO__FileUndoManager__UiInterface_OnJobError(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager-uiinterface.html#jobError)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__FileUndoManager__UiInterface `
    ///
    /// ` job: QtC.KIO__Job `
    ///
    pub fn QBaseJobError(self: ?*anyopaque, job: ?*anyopaque) void {
        qtc.KIO__FileUndoManager__UiInterface_QBaseJobError(@ptrCast(self), @ptrCast(job));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager-uiinterface.html#copiedFileWasModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__FileUndoManager__UiInterface `
    ///
    /// ` src: QtC.QUrl `
    ///
    /// ` dest: QtC.QUrl `
    ///
    /// ` srcTime: QtC.QDateTime `
    ///
    /// ` destTime: QtC.QDateTime `
    ///
    pub fn CopiedFileWasModified(self: ?*anyopaque, src: ?*anyopaque, dest: ?*anyopaque, srcTime: ?*anyopaque, destTime: ?*anyopaque) bool {
        return qtc.KIO__FileUndoManager__UiInterface_CopiedFileWasModified(@ptrCast(self), @ptrCast(src), @ptrCast(dest), @ptrCast(srcTime), @ptrCast(destTime));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager-uiinterface.html#copiedFileWasModified)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__FileUndoManager__UiInterface `
    ///
    /// ` callback: *const fn (self: QtC.KIO__FileUndoManager__UiInterface, src: QtC.QUrl, dest: QtC.QUrl, srcTime: QtC.QDateTime, destTime: QtC.QDateTime) callconv(.c) bool `
    ///
    pub fn OnCopiedFileWasModified(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KIO__FileUndoManager__UiInterface_OnCopiedFileWasModified(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager-uiinterface.html#copiedFileWasModified)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__FileUndoManager__UiInterface `
    ///
    /// ` src: QtC.QUrl `
    ///
    /// ` dest: QtC.QUrl `
    ///
    /// ` srcTime: QtC.QDateTime `
    ///
    /// ` destTime: QtC.QDateTime `
    ///
    pub fn QBaseCopiedFileWasModified(self: ?*anyopaque, src: ?*anyopaque, dest: ?*anyopaque, srcTime: ?*anyopaque, destTime: ?*anyopaque) bool {
        return qtc.KIO__FileUndoManager__UiInterface_QBaseCopiedFileWasModified(@ptrCast(self), @ptrCast(src), @ptrCast(dest), @ptrCast(srcTime), @ptrCast(destTime));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager-uiinterface.html#virtual_hook)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__FileUndoManager__UiInterface `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn VirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.KIO__FileUndoManager__UiInterface_VirtualHook(@ptrCast(self), @intCast(id), @ptrCast(data));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager-uiinterface.html#virtual_hook)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__FileUndoManager__UiInterface `
    ///
    /// ` callback: *const fn (self: QtC.KIO__FileUndoManager__UiInterface, id: i32, data: ?*anyopaque) callconv(.c) void `
    ///
    pub fn OnVirtualHook(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.KIO__FileUndoManager__UiInterface_OnVirtualHook(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-fileundomanager-uiinterface.html#virtual_hook)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__FileUndoManager__UiInterface `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn QBaseVirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.KIO__FileUndoManager__UiInterface_QBaseVirtualHook(@ptrCast(self), @intCast(id), @ptrCast(data));
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KIO__FileUndoManager__UiInterface `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KIO__FileUndoManager__UiInterface_Delete(@ptrCast(self));
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
