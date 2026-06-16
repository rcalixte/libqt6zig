const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QIcon = @import("libqt6").QIcon;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1CustomEmojiIconManager.html)
pub const TextEmoticonsCore__CustomEmojiIconManager = extern struct {
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1CustomEmojiIconManager.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.TextEmoticonsCore__CustomEmojiIconManager,

    pub const _is_TextEmoticonsCore__CustomEmojiIconManager = {};
    pub const _is_QObject = {};

    /// New constructs a new TextEmoticonsCore::CustomEmojiIconManager object.
    ///
    pub fn New() TextEmoticonsCore__CustomEmojiIconManager {
        return .{ .ptr = qtc.TextEmoticonsCore__CustomEmojiIconManager_new() };
    }

    /// New2 constructs a new TextEmoticonsCore::CustomEmojiIconManager object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) TextEmoticonsCore__CustomEmojiIconManager {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.TextEmoticonsCore__CustomEmojiIconManager_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1CustomEmojiIconManager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    /// ` customIdentifier: []const u8 `
    ///
    pub fn GenerateIcon(self: TextEmoticonsCore__CustomEmojiIconManager, customIdentifier: []const u8) QIcon {
        const customIdentifier_str = qtc.libqt_string{
            .len = customIdentifier.len,
            .data = customIdentifier.ptr,
        };
        return .{ .ptr = qtc.TextEmoticonsCore__CustomEmojiIconManager_GenerateIcon(@ptrCast(self.ptr), customIdentifier_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1CustomEmojiIconManager.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__CustomEmojiIconManager, customIdentifier: [*:0]const u8) callconv(.c) QIcon `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn OnGenerateIcon(self: TextEmoticonsCore__CustomEmojiIconManager, callback: *const fn (TextEmoticonsCore__CustomEmojiIconManager, [*:0]const u8) callconv(.c) QIcon) void {
        qtc.TextEmoticonsCore__CustomEmojiIconManager_OnGenerateIcon(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperGenerateIcon` instead
    ///
    pub const QBaseGenerateIcon = SuperGenerateIcon;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1CustomEmojiIconManager.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    /// ` customIdentifier: []const u8 `
    ///
    pub fn SuperGenerateIcon(self: TextEmoticonsCore__CustomEmojiIconManager, customIdentifier: []const u8) QIcon {
        const customIdentifier_str = qtc.libqt_string{
            .len = customIdentifier.len,
            .data = customIdentifier.ptr,
        };
        return .{ .ptr = qtc.TextEmoticonsCore__CustomEmojiIconManager_SuperGenerateIcon(@ptrCast(self.ptr), customIdentifier_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1CustomEmojiIconManager.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` customIdentifier: []const u8 `
    ///
    pub fn FileName(self: TextEmoticonsCore__CustomEmojiIconManager, allocator: std.mem.Allocator, customIdentifier: []const u8) []const u8 {
        const customIdentifier_str = qtc.libqt_string{
            .len = customIdentifier.len,
            .data = customIdentifier.ptr,
        };
        var _str = qtc.TextEmoticonsCore__CustomEmojiIconManager_FileName(@ptrCast(self.ptr), customIdentifier_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textemoticonscore__customemojiiconmanager.FileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1CustomEmojiIconManager.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__CustomEmojiIconManager, customIdentifier: [*:0]const u8) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnFileName(self: TextEmoticonsCore__CustomEmojiIconManager, callback: *const fn (TextEmoticonsCore__CustomEmojiIconManager, [*:0]const u8) callconv(.c) [*:0]const u8) void {
        qtc.TextEmoticonsCore__CustomEmojiIconManager_OnFileName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperFileName` instead
    ///
    pub const QBaseFileName = SuperFileName;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1CustomEmojiIconManager.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` customIdentifier: []const u8 `
    ///
    pub fn SuperFileName(self: TextEmoticonsCore__CustomEmojiIconManager, allocator: std.mem.Allocator, customIdentifier: []const u8) []const u8 {
        const customIdentifier_str = qtc.libqt_string{
            .len = customIdentifier.len,
            .data = customIdentifier.ptr,
        };
        var _str = qtc.TextEmoticonsCore__CustomEmojiIconManager_SuperFileName(@ptrCast(self.ptr), customIdentifier_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textemoticonscore__customemojiiconmanager.FileName: Memory allocation failed");
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
    pub fn Tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textemoticonscore__customemojiiconmanager.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: TextEmoticonsCore__CustomEmojiIconManager, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textemoticonscore__customemojiiconmanager.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: TextEmoticonsCore__CustomEmojiIconManager, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    pub fn IsWidgetType(self: TextEmoticonsCore__CustomEmojiIconManager) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    pub fn IsWindowType(self: TextEmoticonsCore__CustomEmojiIconManager) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    pub fn IsQuickItemType(self: TextEmoticonsCore__CustomEmojiIconManager) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    pub fn SignalsBlocked(self: TextEmoticonsCore__CustomEmojiIconManager) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: TextEmoticonsCore__CustomEmojiIconManager, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    pub fn Thread(self: TextEmoticonsCore__CustomEmojiIconManager) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: TextEmoticonsCore__CustomEmojiIconManager, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: TextEmoticonsCore__CustomEmojiIconManager, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: TextEmoticonsCore__CustomEmojiIconManager, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: TextEmoticonsCore__CustomEmojiIconManager, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: TextEmoticonsCore__CustomEmojiIconManager, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: TextEmoticonsCore__CustomEmojiIconManager, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("textemoticonscore__customemojiiconmanager.Children: Memory allocation failed");
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
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: TextEmoticonsCore__CustomEmojiIconManager, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: TextEmoticonsCore__CustomEmojiIconManager, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: TextEmoticonsCore__CustomEmojiIconManager, obj: anytype) void {
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
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: TextEmoticonsCore__CustomEmojiIconManager, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    pub fn Disconnect3(self: TextEmoticonsCore__CustomEmojiIconManager) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: TextEmoticonsCore__CustomEmojiIconManager, receiver: anytype) bool {
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
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    pub fn DumpObjectTree(self: TextEmoticonsCore__CustomEmojiIconManager) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    pub fn DumpObjectInfo(self: TextEmoticonsCore__CustomEmojiIconManager) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: TextEmoticonsCore__CustomEmojiIconManager, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: TextEmoticonsCore__CustomEmojiIconManager, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: TextEmoticonsCore__CustomEmojiIconManager, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("textemoticonscore__customemojiiconmanager.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("textemoticonscore__customemojiiconmanager.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    pub fn BindingStorage(self: TextEmoticonsCore__CustomEmojiIconManager) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    pub fn BindingStorage2(self: TextEmoticonsCore__CustomEmojiIconManager) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    pub fn Destroyed(self: TextEmoticonsCore__CustomEmojiIconManager) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__CustomEmojiIconManager) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: TextEmoticonsCore__CustomEmojiIconManager, callback: *const fn (TextEmoticonsCore__CustomEmojiIconManager) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    pub fn Parent(self: TextEmoticonsCore__CustomEmojiIconManager) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: TextEmoticonsCore__CustomEmojiIconManager, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    pub fn DeleteLater(self: TextEmoticonsCore__CustomEmojiIconManager) void {
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textemoticonscore__customemojiiconmanager.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textemoticonscore__customemojiiconmanager.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: TextEmoticonsCore__CustomEmojiIconManager, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: TextEmoticonsCore__CustomEmojiIconManager, time: i64, timerType: i32) i32 {
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
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: TextEmoticonsCore__CustomEmojiIconManager, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: TextEmoticonsCore__CustomEmojiIconManager, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: TextEmoticonsCore__CustomEmojiIconManager, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: TextEmoticonsCore__CustomEmojiIconManager, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: TextEmoticonsCore__CustomEmojiIconManager, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: TextEmoticonsCore__CustomEmojiIconManager, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__CustomEmojiIconManager, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: TextEmoticonsCore__CustomEmojiIconManager, callback: *const fn (TextEmoticonsCore__CustomEmojiIconManager, QObject) callconv(.c) void) void {
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
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    pub fn MetaObject(self: TextEmoticonsCore__CustomEmojiIconManager) QMetaObject {
        return .{ .ptr = qtc.TextEmoticonsCore__CustomEmojiIconManager_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    pub fn SuperMetaObject(self: TextEmoticonsCore__CustomEmojiIconManager) QMetaObject {
        return .{ .ptr = qtc.TextEmoticonsCore__CustomEmojiIconManager_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager`
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: TextEmoticonsCore__CustomEmojiIconManager, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.TextEmoticonsCore__CustomEmojiIconManager_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#qt_metacast)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: TextEmoticonsCore__CustomEmojiIconManager, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.TextEmoticonsCore__CustomEmojiIconManager_Metacast(@ptrCast(self.ptr), param1_Cstring);
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
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: TextEmoticonsCore__CustomEmojiIconManager, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.TextEmoticonsCore__CustomEmojiIconManager_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#qt_metacast)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__CustomEmojiIconManager, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: TextEmoticonsCore__CustomEmojiIconManager, callback: *const fn (TextEmoticonsCore__CustomEmojiIconManager, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.TextEmoticonsCore__CustomEmojiIconManager_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#qt_metacall)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: TextEmoticonsCore__CustomEmojiIconManager, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.TextEmoticonsCore__CustomEmojiIconManager_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: TextEmoticonsCore__CustomEmojiIconManager, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.TextEmoticonsCore__CustomEmojiIconManager_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#qt_metacall)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__CustomEmojiIconManager, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: TextEmoticonsCore__CustomEmojiIconManager, callback: *const fn (TextEmoticonsCore__CustomEmojiIconManager, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.TextEmoticonsCore__CustomEmojiIconManager_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: TextEmoticonsCore__CustomEmojiIconManager, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.TextEmoticonsCore__CustomEmojiIconManager_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: TextEmoticonsCore__CustomEmojiIconManager, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.TextEmoticonsCore__CustomEmojiIconManager_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__CustomEmojiIconManager, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: TextEmoticonsCore__CustomEmojiIconManager, callback: *const fn (TextEmoticonsCore__CustomEmojiIconManager, QEvent) callconv(.c) bool) void {
        qtc.TextEmoticonsCore__CustomEmojiIconManager_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: TextEmoticonsCore__CustomEmojiIconManager, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.TextEmoticonsCore__CustomEmojiIconManager_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: TextEmoticonsCore__CustomEmojiIconManager, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.TextEmoticonsCore__CustomEmojiIconManager_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__CustomEmojiIconManager, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: TextEmoticonsCore__CustomEmojiIconManager, callback: *const fn (TextEmoticonsCore__CustomEmojiIconManager, QObject, QEvent) callconv(.c) bool) void {
        qtc.TextEmoticonsCore__CustomEmojiIconManager_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: TextEmoticonsCore__CustomEmojiIconManager, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.TextEmoticonsCore__CustomEmojiIconManager_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: TextEmoticonsCore__CustomEmojiIconManager, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.TextEmoticonsCore__CustomEmojiIconManager_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__CustomEmojiIconManager, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: TextEmoticonsCore__CustomEmojiIconManager, callback: *const fn (TextEmoticonsCore__CustomEmojiIconManager, QTimerEvent) callconv(.c) void) void {
        qtc.TextEmoticonsCore__CustomEmojiIconManager_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: TextEmoticonsCore__CustomEmojiIconManager, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.TextEmoticonsCore__CustomEmojiIconManager_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: TextEmoticonsCore__CustomEmojiIconManager, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.TextEmoticonsCore__CustomEmojiIconManager_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__CustomEmojiIconManager, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: TextEmoticonsCore__CustomEmojiIconManager, callback: *const fn (TextEmoticonsCore__CustomEmojiIconManager, QChildEvent) callconv(.c) void) void {
        qtc.TextEmoticonsCore__CustomEmojiIconManager_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: TextEmoticonsCore__CustomEmojiIconManager, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.TextEmoticonsCore__CustomEmojiIconManager_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: TextEmoticonsCore__CustomEmojiIconManager, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.TextEmoticonsCore__CustomEmojiIconManager_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__CustomEmojiIconManager, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: TextEmoticonsCore__CustomEmojiIconManager, callback: *const fn (TextEmoticonsCore__CustomEmojiIconManager, QEvent) callconv(.c) void) void {
        qtc.TextEmoticonsCore__CustomEmojiIconManager_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: TextEmoticonsCore__CustomEmojiIconManager, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextEmoticonsCore__CustomEmojiIconManager_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: TextEmoticonsCore__CustomEmojiIconManager, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextEmoticonsCore__CustomEmojiIconManager_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__CustomEmojiIconManager, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: TextEmoticonsCore__CustomEmojiIconManager, callback: *const fn (TextEmoticonsCore__CustomEmojiIconManager, QMetaMethod) callconv(.c) void) void {
        qtc.TextEmoticonsCore__CustomEmojiIconManager_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: TextEmoticonsCore__CustomEmojiIconManager, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextEmoticonsCore__CustomEmojiIconManager_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: TextEmoticonsCore__CustomEmojiIconManager, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextEmoticonsCore__CustomEmojiIconManager_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__CustomEmojiIconManager, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: TextEmoticonsCore__CustomEmojiIconManager, callback: *const fn (TextEmoticonsCore__CustomEmojiIconManager, QMetaMethod) callconv(.c) void) void {
        qtc.TextEmoticonsCore__CustomEmojiIconManager_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    pub fn Sender(self: TextEmoticonsCore__CustomEmojiIconManager) QObject {
        return .{ .ptr = qtc.TextEmoticonsCore__CustomEmojiIconManager_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    pub fn SuperSender(self: TextEmoticonsCore__CustomEmojiIconManager) QObject {
        return .{ .ptr = qtc.TextEmoticonsCore__CustomEmojiIconManager_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: TextEmoticonsCore__CustomEmojiIconManager, callback: *const fn () callconv(.c) QObject) void {
        qtc.TextEmoticonsCore__CustomEmojiIconManager_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    pub fn SenderSignalIndex(self: TextEmoticonsCore__CustomEmojiIconManager) i32 {
        return qtc.TextEmoticonsCore__CustomEmojiIconManager_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    pub fn SuperSenderSignalIndex(self: TextEmoticonsCore__CustomEmojiIconManager) i32 {
        return qtc.TextEmoticonsCore__CustomEmojiIconManager_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: TextEmoticonsCore__CustomEmojiIconManager, callback: *const fn () callconv(.c) i32) void {
        qtc.TextEmoticonsCore__CustomEmojiIconManager_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: TextEmoticonsCore__CustomEmojiIconManager, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.TextEmoticonsCore__CustomEmojiIconManager_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: TextEmoticonsCore__CustomEmojiIconManager, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.TextEmoticonsCore__CustomEmojiIconManager_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__CustomEmojiIconManager, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: TextEmoticonsCore__CustomEmojiIconManager, callback: *const fn (TextEmoticonsCore__CustomEmojiIconManager, [*:0]const u8) callconv(.c) i32) void {
        qtc.TextEmoticonsCore__CustomEmojiIconManager_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: TextEmoticonsCore__CustomEmojiIconManager, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.TextEmoticonsCore__CustomEmojiIconManager_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: TextEmoticonsCore__CustomEmojiIconManager, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.TextEmoticonsCore__CustomEmojiIconManager_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__CustomEmojiIconManager, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: TextEmoticonsCore__CustomEmojiIconManager, callback: *const fn (TextEmoticonsCore__CustomEmojiIconManager, QMetaMethod) callconv(.c) bool) void {
        qtc.TextEmoticonsCore__CustomEmojiIconManager_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__CustomEmojiIconManager, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: TextEmoticonsCore__CustomEmojiIconManager, callback: *const fn (TextEmoticonsCore__CustomEmojiIconManager, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1CustomEmojiIconManager.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    pub fn Delete(self: TextEmoticonsCore__CustomEmojiIconManager) void {
        qtc.TextEmoticonsCore__CustomEmojiIconManager_Delete(@ptrCast(self.ptr));
    }
};
