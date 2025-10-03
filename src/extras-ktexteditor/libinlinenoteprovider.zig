const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://api.kde.org/ktexteditor-inlinenoteprovider.html
pub const ktexteditor__inlinenoteprovider = struct {
    /// New constructs a new KTextEditor::InlineNoteProvider object.
    ///
    ///
    pub fn New() QtC.KTextEditor__InlineNoteProvider {
        return qtc.KTextEditor__InlineNoteProvider_new();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KTextEditor__InlineNoteProvider_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.KTextEditor__InlineNoteProvider, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KTextEditor__InlineNoteProvider_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.KTextEditor__InlineNoteProvider, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KTextEditor__InlineNoteProvider_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, callback: *const fn (self: QtC.KTextEditor__InlineNoteProvider, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.KTextEditor__InlineNoteProvider_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KTextEditor__InlineNoteProvider_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.KTextEditor__InlineNoteProvider_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor::inlinenoteprovider.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNotes)
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, line: i32, allocator: std.mem.Allocator ```
    pub fn InlineNotes(self: ?*anyopaque, line: i32, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.KTextEditor__InlineNoteProvider_InlineNotes(@ptrCast(self), @intCast(line));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("ktexteditor::inlinenoteprovider.InlineNotes: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNotes)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, callback: *const fn (self: QtC.KTextEditor__InlineNoteProvider, line: i32) callconv(.c) [*:-1]i32 ```
    pub fn OnInlineNotes(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) [*:-1]i32) void {
        qtc.KTextEditor__InlineNoteProvider_OnInlineNotes(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNotes)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, line: i32, allocator: std.mem.Allocator ```
    pub fn QBaseInlineNotes(self: ?*anyopaque, line: i32, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.KTextEditor__InlineNoteProvider_QBaseInlineNotes(@ptrCast(self), @intCast(line));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("ktexteditor::inlinenoteprovider.InlineNotes: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNoteSize)
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, note: QtC.KTextEditor__InlineNote ```
    pub fn InlineNoteSize(self: ?*anyopaque, note: ?*anyopaque) QtC.QSize {
        return qtc.KTextEditor__InlineNoteProvider_InlineNoteSize(@ptrCast(self), @ptrCast(note));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNoteSize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, callback: *const fn (self: QtC.KTextEditor__InlineNoteProvider, note: QtC.KTextEditor__InlineNote) callconv(.c) QtC.QSize ```
    pub fn OnInlineNoteSize(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.KTextEditor__InlineNoteProvider_OnInlineNoteSize(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNoteSize)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, note: QtC.KTextEditor__InlineNote ```
    pub fn QBaseInlineNoteSize(self: ?*anyopaque, note: ?*anyopaque) QtC.QSize {
        return qtc.KTextEditor__InlineNoteProvider_QBaseInlineNoteSize(@ptrCast(self), @ptrCast(note));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-inlinenoteprovider.html#paintInlineNote)
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, note: QtC.KTextEditor__InlineNote, painter: QtC.QPainter, direction: qnamespace_enums.LayoutDirection ```
    pub fn PaintInlineNote(self: ?*anyopaque, note: ?*anyopaque, painter: ?*anyopaque, direction: i32) void {
        qtc.KTextEditor__InlineNoteProvider_PaintInlineNote(@ptrCast(self), @ptrCast(note), @ptrCast(painter), @intCast(direction));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-inlinenoteprovider.html#paintInlineNote)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, callback: *const fn (self: QtC.KTextEditor__InlineNoteProvider, note: QtC.KTextEditor__InlineNote, painter: QtC.QPainter, direction: qnamespace_enums.LayoutDirection) callconv(.c) void ```
    pub fn OnPaintInlineNote(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.KTextEditor__InlineNoteProvider_OnPaintInlineNote(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-inlinenoteprovider.html#paintInlineNote)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, note: QtC.KTextEditor__InlineNote, painter: QtC.QPainter, direction: qnamespace_enums.LayoutDirection ```
    pub fn QBasePaintInlineNote(self: ?*anyopaque, note: ?*anyopaque, painter: ?*anyopaque, direction: i32) void {
        qtc.KTextEditor__InlineNoteProvider_QBasePaintInlineNote(@ptrCast(self), @ptrCast(note), @ptrCast(painter), @intCast(direction));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNoteActivated)
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, note: QtC.KTextEditor__InlineNote, buttons: flag of qnamespace_enums.MouseButton, globalPos: QtC.QPoint ```
    pub fn InlineNoteActivated(self: ?*anyopaque, note: ?*anyopaque, buttons: i64, globalPos: ?*anyopaque) void {
        qtc.KTextEditor__InlineNoteProvider_InlineNoteActivated(@ptrCast(self), @ptrCast(note), @intCast(buttons), @ptrCast(globalPos));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNoteActivated)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, callback: *const fn (self: QtC.KTextEditor__InlineNoteProvider, note: QtC.KTextEditor__InlineNote, buttons: flag of qnamespace_enums.MouseButton, globalPos: QtC.QPoint) callconv(.c) void ```
    pub fn OnInlineNoteActivated(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i64, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEditor__InlineNoteProvider_OnInlineNoteActivated(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNoteActivated)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, note: QtC.KTextEditor__InlineNote, buttons: flag of qnamespace_enums.MouseButton, globalPos: QtC.QPoint ```
    pub fn QBaseInlineNoteActivated(self: ?*anyopaque, note: ?*anyopaque, buttons: i64, globalPos: ?*anyopaque) void {
        qtc.KTextEditor__InlineNoteProvider_QBaseInlineNoteActivated(@ptrCast(self), @ptrCast(note), @intCast(buttons), @ptrCast(globalPos));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNoteFocusInEvent)
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, note: QtC.KTextEditor__InlineNote, globalPos: QtC.QPoint ```
    pub fn InlineNoteFocusInEvent(self: ?*anyopaque, note: ?*anyopaque, globalPos: ?*anyopaque) void {
        qtc.KTextEditor__InlineNoteProvider_InlineNoteFocusInEvent(@ptrCast(self), @ptrCast(note), @ptrCast(globalPos));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNoteFocusInEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, callback: *const fn (self: QtC.KTextEditor__InlineNoteProvider, note: QtC.KTextEditor__InlineNote, globalPos: QtC.QPoint) callconv(.c) void ```
    pub fn OnInlineNoteFocusInEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEditor__InlineNoteProvider_OnInlineNoteFocusInEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNoteFocusInEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, note: QtC.KTextEditor__InlineNote, globalPos: QtC.QPoint ```
    pub fn QBaseInlineNoteFocusInEvent(self: ?*anyopaque, note: ?*anyopaque, globalPos: ?*anyopaque) void {
        qtc.KTextEditor__InlineNoteProvider_QBaseInlineNoteFocusInEvent(@ptrCast(self), @ptrCast(note), @ptrCast(globalPos));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNoteFocusOutEvent)
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, note: QtC.KTextEditor__InlineNote ```
    pub fn InlineNoteFocusOutEvent(self: ?*anyopaque, note: ?*anyopaque) void {
        qtc.KTextEditor__InlineNoteProvider_InlineNoteFocusOutEvent(@ptrCast(self), @ptrCast(note));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNoteFocusOutEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, callback: *const fn (self: QtC.KTextEditor__InlineNoteProvider, note: QtC.KTextEditor__InlineNote) callconv(.c) void ```
    pub fn OnInlineNoteFocusOutEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEditor__InlineNoteProvider_OnInlineNoteFocusOutEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNoteFocusOutEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, note: QtC.KTextEditor__InlineNote ```
    pub fn QBaseInlineNoteFocusOutEvent(self: ?*anyopaque, note: ?*anyopaque) void {
        qtc.KTextEditor__InlineNoteProvider_QBaseInlineNoteFocusOutEvent(@ptrCast(self), @ptrCast(note));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNoteMouseMoveEvent)
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, note: QtC.KTextEditor__InlineNote, globalPos: QtC.QPoint ```
    pub fn InlineNoteMouseMoveEvent(self: ?*anyopaque, note: ?*anyopaque, globalPos: ?*anyopaque) void {
        qtc.KTextEditor__InlineNoteProvider_InlineNoteMouseMoveEvent(@ptrCast(self), @ptrCast(note), @ptrCast(globalPos));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNoteMouseMoveEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, callback: *const fn (self: QtC.KTextEditor__InlineNoteProvider, note: QtC.KTextEditor__InlineNote, globalPos: QtC.QPoint) callconv(.c) void ```
    pub fn OnInlineNoteMouseMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEditor__InlineNoteProvider_OnInlineNoteMouseMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNoteMouseMoveEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, note: QtC.KTextEditor__InlineNote, globalPos: QtC.QPoint ```
    pub fn QBaseInlineNoteMouseMoveEvent(self: ?*anyopaque, note: ?*anyopaque, globalPos: ?*anyopaque) void {
        qtc.KTextEditor__InlineNoteProvider_QBaseInlineNoteMouseMoveEvent(@ptrCast(self), @ptrCast(note), @ptrCast(globalPos));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNotesReset)
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider ```
    pub fn InlineNotesReset(self: ?*anyopaque) void {
        qtc.KTextEditor__InlineNoteProvider_InlineNotesReset(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNotesReset)
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, callback: *const fn (self: QtC.KTextEditor__InlineNoteProvider) callconv(.c) void ```
    pub fn OnInlineNotesReset(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.KTextEditor__InlineNoteProvider_Connect_InlineNotesReset(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNotesChanged)
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, line: i32 ```
    pub fn InlineNotesChanged(self: ?*anyopaque, line: i32) void {
        qtc.KTextEditor__InlineNoteProvider_InlineNotesChanged(@ptrCast(self), @intCast(line));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNotesChanged)
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, callback: *const fn (self: QtC.KTextEditor__InlineNoteProvider, line: i32) callconv(.c) void ```
    pub fn OnInlineNotesChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.KTextEditor__InlineNoteProvider_Connect_InlineNotesChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KTextEditor__InlineNoteProvider_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor::inlinenoteprovider.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KTextEditor__InlineNoteProvider_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor::inlinenoteprovider.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor::inlinenoteprovider.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, name: []const u8 ```
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
    /// ``` self: QtC.KTextEditor__InlineNoteProvider ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("ktexteditor::inlinenoteprovider.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, obj: QtC.QObject ```
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
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.KTextEditor__InlineNoteProvider ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("ktexteditor::inlinenoteprovider.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("ktexteditor::inlinenoteprovider.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, callback: *const fn (self: QtC.KTextEditor__InlineNoteProvider) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, callback: *const fn (self: QtC.KTextEditor__InlineNoteProvider, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KTextEditor__InlineNoteProvider_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KTextEditor__InlineNoteProvider_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, callback: *const fn (self: QtC.KTextEditor__InlineNoteProvider, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KTextEditor__InlineNoteProvider_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KTextEditor__InlineNoteProvider_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KTextEditor__InlineNoteProvider_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, callback: *const fn (self: QtC.KTextEditor__InlineNoteProvider, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KTextEditor__InlineNoteProvider_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTextEditor__InlineNoteProvider_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTextEditor__InlineNoteProvider_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, callback: *const fn (self: QtC.KTextEditor__InlineNoteProvider, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEditor__InlineNoteProvider_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTextEditor__InlineNoteProvider_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTextEditor__InlineNoteProvider_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, callback: *const fn (self: QtC.KTextEditor__InlineNoteProvider, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEditor__InlineNoteProvider_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTextEditor__InlineNoteProvider_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTextEditor__InlineNoteProvider_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, callback: *const fn (self: QtC.KTextEditor__InlineNoteProvider, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEditor__InlineNoteProvider_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KTextEditor__InlineNoteProvider_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KTextEditor__InlineNoteProvider_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, callback: *const fn (self: QtC.KTextEditor__InlineNoteProvider, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEditor__InlineNoteProvider_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KTextEditor__InlineNoteProvider_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KTextEditor__InlineNoteProvider_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, callback: *const fn (self: QtC.KTextEditor__InlineNoteProvider, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEditor__InlineNoteProvider_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.KTextEditor__InlineNoteProvider_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.KTextEditor__InlineNoteProvider_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, callback: *const fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.KTextEditor__InlineNoteProvider_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KTextEditor__InlineNoteProvider_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KTextEditor__InlineNoteProvider_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, callback: *const fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.KTextEditor__InlineNoteProvider_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KTextEditor__InlineNoteProvider_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KTextEditor__InlineNoteProvider_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, callback: *const fn (self: QtC.KTextEditor__InlineNoteProvider, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.KTextEditor__InlineNoteProvider_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KTextEditor__InlineNoteProvider_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KTextEditor__InlineNoteProvider_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, callback: *const fn (self: QtC.KTextEditor__InlineNoteProvider, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KTextEditor__InlineNoteProvider_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider, callback: *const fn (self: QtC.KTextEditor__InlineNoteProvider, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KTextEditor__InlineNoteProvider ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KTextEditor__InlineNoteProvider_Delete(@ptrCast(self));
    }
};
