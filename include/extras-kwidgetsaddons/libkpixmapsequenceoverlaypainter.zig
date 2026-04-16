const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KPixmapSequence = @import("libqt6").KPixmapSequence;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPoint = @import("libqt6").QPoint;
const QRect = @import("libqt6").QRect;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const QWidget = @import("libqt6").QWidget;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kpixmapsequenceoverlaypainter.html)
pub const KPixmapSequenceOverlayPainter = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kpixmapsequenceoverlaypainter.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KPixmapSequenceOverlayPainter,

    pub const _is_KPixmapSequenceOverlayPainter = {};
    pub const _is_QObject = {};

    /// New constructs a new KPixmapSequenceOverlayPainter object.
    ///
    pub fn New() KPixmapSequenceOverlayPainter {
        return .{ .ptr = qtc.KPixmapSequenceOverlayPainter_new() };
    }

    /// New2 constructs a new KPixmapSequenceOverlayPainter object.
    ///
    /// ## Parameter(s):
    ///
    /// ` seq: KPixmapSequence `
    ///
    pub fn New2(seq: anytype) KPixmapSequenceOverlayPainter {
        comptime _ = @TypeOf(seq)._is_KPixmapSequence;
        return .{ .ptr = qtc.KPixmapSequenceOverlayPainter_new2(@ptrCast(seq.ptr)) };
    }

    /// New3 constructs a new KPixmapSequenceOverlayPainter object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New3(parent: anytype) KPixmapSequenceOverlayPainter {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KPixmapSequenceOverlayPainter_new3(@ptrCast(parent.ptr)) };
    }

    /// New4 constructs a new KPixmapSequenceOverlayPainter object.
    ///
    /// ## Parameter(s):
    ///
    /// ` seq: KPixmapSequence `
    ///
    /// ` parent: QObject `
    ///
    pub fn New4(seq: anytype, parent: anytype) KPixmapSequenceOverlayPainter {
        comptime _ = @TypeOf(seq)._is_KPixmapSequence;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KPixmapSequenceOverlayPainter_new4(@ptrCast(seq.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    pub fn MetaObject(self: KPixmapSequenceOverlayPainter) QMetaObject {
        return .{ .ptr = qtc.KPixmapSequenceOverlayPainter_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: KPixmapSequenceOverlayPainter, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KPixmapSequenceOverlayPainter_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    pub fn SuperMetaObject(self: KPixmapSequenceOverlayPainter) QMetaObject {
        return .{ .ptr = qtc.KPixmapSequenceOverlayPainter_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KPixmapSequenceOverlayPainter, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KPixmapSequenceOverlayPainter_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` callback: *const fn (self: KPixmapSequenceOverlayPainter, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KPixmapSequenceOverlayPainter, callback: *const fn (KPixmapSequenceOverlayPainter, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KPixmapSequenceOverlayPainter_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KPixmapSequenceOverlayPainter, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KPixmapSequenceOverlayPainter_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KPixmapSequenceOverlayPainter, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KPixmapSequenceOverlayPainter_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` callback: *const fn (self: KPixmapSequenceOverlayPainter, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KPixmapSequenceOverlayPainter, callback: *const fn (KPixmapSequenceOverlayPainter, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KPixmapSequenceOverlayPainter_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: KPixmapSequenceOverlayPainter, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KPixmapSequenceOverlayPainter_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kpixmapsequenceoverlaypainter.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kpixmapsequenceoverlaypainter.html#sequence)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    pub fn Sequence(self: KPixmapSequenceOverlayPainter) KPixmapSequence {
        return .{ .ptr = qtc.KPixmapSequenceOverlayPainter_Sequence(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kpixmapsequenceoverlaypainter.html#interval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    pub fn Interval(self: KPixmapSequenceOverlayPainter) i32 {
        return qtc.KPixmapSequenceOverlayPainter_Interval(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kpixmapsequenceoverlaypainter.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    pub fn Rect(self: KPixmapSequenceOverlayPainter) QRect {
        return .{ .ptr = qtc.KPixmapSequenceOverlayPainter_Rect(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kpixmapsequenceoverlaypainter.html#alignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn Alignment(self: KPixmapSequenceOverlayPainter) i32 {
        return qtc.KPixmapSequenceOverlayPainter_Alignment(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kpixmapsequenceoverlaypainter.html#offset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    pub fn Offset(self: KPixmapSequenceOverlayPainter) QPoint {
        return .{ .ptr = qtc.KPixmapSequenceOverlayPainter_Offset(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kpixmapsequenceoverlaypainter.html#setSequence)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` seq: KPixmapSequence `
    ///
    pub fn SetSequence(self: KPixmapSequenceOverlayPainter, seq: anytype) void {
        comptime _ = @TypeOf(seq)._is_KPixmapSequence;
        qtc.KPixmapSequenceOverlayPainter_SetSequence(@ptrCast(self.ptr), @ptrCast(seq.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kpixmapsequenceoverlaypainter.html#setInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` msecs: i32 `
    ///
    pub fn SetInterval(self: KPixmapSequenceOverlayPainter, msecs: i32) void {
        qtc.KPixmapSequenceOverlayPainter_SetInterval(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### [Upstream resources](https://api.kde.org/kpixmapsequenceoverlaypainter.html#setWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` w: QWidget `
    ///
    pub fn SetWidget(self: KPixmapSequenceOverlayPainter, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.KPixmapSequenceOverlayPainter_SetWidget(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kpixmapsequenceoverlaypainter.html#setRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` rect: QRect `
    ///
    pub fn SetRect(self: KPixmapSequenceOverlayPainter, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.KPixmapSequenceOverlayPainter_SetRect(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kpixmapsequenceoverlaypainter.html#setAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` alignVal: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetAlignment(self: KPixmapSequenceOverlayPainter, alignVal: i32) void {
        qtc.KPixmapSequenceOverlayPainter_SetAlignment(@ptrCast(self.ptr), @bitCast(alignVal));
    }

    /// ### [Upstream resources](https://api.kde.org/kpixmapsequenceoverlaypainter.html#setOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` offset: QPoint `
    ///
    pub fn SetOffset(self: KPixmapSequenceOverlayPainter, offset: anytype) void {
        comptime _ = @TypeOf(offset)._is_QPoint;
        qtc.KPixmapSequenceOverlayPainter_SetOffset(@ptrCast(self.ptr), @ptrCast(offset.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kpixmapsequenceoverlaypainter.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    pub fn Start(self: KPixmapSequenceOverlayPainter) void {
        qtc.KPixmapSequenceOverlayPainter_Start(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kpixmapsequenceoverlaypainter.html#stop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    pub fn Stop(self: KPixmapSequenceOverlayPainter) void {
        qtc.KPixmapSequenceOverlayPainter_Stop(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kpixmapsequenceoverlaypainter.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` obj: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KPixmapSequenceOverlayPainter, obj: anytype, event: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KPixmapSequenceOverlayPainter_EventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kpixmapsequenceoverlaypainter.html#eventFilter)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` callback: *const fn (self: KPixmapSequenceOverlayPainter, obj: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: KPixmapSequenceOverlayPainter, callback: *const fn (KPixmapSequenceOverlayPainter, QObject, QEvent) callconv(.c) bool) void {
        qtc.KPixmapSequenceOverlayPainter_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// ### [Upstream resources](https://api.kde.org/kpixmapsequenceoverlaypainter.html#eventFilter)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` obj: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KPixmapSequenceOverlayPainter, obj: anytype, event: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KPixmapSequenceOverlayPainter_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr), @ptrCast(event.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kpixmapsequenceoverlaypainter.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kpixmapsequenceoverlaypainter.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KPixmapSequenceOverlayPainter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kpixmapsequenceoverlaypainter.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KPixmapSequenceOverlayPainter, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    pub fn IsWidgetType(self: KPixmapSequenceOverlayPainter) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    pub fn IsWindowType(self: KPixmapSequenceOverlayPainter) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    pub fn IsQuickItemType(self: KPixmapSequenceOverlayPainter) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    pub fn SignalsBlocked(self: KPixmapSequenceOverlayPainter) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KPixmapSequenceOverlayPainter, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    pub fn Thread(self: KPixmapSequenceOverlayPainter) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KPixmapSequenceOverlayPainter, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KPixmapSequenceOverlayPainter, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KPixmapSequenceOverlayPainter, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KPixmapSequenceOverlayPainter, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KPixmapSequenceOverlayPainter, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KPixmapSequenceOverlayPainter, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("kpixmapsequenceoverlaypainter.Children: Memory allocation failed");
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KPixmapSequenceOverlayPainter, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KPixmapSequenceOverlayPainter, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KPixmapSequenceOverlayPainter, obj: anytype) void {
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KPixmapSequenceOverlayPainter, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    pub fn Disconnect3(self: KPixmapSequenceOverlayPainter) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KPixmapSequenceOverlayPainter, receiver: anytype) bool {
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    pub fn DumpObjectTree(self: KPixmapSequenceOverlayPainter) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    pub fn DumpObjectInfo(self: KPixmapSequenceOverlayPainter) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KPixmapSequenceOverlayPainter, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KPixmapSequenceOverlayPainter, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KPixmapSequenceOverlayPainter, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kpixmapsequenceoverlaypainter.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kpixmapsequenceoverlaypainter.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    pub fn BindingStorage(self: KPixmapSequenceOverlayPainter) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    pub fn BindingStorage2(self: KPixmapSequenceOverlayPainter) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    pub fn Destroyed(self: KPixmapSequenceOverlayPainter) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` callback: *const fn (self: KPixmapSequenceOverlayPainter) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KPixmapSequenceOverlayPainter, callback: *const fn (KPixmapSequenceOverlayPainter) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    pub fn Parent(self: KPixmapSequenceOverlayPainter) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KPixmapSequenceOverlayPainter, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    pub fn DeleteLater(self: KPixmapSequenceOverlayPainter) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KPixmapSequenceOverlayPainter, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KPixmapSequenceOverlayPainter, time: i64, timerType: i32) i32 {
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KPixmapSequenceOverlayPainter, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KPixmapSequenceOverlayPainter, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KPixmapSequenceOverlayPainter, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KPixmapSequenceOverlayPainter, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KPixmapSequenceOverlayPainter, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KPixmapSequenceOverlayPainter, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` callback: *const fn (self: KPixmapSequenceOverlayPainter, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KPixmapSequenceOverlayPainter, callback: *const fn (KPixmapSequenceOverlayPainter, QObject) callconv(.c) void) void {
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KPixmapSequenceOverlayPainter, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KPixmapSequenceOverlayPainter_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KPixmapSequenceOverlayPainter, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KPixmapSequenceOverlayPainter_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPixmapSequenceOverlayPainter`
    ///
    /// ` callback: *const fn (self: KPixmapSequenceOverlayPainter, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: KPixmapSequenceOverlayPainter, callback: *const fn (KPixmapSequenceOverlayPainter, QEvent) callconv(.c) bool) void {
        qtc.KPixmapSequenceOverlayPainter_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KPixmapSequenceOverlayPainter, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KPixmapSequenceOverlayPainter_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KPixmapSequenceOverlayPainter, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KPixmapSequenceOverlayPainter_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPixmapSequenceOverlayPainter`
    ///
    /// ` callback: *const fn (self: KPixmapSequenceOverlayPainter, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: KPixmapSequenceOverlayPainter, callback: *const fn (KPixmapSequenceOverlayPainter, QTimerEvent) callconv(.c) void) void {
        qtc.KPixmapSequenceOverlayPainter_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KPixmapSequenceOverlayPainter, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KPixmapSequenceOverlayPainter_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KPixmapSequenceOverlayPainter, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KPixmapSequenceOverlayPainter_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPixmapSequenceOverlayPainter`
    ///
    /// ` callback: *const fn (self: KPixmapSequenceOverlayPainter, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: KPixmapSequenceOverlayPainter, callback: *const fn (KPixmapSequenceOverlayPainter, QChildEvent) callconv(.c) void) void {
        qtc.KPixmapSequenceOverlayPainter_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KPixmapSequenceOverlayPainter, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KPixmapSequenceOverlayPainter_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KPixmapSequenceOverlayPainter, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KPixmapSequenceOverlayPainter_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPixmapSequenceOverlayPainter`
    ///
    /// ` callback: *const fn (self: KPixmapSequenceOverlayPainter, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: KPixmapSequenceOverlayPainter, callback: *const fn (KPixmapSequenceOverlayPainter, QEvent) callconv(.c) void) void {
        qtc.KPixmapSequenceOverlayPainter_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: KPixmapSequenceOverlayPainter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KPixmapSequenceOverlayPainter_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KPixmapSequenceOverlayPainter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KPixmapSequenceOverlayPainter_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPixmapSequenceOverlayPainter`
    ///
    /// ` callback: *const fn (self: KPixmapSequenceOverlayPainter, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: KPixmapSequenceOverlayPainter, callback: *const fn (KPixmapSequenceOverlayPainter, QMetaMethod) callconv(.c) void) void {
        qtc.KPixmapSequenceOverlayPainter_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: KPixmapSequenceOverlayPainter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KPixmapSequenceOverlayPainter_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KPixmapSequenceOverlayPainter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KPixmapSequenceOverlayPainter_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPixmapSequenceOverlayPainter`
    ///
    /// ` callback: *const fn (self: KPixmapSequenceOverlayPainter, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: KPixmapSequenceOverlayPainter, callback: *const fn (KPixmapSequenceOverlayPainter, QMetaMethod) callconv(.c) void) void {
        qtc.KPixmapSequenceOverlayPainter_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    pub fn Sender(self: KPixmapSequenceOverlayPainter) QObject {
        return .{ .ptr = qtc.KPixmapSequenceOverlayPainter_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    pub fn SuperSender(self: KPixmapSequenceOverlayPainter) QObject {
        return .{ .ptr = qtc.KPixmapSequenceOverlayPainter_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPixmapSequenceOverlayPainter`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: KPixmapSequenceOverlayPainter, callback: *const fn () callconv(.c) QObject) void {
        qtc.KPixmapSequenceOverlayPainter_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    pub fn SenderSignalIndex(self: KPixmapSequenceOverlayPainter) i32 {
        return qtc.KPixmapSequenceOverlayPainter_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    pub fn SuperSenderSignalIndex(self: KPixmapSequenceOverlayPainter) i32 {
        return qtc.KPixmapSequenceOverlayPainter_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPixmapSequenceOverlayPainter`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: KPixmapSequenceOverlayPainter, callback: *const fn () callconv(.c) i32) void {
        qtc.KPixmapSequenceOverlayPainter_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: KPixmapSequenceOverlayPainter, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KPixmapSequenceOverlayPainter_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KPixmapSequenceOverlayPainter, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KPixmapSequenceOverlayPainter_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPixmapSequenceOverlayPainter`
    ///
    /// ` callback: *const fn (self: KPixmapSequenceOverlayPainter, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: KPixmapSequenceOverlayPainter, callback: *const fn (KPixmapSequenceOverlayPainter, [*:0]const u8) callconv(.c) i32) void {
        qtc.KPixmapSequenceOverlayPainter_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: KPixmapSequenceOverlayPainter, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KPixmapSequenceOverlayPainter_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KPixmapSequenceOverlayPainter, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KPixmapSequenceOverlayPainter_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPixmapSequenceOverlayPainter`
    ///
    /// ` callback: *const fn (self: KPixmapSequenceOverlayPainter, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: KPixmapSequenceOverlayPainter, callback: *const fn (KPixmapSequenceOverlayPainter, QMetaMethod) callconv(.c) bool) void {
        qtc.KPixmapSequenceOverlayPainter_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` callback: *const fn (self: KPixmapSequenceOverlayPainter, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KPixmapSequenceOverlayPainter, callback: *const fn (KPixmapSequenceOverlayPainter, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kpixmapsequenceoverlaypainter.html#dtor.KPixmapSequenceOverlayPainter)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    pub fn Delete(self: KPixmapSequenceOverlayPainter) void {
        qtc.KPixmapSequenceOverlayPainter_Delete(@ptrCast(self.ptr));
    }
};
