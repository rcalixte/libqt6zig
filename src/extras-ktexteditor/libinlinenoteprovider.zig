const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KTextEditor__InlineNote = @import("libqt6").KTextEditor__InlineNote;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPainter = @import("libqt6").QPainter;
const QPoint = @import("libqt6").QPoint;
const QSize = @import("libqt6").QSize;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/ktexteditor-inlinenoteprovider.html)
pub const KTextEditor__InlineNoteProvider = extern struct {
    /// ### [Upstream resources](https://api.kde.org/ktexteditor-inlinenoteprovider.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KTextEditor__InlineNoteProvider,

    pub const _is_KTextEditor__InlineNoteProvider = {};
    pub const _is_QObject = {};

    /// New constructs a new KTextEditor::InlineNoteProvider object.
    ///
    pub fn New() KTextEditor__InlineNoteProvider {
        return .{ .ptr = qtc.KTextEditor__InlineNoteProvider_new() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    pub fn MetaObject(self: KTextEditor__InlineNoteProvider) QMetaObject {
        return .{ .ptr = qtc.KTextEditor__InlineNoteProvider_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: KTextEditor__InlineNoteProvider, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KTextEditor__InlineNoteProvider_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    pub fn SuperMetaObject(self: KTextEditor__InlineNoteProvider) QMetaObject {
        return .{ .ptr = qtc.KTextEditor__InlineNoteProvider_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KTextEditor__InlineNoteProvider, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KTextEditor__InlineNoteProvider_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` callback: *const fn (self: KTextEditor__InlineNoteProvider, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KTextEditor__InlineNoteProvider, callback: *const fn (KTextEditor__InlineNoteProvider, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KTextEditor__InlineNoteProvider_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KTextEditor__InlineNoteProvider, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KTextEditor__InlineNoteProvider_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KTextEditor__InlineNoteProvider, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KTextEditor__InlineNoteProvider_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` callback: *const fn (self: KTextEditor__InlineNoteProvider, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KTextEditor__InlineNoteProvider, callback: *const fn (KTextEditor__InlineNoteProvider, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KTextEditor__InlineNoteProvider_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: KTextEditor__InlineNoteProvider, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KTextEditor__InlineNoteProvider_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__inlinenoteprovider.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNotes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` line: i32 `
    ///
    pub fn InlineNotes(self: KTextEditor__InlineNoteProvider, allocator: std.mem.Allocator, line: i32) []i32 {
        const _arr: qtc.libqt_list = qtc.KTextEditor__InlineNoteProvider_InlineNotes(@ptrCast(self.ptr), @bitCast(line));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("ktexteditor__inlinenoteprovider.InlineNotes: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNotes)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` callback: *const fn (self: KTextEditor__InlineNoteProvider, line: i32) callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []i32 `
    ///
    pub fn OnInlineNotes(self: KTextEditor__InlineNoteProvider, callback: *const fn (KTextEditor__InlineNoteProvider, i32) callconv(.c) qtc.libqt_list) void {
        qtc.KTextEditor__InlineNoteProvider_OnInlineNotes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperInlineNotes` instead
    ///
    pub const QBaseInlineNotes = SuperInlineNotes;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNotes)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` line: i32 `
    ///
    pub fn SuperInlineNotes(self: KTextEditor__InlineNoteProvider, allocator: std.mem.Allocator, line: i32) []i32 {
        const _arr: qtc.libqt_list = qtc.KTextEditor__InlineNoteProvider_SuperInlineNotes(@ptrCast(self.ptr), @bitCast(line));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("ktexteditor__inlinenoteprovider.InlineNotes: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNoteSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` note: KTextEditor__InlineNote `
    ///
    pub fn InlineNoteSize(self: KTextEditor__InlineNoteProvider, note: anytype) QSize {
        comptime _ = @TypeOf(note)._is_KTextEditor__InlineNote;
        return .{ .ptr = qtc.KTextEditor__InlineNoteProvider_InlineNoteSize(@ptrCast(self.ptr), @ptrCast(note.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNoteSize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` callback: *const fn (self: KTextEditor__InlineNoteProvider, note: KTextEditor__InlineNote) callconv(.c) QSize `
    ///
    pub fn OnInlineNoteSize(self: KTextEditor__InlineNoteProvider, callback: *const fn (KTextEditor__InlineNoteProvider, KTextEditor__InlineNote) callconv(.c) QSize) void {
        qtc.KTextEditor__InlineNoteProvider_OnInlineNoteSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperInlineNoteSize` instead
    ///
    pub const QBaseInlineNoteSize = SuperInlineNoteSize;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNoteSize)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` note: KTextEditor__InlineNote `
    ///
    pub fn SuperInlineNoteSize(self: KTextEditor__InlineNoteProvider, note: anytype) QSize {
        comptime _ = @TypeOf(note)._is_KTextEditor__InlineNote;
        return .{ .ptr = qtc.KTextEditor__InlineNoteProvider_SuperInlineNoteSize(@ptrCast(self.ptr), @ptrCast(note.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-inlinenoteprovider.html#paintInlineNote)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` note: KTextEditor__InlineNote `
    ///
    /// ` painter: QPainter `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn PaintInlineNote(self: KTextEditor__InlineNoteProvider, note: anytype, painter: anytype, direction: i32) void {
        comptime _ = @TypeOf(note)._is_KTextEditor__InlineNote;
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.KTextEditor__InlineNoteProvider_PaintInlineNote(@ptrCast(self.ptr), @ptrCast(note.ptr), @ptrCast(painter.ptr), @bitCast(direction));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-inlinenoteprovider.html#paintInlineNote)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` callback: *const fn (self: KTextEditor__InlineNoteProvider, note: KTextEditor__InlineNote, painter: QPainter, direction: qnamespace_enums.LayoutDirection) callconv(.c) void `
    ///
    pub fn OnPaintInlineNote(self: KTextEditor__InlineNoteProvider, callback: *const fn (KTextEditor__InlineNoteProvider, KTextEditor__InlineNote, QPainter, i32) callconv(.c) void) void {
        qtc.KTextEditor__InlineNoteProvider_OnPaintInlineNote(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPaintInlineNote` instead
    ///
    pub const QBasePaintInlineNote = SuperPaintInlineNote;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-inlinenoteprovider.html#paintInlineNote)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` note: KTextEditor__InlineNote `
    ///
    /// ` painter: QPainter `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SuperPaintInlineNote(self: KTextEditor__InlineNoteProvider, note: anytype, painter: anytype, direction: i32) void {
        comptime _ = @TypeOf(note)._is_KTextEditor__InlineNote;
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.KTextEditor__InlineNoteProvider_SuperPaintInlineNote(@ptrCast(self.ptr), @ptrCast(note.ptr), @ptrCast(painter.ptr), @bitCast(direction));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNoteActivated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` note: KTextEditor__InlineNote `
    ///
    /// ` buttons: flag of qnamespace_enums.MouseButton `
    ///
    /// ` globalPos: QPoint `
    ///
    pub fn InlineNoteActivated(self: KTextEditor__InlineNoteProvider, note: anytype, buttons: i32, globalPos: anytype) void {
        comptime _ = @TypeOf(note)._is_KTextEditor__InlineNote;
        comptime _ = @TypeOf(globalPos)._is_QPoint;
        qtc.KTextEditor__InlineNoteProvider_InlineNoteActivated(@ptrCast(self.ptr), @ptrCast(note.ptr), @bitCast(buttons), @ptrCast(globalPos.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNoteActivated)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` callback: *const fn (self: KTextEditor__InlineNoteProvider, note: KTextEditor__InlineNote, buttons: flag of qnamespace_enums.MouseButton, globalPos: QPoint) callconv(.c) void `
    ///
    pub fn OnInlineNoteActivated(self: KTextEditor__InlineNoteProvider, callback: *const fn (KTextEditor__InlineNoteProvider, KTextEditor__InlineNote, i32, QPoint) callconv(.c) void) void {
        qtc.KTextEditor__InlineNoteProvider_OnInlineNoteActivated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperInlineNoteActivated` instead
    ///
    pub const QBaseInlineNoteActivated = SuperInlineNoteActivated;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNoteActivated)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` note: KTextEditor__InlineNote `
    ///
    /// ` buttons: flag of qnamespace_enums.MouseButton `
    ///
    /// ` globalPos: QPoint `
    ///
    pub fn SuperInlineNoteActivated(self: KTextEditor__InlineNoteProvider, note: anytype, buttons: i32, globalPos: anytype) void {
        comptime _ = @TypeOf(note)._is_KTextEditor__InlineNote;
        comptime _ = @TypeOf(globalPos)._is_QPoint;
        qtc.KTextEditor__InlineNoteProvider_SuperInlineNoteActivated(@ptrCast(self.ptr), @ptrCast(note.ptr), @bitCast(buttons), @ptrCast(globalPos.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNoteFocusInEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` note: KTextEditor__InlineNote `
    ///
    /// ` globalPos: QPoint `
    ///
    pub fn InlineNoteFocusInEvent(self: KTextEditor__InlineNoteProvider, note: anytype, globalPos: anytype) void {
        comptime _ = @TypeOf(note)._is_KTextEditor__InlineNote;
        comptime _ = @TypeOf(globalPos)._is_QPoint;
        qtc.KTextEditor__InlineNoteProvider_InlineNoteFocusInEvent(@ptrCast(self.ptr), @ptrCast(note.ptr), @ptrCast(globalPos.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNoteFocusInEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` callback: *const fn (self: KTextEditor__InlineNoteProvider, note: KTextEditor__InlineNote, globalPos: QPoint) callconv(.c) void `
    ///
    pub fn OnInlineNoteFocusInEvent(self: KTextEditor__InlineNoteProvider, callback: *const fn (KTextEditor__InlineNoteProvider, KTextEditor__InlineNote, QPoint) callconv(.c) void) void {
        qtc.KTextEditor__InlineNoteProvider_OnInlineNoteFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperInlineNoteFocusInEvent` instead
    ///
    pub const QBaseInlineNoteFocusInEvent = SuperInlineNoteFocusInEvent;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNoteFocusInEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` note: KTextEditor__InlineNote `
    ///
    /// ` globalPos: QPoint `
    ///
    pub fn SuperInlineNoteFocusInEvent(self: KTextEditor__InlineNoteProvider, note: anytype, globalPos: anytype) void {
        comptime _ = @TypeOf(note)._is_KTextEditor__InlineNote;
        comptime _ = @TypeOf(globalPos)._is_QPoint;
        qtc.KTextEditor__InlineNoteProvider_SuperInlineNoteFocusInEvent(@ptrCast(self.ptr), @ptrCast(note.ptr), @ptrCast(globalPos.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNoteFocusOutEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` note: KTextEditor__InlineNote `
    ///
    pub fn InlineNoteFocusOutEvent(self: KTextEditor__InlineNoteProvider, note: anytype) void {
        comptime _ = @TypeOf(note)._is_KTextEditor__InlineNote;
        qtc.KTextEditor__InlineNoteProvider_InlineNoteFocusOutEvent(@ptrCast(self.ptr), @ptrCast(note.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNoteFocusOutEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` callback: *const fn (self: KTextEditor__InlineNoteProvider, note: KTextEditor__InlineNote) callconv(.c) void `
    ///
    pub fn OnInlineNoteFocusOutEvent(self: KTextEditor__InlineNoteProvider, callback: *const fn (KTextEditor__InlineNoteProvider, KTextEditor__InlineNote) callconv(.c) void) void {
        qtc.KTextEditor__InlineNoteProvider_OnInlineNoteFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperInlineNoteFocusOutEvent` instead
    ///
    pub const QBaseInlineNoteFocusOutEvent = SuperInlineNoteFocusOutEvent;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNoteFocusOutEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` note: KTextEditor__InlineNote `
    ///
    pub fn SuperInlineNoteFocusOutEvent(self: KTextEditor__InlineNoteProvider, note: anytype) void {
        comptime _ = @TypeOf(note)._is_KTextEditor__InlineNote;
        qtc.KTextEditor__InlineNoteProvider_SuperInlineNoteFocusOutEvent(@ptrCast(self.ptr), @ptrCast(note.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNoteMouseMoveEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` note: KTextEditor__InlineNote `
    ///
    /// ` globalPos: QPoint `
    ///
    pub fn InlineNoteMouseMoveEvent(self: KTextEditor__InlineNoteProvider, note: anytype, globalPos: anytype) void {
        comptime _ = @TypeOf(note)._is_KTextEditor__InlineNote;
        comptime _ = @TypeOf(globalPos)._is_QPoint;
        qtc.KTextEditor__InlineNoteProvider_InlineNoteMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(note.ptr), @ptrCast(globalPos.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNoteMouseMoveEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` callback: *const fn (self: KTextEditor__InlineNoteProvider, note: KTextEditor__InlineNote, globalPos: QPoint) callconv(.c) void `
    ///
    pub fn OnInlineNoteMouseMoveEvent(self: KTextEditor__InlineNoteProvider, callback: *const fn (KTextEditor__InlineNoteProvider, KTextEditor__InlineNote, QPoint) callconv(.c) void) void {
        qtc.KTextEditor__InlineNoteProvider_OnInlineNoteMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperInlineNoteMouseMoveEvent` instead
    ///
    pub const QBaseInlineNoteMouseMoveEvent = SuperInlineNoteMouseMoveEvent;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNoteMouseMoveEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` note: KTextEditor__InlineNote `
    ///
    /// ` globalPos: QPoint `
    ///
    pub fn SuperInlineNoteMouseMoveEvent(self: KTextEditor__InlineNoteProvider, note: anytype, globalPos: anytype) void {
        comptime _ = @TypeOf(note)._is_KTextEditor__InlineNote;
        comptime _ = @TypeOf(globalPos)._is_QPoint;
        qtc.KTextEditor__InlineNoteProvider_SuperInlineNoteMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(note.ptr), @ptrCast(globalPos.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNotesReset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    pub fn InlineNotesReset(self: KTextEditor__InlineNoteProvider) void {
        qtc.KTextEditor__InlineNoteProvider_InlineNotesReset(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNotesReset)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` callback: *const fn (self: KTextEditor__InlineNoteProvider) callconv(.c) void `
    ///
    pub fn OnInlineNotesReset(self: KTextEditor__InlineNoteProvider, callback: *const fn (KTextEditor__InlineNoteProvider) callconv(.c) void) void {
        qtc.KTextEditor__InlineNoteProvider_Connect_InlineNotesReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNotesChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` line: i32 `
    ///
    pub fn InlineNotesChanged(self: KTextEditor__InlineNoteProvider, line: i32) void {
        qtc.KTextEditor__InlineNoteProvider_InlineNotesChanged(@ptrCast(self.ptr), @bitCast(line));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-inlinenoteprovider.html#inlineNotesChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` callback: *const fn (self: KTextEditor__InlineNoteProvider, line: i32) callconv(.c) void `
    ///
    pub fn OnInlineNotesChanged(self: KTextEditor__InlineNoteProvider, callback: *const fn (KTextEditor__InlineNoteProvider, i32) callconv(.c) void) void {
        qtc.KTextEditor__InlineNoteProvider_Connect_InlineNotesChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__inlinenoteprovider.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__inlinenoteprovider.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KTextEditor__InlineNoteProvider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__inlinenoteprovider.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KTextEditor__InlineNoteProvider, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    pub fn IsWidgetType(self: KTextEditor__InlineNoteProvider) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    pub fn IsWindowType(self: KTextEditor__InlineNoteProvider) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    pub fn IsQuickItemType(self: KTextEditor__InlineNoteProvider) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    pub fn SignalsBlocked(self: KTextEditor__InlineNoteProvider) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KTextEditor__InlineNoteProvider, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    pub fn Thread(self: KTextEditor__InlineNoteProvider) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KTextEditor__InlineNoteProvider, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KTextEditor__InlineNoteProvider, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KTextEditor__InlineNoteProvider, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KTextEditor__InlineNoteProvider, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KTextEditor__InlineNoteProvider, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KTextEditor__InlineNoteProvider, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("ktexteditor__inlinenoteprovider.Children: Memory allocation failed");
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
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KTextEditor__InlineNoteProvider, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KTextEditor__InlineNoteProvider, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KTextEditor__InlineNoteProvider, obj: anytype) void {
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
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KTextEditor__InlineNoteProvider, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    pub fn Disconnect3(self: KTextEditor__InlineNoteProvider) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KTextEditor__InlineNoteProvider, receiver: anytype) bool {
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
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    pub fn DumpObjectTree(self: KTextEditor__InlineNoteProvider) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    pub fn DumpObjectInfo(self: KTextEditor__InlineNoteProvider) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KTextEditor__InlineNoteProvider, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KTextEditor__InlineNoteProvider, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KTextEditor__InlineNoteProvider, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("ktexteditor__inlinenoteprovider.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("ktexteditor__inlinenoteprovider.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    pub fn BindingStorage(self: KTextEditor__InlineNoteProvider) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    pub fn BindingStorage2(self: KTextEditor__InlineNoteProvider) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    pub fn Destroyed(self: KTextEditor__InlineNoteProvider) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` callback: *const fn (self: KTextEditor__InlineNoteProvider) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KTextEditor__InlineNoteProvider, callback: *const fn (KTextEditor__InlineNoteProvider) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    pub fn Parent(self: KTextEditor__InlineNoteProvider) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KTextEditor__InlineNoteProvider, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    pub fn DeleteLater(self: KTextEditor__InlineNoteProvider) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KTextEditor__InlineNoteProvider, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KTextEditor__InlineNoteProvider, time: i64, timerType: i32) i32 {
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
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KTextEditor__InlineNoteProvider, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KTextEditor__InlineNoteProvider, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KTextEditor__InlineNoteProvider, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KTextEditor__InlineNoteProvider, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KTextEditor__InlineNoteProvider, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KTextEditor__InlineNoteProvider, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` callback: *const fn (self: KTextEditor__InlineNoteProvider, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KTextEditor__InlineNoteProvider, callback: *const fn (KTextEditor__InlineNoteProvider, QObject) callconv(.c) void) void {
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
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KTextEditor__InlineNoteProvider, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KTextEditor__InlineNoteProvider_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KTextEditor__InlineNoteProvider, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KTextEditor__InlineNoteProvider_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__InlineNoteProvider`
    ///
    /// ` callback: *const fn (self: KTextEditor__InlineNoteProvider, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: KTextEditor__InlineNoteProvider, callback: *const fn (KTextEditor__InlineNoteProvider, QEvent) callconv(.c) bool) void {
        qtc.KTextEditor__InlineNoteProvider_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KTextEditor__InlineNoteProvider, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KTextEditor__InlineNoteProvider_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KTextEditor__InlineNoteProvider, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KTextEditor__InlineNoteProvider_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__InlineNoteProvider`
    ///
    /// ` callback: *const fn (self: KTextEditor__InlineNoteProvider, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: KTextEditor__InlineNoteProvider, callback: *const fn (KTextEditor__InlineNoteProvider, QObject, QEvent) callconv(.c) bool) void {
        qtc.KTextEditor__InlineNoteProvider_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KTextEditor__InlineNoteProvider, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KTextEditor__InlineNoteProvider_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KTextEditor__InlineNoteProvider, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KTextEditor__InlineNoteProvider_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__InlineNoteProvider`
    ///
    /// ` callback: *const fn (self: KTextEditor__InlineNoteProvider, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: KTextEditor__InlineNoteProvider, callback: *const fn (KTextEditor__InlineNoteProvider, QTimerEvent) callconv(.c) void) void {
        qtc.KTextEditor__InlineNoteProvider_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KTextEditor__InlineNoteProvider, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KTextEditor__InlineNoteProvider_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KTextEditor__InlineNoteProvider, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KTextEditor__InlineNoteProvider_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__InlineNoteProvider`
    ///
    /// ` callback: *const fn (self: KTextEditor__InlineNoteProvider, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: KTextEditor__InlineNoteProvider, callback: *const fn (KTextEditor__InlineNoteProvider, QChildEvent) callconv(.c) void) void {
        qtc.KTextEditor__InlineNoteProvider_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KTextEditor__InlineNoteProvider, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KTextEditor__InlineNoteProvider_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KTextEditor__InlineNoteProvider, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KTextEditor__InlineNoteProvider_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__InlineNoteProvider`
    ///
    /// ` callback: *const fn (self: KTextEditor__InlineNoteProvider, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: KTextEditor__InlineNoteProvider, callback: *const fn (KTextEditor__InlineNoteProvider, QEvent) callconv(.c) void) void {
        qtc.KTextEditor__InlineNoteProvider_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: KTextEditor__InlineNoteProvider, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KTextEditor__InlineNoteProvider_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KTextEditor__InlineNoteProvider, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KTextEditor__InlineNoteProvider_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__InlineNoteProvider`
    ///
    /// ` callback: *const fn (self: KTextEditor__InlineNoteProvider, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: KTextEditor__InlineNoteProvider, callback: *const fn (KTextEditor__InlineNoteProvider, QMetaMethod) callconv(.c) void) void {
        qtc.KTextEditor__InlineNoteProvider_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: KTextEditor__InlineNoteProvider, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KTextEditor__InlineNoteProvider_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KTextEditor__InlineNoteProvider, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KTextEditor__InlineNoteProvider_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__InlineNoteProvider`
    ///
    /// ` callback: *const fn (self: KTextEditor__InlineNoteProvider, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: KTextEditor__InlineNoteProvider, callback: *const fn (KTextEditor__InlineNoteProvider, QMetaMethod) callconv(.c) void) void {
        qtc.KTextEditor__InlineNoteProvider_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    pub fn Sender(self: KTextEditor__InlineNoteProvider) QObject {
        return .{ .ptr = qtc.KTextEditor__InlineNoteProvider_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    pub fn SuperSender(self: KTextEditor__InlineNoteProvider) QObject {
        return .{ .ptr = qtc.KTextEditor__InlineNoteProvider_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__InlineNoteProvider`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: KTextEditor__InlineNoteProvider, callback: *const fn () callconv(.c) QObject) void {
        qtc.KTextEditor__InlineNoteProvider_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    pub fn SenderSignalIndex(self: KTextEditor__InlineNoteProvider) i32 {
        return qtc.KTextEditor__InlineNoteProvider_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    pub fn SuperSenderSignalIndex(self: KTextEditor__InlineNoteProvider) i32 {
        return qtc.KTextEditor__InlineNoteProvider_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__InlineNoteProvider`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: KTextEditor__InlineNoteProvider, callback: *const fn () callconv(.c) i32) void {
        qtc.KTextEditor__InlineNoteProvider_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: KTextEditor__InlineNoteProvider, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KTextEditor__InlineNoteProvider_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KTextEditor__InlineNoteProvider, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KTextEditor__InlineNoteProvider_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__InlineNoteProvider`
    ///
    /// ` callback: *const fn (self: KTextEditor__InlineNoteProvider, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: KTextEditor__InlineNoteProvider, callback: *const fn (KTextEditor__InlineNoteProvider, [*:0]const u8) callconv(.c) i32) void {
        qtc.KTextEditor__InlineNoteProvider_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: KTextEditor__InlineNoteProvider, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KTextEditor__InlineNoteProvider_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KTextEditor__InlineNoteProvider, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KTextEditor__InlineNoteProvider_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__InlineNoteProvider`
    ///
    /// ` callback: *const fn (self: KTextEditor__InlineNoteProvider, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: KTextEditor__InlineNoteProvider, callback: *const fn (KTextEditor__InlineNoteProvider, QMetaMethod) callconv(.c) bool) void {
        qtc.KTextEditor__InlineNoteProvider_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    /// ` callback: *const fn (self: KTextEditor__InlineNoteProvider, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KTextEditor__InlineNoteProvider, callback: *const fn (KTextEditor__InlineNoteProvider, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KTextEditor__InlineNoteProvider `
    ///
    pub fn Delete(self: KTextEditor__InlineNoteProvider) void {
        qtc.KTextEditor__InlineNoteProvider_Delete(@ptrCast(self.ptr));
    }
};
