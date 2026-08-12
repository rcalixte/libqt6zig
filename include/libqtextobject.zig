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

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextObject `
    ///
    pub fn metaObject(self: QTextObject) QMetaObject {
        return .{ .ptr = qtc.QTextObject_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QTextObject `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QTextObject, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QTextObject_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QTextObject, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QTextObject_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextObject.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `format` instead
    ///
    pub const Format = format;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextobject.html#format)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextObject `
    ///
    pub fn format(self: QTextObject) QTextFormat {
        return .{ .ptr = qtc.QTextObject_Format(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `formatIndex` instead
    ///
    pub const FormatIndex = formatIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextobject.html#formatIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextObject `
    ///
    pub fn formatIndex(self: QTextObject) i32 {
        return qtc.QTextObject_FormatIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `document` instead
    ///
    pub const Document = document;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextobject.html#document)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextObject `
    ///
    pub fn document(self: QTextObject) QTextDocument {
        return .{ .ptr = qtc.QTextObject_Document(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `objectIndex` instead
    ///
    pub const ObjectIndex = objectIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextobject.html#objectIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextObject `
    ///
    pub fn objectIndex(self: QTextObject) i32 {
        return qtc.QTextObject_ObjectIndex(@ptrCast(self.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextObject.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextObject.tr3: Memory allocation failed");
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
    /// ` self: QTextObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QTextObject, _event: anytype) bool {
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
    /// ` self: QTextObject `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QTextObject, watched: anytype, _event: anytype) bool {
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
    /// ` self: QTextObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QTextObject, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextObject.objectName: Memory allocation failed");
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
    /// ` self: QTextObject `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QTextObject, name: []const u8) void {
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
    /// ` self: QTextObject `
    ///
    pub fn isWidgetType(self: QTextObject) bool {
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
    /// ` self: QTextObject `
    ///
    pub fn isWindowType(self: QTextObject) bool {
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
    /// ` self: QTextObject `
    ///
    pub fn isQuickItemType(self: QTextObject) bool {
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
    /// ` self: QTextObject `
    ///
    pub fn signalsBlocked(self: QTextObject) bool {
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
    /// ` self: QTextObject `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QTextObject, b: bool) bool {
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
    /// ` self: QTextObject `
    ///
    pub fn thread(self: QTextObject) QThread {
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
    /// ` self: QTextObject `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QTextObject, _thread: anytype) bool {
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
    /// ` self: QTextObject `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QTextObject, interval: i32) i32 {
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
    /// ` self: QTextObject `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QTextObject, time: i64) i32 {
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
    /// ` self: QTextObject `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QTextObject, id: i32) void {
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
    /// ` self: QTextObject `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QTextObject, id: i32) void {
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
    /// ` self: QTextObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QTextObject, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QTextObject.children: Memory allocation failed");
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
    /// ` self: QTextObject `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QTextObject, _parent: anytype) void {
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
    /// ` self: QTextObject `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QTextObject, filterObj: anytype) void {
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
    /// ` self: QTextObject `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QTextObject, obj: anytype) void {
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
    /// ` self: QTextObject `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QTextObject, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QTextObject `
    ///
    pub fn disconnect3(self: QTextObject) bool {
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
    /// ` self: QTextObject `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QTextObject, receiver: anytype) bool {
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
    /// ` self: QTextObject `
    ///
    pub fn dumpObjectTree(self: QTextObject) void {
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
    /// ` self: QTextObject `
    ///
    pub fn dumpObjectInfo(self: QTextObject) void {
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
    /// ` self: QTextObject `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QTextObject, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QTextObject `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QTextObject, name: [:0]const u8) QVariant {
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
    /// ` self: QTextObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QTextObject, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QTextObject.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QTextObject.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QTextObject `
    ///
    pub fn bindingStorage(self: QTextObject) QBindingStorage {
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
    /// ` self: QTextObject `
    ///
    pub fn bindingStorage2(self: QTextObject) QBindingStorage {
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
    /// ` self: QTextObject `
    ///
    pub fn destroyed(self: QTextObject) void {
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
    /// ` self: QTextObject `
    ///
    /// ` callback: *const fn (self: QTextObject) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QTextObject, callback: *const fn (QTextObject) callconv(.c) void) void {
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
    /// ` self: QTextObject `
    ///
    pub fn parent(self: QTextObject) QObject {
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
    /// ` self: QTextObject `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QTextObject, classname: [:0]const u8) bool {
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
    /// ` self: QTextObject `
    ///
    pub fn deleteLater(self: QTextObject) void {
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
    /// ` self: QTextObject `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QTextObject, interval: i32, timerType: i32) i32 {
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
    /// ` self: QTextObject `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QTextObject, time: i64, timerType: i32) i32 {
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
    /// ` self: QTextObject `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QTextObject, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QTextObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QTextObject, signal: [:0]const u8) bool {
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
    /// ` self: QTextObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QTextObject, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QTextObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QTextObject, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QTextObject `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QTextObject, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QTextObject `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QTextObject, param1: anytype) void {
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
    /// ` self: QTextObject `
    ///
    /// ` callback: *const fn (self: QTextObject, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QTextObject, callback: *const fn (QTextObject, QObject) callconv(.c) void) void {
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
    /// ` self: QTextObject `
    ///
    /// ` callback: *const fn (self: QTextObject, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QTextObject, callback: *const fn (QTextObject, [*:0]const u8) callconv(.c) void) void {
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

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockGroup `
    ///
    pub fn metaObject(self: QTextBlockGroup) QMetaObject {
        return .{ .ptr = qtc.QTextBlockGroup_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockGroup `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QTextBlockGroup, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QTextBlockGroup_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QTextBlockGroup, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QTextBlockGroup_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextBlockGroup.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextBlockGroup.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextBlockGroup.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `format` instead
    ///
    pub const Format = format;

    /// Inherited from QTextObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextobject.html#format)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockGroup `
    ///
    pub fn format(self: QTextBlockGroup) QTextFormat {
        return .{ .ptr = qtc.QTextObject_Format(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `formatIndex` instead
    ///
    pub const FormatIndex = formatIndex;

    /// Inherited from QTextObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextobject.html#formatIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockGroup `
    ///
    pub fn formatIndex(self: QTextBlockGroup) i32 {
        return qtc.QTextObject_FormatIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `document` instead
    ///
    pub const Document = document;

    /// Inherited from QTextObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextobject.html#document)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockGroup `
    ///
    pub fn document(self: QTextBlockGroup) QTextDocument {
        return .{ .ptr = qtc.QTextObject_Document(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `objectIndex` instead
    ///
    pub const ObjectIndex = objectIndex;

    /// Inherited from QTextObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextobject.html#objectIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockGroup `
    ///
    pub fn objectIndex(self: QTextBlockGroup) i32 {
        return qtc.QTextObject_ObjectIndex(@ptrCast(self.ptr));
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
    /// ` self: QTextBlockGroup `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QTextBlockGroup, _event: anytype) bool {
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
    /// ` self: QTextBlockGroup `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QTextBlockGroup, watched: anytype, _event: anytype) bool {
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
    /// ` self: QTextBlockGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QTextBlockGroup, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextBlockGroup.objectName: Memory allocation failed");
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
    /// ` self: QTextBlockGroup `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QTextBlockGroup, name: []const u8) void {
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
    /// ` self: QTextBlockGroup `
    ///
    pub fn isWidgetType(self: QTextBlockGroup) bool {
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
    /// ` self: QTextBlockGroup `
    ///
    pub fn isWindowType(self: QTextBlockGroup) bool {
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
    /// ` self: QTextBlockGroup `
    ///
    pub fn isQuickItemType(self: QTextBlockGroup) bool {
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
    /// ` self: QTextBlockGroup `
    ///
    pub fn signalsBlocked(self: QTextBlockGroup) bool {
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
    /// ` self: QTextBlockGroup `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QTextBlockGroup, b: bool) bool {
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
    /// ` self: QTextBlockGroup `
    ///
    pub fn thread(self: QTextBlockGroup) QThread {
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
    /// ` self: QTextBlockGroup `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QTextBlockGroup, _thread: anytype) bool {
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
    /// ` self: QTextBlockGroup `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QTextBlockGroup, interval: i32) i32 {
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
    /// ` self: QTextBlockGroup `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QTextBlockGroup, time: i64) i32 {
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
    /// ` self: QTextBlockGroup `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QTextBlockGroup, id: i32) void {
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
    /// ` self: QTextBlockGroup `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QTextBlockGroup, id: i32) void {
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
    /// ` self: QTextBlockGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QTextBlockGroup, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QTextBlockGroup.children: Memory allocation failed");
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
    /// ` self: QTextBlockGroup `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QTextBlockGroup, _parent: anytype) void {
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
    /// ` self: QTextBlockGroup `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QTextBlockGroup, filterObj: anytype) void {
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
    /// ` self: QTextBlockGroup `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QTextBlockGroup, obj: anytype) void {
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
    /// ` self: QTextBlockGroup `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QTextBlockGroup, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QTextBlockGroup `
    ///
    pub fn disconnect3(self: QTextBlockGroup) bool {
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
    /// ` self: QTextBlockGroup `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QTextBlockGroup, receiver: anytype) bool {
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
    /// ` self: QTextBlockGroup `
    ///
    pub fn dumpObjectTree(self: QTextBlockGroup) void {
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
    /// ` self: QTextBlockGroup `
    ///
    pub fn dumpObjectInfo(self: QTextBlockGroup) void {
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
    /// ` self: QTextBlockGroup `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QTextBlockGroup, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QTextBlockGroup `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QTextBlockGroup, name: [:0]const u8) QVariant {
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
    /// ` self: QTextBlockGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QTextBlockGroup, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QTextBlockGroup.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QTextBlockGroup.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QTextBlockGroup `
    ///
    pub fn bindingStorage(self: QTextBlockGroup) QBindingStorage {
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
    /// ` self: QTextBlockGroup `
    ///
    pub fn bindingStorage2(self: QTextBlockGroup) QBindingStorage {
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
    /// ` self: QTextBlockGroup `
    ///
    pub fn destroyed(self: QTextBlockGroup) void {
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
    /// ` self: QTextBlockGroup `
    ///
    /// ` callback: *const fn (self: QTextBlockGroup) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QTextBlockGroup, callback: *const fn (QTextBlockGroup) callconv(.c) void) void {
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
    /// ` self: QTextBlockGroup `
    ///
    pub fn parent(self: QTextBlockGroup) QObject {
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
    /// ` self: QTextBlockGroup `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QTextBlockGroup, classname: [:0]const u8) bool {
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
    /// ` self: QTextBlockGroup `
    ///
    pub fn deleteLater(self: QTextBlockGroup) void {
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
    /// ` self: QTextBlockGroup `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QTextBlockGroup, interval: i32, timerType: i32) i32 {
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
    /// ` self: QTextBlockGroup `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QTextBlockGroup, time: i64, timerType: i32) i32 {
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
    /// ` self: QTextBlockGroup `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QTextBlockGroup, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QTextBlockGroup `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QTextBlockGroup, signal: [:0]const u8) bool {
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
    /// ` self: QTextBlockGroup `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QTextBlockGroup, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QTextBlockGroup `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QTextBlockGroup, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QTextBlockGroup `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QTextBlockGroup, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QTextBlockGroup `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QTextBlockGroup, param1: anytype) void {
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
    /// ` self: QTextBlockGroup `
    ///
    /// ` callback: *const fn (self: QTextBlockGroup, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QTextBlockGroup, callback: *const fn (QTextBlockGroup, QObject) callconv(.c) void) void {
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
    /// ` self: QTextBlockGroup `
    ///
    /// ` callback: *const fn (self: QTextBlockGroup, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QTextBlockGroup, callback: *const fn (QTextBlockGroup, [*:0]const u8) callconv(.c) void) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QTextFrame object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` doc: QTextDocument `
    ///
    pub fn new(doc: anytype) QTextFrame {
        comptime _ = @TypeOf(doc)._is_QTextDocument;
        return .{ .ptr = qtc.QTextFrame_new(@ptrCast(doc.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    pub fn metaObject(self: QTextFrame) QMetaObject {
        return .{ .ptr = qtc.QTextFrame_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QTextFrame `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QTextFrame, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QTextFrame_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTextFrame `
    ///
    pub fn superMetaObject(self: QTextFrame) QMetaObject {
        return .{ .ptr = qtc.QTextFrame_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QTextFrame, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QTextFrame_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextFrame `
    ///
    /// ` callback: *const fn (self: QTextFrame, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QTextFrame, callback: *const fn (QTextFrame, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QTextFrame_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QTextFrame, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QTextFrame_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QTextFrame, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QTextFrame_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextFrame `
    ///
    /// ` callback: *const fn (self: QTextFrame, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QTextFrame, callback: *const fn (QTextFrame, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QTextFrame_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: QTextFrame, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QTextFrame_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextFrame.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setFrameFormat` instead
    ///
    pub const SetFrameFormat = setFrameFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#setFrameFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    /// ` _format: QTextFrameFormat `
    ///
    pub fn setFrameFormat(self: QTextFrame, _format: anytype) void {
        comptime _ = @TypeOf(_format)._is_QTextFrameFormat;
        qtc.QTextFrame_SetFrameFormat(@ptrCast(self.ptr), @ptrCast(_format.ptr));
    }

    /// ### DEPRECATED: Use `frameFormat` instead
    ///
    pub const FrameFormat = frameFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#frameFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    pub fn frameFormat(self: QTextFrame) QTextFrameFormat {
        return .{ .ptr = qtc.QTextFrame_FrameFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `firstCursorPosition` instead
    ///
    pub const FirstCursorPosition = firstCursorPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#firstCursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    pub fn firstCursorPosition(self: QTextFrame) QTextCursor {
        return .{ .ptr = qtc.QTextFrame_FirstCursorPosition(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `lastCursorPosition` instead
    ///
    pub const LastCursorPosition = lastCursorPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#lastCursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    pub fn lastCursorPosition(self: QTextFrame) QTextCursor {
        return .{ .ptr = qtc.QTextFrame_LastCursorPosition(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `firstPosition` instead
    ///
    pub const FirstPosition = firstPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#firstPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    pub fn firstPosition(self: QTextFrame) i32 {
        return qtc.QTextFrame_FirstPosition(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `lastPosition` instead
    ///
    pub const LastPosition = lastPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#lastPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    pub fn lastPosition(self: QTextFrame) i32 {
        return qtc.QTextFrame_LastPosition(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `childFrames` instead
    ///
    pub const ChildFrames = childFrames;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#childFrames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn childFrames(self: QTextFrame, allocator: std.mem.Allocator) []QTextFrame {
        const _arr: qtc.libqt_list = qtc.QTextFrame_ChildFrames(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTextFrame, _arr.len) catch @panic("QTextFrame.childFrames: Memory allocation failed");
        const _data_val: [*]QtC.QTextFrame = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `parentFrame` instead
    ///
    pub const ParentFrame = parentFrame;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#parentFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    pub fn parentFrame(self: QTextFrame) QTextFrame {
        return .{ .ptr = qtc.QTextFrame_ParentFrame(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `begin` instead
    ///
    pub const Begin = begin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#begin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    pub fn begin(self: QTextFrame) QTextFrame__iterator {
        return .{ .ptr = qtc.QTextFrame_Begin(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `end` instead
    ///
    pub const End = end;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    pub fn end(self: QTextFrame) QTextFrame__iterator {
        return .{ .ptr = qtc.QTextFrame_End(@ptrCast(self.ptr)) };
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextFrame.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextFrame.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `format` instead
    ///
    pub const Format = format;

    /// Inherited from QTextObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextobject.html#format)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    pub fn format(self: QTextFrame) QTextFormat {
        return .{ .ptr = qtc.QTextObject_Format(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `formatIndex` instead
    ///
    pub const FormatIndex = formatIndex;

    /// Inherited from QTextObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextobject.html#formatIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    pub fn formatIndex(self: QTextFrame) i32 {
        return qtc.QTextObject_FormatIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `document` instead
    ///
    pub const Document = document;

    /// Inherited from QTextObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextobject.html#document)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    pub fn document(self: QTextFrame) QTextDocument {
        return .{ .ptr = qtc.QTextObject_Document(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `objectIndex` instead
    ///
    pub const ObjectIndex = objectIndex;

    /// Inherited from QTextObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextobject.html#objectIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame `
    ///
    pub fn objectIndex(self: QTextFrame) i32 {
        return qtc.QTextObject_ObjectIndex(@ptrCast(self.ptr));
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
    /// ` self: QTextFrame `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QTextFrame, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextFrame.objectName: Memory allocation failed");
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
    /// ` self: QTextFrame `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QTextFrame, name: []const u8) void {
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
    /// ` self: QTextFrame `
    ///
    pub fn isWidgetType(self: QTextFrame) bool {
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
    /// ` self: QTextFrame `
    ///
    pub fn isWindowType(self: QTextFrame) bool {
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
    /// ` self: QTextFrame `
    ///
    pub fn isQuickItemType(self: QTextFrame) bool {
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
    /// ` self: QTextFrame `
    ///
    pub fn signalsBlocked(self: QTextFrame) bool {
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
    /// ` self: QTextFrame `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QTextFrame, b: bool) bool {
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
    /// ` self: QTextFrame `
    ///
    pub fn thread(self: QTextFrame) QThread {
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
    /// ` self: QTextFrame `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QTextFrame, _thread: anytype) bool {
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
    /// ` self: QTextFrame `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QTextFrame, interval: i32) i32 {
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
    /// ` self: QTextFrame `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QTextFrame, time: i64) i32 {
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
    /// ` self: QTextFrame `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QTextFrame, id: i32) void {
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
    /// ` self: QTextFrame `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QTextFrame, id: i32) void {
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
    /// ` self: QTextFrame `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QTextFrame, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QTextFrame.children: Memory allocation failed");
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
    /// ` self: QTextFrame `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QTextFrame, _parent: anytype) void {
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
    /// ` self: QTextFrame `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QTextFrame, filterObj: anytype) void {
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
    /// ` self: QTextFrame `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QTextFrame, obj: anytype) void {
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
    /// ` self: QTextFrame `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QTextFrame, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QTextFrame `
    ///
    pub fn disconnect3(self: QTextFrame) bool {
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
    /// ` self: QTextFrame `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QTextFrame, receiver: anytype) bool {
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
    /// ` self: QTextFrame `
    ///
    pub fn dumpObjectTree(self: QTextFrame) void {
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
    /// ` self: QTextFrame `
    ///
    pub fn dumpObjectInfo(self: QTextFrame) void {
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
    /// ` self: QTextFrame `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QTextFrame, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QTextFrame `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QTextFrame, name: [:0]const u8) QVariant {
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
    /// ` self: QTextFrame `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QTextFrame, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QTextFrame.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QTextFrame.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QTextFrame `
    ///
    pub fn bindingStorage(self: QTextFrame) QBindingStorage {
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
    /// ` self: QTextFrame `
    ///
    pub fn bindingStorage2(self: QTextFrame) QBindingStorage {
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
    /// ` self: QTextFrame `
    ///
    pub fn destroyed(self: QTextFrame) void {
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
    /// ` self: QTextFrame `
    ///
    /// ` callback: *const fn (self: QTextFrame) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QTextFrame, callback: *const fn (QTextFrame) callconv(.c) void) void {
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
    /// ` self: QTextFrame `
    ///
    pub fn parent(self: QTextFrame) QObject {
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
    /// ` self: QTextFrame `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QTextFrame, classname: [:0]const u8) bool {
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
    /// ` self: QTextFrame `
    ///
    pub fn deleteLater(self: QTextFrame) void {
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
    /// ` self: QTextFrame `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QTextFrame, interval: i32, timerType: i32) i32 {
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
    /// ` self: QTextFrame `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QTextFrame, time: i64, timerType: i32) i32 {
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
    /// ` self: QTextFrame `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QTextFrame, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QTextFrame `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QTextFrame, signal: [:0]const u8) bool {
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
    /// ` self: QTextFrame `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QTextFrame, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QTextFrame `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QTextFrame, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QTextFrame `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QTextFrame, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QTextFrame `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QTextFrame, param1: anytype) void {
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
    /// ` self: QTextFrame `
    ///
    /// ` callback: *const fn (self: QTextFrame, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QTextFrame, callback: *const fn (QTextFrame, QObject) callconv(.c) void) void {
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
    /// ` self: QTextFrame `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QTextFrame, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QTextFrame_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTextFrame `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QTextFrame, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QTextFrame_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTextFrame`
    ///
    /// ` callback: *const fn (self: QTextFrame, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QTextFrame, callback: *const fn (QTextFrame, QEvent) callconv(.c) bool) void {
        qtc.QTextFrame_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QTextFrame, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QTextFrame_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QTextFrame, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QTextFrame_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

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
    pub fn onEventFilter(self: QTextFrame, callback: *const fn (QTextFrame, QObject, QEvent) callconv(.c) bool) void {
        qtc.QTextFrame_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTextFrame `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QTextFrame, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QTextFrame_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTextFrame `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QTextFrame, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QTextFrame_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTextFrame`
    ///
    /// ` callback: *const fn (self: QTextFrame, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QTextFrame, callback: *const fn (QTextFrame, QTimerEvent) callconv(.c) void) void {
        qtc.QTextFrame_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTextFrame `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QTextFrame, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QTextFrame_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTextFrame `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QTextFrame, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QTextFrame_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTextFrame`
    ///
    /// ` callback: *const fn (self: QTextFrame, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QTextFrame, callback: *const fn (QTextFrame, QChildEvent) callconv(.c) void) void {
        qtc.QTextFrame_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTextFrame `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QTextFrame, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QTextFrame_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTextFrame `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QTextFrame, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QTextFrame_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTextFrame`
    ///
    /// ` callback: *const fn (self: QTextFrame, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QTextFrame, callback: *const fn (QTextFrame, QEvent) callconv(.c) void) void {
        qtc.QTextFrame_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTextFrame `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QTextFrame, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTextFrame_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTextFrame `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QTextFrame, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTextFrame_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTextFrame`
    ///
    /// ` callback: *const fn (self: QTextFrame, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QTextFrame, callback: *const fn (QTextFrame, QMetaMethod) callconv(.c) void) void {
        qtc.QTextFrame_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTextFrame `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QTextFrame, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTextFrame_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTextFrame `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QTextFrame, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTextFrame_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTextFrame`
    ///
    /// ` callback: *const fn (self: QTextFrame, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QTextFrame, callback: *const fn (QTextFrame, QMetaMethod) callconv(.c) void) void {
        qtc.QTextFrame_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setFormat` instead
    ///
    pub const SetFormat = setFormat;

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
    /// ` _format: QTextFormat `
    ///
    pub fn setFormat(self: QTextFrame, _format: anytype) void {
        comptime _ = @TypeOf(_format)._is_QTextFormat;
        qtc.QTextFrame_SetFormat(@ptrCast(self.ptr), @ptrCast(_format.ptr));
    }

    /// ### DEPRECATED: Use `superSetFormat` instead
    ///
    pub const SuperSetFormat = superSetFormat;

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
    /// ` _format: QTextFormat `
    ///
    pub fn superSetFormat(self: QTextFrame, _format: anytype) void {
        comptime _ = @TypeOf(_format)._is_QTextFormat;
        qtc.QTextFrame_SuperSetFormat(@ptrCast(self.ptr), @ptrCast(_format.ptr));
    }

    /// ### DEPRECATED: Use `onSetFormat` instead
    ///
    pub const OnSetFormat = onSetFormat;

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
    pub fn onSetFormat(self: QTextFrame, callback: *const fn (QTextFrame, QTextFormat) callconv(.c) void) void {
        qtc.QTextFrame_OnSetFormat(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTextFrame `
    ///
    pub fn sender(self: QTextFrame) QObject {
        return .{ .ptr = qtc.QTextFrame_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QTextFrame `
    ///
    pub fn superSender(self: QTextFrame) QObject {
        return .{ .ptr = qtc.QTextFrame_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QTextFrame`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QTextFrame, callback: *const fn () callconv(.c) QObject) void {
        qtc.QTextFrame_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTextFrame `
    ///
    pub fn senderSignalIndex(self: QTextFrame) i32 {
        return qtc.QTextFrame_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QTextFrame `
    ///
    pub fn superSenderSignalIndex(self: QTextFrame) i32 {
        return qtc.QTextFrame_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QTextFrame`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QTextFrame, callback: *const fn () callconv(.c) i32) void {
        qtc.QTextFrame_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTextFrame `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QTextFrame, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QTextFrame_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QTextFrame `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QTextFrame, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QTextFrame_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QTextFrame`
    ///
    /// ` callback: *const fn (self: QTextFrame, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QTextFrame, callback: *const fn (QTextFrame, [*:0]const u8) callconv(.c) i32) void {
        qtc.QTextFrame_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTextFrame `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QTextFrame, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QTextFrame_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTextFrame `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QTextFrame, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QTextFrame_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTextFrame`
    ///
    /// ` callback: *const fn (self: QTextFrame, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QTextFrame, callback: *const fn (QTextFrame, QMetaMethod) callconv(.c) bool) void {
        qtc.QTextFrame_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTextFrame `
    ///
    /// ` callback: *const fn (self: QTextFrame, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QTextFrame, callback: *const fn (QTextFrame, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#dtor.QTextFrame)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextFrame `
    ///
    pub fn delete(self: QTextFrame) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QTextBlockUserData object in C++ memory
    ///
    pub fn new() QTextBlockUserData {
        return .{ .ptr = qtc.QTextBlockUserData_new() };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockuserdata.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockUserData `
    ///
    /// ` param1: QTextBlockUserData `
    ///
    pub fn operatorAssign(self: QTextBlockUserData, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTextBlockUserData;
        qtc.QTextBlockUserData_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockuserdata.html#dtor.QTextBlockUserData)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextBlockUserData `
    ///
    pub fn delete(self: QTextBlockUserData) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QTextBlock object in C++ memory
    ///
    pub fn new() QTextBlock {
        return .{ .ptr = qtc.QTextBlock_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QTextBlock object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` o: QTextBlock `
    ///
    pub fn new2(o: anytype) QTextBlock {
        comptime _ = @TypeOf(o)._is_QTextBlock;
        return .{ .ptr = qtc.QTextBlock_new2(@ptrCast(o.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    /// ` o: QTextBlock `
    ///
    pub fn operatorAssign(self: QTextBlock, o: anytype) void {
        comptime _ = @TypeOf(o)._is_QTextBlock;
        qtc.QTextBlock_OperatorAssign(@ptrCast(self.ptr), @ptrCast(o.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    pub fn isValid(self: QTextBlock) bool {
        return qtc.QTextBlock_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    /// ` o: QTextBlock `
    ///
    pub fn operatorEqual(self: QTextBlock, o: anytype) bool {
        comptime _ = @TypeOf(o)._is_QTextBlock;
        return qtc.QTextBlock_OperatorEqual(@ptrCast(self.ptr), @ptrCast(o.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    /// ` o: QTextBlock `
    ///
    pub fn operatorNotEqual(self: QTextBlock, o: anytype) bool {
        comptime _ = @TypeOf(o)._is_QTextBlock;
        return qtc.QTextBlock_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(o.ptr));
    }

    /// ### DEPRECATED: Use `operatorLesser` instead
    ///
    pub const OperatorLesser = operatorLesser;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#operator-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    /// ` o: QTextBlock `
    ///
    pub fn operatorLesser(self: QTextBlock, o: anytype) bool {
        comptime _ = @TypeOf(o)._is_QTextBlock;
        return qtc.QTextBlock_OperatorLesser(@ptrCast(self.ptr), @ptrCast(o.ptr));
    }

    /// ### DEPRECATED: Use `position` instead
    ///
    pub const Position = position;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    pub fn position(self: QTextBlock) i32 {
        return qtc.QTextBlock_Position(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `length` instead
    ///
    pub const Length = length;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    pub fn length(self: QTextBlock) i32 {
        return qtc.QTextBlock_Length(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `contains` instead
    ///
    pub const Contains = contains;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    /// ` _position: i32 `
    ///
    pub fn contains(self: QTextBlock, _position: i32) bool {
        return qtc.QTextBlock_Contains(@ptrCast(self.ptr), @bitCast(_position));
    }

    /// ### DEPRECATED: Use `layout` instead
    ///
    pub const Layout = layout;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#layout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    pub fn layout(self: QTextBlock) QTextLayout {
        return .{ .ptr = qtc.QTextBlock_Layout(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `clearLayout` instead
    ///
    pub const ClearLayout = clearLayout;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#clearLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    pub fn clearLayout(self: QTextBlock) void {
        qtc.QTextBlock_ClearLayout(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `blockFormat` instead
    ///
    pub const BlockFormat = blockFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#blockFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    pub fn blockFormat(self: QTextBlock) QTextBlockFormat {
        return .{ .ptr = qtc.QTextBlock_BlockFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `blockFormatIndex` instead
    ///
    pub const BlockFormatIndex = blockFormatIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#blockFormatIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    pub fn blockFormatIndex(self: QTextBlock) i32 {
        return qtc.QTextBlock_BlockFormatIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `charFormat` instead
    ///
    pub const CharFormat = charFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#charFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    pub fn charFormat(self: QTextBlock) QTextCharFormat {
        return .{ .ptr = qtc.QTextBlock_CharFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `charFormatIndex` instead
    ///
    pub const CharFormatIndex = charFormatIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#charFormatIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    pub fn charFormatIndex(self: QTextBlock) i32 {
        return qtc.QTextBlock_CharFormatIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `textDirection` instead
    ///
    pub const TextDirection = textDirection;

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
    pub fn textDirection(self: QTextBlock) i32 {
        return qtc.QTextBlock_TextDirection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn text(self: QTextBlock, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextBlock_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextBlock.text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `textFormats` instead
    ///
    pub const TextFormats = textFormats;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#textFormats)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn textFormats(self: QTextBlock, allocator: std.mem.Allocator) []QTextLayout__FormatRange {
        const _arr: qtc.libqt_list = qtc.QTextBlock_TextFormats(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTextLayout__FormatRange, _arr.len) catch @panic("QTextBlock.textFormats: Memory allocation failed");
        const _data_val: [*]QtC.QTextLayout__FormatRange = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `document` instead
    ///
    pub const Document = document;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#document)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    pub fn document(self: QTextBlock) QTextDocument {
        return .{ .ptr = qtc.QTextBlock_Document(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `textList` instead
    ///
    pub const TextList = textList;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#textList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    pub fn textList(self: QTextBlock) QTextList {
        return .{ .ptr = qtc.QTextBlock_TextList(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `userData` instead
    ///
    pub const UserData = userData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#userData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    pub fn userData(self: QTextBlock) QTextBlockUserData {
        return .{ .ptr = qtc.QTextBlock_UserData(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setUserData` instead
    ///
    pub const SetUserData = setUserData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#setUserData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    /// ` data: QTextBlockUserData `
    ///
    pub fn setUserData(self: QTextBlock, data: anytype) void {
        comptime _ = @TypeOf(data)._is_QTextBlockUserData;
        qtc.QTextBlock_SetUserData(@ptrCast(self.ptr), @ptrCast(data.ptr));
    }

    /// ### DEPRECATED: Use `userState` instead
    ///
    pub const UserState = userState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#userState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    pub fn userState(self: QTextBlock) i32 {
        return qtc.QTextBlock_UserState(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setUserState` instead
    ///
    pub const SetUserState = setUserState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#setUserState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    /// ` state: i32 `
    ///
    pub fn setUserState(self: QTextBlock, state: i32) void {
        qtc.QTextBlock_SetUserState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// ### DEPRECATED: Use `revision` instead
    ///
    pub const Revision = revision;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#revision)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    pub fn revision(self: QTextBlock) i32 {
        return qtc.QTextBlock_Revision(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRevision` instead
    ///
    pub const SetRevision = setRevision;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#setRevision)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    /// ` rev: i32 `
    ///
    pub fn setRevision(self: QTextBlock, rev: i32) void {
        qtc.QTextBlock_SetRevision(@ptrCast(self.ptr), @bitCast(rev));
    }

    /// ### DEPRECATED: Use `isVisible` instead
    ///
    pub const IsVisible = isVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    pub fn isVisible(self: QTextBlock) bool {
        return qtc.QTextBlock_IsVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVisible` instead
    ///
    pub const SetVisible = setVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    /// ` visible: bool `
    ///
    pub fn setVisible(self: QTextBlock, visible: bool) void {
        qtc.QTextBlock_SetVisible(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `blockNumber` instead
    ///
    pub const BlockNumber = blockNumber;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#blockNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    pub fn blockNumber(self: QTextBlock) i32 {
        return qtc.QTextBlock_BlockNumber(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `firstLineNumber` instead
    ///
    pub const FirstLineNumber = firstLineNumber;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#firstLineNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    pub fn firstLineNumber(self: QTextBlock) i32 {
        return qtc.QTextBlock_FirstLineNumber(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLineCount` instead
    ///
    pub const SetLineCount = setLineCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#setLineCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    /// ` count: i32 `
    ///
    pub fn setLineCount(self: QTextBlock, count: i32) void {
        qtc.QTextBlock_SetLineCount(@ptrCast(self.ptr), @bitCast(count));
    }

    /// ### DEPRECATED: Use `lineCount` instead
    ///
    pub const LineCount = lineCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#lineCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    pub fn lineCount(self: QTextBlock) i32 {
        return qtc.QTextBlock_LineCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `begin` instead
    ///
    pub const Begin = begin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#begin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    pub fn begin(self: QTextBlock) QTextBlock__iterator {
        return .{ .ptr = qtc.QTextBlock_Begin(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `end` instead
    ///
    pub const End = end;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    pub fn end(self: QTextBlock) QTextBlock__iterator {
        return .{ .ptr = qtc.QTextBlock_End(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `next` instead
    ///
    pub const Next = next;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#next)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    pub fn next(self: QTextBlock) QTextBlock {
        return .{ .ptr = qtc.QTextBlock_Next(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `previous` instead
    ///
    pub const Previous = previous;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#previous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    pub fn previous(self: QTextBlock) QTextBlock {
        return .{ .ptr = qtc.QTextBlock_Previous(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `fragmentIndex` instead
    ///
    pub const FragmentIndex = fragmentIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#fragmentIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock `
    ///
    pub fn fragmentIndex(self: QTextBlock) i32 {
        return qtc.QTextBlock_FragmentIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock.html#dtor.QTextBlock)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextBlock `
    ///
    pub fn delete(self: QTextBlock) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QTextFragment object in C++ memory
    ///
    pub fn new() QTextFragment {
        return .{ .ptr = qtc.QTextFragment_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QTextFragment object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` o: QTextFragment `
    ///
    pub fn new2(o: anytype) QTextFragment {
        comptime _ = @TypeOf(o)._is_QTextFragment;
        return .{ .ptr = qtc.QTextFragment_new2(@ptrCast(o.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextfragment.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFragment `
    ///
    /// ` o: QTextFragment `
    ///
    pub fn operatorAssign(self: QTextFragment, o: anytype) void {
        comptime _ = @TypeOf(o)._is_QTextFragment;
        qtc.QTextFragment_OperatorAssign(@ptrCast(self.ptr), @ptrCast(o.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextfragment.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFragment `
    ///
    pub fn isValid(self: QTextFragment) bool {
        return qtc.QTextFragment_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextfragment.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFragment `
    ///
    /// ` o: QTextFragment `
    ///
    pub fn operatorEqual(self: QTextFragment, o: anytype) bool {
        comptime _ = @TypeOf(o)._is_QTextFragment;
        return qtc.QTextFragment_OperatorEqual(@ptrCast(self.ptr), @ptrCast(o.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextfragment.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFragment `
    ///
    /// ` o: QTextFragment `
    ///
    pub fn operatorNotEqual(self: QTextFragment, o: anytype) bool {
        comptime _ = @TypeOf(o)._is_QTextFragment;
        return qtc.QTextFragment_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(o.ptr));
    }

    /// ### DEPRECATED: Use `operatorLesser` instead
    ///
    pub const OperatorLesser = operatorLesser;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextfragment.html#operator-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFragment `
    ///
    /// ` o: QTextFragment `
    ///
    pub fn operatorLesser(self: QTextFragment, o: anytype) bool {
        comptime _ = @TypeOf(o)._is_QTextFragment;
        return qtc.QTextFragment_OperatorLesser(@ptrCast(self.ptr), @ptrCast(o.ptr));
    }

    /// ### DEPRECATED: Use `position` instead
    ///
    pub const Position = position;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextfragment.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFragment `
    ///
    pub fn position(self: QTextFragment) i32 {
        return qtc.QTextFragment_Position(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `length` instead
    ///
    pub const Length = length;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextfragment.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFragment `
    ///
    pub fn length(self: QTextFragment) i32 {
        return qtc.QTextFragment_Length(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `contains` instead
    ///
    pub const Contains = contains;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextfragment.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFragment `
    ///
    /// ` _position: i32 `
    ///
    pub fn contains(self: QTextFragment, _position: i32) bool {
        return qtc.QTextFragment_Contains(@ptrCast(self.ptr), @bitCast(_position));
    }

    /// ### DEPRECATED: Use `charFormat` instead
    ///
    pub const CharFormat = charFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextfragment.html#charFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFragment `
    ///
    pub fn charFormat(self: QTextFragment) QTextCharFormat {
        return .{ .ptr = qtc.QTextFragment_CharFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `charFormatIndex` instead
    ///
    pub const CharFormatIndex = charFormatIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextfragment.html#charFormatIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFragment `
    ///
    pub fn charFormatIndex(self: QTextFragment) i32 {
        return qtc.QTextFragment_CharFormatIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextfragment.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFragment `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn text(self: QTextFragment, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextFragment_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextFragment.text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `glyphRuns` instead
    ///
    pub const GlyphRuns = glyphRuns;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextfragment.html#glyphRuns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFragment `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn glyphRuns(self: QTextFragment, allocator: std.mem.Allocator) []QGlyphRun {
        const _arr: qtc.libqt_list = qtc.QTextFragment_GlyphRuns(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGlyphRun, _arr.len) catch @panic("QTextFragment.glyphRuns: Memory allocation failed");
        const _data_val: [*]QtC.QGlyphRun = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `glyphRuns1` instead
    ///
    pub const GlyphRuns1 = glyphRuns1;

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
    pub fn glyphRuns1(self: QTextFragment, allocator: std.mem.Allocator, from: i32) []QGlyphRun {
        const _arr: qtc.libqt_list = qtc.QTextFragment_GlyphRuns1(@ptrCast(self.ptr), @bitCast(from));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGlyphRun, _arr.len) catch @panic("QTextFragment.glyphRuns1: Memory allocation failed");
        const _data_val: [*]QtC.QGlyphRun = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `glyphRuns2` instead
    ///
    pub const GlyphRuns2 = glyphRuns2;

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
    /// ` _length: i32 `
    ///
    pub fn glyphRuns2(self: QTextFragment, allocator: std.mem.Allocator, from: i32, _length: i32) []QGlyphRun {
        const _arr: qtc.libqt_list = qtc.QTextFragment_GlyphRuns2(@ptrCast(self.ptr), @bitCast(from), @bitCast(_length));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGlyphRun, _arr.len) catch @panic("QTextFragment.glyphRuns2: Memory allocation failed");
        const _data_val: [*]QtC.QGlyphRun = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextfragment.html#dtor.QTextFragment)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextFragment `
    ///
    pub fn delete(self: QTextFragment) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QTextFrame::iterator object in C++ memory
    ///
    pub fn new() QTextFrame__iterator {
        return .{ .ptr = qtc.QTextFrame__iterator_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QTextFrame::iterator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QTextFrame__iterator `
    ///
    pub fn new2(other: anytype) QTextFrame__iterator {
        comptime _ = @TypeOf(other)._is_QTextFrame__iterator;
        return .{ .ptr = qtc.QTextFrame__iterator_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QTextFrame::iterator object and invalidate the source QTextFrame::iterator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QTextFrame__iterator `
    ///
    pub fn new3(other: anytype) QTextFrame__iterator {
        comptime _ = @TypeOf(other)._is_QTextFrame__iterator;
        return .{ .ptr = qtc.QTextFrame__iterator_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QTextFrame::iterator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QTextFrame__iterator `
    ///
    pub fn new4(param1: anytype) QTextFrame__iterator {
        comptime _ = @TypeOf(param1)._is_QTextFrame__iterator;
        return .{ .ptr = qtc.QTextFrame__iterator_new4(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextFrame__iterator `
    ///
    /// ` other: QTextFrame__iterator `
    ///
    pub fn copyAssign(self: QTextFrame__iterator, other: QTextFrame__iterator) void {
        qtc.QTextFrame__iterator_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextFrame__iterator `
    ///
    /// ` other: QTextFrame__iterator `
    ///
    pub fn moveAssign(self: QTextFrame__iterator, other: QTextFrame__iterator) void {
        qtc.QTextFrame__iterator_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `parentFrame` instead
    ///
    pub const ParentFrame = parentFrame;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe-iterator.html#parentFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame__iterator `
    ///
    pub fn parentFrame(self: QTextFrame__iterator) QTextFrame {
        return .{ .ptr = qtc.QTextFrame__iterator_ParentFrame(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `currentFrame` instead
    ///
    pub const CurrentFrame = currentFrame;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe-iterator.html#currentFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame__iterator `
    ///
    pub fn currentFrame(self: QTextFrame__iterator) QTextFrame {
        return .{ .ptr = qtc.QTextFrame__iterator_CurrentFrame(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `currentBlock` instead
    ///
    pub const CurrentBlock = currentBlock;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe-iterator.html#currentBlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame__iterator `
    ///
    pub fn currentBlock(self: QTextFrame__iterator) QTextBlock {
        return .{ .ptr = qtc.QTextFrame__iterator_CurrentBlock(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `atEnd` instead
    ///
    pub const AtEnd = atEnd;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe-iterator.html#atEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame__iterator `
    ///
    pub fn atEnd(self: QTextFrame__iterator) bool {
        return qtc.QTextFrame__iterator_AtEnd(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe-iterator.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame__iterator `
    ///
    /// ` o: QTextFrame__iterator `
    ///
    pub fn operatorEqual(self: QTextFrame__iterator, o: anytype) bool {
        comptime _ = @TypeOf(o)._is_QTextFrame__iterator;
        return qtc.QTextFrame__iterator_OperatorEqual(@ptrCast(self.ptr), @ptrCast(o.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe-iterator.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame__iterator `
    ///
    /// ` o: QTextFrame__iterator `
    ///
    pub fn operatorNotEqual(self: QTextFrame__iterator, o: anytype) bool {
        comptime _ = @TypeOf(o)._is_QTextFrame__iterator;
        return qtc.QTextFrame__iterator_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(o.ptr));
    }

    /// ### DEPRECATED: Use `operatorPlusPlus` instead
    ///
    pub const OperatorPlusPlus = operatorPlusPlus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe-iterator.html#operator-2b-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame__iterator `
    ///
    pub fn operatorPlusPlus(self: QTextFrame__iterator) QTextFrame__iterator {
        return .{ .ptr = qtc.QTextFrame__iterator_OperatorPlusPlus(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorPlusPlus2` instead
    ///
    pub const OperatorPlusPlus2 = operatorPlusPlus2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe-iterator.html#operator-2b-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame__iterator `
    ///
    /// ` param1: i32 `
    ///
    pub fn operatorPlusPlus2(self: QTextFrame__iterator, param1: i32) QTextFrame__iterator {
        return .{ .ptr = qtc.QTextFrame__iterator_OperatorPlusPlus2(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `operatorMinusMinus` instead
    ///
    pub const OperatorMinusMinus = operatorMinusMinus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe-iterator.html#operator--)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame__iterator `
    ///
    pub fn operatorMinusMinus(self: QTextFrame__iterator) QTextFrame__iterator {
        return .{ .ptr = qtc.QTextFrame__iterator_OperatorMinusMinus(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorMinusMinus2` instead
    ///
    pub const OperatorMinusMinus2 = operatorMinusMinus2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframe-iterator.html#operator--)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrame__iterator `
    ///
    /// ` param1: i32 `
    ///
    pub fn operatorMinusMinus2(self: QTextFrame__iterator, param1: i32) QTextFrame__iterator {
        return .{ .ptr = qtc.QTextFrame__iterator_OperatorMinusMinus2(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextFrame__iterator `
    ///
    pub fn delete(self: QTextFrame__iterator) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QTextBlock::iterator object in C++ memory
    ///
    pub fn new() QTextBlock__iterator {
        return .{ .ptr = qtc.QTextBlock__iterator_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QTextBlock::iterator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QTextBlock__iterator `
    ///
    pub fn new2(other: anytype) QTextBlock__iterator {
        comptime _ = @TypeOf(other)._is_QTextBlock__iterator;
        return .{ .ptr = qtc.QTextBlock__iterator_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QTextBlock::iterator object and invalidate the source QTextBlock::iterator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QTextBlock__iterator `
    ///
    pub fn new3(other: anytype) QTextBlock__iterator {
        comptime _ = @TypeOf(other)._is_QTextBlock__iterator;
        return .{ .ptr = qtc.QTextBlock__iterator_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QTextBlock::iterator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QTextBlock__iterator `
    ///
    pub fn new4(param1: anytype) QTextBlock__iterator {
        comptime _ = @TypeOf(param1)._is_QTextBlock__iterator;
        return .{ .ptr = qtc.QTextBlock__iterator_new4(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextBlock__iterator `
    ///
    /// ` other: QTextBlock__iterator `
    ///
    pub fn copyAssign(self: QTextBlock__iterator, other: QTextBlock__iterator) void {
        qtc.QTextBlock__iterator_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextBlock__iterator `
    ///
    /// ` other: QTextBlock__iterator `
    ///
    pub fn moveAssign(self: QTextBlock__iterator, other: QTextBlock__iterator) void {
        qtc.QTextBlock__iterator_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `fragment` instead
    ///
    pub const Fragment = fragment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock-iterator.html#fragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock__iterator `
    ///
    pub fn fragment(self: QTextBlock__iterator) QTextFragment {
        return .{ .ptr = qtc.QTextBlock__iterator_Fragment(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `atEnd` instead
    ///
    pub const AtEnd = atEnd;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock-iterator.html#atEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock__iterator `
    ///
    pub fn atEnd(self: QTextBlock__iterator) bool {
        return qtc.QTextBlock__iterator_AtEnd(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock-iterator.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock__iterator `
    ///
    /// ` o: QTextBlock__iterator `
    ///
    pub fn operatorEqual(self: QTextBlock__iterator, o: anytype) bool {
        comptime _ = @TypeOf(o)._is_QTextBlock__iterator;
        return qtc.QTextBlock__iterator_OperatorEqual(@ptrCast(self.ptr), @ptrCast(o.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock-iterator.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock__iterator `
    ///
    /// ` o: QTextBlock__iterator `
    ///
    pub fn operatorNotEqual(self: QTextBlock__iterator, o: anytype) bool {
        comptime _ = @TypeOf(o)._is_QTextBlock__iterator;
        return qtc.QTextBlock__iterator_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(o.ptr));
    }

    /// ### DEPRECATED: Use `operatorPlusPlus` instead
    ///
    pub const OperatorPlusPlus = operatorPlusPlus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock-iterator.html#operator-2b-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock__iterator `
    ///
    pub fn operatorPlusPlus(self: QTextBlock__iterator) QTextBlock__iterator {
        return .{ .ptr = qtc.QTextBlock__iterator_OperatorPlusPlus(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorPlusPlus2` instead
    ///
    pub const OperatorPlusPlus2 = operatorPlusPlus2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock-iterator.html#operator-2b-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock__iterator `
    ///
    /// ` param1: i32 `
    ///
    pub fn operatorPlusPlus2(self: QTextBlock__iterator, param1: i32) QTextBlock__iterator {
        return .{ .ptr = qtc.QTextBlock__iterator_OperatorPlusPlus2(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `operatorMinusMinus` instead
    ///
    pub const OperatorMinusMinus = operatorMinusMinus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock-iterator.html#operator--)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock__iterator `
    ///
    pub fn operatorMinusMinus(self: QTextBlock__iterator) QTextBlock__iterator {
        return .{ .ptr = qtc.QTextBlock__iterator_OperatorMinusMinus(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorMinusMinus2` instead
    ///
    pub const OperatorMinusMinus2 = operatorMinusMinus2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblock-iterator.html#operator--)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlock__iterator `
    ///
    /// ` param1: i32 `
    ///
    pub fn operatorMinusMinus2(self: QTextBlock__iterator, param1: i32) QTextBlock__iterator {
        return .{ .ptr = qtc.QTextBlock__iterator_OperatorMinusMinus2(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextBlock__iterator `
    ///
    pub fn delete(self: QTextBlock__iterator) void {
        qtc.QTextBlock__iterator_Delete(@ptrCast(self.ptr));
    }
};
