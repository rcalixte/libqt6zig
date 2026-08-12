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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KPixmapSequenceOverlayPainter object in C++ memory
    ///
    pub fn new() KPixmapSequenceOverlayPainter {
        return .{ .ptr = qtc.KPixmapSequenceOverlayPainter_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KPixmapSequenceOverlayPainter object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` seq: KPixmapSequence `
    ///
    pub fn new2(seq: anytype) KPixmapSequenceOverlayPainter {
        comptime _ = @TypeOf(seq)._is_KPixmapSequence;
        return .{ .ptr = qtc.KPixmapSequenceOverlayPainter_new2(@ptrCast(seq.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KPixmapSequenceOverlayPainter object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new3(_parent: anytype) KPixmapSequenceOverlayPainter {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.KPixmapSequenceOverlayPainter_new3(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new KPixmapSequenceOverlayPainter object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` seq: KPixmapSequence `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new4(seq: anytype, _parent: anytype) KPixmapSequenceOverlayPainter {
        comptime _ = @TypeOf(seq)._is_KPixmapSequence;
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.KPixmapSequenceOverlayPainter_new4(@ptrCast(seq.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    pub fn metaObject(self: KPixmapSequenceOverlayPainter) QMetaObject {
        return .{ .ptr = qtc.KPixmapSequenceOverlayPainter_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: KPixmapSequenceOverlayPainter, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KPixmapSequenceOverlayPainter_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    pub fn superMetaObject(self: KPixmapSequenceOverlayPainter) QMetaObject {
        return .{ .ptr = qtc.KPixmapSequenceOverlayPainter_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KPixmapSequenceOverlayPainter, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KPixmapSequenceOverlayPainter_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` callback: *const fn (self: KPixmapSequenceOverlayPainter, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: KPixmapSequenceOverlayPainter, callback: *const fn (KPixmapSequenceOverlayPainter, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KPixmapSequenceOverlayPainter_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: KPixmapSequenceOverlayPainter, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KPixmapSequenceOverlayPainter_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: KPixmapSequenceOverlayPainter, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KPixmapSequenceOverlayPainter_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` callback: *const fn (self: KPixmapSequenceOverlayPainter, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: KPixmapSequenceOverlayPainter, callback: *const fn (KPixmapSequenceOverlayPainter, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KPixmapSequenceOverlayPainter_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: KPixmapSequenceOverlayPainter, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KPixmapSequenceOverlayPainter_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KPixmapSequenceOverlayPainter.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `sequence` instead
    ///
    pub const Sequence = sequence;

    /// ### [Upstream resources](https://api.kde.org/kpixmapsequenceoverlaypainter.html#sequence)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    pub fn sequence(self: KPixmapSequenceOverlayPainter) KPixmapSequence {
        return .{ .ptr = qtc.KPixmapSequenceOverlayPainter_Sequence(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `interval` instead
    ///
    pub const Interval = interval;

    /// ### [Upstream resources](https://api.kde.org/kpixmapsequenceoverlaypainter.html#interval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    pub fn interval(self: KPixmapSequenceOverlayPainter) i32 {
        return qtc.KPixmapSequenceOverlayPainter_Interval(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `rect` instead
    ///
    pub const Rect = rect;

    /// ### [Upstream resources](https://api.kde.org/kpixmapsequenceoverlaypainter.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    pub fn rect(self: KPixmapSequenceOverlayPainter) QRect {
        return .{ .ptr = qtc.KPixmapSequenceOverlayPainter_Rect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `alignment` instead
    ///
    pub const Alignment = alignment;

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
    pub fn alignment(self: KPixmapSequenceOverlayPainter) i32 {
        return qtc.KPixmapSequenceOverlayPainter_Alignment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `offset` instead
    ///
    pub const Offset = offset;

    /// ### [Upstream resources](https://api.kde.org/kpixmapsequenceoverlaypainter.html#offset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    pub fn offset(self: KPixmapSequenceOverlayPainter) QPoint {
        return .{ .ptr = qtc.KPixmapSequenceOverlayPainter_Offset(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSequence` instead
    ///
    pub const SetSequence = setSequence;

    /// ### [Upstream resources](https://api.kde.org/kpixmapsequenceoverlaypainter.html#setSequence)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` seq: KPixmapSequence `
    ///
    pub fn setSequence(self: KPixmapSequenceOverlayPainter, seq: anytype) void {
        comptime _ = @TypeOf(seq)._is_KPixmapSequence;
        qtc.KPixmapSequenceOverlayPainter_SetSequence(@ptrCast(self.ptr), @ptrCast(seq.ptr));
    }

    /// ### DEPRECATED: Use `setInterval` instead
    ///
    pub const SetInterval = setInterval;

    /// ### [Upstream resources](https://api.kde.org/kpixmapsequenceoverlaypainter.html#setInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` msecs: i32 `
    ///
    pub fn setInterval(self: KPixmapSequenceOverlayPainter, msecs: i32) void {
        qtc.KPixmapSequenceOverlayPainter_SetInterval(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `setWidget` instead
    ///
    pub const SetWidget = setWidget;

    /// ### [Upstream resources](https://api.kde.org/kpixmapsequenceoverlaypainter.html#setWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` w: QWidget `
    ///
    pub fn setWidget(self: KPixmapSequenceOverlayPainter, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.KPixmapSequenceOverlayPainter_SetWidget(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `setRect` instead
    ///
    pub const SetRect = setRect;

    /// ### [Upstream resources](https://api.kde.org/kpixmapsequenceoverlaypainter.html#setRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` _rect: QRect `
    ///
    pub fn setRect(self: KPixmapSequenceOverlayPainter, _rect: anytype) void {
        comptime _ = @TypeOf(_rect)._is_QRect;
        qtc.KPixmapSequenceOverlayPainter_SetRect(@ptrCast(self.ptr), @ptrCast(_rect.ptr));
    }

    /// ### DEPRECATED: Use `setAlignment` instead
    ///
    pub const SetAlignment = setAlignment;

    /// ### [Upstream resources](https://api.kde.org/kpixmapsequenceoverlaypainter.html#setAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` alignVal: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn setAlignment(self: KPixmapSequenceOverlayPainter, alignVal: i32) void {
        qtc.KPixmapSequenceOverlayPainter_SetAlignment(@ptrCast(self.ptr), @bitCast(alignVal));
    }

    /// ### DEPRECATED: Use `setOffset` instead
    ///
    pub const SetOffset = setOffset;

    /// ### [Upstream resources](https://api.kde.org/kpixmapsequenceoverlaypainter.html#setOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` _offset: QPoint `
    ///
    pub fn setOffset(self: KPixmapSequenceOverlayPainter, _offset: anytype) void {
        comptime _ = @TypeOf(_offset)._is_QPoint;
        qtc.KPixmapSequenceOverlayPainter_SetOffset(@ptrCast(self.ptr), @ptrCast(_offset.ptr));
    }

    /// ### DEPRECATED: Use `start` instead
    ///
    pub const Start = start;

    /// ### [Upstream resources](https://api.kde.org/kpixmapsequenceoverlaypainter.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    pub fn start(self: KPixmapSequenceOverlayPainter) void {
        qtc.KPixmapSequenceOverlayPainter_Start(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `stop` instead
    ///
    pub const Stop = stop;

    /// ### [Upstream resources](https://api.kde.org/kpixmapsequenceoverlaypainter.html#stop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    pub fn stop(self: KPixmapSequenceOverlayPainter) void {
        qtc.KPixmapSequenceOverlayPainter_Stop(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

    /// ### [Upstream resources](https://api.kde.org/kpixmapsequenceoverlaypainter.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` obj: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KPixmapSequenceOverlayPainter, obj: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KPixmapSequenceOverlayPainter_EventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

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
    pub fn onEventFilter(self: KPixmapSequenceOverlayPainter, callback: *const fn (KPixmapSequenceOverlayPainter, QObject, QEvent) callconv(.c) bool) void {
        qtc.KPixmapSequenceOverlayPainter_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: KPixmapSequenceOverlayPainter, obj: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KPixmapSequenceOverlayPainter_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr), @ptrCast(_event.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KPixmapSequenceOverlayPainter.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KPixmapSequenceOverlayPainter.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KPixmapSequenceOverlayPainter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KPixmapSequenceOverlayPainter.objectName: Memory allocation failed");
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: KPixmapSequenceOverlayPainter, name: []const u8) void {
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    pub fn isWidgetType(self: KPixmapSequenceOverlayPainter) bool {
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    pub fn isWindowType(self: KPixmapSequenceOverlayPainter) bool {
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    pub fn isQuickItemType(self: KPixmapSequenceOverlayPainter) bool {
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    pub fn signalsBlocked(self: KPixmapSequenceOverlayPainter) bool {
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KPixmapSequenceOverlayPainter, b: bool) bool {
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    pub fn thread(self: KPixmapSequenceOverlayPainter) QThread {
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KPixmapSequenceOverlayPainter, _thread: anytype) bool {
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` _interval: i32 `
    ///
    pub fn startTimer(self: KPixmapSequenceOverlayPainter, _interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(_interval));
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KPixmapSequenceOverlayPainter, time: i64) i32 {
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KPixmapSequenceOverlayPainter, id: i32) void {
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KPixmapSequenceOverlayPainter, id: i32) void {
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KPixmapSequenceOverlayPainter, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KPixmapSequenceOverlayPainter.children: Memory allocation failed");
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KPixmapSequenceOverlayPainter, _parent: anytype) void {
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KPixmapSequenceOverlayPainter, filterObj: anytype) void {
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KPixmapSequenceOverlayPainter, obj: anytype) void {
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KPixmapSequenceOverlayPainter, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    pub fn disconnect3(self: KPixmapSequenceOverlayPainter) bool {
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KPixmapSequenceOverlayPainter, receiver: anytype) bool {
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    pub fn dumpObjectTree(self: KPixmapSequenceOverlayPainter) void {
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    pub fn dumpObjectInfo(self: KPixmapSequenceOverlayPainter) void {
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KPixmapSequenceOverlayPainter, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: KPixmapSequenceOverlayPainter, name: [:0]const u8) QVariant {
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KPixmapSequenceOverlayPainter, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KPixmapSequenceOverlayPainter.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KPixmapSequenceOverlayPainter.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    pub fn bindingStorage(self: KPixmapSequenceOverlayPainter) QBindingStorage {
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    pub fn bindingStorage2(self: KPixmapSequenceOverlayPainter) QBindingStorage {
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    pub fn destroyed(self: KPixmapSequenceOverlayPainter) void {
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` callback: *const fn (self: KPixmapSequenceOverlayPainter) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KPixmapSequenceOverlayPainter, callback: *const fn (KPixmapSequenceOverlayPainter) callconv(.c) void) void {
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    pub fn parent(self: KPixmapSequenceOverlayPainter) QObject {
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KPixmapSequenceOverlayPainter, classname: [:0]const u8) bool {
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    pub fn deleteLater(self: KPixmapSequenceOverlayPainter) void {
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` _interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KPixmapSequenceOverlayPainter, _interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(_interval), @bitCast(timerType));
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KPixmapSequenceOverlayPainter, time: i64, timerType: i32) i32 {
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KPixmapSequenceOverlayPainter, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KPixmapSequenceOverlayPainter, signal: [:0]const u8) bool {
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KPixmapSequenceOverlayPainter, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KPixmapSequenceOverlayPainter, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KPixmapSequenceOverlayPainter, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KPixmapSequenceOverlayPainter, param1: anytype) void {
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` callback: *const fn (self: KPixmapSequenceOverlayPainter, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KPixmapSequenceOverlayPainter, callback: *const fn (KPixmapSequenceOverlayPainter, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: KPixmapSequenceOverlayPainter, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KPixmapSequenceOverlayPainter_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: KPixmapSequenceOverlayPainter, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KPixmapSequenceOverlayPainter_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KPixmapSequenceOverlayPainter`
    ///
    /// ` callback: *const fn (self: KPixmapSequenceOverlayPainter, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: KPixmapSequenceOverlayPainter, callback: *const fn (KPixmapSequenceOverlayPainter, QEvent) callconv(.c) bool) void {
        qtc.KPixmapSequenceOverlayPainter_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: KPixmapSequenceOverlayPainter, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KPixmapSequenceOverlayPainter_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: KPixmapSequenceOverlayPainter, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KPixmapSequenceOverlayPainter_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KPixmapSequenceOverlayPainter`
    ///
    /// ` callback: *const fn (self: KPixmapSequenceOverlayPainter, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: KPixmapSequenceOverlayPainter, callback: *const fn (KPixmapSequenceOverlayPainter, QTimerEvent) callconv(.c) void) void {
        qtc.KPixmapSequenceOverlayPainter_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: KPixmapSequenceOverlayPainter, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KPixmapSequenceOverlayPainter_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: KPixmapSequenceOverlayPainter, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KPixmapSequenceOverlayPainter_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KPixmapSequenceOverlayPainter`
    ///
    /// ` callback: *const fn (self: KPixmapSequenceOverlayPainter, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: KPixmapSequenceOverlayPainter, callback: *const fn (KPixmapSequenceOverlayPainter, QChildEvent) callconv(.c) void) void {
        qtc.KPixmapSequenceOverlayPainter_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: KPixmapSequenceOverlayPainter, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KPixmapSequenceOverlayPainter_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: KPixmapSequenceOverlayPainter, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KPixmapSequenceOverlayPainter_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KPixmapSequenceOverlayPainter`
    ///
    /// ` callback: *const fn (self: KPixmapSequenceOverlayPainter, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: KPixmapSequenceOverlayPainter, callback: *const fn (KPixmapSequenceOverlayPainter, QEvent) callconv(.c) void) void {
        qtc.KPixmapSequenceOverlayPainter_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: KPixmapSequenceOverlayPainter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KPixmapSequenceOverlayPainter_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: KPixmapSequenceOverlayPainter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KPixmapSequenceOverlayPainter_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KPixmapSequenceOverlayPainter`
    ///
    /// ` callback: *const fn (self: KPixmapSequenceOverlayPainter, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: KPixmapSequenceOverlayPainter, callback: *const fn (KPixmapSequenceOverlayPainter, QMetaMethod) callconv(.c) void) void {
        qtc.KPixmapSequenceOverlayPainter_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: KPixmapSequenceOverlayPainter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KPixmapSequenceOverlayPainter_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: KPixmapSequenceOverlayPainter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KPixmapSequenceOverlayPainter_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KPixmapSequenceOverlayPainter`
    ///
    /// ` callback: *const fn (self: KPixmapSequenceOverlayPainter, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: KPixmapSequenceOverlayPainter, callback: *const fn (KPixmapSequenceOverlayPainter, QMetaMethod) callconv(.c) void) void {
        qtc.KPixmapSequenceOverlayPainter_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    pub fn sender(self: KPixmapSequenceOverlayPainter) QObject {
        return .{ .ptr = qtc.KPixmapSequenceOverlayPainter_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    pub fn superSender(self: KPixmapSequenceOverlayPainter) QObject {
        return .{ .ptr = qtc.KPixmapSequenceOverlayPainter_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: KPixmapSequenceOverlayPainter`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: KPixmapSequenceOverlayPainter, callback: *const fn () callconv(.c) QObject) void {
        qtc.KPixmapSequenceOverlayPainter_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    pub fn senderSignalIndex(self: KPixmapSequenceOverlayPainter) i32 {
        return qtc.KPixmapSequenceOverlayPainter_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    pub fn superSenderSignalIndex(self: KPixmapSequenceOverlayPainter) i32 {
        return qtc.KPixmapSequenceOverlayPainter_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KPixmapSequenceOverlayPainter`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: KPixmapSequenceOverlayPainter, callback: *const fn () callconv(.c) i32) void {
        qtc.KPixmapSequenceOverlayPainter_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: KPixmapSequenceOverlayPainter, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KPixmapSequenceOverlayPainter_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: KPixmapSequenceOverlayPainter, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KPixmapSequenceOverlayPainter_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KPixmapSequenceOverlayPainter`
    ///
    /// ` callback: *const fn (self: KPixmapSequenceOverlayPainter, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: KPixmapSequenceOverlayPainter, callback: *const fn (KPixmapSequenceOverlayPainter, [*:0]const u8) callconv(.c) i32) void {
        qtc.KPixmapSequenceOverlayPainter_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: KPixmapSequenceOverlayPainter, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KPixmapSequenceOverlayPainter_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: KPixmapSequenceOverlayPainter, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KPixmapSequenceOverlayPainter_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KPixmapSequenceOverlayPainter`
    ///
    /// ` callback: *const fn (self: KPixmapSequenceOverlayPainter, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: KPixmapSequenceOverlayPainter, callback: *const fn (KPixmapSequenceOverlayPainter, QMetaMethod) callconv(.c) bool) void {
        qtc.KPixmapSequenceOverlayPainter_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    /// ` callback: *const fn (self: KPixmapSequenceOverlayPainter, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KPixmapSequenceOverlayPainter, callback: *const fn (KPixmapSequenceOverlayPainter, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kpixmapsequenceoverlaypainter.html#dtor.KPixmapSequenceOverlayPainter)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KPixmapSequenceOverlayPainter `
    ///
    pub fn delete(self: KPixmapSequenceOverlayPainter) void {
        qtc.KPixmapSequenceOverlayPainter_Delete(@ptrCast(self.ptr));
    }
};
