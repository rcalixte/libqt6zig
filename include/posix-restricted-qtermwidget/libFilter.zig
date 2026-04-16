const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const Filter_enums = enums;
const QAction = @import("libqt6").QAction;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QRegularExpression = @import("libqt6").QRegularExpression;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
pub const Konsole__Filter = extern struct {
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Konsole__Filter,

    pub const _is_Konsole__Filter = {};
    pub const _is_QObject = {};

    /// New constructs a new Konsole::Filter object.
    ///
    pub fn New() Konsole__Filter {
        return .{ .ptr = qtc.Konsole__Filter_new() };
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter `
    ///
    pub fn Process(self: Konsole__Filter) void {
        qtc.Konsole__Filter_Process(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Filter `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnProcess(self: Konsole__Filter, callback: *const fn () callconv(.c) void) void {
        qtc.Konsole__Filter_OnProcess(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperProcess` instead
    ///
    pub const QBaseProcess = SuperProcess;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter `
    ///
    pub fn SuperProcess(self: Konsole__Filter) void {
        qtc.Konsole__Filter_SuperProcess(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter `
    ///
    pub fn Reset(self: Konsole__Filter) void {
        qtc.Konsole__Filter_Reset(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter `
    ///
    /// ` line: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn HotSpotAt(self: Konsole__Filter, line: i32, column: i32) Konsole__Filter__HotSpot {
        return .{ .ptr = qtc.Konsole__Filter_HotSpotAt(@ptrCast(self.ptr), @bitCast(line), @bitCast(column)) };
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter `
    ///
    /// ` param1: Konsole__Filter__HotSpot `
    ///
    pub fn AddHotSpot(self: Konsole__Filter, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_Konsole__Filter__HotSpot;
        qtc.Konsole__Filter_AddHotSpot(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Filter `
    ///
    /// ` callback: *const fn (self: Konsole__Filter, param1: Konsole__Filter__HotSpot) callconv(.c) void `
    ///
    pub fn OnAddHotSpot(self: Konsole__Filter, callback: *const fn (Konsole__Filter, Konsole__Filter__HotSpot) callconv(.c) void) void {
        qtc.Konsole__Filter_OnAddHotSpot(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAddHotSpot` instead
    ///
    pub const QBaseAddHotSpot = SuperAddHotSpot;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter `
    ///
    /// ` param1: Konsole__Filter__HotSpot `
    ///
    pub fn SuperAddHotSpot(self: Konsole__Filter, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_Konsole__Filter__HotSpot;
        qtc.Konsole__Filter_SuperAddHotSpot(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Buffer(self: Konsole__Filter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Konsole__Filter_Buffer(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole__filter.Buffer: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Filter `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnBuffer(self: Konsole__Filter, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.Konsole__Filter_OnBuffer(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperBuffer` instead
    ///
    pub const QBaseBuffer = SuperBuffer;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperBuffer(self: Konsole__Filter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Konsole__Filter_SuperBuffer(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole__filter.Buffer: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter `
    ///
    /// ` position: i32 `
    ///
    /// ` startLine: *i32 `
    ///
    /// ` startColumn: *i32 `
    ///
    pub fn GetLineColumn(self: Konsole__Filter, position: i32, startLine: *i32, startColumn: *i32) void {
        qtc.Konsole__Filter_GetLineColumn(@ptrCast(self.ptr), @bitCast(position), @ptrCast(startLine), @ptrCast(startColumn));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Filter `
    ///
    /// ` callback: *const fn (self: Konsole__Filter, position: i32, startLine: *i32, startColumn: *i32) callconv(.c) void `
    ///
    pub fn OnGetLineColumn(self: Konsole__Filter, callback: *const fn (Konsole__Filter, i32, *i32, *i32) callconv(.c) void) void {
        qtc.Konsole__Filter_OnGetLineColumn(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperGetLineColumn` instead
    ///
    pub const QBaseGetLineColumn = SuperGetLineColumn;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter `
    ///
    /// ` position: i32 `
    ///
    /// ` startLine: *i32 `
    ///
    /// ` startColumn: *i32 `
    ///
    pub fn SuperGetLineColumn(self: Konsole__Filter, position: i32, startLine: *i32, startColumn: *i32) void {
        qtc.Konsole__Filter_SuperGetLineColumn(@ptrCast(self.ptr), @bitCast(position), @ptrCast(startLine), @ptrCast(startColumn));
    }

    /// Inherited from QObject
    ///
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole__filter.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: Konsole__Filter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole__filter.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: Konsole__Filter, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter `
    ///
    pub fn IsWidgetType(self: Konsole__Filter) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter `
    ///
    pub fn IsWindowType(self: Konsole__Filter) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter `
    ///
    pub fn IsQuickItemType(self: Konsole__Filter) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter `
    ///
    pub fn SignalsBlocked(self: Konsole__Filter) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: Konsole__Filter, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter `
    ///
    pub fn Thread(self: Konsole__Filter) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: Konsole__Filter, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: Konsole__Filter, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: Konsole__Filter, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: Konsole__Filter, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: Konsole__Filter, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: Konsole__Filter, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("konsole__filter.Children: Memory allocation failed");
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
    /// ` self: Konsole__Filter `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: Konsole__Filter, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: Konsole__Filter, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: Konsole__Filter, obj: anytype) void {
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
    /// ` self: Konsole__Filter `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: Konsole__Filter, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: Konsole__Filter `
    ///
    pub fn Disconnect3(self: Konsole__Filter) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: Konsole__Filter, receiver: anytype) bool {
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
    /// ` self: Konsole__Filter `
    ///
    pub fn DumpObjectTree(self: Konsole__Filter) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter `
    ///
    pub fn DumpObjectInfo(self: Konsole__Filter) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: Konsole__Filter, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: Konsole__Filter `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: Konsole__Filter, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: Konsole__Filter, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("konsole__filter.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("konsole__filter.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: Konsole__Filter `
    ///
    pub fn BindingStorage(self: Konsole__Filter) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter `
    ///
    pub fn BindingStorage2(self: Konsole__Filter) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter `
    ///
    pub fn Destroyed(self: Konsole__Filter) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Filter `
    ///
    /// ` callback: *const fn (self: Konsole__Filter) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: Konsole__Filter, callback: *const fn (Konsole__Filter) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter `
    ///
    pub fn Parent(self: Konsole__Filter) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: Konsole__Filter, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter `
    ///
    pub fn DeleteLater(self: Konsole__Filter) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole__filter.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole__filter.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: Konsole__Filter, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: Konsole__Filter, time: i64, timerType: i32) i32 {
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
    /// ` self: Konsole__Filter `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: Konsole__Filter, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: Konsole__Filter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: Konsole__Filter, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: Konsole__Filter, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: Konsole__Filter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: Konsole__Filter, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: Konsole__Filter `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: Konsole__Filter, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: Konsole__Filter `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: Konsole__Filter, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Filter `
    ///
    /// ` callback: *const fn (self: Konsole__Filter, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: Konsole__Filter, callback: *const fn (Konsole__Filter, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter `
    ///
    pub fn MetaObject(self: Konsole__Filter) QMetaObject {
        return .{ .ptr = qtc.Konsole__Filter_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter `
    ///
    pub fn SuperMetaObject(self: Konsole__Filter) QMetaObject {
        return .{ .ptr = qtc.Konsole__Filter_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Filter`
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: Konsole__Filter, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.Konsole__Filter_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#qt_metacast)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: Konsole__Filter, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Konsole__Filter_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#qt_metacast)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: Konsole__Filter, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Konsole__Filter_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#qt_metacast)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Filter`
    ///
    /// ` callback: *const fn (self: Konsole__Filter, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: Konsole__Filter, callback: *const fn (Konsole__Filter, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.Konsole__Filter_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#qt_metacall)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: Konsole__Filter, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Konsole__Filter_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#qt_metacall)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: Konsole__Filter, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Konsole__Filter_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#qt_metacall)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Filter`
    ///
    /// ` callback: *const fn (self: Konsole__Filter, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: Konsole__Filter, callback: *const fn (Konsole__Filter, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.Konsole__Filter_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: Konsole__Filter, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.Konsole__Filter_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: Konsole__Filter `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: Konsole__Filter, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.Konsole__Filter_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Filter`
    ///
    /// ` callback: *const fn (self: Konsole__Filter, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: Konsole__Filter, callback: *const fn (Konsole__Filter, QEvent) callconv(.c) bool) void {
        qtc.Konsole__Filter_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: Konsole__Filter, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.Konsole__Filter_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: Konsole__Filter `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: Konsole__Filter, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.Konsole__Filter_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Filter`
    ///
    /// ` callback: *const fn (self: Konsole__Filter, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: Konsole__Filter, callback: *const fn (Konsole__Filter, QObject, QEvent) callconv(.c) bool) void {
        qtc.Konsole__Filter_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: Konsole__Filter, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.Konsole__Filter_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: Konsole__Filter `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: Konsole__Filter, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.Konsole__Filter_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Filter`
    ///
    /// ` callback: *const fn (self: Konsole__Filter, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: Konsole__Filter, callback: *const fn (Konsole__Filter, QTimerEvent) callconv(.c) void) void {
        qtc.Konsole__Filter_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: Konsole__Filter, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.Konsole__Filter_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: Konsole__Filter `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: Konsole__Filter, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.Konsole__Filter_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Filter`
    ///
    /// ` callback: *const fn (self: Konsole__Filter, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: Konsole__Filter, callback: *const fn (Konsole__Filter, QChildEvent) callconv(.c) void) void {
        qtc.Konsole__Filter_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: Konsole__Filter, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.Konsole__Filter_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: Konsole__Filter `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: Konsole__Filter, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.Konsole__Filter_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Filter`
    ///
    /// ` callback: *const fn (self: Konsole__Filter, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: Konsole__Filter, callback: *const fn (Konsole__Filter, QEvent) callconv(.c) void) void {
        qtc.Konsole__Filter_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: Konsole__Filter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Konsole__Filter_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Konsole__Filter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: Konsole__Filter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Konsole__Filter_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Filter`
    ///
    /// ` callback: *const fn (self: Konsole__Filter, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: Konsole__Filter, callback: *const fn (Konsole__Filter, QMetaMethod) callconv(.c) void) void {
        qtc.Konsole__Filter_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: Konsole__Filter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Konsole__Filter_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Konsole__Filter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: Konsole__Filter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Konsole__Filter_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Filter`
    ///
    /// ` callback: *const fn (self: Konsole__Filter, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: Konsole__Filter, callback: *const fn (Konsole__Filter, QMetaMethod) callconv(.c) void) void {
        qtc.Konsole__Filter_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter `
    ///
    pub fn Sender(self: Konsole__Filter) QObject {
        return .{ .ptr = qtc.Konsole__Filter_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: Konsole__Filter `
    ///
    pub fn SuperSender(self: Konsole__Filter) QObject {
        return .{ .ptr = qtc.Konsole__Filter_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Filter`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: Konsole__Filter, callback: *const fn () callconv(.c) QObject) void {
        qtc.Konsole__Filter_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter `
    ///
    pub fn SenderSignalIndex(self: Konsole__Filter) i32 {
        return qtc.Konsole__Filter_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: Konsole__Filter `
    ///
    pub fn SuperSenderSignalIndex(self: Konsole__Filter) i32 {
        return qtc.Konsole__Filter_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Filter`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: Konsole__Filter, callback: *const fn () callconv(.c) i32) void {
        qtc.Konsole__Filter_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: Konsole__Filter, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Konsole__Filter_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: Konsole__Filter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: Konsole__Filter, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Konsole__Filter_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Filter`
    ///
    /// ` callback: *const fn (self: Konsole__Filter, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: Konsole__Filter, callback: *const fn (Konsole__Filter, [*:0]const u8) callconv(.c) i32) void {
        qtc.Konsole__Filter_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: Konsole__Filter, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.Konsole__Filter_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Konsole__Filter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: Konsole__Filter, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.Konsole__Filter_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Filter`
    ///
    /// ` callback: *const fn (self: Konsole__Filter, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: Konsole__Filter, callback: *const fn (Konsole__Filter, QMetaMethod) callconv(.c) bool) void {
        qtc.Konsole__Filter_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Filter `
    ///
    /// ` callback: *const fn (self: Konsole__Filter, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: Konsole__Filter, callback: *const fn (Konsole__Filter, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Konsole__Filter `
    ///
    pub fn Delete(self: Konsole__Filter) void {
        qtc.Konsole__Filter_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
pub const Konsole__RegExpFilter = extern struct {
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Konsole__RegExpFilter,

    pub const _is_Konsole__RegExpFilter = {};
    pub const _is_Konsole__Filter = {};
    pub const _is_QObject = {};

    /// New constructs a new Konsole::RegExpFilter object.
    ///
    pub fn New() Konsole__RegExpFilter {
        return .{ .ptr = qtc.Konsole__RegExpFilter_new() };
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` text: QRegularExpression `
    ///
    pub fn SetRegExp(self: Konsole__RegExpFilter, text: anytype) void {
        comptime _ = @TypeOf(text)._is_QRegularExpression;
        qtc.Konsole__RegExpFilter_SetRegExp(@ptrCast(self.ptr), @ptrCast(text.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    pub fn RegExp(self: Konsole__RegExpFilter) QRegularExpression {
        return .{ .ptr = qtc.Konsole__RegExpFilter_RegExp(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    pub fn Process(self: Konsole__RegExpFilter) void {
        qtc.Konsole__RegExpFilter_Process(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnProcess(self: Konsole__RegExpFilter, callback: *const fn () callconv(.c) void) void {
        qtc.Konsole__RegExpFilter_OnProcess(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperProcess` instead
    ///
    pub const QBaseProcess = SuperProcess;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    pub fn SuperProcess(self: Konsole__RegExpFilter) void {
        qtc.Konsole__RegExpFilter_SuperProcess(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` startLine: i32 `
    ///
    /// ` startColumn: i32 `
    ///
    /// ` endLine: i32 `
    ///
    /// ` endColumn: i32 `
    ///
    pub fn NewHotSpot(self: Konsole__RegExpFilter, startLine: i32, startColumn: i32, endLine: i32, endColumn: i32) Konsole__RegExpFilter__HotSpot {
        return .{ .ptr = qtc.Konsole__RegExpFilter_NewHotSpot(@ptrCast(self.ptr), @bitCast(startLine), @bitCast(startColumn), @bitCast(endLine), @bitCast(endColumn)) };
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` callback: *const fn (self: Konsole__RegExpFilter, startLine: i32, startColumn: i32, endLine: i32, endColumn: i32) callconv(.c) Konsole__RegExpFilter__HotSpot `
    ///
    pub fn OnNewHotSpot(self: Konsole__RegExpFilter, callback: *const fn (Konsole__RegExpFilter, i32, i32, i32, i32) callconv(.c) Konsole__RegExpFilter__HotSpot) void {
        qtc.Konsole__RegExpFilter_OnNewHotSpot(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperNewHotSpot` instead
    ///
    pub const QBaseNewHotSpot = SuperNewHotSpot;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` startLine: i32 `
    ///
    /// ` startColumn: i32 `
    ///
    /// ` endLine: i32 `
    ///
    /// ` endColumn: i32 `
    ///
    pub fn SuperNewHotSpot(self: Konsole__RegExpFilter, startLine: i32, startColumn: i32, endLine: i32, endColumn: i32) Konsole__RegExpFilter__HotSpot {
        return .{ .ptr = qtc.Konsole__RegExpFilter_SuperNewHotSpot(@ptrCast(self.ptr), @bitCast(startLine), @bitCast(startColumn), @bitCast(endLine), @bitCast(endColumn)) };
    }

    /// Inherited from Konsole::Filter
    ///
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    pub fn Reset(self: Konsole__RegExpFilter) void {
        qtc.Konsole__Filter_Reset(@ptrCast(self.ptr));
    }

    /// Inherited from Konsole::Filter
    ///
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` line: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn HotSpotAt(self: Konsole__RegExpFilter, line: i32, column: i32) Konsole__Filter__HotSpot {
        return .{ .ptr = qtc.Konsole__Filter_HotSpotAt(@ptrCast(self.ptr), @bitCast(line), @bitCast(column)) };
    }

    /// Inherited from QObject
    ///
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole__regexpfilter.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: Konsole__RegExpFilter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole__regexpfilter.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: Konsole__RegExpFilter, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    pub fn IsWidgetType(self: Konsole__RegExpFilter) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    pub fn IsWindowType(self: Konsole__RegExpFilter) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    pub fn IsQuickItemType(self: Konsole__RegExpFilter) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    pub fn SignalsBlocked(self: Konsole__RegExpFilter) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: Konsole__RegExpFilter, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    pub fn Thread(self: Konsole__RegExpFilter) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: Konsole__RegExpFilter, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: Konsole__RegExpFilter, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: Konsole__RegExpFilter, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: Konsole__RegExpFilter, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: Konsole__RegExpFilter, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: Konsole__RegExpFilter, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("konsole__regexpfilter.Children: Memory allocation failed");
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
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: Konsole__RegExpFilter, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: Konsole__RegExpFilter, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: Konsole__RegExpFilter, obj: anytype) void {
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
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: Konsole__RegExpFilter, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: Konsole__RegExpFilter `
    ///
    pub fn Disconnect3(self: Konsole__RegExpFilter) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: Konsole__RegExpFilter, receiver: anytype) bool {
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
    /// ` self: Konsole__RegExpFilter `
    ///
    pub fn DumpObjectTree(self: Konsole__RegExpFilter) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    pub fn DumpObjectInfo(self: Konsole__RegExpFilter) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: Konsole__RegExpFilter, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: Konsole__RegExpFilter, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: Konsole__RegExpFilter, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("konsole__regexpfilter.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("konsole__regexpfilter.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: Konsole__RegExpFilter `
    ///
    pub fn BindingStorage(self: Konsole__RegExpFilter) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    pub fn BindingStorage2(self: Konsole__RegExpFilter) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    pub fn Destroyed(self: Konsole__RegExpFilter) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` callback: *const fn (self: Konsole__RegExpFilter) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: Konsole__RegExpFilter, callback: *const fn (Konsole__RegExpFilter) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    pub fn Parent(self: Konsole__RegExpFilter) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: Konsole__RegExpFilter, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    pub fn DeleteLater(self: Konsole__RegExpFilter) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole__regexpfilter.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole__regexpfilter.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: Konsole__RegExpFilter, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: Konsole__RegExpFilter, time: i64, timerType: i32) i32 {
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
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: Konsole__RegExpFilter, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: Konsole__RegExpFilter, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: Konsole__RegExpFilter, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: Konsole__RegExpFilter, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: Konsole__RegExpFilter, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: Konsole__RegExpFilter, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` callback: *const fn (self: Konsole__RegExpFilter, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: Konsole__RegExpFilter, callback: *const fn (Konsole__RegExpFilter, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    pub fn MetaObject(self: Konsole__RegExpFilter) QMetaObject {
        return .{ .ptr = qtc.Konsole__RegExpFilter_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    pub fn SuperMetaObject(self: Konsole__RegExpFilter) QMetaObject {
        return .{ .ptr = qtc.Konsole__RegExpFilter_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__RegExpFilter`
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: Konsole__RegExpFilter, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.Konsole__RegExpFilter_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#qt_metacast)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: Konsole__RegExpFilter, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Konsole__RegExpFilter_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#qt_metacast)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: Konsole__RegExpFilter, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Konsole__RegExpFilter_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#qt_metacast)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__RegExpFilter`
    ///
    /// ` callback: *const fn (self: Konsole__RegExpFilter, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: Konsole__RegExpFilter, callback: *const fn (Konsole__RegExpFilter, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.Konsole__RegExpFilter_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#qt_metacall)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: Konsole__RegExpFilter, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Konsole__RegExpFilter_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#qt_metacall)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: Konsole__RegExpFilter, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Konsole__RegExpFilter_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#qt_metacall)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__RegExpFilter`
    ///
    /// ` callback: *const fn (self: Konsole__RegExpFilter, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: Konsole__RegExpFilter, callback: *const fn (Konsole__RegExpFilter, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.Konsole__RegExpFilter_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: Konsole__RegExpFilter, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.Konsole__RegExpFilter_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: Konsole__RegExpFilter, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.Konsole__RegExpFilter_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__RegExpFilter`
    ///
    /// ` callback: *const fn (self: Konsole__RegExpFilter, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: Konsole__RegExpFilter, callback: *const fn (Konsole__RegExpFilter, QEvent) callconv(.c) bool) void {
        qtc.Konsole__RegExpFilter_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: Konsole__RegExpFilter, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.Konsole__RegExpFilter_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: Konsole__RegExpFilter, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.Konsole__RegExpFilter_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__RegExpFilter`
    ///
    /// ` callback: *const fn (self: Konsole__RegExpFilter, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: Konsole__RegExpFilter, callback: *const fn (Konsole__RegExpFilter, QObject, QEvent) callconv(.c) bool) void {
        qtc.Konsole__RegExpFilter_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: Konsole__RegExpFilter, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.Konsole__RegExpFilter_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: Konsole__RegExpFilter, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.Konsole__RegExpFilter_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__RegExpFilter`
    ///
    /// ` callback: *const fn (self: Konsole__RegExpFilter, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: Konsole__RegExpFilter, callback: *const fn (Konsole__RegExpFilter, QTimerEvent) callconv(.c) void) void {
        qtc.Konsole__RegExpFilter_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: Konsole__RegExpFilter, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.Konsole__RegExpFilter_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: Konsole__RegExpFilter, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.Konsole__RegExpFilter_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__RegExpFilter`
    ///
    /// ` callback: *const fn (self: Konsole__RegExpFilter, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: Konsole__RegExpFilter, callback: *const fn (Konsole__RegExpFilter, QChildEvent) callconv(.c) void) void {
        qtc.Konsole__RegExpFilter_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: Konsole__RegExpFilter, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.Konsole__RegExpFilter_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: Konsole__RegExpFilter, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.Konsole__RegExpFilter_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__RegExpFilter`
    ///
    /// ` callback: *const fn (self: Konsole__RegExpFilter, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: Konsole__RegExpFilter, callback: *const fn (Konsole__RegExpFilter, QEvent) callconv(.c) void) void {
        qtc.Konsole__RegExpFilter_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: Konsole__RegExpFilter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Konsole__RegExpFilter_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: Konsole__RegExpFilter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Konsole__RegExpFilter_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__RegExpFilter`
    ///
    /// ` callback: *const fn (self: Konsole__RegExpFilter, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: Konsole__RegExpFilter, callback: *const fn (Konsole__RegExpFilter, QMetaMethod) callconv(.c) void) void {
        qtc.Konsole__RegExpFilter_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: Konsole__RegExpFilter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Konsole__RegExpFilter_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: Konsole__RegExpFilter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Konsole__RegExpFilter_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__RegExpFilter`
    ///
    /// ` callback: *const fn (self: Konsole__RegExpFilter, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: Konsole__RegExpFilter, callback: *const fn (Konsole__RegExpFilter, QMetaMethod) callconv(.c) void) void {
        qtc.Konsole__RegExpFilter_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from Konsole::Filter
    ///
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` param1: Konsole__Filter__HotSpot `
    ///
    pub fn AddHotSpot(self: Konsole__RegExpFilter, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_Konsole__Filter__HotSpot;
        qtc.Konsole__RegExpFilter_AddHotSpot(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperAddHotSpot` instead
    ///
    pub const QBaseAddHotSpot = SuperAddHotSpot;

    /// Inherited from Konsole::Filter
    ///
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` param1: Konsole__Filter__HotSpot `
    ///
    pub fn SuperAddHotSpot(self: Konsole__RegExpFilter, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_Konsole__Filter__HotSpot;
        qtc.Konsole__RegExpFilter_SuperAddHotSpot(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from Konsole::Filter
    ///
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__RegExpFilter`
    ///
    /// ` callback: *const fn (self: Konsole__RegExpFilter, param1: Konsole__Filter__HotSpot) callconv(.c) void `
    ///
    pub fn OnAddHotSpot(self: Konsole__RegExpFilter, callback: *const fn (Konsole__RegExpFilter, Konsole__Filter__HotSpot) callconv(.c) void) void {
        qtc.Konsole__RegExpFilter_OnAddHotSpot(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from Konsole::Filter
    ///
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Buffer(self: Konsole__RegExpFilter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Konsole__RegExpFilter_Buffer(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole__regexpfilter.Buffer: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperBuffer` instead
    ///
    pub const QBaseBuffer = SuperBuffer;

    /// Inherited from Konsole::Filter
    ///
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperBuffer(self: Konsole__RegExpFilter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Konsole__RegExpFilter_SuperBuffer(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole__regexpfilter.Buffer: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Konsole::Filter
    ///
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__RegExpFilter`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnBuffer(self: Konsole__RegExpFilter, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.Konsole__RegExpFilter_OnBuffer(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from Konsole::Filter
    ///
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` position: i32 `
    ///
    /// ` startLine: *i32 `
    ///
    /// ` startColumn: *i32 `
    ///
    pub fn GetLineColumn(self: Konsole__RegExpFilter, position: i32, startLine: *i32, startColumn: *i32) void {
        qtc.Konsole__RegExpFilter_GetLineColumn(@ptrCast(self.ptr), @bitCast(position), @ptrCast(startLine), @ptrCast(startColumn));
    }

    /// ### DEPRECATED: Use `SuperGetLineColumn` instead
    ///
    pub const QBaseGetLineColumn = SuperGetLineColumn;

    /// Inherited from Konsole::Filter
    ///
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` position: i32 `
    ///
    /// ` startLine: *i32 `
    ///
    /// ` startColumn: *i32 `
    ///
    pub fn SuperGetLineColumn(self: Konsole__RegExpFilter, position: i32, startLine: *i32, startColumn: *i32) void {
        qtc.Konsole__RegExpFilter_SuperGetLineColumn(@ptrCast(self.ptr), @bitCast(position), @ptrCast(startLine), @ptrCast(startColumn));
    }

    /// Inherited from Konsole::Filter
    ///
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__RegExpFilter`
    ///
    /// ` callback: *const fn (self: Konsole__RegExpFilter, position: i32, startLine: *i32, startColumn: *i32) callconv(.c) void `
    ///
    pub fn OnGetLineColumn(self: Konsole__RegExpFilter, callback: *const fn (Konsole__RegExpFilter, i32, *i32, *i32) callconv(.c) void) void {
        qtc.Konsole__RegExpFilter_OnGetLineColumn(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    pub fn Sender(self: Konsole__RegExpFilter) QObject {
        return .{ .ptr = qtc.Konsole__RegExpFilter_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: Konsole__RegExpFilter `
    ///
    pub fn SuperSender(self: Konsole__RegExpFilter) QObject {
        return .{ .ptr = qtc.Konsole__RegExpFilter_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__RegExpFilter`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: Konsole__RegExpFilter, callback: *const fn () callconv(.c) QObject) void {
        qtc.Konsole__RegExpFilter_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    pub fn SenderSignalIndex(self: Konsole__RegExpFilter) i32 {
        return qtc.Konsole__RegExpFilter_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: Konsole__RegExpFilter `
    ///
    pub fn SuperSenderSignalIndex(self: Konsole__RegExpFilter) i32 {
        return qtc.Konsole__RegExpFilter_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__RegExpFilter`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: Konsole__RegExpFilter, callback: *const fn () callconv(.c) i32) void {
        qtc.Konsole__RegExpFilter_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: Konsole__RegExpFilter, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Konsole__RegExpFilter_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: Konsole__RegExpFilter, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Konsole__RegExpFilter_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__RegExpFilter`
    ///
    /// ` callback: *const fn (self: Konsole__RegExpFilter, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: Konsole__RegExpFilter, callback: *const fn (Konsole__RegExpFilter, [*:0]const u8) callconv(.c) i32) void {
        qtc.Konsole__RegExpFilter_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: Konsole__RegExpFilter, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.Konsole__RegExpFilter_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: Konsole__RegExpFilter, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.Konsole__RegExpFilter_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__RegExpFilter`
    ///
    /// ` callback: *const fn (self: Konsole__RegExpFilter, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: Konsole__RegExpFilter, callback: *const fn (Konsole__RegExpFilter, QMetaMethod) callconv(.c) bool) void {
        qtc.Konsole__RegExpFilter_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    /// ` callback: *const fn (self: Konsole__RegExpFilter, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: Konsole__RegExpFilter, callback: *const fn (Konsole__RegExpFilter, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Konsole__RegExpFilter `
    ///
    pub fn Delete(self: Konsole__RegExpFilter) void {
        qtc.Konsole__RegExpFilter_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
pub const Konsole__UrlFilter = extern struct {
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Konsole__UrlFilter,

    pub const _is_Konsole__UrlFilter = {};
    pub const _is_Konsole__RegExpFilter = {};
    pub const _is_Konsole__Filter = {};
    pub const _is_QObject = {};

    /// New constructs a new Konsole::UrlFilter object.
    ///
    pub fn New() Konsole__UrlFilter {
        return .{ .ptr = qtc.Konsole__UrlFilter_new() };
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    pub fn MetaObject(self: Konsole__UrlFilter) QMetaObject {
        return .{ .ptr = qtc.Konsole__UrlFilter_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: Konsole__UrlFilter, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.Konsole__UrlFilter_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    pub fn SuperMetaObject(self: Konsole__UrlFilter) QMetaObject {
        return .{ .ptr = qtc.Konsole__UrlFilter_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: Konsole__UrlFilter, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Konsole__UrlFilter_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` callback: *const fn (self: Konsole__UrlFilter, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: Konsole__UrlFilter, callback: *const fn (Konsole__UrlFilter, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.Konsole__UrlFilter_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: Konsole__UrlFilter, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Konsole__UrlFilter_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: Konsole__UrlFilter, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Konsole__UrlFilter_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` callback: *const fn (self: Konsole__UrlFilter, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: Konsole__UrlFilter, callback: *const fn (Konsole__UrlFilter, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.Konsole__UrlFilter_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: Konsole__UrlFilter, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Konsole__UrlFilter_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole__urlfilter.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` param1: i32 `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: i32 `
    ///
    /// ` param4: i32 `
    ///
    pub fn NewHotSpot(self: Konsole__UrlFilter, param1: i32, param2: i32, param3: i32, param4: i32) Konsole__RegExpFilter__HotSpot {
        return .{ .ptr = qtc.Konsole__UrlFilter_NewHotSpot(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @bitCast(param3), @bitCast(param4)) };
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` callback: *const fn (self: Konsole__UrlFilter, param1: i32, param2: i32, param3: i32, param4: i32) callconv(.c) Konsole__RegExpFilter__HotSpot `
    ///
    pub fn OnNewHotSpot(self: Konsole__UrlFilter, callback: *const fn (Konsole__UrlFilter, i32, i32, i32, i32) callconv(.c) Konsole__RegExpFilter__HotSpot) void {
        qtc.Konsole__UrlFilter_OnNewHotSpot(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperNewHotSpot` instead
    ///
    pub const QBaseNewHotSpot = SuperNewHotSpot;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` param1: i32 `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: i32 `
    ///
    /// ` param4: i32 `
    ///
    pub fn SuperNewHotSpot(self: Konsole__UrlFilter, param1: i32, param2: i32, param3: i32, param4: i32) Konsole__RegExpFilter__HotSpot {
        return .{ .ptr = qtc.Konsole__UrlFilter_SuperNewHotSpot(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @bitCast(param3), @bitCast(param4)) };
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` url: QUrl `
    ///
    /// ` fromContextMenu: bool `
    ///
    pub fn Activated(self: Konsole__UrlFilter, url: anytype, fromContextMenu: bool) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.Konsole__UrlFilter_Activated(@ptrCast(self.ptr), @ptrCast(url.ptr), fromContextMenu);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` callback: *const fn (self: Konsole__UrlFilter, url: QUrl, fromContextMenu: bool) callconv(.c) void `
    ///
    pub fn OnActivated(self: Konsole__UrlFilter, callback: *const fn (Konsole__UrlFilter, QUrl, bool) callconv(.c) void) void {
        qtc.Konsole__UrlFilter_Connect_Activated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole__urlfilter.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole__urlfilter.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Konsole::RegExpFilter
    ///
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` text: QRegularExpression `
    ///
    pub fn SetRegExp(self: Konsole__UrlFilter, text: anytype) void {
        comptime _ = @TypeOf(text)._is_QRegularExpression;
        qtc.Konsole__RegExpFilter_SetRegExp(@ptrCast(self.ptr), @ptrCast(text.ptr));
    }

    /// Inherited from Konsole::RegExpFilter
    ///
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    pub fn RegExp(self: Konsole__UrlFilter) QRegularExpression {
        return .{ .ptr = qtc.Konsole__RegExpFilter_RegExp(@ptrCast(self.ptr)) };
    }

    /// Inherited from Konsole::Filter
    ///
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    pub fn Reset(self: Konsole__UrlFilter) void {
        qtc.Konsole__Filter_Reset(@ptrCast(self.ptr));
    }

    /// Inherited from Konsole::Filter
    ///
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` line: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn HotSpotAt(self: Konsole__UrlFilter, line: i32, column: i32) Konsole__Filter__HotSpot {
        return .{ .ptr = qtc.Konsole__Filter_HotSpotAt(@ptrCast(self.ptr), @bitCast(line), @bitCast(column)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: Konsole__UrlFilter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole__urlfilter.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: Konsole__UrlFilter, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    pub fn IsWidgetType(self: Konsole__UrlFilter) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    pub fn IsWindowType(self: Konsole__UrlFilter) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    pub fn IsQuickItemType(self: Konsole__UrlFilter) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    pub fn SignalsBlocked(self: Konsole__UrlFilter) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: Konsole__UrlFilter, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    pub fn Thread(self: Konsole__UrlFilter) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: Konsole__UrlFilter, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: Konsole__UrlFilter, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: Konsole__UrlFilter, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: Konsole__UrlFilter, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: Konsole__UrlFilter, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: Konsole__UrlFilter, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("konsole__urlfilter.Children: Memory allocation failed");
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
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: Konsole__UrlFilter, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: Konsole__UrlFilter, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: Konsole__UrlFilter, obj: anytype) void {
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
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: Konsole__UrlFilter, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: Konsole__UrlFilter `
    ///
    pub fn Disconnect3(self: Konsole__UrlFilter) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: Konsole__UrlFilter, receiver: anytype) bool {
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
    /// ` self: Konsole__UrlFilter `
    ///
    pub fn DumpObjectTree(self: Konsole__UrlFilter) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    pub fn DumpObjectInfo(self: Konsole__UrlFilter) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: Konsole__UrlFilter, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: Konsole__UrlFilter, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: Konsole__UrlFilter, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("konsole__urlfilter.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("konsole__urlfilter.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: Konsole__UrlFilter `
    ///
    pub fn BindingStorage(self: Konsole__UrlFilter) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    pub fn BindingStorage2(self: Konsole__UrlFilter) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    pub fn Destroyed(self: Konsole__UrlFilter) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` callback: *const fn (self: Konsole__UrlFilter) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: Konsole__UrlFilter, callback: *const fn (Konsole__UrlFilter) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    pub fn Parent(self: Konsole__UrlFilter) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: Konsole__UrlFilter, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    pub fn DeleteLater(self: Konsole__UrlFilter) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: Konsole__UrlFilter, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: Konsole__UrlFilter, time: i64, timerType: i32) i32 {
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
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: Konsole__UrlFilter, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: Konsole__UrlFilter, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: Konsole__UrlFilter, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: Konsole__UrlFilter, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: Konsole__UrlFilter, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: Konsole__UrlFilter, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` callback: *const fn (self: Konsole__UrlFilter, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: Konsole__UrlFilter, callback: *const fn (Konsole__UrlFilter, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from Konsole::RegExpFilter
    ///
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    pub fn Process(self: Konsole__UrlFilter) void {
        qtc.Konsole__UrlFilter_Process(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperProcess` instead
    ///
    pub const QBaseProcess = SuperProcess;

    /// Inherited from Konsole::RegExpFilter
    ///
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    pub fn SuperProcess(self: Konsole__UrlFilter) void {
        qtc.Konsole__UrlFilter_SuperProcess(@ptrCast(self.ptr));
    }

    /// Inherited from Konsole::RegExpFilter
    ///
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__UrlFilter`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnProcess(self: Konsole__UrlFilter, callback: *const fn () callconv(.c) void) void {
        qtc.Konsole__UrlFilter_OnProcess(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: Konsole__UrlFilter, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.Konsole__UrlFilter_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: Konsole__UrlFilter, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.Konsole__UrlFilter_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__UrlFilter`
    ///
    /// ` callback: *const fn (self: Konsole__UrlFilter, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: Konsole__UrlFilter, callback: *const fn (Konsole__UrlFilter, QEvent) callconv(.c) bool) void {
        qtc.Konsole__UrlFilter_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: Konsole__UrlFilter, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.Konsole__UrlFilter_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: Konsole__UrlFilter, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.Konsole__UrlFilter_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__UrlFilter`
    ///
    /// ` callback: *const fn (self: Konsole__UrlFilter, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: Konsole__UrlFilter, callback: *const fn (Konsole__UrlFilter, QObject, QEvent) callconv(.c) bool) void {
        qtc.Konsole__UrlFilter_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: Konsole__UrlFilter, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.Konsole__UrlFilter_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: Konsole__UrlFilter, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.Konsole__UrlFilter_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__UrlFilter`
    ///
    /// ` callback: *const fn (self: Konsole__UrlFilter, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: Konsole__UrlFilter, callback: *const fn (Konsole__UrlFilter, QTimerEvent) callconv(.c) void) void {
        qtc.Konsole__UrlFilter_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: Konsole__UrlFilter, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.Konsole__UrlFilter_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: Konsole__UrlFilter, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.Konsole__UrlFilter_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__UrlFilter`
    ///
    /// ` callback: *const fn (self: Konsole__UrlFilter, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: Konsole__UrlFilter, callback: *const fn (Konsole__UrlFilter, QChildEvent) callconv(.c) void) void {
        qtc.Konsole__UrlFilter_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: Konsole__UrlFilter, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.Konsole__UrlFilter_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: Konsole__UrlFilter, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.Konsole__UrlFilter_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__UrlFilter`
    ///
    /// ` callback: *const fn (self: Konsole__UrlFilter, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: Konsole__UrlFilter, callback: *const fn (Konsole__UrlFilter, QEvent) callconv(.c) void) void {
        qtc.Konsole__UrlFilter_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: Konsole__UrlFilter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Konsole__UrlFilter_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: Konsole__UrlFilter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Konsole__UrlFilter_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__UrlFilter`
    ///
    /// ` callback: *const fn (self: Konsole__UrlFilter, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: Konsole__UrlFilter, callback: *const fn (Konsole__UrlFilter, QMetaMethod) callconv(.c) void) void {
        qtc.Konsole__UrlFilter_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: Konsole__UrlFilter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Konsole__UrlFilter_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: Konsole__UrlFilter, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Konsole__UrlFilter_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__UrlFilter`
    ///
    /// ` callback: *const fn (self: Konsole__UrlFilter, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: Konsole__UrlFilter, callback: *const fn (Konsole__UrlFilter, QMetaMethod) callconv(.c) void) void {
        qtc.Konsole__UrlFilter_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from Konsole::Filter
    ///
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` param1: Konsole__Filter__HotSpot `
    ///
    pub fn AddHotSpot(self: Konsole__UrlFilter, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_Konsole__Filter__HotSpot;
        qtc.Konsole__UrlFilter_AddHotSpot(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperAddHotSpot` instead
    ///
    pub const QBaseAddHotSpot = SuperAddHotSpot;

    /// Inherited from Konsole::Filter
    ///
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` param1: Konsole__Filter__HotSpot `
    ///
    pub fn SuperAddHotSpot(self: Konsole__UrlFilter, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_Konsole__Filter__HotSpot;
        qtc.Konsole__UrlFilter_SuperAddHotSpot(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from Konsole::Filter
    ///
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__UrlFilter`
    ///
    /// ` callback: *const fn (self: Konsole__UrlFilter, param1: Konsole__Filter__HotSpot) callconv(.c) void `
    ///
    pub fn OnAddHotSpot(self: Konsole__UrlFilter, callback: *const fn (Konsole__UrlFilter, Konsole__Filter__HotSpot) callconv(.c) void) void {
        qtc.Konsole__UrlFilter_OnAddHotSpot(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from Konsole::Filter
    ///
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Buffer(self: Konsole__UrlFilter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Konsole__UrlFilter_Buffer(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole__urlfilter.Buffer: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperBuffer` instead
    ///
    pub const QBaseBuffer = SuperBuffer;

    /// Inherited from Konsole::Filter
    ///
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperBuffer(self: Konsole__UrlFilter, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Konsole__UrlFilter_SuperBuffer(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole__urlfilter.Buffer: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Konsole::Filter
    ///
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__UrlFilter`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnBuffer(self: Konsole__UrlFilter, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.Konsole__UrlFilter_OnBuffer(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from Konsole::Filter
    ///
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` position: i32 `
    ///
    /// ` startLine: *i32 `
    ///
    /// ` startColumn: *i32 `
    ///
    pub fn GetLineColumn(self: Konsole__UrlFilter, position: i32, startLine: *i32, startColumn: *i32) void {
        qtc.Konsole__UrlFilter_GetLineColumn(@ptrCast(self.ptr), @bitCast(position), @ptrCast(startLine), @ptrCast(startColumn));
    }

    /// ### DEPRECATED: Use `SuperGetLineColumn` instead
    ///
    pub const QBaseGetLineColumn = SuperGetLineColumn;

    /// Inherited from Konsole::Filter
    ///
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` position: i32 `
    ///
    /// ` startLine: *i32 `
    ///
    /// ` startColumn: *i32 `
    ///
    pub fn SuperGetLineColumn(self: Konsole__UrlFilter, position: i32, startLine: *i32, startColumn: *i32) void {
        qtc.Konsole__UrlFilter_SuperGetLineColumn(@ptrCast(self.ptr), @bitCast(position), @ptrCast(startLine), @ptrCast(startColumn));
    }

    /// Inherited from Konsole::Filter
    ///
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__UrlFilter`
    ///
    /// ` callback: *const fn (self: Konsole__UrlFilter, position: i32, startLine: *i32, startColumn: *i32) callconv(.c) void `
    ///
    pub fn OnGetLineColumn(self: Konsole__UrlFilter, callback: *const fn (Konsole__UrlFilter, i32, *i32, *i32) callconv(.c) void) void {
        qtc.Konsole__UrlFilter_OnGetLineColumn(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    pub fn Sender(self: Konsole__UrlFilter) QObject {
        return .{ .ptr = qtc.Konsole__UrlFilter_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: Konsole__UrlFilter `
    ///
    pub fn SuperSender(self: Konsole__UrlFilter) QObject {
        return .{ .ptr = qtc.Konsole__UrlFilter_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__UrlFilter`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: Konsole__UrlFilter, callback: *const fn () callconv(.c) QObject) void {
        qtc.Konsole__UrlFilter_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    pub fn SenderSignalIndex(self: Konsole__UrlFilter) i32 {
        return qtc.Konsole__UrlFilter_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: Konsole__UrlFilter `
    ///
    pub fn SuperSenderSignalIndex(self: Konsole__UrlFilter) i32 {
        return qtc.Konsole__UrlFilter_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__UrlFilter`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: Konsole__UrlFilter, callback: *const fn () callconv(.c) i32) void {
        qtc.Konsole__UrlFilter_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: Konsole__UrlFilter, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Konsole__UrlFilter_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: Konsole__UrlFilter, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Konsole__UrlFilter_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__UrlFilter`
    ///
    /// ` callback: *const fn (self: Konsole__UrlFilter, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: Konsole__UrlFilter, callback: *const fn (Konsole__UrlFilter, [*:0]const u8) callconv(.c) i32) void {
        qtc.Konsole__UrlFilter_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: Konsole__UrlFilter, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.Konsole__UrlFilter_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: Konsole__UrlFilter, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.Konsole__UrlFilter_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__UrlFilter`
    ///
    /// ` callback: *const fn (self: Konsole__UrlFilter, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: Konsole__UrlFilter, callback: *const fn (Konsole__UrlFilter, QMetaMethod) callconv(.c) bool) void {
        qtc.Konsole__UrlFilter_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    /// ` callback: *const fn (self: Konsole__UrlFilter, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: Konsole__UrlFilter, callback: *const fn (Konsole__UrlFilter, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Konsole__UrlFilter `
    ///
    pub fn Delete(self: Konsole__UrlFilter) void {
        qtc.Konsole__UrlFilter_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
pub const Konsole__FilterObject = extern struct {
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Konsole__FilterObject,

    pub const _is_Konsole__FilterObject = {};
    pub const _is_QObject = {};

    /// New constructs a new Konsole::FilterObject object.
    ///
    /// ## Parameter(s):
    ///
    /// ` filter: Konsole__Filter__HotSpot `
    ///
    pub fn New(filter: anytype) Konsole__FilterObject {
        comptime _ = @TypeOf(filter)._is_Konsole__Filter__HotSpot;
        return .{ .ptr = qtc.Konsole__FilterObject_new(@ptrCast(filter.ptr)) };
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__FilterObject `
    ///
    pub fn MetaObject(self: Konsole__FilterObject) QMetaObject {
        return .{ .ptr = qtc.Konsole__FilterObject_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__FilterObject `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: Konsole__FilterObject, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.Konsole__FilterObject_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__FilterObject `
    ///
    pub fn SuperMetaObject(self: Konsole__FilterObject) QMetaObject {
        return .{ .ptr = qtc.Konsole__FilterObject_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: Konsole__FilterObject `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: Konsole__FilterObject, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Konsole__FilterObject_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__FilterObject `
    ///
    /// ` callback: *const fn (self: Konsole__FilterObject, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: Konsole__FilterObject, callback: *const fn (Konsole__FilterObject, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.Konsole__FilterObject_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__FilterObject `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: Konsole__FilterObject, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Konsole__FilterObject_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: Konsole__FilterObject `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: Konsole__FilterObject, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Konsole__FilterObject_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__FilterObject `
    ///
    /// ` callback: *const fn (self: Konsole__FilterObject, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: Konsole__FilterObject, callback: *const fn (Konsole__FilterObject, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.Konsole__FilterObject_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__FilterObject `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: Konsole__FilterObject, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Konsole__FilterObject_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole__filterobject.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__FilterObject `
    ///
    /// ` url: QUrl `
    ///
    /// ` fromContextMenu: bool `
    ///
    pub fn EmitActivated(self: Konsole__FilterObject, url: anytype, fromContextMenu: bool) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.Konsole__FilterObject_EmitActivated(@ptrCast(self.ptr), @ptrCast(url.ptr), fromContextMenu);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__FilterObject `
    ///
    pub fn Activate(self: Konsole__FilterObject) void {
        qtc.Konsole__FilterObject_Activate(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__FilterObject `
    ///
    /// ` url: QUrl `
    ///
    /// ` fromContextMenu: bool `
    ///
    pub fn Activated(self: Konsole__FilterObject, url: anytype, fromContextMenu: bool) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.Konsole__FilterObject_Activated(@ptrCast(self.ptr), @ptrCast(url.ptr), fromContextMenu);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__FilterObject `
    ///
    /// ` callback: *const fn (self: Konsole__FilterObject, url: QUrl, fromContextMenu: bool) callconv(.c) void `
    ///
    pub fn OnActivated(self: Konsole__FilterObject, callback: *const fn (Konsole__FilterObject, QUrl, bool) callconv(.c) void) void {
        qtc.Konsole__FilterObject_Connect_Activated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole__filterobject.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole__filterobject.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__FilterObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: Konsole__FilterObject, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("konsole__filterobject.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__FilterObject `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: Konsole__FilterObject, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__FilterObject `
    ///
    pub fn IsWidgetType(self: Konsole__FilterObject) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__FilterObject `
    ///
    pub fn IsWindowType(self: Konsole__FilterObject) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__FilterObject `
    ///
    pub fn IsQuickItemType(self: Konsole__FilterObject) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__FilterObject `
    ///
    pub fn SignalsBlocked(self: Konsole__FilterObject) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__FilterObject `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: Konsole__FilterObject, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__FilterObject `
    ///
    pub fn Thread(self: Konsole__FilterObject) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__FilterObject `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: Konsole__FilterObject, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__FilterObject `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: Konsole__FilterObject, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__FilterObject `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: Konsole__FilterObject, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__FilterObject `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: Konsole__FilterObject, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__FilterObject `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: Konsole__FilterObject, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__FilterObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: Konsole__FilterObject, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("konsole__filterobject.Children: Memory allocation failed");
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
    /// ` self: Konsole__FilterObject `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: Konsole__FilterObject, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__FilterObject `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: Konsole__FilterObject, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__FilterObject `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: Konsole__FilterObject, obj: anytype) void {
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
    /// ` self: Konsole__FilterObject `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: Konsole__FilterObject, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: Konsole__FilterObject `
    ///
    pub fn Disconnect3(self: Konsole__FilterObject) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__FilterObject `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: Konsole__FilterObject, receiver: anytype) bool {
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
    /// ` self: Konsole__FilterObject `
    ///
    pub fn DumpObjectTree(self: Konsole__FilterObject) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__FilterObject `
    ///
    pub fn DumpObjectInfo(self: Konsole__FilterObject) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__FilterObject `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: Konsole__FilterObject, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: Konsole__FilterObject `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: Konsole__FilterObject, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__FilterObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: Konsole__FilterObject, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("konsole__filterobject.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("konsole__filterobject.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: Konsole__FilterObject `
    ///
    pub fn BindingStorage(self: Konsole__FilterObject) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__FilterObject `
    ///
    pub fn BindingStorage2(self: Konsole__FilterObject) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__FilterObject `
    ///
    pub fn Destroyed(self: Konsole__FilterObject) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__FilterObject `
    ///
    /// ` callback: *const fn (self: Konsole__FilterObject) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: Konsole__FilterObject, callback: *const fn (Konsole__FilterObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__FilterObject `
    ///
    pub fn Parent(self: Konsole__FilterObject) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__FilterObject `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: Konsole__FilterObject, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__FilterObject `
    ///
    pub fn DeleteLater(self: Konsole__FilterObject) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__FilterObject `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: Konsole__FilterObject, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__FilterObject `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: Konsole__FilterObject, time: i64, timerType: i32) i32 {
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
    /// ` self: Konsole__FilterObject `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: Konsole__FilterObject, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: Konsole__FilterObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: Konsole__FilterObject, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__FilterObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: Konsole__FilterObject, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: Konsole__FilterObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: Konsole__FilterObject, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: Konsole__FilterObject `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: Konsole__FilterObject, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: Konsole__FilterObject `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: Konsole__FilterObject, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__FilterObject `
    ///
    /// ` callback: *const fn (self: Konsole__FilterObject, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: Konsole__FilterObject, callback: *const fn (Konsole__FilterObject, QObject) callconv(.c) void) void {
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
    /// ` self: Konsole__FilterObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: Konsole__FilterObject, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.Konsole__FilterObject_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: Konsole__FilterObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: Konsole__FilterObject, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.Konsole__FilterObject_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__FilterObject`
    ///
    /// ` callback: *const fn (self: Konsole__FilterObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: Konsole__FilterObject, callback: *const fn (Konsole__FilterObject, QEvent) callconv(.c) bool) void {
        qtc.Konsole__FilterObject_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__FilterObject `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: Konsole__FilterObject, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.Konsole__FilterObject_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: Konsole__FilterObject `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: Konsole__FilterObject, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.Konsole__FilterObject_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__FilterObject`
    ///
    /// ` callback: *const fn (self: Konsole__FilterObject, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: Konsole__FilterObject, callback: *const fn (Konsole__FilterObject, QObject, QEvent) callconv(.c) bool) void {
        qtc.Konsole__FilterObject_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__FilterObject `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: Konsole__FilterObject, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.Konsole__FilterObject_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: Konsole__FilterObject `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: Konsole__FilterObject, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.Konsole__FilterObject_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__FilterObject`
    ///
    /// ` callback: *const fn (self: Konsole__FilterObject, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: Konsole__FilterObject, callback: *const fn (Konsole__FilterObject, QTimerEvent) callconv(.c) void) void {
        qtc.Konsole__FilterObject_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__FilterObject `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: Konsole__FilterObject, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.Konsole__FilterObject_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: Konsole__FilterObject `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: Konsole__FilterObject, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.Konsole__FilterObject_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__FilterObject`
    ///
    /// ` callback: *const fn (self: Konsole__FilterObject, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: Konsole__FilterObject, callback: *const fn (Konsole__FilterObject, QChildEvent) callconv(.c) void) void {
        qtc.Konsole__FilterObject_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__FilterObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: Konsole__FilterObject, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.Konsole__FilterObject_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: Konsole__FilterObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: Konsole__FilterObject, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.Konsole__FilterObject_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__FilterObject`
    ///
    /// ` callback: *const fn (self: Konsole__FilterObject, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: Konsole__FilterObject, callback: *const fn (Konsole__FilterObject, QEvent) callconv(.c) void) void {
        qtc.Konsole__FilterObject_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__FilterObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: Konsole__FilterObject, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Konsole__FilterObject_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Konsole__FilterObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: Konsole__FilterObject, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Konsole__FilterObject_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__FilterObject`
    ///
    /// ` callback: *const fn (self: Konsole__FilterObject, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: Konsole__FilterObject, callback: *const fn (Konsole__FilterObject, QMetaMethod) callconv(.c) void) void {
        qtc.Konsole__FilterObject_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__FilterObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: Konsole__FilterObject, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Konsole__FilterObject_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Konsole__FilterObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: Konsole__FilterObject, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Konsole__FilterObject_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__FilterObject`
    ///
    /// ` callback: *const fn (self: Konsole__FilterObject, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: Konsole__FilterObject, callback: *const fn (Konsole__FilterObject, QMetaMethod) callconv(.c) void) void {
        qtc.Konsole__FilterObject_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__FilterObject `
    ///
    pub fn Sender(self: Konsole__FilterObject) QObject {
        return .{ .ptr = qtc.Konsole__FilterObject_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: Konsole__FilterObject `
    ///
    pub fn SuperSender(self: Konsole__FilterObject) QObject {
        return .{ .ptr = qtc.Konsole__FilterObject_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__FilterObject`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: Konsole__FilterObject, callback: *const fn () callconv(.c) QObject) void {
        qtc.Konsole__FilterObject_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__FilterObject `
    ///
    pub fn SenderSignalIndex(self: Konsole__FilterObject) i32 {
        return qtc.Konsole__FilterObject_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: Konsole__FilterObject `
    ///
    pub fn SuperSenderSignalIndex(self: Konsole__FilterObject) i32 {
        return qtc.Konsole__FilterObject_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__FilterObject`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: Konsole__FilterObject, callback: *const fn () callconv(.c) i32) void {
        qtc.Konsole__FilterObject_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__FilterObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: Konsole__FilterObject, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Konsole__FilterObject_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: Konsole__FilterObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: Konsole__FilterObject, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Konsole__FilterObject_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__FilterObject`
    ///
    /// ` callback: *const fn (self: Konsole__FilterObject, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: Konsole__FilterObject, callback: *const fn (Konsole__FilterObject, [*:0]const u8) callconv(.c) i32) void {
        qtc.Konsole__FilterObject_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__FilterObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: Konsole__FilterObject, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.Konsole__FilterObject_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Konsole__FilterObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: Konsole__FilterObject, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.Konsole__FilterObject_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__FilterObject`
    ///
    /// ` callback: *const fn (self: Konsole__FilterObject, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: Konsole__FilterObject, callback: *const fn (Konsole__FilterObject, QMetaMethod) callconv(.c) bool) void {
        qtc.Konsole__FilterObject_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__FilterObject `
    ///
    /// ` callback: *const fn (self: Konsole__FilterObject, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: Konsole__FilterObject, callback: *const fn (Konsole__FilterObject, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Konsole__FilterObject `
    ///
    pub fn Delete(self: Konsole__FilterObject) void {
        qtc.Konsole__FilterObject_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
pub const Konsole__FilterChain = extern struct {
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Konsole__FilterChain,

    pub const _is_Konsole__FilterChain = {};

    /// New constructs a new Konsole::FilterChain object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: Konsole__FilterChain `
    ///
    pub fn New(param1: anytype) Konsole__FilterChain {
        comptime _ = @TypeOf(param1)._is_Konsole__FilterChain;
        return .{ .ptr = qtc.Konsole__FilterChain_new(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__FilterChain `
    ///
    /// ` filter: Konsole__Filter `
    ///
    pub fn AddFilter(self: Konsole__FilterChain, filter: anytype) void {
        comptime _ = @TypeOf(filter)._is_Konsole__Filter;
        qtc.Konsole__FilterChain_AddFilter(@ptrCast(self.ptr), @ptrCast(filter.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__FilterChain `
    ///
    /// ` filter: Konsole__Filter `
    ///
    pub fn RemoveFilter(self: Konsole__FilterChain, filter: anytype) void {
        comptime _ = @TypeOf(filter)._is_Konsole__Filter;
        qtc.Konsole__FilterChain_RemoveFilter(@ptrCast(self.ptr), @ptrCast(filter.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__FilterChain `
    ///
    /// ` filter: Konsole__Filter `
    ///
    pub fn ContainsFilter(self: Konsole__FilterChain, filter: anytype) bool {
        comptime _ = @TypeOf(filter)._is_Konsole__Filter;
        return qtc.Konsole__FilterChain_ContainsFilter(@ptrCast(self.ptr), @ptrCast(filter.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__FilterChain `
    ///
    pub fn Clear(self: Konsole__FilterChain) void {
        qtc.Konsole__FilterChain_Clear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__FilterChain `
    ///
    pub fn Reset(self: Konsole__FilterChain) void {
        qtc.Konsole__FilterChain_Reset(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__FilterChain `
    ///
    pub fn Process(self: Konsole__FilterChain) void {
        qtc.Konsole__FilterChain_Process(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__FilterChain `
    ///
    /// ` line: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn HotSpotAt(self: Konsole__FilterChain, line: i32, column: i32) Konsole__Filter__HotSpot {
        return .{ .ptr = qtc.Konsole__FilterChain_HotSpotAt(@ptrCast(self.ptr), @bitCast(line), @bitCast(column)) };
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__FilterChain `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn HotSpots(self: Konsole__FilterChain, allocator: std.mem.Allocator) []Konsole__Filter__HotSpot {
        const _arr: qtc.libqt_list = qtc.Konsole__FilterChain_HotSpots(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Konsole__Filter__HotSpot, _arr.len) catch @panic("konsole__filterchain.HotSpots: Memory allocation failed");
        const _data: [*]QtC.Konsole__Filter__HotSpot = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__FilterChain `
    ///
    /// ` param1: Konsole__FilterChain `
    ///
    pub fn OperatorAssign(self: Konsole__FilterChain, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_Konsole__FilterChain;
        qtc.Konsole__FilterChain_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Konsole__FilterChain `
    ///
    pub fn Delete(self: Konsole__FilterChain) void {
        qtc.Konsole__FilterChain_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
pub const Konsole__TerminalImageFilterChain = extern struct {
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Konsole__TerminalImageFilterChain,

    pub const _is_Konsole__TerminalImageFilterChain = {};
    pub const _is_Konsole__FilterChain = {};

    /// New constructs a new Konsole::TerminalImageFilterChain object.
    ///
    pub fn New() Konsole__TerminalImageFilterChain {
        return .{ .ptr = qtc.Konsole__TerminalImageFilterChain_new() };
    }

    /// New2 constructs a new Konsole::TerminalImageFilterChain object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: Konsole__TerminalImageFilterChain `
    ///
    pub fn New2(param1: anytype) Konsole__TerminalImageFilterChain {
        comptime _ = @TypeOf(param1)._is_Konsole__TerminalImageFilterChain;
        return .{ .ptr = qtc.Konsole__TerminalImageFilterChain_new2(@ptrCast(param1.ptr)) };
    }

    /// Inherited from Konsole::FilterChain
    ///
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__TerminalImageFilterChain `
    ///
    /// ` filter: Konsole__Filter `
    ///
    pub fn AddFilter(self: Konsole__TerminalImageFilterChain, filter: anytype) void {
        comptime _ = @TypeOf(filter)._is_Konsole__Filter;
        qtc.Konsole__FilterChain_AddFilter(@ptrCast(self.ptr), @ptrCast(filter.ptr));
    }

    /// Inherited from Konsole::FilterChain
    ///
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__TerminalImageFilterChain `
    ///
    /// ` filter: Konsole__Filter `
    ///
    pub fn RemoveFilter(self: Konsole__TerminalImageFilterChain, filter: anytype) void {
        comptime _ = @TypeOf(filter)._is_Konsole__Filter;
        qtc.Konsole__FilterChain_RemoveFilter(@ptrCast(self.ptr), @ptrCast(filter.ptr));
    }

    /// Inherited from Konsole::FilterChain
    ///
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__TerminalImageFilterChain `
    ///
    /// ` filter: Konsole__Filter `
    ///
    pub fn ContainsFilter(self: Konsole__TerminalImageFilterChain, filter: anytype) bool {
        comptime _ = @TypeOf(filter)._is_Konsole__Filter;
        return qtc.Konsole__FilterChain_ContainsFilter(@ptrCast(self.ptr), @ptrCast(filter.ptr));
    }

    /// Inherited from Konsole::FilterChain
    ///
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__TerminalImageFilterChain `
    ///
    pub fn Clear(self: Konsole__TerminalImageFilterChain) void {
        qtc.Konsole__FilterChain_Clear(@ptrCast(self.ptr));
    }

    /// Inherited from Konsole::FilterChain
    ///
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__TerminalImageFilterChain `
    ///
    pub fn Reset(self: Konsole__TerminalImageFilterChain) void {
        qtc.Konsole__FilterChain_Reset(@ptrCast(self.ptr));
    }

    /// Inherited from Konsole::FilterChain
    ///
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__TerminalImageFilterChain `
    ///
    pub fn Process(self: Konsole__TerminalImageFilterChain) void {
        qtc.Konsole__FilterChain_Process(@ptrCast(self.ptr));
    }

    /// Inherited from Konsole::FilterChain
    ///
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__TerminalImageFilterChain `
    ///
    /// ` line: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn HotSpotAt(self: Konsole__TerminalImageFilterChain, line: i32, column: i32) Konsole__Filter__HotSpot {
        return .{ .ptr = qtc.Konsole__FilterChain_HotSpotAt(@ptrCast(self.ptr), @bitCast(line), @bitCast(column)) };
    }

    /// Inherited from Konsole::FilterChain
    ///
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__TerminalImageFilterChain `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn HotSpots(self: Konsole__TerminalImageFilterChain, allocator: std.mem.Allocator) []Konsole__Filter__HotSpot {
        const _arr: qtc.libqt_list = qtc.Konsole__FilterChain_HotSpots(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Konsole__Filter__HotSpot, _arr.len) catch @panic("konsole__terminalimagefilterchain.HotSpots: Memory allocation failed");
        const _data: [*]QtC.Konsole__Filter__HotSpot = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from Konsole::FilterChain
    ///
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__TerminalImageFilterChain `
    ///
    /// ` param1: Konsole__FilterChain `
    ///
    pub fn OperatorAssign(self: Konsole__TerminalImageFilterChain, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_Konsole__FilterChain;
        qtc.Konsole__FilterChain_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Konsole__TerminalImageFilterChain `
    ///
    pub fn Delete(self: Konsole__TerminalImageFilterChain) void {
        qtc.Konsole__TerminalImageFilterChain_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
pub const Konsole__Filter__HotSpot = extern struct {
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Konsole__Filter__HotSpot,

    pub const _is_Konsole__Filter__HotSpot = {};

    /// New constructs a new Konsole::Filter::HotSpot object.
    ///
    /// ## Parameter(s):
    ///
    /// ` startLine: i32 `
    ///
    /// ` startColumn: i32 `
    ///
    /// ` endLine: i32 `
    ///
    /// ` endColumn: i32 `
    ///
    pub fn New(startLine: i32, startColumn: i32, endLine: i32, endColumn: i32) Konsole__Filter__HotSpot {
        return .{ .ptr = qtc.Konsole__Filter__HotSpot_new(@bitCast(startLine), @bitCast(startColumn), @bitCast(endLine), @bitCast(endColumn)) };
    }

    /// New2 constructs a new Konsole::Filter::HotSpot object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: Konsole__Filter__HotSpot `
    ///
    pub fn New2(param1: anytype) Konsole__Filter__HotSpot {
        comptime _ = @TypeOf(param1)._is_Konsole__Filter__HotSpot;
        return .{ .ptr = qtc.Konsole__Filter__HotSpot_new2(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter__HotSpot `
    ///
    pub fn StartLine(self: Konsole__Filter__HotSpot) i32 {
        return qtc.Konsole__Filter__HotSpot_StartLine(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter__HotSpot `
    ///
    pub fn EndLine(self: Konsole__Filter__HotSpot) i32 {
        return qtc.Konsole__Filter__HotSpot_EndLine(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter__HotSpot `
    ///
    pub fn StartColumn(self: Konsole__Filter__HotSpot) i32 {
        return qtc.Konsole__Filter__HotSpot_StartColumn(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter__HotSpot `
    ///
    pub fn EndColumn(self: Konsole__Filter__HotSpot) i32 {
        return qtc.Konsole__Filter__HotSpot_EndColumn(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter__HotSpot `
    ///
    /// ## Returns:
    ///
    /// ` Filter_enums.Type `
    ///
    pub fn Type(self: Konsole__Filter__HotSpot) i32 {
        return qtc.Konsole__Filter__HotSpot_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter__HotSpot `
    ///
    /// ` action: []const u8 `
    ///
    pub fn Activate(self: Konsole__Filter__HotSpot, action: []const u8) void {
        const action_str = qtc.libqt_string{
            .len = action.len,
            .data = action.ptr,
        };
        qtc.Konsole__Filter__HotSpot_Activate(@ptrCast(self.ptr), action_str);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Filter__HotSpot `
    ///
    /// ` callback: *const fn (self: Konsole__Filter__HotSpot, action: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnActivate(self: Konsole__Filter__HotSpot, callback: *const fn (Konsole__Filter__HotSpot, [*:0]const u8) callconv(.c) void) void {
        qtc.Konsole__Filter__HotSpot_OnActivate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperActivate` instead
    ///
    pub const QBaseActivate = SuperActivate;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter__HotSpot `
    ///
    /// ` action: []const u8 `
    ///
    pub fn SuperActivate(self: Konsole__Filter__HotSpot, action: []const u8) void {
        const action_str = qtc.libqt_string{
            .len = action.len,
            .data = action.ptr,
        };
        qtc.Konsole__Filter__HotSpot_SuperActivate(@ptrCast(self.ptr), action_str);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter__HotSpot `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Actions(self: Konsole__Filter__HotSpot, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.Konsole__Filter__HotSpot_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("konsole__filter__hotspot.Actions: Memory allocation failed");
        const _data: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Filter__HotSpot `
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QAction `
    ///
    pub fn OnActions(self: Konsole__Filter__HotSpot, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.Konsole__Filter__HotSpot_OnActions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperActions` instead
    ///
    pub const QBaseActions = SuperActions;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter__HotSpot `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperActions(self: Konsole__Filter__HotSpot, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.Konsole__Filter__HotSpot_SuperActions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("konsole__filter__hotspot.Actions: Memory allocation failed");
        const _data: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter__HotSpot `
    ///
    /// ` typeVal: Filter_enums.Type `
    ///
    pub fn SetType(self: Konsole__Filter__HotSpot, typeVal: i32) void {
        qtc.Konsole__Filter__HotSpot_SetType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__Filter__HotSpot `
    ///
    /// ` callback: *const fn (self: Konsole__Filter__HotSpot, typeVal: Filter_enums.Type) callconv(.c) void `
    ///
    pub fn OnSetType(self: Konsole__Filter__HotSpot, callback: *const fn (Konsole__Filter__HotSpot, i32) callconv(.c) void) void {
        qtc.Konsole__Filter__HotSpot_OnSetType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetType` instead
    ///
    pub const QBaseSetType = SuperSetType;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__Filter__HotSpot `
    ///
    /// ` typeVal: Filter_enums.Type `
    ///
    pub fn SuperSetType(self: Konsole__Filter__HotSpot, typeVal: i32) void {
        qtc.Konsole__Filter__HotSpot_SuperSetType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Konsole__Filter__HotSpot `
    ///
    pub fn Delete(self: Konsole__Filter__HotSpot) void {
        qtc.Konsole__Filter__HotSpot_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
pub const Konsole__RegExpFilter__HotSpot = extern struct {
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Konsole__RegExpFilter__HotSpot,

    pub const _is_Konsole__RegExpFilter__HotSpot = {};
    pub const _is_Konsole__Filter__HotSpot = {};

    /// New constructs a new Konsole::RegExpFilter::HotSpot object.
    ///
    /// ## Parameter(s):
    ///
    /// ` startLine: i32 `
    ///
    /// ` startColumn: i32 `
    ///
    /// ` endLine: i32 `
    ///
    /// ` endColumn: i32 `
    ///
    pub fn New(startLine: i32, startColumn: i32, endLine: i32, endColumn: i32) Konsole__RegExpFilter__HotSpot {
        return .{ .ptr = qtc.Konsole__RegExpFilter__HotSpot_new(@bitCast(startLine), @bitCast(startColumn), @bitCast(endLine), @bitCast(endColumn)) };
    }

    /// New2 constructs a new Konsole::RegExpFilter::HotSpot object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: Konsole__RegExpFilter__HotSpot `
    ///
    pub fn New2(param1: anytype) Konsole__RegExpFilter__HotSpot {
        comptime _ = @TypeOf(param1)._is_Konsole__RegExpFilter__HotSpot;
        return .{ .ptr = qtc.Konsole__RegExpFilter__HotSpot_new2(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter__HotSpot `
    ///
    /// ` action: []const u8 `
    ///
    pub fn Activate(self: Konsole__RegExpFilter__HotSpot, action: []const u8) void {
        const action_str = qtc.libqt_string{
            .len = action.len,
            .data = action.ptr,
        };
        qtc.Konsole__RegExpFilter__HotSpot_Activate(@ptrCast(self.ptr), action_str);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__RegExpFilter__HotSpot `
    ///
    /// ` callback: *const fn (self: Konsole__RegExpFilter__HotSpot, action: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnActivate(self: Konsole__RegExpFilter__HotSpot, callback: *const fn (Konsole__RegExpFilter__HotSpot, [*:0]const u8) callconv(.c) void) void {
        qtc.Konsole__RegExpFilter__HotSpot_OnActivate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperActivate` instead
    ///
    pub const QBaseActivate = SuperActivate;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter__HotSpot `
    ///
    /// ` action: []const u8 `
    ///
    pub fn SuperActivate(self: Konsole__RegExpFilter__HotSpot, action: []const u8) void {
        const action_str = qtc.libqt_string{
            .len = action.len,
            .data = action.ptr,
        };
        qtc.Konsole__RegExpFilter__HotSpot_SuperActivate(@ptrCast(self.ptr), action_str);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter__HotSpot `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` texts: []const []const u8 `
    ///
    pub fn SetCapturedTexts(self: Konsole__RegExpFilter__HotSpot, allocator: std.mem.Allocator, texts: []const []const u8) void {
        const texts_arr = allocator.alloc(qtc.libqt_string, texts.len) catch @panic("konsole__regexpfilter__hotspot.SetCapturedTexts: Memory allocation failed");
        defer allocator.free(texts_arr);
        for (texts, 0..texts.len) |item, i|
            texts_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const texts_list = qtc.libqt_list{
            .len = texts.len,
            .data = texts_arr.ptr,
        };
        qtc.Konsole__RegExpFilter__HotSpot_SetCapturedTexts(@ptrCast(self.ptr), texts_list);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter__HotSpot `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CapturedTexts(self: Konsole__RegExpFilter__HotSpot, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.Konsole__RegExpFilter__HotSpot_CapturedTexts(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("konsole__regexpfilter__hotspot.CapturedTexts: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("konsole__regexpfilter__hotspot.CapturedTexts: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from Konsole::Filter::HotSpot
    ///
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter__HotSpot `
    ///
    pub fn StartLine(self: Konsole__RegExpFilter__HotSpot) i32 {
        return qtc.Konsole__Filter__HotSpot_StartLine(@ptrCast(self.ptr));
    }

    /// Inherited from Konsole::Filter::HotSpot
    ///
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter__HotSpot `
    ///
    pub fn EndLine(self: Konsole__RegExpFilter__HotSpot) i32 {
        return qtc.Konsole__Filter__HotSpot_EndLine(@ptrCast(self.ptr));
    }

    /// Inherited from Konsole::Filter::HotSpot
    ///
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter__HotSpot `
    ///
    pub fn StartColumn(self: Konsole__RegExpFilter__HotSpot) i32 {
        return qtc.Konsole__Filter__HotSpot_StartColumn(@ptrCast(self.ptr));
    }

    /// Inherited from Konsole::Filter::HotSpot
    ///
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter__HotSpot `
    ///
    pub fn EndColumn(self: Konsole__RegExpFilter__HotSpot) i32 {
        return qtc.Konsole__Filter__HotSpot_EndColumn(@ptrCast(self.ptr));
    }

    /// Inherited from Konsole::Filter::HotSpot
    ///
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter__HotSpot `
    ///
    /// ## Returns:
    ///
    /// ` Filter_enums.Type `
    ///
    pub fn Type(self: Konsole__RegExpFilter__HotSpot) i32 {
        return qtc.Konsole__Filter__HotSpot_Type(@ptrCast(self.ptr));
    }

    /// Inherited from Konsole::Filter::HotSpot
    ///
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter__HotSpot `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Actions(self: Konsole__RegExpFilter__HotSpot, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.Konsole__RegExpFilter__HotSpot_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("konsole__regexpfilter__hotspot.Actions: Memory allocation failed");
        const _data: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperActions` instead
    ///
    pub const QBaseActions = SuperActions;

    /// Inherited from Konsole::Filter::HotSpot
    ///
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter__HotSpot `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperActions(self: Konsole__RegExpFilter__HotSpot, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.Konsole__RegExpFilter__HotSpot_SuperActions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("konsole__regexpfilter__hotspot.Actions: Memory allocation failed");
        const _data: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from Konsole::Filter::HotSpot
    ///
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__RegExpFilter__HotSpot`
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QAction `
    ///
    pub fn OnActions(self: Konsole__RegExpFilter__HotSpot, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.Konsole__RegExpFilter__HotSpot_OnActions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from Konsole::Filter::HotSpot
    ///
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter__HotSpot `
    ///
    /// ` typeVal: Filter_enums.Type `
    ///
    pub fn SetType(self: Konsole__RegExpFilter__HotSpot, typeVal: i32) void {
        qtc.Konsole__RegExpFilter__HotSpot_SetType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `SuperSetType` instead
    ///
    pub const QBaseSetType = SuperSetType;

    /// Inherited from Konsole::Filter::HotSpot
    ///
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__RegExpFilter__HotSpot `
    ///
    /// ` typeVal: Filter_enums.Type `
    ///
    pub fn SuperSetType(self: Konsole__RegExpFilter__HotSpot, typeVal: i32) void {
        qtc.Konsole__RegExpFilter__HotSpot_SuperSetType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from Konsole::Filter::HotSpot
    ///
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__RegExpFilter__HotSpot`
    ///
    /// ` callback: *const fn (self: Konsole__RegExpFilter__HotSpot, typeVal: Filter_enums.Type) callconv(.c) void `
    ///
    pub fn OnSetType(self: Konsole__RegExpFilter__HotSpot, callback: *const fn (Konsole__RegExpFilter__HotSpot, i32) callconv(.c) void) void {
        qtc.Konsole__RegExpFilter__HotSpot_OnSetType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Konsole__RegExpFilter__HotSpot `
    ///
    pub fn Delete(self: Konsole__RegExpFilter__HotSpot) void {
        qtc.Konsole__RegExpFilter__HotSpot_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
pub const Konsole__UrlFilter__HotSpot = extern struct {
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Konsole__UrlFilter__HotSpot,

    pub const _is_Konsole__UrlFilter__HotSpot = {};
    pub const _is_Konsole__RegExpFilter__HotSpot = {};
    pub const _is_Konsole__Filter__HotSpot = {};

    /// New constructs a new Konsole::UrlFilter::HotSpot object.
    ///
    /// ## Parameter(s):
    ///
    /// ` startLine: i32 `
    ///
    /// ` startColumn: i32 `
    ///
    /// ` endLine: i32 `
    ///
    /// ` endColumn: i32 `
    ///
    pub fn New(startLine: i32, startColumn: i32, endLine: i32, endColumn: i32) Konsole__UrlFilter__HotSpot {
        return .{ .ptr = qtc.Konsole__UrlFilter__HotSpot_new(@bitCast(startLine), @bitCast(startColumn), @bitCast(endLine), @bitCast(endColumn)) };
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter__HotSpot `
    ///
    pub fn GetUrlObject(self: Konsole__UrlFilter__HotSpot) Konsole__FilterObject {
        return .{ .ptr = qtc.Konsole__UrlFilter__HotSpot_GetUrlObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter__HotSpot `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Actions(self: Konsole__UrlFilter__HotSpot, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.Konsole__UrlFilter__HotSpot_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("konsole__urlfilter__hotspot.Actions: Memory allocation failed");
        const _data: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__UrlFilter__HotSpot `
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QAction `
    ///
    pub fn OnActions(self: Konsole__UrlFilter__HotSpot, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.Konsole__UrlFilter__HotSpot_OnActions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperActions` instead
    ///
    pub const QBaseActions = SuperActions;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter__HotSpot `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperActions(self: Konsole__UrlFilter__HotSpot, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.Konsole__UrlFilter__HotSpot_SuperActions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("konsole__urlfilter__hotspot.Actions: Memory allocation failed");
        const _data: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter__HotSpot `
    ///
    /// ` action: []const u8 `
    ///
    pub fn Activate(self: Konsole__UrlFilter__HotSpot, action: []const u8) void {
        const action_str = qtc.libqt_string{
            .len = action.len,
            .data = action.ptr,
        };
        qtc.Konsole__UrlFilter__HotSpot_Activate(@ptrCast(self.ptr), action_str);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__UrlFilter__HotSpot `
    ///
    /// ` callback: *const fn (self: Konsole__UrlFilter__HotSpot, action: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnActivate(self: Konsole__UrlFilter__HotSpot, callback: *const fn (Konsole__UrlFilter__HotSpot, [*:0]const u8) callconv(.c) void) void {
        qtc.Konsole__UrlFilter__HotSpot_OnActivate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperActivate` instead
    ///
    pub const QBaseActivate = SuperActivate;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter__HotSpot `
    ///
    /// ` action: []const u8 `
    ///
    pub fn SuperActivate(self: Konsole__UrlFilter__HotSpot, action: []const u8) void {
        const action_str = qtc.libqt_string{
            .len = action.len,
            .data = action.ptr,
        };
        qtc.Konsole__UrlFilter__HotSpot_SuperActivate(@ptrCast(self.ptr), action_str);
    }

    /// Inherited from Konsole::RegExpFilter::HotSpot
    ///
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter__HotSpot `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` texts: []const []const u8 `
    ///
    pub fn SetCapturedTexts(self: Konsole__UrlFilter__HotSpot, allocator: std.mem.Allocator, texts: []const []const u8) void {
        const texts_arr = allocator.alloc(qtc.libqt_string, texts.len) catch @panic("konsole__urlfilter__hotspot.SetCapturedTexts: Memory allocation failed");
        defer allocator.free(texts_arr);
        for (texts, 0..texts.len) |item, i|
            texts_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const texts_list = qtc.libqt_list{
            .len = texts.len,
            .data = texts_arr.ptr,
        };
        qtc.Konsole__RegExpFilter__HotSpot_SetCapturedTexts(@ptrCast(self.ptr), texts_list);
    }

    /// Inherited from Konsole::RegExpFilter::HotSpot
    ///
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter__HotSpot `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CapturedTexts(self: Konsole__UrlFilter__HotSpot, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.Konsole__RegExpFilter__HotSpot_CapturedTexts(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("konsole__urlfilter__hotspot.CapturedTexts: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("konsole__urlfilter__hotspot.CapturedTexts: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from Konsole::Filter::HotSpot
    ///
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter__HotSpot `
    ///
    pub fn StartLine(self: Konsole__UrlFilter__HotSpot) i32 {
        return qtc.Konsole__Filter__HotSpot_StartLine(@ptrCast(self.ptr));
    }

    /// Inherited from Konsole::Filter::HotSpot
    ///
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter__HotSpot `
    ///
    pub fn EndLine(self: Konsole__UrlFilter__HotSpot) i32 {
        return qtc.Konsole__Filter__HotSpot_EndLine(@ptrCast(self.ptr));
    }

    /// Inherited from Konsole::Filter::HotSpot
    ///
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter__HotSpot `
    ///
    pub fn StartColumn(self: Konsole__UrlFilter__HotSpot) i32 {
        return qtc.Konsole__Filter__HotSpot_StartColumn(@ptrCast(self.ptr));
    }

    /// Inherited from Konsole::Filter::HotSpot
    ///
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter__HotSpot `
    ///
    pub fn EndColumn(self: Konsole__UrlFilter__HotSpot) i32 {
        return qtc.Konsole__Filter__HotSpot_EndColumn(@ptrCast(self.ptr));
    }

    /// Inherited from Konsole::Filter::HotSpot
    ///
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter__HotSpot `
    ///
    /// ## Returns:
    ///
    /// ` Filter_enums.Type `
    ///
    pub fn Type(self: Konsole__UrlFilter__HotSpot) i32 {
        return qtc.Konsole__Filter__HotSpot_Type(@ptrCast(self.ptr));
    }

    /// Inherited from Konsole::Filter::HotSpot
    ///
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter__HotSpot `
    ///
    /// ` typeVal: Filter_enums.Type `
    ///
    pub fn SetType(self: Konsole__UrlFilter__HotSpot, typeVal: i32) void {
        qtc.Konsole__UrlFilter__HotSpot_SetType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `SuperSetType` instead
    ///
    pub const QBaseSetType = SuperSetType;

    /// Inherited from Konsole::Filter::HotSpot
    ///
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Konsole__UrlFilter__HotSpot `
    ///
    /// ` typeVal: Filter_enums.Type `
    ///
    pub fn SuperSetType(self: Konsole__UrlFilter__HotSpot, typeVal: i32) void {
        qtc.Konsole__UrlFilter__HotSpot_SuperSetType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from Konsole::Filter::HotSpot
    ///
    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: Konsole__UrlFilter__HotSpot`
    ///
    /// ` callback: *const fn (self: Konsole__UrlFilter__HotSpot, typeVal: Filter_enums.Type) callconv(.c) void `
    ///
    pub fn OnSetType(self: Konsole__UrlFilter__HotSpot, callback: *const fn (Konsole__UrlFilter__HotSpot, i32) callconv(.c) void) void {
        qtc.Konsole__UrlFilter__HotSpot_OnSetType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Konsole__UrlFilter__HotSpot `
    ///
    pub fn Delete(self: Konsole__UrlFilter__HotSpot) void {
        qtc.Konsole__UrlFilter__HotSpot_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
pub const enums = struct {
    pub const Type = enum(i32) {
        pub const NotSpecified: i32 = 0;
        pub const Link: i32 = 1;
        pub const Marker: i32 = 2;
    };
};
