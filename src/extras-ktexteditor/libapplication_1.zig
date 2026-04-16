const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KTextEditor__Document = @import("libqt6").KTextEditor__Document;
const KTextEditor__MainWindow = @import("libqt6").KTextEditor__MainWindow;
const KTextEditor__Plugin = @import("libqt6").KTextEditor__Plugin;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/ktexteditor-application.html)
pub const KTextEditor__Application = extern struct {
    /// ### [Upstream resources](https://api.kde.org/ktexteditor-application.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KTextEditor__Application,

    pub const _is_KTextEditor__Application = {};
    pub const _is_QObject = {};

    /// New constructs a new KTextEditor::Application object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New(parent: anytype) KTextEditor__Application {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KTextEditor__Application_new(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Application `
    ///
    pub fn MetaObject(self: KTextEditor__Application) QMetaObject {
        return .{ .ptr = qtc.KTextEditor__Application_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Application `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: KTextEditor__Application, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KTextEditor__Application_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KTextEditor__Application `
    ///
    pub fn SuperMetaObject(self: KTextEditor__Application) QMetaObject {
        return .{ .ptr = qtc.KTextEditor__Application_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Application `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KTextEditor__Application, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KTextEditor__Application_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Application `
    ///
    /// ` callback: *const fn (self: KTextEditor__Application, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KTextEditor__Application, callback: *const fn (KTextEditor__Application, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KTextEditor__Application_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Application `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KTextEditor__Application, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KTextEditor__Application_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Application `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KTextEditor__Application, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KTextEditor__Application_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Application `
    ///
    /// ` callback: *const fn (self: KTextEditor__Application, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KTextEditor__Application, callback: *const fn (KTextEditor__Application, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KTextEditor__Application_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Application `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: KTextEditor__Application, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KTextEditor__Application_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__application.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-application.html#quit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Application `
    ///
    pub fn Quit(self: KTextEditor__Application) bool {
        return qtc.KTextEditor__Application_Quit(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-application.html#mainWindows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Application `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MainWindows(self: KTextEditor__Application, allocator: std.mem.Allocator) []KTextEditor__MainWindow {
        const _arr: qtc.libqt_list = qtc.KTextEditor__Application_MainWindows(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KTextEditor__MainWindow, _arr.len) catch @panic("ktexteditor__application.MainWindows: Memory allocation failed");
        const _data: [*]QtC.KTextEditor__MainWindow = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-application.html#activeMainWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Application `
    ///
    pub fn ActiveMainWindow(self: KTextEditor__Application) KTextEditor__MainWindow {
        return .{ .ptr = qtc.KTextEditor__Application_ActiveMainWindow(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-application.html#documents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Application `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Documents(self: KTextEditor__Application, allocator: std.mem.Allocator) []KTextEditor__Document {
        const _arr: qtc.libqt_list = qtc.KTextEditor__Application_Documents(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KTextEditor__Document, _arr.len) catch @panic("ktexteditor__application.Documents: Memory allocation failed");
        const _data: [*]QtC.KTextEditor__Document = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-application.html#findUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Application `
    ///
    /// ` url: QUrl `
    ///
    pub fn FindUrl(self: KTextEditor__Application, url: anytype) KTextEditor__Document {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KTextEditor__Application_FindUrl(@ptrCast(self.ptr), @ptrCast(url.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-application.html#openUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Application `
    ///
    /// ` url: QUrl `
    ///
    pub fn OpenUrl(self: KTextEditor__Application, url: anytype) KTextEditor__Document {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KTextEditor__Application_OpenUrl(@ptrCast(self.ptr), @ptrCast(url.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-application.html#closeDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Application `
    ///
    /// ` document: KTextEditor__Document `
    ///
    pub fn CloseDocument(self: KTextEditor__Application, document: anytype) bool {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        return qtc.KTextEditor__Application_CloseDocument(@ptrCast(self.ptr), @ptrCast(document.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-application.html#closeDocuments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Application `
    ///
    /// ` documents: []KTextEditor__Document `
    ///
    pub fn CloseDocuments(self: KTextEditor__Application, documents: []KTextEditor__Document) bool {
        const documents_list = qtc.libqt_list{
            .len = documents.len,
            .data = @ptrCast(documents.ptr),
        };
        return qtc.KTextEditor__Application_CloseDocuments(@ptrCast(self.ptr), documents_list);
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-application.html#documentCreated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Application `
    ///
    /// ` document: KTextEditor__Document `
    ///
    pub fn DocumentCreated(self: KTextEditor__Application, document: anytype) void {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        qtc.KTextEditor__Application_DocumentCreated(@ptrCast(self.ptr), @ptrCast(document.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-application.html#documentCreated)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Application `
    ///
    /// ` callback: *const fn (self: KTextEditor__Application, document: KTextEditor__Document) callconv(.c) void `
    ///
    pub fn OnDocumentCreated(self: KTextEditor__Application, callback: *const fn (KTextEditor__Application, KTextEditor__Document) callconv(.c) void) void {
        qtc.KTextEditor__Application_Connect_DocumentCreated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-application.html#documentWillBeDeleted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Application `
    ///
    /// ` document: KTextEditor__Document `
    ///
    pub fn DocumentWillBeDeleted(self: KTextEditor__Application, document: anytype) void {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        qtc.KTextEditor__Application_DocumentWillBeDeleted(@ptrCast(self.ptr), @ptrCast(document.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-application.html#documentWillBeDeleted)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Application `
    ///
    /// ` callback: *const fn (self: KTextEditor__Application, document: KTextEditor__Document) callconv(.c) void `
    ///
    pub fn OnDocumentWillBeDeleted(self: KTextEditor__Application, callback: *const fn (KTextEditor__Application, KTextEditor__Document) callconv(.c) void) void {
        qtc.KTextEditor__Application_Connect_DocumentWillBeDeleted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-application.html#documentDeleted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Application `
    ///
    /// ` document: KTextEditor__Document `
    ///
    pub fn DocumentDeleted(self: KTextEditor__Application, document: anytype) void {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        qtc.KTextEditor__Application_DocumentDeleted(@ptrCast(self.ptr), @ptrCast(document.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-application.html#documentDeleted)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Application `
    ///
    /// ` callback: *const fn (self: KTextEditor__Application, document: KTextEditor__Document) callconv(.c) void `
    ///
    pub fn OnDocumentDeleted(self: KTextEditor__Application, callback: *const fn (KTextEditor__Application, KTextEditor__Document) callconv(.c) void) void {
        qtc.KTextEditor__Application_Connect_DocumentDeleted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-application.html#plugin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Application `
    ///
    /// ` name: []const u8 `
    ///
    pub fn Plugin(self: KTextEditor__Application, name: []const u8) KTextEditor__Plugin {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KTextEditor__Application_Plugin(@ptrCast(self.ptr), name_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-application.html#pluginCreated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Application `
    ///
    /// ` name: []const u8 `
    ///
    /// ` plugin: KTextEditor__Plugin `
    ///
    pub fn PluginCreated(self: KTextEditor__Application, name: []const u8, plugin: anytype) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(plugin)._is_KTextEditor__Plugin;
        qtc.KTextEditor__Application_PluginCreated(@ptrCast(self.ptr), name_str, @ptrCast(plugin.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-application.html#pluginCreated)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Application `
    ///
    /// ` callback: *const fn (self: KTextEditor__Application, name: [*:0]const u8, plugin: KTextEditor__Plugin) callconv(.c) void `
    ///
    pub fn OnPluginCreated(self: KTextEditor__Application, callback: *const fn (KTextEditor__Application, [*:0]const u8, KTextEditor__Plugin) callconv(.c) void) void {
        qtc.KTextEditor__Application_Connect_PluginCreated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-application.html#pluginDeleted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Application `
    ///
    /// ` name: []const u8 `
    ///
    /// ` plugin: KTextEditor__Plugin `
    ///
    pub fn PluginDeleted(self: KTextEditor__Application, name: []const u8, plugin: anytype) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(plugin)._is_KTextEditor__Plugin;
        qtc.KTextEditor__Application_PluginDeleted(@ptrCast(self.ptr), name_str, @ptrCast(plugin.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-application.html#pluginDeleted)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Application `
    ///
    /// ` callback: *const fn (self: KTextEditor__Application, name: [*:0]const u8, plugin: KTextEditor__Plugin) callconv(.c) void `
    ///
    pub fn OnPluginDeleted(self: KTextEditor__Application, callback: *const fn (KTextEditor__Application, [*:0]const u8, KTextEditor__Plugin) callconv(.c) void) void {
        qtc.KTextEditor__Application_Connect_PluginDeleted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__application.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__application.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-application.html#openUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Application `
    ///
    /// ` url: QUrl `
    ///
    /// ` encoding: []const u8 `
    ///
    pub fn OpenUrl2(self: KTextEditor__Application, url: anytype, encoding: []const u8) KTextEditor__Document {
        comptime _ = @TypeOf(url)._is_QUrl;
        const encoding_str = qtc.libqt_string{
            .len = encoding.len,
            .data = encoding.ptr,
        };
        return .{ .ptr = qtc.KTextEditor__Application_OpenUrl2(@ptrCast(self.ptr), @ptrCast(url.ptr), encoding_str) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Application `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KTextEditor__Application, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__application.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Application `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KTextEditor__Application, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Application `
    ///
    pub fn IsWidgetType(self: KTextEditor__Application) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Application `
    ///
    pub fn IsWindowType(self: KTextEditor__Application) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Application `
    ///
    pub fn IsQuickItemType(self: KTextEditor__Application) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Application `
    ///
    pub fn SignalsBlocked(self: KTextEditor__Application) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Application `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KTextEditor__Application, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Application `
    ///
    pub fn Thread(self: KTextEditor__Application) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Application `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KTextEditor__Application, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Application `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KTextEditor__Application, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Application `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KTextEditor__Application, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Application `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KTextEditor__Application, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Application `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KTextEditor__Application, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Application `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KTextEditor__Application, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("ktexteditor__application.Children: Memory allocation failed");
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
    /// ` self: KTextEditor__Application `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KTextEditor__Application, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Application `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KTextEditor__Application, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Application `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KTextEditor__Application, obj: anytype) void {
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
    /// ` self: KTextEditor__Application `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KTextEditor__Application, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KTextEditor__Application `
    ///
    pub fn Disconnect3(self: KTextEditor__Application) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Application `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KTextEditor__Application, receiver: anytype) bool {
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
    /// ` self: KTextEditor__Application `
    ///
    pub fn DumpObjectTree(self: KTextEditor__Application) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Application `
    ///
    pub fn DumpObjectInfo(self: KTextEditor__Application) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Application `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KTextEditor__Application, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KTextEditor__Application `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KTextEditor__Application, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Application `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KTextEditor__Application, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("ktexteditor__application.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("ktexteditor__application.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KTextEditor__Application `
    ///
    pub fn BindingStorage(self: KTextEditor__Application) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Application `
    ///
    pub fn BindingStorage2(self: KTextEditor__Application) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Application `
    ///
    pub fn Destroyed(self: KTextEditor__Application) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Application `
    ///
    /// ` callback: *const fn (self: KTextEditor__Application) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KTextEditor__Application, callback: *const fn (KTextEditor__Application) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Application `
    ///
    pub fn Parent(self: KTextEditor__Application) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Application `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KTextEditor__Application, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Application `
    ///
    pub fn DeleteLater(self: KTextEditor__Application) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Application `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KTextEditor__Application, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Application `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KTextEditor__Application, time: i64, timerType: i32) i32 {
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
    /// ` self: KTextEditor__Application `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KTextEditor__Application, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KTextEditor__Application `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KTextEditor__Application, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Application `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KTextEditor__Application, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KTextEditor__Application `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KTextEditor__Application, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KTextEditor__Application `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KTextEditor__Application, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KTextEditor__Application `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KTextEditor__Application, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Application `
    ///
    /// ` callback: *const fn (self: KTextEditor__Application, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KTextEditor__Application, callback: *const fn (KTextEditor__Application, QObject) callconv(.c) void) void {
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
    /// ` self: KTextEditor__Application `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KTextEditor__Application, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KTextEditor__Application_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KTextEditor__Application `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KTextEditor__Application, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KTextEditor__Application_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Application`
    ///
    /// ` callback: *const fn (self: KTextEditor__Application, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: KTextEditor__Application, callback: *const fn (KTextEditor__Application, QEvent) callconv(.c) bool) void {
        qtc.KTextEditor__Application_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Application `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KTextEditor__Application, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KTextEditor__Application_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: KTextEditor__Application `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KTextEditor__Application, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KTextEditor__Application_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Application`
    ///
    /// ` callback: *const fn (self: KTextEditor__Application, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: KTextEditor__Application, callback: *const fn (KTextEditor__Application, QObject, QEvent) callconv(.c) bool) void {
        qtc.KTextEditor__Application_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Application `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KTextEditor__Application, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KTextEditor__Application_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KTextEditor__Application `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KTextEditor__Application, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KTextEditor__Application_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Application`
    ///
    /// ` callback: *const fn (self: KTextEditor__Application, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: KTextEditor__Application, callback: *const fn (KTextEditor__Application, QTimerEvent) callconv(.c) void) void {
        qtc.KTextEditor__Application_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Application `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KTextEditor__Application, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KTextEditor__Application_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KTextEditor__Application `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KTextEditor__Application, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KTextEditor__Application_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Application`
    ///
    /// ` callback: *const fn (self: KTextEditor__Application, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: KTextEditor__Application, callback: *const fn (KTextEditor__Application, QChildEvent) callconv(.c) void) void {
        qtc.KTextEditor__Application_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Application `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KTextEditor__Application, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KTextEditor__Application_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KTextEditor__Application `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KTextEditor__Application, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KTextEditor__Application_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Application`
    ///
    /// ` callback: *const fn (self: KTextEditor__Application, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: KTextEditor__Application, callback: *const fn (KTextEditor__Application, QEvent) callconv(.c) void) void {
        qtc.KTextEditor__Application_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Application `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: KTextEditor__Application, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KTextEditor__Application_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KTextEditor__Application `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KTextEditor__Application, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KTextEditor__Application_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Application`
    ///
    /// ` callback: *const fn (self: KTextEditor__Application, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: KTextEditor__Application, callback: *const fn (KTextEditor__Application, QMetaMethod) callconv(.c) void) void {
        qtc.KTextEditor__Application_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Application `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: KTextEditor__Application, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KTextEditor__Application_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KTextEditor__Application `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KTextEditor__Application, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KTextEditor__Application_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Application`
    ///
    /// ` callback: *const fn (self: KTextEditor__Application, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: KTextEditor__Application, callback: *const fn (KTextEditor__Application, QMetaMethod) callconv(.c) void) void {
        qtc.KTextEditor__Application_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Application `
    ///
    pub fn Sender(self: KTextEditor__Application) QObject {
        return .{ .ptr = qtc.KTextEditor__Application_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KTextEditor__Application `
    ///
    pub fn SuperSender(self: KTextEditor__Application) QObject {
        return .{ .ptr = qtc.KTextEditor__Application_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Application`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: KTextEditor__Application, callback: *const fn () callconv(.c) QObject) void {
        qtc.KTextEditor__Application_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Application `
    ///
    pub fn SenderSignalIndex(self: KTextEditor__Application) i32 {
        return qtc.KTextEditor__Application_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KTextEditor__Application `
    ///
    pub fn SuperSenderSignalIndex(self: KTextEditor__Application) i32 {
        return qtc.KTextEditor__Application_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Application`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: KTextEditor__Application, callback: *const fn () callconv(.c) i32) void {
        qtc.KTextEditor__Application_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Application `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: KTextEditor__Application, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KTextEditor__Application_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KTextEditor__Application `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KTextEditor__Application, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KTextEditor__Application_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Application`
    ///
    /// ` callback: *const fn (self: KTextEditor__Application, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: KTextEditor__Application, callback: *const fn (KTextEditor__Application, [*:0]const u8) callconv(.c) i32) void {
        qtc.KTextEditor__Application_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Application `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: KTextEditor__Application, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KTextEditor__Application_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KTextEditor__Application `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KTextEditor__Application, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KTextEditor__Application_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Application`
    ///
    /// ` callback: *const fn (self: KTextEditor__Application, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: KTextEditor__Application, callback: *const fn (KTextEditor__Application, QMetaMethod) callconv(.c) bool) void {
        qtc.KTextEditor__Application_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Application `
    ///
    /// ` callback: *const fn (self: KTextEditor__Application, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KTextEditor__Application, callback: *const fn (KTextEditor__Application, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KTextEditor__Application `
    ///
    pub fn Delete(self: KTextEditor__Application) void {
        qtc.KTextEditor__Application_Delete(@ptrCast(self.ptr));
    }
};
