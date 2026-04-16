const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QGlyphRun = @import("libqt6").QGlyphRun;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QTextBlockFormat = @import("libqt6").QTextBlockFormat;
const QTextCharFormat = @import("libqt6").QTextCharFormat;
const QTextCursor = @import("libqt6").QTextCursor;
const QTextDocument = @import("libqt6").QTextDocument;
const QTextFormat = @import("libqt6").QTextFormat;
const QTextFrameFormat = @import("libqt6").QTextFrameFormat;
const QTextLayout = @import("libqt6").QTextLayout;
const QTextLayout__FormatRange = @import("libqt6").QTextLayout__FormatRange;
const QTextList = @import("libqt6").QTextList;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtextobject.html)
pub const QTextObject = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextobject.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTextObject,

    pub const _is_QTextObject = {};
    pub const _is_QObject = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextObject `
    ///
    pub fn MetaObject(self: QTextObject) QMetaObject {
        return .{ .ptr = qtc.QTextObject_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QTextObject `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QTextObject, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QTextObject_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QTextObject `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QTextObject, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QTextObject_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextobject.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextobject.html#format)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextObject `
    ///
    pub fn Format(self: QTextObject) QTextFormat {
        return .{ .ptr = qtc.QTextObject_Format(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextobject.html#formatIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextObject `
    ///
    pub fn FormatIndex(self: QTextObject) i32 {
        return qtc.QTextObject_FormatIndex(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextobject.html#document)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextObject `
    ///
    pub fn Document(self: QTextObject) QTextDocument {
        return .{ .ptr = qtc.QTextObject_Document(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextobject.html#objectIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextObject `
    ///
    pub fn ObjectIndex(self: QTextObject) i32 {
        return qtc.QTextObject_ObjectIndex(@ptrCast(self.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextobject.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextobject.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QTextObject, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextObject `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QTextObject, watched: anytype, event: anytype) bool {
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
    /// ` self: QTextObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QTextObject, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextobject.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextObject `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QTextObject, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextObject `
    ///
    pub fn IsWidgetType(self: QTextObject) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextObject `
    ///
    pub fn IsWindowType(self: QTextObject) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextObject `
    ///
    pub fn IsQuickItemType(self: QTextObject) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextObject `
    ///
    pub fn SignalsBlocked(self: QTextObject) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextObject `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QTextObject, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextObject `
    ///
    pub fn Thread(self: QTextObject) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextObject `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QTextObject, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextObject `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QTextObject, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextObject `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QTextObject, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextObject `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QTextObject, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextObject `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QTextObject, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QTextObject, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qtextobject.Children: Memory allocation failed");
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
    /// ` self: QTextObject `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QTextObject, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextObject `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QTextObject, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextObject `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QTextObject, obj: anytype) void {
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
    /// ` self: QTextObject `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QTextObject, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QTextObject `
    ///
    pub fn Disconnect3(self: QTextObject) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextObject `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QTextObject, receiver: anytype) bool {
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
    /// ` self: QTextObject `
    ///
    pub fn DumpObjectTree(self: QTextObject) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextObject `
    ///
    pub fn DumpObjectInfo(self: QTextObject) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextObject `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QTextObject, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QTextObject `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QTextObject, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QTextObject, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qtextobject.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qtextobject.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QTextObject `
    ///
    pub fn BindingStorage(self: QTextObject) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextObject `
    ///
    pub fn BindingStorage2(self: QTextObject) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextObject `
    ///
    pub fn Destroyed(self: QTextObject) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextObject `
    ///
    /// ` callback: *const fn (self: QTextObject) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QTextObject, callback: *const fn (QTextObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextObject `
    ///
    pub fn Parent(self: QTextObject) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextObject `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QTextObject, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextObject `
    ///
    pub fn DeleteLater(self: QTextObject) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextObject `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QTextObject, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextObject `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QTextObject, time: i64, timerType: i32) i32 {
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
    /// ` self: QTextObject `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QTextObject, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QTextObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QTextObject, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QTextObject, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QTextObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QTextObject, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QTextObject `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QTextObject, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QTextObject `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QTextObject, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextObject `
    ///
    /// ` callback: *const fn (self: QTextObject, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QTextObject, callback: *const fn (QTextObject, QObject) callconv(.c) void) void {
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
    /// ` self: QTextObject `
    ///
    /// ` callback: *const fn (self: QTextObject, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QTextObject, callback: *const fn (QTextObject, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockgroup.html)
pub const QTextBlockGroup = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockgroup.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTextBlockGroup,

    pub const _is_QTextBlockGroup = {};
    pub const _is_QTextObject = {};
    pub const _is_QObject = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockGroup `
    ///
    pub fn MetaObject(self: QTextBlockGroup) QMetaObject {
        return .{ .ptr = qtc.QTextBlockGroup_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockGroup `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QTextBlockGroup, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QTextBlockGroup_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockGroup `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QTextBlockGroup, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QTextBlockGroup_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextblockgroup.Tr: Memory allocation failed");
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
    pub fn Tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextblockgroup.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextblockgroup.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextobject.html#format)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockGroup `
    ///
    pub fn Format(self: QTextBlockGroup) QTextFormat {
        return .{ .ptr = qtc.QTextObject_Format(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextobject.html#formatIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockGroup `
    ///
    pub fn FormatIndex(self: QTextBlockGroup) i32 {
        return qtc.QTextObject_FormatIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QTextObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextobject.html#document)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockGroup `
    ///
    pub fn Document(self: QTextBlockGroup) QTextDocument {
        return .{ .ptr = qtc.QTextObject_Document(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextobject.html#objectIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockGroup `
    ///
    pub fn ObjectIndex(self: QTextBlockGroup) i32 {
        return qtc.QTextObject_ObjectIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockGroup `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QTextBlockGroup, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockGroup `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QTextBlockGroup, watched: anytype, event: anytype) bool {
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
    /// ` self: QTextBlockGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QTextBlockGroup, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextblockgroup.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockGroup `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QTextBlockGroup, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockGroup `
    ///
    pub fn IsWidgetType(self: QTextBlockGroup) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockGroup `
    ///
    pub fn IsWindowType(self: QTextBlockGroup) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockGroup `
    ///
    pub fn IsQuickItemType(self: QTextBlockGroup) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockGroup `
    ///
    pub fn SignalsBlocked(self: QTextBlockGroup) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockGroup `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QTextBlockGroup, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockGroup `
    ///
    pub fn Thread(self: QTextBlockGroup) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockGroup `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QTextBlockGroup, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockGroup `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QTextBlockGroup, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockGroup `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QTextBlockGroup, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockGroup `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QTextBlockGroup, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockGroup `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QTextBlockGroup, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QTextBlockGroup, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qtextblockgroup.Children: Memory allocation failed");
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
    /// ` self: QTextBlockGroup `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QTextBlockGroup, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockGroup `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QTextBlockGroup, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockGroup `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QTextBlockGroup, obj: anytype) void {
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
    /// ` self: QTextBlockGroup `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QTextBlockGroup, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QTextBlockGroup `
    ///
    pub fn Disconnect3(self: QTextBlockGroup) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockGroup `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QTextBlockGroup, receiver: anytype) bool {
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
    /// ` self: QTextBlockGroup `
    ///
    pub fn DumpObjectTree(self: QTextBlockGroup) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockGroup `
    ///
    pub fn DumpObjectInfo(self: QTextBlockGroup) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockGroup `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QTextBlockGroup, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QTextBlockGroup `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QTextBlockGroup, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QTextBlockGroup, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qtextblockgroup.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qtextblockgroup.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QTextBlockGroup `
    ///
    pub fn BindingStorage(self: QTextBlockGroup) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockGroup `
    ///
    pub fn BindingStorage2(self: QTextBlockGroup) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockGroup `
    ///
    pub fn Destroyed(self: QTextBlockGroup) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextBlockGroup `
    ///
    /// ` callback: *const fn (self: QTextBlockGroup) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QTextBlockGroup, callback: *const fn (QTextBlockGroup) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockGroup `
    ///
    pub fn Parent(self: QTextBlockGroup) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockGroup `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QTextBlockGroup, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockGroup `
    ///
    pub fn DeleteLater(self: QTextBlockGroup) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockGroup `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QTextBlockGroup, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockGroup `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QTextBlockGroup, time: i64, timerType: i32) i32 {
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
    /// ` self: QTextBlockGroup `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QTextBlockGroup, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QTextBlockGroup `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QTextBlockGroup, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockGroup `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QTextBlockGroup, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QTextBlockGroup `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QTextBlockGroup, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QTextBlockGroup `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QTextBlockGroup, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QTextBlockGroup `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QTextBlockGroup, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextBlockGroup `
    ///
    /// ` callback: *const fn (self: QTextBlockGroup, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QTextBlockGroup, callback: *const fn (QTextBlockGroup, QObject) callconv(.c) void) void {
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
    /// ` self: QTextBlockGroup `
    ///
    /// ` callback: *const fn (self: QTextBlockGroup, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QTextBlockGroup, callback: *const fn (QTextBlockGroup, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html)
pub const QTextFrame = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTextFrame,

    pub const _is_QTextFrame = {};
    pub const _is_QTextObject = {};
    pub const _is_QObject = {};

    /// New constructs a new QTextFrame object.
    ///
    /// ## Parameter(s):
    ///
    /// ` doc: QTextDocument `
    ///
    pub fn New(doc: anytype) QTextFrame {
        comptime _ = @TypeOf(doc)._is_QTextDocument;
        return .{ .ptr = qtc.QTextFrame_new(@ptrCast(doc.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    pub fn MetaObject(self: QTextFrame) QMetaObject {
        return .{ .ptr = qtc.QTextFrame_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextFrame `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QTextFrame, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QTextFrame_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTextFrame `
    ///
    pub fn SuperMetaObject(self: QTextFrame) QMetaObject {
        return .{ .ptr = qtc.QTextFrame_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QTextFrame, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QTextFrame_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextFrame `
    ///
    /// ` callback: *const fn (self: QTextFrame, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QTextFrame, callback: *const fn (QTextFrame, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QTextFrame_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QTextFrame, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QTextFrame_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QTextFrame, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QTextFrame_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextFrame `
    ///
    /// ` callback: *const fn (self: QTextFrame, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QTextFrame, callback: *const fn (QTextFrame, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QTextFrame_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QTextFrame, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QTextFrame_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextframe.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#setFrameFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    /// ` format: QTextFrameFormat `
    ///
    pub fn SetFrameFormat(self: QTextFrame, format: anytype) void {
        comptime _ = @TypeOf(format)._is_QTextFrameFormat;
        qtc.QTextFrame_SetFrameFormat(@ptrCast(self.ptr), @ptrCast(format.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#frameFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    pub fn FrameFormat(self: QTextFrame) QTextFrameFormat {
        return .{ .ptr = qtc.QTextFrame_FrameFormat(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#firstCursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    pub fn FirstCursorPosition(self: QTextFrame) QTextCursor {
        return .{ .ptr = qtc.QTextFrame_FirstCursorPosition(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#lastCursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    pub fn LastCursorPosition(self: QTextFrame) QTextCursor {
        return .{ .ptr = qtc.QTextFrame_LastCursorPosition(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#firstPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    pub fn FirstPosition(self: QTextFrame) i32 {
        return qtc.QTextFrame_FirstPosition(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#lastPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    pub fn LastPosition(self: QTextFrame) i32 {
        return qtc.QTextFrame_LastPosition(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#childFrames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ChildFrames(self: QTextFrame, allocator: std.mem.Allocator) []QTextFrame {
        const _arr: qtc.libqt_list = qtc.QTextFrame_ChildFrames(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTextFrame, _arr.len) catch @panic("qtextframe.ChildFrames: Memory allocation failed");
        const _data: [*]QtC.QTextFrame = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#parentFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    pub fn ParentFrame(self: QTextFrame) QTextFrame {
        return .{ .ptr = qtc.QTextFrame_ParentFrame(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#begin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    pub fn Begin(self: QTextFrame) QTextFrame__iterator {
        return .{ .ptr = qtc.QTextFrame_Begin(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    pub fn End(self: QTextFrame) QTextFrame__iterator {
        return .{ .ptr = qtc.QTextFrame_End(@ptrCast(self.ptr)) };
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextframe.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextframe.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextobject.html#format)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    pub fn Format(self: QTextFrame) QTextFormat {
        return .{ .ptr = qtc.QTextObject_Format(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextobject.html#formatIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    pub fn FormatIndex(self: QTextFrame) i32 {
        return qtc.QTextObject_FormatIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QTextObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextobject.html#document)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    pub fn Document(self: QTextFrame) QTextDocument {
        return .{ .ptr = qtc.QTextObject_Document(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextobject.html#objectIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    pub fn ObjectIndex(self: QTextFrame) i32 {
        return qtc.QTextObject_ObjectIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QTextFrame, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextframe.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QTextFrame, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    pub fn IsWidgetType(self: QTextFrame) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    pub fn IsWindowType(self: QTextFrame) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    pub fn IsQuickItemType(self: QTextFrame) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    pub fn SignalsBlocked(self: QTextFrame) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QTextFrame, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    pub fn Thread(self: QTextFrame) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QTextFrame, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QTextFrame, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QTextFrame, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QTextFrame, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QTextFrame, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QTextFrame, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qtextframe.Children: Memory allocation failed");
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
    /// ` self: QTextFrame `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QTextFrame, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QTextFrame, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QTextFrame, obj: anytype) void {
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
    /// ` self: QTextFrame `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QTextFrame, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QTextFrame `
    ///
    pub fn Disconnect3(self: QTextFrame) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QTextFrame, receiver: anytype) bool {
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
    /// ` self: QTextFrame `
    ///
    pub fn DumpObjectTree(self: QTextFrame) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    pub fn DumpObjectInfo(self: QTextFrame) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QTextFrame, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QTextFrame `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QTextFrame, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QTextFrame, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qtextframe.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qtextframe.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QTextFrame `
    ///
    pub fn BindingStorage(self: QTextFrame) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    pub fn BindingStorage2(self: QTextFrame) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    pub fn Destroyed(self: QTextFrame) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextFrame `
    ///
    /// ` callback: *const fn (self: QTextFrame) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QTextFrame, callback: *const fn (QTextFrame) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    pub fn Parent(self: QTextFrame) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QTextFrame, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    pub fn DeleteLater(self: QTextFrame) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QTextFrame, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QTextFrame, time: i64, timerType: i32) i32 {
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
    /// ` self: QTextFrame `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QTextFrame, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QTextFrame `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QTextFrame, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QTextFrame, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QTextFrame `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QTextFrame, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QTextFrame `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QTextFrame, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QTextFrame `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QTextFrame, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextFrame `
    ///
    /// ` callback: *const fn (self: QTextFrame, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QTextFrame, callback: *const fn (QTextFrame, QObject) callconv(.c) void) void {
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
    /// ` self: QTextFrame `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QTextFrame, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QTextFrame_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTextFrame `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QTextFrame, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QTextFrame_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextFrame`
    ///
    /// ` callback: *const fn (self: QTextFrame, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QTextFrame, callback: *const fn (QTextFrame, QEvent) callconv(.c) bool) void {
        qtc.QTextFrame_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QTextFrame, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QTextFrame_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTextFrame `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QTextFrame, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QTextFrame_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextFrame`
    ///
    /// ` callback: *const fn (self: QTextFrame, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QTextFrame, callback: *const fn (QTextFrame, QObject, QEvent) callconv(.c) bool) void {
        qtc.QTextFrame_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QTextFrame, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QTextFrame_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTextFrame `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QTextFrame, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QTextFrame_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextFrame`
    ///
    /// ` callback: *const fn (self: QTextFrame, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QTextFrame, callback: *const fn (QTextFrame, QTimerEvent) callconv(.c) void) void {
        qtc.QTextFrame_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QTextFrame, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QTextFrame_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTextFrame `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QTextFrame, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QTextFrame_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextFrame`
    ///
    /// ` callback: *const fn (self: QTextFrame, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QTextFrame, callback: *const fn (QTextFrame, QChildEvent) callconv(.c) void) void {
        qtc.QTextFrame_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QTextFrame, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QTextFrame_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTextFrame `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QTextFrame, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QTextFrame_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextFrame`
    ///
    /// ` callback: *const fn (self: QTextFrame, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QTextFrame, callback: *const fn (QTextFrame, QEvent) callconv(.c) void) void {
        qtc.QTextFrame_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QTextFrame, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTextFrame_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTextFrame `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QTextFrame, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTextFrame_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextFrame`
    ///
    /// ` callback: *const fn (self: QTextFrame, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QTextFrame, callback: *const fn (QTextFrame, QMetaMethod) callconv(.c) void) void {
        qtc.QTextFrame_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QTextFrame, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTextFrame_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTextFrame `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QTextFrame, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTextFrame_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextFrame`
    ///
    /// ` callback: *const fn (self: QTextFrame, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QTextFrame, callback: *const fn (QTextFrame, QMetaMethod) callconv(.c) void) void {
        qtc.QTextFrame_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextobject.html#setFormat)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    /// ` format: QTextFormat `
    ///
    pub fn SetFormat(self: QTextFrame, format: anytype) void {
        comptime _ = @TypeOf(format)._is_QTextFormat;
        qtc.QTextFrame_SetFormat(@ptrCast(self.ptr), @ptrCast(format.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetFormat` instead
    ///
    pub const QBaseSetFormat = SuperSetFormat;

    /// Inherited from QTextObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextobject.html#setFormat)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    /// ` format: QTextFormat `
    ///
    pub fn SuperSetFormat(self: QTextFrame, format: anytype) void {
        comptime _ = @TypeOf(format)._is_QTextFormat;
        qtc.QTextFrame_SuperSetFormat(@ptrCast(self.ptr), @ptrCast(format.ptr));
    }

    /// Inherited from QTextObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextobject.html#setFormat)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextFrame`
    ///
    /// ` callback: *const fn (self: QTextFrame, format: QTextFormat) callconv(.c) void `
    ///
    pub fn OnSetFormat(self: QTextFrame, callback: *const fn (QTextFrame, QTextFormat) callconv(.c) void) void {
        qtc.QTextFrame_OnSetFormat(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    pub fn Sender(self: QTextFrame) QObject {
        return .{ .ptr = qtc.QTextFrame_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QTextFrame `
    ///
    pub fn SuperSender(self: QTextFrame) QObject {
        return .{ .ptr = qtc.QTextFrame_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextFrame`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QTextFrame, callback: *const fn () callconv(.c) QObject) void {
        qtc.QTextFrame_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    pub fn SenderSignalIndex(self: QTextFrame) i32 {
        return qtc.QTextFrame_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QTextFrame `
    ///
    pub fn SuperSenderSignalIndex(self: QTextFrame) i32 {
        return qtc.QTextFrame_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextFrame`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QTextFrame, callback: *const fn () callconv(.c) i32) void {
        qtc.QTextFrame_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QTextFrame, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QTextFrame_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QTextFrame `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QTextFrame, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QTextFrame_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextFrame`
    ///
    /// ` callback: *const fn (self: QTextFrame, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QTextFrame, callback: *const fn (QTextFrame, [*:0]const u8) callconv(.c) i32) void {
        qtc.QTextFrame_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QTextFrame, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QTextFrame_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTextFrame `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QTextFrame, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QTextFrame_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextFrame`
    ///
    /// ` callback: *const fn (self: QTextFrame, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QTextFrame, callback: *const fn (QTextFrame, QMetaMethod) callconv(.c) bool) void {
        qtc.QTextFrame_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextFrame `
    ///
    /// ` callback: *const fn (self: QTextFrame, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QTextFrame, callback: *const fn (QTextFrame, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#dtor.QTextFrame)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextFrame `
    ///
    pub fn Delete(self: QTextFrame) void {
        qtc.QTextFrame_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockuserdata.html)
pub const QTextBlockUserData = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockuserdata.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTextBlockUserData,

    pub const _is_QTextBlockUserData = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockuserdata.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockUserData `
    ///
    /// ` param1: QTextBlockUserData `
    ///
    pub fn OperatorAssign(self: QTextBlockUserData, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTextBlockUserData;
        qtc.QTextBlockUserData_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockuserdata.html#dtor.QTextBlockUserData)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextBlockUserData `
    ///
    pub fn Delete(self: QTextBlockUserData) void {
        qtc.QTextBlockUserData_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html)
pub const QTextBlock = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTextBlock,

    pub const _is_QTextBlock = {};

    /// New constructs a new QTextBlock object.
    ///
    pub fn New() QTextBlock {
        return .{ .ptr = qtc.QTextBlock_new() };
    }

    /// New2 constructs a new QTextBlock object.
    ///
    /// ## Parameter(s):
    ///
    /// ` o: QTextBlock `
    ///
    pub fn New2(o: anytype) QTextBlock {
        comptime _ = @TypeOf(o)._is_QTextBlock;
        return .{ .ptr = qtc.QTextBlock_new2(@ptrCast(o.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    /// ` o: QTextBlock `
    ///
    pub fn OperatorAssign(self: QTextBlock, o: anytype) void {
        comptime _ = @TypeOf(o)._is_QTextBlock;
        qtc.QTextBlock_OperatorAssign(@ptrCast(self.ptr), @ptrCast(o.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    pub fn IsValid(self: QTextBlock) bool {
        return qtc.QTextBlock_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    /// ` o: QTextBlock `
    ///
    pub fn OperatorEqual(self: QTextBlock, o: anytype) bool {
        comptime _ = @TypeOf(o)._is_QTextBlock;
        return qtc.QTextBlock_OperatorEqual(@ptrCast(self.ptr), @ptrCast(o.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    /// ` o: QTextBlock `
    ///
    pub fn OperatorNotEqual(self: QTextBlock, o: anytype) bool {
        comptime _ = @TypeOf(o)._is_QTextBlock;
        return qtc.QTextBlock_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(o.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#operator-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    /// ` o: QTextBlock `
    ///
    pub fn OperatorLesser(self: QTextBlock, o: anytype) bool {
        comptime _ = @TypeOf(o)._is_QTextBlock;
        return qtc.QTextBlock_OperatorLesser(@ptrCast(self.ptr), @ptrCast(o.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    pub fn Position(self: QTextBlock) i32 {
        return qtc.QTextBlock_Position(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    pub fn Length(self: QTextBlock) i32 {
        return qtc.QTextBlock_Length(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    /// ` position: i32 `
    ///
    pub fn Contains(self: QTextBlock, position: i32) bool {
        return qtc.QTextBlock_Contains(@ptrCast(self.ptr), @bitCast(position));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#layout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    pub fn Layout(self: QTextBlock) QTextLayout {
        return .{ .ptr = qtc.QTextBlock_Layout(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#clearLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    pub fn ClearLayout(self: QTextBlock) void {
        qtc.QTextBlock_ClearLayout(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#blockFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    pub fn BlockFormat(self: QTextBlock) QTextBlockFormat {
        return .{ .ptr = qtc.QTextBlock_BlockFormat(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#blockFormatIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    pub fn BlockFormatIndex(self: QTextBlock) i32 {
        return qtc.QTextBlock_BlockFormatIndex(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#charFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    pub fn CharFormat(self: QTextBlock) QTextCharFormat {
        return .{ .ptr = qtc.QTextBlock_CharFormat(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#charFormatIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    pub fn CharFormatIndex(self: QTextBlock) i32 {
        return qtc.QTextBlock_CharFormatIndex(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#textDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn TextDirection(self: QTextBlock) i32 {
        return qtc.QTextBlock_TextDirection(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: QTextBlock, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextBlock_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextblock.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#textFormats)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TextFormats(self: QTextBlock, allocator: std.mem.Allocator) []QTextLayout__FormatRange {
        const _arr: qtc.libqt_list = qtc.QTextBlock_TextFormats(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTextLayout__FormatRange, _arr.len) catch @panic("qtextblock.TextFormats: Memory allocation failed");
        const _data: [*]QtC.QTextLayout__FormatRange = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#document)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    pub fn Document(self: QTextBlock) QTextDocument {
        return .{ .ptr = qtc.QTextBlock_Document(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#textList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    pub fn TextList(self: QTextBlock) QTextList {
        return .{ .ptr = qtc.QTextBlock_TextList(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#userData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    pub fn UserData(self: QTextBlock) QTextBlockUserData {
        return .{ .ptr = qtc.QTextBlock_UserData(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#setUserData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    /// ` data: QTextBlockUserData `
    ///
    pub fn SetUserData(self: QTextBlock, data: anytype) void {
        comptime _ = @TypeOf(data)._is_QTextBlockUserData;
        qtc.QTextBlock_SetUserData(@ptrCast(self.ptr), @ptrCast(data.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#userState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    pub fn UserState(self: QTextBlock) i32 {
        return qtc.QTextBlock_UserState(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#setUserState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    /// ` state: i32 `
    ///
    pub fn SetUserState(self: QTextBlock, state: i32) void {
        qtc.QTextBlock_SetUserState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#revision)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    pub fn Revision(self: QTextBlock) i32 {
        return qtc.QTextBlock_Revision(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#setRevision)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    /// ` rev: i32 `
    ///
    pub fn SetRevision(self: QTextBlock, rev: i32) void {
        qtc.QTextBlock_SetRevision(@ptrCast(self.ptr), @bitCast(rev));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    pub fn IsVisible(self: QTextBlock) bool {
        return qtc.QTextBlock_IsVisible(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible(self: QTextBlock, visible: bool) void {
        qtc.QTextBlock_SetVisible(@ptrCast(self.ptr), visible);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#blockNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    pub fn BlockNumber(self: QTextBlock) i32 {
        return qtc.QTextBlock_BlockNumber(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#firstLineNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    pub fn FirstLineNumber(self: QTextBlock) i32 {
        return qtc.QTextBlock_FirstLineNumber(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#setLineCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    /// ` count: i32 `
    ///
    pub fn SetLineCount(self: QTextBlock, count: i32) void {
        qtc.QTextBlock_SetLineCount(@ptrCast(self.ptr), @bitCast(count));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#lineCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    pub fn LineCount(self: QTextBlock) i32 {
        return qtc.QTextBlock_LineCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#begin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    pub fn Begin(self: QTextBlock) QTextBlock__iterator {
        return .{ .ptr = qtc.QTextBlock_Begin(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    pub fn End(self: QTextBlock) QTextBlock__iterator {
        return .{ .ptr = qtc.QTextBlock_End(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#next)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    pub fn Next(self: QTextBlock) QTextBlock {
        return .{ .ptr = qtc.QTextBlock_Next(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#previous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    pub fn Previous(self: QTextBlock) QTextBlock {
        return .{ .ptr = qtc.QTextBlock_Previous(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#fragmentIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    pub fn FragmentIndex(self: QTextBlock) i32 {
        return qtc.QTextBlock_FragmentIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#dtor.QTextBlock)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextBlock `
    ///
    pub fn Delete(self: QTextBlock) void {
        qtc.QTextBlock_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtextfragment.html)
pub const QTextFragment = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextfragment.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTextFragment,

    pub const _is_QTextFragment = {};

    /// New constructs a new QTextFragment object.
    ///
    pub fn New() QTextFragment {
        return .{ .ptr = qtc.QTextFragment_new() };
    }

    /// New2 constructs a new QTextFragment object.
    ///
    /// ## Parameter(s):
    ///
    /// ` o: QTextFragment `
    ///
    pub fn New2(o: anytype) QTextFragment {
        comptime _ = @TypeOf(o)._is_QTextFragment;
        return .{ .ptr = qtc.QTextFragment_new2(@ptrCast(o.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextfragment.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFragment `
    ///
    /// ` o: QTextFragment `
    ///
    pub fn OperatorAssign(self: QTextFragment, o: anytype) void {
        comptime _ = @TypeOf(o)._is_QTextFragment;
        qtc.QTextFragment_OperatorAssign(@ptrCast(self.ptr), @ptrCast(o.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextfragment.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFragment `
    ///
    pub fn IsValid(self: QTextFragment) bool {
        return qtc.QTextFragment_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextfragment.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFragment `
    ///
    /// ` o: QTextFragment `
    ///
    pub fn OperatorEqual(self: QTextFragment, o: anytype) bool {
        comptime _ = @TypeOf(o)._is_QTextFragment;
        return qtc.QTextFragment_OperatorEqual(@ptrCast(self.ptr), @ptrCast(o.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextfragment.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFragment `
    ///
    /// ` o: QTextFragment `
    ///
    pub fn OperatorNotEqual(self: QTextFragment, o: anytype) bool {
        comptime _ = @TypeOf(o)._is_QTextFragment;
        return qtc.QTextFragment_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(o.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextfragment.html#operator-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFragment `
    ///
    /// ` o: QTextFragment `
    ///
    pub fn OperatorLesser(self: QTextFragment, o: anytype) bool {
        comptime _ = @TypeOf(o)._is_QTextFragment;
        return qtc.QTextFragment_OperatorLesser(@ptrCast(self.ptr), @ptrCast(o.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextfragment.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFragment `
    ///
    pub fn Position(self: QTextFragment) i32 {
        return qtc.QTextFragment_Position(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextfragment.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFragment `
    ///
    pub fn Length(self: QTextFragment) i32 {
        return qtc.QTextFragment_Length(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextfragment.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFragment `
    ///
    /// ` position: i32 `
    ///
    pub fn Contains(self: QTextFragment, position: i32) bool {
        return qtc.QTextFragment_Contains(@ptrCast(self.ptr), @bitCast(position));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextfragment.html#charFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFragment `
    ///
    pub fn CharFormat(self: QTextFragment) QTextCharFormat {
        return .{ .ptr = qtc.QTextFragment_CharFormat(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextfragment.html#charFormatIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFragment `
    ///
    pub fn CharFormatIndex(self: QTextFragment) i32 {
        return qtc.QTextFragment_CharFormatIndex(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextfragment.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFragment `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: QTextFragment, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextFragment_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtextfragment.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextfragment.html#glyphRuns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFragment `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn GlyphRuns(self: QTextFragment, allocator: std.mem.Allocator) []QGlyphRun {
        const _arr: qtc.libqt_list = qtc.QTextFragment_GlyphRuns(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGlyphRun, _arr.len) catch @panic("qtextfragment.GlyphRuns: Memory allocation failed");
        const _data: [*]QtC.QGlyphRun = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextfragment.html#glyphRuns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFragment `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` from: i32 `
    ///
    pub fn GlyphRuns1(self: QTextFragment, allocator: std.mem.Allocator, from: i32) []QGlyphRun {
        const _arr: qtc.libqt_list = qtc.QTextFragment_GlyphRuns1(@ptrCast(self.ptr), @bitCast(from));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGlyphRun, _arr.len) catch @panic("qtextfragment.GlyphRuns1: Memory allocation failed");
        const _data: [*]QtC.QGlyphRun = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextfragment.html#glyphRuns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFragment `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` from: i32 `
    ///
    /// ` length: i32 `
    ///
    pub fn GlyphRuns2(self: QTextFragment, allocator: std.mem.Allocator, from: i32, length: i32) []QGlyphRun {
        const _arr: qtc.libqt_list = qtc.QTextFragment_GlyphRuns2(@ptrCast(self.ptr), @bitCast(from), @bitCast(length));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGlyphRun, _arr.len) catch @panic("qtextfragment.GlyphRuns2: Memory allocation failed");
        const _data: [*]QtC.QGlyphRun = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextfragment.html#dtor.QTextFragment)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextFragment `
    ///
    pub fn Delete(self: QTextFragment) void {
        qtc.QTextFragment_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe-iterator.html)
pub const QTextFrame__iterator = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe-iterator.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTextFrame__iterator,

    pub const _is_QTextFrame__iterator = {};

    /// New constructs a new QTextFrame::iterator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QTextFrame__iterator `
    ///
    pub fn New(other: anytype) QTextFrame__iterator {
        comptime _ = @TypeOf(other)._is_QTextFrame__iterator;
        return .{ .ptr = qtc.QTextFrame__iterator_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QTextFrame::iterator object and invalidates the source QTextFrame::iterator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QTextFrame__iterator `
    ///
    pub fn New2(other: anytype) QTextFrame__iterator {
        comptime _ = @TypeOf(other)._is_QTextFrame__iterator;
        return .{ .ptr = qtc.QTextFrame__iterator_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QTextFrame::iterator object.
    ///
    pub fn New3() QTextFrame__iterator {
        return .{ .ptr = qtc.QTextFrame__iterator_new3() };
    }

    /// New4 constructs a new QTextFrame::iterator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QTextFrame__iterator `
    ///
    pub fn New4(param1: anytype) QTextFrame__iterator {
        comptime _ = @TypeOf(param1)._is_QTextFrame__iterator;
        return .{ .ptr = qtc.QTextFrame__iterator_new4(@ptrCast(param1.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextFrame__iterator `
    ///
    /// ` other: QTextFrame__iterator `
    ///
    pub fn CopyAssign(self: QTextFrame__iterator, other: QTextFrame__iterator) void {
        qtc.QTextFrame__iterator_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextFrame__iterator `
    ///
    /// ` other: QTextFrame__iterator `
    ///
    pub fn MoveAssign(self: QTextFrame__iterator, other: QTextFrame__iterator) void {
        qtc.QTextFrame__iterator_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe-iterator.html#parentFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame__iterator `
    ///
    pub fn ParentFrame(self: QTextFrame__iterator) QTextFrame {
        return .{ .ptr = qtc.QTextFrame__iterator_ParentFrame(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe-iterator.html#currentFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame__iterator `
    ///
    pub fn CurrentFrame(self: QTextFrame__iterator) QTextFrame {
        return .{ .ptr = qtc.QTextFrame__iterator_CurrentFrame(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe-iterator.html#currentBlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame__iterator `
    ///
    pub fn CurrentBlock(self: QTextFrame__iterator) QTextBlock {
        return .{ .ptr = qtc.QTextFrame__iterator_CurrentBlock(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe-iterator.html#atEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame__iterator `
    ///
    pub fn AtEnd(self: QTextFrame__iterator) bool {
        return qtc.QTextFrame__iterator_AtEnd(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe-iterator.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame__iterator `
    ///
    /// ` o: QTextFrame__iterator `
    ///
    pub fn OperatorEqual(self: QTextFrame__iterator, o: anytype) bool {
        comptime _ = @TypeOf(o)._is_QTextFrame__iterator;
        return qtc.QTextFrame__iterator_OperatorEqual(@ptrCast(self.ptr), @ptrCast(o.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe-iterator.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame__iterator `
    ///
    /// ` o: QTextFrame__iterator `
    ///
    pub fn OperatorNotEqual(self: QTextFrame__iterator, o: anytype) bool {
        comptime _ = @TypeOf(o)._is_QTextFrame__iterator;
        return qtc.QTextFrame__iterator_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(o.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe-iterator.html#operator-2b-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame__iterator `
    ///
    pub fn OperatorPlusPlus(self: QTextFrame__iterator) QTextFrame__iterator {
        return .{ .ptr = qtc.QTextFrame__iterator_OperatorPlusPlus(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe-iterator.html#operator-2b-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame__iterator `
    ///
    /// ` param1: i32 `
    ///
    pub fn OperatorPlusPlus2(self: QTextFrame__iterator, param1: i32) QTextFrame__iterator {
        return .{ .ptr = qtc.QTextFrame__iterator_OperatorPlusPlus2(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe-iterator.html#operator--)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame__iterator `
    ///
    pub fn OperatorMinusMinus(self: QTextFrame__iterator) QTextFrame__iterator {
        return .{ .ptr = qtc.QTextFrame__iterator_OperatorMinusMinus(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe-iterator.html#operator--)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame__iterator `
    ///
    /// ` param1: i32 `
    ///
    pub fn OperatorMinusMinus2(self: QTextFrame__iterator, param1: i32) QTextFrame__iterator {
        return .{ .ptr = qtc.QTextFrame__iterator_OperatorMinusMinus2(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextFrame__iterator `
    ///
    pub fn Delete(self: QTextFrame__iterator) void {
        qtc.QTextFrame__iterator_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock-iterator.html)
pub const QTextBlock__iterator = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock-iterator.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTextBlock__iterator,

    pub const _is_QTextBlock__iterator = {};

    /// New constructs a new QTextBlock::iterator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QTextBlock__iterator `
    ///
    pub fn New(other: anytype) QTextBlock__iterator {
        comptime _ = @TypeOf(other)._is_QTextBlock__iterator;
        return .{ .ptr = qtc.QTextBlock__iterator_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QTextBlock::iterator object and invalidates the source QTextBlock::iterator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QTextBlock__iterator `
    ///
    pub fn New2(other: anytype) QTextBlock__iterator {
        comptime _ = @TypeOf(other)._is_QTextBlock__iterator;
        return .{ .ptr = qtc.QTextBlock__iterator_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QTextBlock::iterator object.
    ///
    pub fn New3() QTextBlock__iterator {
        return .{ .ptr = qtc.QTextBlock__iterator_new3() };
    }

    /// New4 constructs a new QTextBlock::iterator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QTextBlock__iterator `
    ///
    pub fn New4(param1: anytype) QTextBlock__iterator {
        comptime _ = @TypeOf(param1)._is_QTextBlock__iterator;
        return .{ .ptr = qtc.QTextBlock__iterator_new4(@ptrCast(param1.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextBlock__iterator `
    ///
    /// ` other: QTextBlock__iterator `
    ///
    pub fn CopyAssign(self: QTextBlock__iterator, other: QTextBlock__iterator) void {
        qtc.QTextBlock__iterator_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextBlock__iterator `
    ///
    /// ` other: QTextBlock__iterator `
    ///
    pub fn MoveAssign(self: QTextBlock__iterator, other: QTextBlock__iterator) void {
        qtc.QTextBlock__iterator_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock-iterator.html#fragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock__iterator `
    ///
    pub fn Fragment(self: QTextBlock__iterator) QTextFragment {
        return .{ .ptr = qtc.QTextBlock__iterator_Fragment(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock-iterator.html#atEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock__iterator `
    ///
    pub fn AtEnd(self: QTextBlock__iterator) bool {
        return qtc.QTextBlock__iterator_AtEnd(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock-iterator.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock__iterator `
    ///
    /// ` o: QTextBlock__iterator `
    ///
    pub fn OperatorEqual(self: QTextBlock__iterator, o: anytype) bool {
        comptime _ = @TypeOf(o)._is_QTextBlock__iterator;
        return qtc.QTextBlock__iterator_OperatorEqual(@ptrCast(self.ptr), @ptrCast(o.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock-iterator.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock__iterator `
    ///
    /// ` o: QTextBlock__iterator `
    ///
    pub fn OperatorNotEqual(self: QTextBlock__iterator, o: anytype) bool {
        comptime _ = @TypeOf(o)._is_QTextBlock__iterator;
        return qtc.QTextBlock__iterator_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(o.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock-iterator.html#operator-2b-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock__iterator `
    ///
    pub fn OperatorPlusPlus(self: QTextBlock__iterator) QTextBlock__iterator {
        return .{ .ptr = qtc.QTextBlock__iterator_OperatorPlusPlus(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock-iterator.html#operator-2b-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock__iterator `
    ///
    /// ` param1: i32 `
    ///
    pub fn OperatorPlusPlus2(self: QTextBlock__iterator, param1: i32) QTextBlock__iterator {
        return .{ .ptr = qtc.QTextBlock__iterator_OperatorPlusPlus2(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock-iterator.html#operator--)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock__iterator `
    ///
    pub fn OperatorMinusMinus(self: QTextBlock__iterator) QTextBlock__iterator {
        return .{ .ptr = qtc.QTextBlock__iterator_OperatorMinusMinus(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock-iterator.html#operator--)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock__iterator `
    ///
    /// ` param1: i32 `
    ///
    pub fn OperatorMinusMinus2(self: QTextBlock__iterator, param1: i32) QTextBlock__iterator {
        return .{ .ptr = qtc.QTextBlock__iterator_OperatorMinusMinus2(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextBlock__iterator `
    ///
    pub fn Delete(self: QTextBlock__iterator) void {
        qtc.QTextBlock__iterator_Delete(@ptrCast(self.ptr));
    }
};
