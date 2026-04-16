const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPlainTextEdit = @import("libqt6").QPlainTextEdit;
const QTextEdit = @import("libqt6").QTextEdit;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const Sonnet__Highlighter = @import("libqt6").Sonnet__Highlighter;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/sonnet-spellcheckdecorator.html)
pub const Sonnet__SpellCheckDecorator = extern struct {
    /// ### [Upstream resources](https://api.kde.org/sonnet-spellcheckdecorator.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Sonnet__SpellCheckDecorator,

    pub const _is_Sonnet__SpellCheckDecorator = {};
    pub const _is_QObject = {};

    /// New constructs a new Sonnet::SpellCheckDecorator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` textEdit: QTextEdit `
    ///
    pub fn New(textEdit: anytype) Sonnet__SpellCheckDecorator {
        comptime _ = @TypeOf(textEdit)._is_QTextEdit;
        return .{ .ptr = qtc.Sonnet__SpellCheckDecorator_new(@ptrCast(textEdit.ptr)) };
    }

    /// New2 constructs a new Sonnet::SpellCheckDecorator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` textEdit: QPlainTextEdit `
    ///
    pub fn New2(textEdit: anytype) Sonnet__SpellCheckDecorator {
        comptime _ = @TypeOf(textEdit)._is_QPlainTextEdit;
        return .{ .ptr = qtc.Sonnet__SpellCheckDecorator_new2(@ptrCast(textEdit.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    pub fn MetaObject(self: Sonnet__SpellCheckDecorator) QMetaObject {
        return .{ .ptr = qtc.Sonnet__SpellCheckDecorator_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: Sonnet__SpellCheckDecorator, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.Sonnet__SpellCheckDecorator_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    pub fn SuperMetaObject(self: Sonnet__SpellCheckDecorator) QMetaObject {
        return .{ .ptr = qtc.Sonnet__SpellCheckDecorator_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: Sonnet__SpellCheckDecorator, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Sonnet__SpellCheckDecorator_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    /// ` callback: *const fn (self: Sonnet__SpellCheckDecorator, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: Sonnet__SpellCheckDecorator, callback: *const fn (Sonnet__SpellCheckDecorator, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.Sonnet__SpellCheckDecorator_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: Sonnet__SpellCheckDecorator, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Sonnet__SpellCheckDecorator_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: Sonnet__SpellCheckDecorator, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Sonnet__SpellCheckDecorator_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    /// ` callback: *const fn (self: Sonnet__SpellCheckDecorator, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: Sonnet__SpellCheckDecorator, callback: *const fn (Sonnet__SpellCheckDecorator, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.Sonnet__SpellCheckDecorator_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: Sonnet__SpellCheckDecorator, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Sonnet__SpellCheckDecorator_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("sonnet__spellcheckdecorator.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-spellcheckdecorator.html#setHighlighter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    /// ` highlighter: Sonnet__Highlighter `
    ///
    pub fn SetHighlighter(self: Sonnet__SpellCheckDecorator, highlighter: anytype) void {
        comptime _ = @TypeOf(highlighter)._is_Sonnet__Highlighter;
        qtc.Sonnet__SpellCheckDecorator_SetHighlighter(@ptrCast(self.ptr), @ptrCast(highlighter.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-spellcheckdecorator.html#highlighter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    pub fn Highlighter(self: Sonnet__SpellCheckDecorator) Sonnet__Highlighter {
        return .{ .ptr = qtc.Sonnet__SpellCheckDecorator_Highlighter(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-spellcheckdecorator.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    /// ` obj: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: Sonnet__SpellCheckDecorator, obj: anytype, event: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.Sonnet__SpellCheckDecorator_EventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-spellcheckdecorator.html#eventFilter)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    /// ` callback: *const fn (self: Sonnet__SpellCheckDecorator, obj: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: Sonnet__SpellCheckDecorator, callback: *const fn (Sonnet__SpellCheckDecorator, QObject, QEvent) callconv(.c) bool) void {
        qtc.Sonnet__SpellCheckDecorator_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// ### [Upstream resources](https://api.kde.org/sonnet-spellcheckdecorator.html#eventFilter)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    /// ` obj: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: Sonnet__SpellCheckDecorator, obj: anytype, event: anytype) bool {
        comptime _ = @TypeOf(obj)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.Sonnet__SpellCheckDecorator_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-spellcheckdecorator.html#isSpellCheckingEnabledForBlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    /// ` textBlock: []const u8 `
    ///
    pub fn IsSpellCheckingEnabledForBlock(self: Sonnet__SpellCheckDecorator, textBlock: []const u8) bool {
        const textBlock_str = qtc.libqt_string{
            .len = textBlock.len,
            .data = textBlock.ptr,
        };
        return qtc.Sonnet__SpellCheckDecorator_IsSpellCheckingEnabledForBlock(@ptrCast(self.ptr), textBlock_str);
    }

    /// ### [Upstream resources](https://api.kde.org/sonnet-spellcheckdecorator.html#isSpellCheckingEnabledForBlock)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    /// ` callback: *const fn (self: Sonnet__SpellCheckDecorator, textBlock: [*:0]const u8) callconv(.c) bool `
    ///
    pub fn OnIsSpellCheckingEnabledForBlock(self: Sonnet__SpellCheckDecorator, callback: *const fn (Sonnet__SpellCheckDecorator, [*:0]const u8) callconv(.c) bool) void {
        qtc.Sonnet__SpellCheckDecorator_OnIsSpellCheckingEnabledForBlock(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsSpellCheckingEnabledForBlock` instead
    ///
    pub const QBaseIsSpellCheckingEnabledForBlock = SuperIsSpellCheckingEnabledForBlock;

    /// ### [Upstream resources](https://api.kde.org/sonnet-spellcheckdecorator.html#isSpellCheckingEnabledForBlock)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    /// ` textBlock: []const u8 `
    ///
    pub fn SuperIsSpellCheckingEnabledForBlock(self: Sonnet__SpellCheckDecorator, textBlock: []const u8) bool {
        const textBlock_str = qtc.libqt_string{
            .len = textBlock.len,
            .data = textBlock.ptr,
        };
        return qtc.Sonnet__SpellCheckDecorator_SuperIsSpellCheckingEnabledForBlock(@ptrCast(self.ptr), textBlock_str);
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("sonnet__spellcheckdecorator.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("sonnet__spellcheckdecorator.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: Sonnet__SpellCheckDecorator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("sonnet__spellcheckdecorator.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: Sonnet__SpellCheckDecorator, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    pub fn IsWidgetType(self: Sonnet__SpellCheckDecorator) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    pub fn IsWindowType(self: Sonnet__SpellCheckDecorator) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    pub fn IsQuickItemType(self: Sonnet__SpellCheckDecorator) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    pub fn SignalsBlocked(self: Sonnet__SpellCheckDecorator) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: Sonnet__SpellCheckDecorator, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    pub fn Thread(self: Sonnet__SpellCheckDecorator) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: Sonnet__SpellCheckDecorator, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: Sonnet__SpellCheckDecorator, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: Sonnet__SpellCheckDecorator, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: Sonnet__SpellCheckDecorator, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: Sonnet__SpellCheckDecorator, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: Sonnet__SpellCheckDecorator, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("sonnet__spellcheckdecorator.Children: Memory allocation failed");
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
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: Sonnet__SpellCheckDecorator, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: Sonnet__SpellCheckDecorator, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: Sonnet__SpellCheckDecorator, obj: anytype) void {
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
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: Sonnet__SpellCheckDecorator, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    pub fn Disconnect3(self: Sonnet__SpellCheckDecorator) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: Sonnet__SpellCheckDecorator, receiver: anytype) bool {
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
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    pub fn DumpObjectTree(self: Sonnet__SpellCheckDecorator) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    pub fn DumpObjectInfo(self: Sonnet__SpellCheckDecorator) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: Sonnet__SpellCheckDecorator, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: Sonnet__SpellCheckDecorator, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: Sonnet__SpellCheckDecorator, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("sonnet__spellcheckdecorator.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("sonnet__spellcheckdecorator.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    pub fn BindingStorage(self: Sonnet__SpellCheckDecorator) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    pub fn BindingStorage2(self: Sonnet__SpellCheckDecorator) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    pub fn Destroyed(self: Sonnet__SpellCheckDecorator) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    /// ` callback: *const fn (self: Sonnet__SpellCheckDecorator) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: Sonnet__SpellCheckDecorator, callback: *const fn (Sonnet__SpellCheckDecorator) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    pub fn Parent(self: Sonnet__SpellCheckDecorator) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: Sonnet__SpellCheckDecorator, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    pub fn DeleteLater(self: Sonnet__SpellCheckDecorator) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: Sonnet__SpellCheckDecorator, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: Sonnet__SpellCheckDecorator, time: i64, timerType: i32) i32 {
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
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: Sonnet__SpellCheckDecorator, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: Sonnet__SpellCheckDecorator, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: Sonnet__SpellCheckDecorator, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: Sonnet__SpellCheckDecorator, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: Sonnet__SpellCheckDecorator, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: Sonnet__SpellCheckDecorator, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    /// ` callback: *const fn (self: Sonnet__SpellCheckDecorator, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: Sonnet__SpellCheckDecorator, callback: *const fn (Sonnet__SpellCheckDecorator, QObject) callconv(.c) void) void {
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
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: Sonnet__SpellCheckDecorator, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.Sonnet__SpellCheckDecorator_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: Sonnet__SpellCheckDecorator, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.Sonnet__SpellCheckDecorator_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__SpellCheckDecorator`
    ///
    /// ` callback: *const fn (self: Sonnet__SpellCheckDecorator, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: Sonnet__SpellCheckDecorator, callback: *const fn (Sonnet__SpellCheckDecorator, QEvent) callconv(.c) bool) void {
        qtc.Sonnet__SpellCheckDecorator_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: Sonnet__SpellCheckDecorator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.Sonnet__SpellCheckDecorator_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: Sonnet__SpellCheckDecorator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.Sonnet__SpellCheckDecorator_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__SpellCheckDecorator`
    ///
    /// ` callback: *const fn (self: Sonnet__SpellCheckDecorator, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: Sonnet__SpellCheckDecorator, callback: *const fn (Sonnet__SpellCheckDecorator, QTimerEvent) callconv(.c) void) void {
        qtc.Sonnet__SpellCheckDecorator_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: Sonnet__SpellCheckDecorator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.Sonnet__SpellCheckDecorator_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: Sonnet__SpellCheckDecorator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.Sonnet__SpellCheckDecorator_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__SpellCheckDecorator`
    ///
    /// ` callback: *const fn (self: Sonnet__SpellCheckDecorator, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: Sonnet__SpellCheckDecorator, callback: *const fn (Sonnet__SpellCheckDecorator, QChildEvent) callconv(.c) void) void {
        qtc.Sonnet__SpellCheckDecorator_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: Sonnet__SpellCheckDecorator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.Sonnet__SpellCheckDecorator_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: Sonnet__SpellCheckDecorator, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.Sonnet__SpellCheckDecorator_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__SpellCheckDecorator`
    ///
    /// ` callback: *const fn (self: Sonnet__SpellCheckDecorator, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: Sonnet__SpellCheckDecorator, callback: *const fn (Sonnet__SpellCheckDecorator, QEvent) callconv(.c) void) void {
        qtc.Sonnet__SpellCheckDecorator_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: Sonnet__SpellCheckDecorator, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Sonnet__SpellCheckDecorator_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: Sonnet__SpellCheckDecorator, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Sonnet__SpellCheckDecorator_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__SpellCheckDecorator`
    ///
    /// ` callback: *const fn (self: Sonnet__SpellCheckDecorator, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: Sonnet__SpellCheckDecorator, callback: *const fn (Sonnet__SpellCheckDecorator, QMetaMethod) callconv(.c) void) void {
        qtc.Sonnet__SpellCheckDecorator_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: Sonnet__SpellCheckDecorator, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Sonnet__SpellCheckDecorator_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: Sonnet__SpellCheckDecorator, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Sonnet__SpellCheckDecorator_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__SpellCheckDecorator`
    ///
    /// ` callback: *const fn (self: Sonnet__SpellCheckDecorator, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: Sonnet__SpellCheckDecorator, callback: *const fn (Sonnet__SpellCheckDecorator, QMetaMethod) callconv(.c) void) void {
        qtc.Sonnet__SpellCheckDecorator_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    pub fn Sender(self: Sonnet__SpellCheckDecorator) QObject {
        return .{ .ptr = qtc.Sonnet__SpellCheckDecorator_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    pub fn SuperSender(self: Sonnet__SpellCheckDecorator) QObject {
        return .{ .ptr = qtc.Sonnet__SpellCheckDecorator_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__SpellCheckDecorator`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: Sonnet__SpellCheckDecorator, callback: *const fn () callconv(.c) QObject) void {
        qtc.Sonnet__SpellCheckDecorator_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    pub fn SenderSignalIndex(self: Sonnet__SpellCheckDecorator) i32 {
        return qtc.Sonnet__SpellCheckDecorator_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    pub fn SuperSenderSignalIndex(self: Sonnet__SpellCheckDecorator) i32 {
        return qtc.Sonnet__SpellCheckDecorator_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__SpellCheckDecorator`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: Sonnet__SpellCheckDecorator, callback: *const fn () callconv(.c) i32) void {
        qtc.Sonnet__SpellCheckDecorator_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: Sonnet__SpellCheckDecorator, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Sonnet__SpellCheckDecorator_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: Sonnet__SpellCheckDecorator, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Sonnet__SpellCheckDecorator_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__SpellCheckDecorator`
    ///
    /// ` callback: *const fn (self: Sonnet__SpellCheckDecorator, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: Sonnet__SpellCheckDecorator, callback: *const fn (Sonnet__SpellCheckDecorator, [*:0]const u8) callconv(.c) i32) void {
        qtc.Sonnet__SpellCheckDecorator_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: Sonnet__SpellCheckDecorator, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.Sonnet__SpellCheckDecorator_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: Sonnet__SpellCheckDecorator, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.Sonnet__SpellCheckDecorator_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__SpellCheckDecorator`
    ///
    /// ` callback: *const fn (self: Sonnet__SpellCheckDecorator, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: Sonnet__SpellCheckDecorator, callback: *const fn (Sonnet__SpellCheckDecorator, QMetaMethod) callconv(.c) bool) void {
        qtc.Sonnet__SpellCheckDecorator_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    /// ` callback: *const fn (self: Sonnet__SpellCheckDecorator, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: Sonnet__SpellCheckDecorator, callback: *const fn (Sonnet__SpellCheckDecorator, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Sonnet__SpellCheckDecorator `
    ///
    pub fn Delete(self: Sonnet__SpellCheckDecorator) void {
        qtc.Sonnet__SpellCheckDecorator_Delete(@ptrCast(self.ptr));
    }
};
