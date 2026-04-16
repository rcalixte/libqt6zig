const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KSyntaxHighlighting__Repository = @import("libqt6").KSyntaxHighlighting__Repository;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
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

/// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definitiondownloader.html)
pub const KSyntaxHighlighting__DefinitionDownloader = extern struct {
    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definitiondownloader.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KSyntaxHighlighting__DefinitionDownloader,

    pub const _is_KSyntaxHighlighting__DefinitionDownloader = {};
    pub const _is_QObject = {};

    /// New constructs a new KSyntaxHighlighting::DefinitionDownloader object.
    ///
    /// ## Parameter(s):
    ///
    /// ` repo: KSyntaxHighlighting__Repository `
    ///
    pub fn New(repo: anytype) KSyntaxHighlighting__DefinitionDownloader {
        comptime _ = @TypeOf(repo)._is_KSyntaxHighlighting__Repository;
        return .{ .ptr = qtc.KSyntaxHighlighting__DefinitionDownloader_new(@ptrCast(repo.ptr)) };
    }

    /// New2 constructs a new KSyntaxHighlighting::DefinitionDownloader object.
    ///
    /// ## Parameter(s):
    ///
    /// ` repo: KSyntaxHighlighting__Repository `
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(repo: anytype, parent: anytype) KSyntaxHighlighting__DefinitionDownloader {
        comptime _ = @TypeOf(repo)._is_KSyntaxHighlighting__Repository;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KSyntaxHighlighting__DefinitionDownloader_new2(@ptrCast(repo.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    pub fn MetaObject(self: KSyntaxHighlighting__DefinitionDownloader) QMetaObject {
        return .{ .ptr = qtc.KSyntaxHighlighting__DefinitionDownloader_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: KSyntaxHighlighting__DefinitionDownloader, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KSyntaxHighlighting__DefinitionDownloader_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    pub fn SuperMetaObject(self: KSyntaxHighlighting__DefinitionDownloader) QMetaObject {
        return .{ .ptr = qtc.KSyntaxHighlighting__DefinitionDownloader_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KSyntaxHighlighting__DefinitionDownloader, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KSyntaxHighlighting__DefinitionDownloader_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__DefinitionDownloader, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KSyntaxHighlighting__DefinitionDownloader, callback: *const fn (KSyntaxHighlighting__DefinitionDownloader, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KSyntaxHighlighting__DefinitionDownloader_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KSyntaxHighlighting__DefinitionDownloader, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KSyntaxHighlighting__DefinitionDownloader_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KSyntaxHighlighting__DefinitionDownloader, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KSyntaxHighlighting__DefinitionDownloader_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__DefinitionDownloader, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KSyntaxHighlighting__DefinitionDownloader, callback: *const fn (KSyntaxHighlighting__DefinitionDownloader, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KSyntaxHighlighting__DefinitionDownloader_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: KSyntaxHighlighting__DefinitionDownloader, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KSyntaxHighlighting__DefinitionDownloader_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksyntaxhighlighting__definitiondownloader.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definitiondownloader.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    pub fn Start(self: KSyntaxHighlighting__DefinitionDownloader) void {
        qtc.KSyntaxHighlighting__DefinitionDownloader_Start(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definitiondownloader.html#informationMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    /// ` msg: []const u8 `
    ///
    pub fn InformationMessage(self: KSyntaxHighlighting__DefinitionDownloader, msg: []const u8) void {
        const msg_str = qtc.libqt_string{
            .len = msg.len,
            .data = msg.ptr,
        };
        qtc.KSyntaxHighlighting__DefinitionDownloader_InformationMessage(@ptrCast(self.ptr), msg_str);
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definitiondownloader.html#informationMessage)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__DefinitionDownloader, msg: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnInformationMessage(self: KSyntaxHighlighting__DefinitionDownloader, callback: *const fn (KSyntaxHighlighting__DefinitionDownloader, [*:0]const u8) callconv(.c) void) void {
        qtc.KSyntaxHighlighting__DefinitionDownloader_Connect_InformationMessage(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definitiondownloader.html#done)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    pub fn Done(self: KSyntaxHighlighting__DefinitionDownloader) void {
        qtc.KSyntaxHighlighting__DefinitionDownloader_Done(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definitiondownloader.html#done)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__DefinitionDownloader) callconv(.c) void `
    ///
    pub fn OnDone(self: KSyntaxHighlighting__DefinitionDownloader, callback: *const fn (KSyntaxHighlighting__DefinitionDownloader) callconv(.c) void) void {
        qtc.KSyntaxHighlighting__DefinitionDownloader_Connect_Done(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksyntaxhighlighting__definitiondownloader.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksyntaxhighlighting__definitiondownloader.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KSyntaxHighlighting__DefinitionDownloader, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksyntaxhighlighting__definitiondownloader.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KSyntaxHighlighting__DefinitionDownloader, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    pub fn IsWidgetType(self: KSyntaxHighlighting__DefinitionDownloader) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    pub fn IsWindowType(self: KSyntaxHighlighting__DefinitionDownloader) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    pub fn IsQuickItemType(self: KSyntaxHighlighting__DefinitionDownloader) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    pub fn SignalsBlocked(self: KSyntaxHighlighting__DefinitionDownloader) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KSyntaxHighlighting__DefinitionDownloader, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    pub fn Thread(self: KSyntaxHighlighting__DefinitionDownloader) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KSyntaxHighlighting__DefinitionDownloader, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KSyntaxHighlighting__DefinitionDownloader, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KSyntaxHighlighting__DefinitionDownloader, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KSyntaxHighlighting__DefinitionDownloader, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KSyntaxHighlighting__DefinitionDownloader, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KSyntaxHighlighting__DefinitionDownloader, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("ksyntaxhighlighting__definitiondownloader.Children: Memory allocation failed");
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
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KSyntaxHighlighting__DefinitionDownloader, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KSyntaxHighlighting__DefinitionDownloader, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KSyntaxHighlighting__DefinitionDownloader, obj: anytype) void {
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
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KSyntaxHighlighting__DefinitionDownloader, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    pub fn Disconnect3(self: KSyntaxHighlighting__DefinitionDownloader) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KSyntaxHighlighting__DefinitionDownloader, receiver: anytype) bool {
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
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    pub fn DumpObjectTree(self: KSyntaxHighlighting__DefinitionDownloader) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    pub fn DumpObjectInfo(self: KSyntaxHighlighting__DefinitionDownloader) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KSyntaxHighlighting__DefinitionDownloader, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KSyntaxHighlighting__DefinitionDownloader, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KSyntaxHighlighting__DefinitionDownloader, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("ksyntaxhighlighting__definitiondownloader.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("ksyntaxhighlighting__definitiondownloader.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    pub fn BindingStorage(self: KSyntaxHighlighting__DefinitionDownloader) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    pub fn BindingStorage2(self: KSyntaxHighlighting__DefinitionDownloader) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    pub fn Destroyed(self: KSyntaxHighlighting__DefinitionDownloader) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__DefinitionDownloader) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KSyntaxHighlighting__DefinitionDownloader, callback: *const fn (KSyntaxHighlighting__DefinitionDownloader) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    pub fn Parent(self: KSyntaxHighlighting__DefinitionDownloader) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KSyntaxHighlighting__DefinitionDownloader, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    pub fn DeleteLater(self: KSyntaxHighlighting__DefinitionDownloader) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KSyntaxHighlighting__DefinitionDownloader, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KSyntaxHighlighting__DefinitionDownloader, time: i64, timerType: i32) i32 {
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
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KSyntaxHighlighting__DefinitionDownloader, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KSyntaxHighlighting__DefinitionDownloader, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KSyntaxHighlighting__DefinitionDownloader, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KSyntaxHighlighting__DefinitionDownloader, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KSyntaxHighlighting__DefinitionDownloader, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KSyntaxHighlighting__DefinitionDownloader, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__DefinitionDownloader, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KSyntaxHighlighting__DefinitionDownloader, callback: *const fn (KSyntaxHighlighting__DefinitionDownloader, QObject) callconv(.c) void) void {
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
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KSyntaxHighlighting__DefinitionDownloader, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KSyntaxHighlighting__DefinitionDownloader_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KSyntaxHighlighting__DefinitionDownloader, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KSyntaxHighlighting__DefinitionDownloader_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader`
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__DefinitionDownloader, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: KSyntaxHighlighting__DefinitionDownloader, callback: *const fn (KSyntaxHighlighting__DefinitionDownloader, QEvent) callconv(.c) bool) void {
        qtc.KSyntaxHighlighting__DefinitionDownloader_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KSyntaxHighlighting__DefinitionDownloader, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KSyntaxHighlighting__DefinitionDownloader_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KSyntaxHighlighting__DefinitionDownloader, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KSyntaxHighlighting__DefinitionDownloader_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader`
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__DefinitionDownloader, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: KSyntaxHighlighting__DefinitionDownloader, callback: *const fn (KSyntaxHighlighting__DefinitionDownloader, QObject, QEvent) callconv(.c) bool) void {
        qtc.KSyntaxHighlighting__DefinitionDownloader_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KSyntaxHighlighting__DefinitionDownloader, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KSyntaxHighlighting__DefinitionDownloader_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KSyntaxHighlighting__DefinitionDownloader, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KSyntaxHighlighting__DefinitionDownloader_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader`
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__DefinitionDownloader, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: KSyntaxHighlighting__DefinitionDownloader, callback: *const fn (KSyntaxHighlighting__DefinitionDownloader, QTimerEvent) callconv(.c) void) void {
        qtc.KSyntaxHighlighting__DefinitionDownloader_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KSyntaxHighlighting__DefinitionDownloader, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KSyntaxHighlighting__DefinitionDownloader_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KSyntaxHighlighting__DefinitionDownloader, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KSyntaxHighlighting__DefinitionDownloader_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader`
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__DefinitionDownloader, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: KSyntaxHighlighting__DefinitionDownloader, callback: *const fn (KSyntaxHighlighting__DefinitionDownloader, QChildEvent) callconv(.c) void) void {
        qtc.KSyntaxHighlighting__DefinitionDownloader_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KSyntaxHighlighting__DefinitionDownloader, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KSyntaxHighlighting__DefinitionDownloader_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KSyntaxHighlighting__DefinitionDownloader, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KSyntaxHighlighting__DefinitionDownloader_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader`
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__DefinitionDownloader, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: KSyntaxHighlighting__DefinitionDownloader, callback: *const fn (KSyntaxHighlighting__DefinitionDownloader, QEvent) callconv(.c) void) void {
        qtc.KSyntaxHighlighting__DefinitionDownloader_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: KSyntaxHighlighting__DefinitionDownloader, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KSyntaxHighlighting__DefinitionDownloader_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KSyntaxHighlighting__DefinitionDownloader, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KSyntaxHighlighting__DefinitionDownloader_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader`
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__DefinitionDownloader, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: KSyntaxHighlighting__DefinitionDownloader, callback: *const fn (KSyntaxHighlighting__DefinitionDownloader, QMetaMethod) callconv(.c) void) void {
        qtc.KSyntaxHighlighting__DefinitionDownloader_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: KSyntaxHighlighting__DefinitionDownloader, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KSyntaxHighlighting__DefinitionDownloader_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KSyntaxHighlighting__DefinitionDownloader, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KSyntaxHighlighting__DefinitionDownloader_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader`
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__DefinitionDownloader, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: KSyntaxHighlighting__DefinitionDownloader, callback: *const fn (KSyntaxHighlighting__DefinitionDownloader, QMetaMethod) callconv(.c) void) void {
        qtc.KSyntaxHighlighting__DefinitionDownloader_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    pub fn Sender(self: KSyntaxHighlighting__DefinitionDownloader) QObject {
        return .{ .ptr = qtc.KSyntaxHighlighting__DefinitionDownloader_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    pub fn SuperSender(self: KSyntaxHighlighting__DefinitionDownloader) QObject {
        return .{ .ptr = qtc.KSyntaxHighlighting__DefinitionDownloader_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: KSyntaxHighlighting__DefinitionDownloader, callback: *const fn () callconv(.c) QObject) void {
        qtc.KSyntaxHighlighting__DefinitionDownloader_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    pub fn SenderSignalIndex(self: KSyntaxHighlighting__DefinitionDownloader) i32 {
        return qtc.KSyntaxHighlighting__DefinitionDownloader_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    pub fn SuperSenderSignalIndex(self: KSyntaxHighlighting__DefinitionDownloader) i32 {
        return qtc.KSyntaxHighlighting__DefinitionDownloader_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: KSyntaxHighlighting__DefinitionDownloader, callback: *const fn () callconv(.c) i32) void {
        qtc.KSyntaxHighlighting__DefinitionDownloader_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: KSyntaxHighlighting__DefinitionDownloader, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KSyntaxHighlighting__DefinitionDownloader_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KSyntaxHighlighting__DefinitionDownloader, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KSyntaxHighlighting__DefinitionDownloader_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader`
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__DefinitionDownloader, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: KSyntaxHighlighting__DefinitionDownloader, callback: *const fn (KSyntaxHighlighting__DefinitionDownloader, [*:0]const u8) callconv(.c) i32) void {
        qtc.KSyntaxHighlighting__DefinitionDownloader_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: KSyntaxHighlighting__DefinitionDownloader, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KSyntaxHighlighting__DefinitionDownloader_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KSyntaxHighlighting__DefinitionDownloader, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KSyntaxHighlighting__DefinitionDownloader_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader`
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__DefinitionDownloader, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: KSyntaxHighlighting__DefinitionDownloader, callback: *const fn (KSyntaxHighlighting__DefinitionDownloader, QMetaMethod) callconv(.c) bool) void {
        qtc.KSyntaxHighlighting__DefinitionDownloader_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    /// ` callback: *const fn (self: KSyntaxHighlighting__DefinitionDownloader, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KSyntaxHighlighting__DefinitionDownloader, callback: *const fn (KSyntaxHighlighting__DefinitionDownloader, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KSyntaxHighlighting__DefinitionDownloader `
    ///
    pub fn Delete(self: KSyntaxHighlighting__DefinitionDownloader) void {
        qtc.KSyntaxHighlighting__DefinitionDownloader_Delete(@ptrCast(self.ptr));
    }
};
